# Application Descriptions

## HVAC General Functional Blocks

 Property Identifiers

Summary

This document is a part of the HVAC Application Interworking Standard.
It specifies the standardised Property Identifiers for each Functional
Block / Interface Object.

Version 02.03.02 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

001.19 --- Start of the document
2.3 2009.05.29 Update in view of publication in the KNX Specifications v2.0.
2.3 2009.06.16 Update in view of publication in the KNX Specifications v2.0.
02.03.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.
02.03.02 2022.02.28 Preparation for integration in the KNX Specifications v3.0.

Copies with the same version number but a newer save date contain small corrections without impact on
the content.

#### References

[01] Chapter 7/10/4 “HVAC Common Functional Blocks”

Filename: 07_10_09 HVAC Property Identifiers v02.03.02 AS.docx
Version: 02.03.02
Status: Approved Standard
Savedate: 2022.02.28
Number of pages: 35

© C i h 1999 2022 A i i A li i i i 02 03 02 2 f 3

|Version|Date|Modifications|
|---|---|---|
|001.19|---|Start of the document|
|2.3|2009.05.29|Update in view of publication inthe KNXSpecifications v2.0.|
|2.3|2009.06.16|Update in view of publication inthe KNXSpecifications v2.0.|
|02.03.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|
|02.03.02|2022.02.28|Preparation for integration in the KNX Specifications v3.0.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 5 1.1 Scope ............................................................................................................................... 5 1.2 Structure of the document ............................................................................................... 5

 2 HVAC Property Identifiers ................................................................................................... 6 2.1 Sensors ............................................................................................................................ 6 2.1.1 Empty .................................................................................................................. 6 2.1.2 Outside Temperature Sensor ............................................................................... 6 2.1.3 Room Temperature Sensor ................................................................................. 6 2.1.4 Supply Air Temperature Sensor.......................................................................... 7 2.1.5 Return Air Temperature Sensor .......................................................................... 7 2.1.6 Flow Water Temperature Sensor ........................................................................ 8 2.1.7 Return Water Temperature Sensor...................................................................... 8 2.1.8 Water Change Over Status Sensor ...................................................................... 9 2.1.9 Wind Speed Sensor (see Volume 7, Part 50) ..................................................... 9 2.1.10 Sun Intensity Sensor ......................................................................................... 10 2.1.11 Window Switch ................................................................................................. 10 2.1.12 Presence Detector.............................................................................................. 11 2.1.13 Outside AQ Sensor ........................................................................................... 11 2.1.14 Room AQ Sensor .............................................................................................. 12 2.1.15 Supply AQ Sensor............................................................................................. 12 2.1.16 Return AQ Sensor ............................................................................................. 13 2.1.17 Supply Air Relative Humidity Sensor .............................................................. 13 2.1.18 Return Air Relative Humidity Sensor ............................................................... 14 2.1.19 Outside Relative Humidity Sensor.................................................................... 14 2.1.20 Room Relative Humidity Sensor ...................................................................... 15 2.1.21 Condenser Flow Water Temperature Sensor .................................................... 15 2.1.22 Condenser Return Water Temperature Sensor ................................................. 16 2.1.23 Air Change Over Status Sensor ........................................................................ 16 2.1.24 Dew Point Status Sensor ................................................................................... 17 2.1.25 Discharge Air Temperature Sensor ................................................................... 17 2.1.26 Floor Temperature Sensor ................................................................................. 18 2.2 HMI ............................................................................................................................... 18 2.2.1 Empty ................................................................................................................ 18 2.2.2 User HVAC Room Settings .............................................................................. 19 2.2.3 User HVAC Display ......................................................................................... 19 2.2.4 User Presence Switch ........................................................................................ 20 2.2.5 User Fan Speed Setting ..................................................................................... 20 2.2.6 User Air Quality Setpoint Setting ..................................................................... 21 2.2.7 User Relative Air Humidity Setpoint Setting ................................................... 21 2.2.8 User Enable Alternative Room Temperature Setpoint ..................................... 22 2.2.9 Room Temperature Setpoint Setting Absolute ................................................. 22 2.2.10 User Change Over setting ................................................................................. 22 2.3 Actuators ....................................................................................................................... 23 2.3.1 Empty ................................................................................................................ 23 2.3.2 HVAC Valve Actuator ...................................................................................... 23 2.3.3 Air Damper Actuator ........................................................................................ 24 2.3.4 Fan Speed Actuator ........................................................................................... 24 2.3.5 Compressor Actuator ........................................................................................ 25

© C i h 1999 2022 A i i A li i i i 02 03 02 3 f 3


-----

###### 2.3.6 Electrical Heating Element Actuator ................................................................ 25 2.3.7 HVAC ON/OFF Actuator ................................................................................. 26 2.4 Common ....................................................................................................................... 26 2.4.1 Empty ................................................................................................................ 26 2.4.2 Programme to HVAC-Mode Conversion ......................................................... 27 2.4.3 HVAC Optimiser .............................................................................................. 28 2.4.4 Room Setpoint Manager HVAC Mode Driven ................................................ 29 2.4.5 Room Setpoint Manager Temperature Driven .................................................. 30 2.4.6 Setpoint Manager Air Quality ........................................................................... 31 2.4.7 Setpoint Manager Relative Humidity ............................................................... 31 2.4.8 Setpoint Shift Load Shedding & Tariff ............................................................. 32 2.4.9 Building/Occ-Mode Source .............................................................................. 32 2.4.10 HVAC Emergency Source ................................................................................ 33 2.4.11 Position to ON/OFF Converter ......................................................................... 33 2.5 Schedulers ..................................................................................................................... 34 2.5.1 Empty ................................................................................................................ 34 2.5.2 HVAC Mode Scheduler .................................................................................... 34 2.5.3 DHW Mode Scheduler ...................................................................................... 34 2.5.4 DHW Circulation Pump Scheduler ................................................................... 35 2.5.5 Absolute Room Temperature Setpoint Scheduler............................................. 35

© C i h 1999 2022 A i i A li i i i 02 03 02 4 f 3


-----

### 1 Introduction

#### 1.1 Scope
This document specifies the Property Identifiers for LTE-Mode Process Data (runtime interworking) and
Parameters / Diagnostic data used in the data-interfaces of HVAC General Functional Blocks. This
document is part of the Convergence HVAC Application Interworking Standard.

#### 1.2 Structure of the document
The chapters of the document is chosen in order to give a relation to:
Volume 7 Application Descriptions
Part 10 HVAC General Functional Blocks

So:
Chapter 2.1 of this document corresponds to Chapter 1 of Part 10
Chapter 2.2 of this document corresponds to Chapter 2 of Part 10
Chapter 2.3 of this document corresponds to Chapter 3 of Part 10
Chapter 2.4 of this document corresponds to Chapter 4 of Part 10
Chapter 2.5 of this document corresponds to Chapter 5 of Part 10

Within these chapters the subchapters again correspond:
Chapter 2.1.5 of this document corresponds to chapter 3.5 of Chapter 1 of Part 10
Chapter 2.3.7 of this document corresponds to chapter 3.7 of Chapter 3 of Part 10

© C i h 1999 2022 A i i A li i i i 02 03 02 f 3


-----

### 2 HVAC Property Identifiers

#### 2.1 Sensors

##### 2.1.1 Empty
Due to backward compatibility with other and former documents.

