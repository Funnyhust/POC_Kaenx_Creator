# Application Description

## Ventilation, Air Conditioning and Cold Water

 Property Identifiers

Summary

This document is a part of the HVAC Application Interworking Standard.
It specifies the standard Property Identifiers for each VAC specific
Functional Block / Interface Object.

Version 01.02.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

0.1 2001.08.16 A. Hurschler document creation for VAC
0.2 2002.02.08 A. Hurschler document correction
1.0 2002.03.28 A. Hurschler TFI approved
0.3 2002.04.03 A. Hurschler document release for TFI assessment
1.1 2002.12.17 A. Hurschler update for handbook v1.1
1.1 2009.06.19 Update in view of publication in the KNX Specifications v2.0.
1.2.00 2010.11.29 Removed Parameters TempSupplyAirSetpMin and
TempSupplyAirSetpMax from SATC according conclusion of WGI topic

[WGI00061].
01.02.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

None.

Filename: 07_14_09 VAC PropertyID v01.02.01 AS.docx
Version: 01.02.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 16

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 2 f 16

|Version|Date|Modifications|
|---|---|---|
|0.1|2001.08.16|A. Hurschler document creation for VAC|
|0.2|2002.02.08|A. Hurschler document correction|
|1.0|2002.03.28|A. Hurschler TFIapproved|
|0.3|2002.04.03|A. Hurschler document release for TFIassessment|
|1.1|2002.12.17|A. Hurschler update for handbook v1.1|
|1.1|2009.06.19|Update in view of publication inthe KNXSpecifications v2.0.|
|1.2.00|2010.11.29|Removed Parameters TempSupplyAirSetpMin and<br>TempSupplyAirSetpMax from SATC according conclusion of WGI topic<br>[WGI00061].|
|01.02.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

##### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4

 2 Functional Block Auxiliary Heating Demand Percent (HDAUXER) .............................. 5

 3 Functional Block Heating Demand Transformer for air handling units (HDTAHU) .... 6

 4 Functional Block Chiller Control (CC) ............................................................................... 7

 5 Functional Block Cold Water Production Manager (CPM) ............................................. 8

 6 Functional Block Re-cooling Controller (CRC) ................................................................. 9

 7 Functional Block Cooling Flow Demand Manager (CFDM) .......................................... 10

 8 Functional Block Auxiliary Cooling Demand (CDAUX) ................................................ 11

 9 Functional Block Auxiliary Cooling Demand Percent (CDAUXER) ............................. 12

 10 Functional Block Cooling Demand Transformer for air handling units (CDTAHU) .. 13

 11 Functional Block Cooling Zone Controller (CZC) .......................................................... 14

 12 Functional Block Air Handling Unit Controller (AHUC) ............................................... 15

 13 Functional Block Supply Air Temperature Controller (SATC) ..................................... 16

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 3 f 16


-----

### 1 Introduction

#### 1.1 Scope
This document specifies the Property Identifiers for LTE-HEE Process Data (runtime interworking) and
Parameters / Diagnostic data used in the data-interfaces of HVAC Ventilation, Air Conditioning and Cold
Water (VAC) Functional Blocks. This document is part of the KNX HVAC Application Interworking
Standard.

The majority of these DPTs is usable in the LTE mode only. In the S-Mode interface the corresponding
data information is either not available or mapped to standard DPTs.

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 4 f 16


-----

### 2 Functional Block Auxiliary Heating Demand Percent (HDAUXER)
**Object Name:** **HDAUXPER**

**Object Type:** **146**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 EnergyDemHeatHDAUXPER DPT_ActPosDemAbs 207.104
52

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmH DPT_UCountValue8_Z 202.002
102
...
110
111

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 5 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|EnergyDemHeatHDAUXPER|DPTActPosDemAbs|207.104|
|52||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmH|DPTUCountValue8Z|202.002|
|102||__||
|...||||
|110||||
|111||||
|||||


