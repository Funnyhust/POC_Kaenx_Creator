# Application Description

## HVAC General Functional Blocks

 HVAC Interface Object Type Identifier

Summary

This document defines the Identifiers for HVAC Interface Object Types.

Version 01.01.02 is a KNX Approved Standard.


-----

#### Document updates

Version Date Modifications

1.1 2009.06.16 Update in view of publication in the KNX Specifications v2.0.
01.01.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.
01.01.02 2022.02.28 Preparation for integration in the KNX Specifications v3.0.

Filename: 07_10_10 HVAC IOT Identifier v01.01.02 AS.docx
Version: 01.01.02
Status: Approved Standard
Savedate: 2022.02.28
Number of pages: 7

© C i h 1999 2022 A i i A li i i i 01 01 02 2 f

|Version|Date|Modifications|
|---|---|---|
|1.1|2009.06.16|Update in view of publication inthe KNXSpecifications v2.0.|
|01.01.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.01.02|2022.02.28|Preparation for integration in the KNX Specifications v3.0.|


-----

### 1 HVAC Interface Object Type Identifier

##### IO Type @ Functional Block Remark

Range 100-127 HVAC common management

100 RSMHD Room Setpoint Manager HVAC-Mode
Driven

101 RSMTD Room Setpoint Manager Temperature
Driven

102 SMAQ Setpoint Manager Air Quality

103 SMRH Setpoint Manager Relative Humidity

104 PMC Program to HVAC Mode conversion

105-107 reserved

108 HVACEMS HVAC Emergency Mode Source

109 BOS Building / Occ-Mode Source

110 HVACS HVAC Mode Scheduler

111 DHWS DHW Mode Scheduler

112 DHWCPS DHW Circulation Pump Scheduler

113 ARTS Absolute Room Temperature Scheduler

114 reserved

115 HVACOPT HVAC Optimiser

116 POOC Position to ON/OFF Converter

117-119 reserved

120 FTC Flow Temperature Controller

121 SSLSTA Setpoint Shift by Load Shedding & Tariff

122-127 reserved

Range **128-143 HVAC-HWH Heat Production**

128 BUC Burner Controller

129 BOC Boiler Controller

130-135 reserved for other producers

136 HPM Heat Producer Manager

137 HPM-BST Heat Producer Manager for Buffer Storage
Tank

138 HPM-BST/BOC Heat Producer Manager for BST in boiler
sub-cascade

139-143 reserved

HVAC-HWH Heat Distribution and Heat

Range **144-159** Flow Demand Transformers and General

Purpose Heat Flow Demand

144 HFDM Heat Flow Demand Manager

145 HDAUX Auxiliary Heat Demand (flow temp
demand)

© C i h 1999 2022 A i i A li i i i 01 01 02 3 f

|IO Type @|Functional Block|Remark|
|---|---|---|
|Range**100-127**|HVAC common management||
|100|RSMHD|Room Setpoint Manager HVAC-Mode<br>Driven|
|101|RSMTD|Room Setpoint Manager Temperature<br>Driven|
|102|SMAQ|Setpoint Manager AirQuality|
|103|SMRH|Setpoint Manager Relative Humidity|
|104|PMC|Program to HVAC Mode conversion|
|105-107|reserved||
|108|HVACEMS|HVAC Emergency Mode Source|
|109|BOS|Building / Occ-Mode Source|
|110|HVACS|HVAC Mode Scheduler|
|111|DHWS|DHW Mode Scheduler|
|112|DHWCPS|DHW Circulation Pump Scheduler|
|113|ARTS|Absolute Room Temperature Scheduler|
|114|reserved||
|115|HVACOPT|HVAC Optimiser|
|116|POOC|Position to ON/OFF Converter|
|117-119|reserved||
|120|FTC|Flow Temperature Controller|
|121|SSLSTA|Setpoint Shift by Load Shedding & Tariff|
|122-127|reserved||
|Range**128-143**|HVAC-HWH Heat Production||
|128|BUC|Burner Controller|
|129|BOC|Boiler Controller|
|130-135|reserved|for otherproducers|
|136|HPM|Heat Producer Manager|
|137|HPM-BST|Heat Producer Manager for Buffer Storage<br>Tank|
|138|HPM-BST/BOC|Heat Producer Manager for BST in boiler<br>sub-cascade|
|139-143|reserved||
|Range**144-159**|HVAC-HWH Heat Distribution and Heat<br>Flow Demand Transformers and General<br>Purpose Heat Flow Demand||
|144|HFDM|Heat Flow Demand Manager|
|145|HDAUX|Auxiliary Heat Demand (flow temp<br>demand)|


