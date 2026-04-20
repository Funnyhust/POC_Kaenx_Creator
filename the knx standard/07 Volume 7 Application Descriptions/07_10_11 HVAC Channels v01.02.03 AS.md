# Application Description

## HVAC General

 HVAC Channels

Summary

This document specifies the standard mode E-Mode Channels specified
for the HVAC Application Domain.

Version 01.02.03 is a KNX Approved Standard.


-----

#### Document Updates

**Version** **Date** **Modifications**

1.0 2007.10.10  - Document creation

               - **AN051 “New channels” integrated.**
2007.10.18        - **AN087 “New channels 2005.02” integrated.**
1.0 2009.06.16 Update in view of publication in the KNX Specifications v2.0.
1.1 2010.07.15  - **AN093 “Common HVA Channels” integrated.**
01.02.01 2013.09.10  - **AN135 “E-Mode Channel CH_HVAC_Mode_Display2”**

started and completed.
01.02.02 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.
01.02.03 2022.03.01 Preparation for integration in the KNX Specifications v3.0.

#### References

[01] Chapter 7/1/2 “Common Sensors”

[02] Chapter 7/1/4 “Technical Alarm”

[03] Chapter 7/10/1 “HVAC Sensor Functional Blocks”

[04] Chapter 7/10/2 “HVAC HMI Functional Blocks”

[05] Chapter 7/10/3 “HVAC Actuator Functional Blocks”

[06] Chapter 7/10/4 “HVAC Common Functional Blocks”

[07] Chapter 7/10/5 “HVAC Schedulers”

[08] Chapter 7/11/1 “Heat Production”

[09] Chapter 7/13/1 “Controller” (Terminal Unit Functional Blocks)

[10] Chapter 7/14/1 “Ventilation, Air Conditioning”

[11] Chapter 7/14/2 “Cold Water”

Filename: 07_10_11 HVAC Channels v01.02.03 AS.docx
Version: 01.02.03
Status: Approved Standard
Savedate: 2022.03.01
Number of pages: 20

|Version|Date|Modifications|
|---|---|---|
|1.0<br>1.0|2007.10.10|• Document creation<br>• **AN051“New channels”** integrated.|
|1.0<br>1.0|2007.10.18|<br>• **AN087 “New channels 2005.02”** integrated.|
|1.0<br>1.0|2009.06.16|<br>Update in view of publication inthe KNXSpecifications v2.0.|
|1.1|2010.07.15|• **AN093 “Common HVAChannels” integrated. **|
|01.02.01|2013.09.10|<br>• **AN135 “E-Mode Channel CH_HVAC_Mode_Display2”** integration<br>started and completed.|
|01.02.02|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.02.03|2022.03.01|Preparation for integration inthe KNXSpecifications v3.0.|


-----

#### Contents

##### 1 Introduction ............................................................................................................................ 4 1.1 E-Mode Channels for heating ......................................................................................... 4 1.2 Channel overview ........................................................................................................... 4

 2 Channels HVAC ..................................................................................................................... 6 2.1 CH_Outside_Temperature_Sensor (Channel Code 0024h) ............................................ 6 2.2 CH_Room_Temperature_Sensor (Channel Code 0025h) .............................................. 7 2.3 CH_PB_HVAC_Mode (Channel Code 0027h) .............................................................. 8 2.4 CH_Switch_HVAC_Heating_Enabled (Channel Code 0028h) ..................................... 9 2.5 CH_PB_HVAC_Mode_1 (Channel Code 002Eh) ....................................................... 10 2.6 CH_HVAC_Mode_Scheduler (Channel Code 0207h) ................................................. 11 2.7 CH_Room_Regulator_Type_A (Channel Code 0208h) ............................................... 11 2.8 CH_Heating_Valve_Actuator (Channel Code 0501h) ................................................. 16 2.9 CH_HVACMode_Display (Channel Code 0502h) ...................................................... 16 2.10 CH_Electrical_Heating_Actuator_Type_A (Channel Code 0503h) ............................ 17 2.11 CH_Electrical_Heating_Enable_Disable (Channel Code 0504h) ................................ 18 2.12 CH_HVAC_Mode_Display2 ........................................................................................ 19


-----

### 1 Introduction

#### 1.1 E-Mode Channels for heating
Figure 1 gives a possible combination of HVAC E-Mode Channels to build an HVAC application. Other
HVAC E-Mode Channels and other models are possible.

CH_Floor temperature Sensor

CH_Temperature_Display

Temperature

Temperature

CH_Outside temperature Sensor

TempOutside CH_Room_Regulator_Type_A

CH_Room temperature Sensor

TempRoom TempFloor TempRoom CH_Heating_

TempOutside Actuator_Type_A

CH_Window_Door_Contact_Basic

WindowStatus TempRoom HeatStageAActPosSetp HeatStageAActPosSetp

CH_Switch_HVAC_ Windows EnableEl
Heating_Enabled Status PowerLimitation

HVAC Heating
Enabled OnOffHeatStageA

CH Generic PB ½ Info 5 HVAC Heating CH_Binary_

Enabled Actuator_Basic

HVAC Heating Forced
Enabled OnOff

Forced Timed HeatCoolMode

Timed

Scene Number Scene Number

HVAC Mode HVAC Mode

CH_HeatCool_Display

CH_HVACMode_Scheduler TempRoom HVACModeEff

SetpUserAbs HeatCoolMode

HVAC Mode

CH_PB_HVAC_Mode CH_HVAC_Display

HVAC Mode

Hvac Mode

CH_tbd (temperature sensor)

TempRoom
SetpUserAbs CH_Electrical_Heating_

Enable_Disable

CH_Logical_Sensor Heating Enabled

Logical_Value

**Figure 1 – HVAC E-Mode Channels application model**

#### 1.2 Channel overview