-----

### 3 Functional Block Heating Demand Transformer for air handling units (HDTAHU)

**Object Name:** **HDTAHU**

**Object Type:** **152**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsHDTAHU DPT_TempFlowWaterDemAbs 210.100
52

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmH DPT_UCountValue8_Z 202.002
102 OutsideSensorZone DPT_UCountValue8_Z 202.002
103
...
110 ValueEnergyDemHeatAct DPT_Percent_U8 5.004
111

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 6 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsHDTAHU|DPTTempFlowWaterDemAbs|210.100|
|52||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmH|DPTUCountValue8Z|202.002|
|102|OutsideSensorZone|__<br>DPTUCountValue8Z|202.002|
|103||__||
|...||||
|110|ValueEnergyDemHeatAct|DPTPercentU8|5.004|
|111||__||
|||||


-----

### 4 Functional Block Chiller Control (CC)
**Object Name:** **CC**

**Object Type:** **192**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 StatusCC DPT_StatusCC 215.101
52 OpHrsChiller DPT_LongDeltaTimeSec 13.100
53 ForceSignCC DPT_ForceSignCool 21.101
54 LockSignCC DPT_LockSign 207.101
55

Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmC DPT_UCountValue8_Z 202.002
102 Producer DPT_UCountValue8_Z 202.002
103
...
110 StatusChillerPump DPT_RealValue_Z 202.001
111 StatusCondPump DPT_RealValue_Z 202.001
112 TempFlowWaterChiller DPT_TempHVACAbs_Z 205.100
113 TempReturnWaterChiller DPT_TempHVACAbs_Z 205.100
114 TempFlowWaterCond DPT_TempHVACAbs_Z 205.100
115 TempReturnWaterCond DPT_TempHVACAbs_Z 205.100
116

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 7 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|StatusCC|DPTStatusCC|215.101|
|52|OpHrsChiller|_<br>DPTLongDeltaTimeSec|13.100|
|53|ForceSignCC|_<br>DPTForceSignCool|21.101|
|54|LockSignCC|_<br>DPTLockSign|207.101|
|55||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmC|DPTUCountValue8Z|202.002|
|102|Producer|__<br>DPTUCountValue8Z|202.002|
|103||__||
|...||||
|110|StatusChillerPump|DPTRealValueZ|202.001|
|111|StatusCondPump|__<br>DPTRealValueZ|202.001|
|112|TempFlowWaterChiller|__<br>DPTTempHVACAbsZ|205.100|
|113|TempReturnWaterChiller|__<br>DPTTempHVACAbsZ|205.100|
|114|TempFlowWaterCond|__<br>DPTTempHVACAbsZ|205.100|
|115|TempReturnWaterCond|__<br>DPTTempHVACAbsZ|205.100|
|116||__||
|||||


-----

### 5 Functional Block Cold Water Production Manager (CPM)
**Object Name:** **CPM**

