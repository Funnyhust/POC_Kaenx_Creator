using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.AddIn;
using System.Threading;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Threading;
using System.Xml;
using Knx.Ets.Common.Types.Enumerations;
using Knx.Ets.Common.Types.Strategies;
using Knx.Ets.Sdk;
using Knx.Ets.Sdk.AddIns.AddInViews;
using Knx.Ets.Sdk.MasterData;
using Knx.Ets.Sdk.Project;
using Knx.Ets.Sdk.UnifiedCatalog;

namespace Knx.ProjectBuilder;

[AddIn("KNX Project Builder", Version = "1.0.0.0", Publisher = "Local development")]
public sealed class ProjectBuilderAddIn : IEts5ClosableAddin, IEts4AddInV2
{
    private const string AppIdValue = "M00FA-A0099";
    private const string BuildButtonId = "BuildDemo";
    private IInitializationContext? _context;
    private int _started;
    private readonly string _logPath = @"D:\Project\KNX\KNX_Create_Product\generate_source\Output_File\ETS_Auto_Demo.log";

    public string AppId => AppIdValue;

    public XmlDocument Configuration => EmptyDocument("Configuration");

    public XmlDocument UserConfiguration => EmptyDocument("UserConfiguration");

    public FrameworkElement GetAddInUI()
    {
        var panel = new StackPanel { Margin = new Thickness(12) };
        panel.Children.Add(new TextBlock
        {
            Text = "KNX Project Builder\nImport products, create topology, map one object per device and export the project.",
            TextWrapping = TextWrapping.Wrap
        });
        return panel;
    }

    public void Initialize(IInitializationContext initializationContext)
    {
        _context = initializationContext;
        Directory.CreateDirectory(Path.GetDirectoryName(_logPath)!);
        Log("App initialized for project: " + initializationContext.Project.Name);

        // ETS must finish loading the project before the object model is changed.
        Application.Current.Dispatcher.BeginInvoke(
            DispatcherPriority.ApplicationIdle,
            new Action(RunBuildOnce));
    }

    public void ToolbarItemClick(string itemIdentifier)
    {
        if (itemIdentifier == BuildButtonId)
            RunBuildOnce();
    }

    public void Ets4SelectionChanged(IEnumerable<DomObject> selectedObjects)
    {
    }

    public FrameworkElement? GetSidebarControl(IEnumerable<object> selectedObjects) => null;

    public FrameworkElement? GetSidebarProperties(IEnumerable<object> selectedObjects) => null;

    public bool OnPanelClosing() => true;

    public void OnProjectClosing(Project closingProject, bool changesSinceProjectOpened)
    {
    }

    public void OnProjectOpened(Project openedProject)
    {
    }

    public bool ShowConfigurationDialog(XmlDocument configuration, XmlDocument userConfiguration)
    {
        return false;
    }

    public void Dispose()
    {
        Log("App disposed");
    }

    private void RunBuildOnce()
    {
        if (Interlocked.Exchange(ref _started, 1) != 0 || _context == null)
            return;

        try
        {
            BuildProject(_context);
        }
        catch (Exception exception)
        {
            Log("ERROR: " + exception);
            _context.DialogService.ShowMessageBox(
                "Project builder failed.\n\n" + exception.Message + "\n\nLog: " + _logPath,
                "KNX Project Builder",
                MessageBoxButton.OK,
                MessageBoxImage.Error,
                ModalScope.Application);
        }
    }