##### 2.1.2 Outside Temperature Sensor
**Object Name:** **OTS**
**Object Type:** **320**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempOutside DPT_HVACTempAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 OutsideSensorZone DPT_UcountValue8_Z 202.002

111 TempCorrValue DPT_TempHVACRel_Z 205.101
112 TempCOVCondition DPT_TempHVACRel_Z 205.101
113 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
114 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100

##### 2.1.3 Room Temperature Sensor
**Object Name:** **RTS**
**Object Type:** **321**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempRoom DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002

111 TempCorrValue DPT_TempHVACRel_Z 205.101
112 TempCOVCondition DPT_TempHVACRel_Z 205.101
113 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
114 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100

© C i h 1999 2022 A i i A li i i i 02 03 02 6 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempOutside|DPTHVACTempAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|OutsideSensorZone|DPTUcountValue8Z|202.002|
|||__||
|111|TempCorrValue|DPTTempHVACRelZ|205.101|
|112|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|113|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|114|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempRoom|DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|TempCorrValue|DPTTempHVACRelZ|205.101|
|112|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|113|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|114|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|||__||


-----

##### 2.1.4 Supply Air Temperature Sensor
**Object Name:** **SATS**
**Object Type:** **322**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempSupplyAir DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 TempCorrValue DPT_TempHVACRel_Z 205.101
112 TempCOVCondition DPT_TempHVACRel_Z 205.101
113 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
114 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100

##### 2.1.5 Return Air Temperature Sensor
**Object Name:** **RNATS**
**Object Type:** **323**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempReturnAir DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 TempCorrValue DPT_TempHVACRel_Z 205.101
112 TempCOVCondition DPT_TempHVACRel_Z 205.101
113 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
114 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100

© C i h 1999 2022 A i i A li i i i 02 03 02 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempSupplyAir|DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|TempCorrValue|DPTTempHVACRelZ|205.101|
|112|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|113|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|114|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempReturnAir|DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|TempCorrValue|DPTTempHVACRelZ|205.101|
|112|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|113|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|114|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|||__||


-----

##### 2.1.6 Flow Water Temperature Sensor
**Object Name:** **FWTS**
**Object Type:** **324**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWater DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 DistrSegmH DPT_UcountValue8_Z 202.002
105 DistrSegmC DPT_UcountValue8_Z 202.002
106 ProdSegmH DPT_UcountValue8_Z 202.002
107 ProdSegmC DPT_UcountValue8_Z 202.002
108 GenPeripheral DPT_UcountValue16_Z 203.012

111 TempCorrValue DPT_TempHVACRel_Z 205.101
112 TempCOVCondition DPT_TempHVACRel_Z 205.101
113 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
114 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100

##### 2.1.7 Return Water Temperature Sensor 
**Object Name:** **RNWTS**
**Object Type:** **325**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempReturnWater DPT_HVACTempAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 DistrSegmH DPT_UcountValue8_Z 202.002
105 DistrSegmC DPT_UcountValue8_Z 202.002
106 ProdSegmH DPT_UcountValue8_Z 202.002
107 ProdSegmC DPT_UcountValue8_Z 202.002
108 GenPeripheral DPT_UcountValue16_Z 203.012

111 TempCorrValue DPT_TempHVACRel_Z 205.101
112 TempCOVCondition DPT_TempHVACRel_Z 205.101
113 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
114 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100

© C i h 1999 2022 A i i A li i i i 02 03 02 8 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWater|DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|DistrSegmH|__<br>DPTUcountValue8Z|202.002|
|105|DistrSegmC|__<br>DPTUcountValue8Z|202.002|
|106|ProdSegmH|__<br>DPTUcountValue8Z|202.002|
|107|ProdSegmC|__<br>DPTUcountValue8Z|202.002|
|108|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|TempCorrValue|DPTTempHVACRelZ|205.101|
|112|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|113|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|114|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempReturnWater|DPTHVACTempAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|DistrSegmH|__<br>DPTUcountValue8Z|202.002|
|105|DistrSegmC|__<br>DPTUcountValue8Z|202.002|
|106|ProdSegmH|__<br>DPTUcountValue8Z|202.002|
|107|ProdSegmC|__<br>DPTUcountValue8Z|202.002|
|108|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|TempCorrValue|DPTTempHVACRelZ|205.101|
|112|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|113|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|114|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|||__||


-----

##### 2.1.8 Water Change Over Status Sensor
**Object Name:** **WCOS**
**Object Type:** **342**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 ChangeOverStatusWater DPT_Heat/Cool_Z 200.100

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmH DPT_UcountValue8_Z 202.002
102 DistrSegmC DPT_UcountValue8_Z 202.002
103 GenPeripheral DPT_UcountValue16_Z 203.012

111 TempHeatingLevel DPT_TempHVACAbs_Z 205.100
112 TempCoolingLevel DPT_TempHVACAbs_Z 205.100
113 SwitchDefinitionHeat/Cool DPT_Invert 1.012

##### 2.1.9 Wind Speed Sensor (see Volume 7, Part 50)
**Object Name:** **WSS**
**Object Type:** **347**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 WindSpeed DPT_WindSpeed_Z 203.101

Parameters and Diagnostic Data (individual addressing only)
101 OutsideSensorZone DPT_UcountValue8_Z 202.002

112 WindSpeedCOVCondition DPT_WindSpeed_Z 203.101
113 WindSpeedAlarmLimit DPT_WindSpeed_Z 203.101

© C i h 1999 2022 A i i A li i i i 02 03 02 9 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|ChangeOverStatusWater|DPTHeat/CoolZ|200.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmH|DPTUcountValue8Z|202.002|
|102|DistrSegmC|__<br>DPTUcountValue8Z|202.002|
|103|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|TempHeatingLevel|DPTTempHVACAbsZ|205.100|
|112|TempCoolingLevel|__<br>DPTTempHVACAbsZ|205.100|
|113|SwitchDefinitionHeat/Cool|__<br>DPTInvert|1.012|
|||_||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|WindSpeed|DPTWindSpeedZ|203.101|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|OutsideSensorZone|DPTUcountValue8Z|202.002|
|||__||
|112|WindSpeedCOVCondition|DPTWindSpeedZ|203.101|
|113|WindSpeedAlarmLimit|__<br>DPTWindSpeedZ|203.101|
|||__||


-----

##### 2.1.10 Sun Intensity Sensor
**Object Name:** **SIS**
**Object Type:** **348**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 SunIntensity DPT_SunIntensity_Z 203.102

Parameters and Diagnostic Data (individual addressing only)
101 OutsideSensorZone DPT_UcountValue8_Z 202.002

112 SunIntensityCOVCondition DPT_SunIntensity_Z 203.102
113 SunIntensityAlarmLimit DPT_SunIntensity_Z 203.102

##### 2.1.11 Window Switch
**Object Name:** **WOS**
**Object Type:** **343**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 WindowStatus DPT_Window_Door 1.019
52 WindowSwitch DPT_Window_Door 1.019

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002

111 SwitchDefinitionWindow DPT_Invert 1.012
112 Delay DPT_TimePeriodSec 07.005