**Object Type:** **199**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 StatusCPM DPT_StatusCPM 209.102
52 PowerFlowWaterDemCPM DPT_PowerFlowWaterDemCPM 214.101
53 ForceSignCPM DPT_ForceSignCool 21.101
54 LockSignCPM DPT_LockSign 207.101
55

Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmC DPT_UCountValue8_Z 202.002
102 DistrSegmC DPT_UCountValue8_Z 202.002
103 Gen_PeripheralCRC DPT_UCountValue16_Z 203.012
104 Gen_PeripheralPump DPT_UCountValue16_Z 203.012
105
...
110 TempFlowWaterProdSegmC DPT_TempHVACAbs_Z 205.100
111 TempReturnWaterProdSegmC DPT_TempHVACAbs_Z 205.100
112 ChillersTotal DPT_Value_1_UCount 5.010
113 ChillersActive DPT_Value_1_UCount 5.010
114 PnomCPM DPT_PowerKW_Z 203.014
115 PrelCPM DPT_PowerKW_Z 203.014
116 OffPerm DPT_Bool 1.002
117 NoCoolAvailable DPT_Bool 1.002
118 StatusPumpCPM DPT_RelValue_Z 202.001
119

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 8 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|StatusCPM|DPTStatusCPM|209.102|
|52|PowerFlowWaterDemCPM|_<br>DPTPowerFlowWaterDemCPM|214.101|
|53|ForceSignCPM|_<br>DPTForceSignCool|21.101|
|54|LockSignCPM|_<br>DPTLockSign|207.101|
|55||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmC|DPTUCountValue8Z|202.002|
|102|DistrSegmC|__<br>DPTUCountValue8Z|202.002|
|103|GenPeripheralCRC|__<br>DPTUCountValue16Z|203.012|
|104|_<br>GenPeripheralPump|__<br>DPTUCountValue16Z|203.012|
|105|_|__||
|...||||
|110|TempFlowWaterProdSegmC|DPTTempHVACAbsZ|205.100|
|111|TempReturnWaterProdSegmC|__<br>DPTTempHVACAbsZ|205.100|
|112|ChillersTotal|__<br>DPTValue1UCount|5.010|
|113|ChillersActive|___<br>DPTValue1UCount|5.010|
|114|PnomCPM|___<br>DPTPowerKWZ|203.014|
|115|PrelCPM|__<br>DPTPowerKWZ|203.014|
|116|OffPerm|__<br>DPTBool|1.002|
|117|NoCoolAvailable|_<br>DPTBool|1.002|
|118|StatusPumpCPM|_<br>DPTRelValueZ|202.001|
|119||__||
|||||


-----

### 6 Functional Block Re-cooling Controller (CRC)
**Object Name:** **CRC**

**Object Type:** **200**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempReturnWaterCondSetp DPT_TempHVACAbs_Z 205.100
52 StatusCRC DPT_StatusCRC 209.104
53

Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmC DPT_UCountValue8_Z 202.002
102 Producer DPT_UCountValue8_Z 202.002
103 Gen_PeripheralCPM DPT_UCountValue16_Z 203.012
104 OutsideSensorZone DPT_UCountValue16_Z 203.012
105 Gen_PeripheralPump DPT_UCountValue16_Z 203.012
106 Gen_PeripheralFan#1 DPT_UCountValue16_Z 203.012
107 Gen_PeripheralFan#2 DPT_UCountValue16_Z 203.012
108 Gen_PeripheralFan#3 DPT_UCountValue16_Z 203.012
109 Gen_PeripheralFan#4 DPT_UCountValue16_Z 203.012
110 Gen_PeripheralFan#5 DPT_UCountValue16_Z 203.012
111 Gen_PeripheralFan#6 DPT_UCountValue16_Z 203.012
112 and more
113
...
120 TempFlowWaterCond DPT_TempHVACAbs_Z 205.100
121 TempReturnWaterCond DPT_TempHVACAbs_Z 205.100
122

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 9 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempReturnWaterCondSetp|DPTTempHVACAbsZ|205.100|
|52|StatusCRC|__<br>DPTStatusCRC|209.104|
|53||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmC|DPTUCountValue8Z|202.002|
|102|Producer|__<br>DPTUCountValue8Z|202.002|
|103|GenPeripheralCPM|__<br>DPTUCountValue16Z|203.012|
|104|_<br>OutsideSensorZone|__<br>DPTUCountValue16Z|203.012|
|105|GenPeripheralPump|__<br>DPTUCountValue16Z|203.012|
|106|_<br>GenPeripheralFan#1|__<br>DPTUCountValue16Z|203.012|
|107|_<br>GenPeripheralFan#2|__<br>DPTUCountValue16Z|203.012|
|108|_<br>GenPeripheralFan#3|__<br>DPTUCountValue16Z|203.012|
|109|_<br>GenPeripheralFan#4|__<br>DPTUCountValue16Z|203.012|
|110|_<br>GenPeripheralFan#5|__<br>DPTUCountValue16Z|203.012|
|111|_<br>GenPeripheralFan#6|__<br>DPTUCountValue16Z|203.012|
|112|_<br>and more|__||
|113||||
|...||||
|120|TempFlowWaterCond|DPTTempHVACAbsZ|205.100|
|121|TempReturnWaterCond|__<br>DPTTempHVACAbsZ|205.100|
|122||__||
|||||


