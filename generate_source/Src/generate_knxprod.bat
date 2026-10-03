@echo off
setlocal EnableExtensions

rem One-command build: Python generator -> prod.xml -> signed .knxprod.
rem Usage:
rem   generate_knxprod.bat [device] [output.knxprod] [--rebuild-exporter]
rem   generate_knxprod.bat --all [--rebuild-exporter]

set "SRC_DIR=%~dp0"
set "DEVICE=%~1"
if not defined DEVICE set "DEVICE=6_8_buttons_display"
set "REBUILD="
if /I "%DEVICE%"=="--rebuild-exporter" (
    set "DEVICE=6_8_buttons_display"
    set "REBUILD=-Rebuild"
)

if /I "%~3"=="--rebuild-exporter" set "REBUILD=-Rebuild"
if /I "%~2"=="--rebuild-exporter" set "REBUILD=-Rebuild"

pushd "%SRC_DIR%"
if errorlevel 1 (
    echo ERROR: Cannot enter %SRC_DIR%
    exit /b 1
)

if /I "%DEVICE%"=="--all" goto :all

set "OUTPUT=%~2"
if not defined OUTPUT set "OUTPUT=D:\Project\KNX\KNX_Create_Product\Kaenx Creator 1.9.9\%DEVICE%.knxprod"
if /I "%OUTPUT%"=="--rebuild-exporter" set "OUTPUT=D:\Project\KNX\KNX_Create_Product\Kaenx Creator 1.9.9\%DEVICE%.knxprod"

echo [1/2] Generating %DEVICE% prod.xml and validating it...
python generate.py --device "%DEVICE%" --output Generated --validate
if errorlevel 1 (
    echo ERROR: XML generation/validation failed.
    popd
    exit /b 1
)

echo [2/2] Importing through Kaenx Creator 1.9.9 and exporting .knxprod...
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%SRC_DIR%tools\knxprod_exporter\export_knxprod.ps1" ^
    -XmlPath "%SRC_DIR%Generated\%DEVICE%\prod.xml" ^
    -OutputPath "%OUTPUT%" %REBUILD%
if errorlevel 1 (
    echo ERROR: KNXPROD export failed.
    popd
    exit /b 1
)

echo Done: %OUTPUT%
popd
exit /b 0

:all
echo [1/2] Generating and validating all registered devices...
python generate.py --all --output Generated --validate
if errorlevel 1 (
    echo ERROR: XML generation/validation failed.
    popd
    exit /b 1
)

echo [2/2] Exporting all devices through Kaenx Creator 1.9.9...
for /D %%D in ("%SRC_DIR%Generated\*") do (
    if exist "%%~fD\prod.xml" (
        echo Exporting %%~nD...
        powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%SRC_DIR%tools\knxprod_exporter\export_knxprod.ps1" ^
            -XmlPath "%%~fD\prod.xml" ^
            -OutputPath "D:\Project\KNX\KNX_Create_Product\Kaenx Creator 1.9.9\%%~nD.knxprod" %REBUILD%
        if errorlevel 1 (
            echo ERROR: Export failed for %%~nD.
            popd
            exit /b 1
        )
    )
)

echo Done: all KNXPROD files are in the Kaenx Creator folder.
popd
exit /b 0
