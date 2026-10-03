# Automatic `.knxprod` export

`export_knxprod.ps1` is the small bridge between this repository's `prod.xml`
and Kaenx Creator 1.9.9. It imports the XML with Kaenx's own model/importer,
runs the same verification and `ExportEts`/`SignOutput` path as the desktop
application, and writes a signed `.knxprod`.

The first run starts Kaenx Creator hidden once to unpack its x86 runtime into
`%TEMP%\.net\Kaenx.Creator`, then publishes the local x86 exporter. Later runs
reuse that generated exporter and are fast.

The normal entry point is one directory above:

```bat
generate_knxprod.bat
generate_knxprod.bat 6_8_buttons_display
generate_knxprod.bat knob D:\out\knob.knxprod
generate_knxprod.bat --all
```

Use `--rebuild-exporter` as the third argument (or second argument for
`--all`) after changing the C# bridge itself. Normal Python generator edits do
not require a rebuild.
