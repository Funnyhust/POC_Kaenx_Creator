# Application Descriptions

## Terminal Unit Functional Blocks

 Property Identifiers

Summary:

This document is a part of the HVAC Application Interworking Standard.
It specifies the standardised Property Identifiers for each Functional
Block / Interface Object

Version 02.02.02 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document Updates

**Version** **Date** **Modifications**

001.18 2001.xx.xx New document
001.19-21 stepwise completed
001.22 2002.07.17 adapted to main documents
2.00 2002.11.29 Property Identifiers of parameters of the controller FB’s corrected
2.01 2003.08.15 Adapted to the Functional Block documents
2.2 2009.06.18 Update in view of publication in the KNX Specifications v2.0.
2.2.01 2010.11.29 Added Parameters TempSupplyAirSetpMin and TempSupplyAirSetpMax
to VDTTU according WGI discussion [WGI00061].
02.02.02 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

None.

Filename: 07_13_09 HVAC PropertyID TerminalUnit v02.02.02 AS.docx
Version: 02.02.02
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 15

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 2 f 15

|Version|Date|Modifications|
|---|---|---|
|001.18|2001.xx.xx|New document|
|001.19-21||stepwise completed|
|001.22|2002.07.17|adapted to maindocuments|
|2.00|2002.11.29|Property Identifiers of parameters of the controller FB’s corrected|
|2.01|2003.08.15|Adapted to the Functional Block documents|
|2.2|2009.06.18|Update in view of publication inthe KNXSpecifications v2.0.|
|2.2.01|2010.11.29|Added Parameters TempSupplyAirSetpMin and TempSupplyAirSetpMax<br>to VDTTU according WGI discussion [WGI00061].|
|02.02.02|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4 1.2 Structure of the document ............................................................................................... 4

 2 HVAC Property Identifiers ................................................................................................... 5 2.1 TU Controller .................................................................................................................. 5 2.1.1 Empty .................................................................................................................. 5 2.1.2 Fancoil Control ................................................................................................... 6 2.1.3 Water Heat Pump Control for Ringwater ........................................................... 8 2.1.4 Split Unit Control ................................................................................................ 9 2.1.5 Radiator and Chilled Ceiling Room Control .................................................... 10 2.1.6 Radiator Room Control TU .............................................................................. 11 2.1.7 VAV Control Discharge Air ............................................................................. 12 2.1.8 VAV Control Extract Air .................................................................................. 13 2.2 TU Energy Demand Transformer ................................................................................. 13 2.2.1 Empty ................................................................................................................ 13 2.2.2 Radiator Heating Energy Demand Transformer TU ......................................... 14 2.2.3 Chilled Ceiling Energy Demand Transformer TU ............................................ 14 2.2.4 Air Heater Energy Demand Transformer TU ................................................... 14 2.2.5 Air Cooler Energy Demand Transformer TU ................................................... 15 2.2.6 Ventilation Demand Transformer TU ............................................................... 15

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 3 f 15


-----

### 1 Introduction

#### 1.1 Scope
This document specifies the Property Identifiers for LTE-HEE Process Data (runtime interworking) and
Parameters / Diagnostic data used in the data-interfaces of HVAC Terminal Unit Functional Blocks. This
document is part of the KNX HVAC Application Interworking Standard.

#### 1.2 Structure of the document
The chapters of the document is chosen in order to give a relation to:
Volume 7 Application Descriptions
Part 13 Terminal Unit Functional Blocks

So:
Chapter 2.1 of this document corresponds to Chapter 1 of Part 13
Chapter 2.2 of this document corresponds to Chapter 2 of Part 13

Within these chapters the subchapters again correspond:
Chapter 2.1.3 of this document corresponds to chapter 3.3 of Chapter 1 of Part 13
Chapter 2.2.4 of this document corresponds to chapter 3.4 of Chapter 2 of Part 13

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 4 f 15


-----

### 2 HVAC Property Identifiers

#### 2.1 TU Controller

##### 2.1.1 Empty
Due to compatibility with other documents

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 5 f 15


-----

##### 2.1.2 Fancoil Control
**Object Name:** **FCC**

**Object Type:** **258**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
73 EnergyDemAH DPT_EnergyDemWater 211.100
74 EnergyDemAC DPT_EnergyDemWater 211.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x (eff space zone) DPT_UcountValue8_Z 202.002
102 Room_y (eff space zone) DPT_UcountValue8_Z 202.002
103 SubZone_z (eff space zone) DPT_UcountValue8_Z 202.002
104 Apartment_u (scheduler zone) DPT_UcountValue8_Z 202.002
105 Room_v (scheduler zone) DPT_UcountValue8_Z 202.002
106 SubZone_w (scheduler zone) DPT_UcountValue8_Z 202.002
107 Apartment_m (management zone) DPT_UcountValue8_Z 202.002
108 Room_n (management zone) DPT_UcountValue8_Z 202.002
109 SubZone_o (management zone) DPT_UcountValue8_Z 202.002
110 OutsideSensorZone_f DPT_UcountValue8_Z 202.002
111 OutsideSensorZone_g DPT_UcountValue8_Z 202.002
113 DistrSegmC_d DPT_UcountValue8_Z 202.002
115 DistrSegmH_b DPT_UcountValue8_Z 202.002