-----

### 7 Functional Block Cooling Flow Demand Manager (CFDM)
**Object Name:** **CFDM**

**Object Type:** **208**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsCFDM DPT_TempFlowWaterDemAbs 210.100
52 ForceSignCFDM DPT_ForceSignCool 21.101
53 LockSignCFDM DPT_LockSign 207.101
54

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmC (d) DPT_UCountValue8_Z 202.002
102 DistrSegmC (d – 1) DPT_UCountValue8_Z 202.002
103 Gen_PeripheralLinkFTC DPT_UCountValue16_Z 203.012
104 Gen_PeripheralPump DPT_UCountValue16_Z 203.012
105
...
110 TempFlowWaterSetpAct DPT_TempHVACAbs_Z 205.100
111

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 10 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsCFDM|DPTTempFlowWaterDemAbs|210.100|
|52|ForceSignCFDM|_<br>DPTForceSignCool|21.101|
|53|LockSignCFDM|_<br>DPTLockSign|207.101|
|54||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmC (d)|DPTUCountValue8Z|202.002|
|102|DistrSegmC (d – 1)|__<br>DPTUCountValue8Z|202.002|
|103|GenPeripheralLinkFTC|__<br>DPTUCountValue16Z|203.012|
|104|_<br>GenPeripheralPump|__<br>DPTUCountValue16Z|203.012|
|105|_|__||
|...||||
|110|TempFlowWaterSetpAct|DPTTempHVACAbsZ|205.100|
|111||__||
|||||


-----

### 8 Functional Block Auxiliary Cooling Demand (CDAUX)
**Object Name:** **CDAUX**

**Object Type:** **209**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsCZC DPT_TempFlowWaterDemAbs 210.100
52

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmC DPT_UCountValue8_Z 202.002
102
...
110
111

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 11 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsCZC|DPTTempFlowWaterDemAbs|210.100|
|52||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmC|DPTUCountValue8Z|202.002|
|102||__||
|...||||
|110||||
|111||||
|||||


-----

### 9 Functional Block Auxiliary Cooling Demand Percent (CDAUXER)
**Object Name:** **CDAUXPER**

**Object Type:** **210**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 --- [1)]
52 EnergyDemCoolCDAUXPER DPT_ActPosDemAbs 207.104
53

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmC DPT_UCountValue8_Z 202.002
102
...
110
111

1) Consistensy to all EnergyDemCool… signals as Property Identifier 52

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 12 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|---1)|||
|52|EnergyDemCoolCDAUXPER|DPTActPosDemAbs|207.104|
|53||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmC|DPTUCountValue8Z|202.002|
|102||__||
|...||||
|110||||
|111||||
|||||


-----

### 10 Functional Block Cooling Demand Transformer for air handling units (CDTAHU)

**Object Name:** **CDTAHU**

**Object Type:** **215**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsCDTAHU DPT_TempFlowWaterDemAbs 210.100
52

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmC DPT_UCountValue8_Z 202.002
102 OutsideSensorZone DPT_UCountValue8_Z 202.002
103
...
110 ValueEnergyDemCoolAct DPT_Percent_U8 5.004
111

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 13 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsCDTAHU|DPTTempFlowWaterDemAbs|210.100|
|52||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmC|DPTUCountValue8Z|202.002|
|102|OutsideSensorZone|__<br>DPTUCountValue8Z|202.002|
|103||__||
|...||||
|110|ValueEnergyDemCoolAct|DPTPercentU8|5.004|
|111||__||
|||||


