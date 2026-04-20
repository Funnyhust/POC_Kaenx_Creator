# Application Description

## Hot Water Heating

 Property Identifiers

Summary:

This document is a part of the HVAC Application Interworking Standard.
It specifies the standardised Property Identifiers for each HWH specific
Functional Block / Interface Object

Version 01.01.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version Date** **Modifications**

0.1 2000.12.20 BKY document creation for HWH
0.2 2001.01.15 BKY document updated (DPT N°included, minor DPT corrections, some

properties added)
0.3 2001.07.03 BKY Properties updated for BUC, BOC, HPM, HPM-BST, HPM-BST/BOC, HZC

and DHWC (new Properties, update of DPT’s),
HZCopt, DHWCopt and HIRCopt deleted
0.4 2001.09.12 BKY Properties updated for HFDM, HZC, HIRC, HRDM, HDTACT, HTDRT,

DHWSM, DHWC, DHWCPC, SDHWC
0.5 2001.09.27 BKY Properties updated for DHWSM, SDHWC, DHWCPC
0.6 2001.11.28 BKY Properties updated for FTC, HDAUX, HDTRT, HDTACT
0.7 2002.01.09 BKY Properties updated for DHWSM, DHWTS, HDTACT

rename UDHWM (181) => UDHWSET with outputs of UDHWTS, UDHWP
delete: UDHWTS (182), UDHWP (183)
shift HVA, RSMHD, OTS, RTS, FWTS, RNWTS to HVAC common property ID
description
0.8 2002.02.22 BKY editorial corrections; TFI approved, KNX Handbook 1.0
1.0 2002.09.12 BKY, editorial corrections, TFI approved,

updated for KNX Handbook 1.1
1.1 2002.11.07 BKY, editorial corrections, new property DHWModeUserEff in DHWSM;
2003.08.08 TFI approved, updated for KNX Handbook 1.1

1.1 2009.06.17 Update in view of publication in the KNX Specifications v2.0.
01.01.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

None.

Filename: 07_11_09 HVAC-HWH PropertyID v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 19

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 2 f 19

|Version|Date|Modifications|
|---|---|---|
|0.1|2000.12.20|BKYdocument creation for HWH|
|0.2|2001.01.15|BKY document updated (DPT N°included, minor DPT corrections, some<br>properties added)|
|0.3|2001.07.03|BKY Properties updated for BUC, BOC, HPM, HPM-BST, HPM-BST/BOC, HZC<br>and DHWC (new Properties, update of DPT’s),<br>HZCopt, DHWCopt and HIRCopt deleted|
|0.4|2001.09.12|BKY Properties updated for HFDM, HZC, HIRC, HRDM, HDTACT, HTDRT,<br>DHWSM, DHWC, DHWCPC, SDHWC|
|0.5|2001.09.27|BKY Properties updated for DHWSM, SDHWC, DHWCPC|
|0.6|2001.11.28|BKY Properties updated for FTC, HDAUX, HDTRT, HDTACT|
|0.7|2002.01.09|BKY Properties updated for DHWSM, DHWTS, HDTACT<br>rename UDHWM (181) => UDHWSET with outputs of UDHWTS, UDHWP<br>delete: UDHWTS (182), UDHWP (183)<br>shift HVA, RSMHD, OTS, RTS, FWTS, RNWTS to HVAC common property ID<br>description|
|0.8|2002.02.22|BKYeditorial corrections; TFIapproved, KNX Handbook 1.0|
|1.0|2002.09.12|BKY, editorial corrections, TFI approved,<br>updated for KNX Handbook 1.1|
|1.1|2002.11.07<br>2003.08.08|BKY, editorial corrections, new property DHWModeUserEff in DHWSM;<br>TFIapproved, updated for KNX Handbook 1.1|
|1.1|2009.06.17|Update in view of publication inthe KNXSpecifications v2.0.|
|01.01.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4 1.1.1 Runtime Interworking ......................................................................................... 4 1.1.2 Parameters and Diagnostic Data ......................................................................... 4

 2 Functional Block Burner Controller .................................................................................... 6

 3 Functional Block Boiler Controller ...................................................................................... 7

 4 Functional Block Heat Producer Manager .......................................................................... 8

 5 Functional Block Heat Producer Manager for BST ........................................................... 9

 6 Functional Block HPM for BST in boiler sub-cascade ..................................................... 10

 7 Functional Block Heat Flow Demand Manager ................................................................ 11

 8 Functional Block Auxiliary Heat Demand ......................................................................... 11

 9 Functional Block Heating Zone Controller ....................................................................... 12

 10 Functional Block Heating Individual Room Controller ................................................... 13

 11 Functional Block Heating Room Demand Manager ......................................................... 14

 12 Functional Block Heating Demand Transformer Actuator Position .............................. 14

 13 Functional Block Heating Demand Transformer Room Temp ....................................... 15

 14 Functional Block Domestic Hot Water Setpoint Manager ............................................... 15

 15 Functional Block Domestic Hot Water Controller ........................................................... 16

 16 Functional Block DHW Circulation Pump Controller ..................................................... 17

 17 Functional Block Solar DHW Controller .......................................................................... 17

 18 Functional Block DHW Temperature Sensor ................................................................... 18

 19 Functional Block DHW User Setting .................................................................................. 18

 20 Functional Block: Collector Temperature Sensor ........................................................... 19

 21 Functional Block Flow Temperature Controller .............................................................. 19

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 3 f 19


-----

### 1 Introduction

#### 1.1 Scope
This document specifies the Property Identifiers and datapoint types for LTE-HEE Process Data (runtime
interworking) and parameters / diagnostic data used in the data-interfaces of HVAC Hot Water Heating
(HWH) Functional Blocks. This document is part of the Convergence HVAC Application Interworking
Standard.

##### 1.1.1 Runtime Interworking
The main focus of this document is LTE-HEE runtime interworking. For each Functional Block /
Interface Object those properties for runtime interworking are listed for which the Interface Object is the
property server (e.g. InfoReport Output, Write Input)

This document does not list the properties for which the Interface Object is the property client (e.g.
InfoReport Input, Write Output). These properties are listed in the detailed Functional Block
specification.

LTE-HEE runtime interworking properties are also accessible via individual addressing. Therefore these
property definitions could be used in other configuration modes.

##### 1.1.2 Parameters and Diagnostic Data
**LTE implementation:**

- Parameters and Diagnostic Data of a Functional Block shall be implemented as Properties of the
corresponding Interface Object which are accessed using individual addressing.

- These Properties are addressed via the standard Interface Object Type (IO Type) for this Functional
Block. This IO Type is also used for datapoint addressing in the LTE runtime interworking model

- Standard DPT or HVAC specific DPT with extended features are used where appropriate.

**Other modes:**

- Parameters and Diagnostic Data can in principle be implemented as memory mapped datapoints or
Group Objects or Properties of an Interface Object using individual addressing. This document does
not lay down how to implement Parameters and Diagnostic Data in S, LT-R, LT-S, Ctrl, Pb and AMode.