© C i h 1999 2022 A i i A li i i i 02 03 02 10 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|SunIntensity|DPTSunIntensityZ|203.102|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|OutsideSensorZone|DPTUcountValue8Z|202.002|
|||__||
|112|SunIntensityCOVCondition|DPTSunIntensityZ|203.102|
|113|SunIntensityAlarmLimit|__<br>DPTSunIntensityZ|203.102|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|WindowStatus|DPTWindowDoor|1.019|
|52|WindowSwitch|__<br>DPTWindowDoor|1.019|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|SwitchDefinitionWindow|DPTInvert|1.012|
|112|Delay|_<br>DPTTimePeriodSec|07.005|
|||_||


-----

##### 2.1.12 Presence Detector
**Object Name:** **PRD**
**Object Type:** **345**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 PresenceStatus DPT_Occupancy 1.018

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002

111 SwitchDefinitionPresence DPT_Invert 1.012
112 SwitchOnDelay DPT_TimePeriodSec 7.005
113 SwitchOffDelay DPT_TimePeriodSec 7.005

##### 2.1.13 Outside AQ Sensor
**Object Name:** **OAQS**
**Object Type:** **330**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 AQOutside DPT_HVACAirQual_Z 203.100

Parameters and Diagnostic Data (individual addressing only)
101 OutsideSensorZone DPT_UcountValue8_Z 202.002

111 AQCorrValue DPT_HVACAirQual_Z 203.100
112 AQCOVValue DPT_HVACAirQual_Z 203.100
113 AQAlarmLimit DPT_HVACAirQual_Z 203.100

© C i h 1999 2022 A i i A li i i i 02 03 02 11 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|PresenceStatus|DPTOccupancy|1.018|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|SwitchDefinitionPresence|DPTInvert|1.012|
|112|SwitchOnDelay|_<br>DPTTimePeriodSec|7.005|
|113|SwitchOffDelay|_<br>DPTTimePeriodSec|7.005|
|||_||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|AQOutside|DPTHVACAirQualZ|203.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|OutsideSensorZone|DPTUcountValue8Z|202.002|
|||__||
|111|AQCorrValue|DPTHVACAirQualZ|203.100|
|112|AQCOVValue|__<br>DPTHVACAirQualZ|203.100|
|113|AQAlarmLimit|__<br>DPTHVACAirQualZ|203.100|
|||__||


-----

##### 2.1.14 Room AQ Sensor
**Object Name:** **RAQS**
**Object Type:** **331**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 AQRoom DPT_HVACAirQual_Z 203.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 AQCorrValue DPT_HVACAirQual_Z 203.100
112 AQCOVValue DPT_HVACAirQual_Z 203.100
113 AQAlarmLimit DPT_HVACAirQual_Z 203.100

##### 2.1.15 Supply AQ Sensor
**Object Name:** **SAQS**
**Object Type:** **332**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 AQSupplyAir DPT_HVACAirQual_Z 203.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 AQCorrValue DPT_HVACAirQual_Z 203.100
112 AQCOVValue DPT_HVACAirQual_Z 203.100
113 AQAlarmLimit DPT_HVACAirQual_Z 203.100

© C i h 1999 2022 A i i A li i i i 02 03 02 12 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|AQRoom|DPTHVACAirQualZ|203.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|AQCorrValue|DPTHVACAirQualZ|203.100|
|112|AQCOVValue|__<br>DPTHVACAirQualZ|203.100|
|113|AQAlarmLimit|__<br>DPTHVACAirQualZ|203.100|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|AQSupplyAir|DPTHVACAirQualZ|203.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|AQCorrValue|DPTHVACAirQualZ|203.100|
|112|AQCOVValue|__<br>DPTHVACAirQualZ|203.100|
|113|AQAlarmLimit|__<br>DPTHVACAirQualZ|203.100|
|||__||


-----

##### 2.1.16 Return AQ Sensor
**Object Name:** **RNAQS**
**Object Type:** **333**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 AQReturnAir DPT_HVACAirQual_Z 203.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 AQCorrValue DPT_HVACAirQual_Z 203.100
112 AQCOVValue DPT_HVACAirQual_Z 203.100
113 AQAlarmLimit DPT_HVACAirQual_Z 203.100

##### 2.1.17 Supply Air Relative Humidity Sensor
**Object Name:** **SARHS**
**Object Type:** **338**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HumRelSupplyAir DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 HumRelCorrValue DPT_RelValue_Z 202.001
112 HumRelCOVValue DPT_RelValue_Z 202.001
113 HumRelAlarmLimitUpper DPT_RelValue_Z 202.001
114 HumRelAlarmLimitLower DPT_RelValue_Z 202.001

© C i h 1999 2022 A i i A li i i i 02 03 02 13 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|AQReturnAir|DPTHVACAirQualZ|203.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|AQCorrValue|DPTHVACAirQualZ|203.100|
|112|AQCOVValue|__<br>DPTHVACAirQualZ|203.100|
|113|AQAlarmLimit|__<br>DPTHVACAirQualZ|203.100|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HumRelSupplyAir|DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|HumRelCorrValue|DPTRelValueZ|202.001|
|112|HumRelCOVValue|__<br>DPTRelValueZ|202.001|
|113|HumRelAlarmLimitUpper|__<br>DPTRelValueZ|202.001|
|114|HumRelAlarmLimitLower|__<br>DPTRelValueZ|202.001|
|||__||


-----

##### 2.1.18 Return Air Relative Humidity Sensor
**Object Name:** **RNARHS**
**Object Type:** **339**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HumRelReturnAir DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 HumRelCorrValue DPT_RelValue_Z 202.001
112 HumRelCOVValue DPT_RelValue_Z 202.001
113 HumRelAlarmLimitUpper DPT_RelValue_Z 202.001
114 HumRelAlarmLimitLower DPT_RelValue_Z 202.001

##### 2.1.19 Outside Relative Humidity Sensor
**Object Name:** **ORHS**
**Object Type:** **336**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HumRelOutsidw DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 OutsideSensorZone DPT_UcountValue8_Z 202.002

111 HumRelCorrValue DPT_RelValue_Z 202.001
112 HumRelCOVValue DPT_RelValue_Z 202.001
113 HumRelAlarmLimitUpper DPT_RelValue_Z 202.001
114 HumRelAlarmLimitLower DPT_RelValue_Z 202.001

© C i h 1999 2022 A i i A li i i i 02 03 02 14 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HumRelReturnAir|DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|HumRelCorrValue|DPTRelValueZ|202.001|
|112|HumRelCOVValue|__<br>DPTRelValueZ|202.001|
|113|HumRelAlarmLimitUpper|__<br>DPTRelValueZ|202.001|
|114|HumRelAlarmLimitLower|__<br>DPTRelValueZ|202.001|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HumRelOutsidw|DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|OutsideSensorZone|DPTUcountValue8Z|202.002|
|||__||
|111|HumRelCorrValue|DPTRelValueZ|202.001|
|112|HumRelCOVValue|__<br>DPTRelValueZ|202.001|
|113|HumRelAlarmLimitUpper|__<br>DPTRelValueZ|202.001|
|114|HumRelAlarmLimitLower|__<br>DPTRelValueZ|202.001|
|||__||


-----

##### 2.1.20 Room Relative Humidity Sensor
**Object Name:** **RRHS**
**Object Type:** **337**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HumRelRoom DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 HumRelCorrValue DPT_RelValue_Z 202.001
112 HumRelCOVValue DPT_RelValue_Z 202.001
113 HumRelAlarmLimitUpper DPT_RelValue_Z 202.001
114 HumRelAlarmLimitLower DPT_RelValue_Z 202.001

