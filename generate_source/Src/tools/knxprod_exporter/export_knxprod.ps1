[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)]
    [string] $XmlPath,

    [Parameter(Mandatory = $true)]
    [string] $OutputPath,

    [string] $KaenxApp = 'D:\Project\KNX\KNX_Create_Product\Kaenx Creator 1.9.9\Kaenx.Creator.exe',

    [switch] $Rebuild
)

$ErrorActionPreference = 'Stop'

$toolDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$project = Join-Path $toolDir 'knxprod_exporter.csproj'
$publishDir = Join-Path $toolDir 'publish\win-x86'
$exporterExe = Join-Path $publishDir 'knxprod_exporter.exe'
$assetsFile = Join-Path $toolDir 'obj\project.assets.json'

function Find-KaenxRuntime {
    param([string] $Root)

    if (-not (Test-Path $Root)) {
        return $null
    }

    $candidates = Get-ChildItem -Path $Root -Directory -ErrorAction SilentlyContinue |
        ForEach-Object { Join-Path $_.FullName 'Kaenx.Creator.dll' } |
        Where-Object { Test-Path $_ } |
        Sort-Object { (Get-Item $_).LastWriteTimeUtc } -Descending

    foreach ($candidate in $candidates) {
        try {
            $file = Get-Item $candidate
            if ($file.VersionInfo.FileVersion -eq '1.9.9.0') {
                return $file.DirectoryName
            }
        }
        catch {
            # A partially extracted folder can disappear while Kaenx starts.
        }
    }

    return $null
}

function Invoke-Dotnet {
    param([string[]] $Arguments)

    & dotnet @Arguments
    if ($LASTEXITCODE -ne 0) {
        throw "dotnet failed with exit code $LASTEXITCODE."
    }
}

if (-not (Test-Path $XmlPath -PathType Leaf)) {
    throw "Input XML does not exist: $XmlPath"
}
if (-not (Test-Path $KaenxApp -PathType Leaf)) {
    throw "Kaenx Creator 1.9.9 was not found: $KaenxApp"
}

$xmlFullPath = (Resolve-Path $XmlPath).Path
$outputFullPath = [IO.Path]::GetFullPath($OutputPath)
$outputFolder = Split-Path -Parent $outputFullPath
New-Item -ItemType Directory -Force -Path $outputFolder | Out-Null

$extractRoot = Join-Path $env:TEMP '.net\Kaenx.Creator'
$kaenxLib = Find-KaenxRuntime $extractRoot
$kaenxProcess = $null

try {
    # Kaenx Creator is a self-contained x86 application. Starting it once is
    # the supported way to unpack its 1.9.9 managed libraries to %TEMP%.
    if (-not $kaenxLib) {
        $kaenxProcess = Start-Process -FilePath $KaenxApp `
            -WorkingDirectory (Split-Path -Parent $KaenxApp) `
            -WindowStyle Hidden -PassThru

        for ($i = 0; $i -lt 60 -and -not $kaenxLib; $i++) {
            Start-Sleep -Milliseconds 500
            $kaenxLib = Find-KaenxRuntime $extractRoot
        }
    }

    if (-not $kaenxLib) {
        throw "Kaenx Creator did not expose its 1.9.9 runtime under $extractRoot"
    }

    $sourceStamp = (Get-Item (Join-Path $toolDir 'Program.cs')).LastWriteTimeUtc
    $projectStamp = (Get-Item $project).LastWriteTimeUtc
    $needsBuild = $Rebuild -or -not (Test-Path $exporterExe -PathType Leaf)
    if (-not $needsBuild) {
        $binaryStamp = (Get-Item $exporterExe).LastWriteTimeUtc
        $needsBuild = $sourceStamp -gt $binaryStamp -or $projectStamp -gt $binaryStamp
    }

    if ($needsBuild) {
        if ($Rebuild -or -not (Test-Path $assetsFile -PathType Leaf)) {
            Invoke-Dotnet @(
                'restore', $project,
                '-r', 'win-x86',
                "-p:KaenxLib=$kaenxLib",
                '--ignore-failed-sources',
                '--nologo'
            )
        }

        Invoke-Dotnet @(
            'publish', $project,
            '-c', 'Release',
            '-r', 'win-x86',
            '--self-contained', 'true',
            "-p:KaenxLib=$kaenxLib",
            '-o', $publishDir,
            '--no-restore',
            '--nologo'
        )
    }

    # The project build copies statically referenced assemblies, while Kaenx
    # also resolves a few UI/resource assemblies dynamically. Sync the full
    # extracted runtime so the standalone exporter behaves like the desktop
    # application. This is a local generated directory and is git-ignored.
    New-Item -ItemType Directory -Force -Path $publishDir | Out-Null
    Copy-Item -Path (Join-Path $kaenxLib '*') -Destination $publishDir -Recurse -Force

    $tempPath = Join-Path $publishDir 'Output\Temp'
    if (Test-Path $tempPath) {
        Remove-Item $tempPath -Recurse -Force
    }

    Write-Host "Exporting $xmlFullPath"
    Write-Host "Kaenx runtime: $kaenxLib"
    & $exporterExe $xmlFullPath $outputFullPath
    if ($LASTEXITCODE -ne 0) {
        throw "knxprod exporter failed with exit code $LASTEXITCODE"
    }

    if (-not (Test-Path $outputFullPath -PathType Leaf)) {
        throw "Exporter returned success but did not create $outputFullPath"
    }

    $result = Get-Item $outputFullPath
    Write-Host ("KNXPROD_OK: {0} ({1:N0} bytes)" -f $result.FullName, $result.Length)
}
finally {
    if ($kaenxProcess -and -not $kaenxProcess.HasExited) {
        Stop-Process -Id $kaenxProcess.Id -Force -ErrorAction SilentlyContinue
    }
}