- In case of Memory Mapped datapoints the DPT may be manufacturer specific

- In case of Group Objects standard DPT shall be used instead of HVAC specific (extended) DPT.
The description of these Group Objects shall be part of the mode-dependent specification (e.g.
Channel definition).

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 4 f 19


-----

- In case of Properties, the implementation of HVAC specific DPT with extended features may be a
problem (depending on the available microcontroller resources). The manufacturer has the choice:
 to use the LTE style Property implementation as specified in this document (with the DPT and IO
Type for LTE implementations)  IO Type[used] = IO Type[HVAC-LTE]
 to implement these Properties using standard DPT only.
In this case, the same Property ID but a different IO Type shall be used since the DPT of a
Property shall be unambiguous for each IO Type.
**Simple IOT mapping rule:** **IO Type[used] = IO Type[standardDPT] = IO Type[HVAC-LTE ]+ 10000d**
(e.g. BUC[HVAC-LTE] = 128 => BUC[standardDPT] = 10128)
 It is allowed to implement in a device both Interface Object Types IO Type[HVAC-LTE] and IO
Type[standardDPT]. The implementation of parameters and diagnostic data of one given Functional
Block shall however be complete. It is thus not allowed to implement part of the datapoints of a
Functional Block in IO Type[standardDPT] and the remaining in IO Type[HVACLTE].

**Implementation of Parameter and Diagnostic Data**

**Property based** **Group Object** **Memory mapped**
**HVAC-LTE style** **Standard DPT**

IO Type IO Type[HVAC-LTE] IO Type[HVAC-LTE ]+ 10000

e.g. BUC=128 e.g. BUC=10128

Property ID Property ID x => same Property ID x

if standard DPT => same standard DPT => same standard DPT company specific

DPT

if HVAC-LTE specific*) => mapped standard => mapped standard

e.g. 205.100 DPT, e.g. 9.001 DPT, e.g. 9.001

In this document only the HVAC-LTE style of Parameters and Diagnostic Data is specified for
IO Type[HVAC-LTE].

In the FB datapoint overview those Parameters and Diagnostic Data with HVAC-LTE specific (extended)
DPT are marked “ *) ”
The mapping of HVAC specific DPT to standard DPT is generic and described in the document [17] –
HVAC Datapoint Types; Supplement 11 (TFI 18)

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 5 f 19

|Col1|Implementation of Parameter and Diagnostic Data|Col3|Col4|Col5|
|---|---|---|---|---|
||**Property based**<br>**HVAC-LTE style**<br>**Standard DPT**|**Property based**<br>**HVAC-LTE style**<br>**Standard DPT**|**Group Object**|**Memory mapped**|
|IO Type|IO TypeHVAC-LTE <br>e.g. BUC=128|IO TypeHVAC-LTE+ 10000<br>e.g. BUC=10128|||
|Property ID|Property ID x|=> same Property ID x|||
|DPT|if standard DPT|=> same standard DPT|=> same standard DPT|company specific|
|DPT|if HVAC-LTE specific***)** <br>e.g. 205.100|=> mapped standard<br>DPT, e.g. 9.001|=> mapped standard<br>DPT, e.g. 9.001||


-----

### 2 Functional Block Burner Controller

**Object Name:** **BUC**
**Object Type:** **128**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 StatusBUC DPT_StatusBUC 207.100
52 BurnerSpec DPT_SpecHeatProd 216.100
53 FuelSelect DPT_FuelType 20.100
54 BurnerReset DPT_Reset 01.015
55 OpHrsBurnerStage1 DPT_LongDeltaTimeSec 13.100
56 OpHrsBurnerStage2 DPT_LongDeltaTimeSec 13.100

Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmH DPT_UcountValue8_Z 202.002
102 Producer DPT_UcountValue8_Z 202.002
...
110 PrelBurner DPT_RelValue_Z 202.001
111 Fault DPT_Bool 1.002
112 StatusStage1 DPT_Switch 1.001
113 StatusStage2 DPT_Switch 1.001
114 BurnerType DPT_BurnerType 20.101
115 FuelTypeSupport DPT_FuelTypeSet 21.104
116 FuelTypeActual DPT_FuelType 20.100
117 PnomBurner DPT_PowerKW_Z 203.014
118 BstageLimit DPT_RelValue_Z 202.001
119 reserved
120 reserved
121 OperatingPhaseBurner DPT_Value_1_Ucount 5.010
122 BurnerStarts DPT_Value_4_Ucount 12.001
123 ErrorCodeBUC DPT_Value_2_Ucount 7.001
124 VolumeOilCumul DPT_VolumeLiter_Z 218.001
125 FlowRateOil DPT_UFlowRateLiter/h_Z 203.011
126 StatusFlame DPT_Switch 1.001
127 CurrentIonisation DPT_UElCurrentμA_Z 203.013
128 FanControl DPT_RelValue_Z 202.001
129 PauseTimeBurnerMin DPT_TimePeriod100MSec 7.004
130 RunTimeBurnerMin DPT_TimePeriod100MSec 7.004
131 PreIgnitionTime DPT_TimePeriod100MSec 7.004
132 PostPurgingTime DPT_TimePeriod100MSec 7.004
133 PrePurgingTime DPT_TimePeriod100MSec 7.004
134 SafetyTime DPT_TimePeriod100MSec 7.004
135 IgnitionLoadInterval DPT_TimePeriod100MSec 7.004
136 NumberOfRestarts DPT_Value_1_Ucount 5.010
137 PmaxBurner DPT_PowerKW_Z 203.014

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 6 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|StatusBUC|DPTStatusBUC|207.100|
|52|BurnerSpec|_<br>DPTSpecHeatProd|216.100|
|53|FuelSelect|_<br>DPTFuelType|20.100|
|54|BurnerReset|_<br>DPTReset|01.015|
|55|OpHrsBurnerStage1|_<br>DPTLongDeltaTimeSec|13.100|
|56|OpHrsBurnerStage2|_<br>DPTLongDeltaTimeSec|13.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmH|DPTUcountValue8Z|202.002|
|102|Producer|__<br>DPTUcountValue8Z|202.002|
|...||__||
|110|PrelBurner|DPTRelValueZ|202.001|
|111|Fault|__<br>DPTBool|1.002|
|112|StatusStage1|_<br>DPTSwitch|1.001|
|113|StatusStage2|_<br>DPTSwitch|1.001|
|114|BurnerType|_<br>DPTBurnerType|20.101|
|115|FuelTypeSupport|_<br>DPTFuelTypeSet|21.104|
|116|FuelTypeActual|_<br>DPTFuelType|20.100|
|117|PnomBurner|_<br>DPTPowerKWZ|203.014|
|118|BstageLimit|__<br>DPTRelValueZ|202.001|
|119|reserved|__||
|120|reserved|||
|121|OperatingPhaseBurner|DPTValue1Ucount|5.010|
|122|BurnerStarts|___<br>DPTValue4Ucount|12.001|
|123|ErrorCodeBUC|___<br>DPTValue2Ucount|7.001|
|124|VolumeOilCumul|___<br>DPTVolumeLiterZ|218.001|
|125|FlowRateOil|__<br>DPTUFlowRateLiter/hZ|203.011|
|126|StatusFlame|__<br>DPTSwitch|1.001|
|127|CurrentIonisation|_<br>DPTUElCurrentμAZ|203.013|
|128|FanControl|__<br>DPTRelValueZ|202.001|
|129|PauseTimeBurnerMin|__<br>DPTTimePeriod100MSec|7.004|
|130|RunTimeBurnerMin|_<br>DPTTimePeriod100MSec|7.004|
|131|PreIgnitionTime|_<br>DPTTimePeriod100MSec|7.004|
|132|PostPurgingTime|_<br>DPTTimePeriod100MSec|7.004|
|133|PrePurgingTime|_<br>DPTTimePeriod100MSec|7.004|
|134|SafetyTime|_<br>DPTTimePeriod100MSec|7.004|
|135|IgnitionLoadInterval|_<br>DPTTimePeriod100MSec|7.004|
|136|NumberOfRestarts|_<br>DPTValue1Ucount|5.010|
|137|PmaxBurner|___<br>DPTPowerKWZ|203.014|