-----

### 11 Functional Block Cooling Zone Controller (CZC)
**Object Name:** **CZC**

**Object Type:** **224**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsCZC DPT_TempFlowWaterDemAbs 210.100
52 StatusCZC DPT_StatusRCC. 21.105
53 TempRoomSetpCoolAct DPT_TempHVACAbs_Z 205.100
54 HVACModeAct DPT_HVACMode_Z 201.100
55 TempFlowWaterCZC DPT_TempHVACAbs_Z 205.100
56

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UCountValue8_Z 202.002
102 Room DPT_UCountValue8_Z 202.002
103 Subzone DPT_UCountValue8_Z 202.002
104 DistrSegmC DPT_UCountValue8_Z 202.002
105 OutsideSensorZone DPT_UCountValue8_Z 202.002
106
...
110 TempFlowWaterMin DPT_TempHVACAbs_Z 205.100
111 TempFlowWaterSetpCZC DPT_TempHVACAbs_Z 205.100
112 TempRoomAct DPT_TempHVACAbs_Z 205.100
113 TempOutsideAct DPT_TempHVACAbs_Z 205.100
114 Fault DPT_Bool 1.002
115 StatusPumpCZC DPT_RelValue_Z 202.001
116

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 14 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsCZC|DPTTempFlowWaterDemAbs|210.100|
|52|StatusCZC|_<br>DPTStatusRCC.|21.105|
|53|TempRoomSetpCoolAct|_<br>DPTTempHVACAbsZ|205.100|
|54|HVACModeAct|__<br>DPTHVACModeZ|201.100|
|55|TempFlowWaterCZC|__<br>DPTTempHVACAbsZ|205.100|
|56||__||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUCountValue8Z|202.002|
|102|Room|__<br>DPTUCountValue8Z|202.002|
|103|Subzone|__<br>DPTUCountValue8Z|202.002|
|104|DistrSegmC|__<br>DPTUCountValue8Z|202.002|
|105|OutsideSensorZone|__<br>DPTUCountValue8Z|202.002|
|106||__||
|...||||
|110|TempFlowWaterMin|DPTTempHVACAbsZ|205.100|
|111|TempFlowWaterSetpCZC|__<br>DPTTempHVACAbsZ|205.100|
|112|TempRoomAct|__<br>DPTTempHVACAbsZ|205.100|
|113|TempOutsideAct|__<br>DPTTempHVACAbsZ|205.100|
|114|Fault|__<br>DPTBool|1.002|
|115|StatusPumpCZC|_<br>DPTRelValueZ|202.001|
|116||__||
|||||


-----

### 12 Functional Block Air Handling Unit Controller (AHUC)
**Object Name:** **AHUC**

**Object Type:** **240**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type**

**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 EnergyDemHeatAHUC DPT_ActPosDemAbs 207.104
52 EnergyDemCoolAHUC DPT_ActPosDemAbs 207.104
53 StatusAHUC DPT_StatusAHUC 21.106
54 HVACModeAct DPT_HVACMode_Z 201.100
55 TempRoomSetpAct DPT_TempHVACAbs_Z 205.100
56

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UCountValue8_Z 202.002
102 DistrSegmH DPT_UCountValue8_Z 202.002
103 DistrSegmC DPT_UCountValue8_Z 202.002
104 OutsideSensorZone DPT_UCountValue8_Z 202.002
105
...