-----

|IO Type @|Functional Block|Remark|
|---|---|---|
|146|HDAUXPER|Auxiliary Heat Demand(percent demand)|
|147-150|reserved|reserved for future Heat Flow Demand<br>Transformers and Consumers|
|151|HDTRT|Heat Flow Demand Transformer Room<br>Temperature|
|152|HDTAHU|Heat Flow Demand Transformer for Air<br>Handling Unit|
|153|RHDTTU|Radiator Heating Energy Demand<br>Transformer TU|
|154|AHDTTU|Air Heater Energy Demand Transformer<br>TU|
|155-159|reserved||
|Range**160-175**|HVAC-HWH Heat Consumers Room<br>Heating||
|160|HZC|Heat Zone Controller|
|161-166|reserved||
|167|HIRC|Heating Individual Room Controller|
|168|reserved||
|169|HDTACT|Heat Demand Transformer Actuator|
|170|HRDM|Heating Room Demand Manager|
|171-175|reserved||
|Range**176-191**|HVAC-HWH Domestic Hot Water||
|176|DHWSM|Domestic Hot Water Setpoint Manager|
|177|DHWC|Domestic Hot Water Controller|
|178|reserved||
|179|DHWCPC|Domestic Hot Water Circulation Pump<br>Control|
|180|DHWTS|DHW Temperature Sensor|
|181|UDHWSET|User DHW Settings|
|182-185|reserved||
|186|SDHWC|Solar Domestic Hot Water Controller|
|187|COLTS|Solar Collector Temperature Sensor|
|188-191|reserved||
|Range**192-207**|HVAC-VAC Cooling Production||
|192|CC|Chiller Controller|
|193-198|reserved|for otherproducers|
|199|CPM|Cold Water Production Manager|
|200|CRC|Re-Cooling Controller|
|201-207|reserved||


© C i h 1999 2022 A i i A li i i i 01 01 02 4 f


-----

|IO Type @|Functional Block|Remark|
|---|---|---|
|Range**208-223**|HVAC-VAC Cooling Distribution and<br>Cooling Demand Transformers||
|208|CFDM|Cooling Flow Demand Manager|
|209|CDAUX|Auxiliary Cooling Demand (flow temp<br>demand)|
|210|CDAUXPER|Auxiliary Cooling Demand (percent<br>demand)|
|211-214|reserved CFDG1-5|Cooling Flow Demand General Type 1-5<br>for future Cool Flow Demand<br>Transformers|
|215|CDTAHU|Cooling Demand Transformer for Air<br>Handling Unit|
|216|CCDTTU|Chilled Ceiling Energy Demand<br>Transformer Terminal Unit|
|217|ACDTTU|Air Cooler Energy Demand Transformer<br>Terminal Unit|
|218-223|reserved||
|Range**224-239**|HVAC-VAC Cooling Consumers||
|224|CZC|Cooling Zone Controller|
|225-239|reserved(not definedyet)||
|Range**240-255**|HVAC-VAC Ventilation||
|240|AHUC|Air Handler Unit Controller|
|241|SATC|Supply Air Temperature Controller|
|242-247|reserved|for other Ventilation Units|
|248|VDTTU|Ventilation Demand Transformer Terminal<br>Unit|
|249-255|reserved||
|Range**256-287**|HVAC-TU||
|256|RRCTU|Radiator Room Control TU|
|257|RCCRC|Radiator and Chilled Ceiling Room<br>Control|
|258|FCC|Fan Coil Control|
|259|WHPC|Water Heat Pump Control|
|260|SPUC|Split Unit Control|
|261|VAVCSA|VAV Control Supply Air|
|262|VAVCEA|VAV Control Extract Air|
|262-266|reserved for other controls||
|267|RMOHD ?(t.b.d. by DEH)|Room Optimiser HVAC-Mode Driven|
|268|RMOTD ?(t.b.d. by DEH)|Room Optimiser Temperature Driven|
|269|APO ?(t.b.d. by DEH)|Apartment Optimiser|
|270|RRTC|Room Reference Temperature Calculation|