-----

### 3 Functional Block Boiler Controller
**Object Name:** **BOC**
**Object Type:** **129**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 StatusBOC DPT_StatusBOC 215.100
52 BoilerSpec DPT_SpecHeatProd 216.100
53 ValueDemBOC DPT_ValueDemBOC 207.102
54 ForceSignBOC DPT_ForceSign 21.100
55 LockSignBOC DPT_LockSign 207.101
56 OpHrsBurner DPT_LongDeltaTimeSec 13.100
Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmH DPT_UcountValue8_Z 202.002
102 Producer DPT_UcountValue8_Z 202.002
103 PeripheralLinkPump DPT_UcountValue16_Z 203.012
104 PeripheralLinkFTC DPT_UcountValue16_Z 203.012
105 OutsideSensorZone DPT_UcountValue8_Z 202.002
...

110 TempBoiler DPT_TempHVACAbs 205.100
111 TempReturnBoiler DPT_TempHVACAbs 205.100
112 TempBoilerSetp DPT_TempHVACAbs 205.100
113 StatusBoilerPump DPT_RelValue_Z 202.001
114 TempBoilerMax DPT_TempHVACAbs 205.100
115 TempBoilerMin DPT_TempHVACAbs 205.100
116 TempBoilerSwitchDiff DPT_TempHVACRel_Z 205.101
117 ProducerLock DPT_Bool 1.002
118 TempReturnBoilerMinLimit DPT_TempHVACAbs_Z 205.100
119 ChimneySweepMode DPT_Bool 1.002
120 TempFlueGas DPT_TempHVACAbs_Z 205.100
121 TempFlueGasMaxValue DPT_TempHVACAbs_Z 205.100
122 PrelBurner DPT_RelValue_Z 202.001
123 PnomBoiler DPT_PowerKW_Z 203.014
124 reserved
125 Fault DPT_Bool 1.002
126 SummerMode DPT_Bool 1.002
127 OffPerm DPT_Bool 1.002
128 NoHeatAvailable DPT_Bool 1.002
129 StatusBurnerStage1Enable DPT_Enable 1.003
130 StatusBurnerStage2Enable DPT_Enable 1.003
131 StatusBurnerModulation DPT_RelValue_Z 202.001
132 ErrorCodeBOC DPT_Value_2_Ucount 7.001

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 7 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|StatusBOC|DPTStatusBOC|215.100|
|52|BoilerSpec|_<br>DPTSpecHeatProd|216.100|
|53|ValueDemBOC|_<br>DPTValueDemBOC|207.102|
|54|ForceSignBOC|_<br>DPTForceSign|21.100|
|55|LockSignBOC|_<br>DPTLockSign|207.101|
|56|OpHrsBurner|_<br>DPTLongDeltaTimeSec|13.100|
|_<br>Parameters and Diagnostic Data  (individual addressing only)|_<br>Parameters and Diagnostic Data  (individual addressing only)|_<br>Parameters and Diagnostic Data  (individual addressing only)|_<br>Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmH|DPTUcountValue8Z|202.002|
|102|Producer|__<br>DPTUcountValue8Z|202.002|
|103|PeripheralLinkPump|__<br>DPTUcountValue16Z|203.012|
|104|PeripheralLinkFTC|__<br>DPTUcountValue16Z|203.012|
|105|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|...||__||
|110|TempBoiler|DPTTempHVACAbs|205.100|
|111|TempReturnBoiler|_<br>DPTTempHVACAbs|205.100|
|112|TempBoilerSetp|_<br>DPTTempHVACAbs|205.100|
|113|StatusBoilerPump|_<br>DPTRelValueZ|202.001|
|114|TempBoilerMax|__<br>DPTTempHVACAbs|205.100|
|115|TempBoilerMin|_<br>DPTTempHVACAbs|205.100|
|116|TempBoilerSwitchDiff|_<br>DPTTempHVACRelZ|205.101|
|117|ProducerLock|__<br>DPTBool|1.002|
|118|TempReturnBoilerMinLimit|_<br>DPTTempHVACAbsZ|205.100|
|119|ChimneySweepMode|__<br>DPTBool|1.002|
|120|TempFlueGas|_<br>DPTTempHVACAbsZ|205.100|
|121|TempFlueGasMaxValue|__<br>DPTTempHVACAbsZ|205.100|
|122|PrelBurner|__<br>DPTRelValueZ|202.001|
|123|PnomBoiler|__<br>DPTPowerKWZ|203.014|
|124|reserved|__||
|125|Fault|DPTBool|1.002|
|126|SummerMode|_<br>DPTBool|1.002|
|127|OffPerm|_<br>DPTBool|1.002|
|128|NoHeatAvailable|_<br>DPTBool|1.002|
|129|StatusBurnerStage1Enable|_<br>DPTEnable|1.003|
|130|StatusBurnerStage2Enable|_<br>DPTEnable|1.003|
|131|StatusBurnerModulation|_<br>DPTRelValueZ|202.001|
|132|ErrorCodeBOC|__<br>DPTValue2Ucount|7.001|


-----