|Temperature CH_Floor temperature Sensor CH_Temperature_Display|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|
|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|OnOff|
|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|CH_HeatCool_Display|CH_HeatCool_Display|CH_HeatCool_Display|
|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|<br>CH_HVAC_Display<br>HeatCoolMode|<br>CH_HVAC_Display<br>HeatCoolMode|<br>CH_HVAC_Display<br>HeatCoolMode|
|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|<br>CH_HVAC_Display<br>HeatCoolMode|<br>CH_HVAC_Display<br>HeatCoolMode|<br>CH_HVAC_Display|
|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Hvac Mode<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable|Hvac Mode<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable|Hvac Mode<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable|
|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Hvac Mode<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable|Hvac Mode<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable|CH_Electrical_Heating_<br>Enable_Disable|
|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Temperature<br>HVAC Mode<br>CH Generic PB ½ Info 5<br>ActPosSetp<br>HeatStageA<br>CH_Room_Regulator_Type_A<br>TempFloor<br>HVACModeEff<br>TempRoom<br>HVAC Heating<br>Enabled<br>CH_Heating_<br>Actuator_Type_A<br>Timed<br>HVAC Mode<br>Forced<br>Forced<br>Timed<br>TempRoom<br>CH_Room temperature Sensor<br>Temperature<br><br>Hvac Mode<br>CH_HVAC_Display<br>HVAC Mode<br>CH_HVACMode_Scheduler<br>Scene Number<br>Scene Number<br>TempOutside<br>CH_Outside temperature Sensor<br>TempOutside<br>TempRoom<br>TempRoom<br>SetpUserAbs<br>HVAC Heating<br>Enabled<br>CH_tbd (temperature sensor)<br>Windows<br>Status<br>WindowStatus<br>CH_Window_Door_Contact_Basic<br>HeatCoolMode<br>HeatCoolMode<br>CH_HeatCool_Display<br>OnOff<br>CH_Binary_<br>Actuator_Basic<br>OnOffHeatStageA<br>HVAC Mode<br>CH_PB_HVAC_Mode<br>HVAC Heating<br>Enabled<br>CH_Switch_HVAC_<br>Heating_Enabled<br>ActPosSetp<br>HeatStageA<br>EnableEl<br>PowerLimitation<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable<br>CH_Logical_Sensor<br>TempRoom<br>SetpUserAbs|Hvac Mode<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable|Hvac Mode<br>Heating Enabled<br>CH_Electrical_Heating_<br>Enable_Disable|Heating Enabled<br>|
|CH_Logical_Sensor|CH_Logical_Sensor|CH_Logical_Sensor||Heating Enabled|
|Logical_Value|||||

|Channel Code|Channel Name|
|---|---|
|0024h|CH_Outside_Temperature_Sensor|
|0025h|<br>CH_Room_Temperature_Sensor|
|0027h|<br>CH_PB_HVAC_Mode|
|0028h|<br>CH_Switch_HVAC_Heating_Enabled|
|002Eh|<br>CH_PB_HVAC_Mode_1|
|0207h|<br>CH_HVAC_Mode_Scheduler|
|0208h|<br>CH_Room_Regulator_Type_A|
|0501h|<br>CH_Heating_Valve_Actuator|
|0502h|<br>CH_HVACMode_Display|
|0503h|<br>CH_Electrical_Heating_Actuator_Type_A|


-----

0505h CH_HVAC_Mode_Display2

|Channel Code|Channel Name|
|---|---|
|0504h|CH_Electrical_Heating_Enable_Disable|
|0505h|<br>CH_HVAC_Mode_Display2|


-----

### 2 Channels HVAC

#### 2.1 CH_Outside_Temperature_Sensor (Channel Code 0024h)

 - **Name:** CH_Outside_Temperature_Sensor

 - **ID:** 0024h

 - **Classification:** sensor

 - **Functional Block:**

     - 320 - FB Outside Temperature Sensor (OTS) (See [03]).

 - **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Outside_Temperature_-**


TO 320.TempOutside

**_Parameters_**

- **Description:**

The outside temperature sensor channel shall measure the outside air temperature and shall
provide it to the system. The outside temperature shall be sent on change and shall be repeated
periodically.

     - The period for sending the outside temperature shall be 15 min and the TempCOV value
shall be 0,2 K.

     - The TempOutside Datapoint Type shall be 9.001 DPT_Value_Temp. The exponent may be
fixed to 3.

- **Datapoint list:**

Flags
Index FB Datapoint ID Name Subunit Main CC Additional CCs
(i/o,x,v, …)

0 320.TempOutside TempOutside 1 CC_TO CC_Temperature OL

|CH Outside Temperature -<br>_ _ _<br>Sensor|TO|
|---|---|
|||
|||

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|0|320.TempOutside|TempOutside|1|CC_TO|CC_Temperature|OL|


-----

#### 2.2 CH_Room_Temperature_Sensor (Channel Code 0025h)

 - **Name:** CH_Room_Temparature_Sensor

 - **ID:** 0025h

 - **Classification:** sensor

 - **Functional Block:**

     - 321 - FB Room Temperature Sensor (RTS) (See [03]).

 - **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Room_Temperature_-**

**Sensor**


TR 321.TempRoom

**_Parameters_**

- **Description:**

Please refer to the specifications of the FB Room Temperature Sensor.

The room temperature sensor channel shall measure the room temperature and shall provide it
to the system. The room temperature shall be sent on change and shall be repeated periodically.

     - The period for sending the room temperature shall be 15 min and the TempCOV value shall
be 0,2 K.

     - The TempRoom Datapoint Type shall be 9.001 DPT_Value_Temp. The exponent may be
fixed to 3.

- **Datapoint list:**

Flags
Index FB Datapoint ID Name Subunit Main CC Additional CCs
(i/o,x,v, …)

0 321.TempRoom TempRoom 1 CC_TR CC_Temperature OL

|CH Room Temperature -<br>_ _ _<br>Sensor|TR|
|---|---|
|**CH_Room_Temperature_-**<br>**Sensor**||

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|0|321.TempRoom|TempRoom|1|CC_TR|CC_Temperature|OL|


-----

#### 2.3 CH_PB_HVAC_Mode (Channel Code 0027h)

 - **Name:** CH_PB_HVAC_Mode

 - **ID:** 0027h

 - **Classification:** sensor

 - **Functional Block:**

     - 384 – User HVAC Room Settings (UHRS) (See [04]).

 - **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_HVAC_Mode**


HM 384.HVACMode

**_Parameters_**

PB_Action_HVAC P1