##### 2.1.21 Condenser Flow Water Temperature Sensor
**Object Name:** **CFWTS**
**Object Type:** **326**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterCond DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmC DPT_UcountValue8_Z 202.002
102 GenPeripheral DPT_UcountValue16_Z 203.012

111 AQCorrValue DPT_HVACAirQual_Z 203.100
112 AQCOVValue DPT_HVACAirQual_Z 203.100
113 AQAlarmLimitUpper DPT_HVACAirQual_Z 203.100
114 AQAlarmLimitLower DPT_HVACAirQual_Z 203.100

© C i h 1999 2022 A i i A li i i i 02 03 02 1 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HumRelRoom|DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|HumRelCorrValue|DPTRelValueZ|202.001|
|112|HumRelCOVValue|__<br>DPTRelValueZ|202.001|
|113|HumRelAlarmLimitUpper|__<br>DPTRelValueZ|202.001|
|114|HumRelAlarmLimitLower|__<br>DPTRelValueZ|202.001|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterCond|DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmC|DPTUcountValue8Z|202.002|
|102|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|AQCorrValue|DPTHVACAirQualZ|203.100|
|112|AQCOVValue|__<br>DPTHVACAirQualZ|203.100|
|113|AQAlarmLimitUpper|__<br>DPTHVACAirQualZ|203.100|
|114|AQAlarmLimitLower|__<br>DPTHVACAirQualZ|203.100|
|||__||


-----

##### 2.1.22 Condenser Return Water Temperature Sensor
**Object Name:** **CRNWTS**
**Object Type:** **327**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempReturnWaterCond DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmC DPT_UcountValue8_Z 202.002
102 GenPeripheral DPT_UcountValue16_Z 203.012

111 AQCorrValue DPT_HVACAirQual_Z 203.100
112 AQCOVValue DPT_HVACAirQual_Z 203.100
113 AQAlarmLimitUpper DPT_HVACAirQual_Z 203.100
114 AQAlarmLimitLower DPT_HVACAirQual_Z 203.100

##### 2.1.23 Air Change Over Status Sensor
**Object Name:** **ACOS**
**Object Type:** **341**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 ChangeOverStatusAir DPT_Heat/Cool_Z 200.100

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmV DPT_UcountValue8_Z 202.002
103 GenPeripheral DPT_UcountValue16_Z 203.012

111 TempHeatingLevel DPT_TempHVACAbs_Z 205.100
112 TempCoolingLevel DPT_TempHVACAbs_Z 205.100
113 SwitchDefinitionHeat/Cool DPT_Invert 1.012

© C i h 1999 2022 A i i A li i i i 02 03 02 16 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempReturnWaterCond|DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmC|DPTUcountValue8Z|202.002|
|102|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|AQCorrValue|DPTHVACAirQualZ|203.100|
|112|AQCOVValue|__<br>DPTHVACAirQualZ|203.100|
|113|AQAlarmLimitUpper|__<br>DPTHVACAirQualZ|203.100|
|114|AQAlarmLimitLower|__<br>DPTHVACAirQualZ|203.100|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|ChangeOverStatusAir|DPTHeat/CoolZ|200.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmV|DPTUcountValue8Z|202.002|
|103|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|TempHeatingLevel|DPTTempHVACAbsZ|205.100|
|112|TempCoolingLevel|__<br>DPTTempHVACAbsZ|205.100|
|113|SwitchDefinitionHeat/Cool|__<br>DPTInvert|1.012|
|||_||


-----

##### 2.1.24 Dew Point Status Sensor
**Object Name:** **DPS**
**Object Type:** **344**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 DewPointStatus DPT_Alarm 1.005

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002

111 SwitchDefinitionDewPoint DPT_Invert 1.012

##### 2.1.25 Discharge Air Temperature Sensor
**Object Name:** **DATS**
**Object Type:** **328**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempDischargeAir DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 TempCorrValue DPT_TempHVACRel_Z 205.101
112 TempCOVCondition DPT_TempHVACRel_Z 205.101
113 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
114 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100

© C i h 1999 2022 A i i A li i i i 02 03 02 1 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|DewPointStatus|DPTAlarm|1.005|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|SwitchDefinitionDewPoint|DPTInvert|1.012|
|||_||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempDischargeAir|DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|TempCorrValue|DPTTempHVACRelZ|205.101|
|112|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|113|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|114|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|||__||


-----

##### 2.1.26 Floor Temperature Sensor
**Object Name:** **FTS**
**Object Type:** **329**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempFloor DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 TempCorrValue DPT_TempHVACRel_Z 205.101
112 TempCOVCondition DPT_TempHVACRel_Z 205.101
113 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
114 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100

#### 2.2 HMI

##### 2.2.1 Empty
Due to backward compatibility with other and former documents.

© C i h 1999 2022 A i i A li i i i 02 03 02 18 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFloor|DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|TempCorrValue|DPTTempHVACRelZ|205.101|
|112|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|113|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|114|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|||__||


-----

##### 2.2.2 User HVAC Room Settings
**Object Name:** **UHRS**
**Object Type:** **384**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempRoomSetpUserAbs DPT_TempHVACAbs_Z 205.100
52 TempRoomSetpUserOffset DPT_TempHVACRel_Z 205.101
53 ComfortProlongUser DPT_Trigger 1.017
54 ComfortPushbutton DPT_Trigger 1.017
55 HVACModeUser DPT_HVACMode_Z 201.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002

111 TempCOVCondition DPT_TempHVACRel_Z 205.101
112 RelativeSetpointRange DPT_TempHVACRel_Z 205.101

##### 2.2.3 User HVAC Display
**Object Name:** **UHD**
**Object Type:** **390**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 OutsideSensorZone DPT_UcountValue8_Z 202.002

© C i h 1999 2022 A i i A li i i i 02 03 02 19 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempRoomSetpUserAbs|DPTTempHVACAbsZ|205.100|
|52|TempRoomSetpUserOffset|__<br>DPTTempHVACRelZ|205.101|
|53|ComfortProlongUser|__<br>DPTTrigger|1.017|
|54|ComfortPushbutton|_<br>DPTTrigger|1.017|
|55|HVACModeUser|_<br>DPTHVACModeZ|201.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|TempCOVCondition|DPTTempHVACRelZ|205.101|
|112|RelativeSetpointRange|__<br>DPTTempHVACRelZ|205.101|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|||__||


-----

##### 2.2.4 User Presence Switch
**Object Name:** **UPS**
**Object Type:** **391**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 PresenceStatus DPT_Occupancy 1.018

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002

##### 2.2.5 User Fan Speed Setting
**Object Name:** **UFS**
**Object Type:** **393**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 FanSpeedUser DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 NumberOfSteps DPT_Value_1_Ucount 5.010
112 FanSpeedMin DPT_RelValue_Z 202.001
113 FanSpeedMax DPT_RelValue_Z 202.001

© C i h 1999 2022 A i i A li i i i 02 03 02 20 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|PresenceStatus|DPTOccupancy|1.018|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|FanSpeedUser|DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|NumberOfSteps|DPTValue1Ucount|5.010|
|112|FanSpeedMin|___<br>DPTRelValueZ|202.001|
|113|FanSpeedMax|__<br>DPTRelValueZ|202.001|
|||__||