### 4 Functional Block Heat Producer Manager
**Object Name:** **HPM**
**Object Type:** **136**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 StatusHPM DPT_StatusHPM 209.100
52 PowerFlowWaterDemHPM DPT_PowerFlowWater DemHPM 214.100
53 ForceSignHPM DPT_ForceSign 21.100
54 LockSignHPM DPT_LockSign 207.101

Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmH DPT_UcountValue8_Z 202.002
102 DistrSegmH DPT_UcountValue8_Z 202.002
103 PeripheralLinkPump DPT_UcountValue16_Z 203.012
104 PeripheralLinkFTC DPT_UcountValue16_Z 203.012
105 OutsideSensorZone DPT_UcountValue8_Z 202.002
...
110 TempFlowWaterProdSegmH DPT_TempHVACAbs 205.100
111 TempReturnWaterProdSegmH DPT_TempHVACAbs 205.100
112 TempProdSegmHSetp DPT_TempHVACAbs 205.100
113 BoilersTotal DPT_Value_1_Ucount 5.010
114 BoilersActive DPT_Value_1_Ucount 5.010
115 PnomHPM DPT_PowerKW_Z 203.014
116 PrelHPM DPT_RelValue_Z 202.001
117 Fault DPT_Bool 1.002
118 SummerMode DPT_Bool 1.002
119 OffPerm DPT_Bool 1.002
120 NoHeatAvailable DPT_Bool 1.002
121 StatusPumpHPM DPT_RelValue_Z 202.001
122 StagesActive DPT_Value_1_Ucount 5.010
123 ErrorCodeHPM DPT_Value_2_Ucount 7.001

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 8 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|StatusHPM|DPTStatusHPM|209.100|
|52|PowerFlowWaterDemHPM|_<br>DPTPowerFlowWater DemHPM|214.100|
|53|ForceSignHPM|_<br>DPTForceSign|21.100|
|54|LockSignHPM|_<br>DPTLockSign|207.101|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmH|DPTUcountValue8Z|202.002|
|102|DistrSegmH|__<br>DPTUcountValue8Z|202.002|
|103|PeripheralLinkPump|__<br>DPTUcountValue16Z|203.012|
|104|PeripheralLinkFTC|__<br>DPTUcountValue16Z|203.012|
|105|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|...||__||
|110|TempFlowWaterProdSegmH|DPTTempHVACAbs|205.100|
|111|TempReturnWaterProdSegmH|_<br>DPTTempHVACAbs|205.100|
|112|TempProdSegmHSetp|_<br>DPTTempHVACAbs|205.100|
|113|BoilersTotal|_<br>DPTValue1Ucount|5.010|
|114|BoilersActive|___<br>DPTValue1Ucount|5.010|
|115|PnomHPM|___<br>DPTPowerKWZ|203.014|
|116|PrelHPM|__<br>DPTRelValueZ|202.001|
|117|Fault|__<br>DPTBool|1.002|
|118|SummerMode|_<br>DPTBool|1.002|
|119|OffPerm|_<br>DPTBool|1.002|
|120|NoHeatAvailable|_<br>DPTBool|1.002|
|121|StatusPumpHPM|_<br>DPTRelValueZ|202.001|
|122|StagesActive|__<br>DPTValue1Ucount|5.010|
|123|ErrorCodeHPM|___<br>DPTValue2Ucount|7.001|


-----

### 5 Functional Block Heat Producer Manager for BST
**Object Name:** **HPM-BST**
**Object Type:** **137**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
none:
concerning runtime interworking the
HPB-BST behaves like a standard
HPM

Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmH DPT_UcountValue8_Z 202.002
102 DistrSegmH DPT_UcountValue8_Z 202.002
103 PeripheralLinkPump DPT_UcountValue16_Z 203.012
104 PeripheralLinkFTC DPT_UcountValue16_Z 203.012
105 OutsideSensorZone DPT_UcountValue8_Z 202.002
...
110 TempFlowWaterProdSegmH DPT_TempHVACAbs 205.100
111 TempReturnWaterProdSegmH DPT_TempHVACAbs 205.100
112 TempProdSegmHSetp DPT_TempHVACAbs 205.100
113 BoilersTotal DPT_Value_1_Ucount 5.010
114 BoilersActive DPT_Value_1_Ucount 5.010
115 PnomHPM DPT_PowerKW_Z 203.014
116 PrelHPM DPT_RelValue_Z 202.001
117 Fault DPT_Bool 1.002
118 SummerMode DPT_Bool 1.002
119 OffPerm DPT_Bool 1.002
120 NoHeatAvailable DPT_Bool 1.002
121 StatusPumpHPM DPT_RelValue_Z 202.001
122 StagesActive DPT_Value_1_Ucount 5.010
123 ErrorCodeHPM DPT_Value_2_Ucount 7.001
...
140 TempBSTMax DPT_TempHVACAbs 205.100
141 TempBSTMin DPT_TempHVACAbs 205.100
142 TempBSTStart DPT_TempHVACAbs 205.100
143 TempBSTStop DPT_TempHVACAbs 205.100

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 9 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
||none:<br>concerning runtime interworking the<br>HPB-BST behaves like a standard<br>HPM|||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmH|DPTUcountValue8Z|202.002|
|102|DistrSegmH|__<br>DPTUcountValue8Z|202.002|
|103|PeripheralLinkPump|__<br>DPTUcountValue16Z|203.012|
|104|PeripheralLinkFTC|__<br>DPTUcountValue16Z|203.012|
|105|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|...||__||
|110|TempFlowWaterProdSegmH|DPTTempHVACAbs|205.100|
|111|TempReturnWaterProdSegmH|_<br>DPTTempHVACAbs|205.100|
|112|TempProdSegmHSetp|_<br>DPTTempHVACAbs|205.100|
|113|BoilersTotal|_<br>DPTValue1Ucount|5.010|
|114|BoilersActive|___<br>DPTValue1Ucount|5.010|
|115|PnomHPM|___<br>DPTPowerKWZ|203.014|
|116|PrelHPM|__<br>DPTRelValueZ|202.001|
|117|Fault|__<br>DPTBool|1.002|
|118|SummerMode|_<br>DPTBool|1.002|
|119|OffPerm|_<br>DPTBool|1.002|
|120|NoHeatAvailable|_<br>DPTBool|1.002|
|121|StatusPumpHPM|_<br>DPTRelValueZ|202.001|
|122|StagesActive|__<br>DPTValue1Ucount|5.010|
|123|ErrorCodeHPM|___<br>DPTValue2Ucount|7.001|
|...||___||
|140|TempBSTMax|DPTTempHVACAbs|205.100|
|141|TempBSTMin|_<br>DPTTempHVACAbs|205.100|
|142|TempBSTStart|_<br>DPTTempHVACAbs|205.100|
|143|TempBSTStop|_<br>DPTTempHVACAbs|205.100|


-----

### 6 Functional Block HPM for BST in boiler sub-cascade
**Object Name:** **HPM-BST/BOC**
**Object Type:** **138**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
none:
concerning runtime interworking the
HPB-BST behaves like a standard
HPM and a BOC