    private static void BuildProject(IInitializationContext context)
    {
        var root = context.Project.Root;
        var project = context.Project;
        var installation = project.DefaultInstallation;
        var productDirectory = @"D:\Project\KNX\KNX_Create_Product\Kaenx Creator 1.9.9";
        var productFiles = new[]
        {
            "Lumi_KnobAluminum_secure_LMS0KK.1LE_V1.0.knxprod",
            "Lumi_Scene4gang_secure_LM4SCK.4GE_V1.0.1.knxprod",
            "Lumi_ShutterCurtainActuator_secure_LM1CK.16RE_V1.0.knxprod",
            "Lumi_SwitchActuator_secure_LM4OK.16RE_V1.0.knxprod",
            "6_8_buttons_display.knxprod"
        };
        var files = productFiles.Select(file => Path.Combine(productDirectory, file)).ToArray();
        if (files.Any(file => !File.Exists(file)))
            throw new FileNotFoundException("One or more KNX product files are missing.", files.FirstOrDefault(file => !File.Exists(file)));

        LogStatic("Importing products: " + string.Join(", ", files));
        var imported = root.ImportProductData(files);
        LogStatic("ImportProductData returned: " + imported);
        if (!imported)
            throw new InvalidOperationException("ETS did not import the product files.");

        var area = installation.Areas.Cast<Area>().FirstOrDefault()
                   ?? installation.Areas.Add("Demo area", 1).First();
        area.Name = "Demo area";

        var medium = root.KnxMasterData.MediumTypes.Cast<MediumType>()
            .FirstOrDefault(item => item.Name.IndexOf("TP", StringComparison.OrdinalIgnoreCase) >= 0)
            ?? root.KnxMasterData.MediumTypes.Cast<MediumType>().First();
        var line = area.Lines.Cast<Line>().FirstOrDefault()
                   ?? area.Lines.Add("Demo TP line", medium).First();
        line.Name = "Demo TP line";

        var building = installation.Buildings.Cast<BuildingPart>()
            .FirstOrDefault(item => item.Name == "KNX API demo building")
            ?? installation.Buildings.Add("KNX API demo building", BuildingPartType.Building).First();
        var floor = building.BuildingParts.Cast<BuildingPart>()
            .FirstOrDefault(item => item.Name == "Ground floor")
            ?? building.BuildingParts.Add("Ground floor", BuildingPartType.Floor).First();
        var room = floor.BuildingParts.Cast<BuildingPart>()
            .FirstOrDefault(item => item.Name == "Living room")
            ?? floor.BuildingParts.Add("Living room", BuildingPartType.Room).First();
        room.CurrentLine = line;

        var catalogItems = root.UnifiedManufacturers
            .Cast<UnifiedManufacturer>()
            .SelectMany(manufacturer => manufacturer.AllCatalogItems.Cast<UnifiedCatalogItem>())
            .ToList();

        var targetNames = new[]
        {
            "Lumi Knob aluminium SE",
            "Lumi Switch/Dimming/Scene, 4 gang SE",
            "Lumi shutter/curtain actuator, 4 relay 16A SE",
            "Lumi Switch actuator, 4 relay 16A SE",
            "Lumi 6/8-button Display"
        };

        var createdDevices = new List<Device>();
        ushort startAddress = 10;
        foreach (var targetName in targetNames)
        {
            var item = catalogItems.FirstOrDefault(c =>
                string.Equals(c.Name, targetName, StringComparison.OrdinalIgnoreCase) ||
                string.Equals(c.ProductName, targetName, StringComparison.OrdinalIgnoreCase));
            if (item == null)
                throw new InvalidOperationException("Imported catalog item not found: " + targetName);

            var devices = installation.AllDevices.Add(
                line,
                item,
                1,
                AddressAllocations.StartWith,
                startAddress);
            var device = devices.First();
            device.Name = targetName;
            device.Description = "Created by ETS SDK Project Builder";
            room.Link(device);
            createdDevices.Add(device);
            startAddress++;
            LogStatic($"Added {targetName} at {device.IndividualAddressString}");
        }

        var mainRange = installation.GroupRanges.Cast<GroupRange>()
            .FirstOrDefault(range => range.Name == "Demo controls")
            ?? installation.GroupRanges.Add("Demo controls", 1).First();
        var middleRange = mainRange.GroupRanges.Cast<GroupRange>()
            .FirstOrDefault(range => range.Name == "Device commands")
            ?? mainRange.GroupRanges.Add("Device commands", 1).First();

        var gaIndex = 1;
        foreach (var device in createdDevices)
        {
            var ga = middleRange.GroupAddresses.Add(
                device.Name + " command",
                1,
                AddressAllocations.StartWith,
                (ushort)gaIndex).First();
            ga.Description = "Created by ETS SDK Project Builder";
            var comObject = device.ActiveComObjectInstanceRefs.Cast<ComObjectInstanceRef>().FirstOrDefault();
            if (comObject != null)
            {
                ga.Link(comObject);
                LogStatic($"Linked {ga.AddressString} to {device.Name} / object {comObject.Number}");
            }
            gaIndex++;
        }

        var output = @"D:\Project\KNX\KNX_Create_Product\generate_source\Output_File\ETS_Auto_Demo.knxproj";
        Directory.CreateDirectory(Path.GetDirectoryName(output)!);
        root.ExportProject(output, true);
        LogStatic("Exported project: " + output);

        context.DialogService.ShowMessageBox(
            "Project created and configured.\n\nDevices: " + createdDevices.Count +
            "\nGroup objects linked: " + createdDevices.Count +
            "\nOutput: " + output +
            "\n\nThe project was not downloaded to a physical KNX bus.",
            "KNX Project Builder",
            MessageBoxButton.OK,
            MessageBoxImage.Information,
            ModalScope.Application);
    }

    private static XmlDocument EmptyDocument(string rootName)
    {
        var document = new XmlDocument();
        document.LoadXml("<" + rootName + " />");
        return document;
    }

    private void Log(string message) => LogStatic(message);

    private static void LogStatic(string message)
    {
        var path = @"D:\Project\KNX\KNX_Create_Product\generate_source\Output_File\ETS_Auto_Demo.log";
        Directory.CreateDirectory(Path.GetDirectoryName(path)!);
        File.AppendAllText(path, DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff") + " " + message + Environment.NewLine);
    }
}