-----

##### 2.2.6 User Air Quality Setpoint Setting
**Object Name:** **UAQSS**
**Object Type:** **387**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 AQSetpointUser DPT_HVACAirQual_Z 203.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012
105 OutsideSensorZone DPT_UcountValue8_Z 202.002

##### 2.2.7 User Relative Air Humidity Setpoint Setting
**Object Name:** **URHSS**
**Object Type:** **388**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HumRelSetpointUser DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012
105 OutsideSensorZone DPT_UcountValue8_Z 202.002

© C i h 1999 2022 A i i A li i i i 02 03 02 21 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|AQSetpointUser|DPTHVACAirQualZ|203.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|105|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HumRelSetpointUser|DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|105|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|||__||


-----

##### 2.2.8 User Enable Alternative Room Temperature Setpoint
**Object Name:** **UEARTS**
**Object Type:** **396**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 EnableTempRoomSetpAlt DPT_Enable 1.003

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002

##### 2.2.9 Room Temperature Setpoint Setting Absolute
**Object Name:** **RTSA**
**Object Type:** **385**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempRoomSetpAbs DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002

##### 2.2.10 User Change Over setting
**Object Name:** **UCOS**
**Object Type:** **392**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 UserChangeOverMode DPT_ChangeOverMode 20.107

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 SubZone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

© C i h 1999 2022 A i i A li i i i 02 03 02 22 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|EnableTempRoomSetpAlt|DPTEnable|1.003|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempRoomSetpAbs|DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|UserChangeOverMode|DPTChangeOverMode|20.107|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|SubZone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||


-----

#### 2.3 Actuators

##### 2.3.1 Empty
Due to backward compatibility with other and former documents.

##### 2.3.2 HVAC Valve Actuator
**Object Name:** **HVA**
**Object Type:** **352**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 ActPosSetpHeatStageA DPT_RelValue_Z 202.001
52 ActPosSetpHeatStageB DPT_RelValue_Z 202.001
53 ActPosSetpCoolStageA DPT_RelValue_Z 202.001
54 ActPosSetpCoolStageB DPT_RelValue_Z 202.001
55 ActPosHeatStageA DPT_StatusAct 207.105
56 ActPosHeatStageB DPT_StatusAct 207.105
57 ActPosCoolStageA DPT_StatusAct 207.105
58 ActPosCoolStageB DPT_StatusAct 207.105
59 ActPosHeatCool DPT_StatusAct 207.105

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 ValveMode DPT_ValveMode 20.108

© C i h 1999 2022 A i i A li i i i 02 03 02 23 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|ActPosSetpHeatStageA|DPTRelValueZ|202.001|
|52|ActPosSetpHeatStageB|__<br>DPTRelValueZ|202.001|
|53|ActPosSetpCoolStageA|__<br>DPTRelValueZ|202.001|
|54|ActPosSetpCoolStageB|__<br>DPTRelValueZ|202.001|
|55|ActPosHeatStageA|__<br>DPTStatusAct|207.105|
|56|ActPosHeatStageB|_<br>DPTStatusAct|207.105|
|57|ActPosCoolStageA|_<br>DPTStatusAct|207.105|
|58|ActPosCoolStageB|_<br>DPTStatusAct|207.105|
|59|ActPosHeatCool|_<br>DPTStatusAct|207.105|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|ValveMode|DPTValveMode|20.108|
|||_||


-----

##### 2.3.3 Air Damper Actuator
**Object Name:** **ADA**
**Object Type:** **362**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 ActPosSetpFreshAir DPT_RelValue_Z 202.001
52 ActPosSetpSupplyAir DPT_RelValue_Z 202.001
53 ActPosSetpExtractAir DPT_RelValue_Z 202.001

55 ActPosFreshAir DPT_StatusAct 207.105
56 ActPosSupplyAir DPT_StatusAct 207.105
57 ActPosExtractAir DPT_StatusAct 207.105

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 DamperMode DPT_DamperMode 20.109

##### 2.3.4 Fan Speed Actuator
**Object Name:** **FSA**
**Object Type:** **372**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 FanSpeedSetp DPT_RelValue_Z 202.001

55 FanSpeed DPT_RelValue_Z 202.001
56 FanStep DPT_UcountValue8_Z 202.002

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

© C i h 1999 2022 A i i A li i i i 02 03 02 24 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|ActPosSetpFreshAir|DPTRelValueZ|202.001|
|52|ActPosSetpSupplyAir|__<br>DPTRelValueZ|202.001|
|53|ActPosSetpExtractAir|__<br>DPTRelValueZ|202.001|
|||__||
|55|ActPosFreshAir|DPTStatusAct|207.105|
|56|ActPosSupplyAir|_<br>DPTStatusAct|207.105|
|57|ActPosExtractAir|_<br>DPTStatusAct|207.105|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|DamperMode|DPTDamperMode|20.109|
|||_||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|FanSpeedSetp|DPTRelValueZ|202.001|
|||__||
|55|FanSpeed|DPTRelValueZ|202.001|
|56|FanStep|__<br>DPTUcountValue8Z|202.002|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||


-----

##### 2.3.5 Compressor Actuator
**Object Name:** **CPA**
**Object Type:** **373**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 CompressorPosSetp DPT_RelValue_Z 202.001

55 CompressorPosEff DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012
105 t.b.d. t.b.d. by DEH

111 MinRunTime DPT_TimePeriodSec 7.005
112 MinDwellTime DPT_TimePeriodSec 7.005

##### 2.3.6 Electrical Heating Element Actuator
**Object Name:** **EHEA**
**Object Type:** **369**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 ON/OFFHeatStageA DPT_Switch 1.001
52 ActPosSetpHeatStageA DPT_RelValue_Z 202.001
53 ActPosSetpHeatStageB DPT_RelValue_Z 202.001

55 ON/OFFHeatStageAEff DPT_Switch 1.001
56 ActPosHeatStageA DPT_StatusAct 207.105
57 ActPosHeatStageB DPT_StatusAct 207.105
58 DisableFan DPT_Enable 1.003

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012
105 t.b.d. t.b.d. by DEH

111 HeaterMode DPT_HeaterMode 20.110

© C i h 1999 2022 A i i A li i i i 02 03 02 2 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|CompressorPosSetp|DPTRelValueZ|202.001|
|||__||
|55|CompressorPosEff|DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|105|t.b.d.|__<br>t.b.d. by DEH||
|||||
|111|MinRunTime|DPTTimePeriodSec|7.005|
|112|MinDwellTime|_<br>DPTTimePeriodSec|7.005|

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|ON/OFFHeatStageA|DPTSwitch|1.001|
|52|ActPosSetpHeatStageA|_<br>DPTRelValueZ|202.001|
|53|ActPosSetpHeatStageB|__<br>DPTRelValueZ|202.001|
|||__||
|55|ON/OFFHeatStageAEff|DPTSwitch|1.001|
|56|ActPosHeatStageA|_<br>DPTStatusAct|207.105|
|57|ActPosHeatStageB|_<br>DPTStatusAct|207.105|
|58|DisableFan|_<br>DPTEnable|1.003|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|105|t.b.d.|__<br>t.b.d. by DEH||
|||||
|111|HeaterMode|DPTHeaterMode|20.110|


-----