Parameters and Diagnostic Data (individual addressing only)
101 ProdSegmHSubCascade DPT_UcountValue8_Z 202.002
102 ProdSegmH DPT_UcountValue8_Z 202.002
103 Producer DPT_UcountValue8_Z 202.002
104 PeripheralLinkPump DPT_UcountValue16_Z 203.012
105 PeripheralLinkFTC DPT_UcountValue16_Z 203.012
106 OutsideSensorZone DPT_UcountValue8_Z 202.002
...
110 TempFlowWaterBST DPT_TempHVACAbs 205.100
111 TempReturnWaterBST DPT_TempHVACAbs 205.100
112 TempBSTSetp DPT_TempHVACAbs 205.100
113 BoilersTotal DPT_Value_1_Ucount 5.010
114 BoilersActive DPT_Value_1_Ucount 5.010
115 TempFlowWaterProdSegmH DPT_TempHVACAbs 205.100
116 TempReturnWaterProdSegmH DPT_TempHVACAbs 205.100
117 Fault DPT_Bool 1.002
118 SummerMode DPT_Bool 1.002
119 OffPerm DPT_Bool 1.002
120 NoHeatAvailable DPT_Bool 1.002
121 StatusPumpBST DPT_RelValue_Z 202.001
122 StagesActive DPT_Value_1_Ucount 5.010
123 ErrorCodeBST DPT_Value_2_Ucount 7.001
...
140 TempBSTMax DPT_TempHVACAbs 205.100
141 TempBSTMin DPT_TempHVACAbs 205.100
142 TempBSTStart DPT_TempHVACAbs 205.100
143 TempBSTStop DPT_TempHVACAbs 205.100

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 10 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
||none:<br>concerning runtime interworking the<br>HPB-BST behaves like a standard<br>HPMand a BOC|||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|ProdSegmHSubCascade|DPTUcountValue8Z|202.002|
|102|ProdSegmH|__<br>DPTUcountValue8Z|202.002|
|103|Producer|__<br>DPTUcountValue8Z|202.002|
|104|PeripheralLinkPump|__<br>DPTUcountValue16Z|203.012|
|105|PeripheralLinkFTC|__<br>DPTUcountValue16Z|203.012|
|106|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|...||__||
|110|TempFlowWaterBST|DPTTempHVACAbs|205.100|
|111|TempReturnWaterBST|_<br>DPTTempHVACAbs|205.100|
|112|TempBSTSetp|_<br>DPTTempHVACAbs|205.100|
|113|BoilersTotal|_<br>DPTValue1Ucount|5.010|
|114|BoilersActive|___<br>DPTValue1Ucount|5.010|
|115|TempFlowWaterProdSegmH|___<br>DPTTempHVACAbs|205.100|
|116|TempReturnWaterProdSegmH|_<br>DPTTempHVACAbs|205.100|
|117|Fault|_<br>DPTBool|1.002|
|118|SummerMode|_<br>DPTBool|1.002|
|119|OffPerm|_<br>DPTBool|1.002|
|120|NoHeatAvailable|_<br>DPTBool|1.002|
|121|StatusPumpBST|_<br>DPTRelValueZ|202.001|
|122|StagesActive|__<br>DPTValue1Ucount|5.010|
|123|ErrorCodeBST|___<br>DPTValue2Ucount|7.001|
|...||___||
|140|TempBSTMax|DPTTempHVACAbs|205.100|
|141|TempBSTMin|_<br>DPTTempHVACAbs|205.100|
|142|TempBSTStart|_<br>DPTTempHVACAbs|205.100|
|143|TempBSTStop|_<br>DPTTempHVACAbs|205.100|


-----

### 7 Functional Block Heat Flow Demand Manager
**Object Name:** **HFDM**
**Object Type:** **144**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsHFDM DPT_TempFlowWaterDemAbs 210.100
52 ForceSignHFDM DPT_ForceSign 21.100
53 LockSignHFDM DPT_LockSign 207.101

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmHPrimary DPT_UcountValue8_Z 202.002
102 DistrSegmHSecondary DPT_UcountValue8_Z 202.002
103 PeripheralLinkPump DPT_UcountValue16_Z 203.012
104 PeripheralLinkFTC DPT_UcountValue16_Z 203.012
... ...
110 TempFlowWaterSetpAct DPT_TempHVACAbs 205.100
111 TempFlowWaterDiffFTC DPT_TempHVACRel 205.101
112 TempFlowWaterMax DPT_TempHVACAbs 205.100

### 8 Functional Block Auxiliary Heat Demand

**Object Name:** **HDAUX**
**Object Type:** **145**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsHDAUX DPT_TempFlowWaterDemAbs 210.100

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmH DPT_UcountValue8_Z 202.002
... ...
110

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 11 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsHFDM|DPTTempFlowWaterDemAbs|210.100|
|52|ForceSignHFDM|_<br>DPTForceSign|21.100|
|53|LockSignHFDM|_<br>DPTLockSign|207.101|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmHPrimary|DPTUcountValue8Z|202.002|
|102|DistrSegmHSecondary|__<br>DPTUcountValue8Z|202.002|
|103|PeripheralLinkPump|__<br>DPTUcountValue16Z|203.012|
|104|PeripheralLinkFTC|__<br>DPTUcountValue16Z|203.012|
|...|...|__||
|110|TempFlowWaterSetpAct|DPTTempHVACAbs|205.100|
|111|TempFlowWaterDiffFTC|_<br>DPTTempHVACRel|205.101|
|112|TempFlowWaterMax|_<br>DPTTempHVACAbs|205.100|
|||_||
|||||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsHDAUX|DPTTempFlowWaterDemAbs|210.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmH|DPTUcountValue8Z|202.002|
|...|...|__||
|110||||
|||||


-----

### 9 Functional Block Heating Zone Controller
**Object Name:** **HZC**
**Object Type:** **160**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsHZC DPT_TempFlowWaterDemAbs 210.100
52 HVACModeAct DPT_HVACMode_Z 201.100
53 TempRoomSetpHeatAct DPT_TempHVACAb_Zs 205.100
54 StatusHZC DPT_StatusRHC 21.102
55 TempFlowWaterHZC DPT_TempHVACAbs_Z 205.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 DistrSegmH DPT_UcountValue8_Z 202.002
105 OutsideSensorZone DPT_UcountValue8_Z 202.002
106
...
110 TempFlowWaterMax DPT_TempHVACAbs_Z 205.100
111 TempFlowWaterMin DPT_TempHVACAbs_Z 205.100
112 TempReturnWaterMax DPT_TempHVACAbs_Z 205.100
113 TempReturnWaterMin DPT_TempHVACAbs_Z 205.100
114 TimeHeatUpMax DPT_TimePeriodMin 07.006
115 TimeEarlyHeatShutdownMax DPT_TimePeriodMin 07.006
116 TempReturnWaterHZC DPT_TempHVACAbs_Z 205.100
117 TempFlowWaterSetpHZC DPT_TempHVACAbs_Z 205.100
118 TempRoomAct DPT_TempHVACAbs_Z 205.100
119 TempOutsideAct DPT_TempHVACAbs_Z 205.100
120 TempOutsideAttenuat DPT_TempHVACAbs_Z 205.100
121 WindSpeedAct DPT_WindSpeed_Z 203.101
122 SunIntensityAct DPT_SunIntensity_Z 203.102
123 StatusPumpHZC DPT_RelValue_Z 202.001
124 Fault DPT_Bool 1.002
125 ErrorCodeHZC DPT_Value_2_Ucount 7.001
126 StatusMorningBoost DPT_Bool 1.002

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 12 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsHZC|DPTTempFlowWaterDemAbs|210.100|
|52|HVACModeAct|_<br>DPTHVACModeZ|201.100|
|53|TempRoomSetpHeatAct|__<br>DPTTempHVACAbZs|205.100|
|54|StatusHZC|__<br>DPTStatusRHC|21.102|
|55|TempFlowWaterHZC|_<br>DPTTempHVACAbsZ|205.100|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|DistrSegmH|__<br>DPTUcountValue8Z|202.002|
|105|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|106||__||
|...||||
|110|TempFlowWaterMax|DPTTempHVACAbsZ|205.100|
|111|TempFlowWaterMin|__<br>DPTTempHVACAbsZ|205.100|
|112|TempReturnWaterMax|__<br>DPTTempHVACAbsZ|205.100|
|113|TempReturnWaterMin|__<br>DPTTempHVACAbsZ|205.100|
|114|TimeHeatUpMax|__<br>DPTTimePeriodMin|07.006|
|115|TimeEarlyHeatShutdownMax|_<br>DPTTimePeriodMin|07.006|
|116|TempReturnWaterHZC|_<br>DPTTempHVACAbsZ|205.100|
|117|TempFlowWaterSetpHZC|__<br>DPTTempHVACAbsZ|205.100|
|118|TempRoomAct|__<br>DPTTempHVACAbsZ|205.100|
|119|TempOutsideAct|__<br>DPTTempHVACAbsZ|205.100|
|120|TempOutsideAttenuat|__<br>DPTTempHVACAbsZ|205.100|
|121|WindSpeedAct|__<br>DPTWindSpeedZ|203.101|
|122|SunIntensityAct|__<br>DPTSunIntensityZ|203.102|
|123|StatusPumpHZC|__<br>DPTRelValueZ|202.001|
|124|Fault|__<br>DPTBool|1.002|
|125|ErrorCodeHZC|_<br>DPTValue2Ucount|7.001|
|126|StatusMorningBoost|___<br>DPTBool|1.002|