© C i h 1999 2022 A i i A li i i i 01 01 02 f


-----

|IO Type @|Functional Block|Remark|
|---|---|---|
|271-287|reserved||
|Range**288-319**|HVAC-DEH|to be defined by DEH|
|288|||
|....|||
|Range**320-351**|HVAC Sensors||
|320|OTS|Outside Temperature Sensor|
|321|RTS|Room Temperature Sensor|
|322|SATS|Supply Air Temperature Sensor|
|323|RNATS|Return Air Temperature Sensor|
|324|FWTS|Flow Water Temperature Sensor|
|325|RNWTS|Return Water Temperature Sensor|
|326|CFWTS|Condensor Flow Water Temperature<br>Sensor|
|327|CRNWTS|Condensor Return Water Temperature<br>Sensor|
|328|DATS|Discharge Air Temperature Sensor|
|329|FTS|Floor Temperature Sensor|
|330|OAQS|Outside AirQuality Sensor|
|331|RAQS|Room AirQuality Sensor|
|332|SAQS|Supply AirQuality Sensor|
|333|RNAQS|Return AirQuality Sensor|
|334-335|reserved for other AQ sensors||
|336|ORHS|Outside Air Humidity Sensor Relative|
|337|RRHS|Room Air Humidity Sensor Relative|
|338|SARHS|Supply Air Humidity Sensor Relative|
|339|RNARHS|Return Air Humidity Sensor Relative|
|340|reserved for other air humidity sensors||
|341|ACOS|Air Change Over Status Sensor|
|342|WCOS|Water Change Over Status Sensor|
|343|WOS|Window Switch|
|344|DPS|Dew Point Status Sensor|
|345|PRD|Presence Detector|
|346|reserved||
|347|WSS|Wind Speed Sensor|
|348|SIS|Sun Intensity Sensor|
|349-351|reserved||
|Range**352-383**|HVAC Actuators||
|352|HVA|HVAC Valve Actuator|
|353|HOOA|HVAC ON/OFF Actuator|


© C i h 1999 2022 A i i A li i i i 01 01 02 6 f


-----

397-399 reserved

© C i h 1999 2022 A i i A li i i i 01 01 02 f

|IO Type @|Functional Block|Remark|
|---|---|---|
|354-356|reserved||
|357|CIVA|Compressor Inverting Valve Actuator|
|358-361|reserved for other valves||
|362|ADA|Air Damper Actuator|
|363|reserved||
|364|reserved||
|365-368|reserved for other dampers||
|369|EHEA|Electrical Heating Element Actuator|
|370-371|reserved||
|372|FSA|Fan Speed Actuator|
|373|CPA|Compressor Actuator|
|374-383|reserved||
|Range**384-399**|HVAC MMI||
|384|UHRS|User HVAC Room Settings|
|385|RTSA|Room Temperature Setpoint Absolute<br>Setting|
|386|reserved||
|387|UAQSS|User AirQuality Setpoint Setting|
|388|URHSS|User Air Humidity Setpoint Setting|
|389|reserved||
|390|UHD|User HVAC Display|
|391|UPS|User Presence Switch|
|392|UCOS|User Changeover Setting|
|393|UFS|User Fan Speed Setting|
|394|reserved||
|395|reserved||
|396|UEARTS|User Enable Alternative Room Temp Setp|
|397-399|reserved||


-----