##### 2.3.7 HVAC ON/OFF Actuator
**Object Name:** **HOOA**
**Object Type:** **353**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 ActStatSetpHeatStageA DPT_RelValue_Z 202.001
52 ActStatSetpHeatStageB DPT_RelValue_Z 202.001
53 ActStatSetpCoolStageA DPT_RelValue_Z 202.001
54 ActStatSetpCoolStageB DPT_RelValue_Z 202.001
55 ActStatHeatStageA DPT_Switch 1.001
56 ActStatHeatStageB DPT_Switch 1.001
57 ActStatCoolStageA DPT_Switch 1.001
58 ActStatCoolStageB DPT_Switch 1.001
59 ActStatHeatCool DPT_Switch 1.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 ValveMode DPT_ValveMode 20.108

#### 2.4 Common

##### 2.4.1 Empty
Due to backward compatibility with other and former documents.

© C i h 1999 2022 A i i A li i i i 02 03 02 26 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|ActStatSetpHeatStageA|DPTRelValueZ|202.001|
|52|ActStatSetpHeatStageB|__<br>DPTRelValueZ|202.001|
|53|ActStatSetpCoolStageA|__<br>DPTRelValueZ|202.001|
|54|ActStatSetpCoolStageB|__<br>DPTRelValueZ|202.001|
|55|ActStatHeatStageA|__<br>DPTSwitch|1.001|
|56|ActStatHeatStageB|_<br>DPTSwitch|1.001|
|57|ActStatCoolStageA|_<br>DPTSwitch|1.001|
|58|ActStatCoolStageB|_<br>DPTSwitch|1.001|
|59|ActStatHeatCool|_<br>DPTSwitch|1.001|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|ValveMode|DPTValveMode|20.108|
|||_||


-----

##### 2.4.2 Programme to HVAC-Mode Conversion
**Object Name:** **PHC**
**Object Type:** **104**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HVACMode DPT_HVACMode_Z 201.100
52 HVACModeNext DPT_HVACModeNext 206.100
53 EnableComfort DPT_Enable 1.003
54 ContrMode DPT_HVACContrMode_Z 201.104

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_u (schedule) DPT_UcountValue8_Z 202.002
102 Room_v (schedule) DPT_UcountValue8_Z 202.002
103 Subzone_w (schedule) DPT_UcountValue8_Z 202.002
104 Apartment_i (Bldg/OccMode) DPT_UcountValue8_Z 202.002
105 Room_j (Bldg/OccMode) DPT_UcountValue8_Z 202.002
106 Subzone_k (Bldg/OccMode) DPT_UcountValue8_Z 202.002

© C i h 1999 2022 A i i A li i i i 02 03 02 2 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HVACMode|DPTHVACModeZ|201.100|
|52|HVACModeNext|__<br>DPTHVACModeNext|206.100|
|53|EnableComfort|_<br>DPTEnable|1.003|
|54|ContrMode|_<br>DPTHVACContrModeZ|201.104|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentu<br>(schedule)|DPTUcountValue8Z|202.002|
|102|_<br>Roomv<br>(schedule)|__<br>DPTUcountValue8Z|202.002|
|103|_<br>Subzonew<br>(schedule)|__<br>DPTUcountValue8Z|202.002|
|104|_<br>Apartmenti<br>(Bldg/OccMode)|__<br>DPTUcountValue8Z|202.002|
|105|_<br>Roomj <br>(Bldg/OccMode)|__<br>DPTUcountValue8Z|202.002|
|106|_<br>Subzonek<br>(Bldg/OccMode)|__<br>DPTUcountValue8Z|202.002|
||_|__||


-----

##### 2.4.3 HVAC Optimiser
**Object Name:** **HVACOPT**
**Object Type:** **115**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HVACModeOptim DPT_HVACMode_Z 201.100
52 TempRoomSetpOptimHeatShift DPT_TempHVACRel_Z 205.101
53 DHWModeOptim DPT_DHWMode_Z 201.102
54 TempDHWSetpOptimShift DPT_TempHVACRel_Z 205.101
55 TempRoomSetpOptimCoolShift DPT_TempHVACRel_Z 205.101
56 ContrMode DPT_HVACContrMode_Z 201.104
57 EnableHeat DPT_EnableH/Cstage_Z 201.105
58 SplitHeat DPT_Percent_U8 5.004
59 EnableCool DPT_EnableH/Cstage_Z 201.105
60 SplitCool DPT_Percent_U8 5.004
61 DisableDamper DPT_Enable 1.003
62 TempRoomSetpSetHeatShift DPT_TempRoomSetpSetShift 212.100
63 TempRoomSetpSetCoolShift DPT_TempRoomSetpSetShift 212.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x DPT_UcountValue8_Z 202.002
102 Room_y DPT_UcountValue8_Z 202.002
103 Subzone_z DPT_UcountValue8_Z 202.002
104 DHW_Zone DPT_UcountValue8_Z 202.002
105 DistrSegmV DPT_UcountValue8_Z 202.002
106 Apartment_u DPT_UcountValue8_Z 202.002
107 Room_v DPT_UcountValue8_Z 202.002
108 Subzone_w DPT_UcountValue8_Z 202.002

© C i h 1999 2022 A i i A li i i i 02 03 02 28 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HVACModeOptim|DPTHVACModeZ|201.100|
|52|TempRoomSetpOptimHeatShift|__<br>DPTTempHVACRelZ|205.101|
|53|DHWModeOptim|__<br>DPTDHWModeZ|201.102|
|54|TempDHWSetpOptimShift|__<br>DPTTempHVACRelZ|205.101|
|55|TempRoomSetpOptimCoolShift|__<br>DPTTempHVACRelZ|205.101|
|56|ContrMode|__<br>DPTHVACContrModeZ|201.104|
|57|EnableHeat|__<br>DPTEnableH/CstageZ|201.105|
|58|SplitHeat|__<br>DPTPercentU8|5.004|
|59|EnableCool|__<br>DPTEnableH/CstageZ|201.105|
|60|SplitCool|__<br>DPTPercentU8|5.004|
|61|DisableDamper|__<br>DPTEnable|1.003|
|62|TempRoomSetpSetHeatShift|_<br>DPTTempRoomSetpSetShift|212.100|
|63|TempRoomSetpSetCoolShift|_<br>DPTTempRoomSetpSetShift|212.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx|DPTUcountValue8Z|202.002|
|102|_<br>Roomy|__<br>DPTUcountValue8Z|202.002|
|103|_<br>Subzonez|__<br>DPTUcountValue8Z|202.002|
|104|_<br>DHWZone|__<br>DPTUcountValue8Z|202.002|
|105|_<br>DistrSegmV|__<br>DPTUcountValue8Z|202.002|
|106|Apartmentu|__<br>DPTUcountValue8Z|202.002|
|107|_<br>Roomv|__<br>DPTUcountValue8Z|202.002|
|108|_<br>Subzonew|__<br>DPTUcountValue8Z|202.002|
||_|__||


-----