-----

### 10 Functional Block Heating Individual Room Controller 
**Object Name:** **HIRC**
**Object Type:** **167**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempRoomDemAbsHeat DPT_TempRoomDemAbs 209.101
52 ActPosDemAbsHeat DPT_ActPosDemAbs 207.104
53 TempRoomSetpHeatAct DPT_TempHVACAbs_Z 205.100
54 HVACModeAct DPT_HVACMode_Z 201.100
55 StatusHIRC DPT_StatusRHC 21.102
56
Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 Room DPT_UcountValue8_Z 202.002
103 Subzone DPT_UcountValue8_Z 202.002
104 -105 OutsideSensorZone DPT_UcountValue8_Z 202.002
...
114 TimeHeatUpMax DPT_TimePeriodMin 07.006
115 TimeEarlyHeatShutdownMax DPT_TimePeriodMin 07.006
116 -117 ActPosSetpHIRC DPT_RelValue_Z 202.001
118 TempRoomAct DPT_TempHVACAbs_Z 205.100
119 TempOutsideAct DPT_TempHVACAbs_Z 205.100
120 TempOutsideAttenuat DPT_TempHVACAbs_Z 205.100
121 WindSpeedAct DPT_WindSpeed_Z 203.101
122 SunIntensityAct DPT_SunIntensity_Z 203.102
123 -124 Fault DPT_Bool 1.002
125 ErrorCodeHIRC DPT_Value_2_Ucount 7.001
126 StatusMorningBoost DPT_Bool 1.002

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 13 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempRoomDemAbsHeat|DPTTempRoomDemAbs|209.101|
|52|ActPosDemAbsHeat|_<br>DPTActPosDemAbs|207.104|
|53|TempRoomSetpHeatAct|_<br>DPTTempHVACAbsZ|205.100|
|54|HVACModeAct|__<br>DPTHVACModeZ|201.100|
|55|StatusHIRC|__<br>DPTStatusRHC|21.102|
|56||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|Room|__<br>DPTUcountValue8Z|202.002|
|103|Subzone|__<br>DPTUcountValue8Z|202.002|
|104|--|__||
|105|OutsideSensorZone|DPTUcountValue8Z|202.002|
|...||__||
|114|TimeHeatUpMax|DPTTimePeriodMin|07.006|
|115|TimeEarlyHeatShutdownMax|_<br>DPTTimePeriodMin|07.006|
|116|--|_||
|117|ActPosSetpHIRC|DPTRelValueZ|202.001|
|118|TempRoomAct|__<br>DPTTempHVACAbsZ|205.100|
|119|TempOutsideAct|__<br>DPTTempHVACAbsZ|205.100|
|120|TempOutsideAttenuat|__<br>DPTTempHVACAbsZ|205.100|
|121|WindSpeedAct|__<br>DPTWindSpeedZ|203.101|
|122|SunIntensityAct|__<br>DPTSunIntensityZ|203.102|
|123|--|__||
|124|Fault|DPTBool|1.002|
|125|ErrorCodeHIRC|_<br>DPTValue2Ucount|7.001|
|126|StatusMorningBoost|___<br>DPTBool|1.002|
|||_||


-----

### 11 Functional Block Heating Room Demand Manager 
**Object Name:** **HRDM**
**Object Type:** **170**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempRoomDemAbsHeatMax DPT_TempRoomDemAbs 209.101
52 ActPosDemAbsHeatMax DPT_ActPosDemAbs 207.104
53
54

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102
...
110 NumberOfHIRC DPT_Value_1_Ucount 5.010

### 12 Functional Block Heating Demand Transformer Actuator Position 

**Object Name:** **HDTACT**
**Object Type:** **169**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemHeatShift DPT_TempHVACRel_Z 205.101
52 PumpControl DPT_Switch 1.001

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102
...
110 ActPosSetpMax DPT_Scaling 5.001
111 ClosedLoopGain DPT_KelvinPerPercent 9.023
112 TempFlowWaterShiftMin DPT_TempHVACRel_Z 205.101
113 TempFlowWaterShiftMax DPT_TempHVACRel_Z 205.101
114 OperationMode DPT_Mode_Boiler 3.009
115 MaxValvePosOn DPT_Scaling 5.001

116 MaxValvePosOff DPT_Scaling 5.001

117

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 14 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempRoomDemAbsHeatMax|DPTTempRoomDemAbs|209.101|
|52|ActPosDemAbsHeatMax|_<br>DPTActPosDemAbs|207.104|
|53||_||
|54||||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102||__||
|...||||
|110|NumberOfHIRC|DPTValue1Ucount|5.010|
|||___||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemHeatShift|DPTTempHVACRelZ|205.101|
|52|PumpControl|__<br>DPTSwitch|1.001|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102||__||
|...||||
|110|ActPosSetpMax|DPTScaling|5.001|
|111|ClosedLoopGain|_<br>DPTKelvinPerPercent|9.023|
|112|TempFlowWaterShiftMin|_<br>DPTTempHVACRelZ|205.101|
|113|TempFlowWaterShiftMax|__<br>DPTTempHVACRelZ|205.101|
|114|OperationMode|__<br>DPTModeBoiler|3.009|
|115|MaxValvePosOn|__<br>DPT_Scaling|5.001|
|116|MaxValvePosOff|DPT_Scaling|5.001|
|117||||