- **Description:**

See FB Switching Sensor Basic.

On activation of interaction 1 the value1 shall be sent corresponding to the parameter
PB_Action_HVAC.

On deactivation of interaction 1 the value2 shall be sent corresponding to the parameter
PB_Action_HVAC.

If the value is “nothing”, no message shall be sent on the bus.

- **Datapoint list:**

Additional
Index FB Datapoint ID Name Subunit Main CC

CCs

1 384.HMU HVAC Mode 1 CC_HVAC_Mode O L

- **Parameter table:**

Recommended default
Index Identifier Name Type

Value

1 P1 PB action hvac PART_PB_HVAC_Action 0b: Comfort/Economy 6

|Parameters<br>ion HVAC P1<br>_|CH PB HVAC Mode<br>_ _ _|HM|
|---|---|---|
|<br>**_Parameters_** <br>ion_HVAC<br>P1|**CH_PB_HVAC_Mode**<br>||

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|1|384.HMU|HVAC Mode|1|CC_HVAC_Mode||O L|

|Index|Identifier|Name|Type|Recommended default<br>Value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|PB action hvac|PART_PB_HVAC_Action|0b: Comfort/Economy|6|


-----

#### 2.4 CH_Switch_HVAC_Heating_Enabled (Channel Code 0028h)

 - **Name:** CH_Switch_HVAC_Heating_Enabled

 - **ID:** 0028h

 - **Classification:** sensor

 - **Functional Block:**

     - ??? – FB Lock Sensor (See [01]).

 - **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Switch_HVAC_-**


HHE ???.HVACHeatingEnabled

**_Parameters_**

- **Description:**

See FB Lock Sensor; the Output “Lock” of this FB shall be used to enable and disable the
heating.

On activation of interaction 1: the value “Enable” shall be sent.

On deactivation of interaction 1: the value “Disable” shall be sent.

- **Datapoint list:**

Flags

Index FB Datapoint ID Name Subunit Main CC Additional CCs (i/o,x,v,

…)

1 401/OO Heating Enabled 1 CC_Heating_Enabled CC_Logical O L

|CH Switch HVAC -<br>_ _ _<br>Heating Enabled<br>_|HHE|
|---|---|
|**CH_Switch_HVAC_-**<br>**Heating_Enabled**||

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,<br>…)|
|---|---|---|---|---|---|---|
|1|401/OO|Heating Enabled|1|CC_Heating_Enabled|CC_Logical|O L|


-----

#### 2.5 CH_PB_HVAC_Mode_1 (Channel Code 002Eh)

 - **Name:** CH_PB_HVAC_Mode_1

 - **ID:** 002Eh

 - **Classification:** sensor

 - **Functional Block:**

      - 384 – User HVAC Room Settings (See [04])

 - **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_HVAC_Mode_1**


HMU 384.HVACModeUser

**_Parameters_**

PB action HVAC extended P1

- **Description**

On activation of interaction 1 the value1 corresponding to the parameter
PB_Action_HVAC_Extended shall be transmitted on the Output HMU.

On deactivation of interaction 1 the value2 corresponding to the parameter
PB_Action_HVAC_Extended shall be transmitted on the Output HMU.

If the value is nothing, no datagram shall be sent on the bus.

- **Datapoint list**

Sub- Flags
Index FB Datapoint ID Name Main CC Additional CCs

unit (i/o,x,v…..)

1 384.HMU HVAC Mode User 1 CC_HVAC_Mode O L

- **Parameter table**

Index Identifier Name Type Recommended default Value Bit offset

|Parameters<br>AC extended P1|CH PB HVAC Mode 1<br>_ _ _ _|HMU|
|---|---|---|
|<br>**_Parameters_** <br>  AC extended<br>P1|**CH_PB_HVAC_Mode_1** <br>||

|Index|FB Datapoint ID|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|384.HMU|HVAC Mode User|1|CC_HVAC_Mode||O L|

|Index|Identifier|Name|Type|Recommended default Value|Bit offset|
|---|---|---|---|---|---|
|1|P1|PB action HVAC<br>extended|PART_PB_HVAC_-<br>Action_Extended|000b : Comfort/Economy|5|


-----

#### 2.6 CH_HVAC_Mode_Scheduler (Channel Code 0207h)

 - **Name:** CH_HVAC_Mode_Scheduler

 - **ID:** 0207h

 - **Classification:** sensor

 - **Functional Block:**

     - 110 - FB HVAC Mode Scheduler (HVACS) (See [07]).

 - **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_HVAC_Mode_Scheduler**

HM 110.HVACMode

**_Parameters_**

- **Description:**

The HVAC_Mode_Scheduler shall providi the HVAC Mode according to a scheduling
program.

- **Datapoint list:**

Index FB Datapoint ID Name Subunit Main CC Additional CCs

0 110.HVACMode HVAC_Mode 1 CC_HVAC_Mode OL

#### 2.7 CH_Room_Regulator_Type_A (Channel Code 0208h)

 - **Name:** CH_Room_Regulator_Type_A

 - **ID:** 0208h

 - **Classification:** Functional Module

 - **Functional Block:**

     - 257 - Radiator and Chilled Ceiling Room Control (RCCRC) (See [09])

     - 100 - Room Setpoint Manager HVAC Mode Driven (RSMHD) (See [06])

     - 384 - User HVAC Room Settings (UHRS) (See [04])

     - xxx - FB_Position_to_On_Off_Converter

|CH HVAC Mode Scheduler<br>_ _ _|HM|
|---|---|
|**CH_HVAC_Mode_Scheduler**||

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|0|110.HVACMode|HVAC_Mode|1|CC_HVAC_Mode||OL|


-----

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Room_Regulator-**

**_Type_A**

HVACMode HM

HVACHeatingEnabled HHE TR TempRoom

WindowStatus WS APHSA ActPosSetHeatStageA

Forced FO OOHSA OnOffHeatStageA

Timed TI HME HVACModeEff

SceneNumber SN HCM HeatCoolMode

TempRoomSetpUserAbs TRSUA

TempFloor TF

TempOutside TO

TempRoom TR

**_Parameters_**

TimedDuration P1