121 BUSActuatorCSA_ON/OFF DPT_Switch 1.001
122 BUSActuatorCSB_ON/OFF DPT_Switch 1.001
123 BUSActuatorFA_ON/OFF DPT_Switch 1.001
124 BUSActuatorFS_ON/OFF DPT_Switch 1.001
125 BUSActuatorHSA_ON/OFF DPT_Switch 1.001
126 BUSActuatorHSB_ON/OFF DPT_Switch 1.001
127 ControlSequence DPT_ChangeoverMode 20.107
133 FanDwellTimeDeadZone DPT_TimePeriodMin 7.006
134 FanInDeadZone DPT_FanMode 20.111
135 FanRunTimeDeadZone DPT_TimePeriodMin 7.006
136 FanSpeed#1OFF DPT_Percent_U8 5.004
137 FanSpeed#1ON DPT_Percent_U8 5.004
138 FanSpeed#2OFF DPT_Percent_U8 5.004
139 FanSpeed#2ON DPT_Percent_U8 5.004
140 FanSpeed#3OFF DPT_Percent_U8 5.004
141 FanSpeed#3ON DPT_Percent_U8 5.004
142 FanSpeed#4OFF DPT_Percent_U8 5.004
143 FanSpeed#4ON DPT_Percent_U8 5.004
144 FanSpeed#5OFF DPT_Percent_U8 5.004
145 FanSpeed#5ON DPT_Percent_U8 5.004
146 FanSpeedDeadZone DPT_Percent_U8 5.004
128 FreshAirMinValue DPT_Percent_U8 5.004
129 SplitCoolDefValue DPT_Percent_U8 5.004
130 SplitHeatDefValue DPT_Percent_U8 5.004
132 TempDischargeAirMin DPT_TempHVACAbs_Z 205.100
131 TempFrostAlarm DPT_TempHVACAbs_Z 205.100

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 6 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|73|EnergyDemAH|DPTEnergyDemWater|211.100|
|74|EnergyDemAC|_<br>DPTEnergyDemWater|211.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx (effspace zone)|DPTUcountValue8Z|202.002|
|102|_<br>Roomy (eff space zone)|__<br>DPTUcountValue8Z|202.002|
|103|_<br>SubZonez (effspace zone)|__<br>DPTUcountValue8Z|202.002|
|104|_<br>Apartmentu (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|105|_<br>Roomv (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|106|_<br>SubZonew (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|107|_<br>Apartmentm (management zone)|__<br>DPTUcountValue8Z|202.002|
|108|_<br>Roomn (management zone)|__<br>DPTUcountValue8Z|202.002|
|109|_<br>SubZoneo (management zone)|__<br>DPTUcountValue8Z|202.002|
|110|_<br>OutsideSensorZonef|__<br>DPTUcountValue8Z|202.002|
|111|_<br>OutsideSensorZoneg|__<br>DPTUcountValue8Z|202.002|
|113|_<br>DistrSegmCd|__<br>DPTUcountValue8Z|202.002|
|115|_<br>DistrSegmHb|__<br>DPTUcountValue8Z|202.002|
||_|__||
|121|BUSActuatorCSAON/OFF|DPTSwitch|1.001|
|122|_<br>BUSActuatorCSBON/OFF|_<br>DPTSwitch|1.001|
|123|_<br>BUSActuatorFAON/OFF|_<br>DPTSwitch|1.001|
|124|_<br>BUSActuatorFSON/OFF|_<br>DPTSwitch|1.001|
|125|_<br>BUSActuatorHSAON/OFF|_<br>DPTSwitch|1.001|
|126|_<br>BUSActuatorHSBON/OFF|_<br>DPTSwitch|1.001|
|127|_<br>ControlSequence|_<br>DPTChangeoverMode|20.107|
|133|FanDwellTimeDeadZone|_<br>DPTTimePeriodMin|7.006|
|134|FanInDeadZone|_<br>DPTFanMode|20.111|
|135|FanRunTimeDeadZone|_<br>DPTTimePeriodMin|7.006|
|136|FanSpeed#1OFF|_<br>DPTPercentU8|5.004|
|137|FanSpeed#1ON|__<br>DPTPercentU8|5.004|
|138|FanSpeed#2OFF|__<br>DPTPercentU8|5.004|
|139|FanSpeed#2ON|__<br>DPTPercentU8|5.004|
|140|FanSpeed#3OFF|__<br>DPTPercentU8|5.004|
|141|FanSpeed#3ON|__<br>DPTPercentU8|5.004|
|142|FanSpeed#4OFF|__<br>DPTPercentU8|5.004|
|143|FanSpeed#4ON|__<br>DPTPercentU8|5.004|
|144|FanSpeed#5OFF|__<br>DPTPercentU8|5.004|
|145|FanSpeed#5ON|__<br>DPTPercentU8|5.004|
|146|FanSpeedDeadZone|__<br>DPTPercentU8|5.004|
|128|FreshAirMinValue|__<br>DPTPercentU8|5.004|
|129|SplitCoolDefValue|__<br>DPTPercentU8|5.004|
|130|SplitHeatDefValue|__<br>DPTPercentU8|5.004|
|132|TempDischargeAirMin|__<br>DPTTempHVACAbsZ|205.100|
|131|TempFrostAlarm|__<br>DPTTempHVACAbsZ|205.100|
|||__||


-----

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

150 ContrModeAct DPT_HVACContrMode 20.105
151 HeatCoolMode DPT_Heat/Cool 1.100
152 HVACModeAct DPT_HVACMode 20.102
153 TempRoomSetpAct DPT_TempHVACAbs_Z 205.100
154 ValueEnergyDem DPT_Percent_V8 6.001

155-169 leave open, for future standardized datapoints (see Volume 10 Part 1)

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 7 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|150|ContrModeAct|DPTHVACContrMode|20.105|
|151|HeatCoolMode|_<br>DPTHeat/Cool|1.100|
|152|HVACModeAct|_<br>DPTHVACMode|20.102|
|153|TempRoomSetpAct|_<br>DPTTempHVACAbsZ|205.100|
|154|ValueEnergyDem|__<br>DPTPercentV8|6.001|
|||__||
|155-169|leave open, for future standardized datapoints (see Volume 10 Part 1)|leave open, for future standardized datapoints (see Volume 10 Part 1)||
|||||


-----

##### 2.1.3 Water Heat Pump Control for Ringwater
**Object Name:** **WHPC**

**Object Type:** **259**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
73 EnergyDemAH DPT_EnergyDemWater 211.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x (eff space zone) DPT_UcountValue8_Z 202.002
102 Room_y (eff space zone) DPT_UcountValue8_Z 202.002
103 SubZone_z (eff space zone) DPT_UcountValue8_Z 202.002
104 Apartment_u (scheduler zone) DPT_UcountValue8_Z 202.002
105 Room_v (scheduler zone) DPT_UcountValue8_Z 202.002
106 SubZone_w (scheduler zone) DPT_UcountValue8_Z 202.002
107 Apartment_m (management zone) DPT_UcountValue8_Z 202.002
108 Room_n (management zone) DPT_UcountValue8_Z 202.002
109 SubZone_o (management zone) DPT_UcountValue8_Z 202.002
110 OutsideSensorZone_f DPT_UcountValue8_Z 202.002
111 OutsideSensorZone_g DPT_UcountValue8_Z 202.002

122 BUSActuatorCP_ON/OFF DPT_Switch 1.001
123 BUSActuatorFA_ON/OFF DPT_Switch 1.001
124 BUSActuatorFS_ON/OFF DPT_Switch 1.001
126 BUSActuatorHSB_ON/OFF DPT_Switch 1.001
133 FanDwellTimeDeadZone DPT_TimePeriodMin 7.006
134 FanInDeadZone DPT_FanMode 20.111
135 FanRunTimeDeadZone DPT_TimePeriodMin 7.006
136 FanSpeed#1OFF DPT_Percent_U8 5.004
137 FanSpeed#1ON DPT_Percent_U8 5.004
138 FanSpeed#2OFF DPT_Percent_U8 5.004
139 FanSpeed#2ON DPT_Percent_U8 5.004
140 FanSpeed#3OFF DPT_Percent_U8 5.004
141 FanSpeed#3ON DPT_Percent_U8 5.004
142 FanSpeed#4OFF DPT_Percent_U8 5.004
143 FanSpeed#4ON DPT_Percent_U8 5.004
144 FanSpeed#5OFF DPT_Percent_U8 5.004
145 FanSpeed#5ON DPT_Percent_U8 5.004
146 FanSpeedDeadZone DPT_Percent_U8 5.004
128 FreshAirMinValue DPT_Percent_U8 5.004
130 SplitHeatDefValue DPT_Percent_U8 5.004
131 TempFrostAlarm DPT_TempHVACAbs_Z 205.100

150 ContrModeAct DPT_HVACContrMode 20.105
151 HeatCoolMode DPT_Heat/Cool 1.100
152 HVACModeAct DPT_HVACMode 20.102
153 TempRoomSetpAct DPT_TempHVACAbs_Z 205.100
154 ValueEnergyDem DPT_Percent_V8 6.001

155-169 leave open, for future standardized datapoints (see Volume 10 Part 1)

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 8 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|73|EnergyDemAH|DPTEnergyDemWater|211.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx (effspace zone)|DPTUcountValue8Z|202.002|
|102|_<br>Roomy (effspace zone)|__<br>DPTUcountValue8Z|202.002|
|103|_<br>SubZonez (eff space zone)|__<br>DPTUcountValue8Z|202.002|
|104|_<br>Apartmentu (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|105|_<br>Roomv (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|106|_<br>SubZonew (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|107|_<br>Apartmentm (management zone)|__<br>DPTUcountValue8Z|202.002|
|108|_<br>Roomn (management zone)|__<br>DPTUcountValue8Z|202.002|
|109|_<br>SubZoneo (management zone)|__<br>DPTUcountValue8Z|202.002|
|110|_<br>OutsideSensorZonef|__<br>DPTUcountValue8Z|202.002|
|111|_<br>OutsideSensorZoneg|__<br>DPTUcountValue8Z|202.002|
||_|__||
|122|BUSActuatorCPON/OFF|DPTSwitch|1.001|
|123|_<br>BUSActuatorFAON/OFF|_<br>DPTSwitch|1.001|
|124|_<br>BUSActuatorFSON/OFF|_<br>DPTSwitch|1.001|
|126|_<br>BUSActuatorHSBON/OFF|_<br>DPTSwitch|1.001|
|133|_<br>FanDwellTimeDeadZone|_<br>DPTTimePeriodMin|7.006|
|134|FanInDeadZone|_<br>DPTFanMode|20.111|
|135|FanRunTimeDeadZone|_<br>DPTTimePeriodMin|7.006|
|136|FanSpeed#1OFF|_<br>DPTPercentU8|5.004|
|137|FanSpeed#1ON|__<br>DPTPercentU8|5.004|
|138|FanSpeed#2OFF|__<br>DPTPercentU8|5.004|
|139|FanSpeed#2ON|__<br>DPTPercentU8|5.004|
|140|FanSpeed#3OFF|__<br>DPTPercentU8|5.004|
|141|FanSpeed#3ON|__<br>DPTPercentU8|5.004|
|142|FanSpeed#4OFF|__<br>DPTPercentU8|5.004|
|143|FanSpeed#4ON|__<br>DPTPercentU8|5.004|
|144|FanSpeed#5OFF|__<br>DPTPercentU8|5.004|
|145|FanSpeed#5ON|__<br>DPTPercentU8|5.004|
|146|FanSpeedDeadZone|__<br>DPTPercentU8|5.004|
|128|FreshAirMinValue|__<br>DPTPercentU8|5.004|
|130|SplitHeatDefValue|__<br>DPTPercentU8|5.004|
|131|TempFrostAlarm|__<br>DPTTempHVACAbsZ|205.100|
|||__||
|150|ContrModeAct|DPTHVACContrMode|20.105|
|151|HeatCoolMode|_<br>DPTHeat/Cool|1.100|
|152|HVACModeAct|_<br>DPTHVACMode|20.102|
|153|TempRoomSetpAct|_<br>DPTTempHVACAbsZ|205.100|
|154|ValueEnergyDem|__<br>DPTPercentV8|6.001|
|||__||
|155-169|leave open, for future standardized datapoints (see Volume 10 Part 1)|leave open, for future standardized datapoints (see Volume 10 Part 1)||


-----

##### 2.1.4 Split Unit Control
**Object Name:** **SPUC**

**Object Type:** **260**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
73 EnergyDemAH DPT_EnergyDemWater 211.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x (eff space zone) DPT_UcountValue8_Z 202.002
102 Room_y (eff space zone) DPT_UcountValue8_Z 202.002
103 SubZone_z (eff space zone) DPT_UcountValue8_Z 202.002
104 Apartment_u (scheduler zone) DPT_UcountValue8_Z 202.002
105 Room_v (scheduler zone) DPT_UcountValue8_Z 202.002
106 SubZone_w (scheduler zone) DPT_UcountValue8_Z 202.002
107 Apartment_m (management zone) DPT_UcountValue8_Z 202.002
108 Room_n (management zone) DPT_UcountValue8_Z 202.002
109 SubZone_o (management zone) DPT_UcountValue8_Z 202.002
110 OutsideSensorZone_f DPT_UcountValue8_Z 202.002
111 OutsideSensorZone_g DPT_UcountValue8_Z 202.002

122 BUSActuatorCP_ON/OFF DPT_Switch 1.001
123 BUSActuatorFA_ON/OFF DPT_Switch 1.001
124 BUSActuatorFS_ON/OFF DPT_Switch 1.001
126 BUSActuatorHSB_ON/OFF DPT_Switch 1.001
133 FanDwellTimeDeadZone DPT_TimePeriodMin 7.006
134 FanInDeadZone DPT_FanMode 20.111
135 FanRunTimeDeadZone DPT_TimePeriodMin 7.006
136 FanSpeed#1OFF DPT_Percent_U8 5.004
137 FanSpeed#1ON DPT_Percent_U8 5.004
138 FanSpeed#2OFF DPT_Percent_U8 5.004
139 FanSpeed#2ON DPT_Percent_U8 5.004
140 FanSpeed#3OFF DPT_Percent_U8 5.004
141 FanSpeed#3ON DPT_Percent_U8 5.004
142 FanSpeed#4OFF DPT_Percent_U8 5.004
143 FanSpeed#4ON DPT_Percent_U8 5.004
144 FanSpeed#5OFF DPT_Percent_U8 5.004
145 FanSpeed#5ON DPT_Percent_U8 5.004
146 FanSpeedDeadZone DPT_Percent_U8 5.004
128 FreshAirMinValue DPT_Percent_U8 5.004
130 SplitHeatDefValue DPT_Percent_U8 5.004
131 TempFrostAlarm DPT_TempHVACAbs_Z 205.100

150 ContrModeAct DPT_HVACContrMode 20.105
151 HeatCoolMode DPT_Heat/Cool 1.100
152 HVACModeAct DPT_HVACMode 20.102
153 TempRoomSetpAct DPT_TempHVACAbs_Z 205.100
154 ValueEnergyDem DPT_Percent_V8 6.001

155-169 leave open, for future standardized datapoints (see Volume 10 Part 1)

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 9 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|73|EnergyDemAH|DPTEnergyDemWater|211.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx (effspace zone)|DPTUcountValue8Z|202.002|
|102|_<br>Roomy (effspace zone)|__<br>DPTUcountValue8Z|202.002|
|103|_<br>SubZonez (eff space zone)|__<br>DPTUcountValue8Z|202.002|
|104|_<br>Apartmentu (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|105|_<br>Roomv (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|106|_<br>SubZonew (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|107|_<br>Apartmentm (management zone)|__<br>DPTUcountValue8Z|202.002|
|108|_<br>Roomn (management zone)|__<br>DPTUcountValue8Z|202.002|
|109|_<br>SubZoneo (management zone)|__<br>DPTUcountValue8Z|202.002|
|110|_<br>OutsideSensorZonef|__<br>DPTUcountValue8Z|202.002|
|111|_<br>OutsideSensorZoneg|__<br>DPTUcountValue8Z|202.002|
||_|__||
|122|BUSActuatorCPON/OFF|DPTSwitch|1.001|
|123|_<br>BUSActuatorFAON/OFF|_<br>DPTSwitch|1.001|
|124|_<br>BUSActuatorFSON/OFF|_<br>DPTSwitch|1.001|
|126|_<br>BUSActuatorHSBON/OFF|_<br>DPTSwitch|1.001|
|133|_<br>FanDwellTimeDeadZone|_<br>DPTTimePeriodMin|7.006|
|134|FanInDeadZone|_<br>DPTFanMode|20.111|
|135|FanRunTimeDeadZone|_<br>DPTTimePeriodMin|7.006|
|136|FanSpeed#1OFF|_<br>DPTPercentU8|5.004|
|137|FanSpeed#1ON|__<br>DPTPercentU8|5.004|
|138|FanSpeed#2OFF|__<br>DPTPercentU8|5.004|
|139|FanSpeed#2ON|__<br>DPTPercentU8|5.004|
|140|FanSpeed#3OFF|__<br>DPTPercentU8|5.004|
|141|FanSpeed#3ON|__<br>DPTPercentU8|5.004|
|142|FanSpeed#4OFF|__<br>DPTPercentU8|5.004|
|143|FanSpeed#4ON|__<br>DPTPercentU8|5.004|
|144|FanSpeed#5OFF|__<br>DPTPercentU8|5.004|
|145|FanSpeed#5ON|__<br>DPTPercentU8|5.004|
|146|FanSpeedDeadZone|__<br>DPTPercentU8|5.004|
|128|FreshAirMinValue|__<br>DPTPercentU8|5.004|
|130|SplitHeatDefValue|__<br>DPTPercentU8|5.004|
|131|TempFrostAlarm|__<br>DPTTempHVACAbsZ|205.100|
|||__||
|150|ContrModeAct|DPTHVACContrMode|20.105|
|151|HeatCoolMode|_<br>DPTHeat/Cool|1.100|
|152|HVACModeAct|_<br>DPTHVACMode|20.102|
|153|TempRoomSetpAct|_<br>DPTTempHVACAbsZ|205.100|
|154|ValueEnergyDem|__<br>DPTPercentV8|6.001|
|||__||
|155-169|leave open, for future standardized datapoints (see Volume 10 Part 1)|leave open, for future standardized datapoints (see Volume 10 Part 1)||


-----

##### 2.1.5 Radiator and Chilled Ceiling Room Control
**Object Name:** **RCCRC**

**Object Type:** **257**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
71 EnergyDemRD DPT_EnergyDemWater 211.100
72 EnergyDemCC DPT_EnergyDemWater 211.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x (eff space zone) DPT_UcountValue8_Z 202.002
102 Room_y (eff space zone) DPT_UcountValue8_Z 202.002
103 SubZone_z (eff space zone) DPT_UcountValue8_Z 202.002
104 Apartment_u (scheduler zone) DPT_UcountValue8_Z 202.002
105 Room_v (scheduler zone) DPT_UcountValue8_Z 202.002
106 SubZone_w (scheduler zone) DPT_UcountValue8_Z 202.002
107 Apartment_m (management zone) DPT_UcountValue8_Z 202.002
108 Room_n (management zone) DPT_UcountValue8_Z 202.002
109 SubZone_o (management zone) DPT_UcountValue8_Z 202.002
110 OutsideSensorZone_f DPT_UcountValue8_Z 202.002
112 DistrSegmC_c DPT_UcountValue8_Z 202.002
114 DistrSegmH_a DPT_UcountValue8_Z 202.002

121 BUSActuatorCSA_ON/OFF DPT_Switch 1.001
122 BUSActuatorCSB_ON/OFF DPT_Switch 1.001
125 BUSActuatorHSA_ON/OFF DPT_Switch 1.001
126 BUSActuatorHSB_ON/OFF DPT_Switch 1.001
127 ControlSequence DPT_ChangeoverMode 20.107
129 SplitCoolDefValue DPT_Percent_U8 5.004
130 SplitHeatDefValue DPT_Percent_U8 5.004
131 TempFrostAlarm DPT_TempHVACAbs_Z 205.100

150 ContrModeAct DPT_HVACContrMode 20.105
151 HeatCoolMode DPT_Heat/Cool 1.100
152 HVACModeAct DPT_HVACMode 20.102
153 TempRoomSetpAct DPT_TempHVACAbs_Z 205.100
154 ValueEnergyDem DPT_Percent_V8 6.001

155-169 leave open, for future standardized datapoints (see Volume 10 Part 1)

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 10 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|71|EnergyDemRD|DPTEnergyDemWater|211.100|
|72|EnergyDemCC|_<br>DPTEnergyDemWater|211.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx (effspace zone)|DPTUcountValue8Z|202.002|
|102|_<br>Roomy (eff space zone)|__<br>DPTUcountValue8Z|202.002|
|103|_<br>SubZonez (effspace zone)|__<br>DPTUcountValue8Z|202.002|
|104|_<br>Apartmentu (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|105|_<br>Roomv (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|106|_<br>SubZonew (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|107|_<br>Apartmentm (management zone)|__<br>DPTUcountValue8Z|202.002|
|108|_<br>Roomn (management zone)|__<br>DPTUcountValue8Z|202.002|
|109|_<br>SubZoneo (management zone)|__<br>DPTUcountValue8Z|202.002|
|110|_<br>OutsideSensorZonef|__<br>DPTUcountValue8Z|202.002|
|112|_<br>DistrSegmCc|__<br>DPTUcountValue8Z|202.002|
|114|_<br>DistrSegmHa|__<br>DPTUcountValue8Z|202.002|
||_|__||
|121|BUSActuatorCSAON/OFF|DPTSwitch|1.001|
|122|_<br>BUSActuatorCSBON/OFF|_<br>DPTSwitch|1.001|
|125|_<br>BUSActuatorHSAON/OFF|_<br>DPTSwitch|1.001|
|126|_<br>BUSActuatorHSBON/OFF|_<br>DPTSwitch|1.001|
|127|_<br>ControlSequence|_<br>DPTChangeoverMode|20.107|
|129|SplitCoolDefValue|_<br>DPTPercentU8|5.004|
|130|SplitHeatDefValue|__<br>DPTPercentU8|5.004|
|131|TempFrostAlarm|__<br>DPTTempHVACAbsZ|205.100|
|||__||
|150|ContrModeAct|DPTHVACContrMode|20.105|
|151|HeatCoolMode|_<br>DPTHeat/Cool|1.100|
|152|HVACModeAct|_<br>DPTHVACMode|20.102|
|153|TempRoomSetpAct|_<br>DPTTempHVACAbsZ|205.100|
|154|ValueEnergyDem|__<br>DPTPercentV8|6.001|
|||__||
|155-169|leave open, for future standardized datapoints (see Volume 10 Part 1)|leave open, for future standardized datapoints (see Volume 10 Part 1)||
|||||


-----

##### 2.1.6 Radiator Room Control TU
**Object Name:** **RRCTU**

**Object Type:** **256**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
71 EnergyDemRD DPT_EnergyDemWater 211.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x (eff space zone) DPT_UcountValue8_Z 202.002
102 Room_y (eff space zone) DPT_UcountValue8_Z 202.002
103 SubZone_z (eff space zone) DPT_UcountValue8_Z 202.002
104 Apartment_u (scheduler zone) DPT_UcountValue8_Z 202.002
105 Room_v (scheduler zone) DPT_UcountValue8_Z 202.002
106 SubZone_w (scheduler zone) DPT_UcountValue8_Z 202.002
107 Apartment_m (management zone) DPT_UcountValue8_Z 202.002
108 Room_n (management zone) DPT_UcountValue8_Z 202.002
109 SubZone_o (management zone) DPT_UcountValue8_Z 202.002
110 OutsideSensorZone_f DPT_UcountValue8_Z 202.002
114 DistrSegmH_a DPT_UcountValue8_Z 202.002

125 BUSActuatorHSA_ON/OFF DPT_Switch 1.001
131 TempFrostAlarm DPT_TempHVACAbs_Z 205.100

150 ContrModeAct DPT_HVACContrMode 20.105
152 HVACModeAct DPT_HVACMode 20.102
153 TempRoomSetpAct DPT_TempHVACAbs_Z 205.100
154 ValueEnergyDem DPT_Percent_V8 6.001

155-169 leave open, for future standardized datapoints (see Volume 10 Part 1)

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 11 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|71|EnergyDemRD|DPTEnergyDemWater|211.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx (effspace zone)|DPTUcountValue8Z|202.002|
|102|_<br>Roomy (effspace zone)|__<br>DPTUcountValue8Z|202.002|
|103|_<br>SubZonez (eff space zone)|__<br>DPTUcountValue8Z|202.002|
|104|_<br>Apartmentu (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|105|_<br>Roomv (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|106|_<br>SubZonew (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|107|_<br>Apartmentm (management zone)|__<br>DPTUcountValue8Z|202.002|
|108|_<br>Roomn (management zone)|__<br>DPTUcountValue8Z|202.002|
|109|_<br>SubZoneo (management zone)|__<br>DPTUcountValue8Z|202.002|
|110|_<br>OutsideSensorZonef|__<br>DPTUcountValue8Z|202.002|
|114|_<br>DistrSegmHa|__<br>DPTUcountValue8Z|202.002|
||_|__||
|125|BUSActuatorHSAON/OFF|DPTSwitch|1.001|
|131|_<br>TempFrostAlarm|_<br>DPTTempHVACAbsZ|205.100|
|||__||
|150|ContrModeAct|DPTHVACContrMode|20.105|
|152|HVACModeAct|_<br>DPTHVACMode|20.102|
|153|TempRoomSetpAct|_<br>DPTTempHVACAbsZ|205.100|
|154|ValueEnergyDem|__<br>DPTPercentV8|6.001|
|||__||
|155-169|leave open, for future standardized datapoints (see Volume 10 Part 1)|leave open, for future standardized datapoints (see Volume 10 Part 1)||
|||||


-----

##### 2.1.7 VAV Control Discharge Air
**Object Name:** **VAVCDA**

**Object Type:** **261**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
56 AirFlowMSExtr DPT_HVACAirFlow_Z 203.104
71 EnergyDemRD DPT_EnergyDemWater 211.100
72 EnergyDemCC DPT_EnergyDemWater 211.100
73 EnergyDemAH DPT_EnergyDemWater 211.100
74 EnergyDemAC DPT_EnergyDemWater 211.100
75 EnergyDemAir DPT_EnergyDemAir 223.100

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x (eff space zone) DPT_UcountValue8_Z 202.002
102 Room_y (eff space zone) DPT_UcountValue8_Z 202.002
103 SubZone_z (eff space zone) DPT_UcountValue8_Z 202.002
104 Apartment_u (scheduler zone) DPT_UcountValue8_Z 202.002
105 Room_v (scheduler zone) DPT_UcountValue8_Z 202.002
106 SubZone_w (scheduler zone) DPT_UcountValue8_Z 202.002
107 Apartment_m (management zone) DPT_UcountValue8_Z 202.002
108 Room_n (management zone) DPT_UcountValue8_Z 202.002
109 SubZone_o (management zone) DPT_UcountValue8_Z 202.002
112 DistrSegmC_c DPT_UcountValue8_Z 202.002
113 DistrSegmC_d DPT_UcountValue8_Z 202.002
114 DistrSegmH_a DPT_UcountValue8_Z 202.002
115 DistrSegmH_b DPT_UcountValue8_Z 202.002
116 DistrSegmV_e DPT_UcountValue8_Z 202.002

121 BUSActuatorCSA_ON/OFF DPT_Switch 1.001
122 BUSActuatorCSB_ON/OFF DPT_Switch 1.001
123 BUSActuatorDA_ON/OFF DPT_Switch 1.001
125 BUSActuatorHSA_ON/OFF DPT_Switch 1.001
126 BUSActuatorHSB_ON/OFF DPT_Switch 1.001
127 ControlSequence DPT_ChangeoverMode 20.107
136 MaxAirFlowCool DPT_HVACAirFlow_Z 203.104
137 MaxAirFlowHeat DPT_HVACAirFlow_Z 203.104
138 MinAirFlowCool DPT_HVACAirFlow_Z 203.104
139 MinAirFlowEconomy DPT_HVACAirFlow_Z 203.104
140 MinAirFlowHeat DPT_HVACAirFlow_Z 203.104
141 MinAirFlowStandby DPT_HVACAirFlow_Z 203.104
142 NominalDischargeAirFlow DPT_HVACAirFlow_Z 203.104
129 SplitCoolDefValue DPT_Percent_U8 5.004
130 SplitHeatDefValue DPT_Percent_U8 5.004
132 TempDischargeAirMin DPT_TempHVACAbs_Z 205.100
131 TempFrostAlarm DPT_TempHVACAbs_Z 205.100

148 AirFlowDischarge DPT_HVACAirFlow_Z 203.104
150 ContrModeAct DPT_HVACContrMode 20.105
151 HeatCoolMode DPT_Heat/Cool 1.100
152 HVACModeAct DPT_HVACMode 20.102

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 12 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|56|AirFlowMSExtr|DPTHVACAirFlowZ|203.104|
|71|EnergyDemRD|__<br>DPTEnergyDemWater|211.100|
|72|EnergyDemCC|_<br>DPTEnergyDemWater|211.100|
|73|EnergyDemAH|_<br>DPTEnergyDemWater|211.100|
|74|EnergyDemAC|_<br>DPTEnergyDemWater|211.100|
|75|EnergyDemAir|_<br>DPTEnergyDemAir|223.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx (effspace zone)|DPTUcountValue8Z|202.002|
|102|_<br>Roomy (effspace zone)|__<br>DPTUcountValue8Z|202.002|
|103|_<br>SubZonez (effspace zone)|__<br>DPTUcountValue8Z|202.002|
|104|_<br>Apartmentu (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|105|_<br>Roomv (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|106|_<br>SubZonew (scheduler zone)|__<br>DPTUcountValue8Z|202.002|
|107|_<br>Apartmentm (management zone)|__<br>DPTUcountValue8Z|202.002|
|108|_<br>Roomn (management zone)|__<br>DPTUcountValue8Z|202.002|
|109|_<br>SubZoneo (management zone)|__<br>DPTUcountValue8Z|202.002|
|112|_<br>DistrSegmCc|__<br>DPTUcountValue8Z|202.002|
|113|_<br>DistrSegmCd|__<br>DPTUcountValue8Z|202.002|
|114|_<br>DistrSegmHa|__<br>DPTUcountValue8Z|202.002|
|115|_<br>DistrSegmHb|__<br>DPTUcountValue8Z|202.002|
|116|_<br>DistrSegmVe|__<br>DPTUcountValue8Z|202.002|
||_|__||
|121|BUSActuatorCSAON/OFF|DPTSwitch|1.001|
|122|_<br>BUSActuatorCSBON/OFF|_<br>DPTSwitch|1.001|
|123|_<br>BUSActuatorDAON/OFF|_<br>DPTSwitch|1.001|
|125|_<br>BUSActuatorHSAON/OFF|_<br>DPTSwitch|1.001|
|126|_<br>BUSActuatorHSBON/OFF|_<br>DPTSwitch|1.001|
|127|_<br>ControlSequence|_<br>DPTChangeoverMode|20.107|
|136|MaxAirFlowCool|_<br>DPTHVACAirFlowZ|203.104|
|137|MaxAirFlowHeat|__<br>DPTHVACAirFlowZ|203.104|
|138|MinAirFlowCool|__<br>DPTHVACAirFlowZ|203.104|
|139|MinAirFlowEconomy|__<br>DPTHVACAirFlowZ|203.104|
|140|MinAirFlowHeat|__<br>DPTHVACAirFlowZ|203.104|
|141|MinAirFlowStandby|__<br>DPTHVACAirFlowZ|203.104|
|142|NominalDischargeAirFlow|__<br>DPTHVACAirFlowZ|203.104|
|129|SplitCoolDefValue|__<br>DPTPercentU8|5.004|
|130|SplitHeatDefValue|__<br>DPTPercentU8|5.004|
|132|TempDischargeAirMin|__<br>DPTTempHVACAbsZ|205.100|
|131|TempFrostAlarm|__<br>DPTTempHVACAbsZ|205.100|
|||__||
|148|AirFlowDischarge|DPTHVACAirFlowZ|203.104|
|150|ContrModeAct|__<br>DPTHVACContrMode|20.105|
|151|HeatCoolMode|_<br>DPTHeat/Cool|1.100|
|152|HVACModeAct|_<br>DPTHVACMode|20.102|


-----

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

153 TempRoomSetpAct DPT_TempHVACAbs_Z 205.100
154 ValueEnergyDem DPT_Percent_V8 6.001

155-169 leave open, for future standardized datapoints (see Volume 10 Part 1)

##### 2.1.8 VAV Control Extract Air
**Object Name:** **VAVCEA**

**Object Type:** **262**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)

Parameters and Diagnostic Data (individual addressing only)
101 Apartment_x (eff space zone) DPT_UcountValue8_Z 202.002
102 Room_y (eff space zone) DPT_UcountValue8_Z 202.002
103 SubZone_z (eff space zone) DPT_UcountValue8_Z 202.002

145 AirFlowDelta DPT_Percent_U8 5.004
124 BUSActuatorEA_ON/OFF DPT_Switch 1.001
143 NominalExtractAirFlow DPT_HVACAirFlow_Z 203.104
144 RatioExtractDischarge DPT_DecimalFactor 5.005

149 AirFlowExtract DPT_HVACAirFlow_Z 203.104

155-169 leave open, for future standardized datapoints (see Volume 10 Part 1)

#### 2.2 TU Energy Demand Transformer

##### 2.2.1 Empty
Due to compatibility with other documents

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 13 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|153|TempRoomSetpAct|DPTTempHVACAbsZ|205.100|
|154|ValueEnergyDem|__<br>DPTPercentV8|6.001|
|||__||
|155-169|leave open, for future standardized datapoints (see Volume 10 Part 1)|leave open, for future standardized datapoints (see Volume 10 Part 1)||
|||||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|||||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|Apartmentx (effspace zone)|DPTUcountValue8Z|202.002|
|102|_<br>Roomy (effspace zone)|__<br>DPTUcountValue8Z|202.002|
|103|_<br>SubZonez (effspace zone)|__<br>DPTUcountValue8Z|202.002|
||_|__||
|145|AirFlowDelta|DPTPercentU8|5.004|
|124|BUSActuatorEAON/OFF|__<br>DPTSwitch|1.001|
|143|_<br>NominalExtractAirFlow|_<br>DPTHVACAirFlowZ|203.104|
|144|RatioExtractDischarge|__<br>DPTDecimalFactor|5.005|
|||_||
|149|AirFlowExtract|DPTHVACAirFlowZ|203.104|
|||__||
|155-169|leave open, for future standardized datapoints (see Volume 10 Part 1)|leave open, for future standardized datapoints (see Volume 10 Part 1)||
|||||


-----

##### 2.2.2 Radiator Heating Energy Demand Transformer TU
**Object Name:** **RHDTTU**

**Object Type:** **153**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemRHDTTU DPT_TempFlowWaterDemAbs 210.100

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmH DPT_UcountValue8_Z 202.002
102 OutsideSensorZone DPT_UcountValue8_Z 202.002

111 ValueEnergyDemAct DPT_Percent_U8 5.004

##### 2.2.3 Chilled Ceiling Energy Demand Transformer TU
**Object Name:** **CCDTTU**

**Object Type:** **216**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemCCDTTU DPT_TempFlowWaterDemAbs 210.100

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmC DPT_UcountValue8_Z 202.002
102 OutsideSensorZone DPT_UcountValue8_Z 202.002

111 ValueEnergyDemAct DPT_Percent_U8 5.004

##### 2.2.4 Air Heater Energy Demand Transformer TU
**Object Name:** **AHDTTU**

**Object Type:** **154**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemAHDTTU DPT_TempFlowWaterDemAbs 210.100

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmH DPT_UcountValue8_Z 202.002
102 OutsideSensorZone DPT_UcountValue8_Z 202.002

111 ValueEnergyDemAct DPT_Percent_U8 5.004

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 14 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemRHDTTU|DPTTempFlowWaterDemAbs|210.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmH|DPTUcountValue8Z|202.002|
|102|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|ValueEnergyDemAct|DPTPercentU8|5.004|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemCCDTTU|DPTTempFlowWaterDemAbs|210.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmC|DPTUcountValue8Z|202.002|
|102|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|ValueEnergyDemAct|DPTPercentU8|5.004|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemAHDTTU|DPTTempFlowWaterDemAbs|210.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmH|DPTUcountValue8Z|202.002|
|102|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|ValueEnergyDemAct|DPTPercentU8|5.004|
|||__||


-----

##### 2.2.5 Air Cooler Energy Demand Transformer TU
**Object Name:** **ACDTTU**

**Object Type:** **217**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempFlowWaterDemACDTTU DPT_TempFlowWaterDemAbs 210.100

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmC DPT_UcountValue8_Z 202.002
102 OutsideSensorZone DPT_UcountValue8_Z 202.002

111 ValueEnergyDemAct DPT_Percent_U8 5.004

##### 2.2.6 Ventilation Demand Transformer TU
**Object Name:** **VDTTU**

**Object Type:** **248**

**Property** **Datapoint Name** **Datapoint Type Name** **Datapoint**
**Identifier** **Type Code**

LTE-HEE process data (runtime interworking, zone addressing and individual addressing)
51 TempSupplyAirSetpSet DPT_TempSupplyAirSetpSet 224.100
52 ValueFreshAirSetp DPT_RelValue_Z 202.001

Parameters and Diagnostic Data (individual addressing only)
101 DistrSegmV DPT_UcountValue8_Z 202.002
102 OutsideSensorZone DPT_UcountValue8_Z 202.002

111 ValueEnergyDemAirActMin DPT_Percent_V8 6.001
112 ValueEnergyDemAirActMax DPT_Percent_V8 6.001
113 ValueFreshAirDemAct DPT_RelValue_Z 202.001
114 TempSupplyAirSetpMin DPT_TempHVACAbs_Z 205.100
115 TempSupplyAirSetpMax DPT_TempHVACAbs_Z 205.100

© C i h 1999 2013 KNX A i i A li i D i i 02 02 02 15 f 15

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempFlowWaterDemACDTTU|DPTTempFlowWaterDemAbs|210.100|
|||_||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmC|DPTUcountValue8Z|202.002|
|102|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|ValueEnergyDemAct|DPTPercentU8|5.004|
|||__||

|Property<br>Identifier|Datapoint Name|Datapoint Type Name|Datapoint<br>Type Code|
|---|---|---|---|
|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|LTE-HEE process data (runtime interworking, zone addressing and individual addressing)|
|51|TempSupplyAirSetpSet|DPTTempSupplyAirSetpSet|224.100|
|52|ValueFreshAirSetp|_<br>DPTRelValueZ|202.001|
|||__||
|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|Parameters and Diagnostic Data  (individual addressing only)|
|101|DistrSegmV|DPTUcountValue8Z|202.002|
|102|OutsideSensorZone|__<br>DPTUcountValue8Z|202.002|
|||__||
|111|ValueEnergyDemAirActMin|DPTPercentV8|6.001|
|112|ValueEnergyDemAirActMax|__<br>DPTPercentV8|6.001|
|113|ValueFreshAirDemAct|__<br>DPTRelValueZ|202.001|
|114|TempSupplyAirSetpMin|__<br>DPTTempHVACAbsZ|205.100|
|<br>115|<br>TempSupplyAirSetpMax|__ <br>DPTTempHVACAbsZ|<br>205.100|


-----