##### 2.4.4 Room Setpoint Manager HVAC Mode Driven
**Object Name:** **RSMHD**
**Object Type:** **100**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HVACModeEff DPT_HVACMode_Z 201.100
52 HVACModeEffNext DPT_HVACModeNext 206.100
53 TempRoomSetpSetHeatEff [01] DTP_TempRoomSetpSet[01] 213.100
54 TempRoomSetpSetCoolEff [01] DTP_TempRoomSetpSet[01] 213.100
55 TempRoomSetpHeatEff DPT_TempHVACAbs_Z 205.100
56 TempRoomSetpCoolEff DPT_TempHVACAbs_Z 205.100
57 HVACModeUserEff DPT_HVACMode_Z 201.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x DPT_UcountValue8_Z 202.002
102 Room_y DPT_UcountValue8_Z 202.002
103 SubZone_z DPT_UcountValue8_Z 202.002
104 Apartment_u DPT_UcountValue8_Z 202.002
105 Room_v DPT_UcountValue8_Z 202.002
106 SubZone_w DPT_UcountValue8_Z 202.002
107 Apartment_m DPT_UcountValue8_Z 202.002
108 Room_n DPT_UcountValue8_Z 202.002
109 SubZone_o DPT_UcountValue8_Z 202.002

111 TempRoomSetpHeatBuildProt DPT_TempHVACAbs_Z 205.100
112 TempRoomSetpHeatEconomy DPT_TempHVACAbs_Z 205.100
113 TempRoomSetpHeatStandby DPT_TempHVACAbs_Z 205.100
114 TempRoomSetpHeatComfort DPT_TempHVACAbs_Z 205.100
115 TempRoomSetpCoolComfort DPT_TempHVACAbs_Z 205.100
116 TempRoomSetpCoolStandby DPT_TempHVACAbs_Z 205.100
117 TempRoomSetpCoolEconomy DPT_TempHVACAbs_Z 205.100
118 TempRoomSetpCoolBuildProt DPT_TempHVACAbs_Z 205.100
119 TimeComfort DPT_TimePeriodMin 7.006
120 DisableEnableComfort DPT_Enable 1.003
121 LimitLowerTempRoomSetp DPT_TempHVACAbs_Z 205.100
122 LimitUpperTempRoomSetp DPT_TempHVACAbs_Z 205.100

© C i h 1999 2022 A i i A li i i i 02 03 02 29 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HVACModeEff|DPTHVACModeZ|201.100|
|52|HVACModeEffNext|__<br>DPTHVACModeNext|206.100|
|53|TempRoomSetpSetHeatEff [01]|_<br>DTPTempRoomSetpSet[01]|213.100|
|54|TempRoomSetpSetCoolEff [01]|_<br>DTPTempRoomSetpSet[01]|213.100|
|55|TempRoomSetpHeatEff|_<br>DPTTempHVACAbsZ|205.100|
|56|TempRoomSetpCoolEff|__<br>DPTTempHVACAbsZ|205.100|
|57|HVACModeUserEff|__<br>DPTHVACModeZ|201.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx|DPTUcountValue8Z|202.002|
|102|_<br>Roomy|__<br>DPTUcountValue8Z|202.002|
|103|_<br>SubZonez|__<br>DPTUcountValue8Z|202.002|
|104|_<br>Apartmentu|__<br>DPTUcountValue8Z|202.002|
|105|_<br>Roomv|__<br>DPTUcountValue8Z|202.002|
|106|_<br>SubZonew|__<br>DPTUcountValue8Z|202.002|
|107|_<br>Apartmentm|__<br>DPTUcountValue8Z|202.002|
|108|_<br>Roomn|__<br>DPTUcountValue8Z|202.002|
|109|_<br>SubZoneo|__<br>DPTUcountValue8Z|202.002|
||_|__||
|111|TempRoomSetpHeatBuildProt|DPTTempHVACAbsZ|205.100|
|112|TempRoomSetpHeatEconomy|__<br>DPTTempHVACAbsZ|205.100|
|113|TempRoomSetpHeatStandby|__<br>DPTTempHVACAbsZ|205.100|
|114|TempRoomSetpHeatComfort|__<br>DPTTempHVACAbsZ|205.100|
|115|TempRoomSetpCoolComfort|__<br>DPTTempHVACAbsZ|205.100|
|116|TempRoomSetpCoolStandby|__<br>DPTTempHVACAbsZ|205.100|
|117|TempRoomSetpCoolEconomy|__<br>DPTTempHVACAbsZ|205.100|
|118|TempRoomSetpCoolBuildProt|__<br>DPTTempHVACAbsZ|205.100|
|119|TimeComfort|__<br>DPTTimePeriodMin|7.006|
|120|DisableEnableComfort|_<br>DPTEnable|1.003|
|121|LimitLowerTempRoomSetp|_<br>DPTTempHVACAbsZ|205.100|
|122|LimitUpperTempRoomSetp|__<br>DPTTempHVACAbsZ|205.100|
|||__||


-----

##### 2.4.5 Room Setpoint Manager Temperature Driven
**Object Name:** **RSMTD**
**Object Type:** **101**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempRoomSetpHeatEff DPT_TempHVACAbs_Z 205.100
52 TempRoomSetpHeatEffNext DPT_TempHVACAbsNext 220.100
53 TempRoomSetpCoolEff DPT_TempHVACAbs_Z 205.100
54 TempRoomSetpCoolEffNext DPT_TempHVACAbsNext 220.100
55 StatusTempRoomSetpEff DPT_StatusRoomSetp 20.113

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x DPT_UcountValue8_Z 202.002
102 Room_y DPT_UcountValue8_Z 202.002
103 SubZone_z DPT_UcountValue8_Z 202.002
104 Apartment_u DPT_UcountValue8_Z 202.002
105 Room_v DPT_UcountValue8_Z 202.002
106 SubZone_w DPT_UcountValue8_Z 202.002
107 Apartment_m DPT_UcountValue8_Z 202.002
108 Room_n DPT_UcountValue8_Z 202.002
109 SubZone_o DPT_UcountValue8_Z 202.002

111 TempRoomSetpHeatBuildProt DPT_TempHVACAbs_Z 205.100
112 TempRoomSetpCoolBuildProt DPT_TempHVACAbs_Z 205.100
113 TempRoomSetpHeatAltAbs DPT_TempHVACAbs_Z 205.100
114 TempRoomSetpCoolAltAbs DPT_TempHVACAbs_Z 205.100
115 TempRoomSetpAltOffset DPT_TempHVACRel_Z 205.101
116 TimeComfort DPT_TimePeriodMin 7.006
117 LimitLowerTempRoomSetp DPT_TempHVACAbs_Z 205.100
118 LimitUpperTempRoomSetp DPT_TempHVACAbs_Z 205.100