|HM|CH Room Regulator-<br>_ _<br>Type A<br>_ _|TR|
|---|---|---|
|HHE|HHE|HHE|
|WS|WS|APHSA|
|FO|FO|OOHSA|
|TI|TI|HME|
|SN|SN|HCM|
|TRSUA|TRSUA||
|TF|TF|TF|
|TO|TO|TO|
|TR|TR|TR|
|P1|P1|P1|
||||


-----

- **Description:**

**Room_Regulator_Type_A**

TempRoom

Radiator and Chilled
Ceiling Room (RCCRC)

IO : Internal NTC

TempRoom TempRoom TempRoom

ActPosSetp

TempOutside TempOutside HeatStageA

TempFloor TempFloor Position to OnOff

Convertor (POOC)

ActPosSetp ActPosSetp OnOffHeat OnOff
HeatStageA HeatStageA StageA HeatStageA

General channels to ActPosSetp OnOffHeat
HVAC interface HeatStageB StageB

Temp TempRoom
Room SetpHeatEff ActPosSetp OnOffCool

CoolStageA StageA

TempRoom

HVACMode SetpHeatEff SetpCoolEffTempRoom HeatCoolMode ActPosSetp OnOffCool

CoolStageB StageB

TempRoom

HVACHeating SetpCoolEff
Enabled

WindowStatus

Forced

HeatCoolMode

TimedStartStop

SceneNumber HVAC Mode

TempRoom TempRoom
SetpUserAbs SetpUserAbs

HVAC
ModeUser

Comfort
PushButton

Room Setpoint
Manager HVAC mode
driven (RSMHD)

**TimedDuration**

HVACMode SetpHeatEffTempRoom

TempRoom TempRoom

User HMI SetpUserAbs SetpCoolEff
HVAC Room Settings
(UHRS) SetpUserOffsetTempRoom ModeEffHVAC HVACModeEff

HVAC

User IOs : ModeUser

         - UserComfortPB

        - HVACModePB

         - SetpointChangePB Comfort

PushButton

TempRoom
SetpUserOffset

The functionality is based on existing Functional Blocks (UHRS, RSMHD, POOC and RCCRC) and an
interface with general purpose channel.

The interface with general purpose channels (timed, forced, scene functions) as Inputs is described as a
“general channel to HVAC interface” just hereafter.

|Col1|TempRoom|
|---|---|

|T|empOutside|
|---|---|

|Col1|TempFloor|
|---|---|

|ActPosSetp<br>HeatStageA|Col2|
|---|---|

|Col1|ActPosSetp<br>HeatStageA|
|---|---|

|OnOffHea<br>StageA|t|
|---|---|

|Col1|ActPosSetp<br>HeatStageB|
|---|---|

|OnOffHea<br>StageB|t|
|---|---|

|Col1|ActPosSetp<br>CoolStageA|
|---|---|

|OnOffCoo<br>StageA|l|
|---|---|

|TempRoom<br>SetpHeatEff|Col2|
|---|---|

|Col1|ActPosSetp<br>CoolStageB|
|---|---|

|OnOffCoo<br>StageB|l|
|---|---|

|TempRoom<br>SetpCoolEff|Col2|
|---|---|

|HVAC Mode|Col2|
|---|---|

|TempRoom<br>SetpUserAbs|Col2|
|---|---|

|Col1|HVAC<br>ModeUser|
|---|---|

|Col1|Comfort<br>PushButton|
|---|---|

|Col1|HVACMode|
|---|---|

|TempRoom<br>SetpHeatEff|Col2|
|---|---|

|Col1|TempRoom<br>SetpUserAbs|
|---|---|

|TempRoom<br>SetpCoolEff|Col2|
|---|---|

|Col1|TempRoom<br>SetpUserOffset|
|---|---|

|HVAC<br>ModeEff|Col2|
|---|---|

|HVAC<br>ModeUser|Col2|
|---|---|

|Comfort<br>PushButton|Col2|
|---|---|

|TempRoom<br>SetpUserOffse|t|
|---|---|