-----

### 13 Functional Block Heating Demand Transformer Room Temp
**Object Name:** **HDTRT**
**Object Type:** **151**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsHDTRT DPT_TempFlowWaterDemAbs 210.100
52

Parameters and Diagnostic Data (individual addressing only)
101 Apartment DPT_UcountValue8_Z 202.002
102 reserved
103 reserved
104 DistrSegmH DPT_UcountValue8_Z 202.002
105 OutsideSensorZone DPT_UcountValue8_Z 202.002
...
110 TempFlowWaterSetpEff DPT_TempHVACAbs_Z 205.100
111 TempFlowWaterSetpDefault DPT_TempHVACAbs_Z 205.100
112 TempFlowWaterDemHeatShiftAct DPT_TempHVACRel_Z 205.101
113 TempRoomDemAbsHeatMaxAct DPT_TempRoomDemAbs_Z 209.101
114 TempOutsideAct DPT_TempHVACAbs_Z 205.100
115 SetpointMode DPT_InputSource 1.014

### 14 Functional Block Domestic Hot Water Setpoint Manager

**Object Name:** **DHWSM**
**Object Type:** **176**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 DHWModeEff DPT_DHWMode_Z 201.102
52 DHWModeEffNext DPT_DHWModeNext 206.102
53 TempDHWSetpSetEff [4] DTP_TempDHWSetpSet[4] 213.101
54 DHWPush DPT_Trigger 1.017
55 TempDHWSetpEff DPT_TempHVACAbs_Z 205.100
56 DHWModeUserEff DPT_DHWMode_Z 201.102
Parameters and Diagnostic Data (individual addressing only)
101 DHWZone_Controller DPT_UcountValue8_Z 202.002
102 DHWZone_Scheduler DPT_UcountValue8_Z 202.002
...
110 TempDHWSetpLegioProtect DPT_TempHVACAbs_Z 205.100
111 TempDHWSetpNormal DPT_TempHVACAbs_Z 205.100
112 TempDHWSetpReduced DPT_TempHVACAbs_Z 205.100
113 TempDHWSetpOff/FrostProtect DPT_TempHVACAbs_Z 205.100

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 15 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsHDTRT|DPTTempFlowWaterDemAbs|210.100|
|52||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartment|DPTUcountValue8Z|202.002|
|102|reserved|__||
|103|reserved|||
|104|DistrSegmH|DPTUcountValue8Z|202.002|
|105|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|...||__||
|110|TempFlowWaterSetpEff|DPTTempHVACAbsZ|205.100|
|111|TempFlowWaterSetpDefault|__<br>DPTTempHVACAbsZ|205.100|
|112|TempFlowWaterDemHeatShiftAct|__<br>DPTTempHVACRelZ|205.101|
|113|TempRoomDemAbsHeatMaxAct|__<br>DPTTempRoomDemAbsZ|209.101|
|114|TempOutsideAct|__<br>DPTTempHVACAbsZ|205.100|
|115|SetpointMode|__<br>DPTInputSource|1.014|

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|DHWModeEff|DPTDHWModeZ|201.102|
|52|DHWModeEffNext|__<br>DPTDHWModeNext|206.102|
|53|TempDHWSetpSetEff[4]|_<br>DTPTempDHWSetpSet[4]|213.101|
|54|DHWPush|_<br>DPTTrigger|1.017|
|55|TempDHWSetpEff|_<br>DPTTempHVACAbsZ|205.100|
|56|DHWModeUserEff|__<br>DPTDHWModeZ|201.102|
|__<br>Parameters and Diagnostic Data  (individual addressing only)|__<br>Parameters and Diagnostic Data  (individual addressing only)|__<br>Parameters and Diagnostic Data  (individual addressing only)|__<br>Parameters and Diagnostic Data  (individual addressing only)|
|101|DHWZoneController|DPTUcountValue8Z|202.002|
|102|_<br>DHWZoneScheduler|__<br>DPTUcountValue8Z|202.002|
|...|_|__||
|110|TempDHWSetpLegioProtect|DPTTempHVACAbsZ|205.100|
|111|TempDHWSetpNormal|__<br>DPTTempHVACAbsZ|205.100|
|112|TempDHWSetpReduced|__<br>DPTTempHVACAbsZ|205.100|
|113|TempDHWSetpOff/FrostProtect|__<br>DPTTempHVACAbsZ|205.100|


-----

### 15 Functional Block Domestic Hot Water Controller 
**Object Name:** **DHWC**
**Object Type:** **177**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAbsDHW DPT_TempFlowWaterDemAbs 210.100
52 TempDHWSetpAct DPT_TempHVACAbs 205.100
53 TempDHWSensorHigh DPT_TempHVACAbs 205.100
54 TempDHWSensorLow DPT_TempHVACAbs 205.100
55 StatusDHWC DPT_StatusDHWC 22.100
56 DHWModeAct DPT_DHWMode 201.102
57 TempFlowWaterDHW DPT_TempHVACAbs 205.100

Parameters and Diagnostic Data (individual addressing only)
101 DHWZone DPT_UcountValue8_Z 202.002
102 DistrSegmH DPT_UcountValue8_Z 202.002
103
...
110 TempFlowWaterSetpDHW DPT_TempHVACAbs 205.100
111 StatusLoadPumpDHW DPT_RelValue_Z 202.001
112 ThermostatDHWHigh DPT_Switch 1.001
113 ThermostatDHWLow DPT_Switch 1.001
114 Fault DPT_Bool 1.002
115 ErrorCodeDHWC DPT_Value_2_Ucount 7.001
116 TempDHWSwitchDiff DPT_TempHVACRel_Z 205.101
117 TempDHWLoadBoost DPT_TempHVACRel_Z 205.101
118 LoadPriorityDHW DPT_LoadPriority 20.104
119

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 16 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAbsDHW|DPTTempFlowWaterDemAbs|210.100|
|52|TempDHWSetpAct|_<br>DPTTempHVACAbs|205.100|
|53|TempDHWSensorHigh|_<br>DPTTempHVACAbs|205.100|
|54|TempDHWSensorLow|_<br>DPTTempHVACAbs|205.100|
|55|StatusDHWC|_<br>DPTStatusDHWC|22.100|
|56|DHWModeAct|_<br>DPTDHWMode|201.102|
|57|TempFlowWaterDHW|_<br>DPTTempHVACAbs|205.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DHWZone|DPTUcountValue8Z|202.002|
|102|DistrSegmH|__<br>DPTUcountValue8Z|202.002|
|103||__||
|...||||
|110|TempFlowWaterSetpDHW|DPTTempHVACAbs|205.100|
|111|StatusLoadPumpDHW|_<br>DPTRelValueZ|202.001|
|112|ThermostatDHWHigh|__<br>DPTSwitch|1.001|
|113|ThermostatDHWLow|_<br>DPTSwitch|1.001|
|114|Fault|_<br>DPTBool|1.002|
|115|ErrorCodeDHWC|_<br>DPTValue2Ucount|7.001|
|116|TempDHWSwitchDiff|___<br>DPTTempHVACRelZ|205.101|
|117|TempDHWLoadBoost|__<br>DPTTempHVACRelZ|205.101|
|118|LoadPriorityDHW|__<br>DPTLoadPriority|20.104|
|119||_||
|||||


