using System.Collections.ObjectModel;
using System.IO;
using System.Xml.Linq;
using Kaenx.Creator.Classes;
using Kaenx.Creator.Models;

if (args.Length != 2)
{
    Console.Error.WriteLine("Usage: knxprod_exporter <prod.xml> <output.knxprod>");
    return 2;
}

var inputXml = Path.GetFullPath(args[0]);
var outputKnxprod = Path.GetFullPath(args[1]);
var outputFolder = Path.GetDirectoryName(outputKnxprod)!;
// Kaenx Creator's ExportHelper writes its intermediate signed files below the
// application's base directory (the desktop app uses AppDomain.BaseDirectory
// in exactly the same way).  Keep the same location here so SignOutput sees
// the files produced by ExportEts.
var tempFolder = Path.Combine(AppContext.BaseDirectory, "Output", "Temp");
Directory.CreateDirectory(outputFolder);
Directory.CreateDirectory(tempFolder);

try
{
    Helper.LoadBcus();
    Helper.LoadDpts();

    var model = new MainModel { ManufacturerId = 0x035A };
    model.Catalog.Add(new CatalogItem { Name = "Root", IsSection = true });

    var importer = new ImportHelper(inputXml, Helper.BCUs);
    importer.StartXml(model, Helper.DPTs);

    var actions = new ObservableCollection<PublishAction>();
    CheckHelper.CheckThis(model, actions, true);
    var failures = actions.Where(x => x.State == PublishState.Fail).ToList();
    foreach (var failure in failures)
        Console.Error.WriteLine("CHECK_FAIL: " + failure.Text);
    if (failures.Count != 0)
        return 10;

    var headerPath = Path.Combine(outputFolder, "knxprod.h");
    var exporter = new ExportHelper(model, headerPath);
    if (!exporter.ExportEts(actions, false))
        return 11;

    // Kaenx's importer does not retain ParameterCalculations. Restore them
    // before signing, translating parameter-reference IDs by parameter name.
    var sourceDocument = XDocument.Load(inputXml);
    var sourceNs = sourceDocument.Root!.Name.Namespace;
    foreach (var sourceApp in sourceDocument.Descendants(sourceNs + "ApplicationProgram"))
    {
        var calculations = sourceApp.Element(sourceNs + "Static")?.Element(sourceNs + "ParameterCalculations");
        if (calculations == null) continue;
        var sourceParameters = sourceApp.Descendants(sourceNs + "Parameter").ToDictionary(x => (string)x.Attribute("Id")!, x => (string)x.Attribute("Name")!);
        var sourceRefs = sourceApp.Descendants(sourceNs + "ParameterRef").ToDictionary(x => (string)x.Attribute("Id")!, x => sourceParameters[(string)x.Attribute("RefId")!]);
        var matched = false;
        foreach (var file in Directory.GetFiles(tempFolder, "*_A-*.xml", SearchOption.AllDirectories))
        {
            var doc = XDocument.Load(file);
            var ns = doc.Root!.Name.Namespace;
            var app = doc.Descendants(ns + "ApplicationProgram").FirstOrDefault(x => (string?)x.Attribute("ApplicationNumber") == (string?)sourceApp.Attribute("ApplicationNumber"));
            if (app == null) continue;
            var parameters = app.Descendants(ns + "Parameter").ToDictionary(x => (string)x.Attribute("Id")!, x => (string)x.Attribute("Name")!);
            var references = app.Descendants(ns + "ParameterRef").GroupBy(x => parameters[(string)x.Attribute("RefId")!]).ToDictionary(g => g.Key, g => (string)g.First().Attribute("Id")!);
            var copy = new XElement(calculations);
            foreach (var element in copy.DescendantsAndSelf()) element.Name = ns + element.Name.LocalName;
            foreach (var reference in copy.Descendants(ns + "ParameterRefRef"))
                reference.SetAttributeValue("RefId", references[sourceRefs[(string)reference.Attribute("RefId")!]]);
            var index = 0;
            foreach (var calculation in copy.Elements()) calculation.SetAttributeValue("Id", (string)app.Attribute("Id")! + "_PC-" + (++index));
            app.Element(ns + "Static")!.Element(ns + "ParameterCalculations")?.Remove();
            app.Element(ns + "Static")!.Element(ns + "ParameterRefs")!.AddAfterSelf(copy);
            doc.Save(file);
            matched = true;
        }
        if (!matched) throw new InvalidOperationException("Cannot preserve parameter calculations in exported application.");
    }

    await OpenKNX.Toolbox.Sign.SignHelper.CheckMaster(tempFolder, model.Application.NamespaceVersion);
    await exporter.SignOutput(tempFolder, outputKnxprod, model.Application.NamespaceVersion);

    Console.WriteLine("KNXPROD_OK");
    Console.WriteLine($"Output={outputKnxprod}");
    Console.WriteLine($"Parameters={model.Application.Parameters.Count}");
    Console.WriteLine($"ComObjects={model.Application.ComObjects.Count}");
    return 0;
}
catch (Exception ex)
{
    Console.Error.WriteLine(ex.ToString());
    return 12;
}