|Col1|Room Regulator Type A<br>_ _ _<br>TempRoo<br>Radiator and Chilled<br>Ceiling Room (RCCRC)<br>IO : Internal NTC<br>empRoom TempRoom TempRoom<br>ActPosSet<br>mpOutside TempOutside HeatStage<br>empFloor TempFloor Position to OnOff<br>Convertor (POOC)<br>ActPosSetp ActPosSetp OnOffHeat OnOff<br>HeatStageA HeatStageA StageA HeatStage<br>General channels to ActPosSetp OnOffHeat<br>HVAC interface HeatStageB StageB<br>Temp TempRoom<br>Room SetpHeatEff ActPosSetp OnOffCool<br>CoolStageA StageA<br>TempRoom<br>HVACMode SetpHeatEff ST ee tm pCpR ooo lo Em ff HeatCoolMode ActPosSetp OnOffCool<br>CoolStageB StageB<br>TempRoom<br>VACHeating SetpCoolEff<br>Enabled<br>indowStatus<br>Forced<br>HeatCoolMo<br>medStartStop<br>ceneNumber HVAC Mode<br>TempRoom TempRoom<br>etpUserAbs SetpUserAbs<br>HVAC<br>ModeUser<br>Comfort<br>PushButton<br>Room Setpoint<br>Manager HVAC mode<br>driven (RSMHD)<br>TimedDuration<br>HVACMode ST ee tm pHpR eao to Em ff<br>TempRoom TempRoom<br>User HMI SetpUserAbs SetpCoolEff<br>HVAC Room Settings<br>(UHRS) SeT te pm Usp eR ro Oo fm fset MH oV dA eEC ff HVACMode<br>HVAC<br>User IOs : ModeUser<br>- UserComfortPB<br>- HVACModePB<br>- SetpointChangePB Comfort<br>PushButton<br>TempRoom<br>SetpUserOffset|Col3|Col4|Col5|
|---|---|---|---|---|
||ActPosSet<br>HeatStage<br>**Room_Regulator_Type_A**<br>User HMI<br>HVAC Room Settings<br>(UHRS)<br>HVAC<br>ModeUser<br>HVACMode<br>TempRoom<br>Radiator and Chilled<br>Ceiling Room (RCCRC)<br>TempRoom<br>SetpHeatEff<br>ActPosSetp<br>HeatStageA<br>Room Setpoint<br>Manager HVAC mode<br>driven (RSMHD)<br>HVACMode<br>TempRoom<br>SetpHeatEff<br>TempRoo<br>HVAC Mode<br>Comfort<br>PushButton<br>Forced<br>medStartStop<br>ceneNumber<br>TempRoom<br>SetpUserAbs<br>HVAC<br>ModeEff<br>TempRoom<br>SetpCoolEff<br>**TimedDuration**<br>General channels to<br>HVAC interface<br>empRoom<br>VACHeating<br>Enabled<br>indowStatus<br>HVACMode<br>TempRoom<br>etpUserAbs<br>TempRoom<br>SetpUserAbs<br>TempRoom<br>SetpUserOffset<br>TempRoom<br>SetpUserOffset<br>empFloor<br>mpOutside<br>Temp<br>Room<br>User IOs :<br>- UserComfortPB<br>- HVACModePB<br>- SetpointChangePB<br>TempRoom<br>SetpHeatEff<br>TempRoom<br>SetpCoolEff<br>TempRoom<br>SetpCoolEff<br>OnOffHeat<br>StageA<br>OnOff<br>HeatStage<br>TempFloor<br>HeatCoolMode<br>HeatCoolMo<br>HVAC<br>ModeUser<br>Comfort<br>PushButton<br>IO : Internal NTC<br>TempOutside<br>Position to OnOff<br>Convertor (POOC)<br>ActPosSetp<br>HeatStageA<br>ActPosSetp<br>HeatStageB<br>ActPosSetp<br>CoolStageA<br>ActPosSetp<br>CoolStageB<br>OnOffCool<br>StageA<br>OnOffCool<br>StageB<br>OnOffHeat<br>StageB<br>TempRoom|ActPosSet<br>HeatStage<br>**Room_Regulator_Type_A**<br>User HMI<br>HVAC Room Settings<br>(UHRS)<br>HVAC<br>ModeUser<br>HVACMode<br>TempRoom<br>Radiator and Chilled<br>Ceiling Room (RCCRC)<br>TempRoom<br>SetpHeatEff<br>ActPosSetp<br>HeatStageA<br>Room Setpoint<br>Manager HVAC mode<br>driven (RSMHD)<br>HVACMode<br>TempRoom<br>SetpHeatEff<br>TempRoo<br>HVAC Mode<br>Comfort<br>PushButton<br>Forced<br>medStartStop<br>ceneNumber<br>TempRoom<br>SetpUserAbs<br>HVAC<br>ModeEff<br>TempRoom<br>SetpCoolEff<br>**TimedDuration**<br>General channels to<br>HVAC interface<br>empRoom<br>VACHeating<br>Enabled<br>indowStatus<br>HVACMode<br>TempRoom<br>etpUserAbs<br>TempRoom<br>SetpUserAbs<br>TempRoom<br>SetpUserOffset<br>TempRoom<br>SetpUserOffset<br>empFloor<br>mpOutside<br>Temp<br>Room<br>User IOs :<br>- UserComfortPB<br>- HVACModePB<br>- SetpointChangePB<br>TempRoom<br>SetpHeatEff<br>TempRoom<br>SetpCoolEff<br>TempRoom<br>SetpCoolEff<br>OnOffHeat<br>StageA<br>OnOff<br>HeatStage<br>TempFloor<br>HeatCoolMode<br>HeatCoolMo<br>HVAC<br>ModeUser<br>Comfort<br>PushButton<br>IO : Internal NTC<br>TempOutside<br>Position to OnOff<br>Convertor (POOC)<br>ActPosSetp<br>HeatStageA<br>ActPosSetp<br>HeatStageB<br>ActPosSetp<br>CoolStageA<br>ActPosSetp<br>CoolStageB<br>OnOffCool<br>StageA<br>OnOffCool<br>StageB<br>OnOffHeat<br>StageB<br>TempRoom|TempRoo|m|
||ActPosSet<br>HeatStage<br>**Room_Regulator_Type_A**<br>User HMI<br>HVAC Room Settings<br>(UHRS)<br>HVAC<br>ModeUser<br>HVACMode<br>TempRoom<br>Radiator and Chilled<br>Ceiling Room (RCCRC)<br>TempRoom<br>SetpHeatEff<br>ActPosSetp<br>HeatStageA<br>Room Setpoint<br>Manager HVAC mode<br>driven (RSMHD)<br>HVACMode<br>TempRoom<br>SetpHeatEff<br>TempRoo<br>HVAC Mode<br>Comfort<br>PushButton<br>Forced<br>medStartStop<br>ceneNumber<br>TempRoom<br>SetpUserAbs<br>HVAC<br>ModeEff<br>TempRoom<br>SetpCoolEff<br>**TimedDuration**<br>General channels to<br>HVAC interface<br>empRoom<br>VACHeating<br>Enabled<br>indowStatus<br>HVACMode<br>TempRoom<br>etpUserAbs<br>TempRoom<br>SetpUserAbs<br>TempRoom<br>SetpUserOffset<br>TempRoom<br>SetpUserOffset<br>empFloor<br>mpOutside<br>Temp<br>Room<br>User IOs :<br>- UserComfortPB<br>- HVACModePB<br>- SetpointChangePB<br>TempRoom<br>SetpHeatEff<br>TempRoom<br>SetpCoolEff<br>TempRoom<br>SetpCoolEff<br>OnOffHeat<br>StageA<br>OnOff<br>HeatStage<br>TempFloor<br>HeatCoolMode<br>HeatCoolMo<br>HVAC<br>ModeUser<br>Comfort<br>PushButton<br>IO : Internal NTC<br>TempOutside<br>Position to OnOff<br>Convertor (POOC)<br>ActPosSetp<br>HeatStageA<br>ActPosSetp<br>HeatStageB<br>ActPosSetp<br>CoolStageA<br>ActPosSetp<br>CoolStageB<br>OnOffCool<br>StageA<br>OnOffCool<br>StageB<br>OnOffHeat<br>StageB<br>TempRoom|ActPosSet<br>HeatStage<br>**Room_Regulator_Type_A**<br>User HMI<br>HVAC Room Settings<br>(UHRS)<br>HVAC<br>ModeUser<br>HVACMode<br>TempRoom<br>Radiator and Chilled<br>Ceiling Room (RCCRC)<br>TempRoom<br>SetpHeatEff<br>ActPosSetp<br>HeatStageA<br>Room Setpoint<br>Manager HVAC mode<br>driven (RSMHD)<br>HVACMode<br>TempRoom<br>SetpHeatEff<br>TempRoo<br>HVAC Mode<br>Comfort<br>PushButton<br>Forced<br>medStartStop<br>ceneNumber<br>TempRoom<br>SetpUserAbs<br>HVAC<br>ModeEff<br>TempRoom<br>SetpCoolEff<br>**TimedDuration**<br>General channels to<br>HVAC interface<br>empRoom<br>VACHeating<br>Enabled<br>indowStatus<br>HVACMode<br>TempRoom<br>etpUserAbs<br>TempRoom<br>SetpUserAbs<br>TempRoom<br>SetpUserOffset<br>TempRoom<br>SetpUserOffset<br>empFloor<br>mpOutside<br>Temp<br>Room<br>User IOs :<br>- UserComfortPB<br>- HVACModePB<br>- SetpointChangePB<br>TempRoom<br>SetpHeatEff<br>TempRoom<br>SetpCoolEff<br>TempRoom<br>SetpCoolEff<br>OnOffHeat<br>StageA<br>OnOff<br>HeatStage<br>TempFloor<br>HeatCoolMode<br>HeatCoolMo<br>HVAC<br>ModeUser<br>Comfort<br>PushButton<br>IO : Internal NTC<br>TempOutside<br>Position to OnOff<br>Convertor (POOC)<br>ActPosSetp<br>HeatStageA<br>ActPosSetp<br>HeatStageB<br>ActPosSetp<br>CoolStageA<br>ActPosSetp<br>CoolStageB<br>OnOffCool<br>StageA<br>OnOffCool<br>StageB<br>OnOffHeat<br>StageB<br>TempRoom|TempRoo||
|T|empRoom|empRoom|empRoom|empRoom|
||||||
||||ActPosSet<br>HeatStage|p<br>A|
|Te|mpOutside|mpOutside|mpOutside|mpOutside|
|Te|mpOutside|mpOutside|mpOutside||
||||||
|T|empFloor|empFloor|empFloor|empFloor|
||||||
||||OnOff<br>HeatStage|A|
||||OnOff<br>HeatStage||
||HVACMod|HVACMod|HVACMod|HVACMod|
|H|VACHeatin<br>Enabled|g|g|g|
||||||
|W|indowStat|us|us|us|
||||||
||Forced||||
||||||
||||HeatCoolMo|de|
|Ti|medStartSt|op|op|op|
|Ti|medStartSt|op|op||
||||||
|S|ceneNumb|er|er|er|
||||||
|S|TempRoom<br>etpUserAb|s|s|s|
||||||
||||HVACMode|Eff|
||||HVACMode||