© C i h 1999 2022 A i i A li i i i 02 03 02 30 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempRoomSetpHeatEff|DPTTempHVACAbsZ|205.100|
|52|TempRoomSetpHeatEffNext|__<br>DPTTempHVACAbsNext|220.100|
|53|TempRoomSetpCoolEff|_<br>DPTTempHVACAbsZ|205.100|
|54|TempRoomSetpCoolEffNext|__<br>DPTTempHVACAbsNext|220.100|
|55|StatusTempRoomSetpEff|_<br>DPTStatusRoomSetp|20.113|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx|DPTUcountValue8Z|202.002|
|102|_<br>Roomy|__<br>DPTUcountValue8Z|202.002|
|103|_<br>SubZonez|__<br>DPTUcountValue8Z|202.002|
|104|_<br>Apartmentu|__<br>DPTUcountValue8Z|202.002|
|105|_<br>Roomv|__<br>DPTUcountValue8Z|202.002|
|106|_<br>SubZonew|__<br>DPTUcountValue8Z|202.002|
|107|_<br>Apartmentm|__<br>DPTUcountValue8Z|202.002|
|108|_<br>Roomn|__<br>DPTUcountValue8Z|202.002|
|109|_<br>SubZoneo|__<br>DPTUcountValue8Z|202.002|
||_|__||
|111|TempRoomSetpHeatBuildProt|DPTTempHVACAbsZ|205.100|
|112|TempRoomSetpCoolBuildProt|__<br>DPTTempHVACAbsZ|205.100|
|113|TempRoomSetpHeatAltAbs|__<br>DPTTempHVACAbsZ|205.100|
|114|TempRoomSetpCoolAltAbs|__<br>DPTTempHVACAbsZ|205.100|
|115|TempRoomSetpAltOffset|__<br>DPTTempHVACRelZ|205.101|
|116|TimeComfort|__<br>DPTTimePeriodMin|7.006|
|117|LimitLowerTempRoomSetp|_<br>DPTTempHVACAbsZ|205.100|
|118|LimitUpperTempRoomSetp|__<br>DPTTempHVACAbsZ|205.100|
|||__||


-----

##### 2.4.6 Setpoint Manager Air Quality
**Object Name:** **SMAQ**
**Object Type:** **102**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 AQSetpEff DPT_HVACAirQual 203.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 AQSetp DPT_HVACAirQual 203.100

##### 2.4.7 Setpoint Manager Relative Humidity
**Object Name:** **SMRH**
**Object Type:** **103**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HumRelSetpHumEff DPT_RelValue_Z 202.001
52 HumRelSetpDehumEff DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 HumRelSetpHum DPT_RelValue_Z 202.001
112 HumRelSetpDehum DPT_RelValue_Z 202.001

© C i h 1999 2022 A i i A li i i i 02 03 02 31 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|AQSetpEff|DPTHVACAirQual|203.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|AQSetp|DPTHVACAirQual|203.100|
|||_||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HumRelSetpHumEff|DPTRelValueZ|202.001|
|52|HumRelSetpDehumEff|__<br>DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|HumRelSetpHum|DPTRelValueZ|202.001|
|112|HumRelSetpDehum|__<br>DPTRelValueZ|202.001|


-----

##### 2.4.8 Setpoint Shift Load Shedding & Tariff
**Object Name:** **SSLSTA**
**Object Type:** **tbd**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51
52
53
54
55

Parameters and Diagnostic Data (individual addressing only)
101
102
103

##### 2.4.9 Building/Occ-Mode Source
**Object Name:** **BOS**
**Object Type:** **109**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 BuildingMode DPT_BuildingMode_Z 201.107
52 BuildingModeNext DPT_BuildingModeNext 206.105
53 OccMode DPT_OccMode 201.108
54 OccModeNext DPT_OccModeNext 206.104
55 ContrModeBO DPT_HVACContrMode_Z 201.104

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002

© C i h 1999 2022 A i i A li i i i 02 03 02 32 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51||||
|52||||
|53||||
|54||||
|55||||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101||||
|102||||
|103||||
|||||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|BuildingMode|DPTBuildingModeZ|201.107|
|52|BuildingModeNext|__<br>DPTBuildingModeNext|206.105|
|53|OccMode|_<br>DPTOccMode|201.108|
|54|OccModeNext|_<br>DPTOccModeNext|206.104|
|55|ContrModeBO|_<br>DPTHVACContrModeZ|201.104|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|||__||


-----

##### 2.4.10 HVAC Emergency Source
**Object Name:** **HVACEMS**
**Object Type:** **108**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 EmergMode DPT_EmergMode_Z 201.109

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 DistrSegmV DPT_UcountValue8_Z 202.002

##### 2.4.11 Position to ON/OFF Converter
**Object Name:** **POOC**
**Object Type:** **116**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 ActPosSetpHeatStageA DPT_RelValue_Z 202.001
52 ActPosSetpHeatStageB DPT_RelValue_Z 202.001
53 ActPosSetpCoolStageA DPT_RelValue_Z 202.001
54 ActPosSetpCoolStageB DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 GenPeripheral DPT_UcountValue16_Z 203.012

111 CycleTime DPT_TimePeriodMin 7.006

© C i h 1999 2022 A i i A li i i i 02 03 02 33 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|EmergMode|DPTEmergModeZ|201.109|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|DistrSegmV|__<br>DPTUcountValue8Z|202.002|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|ActPosSetpHeatStageA|DPTRelValueZ|202.001|
|52|ActPosSetpHeatStageB|__<br>DPTRelValueZ|202.001|
|53|ActPosSetpCoolStageA|__<br>DPTRelValueZ|202.001|
|54|ActPosSetpCoolStageB|__<br>DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|GenPeripheral|__<br>DPTUcountValue16Z|203.012|
|||__||
|111|CycleTime|DPTTimePeriodMin|7.006|
|||_||


-----

#### 2.5 Schedulers

##### 2.5.1 Empty

 2.5.2 HVAC Mode Scheduler 
**Object Name:** **HVACS**
**Object Type:** **110**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 HVACMode DPT_HVACMode_Z 201.100
52 HVACModeNext DPT_HVACModeNext 206.100
53 EnableComfort DPT_Enable 1.003

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002

##### 2.5.3 DHW Mode Scheduler
**Object Name:** **DHWS**
**Object Type:** **111**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 DHWMode DPT_DHWMode_Z 201.102
52 DHWModeNext DPT_DHWModeNext 206.102
53 EnableDHWPrep DPT_Enable 1.003

Parameters and Diagnostic Data (individual addressing only)
101 DHWZone DPT_UcountValue8_Z 202.002

© C i h 1999 2022 A i i A li i i i 02 03 02 34 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|HVACMode|DPTHVACModeZ|201.100|
|52|HVACModeNext|__<br>DPTHVACModeNext|206.100|
|53|EnableComfort|_<br>DPTEnable|1.003|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|DHWMode|DPTDHWModeZ|201.102|
|52|DHWModeNext|__<br>DPTDHWModeNext|206.102|
|53|EnableDHWPrep|_<br>DPTEnable|1.003|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DHWZone|DPTUcountValue8Z|202.002|
|||__||


-----

##### 2.5.4 DHW Circulation Pump Scheduler
**Object Name:** **DHWCPS**
**Object Type:** **112**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 EnableDHWCP DPT_Enable 1.003

Parameters and Diagnostic Data (individual addressing only)
101 DHWZone DPT_UcountValue8_Z 202.002

##### 2.5.5 Absolute Room Temperature Setpoint Scheduler
**Object Name:** **ARTSS**
**Object Type:** **113**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-Mode process data (runtime interworking, zone addressing and individual addressing)
51 TempRoomSetpAbs DPT_TempHVACAbs_Z 205.100
52 TempRoomSetpAbs Next DPT_TempHVACAbsNext 220.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002

© C i h 1999 2022 A i i A li i i i 02 03 02 3 f 3

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|EnableDHWCP|DPTEnable|1.003|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DHWZone|DPTUcountValue8Z|202.002|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|LTE-Mode process data (runtime interworking, zone addressing and individual addressing)|
|51|TempRoomSetpAbs|DPTTempHVACAbsZ|205.100|
|52|TempRoomSetpAbs Next|__<br>DPTTempHVACAbsNext|220.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|||__||


-----