-----

### 16 Functional Block DHW Circulation Pump Controller
**Object Name:** **DHWCPC**
**Object Type:** **179**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 _CtlSignPump output t.b.d._

Parameters and Diagnostic Data (individual addressing only)
101 DHWZone DPT_UcountValue8_Z 202.002
102
103 PeripheralLinkPump DPT_UcountValue16_Z 203.012
...
110 StatusCircPumpDHW DPT_RelValue_Z 202.001
111 RunTimeCPPush DPT_TimePeriodMin 07.006
112
113

### 17 Functional Block Solar DHW Controller 

**Object Name:** **SDHWC**
**Object Type:** **186**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 StatusSDHWC DPT_StatusSDHWC 21.103
52 TempCollectorAct DPT_HVACTempAbs 205.100

Parameters and Diagnostic Data (individual addressing only)
101 DHWZone DPT_UcountValue8_Z 202.002
102
103 PeripheralLinkPump DPT_UcountValue16_Z 203.012
...
110 Fault DPT_Bool 1.002
111 StatusSolarPump DPT_RelValue_Z 202.001
112 ErrorCodeSDHWC DPT_Value_2_Ucount 7.001
113
114

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 17 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|_CtlSignPump output t.b.d._|||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DHWZone|DPTUcountValue8Z|202.002|
|102||__||
|103|PeripheralLinkPump|DPTUcountValue16Z|203.012|
|...||__||
|110|StatusCircPumpDHW|DPTRelValueZ|202.001|
|111|RunTimeCPPush|__<br>DPTTimePeriodMin|07.006|
|112||_||
|113||||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|StatusSDHWC|DPTStatusSDHWC|21.103|
|52|TempCollectorAct|_<br>DPTHVACTempAbs|205.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DHWZone|DPTUcountValue8Z|202.002|
|102||__||
|103|PeripheralLinkPump|DPTUcountValue16Z|203.012|
|...||__||
|110|Fault|DPTBool|1.002|
|111|StatusSolarPump|_<br>DPTRelValueZ|202.001|
|112|ErrorCodeSDHWC|__<br>DPTValue2Ucount|7.001|
|113||___||
|114||||


-----

### 18 Functional Block DHW Temperature Sensor
**Object Name:** **DHWTS**
**Object Type:** **180**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempDHW DPT_HVACTempAbs 205.100
52

Parameters and Diagnostic Data (individual addressing only)
101 DHWZone DPT_UcountValue8_Z 202.002
...
110 TempCorrValue DPT_TempHVACRel_Z 205.101
111 TempCOVCondition DPT_TempHVACRel_Z 205.101
112 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
113 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100

### 19 Functional Block DHW User Setting 

**Object Name:** **UDHWSET**
**Object Type:** **181**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 DHWModeUser DPT_DHWModeUser 201.103
52 TempDHWSetpUser DPT_HVACTempAbs 205.100
53 DHWPushUser DPT_Trigger 1.017
54 DHWOtherEnergySource DPT_Bool 1.002
55 DHWCPCPush DPT_Trigger 1.017
Parameters and Diagnostic Data (individual addressing only)
101 DHWZone DPT_UcountValue8_Z 202.002
...
110

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 18 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempDHW|DPTHVACTempAbs|205.100|
|52||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DHWZone|DPTUcountValue8Z|202.002|
|...||__||
|110|TempCorrValue|DPTTempHVACRelZ|205.101|
|111|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|112|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|113|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|DHWModeUser|DPTDHWModeUser|201.103|
|52|TempDHWSetpUser|_<br>DPTHVACTempAbs|205.100|
|53|DHWPushUser|_<br>DPTTrigger|1.017|
|54|DHWOtherEnergySource|_<br>DPTBool|1.002|
|55|DHWCPCPush|_<br>DPTTrigger|1.017|
|_<br>Parameters and Diagnostic Data  (individual addressing only)|_<br>Parameters and Diagnostic Data  (individual addressing only)|_<br>Parameters and Diagnostic Data  (individual addressing only)|_<br>Parameters and Diagnostic Data  (individual addressing only)|
|101|DHWZone|DPTUcountValue8Z|202.002|
|...||__||
|110||||


-----

### 20 Functional Block: Collector Temperature Sensor 
**Object Name:** **COLTS**
**Object Type:** **187**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempCollector DPT_HVACTempAbs 205.100
52

Parameters and Diagnostic Data (individual addressing only)
101 DHWZone DPT_UcountValue8_Z 202.002
...
110 TempCorrValue DPT_TempHVACRel_Z 205.101
111 TempCOVCondition DPT_TempHVACRel_Z 205.101
112 TempAlarmLimitUpper DPT_TempHVACAbs_Z 205.100
113 TempAlarmLimitLower DPT_TempHVACAbs_Z 205.100
110

### 21 Functional Block Flow Temperature Controller 

**Object Name:** **FTC**
**Object Type:** **120**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 StatusFTC DPT_StatusWTC 209.103
52 TempFlowWaterSetp DPT_HVACTempAbs 205.100

Parameters and Diagnostic Data (individual addressing only)
101 PeripheralLinkFTC DPT_UcountValue16_Z 203.012
102
...
110 RunTimeMixValve DPT_TimePeriodSec 07.005
111 TempFlowWaterAct DPT_TempHVACAbs_Z 205.100
112 CtrlStatus DPT_Switch 1.001
113 Fault DPT_Bool 1.002
114 ErrorCodeFTC DPT_Value_2_Ucount 7.001

© C i h 1999 2013 KNX A i i A li i D i i 01 01 01 19 f 19

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempCollector|DPTHVACTempAbs|205.100|
|52||_||
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DHWZone|DPTUcountValue8Z|202.002|
|...||__||
|110|TempCorrValue|DPTTempHVACRelZ|205.101|
|111|TempCOVCondition|__<br>DPTTempHVACRelZ|205.101|
|112|TempAlarmLimitUpper|__<br>DPTTempHVACAbsZ|205.100|
|113|TempAlarmLimitLower|__<br>DPTTempHVACAbsZ|205.100|
|110||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|StatusFTC|DPTStatusWTC|209.103|
|52|TempFlowWaterSetp|_<br>DPTHVACTempAbs|205.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|PeripheralLinkFTC|DPTUcountValue16Z|203.012|
|102||__||
|...||||
|110|RunTimeMixValve|DPTTimePeriodSec|07.005|
|111|TempFlowWaterAct|_<br>DPTTempHVACAbsZ|205.100|
|112|CtrlStatus|__<br>DPTSwitch|1.001|
|113|Fault|_<br>DPTBool|1.002|
|114|ErrorCodeFTC|_<br>DPTValue2Ucount|7.001|
|||___||


-----