-----

**General channel to HVAC interface**

This functionality will generate 4 internal values:

HVACMode HM HVAC mode 20.102 DPT_HVAC_Mode

TempRoomSetpHeatEff TRSHE Absolute value of the heat effective 9.001 DPT_Value_Temp
setpoint

TempRoomSetpCoolEff TRSCE Absolute value of the cool effective 9.001 DPT_Value_Temp
setpoint

TempRoomSetpUserAbs TRSUA Absolute value of the basic setpoint 9.001 DPT_Value_Temp

Depending on value received on input Datapoints of the channels:

HVACMode HM Command to set the current 20.102 DPT_HVAC_Mode
HVAC_Mode

HVACHeatingEnabled HHE To force the output to the 1.003 DPT_Enable
“BuildingProtection” mode

WindowStatus WS To force the output to the 1.019 DPT_Window_Door
“BuildingProtection” mode

Forced FO to force the output to “Comfort” or 2.002 DPT_Bool_Control
“BuildingProtection”

TimedStartStop TSS to switch the “timed HVAC mode” 1.010 DPT_Start
during the TimedDuration delay

SceneNumber SN To activate/learn the scene 18.001 DPT_SceneControl

TempRoomSetpUserAbs TRSUA Absolute value of the basic setpoint 9.001 DPT_Value_Temp

TempRoom TR Room temperature 9.001 DPT_Value_Temp

And internal Datapoints coming from UHRS functionnality

HVACModeUser HMU HVAC mode user 20.102 DPT_HVAC_Mode

ComfortPushButton CPB Comfort push button activated by the 1.017 DPT_Trigger
user

- If the value 0 (Disabled) is received on the HVAC Heating Enabled Input, the interface shall send
the “BuildingProtection” mode on the HVACMode Output. This Input can be used as an alternative
of the Window status Input as the logic is inverted between the two Inputs.

- If the window status is triggered then the block shall send the “BuildingProtection” on the HVAC
Mode Output.

- If start is received on the Timed input Datapoint then the block shall send the HVAC Mode Comfort
or BuildingProtection (according to the current HVAC Mode) on the HVAC Mode Output during a
period defined by the TimedDuration (P1) Parameter.

- If the SceneNumber is received, according to the bit Learn/Activate, the interface shall save or
render the current HVAC Mode or room temperature setpoint of the FB.

- In the forced state (received value 1x on the Datapoint Forced)
   - If value is TRUE then the output is set to the value “BuildingProtection”.
   - If value is FALSE then the output is set with the value “Comfort”.

|HVACMode|HM|HVAC mode|20.102 DPT HVAC Mode<br>_ _|
|---|---|---|---|
|TempRoomSetpHeatEff|TRSHE|Absolute value of the heat effective<br>setpoint|<br>9.001 DPT_Value_Temp|
|TempRoomSetpCoolEff|TRSCE|Absolute value of the cool effective<br>setpoint|9.001 DPT_Value_Temp|
|TempRoomSetpUserAbs|TRSUA|Absolute value of the basic setpoint|9.001 DPT_Value_Temp|