110 TempSupplyAirSetpMin DPT_TempHVACAbs_Z 205.100
111 TempSupplyAirSetpMax DPT_TempHVACAbs_Z 205.100
112 TempRoomAct DPT_TempHVACAbs_Z 205.100
113 TempOutsideAct DPT_TempHVACAbs_Z 205.100
114 TempSupplyAirSetpHeat DPT_TempHVACAbs_Z 205.100
115 TempSupplyAirSetpCool DPT_TempHVACAbs_Z 205.100
116 Fault DPT_Bool 1.002
117 FanActive DPT_Bool 1.002
118

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 15 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|EnergyDemHeatAHUC|DPTActPosDemAbs|207.104|
|52|EnergyDemCoolAHUC|_<br>DPTActPosDemAbs|207.104|
|53|StatusAHUC|_<br>DPTStatusAHUC|21.106|
|54|HVACModeAct|_<br>DPTHVACModeZ|201.100|
|55|TempRoomSetpAct|__<br>DPTTempHVACAbsZ|205.100|
|56||__||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUCountValue8Z|202.002|
|102|DistrSegmH|__<br>DPTUCountValue8Z|202.002|
|103|DistrSegmC|__<br>DPTUCountValue8Z|202.002|
|104|OutsideSensorZone|__<br>DPTUCountValue8Z|202.002|
|105||__||
|...||||
|110|TempSupplyAirSetpMin|DPTTempHVACAbsZ|205.100|
|111|TempSupplyAirSetpMax|__<br>DPTTempHVACAbsZ|205.100|
|112|TempRoomAct|__<br>DPTTempHVACAbsZ|205.100|
|113|TempOutsideAct|__<br>DPTTempHVACAbsZ|205.100|
|114|TempSupplyAirSetpHeat|__<br>DPTTempHVACAbsZ|205.100|
|115|TempSupplyAirSetpCool|__<br>DPTTempHVACAbsZ|205.100|
|116|Fault|__<br>DPTBool|1.002|
|117|FanActive|_<br>DPTBool|1.002|
|118||_||
|||||


-----

### 13 Functional Block Supply Air Temperature Controller (SATC)
**Object Name:** **SATC**

**Object Type:** **241**

**Property** **Datapoint Name** **Datapoint Type Name**

**Datapoint**

**Identifier**

**Type**
**Identifier**
LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 EnergyDemHeatSATC DPT_ActPosDemAbs 207.104
52 EnergyDemCoolSATC DPT_ActPosDemAbs 207.104
53 StatusSATC DPT_StatusAHU 21.106
54 TempSupplyAirSATC DPT_TempHVACAbs_Z 205.100
55

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmV DPT_UCountValue8_Z 202.002
102 DistrSegmH DPT_UCountValue8_Z 202.002
103 DistrSegmC DPT_UCountValue8_Z 202.002
104 OutsideSensorZone DPT_UCountValue8_Z 202.002
105 Gen_Peripheral DPT_UCountValue16_Z 203.012
106
…
112 TempOutsideAct DPT_TempHVACAbs_Z 205.100
113 Fault DPT_Bool 1.002
114 FanActive DPT_Bool 1.002
115

© C i h 2000 2013 KNX A i i A li i D i i 01 02 01 16 f 16

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type<br>Identifier|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|EnergyDemHeatSATC|DPTActPosDemAbs|207.104|
|52|EnergyDemCoolSATC|_<br>DPTActPosDemAbs|207.104|
|53|StatusSATC|_<br>DPTStatusAHU|21.106|
|54|TempSupplyAirSATC|_<br>DPTTempHVACAbsZ|205.100|
|55||__||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmV|DPTUCountValue8Z|202.002|
|102|DistrSegmH|__<br>DPTUCountValue8Z|202.002|
|103|DistrSegmC|__<br>DPTUCountValue8Z|202.002|
|104|OutsideSensorZone|__<br>DPTUCountValue8Z|202.002|
|105|GenPeripheral|__<br>DPTUCountValue16Z|203.012|
|106|_|__||
|…||||
|112|TempOutsideAct|DPTTempHVACAbsZ|205.100|
|113|Fault|__<br>DPTBool|1.002|
|114|FanActive|_<br>DPTBool|1.002|
|115||_||
|||||


-----