|HVACMode|HM|Command to set the current<br>HVAC Mode<br>_|20.102 DPT HVAC Mode<br>_ _|
|---|---|---|---|
|HVACHeatingEnabled|HHE|<br>To force the output to the<br>“BuildingProtection” mode|1.003 DPT_Enable|
|WindowStatus|WS|To force the output to the<br>“BuildingProtection” mode|1.019 DPT_Window_Door|
|Forced|FO|to force the output to “Comfort” or<br>“BuildingProtection”|2.002 DPT_Bool_Control|
|TimedStartStop|TSS|to switch the “timed HVAC mode”<br>during the TimedDuration delay|1.010 DPT_Start|
|SceneNumber|SN|To activate/learn the scene|18.001 DPT_SceneControl|
|TempRoomSetpUserAbs|TRSUA|Absolute value of the basic setpoint|<br>9.001 DPT_Value_Temp|
|TempRoom|TR|Room temperature|<br>9.001 DPT_Value_Temp|

|HVACModeUser|HMU|HVAC mode user|20.102 DPT HVAC Mode<br>_ _|
|---|---|---|---|
|ComfortPushButton|CPB|Comfort push button activated by the<br>user|1.017 DPT_Trigger|


-----

- If the interface is not in a special state (forced, timed, window status….) then the last mode received
on the HVACMode Input shall be sent on the HVACMode Output.

- The interface can also receive a temperature value, which shall set the value of the basic setpoint
related to the “Comfort” mode.

**Priority description**

Highest: Stop, Forced, Window Status

Lowest: TimedStartStop, HVACMode, SceneNumber

- **Datapoint list**

FB

Sub- Flags

Index Datapoint Name Main CC Additional CCs

Unit (i/o,x,v…..)

ID

1 HM HVACMode 1 CC_HVAC_Mode I

2 HHE HVACHeatingEnabled 1 CC_Heating_Enabled I

3 WS WindowStatus 1 CC_Window_Status CC_Switch_OnOff I

4 FO Forced 1 CC_Forced I

5 TSS TimedStartStop 1 CC_Timer_StartStop I

6 SN SceneNumber 1 CC_Scene_Numbered I

7 TRSUA TempRoomSetpUserAbs 1 CC_TRSUA I

8 TF TempFloor 1 CC_TF I

9 TO TempOutside 1 CC_TO I

10 TR TempRoom 1 CC_TR I

11 TR TempRoom 1 CC_TR O

12 APSHSA ActPosSetpHeatStageA 1 CC_Scaling_Value OL

13 OOHSA OnOffHeatStageA 1 CC_Switch_OnOff O

14 HME HvacModeEff 1 CC_HVAC_Mode_- O
Status

15 HCM HeatCoolMode 1 CC_HeatCool_Status O

- **Parameter table**

Index Identifier Name Type Recommended default Value Bit-Offset

1 P1 TimedDuration PART_Time_Delay 1 hour 0

|Index|FB<br>Datapoint<br>ID|Name|Sub-<br>Unit|Main CC|Additional CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|HM|HVACMode|1|CC_HVAC_Mode||I|
|2|HHE|HVACHeatingEnabled|1|<br>CC_Heating_Enabled||I|
|3|WS|WindowStatus|1|<br>CC_Window_Status|<br>CC_Switch_OnOff|I|
|4|FO|Forced|1|<br>CC_Forced||<br>I|
|5|TSS|TimedStartStop|1|<br>CC_Timer_StartStop||I|
|6|SN|SceneNumber|1|<br>CC_Scene_Numbered||I|
|7|TRSUA|TempRoomSetpUserAbs|1|<br>CC_TRSUA||I|
|8|TF|TempFloor|1|<br>CC_TF||I|
|9|TO|TempOutside|1|<br>CC_TO||I|
|10|TR|TempRoom|1|<br>CC_TR||I|
|11|TR|TempRoom|1|<br>CC_TR||O|
|12|APSHSA|ActPosSetpHeatStageA|1|<br>CC_Scaling_Value||OL|
|13|OOHSA|OnOffHeatStageA|1|<br>CC_Switch_OnOff||O|
|14|HME|HvacModeEff|1|<br>CC_HVAC_Mode_-<br>Status||O|
|15|HCM|HeatCoolMode|1|CC_HeatCool_Status||O|

|Index|Identifier|Name|Type|Recommended default Value|Bit-Offset|
|---|---|---|---|---|---|
|1|P1|TimedDuration|PART_Time_Delay|1 hour|0|


-----

#### 2.8 CH_Heating_Valve_Actuator (Channel Code 0501h)

 - **Name:** CH_Heating_Valve_Actuator

 - **ID:** 0501h

 - **Classification:** actuator

 - **Functional Block:**

     - 352 - HVAC Valve Actuator (HVA) (See [05]).

 - **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Heating_Valve_Actuator**

352.ActPosSetpHeatStageA APHSA

- **Description:**

See Functional Block HVAC Valve Actuator (HVA).

- **Datapoint list:**

Index FB Datapoint ID Name Subunit Main CC Additional CCs

1 352.ActPosSetpHeatStageA APHSA 1 CC_Scaling_Value I L

#### 2.9 CH_HVACMode_Display (Channel Code 0502h)

 - **Name:** CH_HVACMode_Display

 - **ID:** 0502h

 - **Classification:** actuator

 - **Functional Block:**

       - 390 – User HVAC Display (UHD) (See [04]).

 - **Graphical representation:**

**_Inputs_** **_Outputs_**

|APHSA|CH Heating Valve Actuator<br>_ _ _|
|---|---|
|||

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|1|352.ActPosSetpHeatStageA|APHSA|1|CC_Scaling_Value||I L|


**CH_HVACMode_Display**


390.HVACModeEff HM

- **Description:**

See Functional Block User HVAC Display (UHDA)

|HM|CH HVACMode Display<br>_ _|
|---|---|
|||


-----

- **Datapoint list**

Flags
Index FB Datapoint ID Name Subunit Main CC Additional CCs
(i/o,x,v, …)

1 390.HVACModeEff HVACMode 1 CC_HVAC_Mode_Status I L

#### 2.10 CH_Electrical_Heating_Actuator_Type_A (Channel Code 0503h)

 - **Name:** CH_Electrical_Heating_Actuator_Type_A

 - **ID:** 0503h

 - **Classification:** Actuator

 - **Functional Block:**

       - 369 – Electrical Heating Element Actuator (EHEA) (See [05])

       - 352 – HVAC Valve Actuator (HVA) (See [05])

 - **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Electrical_Heating**

**_Actuator_Type_A**

ActPosSetpHeatStageA APHSA

EnableElPowerLimitation EEPL

**_Parameters_**

- **Description**

The Input EnableElPowerLimitation shall be mapped to the Functional Block Input DisableElPowerLim.
The Electrical Power Limitation is defined with the value 0 %.

- **Datapoint list**

SubIndex FB Datapoint ID Name Main CC Additional CCs [Flags ]

Unit (i/o,x,v…)

1 369 - APHSA ActPosSetpHeatStageA 1 CC_Scaling_Value IL

2 369 - EEPL EnableElPowerLimitation 1 CC_Logical I

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|1|390.HVACModeEff|HVACMode|1|CC_HVAC_Mode_Status||I L|

|APHSA|CH Electrical Heating<br>_ _<br>Actuator Type A<br>_ _ _|
|---|---|
|EEPL|EEPL|
|||

|Index|FB Datapoint ID|Name|Sub-<br>Unit|Main CC|Additional CCs|Flags<br>(i/o,x,v…)|
|---|---|---|---|---|---|---|
|1 <br>|369 - APHSA|ActPosSetpHeatStageA|1|CC_Scaling_Value||IL|
|2 <br>|369 - EEPL|EnableElPowerLimitation|1|<br>CC_Logical||I|


-----

#### 2.11 CH_Electrical_Heating_Enable_Disable (Channel Code 0504h)

 - **Name:** CH_Electrical_Heating_Enable_Disable

 - **ID:** 0504h

 - **Classification:** Actuator

 - **Functional Block:**

       - 369 – Electrical Heating Element Actuator (EHEA)

       - 352 – HVAC Valve Actuator (HVA)

 - **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Electrical_Heating_**

**Enable_Disable**

Heating_Enabled HE

**_Parameters_**

- **Description**

This HE input Datapoint allows (with the value Enable) or disables (with the value Disable) the heating.

- **Datapoint list**

|HE|CH Electrical Heating<br>_ _ _<br>Enable Disable<br>_|
|---|---|
|||

|Index|FB<br>Datapoint ID|Name|Sub-<br>Unit|Main CC|Additional CCs|Flags<br>(i/o,x,v…)|
|---|---|---|---|---|---|---|
|1|HE|Heating_Enabled|1|CC_Heating_Enabled|CC_Logical|IL|


-----

#### 2.12 CH_HVAC_Mode_Display2

 - **Name:** CH_HVAC_Mode_Display2

 - **ID:** 0505h

 - **Classification:** Actuator

 - **Functional Block:**

     - 295 - KNX to Fil Pilote Converter (KFP)

 - **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_HVAC_-**
**Mode_Display2**


HVAC Mode HM
HVAC Heating Enabled HHE

Mandatory Optional (flexible channel)

- **Description:**

See functional block KNX to Fil Pilote Converter (KFP).

In France, concerning electrical heating, a specific protocol is used to drive electrical heating element.
This protocol is called “fil pilote”. It uses different power signal to define different heating modes:
Comfort, Comfort-1, Comfort-2, Economy, Building protection, Stop heating.

There is a correspondence between HVAC Mode values and fil pilote signals.

Figure 2 gives the definition of signals for each heating mode.

|HM|CH HVAC -<br>_ _<br>Mode Display2<br>_|
|---|---|
|HHE|HHE|
|||


-----

|Received commands|Signals|Col3|Obtained results|
|---|---|---|---|
|Absence of current||comfort|The obtained temperature is the<br>one set at the thermostat.|
|Alternating<br>Absence of current:<br>4’57”<br>Phase 230 V: 3”||comfort -1°C|The obtained temperature is the<br>one set at the thermostat – 1°C.|
|Alternating<br>Absence of current :<br>4’53”<br>Phase 230 V: 7”||comfort -2°C|The obtained temperature is the<br>one set at the thermostat – 2°C.|
|Full phase 230 V||Economy mode|Economy temperature.|
|Half negative phase -<br>115 V||Frost protection|Temperature without frost of about<br>7°C. This can be used for load<br>shedding.|
|Half positive phase<br>+115 V||Stop|Immediate stop of the appliance.|


**Figure 2 – Definition of signals for “fil pilote”**

There may exist KNX devices that have an Output “fil pilote”. These devices receive HVAC mode
information and generate a corresponding signal on their “fil pilote” hardware output.

For example the correspondence between the two input Datapoints and the hardwired “fil pilote” output
can be done as in Table 1.

**Table 1 – Mapping between HM, HHE and the output “fil pilote” (example)**

**HVAC Mode** **HVAC Enable** **Fil pilote command**

Comfort Enable Comfort

Economy Enable Economy

Building Prot Enable Building Prot

Any Disable Stop

- **Datapoint list**

**FB /** **Sub-** **Additional** **Flags** **O/M**
**Index** **Name** **Main CC**
**Datapoint ID** **unit** **CCs** (i/o,x,v…..) **DPT**

1 KFP/HM HVAC Mode 1 CC_HVAC_Mode (31) I M
20.102

2 KFP/HHE HVAC Heating 1 CC_Heating_Enabled (33) I M
Enable 1.003

- **Parameter table**

No parameter

|HVAC Mode|HVAC Enable|Fil pilote command|
|---|---|---|
|Comfort|Enable|Comfort|
|Economy|Enable|Economy|
|Building Prot|Enable|Building Prot|
|Any|Disable|Stop|

|Index|FB /<br>Datapoint ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|O/M<br>DPT|
|---|---|---|---|---|---|---|---|
|1|KFP/HM|HVAC Mode|1|CC_HVAC_Mode (31)||I|M <br>20.102|
|2|KFP/HHE|HVAC Heating<br>Enable|1|CC_Heating_Enabled (33)||I|M <br>1.003|


-----

