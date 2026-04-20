# System Specifications

## Interworking

 Datapoint Types

###### Summary:

 This Chapter specifies the KNX Datapoint Types for Interworking

 This Chapter describes the general usable and Functional Block specific, standard Datapoint Types that are to be used for transmission of data on the bus.

 Version 02.02.01 is a KNX Approved Standard.


-----

#### Document updates

###### For the history of the DPTs that have been added to this paper, please refer to 

|Version|Date|Description|
|---|---|---|
|1.0 AS|2002.01.03|Preparation of the approved standard.|
|||The DPTs of the following documents are integrated.<br>− <br>Chapter 7/1/3 (S12) “Logical Functional Blocks”<br>− <br>Chapter 7/20 (S12) “Lighting”<br>− <br>Chapter 7/50 (S12) “Shutters and Blinds”<br>− <br>Supplement 11 “HVAC Datapoint Types”<br>− <br>Supplement 12 “Channel Codes”<br>− <br>Supplement 14 “DPT_DateTime”<br>− <br>AN004 “Additional HVAC data types”<br>− <br>AN006 “Update of Supplement 14 DPT_DateTime”<br>− <br>AN027 “TFI approved Datapoint Types for general usage”<br>− <br>AN035 “DPT_Version”<br>− <br>AN079 “TFI Accepted DPTs 05.03”<br>Preparation of the Draft Proposal.|
|1.3 AS|2007.03.14|− DPT_Length_mm (7.011) added.<br>− DPT_Rotation_Angle (8.011) added.<br>− DPT_MBus_Address (230.1000) PDT corrected from<br>PDT_GENERIC_09 to PDT_GENERIC_08.|
|1.4 AS|2007.03.20|− AN050 “AN to Supplement 12” integrated.|
|1.4 AS|2007.10.03|− AN051 “New channels” integrated.|
|1.4 AS|2007.10.05|− AN087 “New channels 2005.02” integrated.|
|1.4 AS|2007.10.19|Integrated conclusion of WGI meeting of 2007.09.26 about use of<br>DPT_Power and DPT_Value_Power.|
|1.4 AS|2007.12.14|− AN057 “System B” integrated (DPTErrorClassSystem extension)|
|1.4 AS|2008.03.13|__  <br>− AN096 “WGI accepted DPTs 06.01” started and completed integration. <br>− AN098 “Unicode” started and completed integration.|
|1.4 AS|2008.03.14|− AN066 “cEMIadaptations”: extension of DPTCommMode.|
|1.4 AS|2008.04.28|_<br>− PART_Logical, PART_Invert and PART_Input_Connected added<br>(AN050)|
|1.4 AS|2008.05.19|− AN097 “Eberle Status Byte”: integration started and completed.|
|1.4 AS|2008.06.04|− Coding ofDPT_CommModereplaced by reference to<br>PID_COMM_MODE in 3/6/3.|
|1.4 AS|2008.11.05|− AN105 to AN110: removed TP0 and PL132 from possible values of<br>DPTMedia|
|1.4 AS|2009.02.03|_<br>− Editorial update for inclusion inthe KNXSpecifications v2.0.|
|1.4 AS|2009.04.10|− 7/1/5 “General Purpose I/O”:added DPTs used inthat specification.|
|1.4 AS|2009.06.25|− Editorial update in view of inclusion inthe KNXSpecifications v2.0.|
|1.4.01 AS|2009.11.10|− Correction of range of DPT_ErrorClass_System.|
|1.5.00 AS|2009.11.18|− **AN120 “WGI approved DPTs 07.01”** integrated.|
|1.5.00 AS|2010.04.14|− **AN128 “WGI approved DPTs 09.01”** integrated.|
|1.5.01 AS|2010.11.26|<br>− DPT_Trigger: added indication that both values 0 and 1 shall have the<br>same effect.|
|1.5.02 AS|2011.02.12|− [WGI00052]: Indicated that DPT_HVACModeNext is generally usable,<br>not only on LTE, but also in Standard Mode and not only for HVAC.<br>− Numerous instances of “Z8” with font Arial 10 are replaced by<br>appropriate formatting without specific font.|
|1.5.03 AS|2011.05.06|− **AN131 “DPT Prioritised Mode Control”** integrated.<br>− DPT_RegionCodeAlpha2_ASCII and DPT_Locale_ASCII: ZZ can be<br>used for “no region”.<br>− Usage of DPT_ScalingSpeed more free.|


-----

|Version|Date|Description|
|---|---|---|
|1.6.01 AS|2011.09.14|− [WGI00072] Update with the DPTs of the FB ADA:<br>DPT_FlowRate_m3/h, DPT_StatusAct, DPT_FlowRate_m3/h_Z,<br>DPT_Percent_V16_Z, DPT_DamperMode, DPT_ADAType,<br>DPT_BackupMode and DPT_StartSynchronization.|
|1.07.00 AS|2012.03.13|− DPTs of Chapter 7/20/3 “DALI Proxy Basic” integrated.|
|1.07.00 AS|2012.03.19|− **AN141 “Lighting Sensors – LTE extensions”** integrated.<br>− **AN142 “Lighting actuators – LTE extensions”** integrated.<br>− **AN143 “Shutters and blinds Sensors – LTE extensions”** integrated.<br>− **AN144 “Shutters and blinds actuators – LTE extensions”** integrated.<br>− DPT_BlinkingMode(20.603) of Chapter 7/1/5 integrated.|
|1.07.00 AS|2012.04.26|− **AN130 “Realisation of Submetering application with tariff”**<br>integrated. Coding of validity bits in DPT_Tariff_ActiveEnergy adjusted<br>according WGI agreement.|
|01.08.00|2013.07.17|− **AN130 “Submetering application”** Parameter Types added.|
|01.08.01|2013.10.28|Editorial updates for thepublication of KNX Specifications 2.1.|
|01.08.02|2013.12.10|Final editorial review in view ofpublication of the KNX Specifications v2.1.|
|01.08.03|2014.04.15|Editorial updates.<br>− Added DPT Subtype range for the application domain “Metering”<br>in 1.2.<br>− Moved from Chapter 7/60/1 “Metering M-Bus Data Collector” the<br>specifications of 20.114 “DPT_Metering_DeviceType”, 20.1202<br>“DPT_Gas_Measurement_Condition” and 20.1200<br>“DPT_MBus_Breaker¬Valve_¬State”.<br>− Inherited updated specification of DPT_MeteringValue from Chapter<br>7/60/1 “Metering M-Bus Data Collector” v01.04.07.<br>− Power factor (14.057) has no unit.<br>− DPT_Value_AirFlow (9.009) added.<br>− Added Annex C with overview of added DPTs.<br>− Changed indications of resolution according conclusions of WGI<br>discussion topic [WGI00094].<br>− Case sensitivity of DPT_LanguageCodeAlpha2_ASCII added; double<br>entries of Indonesian, Hebrew and Yiddish removed.|
|01.08.04|2014.08.13|Editiorial update.|
|01.09.01|2014.09.18|• **AN166 “DALIemergency light control”** integrated.|
|01.10.01|2016.05.09|<br>• Update according the WGI discussion [WGI00105] “Encoding of<br>Operating Hours”.|
|01.11.01|2016.05.20|• **AN166 “DALI emergency light control”** missing DPT_Converter_Info<br>integrated.<br>• Introduction of keywords as concluded in the WGI meeting of<br>2016.05.11-12.|
|01.11.01|2016.05.23|• Legacy non-standard DPTs for DALI emergency lighting from AN166<br>integrated.<br>• Introduction of indication of “Applications”.|


-----

definition from U to N.
− DPT_Battery_Info: corrected the format from r4B4U8 to r5B3U8.
02.02.01 2021.05.27 - Publication.

###### Please refer to Annex C for the Chronologic overview of DPTs added and modified in this paper.

#### References

[01] Chapter 3/6/3 “External Message Interface”

[02] Chapter 3/7/1 “Interworking Model”

[03] Chapter 3/7/3 “Standard Identifier Tables”

[04] Volume 7 “Application Descriptions”

[05] Chapter 7/1/5 “General Purpose I/O”

[06] Chapter 7/1/6 “Weather data”

[07] Chapter 7/10/1 “HVAC Sensor Functional Blocks”

|Version|Date|Description|
|---|---|---|
|02.01.01|2017.09.07|- <br>**AN158 “KNX Data Security”** - DPT_Security_Report (21.1002).<br>- <br>**AN169 “Secure PV-Mode Configuration”** - DPT_PB_Function<br>(20.1005)<br>- <br>**AN161 “Coupler Model 2.0”** - DPT_Medium (20.1004)<br>- <br>**AN173 “WGI accepted DPTs 10.13” **<br>− DPT_DayNight (1.024)<br>− DPT_Length_m (8.012)<br>−  DPT_VolumeLiquid_Litre (12.1200)<br>− DPT_Volume_m3 (12.1201)<br>− DPT_DeltaVolumeLiquid_Litre (13.1200)<br>− DPT_DeltaVolume_m3 (13.1201)<br>− DPT_ActiveEnergy_MWh (13.016)<br>− DPT_Volume_Flux_Meter (14.1200)<br>− DPT_Volume_Flux_ls (14.1201)<br>− DPT_HumDehumMode (20.115)<br>− DPT_PowerReturnMode (20.022)<br>− DPT_LoadTypeSet (20.609) (range extended)<br>− DPT_LoadTypeDetected (20.610) (range extended)<br>- <br>DPT from colour encoding in**7/20/1, 7/20/2 and 7/20/3**. <br>− DPT_Colour_RGBW (251.600)<br>− DPT_Relative_Control_RGBW (252.600)<br>− DPTRelativeControlRGB (254.600)|
|02.01.02|2017.10.11|___<br>- <br>Inclusion of further DPTs from colour control.<br>− DPT_Absolute_Colour_Temperature (7.600)<br>− DPT_Brightness_Colour_Temperature_Control (250.600)<br>− DPT_Colour_xyY (242.600)<br>− DPT_Relative_Control_xyY (253.600)<br>− DPT_Colour_Transition_xyY (243.600)<br>- <br>Editorial corrections.<br>− Range indication of the positive values of some V16. <br>− [WGI00111] Range indication of F16. <br>− Added “General requirements”: see 1.5.|
|02.01.02|2018.03.09|- <br>Marked DPT_WindowDoor (1.019) for Boolean valve state as concluded<br>in WGI online discussion.|
|02.01.02|2019.09.26|- <br>**AN134 “Flexible E-Mode Channels”** integrated (Parameter Types).<br>- <br>**AN179 “ERL Channel”** integrated.<br>- <br>Editorial review.|
|02.02.01|2021.04.29|- <br>Inserted specification of DPT_HVACAirQualRel_Z (205.103) which is<br>used in 7/10/1 AS.<br>- <br>Editorial corrections.<br>− DPT_ApplicationArea: range corrected.<br>− DPT_AlarmInfo: added “Load Management”<br>− DPT_OccModeNext: corrected encoding of OccMode in format<br>definition from U to N.<br>− DPTBatteryInfo: corrected the format from r4B4U8 to r5B3U8.|
|02.02.01|2021.05.27|__<br>- <br>Publication.|


-----

[08] Chapter 7/60/1 “M-Bus Data Collector”

[09] Chapter 7/60/11 “Metering E-Mode Channels”

Filename: 03_07_02 Datapoint Types v02.02.01 AS.docx
Version: 02.02.01
Status: Approved Standard
Savedate: 2021.05.27
Number of pages: 251


-----

#### Contents

###### 1 Introduction .......................................................................................................................... 12 1.1 Classification and identification of Datapoint Types ................................................... 12 1.2 Subtype ranges for Datapoint Type Identifiers ............................................................. 13 1.3 Datapoint Type specification style ............................................................................... 14 1.3.1 Notations and format......................................................................................... 14 1.3.2 Property Datatype ............................................................................................. 14 1.3.3 Use .................................................................................................................... 15 1.4 The transmission of DPT encoded data on the bus ....................................................... 15 1.5 General requirements .................................................................................................... 16

 2 Overview ............................................................................................................................... 17

 3 Datapoint Types for common use ....................................................................................... 26 3.1 Datapoint Types B1 ....................................................................................................... 26 3.2 Datapoint Types B2 ....................................................................................................... 28 3.3 Datapoint Types B1U3 ................................................................................................... 29 3.3.1 DPT_Control_Dimming ................................................................................... 29 3.3.2 DPT_Control_Blinds ........................................................................................ 30 3.4 Datapoint Types Character Set” ................................................................................... 31 3.5 Datapoint Types “8-Bit Unsigned Value” .................................................................... 32 3.5.1 Scaled values ..................................................................................................... 32 3.5.2 Non-scaled values ............................................................................................. 33 3.6 Datapoint Types V8 ....................................................................................................... 34 3.6.1 Signed Relative Value....................................................................................... 34 3.7 Datapoint Type “Status with Mode” ............................................................................. 34 3.8 Datapoint Types “2-Octet Unsigned Value” ................................................................ 35 3.8.1 2-octet unsigned counter value ......................................................................... 35 3.8.2 Time Period ....................................................................................................... 35 3.8.3 Other U16 Datapoint Types ............................................................................... 36 3.9 Datapoint Types “2-Octet Signed Value” ..................................................................... 37 3.9.1 2-octet signed counter value ............................................................................. 37 3.9.2 Delta Time ........................................................................................................ 37 3.9.3 Other V16 Datapoint Types ............................................................................... 38 3.10 Datapoint Types “2-Octet Float Value” ....................................................................... 39 3.11 Datapoint Type “Time” ................................................................................................ 41 3.12 Datapoint Type “Date” ................................................................................................. 41 3.13 Datapoint Types “4-Octet Unsigned Value” ................................................................ 42
 3.13.1 General .............................................................................................................. 42 3.13.2 Operating hours ................................................................................................. 42 3.14 Datapoint Types “4-Octet Signed Value” ..................................................................... 43
 3.14.1 4 Octet signed counter value ............................................................................. 43 3.14.2 DPTs for electrical energy ................................................................................ 43 3.14.3 4 Octet signed time period ................................................................................ 44 3.15 Datapoint Types “4-Octet Float Value” ....................................................................... 44 3.16 Datapoint Type #015.000#DPT_Access_Data ............................................................. 47 3.17 Datapoint Types "String" .............................................................................................. 48 3.18 Datapoint Type Scene Number ..................................................................................... 48 3.19 Datapoint Type DPT_SceneControl ............................................................................. 49 3.20 Datapoint Type DPT_DateTime ................................................................................... 50
 3.20.1 Notes ................................................................................................................. 51 3.21 Datapoint Types N8 ....................................................................................................... 53


-----

###### 3.22 Datapoint Type B8 ........................................................................................................ 58
 3.22.1 Datapoint Type “General Status”...................................................................... 58 3.22.2 Datapoint Type “Device Control” .................................................................... 59 3.23 Datapoint Types N2 ...................................................................................................... 59 3.24 Datapoint Type DPT_VarString_8859_1 ..................................................................... 60 3.25 Datapoint Type DPT_SceneInfo ................................................................................... 61 3.26 Datatype B32 .................................................................................................................. 62
 3.26.1 Datapoint Type “Combined Info On Off” ........................................................ 62 3.27 Datapoint Type Unicode UTF-8 String A[n] ................................................................ 65
 3.27.1 DPT_UTF-8 ...................................................................................................... 65 3.28 Datapoint Types V64 ..................................................................................................... 67
 3.28.1 DPTs for electrical energy ................................................................................ 67 3.29 Datapoint Type DPT_AlarmInfo .................................................................................. 68 3.30 Datapoint Type DPT_SerNum ..................................................................................... 71 3.31 Datapoint Types “Unsigned Relative Value” ............................................................... 71 3.32 Datapoint Types “Unsigned Counter Value” ............................................................... 72 3.33 Datapoint Types “Time Period..._Z” ............................................................................ 73 3.34 Datapoint Types “Unsigned Flow Rate l/h” ................................................................. 73 3.35 Datapoint Types “Unsigned Counter Value” ............................................................... 74 3.36 Datapoint Types “Unsigned Electric Current μA” ....................................................... 74 3.37 Datapoint Types “Power in kW” .................................................................................. 75 3.38 Datapoint Type “Atmospheric Pressure with Status/Command” ................................. 76
 3.38.1 Datapoint Type “DPT_PercentU16_Z” ............................................................ 76 3.39 Datapoint Types “Signed Relative Value” ................................................................... 77 3.40 Datapoint Type “DeltaTime...Z” .................................................................................. 78 3.41 Datapoint Type “16 bit Signed Relative Value_Z” ...................................................... 78 3.42 Datapoint Type DPT_Version ...................................................................................... 79 3.43 Datatype V32Z8 .............................................................................................................. 80
 3.43.1 Datapoint Type “Volume in Liter” ................................................................... 80 3.43.2 Datapoint Type “Flow Rate in m3/h_Z” ........................................................... 81 3.44 Datatype U16U8 ............................................................................................................. 82
 3.44.1 Datapoint Type “Scaling speed” ....................................................................... 82 3.44.2 Datapoint Type “Scaling step time” ................................................................. 83 3.44.3 DPT_TariffNext ................................................................................................ 84 3.45 Datatype V32N8Z8 ......................................................................................................... 85
 3.45.1 Datapoint Type “MeteringValue” ..................................................................... 85 3.46 Datatypes A8A8A8A8 .................................................................................................... 87 3.47 Datapoint Types A8A8 .................................................................................................. 88
 3.47.2 Datapoint Type DPT_RegionCodeAlpha2_ASCII ........................................... 90 3.48 DPT_Tariff_ActiveEnergy ........................................................................................... 94 3.49 DPT_Prioritised_Mode_Control ................................................................................... 95
 3.49.1 Definition .......................................................................................................... 95 3.49.2 Functional description ....................................................................................... 95 3.49.3 Use cases ........................................................................................................... 98 3.50 Datapoint Types B2U6 ................................................................................................... 99
 3.50.1 DPT_SceneConfig ............................................................................................ 99 3.51 Datapoint Types U8r7B1 .............................................................................................. 100
 3.51.1 DPT_FlaggedScaling ...................................................................................... 100 3.52 Datapoint Types F32F32 ............................................................................................... 101
 3.52.1 DPT_GeographicalLocation ........................................................................... 101 3.53 Datapoint Types “DPT_DateTime_Period” ............................................................... 102


-----

###### 3.54 Datapoint Types B1 with Date and Time .................................................................... 103 3.55 Datapoint Types 4 octets Float with Date and Time .................................................. 104 3.56 Datapoint Type DPT_UTF-8 with Date and Time ..................................................... 105

 4 Datapoint Types for HVAC ............................................................................................... 106 4.1 Simple Datapoint Types with STATUS/COMMAND Z8 field .................................. 106 4.1.1 Introduction ..................................................................................................... 106 4.1.2 Datatype format .............................................................................................. 107 4.1.3 OutOfService mechanism for a parameter ...................................................... 111 4.1.4 OutOfService mechanism for a runtime Datapoint (actual value) .................. 112 4.1.5 Override mechanism ....................................................................................... 112 4.1.6 Alarming mechanism ...................................................................................... 114 4.2 Datapoint Types B1 ..................................................................................................... 114 4.3 Datapoint Types N8 ..................................................................................................... 115 4.4 Data Type “8-Bit Set” ................................................................................................. 119 4.4.1 Datapoint Type “Forcing Signal” ................................................................... 119 4.4.2 Datapoint Type “Forcing Signal Cool” ........................................................... 120 4.4.3 Datapoint Type “Room Heating Controller Status” ....................................... 121 4.4.4 Datapoint Type “Solar DHW Controller Status” ............................................ 122 4.4.5 Datapoint Type “Fuel Type Set”..................................................................... 123 4.4.6 Datapoint Type “Room Cooling Controller Status” ....................................... 124 4.4.7 Datapoint Type “Ventilation Controller Status” ............................................. 125 4.5 Data Type “16-Bit Set” ............................................................................................... 126 4.5.1 Datapoint Type “DHW Controller Status” ..................................................... 126 4.5.2 Datapoint Type “RHCC Status” ..................................................................... 127 4.6 Datapoint Types N2 ..................................................................................................... 129 4.7 Datapoint Types N3 ..................................................................................................... 130 4.7.1 Datapoint Type DPT_PB_Action_HVAC_Extended ..................................... 130 4.8 Data Type “Boolean with Status/Command” ............................................................. 131 4.8.1 Datapoint Type “Heat/Cool_Z” ...................................................................... 131 4.8.2 Datapoint Type “DPT_BinaryValue_Z”......................................................... 131 4.9 Data Type “8-Bit Enum with Status/Command” ........................................................ 132 4.9.1 Datapoint Type “HVAC Operating Mode” .................................................... 132 4.9.2 Datapoint Type “DHW Mode” ....................................................................... 133 4.9.3 Datapoint Type “HVAC Controlling Mode” .................................................. 134 4.9.4 Datapoint Type “Enable Heat/Cool Stage”..................................................... 135 4.9.5 Datapoint Type “Building Mode” ................................................................... 135 4.9.6 Datapoint Type “Occupancy Mode” ............................................................... 136 4.9.7 Datapoint Type “HVAC Emergency Mode” .................................................. 137 4.10 Data Type “16-Bit Unsigned Value with Status/Command” ..................................... 138
 4.10.1 Datapoint Type “HVAC Air Quality” ............................................................ 138 4.10.2 Datapoint Type “Wind Speed with Status/Command” ................................... 139 4.10.3 Datapoint Type “Sun Intensity with Status/Command” ................................. 139 4.10.4 Datapoint Type “HVAC Air Flow Absolute Value” ...................................... 140 4.11 Data Type “16-Bit Signed Value with Status/Command” ......................................... 141
 4.11.1 Datapoint Type “HVAC absolute Temperature” ............................................ 141 4.11.2 Datapoint Type “HVAC relative Temperature” ............................................. 142 4.11.3 Datapoint Type “HVAC Air Flow Relative Value” ....................................... 142 4.11.4 Datapoint Type “HVAC Air Quality Relative Value” ................................... 143 4.12 Data Type “16-Bit Unsigned Value & 8-Bit Enum” .................................................. 144
 4.12.1 Datapoint Type “HVAC Mode & Time delay” .............................................. 144 4.12.2 Datapoint Type “DHW Mode & Time delay” ................................................ 145


-----

###### 4.12.3 Datapoint Type “Occupancy Mode & Time delay” ....................................... 146 4.12.4 Datapoint Type “Building Mode & Time delay” ........................................... 147 4.13 Data Type “8-Bit Unsigned Value & 8-Bit Set” ........................................................ 148
 4.13.1 Datapoint Type “Status Burner Controller” .................................................... 148 4.13.2 Datapoint Type “Locking Signal” .................................................................. 149 4.13.3 Datapoint Type “Boiler Controller Demand Signal” ...................................... 149 4.13.4 Datapoint Type “Actuator Position Demand” ................................................ 150 4.13.5 Datapoint Type “Actuator Position Status” .................................................... 151 4.14 Data Type “16-Bit Signed Value & 8-Bit Set” ........................................................... 152
 4.14.1 Datapoint Type “Heat Producer Manager Status” .......................................... 152 4.14.2 Datapoint Type “Room Temperature Demand” ............................................. 153 4.14.3 Datapoint Type “Cold Water Producer Manager Status” ............................... 154 4.14.4 Datapoint Type “Water Temperature Controller Status”................................ 155 4.15 Data Type “16-Bit Signed Value & 16-Bit Set” ......................................................... 156
 4.15.1 Datapoint Type “Consumer Flow Temperature Demand” ............................. 156 4.16 Data Type “8-Bit Unsigned Value & 8-Bit Enum” .................................................... 157
 4.16.1 Datapoint Type “EnergyDemWater” .............................................................. 157 4.17 Data Type “3x 16-Bit Signed Value” ......................................................................... 158
 4.17.1 Datapoint Type “3x set of RoomTemperature Setpoint Shift values” ............ 158 4.17.2 Datapoint Type “3x set of RoomTemperature Absolute Setpoint values” ..... 159 4.18 Data Type “4x 16-Bit Signed Value” ......................................................................... 160
 4.18.1 Datapoint Type “4x set of RoomTemperature setpoints” ............................... 160 4.18.2 Datapoint Type “4x set of DHWTemperature setpoints” ............................... 161 4.18.3 Datapoint Type “4x set of RoomTemperature setpoint shift values” ............. 162 4.19 Data Type “16-Bit Signed & 8-Bit Unsigned Value & 8-Bit Set” ............................. 163
 4.19.1 Datapoint Type “Heat Prod. Manager Demand Signal” ................................. 163 4.19.2 Datapoint Type “Cold Water Prod. Manager Demand Signal” ...................... 164 4.20 Data Type “ V16U8B16” ............................................................................................... 165
 4.20.1 Datapoint Type “Status Boiler Controller” ..................................................... 165 4.20.2 Datapoint Type “Status Chiller Controller” .................................................... 166 4.21 Data Type “U16U8N8B8” ............................................................................................. 167
 4.21.1 Datapoint Type “Heat Producer Specification” .............................................. 167 4.22 Data Type “16-Bit Unsigned Value & 16-Bit Signed Value” .................................... 168
 4.22.1 Datapoint Type “Next Temperature & Time Delay” ...................................... 168 4.23 Data Type “3x 16-Float Value” .................................................................................. 169
 4.23.1 Datapoint Type “3x set of RoomTemperature Setpoint Values” .................... 169 4.23.2 Datapoint Type “3x set of RoomTemperature Setpoint Shift Values” ........... 170 4.24 Data Type V8N8N8 ...................................................................................................... 171
 4.24.1 Datapoint Type “EnergyDemAir” .................................................................. 171 4.25 Data Type V16V16N8N8 ............................................................................................... 172
 4.25.1 Datapoint Type “TempSupplyAirSetpSet” ..................................................... 172

 5 Datapoint Types for Load Management .......................................................................... 174

 6 Datapoint Types for Lighting ............................................................................................ 175 6.1 General ........................................................................................................................ 175 6.2 Datapoint Types U16 ................................................................................................... 175 6.3 Datapoint Types N8 ..................................................................................................... 175 6.4 Datapoint Types B8 ..................................................................................................... 180 6.4.1 Datapoint Type “Lighting Actuator Error Information” ................................. 180 6.5 Datapoint Types U8B8 ................................................................................................. 181 6.5.1 Datapoint Type “Status Lighting Actuator” ................................................... 181


-----

###### 6.6 Datapoint Types U8U8U8 ............................................................................................ 182 6.6.1 DPT_Colour_RGB .......................................................................................... 182 6.7 Datapoint Types B10U6 ............................................................................................... 182 6.7.1 DPT_DALI_Control_Gear_Diagnostics......................................................... 182 6.8 Datapoint Types B2U6 ................................................................................................. 183 6.8.1 DPT_DALI_Diagnostics................................................................................. 183 6.9 DPT_Colour_xyY (C_xyY) ........................................................................................ 184 6.10 DPT_Colour_Transition_xyY .................................................................................... 185 6.11 DPT_Converter_Status ............................................................................................... 186 6.12 DPT_Converter_Test_Result ...................................................................................... 187 6.13 DPT_Battery_Info ...................................................................................................... 189 6.14 DPT_Converter_Test_Info ......................................................................................... 190 6.15 DPT_Converter_Info_Fix ........................................................................................... 191 6.16 DPT_Brightness_Colour_Temperature_Transition .................................................... 192 6.17 DPT_Brightness_Colour_Temperature_Control ........................................................ 193 6.18 DPT Colour_RGBW ................................................................................................... 194 6.19 DPT_Relative_Control_RGBW ................................................................................. 195 6.20 DPT Relative_Control_xyY ....................................................................................... 196 6.21 DPT_Relative_Control_RGB ..................................................................................... 197 6.22 DPT_Converter_Info (DPT_CI) ................................................................................. 198

 7 Datapoint Types for shutters and blinds .......................................................................... 199 7.1 Datapoint Types N8 ..................................................................................................... 199 7.2 Datapoint Types U8U8B8 ............................................................................................ 200 7.2.1 Datapoint Type “Combined Position” ............................................................ 200 7.3 Datapoint Types U8U8B16 ........................................................................................... 201 7.4 Status Shutter & Sunblind Actuator ........................................................................... 201

 8 Datapoint Types for System .............................................................................................. 202 8.1 Datapoint Types N8 ..................................................................................................... 202 8.2 Datapoint Types B8 ..................................................................................................... 205 8.2.1 Datapoint Type “RF Communication Mode Info” ......................................... 205 8.2.2 Datapoint Type “cEMI Server Supported RF Filtering Modes” .................... 206 8.2.3 Datapoint Type “Security Report” .................................................................. 207 8.2.4 Datapoint Type “Channel Activation for 8 channels” .................................... 207 8.3 Datatype B16 ................................................................................................................ 208 8.3.1 Datapoint Type “Media” ................................................................................. 208 8.3.2 Datapoint Type “Channel Activation for 16 channels” .................................. 208 8.4 Datatype U4U4 ............................................................................................................ 209 8.5 Datapoint Types B24 ................................................................................................... 209 8.5.1 Datapoint Type “Channel Activation for 24 channels” .................................. 209 8.6 Datapoint Type “MBus Address” ............................................................................... 210

 9 Datapoint Types for Metering ........................................................................................... 211 9.1 Datapoint Types B1 ..................................................................................................... 211 9.2 Datapoint Types U32 ................................................................................................... 211 9.3 Datapoint Types V32 ................................................................................................... 212 9.4 Datapoint Types F32 .................................................................................................... 212 9.5 Datapoint Types N8 ..................................................................................................... 213 9.6 Datapoint Types B8 ..................................................................................................... 214 9.7 Datapoint Types r5B3 .................................................................................................. 215 9.8 Datapoint Types F32F32F32 .......................................................................................... 216 9.9 Datapoint Types B1 with Date and Time .............................................................. 217


-----

###### 9.10 Datapoint Types Enum8 with Date and Time ............................................................ 218 9.11 Datapoint Types DPT_Tariff_ActiveEnergy with Date and Time ............................. 219 9.12 Datapoint Types F32F32F32 with Date and Time ......................................................... 220 9.13 Datapoint Types TariffDayProfile .............................................................................. 221 9.14 Datapoint Types DPT_ERL_Status ............................................................................ 222 9.15 Datapoint Types DPT_UTF-8 and N DPT_Tariff_ActiveEnergy .............................. 223 9.16 Datapoint Types DPT_UTF-8 and N DPT_Tariff_ActiveEnergy with Date and Time .................................................................................................................................... 224

 10 Datapoint types for weather encoding .............................................................................. 226
 10.1 Forecasts for F16 values .............................................................................................. 226 10.2 Forecasts for U8 values ............................................................................................... 227

 11 Parameter Types ................................................................................................................ 229

 Annex A (normative) DPT_HVACStatus ............................................................................... 231

 Annex B (normative) Legacy non-standard DPTs for DALI Emergency Lighting ............ 233
 B.1 Applicability of the new DPTs introduced in this paper ............................................ 233 B.2 Legacy Datapoints and non-standard DPTs ............................................................... 233
 B.2.1 Goal and use .................................................................................................... 233 B.2.2 Overview ......................................................................................................... 233 B.2.3 Addressed Converter Test Status (ACTS) (LEGACY!) ................................. 235 B.2.4 Addressed Converter Test Trigger (ACTT) (LEGACY!) .............................. 236 B.2.5 Addressed Brightness Level Status (ABLS) (LEGACY!).............................. 237 B.2.6 Addressed Switch Status (ASS) (LEGACY!)................................................. 239 B.2.7 Converter Test Trigger and Status (CTTS) (LEGACY!) ............................... 240 B.2.8 Emergency operation Test Start/Status (EOTSS) (LEGACY!) ...................... 242 B.2.9 Converter Fault Statistics (CFS) (LEGACY!) ................................................ 243 B.2.10 Converter Test Trigger (CTT) (LEGACY!) ................................................... 245 B.2.11 Converter Test Stop (CTS) (LEGACY!) ........................................................ 246 B.2.12 Feedback emergency operation test (FEOT) (LEGACY!) ............................. 247

 Annex C (informative) Chronologic overview of DPTs added and modified in this paper 249
 C.1 Chronologic overview ................................................................................................ 249


-----

### 1 Introduction

#### 1.1 Classification and identification of Datapoint Types

Datapoint Type

Data Type Dimension

Format Encoding Range Unit

###### Figure 1 - Structure of Datapoint Types

 The Datapoint Types are defined as a combination of a data type and a dimension. It has been preferred not to define the data types separately from any dimension. This only leads to more abstract naming and identifications.

 Any Datapoint Type thus standardizes one combination of format, encoding, range and unit. The Datapoint Types will be used to describe further KNX Interworking Standards.

 The Datapoint Types are identified by a 16 bit main number separated by a dot from a 16-bit subnumber, e.g. "7.002". The coding is as follows:

 Field Stands for
 Format main number(left) Encoding
 Range subnumber (right) Unit Datapoint Types with the same main number thus have the same format and encoding.

 Datapoint Types with the same main number have the same data type. A different subnumber indicates a different dimension (different range and/or different unit).

|Classification and identification of Datapoint Types|Col2|
|---|---|
|Data Type<br>Dimension<br>Datapoint Type<br>Format<br>Encoding<br>Range<br>Unit|Data Type<br>Dimension<br>Datapoint Type<br>Format<br>Encoding<br>Range<br>Unit|
|Format|Unit|

|ows:|Col2|
|---|---|
|Field|Stands for|
|main number(left)|Format<br>Encoding|
|subnumber (right)|Range<br>Unit|


-----

#### 1.2 Subtype ranges for Datapoint Type Identifiers
###### The assignment of Datapoint Type identifiers by KNX Association is done in a systematic way according the scheme below.

**MAIN number**

**300 …**
**0 … 199** **200 … 299** **≥ 60 000**

**Application** **59 999**

**Domain** **Subnumber** **mainly unstructured** **structured**

**Common use** **0 to 99** DPT is DPT is

                - standard                - standardised

                - mainly                - structured reserved
unstructured                    - common use for future

              - common use use

**HVAC** **100 to 499** DPT is DPT is

                - standardised                 - standardised

                - unstructured                 - structured managed

                - HVAC specific use                - HVAC LTE only by WGI

**Load** **500 to 599** DPT is DPT is
**Management** - standardised - standardised

                - unstructured                 - structured

                - LMM specific

usage

**Lighting** **600 to 799** DPT is DPT is Reserved.

                - standardised                 - standardised These

                - unstructured                 - structured DPT-IDs

                 - **lighting**                  - **lighting** shall not be

**Shutters and** **800 to 999** DPT is DPT is used.
**blinds** - standardised - standardised

                 - unstructured                  - structured

                 - **shutters and**                  - **shutters and**
**blinds** **blinds**

**System** **1 000 to** DPT is DPT is

**1 199**              - standardised              - standardised

                 - unstructured                  - structured

                 - **system**                  - **system**

**Metering** **1 200 to** DPT is DPT is

**1 399**              - standardised              - standardised

                 - unstructured                  - structured

                 - **metering**                  - **metering**

**Reserved** **1 400 to** reserved for other applications

**50 999** (managed by WGI)

**Manufacturer** **≥ 60 000** manufacturer specific extensions [a] manufacturer
**specific** specific

extensions [a]
a For interpretation of these Datapoint Types the device type needs to be known.

|Application<br>Domain|Subnumber|MAIN number|Col4|Col5|Col6|
|---|---|---|---|---|---|
|**Application**<br>**Domain**|**Subnumber**|**0 … 199**|<br>**200 … 299**|**300 …**<br>**59 999**|**≥ 60 000**|
|**Application**<br>**Domain**|**Subnumber**|**mainly unstructured**|**structured**|||
|**Common use**|**0 to 99**|DPT is<br>• standard<br>• mainly<br>unstructured<br>• common use|DPT is<br>• standardised<br>• structured<br>• common use|reserved<br>for future<br>use|Reserved.<br>These<br>DPT-IDs<br>shall not be<br>used.|
|**HVAC**|**100 to 499**|<br>DPT is<br>• standardised<br>• unstructured<br>• HVAC specific use|DPT is<br>• standardised<br>• structured<br>• HVAC LTE only|managed<br>by WGI|managed<br>by WGI|
|**Load**<br>**Management**|**500 to 599**|<br>DPT is<br>• standardised<br>• unstructured<br>• LMM specific<br>usage|<br>DPT is<br>• standardised<br>• structured|||
|**Lighting**|**600 to 799**|DPT is<br>• standardised<br>• unstructured<br>• **lighting**|DPT is<br>• standardised<br>• structured<br>• **lighting**|||
|**Shutters and**<br>**blinds**|**800 to 999**|<br>DPT is<br>• <br>standardised<br>• <br>unstructured<br>• <br>**shutters and**<br>**blinds**|<br>DPT is<br>• <br>standardised<br>• <br>structured<br>• <br>**shutters and**<br>**blinds**|||
|**System**|**1 000 to**<br>**1 199**|<br>DPT is<br>• <br>standardised<br>• <br>unstructured<br>• <br>**system**|<br>DPT is<br>• <br>standardised<br>• <br>structured<br>• <br>**system**|||
|**Metering**|**1 200 to**<br>**1 399**|<br> <br>DPT is<br>• <br>standardised<br>• <br>unstructured<br>• <br>**metering**|<br> <br>DPT is<br>• <br>standardised<br>• <br>structured<br>• <br>**metering**|||
|**Reserved**|**1 400 to**<br>**50 999**|<br> <br>reserved for other applications<br>(managed by WGI)|<br> <br>reserved for other applications<br>(managed by WGI)|||
|**Manufacturer**<br>**specific**|<br>**≥ 60 000**|manufacturer specific extensionsa|manufacturer specific extensionsa||manufacturer<br>specific<br>extensionsa|
|a <br>For interpretation of these Datapoint Types the device type needs to be known.|a <br>For interpretation of these Datapoint Types the device type needs to be known.|a <br>For interpretation of these Datapoint Types the device type needs to be known.|a <br>For interpretation of these Datapoint Types the device type needs to be known.|a <br>For interpretation of these Datapoint Types the device type needs to be known.|a <br>For interpretation of these Datapoint Types the device type needs to be known.|


-----

###### These ranges are defined for DPTs for given application areas. Entire ranges of 500 entries are assigned in one go.

**Subtype range**

**Application area**
**From** **To**

100 499 HVAC

500 599 Load Management

600 999 Lighting

1 000 1 199 System

1 200 1 399 Metering

1 400 50 999 Reserved for other application
domains

#### 1.3 Datapoint Type specification style

##### 1.3.1 Notations and format

**Symbol** **Field**

A Character

A[n] String of n characters

B Boolean / Bit set

C Control

E Exponent

F Floating point value

M Mantissa

N eNumeration

r Reserved bit or field

S Sign

U Unsigned value

V 2's Complement signed value

Z8 Standardised Status/Command B8. Encoding as in DPT_StatusGen

###### Numbers in suffix denote the length of a field in bit.

EXAMPLE 1 U16 indicates a 16 bit unsigned integer.

###### In the following, the format is described MSB first (most significant octet left) and msb first (most significant bit left) inside an octet. Please refer as well to clause 1.4.

 Datapoint Types shorter than 1 octet are transmitted in the data-field of the frame on the lower bit positions. The preceding bits shall be 0.

##### 1.3.2 Property Datatype
###### Property values can be encoded according the DPTs specified in this document. Therefore, this document specifies a mandatory Property Datatype for every DPT. In each clause of this document, this Property Datatype is specified:
 - for all DPTs in that clause in general, or  - for each DPT in that clause individually.

|Subtype range|Col2|Application area|
|---|---|---|
|**From**|**To**|**To**|
|100|499|HVAC|
|500|599|Load Management|
|600|999|Lighting|
|1 000|1 199|System|
|1 200|1 399|Metering|
|1 400|50 999|Reserved for other application<br>domains|

|Symbol|Field|
|---|---|
|A|Character|
|A[n]|String of n characters|
|B|Boolean / Bit set|
|C|Control|
|E|Exponent|
|F|Floating point value|
|M|Mantissa|
|N|eNumeration|
|r|Reserved bit or field|
|S|Sign|
|U|Unsigned value|
|V|2's Complement signed value|
|Z8|Standardised Status/Command B8. Encoding as in DPT_StatusGen|


-----

###### If the Property Value is an array, then all elements of that array shall be encoded according to this specified DPT.

 Please refer to [03] for the specification of the Property Datatypes.

 Interface Object Servers may encode the Property Datatypes on 5 bit or on 6 bit. This influences the Property Datatype that shall be used as specified below.

**Property Datatype**
**supported by the device**
**Property Datatype that shall be used**

**Size** **Range**

5 bit 00h to 1Fh The alternative Property Datatype as specified behind “(Alt.: …)” in the
DPT definition.

6 bit 00h to 3Fh The Property Datatype as specified in the DPT definition.

##### 1.3.3 Use
###### Some DPTs can be used without any restriction. Other DPTs can only be used where this is allowed explicitly. This is specified in the DPT definitions. The following applies.

**Abbreviation** **Meaning** **Explanation**

G General This Datapoint Type can be used without any restrictions.

FB Functional Block This Datapoint Type shall not be used in general.
This Datapoint Type shall only be used for implementations of
standard Functional Blocks where this DPT is used.
This Datapoint Type is not allowed for any other purpose.

HVAC Application This Datapoint Type shall not be used in general.
HWH Domains This Datapoint Type may only be used within the specified
TU application domain.
… This Datapoint Type is not allowed for any other purpose.

#### 1.4 The transmission of DPT encoded data on the bus
###### Data encoded according a DPT that is transmitted on the KNX system shall be transmitted with the most significant octet first in the frame and the least significant octet last. An example is shown in Figure 2.

Octet 6 Octet 7 Octet 8 Octet 9 Octet 10
APCI r r r Day r r r r Month r Year
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 1 0 0 0 0 0 0 0 0 0 0 1 0 0 1 0 0 0 0 0 1 1 0 0 0 0 0 0 0 1 1 0
18 12 2006

###### Figure 2 – December 12, 2006 encoded according DPT_Date in an A_GroupValue_Write-frame (example on TP1)

NOTE 1 The transmission order of the bits within an octet depends on the medium and may be “most significant bit” (msb) first or
“least significant bit” (lsb) first.

|Property Datatype<br>supported by the device|Col2|Property Datatype that shall be used|
|---|---|---|
|**Size**|**Range**|**Range**|
|5 bit|00h to 1Fh|The alternative Property Datatype as specified behind “(Alt.: …)” in the<br>DPT definition.|
|6 bit|00h to 3Fh|The Property Datatype as specified in the DPT definition.|

|Abbreviation|Meaning|Explanation|
|---|---|---|
|G|General|This Datapoint Type can be used without any restrictions.|
|FB|Functional Block|This Datapoint Type shall not be used in general.<br>This Datapoint Type shall only be used for implementations of<br>standard Functional Blocks where this DPT is used.<br>This Datapoint Type is not allowed for any other purpose.|
|HVAC<br>HWH<br>TU<br>…|Application<br>Domains|This Datapoint Type shall not be used in general.<br>This Datapoint Type may only be used within the specified<br>application domain.<br>This Datapoint Type is not allowed for any other purpose.|

|Octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|||||||r|r|r|Day|Day|Day|Day|Day|r|r|r|r|Month|Month|Month|Month|r|Year|Year|Year|Year|Year|Year|Year|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|APCI|APCI|APCI|||||||||||||||||||||||||||||||
|||||||0|0|1|0|0|0|0|0|0|0|0|0|0|1|0|0|1|0|0|0|0|0|1|1|0|0|0|0|0|0|0|1|1|0|
||||||||||||||||||||18|18|18|18|18|||||12|12|12|12||2006|2006|2006|2006|2006|2006|2006|


-----

#### 1.5 General requirements
###### 01 Counter DPTs (U8, V8, U16, V16 and other)

 KNX Datapoint Types not only identify the format and the encoding, but also the range and the unit. Consequently, there are no “generic” Datapoint Types that only identify the format as commonly known fro programming languages.

 The DPTs 5.010 (DPT_Value_1_Ucount: U8), 6.010 (DPT_Value_1_Count: V8), 7.001 (DPT_Value_2_Ucount: U16), 8.001 (DPT_Value_2_Count: V16) and other shall thus not be mistaken as indications of the format only. They have a unit (counter pulses) and shall be used for counting discrete things.

 These shall thus also not be used as wildcard to declare any encoding that does not comply with any DPT.

EXAMPLE 2 If an encoding has the format r3B5, for which no standard KNX DPT exist, then this shall not
be declared as DPT_Value_1_Ucount (5.010).
###### In this case, the use of a non-standard DPT shall be requested at KNX Association (see [02]).

 02 This Chapter only defines the Datapoint Types. For the best understanding and use of these DPTs,
 please refer to there use in the various Chapters of Volume 7 “Application Descriptions” ([04]).


-----

### 2 Overview

|DPT ID<br>_|Format|DPT Name<br>_|
|---|---|---|
|1.001|B1|DPT_Switch|
|1.002|B1|DPT_Bool|
|1.003|B1|DPT_Enable|
|1.004|B1|DPT_Ramp|
|1.005|B1|DPT_Alarm|
|1.006|B1|DPT_BinaryValue|
|1.007|B1|DPT_Step|
|1.008|B1|DPT_UpDown|
|1.009|B1|DPT_OpenClose|
|1.010|B1|DPT_Start|
|1.011|B1|DPT_State|
|1.012|B1|DPT_Invert|
|1.013|B1|DPT_DimSendStyle|
|1.014|B1|DPT_InputSource|
|1.015|B1|DPT_Reset|
|1.016|B1|DPT_Ack|
|1.017|B1|DPT_Trigger|
|1.018|B1|DPT_Occupancy|
|1.019|B1|DPT_Window_Door|
|1.021|B1|DPT_LogicalFunction|
|1.022|B1|DPT_Scene_AB|
|1.023|B1|DPT_ShutterBlinds_Mode|
|1.024|B1|DPT_DayNight|
|1.100|B1|DPT_Heat/Cool|
|1.1200|B1|DPT_ConsumerProducer|
|1.1201|B1|DPT_EnergyDirection|
|2.001|B2|DPT_Switch_Control|
|2.002|B2|DPT_Bool_Control|
|2.003|B2|DPT_Enable_Control|
|2.004|B2|DPT_Ramp_Control|
|2.005|B2|DPT_Alarm_Control|
|2.006|B2|DPT_BinaryValue_Control|
|2.007|B2|DPT_Step_Control|
|2.008|B2|DPT_Direction1_Control|
|2.009|B2|DPT_Direction2_Control|
|2.010|B2|DPT_Start_Control|
|2.011|B2|DPT_State_Control|
|2.012|B2|DPT_Invert_Control|
|3.007|B1U3|DPT_Control_Dimming|
|3.008|B1U3|DPT_Control_Blinds|
|4.001|A8|DPT_Char_ASCII|
|4.002|A8|DPT_Char_8859_1|
|5.001|U8|DPT_Scaling|
|5.003|U8|DPT_Angle|
|5.004|U8|DPT_Percent_U8|
|5.005|U8|DPT_DecimalFactor|
|5.006|U8|DPT_Tariff|
|5.010|U8|DPT_Value_1_Ucount|
|6.001|V8|DPT_Percent_V8|
|6.010|V8|DPT_Value_1_Count|
|6.020|B5N3|DPT_Status_Mode3|
|7.001|U16|DPT_Value_2_Ucount|
|7.002|U16|DPT_TimePeriodMsec|


-----

|DPT ID<br>_|Format|DPT Name<br>_|
|---|---|---|
|7.003|U16|DPT_TimePeriod10MSec|
|7.004|U16|DPT_TimePeriod100MSec|
|7.005|U16|DPT_TimePeriodSec|
|7.006|U16|DPT_TimePeriodMin|
|7.007|U16|DPT_TimePeriodHrs|
|7.010|U16|DPT_PropDataType|
|7.011|U16|DPT_Length_mm|
|7.012|U16|DPT_UElCurrentmA|
|7.013|U16|DPT_Brightness|
|7.600|U16|DPT_Absolute_Colour_Temperature|
|8.001|V16|DPT_Value_2_Count|
|8.002|V16|DPT_DeltaTimeMsec|
|8.003|V16|DPT_DeltaTime10MSec|
|8.004|V16|DPT_DeltaTime100MSec|
|8.005|V16|DPT_DeltaTimeSec|
|8.006|V16|DPT_DeltaTimeMin|
|8.007|V16|DPT_DeltaTimeHrs|
|8.010|V16|DPT_Percent_V16|
|8.011|V16|DPT_Rotation_Angle|
|8.012|V16|DPT_Length_m|
|9.001|F16|DPT_Value_Temp|
|9.002|F16|DPT_Value_Tempd|
|9.003|F16|DPT_Value_Tempa|
|9.004|F16|DPT_Value_Lux|
|9.005|F16|DPT_Value_Wsp|
|9.006|F16|DPT_Value_Pres|
|9.007|F16|DPT_Value_Humidity|
|9.008|F16|DPT_Value_AirQuality|
|9.009|F16|DPT_Value_AirFlow|
|9.010|F16|DPT_Value_Time1|
|9.011|F16|DPT_Value_Time2|
|9.020|F16|DPT_Value_Volt|
|9.021|F16|DPT_Value_Curr|
|9.022|F16|DPT_PowerDensity|
|9.023|F16|DPT_KelvinPerPercent|
|9.024|F16|DPT_Power|
|9.025|F16|DPT_Value_Volume_Flow|
|9.026|F16|DPT_Rain_Amount|
|9.027|F16|DPT_Value_Temp_F|
|9.028|F16|DPT_Value_Wsp_kmh|
|9.029|F16|DPT_Value_Absolute_Humidity|
|9.030|F16|DPT_Concentration_µgm3|
|10.001|N3N5r2N6r2N6|DPT_TimeOfDay|
|11.001|r3N5r4N4r1U7|DPT_Date|
|12.001|U32|DPT_Value_4_Ucount|
|12.100|U32|DPT_LongTimePeriod_Sec|
|12.101|U32|DPT_LongTimePeriod_Min|
|12.102|U32|DPT_LongTimePeriod_Hrs|
|12.1200|U32|DPT_VolumeLiquid_Litre|
|12.1201|U32|DPT_Volume_m3|
|13.001|V32|DPT_Value_4_Count|
|13.002|V32|DPT_FlowRate_m3/h|
|13.010|V32|DPT_ActiveEnergy|
|13.011|V32|DPT_ApparantEnergy|


-----

|DPT ID<br>_|Format|DPT Name<br>_|
|---|---|---|
|13.012|V32|DPT_ReactiveEnergy|
|13.013|V32|DPT_ActiveEnergy_kWh|
|13.014|V32|DPT_ApparantEnergy_kVAh|
|13.015|V32|DPT_ReactiveEnergy_kVARh|
|13.016|V32|DPT_ActiveEnergy_MWh|
|13.100|V32|DPT_LongDeltaTimeSec|
|13.1200|V32|DPT_DeltaVolumeLiquid_Litre|
|13.1201|V32|DPT_DeltaVolume_m3|
|14.000|F32|DPT_Value_Acceleration|
|14.001|F32|DPT_Value_Acceleration_Angular|
|14.002|F32|DPT_Value_Activation_Energy|
|14.003|F32|DPT_Value_Activity|
|14.004|F32|DPT_Value_Mol|
|14.005|F32|DPT_Value_Amplitude|
|14.006|F32|DPT_Value_AngleRad|
|14.007|F32|DPT_Value_AngleDeg|
|14.008|F32|DPT_Value_Angular_Momentum|
|14.009|F32|DPT_Value_Angular_Velocity|
|14.010|F32|DPT_Value_Area|
|14.011|F32|DPT_Value_Capacitance|
|14.012|F32|DPT_Value_Charge_DensitySurface|
|14.013|F32|DPT_Value_Charge_DensityVolume|
|14.014|F32|DPT_Value_Compressibility|
|14.015|F32|DPT_Value_Conductance|
|14.016|F32|DPT_Value_Electrical_Conductivity|
|14.017|F32|DPT_Value_Density|
|14.018|F32|DPT_Value_Electric_Charge|
|14.019|F32|DPT_Value_Electric_Current|
|14.020|F32|DPT_Value_Electric_CurrentDensity|
|14.021|F32|DPT_Value_Electric_DipoleMoment|
|14.022|F32|DPT_Value_Electric_Displacement|
|14.023|F32|DPT_Value_Electric_FieldStrength|
|14.024|F32|DPT_Value_Electric_Flux|
|14.025|F32|DPT_Value_Electric_FluxDensity|
|14.026|F32|DPT_Value_Electric_Polarization|
|14.027|F32|DPT_Value_Electric_Potential|
|14.028|F32|DPT_Value_Electric_PotentialDifference|
|14.029|F32|DPT_Value_ElectromagneticMoment|
|14.030|F32|DPT_Value_Electromotive_Force|
|14.031|F32|DPT_Value_Energy|
|14.032|F32|DPT_Value_Force|
|14.033|F32|DPT_Value_Frequency|
|14.034|F32|DPT_Value_Angular_Frequency|
|14.035|F32|DPT_Value_Heat_Capacity|
|14.036|F32|DPT_Value_Heat_FlowRate|
|14.037|F32|DPT_Value_Heat_Quantity|
|14.038|F32|DPT_Value_Impedance|
|14.039|F32|DPT_Value_Length|
|14.040|F32|DPT_Value_Light_Quantity|
|14.041|F32|DPT_Value_Luminance|
|14.042|F32|DPT_Value_Luminous_Flux|
|14.043|F32|DPT_Value_Luminous_Intensity|
|14.044|F32|DPT_Value_Magnetic_FieldStrength|
|14.045|F32|DPT_Value_Magnetic_Flux|


-----

|DPT ID<br>_|Format|DPT Name<br>_|
|---|---|---|
|14.046|F32|DPT_Value_Magnetic_FluxDensity|
|14.047|F32|DPT_Value_Magnetic_Moment|
|14.048|F32|DPT_Value_Magnetic_Polarization|
|14.049|F32|DPT_Value_Magnetization|
|14.050|F32|DPT_Value_MagnetomotiveForce|
|14.051|F32|DPT_Value_Mass|
|14.052|F32|DPT_Value_MassFlux|
|14.053|F32|DPT_Value_Momentum|
|14.054|F32|DPT_Value_Phase_AngleRad|
|14.055|F32|DPT_Value_Phase_AngleDeg|
|14.056|F32|DPT_Value_Power|
|14.057|F32|DPT_Value_Power_Factor|
|14.058|F32|DPT_Value_Pressure|
|14.059|F32|DPT_Value_Reactance|
|14.060|F32|DPT_Value_Resistance|
|14.061|F32|DPT_Value_Resistivity|
|14.062|F32|DPT_Value_SelfInductance|
|14.063|F32|DPT_Value_SolidAngle|
|14.064|F32|DPT_Value_Sound_Intensity|
|14.065|F32|DPT_Value_Speed|
|14.066|F32|DPT_Value_Stress|
|14.067|F32|DPT_Value_Surface_Tension|
|14.068|F32|DPT_Value_Common_Temperature|
|14.069|F32|DPT_Value_Absolute_Temperature|
|14.070|F32|DPT_Value_TemperatureDifference|
|14.071|F32|DPT_Value_Thermal_Capacity|
|14.072|F32|DPT_Value_Thermal_Conductivity|
|14.073|F32|DPT_Value_ThermoelectricPower|
|14.074|F32|DPT_Value_Time|
|14.075|F32|DPT_Value_Torque|
|14.076|F32|DPT_Value_Volume|
|14.077|F32|DPT_Value_Volume_Flux|
|14.078|F32|DPT_Value_Weight|
|14.079|F32|DPT_Value_Work|
|14.080|F32|DPT_Value_ApparentPower|
|14.1200|F32|DPT_Volume_Flux_Meter|
|14.1201|F32|DPT_Volume_Flux_ls|
|15.000|U4U4U4U4U4U4B4N4|DPT_Access_Data|
|16.000|A112|DPT_String_ASCII|
|16.001|A112|DPT_String_8859_1|
|17.001|r2U6|DPT_SceneNumber|
|18.001|B1r1U6|DPT_SceneControl|
|19.001|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16|DPT_DateTime|
|20.001|N8|DPT_SCLOMode|
|20.002|N8|DPT_BuildingMode|
|20.003|N8|DPT_OccMode|
|20.004|N8|DPT_Priority|
|20.005|N8|DPT_LightApplicationMode|
|20.006|N8|DPT_ApplicationArea|
|20.007|N8|DPT_AlarmClassType|
|20.008|N8|DPT_PSUMode|
|20.011|N8|DPT_ErrorClass_System|
|20.012|N8|DPT_ErrorClass_HVAC|
|20.013|N8|DPT_Time_Delay|


-----

|DPT ID<br>_|Format|DPT Name<br>_|
|---|---|---|
|20.014|N8|DPT_Beaufort_Wind_Force_Scale|
|20.017|N8|DPT_SensorSelect|
|20.020|N8|DPT_ActuatorConnectType|
|20.021|N8|DPT_Cloud_Cover|
|20.022|N8|DPT_PowerReturnMode|
|20.100|N8|DPT_FuelType|
|20.101|N8|DPT_BurnerType|
|20.102|N8|DPT_HVACMode|
|20.103|N8|DPT_DHWMode|
|20.104|N8|DPT_LoadPriority|
|20.105|N8|DPT_HVACContrMode|
|20.106|N8|DPT_HVACEmergMode|
|20.107|N8|DPT_ChangeoverMode|
|20.108|N8|DPT_ValveMode|
|20.109|N8|DPT_DamperMode|
|20.110|N8|DPT_HeaterMode|
|20.111|N8|DPT_FanMode|
|20.112|N8|DPT_MasterSlaveMode|
|20.113|N8|DPT_StatusRoomSetp|
|20.114|N8|DPT_Metering_DeviceType|
|20.115|N8|DPT_HumDehumMode|
|20.120|N8|DPT_ADAType|
|20.121|N8|DPT_BackupMode|
|20.122|N8|DPT_StartSynchronization|
|20.600|N8|DPT_Behaviour_Lock_Unlock|
|20.601|N8|DPT_Behaviour_Bus_Power_Up_Down|
|20.602|N8|DPT_DALI_Fade_Time|
|20.603|N8|DPT_BlinkingMode|
|20.604|N8|DPT_LightControlMode|
|20.605|N8|DPT_SwitchPBModel|
|20.606|N8|DPT_PBAction|
|20.607|N8|DPT_DimmPBModel|
|20.608|N8|DPT_SwitchOnMode|
|20.609|N8|DPT_LoadTypeSet|
|20.610|N8|DPT_LoadTypeDetected|
|20.611|N8|DPT_Converter_Test_Control|
|20.612|N8|DPT_Converter_Control|
|20.613|N8|DPT_Converter_Data_Request|
|20.801|N8|DPT_SABExceptBehaviour|
|20.802|N8|DPT_SABBehaviour_Lock_Unlock|
|20.803|N8|DPT_SSSBMode|
|20.804|N8|DPT_BlindsControlMode|
|20.1000|N8|DPT_CommMode|
|20.1001|N8|DPT_AddInfoTypes|
|20.1002|N8|DPT_RF_ModeSelect|
|20.1003|N8|DPT_RF_FilterSelect|
|20.1004|N8|DPT_Medium|
|20.1005|N8|DPT_PB_Function|
|20.1200|N8|DPT_MBus_BreakerValve_State|
|20.1202|N8|DPT_Gas_Measurement_Condition|
|20.1203|N8|DPT_Breaker_Status|
|20.1204|N8|DPT_Euridis_Communication_Interface_Status|
|20.1205|N8|DPT_PLC_Status|
|20.1206|N8|DPT_Peak_Event_Notice|


-----

|DPT ID<br>_|Format|DPT Name<br>_|
|---|---|---|
|20.1207|N8|DPT_Peak_Event|
|20.1208|N8|DPT_TIC_Type|
|20.1209|N8|DPT_Type_TIC_Channel|
|21.001|B8|DPT_StatusGen|
|21.002|B8|DPT_Device_Control|
|21.100|B8|DPT_ForceSign|
|21.101|B8|DPT_ForceSignCool|
|21.102|B8|DPT_StatusRHC|
|21.103|B8|DPT_StatusSDHWC|
|21.104|B8|DPT_FuelTypeSet|
|21.105|B8|DPT_StatusRCC|
|21.106|B8|DPT_StatusAHU|
|21.601|B8|DPT_LightActuatorErrorInfo|
|21.1000|B8|DPT_RF_ModeInfo|
|21.1001|B8|DPT_RF_FilterInfo|
|21.1002|B8|DPT_Security_Report|
|21.1010|B8|DPT_Channel_Activation_8|
|21.1200|B8|DPT_VirtualDryContact|
|21.1201|B8|DPT_Phases_Status|
|22.100|B16|DPT_StatusDHWC|
|22.101|B16|DPT_StatusRHCC|
|22.1000|B16|DPT_Media|
|22.1010|B16|DPT_Channel_Activation_16|
|23.001|N2|DPT_OnOff_Action|
|23.002|N2|DPT_Alarm_Reaction|
|23.003|N2|DPT_UpDown_Action|
|23.102|N2|DPT_HVAC_PB_Action|
|24.001|A[n]|DPT_VarString_8859_1|
|25.1000|U4U4|DPT_DoubleNibble|
|26.001|r1b1U6|DPT_SceneInfo|
|27.001|B32|DPT_CombinedInfoOnOff|
|28.001|A[n]|DPT_UTF-8|
|29.010|V64|DPT_ActiveEnergy_V64|
|29.011|V64|DPT_ApparantEnergy_V64|
|29.012|V64|DPT_ReactiveEnergy_V64|
|30.1010|B24|DPT_Channel_Activation_24|
|31.101|N3|DPT_PB_Action_HVAC_Extended|
|200.100|B1Z8|DPT_Heat/Cool_Z|
|200.101|B1Z8|DPT_BinaryValue_Z|
|201.100|N8Z8|DPT_HVACMode_Z|
|201.102|N8Z8|DPT_DHWMode_Z|
|201.104|N8Z8|DPT_HVACContrMode_Z|
|201.105|N8Z8|DPT_EnablH/Cstage_Z|
|201.107|N8Z8|DPT_BuildingMode_Z|
|201.108|N8Z8|DPT_OccMode_Z|
|201.109|N8Z8|DPT_HVACEmergMode_Z|
|202.001|U8Z8|DPT_RelValue_Z|
|202.002|U8Z8|DPT_UCountValue8_Z|
|203.002|U16Z8|DPT_TimePeriodMsec_Z|
|203.003|U16Z8|DPT_TimePeriod10Msec_Z|
|203.004|U16Z8|DPT_TimePeriod100Msec_Z|
|203.005|U16Z8|DPT_TimePeriodSec_Z|
|203.006|U16Z8|DPT_TimePeriodMin_Z|
|203.007|U16Z8|DPT_TimePeriodHrs_Z|


-----

|DPT ID<br>_|Format|DPT Name<br>_|
|---|---|---|
|203.011|U16Z8|DPT_UFlowRateLiter/h_Z|
|203.012|U16Z8|DPT_UCountValue16_Z|
|203.013|U16Z8|DPT_UElCurrentμA_Z|
|203.014|U16Z8|DPT_PowerKW_Z|
|203.015|U16Z8|DPT_AtmPressureAbs_Z|
|203.017|U16Z8|DPT_PercentU16_Z|
|203.100|U16Z8|DPT_HVACAirQual_Z|
|203.101|U16Z8|DPT_WindSpeed_Z|
|203.102|U16Z8|DPT_SunIntensity_Z|
|203.104|U16Z8|DPT_HVACAirFlowAbs_Z|
|204.001|V8Z8|DPT_RelSignedValue_Z|
|205.002|V16Z8|DPT_DeltaTimeMsec_Z|
|205.003|V16Z8|DPT_DeltaTime10Msec_Z|
|205.004|V16Z8|DPT_DeltaTime100Msec_Z|
|205.005|V16Z8|DPT_DeltaTimeSec_Z|
|205.006|V16Z8|DPT_DeltaTimeMin_Z|
|205.007|V16Z8|DPT_DeltaTimeHrs_Z|
|205.017|V16Z8|DPT_Percent_V16_Z|
|205.100|V16Z8|DPT_TempHVACAbs_Z|
|205.101|V16Z8|DPT_TempHVACRel_Z|
|205.102|V16Z8|DPT_HVACAirFlowRel_Z|
|205.103|V16Z8|DPT_HVACAirQualiRel_Z|
|206.100|U16N8|DPT_HVACModeNext|
|206.102|U16N8|DPT_DHWModeNext|
|206.104|U16N8|DPT_OccModeNext|
|206.105|U16N8|DPT_BuildingModeNext|
|207.100|U8B8|DPT_StatusBUC|
|207.101|U8B8|DPT_LockSign|
|207.102|U8B8|DPT_ValueDemBOC|
|207.104|U8B8|DPT_ActPosDemAbs|
|207.105|U8B8|DPT_StatusAct|
|207.600|U8B8|DPT_StatusLightingActuator|
|209.100|V16B8|DPT_StatusHPM|
|209.101|V16B8|DPT_TempRoomDemAbs|
|209.102|V16B8|DPT_StatusCPM|
|209.103|V16B8|DPT_StatusWTC|
|210.100|V16B16|DPT_TempFlowWaterDemAbs|
|211.100|U8N8|DPT_EnergyDemWater|
|212.100|V16V16V16|DPT_TempRoomSetpSetShift[3]|
|212.101|V16V16V16|DPT_TempRoomSetpSet[3]|
|213.100|V16V16V16V16|DPT_TempRoomSetpSet[4]|
|213.101|V16V16V16V16|DPT_TempDHWSetpSet[4]|
|213.102|V16V16V16V16|DPT_TempRoomSetpSetShift[4]|
|214.100|V16U8B8|DPT_PowerFlowWaterDemHPM|
|214.101|V16U8B8|DPT_PowerFlowWaterDemCPM|
|215.100|V16U8B16|DPT_StatusBOC|
|215.101|V16U8B16|DPT_StatusCC|
|216.100|U16U8N8B8|DPT_SpecHeatProd|
|217.001|U5U5U6|DPT_Version|
|218.001|V32Z8|DPT_VolumeLiter_Z|
|218.002|V32Z8|DPT_FlowRate_m3/h_Z|
|219.001|U8N8N8N8B8B8|DPT_AlarmInfo|
|220.100|U16V16|DPT_TempHVACAbsNext|
|221.001|N16U32|DPT_SerNum|


-----

|DPT ID<br>_|Format|DPT Name<br>_|
|---|---|---|
|222.100|F16F16F16|DPT_TempRoomSetpSetF16[3]|
|222.101|F16F16F16|DPT_TempRoomSetpSetShiftF16[3]|
|223.100|V8N8N8|DPT_EnergyDemAir|
|224.100|V16V16N8N8|DPT_TempSupplyAirSetpSet|
|225.001|U16U8|DPT_ScalingSpeed|
|225.002|U16U8|DPT_Scaling_Step_Time|
|225.003|U16U8|DPT_TariffNext|
|229.001|V32N8Z8|DPT_MeteringValue|
|230.1000|U16U32U8N8|DPT_MBus_Address|
|231.001|A8A8A8A8|DPT_Locale_ASCII|
|232.600|U8U8U8|DPT_Colour_RGB|
|234.001|A8A8|DPT_LanguageCodeAlpha2_ASCII|
|234.002|A8A8|DPT_RegionCodeAlpha2_ASCII|
|235.001|V32U8B8|DPT_Tariff_ActiveEnergy|
|236.001|B1N3N4|DPT_Prioritised_Mode_Control|
|237.600|B10U6|DPT_DALI_Control_Gear_Diagnostic|
|238.001|B2U6|DPT_SceneConfig|
|238.600|B2U6|DPT_DALI_Diagnostics|
|239.001|U8r7B1|DPT_FlaggedScaling|
|240.800|U8U8B8|DPT_CombinedPosition|
|241.800|U8U8B16|DPT_StatusSAB|
|242.600|U16U16U8r6B2|DPT_Colour_xyY|
|243.600|U16U16U16U8r6B2|DPT_Colour_Transition_xyY|
|244.600|N4B4N2N2N2N2|DPT_Converter_Status|
|245.600|N4N4N4N2N2N2N2U16U8|DPT_Converter_Test_Result|
|246.600|r5B3U8|DPT_Battery_Info|
|247.600|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B8-<br>[B1r7]U16U16|DPT_Converter_Test_Info|
|248.600|N8U8U8U8B8|DPT_Converter_Info_Fix|
|250.600|r4B1U3r4B1U3B8|DPT_Brightness_Colour_Temperature_Control|
|251.600|U8U8U8U8r8r4B4|DPT_Colour_RGBW|
|252.600|r4B1U3r4B1U3r4B1U3r4B1U3B8|DPT_Relative_Control_RGBW|
|253.600|r4B1U3r4B1U3r4B1U3B8|DPT_Relative_Control_xyY|
|254.600|r4B1U3r4B1U3r4B1U3|DPT_Relative_Control_RGB|
|255.001|F32F32|DPT_GeographicalLocation|
|256.001|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16U8[r4<br>U4][r3U5][U3U5][r2U6][r2U6]B16|DPT_DateTime_Period|
|257.1200|F32F32F32|DPT_Value_Electric_Current_3|
|257.1201|F32F32F32|DPT_Value_Electric_Potential_3|
|257.1202|F32F32F32|DPT_Value_ApparentPower_3|
|265.001|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1|DPT_DateTime_Switch|
|265.005|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1|DPT_DateTime_Alarm|
|265.009|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1|DPT_DateTime_OpenClose|
|265.011|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1|DPT_DateTime_State|
|265.012|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1|DPT_DateTime_Invert|
|265.1200|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1|DPT_DateTime_ConsumerProducer|
|265.1201|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1|DPT_DateTime_EnergyDirection|
|266.027|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32|DPT_DateTime_Value_Electric_Potential|
|266.056|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32|DPT_DateTime_Value_Power|
|266.080|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32|DPT_DateTime_Value_ApparentPower|
|267.001|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16A[n]|DPT_DateTime_UTF-8|
|268.1203|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16N8|DPT_DateTime_Breaker_Status|
|268.1204|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16N8|DPT_DateTime_Euridis_Communication_Interfa<br>ce_Status|
|268.1205|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16N8|DPT_DateTime_PLC_Status|
||||


-----

|DPT ID<br>_|Format|DPT Name<br>_|
|---|---|---|
|268.1206|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16N8|DPT_DateTime_Peak_Notice|
|269.1200|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16V32U<br>8B8|DPT_DateTime_Tariff_ActiveEnergy|
|270.1200|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32F<br>32F32|DPT_DateTime_Value_Electric_Current_3|
|270.1201|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32F<br>32F32|DPT_DateTime_Value_Electric_Potential_3|
|270.1202|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32F<br>32F32|DPT_DateTime_Value_ApparentPower_3|
|271.1200|[N3U5][r2U6][r2U6][U4U4]U8[U6N2][r1B7]|DPT_TariffDayProfile|
|272.600|N8U16U16U8U8|DPT_Converter_Info|
|273.001|B8U16U8F16F16|DPT_Forecast_Temperature|
|273.002|B8U16U8F16F16|DPT_Forecast_WindSpeed|
|273.003|B8U16U8F16F16|DPT_Forecast_RelativeHumidity|
|273.004|B8U16U8F16F16|DPT_Forecast_AbsoluteHumidity|
|273.005|B8U16U8F16F16|DPT_Forecast_CO2|
|273.006|B8U16U8F16F16|DPT_Forecast_AirPollutants|
|273.007|B8U16U8F16F16|DPT_Forecast_SunIntensity|
|274.001|B8U16U8U8U8|DPT_Forecast_Wind_Direction|
|276.1200|U8U8U8r3B5|DPT_ERL_Status|
|277.1200|A[12](V32U8B8)[4]|DPT_4_EnergyRegisters|
|278.1200|A[12](V32U8B8)[5]|DPT_5_EnergyRegisters|
|279.1200|A[12](V32U8B8)[6]|DPT_6_EnergyRegisters|
|280.1200|A[12](V32U8B8)[11]|DPT_11_EnergyRegisters|
|281.1200|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16A[12<br>](V32U8B8)[4]|DPT_DateTime_4_EnergyRegisters|
|282.1200|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16A[12<br>](V32U8B8)[5]|DPT_DateTime_5_EnergyRegisters|
|283.1200|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16A[12<br>](V32U8B8)[6]|DPT_DateTime_6_EnergyRegisters|
|284.1200|U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16A[12<br>](V32U8B8)[11]|DPT_DateTime_11_EnergyRegisters|


-----

### 3 Datapoint Types for common use

#### 3.1 Datapoint Types B1

NOTE 2 These single bit DPTs are defined in a most generic way, as much as possibly independently of any application. This
allows for the best possible re-use of the DPT in various FBs and Application Domains, though keeping a common interpretation.
For the use case specific interpretation of the DPT, it is thus recommended to consult the application descriptions in [04].

EXAMPLE 3 For DPT_Step (1.007) the interpretation of “increase” and “decrease” as “step-down” respectively “step-up” is
only clear from the FB specifications of Shutters and Blinds.

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|b|
|---|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Range:<br>Unit:<br>Resol.:<br>PDT:|Col2|1 bit: B<br>1<br>1<br>b<br>B<br>b = {0,1}<br>None.<br>(not applicable)<br>PDT BINARY INFORMATION (alt: PDT UNSIGNED CHAR)<br>_ _ _ _|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Name:|Encoding: b|Use:|
|1.001|DPT_Switch|DPT_Switch|0 <br>= Off<br>1 <br>= On|G|
|1.002|DPT_Bool|DPT_Bool|0 <br>= False<br>1 <br>= True|G|
|1.003|DPT_Enable|DPT_Enable|0 <br>= Disable<br>1 <br>= Enable|G|
|1.004|DPT_Ramp|DPT_Ramp|0 <br>= No ramp<br>1 <br>= Ramp|FB|
|1.005|DPT_Alarm|DPT_Alarm|0 <br>= No alarm<br>1 <br>= Alarm|FB|
|1.006|DPT_BinaryValue|DPT_BinaryValue|0 <br>= Low<br>1 <br>= High|FB|
|1.007|DPT_Step|DPT_Step|0 <br>= Decrease <br>(See EXAMPLE 3) <br>1 <br>= Increase|FB|
|1.008|DPT_UpDown|DPT_UpDown|0 <br>= Up<br>1 <br>= Down|G|
|1.009|DPT_OpenClose|DPT_OpenClose|0 <br>= Open<br>1 <br>= Close|G|
|1.009|DPT_OpenClose|DPT_OpenClose|APPLICATIONS: <br>MECHANICAL, NORMALLY OPEN <br>PUSH BUTTON INTERFACE|APPLICATIONS: <br>MECHANICAL, NORMALLY OPEN <br>PUSH BUTTON INTERFACE|
|1.010|DPT_Start|DPT_Start|0 <br>= Stop<br>1 <br>= Start|G|
|1.011|DPT_State|DPT_State|0 <br>= Inactive<br>1 <br>= Active|FB|
|1.012|DPT_Invert|DPT_Invert|0 <br>= Not inverted<br>1 <br>= Inverted|FB|
|1.013|DPT_DimSendStyle|DPT_DimSendStyle|0 <br>= Start/stop<br>1 <br>= Cyclically|FB|
|1.014|DPT_InputSource|DPT_InputSource|0 <br>= Fixed<br>1 <br>= Calculated|FB|
|1.015|DPT_Reset|DPT_Reset|0 <br>= no action (dummy)<br>1 <br>= reset command(trigger)|G|


-----

|Datapoint Types|Col2|Col3|Col4|
|---|---|---|---|
|ID:|Name:|Encoding: b|Use:|
|1.016|DPT_Ack|0 <br>= no action (dummy)<br>1 <br>= acknowledge command (trigger), e.g. for<br>alarming|G|
|1.017|DPT_Trigger|0, 1 =trigger 1)|G|
|1.018|DPT_Occupancy|0 <br>= not occupied<br>1 <br>= occupied|G|
|1.019|DPT_Window_Door|0 <br>= closed<br>1 <br>= open|G|
|1.019|DPT_Window_Door|APPLICATIONS: <br>WINDOW, DOOR, MECHANICAL, NORMALLY CLOSED, <br>BINARY VALVE STATE|APPLICATIONS: <br>WINDOW, DOOR, MECHANICAL, NORMALLY CLOSED, <br>BINARY VALVE STATE|
|1.021|DPT_LogicalFunction|0 <br>= logical function OR<br>1 <br>= logical function AND|FB|
|1.022|DPT_Scene_AB2)|0 <br>= scene A<br>1 <br>= scene B|FB|
|1.023|DPT_ShutterBlinds_<br>Mode|0 <br>= only move Up/Down mode (shutter)<br>1 <br>= move Up/Down +StepStop mode (blind)|FB|
|1.024|DPT_DayNight|0 <br>= Day<br>1 <br>= Night|G|


1) For DPT_Trigger, both values 0 and 1 shall have the same effect and shall not be differentiated in sender or
receiver.
2) DPT_Scene_AB allows numbering the scenes with 0 and 1. KNX Association recommends displaying these
scene numbers in ETS™, other software and controllers as 1 and 2, this is, with an offset of 1 compared to the
actual transmitted value.


-----

#### 3.2 Datapoint Types B2

Format: 2 bit: B2

octet nr 1

field names c v

encoding B B

Range: c = {0,1}
v = {0,1}

Unit: None

Resol.: (not applicable)

PDT: PDT_GENERIC_01

**Datapoint Types**

ID: Name: Use: Encoding:

c

0 = no control According to Type 1.xxx
1 = control

2.001 DPT_Switch_Control G
2.002 DPT_Bool_Control G c v
2.003 DPT_Enable_Control FB 0 0 No control
2.004 DPT_Ramp_Control FB 0 1 No control
2.005 DPT_Alarm_Control FB 1 0 Control. Function value 0
2.006 DPT_BinaryValue_Control FB 1 1 Control. Function value 1
2.007 DPT_Step_Control FB
2.008 DPT_Direction1_Control FB
2.009 DPT_Direction2_Control FB
2.010 DPT_Start_Control FB
2.011 DPT_State_Control FB
2.012 DPT_Invert_Control FB

|Col1|Col2|Col3|Col4|Col5|Col6|c|v|
|---|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|B|B|
|---|---|---|---|---|---|---|---|

|c|v|Col3|
|---|---|---|
|0|0|No control|
|0|1|No control|
|1|0|Control. Function value 0|
|1|1|Control. Function value 1|

|Format:<br>octet nr<br>field names<br>encoding<br>Range:<br>Unit:<br>Resol.:|2 bit: B<br>2<br>1<br>c v<br>B B<br>c = {0,1}<br>v = {0,1}<br>None<br>(not applicable)|Col3|Col4|Col5|
|---|---|---|---|---|
|PDT:|PDT_GENERIC_01|PDT_GENERIC_01|PDT_GENERIC_01|PDT_GENERIC_01|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|Encoding:|Encoding:|
||||c|v|
||||0 = no control<br>1 = control|According to Type 1.xxx|
|2.001|DPTSwitchControl|G|c v<br>0 0 No control<br>0 1 No control<br>1 0 Control. Function value 0<br>1 1 Control. Function value 1|c v<br>0 0 No control<br>0 1 No control<br>1 0 Control. Function value 0<br>1 1 Control. Function value 1|
|2.002|__<br>DPTBoolControl|G|G|G|
|2.003|__<br>DPTEnableControl|FB|FB|FB|
|2.004|__<br>DPTRampControl|FB|FB|FB|
|2.005|__<br>DPTAlarmControl|FB|FB|FB|
|2.006|__<br>DPTBinaryValueControl|FB|FB|FB|
|2.007|__<br>DPTStepControl|FB|FB|FB|
|2.008|__<br>DPTDirection1Control|FB|FB|FB|
|2.009|__<br>DPTDirection2Control|FB|FB|FB|
|2.010|__<br>DPTStartControl|FB|FB|FB|
|2.011|__<br>DPTStateControl|FB|FB|FB|
|2.012|__<br>DPTInvertControl|FB|FB|FB|


-----

#### 3.3 Datapoint Types B1U3

##### 3.3.1 DPT_Control_Dimming

|Col1|Col2|Col3|Col4|c|Step-<br>Code|
|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|B|U|U|U|
|---|---|---|---|---|---|---|---|


###### - 001b…111b: Step
Number of intervals = 2^[(stepcode-1)]
###### - 000b: Break

|Format:<br>octet nr<br>field names<br>encoding<br>Range:<br>Unit:<br>Resol.:<br>PDT:|4 bit: B U<br>1 3<br>1<br>Step-<br>c<br>Code<br>B UUU<br>c = {0,1}<br>StepCode = [000b…111b]<br>none<br>(not applicable)<br>PDT GENERIC 01<br>_ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Name:|Use:|
|3.007|DPTControlDimming|DPTControlDimming|DPTControlDimming|FB|
|3.007|__<br>APPLICATIONS: <br>LIGHTING, DIMMING, REALTIVE DIMMING|__<br>APPLICATIONS: <br>LIGHTING, DIMMING, REALTIVE DIMMING|__<br>APPLICATIONS: <br>LIGHTING, DIMMING, REALTIVE DIMMING|__<br>APPLICATIONS: <br>LIGHTING, DIMMING, REALTIVE DIMMING|
|**Data fields**|**Data fields**|**Description**|**Encoding**|**Encoding**|
|c|c|Increase or decrease the brightness.|See 1.007<br>0 <br>= Decrease<br>(See EXAMPLE 3) <br>1 <br>= Increase|See 1.007<br>0 <br>= Decrease<br>(See EXAMPLE 3) <br>1 <br>= Increase|
|StepCode|StepCode|The number of intervals into which the<br>range of 0 % … 100 % is subdivided, or the<br>break indication.|- 001b…111b:<br>Step<br>Number of intervals = 2^(stepcode-1) <br>- 000b:<br>Break|- 001b…111b:<br>Step<br>Number of intervals = 2^(stepcode-1) <br>- 000b:<br>Break|


-----

##### 3.3.2 DPT_Control_Blinds

Format: 4 bit: B1U3

octet nr 1

field names c [Step-]

Code

encoding B UUU

Range: c = {0,1}
StepCode = [000b…111b]

Unit: none

Resol.: (not applicable)

PDT: PDT_GENERIC_01

**Datapoint Types**

ID: Name: Use:

3.008 DPT_Control_Blinds FB
APPLICATIONS: SHUTTERS, BLINDS: RELATIVE CONTROL, POSITIONING

**Data fields** **Description** **Encoding**

c Move up or down. See 1.008
0 = Up
1 = Down

StepCode The number of intervals into which the - 001b…111b: Step
range of 0 % … 100 % is subdivided, or

Number of intervals = 2^[(stepcode-1)]

the break indication.

###### - 000b: Break

NOTE 3 This DPT can be used both for the relative positioning of the vertical blinds positions as well as for
the relative positioning of the angle of the slats.

|Col1|Col2|Col3|Col4|c|Step-<br>Code|
|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|B|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Range:<br>Unit:<br>Resol.:<br>PDT:|4 bit: B U<br>1 3<br>1<br>Step-<br>c<br>Code<br>B UUU<br>c = {0,1}<br>StepCode = [000b…111b]<br>none<br>(not applicable)<br>PDT GENERIC 01<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|3.008|DPTControlBlinds|DPTControlBlinds|FB|
|3.008|_<br>APPLICATIONS:|_<br>SHUTTERS, BLINDS: RELATIVE CONTROL, POSITIONING|_<br>SHUTTERS, BLINDS: RELATIVE CONTROL, POSITIONING|

|Data fields|Description|Encoding|
|---|---|---|
|c|Move up or down.|See 1.008<br>0 <br>= Up<br>1 <br>= Down|
|StepCode|The number of intervals into which the<br>range of 0 % … 100 % is subdivided, or<br>the break indication.|- 001b…111b:<br>Step<br>Number of intervals = 2^(stepcode-1) <br>- 000b:<br>Break|


-----

#### 3.4 Datapoint Types Character Set”

Format: 8 bit: A8

octet nr 1

field names Character

encoding A A A A A A A A

Unit: None

Resol.: (not applicable)

**Datapoint Types**

ID: Name: Range: Encoding: PDT: Use:

4.001 DPT_Char_ASCII [0...127] See below. The most PDT_GENERIC_01 G
significant bit shall (alt: PDT_UNSIGNED_CHAR)
always be 0.

APPLICATIONS: TEXT, SINGLE CHARACTERS, ASCII
4.002 DPT_Char_8859_1 [0...255] See below. PDT_UNSIGNED_CHAR G
APPLICATIONS: TEXT, SINGLE CHARACTERS, ISI 8859-1

Encoding:

AAAA AAAA LSN = Least Significant Nibble

MSN LSN MSN = Most Significant Nibble

MSN 0 1 2 3 4 5 6 7 8 9 A B C D E F
LSN
4.001 DPT_Char_ASCII

0 NUL DLE 0 @ P ` p ° À Ð à ð
1 SOH DC1 ! 1 A Q a q ¡ ± Á Ñ á ñ
4.002 DPT_Char_8859_1
2 STX DC2 " 2 B R b r ¢ ² Â Ò â ò
3 ETX DC3 # 3 C S c s £ ³ Ã Ó ã ó
4 EOT DC4 $ 4 D T d t ¤ ´ Ä Ô ä ô
5 ENQNAK % 5 E U e u ¥ µ Å Õ å õ
6 ACK SYN & 6 F V f v ¦                        - Æ Ö æ ö
7 BEL ETB ' 7 G W g w §                        - Ç × ç ÷
8 BS CAN ( 8 H X h x ¨ ¸ È Ø è ø
9 HT EM ) 9 I Y i y © ¹ É Ù é ù
A LF SUB * : J Z j z ª º Ê Ú ê ú
B VT ESC + ; K [ k { « » Ë Û ë û
C FF FS, < L \ l | ¬ ¼ Ì Ü ì ü
D CR GS                    - = M ] m } ­ ½ Í Ý í ý
E SO RS .                     - N ^ n ~ ® ¾ Î Þ î þ
F SI US / ? O _ o ¯ ¿ Ï ß ï ÿ

###### Decoding of 00h to 1Fh

 The support of the control characters in the range 00h to 1Fh is not mandatory. The receiver shall not react on reception of an unsupported value in this range. If the receiver supports any of the encoded controls (like backspace, clear screen ...) the encoding shall however be as indicated above.

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|AAAA|AAAA|
|---|---|
|MSN|LSN|

|MSN|0|1|2|3|4|5|6|7|8|9|A|B|C|D|E|F|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|LSN|||||||||||||||||
|0|NUL|DLE||0|@|P|`|p||||°|À|Ð|à|ð|
|1 <br>|SOH|DC1|<br>!|1|A|Q|a|q|||¡|±|Á|Ñ|á|ñ|
|2|STX|DC2|<br>"|2|B|R|b|r|||¢|²|Â|Ò|â|ò|
|3|ETX|DC3|#|3|C|S|c|s|||£|³|Ã|Ó|ã|ó|
|4|EOT|DC4|$|4|D|T|d|t|||¤|´|Ä|Ô|ä|ô|
|5 <br>|ENQ|NAK|%|5|E|U|e|u|||¥|µ|Å|Õ|å|õ|
|6|ACK|SYN|&|6|F|V|f|v|||¦|¶|Æ|Ö|æ|ö|
|7|BEL|ETB|<br>'|7|G|W|g|w|||§|·|Ç|×|ç|÷|
|8|BS|CAN|(|8|H|X|h|x|||¨|¸|È|Ø|è|ø|
|9|HT|EM|)|9|I|Y|i|y|||©|¹|É|Ù|é|ù|
|A|LF|SUB|*|:|J|Z|j|z|||ª|º|Ê|Ú|ê|ú|
|B|VT|ESC|+|;|K|[|k|{|||«|»|Ë|Û|ë|û|
|C|FF|FS|,|<|L|\|l|||||¬|¼|Ì|Ü|ì|ü|
|D|CR|GS|-|=|M|]|m|}|||­|½|Í|Ý|í|ý|
|E|SO|RS|.|>|N|^|n|~|||®|¾|Î|Þ|î|þ|
|F|SI|US|/|?|O||o||||¯|¿|Ï|ß|ï|ÿ|

|Format:<br>octet nr<br>field names<br>encoding<br>Unit:<br>Resol.:|Col2|8 bit: A<br>8<br>1<br>Character<br>A A A A A A A A<br>None<br>(not applicable)|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Name:|Range:|Encoding:|PDT:|Use:|
|4.001|DPT_Char_ASCII|DPT_Char_ASCII|[0...127]|See below. The most<br>significant bit shall<br>always be 0.|PDT_GENERIC_01<br>(alt: PDT_UNSIGNED_CHAR)|<br>G|
|4.001|DPT_Char_ASCII|DPT_Char_ASCII|APPLICATIONS: <br>TEXT, SINGLE CHARACTERS, ASCII|APPLICATIONS: <br>TEXT, SINGLE CHARACTERS, ASCII|APPLICATIONS: <br>TEXT, SINGLE CHARACTERS, ASCII|APPLICATIONS: <br>TEXT, SINGLE CHARACTERS, ASCII|
|4.002|DPT_Char_8859_1|DPT_Char_8859_1|[0...255]|See below.|PDTUNSIGNEDCHAR|G|
|4.002|DPT_Char_8859_1|DPT_Char_8859_1|__<br>APPLICATIONS: <br>TEXT, SINGLE CHARACTERS, ISI 8859-1|__<br>APPLICATIONS: <br>TEXT, SINGLE CHARACTERS, ISI 8859-1|__<br>APPLICATIONS: <br>TEXT, SINGLE CHARACTERS, ISI 8859-1|__<br>APPLICATIONS: <br>TEXT, SINGLE CHARACTERS, ISI 8859-1|
|Encoding:|Encoding:|Encoding:|Encoding:|Encoding:|Encoding:|Encoding:|
|4.001<br>4.002|DPT_Char_ASCII<br>DPT_Char_8859_1|DPT_Char_ASCII<br>DPT_Char_8859_1|AAAA<br>AAAA LSN = Least Significant Nibble<br>MSN<br>LSN<br>MSN = Most Significant Nibble<br>MSN<br>0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>A <br>B <br>C <br>D <br>E <br>F <br>LSN<br>0 <br>NUL DLE<br>0 <br>@ <br>P <br>` <br>p <br>° <br>À <br>Ð <br>à <br>ð <br> <br>1 <br>SOH DC1 <br>! <br>1 <br>A <br>Q <br>a <br>q <br>¡ <br>± <br>Á <br>Ñ <br>á <br>ñ <br>2 <br>STX DC2<br>" <br>2 <br>B <br>R <br>b <br>r <br>¢ <br>² <br>Â <br>Ò <br>â <br>ò <br>3 <br>ETX DC3 # <br>3 <br>C <br>S <br>c <br>s <br>£ <br>³ <br>Ã <br>Ó <br>ã <br>ó <br>4 <br>EOT DC4 $ <br>4 <br>D <br>T <br>d <br>t <br>¤ <br>´ <br>Ä <br>Ô <br>ä <br>ô <br>5 <br>ENQNAK% <br>5 <br>E <br>U <br>e <br>u <br>¥ <br>µ <br>Å <br>Õ <br>å <br>õ <br>6 <br>ACK SYN& <br>6 <br>F <br>V <br>f <br>v <br>¦ <br>¶ <br>Æ <br>Ö <br>æ <br>ö <br>7 <br>BEL ETB<br>' <br>7 <br>G <br>W <br>g <br>w <br>§ <br>· <br>Ç <br>× <br>ç <br>÷ <br>8 <br>BS CAN( <br>8 <br>H <br>X <br>h <br>x <br>¨ <br>¸ <br>È <br>Ø <br>è <br>ø <br>9 <br>HT EM<br>) <br>9 <br>I <br>Y <br>i <br>y <br>© <br>¹ <br>É <br>Ù <br>é <br>ù <br>A <br>LFSUB *<br>: <br>J <br>Z <br>j <br>z <br>ª <br>º <br>Ê <br>Ú <br>ê <br>ú <br>B <br>VT ESC +<br>; <br>K <br>[ <br>k <br>{ <br>« <br>» <br>Ë <br>Û <br>ë <br>û <br>C <br>FF FS <br>, <br>< <br>L <br>\ <br>l <br>| <br>¬ <br>¼ <br>Ì <br>Ü <br>ì <br>ü <br>D <br>CR GS <br>- <br>= <br>M <br>] <br>m <br>} <br>­ <br>½ <br>Í <br>Ý <br>í <br>ý <br>E <br>SO RS<br>. <br>> <br>N <br>^ <br>n <br>~ <br>® <br>¾ <br>Î <br>Þ <br>î <br>þ <br>F <br>SI <br>US <br>/ <br>? <br>O <br>_ <br>o <br>¯ <br>¿ <br>Ï <br>ß <br>ï <br>ÿ|AAAA<br>AAAA LSN = Least Significant Nibble<br>MSN<br>LSN<br>MSN = Most Significant Nibble<br>MSN<br>0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>A <br>B <br>C <br>D <br>E <br>F <br>LSN<br>0 <br>NUL DLE<br>0 <br>@ <br>P <br>` <br>p <br>° <br>À <br>Ð <br>à <br>ð <br> <br>1 <br>SOH DC1 <br>! <br>1 <br>A <br>Q <br>a <br>q <br>¡ <br>± <br>Á <br>Ñ <br>á <br>ñ <br>2 <br>STX DC2<br>" <br>2 <br>B <br>R <br>b <br>r <br>¢ <br>² <br>Â <br>Ò <br>â <br>ò <br>3 <br>ETX DC3 # <br>3 <br>C <br>S <br>c <br>s <br>£ <br>³ <br>Ã <br>Ó <br>ã <br>ó <br>4 <br>EOT DC4 $ <br>4 <br>D <br>T <br>d <br>t <br>¤ <br>´ <br>Ä <br>Ô <br>ä <br>ô <br>5 <br>ENQNAK% <br>5 <br>E <br>U <br>e <br>u <br>¥ <br>µ <br>Å <br>Õ <br>å <br>õ <br>6 <br>ACK SYN& <br>6 <br>F <br>V <br>f <br>v <br>¦ <br>¶ <br>Æ <br>Ö <br>æ <br>ö <br>7 <br>BEL ETB<br>' <br>7 <br>G <br>W <br>g <br>w <br>§ <br>· <br>Ç <br>× <br>ç <br>÷ <br>8 <br>BS CAN( <br>8 <br>H <br>X <br>h <br>x <br>¨ <br>¸ <br>È <br>Ø <br>è <br>ø <br>9 <br>HT EM<br>) <br>9 <br>I <br>Y <br>i <br>y <br>© <br>¹ <br>É <br>Ù <br>é <br>ù <br>A <br>LFSUB *<br>: <br>J <br>Z <br>j <br>z <br>ª <br>º <br>Ê <br>Ú <br>ê <br>ú <br>B <br>VT ESC +<br>; <br>K <br>[ <br>k <br>{ <br>« <br>» <br>Ë <br>Û <br>ë <br>û <br>C <br>FF FS <br>, <br>< <br>L <br>\ <br>l <br>| <br>¬ <br>¼ <br>Ì <br>Ü <br>ì <br>ü <br>D <br>CR GS <br>- <br>= <br>M <br>] <br>m <br>} <br>­ <br>½ <br>Í <br>Ý <br>í <br>ý <br>E <br>SO RS<br>. <br>> <br>N <br>^ <br>n <br>~ <br>® <br>¾ <br>Î <br>Þ <br>î <br>þ <br>F <br>SI <br>US <br>/ <br>? <br>O <br>_ <br>o <br>¯ <br>¿ <br>Ï <br>ß <br>ï <br>ÿ|AAAA<br>AAAA LSN = Least Significant Nibble<br>MSN<br>LSN<br>MSN = Most Significant Nibble<br>MSN<br>0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>A <br>B <br>C <br>D <br>E <br>F <br>LSN<br>0 <br>NUL DLE<br>0 <br>@ <br>P <br>` <br>p <br>° <br>À <br>Ð <br>à <br>ð <br> <br>1 <br>SOH DC1 <br>! <br>1 <br>A <br>Q <br>a <br>q <br>¡ <br>± <br>Á <br>Ñ <br>á <br>ñ <br>2 <br>STX DC2<br>" <br>2 <br>B <br>R <br>b <br>r <br>¢ <br>² <br>Â <br>Ò <br>â <br>ò <br>3 <br>ETX DC3 # <br>3 <br>C <br>S <br>c <br>s <br>£ <br>³ <br>Ã <br>Ó <br>ã <br>ó <br>4 <br>EOT DC4 $ <br>4 <br>D <br>T <br>d <br>t <br>¤ <br>´ <br>Ä <br>Ô <br>ä <br>ô <br>5 <br>ENQNAK% <br>5 <br>E <br>U <br>e <br>u <br>¥ <br>µ <br>Å <br>Õ <br>å <br>õ <br>6 <br>ACK SYN& <br>6 <br>F <br>V <br>f <br>v <br>¦ <br>¶ <br>Æ <br>Ö <br>æ <br>ö <br>7 <br>BEL ETB<br>' <br>7 <br>G <br>W <br>g <br>w <br>§ <br>· <br>Ç <br>× <br>ç <br>÷ <br>8 <br>BS CAN( <br>8 <br>H <br>X <br>h <br>x <br>¨ <br>¸ <br>È <br>Ø <br>è <br>ø <br>9 <br>HT EM<br>) <br>9 <br>I <br>Y <br>i <br>y <br>© <br>¹ <br>É <br>Ù <br>é <br>ù <br>A <br>LFSUB *<br>: <br>J <br>Z <br>j <br>z <br>ª <br>º <br>Ê <br>Ú <br>ê <br>ú <br>B <br>VT ESC +<br>; <br>K <br>[ <br>k <br>{ <br>« <br>» <br>Ë <br>Û <br>ë <br>û <br>C <br>FF FS <br>, <br>< <br>L <br>\ <br>l <br>| <br>¬ <br>¼ <br>Ì <br>Ü <br>ì <br>ü <br>D <br>CR GS <br>- <br>= <br>M <br>] <br>m <br>} <br>­ <br>½ <br>Í <br>Ý <br>í <br>ý <br>E <br>SO RS<br>. <br>> <br>N <br>^ <br>n <br>~ <br>® <br>¾ <br>Î <br>Þ <br>î <br>þ <br>F <br>SI <br>US <br>/ <br>? <br>O <br>_ <br>o <br>¯ <br>¿ <br>Ï <br>ß <br>ï <br>ÿ|AAAA<br>AAAA LSN = Least Significant Nibble<br>MSN<br>LSN<br>MSN = Most Significant Nibble<br>MSN<br>0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>A <br>B <br>C <br>D <br>E <br>F <br>LSN<br>0 <br>NUL DLE<br>0 <br>@ <br>P <br>` <br>p <br>° <br>À <br>Ð <br>à <br>ð <br> <br>1 <br>SOH DC1 <br>! <br>1 <br>A <br>Q <br>a <br>q <br>¡ <br>± <br>Á <br>Ñ <br>á <br>ñ <br>2 <br>STX DC2<br>" <br>2 <br>B <br>R <br>b <br>r <br>¢ <br>² <br>Â <br>Ò <br>â <br>ò <br>3 <br>ETX DC3 # <br>3 <br>C <br>S <br>c <br>s <br>£ <br>³ <br>Ã <br>Ó <br>ã <br>ó <br>4 <br>EOT DC4 $ <br>4 <br>D <br>T <br>d <br>t <br>¤ <br>´ <br>Ä <br>Ô <br>ä <br>ô <br>5 <br>ENQNAK% <br>5 <br>E <br>U <br>e <br>u <br>¥ <br>µ <br>Å <br>Õ <br>å <br>õ <br>6 <br>ACK SYN& <br>6 <br>F <br>V <br>f <br>v <br>¦ <br>¶ <br>Æ <br>Ö <br>æ <br>ö <br>7 <br>BEL ETB<br>' <br>7 <br>G <br>W <br>g <br>w <br>§ <br>· <br>Ç <br>× <br>ç <br>÷ <br>8 <br>BS CAN( <br>8 <br>H <br>X <br>h <br>x <br>¨ <br>¸ <br>È <br>Ø <br>è <br>ø <br>9 <br>HT EM<br>) <br>9 <br>I <br>Y <br>i <br>y <br>© <br>¹ <br>É <br>Ù <br>é <br>ù <br>A <br>LFSUB *<br>: <br>J <br>Z <br>j <br>z <br>ª <br>º <br>Ê <br>Ú <br>ê <br>ú <br>B <br>VT ESC +<br>; <br>K <br>[ <br>k <br>{ <br>« <br>» <br>Ë <br>Û <br>ë <br>û <br>C <br>FF FS <br>, <br>< <br>L <br>\ <br>l <br>| <br>¬ <br>¼ <br>Ì <br>Ü <br>ì <br>ü <br>D <br>CR GS <br>- <br>= <br>M <br>] <br>m <br>} <br>­ <br>½ <br>Í <br>Ý <br>í <br>ý <br>E <br>SO RS<br>. <br>> <br>N <br>^ <br>n <br>~ <br>® <br>¾ <br>Î <br>Þ <br>î <br>þ <br>F <br>SI <br>US <br>/ <br>? <br>O <br>_ <br>o <br>¯ <br>¿ <br>Ï <br>ß <br>ï <br>ÿ|


-----

#### 3.5 Datapoint Types “8-Bit Unsigned Value”

##### 3.5.1 Scaled values

Format: 8 bit: U8

octet nr 1

field names Unsigned

Value

encoding UUUUUUUU

Encoding: binary encoded

msb lsb
U U U U U U U U
0 0 0 0 0 0 0 0 = range min. /off
0 0 0 0 0 0 0 1 = value “low”

1 1 1 1 1 1 1 1 = range max.

Range: U = [0…255]

**Datapoint Types**

ID: Name: Range: Unit: Resol.: PDT:

5.001 DPT_Scaling [0…100] % ≈ 0,4 % PDT_SCALING G
(alt.: PDT_UNISIGNED_CHAR)

5.003 DPT_Angle [0…360] ° ≈ 1,4° PDT_UNSIGNED_CHAR G

5.004 DPT_Percent_U8[ 3)] [0…255] % 1 % PDT_UNSIGNED_CHAR FB

CONDITIONS: NOTE 4 Differences between DPT_Scaling (5.001) and
DPT_Percent_U8 (5.004)

**Encoded Value**

**Datapoint** **Resolution**

**Type** **50 %** **100 %** **255 %**

5.001 80h FFh Out of ≈ 0,4 %
encodable
range.

5.004 32h 64h FFh 1 %

APPLICATIONS: MECHANICAL, VALVE POSITION

5.005 DPT_DecimalFactor ratio PDT_UNSIGNED_CHAR G

3) This DPT was previously named “DPT_RelPos_Valve”.

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|
|0|0|0|0|0|0|0|0|
|0<br>|0|0|0|0<br>|0|0|1<br>|
|…||||…|||…|
|1|1|1|1|1|1|1|1|

|Datapoint<br>Type|Encoded Value|Col3|Col4|Resolution|
|---|---|---|---|---|
|**Datapoint**<br>**Type**|**50 %**|**100 %**|**255 %**|**255 %**|
|5.001|80h|FFh|Out of<br>encodable<br>range.|≈ 0,4 %|
|5.004|32h|64h|FFh|1 %|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:|Col2|8 bit: U<br>8<br>1<br>Unsigned<br>Value<br>UUUUUUUU<br>binary encoded<br>msb lsb<br>U U U U U U U U<br>0 0 0 0 0 0 0 0 = range min. /off<br>0 0 0 0 0 0 0 1 = value “low”<br>… … …<br>1 1 1 1 1 1 1 1 = range max.<br>U = [0…255]|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Name:|Range:|Unit:|Resol.:|PDT:|Use:|
|5.001|DPT_Scaling|DPT_Scaling|[0…100]|%|≈ 0,4 %|PDT_SCALING<br>(alt.: PDT_UNISIGNED_CHAR)|G|
|5.003|DPT_Angle|DPT_Angle|[0…360]|°|≈ 1,4°|<br>PDT_UNSIGNED_CHAR|G|
|<br>5.004|<br> DPT_Percent_U8 3)|<br> DPT_Percent_U8 3)|[0…255]|%|1 %|<br>PDT_UNSIGNED_CHAR|FB|
||||<br>CONDITIONS: <br>NOTE 4 Differences between DPT_Scaling (5.001) and<br>DPT_Percent_U8 (5.004) <br>**Datapoint**<br>**Type**<br>**Encoded Value**<br>**Resolution**<br>**50 %**<br>**100 %**<br>**255 %**<br>5.001<br>80h<br>FFh<br>Out of<br>encodable<br>range.<br>≈ 0,4 %<br>5.004<br>32h<br>64h<br>FFh<br>1 %<br>APPLICATIONS: MECHANICAL, VALVE POSITION|<br>CONDITIONS: <br>NOTE 4 Differences between DPT_Scaling (5.001) and<br>DPT_Percent_U8 (5.004) <br>**Datapoint**<br>**Type**<br>**Encoded Value**<br>**Resolution**<br>**50 %**<br>**100 %**<br>**255 %**<br>5.001<br>80h<br>FFh<br>Out of<br>encodable<br>range.<br>≈ 0,4 %<br>5.004<br>32h<br>64h<br>FFh<br>1 %<br>APPLICATIONS: MECHANICAL, VALVE POSITION|<br>CONDITIONS: <br>NOTE 4 Differences between DPT_Scaling (5.001) and<br>DPT_Percent_U8 (5.004) <br>**Datapoint**<br>**Type**<br>**Encoded Value**<br>**Resolution**<br>**50 %**<br>**100 %**<br>**255 %**<br>5.001<br>80h<br>FFh<br>Out of<br>encodable<br>range.<br>≈ 0,4 %<br>5.004<br>32h<br>64h<br>FFh<br>1 %<br>APPLICATIONS: MECHANICAL, VALVE POSITION|<br>CONDITIONS: <br>NOTE 4 Differences between DPT_Scaling (5.001) and<br>DPT_Percent_U8 (5.004) <br>**Datapoint**<br>**Type**<br>**Encoded Value**<br>**Resolution**<br>**50 %**<br>**100 %**<br>**255 %**<br>5.001<br>80h<br>FFh<br>Out of<br>encodable<br>range.<br>≈ 0,4 %<br>5.004<br>32h<br>64h<br>FFh<br>1 %<br>APPLICATIONS: MECHANICAL, VALVE POSITION|<br>CONDITIONS: <br>NOTE 4 Differences between DPT_Scaling (5.001) and<br>DPT_Percent_U8 (5.004) <br>**Datapoint**<br>**Type**<br>**Encoded Value**<br>**Resolution**<br>**50 %**<br>**100 %**<br>**255 %**<br>5.001<br>80h<br>FFh<br>Out of<br>encodable<br>range.<br>≈ 0,4 %<br>5.004<br>32h<br>64h<br>FFh<br>1 %<br>APPLICATIONS: MECHANICAL, VALVE POSITION|
|5.005|DPT_DecimalFactor|DPT_DecimalFactor||ratio||PDT_UNSIGNED_CHAR|G|


-----

##### 3.5.2 Non-scaled values

###### 3.5.2.1 DPT_Value_1_Ucount

Format: 8 bit: U8

octet nr 1

field names Unsigned

Value

encoding UUUUUUUU

Encoding: binary encoded

Range: UnsignedValue = [0…255]

PDT: PDT_UNSIGNED_CHAR

**Datapoint Types**

ID: Name: Range: Unit: Resol.: Use:

5.010 DPT_Value_1_Ucount [0…255] counter pulses 1 counter pulse G

APPLICATIONS: THIS DPT SHALL BE USE FOR ALL KINDS OF COUNTING. SEE GENERAL REQUIREMENT 01.
THIS DPT SHALL NOT BE USED TO CLASSIFY BIT FIELDS OR ENUMERATIONS.

###### 3.5.2.2 DPT for tariff information

Format: 8 bit: U8

octet nr. 1

field names Unsigned
Value

encoding U U U U U U U U

Encoding: 0: no tariff available
1 to 254: current or desired value
255: reserved; shall not be used (This value shall not be transmitted. On reception,
the message with this value shall be ignored.)

Range:: UnsignedValue = [0 … 254]

Unit: none

Resol.: (not applicable)

PDT: PDT_UNSIGNED_CHAR

**Datapoint Types**

ID: Name: Use:

5.006 DPT_Tariff G

CONDITIONS: THIS DPT SHALL BE USED FOR READING AND SETTING TARIFF INFORMATION.
A LARGE NUMBER OF DIFFERENT TARIFFS ARE DEFINED AND THESE ARE SPECIFIC TO THE
COUNTRY AND EVEN TO THE SUPPLIER. THEREFORE, THE MAPPING BETWEEN A TARIFF AND

THIS DPT IS NOT STANDARDISED. FOR USABILITY AND INTERPRETABILITY OF THE TARIFF
INFORMATION BY THE END USER, THE PRODUCT DESCRIPTION SHOULD GIVE CLEAR
INFORMATION ABOUT THIS MAPPING

APPLICATIONS: METERING, TARIFF

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT:|8 bit: U<br>8<br>1<br>Unsigned<br>Value<br>UUUUUUUU<br>binary encoded<br>UnsignedValue = [0…255]<br>PDT UNSIGNED CHAR<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Resol.:|Use:|
|5.010|DPT_Value_1_Ucount|[0…255]|counter pulses|1 counter pulse|G|
|5.010|<br>APPLICATIONS: <br>THISDPT SHALL BE USE FOR ALL KINDS OF COUNTING. SEE GENERAL REQUIREMENT01.<br>THISDPT SHALL NOT BE USED TO CLASSIFY BIT FIELDS OR ENUMERATIONS.|<br>APPLICATIONS: <br>THISDPT SHALL BE USE FOR ALL KINDS OF COUNTING. SEE GENERAL REQUIREMENT01.<br>THISDPT SHALL NOT BE USED TO CLASSIFY BIT FIELDS OR ENUMERATIONS.|<br>APPLICATIONS: <br>THISDPT SHALL BE USE FOR ALL KINDS OF COUNTING. SEE GENERAL REQUIREMENT01.<br>THISDPT SHALL NOT BE USED TO CLASSIFY BIT FIELDS OR ENUMERATIONS.|<br>APPLICATIONS: <br>THISDPT SHALL BE USE FOR ALL KINDS OF COUNTING. SEE GENERAL REQUIREMENT01.<br>THISDPT SHALL NOT BE USED TO CLASSIFY BIT FIELDS OR ENUMERATIONS.|<br>APPLICATIONS: <br>THISDPT SHALL BE USE FOR ALL KINDS OF COUNTING. SEE GENERAL REQUIREMENT01.<br>THISDPT SHALL NOT BE USED TO CLASSIFY BIT FIELDS OR ENUMERATIONS.|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range::<br>Unit:<br>Resol.:<br>PDT:|8 bit: U<br>8<br>1<br>Unsigned<br>Value<br>U U U U U U U U<br>0: no tariff available<br>1 to 254: current or desired value<br>255: reserved; shall not be used (This value shall not be transmitted. On reception,<br>the message with this value shall be ignored.)<br>UnsignedValue = [0 … 254]<br>none<br>(not applicable)<br>PDT UNSIGNED CHAR<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|5.006|DPT_Tariff|G|
||<br>CONDITIONS: <br>THISDPT SHALL BE USED FOR READING AND SETTING TARIFF INFORMATION. <br>A LARGE NUMBER OF DIFFERENT TARIFFS ARE DEFINED AND THESE ARE SPECIFIC TO THE<br>COUNTRY AND EVEN TO THE SUPPLIER. THEREFORE, THE MAPPING BETWEEN A TARIFF AND<br>THISDPT IS NOT STANDARDISED. FOR USABILITY AND INTERPRETABILITY OF THE TARIFF<br>INFORMATION BY THE END USER, THE PRODUCT DESCRIPTION SHOULD GIVE CLEAR<br>INFORMATION ABOUT THIS MAPPING <br>APPLICATIONS: <br>METERING, TARIFF|<br>CONDITIONS: <br>THISDPT SHALL BE USED FOR READING AND SETTING TARIFF INFORMATION. <br>A LARGE NUMBER OF DIFFERENT TARIFFS ARE DEFINED AND THESE ARE SPECIFIC TO THE<br>COUNTRY AND EVEN TO THE SUPPLIER. THEREFORE, THE MAPPING BETWEEN A TARIFF AND<br>THISDPT IS NOT STANDARDISED. FOR USABILITY AND INTERPRETABILITY OF THE TARIFF<br>INFORMATION BY THE END USER, THE PRODUCT DESCRIPTION SHOULD GIVE CLEAR<br>INFORMATION ABOUT THIS MAPPING <br>APPLICATIONS: <br>METERING, TARIFF|


-----

#### 3.6 Datapoint Types V8

##### 3.6.1 Signed Relative Value

Format: 8 bit

octet nr 1

field names RelSigned
Value

encoding V V V V V V V V

Encoding: Two's complement notation

Range: -128 … 127

PDT: PDT_CHAR

**Datapoint Types**

ID: Name: Range:

6.001 DPT_Percent_V8 -128 % … 127 % %

6.010 DPT_Value_1_Count -128 … 127

APPLICATIONS: SEE GENERAL REQUIREMENT 01.

#### 3.7 Datapoint Type “Status with Mode” 

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT:|8 bit<br>1<br>RelSigned<br>Value<br>V V V V V V V V<br>Two's complement notation<br>-128 … 127<br>PDT CHAR<br>_|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Resolution|Use:|
|6.001|DPT_Percent_V8|-128 % … 127 %|%|1 %|G|
|6.010|<br>DPT_Value_1_Count|-128 … 127|counter pulses|1 counter pulse|G|
|6.010|<br>APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|<br>APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|<br>APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|<br>APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|<br>APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|

|a|b|c|d|e|f|Col7|Col8|
|---|---|---|---|---|---|---|---|
|B|B|B|B|B|N|N|N|

|Format:<br>octet nr<br>field<br>names<br>encoding<br>Range:<br>Unit:<br>Resol.:<br>PDT:|Col2|8 bit: B N<br>5 3<br>1<br>a b c d e f<br>B B B B B N N N<br>a, b, c, d, e = {0,1}<br>f = {001b,010b,100b}<br>none<br>(not applicable)<br>PDT GENERIC 01<br>_ _|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Encoding:|Use:|
|6.020|DPT_Status_Mode3|DPT_Status_Mode3|A,B,C,D,E:<br>0 = set<br>1 = clear<br>FFF<br>001b = mode 0 is active<br>010b = mode 1 is active<br>100b = mode 2 is active|FB|


-----

#### 3.8 Datapoint Types “2-Octet Unsigned Value”

##### 3.8.1 2-octet unsigned counter value

Format: 2 octets: U16

octet nr 2 MSB 1 LSB

field names UnsignedValue

encoding UUUUUUUU UUUUUUUU

Encoding: Binary encoded value

Range: UnsignedValue = [0…65535]

PDT PDT_UNSIGNED_INT

**Datapoint Types**

ID: Name: Range: Unit: Resol.: Use:

7.001 DPT_Value_2_Ucount [0…65 535] pulses 1 pulse G

APPLICATIONS: SEE GENERAL REQUIREMENT 01.

7.010 DPT_PropDataType Identifier Interface Object Property n.a.[ 4)] n.a.[ 5)] FB
data type. No Unit.

##### 3.8.2 Time Period

Format: 2 octets: U16

octet nr 2 MSB 1 LSB

field names TimePeriod

encoding UUUUUUUU UUUUUUUU

Encoding: Binary encoded value

Range: UnsignedValue = [0…65535]

PDT PDT_UNSIGNED_INT

**Datapoint Types**

ID: Name: Range: Unit: Resol.: Use:

7.002 DPT_TimePeriodMsec 0 ms … 6 5535 ms ms 1 ms G

7.003 DPT_TimePeriod10Msec 0 s … 655,35 s ms 10 ms G[ 6)]

7.004 DPT_TimePeriod100Msec 0 s … 6 553,5 s ms 100 ms G[ 6)]

7.005 DPT_TimePeriodSec 0 s … 65 535 s (≅ 18,2 hours) s 1 s G

7.006 DPT_TimePeriodMin 0 min … 65 535 min (≅ 45,5 days) min 1 min G[ 6)]

7.007 DPT_TimePeriodHrs 0 h … 65 535 h (≅ 7,4 years) h 1 h G

4) n.a. : not applicable
5) n.a. : not applicable
6) Not allowed for runtime communication. This DPT shall only be used for parameters and diagnostic data or if
specified as such in a FB specification!

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT|2 octets: U<br>16<br>2 1<br>MSB LSB<br>UnsignedValue<br>UUUUUUUU UUUUUUUU<br>Binary encoded value<br>UnsignedValue = [0…65535]<br>PDT UNSIGNED INT<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Resol.:|Use:|
|7.001|DPT_Value_2_Ucount|[0…65 535]|pulses|1 pulse|G|
|7.001|<br>APPLICATIONS: SEE GENERAL REQUIREMENT01.|<br>APPLICATIONS: SEE GENERAL REQUIREMENT01.|<br>APPLICATIONS: SEE GENERAL REQUIREMENT01.|<br>APPLICATIONS: SEE GENERAL REQUIREMENT01.|<br>APPLICATIONS: SEE GENERAL REQUIREMENT01.|
|7.010|DPT_PropDataType|Identifier Interface Object Property<br>data type. No Unit.|n.a. 4)|n.a. 5)|FB|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT|Col2|2 octets: U<br>16<br>2 1<br>MSB LSB<br>TimePeriod<br>UUUUUUUU UUUUUUUU<br>Binary encoded value<br>UnsignedValue = [0…65535]<br>PDT UNSIGNED INT<br>_ _|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Range:|Unit:|Resol.:|Use:|
|7.002|DPT_TimePeriodMsec|DPT_TimePeriodMsec|0 ms … 6 5535 ms|ms|1 ms|G|
|7.003|<br>DPT_TimePeriod10Msec|<br>DPT_TimePeriod10Msec|0 s … 655,35 s|ms|10 ms|G 6)|
|7.004|<br>DPT_TimePeriod100Msec|<br>DPT_TimePeriod100Msec|0 s … 6 553,5 s|ms|100 ms|G 6)|
|7.005|<br>DPT_TimePeriodSec|<br>DPT_TimePeriodSec|0 s … 65 535 s<br>(≅ 18,2 hours)|s|1 s|G|
|7.006|<br>DPT_TimePeriodMin|<br>DPT_TimePeriodMin|0 min … 65 535 min (≅ 45,5 days)|min|1 min|G 6)|
|7.007|<br>DPT_TimePeriodHrs|<br>DPT_TimePeriodHrs|0 h … 65 535 h<br>(≅ 7,4 years)|h|1 h|G|


-----

##### 3.8.3 Other U16 Datapoint Types

Format: 2 octets: U16

octet nr. 2MSB 1LSB

field names UnsignedValue

encoding U U U U U U U U U U U U U U U U

Encoding: See below

Range: UnsignedValue = [0 … 65 535]

Unit: See below.

Resol.: see below.

PDT: PDT_UNSIGNED_INT

**Datapoint Types**

ID: Name: Range, encoding Unit:

7.011 DPT_Length_mm 0 mm … 65 535 mm mm 1 mm

7.012 DPT_UElCurrentmA 0 = no bus power none
supply
functionality
available

1 … 65 535 = value binary mA 1 mA
encoded

7.013 DPT_Brightness 0 lux … 65 535 lux lux 1 lux
value binary encoded

7) DPT_Brightness shall solely be used for the encoding of the approved E-Mode parameters.
For run-time communication, DPT_Value_Lux (F16) shall be used.

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|2 octets: U<br>16<br>2 1<br>MSB LSB<br>UnsignedValue<br>U U U U U U U U U U U U U U U U<br>See below<br>UnsignedValue = [0 … 65 535]<br>See below.<br>see below.<br>PDT UNSIGNED INT<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range, encoding|Unit:|Resol.:|Use:|
|7.011|DPT_Length_mm|0 mm … 65 535 mm|mm|1 mm|FB SAB|
|7.012|<br>DPT_UElCurrentmA|0 <br>= no bus power<br>supply<br>functionality<br>available|none|not applicable|FB|
|7.012|<br>DPT_UElCurrentmA|1 … 65 535 = value binary<br>encoded|mA|1 mA|1 mA|
|7.013|DPT_Brightness|0 lux … 65 535 lux<br>value binary encoded|lux|1 lux|FB 7)|


-----

#### 3.9 Datapoint Types “2-Octet Signed Value”

##### 3.9.1 2-octet signed counter value

Format: 2 octet: V16

octet nr 2 MSB 1 LSB

field names SignedValue

encoding VVVVVVVV VVVVVVVV

Encoding: Two’s complement notation

Range: SignedValue = [-32 768 … 32 767]

PDT PDT_INT

**Datapoint Types**

ID: Name: Range: Unit: Resol.:

8.001 DPT_Value_2_Count [-32 768 … 32 767][ a)] pulses 1 pulse G

APPLICATIONS: SEE GENERAL REQUIREMENT 01.

8.010 DPT_Percent_V16 -327,68 % ... 327,67 % % 0,01 % G

a) Only for DPT_Value_2_Ucount, the value 7FFFh can be used to denote invalid data.
b) For DPT_Percent_V16, the value 7FFFh shall be used to denote invalid data.

##### 3.9.2 Delta Time

Format: 2 octet: V16

octet nr 2 MSB 1 LSB

field names DeltaTime

encoding VVVVVVVV VVVVVVVV

Encoding: Two’s complement notation

Range: SignedValue = [-32 768 … 32 767]

PDT PDT_INT

**Datapoint Types**

ID: Name: Range: Unit: Resol.:

8.002 DPT_DeltaTimeMsec -32 768 ms … 32 767 ms ms 1 ms G

8.003 DPT_DeltaTime10Msec -327,68 s … 327,67 s ms 10 ms G

8.004 DPT_DeltaTime100Msec -3 276,8 s … 3 276,7 s ms 100 ms G

8.005 DPT_DeltaTimeSec -32 768 s … 32 767 s (≅ 9,1 h) s 1 s G

8.006 DPT_DeltaTimeMin -32 768 min … 32 767 min (≅ 22,7 d) min 1 min G

8.007 DPT_DeltaTimeHrs -32 768 h … 32 767 h (≅ 3,7 y) h 1 h G

a) Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic data or if
specified as such in a FB specification.

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT|Col2|2 octet: V<br>16<br>2 1<br>MSB LSB<br>SignedValue<br>VVVVVVVV VVVVVVVV<br>Two’s complement notation<br>SignedValue = [-32 768 … 32 767]<br>PDT INT<br>_|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Range:|Unit:|Resol.:|Use:|
|8.001|DPT_Value_2_Count|DPT_Value_2_Count|[-32 768 … 32 767] a)|pulses|1 pulse|G|
|8.001|APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|APPLICATIONS: <br>SEE GENERAL REQUIREMENT01.|
|8.010|DPT_Percent_V16|DPT_Percent_V16|-327,68 % ... 327,67 %|%|0,01 %|G|
|<br>a) <br>Only for DPT_Value_2_Ucount, the value 7FFFh_can_ be used to denote invalid data.<br>b) For DPTPercentV16, the value 7FFFh_shall_ be used to denote invalid data.|<br>a) <br>Only for DPT_Value_2_Ucount, the value 7FFFh_can_ be used to denote invalid data.<br>b) For DPTPercentV16, the value 7FFFh_shall_ be used to denote invalid data.|<br>a) <br>Only for DPT_Value_2_Ucount, the value 7FFFh_can_ be used to denote invalid data.<br>b) For DPTPercentV16, the value 7FFFh_shall_ be used to denote invalid data.|<br>a) <br>Only for DPT_Value_2_Ucount, the value 7FFFh_can_ be used to denote invalid data.<br>b) For DPTPercentV16, the value 7FFFh_shall_ be used to denote invalid data.|<br>a) <br>Only for DPT_Value_2_Ucount, the value 7FFFh_can_ be used to denote invalid data.<br>b) For DPTPercentV16, the value 7FFFh_shall_ be used to denote invalid data.|<br>a) <br>Only for DPT_Value_2_Ucount, the value 7FFFh_can_ be used to denote invalid data.<br>b) For DPTPercentV16, the value 7FFFh_shall_ be used to denote invalid data.|<br>a) <br>Only for DPT_Value_2_Ucount, the value 7FFFh_can_ be used to denote invalid data.<br>b) For DPTPercentV16, the value 7FFFh_shall_ be used to denote invalid data.|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT|2 octet: V<br>16<br>2 1<br>MSB LSB<br>DeltaTime<br>VVVVVVVV VVVVVVVV<br>Two’s complement notation<br>SignedValue = [-32 768 … 32 767]<br>PDT INT<br>_|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Resol.:|Use:|
|8.002|DPT_DeltaTimeMsec|-32 768 ms … 32 767 ms|ms|1 ms|G|
|8.003|<br>DPT_DeltaTime10Msec|-327,68 s … 327,67 s|ms|10 ms|G a)|
|8.004|<br>DPT_DeltaTime100Msec|-3 276,8 s … 3 276,7 s|ms|100 ms|G a)|
|8.005|<br>DPT_DeltaTimeSec|-32 768 s … 32 767 s<br>(≅ 9,1 h)|s|1 s|G|
|8.006|<br>DPT_DeltaTimeMin|-32 768 min … 32 767 min (≅ 22,7 d)|min|1 min|G a)|
|8.007|<br>DPT_DeltaTimeHrs|-32 768 h … 32 767 h<br>(≅ 3,7 y)|h|1 h|G|
|<br>a) Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic data or if<br>specified as such in a FB specification.|<br>a) Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic data or if<br>specified as such in a FB specification.|<br>a) Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic data or if<br>specified as such in a FB specification.|<br>a) Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic data or if<br>specified as such in a FB specification.|<br>a) Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic data or if<br>specified as such in a FB specification.|<br>a) Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic data or if<br>specified as such in a FB specification.|


-----

##### 3.9.3 Other V16 Datapoint Types

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|2 octets: V<br>16<br>2 1<br>MSB LSB<br>SignedValue<br>V V V V V V V V V V V V V V V V<br>Two’s complement notation.<br>SignedValue = [-32 768 … 32 767]<br>See below<br>See below<br>PDT INT<br>_|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Resol.:|Use:|
|8.011|DPT_Rotation_Angle|[-32 768°… 32 767°]|°|1°|FB SAB|
||<br>APPLICATIONS: SHUTTERS, BLINDS: ABSOLUTE CONTROL, SLATS POSITIONING IN DEGREES|<br>APPLICATIONS: SHUTTERS, BLINDS: ABSOLUTE CONTROL, SLATS POSITIONING IN DEGREES|<br>APPLICATIONS: SHUTTERS, BLINDS: ABSOLUTE CONTROL, SLATS POSITIONING IN DEGREES|<br>APPLICATIONS: SHUTTERS, BLINDS: ABSOLUTE CONTROL, SLATS POSITIONING IN DEGREES|<br>APPLICATIONS: SHUTTERS, BLINDS: ABSOLUTE CONTROL, SLATS POSITIONING IN DEGREES|
|8.012|DPT_Length_m|[-32 768°… 32 767°]|m|1 m|FB|
||<br>APPLICATIONS: THISDPT SHALL BE USED TO ENCODE INFORMATION ABOUT THE ALTITUDE ABOVE SEA LEVEL. <br>SINCE ALTITUDE MAY BE NEGATIVE, SIGNED VALUE TYPE IS NEEDED. <br>THISDPT SHALL ONLY BE USED FOR PARAMETERS IN THEFBS FOR WHICH THIS IS SPECIFIED IN<br>[04].<br>EXAMPLE 4<br>In [07], this DPT is used in the FBs Outside Air Quality Sensor (OAQS, 330),<br>Room Air Quality Sensor (RAQS, 331), Supply Air Quality Sensor (SAQS, 332) and Return Air<br>Quality Sensor (RNAQS, 333).|<br>APPLICATIONS: THISDPT SHALL BE USED TO ENCODE INFORMATION ABOUT THE ALTITUDE ABOVE SEA LEVEL. <br>SINCE ALTITUDE MAY BE NEGATIVE, SIGNED VALUE TYPE IS NEEDED. <br>THISDPT SHALL ONLY BE USED FOR PARAMETERS IN THEFBS FOR WHICH THIS IS SPECIFIED IN<br>[04].<br>EXAMPLE 4<br>In [07], this DPT is used in the FBs Outside Air Quality Sensor (OAQS, 330),<br>Room Air Quality Sensor (RAQS, 331), Supply Air Quality Sensor (SAQS, 332) and Return Air<br>Quality Sensor (RNAQS, 333).|<br>APPLICATIONS: THISDPT SHALL BE USED TO ENCODE INFORMATION ABOUT THE ALTITUDE ABOVE SEA LEVEL. <br>SINCE ALTITUDE MAY BE NEGATIVE, SIGNED VALUE TYPE IS NEEDED. <br>THISDPT SHALL ONLY BE USED FOR PARAMETERS IN THEFBS FOR WHICH THIS IS SPECIFIED IN<br>[04].<br>EXAMPLE 4<br>In [07], this DPT is used in the FBs Outside Air Quality Sensor (OAQS, 330),<br>Room Air Quality Sensor (RAQS, 331), Supply Air Quality Sensor (SAQS, 332) and Return Air<br>Quality Sensor (RNAQS, 333).|<br>APPLICATIONS: THISDPT SHALL BE USED TO ENCODE INFORMATION ABOUT THE ALTITUDE ABOVE SEA LEVEL. <br>SINCE ALTITUDE MAY BE NEGATIVE, SIGNED VALUE TYPE IS NEEDED. <br>THISDPT SHALL ONLY BE USED FOR PARAMETERS IN THEFBS FOR WHICH THIS IS SPECIFIED IN<br>[04].<br>EXAMPLE 4<br>In [07], this DPT is used in the FBs Outside Air Quality Sensor (OAQS, 330),<br>Room Air Quality Sensor (RAQS, 331), Supply Air Quality Sensor (SAQS, 332) and Return Air<br>Quality Sensor (RNAQS, 333).|<br>APPLICATIONS: THISDPT SHALL BE USED TO ENCODE INFORMATION ABOUT THE ALTITUDE ABOVE SEA LEVEL. <br>SINCE ALTITUDE MAY BE NEGATIVE, SIGNED VALUE TYPE IS NEEDED. <br>THISDPT SHALL ONLY BE USED FOR PARAMETERS IN THEFBS FOR WHICH THIS IS SPECIFIED IN<br>[04].<br>EXAMPLE 4<br>In [07], this DPT is used in the FBs Outside Air Quality Sensor (OAQS, 330),<br>Room Air Quality Sensor (RAQS, 331), Supply Air Quality Sensor (SAQS, 332) and Return Air<br>Quality Sensor (RNAQS, 333).|


-----

#### 3.10 Datapoint Types “2-Octet Float Value”

Format: 2 octets: F16

octet nr 2 MSB 1 LSB

field names FloatValue

encoding ME E E E MMM MMMM MMMM

Encoding:

FloatValue = (0,01*M)*2[(E)]

E = [0 … 15]
M = [-2 048 … 2 047], two’s complement notation
For all Datapoint Types 9.xxx, the encoded value 7FFFh shall always be used to denote invalid
data.
Range: [-671 088,64 … 670 433,28]

PDT: PDT_KNX_FLOAT

**Datapoint Types**

ID: Name: Range: Unit: Resol.: Use:

9.001 DPT_Value_Temp -273 °C … 670 433,28°C °C[ 8)] 0,01 °C G

9.002 DPT_Value_Tempd -671 088,64 K … 670 433,28 K K 0,01 K G

9.003 DPT_Value_Tempa -671 088,64 K/h … 670 433,28 K/h K/h 0,01 K/h G

9.004 DPT_Value_Lux 0 Lux … 670 433,28 Lux Lux 0,01 Lux G

9.005 DPT_Value_Wsp 0 m/s … 670 433,28 m/s m/s 0,01 m/s G

APPLICATIONS: ENVIRONMENTAL, WIND, WIND SPEED

SEE ALSO: 9.028 DPT_VALUE_WSP_KMH
20.014 DPT_BEAUFORT_WIND_FORCE_SCALE

9.006 DPT_Value_Pres 0 Pa … 670 433,28 Pa Pa 0,01 Pa G

9.007 DPT_Value_Humidity[ 9)] 0 % … 670 433,28 % % 0,01 % G

9.008 DPT_Value_AirQuality 0 ppm … 670 433,28 ppm ppm 0,01 ppm G

APPLICATIONS: ENVIRONMENTAL, AIR QUALITY, OZONE, CO2,

9.009 DPT_Value_AirFlow -671 088,64 m[3]/h … 670 433,28 m[3]/h m[3]/h 0,01 m[3]/h G

NOTE 5 For higher precision, DPT_Value_Volume_Flux 14.077 (F32) shall be
used.

9.010 DPT_Value_Time1 -671 088,64 s … 670 433,28 s s 0,01 s FB

9.011 DPT_Value_Time2 -671 088,64 ms … 670 433,28 ms ms 0,01 ms G

9.020 DPT_Value_Volt -671 088,64 mV… 670 433,28 mV mV 0,01 mV G

9.021 DPT_Value_Curr -671 088,64 mA … 670 433,28 mA mA 0,01 mA G

9.022 DPT_PowerDensity -671 088,64 W/m[2] … 670 W/m[2] 0,01 W/m[2] FB
433,28 W/m[2]

9.023 DPT_KelvinPerPercent -671 088,64 K/% … 670 433,28 K/% K/% 0,01 K/% FB

8) KNX Association strongly recommends full implementation of this Datapoint Type in objects with actuator
functionality (i.e. receiving values from the bus). However, it is allowed for objects sending on or receiving
temperature values from the bus to only support this Datapoint Type with a fixed exponent of 3. In this case, an
appropriate warning shall be made to the installer in the manufacturer’s product instruction sheet.
9) This DPT is only used in case of universal I/O modules which can provide any sensor value in 2 octet float
format.

|M|E|E|E|E|M|M|M|
|---|---|---|---|---|---|---|---|

|M|M|M|M|M|M|M|M|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT:|Col2|2 octets: F<br>16<br>2 1<br>MSB LSB<br>FloatValue<br>ME E E E MMM MMMM MMMM<br>(E)<br>FloatValue = (0,01*M)*2<br>E = [0 … 15]<br>M = [-2 048 … 2 047], two’s complement notation<br>For all Datapoint Types 9.xxx, the encoded value 7FFFh shall always be used to denote invalid<br>data.<br>[-671 088,64 … 670 433,28]<br>PDT KNX FLOAT<br>_ _|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Range:|Unit:|Resol.:|Use:|
|9.001|DPT_Value_Temp|DPT_Value_Temp|-273 °C … 670 433,28°C|°C 8)|0,01 °C|G|
|<br>9.002|<br> DPT_Value_Tempd|<br> DPT_Value_Tempd|-671 088,64 K … 670 433,28 K|K|0,01 K|G|
|<br>9.003|<br> DPT_Value_Tempa|<br> DPT_Value_Tempa|-671 088,64 K/h … 670 433,28 K/h|K/h|0,01 K/h|G|
|<br>9.004|<br> DPT_Value_Lux|<br> DPT_Value_Lux|0 Lux … 670 433,28 Lux|Lux|0,01 Lux|G|
|<br>9.005|<br> DPT_Value_Wsp|<br> DPT_Value_Wsp|0 m/s … 670 433,28 m/s|m/s|0,01 m/s|G|
|<br>9.005|<br> DPT_Value_Wsp|<br> DPT_Value_Wsp|APPLICATIONS: <br>ENVIRONMENTAL, WIND, WIND SPEED|APPLICATIONS: <br>ENVIRONMENTAL, WIND, WIND SPEED|APPLICATIONS: <br>ENVIRONMENTAL, WIND, WIND SPEED|APPLICATIONS: <br>ENVIRONMENTAL, WIND, WIND SPEED|
|<br>9.005|<br> DPT_Value_Wsp|<br> DPT_Value_Wsp|SEE ALSO: <br>9.028<br>DPT_VALUE_WSP_KMH <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|SEE ALSO: <br>9.028<br>DPT_VALUE_WSP_KMH <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|SEE ALSO: <br>9.028<br>DPT_VALUE_WSP_KMH <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|SEE ALSO: <br>9.028<br>DPT_VALUE_WSP_KMH <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|
|9.006|DPT_Value_Pres|DPT_Value_Pres|<br>0 Pa … 670 433,28  Pa|Pa|0,01 Pa|G|
|<br>9.007|<br> DPT_Value_Humidity 9)|<br> DPT_Value_Humidity 9)|0 % … 670 433,28  %|%|0,01 %|G|
|<br>9.008|<br> DPT_Value_AirQuality|<br> DPT_Value_AirQuality|0 ppm … 670 433,28  ppm|ppm|0,01 ppm|G|
|<br>9.008|<br> DPT_Value_AirQuality|<br> DPT_Value_AirQuality|APPLICATIONS: <br>ENVIRONMENTAL, AIR QUALITY, OZONE, CO2,|APPLICATIONS: <br>ENVIRONMENTAL, AIR QUALITY, OZONE, CO2,|APPLICATIONS: <br>ENVIRONMENTAL, AIR QUALITY, OZONE, CO2,|APPLICATIONS: <br>ENVIRONMENTAL, AIR QUALITY, OZONE, CO2,|
|9.009|DPT_Value_AirFlow|DPT_Value_AirFlow|-671 088,64 m3/h … 670 433,28  m3/h|m3/h|0,01 m3/h|G|
|9.009|DPT_Value_AirFlow|DPT_Value_AirFlow|NOTE 5<br>For higher precision, DPT_Value_Volume_Flux 14.077 (F32) shall be<br>used.|NOTE 5<br>For higher precision, DPT_Value_Volume_Flux 14.077 (F32) shall be<br>used.|NOTE 5<br>For higher precision, DPT_Value_Volume_Flux 14.077 (F32) shall be<br>used.|NOTE 5<br>For higher precision, DPT_Value_Volume_Flux 14.077 (F32) shall be<br>used.|
|9.010|DPT_Value_Time1|DPT_Value_Time1|-671 088,64 s … 670 433,28 s|s|0,01 s|FB|
|<br>9.011|<br> DPT_Value_Time2|<br> DPT_Value_Time2|-671 088,64 ms … 670 433,28 ms|ms|0,01 ms|G|
|<br>9.020|<br> DPT_Value_Volt|<br> DPT_Value_Volt|-671 088,64 mV… 670 433,28 mV|mV|0,01 mV|G|
|<br>9.021|<br> DPT_Value_Curr|<br> DPT_Value_Curr|-671 088,64 mA … 670 433,28 mA|mA|0,01 mA|G|
|<br>9.022|<br> DPT_PowerDensity|<br> DPT_PowerDensity|-671 088,64 W/m2 … 670<br>433,28 W/m2|W/m2|0,01 W/m2|FB|
|9.023|DPT_KelvinPerPercent|DPT_KelvinPerPercent|-671 088,64 K/% … 670 433,28 K/%|K/%|0,01 K/%|FB|


-----

|ID|Name|Range|Resolution|
|---|---|---|---|
|9.024|DPT_Power|-671 088,64 kW to 670 433,28 kW<br>-671 088 640 W to 670 433,28 W|0,01 kW|
|14.056|DPT_Value_Power|± ~10-44,85 to ~1038,53|1 W|


CONDITIONS: DPT_VALUE_WSP_KMH MAY BE IMPLEMENTED ONLY AS EXTRA DP NEXT TO A DP WITH
DPT_VALUE_WSP (9.005). THIS APPLIES BOTH FOR INPUTS AS WELL AS FOR OUTPUTS. IT SHALL BE
POSSIBLE THROUGH A PARAMETER TO SELECT THE DP OR ITS FORMAT; THE DEFAULT SETTING FOR

THIS PARAMETER SHALL BE DPT_VALUE_WSP (9.005).

APPLICATIONS: ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE

SEE ALSO: 9.005 DPT_VALUE_WSP
20.014 DPT_BEAUFORT_WIND_FORCE_SCALE

9.029 DPT_Value_Absolute_Humidity 0 gm[-3] … 670 760 gm[-3] gm[-3] 0,01 gm[-3] see
below

USE: - Absolute air humidity.

          - General use.

9.030 DPT_Concentration_µgm3 0 µgm[-3] … 670 760 µgm[-3] µg 0,01 µgm[-3] see

below

USE: - Air pollution. Dispersion of fine dust particles in the air (PM10, PM2.5 and PM1).

          - Ozone concentrations.

|Datapoint Types|Col2|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|ID:|Name:|Range:|Range:|Unit:|Resol.:|Use:|
|9.024|DPT_Power|-671 088,64 kW … 670 433,28 kW|-671 088,64 kW … 670 433,28 kW|kW|0,01 kW|FB|
|9.024|<br>**NOTE 6 – DPTs for power**<br>Two DPTs are specified for encoding electrical power. The DPT shall be chosen appropriately in<br>function of the accuracy and range that shall be covered by the application.<br>**Table 1 – DPTs for power**<br>**ID**<br>**Name**<br>**Range**<br>**Resolution**<br>9.024<br>DPT_Power<br>-671 088,64 kW to 670 433,28 kW<br>-671 088 640 W to 670 433,28 W<br>0,01 kW<br>14.056<br>DPT_Value_Power<br>± ~10-44,85 to ~1038,53 <br>1 W|<br>**NOTE 6 – DPTs for power**<br>Two DPTs are specified for encoding electrical power. The DPT shall be chosen appropriately in<br>function of the accuracy and range that shall be covered by the application.<br>**Table 1 – DPTs for power**<br>**ID**<br>**Name**<br>**Range**<br>**Resolution**<br>9.024<br>DPT_Power<br>-671 088,64 kW to 670 433,28 kW<br>-671 088 640 W to 670 433,28 W<br>0,01 kW<br>14.056<br>DPT_Value_Power<br>± ~10-44,85 to ~1038,53 <br>1 W|<br>**NOTE 6 – DPTs for power**<br>Two DPTs are specified for encoding electrical power. The DPT shall be chosen appropriately in<br>function of the accuracy and range that shall be covered by the application.<br>**Table 1 – DPTs for power**<br>**ID**<br>**Name**<br>**Range**<br>**Resolution**<br>9.024<br>DPT_Power<br>-671 088,64 kW to 670 433,28 kW<br>-671 088 640 W to 670 433,28 W<br>0,01 kW<br>14.056<br>DPT_Value_Power<br>± ~10-44,85 to ~1038,53 <br>1 W|<br>**NOTE 6 – DPTs for power**<br>Two DPTs are specified for encoding electrical power. The DPT shall be chosen appropriately in<br>function of the accuracy and range that shall be covered by the application.<br>**Table 1 – DPTs for power**<br>**ID**<br>**Name**<br>**Range**<br>**Resolution**<br>9.024<br>DPT_Power<br>-671 088,64 kW to 670 433,28 kW<br>-671 088 640 W to 670 433,28 W<br>0,01 kW<br>14.056<br>DPT_Value_Power<br>± ~10-44,85 to ~1038,53 <br>1 W|<br>**NOTE 6 – DPTs for power**<br>Two DPTs are specified for encoding electrical power. The DPT shall be chosen appropriately in<br>function of the accuracy and range that shall be covered by the application.<br>**Table 1 – DPTs for power**<br>**ID**<br>**Name**<br>**Range**<br>**Resolution**<br>9.024<br>DPT_Power<br>-671 088,64 kW to 670 433,28 kW<br>-671 088 640 W to 670 433,28 W<br>0,01 kW<br>14.056<br>DPT_Value_Power<br>± ~10-44,85 to ~1038,53 <br>1 W|<br>**NOTE 6 – DPTs for power**<br>Two DPTs are specified for encoding electrical power. The DPT shall be chosen appropriately in<br>function of the accuracy and range that shall be covered by the application.<br>**Table 1 – DPTs for power**<br>**ID**<br>**Name**<br>**Range**<br>**Resolution**<br>9.024<br>DPT_Power<br>-671 088,64 kW to 670 433,28 kW<br>-671 088 640 W to 670 433,28 W<br>0,01 kW<br>14.056<br>DPT_Value_Power<br>± ~10-44,85 to ~1038,53 <br>1 W|
|9.025|DPT_Value_Volume_Flow|-671 088,64 l/h … 670 433,28 l/h|-671 088,64 l/h … 670 433,28 l/h|l/h|0,01 l/h|FB|
|<br>9.026|<br> DPT_Rain_Amount|-671 088,64 l/m2 to 670 433,28 l/m2|-671 088,64 l/m2 to 670 433,28 l/m2|l/m2|0,01 l/m2|G|
|<br>9.026|<br>APPLICATIONS: <br>ENVIRONMENTAL, RAIN, RAIN AMOUNT, PLUVIOMETER, RAIN GAUGE|<br>APPLICATIONS: <br>ENVIRONMENTAL, RAIN, RAIN AMOUNT, PLUVIOMETER, RAIN GAUGE|<br>APPLICATIONS: <br>ENVIRONMENTAL, RAIN, RAIN AMOUNT, PLUVIOMETER, RAIN GAUGE|<br>APPLICATIONS: <br>ENVIRONMENTAL, RAIN, RAIN AMOUNT, PLUVIOMETER, RAIN GAUGE|<br>APPLICATIONS: <br>ENVIRONMENTAL, RAIN, RAIN AMOUNT, PLUVIOMETER, RAIN GAUGE|<br>APPLICATIONS: <br>ENVIRONMENTAL, RAIN, RAIN AMOUNT, PLUVIOMETER, RAIN GAUGE|
|9.027|DPT_Value_Temp_F|-459,6 °F to  670 433,28 °F|-459,6 °F to  670 433,28 °F|°F|0,01 °F|G|
|9.027|<br>DPT_Value_Temp_F may be implemented only as extra DP next to a DP with DPT_Value_Temp<br>(9.001). This applies both for Inputs as well as for Outputs. It shall be possible through a<br>parameter to select the DP or its format; the default setting for this parameter shall enable<br>DPT_Value_Temp (9.001).|<br>DPT_Value_Temp_F may be implemented only as extra DP next to a DP with DPT_Value_Temp<br>(9.001). This applies both for Inputs as well as for Outputs. It shall be possible through a<br>parameter to select the DP or its format; the default setting for this parameter shall enable<br>DPT_Value_Temp (9.001).|<br>DPT_Value_Temp_F may be implemented only as extra DP next to a DP with DPT_Value_Temp<br>(9.001). This applies both for Inputs as well as for Outputs. It shall be possible through a<br>parameter to select the DP or its format; the default setting for this parameter shall enable<br>DPT_Value_Temp (9.001).|<br>DPT_Value_Temp_F may be implemented only as extra DP next to a DP with DPT_Value_Temp<br>(9.001). This applies both for Inputs as well as for Outputs. It shall be possible through a<br>parameter to select the DP or its format; the default setting for this parameter shall enable<br>DPT_Value_Temp (9.001).|<br>DPT_Value_Temp_F may be implemented only as extra DP next to a DP with DPT_Value_Temp<br>(9.001). This applies both for Inputs as well as for Outputs. It shall be possible through a<br>parameter to select the DP or its format; the default setting for this parameter shall enable<br>DPT_Value_Temp (9.001).|<br>DPT_Value_Temp_F may be implemented only as extra DP next to a DP with DPT_Value_Temp<br>(9.001). This applies both for Inputs as well as for Outputs. It shall be possible through a<br>parameter to select the DP or its format; the default setting for this parameter shall enable<br>DPT_Value_Temp (9.001).|
|9.028|<br> DPT_Value_Wsp_kmh|0 km/h … 670 433,28 km/h|0 km/h … 670 433,28 km/h|km/h|0,01 km/h|G|
|9.028|<br>CONDITIONS: <br>DPT_VALUE_WSP_KMH MAY BE IMPLEMENTED ONLY AS EXTRADP NEXT TO ADP WITH<br>DPT_VALUE_WSP(9.005). THIS APPLIES BOTH FORINPUTS AS WELL AS FOROUTPUTS. IT SHALL BE<br>POSSIBLE THROUGH A PARAMETER TO SELECT THEDP OR ITS FORMAT; THE DEFAULT SETTING FOR<br>THIS PARAMETER SHALL BEDPT_VALUE_WSP(9.005).<br>APPLICATIONS: <br>ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE <br>SEE ALSO: <br>9.005<br>DPT_VALUE_WSP <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|<br>CONDITIONS: <br>DPT_VALUE_WSP_KMH MAY BE IMPLEMENTED ONLY AS EXTRADP NEXT TO ADP WITH<br>DPT_VALUE_WSP(9.005). THIS APPLIES BOTH FORINPUTS AS WELL AS FOROUTPUTS. IT SHALL BE<br>POSSIBLE THROUGH A PARAMETER TO SELECT THEDP OR ITS FORMAT; THE DEFAULT SETTING FOR<br>THIS PARAMETER SHALL BEDPT_VALUE_WSP(9.005).<br>APPLICATIONS: <br>ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE <br>SEE ALSO: <br>9.005<br>DPT_VALUE_WSP <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|<br>CONDITIONS: <br>DPT_VALUE_WSP_KMH MAY BE IMPLEMENTED ONLY AS EXTRADP NEXT TO ADP WITH<br>DPT_VALUE_WSP(9.005). THIS APPLIES BOTH FORINPUTS AS WELL AS FOROUTPUTS. IT SHALL BE<br>POSSIBLE THROUGH A PARAMETER TO SELECT THEDP OR ITS FORMAT; THE DEFAULT SETTING FOR<br>THIS PARAMETER SHALL BEDPT_VALUE_WSP(9.005).<br>APPLICATIONS: <br>ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE <br>SEE ALSO: <br>9.005<br>DPT_VALUE_WSP <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|<br>CONDITIONS: <br>DPT_VALUE_WSP_KMH MAY BE IMPLEMENTED ONLY AS EXTRADP NEXT TO ADP WITH<br>DPT_VALUE_WSP(9.005). THIS APPLIES BOTH FORINPUTS AS WELL AS FOROUTPUTS. IT SHALL BE<br>POSSIBLE THROUGH A PARAMETER TO SELECT THEDP OR ITS FORMAT; THE DEFAULT SETTING FOR<br>THIS PARAMETER SHALL BEDPT_VALUE_WSP(9.005).<br>APPLICATIONS: <br>ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE <br>SEE ALSO: <br>9.005<br>DPT_VALUE_WSP <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|<br>CONDITIONS: <br>DPT_VALUE_WSP_KMH MAY BE IMPLEMENTED ONLY AS EXTRADP NEXT TO ADP WITH<br>DPT_VALUE_WSP(9.005). THIS APPLIES BOTH FORINPUTS AS WELL AS FOROUTPUTS. IT SHALL BE<br>POSSIBLE THROUGH A PARAMETER TO SELECT THEDP OR ITS FORMAT; THE DEFAULT SETTING FOR<br>THIS PARAMETER SHALL BEDPT_VALUE_WSP(9.005).<br>APPLICATIONS: <br>ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE <br>SEE ALSO: <br>9.005<br>DPT_VALUE_WSP <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|<br>CONDITIONS: <br>DPT_VALUE_WSP_KMH MAY BE IMPLEMENTED ONLY AS EXTRADP NEXT TO ADP WITH<br>DPT_VALUE_WSP(9.005). THIS APPLIES BOTH FORINPUTS AS WELL AS FOROUTPUTS. IT SHALL BE<br>POSSIBLE THROUGH A PARAMETER TO SELECT THEDP OR ITS FORMAT; THE DEFAULT SETTING FOR<br>THIS PARAMETER SHALL BEDPT_VALUE_WSP(9.005).<br>APPLICATIONS: <br>ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE <br>SEE ALSO: <br>9.005<br>DPT_VALUE_WSP <br>20.014 DPT_BEAUFORT_WIND_FORCE_SCALE|
|9.029|<br> DPT_Value_Absolute_Humidity|<br> DPT_Value_Absolute_Humidity|0 gm-3 … 670 760 gm-3|gm-3|0,01 gm-3|see<br>below|
|9.029|USE: <br>- <br>Absolute air humidity.<br>- <br>General use.|USE: <br>- <br>Absolute air humidity.<br>- <br>General use.|USE: <br>- <br>Absolute air humidity.<br>- <br>General use.|USE: <br>- <br>Absolute air humidity.<br>- <br>General use.|USE: <br>- <br>Absolute air humidity.<br>- <br>General use.|USE: <br>- <br>Absolute air humidity.<br>- <br>General use.|
|9.030|DPT_Concentration_µgm3|DPT_Concentration_µgm3|0 µgm-3 … 670 760 µgm-3|µg|0,01 µgm-3|see<br>below|
|9.030|USE:<br>- <br>Air pollution. Dispersion of fine dust particles in the air (PM10, PM2.5 and PM1).<br>- <br>Ozone concentrations.|USE:<br>- <br>Air pollution. Dispersion of fine dust particles in the air (PM10, PM2.5 and PM1).<br>- <br>Ozone concentrations.|USE:<br>- <br>Air pollution. Dispersion of fine dust particles in the air (PM10, PM2.5 and PM1).<br>- <br>Ozone concentrations.|USE:<br>- <br>Air pollution. Dispersion of fine dust particles in the air (PM10, PM2.5 and PM1).<br>- <br>Ozone concentrations.|USE:<br>- <br>Air pollution. Dispersion of fine dust particles in the air (PM10, PM2.5 and PM1).<br>- <br>Ozone concentrations.|USE:<br>- <br>Air pollution. Dispersion of fine dust particles in the air (PM10, PM2.5 and PM1).<br>- <br>Ozone concentrations.|


-----

#### 3.11 Datapoint Type “Time”

Format: 3 octets: N3U5r2U6r2U6

octet nr. 3 MSB 2 1 LSB

field names Day Hour 0 0 Minutes 0 0 Seconds

encoding N N N U U U U U r r U U U U U U r r U U U U U U

Encoding: binary encoded

PDT: PDT_TIME

**Datapoint Types**

ID: Name: Field: Encoding: Range: Unit: Resol.: Use:

10.001 DPT_TimeOfDay Day 1 = Monday [0…7] none none G

…
7 = Sunday
0 = no day

Hour binary encoded [0…23] hours h

Minutes binary encoded [0…59] minutes min

Seconds binary encoded [0…59] seconds s

#### 3.12 Datapoint Type “Date”

Format: 3 octets: r3U5r4U4r1U7

octet nr. 3 MSB 2 1 LSB

field names 0 0 0 Day 0 0 0 0 Month 0 Year

encoding r r r U U U U U r r r r U U U U r U U U U U U U

Encoding: All values binary encoded.

PDT: PDT_DATE

**Datapoint Types**

ID: Name: Field: Range: Unit: Resol.: Use:

11.001 DPT_Date Day [1…31] Day of month 1 day G

Month [1…12] Month 1 month

Year [0…99] Year 1 year

###### Century Encoding

 The following interpretation shall be carried out by devices receiving the Datapoint Type 11.001 and carrying out calculations on the basis of the entire 3[rd] octet:

 if Octet 3 contains value ≥ 90 : interpret as 20[th] century

 if Octet 3 contains value < 90: interpret as 21[st] century

 This format covers the range 1990 to 2089.

EXAMPLE 5 YYYYYYY = 99d equals 1999

YYYYYYY = 0d equals 2000

YYYYYYY = 4d equals 2004

|Day|Hour|
|---|---|

|0|0|Minutes|
|---|---|---|

|0|Seconds|
|---|---|

|N|N|N|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|3 octets: N U r U r U<br>3 5 2 6 2 6<br>3 2 1<br>MSB LSB<br>Day Hour 0 0 Minutes 0 0 Seconds<br>N N N U U U U U r r U U U U U U r r U U U U U U<br>binary encoded<br>PDT TIME<br>_|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Field:|Encoding:|Range:|Unit:|Resol.:|Use:|
|10.001|DPT_TimeOfDay|Day|1 = Monday<br>… <br>7 = Sunday<br>0 = no day|[0…7]|none|none|G|
|10.001|DPT_TimeOfDay|Hour|binary encoded|[0…23]|hours|h|h|
|10.001|DPT_TimeOfDay|Minutes|binary encoded|[0…59]|minutes|min|min|
|10.001|DPT_TimeOfDay|Seconds|binary encoded|[0…59]|seconds|s|s|

|0|0|0|Day|
|---|---|---|---|

|0|0|0|0|
|---|---|---|---|

|0|Year|
|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|
|---|---|---|---|---|---|---|

|r|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|3 octets: r U r U r U<br>3 5 4 4 1 7<br>3 2 1<br>MSB LSB<br>0 0 0 Day 0 0 0 0 Month 0 Year<br>r r r U U U U U r r r r U U U U r U U U U U U U<br>All values binary encoded.<br>PDT DATE<br>_|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Field:|Range:|Unit:|Resol.:|Use:|
|11.001|DPT_Date|Day|[1…31]|Day of month|1 day|G|
|11.001|DPT_Date|<br>Month|[1…12]|Month|1 month|1 month|
|11.001|DPT_Date|Year|[0…99]|Year|1 year|1 year|


-----

#### 3.13 Datapoint Types “4-Octet Unsigned Value”

##### 3.13.1 General

Format: 4 octets: U32

octet nr 4 MSB 3 2 1 LSB

field names UnsignedValue

encoding U U U U U U U U U U U U U U U U U U U U U U U U U U UU U U U U

Encoding: Binary encoded

Range: UnsignedValue = [0…4 294 967 295]

PDT PDT_UNSIGNED_LONG

**Datapoint Types**

ID: Name: Unit: Resol.: Use:

12.001 DPT_Value_4_Ucount counter pulses 1 pulse G

##### 3.13.2 Operating hours

Format: 4 octets: U32

octet nr. 4 MSB 3 2 1 LSB

field names Unsigned value

encoding U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U

Encoding: Binary encoded value

Range:: UnsignedValue = [0…4 294 967 295]

PDT: PDT_UNSIGNED_LONG

**Datapoint Types**

ID: Name: Unit: Resol.:

12.100 DPT_LongTimePeriod_Sec s 1 s

12.101 DPT_LongTimePeriod_Min min 1 min

12.102 DPT_LongTimePeriod_Hrs h 1 h

USE: The DPTs DPT_LongTimePeriod_Sec, DPT_LongTimePeriod_Min and DPT_LongTimePeriod_Hrs shall
be used for encoding operating hours but shall only be used if also the DPT_LongDeltaTimeSec (13.100)
is implemented as well.

|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT|4 octets: U<br>32<br>4 3 2 1<br>MSB LSB<br>UnsignedValue<br>U U U U U U U U U U U U U U U U U U U U U U U U U U UU U U U U<br>Binary encoded<br>UnsignedValue = [0…4 294 967 295]<br>PDT UNSIGNED LONG<br>_ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Unit:|Resol.:|Use:|
|12.001|DPT_Value_4_Ucount|counter pulses|1 pulse|G|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range::<br>PDT:|4 octets: U<br>32<br>4 3 2 1<br>MSB LSB<br>Unsigned value<br>U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U<br>Binary encoded value<br>UnsignedValue = [0…4 294 967 295]<br>PDT UNSIGNED LONG<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Unit:|Resol.:|
|12.100|DPT_LongTimePeriod_Sec|s|1 s|
|12.101|<br>DPT_LongTimePeriod_Min|min|1 min|
|12.102|<br>DPT_LongTimePeriod_Hrs|h|1 h|
|<br>USE: <br>The DPTs DPT_LongTimePeriod_Sec, DPT_LongTimePeriod_Min and DPT_LongTimePeriod_Hrs shall<br>be used for encoding operating hours but shall only be used if also the DPT_LongDeltaTimeSec (13.100)<br>is implemented as well.|<br>USE: <br>The DPTs DPT_LongTimePeriod_Sec, DPT_LongTimePeriod_Min and DPT_LongTimePeriod_Hrs shall<br>be used for encoding operating hours but shall only be used if also the DPT_LongDeltaTimeSec (13.100)<br>is implemented as well.|<br>USE: <br>The DPTs DPT_LongTimePeriod_Sec, DPT_LongTimePeriod_Min and DPT_LongTimePeriod_Hrs shall<br>be used for encoding operating hours but shall only be used if also the DPT_LongDeltaTimeSec (13.100)<br>is implemented as well.|<br>USE: <br>The DPTs DPT_LongTimePeriod_Sec, DPT_LongTimePeriod_Min and DPT_LongTimePeriod_Hrs shall<br>be used for encoding operating hours but shall only be used if also the DPT_LongDeltaTimeSec (13.100)<br>is implemented as well.|


-----

#### 3.14 Datapoint Types “4-Octet Signed Value”

##### 3.14.1 4 Octet signed counter value

Format: 4 octets: V32

octet nr 4 MSB 3 2 1 LSB

field names SignedValue

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

Encoding: Two’s complement notation

Range: SignedValue = [-2 147 483 648 … 2 147 483 647]

PDT PDT_LONG

**Datapoint Types**

ID: Name: Unit: Resol.: Use:

13.001 DPT_Value_4_Count counter pulses 1 pulse G

13.002 DPT_FlowRate_m3/h Flow Rate in m[3]/h with high resolution 0,0001 m[3]/h G

##### 3.14.2 DPTs for electrical energy

Format: 4 octets: V32

octet nr. 4 MSB 3 2 1 LSB

field names SignedValue

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

Encoding: Two’s complement notation.

Range: SignedValue = [-2 147 483 648 … 2 147 483 647]

PDT: PDT_LONG

**Datapoint Types**

ID: Name: Range: Unit: Resol.:

13.010 DPT_ActiveEnergy [-2 147 483 648 … 2 147 483 647] Wh Wh 1 Wh G

13.011 DPT_ApparantEnergy [-2 147 483 648 … 2 147 483 647] VAh VAh 1 VAh G

13.012 DPT_ReactiveEnergy [-2 147 483 648 … 2 147 483 647] VARh VARh 1 VARh G

13.013 DPT_ActiveEnergy_kWh [-2 147 483 648 … 2 147 483 647] kWh kWh 1 kWh G

13.014 DPT_ApparantEnergy_kVAh [-2 147 483 648 … 2 147 483 647] kVAh kVAh 1 kVAh G

13.015 DPT_ReactiveEnergy_kVARh [-2 147 483 648 … 2 147 483 647] kVARh 1 kVARh G
kVARh

13.016 DPT_ActiveEnergy_MWh [-2 147 483 648 … 2 147 483 647] MWh MWh 1 MWh G

NOTE 7 For electrical power, DPT_Power (9.024) or DPT_Value_Power (14.056) shall be used according NOTE 6.

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|3.14.1 4|Octet signed counter value|Col3|Col4|Col5|
|---|---|---|---|---|
|Format: <br>octet nr<br>field names<br>encoding<br>Encoding: <br>Range: <br>PDT|4 octets: V32 <br>4 MSB <br>3 <br>2 <br>1 LSB <br>SignedValue<br>V V V V V V V V  V V V V V V V V  V V V V V V V V  V V V V V V V V<br> <br>Two’s complement notation<br>SignedValue = [-2 147 483 648 … 2 147 483 647]<br>PDT_LONG|4 octets: V32 <br>4 MSB <br>3 <br>2 <br>1 LSB <br>SignedValue<br>V V V V V V V V  V V V V V V V V  V V V V V V V V  V V V V V V V V<br> <br>Two’s complement notation<br>SignedValue = [-2 147 483 648 … 2 147 483 647]<br>PDT_LONG|4 octets: V32 <br>4 MSB <br>3 <br>2 <br>1 LSB <br>SignedValue<br>V V V V V V V V  V V V V V V V V  V V V V V V V V  V V V V V V V V<br> <br>Two’s complement notation<br>SignedValue = [-2 147 483 648 … 2 147 483 647]<br>PDT_LONG|4 octets: V32 <br>4 MSB <br>3 <br>2 <br>1 LSB <br>SignedValue<br>V V V V V V V V  V V V V V V V V  V V V V V V V V  V V V V V V V V<br> <br>Two’s complement notation<br>SignedValue = [-2 147 483 648 … 2 147 483 647]<br>PDT_LONG|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Unit:|Resol.:|Use:|
|13.001|DPT_Value_4_Count|counter pulses|1 pulse|G|
|13.002|<br>DPT_FlowRate_m3/h|Flow Rate in m3/h with high resolution|0,0001 m3/h|G|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT:|Col2|4 octets: V<br>32<br>4 3 2 1<br>MSB LSB<br>SignedValue<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>Two’s complement notation.<br>SignedValue = [-2 147 483 648 … 2 147 483 647]<br>PDT LONG<br>_|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Range:|Unit:|Resol.:|Use:|
|13.010|DPT_ActiveEnergy|DPT_ActiveEnergy|[-2 147 483 648 … 2 147 483 647] Wh|Wh|1 Wh|G|
|13.011|<br>DPT_ApparantEnergy|<br>DPT_ApparantEnergy|[-2 147 483 648 … 2 147 483 647] VAh|VAh|1 VAh|G|
|13.012|<br>DPT_ReactiveEnergy|<br>DPT_ReactiveEnergy|[-2 147 483 648 … 2 147 483 647] VARh|VARh|1 VARh|G|
|13.013|<br>DPT_ActiveEnergy_kWh|<br>DPT_ActiveEnergy_kWh|[-2 147 483 648 … 2 147 483 647] kWh|kWh|1 kWh|G|
|13.014|<br>DPT_ApparantEnergy_kVAh|<br>DPT_ApparantEnergy_kVAh|[-2 147 483 648 … 2 147 483 647] kVAh|kVAh|1 kVAh|G|
|13.015|<br>DPT_ReactiveEnergy_kVARh|<br>DPT_ReactiveEnergy_kVARh|[-2 147 483 648 … 2 147 483 647]<br>kVARh|kVARh|1 kVARh|G|
|13.016|DPT_ActiveEnergy_MWh|DPT_ActiveEnergy_MWh|[-2 147 483 648 … 2 147 483 647] MWh|MWh|1 MWh|G|


-----

##### 3.14.3 4 Octet signed time period

Format: 4 octets: V32

octet nr 4 MSB 3 2 1 LSB

field names SignedValue

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

Encoding: Two’s complement notation

PDT PDT_LONG

**Datapoint Types**

ID: Name: Range: Unit: Resol.: Use:

13.100 DPT_LongDeltaTimeSec -2 147 483 648 s … 2 147 483 647 s [a)] s 1 s G

CONDITIONS: THIS DPT SHALL BE USED FOR OPERATING HOURS.

APPLICATIONS: OPERATING HOURS

**a) This is approximately 68 years. Thanks to this large possible range, no binary overflow will be possible**
in practice.

#### 3.15 Datapoint Types “4-Octet Float Value”

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>PDT|Col2|4 octets: V<br>32<br>4 3 2 1<br>MSB LSB<br>SignedValue<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>Two’s complement notation<br>PDT LONG<br>_|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Range:|Unit:|Resol.:|Use:|
|13.100|DPT_LongDeltaTimeSec|DPT_LongDeltaTimeSec|-2 147 483 648 s … 2 147 483 647 s**a)**|s|1 s|G|
|13.100|DPT_LongDeltaTimeSec|DPT_LongDeltaTimeSec|<br>CONDITIONS: <br>THISDPT SHALL BE USED FOR OPERATING HOURS.|<br>CONDITIONS: <br>THISDPT SHALL BE USED FOR OPERATING HOURS.|<br>CONDITIONS: <br>THISDPT SHALL BE USED FOR OPERATING HOURS.|<br>CONDITIONS: <br>THISDPT SHALL BE USED FOR OPERATING HOURS.|
|13.100|DPT_LongDeltaTimeSec|DPT_LongDeltaTimeSec|APPLICATIONS: <br>OPERATING HOURS|APPLICATIONS: <br>OPERATING HOURS|APPLICATIONS: <br>OPERATING HOURS|APPLICATIONS: <br>OPERATING HOURS|
|**a**) This is approximately 68 years. Thanks to this large possible range, no binary overflow will be possible<br>in practice.|**a**) This is approximately 68 years. Thanks to this large possible range, no binary overflow will be possible<br>in practice.|**a**) This is approximately 68 years. Thanks to this large possible range, no binary overflow will be possible<br>in practice.|**a**) This is approximately 68 years. Thanks to this large possible range, no binary overflow will be possible<br>in practice.|**a**) This is approximately 68 years. Thanks to this large possible range, no binary overflow will be possible<br>in practice.|**a**) This is approximately 68 years. Thanks to this large possible range, no binary overflow will be possible<br>in practice.|**a**) This is approximately 68 years. Thanks to this large possible range, no binary overflow will be possible<br>in practice.|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:|Col2|4 octets: F<br>32<br>4 3 2 1<br>MSB LSB<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>The values are encoded in the IEEE floating point format according to IEEE 754 single<br>precision format.<br>NOTE 8 This specifies that the exponent is biased. This allows negative exponent values.<br>S (Sign) = {0,1}<br>Exponent = [0 … 255]<br>Fraction = [0 … 8 388 607]<br>The resolution is given by the use of the IEEE 754 format and varies with the used exponent.<br>PDT FLOAT<br>_|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>Range: <br>Resol.:<br>PDT:|<br>Range: <br>Resol.:<br>PDT:|<br>Range: <br>Resol.:<br>PDT:|<br>Range: <br>Resol.:<br>PDT:|<br>Range: <br>Resol.:<br>PDT:|<br>Range: <br>Resol.:<br>PDT:|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Unit:|Comment:|Use:|
|14.000|DPT_Value_Acceleration|DPT_Value_Acceleration|ms-2|acceleration|G|
|14.001|DPT_Value_Acceleration_Angular|DPT_Value_Acceleration_Angular|rad s-2|acceleration, angular|G|
|14.002|DPT_Value_Activation_Energy|DPT_Value_Activation_Energy|J mol-1|activation energy|G|
|14.003|DPT_Value_Activity|DPT_Value_Activity|s-1|activity (radioactive)|G|
|14.004|DPT_Value_Mol|DPT_Value_Mol|mol|amount of substance|G|
|14.005|DPT_Value_Amplitude|DPT_Value_Amplitude|-|amplitude<br>(unit as appropriate)|G|
|14.006|DPT_Value_AngleRad|DPT_Value_AngleRad|rad|angle, radiant|G|
|14.007|DPT_Value_AngleDeg|DPT_Value_AngleDeg|°|angle, degree|G|
|14.008|DPT_Value_Angular_Momentum|DPT_Value_Angular_Momentum|J s|angular momentum|G|
|14.009|DPT_Value_Angular_Velocity|DPT_Value_Angular_Velocity|rad s-1|angular velocity|G|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Unit:|Comment:|Use:|
|14.010|DPT_Value_Area|m2|area|G|
|14.011|DPT_Value_Capacitance|F|capacitance|G|
|14.012|DPT_Value_Charge_DensitySurface|C m-2|charge density (surface)|G|
|14.013|DPT_Value_Charge_DensityVolume|C m-3|charge density (volume)|G|
|14.014|DPT_Value_Compressibility|m2 N-1|compressibility|G|
|14.015|DPT_Value_Conductance|S =Ω-1|conductance|G|
|14.016|<br>DPT_Value_Electrical_Conductivity|S m-1|conductivity, electrical|G|
|14.017|DPT_Value_Density|kg m-3|density|G|
|14.018|DPT_Value_Electric_Charge|C|electric charge|G|
|14.019|DPT_Value_Electric_Current|A|electric current|G|
|14.020|DPT_Value_Electric_CurrentDensity|A m-2|electric current density|G|
|14.021|DPT_Value_Electric_DipoleMoment|C m|electric dipole moment|G|
|14.022|DPT_Value_Electric_Displacement|C m-2|electric displacement|G|
|14.023|DPT_Value_Electric_FieldStrength|V m-1|electric field strength|G|
|14.024|DPT_Value_Electric_Flux|c|electric flux|G|
|14.025|DPT_Value_Electric_FluxDensity|C m-2|electric flux density|G|
|14.026|DPT_Value_Electric_Polarization|C m-2|electricpolarization|G|
|14.027|DPT_Value_Electric_Potential|V|electric potential|G|
|14.028|<br>DPT_Value_Electric_PotentialDifference|V|electricpotential difference|G|
|14.029|DPT_Value_ElectromagneticMoment|A m2|electromagnetic moment|G|
|14.030|DPT_Value_Electromotive_Force|V|electromotive force|G|
|14.031|DPT_Value_Energy|J|energy|G|
|14.032|DPT_Value_Force|N|force|G|
|14.033|<br>DPT_Value_Frequency|Hz = s-1|frequency|G|
|14.034|DPT_Value_Angular_Frequency|rad s-1|frequency, angular(pulsatance)|G|
|14.035|DPT_Value_Heat_Capacity|J K-1|heat capacity|G|
|14.036|DPT_Value_Heat_FlowRate|W|heat flow rate|G|
|14.037|DPT_Value_Heat_Quantity|J|heat, quantity of|G|
|14.038|DPT_Value_Impedance|Ω|impedance|G|
|14.039|<br>DPT_Value_Length|m|length|G|
|14.040|DPT_Value_Light_Quantity|J or lm s|light,quantity of|G|
|14.041|DPT_Value_Luminance|cd m-2|luminance|G|
|14.042|<br>DPT_Value_Luminous_Flux|lm|luminous flux|G|
|14.043|DPT_Value_Luminous_Intensity|cd|luminous intensity|G|
|14.044|DPT_Value_Magnetic_FieldStrength|A m-1|magnetic field strength|G|
|14.045|DPT_Value_Magnetic_Flux|Wb|magnetic flux|G|
|14.046|DPT_Value_Magnetic_FluxDensity|T|magnetic flux density|G|
|14.047|DPT_Value_Magnetic_Moment|A m2|magnetic moment|G|
|14.048|DPT_Value_Magnetic_Polarization|T|magneticpolarization|G|
|14.049|DPT_Value_Magnetization|A m-1|magnetization|G|
|14.050|DPT_Value_MagnetomotiveForce|A|magneto motive force|G|


-----

14.080 DPT_Value_ApparentPower VA Apparent power G

10) Concerning the selection of the appropriate DPT for encoding electrical power, NOTE 6 shall be observed.
11) For proper usage see note!

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Unit:|Comment:|Use:|
|14.051|DPT_Value_Mass|kg|mass|G|
|14.052|DPT_Value_MassFlux|kg s-1|mass flux|G|
|14.053|DPT_Value_Momentum|N s-1|momentum|G|
|14.054|DPT_Value_Phase_AngleRad|rad|phase angle, radiant|G|
|14.055|DPT_Value_Phase_AngleDeg|°|phase angle, degrees|G|
|14.056|DPT_Value_Power10)|W|power|G|
|14.057|DPT_Value_Power_Factor|-|power factor|G|
|14.058|DPT_Value_Pressure|Pa = N m-2|pressure|G|
|14.059|DPT_Value_Reactance|Ω|reactance|G|
|14.060|<br>DPT_Value_Resistance|Ω|resistance|G|
|14.061|<br>DPT_Value_Resistivity|Ωm|resistivity|G|
|14.062|<br>DPT_Value_SelfInductance|H|self inductance|G|
|14.063|DPT_Value_SolidAngle|sr|solid angle|G|
|14.064|DPT_Value_Sound_Intensity|W m-2|sound intensity|G|
|14.065|DPT_Value_Speed|m s-1|speed|G|
|14.066|DPT_Value_Stress|Pa = N m-2|stress|G|
|14.067|DPT_Value_Surface_Tension|Nm-1|surface tension|G|
|14.068|DPT_Value_Common_Temperature|°C|temperature, common|G|
|14.069|DPT_Value_Absolute_Temperature|K|temperature(absolute)|G|
|14.070|<br>DPT_Value_TemperatureDifference|K|temperature difference|G|
|14.071|DPT_Value_Thermal_Capacity|JK-1|thermal capacity|G|
|14.072|DPT_Value_Thermal_Conductivity|W m-1  K-1|thermal conductivity|G|
|14.073|DPT_Value_ThermoelectricPower|V K-1|thermoelectricpower|G|
|14.074|DPT_Value_Time|s|time 11)|G|
|14.075|<br>DPT_Value_Torque|Nm|torque|G|
|14.076|DPT_Value_Volume|m3|volume|G|
|14.077|DPT_Value_Volume_Flux|m3 s-1|volume flux|G|
|14.078|DPT_Value_Weight|N|weight|G|
|14.079|DPT_Value_Work|J|work|G|
|14.080|DPT_Value_ApparentPower|VA|Apparentpower|G|


-----

#### 3.16 Datapoint Type #015.000#DPT_Access_Data

Format: 4 octets: U4U4U4U4U4U4B4N4

octet nr. 4 MSB 3 2 1 LSB

field names D6 D5 D4 D3 D2 D1 E P D C Index

encoding U U U U U U U U U U U U U U U U U U U U U U U U b b b b N N N N

Encoding: D6, D5, D4, D3, D2, D1: binary encoded value

N: binary encoded value
E, P, D, C: See below

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_GENERIC_04

**Datapoint Types**

ID: Name: Use:

15.000 DPT_Access_Data FB

Field Description Encoding Range

D6, D5, D4, digit x (1…6) of access identification code. Only a Values binary encoded. [0 … 9]
D3, D2, D1 card or key number should be used. System number,

version number, country code, etc are not necessary.
Ciphered access information code should be possible
in principle. If 24 bits are not necessary, the most
significant positions shall be set to zero.

E Detection error 0 = no error {0,1}
1 = reading of access
information code
was not successful).

P Permission (informs about the access decision made 0 = not accepted {0,1}
by the controlling device) 1 = accepted

D Read direction (e.g. of badge) 0 = left to right {0,1}
If not used (e.g. electronic key) set to zero. 1 = right to left

C Encryption of access information. 0 = no {0,1}
1 = yes

Index Index of access identification code Value binary encoded. [0 … 15]
(future use)

EXAMPLE 6 Transmission of the access identification code “123456”, without error indication, permission
accepted, badge read from left to right, no encryption and index 13.

Octet 6 Octet 7 Octet 8 Octet 9 Octet 10 Octet 11
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

APCI r r r r r r D6 D5 D4 D3 D2 D1 E P D C Index
0 0 1 0 0 0 0 0 0 0 0 0 0 1 0 0 1 0 0 0 1 1 0 1 0 0 0 1 0 1 0 1 1 0 0 1 0 0 1 1 0 1
1 2 3 4 5 6 13

EXAMPLE 7 Transmission of the access identification code “6789”, without error indication, permission not accepted, badge
read from left to right, no encryption and index 14.

|D<br>6|D<br>5|
|---|---|

|D<br>4|D<br>3|
|---|---|

|D<br>2|D<br>1|
|---|---|

|E|P|D|C|Index|
|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|b|b|b|b|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|Col2|4 octets: U U U U U U B N<br>4 4 4 4 4 4 4 4<br>4 3 2 1<br>MSB LSB<br>D D D D D D E P D C Index<br>6 5 4 3 2 1<br>U U U U U U U U U U U U U U U U U U U U U U U U b b b b N N N N<br>D D D D D D : binary encoded value<br>6, 5, 4, 3, 2, 1<br>N: binary encoded value<br>E, P, D, C: See below<br>Not applicable.<br>Not applicable.<br>PDT GENERIC 04<br>_ _|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|15.000|DPT_Access_Data|DPT_Access_Data|FB|

|Field|Description|Encoding|Range|
|---|---|---|---|
|D6, D5, D4,<br>D3, D2, D1|digit x (1…6) of access identification code. Only a<br>card or key number should be used. System number,<br>version number, country code, etc are not necessary.<br>Ciphered access information code should be possible<br>in principle. If 24 bits are not necessary, the most<br>significant positions shall be set to zero.|Values binary encoded.|[0 … 9]|
|E|Detection error|0 = no error<br>1 = reading of access<br>information code<br>was not successful).|{0,1}|
|P|Permission (informs about the access decision made<br>by the controlling device)|0 = not accepted<br>1 = accepted|{0,1}|
|D|Read direction (e.g. of badge)<br>If not used (e.g. electronic key) set to zero.|0 = left to right<br>1 = right to left|{0,1}|
|C|Encryption of access information.|0 = no<br>1 = yes|{0,1}|
|Index|Index of access identification code<br>(future use)|Value binary encoded.|[0 … 15]|

|Octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|APCI|APCI|APCI|r|r|r|r|r|r|D6|D6|D6|D6|D5|D5|D5|D5|D4|D4|D4|D4|D3|D3|D3|D3|D2|D2|D2|D2|D1|D1|D1|D1|E|P|D|C|Index|Index|Index|Index|
|||||||0|0|1|0|0|0|0|0|0|0|0|0|0|1|0|0|1|0|0|0|1|1|0|1|0|0|0|1|0|1|0|1|1|0|0|1|0|0|1|1|0|1|
|||||||||||||||||1|1|1|1|2|2|2|2|3|3|3|3|4|4|4|4|5|5|5|5|6|6|6|6|||||13|13|13|13|

|Octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Octet 11|Col42|Col43|Col44|Col45|Col46|Col47|Col48|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|APCI|APCI|APCI|r|r|r|r|r|r|D6|D6|D6|D6|D5|D5|D5|D5|D4|D4|D4|D4|D3|D3|D3|D3|D2|D2|D2|D2|D1|D1|D1|D1|E|P|D|C|Index|Index|Index|Index|
|||||||0|0|1|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|1|1|0|0|1|1|1|1|0|0|0|1|0|0|1|0|0|0|0|1|1|1|0|
|||||||||||||||||0|0|0|0|0|0|0|0|6|6|6|6|7|7|7|7|8|8|8|8|9|9|9|9|||||14|14|14|14|


-----

#### 3.17 Datapoint Types "String"

Format: 14 octets: A112

octet nr. 14 MSB … 1 LSB

field names Character 1 … Character 14

encoding A A A A A A A A A A A A A A A A

Encoding: These Datapoint Types are used to transmit strings of textual characters. The length is fixed to

14 octets. The contents are filled starting from the most significant octet. Each octet shall be
encoded as specified for the chosen character set, as defined in clause 0. If the string to be
transmitted is smaller then 14 octets, unused trailing octets in the character string shall be set
to NULL (00h).

EXAMPLE 8 ‘KNX is OK’ is encoded as follows:
4B 4E 58 20 69 73 20 4F 4B 00 00 00 00 00

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_GENERIC_14

**Datapoint Types**

ID: Name: Range: Use:

16.000 DPT_String_ASCII See 4.001 (DPT_Char_ASCII) G

APPLICATIONS: TEXT, STRING, FIXED LENGTH, ASCII

16.001 DPT_String_8859_1 See 4.002 (DPT_Char_8859_1) G

APPLICATIONS: TEXT, STRING, FIXED LENGTH, ISO 8859-1

#### 3.18 Datapoint Type Scene Number

Format: 1 octet: r2U6

octet nr. 1

field names r r SceneNumber

encoding 0 0 U U U U U U

PDT: PDT_GENERIC_01

**Datapoint Types**

ID: Name: Encoding: Resol: Range:

17.001 DPT_SceneNumber SceneNumber Value binary encoded 1 [0 … 63] G

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|14 octets: A<br>112<br>14 … 1<br>MSB LSB<br>Character 1 … Character 14<br>A A A A A A A A A A A A A A A A<br>These Datapoint Types are used to transmit strings of textual characters. The length is fixed to<br>14 octets. The contents are filled starting from the most significant octet. Each octet shall be<br>encoded as specified for the chosen character set, as defined in clause 0. If the string to be<br>transmitted is smaller then 14 octets, unused trailing octets in the character string shall be set<br>to NULL (00h).<br>EXAMPLE 8 ‘KNX is OK’ is encoded as follows:<br>4B 4E 58 20 69 73 20 4F 4B 00 00 00 00 00<br>Not applicable.<br>Not applicable.<br>PDT GENERIC 14<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Use:|
|16.000|DPT_String_ASCII|See4.001(DPT_Char_ASCII)|G|
|16.000|DPT_String_ASCII|APPLICATIONS: TEXT, STRING, FIXED LENGTH, ASCII|APPLICATIONS: TEXT, STRING, FIXED LENGTH, ASCII|
|16.001|DPT_String_8859_1|See4.002(DPT_Char_8859_1)|G|
|16.001|DPT_String_8859_1|<br>APPLICATIONS: TEXT, STRING, FIXED LENGTH, ISO 8859-1|<br>APPLICATIONS: TEXT, STRING, FIXED LENGTH, ISO 8859-1|

|r|r|SceneNumber|
|---|---|---|

|0|0|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|1 octet: r U<br>2 6<br>1<br>r r SceneNumber<br>0 0 U U U U U U<br>PDT GENERIC 01<br>_ _|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Encoding:|Resol:|Range:|Use:|
|17.001|DPT_SceneNumber|SceneNumber|Value binary encoded|1|[0 … 63]|G|


-----

#### 3.19 Datapoint Type DPT_SceneControl

Format: 1 octet: B1r1U6

octet nr. 1

field names C R SceneNumber

encoding B r U U U U U U

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_GENERIC_01

**Datapoint Types**

ID: Name: Encoding: Range:

18.001 DPT_SceneControl C 0 = activate the scene corresponding to [0, 1] G
the field Scene Number
1 = learn the scene corresponding to the
field Scene Number

R Reserved (0) {0}

Scene- Scene number [0 … 63]
Number

NOTE 9 DPT_SceneControl allows numbering the scene from 0 to 63. KNX Association recommends displaying these scene
numbers in ETS™, other software and controllers numbered from 1 to 64, this is, with an offset of 1 compared to the actual
transmitted value.

|C|R|Scene-<br>Number|
|---|---|---|

|B|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Unit:<br>Resol.:<br>PDT:|1 octet: B r U<br>1 1 6<br>1<br>Scene-<br>C R<br>Number<br>B r U U U U U U<br>Not applicable.<br>Not applicable.<br>PDT GENERIC 01<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Encoding:|Range:|Use:|
|18.001|DPT_SceneControl|C|0 = activate the scene corresponding to<br>the field Scene Number<br>1 = learn the scene corresponding to the<br>field Scene Number|[0, 1]|G|
|18.001|DPT_SceneControl|R|Reserved (0)|{0}|{0}|
|18.001|DPT_SceneControl|Scene-<br>Number|Scene number|[0 … 63]|[0 … 63]|


-----

#### 3.20 Datapoint Type DPT_DateTime

Format: 8 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16

octet nr. 8 MSB 7 6 5

field names
Year 0 0 0 0 Month 0 0 0 DayOfMonth [DayOf-]
Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 4 3 2 1 LSB

field names

0 0 Minutes 0 0 Seconds 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r

PDT: PDT_DATE_TIME

**Datapoint Types**

ID: Name:

19.001 DPT_DateTime G

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|r|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|8 octets: U [r U ][r U ][U U ][r U ][r U ]B<br>8 4 4 3 5 3 5 2 6 2 6 16<br>8 7 6 5<br>MSB<br>DayOf-<br>Year 0 0 0 0 Month 0 0 0 DayOfMonth HourOfDay<br>Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>4 3 2 1<br>LSB<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC<br>r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r<br>PDT DATE TIME<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|19.001|DPT_DateTime|G|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Year|Year|Value binary encoded, offset 1900<br>0 <br>= 1900<br>255= 2155|[0…255]|year|1 year|
|Month|Month|<br>Value binary encoded<br>1 <br>= January<br>… <br>12<br>= December|[1…12]|Month|1 month|
|DayOfMonth|D|<br>Value binary encoded<br>1 <br>= <br>1st day<br>31<br>= <br>31st day|[1…31]|none|none|
|DayOfWeek|Day of week|<br>Value binary encoded<br>0 <br>= any day<br>1 <br>= Monday<br>… <br>7 <br>= Sunday|[0…7]|none|none|
|HourOfDay|Hour of day|<br>Value binary encoded.|[0…24]|h|1 h|
|Minutes|Minutes|Value binary encoded.|[0…59]|min|1 min|
|Seconds|Seconds|Value binary encoded.|[0…59]|s|1 s|
|F|Fault|0 <br>= Normal (No fault)<br>1 <br>= Fault|{0,1}|none|none|
|WD|Working Day|<br>0 <br>= Bank day (No working day)<br>1 <br>= Working day|{0,1}|none|none|
|NWD|No WD|0 <br>= WD field valid<br>1 <br>= WD field not valid|{0,1}|none|none|
|NY|No Year|0 <br>= Year field valid<br>1 <br>= Year field not valid|{0,1}|none|none|
|ND|No Date|0 <br>= Month and Day of Month<br>fields valid<br>1 <br>= Month and Day of Month<br>fields not valid|{0,1}|none|none|
|NDOW|No Day of Week|0 <br>= Day of week field valid<br>1 <br>= Day of week field not valid|{0,1}|none|none|


-----

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|NT|No Time|0 <br>= Hour of day, Minutes and<br>Seconds fields valid<br>1 <br>= Hour of day, Minutes and<br>Seconds fields not valid|{0,1}|none|none|
|SUTI|Standard Summer<br>Time|0 <br>= Time = UT+X<br>1 <br>= Time = UT+X+1|{0,1}|none|none|
|CLQ|Quality of Clock|0 <br>= clock without ext. sync signal<br>1 <br>= clock with ext. sync signal|{0,1}|none|none|
|SRC|Synchronisation<br>source reliability|0 <br>= unreliable synchronisation<br>source (mains, local quartz)<br>1 <br>= reliable synchronisation<br>source (radio, Internet)|{0, 1}|None|None|


##### 3.20.1 Notes
###### Note 10

 The year is encoded on 8 bits instead as on 7 bits as in DPT_Date. This encoding is taken from the BACnet standard.

 Note 11

 The encoding of the hour is within the range [0…24] instead of [0…23].

 When the hour is set to "24", the values of octet 3 (Minutes) and 2 (Seconds) have to be set to zero. Messages with invalid values ("Hour = 24", Minutes and Seconds not zero) have to be ignored by the receiver.

 Explanation: for normal clock information the range 0 … 23 would certainly be sufficient. But this Datapoint Type will also be used to encode e.g., schedule programs. In daily schedule programs usually "end of day" is encoded as 24:00:00 and not 23:59:59; otherwise, there would be a 1 s "break" at midnight.

EXAMPLE 9 comfort temperature level from 07:00 ... 24:00.
###### Without the value 24:00:00 there is a problem to differentiate between a full 24 h period and a 0 h period.

EXAMPLE 10 A daily program with 24 h comfort level is encoded as "start comfort: 00:00:00" and "end of comfort:
24:00:00".

EXAMPLE 11 A daily program with 0 h comfort level (⇒ all day economy level) is encoded as "start comfort:
00:00:00" and "end of comfort: 00:00:00".
###### Note 12

 "Fault" is set if one ore more supported fields of the Date&Time information are corrupted. This is not the same as when the NY, ND, NW etc. attributes would be set (in this case the corresponding fields are not supported).

 "Fault" is set e.g.

 - after power-down, if battery backup of the clock was not sufficient

 - after 1[st] start-up of the device (clock unconfigured)

 - radio-clock (DCF 77) had no reception for a very long time

 "Fault" is usually cleared automatically by the device (producer) if the local clock is set or clock data is refreshed by other means (e.g. by reception of system clock message, reception of DCF 77 radio message etc.).

 The receiver (e.g. a room unit, MMI) will interpret Date&Time with "Fault" as corrupted and will either ignore the message or show --:--:-- or blinking 00:00:00 (as known from Video recorders after power-up).


-----

###### Note 13

 SUTI is only an attribute for information / visualisation. In the hour field, summer-time correction is already considered. Therefore no hour offset shall be added by the receiver if SUTI is set.

 SUTI = 0 standard time SUTI = 1 summer daylight saving time

 Note 14

 NDoW = 1 means that the “Day of Week”-field ddd is invalid and the ddd information shall be ignored. A Clock not supporting Day of Week information shall set NdoW = 1. 

 NDoW = 0 and ddd = 0 means that the ddd-field is valid and that ddd is a wildcard. This encoding feature is thought for use in for instance scheduling information.

 Note 15

 Bit 7 of the octet 1 is used for “Quality of Clock” bit (CLQ). The other bits of this octet are reserved for future extensions. Their values shall be 0. If this Datapoint Type is used for transmitting data, transmitters shall set the lower 7 bits to 0. Receivers shall check these bits to be 0.

 This bit is called “Quality of Clock” (CLQ).

 Encoding

 0: Clock without an external synchronisation signal.

 The device sending date&time information has a local clock, which can be inaccurate!

 1: Clock with an external synchronisation signal (like DCF77, videotext, etc.).

 The device sending date & time information sends signals which are synchronised (time to time) with external date & time information.

 The default value is 0.

 Also an externally synchronised clock should send CLQ = 0 after start-up (until reception of first synchronisation signal) or after a synchronisation timeout.

 The “Quality of Clock” bit (CLQ) is used in datagrams transmitting date&time information during runtime.

 In the FB System Clock, CLQ information is used for resolution of system clock master conflicts: a system clock master sending CLQ = 1 displaces a system clock master sending CLQ = 0 (for further information see Chapter 7/1/1 "FB System Clock".

 If the Datapoint Type DPT_DateTime is used for parameters like scheduler information, use of this information bit makes no sense, CLQ bit should be set to 0.


-----

#### 3.21 Datapoint Types N8

Format: 1 octet: N8

octet nr. 1

field names _field1_

encoding N N N N N N N N

Encoding: Encoding absolute value N = [0 … 255]

Unit: none

Resol.: none

PDT: PDT_ENUM8 (alt: PDT_UNSIGNED_CHAR)

**Datapoint Types**

ID: Name: Encoding: Range:

20.001 DPT_SCLOMode _field1 = SCLOMode_ [0 to 3] FB

0 : autonomous
1 : slave
2 : master
3 to 255 : not used; reserved

20.002 DPT_BuildingMode[ 12)] _field1 = BuildingMode_ [0 to 2] G

0 : Building in use
1 : Building not used
2 : Building protection
3 to 255 : reserved, shall not be used

20.003 DPT_OccMode[ 13)] _field1 = OccMode_ [0 to 2] G

0 : occupied
1 : standby
2 : not occupied
3 to 255 : not used; reserved

20.004 DPT_Priority[ 14)] _field1 = Priority_ [0 to 3] FB
0 is highest priority

0 : High
1 : Medium
2 : Low
3 : ‘void’
4 to 255 : not used; reserved

20.005 DPT_LightApplicationMode field1 = Application Mode [0 to 2] FB

0 : normal
1 : presence simulation
2 : night round
3 to 16 : reserved
17 to 255 : manufacturer specific

12) Same as DPT_BuildingMode_Z (201.107), but without Status/Command field.
13) Same as DPT_OccMode_Z (201.108), but without Z8 field.
14) This Datapoint Type is used for parameters, not for runtime interworking. It is used e.g. to define the alarm
priority of a configurable digital alarm input in a device.

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|1 octet: N<br>8<br>1<br>field1<br>N N N N N N N N<br>Encoding absolute value N = [0 … 255]<br>none<br>none<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|20.001|DPT_SCLOMode|_field1_ = SCLOMode<br>0 <br>: autonomous<br>1 <br>: slave<br>2 <br>: master<br>3 to 255 : not used; reserved|[0 to 3]|FB|
|20.002|DPT_BuildingMode 12)|_field1_ = BuildingMode<br>0 <br>: Building in use<br>1 <br>: Building not used<br>2 <br>: Building protection<br>3 to 255 : reserved, shall not be used|<br>[0 to 2]|G|
|20.003|DPT_OccMode 13)|_field1_ = OccMode<br>0 <br>: occupied<br>1 <br>: standby<br>2 <br>: not occupied<br>3 to 255 : not used; reserved|[0 to 2]|G|
|20.004|DPT_Priority 14)|_field1_ = Priority<br>0 is highest priority<br>0 <br>: High<br>1 <br>: Medium<br>2 <br>: Low<br>3 <br>: ‘void’<br>4 to 255 : not used; reserved|[0 to 3]|FB|
|20.005|DPT_LightApplicationMode|field1 = Application Mode<br>0 <br>: normal<br>1 <br>: presence simulation<br>2 <br>: night round<br>3 to 16<br>: reserved<br>17 to 255 : manufacturer specific|[0 to 2]|FB|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.006|DPT_ApplicationArea 15)|_field1_= ApplicationArea<br>0 <br>: no fault<br>1 <br>: system and functions of<br>common interest<br>2 … 9<br>: reserved<br>10<br>: HVAC general FBs<br>11<br>: HVAC Hot Water Heating<br>12<br>: HVAC Direct Electrical<br>Heating<br>13<br>: HVAC Terminal Units<br>14<br>: HVAC VAC<br>15 … 19 : reserved (HVAC)<br>20<br>: Lighting<br>21 … 29 : reserved (Lighting)<br>30<br>: Security<br>31 … 39 : reserved (Security)<br>40<br>: Load Management<br>41 … 49 : reserved (Load<br>Management)<br>50<br>: Shutters and blinds<br>other values : reserved, shall not be<br>used|{0, 1, 10, 11,<br>12, 13, 14, 20,<br>30, 40, 50}|FB|
|20.007|DPT_AlarmClassType|_field1_ = AlarmClassType<br>0 <br>: reserved (not used)<br>1 <br>: simple alarm<br>2 <br>: basic alarm<br>3 <br>: extended alarm<br>4 to 255 : reserved, shall not be used|<br>[0 to 3]|FB|
|20.008|DPT_PSUMode|_field1_ = PSUMode<br>0 <br>: disabled (PSU/DPSU fixed<br>off)<br>1 <br>: enabled (PSU/DPSU fixed<br>on)<br>2 <br>: auto (PSU/DPSU<br>automatic on/off)<br>3 to 255 : reserved, shall not be used|<br>[0 to 2]|System|


15) This coding corresponds to the numbering of parts in Volume 7 of KNX System Specification.


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.011|DPT_ErrorClass_System 16)|_field1_ = ErrorClass_System<br>0 <br>: no fault<br>1 <br>: general device fault<br>(e.g. RAM, EEPROM, UI,<br>watchdog, …)<br>2 <br>: communication fault<br>3 <br>: configuration fault<br>4 <br>: hardware fault<br>5 <br>: software fault<br>6 <br>: insufficient non volatile<br>memory<br>7 <br>: insufficient volatile memory<br>8 <br>: memory allocation<br>command with size 0<br>received<br>9 <br>: CRC-error<br>10<br>: watchdog reset detected<br>11<br>: invalid opcode detected<br>12<br>: general protection fault<br>13<br>: maximal table length<br>exceeded<br>14<br>: undefined load command<br>received<br>15<br>: Group Address Table is<br>not sorted<br>16<br>: invalid connection number<br>(TSAP)<br>17<br>: invalid Group Object<br>number (ASAP)<br>18<br>: Group Object Type<br>exceeds<br>(PID_MAX_APDU_LENGT<br>H – 2)<br>19 to 255 : reserved, shall not be used|<br> <br>[0 to 18]|FB|
|20.012|DPT_ErrorClass_HVAC 17)|_field1_ = AlarmClass_HVAC<br>0 <br>: no fault<br>1 <br>: sensor fault<br>2 <br>: process fault / controller<br>fault<br>3 <br>: actuator fault<br>4 <br>: other fault<br>5 to 255 : reserved, shall not be used|<br>[0 to 4]|FB|


16) This encoding is already used in FB Technical Alarm.
17) This encoding is already used in FB Technical Alarm.


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.013|DPT_Time_Delay<br>(from PART_Time_Delay)|_field1_ = TimeDelay <br>0 <br>: not active<br>1 <br>: 1 s<br>2 <br>: 2 s<br>3 <br>: 3 s<br>4 <br>: 5 s<br>5 <br>: 10 s<br>6 <br>: 15 s<br>7 <br>: 20 s<br>8 <br>: 30 s<br>9 <br>: 45 s<br>10<br>: 1 min<br>11<br>: 1,25 min<br>12<br>: 1,5 min<br>13<br>: 2 min<br>14<br>: 2,5 min<br>15<br>: 3 min<br>16<br>: 5 min<br>17<br>: 15 min<br>18<br>: 20 min<br>19<br>: 30 min<br>20<br>: 1 h<br>21<br>: 2 h<br>22<br>: 3 h<br>23<br>: 5 h<br>24<br>: 12 h<br>25<br>: 24 h<br>26 to 255 : reserved, shall not be used|<br>[0 to 25]|FB|
|20.014|DPT_Beaufort_Wind_Force<br>_Scale|_field1_ = Wind Force Scale<br>0 <br>: calm (no wind)<br>1 <br>: light air<br>2 <br>: light breeze<br>3 <br>: gentle breeze<br>4 <br>: moderate breeze<br>5 <br>: fresh breeze<br>6 <br>:  strong breeze<br>7 <br>: near gale / moderate gale<br>8 <br>: fresh gale<br>9 <br>: strong gale<br>10<br>: whole gale / storm<br>11<br>: violent storm<br>12<br>: hurricane<br>13 to 255 : reserved, shall not be<br>used|[0 to 12]|G|
|20.014|DPT_Beaufort_Wind_Force<br>_Scale|APPLICATIONS: <br>ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE <br>SEE ALSO: <br>9.005<br>DPT_VALUE_WSP <br>9.028<br>DPT_VALUE_WSP_KMH|APPLICATIONS: <br>ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE <br>SEE ALSO: <br>9.005<br>DPT_VALUE_WSP <br>9.028<br>DPT_VALUE_WSP_KMH|APPLICATIONS: <br>ENVIRONMENTAL, WIND, BEAUFORT, WIND FORCE <br>SEE ALSO: <br>9.005<br>DPT_VALUE_WSP <br>9.028<br>DPT_VALUE_WSP_KMH|


-----

APPLICATIONS THIS DPT SHALL ONLY BE USED FOR PARAMETERS FOR THE FBS FOR WHICH IT IS EXPLICITLY
SPECIFIED IN [04].
EXAMPLE 12 SEE PARAMETER SETTINGS IN [05]

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.017|DPT_SensorSelect|_field1_ = SensorSelect<br>0 <br>: inactive<br>1 <br>: digital input not inverted<br>2 <br>: digital input inverted<br>3 <br>: analog input -> 0 % to<br>100%<br>4 <br>: temperature sensor input<br>5 to 255 : resered, shall not be used|[0 to 4]|G|
|20.020|DPT_ActuatorConnectType|_field1 = ActuatorConnectType_<br>0 <br>: reserved<br>1 <br>: SensorConnection<br>2 <br>: ControllerConnection<br>3 to 255 : reserved, shall not be used|<br>[1 to 2]|G|
|20.021|DPT_Cloud_Cover|_field1_ = CloudCover<br>0:<br>Cloudless<br>(Ger: “wolkenlos”) <br>1:<br>Sunny<br>(Ger: “sonnig”) <br>2:<br>Sunshiny<br>(Ger: “heiter”) <br>3:<br>Lightly cloudy<br>(Ger: “leicht bewölkt”) <br>4:<br>Scattered clouds<br>(Ger: “wolkig“) <br>5:<br>Cloudy<br>(Ger: “bewölkt“) <br>6:<br>a) <br>(Ger: “stark bewölkt”) <br>7:<br>a) <br>(Ger: “fast bedeckt) <br>8:<br>Overcast<br>(Ger: “bedeckt”) <br>9:<br>Sky obstructed from view<br>(Ger: “Himmel nicht erkennbar”) <br>10 to 255 reserved; shall not be used<br>a Not all okta values have a name.|[0 to 9]<br>|G|
|20.022|DPT_PowerReturnMode|field1 =_power return mode_ <br>0 <br>: do not send<br>1 <br>: send always<br>2 <br>: send if value changed<br>during powerdown<br>3 …255 : not used; reserved|[0 … 2]|FB|
|20.022|APPLICATIONS THISDPT SHALL ONLY BE USED FOR PARAMETERS FOR THEFBS FOR WHICH IT IS EXPLICITLY<br>SPECIFIED IN[04].<br>EXAMPLE 12<br>SEE PARAMETER SETTINGS IN [05]|APPLICATIONS THISDPT SHALL ONLY BE USED FOR PARAMETERS FOR THEFBS FOR WHICH IT IS EXPLICITLY<br>SPECIFIED IN[04].<br>EXAMPLE 12<br>SEE PARAMETER SETTINGS IN [05]|APPLICATIONS THISDPT SHALL ONLY BE USED FOR PARAMETERS FOR THEFBS FOR WHICH IT IS EXPLICITLY<br>SPECIFIED IN[04].<br>EXAMPLE 12<br>SEE PARAMETER SETTINGS IN [05]|APPLICATIONS THISDPT SHALL ONLY BE USED FOR PARAMETERS FOR THEFBS FOR WHICH IT IS EXPLICITLY<br>SPECIFIED IN[04].<br>EXAMPLE 12<br>SEE PARAMETER SETTINGS IN [05]|


-----

#### 3.22 Datapoint Type B8

##### 3.22.1 Datapoint Type “General Status”

Format: 1 octet: Z8

octet nr. 1

field names Attributes

b7b6b5b4b3b2b1b0

encoding b b b b b b b b

Resol.: (not applicable)

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

21.001 DPT_StatusGen See below See below G

**Data fields** **Description** **Encoding** **Unit** **Range**

Attributes Bit

 - OutOfService b0 corresponding Datapoint value is out of 0 = false none {0,1}
service 1 = true

 - Fault b1 corresponding Datapoint Main value is 0 = false none {0,1}
corrupted due to a failure 1 = true

 - Overridden b2 corresponding Datapoint Main value is 0 = false none {0,1}
overridden 1 = true

 - InAlarm b3 corresponding Datapoint is in alarm 0 = false none {0,1}
1 = true

 - AlarmUnAck b4 alarm status of corresponding Datapoint is 0 = false none {0,1}
not acknowledged 1 = true

 - reserved b5, b6, b7 reserved, set 0 NA NA NA

###### Standard mode: This DPT represents the STATUS information of the LTE Z8 information.

 In the LTE model, the Z8 field is always combined with a Datapoint main value (together thus building a compound structure). If in Standard Mode DPT_StatusGen is used, the corresponding Datapoint is always additional information to another Datapoint that represents the main value.

EXAMPLE 13 Datapoint 1: temperature sensor value with DPT_Value_Temp
EXAMPLE 14 Datapoint 2: additional status of Datapoint 1 with DPT_StatusGen
###### The 2 Datapoints Main value and Status value cannot be transmitted simultaneously. Therefore, inconsistencies between the Main value and the Status information may occur. The Status information is mainly used for visualisation.

 Restriction: Only the STATUS part of the Z8 information can be transmitted. Execution of the Z8 COMMAND feature is not possible in Standard Mode.

 Please refer as well to the description of STATUS/COMMAND Z8 in clause 4.1.

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Resol.:<br>PDT:|1 octet: Z<br>8<br>1<br>Attributes<br>bbbbbbbb<br>7 6 5 4 3 2 1 0<br>b b b b b b b b<br>(not applicable)<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|21.001|DPT_StatusGen|See below|See below|G|

|Data fields|Description|Col3|Encoding|Unit|Range|
|---|---|---|---|---|---|
|Attributes|Bit|||||
|- OutOfService|b0|corresponding Datapoint value is out of<br>service|0 = false<br>1 = true|none|{0,1}|
|- Fault|b1|corresponding Datapoint Main value is<br>corrupted due to a failure|0 = false<br>1 = true|none|{0,1}|
|- Overridden|b2|corresponding Datapoint Main value is<br>overridden|0 = false<br>1 = true|none|{0,1}|
|- InAlarm|b3|corresponding Datapoint is in alarm|0 = false<br>1 = true|none|{0,1}|
|- AlarmUnAck|b4|alarm status of corresponding Datapoint is<br>not acknowledged|0 = false<br>1 = true|none|{0,1}|
|- reserved|b5, b6,b7|reserved, set 0|NA|NA|NA|


-----

##### 3.22.2 Datapoint Type “Device Control”

Format: 1 octet: B8

octet nr. 1

field names DeviceControl

b7b6b5b4b3b2b1b0

encoding b b b b b b b b

Resol.: (not applicable)

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding, range: Use:

21.002 DPT_Device_Control See below System: PID_DEVICE_CONTROL

**Bit** **Data fields** **Description** **Encoding** **Unit** **Range**

b0 UserStopped The user application is stopped. 0 = false none {0,1}
1 = true

b1 OwnIA A datagram with the own Individual Address 0 = false none {0,1}
as Source Address has been received 1 = true

b2 VerifyMode Verify Mode is on. 0 = false none {0,1}
1 = true

b3…b7 Reserved reserved, set 0 NA NA NA

#### 3.23 Datapoint Types N2

|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>DeviceControl<br>bbbbbbbb<br>7 6 5 4 3 2 1 0<br>b b b b b b b b<br>(not applicable)<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|
|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding, range:|Use:|
|21.002|DPT_Device_Control|See below|System: PID_DEVICE_CONTROL|

|Bit|Data fields|Description|Encoding|Unit|Range|
|---|---|---|---|---|---|
|b0|UserStopped|The user application is stopped.|0 = false<br>1 = true|none|{0,1}|
|b1|OwnIA|A datagram with the own Individual Address<br>as Source Address has been received|0 = false<br>1 = true|none|{0,1}|
|b2|VerifyMode|Verify Mode is on.|0 = false<br>1 = true|none|{0,1}|
|b3…b7|Reserved|reserved, set 0|NA|NA|NA|

|Col1|Col2|Col3|Col4|Col5|Col6|s|
|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Unit:<br>Resol.:<br>PDT:|2 bit: N<br>2<br>1<br>s<br>NN<br>None<br>(not applicable)<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Use:|Encoding:|
|23.001|DPT_OnOffAction|[00b…11b]|FB|s <br>00b = off<br>01b = on<br>10b = off/on<br>11b = on/off|
|23.002|DPT_Alarm_Reaction|[00b…10b]|FB|s <br>00b = no alarm is used<br>01b = alarm position is UP<br>10b = alarm position is DOWN<br>(11b = reserved; shall not be used)|


-----

00b = Up
01b = Down
10b = UpDown
11b = DownUp

#### 3.24 Datapoint Type DPT_VarString_8859_1

Format: variable length: A[n]

N MSB ... 1 LSB

A … 00

Encoding: This Datapoint Type shall be used to transmit strings of textual characters. The length is not
_fixed, but variable; the string shall be terminated by a single character NULL (00h). No length_
information shall be transmitted in the APDU [a). ]

Handling non-supported lengths:

           - Data Link Layer: _neglect the frame_
           - Application Layer: _cut to the maximum supported length, keeping the_
characters at the beginning, i.e. starting with the MSB.
           - Interface Object Server
The implicit array strucure of a property value of an Interface Object property can be used
to store multiple strings. Every array element shall contain exactly one string. These array
elements can have a different length. The APDU's used to read/write these strings shall
only contain entire strings; exactly one NULL-character shall appear between string
elements and at the end of the last string[18)]. This means that strings that do not fit in the
supported array length shall not be cut off. If a property value is read which would lead to
an APDU longer than the length supported by the server, the server shall respond with a
negative response, i.e. the APDU shall not be limited to the number of elements that does
fit it, but instead contain no property value data. The client can then read a smaller number
of array elements.
Each character shall be encoded according to ISO 8859-1.

EXAMPLE 15 ‘KNX is OK’ is encoded as follows:
4Bh 4Eh 58h 20h 69h 73h 20h 4Fh 4Bh 00h
EXAMPLE 16 ‘This format allows transmission of very long strings!’ is encoded as follows:

54h 68h 69h 73h 20h 66h 6Fh 72h 6Dh 61h 74h 20h 61h 6Ch 6Ch 6Fh 77h 73h 20h 74h
72h 61h 6Eh 73h 6Dh 69h 73h 73h 69h 6Fh 6Eh 20h 6Fh 66h 20h 76h 65h 72h 79h 20h
6Ch 6Fh 6Eh 67h 20 73h 74h 72h 69h 6Eh 67h 73h 21h 00h

Unit: Not applicable.

PDT:

**Datapoint Types**

ID: Name: Range Usage:

24.001 DPT_VarString_8859_1 Acc. DPT 4.002 (DPT_Char_8859_1) General

APPLICATIONS: TEXT, STRING, VARIABLE LENGTH, ISO 8859-1

a) Length information is implicitly in the frame (by the Data Link Layer)

18) The NULL character is actually part of the DPT_VarString_8859_1 format.

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Range:|Use:|Encoding:|
|23.003|DPT_UpDown_Action|[00b…11b]|FB|s <br>00b = Up<br>01b = Down<br>10b = UpDown<br>11b = DownUp|

|Format:<br>Encoding:<br>Unit:<br>PDT:|variable length: A[n]<br>N MSB ... 1 LSB<br>A … 00<br>This Datapoint Type shall be used to transmit strings of textual characters. The length is not<br>fixed, but variable; the string shall be terminated by a single character NULL (00h). No length<br>information shall be transmitted in the APDU a).<br>Handling non-supported lengths:<br>- Data Link Layer: neglect the frame<br>- Application Layer: cut to the maximum supported length, keeping the<br>characters at the beginning, i.e. starting with the MSB.<br>- Interface Object Server<br>The implicit array strucure of a property value of an Interface Object property can be used<br>to store multiple strings. Every array element shall contain exactly one string. These array<br>elements can have a different length. The APDU's used to read/write these strings shall<br>only contain entire strings; exactly one NULL-character shall appear between string<br>elements and at the end of the last string18). This means that strings that do not fit in the<br>supported array length shall not be cut off. If a property value is read which would lead to<br>an APDU longer than the length supported by the server, the server shall respond with a<br>negative response, i.e. the APDU shall not be limited to the number of elements that does<br>fit it, but instead contain no property value data. The client can then read a smaller number<br>of array elements.<br>Each character shall be encoded according to ISO 8859-1.<br>EXAMPLE 15 ‘KNX is OK’ is encoded as follows:<br>4Bh 4Eh 58h 20h 69h 73h 20h 4Fh 4Bh 00h<br>EXAMPLE 16 ‘This format allows transmission of very long strings!’ is encoded as follows:<br>54h 68h 69h 73h 20h 66h 6Fh 72h 6Dh 61h 74h 20h 61h 6Ch 6Ch 6Fh 77h 73h 20h 74h<br>72h 61h 6Eh 73h 6Dh 69h 73h 73h 69h 6Fh 6Eh 20h 6Fh 66h 20h 76h 65h 72h 79h 20h<br>6Ch 6Fh 6Eh 67h 20 73h 74h 72h 69h 6Eh 67h 73h 21h 00h<br>Not applicable.|Col3|Col4|
|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range|Usage:|
|24.001|DPT_VarString_8859_1|Acc. DPT 4.002 (DPT_Char_8859_1)|General|
|24.001|DPT_VarString_8859_1|<br>APPLICATIONS: TEXT, STRING, VARIABLE LENGTH, ISO 8859-1|<br>APPLICATIONS: TEXT, STRING, VARIABLE LENGTH, ISO 8859-1|
|a) Length information is implicitly in the frame (by the Data Link Layer)|a) Length information is implicitly in the frame (by the Data Link Layer)|a) Length information is implicitly in the frame (by the Data Link Layer)|a) Length information is implicitly in the frame (by the Data Link Layer)|


-----

#### 3.25 Datapoint Type DPT_SceneInfo

Format: 1 octet: r1B1U6

octet nr. 1

field names R B SceneNumber

encoding 0 b U U U U U U

Encoding: All values binary encoded.

Range: See below.

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_GENERIC_01

**Datapoint Types**

ID: Name: Encoding: Range: Use:

26.001 DPT_SceneInfo r Reserved (0) none G

B info: [0, 1]
0 = scene is active
1 = scene is inactive

SceneNumber Scene number [0 … 63]

NOTE 16 DPT_SceneInfo allows numbering the scene from 0 to 63. KNX Association recommends displaying these
scene numbers in ETS™, other software and controllers numbered from 1 to 64, this is, with an offset of 1 compared
to the actual transmitted value.

|R|B|Scene-<br>Number|
|---|---|---|

|0|b|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|1 octet: r B U<br>1 1 6<br>1<br>R B Scene-<br>Number<br>0 b U U U U U U<br>All values binary encoded.<br>See below.<br>Not applicable.<br>Not applicable.<br>PDT GENERIC 01<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Encoding:|Range:|Use:|
|26.001|DPT_SceneInfo|r|Reserved (0)|none|G|
|26.001|DPT_SceneInfo|B|info:<br>0 = scene is active<br>1 = scene is inactive|[0, 1]|[0, 1]|
|26.001|DPT_SceneInfo|SceneNumber|Scene number|[0 … 63]|[0 … 63]|


-----

#### 3.26 Datatype B32

##### 3.26.1 Datapoint Type “Combined Info On Off”

Format: 4 octets: B32

octet nr. 4 MSB 3 2

field names

encoding B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B

Encoding: Value of all fields binary coded

Range: All fields: {0, 1}

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_GENERIC_04

**Datapoint Types**

ID: Name:

27.001 DPT_CombinedInfoOnOff

a) This DPT shall only be used for status outputs.

|m15|m14|m13|m12|Col5|m11 m10|m9|m8|
|---|---|---|---|---|---|---|---|
|B|B|B|B|B|B|B|B|

|m7|m6|m5|m4|m3|m2|m1|m0|
|---|---|---|---|---|---|---|---|
|B|B|B|B|B|B|B|B|

|s15|s14|s13|s12|s11|s10|s9|s8|
|---|---|---|---|---|---|---|---|
|B|B|B|B|B|B|B|B|

|s7|s6|s5|s4|s3|s2|s1|s0|
|---|---|---|---|---|---|---|---|
|B|B|B|B|B|B|B|B|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|4 octets: B<br>32<br>4 3 2 1<br>MSB LSB<br>m15 m14 m13 m12 m11 m10 m9 m8 m7 m6 m5 m4 m3 m2 m1 m0 s15 s14 s13 s12 s11 s10 s9 s8 s7 s6 s5 s4 s3 s2 s1 s0<br>B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B<br>Value of all fields binary coded<br>All fields: {0, 1}<br>Not applicable.<br>Not applicable.<br>PDT GENERIC 04<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|27.001|DPT_CombinedInfoOnOff|General a)|
|<br>a) This DPT shall only be used for status outputs.|<br>a) This DPT shall only be used for status outputs.|<br>a) This DPT shall only be used for status outputs.|

|Datafields|Bit #|Description|Encoding|
|---|---|---|---|
|s0|0|Info On Off Output 1|0 = output state is Off<br>1 = output state is On|
|s1|1|Info On Off Output 2|0 = output state is Off<br>1 = output state is On|
|s2|2|Info On Off Output 3|0 = output state is Off<br>1 = output state is On|
|s3|3|Info On Off Output 4|0 = output state is Off<br>1 = output state is On|
|s4|4|Info On Off Output 5|0 = output state is Off<br>1 = output state is On|
|s5|5|Info On Off Output 6|0 = output state is Off<br>1 = output state is On|
|s6|6|Info On Off Output 7|0 = output state is Off<br>1 = output state is On|
|s7|7|Info On Off Output 8|0 = output state is Off<br>1 = output state is On|
|s8|8|Info On Off Output 9|0 = output state is Off<br>1 = output state is On|
|s9|9|Info On Off Output 10|0 = output state is Off<br>1 = output state is On|
|s10|10|Info On Off Output 11|0 = output state is Off<br>1 = output state is On|
|s11|11|Info On Off Output 12|0 = output state is Off<br>1 = output state is On|
|s12|12|Info On Off Output 13|0 = output state is Off<br>1 = output state is On|
|s13|13|Info On Off Output 14|0 = output state is Off<br>1 = output state is On|
|s14|14|Info On Off Output 15|0 = output state is Off<br>1 = output state is On|
|s15|15|Info On Off Output 16|0 = output state is Off<br>1 = output state is On|


-----

m0 16 Mask Bit Info On Off Output 1 0 = output state is not valid
1 = output state is valid
m1 17 Mask Bit Info On Off Output 2 0 = output state is not valid
1 = output state is valid
m2 18 Mask Bit Info On Off Output 3 0 = output state is not valid
1 = output state is valid
m3 19 Mask Bit Info On Off Output 4 0 = output state is not valid
1 = output state is valid
m4 20 Mask Bit Info On Off Output 5 0 = output state is not valid
1 = output state is valid
m5 21 Mask Bit Info On Off Output 6 0 = output state is not valid
1 = output state is valid
m6 22 Mask Bit Info On Off Output 7 0 = output state is not valid
1 = output state is valid
m7 23 Mask Bit Info On Off Output 8 0 = output state is not valid
1 = output state is valid
m8 24 Mask Bit Info On Off Output 9 0 = output state is not valid
1 = output state is valid
m9 25 Mask Bit Info On Off Output 10 0 = output state is not valid
1 = output state is valid
m10 26 Mask Bit Info On Off Output 11 0 = output state is not valid
1 = output state is valid
m11 27 Mask Bit Info On Off Output 12 0 = output state is not valid
1 = output state is valid
m12 28 Mask Bit Info On Off Output 13 0 = output state is not valid
1 = output state is valid
m13 29 Mask Bit Info On Off Output 14 0 = output state is not valid
1 = output state is valid
m14 30 Mask Bit Info On Off Output 15 0 = output state is not valid
1 = output state is valid
m15 31 Mask Bit Info On Off Output 16 0 = output state is not valid
1 = output state is valid
If one or more output bits are not used or the output states are not valid then the assigned mask bits of
this outputs shall be set to the value = 0.

|Datafields|Bit #|Description|Encoding|
|---|---|---|---|
|m0|16|Mask Bit Info On Off Output 1|0 = output state is not valid<br>1 = output state is valid|
|m1|17|Mask Bit Info On Off Output 2|0 = output state is not valid<br>1 = output state is valid|
|m2|18|Mask Bit Info On Off Output 3|0 = output state is not valid<br>1 = output state is valid|
|m3|19|Mask Bit Info On Off Output 4|0 = output state is not valid<br>1 = output state is valid|
|m4|20|Mask Bit Info On Off Output 5|0 = output state is not valid<br>1 = output state is valid|
|m5|21|Mask Bit Info On Off Output 6|0 = output state is not valid<br>1 = output state is valid|
|m6|22|Mask Bit Info On Off Output 7|0 = output state is not valid<br>1 = output state is valid|
|m7|23|Mask Bit Info On Off Output 8|0 = output state is not valid<br>1 = output state is valid|
|m8|24|Mask Bit Info On Off Output 9|0 = output state is not valid<br>1 = output state is valid|
|m9|25|Mask Bit Info On Off Output 10|0 = output state is not valid<br>1 = output state is valid|
|m10|26|Mask Bit Info On Off Output 11|0 = output state is not valid<br>1 = output state is valid|
|m11|27|Mask Bit Info On Off Output 12|0 = output state is not valid<br>1 = output state is valid|
|m12|28|Mask Bit Info On Off Output 13|0 = output state is not valid<br>1 = output state is valid|
|m13|29|Mask Bit Info On Off Output 14|0 = output state is not valid<br>1 = output state is valid|
|m14|30|Mask Bit Info On Off Output 15|0 = output state is not valid<br>1 = output state is valid|
|m15|31|Mask Bit Info On Off Output 16|0 = output state is not valid<br>1 = output state is valid|
|If one or more output bits are not used or the output states are not valid then the assigned mask bits of<br>this outputs shall be set to the value= 0.|If one or more output bits are not used or the output states are not valid then the assigned mask bits of<br>this outputs shall be set to the value= 0.|If one or more output bits are not used or the output states are not valid then the assigned mask bits of<br>this outputs shall be set to the value= 0.|If one or more output bits are not used or the output states are not valid then the assigned mask bits of<br>this outputs shall be set to the value= 0.|


-----

###### Usage requirements

 This DPT may only be used for encoding the combined binary output information of a multiple channel binary actuator. It avoids the bus load that is caused by individual single bit state outputs, certainly in case of simultaneous changes (e.g. “all off”).


-----

#### 3.27 Datapoint Type Unicode UTF-8 String A[n]

##### 3.27.1 DPT_UTF-8

|Char. number<br>range<br>(hexadecimal)|UTF-8 octet sequence<br>(binary)|Remark|
|---|---|---|
|U+0000 – U+007F|0xxxxxxx|ASCII equivalent range;<br>octet begins with zero|
|U+0080 –<br>U+07FF|110xxxxx 10xxxxxx|1st octet begins with 110, the<br>second octet begins with 10.|
|U+0800 –<br>U+FFFF|1110xxxx 10xxxxxx 10xxxxxx|1st octet begins with 1110, the<br>following octets begin with 10.|
|U+10000 –<br>U+10FFFF|11110xxx 10xxxxxx 10xxxxxx<br>10xxxxxx|1st octet begins with 11110, the<br>following octets begin with 10.|

|Format:<br>Encoding:<br>Range:<br>Unit:|A[n]<br>N MSB ... 1 LSB<br>A … 00<br>This Datapoint Type shall be used to transmit Unicode strings, whereas the UTF-8 encoding<br>scheme shall be used for Unicode Transformation to data contents for transmission.<br>The data length for one character is variable from 1 octet to 4 octets. Each character shall be<br>encoded according to Unicode Transformation Format UTF-8:<br>Char. number<br>UTF-8 octet sequence<br>range Remark<br>(binary)<br>(hexadecimal)<br>U+0000 – U+007F 0xxxxxxx ASCII equivalent range;<br>octet begins with zero<br>U+0080 – 110xxxxx 10xxxxxx 1st octet begins with 110, the<br>U+07FF second octet begins with 10.<br>U+0800 – 1110xxxx 10xxxxxx 10xxxxxx 1st octet begins with 1110, the<br>U+FFFF following octets begin with 10.<br>U+10000 – 11110xxx 10xxxxxx 10xxxxxx 1st octet begins with 11110, the<br>U+10FFFF 10xxxxxx following octets begin with 10.<br>For more information about Unicode please refer to www.unicode.org. The code charts are<br>listed there under http://www.unicode.org/charts/. For more information about UTF-8 please<br>refer to www.ietf.org / http://www.ietf.org/rfc/rfc3629.txt.<br>Using UTF-8 the data length for a string (multiple characters) is also not fixed, but variable. The<br>string shall be terminated by the NULL- character (00h). No length information shall be<br>transmitted in the APDU a.<br>Handling of non-supported lengths:<br>- Data Link Layer: neglect the frame<br>- Application Layer: cut to the maximum supported length, keeping the<br>characters at the beginning, i.e. starting with the MSB.<br>- Interface Object Server<br>The implicit array structure of a Property Value of an Interface Object Property can be used to<br>store multiple strings. Every array element shall contain exactly one string. These array<br>elements can have a different length. The APDUs used to read/write these strings shall only<br>contain entire strings; exactly one NULL character shall appear between string elements and at<br>the end of the last string. This means that strings that do not fit in the supported array length<br>shall not be cut off. If a Property Value is read that would lead to an APDU longer than the<br>length supported by the server, the server shall respond with a negative response, i.e. the<br>APDU shall not be limited to the number of elements that does fit it, but instead contain no<br>Property Value data. The client can then read a smaller number of array elements.<br>U+000000 … U+10FFFF (220+216)<br>None|
|---|---|
|a <br>Length information is implicitly in the frame (by the Data Link Layer)<br>b <br>When writing about a Unicode character, it is normal to write "U+" followed by a hexadecimal<br>number indicating the character's code point. For code points in the Basic Multilingual Plane (BMP),<br>four digits are used; for code points outside the BMP, five or six digits are used, as required.|a <br>Length information is implicitly in the frame (by the Data Link Layer)<br>b <br>When writing about a Unicode character, it is normal to write "U+" followed by a hexadecimal<br>number indicating the character's code point. For code points in the Basic Multilingual Plane (BMP),<br>four digits are used; for code points outside the BMP, five or six digits are used, as required.|


-----

APPLICATIONS: TEXT, STRING, VARIABLE LENGTH, UTF-8

###### UTF-8

 UTF-8 stands for Unicode Transformation Format-8. It is an octet (8 bit) lossless encoding of Unicode characters.

 UTF-8 is standardized as RFC 3629 / STD 63 (2003), which establishes UTF-8 as a standard Internet Protocol element.

 UTF-8 uses one to four octets per character, depending on the Unicode symbol. Only one octet is needed to encode the 128 US-ASCII characters (Unicode range U+0000 to U+007F). Two octets are needed for Latin letters with diacritics, combining diacritics and for Greek, Cyrillic, Armenian, Hebrew, Arabic, Syriac and Thanna (Unicode range U+0080-U+07FF). Three octets are needed for the rest of the Basic multilingual plane (which contains virtually all characters in common use). Four octets are needed for characters in other planes of Unicode. Four octets may seem like a lot for one character (code point). However, code points outside the Basic Multilingual Plane are generally very rare. Furthermore, UTF-16 (the main alternative to UTF-8) also needs four octets for these code points. Whether UTF-8 or UTF-16 is more efficient depends on the range of code points being used.

 In UTF-8, characters from the range U+0000 to U+10FFFF (the UTF-16 accessible range) are encoded using sequences of 1 to 4 octets. The only octet of a "sequence" of one has the higher-order bit set to 0, the remaining 7 bits being used to encode the character number. In a sequence of n octets, n > 1, the initial octet has the n higher-order bits set to 1, followed by a bit set to 0. The remaining bit(s) of that octet contain bits from the number of the character to be encoded. The following octet(s) all have the higher-order bit set to 1 and the following bit set to 0, leaving 6 bit in each to contain bits from the character to be encoded.

 The table below summarizes the format of these different octet types. The letter x indicates bits available for encoding bits of the character number.

Char. number range UTF-8 octet sequence
(hexadecimal) (binary)

U+0000 – U+007F 0xxxxxxx

U+0080 – U+07FF 110xxxxx 10xxxxxx

U+0800 – U+FFFF 1110xxxx 10xxxxxx 10xxxxxx

U+10000 – U+10FFFF 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx

|Datapoint Types|Col2|Col3|Col4|
|---|---|---|---|
|ID:|Name:|Range|Usage:|
|28.001|DPT_UTF-8|U+0000 … U+10FFFF (220+216)|General|
|28.001|<br>APPLICATIONS: TEXT, STRING, VARIABLE LENGTH, UTF-8|<br>APPLICATIONS: TEXT, STRING, VARIABLE LENGTH, UTF-8|<br>APPLICATIONS: TEXT, STRING, VARIABLE LENGTH, UTF-8|

|Char. number range<br>(hexadecimal)|UTF-8 octet sequence<br>(binary)|
|---|---|
|U+0000 – U+007F|0xxxxxxx|
|U+0080 – U+07FF|110xxxxx 10xxxxxx|
|U+0800 – U+FFFF|1110xxxx 10xxxxxx 10xxxxxx|
|U+10000 – U+10FFFF|11110xxx 10xxxxxx 10xxxxxx 10xxxxxx|


-----

#### 3.28 Datapoint Types V64

##### 3.28.1 DPTs for electrical energy

Format: 8 octets: V64

octet nr 8 MSB 7 6 5

field names SignedValue

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr 4 3 2 1 LSB

field names SignedValue

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

Encoding: Two’s complement notation

Range: SignedValue = [9 223 372 036 854 775 808 to 9 223 372 036 854 775 807]

PDT PDT_GENERIC_08

**Datapoint Types**

ID: Name: Range: Unit: Resol.: Use:

29.010 DPT_ActiveEnergy_V64 -9 223 372 036 854 775 808 Wh to Wh 1 Wh G[ a]
9 223 372 036 854 775 807 Wh

29.011 DPT_ApparantEnergy_V64 -9 223 372 036 854 775 808 VAh to VAh 1 VAh G[ a]
9 223 372 036 854 775 807 VAh

29.012 DPT_ReactiveEnergy_V64 -9 223 372 036 854 775 808 VARh to VARh 1 VARh G[ a]
9 223 372 036 854 775 807 VARh

a
Any Datapoint shall only be encoded with format V64 according either DPT_ActiveEnergy_V64,
DPT_ApparantEnergy_V64 or DPT_ ReactiveEnergy_V64 if also a Datapoint with the V32 encoding
according either DPT_ActiveEnergy, or DPT_ApparantEnergy or DPT_ReactiveEnergy respectively
is implemented. No DPT with encoding V64 shall be encoded unless also a DP with the V32 and
same unit and resolution is encoded.

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT|Col2|8 octets: V<br>64<br>8 7 6 5<br>MSB<br>SignedValue<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>4 3 2 1<br>LSB<br>SignedValue<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>Two’s complement notation<br>SignedValue = [9 223 372 036 854 775 808 to 9 223 372 036 854 775 807]<br>PDT GENERIC 08<br>_ _|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Range:|Unit:|Resol.:|Use:|
|29.010|DPT_ActiveEnergy_V64|DPT_ActiveEnergy_V64|-9 223 372 036 854 775 808 Wh to<br>9 223 372 036 854 775 807 Wh|Wh|1 Wh|G a|
|29.011|DPT_ApparantEnergy_V64|DPT_ApparantEnergy_V64|-9 223 372 036 854 775 808 VAh to<br>9 223 372 036 854 775 807 VAh|VAh|1 VAh|G a|
|29.012|DPT_ReactiveEnergy_V64|DPT_ReactiveEnergy_V64|-9 223 372 036 854 775 808 VARh to<br>9 223 372 036 854 775 807 VARh|VARh|1 VARh|G a|
|a <br>Any Datapoint shall only be encoded with format V64 according either DPT_ActiveEnergy_V64,<br>DPT_ApparantEnergy_V64 or DPT_ ReactiveEnergy_V64 if also a Datapoint with the V32 encoding<br>according either DPT_ActiveEnergy, or DPT_ApparantEnergy or DPT_ReactiveEnergy respectively<br>is implemented. No DPT with encoding V64 shall be encoded unless also a DP with the V32 and<br>same unit and resolution is encoded.|a <br>Any Datapoint shall only be encoded with format V64 according either DPT_ActiveEnergy_V64,<br>DPT_ApparantEnergy_V64 or DPT_ ReactiveEnergy_V64 if also a Datapoint with the V32 encoding<br>according either DPT_ActiveEnergy, or DPT_ApparantEnergy or DPT_ReactiveEnergy respectively<br>is implemented. No DPT with encoding V64 shall be encoded unless also a DP with the V32 and<br>same unit and resolution is encoded.|a <br>Any Datapoint shall only be encoded with format V64 according either DPT_ActiveEnergy_V64,<br>DPT_ApparantEnergy_V64 or DPT_ ReactiveEnergy_V64 if also a Datapoint with the V32 encoding<br>according either DPT_ActiveEnergy, or DPT_ApparantEnergy or DPT_ReactiveEnergy respectively<br>is implemented. No DPT with encoding V64 shall be encoded unless also a DP with the V32 and<br>same unit and resolution is encoded.|a <br>Any Datapoint shall only be encoded with format V64 according either DPT_ActiveEnergy_V64,<br>DPT_ApparantEnergy_V64 or DPT_ ReactiveEnergy_V64 if also a Datapoint with the V32 encoding<br>according either DPT_ActiveEnergy, or DPT_ApparantEnergy or DPT_ReactiveEnergy respectively<br>is implemented. No DPT with encoding V64 shall be encoded unless also a DP with the V32 and<br>same unit and resolution is encoded.|a <br>Any Datapoint shall only be encoded with format V64 according either DPT_ActiveEnergy_V64,<br>DPT_ApparantEnergy_V64 or DPT_ ReactiveEnergy_V64 if also a Datapoint with the V32 encoding<br>according either DPT_ActiveEnergy, or DPT_ApparantEnergy or DPT_ReactiveEnergy respectively<br>is implemented. No DPT with encoding V64 shall be encoded unless also a DP with the V32 and<br>same unit and resolution is encoded.|a <br>Any Datapoint shall only be encoded with format V64 according either DPT_ActiveEnergy_V64,<br>DPT_ApparantEnergy_V64 or DPT_ ReactiveEnergy_V64 if also a Datapoint with the V32 encoding<br>according either DPT_ActiveEnergy, or DPT_ApparantEnergy or DPT_ReactiveEnergy respectively<br>is implemented. No DPT with encoding V64 shall be encoded unless also a DP with the V32 and<br>same unit and resolution is encoded.|a <br>Any Datapoint shall only be encoded with format V64 according either DPT_ActiveEnergy_V64,<br>DPT_ApparantEnergy_V64 or DPT_ ReactiveEnergy_V64 if also a Datapoint with the V32 encoding<br>according either DPT_ActiveEnergy, or DPT_ApparantEnergy or DPT_ReactiveEnergy respectively<br>is implemented. No DPT with encoding V64 shall be encoded unless also a DP with the V32 and<br>same unit and resolution is encoded.|


-----

#### 3.29 Datapoint Type DPT_AlarmInfo

Format: 6 octet: U8N8N8N8B8B8

octet nr. 6 MSB 5 4 3 2

field names LogNumber AlarmPriority Application- ErrorClass Attributes
Area

encoding U U U U U U U U N N N N N N N N N N N N N N N N N N N N N N N N 0 0 B B B B B B

octet nr. 1 LSB

field names AlarmStatusAttributes

octet nr. 0 0 0 0 0 B B B

Encoding: binary encoded values

Unit: not applicable

Resol.: not applicable

PDT: PDT_ALARM_INFO (alt: PDT_GENERIC_06)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

219.001 DPT_AlarmInfo LogNumber: U8 Log Number [0 … 255] FB´s

AlarmPriority: N8 Alarm Priority [0 … 2] Alarm
See DPT_Priority. Source,
3 priorities Alarm Sink
0 = highest priority;
for “no priority”, ‘03h is
used (=’void’)

ApplicationArea: N8 Application Area see Note 4

ErrorClass: N8 Error Class see Note 5

Attributes: B8 attributes: Boolean

             - B0: Ack_Sup 0 = False, 1 = True {0, 1}

             - B1: TimeStamp_Sup 0 = False, 1 = True {0, 1}

             - B2: AlarmText_Sup 0 = False, 1 = True {0, 1}

             - B3: ErrorCode_Sup 0 = False, 1 = True {0, 1}

              - B4 … B7: reserved Fixed to 0              
AlarmStatusAttributes: B8 Alarm Status (attributes)

               - B0: InAlarm 0 = False, 1 = True {0, 1}

             - B1: AlarmUnAck 0 = False, 1 = True {0, 1}

              - B2: Locked 0 = False, 1 = True {0, 1}

              - B3 … B7: reserved Fixed to 0              
###### Note 1

 Alarm messages contain an ‘Application area’ information to allow filtering of alarm messages in subsystems. Coding of ‘Application Areas’ see Note 4.

 Note 2

 Examples of (HVAC) Alarm messages of different companies showed that many alarm informations are company specific and only more neutral „error classes” can be standardised.

 Company specific additional information (if necessary) is possible, e.g., in additional Datapoints. Examples of such additional Datapoints are ‘timestamp’ and ‘AlarmText_Log’ in this specification document.

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|0|0|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>octet nr.<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|Col2|6 octet: U N N N B B<br>8 8 8 8 8 8<br>6 5 4 3 2<br>MSB<br>LogNumber AlarmPriority Application- ErrorClass Attributes<br>Area<br>U U U U U U U U N N N N N N N N N N N N N N N N N N N N N N N N 0 0 B B B B B B<br>1<br>LSB<br>AlarmStatus-<br>Attributes<br>0 0 0 0 0 B B B<br>binary encoded values<br>not applicable<br>not applicable<br>PDT ALARM INFO (alt: PDT GENERIC 06)<br>_ _ _ _|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Name:|Encoding:|Encoding:|Range:|Use:|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|LogNumber: U8|Log Number|[0 … 255]|FB´s<br>Alarm<br>Source,<br>Alarm Sink<br> <br>|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|AlarmPriority: N8|Alarm Priority<br>SeeDPT_Priority. <br>3 priorities<br>0 = highest priority;<br>for “no priority”, ‘03h is<br>used (=’void’)|[0 … 2]|[0 … 2]|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|ApplicationArea: N8|Application Area|see Note 4|see Note 4|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|ErrorClass: N8|Error Class|see Note 5|see Note 5|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|Attributes: B8|attributes:|Boolean|Boolean|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|- B0: AckSup|0 = False, 1= True|{0, 1}|{0, 1}|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|_<br>- B1: TimeStampSup|0 = False, 1= True|{0, 1}|{0, 1}|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|_<br>- B2: AlarmTextSup|0 = False, 1= True|{0, 1}|{0, 1}|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|_<br>- B3: ErrorCodeSup|0 = False, 1= True|{0, 1}|{0, 1}|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|_<br>- B4 … B7: reserved|Fixed to 0|-|-|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|AlarmStatusAttributes: B8|Alarm Status (attributes)|||
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|- B0: InAlarm|0 = False, 1= True|{0, 1}|{0, 1}|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|- B1: AlarmUnAck|0 = False, 1= True|{0, 1}|{0, 1}|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|- B2: Locked|0 = False, 1= True|{0, 1}|{0, 1}|
|219.001|DPT_AlarmInfo|DPT_AlarmInfo|- B3 … B7: reserved|Fixed to 0|-|-|


-----

###### Note 3

 B0 in attributes field (Ack_Sup) indicates whether the alarm is a simple error which can never be acknowledged (0) or an alarm with acknowledge and/or ‘alarm reset’ mechanism (1).

 If it is a simple error without acknowledge:

 • the alarm source sends ‘acknowledged’ (bit ‘AlarmUnAck’ = 0) as status information in the alarm state attributes. 

 Note 4

 Coding of ‘Application Area’ (Enumeration):

**Code[ a)]** **Application Area**

0 no fault

1 System & functions of common interest

2 … 9 reserved

10 HVAC General FB´s

11 HVAC Hot Water Heating

12 HVAC Direct Electrical Heating

13 HVAC Terminal Units

14 HVAC VAC

15 … 19 reserved (HVAC)

20 Lighting

21 ..29 reserved (Lighting)

30 Security

31 … 39 reserved (Security)

40 Load Management

41 … 49 Reserved (Load Management)

50 Shutters & Blinds

… …

… 255 not used

a) This coding corresponds to the numbering of parts in Volume 7 of KNX
System Specification.

###### Faults in functions of common interest (Functional Blocks according to Part 7/1) shall be mapped to the application area ‘System’, e.g. a multiple system clock master conflict is a ‘configuration fault’ (see error class coding in Note 6) within application area ‘system’.

 KNX Association Working Group Interworking is responsible for definition of additional ‘application area’ codes.

 Note 5

 Responsibility for Definition of ‘Error Class’ Codes within the Application Areas is in the scope of the KNX Association Application Specification Groups. KNX Association Working Group Interworking is responsible for definition of the ‘Error Class’ Codes within the Application Area ‘System’.

 Note 6 of this document contains the error class coding within application area ‘system’ as a proposal to the HVAC ASG.

 Note 7 of this document contains an error class coding within ‘HVAC’ as a proposal to the HVAC ASG.

|Code a)|Application Area|
|---|---|
|0|no fault|
|1|System & functions of common interest|
|2 … 9|reserved|
|10|HVAC General FB´s|
|11|HVAC Hot Water Heating|
|12|HVAC Direct Electrical Heating|
|13|HVAC Terminal Units|
|14|HVAC VAC|
|15 … 19|reserved (HVAC)|
|20|Lighting|
|21 ..29|reserved (Lighting)|
|30|Security|
|31 … 39|reserved (Security)|
|40|Load Management|
|41 … 49|Reserved (Load Management)|
|50|Shutters & Blinds|
|…|…|
|… 255|not used|
|a) This coding corresponds to the numbering of parts in Volume 7 of KNX<br>System Specification.|a) This coding corresponds to the numbering of parts in Volume 7 of KNX<br>System Specification.|


-----

###### Note 6- Technical Alarm Error Class Coding within Application Area ‘System’

**Code** **Error Class**

0 no fault

1 general device fault
(e.g., RAM, EEPROM, UI, Watchdog, …)

2 communication fault

3 configuration fault

4 HW fault

5 SW fault

6 not used

… not used

255 not used

###### Faults in functions of common interest (Functional Blocks according to Part 7/1) should be mapped to the application area ‘System’, e.g. a multiple system clock master conflict is a ‘configuration fault’.

 KNX Association Working Group Interworking is responsible for definition of additional error class codes within application area ‘system’. 

 Examples:
 • Detection of ‘two devices with same individual address’ causes a configuration fault.
 • Detection of a ‘multiple system clock master conflict’ (without automatic resolution) causes a configuration fault.
 • Detection of failure of a (formerly present) communication partner causes a communication faul.t
 • Timeout detection on the System Clock Signal (heartbeat) causes a communication fault.

 Note 7 - Technical Alarm Error Class Coding within ‘HVAC’ Application Area(s)

**Code** **Error Class**

0 no fault

1 sensor fault

2 process fault /controller fault

3 actuator fault

4 other faults

5 not used

… not used

255 not used

###### The coding above is a proposal and has to be approved by the HVAC Application Specification Group. The ‘HVAC’ ASG is also responsible for definition of additional error class codes within 'HVAC’ application area(s).

|Code|Error Class|
|---|---|
|0|no fault|
|1|general device fault<br>(e.g., RAM, EEPROM, UI, Watchdog, …)|
|2|communication fault|
|3|configuration fault|
|4|HW fault|
|5|SW fault|
|6|not used|
|…|not used|
|255|not used|

|Code|Error Class|
|---|---|
|0|no fault|
|1|sensor fault|
|2|process fault /controller fault|
|3|actuator fault|
|4|other faults|
|5|not used|
|…|not used|
|255|not used|


-----

#### 3.30 Datapoint Type DPT_SerNum

Format: 6 octet: N16U32

octet nr. 6 MSB 5

field names ManufacturerCode

encoding N N N N N N N N N N N N N N N N

octet nr. 4 3 2 1 LSB

field names IncrementedNumber

encoding U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U

Encoding: ManufacturerCode, IncrementedNumber: binary encoded

Range: ManufacturerCode: [0 … 65 535]
IncrementedNumber: [0 … 4 294 967 295]

Unit: none

Resol.: not applicable

PDT: PDT_GENERIC_06

**Datapoint Types**

ID: Name: Range: Unit: Resol.: Use:

221.001 DPT_SerNum See above. See above. See above. G

###### IncrementedNumber shall be incremented with each BAU.

 The owner of the microcontroller shall ensure the global uniqueness of the leading 4 octets within the specific manufacturer’s code space.

#### 3.31 Datapoint Types “Unsigned Relative Value”
###### LTE: compound structure

Format: 2 octets: U8Z8

octet nr 2 MSB 1 LSB

field names RelValue Status
Command

encoding U U U U U U U U Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name: Use:

202.001 DPT_RelValue_Z G

**Data fields** **Description** **Encoding** **Unit** **Range** **Resol.**

RelValue Unsigned relative value U8 % 0 % … 255 % 1 %

Status/Command standard Status/Command Z8 none none none

|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|6 octet: N U<br>16 32<br>6 5<br>MSB<br>ManufacturerCode<br>N N N N N N N N N N N N N N N N<br>4 3 2 1<br>LSB<br>IncrementedNumber<br>U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U<br>ManufacturerCode, IncrementedNumber: binary encoded<br>ManufacturerCode: [0 … 65 535]<br>IncrementedNumber: [0 … 4 294 967 295]<br>none<br>not applicable<br>PDT GENERIC 06<br>_ _|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|ID:|Name:|Range:|Unit:|Resol.:|Use:|
|221.001|221.001|DPT_SerNum|See above.|See above.|See above.|G|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|2 octets: U Z<br>8 8<br>2 1<br>MSB LSB<br>RelValue Status<br>Command<br>U U U U U U U U Z Z Z Z Z Z Z Z<br>PDT GENERIC 02<br>_ _|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Name:|Name:|Name:|Name:|Use:|
|202.001|DPT_RelValue_Z|DPT_RelValue_Z|DPT_RelValue_Z|DPT_RelValue_Z|DPT_RelValue_Z|DPT_RelValue_Z|G|
|<br>**Data fields**|<br>**Data fields**|<br>**Description**|**Encoding**|**Unit**|**Range**|**Resol.**|**Resol.**|
|RelValue|RelValue|Unsigned relative value|U8|%|0 % … 255 %|1 %|1 %|
|Status/Command|Status/Command|standard Status/Command|Z8|none|none|none|none|


-----

###### Standard Mode

 Datapoint Type 202.001 shall in Standard Mode be encoded as a percentage value without the Z8 field. The actually used DPT depends on the Datapoint and shall be defined in the Datapoint specification in the Functional Block.

 Multiple solutions are possible. Solution B) is preferred because there is no mapping of the % value.

 A) DPT_Scaling (5.001)

 Encoding: 0 %…100 %. Full Datapoint Type value: 0 … 255, i.e. 1 % = value 255/100 !

 To be used for valve position control in order to be backwards compatible with legacy valves.

 B) DPT_Percent_U8 (5.004)

 Encoding: 0 %…255 %. Full Datapoint Type value: 0 … 255, i.e. 1 % = value 1.

 To be used for % energy demand etc.

 C) DPT_Value_Humidity (9.0xx) float F16 encoding 

 To be used for air humidity only.

#### 3.32 Datapoint Types “Unsigned Counter Value”
###### LTE: compound structure

Format: 2 octets: U8Z8

octet nr 2 MSB 1 LSB

field names CounterValue Status
Command

encoding U U U U U U U U Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name: Use:

202.002 DPT_UCountValue8_Z G

**Data fields** **Description** **Encoding** **Unit** **Range** **Resol.**

CounterValue Unsigned counter value U8 none 0 … 255 1

Status/Command standard Status/Command Z8 none none none

###### Standard Mode

 DPT_Value_1_Ucount (DPT_ID = 5.010), this is, only the field CounterValue without the Z8 field.

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|2 octets: U Z<br>8 8<br>2 1<br>MSB LSB<br>CounterValue Status<br>Command<br>U U U U U U U U Z Z Z Z Z Z Z Z<br>PDT GENERIC 02<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|202.002|DPT_UCountValue8_Z|G|

|Data fields|Description|Encoding|Unit|Range|Resol.|
|---|---|---|---|---|---|
|CounterValue|Unsigned counter value|U8|none|0 … 255|1|
|Status/Command|standard Status/Command|Z8|none|none|none|


-----

#### 3.33 Datapoint Types “Time Period..._Z”

Format: 3 octets: U16Z8

octet nr 3 MSB 2 LSB 1

field names Status
TimePeriod
Command

encoding U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z

TimePeriod: Values shall be binary coded.
Status/Command: Z8
PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Range: Unit: Resol.:

203.002 DPT_TimePeriodMsec_Z 0 ms … 65 535 ms ms 1 ms G

203.003 DPT_TimePeriod10Msec_Z 0 s … 655,35 s ms 10 ms G

203.004 DPT_TimePeriod100Msec_Z 0 s … 6 553,5 s ms 100 ms G

203.005 DPT_TimePeriodSec_Z 0 s … 65 535 s (≅ 18,2 hours) s 1 s G

203.006 DPT_TimePeriodMin_Z 0 min … 65 535 min (≅ 45,5 days) min 1 min G

203.007 DPT_TimePeriodHrs_Z 0 h … 65 535 h (≅ 7,4 years) h 1 h G

**Data fields** **Description**

TimePeriod Unsigned time value

Status/Command standard Status/Command

###### Standard Mode

 DPT_TimePeriod... (7.002 ... 7.007), only TimePeriod without Z8 field.

#### 3.34 Datapoint Types “Unsigned Flow Rate l/h”
###### LTE: compound structure

Format: 3 octets: U16Z8

octet nr 3 MSB 2 LSB 1

field names Status
FlowRate
Command

encoding U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z

Encoding: U16 (Values shall be binary coded).

Status/Command: Z8
PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name:

203.011 DPT_UFlowRateLiter/h_Z G

|U|U|U|U|U|U|U|U|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|3 octets: U Z<br>16 8<br>3 2 1<br>MSB LSB<br>Status<br>TimePeriod<br>Command<br>U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z<br>TimePeriod: Values shall be binary coded.<br>Status/Command: Z<br>8<br>PDT GENERIC 03<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Resol.:|Use:|
|203.002|DPT_TimePeriodMsec_Z|0 ms … 65 535 ms|ms|1 ms|G|
|203.003|<br>DPT_TimePeriod10Msec_Z|0 s … 655,35 s|ms|10 ms|G|
|203.004|<br>DPT_TimePeriod100Msec_Z|0 s … 6 553,5 s|ms|100 ms|G|
|203.005|<br>DPT_TimePeriodSec_Z|0 s … 65 535 s<br>(≅ 18,2 hours)|s|1 s|G|
|203.006|<br>DPT_TimePeriodMin_Z|0 min … 65 535 min (≅ 45,5 days)|min|1 min|G|
|203.007|<br>DPT_TimePeriodHrs_Z|0 h … 65 535 h<br>(≅ 7,4 years)|h|1 h|G|

|Data fields|Description|
|---|---|
|TimePeriod|Unsigned time value|
|Status/Command|standard Status/Command|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>PDT:|3 octets: U Z<br>16 8<br>3 2 1<br>MSB LSB<br>Status<br>FlowRate<br>Command<br>U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z<br>U (Values shall be binary coded).<br>16<br>Status/Command: Z<br>8<br>PDT GENERIC 03<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|203.011|DPT_UFlowRateLiter/h_Z|G|


-----

Status/Command standard Status/Command Z8 none none none

###### In case of a detected sensor failure the Status Flag ‘Fault’ shall be set. This is a mandatory feature of this DPT.

 In this case in addition the reason of ‘Fault’ may be encoded in the ‘FlowRate’ field (optional feature): see standard Z8 mechanism in 4.1.2.

 Standard Mode

 DPT_Value_Volume_Flux (14.077), without Z8 field.

#### 3.35 Datapoint Types “Unsigned Counter Value”
###### LTE: compound structure

Format: 3 octets: U16Z8

octet nr 3 MSB 2 LSB 1

field names Status
CounterValue
Command

encoding U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Use:

203.012 DPT_UCountValue16_Z G

**Data fields** **Description** **Encoding** **Unit** **Range** **Resol.:**

RelValue Unsigned counter value value binary encoded none 0 … 65 535 1

Status/Command standard Status/Command Z8 none none none

###### Standard Mode

 DPT_Value_2_Ucount (7.001), only CounterValue without Z8 field.

#### 3.36 Datapoint Types “Unsigned Electric Current μA”
###### LTE: compound structure

|Data fields|Description|Encoding|Unit|Range|Resol.|
|---|---|---|---|---|---|
|FlowRate|flow rate|U16|l/h|0 l/h … 655,35 l/h|0,01 l/h|
|Status/Command|standard Status/Command|Z8|none|none|none|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|3 octets: U Z<br>16 8<br>3 2 1<br>MSB LSB<br>Status<br>CounterValue<br>Command<br>U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z<br>PDT GENERIC 03<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|203.012|DPT_UCountValue16_Z|G|

|Data fields|Description|Encoding|Unit|Range|Resol.:|
|---|---|---|---|---|---|
|RelValue|Unsigned counter value|value binary encoded|none|0 … 65 535|1|
|Status/Command|standard Status/Command|Z8|none|none|none|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|3 octets: U Z<br>16 8<br>3 2 1<br>MSB LSB<br>Status<br>ElCurrent<br>Command<br>U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z<br>PDT GENERIC 03<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|203.013|DPT_UElCurrentμA_Z|G|


-----

Status/Command standard Status/Command Z8 none none none

###### In case of a detected sensor failure the Status Flag ‘Fault’ shall be set. This is a mandatory feature of this DPT.

 In this case in addition the reason of ‘Fault’ may be encoded in the ‘ElCurrent’ field (optional feature): see standard Z8 mechanism in 4.1.2.

 Standard Mode

 DPT_Value_Electric_Current (DPT_ID = 14.019), without Z8 field.

#### 3.37 Datapoint Types “Power in kW”
###### LTE: compound structure

Format: 3 octets: U16Z8

octet nr 3 MSB 2 LSB 1

field names Status
Power
Command

encoding U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Use:

203.014 DPT_PowerKW_Z G

**Data fields** **Description** **Encoding Unit** **Range** **Resol.**

Power Electrical power U16 kW 0 kW …65535 kW 1 kW

Status/Command standard Status/Command Z8 none none none

###### Standard Mode

 DPT_Power (DPT_ID = 9.024, format: F16) shall be used.

|Data fields|Description|Encoding|Unit|Range|Resol.|
|---|---|---|---|---|---|
|ElCurrent|electric current value|U16|µA|0 µA … 655,35 μA|0,01 µA|
|Status/Command|standard Status/Command|Z8|none|none|none|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|3 octets: U Z<br>16 8<br>3 2 1<br>MSB LSB<br>Status<br>Power<br>Command<br>U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z<br>PDT GENERIC 03<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|203.014|DPT_PowerKW_Z|G|

|Data fields|Description|Encoding|Unit|Range|Resol.|
|---|---|---|---|---|---|
|Power|Electrical power|U16|kW|0 kW …65535 kW|1 kW|
|Status/Command|standard Status/Command|Z8|none|none|none|


-----

#### 3.38 Datapoint Type “Atmospheric Pressure with Status/Command”
###### LTE: compound structure

Format: 3 octets: U16Z8

octet nr 3 MSB 2 LSB 1

field names Status
AtmPressure
Command

encoding U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Use:

203.015 DPT_AtmPressureAbs_Z G

**Data fields** **Description** **Encoding Unit** **Range** **Resol.**

AtmosphericPressure Atmospheric U16 mbar 0 mbar to 0,05 mbar [*)]
Pressure absolute 1200 mbar
value mbar (and more)

Status/Command standard Z8 none none none
Status/Command

###### In case of a detected sensor failure the Status Flag ‘Fault’ shall be set. This is a mandatory feature of this DPT.

 In this case in addition the reason of ‘Fault’ may be encoded in the ‘AtmosphericPressure’ field (optional feature): see standard Z8 mechanism

 Standard Mode

 DPT_Value_Pres (9.006), unit Pa; only pressure value without Z8 field

NOTE 17 1 Pa = 0,01 mbar = 0,000001 bar = 1 Nm[-2 ]

100 Pa = 1 hPa = 1 mbar

##### 3.38.1 Datapoint Type “DPT_PercentU16_Z”
###### LTE: compound structure

Format: 3 octet: U16Z8

3 MSB 2 LSB 1
PercentValue PercentValue Status

Command

UUUUUUUU UUUUUUUU ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Use:

203.017 DPT_PercentU16_Z See below See below FOCI

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|3 octets: U Z<br>16 8<br>3 2 1<br>MSB LSB<br>Status<br>AtmPressure<br>Command<br>U U U U U U U U U U U U U U U U Z Z Z Z Z Z Z Z<br>PDT GENERIC 03<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|203.015|DPT_AtmPressureAbs_Z|G|

|Data fields|Description|Encoding|Unit|Range|Resol.|
|---|---|---|---|---|---|
|AtmosphericPressure|Atmospheric<br>Pressure absolute<br>value mbar|U16|mbar|0 mbar to<br>1200 mbar<br>(and more)|0,05 mbar*)|
|Status/Command|standard<br>Status/Command|Z8|none|none|none|

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octet: U Z<br>16 8<br>3 MSB 2 LSB 1<br>PercentValue PercentValue Status<br>Command<br>UUUUUUUU UUUUUUUU ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|ID:|Name:|Range:|Unit:|Use:|
|203.017|203.017|DPT_PercentU16_Z|See below|See below|FOCI|


-----

Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_Scaling (5.001), percent value with ~04 % resolution; without Z8 field.

#### 3.39 Datapoint Types “Signed Relative Value”
###### LTE: compound structure

Format: 2 octets: V8Z8

octet nr 2 MSB 1 LSB

field names RelSigned Status
Value Command

encoding V V V V V V V V Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name:

204.001 DPT_RelSignedValue_Z G

**Data fields** **Description** **Encoding** **Unit** **Range** **Resol.**

RelSignedValue Relative signed value % V8 % -100 % … 100 % 1 %

Status/Command standard Status/Command Z8 none none none

###### Standard Mode

 DPT_Percent_V8 (6.001); only RelSignedValue without Z8 field.

|Data fields|Description|Unit / Range|
|---|---|---|
|PercentValue||U16, <br>0,01 % resolution<br>0 % to 655,35 %|
|Status/Command|standard Status/Command|Z8|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|2 octets: V Z<br>8 8<br>2 1<br>MSB LSB<br>RelSigned Status<br>Value Command<br>V V V V V V V V Z Z Z Z Z Z Z Z<br>PDT GENERIC 02<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|204.001|DPT_RelSignedValue_Z|G|

|Data fields|Description|Encoding|Unit|Range|Resol.|
|---|---|---|---|---|---|
|RelSignedValue|Relative signed value %|V8|%|-100 % … 100 %|1 %|
|Status/Command|standard Status/Command|Z8|none|none|none|


-----

#### 3.40 Datapoint Type “DeltaTime...Z”
###### LTE: compound structure

Format: 3 octets: V16Z8

octet nr 3 MSB 2 LSB 1

field names Status
DeltaTime
Command

encoding V V V V V V V V V V V V V V V V Z Z Z Z Z Z Z Z

Encoding: DeltaTime: V16
Status/Command: Z8
PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Range: Unit: Resol.:

205.002 DPT_DeltaTimeMsec_Z -32 768 ms … 32 767 ms ms 1 ms

205.003 DPT_DeltaTime10Msec_Z -327,68 s … 327,67 s ms 10 ms

205.004 DPT_DeltaTime100Msec_Z -3 276,8 s … 3 276,7 s ms

205.005 DPT_DeltaTimeSec_Z -32 768 s … 32 767 s (≅ ± 9,1 hours) s 1 s

205.006 DPT_DeltaTimeMin_Z -32 768 min ... 32 767 min (≅ ± 22,7 min 1 min
days)

205.007 DPT_DeltaTimeHrs_Z -32 768 h ... 32 767 h (≅ ± 3,7 years) h 1 h

**Data fields** **Description** **Unit / Range**

DeltaTime signed delta time value, two’s complement encoding V16, see above

Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_DeltaTime...(DPT 8.002 ... 8.007), without Z8 field.

#### 3.41 Datapoint Type “16 bit Signed Relative Value_Z”
###### LTE: compound structure

Format: 3 octets: V16Z8

octet nr 3 MSB 2 LSB 1

field names Status
RelSignedValue
Command

encoding V V V V V V V V V V V V V V V V Z Z Z Z Z Z Z Z

Encoding: DeltaTime: V16
Status/Command: Z8
PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name:

205.017 DPT_Percent_V16_Z G

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>PDT:|Col2|3 octets: V Z<br>16 8<br>3 2 1<br>MSB LSB<br>Status<br>DeltaTime<br>Command<br>V V V V V V V V V V V V V V V V Z Z Z Z Z Z Z Z<br>DeltaTime: V<br>16<br>Status/Command: Z<br>8<br>PDT GENERIC 03<br>_ _|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Range:|Unit:|Resol.:|Use:|
|205.002|DPT_DeltaTimeMsec_Z|DPT_DeltaTimeMsec_Z|-32 768 ms … 32 767 ms|ms|1 ms|G|
|205.003|<br>DPT_DeltaTime10Msec_Z|<br>DPT_DeltaTime10Msec_Z|-327,68 s … 327,67 s|ms|10 ms|G|
|205.004|<br>DPT_DeltaTime100Msec_Z|<br>DPT_DeltaTime100Msec_Z|-3 276,8 s … 3 276,7 s|ms|100 ms|G|
|205.005|<br>DPT_DeltaTimeSec_Z|<br>DPT_DeltaTimeSec_Z|-32 768 s … 32 767 s (≅ ± 9,1 hours)|s|1 s|G|
|205.006|<br>DPT_DeltaTimeMin_Z|<br>DPT_DeltaTimeMin_Z|-32 768 min ... 32 767 min (≅ ± 22,7<br>days)|min|1 min|G|
|205.007|DPT_DeltaTimeHrs_Z|DPT_DeltaTimeHrs_Z|-32 768 h ... 32 767 h (≅ ± 3,7 years)|h|1 h|G|

|Data fields|Description|Unit / Range|
|---|---|---|
|DeltaTime|signed delta time value, two’s complement encoding|V16, see above|
|Status/Command|standard Status/Command|Z8|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>PDT:|3 octets: V Z<br>16 8<br>3 2 1<br>MSB LSB<br>Status<br>RelSignedValue<br>Command<br>V V V V V V V V V V V V V V V V Z Z Z Z Z Z Z Z<br>DeltaTime: V<br>16<br>Status/Command: Z<br>8<br>PDT GENERIC 03<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|ID:|Name:|Use:|
|205.017|205.017|DPT_Percent_V16_Z|G|


-----

Status/Command standard Status/Command Z8 none none none

###### Standard Mode

 DPT_Percent_V16 (8.010), without Z8 field.

#### 3.42 Datapoint Type DPT_Version

Format: 2 octet: U5U5U6

octet nr. 2 MSB 1 LSB

field names Magic Version Revision
Number Number Number

encoding U U U U U U U U U U U U U U U U

Encoding: All values binary encoded.

Unit: none

PDT: PDT_VERSION(alt: PDT_GENERIC_02)

**Datapoint Types**

ID: Name:

217.001 DPT_Version G

|Data fields|Description|Encoding|Unit|Range|Resol.|
|---|---|---|---|---|---|
|RelSignedValue|Relative signed value with<br>high resolution|V16|%|-327,68% …<br>+327,67%|0,01 %|
|Status/Command|standard Status/Command|Z8|none|none|none|

|Magic<br>Number|Version<br>Number|Revision<br>Number|
|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>PDT:|2 octet: U U U<br>5 5 6<br>2 1<br>MSB LSB<br>Magic Version Revision<br>Number Number Number<br>U U U U U U U U U U U U U U U U<br>All values binary encoded.<br>none<br>PDT VERSION(alt: PDT GENERIC 02)<br>_ _ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|217.001|DPT_Version|G|

|Field|Description|Encoding|Range|Resol.:|
|---|---|---|---|---|
|Magic<br>Number|An increment of the Magic Number means an<br>incompatiblechange:<br> ⇒ no forward or backwards compatibility.<br>This field of the version information is used for compati-<br>bility checks but it is normally not displayed (invisible).<br>If the Magic Number is incremented the Version<br>Number shall also be “incremented” (i.e. higher<br>number).<br>Recommendation: Start with 0.|U5|0 … 31|1|
|Version<br>Number|Version Number is “incremented” (i.e. higher number) if<br>a new version has new features.<br>**Usage:**<br>If the Magic Number is incremented, the Version<br>Number shall be incremented as well. This shall<br>denote an incompatible change.<br>If the Magic Number is not incremented and the<br>Version Number is incremented, this shall denote<br>a backwards compatible extension.<br>Recommendation: Start with 1.|U5|0 … 31|1|
|Revision<br>Number|Revision Number is “incremented” (i.e. higher number)<br>because of minor changes without effects on forward<br>and backward functional compatibility between newer<br>and older version.<br>Recommendation: Start with 0.|U6|0 … 63|1|


-----

DPT_Version is the standardised encoding format of version information e.g. used for software version,
hardware version, data-interface version etc. DPT_Version supports encoding of Version.Revision
information and of a compatibility identifier called ‘Magic Number’.

In practice the available encoding range of M.V.R 0.0.0 ... 31.31.63 is sufficient.

EXAMPLES

**M.V.R.** **M.V.R.** **Meaning**
**previous version** **new version**

0.1.0 0.1.1 minor modification without effect on compatibility
0.1.1 0.2.0 backwards compatible change
0.2.0 1.3.0 incompatible change

###### Encoding of invalid version information

 If the version information that is transferred using DPT_Version is invalid, void or undefined, this shall be indicated by setting the values of each individual field to its maximum encodable value. Invalid version information shall thus be encoded as M.V.R. = 31.31.63.

 Compatibility rules

 Table 2 below specifies the compatibility rules.

 Table 2 – Compatibility rules

**M** **V** **R** **Compatibility**

_=_ _=_ _=_ compatible version

_=_ _=_ _>_ minor changes without effects on forward and backward functional
compatibility between previous and new version

_=_ _>_ any value new version has new features but is still backwards compatible to the previous
version (all old features are supported)

_>_ _=_ any value combination is not allowed:
in case of change of the magic number also the version number shall be
incremented

_>_ _>_ any value no forward or backwards compatibility

Legend

 - This field has been incremented compared to the previous version.
= This field did not change compared to the previous version.

#### 3.43 Datatype V32Z8

##### 3.43.1 Datapoint Type “Volume in Liter”
###### LTE: compound structure

Format: 5 octets: V32Z8

octet nr 5 MSB 4 3 2 LSB 1

Status
field names VolumeLiter
Command

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_05

**Datapoint Types**

ID: Name: Use:

218.001 DPT_VolumeLiter_Z G

|M|V|R|Compatibility|
|---|---|---|---|
|_= _|_= _|_= _|compatible version|
|_= _|_= _|_> _|minor changes without effects on forward and backward functional<br>compatibility between previous and new version|
|_= _|_> _|any value|new version has new features but is still backwards compatible to the previous<br>version (all old features are supported)|
|_> _|_= _|any value|combination is not allowed:<br>in case of change of the magic number also the version number shall be<br>incremented|
|_> _|_> _|any value|no forward or backwards compatibility|
|Legend<br>> <br>This field has been incremented compared to the previous version.<br>= <br>This field did not change compared to the previous version.|Legend<br>> <br>This field has been incremented compared to the previous version.<br>= <br>This field did not change compared to the previous version.|Legend<br>> <br>This field has been incremented compared to the previous version.<br>= <br>This field did not change compared to the previous version.|Legend<br>> <br>This field has been incremented compared to the previous version.<br>= <br>This field did not change compared to the previous version.|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|5 octets: V Z<br>32 8<br>5 4 3 2 1<br>MSB LSB<br>Status<br>VolumeLiter<br>Command<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V Z Z Z Z Z Z Z Z<br>PDT GENERIC 05<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|218.001|DPT_VolumeLiter_Z|G|


-----

Status/Command standard Status/Command Z8 none none none

###### Standard Mode

 DPT_Value_Volume (14.076), float value without Z8 field.

##### 3.43.2 Datapoint Type “Flow Rate in m3/h_Z”
###### LTE: compound structure

Format: 5 octets: V32Z8

octet nr 5 MSB 4 3 2 LSB 1

Status
field names FlowRate
Command

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_05

**Datapoint Types**

ID: Name: Use:

218.002 DPT_FlowRate_m3/h_Z G

**Data fields** **Description** **Encodin** **Unit** **Range** **Resol.**
**g**

FlowRate Flow Rate in m[3]/h with V32 m[3]/h - 214’748,3648 m[3]/h … 0,0001
high resolution +214’748,3647 m[3]/h m[3]/h

Status/Command standard Status/Command Z8 none none none

###### Standard Mode

 DPT_Value_Volume_Flux (14.077), float value without Z8 field.

|Data fields|Description|Encodin<br>g|Unit|Range|Resol.|
|---|---|---|---|---|---|
|VolumeLiter|volume in liter|V32|l|-2 147 483 648 l …<br>2 147 483 647 l|1 l|
|Status/Command|standard Status/Command|Z8|none|none|none|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>PDT:|5 octets: V Z<br>32 8<br>5 4 3 2 1<br>MSB LSB<br>Status<br>FlowRate<br>Command<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V Z Z Z Z Z Z Z Z<br>PDT GENERIC 05<br>_ _|
|---|---|

|Datapoint Types|Col2|Col3|
|---|---|---|
|ID:|Name:|Use:|
|218.002|DPT_FlowRate_m3/h_Z|G|

|Data fields|Description|Encodin<br>g|Unit|Range|Resol.|
|---|---|---|---|---|---|
|FlowRate|Flow Rate in m3/h with<br>high resolution|V32|m3/h|- 214’748,3648 m3/h …<br>+214’748,3647 m3/h|0,0001<br>m3/h|
|Status/Command|standard Status/Command|Z8|none|none|none|


-----

#### 3.44 Datatype U16U8

##### 3.44.1 Datapoint Type “Scaling speed”

Format: 3 octets: U16U8

octet nr. 3 MSB 2 1 LSB

field names TimePeriod Percent

encoding U U UU U U U U U U U U U U U U U U U U U U U U

Encoding: value of all fields binary encoded.

Range:: See below.

Unit: See below.

Resol.: See below.

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Use:

225.001 DPT_ScalingSpeed Lighting [a)]

a) This DPT shall only be used in the lighting application and only for the functionality as specified in

the FB specifications.

**Data Fields** **Description** **Range** **Unit** **Resol.**

TimePeriod Unsigned time-value for calculating speed. [1…65 535] 100 ms
(see also DPT_TimePeriod100Msec;
DPT_ID = 7.004)

Percent Unsigned percent value for calculating speed. [0,4…100] %
(see also DPT_Scaling; DPT_ID = ID 5.001)

###### Examples

 a. Only a single Datapoint of type DPT_ScalingSpeed is used.

 The speed for changing the value of a Datapoint of type DPT_Scaling is constant over the whole range of DPT_Scaling.

3 MSB 2 1 LSB Encoded value
00h 28h FFh 25 %/s

###### b. Two Datapoints DP0 and DP1 of type DPT_ScalingSpeed are used for two different speeds in two subranges:

 Rule in the FB:
 subrange0: 0 % … DP0.percentvalue speed in subrange0: DP0.percentvalue/DP0.timevalue subrange1: DP0.percentvalue … DP1.percentvalue speed in subrange1: (DP1.percentvalue – DP0.percentvalue) / DP1.timevalue

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range::<br>Unit:<br>Resol.:<br>PDT:|3 octets: U U<br>16 8<br>3 2 1<br>MSB LSB<br>TimePeriod Percent<br>U U UU U U U U U U U U U U U U U U U U U U U U<br>value of all fields binary encoded.<br>See below.<br>See below.<br>See below.<br>PDT GENERIC 03<br>_ _|
|---|---|

|Datapoint Types|Col2|Col3|
|---|---|---|
|ID:|Name:|Use:|
|225.001|DPT_ScalingSpeed|Lightinga)|
|<br>a)This DPT shall only be used in the lighting application and only for the functionality as specified in<br>the FB specifications.|<br>a)This DPT shall only be used in the lighting application and only for the functionality as specified in<br>the FB specifications.|<br>a)This DPT shall only be used in the lighting application and only for the functionality as specified in<br>the FB specifications.|

|Data Fields|Description|Range|Unit|Resol.|
|---|---|---|---|---|
|TimePeriod|Unsigned time-value for calculating speed.<br>(see also DPT_TimePeriod100Msec;<br>DPT_ID = 7.004)|[1…65 535]|100 ms|100 ms|
|Percent|<br>Unsigned percent value for calculating speed.<br>(see also DPT_Scaling; DPT_ID = ID 5.001)|[0,4…100]|%|0,4 %|

|3 MSB|2|1 LSB|
|---|---|---|
|00h|28h|FFh|


-----

Encoded values
DP0
3 MSB 2 1 LSB subrange0: 0 % … 75 %
00h 78h COh speed0: 6,25 %/s

DP1
3 MSB 2 1 LSB subrange1: 75 % … 100 %
00h 14h FFh speed1: 12,5 %/s

##### 3.44.2 Datapoint Type “Scaling step time”

Format: 3 octets: U16U8

octet nr. 3 MSB 2 1 LSB

field names TimePeriod Percent

encoding U U U U U U U U U U U U U U U U U U U U U U U U

Encoding: value of all fields binary encoded.

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Use:

225.002 DPT_Scaling_Step_Time General [a)]

a) Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic
data or if specified as such in a FB specification.

**Data Fields** **Description** **Range** **Unit** **Resol.**

TimePeriod Unsigned time-value (time needed for changing data [1…65535] ms 1 ms
point of Type DPT_Scaling by its resolution)
(see also DPT_TimePeriodMsec; DPT_ID = 7.002)

Percent Range in within time-value is valid [0,4…100] % 0,4 %
(see also DPT_Scaling; DPT_ID = ID 5.001)

###### Examples

 a. Only a single Datapoint of type DPT_Scaling_Step_Time is used.

 The speed for changing the value of a Datapoint of type DPT_Scaling is constant over the whole range of DPT_Scaling.

3 MSB 2 1 LSB Encoded value
00h 0Fh FFh 15 ms/step

###### b. Two Datapoints DP0 and DP1 of type DPT_Scaling_Step_Time are used for two different time values in two subranges: Rule in the FB:
 subrange0: 0 % … DP0.percentvalue time per step in subrange0: DP0.timevalue subrange1: DP0.percentvalue … DP1.percentvalue time per step in subrange1: DP1.timevalue

|DP0|Col2|Col3|
|---|---|---|
|3 MSB|2|1 LSB|
|00h|78h|COh|

|DP1|Col2|Col3|
|---|---|---|
|3 MSB|2|1 LSB|
|00h|14h|FFh|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|3 octets: U U<br>16 8<br>3 2 1<br>MSB LSB<br>TimePeriod Percent<br>U U U U U U U U U U U U U U U U U U U U U U U U<br>value of all fields binary encoded.<br>PDT GENERIC 03<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|225.002|DPT_Scaling_Step_Time|Generala)|
|<br>a)<br>Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic<br>data or if specified as such in a FB specification.|<br>a)<br>Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic<br>data or if specified as such in a FB specification.|<br>a)<br>Not allowed for run-time communication. This DPT shall only be used for parameters and diagnostic<br>data or if specified as such in a FB specification.|

|Data Fields|Description|Range|Unit|Resol.|
|---|---|---|---|---|
|TimePeriod|Unsigned time-value (time needed for changing data<br>point of Type DPT_Scaling by its resolution)<br>(see also DPT_TimePeriodMsec; DPT_ID = 7.002)|[1…65535]|ms|1 ms|
|Percent|<br>Range in within time-value is valid<br>(see also DPT_Scaling; DPT_ID = ID 5.001)|[0,4…100]|%|0,4 %|

|whole|range|of DPT|
|---|---|---|
|3 MSB|2|1 LSB|
|00h|0Fh|FFh|


-----

Encoded values
DP0
3 MSB 2 1 LSB subrange0: 0 % … 75 %
00h 3Eh COh time0: 62 ms/step

DP1
3 MSB 2 1 LSB subrange1: 75 % … 100 %
00h 1Fh FFh time1: 31 ms/step

##### 3.44.3 DPT_TariffNext

Format: 3 octets: U16U8

octet nr 3 MSB 2 1 LSB

field names Delay Time Tariff

encoding U U U U U U U U U U U U U U U U U U U U U U U U

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Use:

225.003 DPT_TariffNext G

**Fields** **Description** **Enoding** **Unit** **Unit / Range** **Resolution**

Delay Time Delay time until next U16, value binary min 0 = undefined delay time 1 min
change of tariff encoded 1 min to 65 535 min

Tariff The next active Tariff U8, value binary none 0 to 254 1
after expiration of the encoded
delay time

If the two fields Tariff and Delay Time are cleared (zero) then this shall be interpreted as that the next
tariff is unspecified.

|DP0|Col2|Col3|
|---|---|---|
|3 MSB|2|1 LSB|
|00h|3Eh|COh|

|DP1|Col2|Col3|
|---|---|---|
|3 MSB|2|1 LSB|
|00h|1Fh|FFh|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding|3 octets: U U<br>16 8<br>3 2 1<br>MSB LSB<br>Delay Time Tariff<br>U U U U U U U U U U U U U U U U U U U U U U U U|Col3|
|---|---|---|
|PDT:|PDT_GENERIC_03|PDT_GENERIC_03|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|225.003|DPT_TariffNext|G|

|Fields|Description|Enoding|Unit|Unit / Range|Resolution|
|---|---|---|---|---|---|
|Delay Time|Delay time until next<br>change of tariff|U16, value binary<br>encoded|min|0 = undefined delay time<br>1 min to 65 535 min|1 min|
|Tariff|The next active Tariff<br>after expiration of the<br>delay time|U8, value binary<br>encoded|none|0 to 254|1|


-----

#### 3.45 Datatype V32N8Z8

##### 3.45.1 Datapoint Type “MeteringValue”

Format: 6 octet: V32N8Z8

octet nr. 6 MSB 5 4 3

field names CountVal

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr. 2 1 LSB

field names ValInfField Status/Command

encoding N N N N N N N N Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_06

**Datapoint Types**

ID: Name: Use:

229.001 DPT_MeteringValue FB

**Data fields** **Description** **Unit / Range**

CountVal Counter value 32 bit V32,
Signed value -2 147 483 648 to 2 147 483 647
Encoding of void value, fault, overridden etc. unit and resolution according to
using Z8 Field ValInfField

ValInfField Encoding of unit and resolution of the counter N8, 00h to 7Fh
value subset of M-Bus VIF table,

and the subset of VIFE table for
MWh, GJ, MW, GJ/h and
dimensionless counter value
mapped to:
80h, 81h
88h, 89h
A8h, A9h
B0h, B1h
BAh
encoding see table below

Status/Command Standard Status/Command. Z8

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding|6 octet: V N Z<br>32 8 8<br>6 5 4 3<br>MSB<br>CountVal<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>2 1<br>LSB<br>ValInfField Status/Command<br>N N N N N N N N Z Z Z Z Z Z Z Z|Col3|
|---|---|---|
|PDT:|PDT_GENERIC_06|PDT_GENERIC_06|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|229.001|DPT_MeteringValue|FB|

|Data fields|Description|Unit / Range|
|---|---|---|
|CountVal|Counter value 32 bit<br>Signed value<br>Encoding of void value, fault, overridden etc.<br>using Z8 Field|V32, <br>-2 147 483 648  to 2 147 483 647<br>unit and resolution according to<br>ValInfField|
|ValInfField|Encoding of unit and resolution of the counter<br>value|N8, 00h to 7Fh<br>subset of M-Bus VIF table,<br>and the subset of VIFE table for<br>MWh, GJ, MW, GJ/h and<br>dimensionless counter value<br>mapped to:<br>80h, 81h<br>88h, 89h<br>A8h, A9h<br>B0h, B1h<br>BAh<br>encoding see table below|
|Status/Command|Standard Status/Command.|Z8|


-----

###### ValInfField

 This field shall contain the indications about the encoding of unit and resolution of the counter value. A part of the encoding range < 80h is a subset of the primary VIF Table according to the M-Bus specification in EN13757-3. ValInfField vales ≥ 80h contain the mapping of VIFE range for GWh, GJ, MW, MJ/h and dimensionless counter values.

**coding** **description** **range coding** **range**

00000nnn energy 10[(nnn-3)] Wh 0,001 Wh to 10 000 Wh

1000000n energy 10[(n+5)] Wh 0,1 MWh to 1 MWh

00001nnn energy 10[(nnn)] J 0,001 kJ to 10 000 kJ

1000100n energy 10[(n+8)] J 0,1 GJ to 1 GJ

00010nnn volume 10[(nnn-6)] m[3] 0,001 l to 10 000 l

00011nnn mass 10[(nnn-3)] kg 0,001 kg to 10 000 kg

00101nnn power 10[(nnn-3)] W 0,001 W to 10 000 W

1010100n power 10[(n+5)] W 0,1 MW to 1 MW

00110nnn power 10[(nnn)] J/h 0,001 kJ/h to 10 000 kJ/h

1011000n power 10[(n+8)] J/h 0,1 GJ/h to 1 GJ/h

00111nnn volume flow 10[(nnn-6)] m[3]/h 0,001 l/h to 10 000 l/h

01000nnn volume flow 10[(nnn-7)] m[3]/min 0,000 1 l/min to 1000 l/min

01001nnn volume flow 10[(nnn-9)] m[3]/sec 0,001 ml/s to 10 000 ml/s

01010nnn mass flow 10[(nnn-3)] kg/h 0,001 kg/h to 10 000 kg/h

01101110 units for HCA dimensionless
10111010 dimensionless counter dimensionless
Others *[)] reserved

*[)] Mapping of other M-Bus VIF/VIFE-field codes to ValInfField

###### The mapping of VIF/VIFE codes to DPT_MeteringValue only considers metering data. Other Datapoints in the M-Bus frame that do not represent metering counter values are encoded in the KNX standard system with other standard KNX DPT. The mapping for this is specified in [08].

 Remark

 During data conversion from M-Bus to standard KNX Datapoint Types there may be rounding errors or truncations, depending of the original M-Bus data encoding size and resolution.

 M-Bus Device Type

 The M-Bus Device Type is not encoded in DPT_MeteringValue. The information about the device type is usually implicitly contained in the metering Datapoint address (Interface Object Type). In addition the M- Bus Device Type shall be encoded explicitly via an additional Datapoint in the metering object (e.g. in case of a water meter object to indicate if hot or cold water is measured).

|coding|description|range coding|range|
|---|---|---|---|
|00000nnn|energy|10(nnn-3) <br>Wh|0,001<br>Wh to 10 000 Wh|
|1000000n|energy|10(n+5) <br>Wh|0,1<br>MWh to<br>1 MWh|
|00001nnn|energy|10(nnn) <br>J|0,001<br>kJ to 10 000 kJ|
|1000100n|energy|10(n+8) <br>J|0,1<br>GJ to<br>1 GJ|
|00010nnn|volume|10(nnn-6) <br>m3|0,001<br>l to 10 000 l|
|00011nnn|mass|10(nnn-3) <br>kg|0,001<br>kg to 10 000 kg|
|00101nnn|power|10(nnn-3) <br>W|0,001<br>W to 10 000 W|
|1010100n|power|10(n+5) <br>W|0,1<br>MW to<br>1 MW|
|00110nnn|power|10(nnn) <br>J/h|0,001<br>kJ/h to 10 000 kJ/h|
|1011000n|power|10(n+8) <br>J/h|0,1<br>GJ/h to<br>1 GJ/h|
|00111nnn|volume flow|10(nnn-6) <br>m3/h|0,001<br>l/h to 10 000 l/h|
|01000nnn|volume flow|10(nnn-7) <br>m3/min|0,000 1 l/min to<br>1000 l/min|
|01001nnn|volume flow|10(nnn-9) <br>m3/sec|0,001<br>ml/s to 10 000 ml/s|
|01010nnn|mass flow|10(nnn-3) <br>kg/h|0,001<br>kg/h to 10 000 kg/h|
|01101110|units for HCA||dimensionless|
|10111010|dimensionless counter||dimensionless|
|Others *)|reserved|||


-----

#### 3.46 Datatypes A8A8A8A8

###### 3.46.1 DPT_Locale_ASCII

|4 MSB 3|Col2|
|---|---|
|Language|Language|
|Character 4|Character 3|

|2 1 LSB|Col2|
|---|---|
|Region|Region|
|Character 2|Character 1|

|A|A|A|A|A|A|A|A|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|A|A|A|A|A|A|A|A|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Unit:<br>Resol.:<br>PDT:|4 octets: A A A A<br>8 8 8 8<br>4 3 2 1<br>MSB LSB<br>Language Region<br>Character 4 Character 3 Character 2 Character 1<br>A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A<br>none<br>(not applicable)<br>PDT GENERIC 04<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Encoding:|Range:|Use:|
|231.001|DPT_Locale_ASCII|A8A8A8A8|Datapoint Type is used to transmit a<br>locale<br>• Octet 4 and octet 3<br>Language as in DPT_Language-<br>CodeAlpha2_ASCII (234.001) this is<br>ISO 639-1 alpha-2<br>• Octet 2 and octet 1<br>Region as in DPT_RegionCode-<br>Alpha2_ASCII (234.002) this is ISO<br>3166-1 alpha-2<br>NOTE 18<br>“ZZ” shall be used for “no region”.<br>The length is fixed to 4 octets (2<br>characters in ASCII for the<br>location/language and 2 characters in<br>ASCII for the location/region).<br>The encoding is not case sensitive.<br>The contents are filled from the most<br>significant octet<br>EXAMPLE 17: de-DE “German (GERMANY)”:<br>64h 65h 44h 45h<br>EXAMPLE 18: en-GB “English (UNITED<br>KINGDOM)”: 65h 6Eh 47h 42h|Language<br>acc. to<br>ISO 639-1<br>alpha-2<br>Region acc.<br>to<br>ISO 3166-1<br>alpha-2|G|


-----

#### 3.47 Datapoint Types A8A8

###### 3.47.1.1 DPT_LanguageCodeAlpha2_ASCII

Format: 2 octets: A8A8

octet nr. 2 MSB 1 LSB

field names Character 1 Character 2

encoding A A A A A A A A A A A A A A A A

Encoding: Both Characters shall be ASCII-coded.

This coding shall not be case sensitive.

            - For transmission, lower case shall be used.

            - On reception, both lower case as well as upper case shall be supported and properly
decoded.
Range: For every Character: as in DPT_Char_ASCII (4.001)

Unit: not applicable

Resol.: not applicable

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name: Use:

234.001 DPT_LanguageCodeAlpha2_ASCII G

EXAMPLE 19 German “de shall be encoded as 6465h.

EXAMPLE 20 English “en” shall be encoded as 656Eh.

###### The languages shall be encoded according to ISO 639-1, of which the definitions are given in Table 3.

 Table 3 – ISO 639-1 language codes

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|2 octets: A A<br>8 8<br>2 1<br>MSB LSB<br>Character 1 Character 2<br>A A A A A A A A A A A A A A A A<br>Both Characters shall be ASCII-coded.<br>This coding shall not be case sensitive.<br>- For transmission, lower case shall be used.<br>- On reception, both lower case as well as upper case shall be supported and properly<br>decoded.<br>For every Character: as in DPT Char ASCII (4.001)<br>_ _<br>not applicable<br>not applicable<br>PDT GENERIC 02<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|234.001|DPT_LanguageCodeAlpha2_ASCII|G|

|ISO 639-1<br>language<br>code|Language<br>name|
|---|---|
|aa|Afar|
|ab|Abkhazian|
|ae|Avestan|
|af|Afrikaans|
|ak|Akan|
|am|Amharic|
|an|Aragonese|
|ar|Arabic|
|as|Assamese|
|av|Avaric|
|ay|Aymara|
|az|Azerbaijani|
|ba|Bashkir|
|be|Belarusian|
|bg|Bulgarian|
|bh|Bihari|
|bi|Bislama|

|ISO 639-1<br>language<br>code|Language<br>name|
|---|---|
|bm|Bambara|
|bn|Bengali|
|bo|Tibetan|
|br|Breton|
|bs|Bosnian|
|ca|Catalan|
|ce|Chechen|
|ch|Chamorro|
|co|Corsican|
|cr|Cree|
|cs|Czech|
|cu|Church Slavic|
|cv|Chuvash|
|cy|Welsh|
|da|Danish|
|de|German|
|dv|Divehi|

|ISO 639-1<br>language<br>code|Language<br>name|
|---|---|
|dz|Dzongkha|
|ee|Ewe|
|el|Greek|
|en|English|
|eo|Esperanto|
|es|Spanish|
|et|Estonian|
|eu|Basque|
|fa|Persian|
|ff|Fulah|
|fi|Finnish|
|fj|Fijian|
|fo|Faroese|
|fr|French|
|fy|Western Frisian|
|ga|Irish|
|gd|Scottish Gaelic|


-----

|ISO 639-1<br>language<br>code|Language<br>name|
|---|---|
|ky|Kirghiz|
|la|Latin|
|lb|Luxembourgish|
|lg|Ganda|
|li|Limburgish|
|ln|Lingala|
|lo|Lao|
|lt|Lithuanian|
|lu|Luba-Katanga|
|lv|Latvian|
|mg|Malagasy|
|mh|Marshallese|
|mi|Māori|
|mk|Macedonian|
|ml|Malayalam|
|mn|Mongolian|
|mo|Moldavian|
|mr|Marathi|
|ms|Malay|
|mt|Maltese|
|my|Burmese|
|na|Nauru|
|nb|Norwegian<br>Bokmål|
|nd|North Ndebele|
|ne|Nepali|
|ng|Ndonga|
|nl|Dutch|
|nn|Norwegian<br>Nynorsk|
|no|Norwegian|
|nr|South Ndebele|
|nv|Navajo|
|ny|Chichewa|
|oc|Occitan|
|oj|Ojibwa|
|om|Oromo|
|or|Oriya|
|os|Ossetian|
|pa|Panjabi|
|pi|Pāli|
|pl|Polish|

|ISO 639-1<br>language<br>code|Language<br>name|
|---|---|
|gl|Galician|
|gn|Guaraní|
|gu|Gujarati|
|gv|Manx|
|ha|Hausa|
|he|Hebrew|
|hi|Hindi|
|ho|Hiri Motu|
|hr|Croatian|
|ht|Haitian|
|hu|Hungarian|
|hy|Armenian|
|hz|Herero|
|ia|Interlingua<br>(International<br>Auxiliary<br>Language<br>Association)|
|id|Indonesian|
|ie|Interlingue|
|ig|Igbo|
|ii|Sichuan Yi|
|ik|Inupiaq|
|io|Ido|
|is|Icelandic|
|it|Italian|
|iu|Inuktitut|
|ja|Japanese|
|jv|Javanese|
|ka|Georgian|
|kg|Kongo|
|ki|Kikuyu|
|kj|Kwanyama|
|kk|Kazakh|
|kl|Kalaallisut|
|km|Khmer|
|kn|Kannada|
|ko|Korean|
|kr|Kanuri|
|ks|Kashmiri|
|ku|Kurdish|
|kv|Komi|
|kw|Cornish|

|ISO 639-1<br>language<br>code|Language<br>name|
|---|---|
|ps|Pashto|
|pt|Portuguese|
|qu|Quechua|
|rm|Raeto-Romance|
|rn|Kirundi|
|ro|Romanian|
|ru|Russian|
|rw|Kinyarwanda|
|sa|Sanskrit|
|sc|Sardinian|
|sd|Sindhi|
|se|Northern Sami|
|sg|Sango|
|sh|Serbo-<br>Croatian 19)|
|si|Sinhalese|
|sk|Slovak|
|sl|Slovenian|
|sm|Samoan|
|sn|Shona|
|so|Somali|
|sq|Albanian|
|sr|Serbian|
|ss|Swati|
|st|Sotho|
|su|Sundanese|
|sv|Swedish|
|sw|Swahili|
|ta|Tamil|
|te|Telugu|
|tg|Tajik|
|th|Thai|
|ti|Tigrinya|
|tk|Turkmen|
|tl|Tagalog|
|tn|Tswana|
|to|Tonga|
|tr|Turkish|
|ts|Tsonga|
|tt|Tatar|
|tw|Twi|
|ty|Tahitian|


19) depricated


-----

ve [Venda](http://en.wikipedia.org/wiki/Venda_language) xh [Xhosa](http://en.wikipedia.org/wiki/Xhosa_language) zu [Zulu](http://en.wikipedia.org/wiki/Zulu_language)

##### 3.47.2 Datapoint Type DPT_RegionCodeAlpha2_ASCII

Format: 2 octets: A8A8

octet nr 2 MSB 1 LSB

field names Character 1 Character 2

encoding A A A A A A A A A A A A A A A A

Unit: None

Resol.: (not applicable)

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name: Encoding: Range:

234.002 DPT_RegionCode- A8A8 Datapoint Type is used to transmit a region ISO 3166-1
Alpha2_ASCII via ISO 3166-1 alpha-2 code. alpha-2

The length is fixed to 2 octets for the
location/region.
The encoding is not case sensitive.
The contents are filled from the most
significant octet

EXAMPLE 1: DE (Germany): 44h 45h

EXAMPLE 2: GB (United Kingdom)”: 47h 42h

###### The regions shall be encoded according to ISO 3166-1, of which the definitions are given in Table 4.

 Table 4 – ISO 3166-1 region codes

|ISO 639-1<br>language<br>code|Language<br>name|
|---|---|
|ug|Uighur|
|uk|Ukrainian|
|ur|Urdu|
|uz|Uzbek|
|ve|Venda|

|ISO 639-1<br>language<br>code|Language<br>name|
|---|---|
|vi|Vietnamese|
|vo|Volapük|
|wa|Walloon|
|wo|Wolof|
|xh|Xhosa|

|ISO 639-1<br>language<br>code|Language<br>name|
|---|---|
|yi|Yiddish|
|yo|Yoruba|
|za|Zhuang|
|zh|Chinese|
|zu|Zulu|

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Unit:<br>Resol.:<br>PDT:|2 octets: A A<br>8 8<br>2 1<br>MSB LSB<br>Character 1 Character 2<br>A A A A A A A A A A A A A A A A<br>None<br>(not applicable)<br>PDT GENERIC 02<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Encoding:|Range:|Use:|
|234.002|DPT_RegionCode-<br>Alpha2_ASCII|A8A8|Datapoint Type is used to transmit a region<br>via ISO 3166-1 alpha-2 code.<br>The length is fixed to 2 octets for the<br>location/region.<br>The encoding is not case sensitive.<br>The contents are filled from the most<br>significant octet<br>EXAMPLE 1: DE (Germany): 44h 45h<br>EXAMPLE 2: GB (United Kingdom)”: 47h 42h|ISO 3166-1<br>alpha-2|G|

|ISO 3166-1<br>region code|Country name|Col3|ISO 3166-1<br>region code|Country name|
|---|---|---|---|---|
|AD|ANDORRA|ANDORRA|AS|AMERICAN SAMOA|
|AE|UNITED ARAB EMIRATES|UNITED ARAB EMIRATES|AT|AUSTRIA|
|AF|AFGHANISTAN|AFGHANISTAN|AU|AUSTRALIA|
|AG|ANTIGUA AND BARBUDA|ANTIGUA AND BARBUDA|AW|ARUBA|
|AI|ANGUILLA|ANGUILLA|AX|ÅLAND ISLANDS|
|AL|ALBANIA|ALBANIA|AZ|AZERBAIJAN|
|AM|ARMENIA|ARMENIA|BA|BOSNIA AND HERZEGOVINA|
|AN|NETHERLANDS ANTILLES|NETHERLANDS ANTILLES|BB|BARBADOS|
|AO|ANGOLA|ANGOLA|BD|BANGLADESH|
|AQ|ANTARCTICA|ANTARCTICA|BE|BELGIUM|
|AR|ARGENTINA|ARGENTINA|BF|BURKINA FASO|


-----

|ISO 3166-1<br>region code|Country name|
|---|---|
|BG|BULGARIA|
|BH|BAHRAIN|
|BI|BURUNDI|
|BJ|BENIN|
|BL|SAINT BARTHÉLEMY|
|BM|BERMUDA|
|BN|BRUNEI DARUSSALAM|
|BO|BOLIVIA|
|BR|BRAZIL|
|BS|BAHAMAS|
|BT|BHUTAN|
|BV|BOUVET ISLAND|
|BW|BOTSWANA|
|BY|BELARUS|
|BZ|BELIZE|
|CA|CANADA|
|CC|COCOS(KEELING) ISLANDS|
|CD|CONGO, THE DEMOCRATIC<br>REPUBLIC OF THE|
|CF|CENTRAL AFRICAN REPUBLIC|
|CG|CONGO|
|CH|SWITZERLAND|
|CI|CÔTE D'IVOIRE|
|CK|COOK ISLANDS|
|CL|CHILE|
|CM|CAMEROON|
|CN|CHINA|
|CO|COLOMBIA|
|CR|COSTA RICA|
|CS|SERBIA AND MONTENEGRO<br>(TRANSITIONALLY RESERVED)|
|CU|CUBA|
|CV|CAPE VERDE|
|CX|CHRISTMAS ISLAND|
|CY|CYPRUS|
|CZ|CZECH REPUBLIC|
|DE|GERMANY|
|DJ|DJIBOUTI|
|DK|DENMARK|
|DM|DOMINICA|
|DO|DOMINICAN REPUBLIC|
|DZ|ALGERIA|
|EC|ECUADOR|
|EE|ESTONIA|

|ISO 3166-1<br>region code|Country name|
|---|---|
|EG|EGYPT|
|EH|WESTERN SAHARA|
|ER|ERITREA|
|ES|SPAIN|
|ET|ETHIOPIA|
|FI|FINLAND|
|FJ|FIJI|
|FK|FALKLAND ISLANDS<br>(MALVINAS)|
|FM|MICRONESIA, FEDERATED<br>STATES OF|
|FO|FAROE ISLANDS|
|FR|FRANCE|
|GA|GABON|
|GB|UNITED KINGDOM|
|GD|GRENADA|
|GE|GEORGIA|
|GF|FRENCH GUIANA|
|GG|GUERNSEY|
|GH|GHANA|
|GI|GIBRALTAR|
|GL|GREENLAND|
|GM|GAMBIA|
|GN|GUINEA|
|GP|GUADELOUPE|
|GQ|EQUATORIAL GUINEA|
|GR|GREECE|
|GS|SOUTH GEORGIA AND<br>THE SOUTH SANDWICH<br>ISLANDS|
|GT|GUATEMALA|
|GU|GUAM|
|GW|GUINEA-BISSAU|
|GY|GUYANA|
|HK|HONG KONG|
|HM|HEARD ISLAND AND<br>MCDONALD ISLANDS|
|HN|HONDURAS|
|HR|CROATIA|
|HT|HAITI|
|HU|HUNGARY|
|ID|INDONESIA|
|IE|IRELAND|
|IL|ISRAEL|
|IM|ISLE OF MAN|


-----

|ISO 3166-1<br>region code|Country name|ISO 3166-1<br>Country name<br>region code<br>MH MARSHALL ISLANDS<br>MK MACEDONIA, THE FORMER<br>YUGOSLAV REPUBLIC OF<br>ML MALI<br>MM MYANMAR<br>MN MONGOLIA<br>MO MACAO<br>MP NORTHERN MARIANA ISLANDS<br>MQ MARTINIQUE<br>MR MAURITANIA<br>MS MONTSERRAT<br>MT MALTA<br>MU MAURITIUS<br>MV MALDIVES<br>MW MALAWI<br>MX MEXICO<br>MY MALAYSIA<br>MZ MOZAMBIQUE<br>NA NAMIBIA<br>NC NEW CALEDONIA<br>NE NIGER<br>NF NORFOLK ISLAND<br>NG NIGERIA<br>NI NICARAGUA<br>NL NETHERLANDS<br>NO NORWAY<br>NP NEPAL<br>NR NAURU<br>NU NIUE<br>NZ NEW ZEALAND<br>OM OMAN<br>PA PANAMA<br>PE PERU<br>PF FRENCH POLYNESIA<br>PG PAPUA NEW GUINEA<br>PH PHILIPPINES<br>PK PAKISTAN<br>PL POLAND<br>PM SAINT PIERRE AND MIQUELON<br>PN PITCAIRN<br>PR PUERTO RICO<br>PS PALESTINIAN TERRITORY,<br>OCCUPIED<br>PT PORTUGAL|ISO 3166-1<br>region code|Country name|
|---|---|---|---|---|
|IN|INDIA|INDIA|MH|MARSHALL ISLANDS|
|IO|BRITISH INDIAN OCEAN<br>TERRITORY|BRITISH INDIAN OCEAN<br>TERRITORY|MK|MACEDONIA, THE FORMER<br>YUGOSLAV REPUBLIC OF|
|IQ|IRAQ|IRAQ|ML|MALI|
|IR|IRAN, ISLAMIC REPUBLIC OF|IRAN, ISLAMIC REPUBLIC OF|MM|MYANMAR|
|IS|ICELAND|ICELAND|MN|MONGOLIA|
|IT|ITALY|ITALY|MO|MACAO|
|JE|JERSEY|JERSEY|MP|NORTHERN MARIANA ISLANDS|
|JM|JAMAICA|JAMAICA|MQ|MARTINIQUE|
|JO|JORDAN|JORDAN|MR|MAURITANIA|
|JP|JAPAN|JAPAN|MS|MONTSERRAT|
|JE|JERSEY|JERSEY|MT|MALTA|
|JM|JAMAICA|JAMAICA|MU|MAURITIUS|
|JO|JORDAN|JORDAN|MV|MALDIVES|
|JP|JAPAN|JAPAN|MW|MALAWI|
|KE|KENYA|KENYA|MX|MEXICO|
|KG|KYRGYZSTAN|KYRGYZSTAN|MY|MALAYSIA|
|KH|CAMBODIA|CAMBODIA|MZ|MOZAMBIQUE|
|KI|KIRIBATI|KIRIBATI|NA|NAMIBIA|
|KM|COMOROS|COMOROS|NC|NEW CALEDONIA|
|KN|SAINT KITTS AND NEVIS|SAINT KITTS AND NEVIS|NE|NIGER|
|KP|KOREA, DEMOCRATIC<br>PEOPLE'S REPUBLIC OF|KOREA, DEMOCRATIC<br>PEOPLE'S REPUBLIC OF|NF|NORFOLK ISLAND|
|KP|KOREA, DEMOCRATIC<br>PEOPLE'S REPUBLIC OF|KOREA, DEMOCRATIC<br>PEOPLE'S REPUBLIC OF|NG|NIGERIA|
|KR|KOREA, REPUBLIC OF|KOREA, REPUBLIC OF|KOREA, REPUBLIC OF|KOREA, REPUBLIC OF|
|KR|KOREA, REPUBLIC OF|KOREA, REPUBLIC OF|NI|NICARAGUA|
|KW|KUWAIT|KUWAIT|KUWAIT|KUWAIT|
|KW|KUWAIT|KUWAIT|NL|NETHERLANDS|
|KY|CAYMAN ISLANDS|CAYMAN ISLANDS|CAYMAN ISLANDS|CAYMAN ISLANDS|
|KY|CAYMAN ISLANDS|CAYMAN ISLANDS|NO|NORWAY|
|KZ|KAZAKHSTAN|KAZAKHSTAN|KAZAKHSTAN|KAZAKHSTAN|
|KZ|KAZAKHSTAN|KAZAKHSTAN|NP|NEPAL|
|LA|LAO PEOPLE'S DEMOCRATIC<br>REPUBLIC|LAO PEOPLE'S DEMOCRATIC<br>REPUBLIC|LAO PEOPLE'S DEMOCRATIC<br>REPUBLIC|LAO PEOPLE'S DEMOCRATIC<br>REPUBLIC|
|LA|LAO PEOPLE'S DEMOCRATIC<br>REPUBLIC|LAO PEOPLE'S DEMOCRATIC<br>REPUBLIC|NR|NAURU|
|LA|LAO PEOPLE'S DEMOCRATIC<br>REPUBLIC|LAO PEOPLE'S DEMOCRATIC<br>REPUBLIC|NU|NIUE|
|LB|LEBANON|LEBANON|LEBANON|LEBANON|
|LB|LEBANON|LEBANON|NZ|NEW ZEALAND|
|LC|SAINT LUCIA|SAINT LUCIA|SAINT LUCIA|SAINT LUCIA|
|LC|SAINT LUCIA|SAINT LUCIA|OM|OMAN|
|LI|LIECHTENSTEIN|LIECHTENSTEIN|LIECHTENSTEIN|LIECHTENSTEIN|
|LI|LIECHTENSTEIN|LIECHTENSTEIN|PA|PANAMA|
|LK|SRI LANKA|SRI LANKA|SRI LANKA|SRI LANKA|
|LK|SRI LANKA|SRI LANKA|PE|PERU|
|LR|LIBERIA|LIBERIA|LIBERIA|LIBERIA|
|LR|LIBERIA|LIBERIA|PF|FRENCH POLYNESIA|
|LS|LESOTHO|LESOTHO|LESOTHO|LESOTHO|
|LS|LESOTHO|LESOTHO|PG|PAPUA NEW GUINEA|
|LT|LITHUANIA|LITHUANIA|LITHUANIA|LITHUANIA|
|LT|LITHUANIA|LITHUANIA|PH|PHILIPPINES|
|LU|LUXEMBOURG|LUXEMBOURG|LUXEMBOURG|LUXEMBOURG|
|LU|LUXEMBOURG|LUXEMBOURG|PK|PAKISTAN|
|LV|LATVIA|LATVIA|LATVIA|LATVIA|
|LV|LATVIA|LATVIA|PL|POLAND|
|LY|LIBYAN ARAB JAMAHIRIYA|LIBYAN ARAB JAMAHIRIYA|LIBYAN ARAB JAMAHIRIYA|LIBYAN ARAB JAMAHIRIYA|
|LY|LIBYAN ARAB JAMAHIRIYA|LIBYAN ARAB JAMAHIRIYA|PM|SAINT PIERRE AND MIQUELON|
|MA|MOROCCO|MOROCCO|MOROCCO|MOROCCO|
|MA|MOROCCO|MOROCCO|PN|PITCAIRN|
|MC|MONACO|MONACO|MONACO|MONACO|
|MC|MONACO|MONACO|PR|PUERTO RICO|
|MD|MOLDOVA, REPUBLIC OF|MOLDOVA, REPUBLIC OF|MOLDOVA, REPUBLIC OF|MOLDOVA, REPUBLIC OF|
|MD|MOLDOVA, REPUBLIC OF|MOLDOVA, REPUBLIC OF|PS|PALESTINIAN TERRITORY,<br>OCCUPIED|
|ME|MONTENEGRO|MONTENEGRO|MONTENEGRO|MONTENEGRO|
|MF|SAINT MARTIN|SAINT MARTIN|SAINT MARTIN|SAINT MARTIN|
|MF|SAINT MARTIN|SAINT MARTIN|PT|PORTUGAL|
|MG|MADAGASCAR|MADAGASCAR|MADAGASCAR|MADAGASCAR|


-----

ZZ No region

|ISO 3166-1<br>region code|Country name|
|---|---|
|TL|TIMOR-LESTE|
|TM|TURKMENISTAN|
|TN|TUNISIA|
|TO|TONGA|
|TR|TURKEY|
|TT|TRINIDAD AND TOBAGO|
|TV|TUVALU|
|TW|TAIWAN, PROVINCE OF CHINA|
|TZ|TANZANIA, UNITED REPUBLIC<br>OF|
|UA|UKRAINE|
|UG|UGANDA|
|UM|UNITED STATES<br>MINOR OUTLYING ISLANDS|
|US|UNITED STATES|
|UY|URUGUAY|
|UZ|UZBEKISTAN|
|VA|HOLY SEE (VATICAN CITY<br>STATE)|
|VC|SAINT VINCENT AND<br>THE GRENADINES|
|VE|VENEZUELA|
|VG|VIRGIN ISLANDS, BRITISH|
|VI|VIRGIN ISLANDS, U.S.|
|VN|VIET NAM|
|VU|VANUATU|
|WF|WALLIS AND FUTUNA|
|WS|SAMOA|
|YE|YEMEN|
|YT|MAYOTTE|
|ZA|SOUTH AFRICA|
|ZM|ZAMBIA|
|ZW|ZIMBABWE|
|ZZ|No region|

|ISO 3166-1<br>region code|Country name|
|---|---|
|PW|PALAU|
|PY|PARAGUAY|
|QA|QATAR|
|RE|RÉUNION|
|RO|ROMANIA|
|RS|SERBIA|
|RU|RUSSIAN FEDERATION|
|RW|RWANDA|
|SA|SAUDI ARABIA|
|SB|SOLOMON ISLANDS|
|SC|SEYCHELLES|
|SD|SUDAN|
|SE|SWEDEN|
|SG|SINGAPORE|
|SH|SAINT HELENA|
|SI|SLOVENIA|
|SJ|SVALBARD AND JAN MAYEN|
|SK|SLOVAKIA|
|SL|SIERRA LEONE|
|SM|SAN MARINO|
|SN|SENEGAL|
|SO|SOMALIA|
|SR|SURINAME|
|ST|SAO TOME AND PRINCIPE|
|SV|EL SALVADOR|
|SY|SYRIAN ARAB REPUBLIC|
|SZ|SWAZILAND|
|TC|TURKS AND CAICOS ISLANDS|
|TD|CHAD|
|TF|FRENCH SOUTHERN<br>TERRITORIES|
|TG|TOGO|
|TH|THAILAND|
|TJ|TAJIKISTAN|
|TK|TOKELAU|


-----

#### 3.48 DPT_Tariff_ActiveEnergy

Format: 6 octet: V32U8B8

octet nr. 6 MSB 5 4 3

field names ActiveElectricalEnergy

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr. 2 1 LSB

field names Tariff Validity

0 0 0 0 0 0 E T

encoding U U U U U U U U r r r r r r B B

PDT: PDT_GENERIC_06

**Datapoint Types**

ID: Name: Use:

235.001 DPT_Tariff_ActiveEnergy G

**Field** **Description** **Encoding** **Unit** **Range** **Resol.**

ActiveElectrical- Active energy See Wh [-2 147 483 648 … 1 Wh
Energy measured in the tariff DPT_ActiveEnergy 2 147 483 647] Wh

indicated in the field (DPT_ID = 13.010)
_Tariff (13.010)_

Tariff Tariff associated to See DPT_Tariff none [0 … 254] 1
the energy indicated (DPT_ID = 5.006)
in the field
ActiveElectricalEnerg
y

Validity Bitset used for the validity of other data.

 - validity of the Tariff b0 T 0: valid none {0, 1} none
data 1: not valid

 - validity of the b1 E 0: valid none {0, 1} none
ActiveElectrical- 1: not valid
Energy data

 - reserved b2 to b7 reserved shall be 0 none {0} none

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|1 LSB|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|Validity|Validity|Validity|Validity|Validity|Validity|Validity|Validity|
|0|0|0|0|0|0|E|T|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|6 octet: V U B<br>32 8 8<br>6 5 4 3<br>MSB<br>ActiveElectricalEnergy<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>2 1<br>LSB<br>Tariff Validity<br>0 0 0 0 0 0 E T<br>U U U U U U U U r r r r r r B B<br>PDT GENERIC 06<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**||
|ID:|Name:|Use:|Use:|
|235.001|DPT_Tariff_ActiveEnergy|G|G|

|Field|Description|Encoding|Unit|Range|Resol.|
|---|---|---|---|---|---|
|ActiveElectrical-<br>Energy|Active energy<br>measured in the tariff<br>indicated in the field<br>_Tariff_ (13.010)|See<br>DPT_ActiveEnergy<br>(DPT_ID = 13.010)|Wh|[-2 147 483 648 …<br>2 147 483 647] Wh|1 Wh|
|Tariff|Tariff associated to<br>the energy indicated<br>in the field<br>ActiveElectricalEnerg<br>y|See DPT_Tariff<br>(DPT_ID = 5.006)|none|[0 … 254]|1|
|Validity<br>- <br>validity of the Tariff<br>data<br>- <br>validity of the<br>ActiveElectrical-<br>Energy data<br>- <br>reserved|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0} <br>none|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0} <br>none|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0} <br>none|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0} <br>none|Bitset used for the validity of other data.<br>b0 <br>T <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b1 <br>E <br>0: valid<br>1: not valid<br>none<br>{0, 1}<br>none<br>b2 to b7 reserved<br>shall be 0<br>none<br>{0} <br>none|


-----

#### 3.49 DPT_Prioritised_Mode_Control

##### 3.49.1 Definition

Format: 8 bit: B1N3N4

octet nr. 1

field names d p m

encoding B N N N N N N N

Encoding: binary encoded

PDT: PDT_GENERIC_01

**Datapoint Types**

ID: Name: Use:

236.001 DPT_Prioritised_Mode_Control G

Field Format Description Encoding Range Unit

d B1 deactivation of priority [0: activation of priority ] {0,1} none

1: deactivation of priority

p N3 priority level Value binary encoded. [0 … 7] none
000b: Level 0
…
111b: Level 7

m N4 mode level Value binary encoded. [0 … 15] none
0000b: Level 0
…
1111b: Level 15

##### 3.49.2 Functional description
###### Terms and abbreviations

Abbreviation Description
CMU Central Management Unit
LCU Local Control Unit
MDT MoDe Threshold

###### Objective

 Up to 8 Central Management Units (CMU) send data encoded according this DPT in order to affect the behaviour of Local Control Units (LCUs). These LCUs may control a wide range of applications.

Examples for LCUs and their affects in behaviour:
       - EXAMPLE 1 Lighting control appliances: reducing the max. brightness level
       - EXAMPLE 2 Shutter control appliances: moving to a predefined position
       - EXAMPLE 3 Room temperature controllers: increasing the temperature setpoint value

###### Structure of the DPT

 The DPT shall be divided into two parts.
 1 Fields d and p shall define a priority control between two or more CMUs. 2 Field m (mode level) shall define how the behaviour of the LCU shall be affected by the CMU.

|p|m|
|---|---|

|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|8 bit: B N N<br>1 3 4<br>1<br>d p m<br>B N N N N N N N<br>binary encoded<br>PDT GENERIC 01<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|236.001|DPT_Prioritised_Mode_Control|G|

|Field|Format|Description|Encoding|Range|Unit|
|---|---|---|---|---|---|
|d <br>p <br>m|B1 <br>N3 <br>N4|deactivation of priority<br>priority level<br>mode level|0: activation of priority<br>1: deactivation of priority<br>Value binary encoded.<br>000b: Level 0<br>… <br>111b: Level 7<br>Value binary encoded.<br>0000b: Level 0<br>… <br>1111b: Level 15|{0,1}<br>[0 … 7]<br>[0 … 15]|none<br>none<br>none|

|Abbreviation|Description|
|---|---|
|CMU|Central Management Unit|
|LCU|Local Control Unit|
|MDT|MoDe Threshold|


-----

###### Functionality of the fields d and p

 These fields are only relevant in the case that more than one CMU exists. For this case the field p defines the priority of a CMU compared to the other CMUs. The field d shall activate and deactivate the priority control.

 A priority level p shall be assigned to each CMU via a Parameter or an Interface Object. p = 0 shall be the lowest priority; p = 7 shall be the highest priority.

EXAMPLE 21

CMU1 CMU2
(p = 1) (p = 2)

LCU1 LCU2 LCU3 LCU4

###### Figure 3 – Usage example for DPT_Prioritised_Mode_Control

In Figure 3 CMU1 sends the value 0001xxxxb (d = 0, p = 1) to LCU1, LCU2 and LCU3. LCU1 to 3 will react accordingly. After
that, CMU2 sends the value 0010xxxxb (d = 0, p = 2) to LCU2, LCU3 and LCU4. Since the priority of CMU2 is higher, LCU2,
LCU3 and LCU4 will react accordingly.

###### It shall be possible to activate (d = 0) and deactivate (d = 1) each priority level. An LCU shall follow the mode level as defined in the highest activated priority level. If the highest activated priority level becomes deactivated, then the LCU shall follow the mode level of the next lower activated priority level.

 This implies that an LCU has to store for each supported priority level
 a. the mode level b. the activation state. 

EXAMPLE 22 (continued from EXAMPLE 21 above)

CMU1 sends the value 0001xxxxb (d = 0, p = 1). LCU1 shall react accordingly while LCU2 and LCU3 shall only
store this new information, because they are still under control of CMU2.
Then CMU2 sends the value 1010xxxxb (d = 1, p = 2). LCU2 and LCU3 shall thus return to the behaviour according
to the latest information from CMU1. LCU4 shall return to its “normal” behaviour.

###### Functionality of the field m

 The mode level m shall define the way in which an LCU shall be affected by a CMU. If the mode level is smaller than a defined “Mode Threshold” (MDT), the appliance shall be unaffected, i.e. it shall have its “normal behaviour”.

 In the LCU, for each implemented priority level at least one threshold value MDT shall be defined via a Parameter or Group Object or Interface Object or a combination of them.

 For each MDT, the behaviour of the LCU shall be defined via one or more Parameters or Group Objects or Interface Objects or a combination of them. Alternatively, the behaviour may be predefined.

 The functionality shall be as follows.
 - If the value of the mode level exceeds (≥) the MDT, then the LCU shall follow the definitions or the predefined behaviour. - If the value of the mode level falls below (<) the MDT, then the device shall return to its "normal" behaviour.


LCU2


CMU1
(p = 1)


LCU1


-----

###### If more than one MDT is defined, then the LCU shall follow the greatest threshold value being smaller than or equal to the mode level.

EXAMPLE 23

Mode
level normal behaviour affected behaviour normal behaviour

MDT

t

###### Figure 4 – Functionality of m

Once the mode level reaches the MDT, the behaviour of the LCU shall be affected according to the definitions.

###### Cyclic monitoring (heartbeat)

 A CMU shall be able to send the DPT cyclically on the bus. The time period of the cyclic sending shall be set by a parameter.

 An LCU may monitor a CMU by a cyclic monitoring of the reception of this DPT. For this, the CMU may be able to update the DPT cyclically on the bus and a “monitoring period” may be defined in the LCU by a parameter.

 As soon as the LCU does not receive an update for longer than the monitoring period the LCU shall assume a failure of the CMU or in the connecting medium. The reaction of the LCU may be implementation specific, while there shall be at least the option in the LCU that it deactivates the priority level that is assigned to the failed CMU.

 Power-Up and Power-Down behaviour

 During supply voltage failure (“Power-Down”) the behaviour of the LCU and CMU is implementation specific.

 On supply voltage recovery (“Power-Up”) the LCU may read out the state of the DPT via the bus. This will only work if there is only one CMU present.

 In case of more than one CMU, it is recommended, that all CMUs send their values cyclically on the bus in order to update an LCU automatically after Power-Up.

 It is recommended that CMU provide the possibility of a sending delay after power up defined by a parameter. This would allow CMUs with higher priority to update the DPT earlier than CMUs with lower priority.

 Further definitions

 The mode level 0 is predefined as the “normal behaviour”. The allowed value range of the MDT shall thus be [1…15].

 The implemented number of priority levels in a CMU is implementation specific. In this case, the allowed priority levels shall start from 0 upwards. If an implementation has only one priority level, the priority level shall be set to 0.

|Col1|normal behaviour affected behaviour normal behaviour|
|---|---|


normal behaviour


affected behaviour


MDT


-----

###### If an LCU receives a DP with d = 1, then the information of the field mode level m shall have no effect (masked out).

 The implemented number of priority levels in an LCU is implementation specific. In this case, the allowed priority levels must start from 0 upwards. If an implementation has only one priority level, the priority level shall be set to 0. If the LCU receives a DP value with a priority level that is not implemented, the received DP value shall be ignored.

 If no priority level is activated, the LCU shall work in its “normal behaviour”.

NOTE 19 The priority level of a CMU should be unique, i.e. two CMUs should not send a DP with the same priority level to the
same LCU.

##### 3.49.3 Use cases

###### 3.49.3.1 First use case The Central Management Unit (CMU) may monitor the current energy tariff and other information, like power or energy consumption, time, weather, etc., in order realise an optimum building operation.

 As soon as the result of the CMUs optimisation algorithm requires a reduction of the power or energy consumption, the value of the mode level is incremented from 0 to 1. Local Control Units of low importance (MDT = 1) can now reduce their consumption by switching off their outputs or manipulating their setpoint values or reducing the variance of operation (or any other action).

 The DPT value will be increased further, if further reduction of power/energy consumption becomes necessary.

 When decreasing the DPT value, the restrictions will be reduced accordingly.

 3.49.3.2 Second use case The CMU may control the reaction on a strategy of escalation in a security or safety application. The value of the DPT corresponds to the escalation level of a security/safety system, so that the building automation is able to react.

 Example for escalation levels: 

 0: Normal Operation

 1: Warning

 2: Pre-Alarm

 3: Alarm

 4: Evacuation

 5: Emergency shutdown

 The priority level of this application is typically or higher than in use case 1.


-----

#### 3.50 Datapoint Types B2U6

##### 3.50.1 DPT_SceneConfig

Format: 1 octet: B2U6

octet nr. 1

b7 b6 b5 b4 b3 b2 b1 b0

field names S SA SN

encoding B B U6

PDT: PDT_GENERIC_01

**Datapoint Types**

ID: Name: Use:

238.001 DPT_SceneConfig **FB**

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|S|SA|SN|
|---|---|---|

|B|B|U<br>6|
|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|1 octet: B U<br>2 6<br>1<br>b b b b b b b b<br>7 6 5 4 3 2 1 0<br>S SA SN<br>B B U<br>6<br>PDT GENERIC 01<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|238.001|DPT_SceneConfig|**FB**|

|Bit|Abbr.|Field name|Encoding|Range|Unit|Resol.|
|---|---|---|---|---|---|---|
|b0 to b5|SN|Scene<br>Number|U6|0 to 63|none|1|
|b0 to b5|SN|This shall be the number of the scene for which the DPT-value contains the<br>configuration information.|This shall be the number of the scene for which the DPT-value contains the<br>configuration information.|This shall be the number of the scene for which the DPT-value contains the<br>configuration information.|This shall be the number of the scene for which the DPT-value contains the<br>configuration information.|This shall be the number of the scene for which the DPT-value contains the<br>configuration information.|
|b6|SA|Scene<br>Activation|0: active<br>1: inactive|{0,1}|none|n/a|
|b6|SA|The field Scent Activation shall indicate whether the scene with scene<br>number SN is active or not.<br>NOTE 20<br>Please note the specific encoding of the field S in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_Enable (1.003).|The field Scent Activation shall indicate whether the scene with scene<br>number SN is active or not.<br>NOTE 20<br>Please note the specific encoding of the field S in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_Enable (1.003).|The field Scent Activation shall indicate whether the scene with scene<br>number SN is active or not.<br>NOTE 20<br>Please note the specific encoding of the field S in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_Enable (1.003).|The field Scent Activation shall indicate whether the scene with scene<br>number SN is active or not.<br>NOTE 20<br>Please note the specific encoding of the field S in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_Enable (1.003).|The field Scent Activation shall indicate whether the scene with scene<br>number SN is active or not.<br>NOTE 20<br>Please note the specific encoding of the field S in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_Enable (1.003).|
|b7|S|Storage<br>function|0: enable<br>1: disable|{0,1}|none|na|
|b7|S|The field Storage function shall indicate whether the set value(s) for the<br>scene number SN can be modified at runtime through DPT_SceneControl<br>or not.<br>NOTE 21<br>Please note the specific encoding of the field SA in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_State (1.011).|The field Storage function shall indicate whether the set value(s) for the<br>scene number SN can be modified at runtime through DPT_SceneControl<br>or not.<br>NOTE 21<br>Please note the specific encoding of the field SA in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_State (1.011).|The field Storage function shall indicate whether the set value(s) for the<br>scene number SN can be modified at runtime through DPT_SceneControl<br>or not.<br>NOTE 21<br>Please note the specific encoding of the field SA in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_State (1.011).|The field Storage function shall indicate whether the set value(s) for the<br>scene number SN can be modified at runtime through DPT_SceneControl<br>or not.<br>NOTE 21<br>Please note the specific encoding of the field SA in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_State (1.011).|The field Storage function shall indicate whether the set value(s) for the<br>scene number SN can be modified at runtime through DPT_SceneControl<br>or not.<br>NOTE 21<br>Please note the specific encoding of the field SA in the specification of the<br>DPT_SceneConfig. This encoding is the inverse coding of the standard DPT_State (1.011).|


-----

#### 3.51 Datapoint Types U8r7B1

##### 3.51.1 DPT_FlaggedScaling

Format: 2 octets: U8r7B1

octet nr. 2 MSB 1 LSB

b15 b14 b13 b12 b11 b10 b9 b8 b7 b6 b5 b4 b3 b2 b1 b0

field names Setvalue CA

encoding U8 r r r r r r r B

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name: Use:

239.001 DPT_FlaggedScaling FB

Bit Abbr. Field name Encoding Range Unit Resol.

b15 to b8 none Setvalue U8 0 % to % ≅ 0,4 %
100 %

This field shall contain the Setvalue for the Channel.
b7 to b1 - These fields are reserved and shall be 0.
b0 CA Channel Activation 0: Inactive {0, 1} none n/a
1: Active

This field shall indicate whether the Channel for which this DPT encodes is active or
not.

|b<br>15|b<br>14|b<br>13|b<br>12|b<br>11|b<br>10|b<br>9|b<br>8|
|---|---|---|---|---|---|---|---|

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|CA|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|r|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|2 octets: U r B<br>8 7 1<br>2 1<br>MSB LSB<br>b b b b b b b b b b b b b b b b<br>15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0<br>Setvalue CA<br>U r r r r r r r B<br>8<br>PDT GENERIC 02<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|239.001|DPT_FlaggedScaling|FB|

|Bit|Abbr.|Field name|Encoding|Range|Unit|Resol.|
|---|---|---|---|---|---|---|
|b15 to b8|none|Setvalue|U8|0 % to<br>100%|%|≅ 0,4 %|
|b15 to b8|none|This field shall contain the Setvalue for the Channel.|This field shall contain the Setvalue for the Channel.|This field shall contain the Setvalue for the Channel.|This field shall contain the Setvalue for the Channel.|This field shall contain the Setvalue for the Channel.|
|b7 to b1|-|These fields are reserved and shall be 0.|These fields are reserved and shall be 0.|These fields are reserved and shall be 0.|These fields are reserved and shall be 0.|These fields are reserved and shall be 0.|
|b0|CA|Channel Activation|0: Inactive<br>1: Active|{0, 1}|none|n/a|
|b0|CA|This field shall indicate whether the Channel for which this DPT encodes is active or<br>not.|This field shall indicate whether the Channel for which this DPT encodes is active or<br>not.|This field shall indicate whether the Channel for which this DPT encodes is active or<br>not.|This field shall indicate whether the Channel for which this DPT encodes is active or<br>not.|This field shall indicate whether the Channel for which this DPT encodes is active or<br>not.|


-----

#### 3.52 Datapoint Types F32F32

##### 3.52.1 DPT_GeographicalLocation

Format: 8 octets: F32F32

octet nr. 8 MSB 7 6 5

field names Longitude

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

octet nr. 4 MSB 3 2 1 LSB

field names Latitude

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

Encoding: DPT_GeographicalLocation shall be composed of two parts, each encoded as the KNX
format F32.
The values are encoded in the IEEE floating point format according to IEEE 754 single
precision format.

NOTE 22 This specifies that the exponent is biased. This allows negative exponent values.

Range: S (Sign) = {0,1}
Exponent = [0 … 255]
Fraction = [0 … 8 388 607]
Resol.: The resolution is given by the use of the IEEE 754 format and varies with the used exponent.

PDT: PDT_GENERIC_08

**Datapoint Types**

ID: Name: Comment: Use:

255.001 DPT_GeographicalLocation Geographical location (longitude and latitude) G
expressed in degrees.

Field Description Encoding Range Unit Resol.:

Longitude Longitude information F32 See F32. ° See F32.

Latitude Latitude information F32 See F32. ° See F32.

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>field names<br>encoding<br>octet nr.<br>field names<br>field names<br>encoding<br>Encoding:<br>Range:<br>Resol.:<br>PDT:|8 octets: F F<br>32 32<br>8 7 6 5<br>MSB<br>Longitude<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>4 3 2 1<br>MSB LSB<br>Latitude<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>DPT GeographicalLocation shall be composed of two parts, each encoded as the KNX<br>_<br>format F .<br>32<br>The values are encoded in the IEEE floating point format according to IEEE 754 single<br>precision format.<br>NOTE 22 This specifies that the exponent is biased. This allows negative exponent values.<br>S (Sign) = {0,1}<br>Exponent = [0 … 255]<br>Fraction = [0 … 8 388 607]<br>The resolution is given by the use of the IEEE 754 format and varies with the used exponent.<br>PDT GENERIC 08<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Comment:|Use:|
|255.001|DPT_GeographicalLocation|Geographical location (longitude and latitude)<br>expressed in degrees.|G|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Longitude|Longitude information|F32|See F32.|°|See F32.|
|Latitude|Latitude information|F32|See F32.|°|See F32.|


-----

#### 3.53 Datapoint Types “DPT_DateTime_Period”

Format: 16 octet: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16

octet nr. 16 MSB 15 14 13

field names
Year 0 0 0 0 Month 0 0 0 [DayOfMont] [DayOf-]
h Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 12 11 10 9

field names

0 0 Minutes 0 0 Seconds 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r

octet nr. 8 MSB 7 6 5

field names
Year 0 0 0 0 Month 0 0 0 [DayOfMont] [DayOf-]
h Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 4 3 2 1 LSB

field names

0 0 Minutes 0 0 Seconds 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r

PDT: PDT_GENERIC_16

**Datapoint Types**

ID: Name: Use:

256.001 DPT_DateTime_Period G

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Start Date Time Same as DPT 19.001 none none

Stop Date Time Same as DPT 19.001 none none

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMont<br>h|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMont<br>h|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|16 octet: U [r U ][r U ][U U ][r U ][r U ]B U [r U ][r U ][U U ][r U ][r U ]B<br>8 4 4 3 5 3 5 2 6 2 6 16 8 4 4 3 5 3 5 2 6 2 6 16<br>16 15 14 13<br>MSB<br>DayOfMont DayOf-<br>Year 0 0 0 0 Month 0 0 0 HourOfDay<br>h Week<br>Start<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>12 11 10 9 Date<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC Time<br>r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r<br>8 7 6 5<br>MSB<br>DayOfMont DayOf-<br>Year 0 0 0 0 Month 0 0 0 HourOfDay<br>h Week<br>Stop<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>Date<br>4 3 2 1<br>LSB<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC Time<br>r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r<br>PDT GENERIC 16<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|256.001|DPT_DateTime_Period|G|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Start Date Time||Same as DPT 19.001||none|none|
|Stop Date Time||Same as DPT 19.001||none|none|


-----

#### 3.54 Datapoint Types B1 with Date and Time

Format: 9 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1

octet nr. 9 MSB 8 7 6

field names
Year r r r r Month r r r DayOfMonth [DayOf-]
Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 5 4 3 2

field names r r Minutes r r Seconds 0 0 0 0 0 0

encoding 0 0 U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r

octet nr. 1 LSB

field names Binary Information

encoding B

PDT: PDT_GENERIC_09

**Datapoint Types**

**ID:** **Name:** **Use:**

265.001 DPT_DateTime_Switch G

265.005 DPT_DateTime_Alarm G

265.009 DPT_DateTime_OpenClose G

265.011 DPT_DateTime_State G

265.012 DPT_DateTime_Invert G

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Date and Time Same as DPT 19.001 none none

Binary Information Same as DPT 1.xxx {0,1} none none

|r|r|r|r|Month|
|---|---|---|---|---|

|r|r|r|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|Minutes|
|---|---|---|

|r|r|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|0|0|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|9 octets: U [r U ][r U ][U U ][r U ][r U ]B B<br>8 4 4 3 5 3 5 2 6 2 6 16 1<br>9 8 7 6<br>MSB<br>DayOf-<br>Year r r r r Month r r r DayOfMonth HourOfDay<br>Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>5 4 3 2<br>r r Minutes r r Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC<br>0 0 U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r<br>1<br>LSB<br>Binary Information<br>B<br>PDT GENERIC 09<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|**ID:**|**Name:**|**Use: **|
|265.001|DPT_DateTime_Switch|G|
|265.005|<br>DPT_DateTime_Alarm|G|
|265.009|<br>DPT_DateTime_OpenClose|G|
|265.011|<br>DPT_DateTime_State|G|
|265.012|<br>DPT_DateTime_Invert|G|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001||none|none|
|Binary Information||Same as DPT 1.xxx|{0,1}|none|none|


-----

#### 3.55 Datapoint Types 4 octets Float with Date and Time

Format: 12 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32

octet nr. 12 MSB 11 10 9

field names
Year 0 0 0 0 Month 0 0 0 DayOfMonth [DayOf-]
Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 8 7 6 5

field names

0 0 Minutes 0 0 Seconds 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r

octet nr. 4 3 2 1 LSB

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

PDT: PDT_GENERIC_12

**Datapoint Types**

ID: Name:

266.027 DPT_DateTime_Value_Electric_Potential (14.027) G

266.056 DPT_DateTime_Value_Power (14.056) G

266.080 DPT_DateTime_Value_ApparentPower (14.080) G

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Date and Time Same as DPT 19.001 none none

Float Same as DPT 14.xxx

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|12 octets: U [r U ][r U ][U U ][r U ][r U ]B F<br>8 4 4 3 5 3 5 2 6 2 6 16 32<br>12 11 10 9<br>MSB<br>DayOf-<br>Year 0 0 0 0 Month 0 0 0 DayOfMonth HourOfDay<br>Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>8 7 6 5<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC<br>r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r<br>4 3 2 1<br>LSB<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>PDT GENERIC 12<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|266.027|DPT_DateTime_Value_Electric_Potential (14.027)|G|
|266.056|<br>DPT_DateTime_Value_Power (14.056)|G|
|266.080|<br>DPT_DateTime_Value_ApparentPower (14.080)|G|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001||none|none|
|Float||Same as DPT 14.xxx||||


-----

#### 3.56 Datapoint Type DPT_UTF-8 with Date and Time

Format: n octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16A[n]

octet nr. N+8 MSB N+7 N+6 N+5

field names
Year 0 0 0 0 Month 0 0 0 DayOfMonth [DayOf-]
Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. N+4 N+3 N+2 N+1

field names

0 0 Minutes 0 0 Seconds 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r

octet nr. N … … 1 LSB

field names A … … 00

encoding A A A A A A A A 0 0 0 0 0 0 0 0

PDT: PDT_NE_VL

**Datapoint Types**

ID: Name:

267.001 DPT_DateTime_UTF-8 G

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Date and Time Same as DPT 19.001 none none

UTF-8 String Same as DPT 28.001. none none

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|n octets: U [r U ][r U ][U U ][r U ][r U ]B A[n]<br>8 4 4 3 5 3 5 2 6 2 6 16<br>N+8 N+7 N+6 N+5<br>MSB<br>DayOf-<br>Year 0 0 0 0 Month 0 0 0 DayOfMonth HourOfDay<br>Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>N+4 N+3 N+2 N+1<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC<br>r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r<br>N … … 1<br>LSB<br>A … … 00<br>A A A A A A A A 0 0 0 0 0 0 0 0<br>PDT NE VL<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|267.001|DPT_DateTime_UTF-8|G|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001||none|none|
|UTF-8 String||Same as DPT 28.001.||none|none|


-----

### 4 Datapoint Types for HVAC

#### 4.1 Simple Datapoint Types with STATUS/COMMAND Z8 field

##### 4.1.1 Introduction
###### This clause gives a general introduction to the subject of extended Datapoint Types used in HVAC applications including a standardised Z8 field with STATUS / COMMAND information besides the main data value.

 The Datapoint Types containing a Z8 field always have the structure MZ8. This is, one main value (M) is followed by the Z8 field.

 Datapoint Types with a Z8 field have the naming format DPT_....._Z.

 These Datapoint Types are based on a more object-oriented approach. This is the following.
 • If such a Datapoint is accessed using the A_PropertyValue_Read-service[ 20)] the response shall contain the Z8 field that is interpreted as a generic STATUS information that contains attributes of the Datapoint.
 • If such a Datapoint is distributed using the service A_GroupPropertyValue_InfoReport[ 20)], the Z8 field shall be interpreted as a generic STATUS information that contains attributes of the Datapoint (same as Response).
 • If such a Datapoint is accessed using the services A_PropertyValue_Write[ 20)] or A_GroupPropertyValue_Write[ 20)], the additional field shall be interpreted as a COMMAND that contains methods to be executed on the Datapoint.

 STATUS - field

 For many HVAC objects a status information must be provided in addition to the main value for Read- access or InfoReport service.

EXAMPLES

sensor fault ⇒ value is invalid

Datapoint is not used by the application (out of service) ⇒ value is invalid
sensor value is overridden
sensor alarm level is exceeded
etc.

###### This Status information shall be transmitted together with the main value in the same A_PropertyValue_- Response-PDU, A_GroupPropertyValue_Response-PDU or A_GroupPropertyValue_InfoReport-PDU (no different Datapoints or properties) for reasons of data consistency, support of generic Datapoint descriptions and minimised bus load.

 The KNX protocol does not offer the possibility to read different Datapoints in the same Application Layer PDU therefore structured DPT are used.

20) The services A_PropertyValue_Read (A_PropertyValue_Read-PDU, A_PropertyValue_Response-PDU) or the
service A_PropertyValue_Write (A_PropertyValue_Write-PDU) using point-to-point connectionless or
connection-oriented communication mode or the LTE services A_GroupPropertyValue_Read
(A_GroupPropertyValue_Read-PDU, A_GroupPropertyValue_Response-PDU),
A_GroupPropertyValue_InfoReport, A_GroupPropertyValue_Write.


-----

###### COMMAND field

 On the other hand, execution of specific commands using the Application Layer services A_PropertyValue_Write and A_GroupPropertyValue_Write to change the status and behaviour of a Datapoint is often required.

EXAMPLES

set Datapoint out of service
normal write of a parameter
override sensor value
acknowledge alarm
etc.

###### This Command shall also be transmitted together with the main value in the same A_PropertyValue_Write-PDU or A_GroupPropertyValue_Write-PDU (no different Datapoints or properties) for reasons of data consistency, generic Datapoint descriptions and minimal bus load.

 The KNX protocol does not offer specific Application Layer services to execute these different write commands. It is also not possible to write different Datapoints in the same Application Layer PDU.

 Therefore, additional datatypes are proposed to allow transmission of the Z8 STATUS/COMMAND field in the same PDU.

##### 4.1.2 Datatype format
###### Table 5 summarizes the general structure of new elementary datatypes with STATUS/COMMAND field in data octet 1.

 Table 5 – Interpretation of the Z8-field in function of the Application Layer service

**Property Access Application Layer Service PDU** **data octet n..2** **data octet 1 Z8**

A_PropertyValue_Response-PDU STATUS

point-to-point
addressing

A_PropertyValue_Write-PDU COMMAND

A_GroupPropertyValue_InfoReport-PDU STATUS

LTE A_GroupPropertyValue_Response-PDU elementary datatype STATUS

A_GroupPropertyValue_Write-PDU COMMAND

###### Constraint

 The Z8 datatype format is not applicable to the Shared Variable model or standard Group Objects because the Shared Variable model does not differentiate between InfoReport and Write service. The A_GroupValue_Write service is used for reporting of information (e.g., sensor values) and writing of information (e.g., write an actuator setpoint). Therefore, the interpretation of the Z8 field would be ambiguous.

|Property Access|Application Layer Service PDU|data octet n..2|data octet 1 Z 8|
|---|---|---|---|
|point-to-point<br>addressing|A_PropertyValue_Response-PDU|elementary datatype|STATUS|
|point-to-point<br>addressing|<br>A_PropertyValue_Write-PDU|<br>A_PropertyValue_Write-PDU|COMMAND|
|LTE|<br>A_GroupPropertyValue_InfoReport-PDU|<br>A_GroupPropertyValue_InfoReport-PDU|STATUS|
|LTE|<br>A_GroupPropertyValue_Response-PDU|<br>A_GroupPropertyValue_Response-PDU|STATUS|
|LTE|<br>A_GroupPropertyValue_Write-PDU|<br>A_GroupPropertyValue_Write-PDU|COMMAND|


-----

###### STATUS field: Z8 contains a 8 bit bitset (also following TC247 ‘Field Level Objects’ status) in case of InfoReport or Read/Response service

|Bit #|Function|Main value|Col4|Remark|
|---|---|---|---|---|
|**Bit #**|**Function**|**Valid**|**Invalid**|**Invalid**|
|Bit 0|**OutOfService**<br>0: false<br>1: true|X*|X|Typical usage:<br>- <br>optional sensor is not connected (out of service), sensor<br>data is invalid<br>- <br>configuration parameter is void (function disabled)<br>Datapoint is accessible and the main value is valid<br>Datapoint is accessible but out of service, i.e., the main value is<br>void and**may containany value. **<br>**The sender shall support the ‘OutOfService’ flag if the**<br>**main value may be out of service.**<br>**The receiver shall detect that the main value is invalid due**<br>**to OutOfService condition**|
|Bit 1|**Fault**<br>0: false<br>1: true|X|X|Typical usage:<br>- <br>sensor value is corrupted due to a hardware problem, data<br>is invalid<br>- <br>a database value is corrupted, e.g., due to loss off backup<br>power, erased EEPROM etc.<br>Datapoint main value is valid⇒ no failure<br>Datapoint main value is corrupted due to failure.<br>**The sender shall support the ‘Fault’ flag if the main value**<br>**may be corrupted.**<br>**The receiver shall detect that the main value is corrupted**<br>**due to fault condition.**<br>The main value field contains failure information instead of the<br>data value if ‘Fault’ = true:<br>**main value failure information** <br>= 0 : general fault (unspecified)<br>= 1 : sensor open circuit (optional detection)<br>= 2 : sensor short circuit (optional detection)<br>all other values are reserved<br>**The sender shall set the main value = 0 if the reason for**<br>**the fault cannot be specified.**|
|Bit 2|**Overridden**<br>0: false<br>1: true|X*<br>X*||Typical usage:<br>- <br>sensor value is temporarily overridden for service<br>- <br>actuator setpoint is temporarily overridden for service<br>normal operation of the Datapoint, actual value<br>actual Datapoint value is overridden|
|Bit 3|**InAlarm**<br>0: false<br>1: true|X*<br>X*||Usage: for Datapoints with Alarming capability only<br>Datapoint not in alarm status<br>some alarm condition for this Datapoint occurred|
|Bit 4|**AlarmUnAck**<br>0: acknowledged<br>1:unacknowledged|X*<br>X*||Usage: for Datapoints with Alarming capability only<br>alarm is acknowledged by operator<br>alarm is not yet acknowledged by operator|
|Bit 5-7|reserved|||set to 0,0,0|
|_X* validity of Datapoint value depends on other STATUS attributes_|_X* validity of Datapoint value depends on other STATUS attributes_|_X* validity of Datapoint value depends on other STATUS attributes_|_X* validity of Datapoint value depends on other STATUS attributes_|_X* validity of Datapoint value depends on other STATUS attributes_|


-----

###### Combination of Status bits

**STATUS Bits** **Main value Remarks**

false false false X **valid** Normal case

false false true X **valid** value is overridden

false true false X **failure info** Datapoint failure, main value contains a failure information

false true true X **! valid !** Datapoint failure but e.g. a corrupted (sensor-) value is
***)** overridden. ‘Overridden’ has priority over ‘Fault’. The main

value is valid.

true false false X **invalid**  - actual (sensor-) value not available

                                           - parameter out of service

**true** **true** X X **-----** **illegal combination: if a Datapoint is out of service there is**
no reason for a ‘Fault’ because also failure detection is out of
service

**true** X **true** X **-----** **illegal combination: if a Datapoint is out of service there is**
no possibility to override it

###### Remarks

- Setting of the Status flags ‘OutOfService’ and ‘Fault’ is mutually exclusive. If a Datapoint is out of
###### service (i.e. void, function disabled), a fault condition cannot arise and vice versa.

- Currently the flags ‘InAlarm’ and ‘AlarmUnAck’ are not used (i.e. 0, 0) in all Datapoints except
###### simple AlarmInfo Datapoint (⇒ see FB Technical Alarm) because Alarms are generated at device level but not at Datapoint level. But the STATUS enables Alarm generation and acknowledgement at Datapoint level in future applications.

- Depending on the features of a property only a subset of STATUS flags may be supported. The other
###### flags are set to 0 (default) ⇒ Features to be defined in the Datapoint description.

- ***)** Support of this combination of 'Fault' and 'Overridden' is optional. It is allowed that the override of
###### the Datapoint value automatically clears the 'Fault' attribute, see also clause 4.1.5 ⇒ 'Fault' = false / 'Overridden' = true After execution of the COMMAND 'Release', the 'Overridden' attribute is cleared and the 'Fault' attribute is set again if the failure still persists.

|STATUS Bits|Col2|Col3|Col4|Main value|Remarks|
|---|---|---|---|---|---|
|**OutOfService**|**Fault**|**Overridden**|**InAlarm;**<br>**AlarmUnAck**|||
|false|false|false|X|**valid**|Normal case|
|false|false|true|X|**valid**|value is overridden|
|false|true|false|X|**failure info**|Datapoint failure, main value contains a failure information|
|false|true|true|X|**! valid !**<br>***)**|Datapoint failure but e.g. a corrupted (sensor-) value is<br>overridden. ‘Overridden’ has priority over ‘Fault’. The main<br>value is valid.|
|true|false|false|X|**invalid**|- <br>actual (sensor-) value not available<br>- <br>parameter out of service|
|**true**|**true**|X|X|**-----**|**illegal combination:**if a Datapoint is out of service there is<br>no reason for a ‘Fault’ because also failure detection is out of<br>service|
|**true**|X|**true**|X|**-----**|**illegal combination:**if a Datapoint is out of service there is<br>no possibility to override it|


-----

###### COMMAND field: Z8 contains a 8 bit enumeration value in case of a write service.

**enum** **COMMAN** **Main** **Remark**
**value** **D** **value**

Typical usage:

                                  - normal write of a setpoint, parameter,

NormalWrit
=0 X configuration value X
e

                                  - not applicable for sensor values !
→ no change of the STATUS flags

Typical usage:

                                  - temporary override of a sensor value for
service

                                  - temporary override of a actuator setpoint

=1 Override X  
for service
→ sets STATUS ‘Overridden’
→ may clear STATUS 'Fault' (optional, see
above)

Typical usage: together with ‘Override’.
Undo ‘Override’, leads to normal operation of

=2 Release X  
the Datapoint using the actual value
→ resets STATUS ‘Overridden’

Typical usage: disable functionality of a
Datapoint

                                  - configuration parameter is void (function
disabled)

=3 SetOSV X  
                                  - sensor is disabled
SetOSV ⇒ data object is unused, function
disabled
→ sets STATUS ‘OutOfService’

Typical usage: together with ‘SetOSV’
The main value field is valid but may be ignored

=4 ResetOSV X  
by the receiver (e.g. sensor)
→ resets STATUS ‘OutOfService’

Usage: for Datapoints with Alarming capability
only

=5 AlarmAck X  
Acknowledgement of Alarm STATUS
→ resets STATUS ‘AlarmUnAck’

SetToDefa Typical usage: parameters
=6 X  ult Sets the main value to the default value

=7-255 reserved

_1)_ _LTE runtime interworking Write Output, e.g. a HVAC zone controller valve setpoint output_
_2)_ _LTE runtime interworking Write Input, e.g. a Valve setpoint input_
_3)_ _Property (parameter in a device, server) accessible by a tool (client)_
_X:_ _usage possible and useful; support to be decided for each Datapoint individually_
_(X):_ _very limited usage in practice._

|enum<br>value|COMMAN<br>D|Main<br>value|Col4|Remark|Typical<br>support in|Col7|Col8|
|---|---|---|---|---|---|---|---|
|||**Valid**|**don’ t care**||**LTE Write**<br>**Client**<br>** 1)**|**LTE Write**<br>**Server**<br>**2)**|**Property**<br>**Write**|
|=0|NormalWrit<br>e|X||Typical usage:<br>- <br>normal write of a setpoint, parameter,<br>configuration value<br>- <br>not applicable for sensor values !<br>→ no change of the STATUS flags|X|X|X|
|=1|Override|X||Typical usage:<br>- <br>temporary override of a sensor value for<br>service<br>- <br>temporary override of a actuator setpoint<br>for service<br>→ sets STATUS ‘Overridden’<br>→ may clear STATUS 'Fault' (optional, see<br>above)|-|X|X|
|=2|Release||X|Typical usage: together with ‘Override’.<br>Undo ‘Override’, leads to normal operation of<br>the Datapoint using the actual value<br>→ resets STATUS ‘Overridden’|-|X|X|
|=3|SetOSV||X|Typical usage: disable functionality of a<br>Datapoint<br>- <br>configuration parameter is void (function<br>disabled)<br>- <br>sensor is disabled<br>SetOSV⇒ data object is unused, function<br>disabled<br>→ sets STATUS ‘OutOfService’|-|(X)|X|
|=4|ResetOSV|X||Typical usage: together with ‘SetOSV’<br>The main value field is valid but may be ignored<br>by the receiver (e.g. sensor)<br>→ resets STATUS ‘OutOfService’|-|(X)|X|
|=5|AlarmAck||X|Usage: for Datapoints with Alarming capability<br>only<br>Acknowledgement of Alarm STATUS<br>→ resets STATUS ‘AlarmUnAck’|-|-|X|
|=6|SetToDefa<br>ult||X|Typical usage: parameters<br>Sets the main value to the default value|-|X|X|
|=7-255|reserved|||||||


-----

###### Remarks

 The usage of the Commands ‘NormalWrite’ and ‘Override’/ ‘Release’ is usually but not always mutually exclusive. E.g. a parameter may be written but an override of a parameter does not make sense. EXCEPTION EXAMPLE
 The valve setpoint is a LTE write input on the valve. A HVAC controller sends the valve setpoint periodically to the valve using the ‘NormalWrite’ Command. A tool could execute an override to the setpoint on the valve. The valve uses from then on the override value and not the value from the HVAC controller.

 Reception of a COMMAND in the Datapoint server may change the STATUS of the Datapoint in the database. The Command itself is not stored in the database.

 COMMAND features except ‘NormalWrite’ are mainly applicable for properties with Write access in client/server mode with point-to-point addressing. The Sender (i.e. Datapoint client) using A_PropertyValue_Write is normally a (Service-) Tool.

 During runtime communication the sender (i.e. a process device) of a LTE A_GroupPropValue_Write-PDU will usually have the COMMAND field fixed to ‘NormalWrite’ (=0) because most other commands have no practical usage for process data communication. A tool will use A_PropertyValue_Write and point-to-point addressing, see above.

 Depending on the features of a property only a small subset of COMMANDS may be supported in the Datapoint server. ⇒ Features to be defined in the Datapoint description.

##### 4.1.3 OutOfService mechanism for a parameter
###### A parameter and the functionality behind the parameter can be disabled using the ‘SetOSV’ command.

 EXAMPLE

Command 'Override'
no action

Command 'NormalWrite' Command 'SetOSV'

Command 'SetOSV'

Store main value Status 'OutOfService' = true;

no action


Command 'ResetOSV'
Store main value;
Status 'OutOfService'= false
function(parameter) is enabled
Command 'ResetOSV'
Store main value


Command 'NormalWrite'
no action


- The parameter is changed using ‘NormalWrite’ Command.

- The Command ‘ResetOSV’ resets the Status ‘OutOfService’ to false and the main value is written to
###### the parameter.

- ‘Override’ Command and Status ‘Overridden’ are not supported on parameter Datapoints.


-----

##### 4.1.4 OutOfService mechanism for a runtime Datapoint (actual value)
###### A runtime Datapoint (e.g., a sensor value) and the functionality behind the Datapoint may be automatically disabled by the application program for various reasons (e.g., an optional sensor is not connected). This is indicated by the Status ‘OutOfService’.

 The Datapoint value may be overridden only if ‘OutOfService’ = false. If ‘OutOfService’ = true, the Override feature is inhibited.

 EXAMPLE 1 Commands ‘SetOSV’ and ‘Reset OSV’ are supported, i.e., the actual value can be set out of service by a tool.


Command 'Release'
Status 'Overridden'=false

Command 'SetOSV'
Status 'OutOfService' = true;

'OutOfService' function(datapoint) is disabled

Command 'Override' = false
Store main value
Status 'Overridden'=true

Command 'ResetOSV'
Status 'OutOfService'= false
function(datapoint) is enabled
Command 'ResetOSV'
no action


Command 'Override'
no action

Command 'SetOSV'
no action


###### EXAMPLE 2 The application program changes the ‘OutOfService’ Status automatically depending on local application conditions. E.g. an optional sensor is not connected to a HVAC controller ⇒ Status ‘OutOfService’ = true (and not ‘Fault’ = true) Property Write Commands ‘SetOSV’ and ‘ResetOSV’ sent via bus are not supported on such Datapoints.


Command 'Release'
Status 'Overridden'=false

Application condition X
Status 'OutOfService' = true;

'OutOfService' function(datapoint) is disabled

Command 'Override' = false
Store main value
Status 'Overridden'=true

Application condition Y
Status 'OutOfService'= false
function(datapoint) is enabled
Command 'ResetOSV'
no action

Command 'SetOSV'
no action


Command 'Override'
no action

Command 'SetOSV'
no action

'OutOfService' Command 'ResetOSV'
= true no action


##### 4.1.5 Override mechanism
###### ‘Override’ is used for a temporary service operation on device level or system level. Usually, sensor values or actuator setpoints may support the override feature.

**InfoReport**
**Read/Response**

datapoint value

CMD 'Release' / 'Override'

'Overridden' = false 'Overridden' = true

internal value override value

e.g. from sensor

|Col1|Col2|
|---|---|
|datapoint value|datapoint value|
|||


-----

###### NOTE In case of a sensor failure (STATUS 'Fault') it may be useful to override the sensor value temporarily for service reasons. Execution of the COMMAND 'Override' disconnects the data flow from the sensor to the Datapoint value and the override value is used instead. Since the actual sensor value is no more considered, it is allowed for the implementation of the Datapoint to clear the STATUS 'Fault' when 'Overridden' is set. See also clause 4.1.2

 EXAMPLE 1 Override of a sensor value, e.g. the LTE InfoReport sensor output (Datapoint server); local override of the output by a tool using Property Write service (individual addressing).

Command 'Override'
Store main value


Command 'NormalWrite'
no action


Command 'Override'
Status 'Overridden'=true
Store main value Command 'SetOSV'
no action

'Overridden' Command 'ResetOSV'
= true no action


Command 'Release' Command 'NormalWrite'
no action no action

###### In the state ‘Overridden’ = true the actual value of the sensor is replaced by the override value, which is distributed in the system using LTE InfoReport service.

 In the state ‘Overridden’ = true the Commands ‘SetOSV / ‘ResetOSV’ have no effect (Override has in this case higher priority).

 EXAMPLE 2 Override of a valve setpoint on the valve, i.e., a LTE Write input (Datapoint server) on the valve is overridden from a tool by using LTE Write service or Property Write service.

Command 'Override'
Store main value


Command 'NormalWrite'
Store main value

'Overridden'
= false

Command 'Release'
no action


Command 'Override'
Status 'Overridden'=true
Store main value Command 'SetOSV'
no action

'Overridden' Command 'ResetOSV'
= true no action

Command 'Release'
Status 'Overridden'=false

Command 'NormalWrite'
no action


###### In state ‘Overridden’ = true the override value is used and the received value (LTE Write service) with Command ‘NormalWrite’ is ignored. After the ‘Release’ Command the actual value of the Datapoint is undefined until the reception of the next ‘NormalWrite’ LTE Write update (the valve will use either a default value or keeps the override value).

 Override Timeout: ‘Overridden’ status shall be self clearing based on a timeout, because the override condition shall not remain forever if the operator / installer forgets to ‘Release’ the overridden Datapoint.

 The implementation of the timeout is company specific, e.g.

- individual timeout per Datapoint

- or automatic ‘Release’ of all Datapoints in a device at midnight

- or re-trigger a common timeout for all Datapoints after reception of each ‘Override’ Command
###### ⇒ timeout executes a ‘Release’ on all Datapoints.

 Power-up condition will normally reset the ‘Overridden’ attribute (manufacturer specific solution).


-----

##### 4.1.6 Alarming mechanism
###### An Alarm at Datapoint level indicates that a serious fault condition occurred or still occurs on the Datapoint.

 EXAMPLES
 transient error event (e.g., critical sensor level exceeded) persistent error state (e.g., sensor fault; corrupted memory value)

 Alarms can be acknowledged by an operator (write service to a property). Datapoints with Alarm feature therefore therefore a corresponding 2 bit state machine in the Status field (InAlarm / AlarmUnAck).

 Alarm State Machine

Command ‘AlarmAck’


InAlarm = false;
AlarmUnAck = acknowledged

Command ‘AlarmAck’

Normal, Acked

disturbance

appears

disturbance

disappears

disturbance

Alarm,Acked appears

InAlarm = true;
AlarmUnAck = acknowledged Command ‘AlarmAck’

Command ‘AlarmAck’


disturbance
appears


InAlarm = false;
AlarmUnAck = unacknowledged

InAlarm = true;
AlarmUnAck = unacknowledged


###### NOTE Currently Alarm messages are provided for the system only on device-level (not on functional or Datapoint level) using the AlarmInfo Datapoint (⇒ see FB Technical Alarm). I.e., individual Datapoints except the device alarm Datapoint AlarmInfo do not support this feature.

#### 4.2 Datapoint Types B1

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|b|
|---|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|Col2|1 bit: B<br>1<br>1<br>b<br>B<br>See below<br>b = {0,1}<br>See below<br>(not applicable)<br>PDT BINARY INFORMATION (alt: PDT UNSIGNED CHAR)<br>_ _ _ _|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Name:|Encoding: b|Use:|
|1.100|DPT_Heat/Cool|DPT_Heat/Cool|0 = cooling<br>1 = heating|FB|


-----

#### 4.3 Datapoint Types N8

Format: 1 octet: N8

octet nr. 1

field names _field1_

encoding N N N N N N N N

Encoding: Encoding absolute value N = [0 … 255]

Unit: none

Resol.: none

PDT: PDT_ENUM8

**Datapoint Types**

ID: Name: Encoding:

20.100 DPT_FuelType field1 = FuelType

0 = auto
1 = oil
2 = gas
3
4 … 255

20.101 DPT_BurnerType field1 = BurnerType

0 = reserved
1 = 1 stage
2 = 2 stage
3 = modulating
4 … 255 = reserved

20.102 DPT_HVACMode field1 = HVACMode

0 = Auto
1 = Comfort
2 = Standby
3 = Economy
4
5 … 255 = reserved

NOTE 23 DPT_HVACMode is the same as DPT_HVACMode_Z (201.100), but without Z
In HVAC Room Controllers in KNX Standard Mode, DPT_HVACMode shall be used to set the
HVAC Mode.
The HVAC Room controller may have in addition
Datapoints of 1 bit to set the HVAC Mode. (This means that additional HVAC Mode via
individual 1 bit DPs is allowed.)
For reporting the currently set HVAC Mode by means of a status/diagnostic Datapoint, the
HVAC Room controllers shall use DPT_StatusRHCC or possibly DPT_HVACStatus
(see Annex A).

20.103 DPT_DHWMode[ 21)] field1 = DHWMode

0 = Auto
1
2 = Normal
3 = Reduced
4
5 … 255 = reserved

21) Same as DPT_DHWMode_Z (201.102), but without Z8 field.

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|1 octet: N<br>8<br>1<br>field1<br>N N N N N N N N<br>Encoding absolute value N = [0 … 255]<br>none<br>none<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|20.100|DPT_FuelType|field1 = FuelType<br>0 <br>= auto<br>1 <br>= oil<br>2 <br>= gas<br>3 <br>= solid state fuel<br>4 … 255<br>= not used, reserved|[0 … 3]|HWH|
|20.101|DPT_BurnerType|field1 = BurnerType<br>0 <br>= reserved<br>1 <br>= 1 stage<br>2 <br>= 2 stage<br>3 <br>= modulating<br>4 … 255 = reserved|[0 … 3]|HWH|
|20.102|DPT_HVACMode|field1 = HVACMode<br>0 <br>= Auto<br>1 <br>= Comfort<br>2 <br>= Standby<br>3 <br>= Economy<br>4 <br>= Building Protection<br>5 … 255 = reserved|[0 … 4]|HVAC|
|20.102|NOTE 23 DPT_HVACMode is the same as DPT_HVACMode_Z (201.100), but without Z8 field.<br>In HVAC Room Controllers in KNX Standard Mode, DPT_HVACMode shall be used to set the<br>HVAC Mode.<br>The HVAC Room controller may have_in addition_ to the DPT_HVACMode individual<br>Datapoints of 1 bit to set the HVAC Mode. (This means that additional HVAC Mode via<br>individual 1 bit DPs is allowed.)<br>For reporting the currently set HVAC Mode by means of a status/diagnostic Datapoint, the<br>HVAC Room controllers shall use DPT_StatusRHCC or possibly DPT_HVACStatus<br>(see Annex A).|NOTE 23 DPT_HVACMode is the same as DPT_HVACMode_Z (201.100), but without Z8 field.<br>In HVAC Room Controllers in KNX Standard Mode, DPT_HVACMode shall be used to set the<br>HVAC Mode.<br>The HVAC Room controller may have_in addition_ to the DPT_HVACMode individual<br>Datapoints of 1 bit to set the HVAC Mode. (This means that additional HVAC Mode via<br>individual 1 bit DPs is allowed.)<br>For reporting the currently set HVAC Mode by means of a status/diagnostic Datapoint, the<br>HVAC Room controllers shall use DPT_StatusRHCC or possibly DPT_HVACStatus<br>(see Annex A).|NOTE 23 DPT_HVACMode is the same as DPT_HVACMode_Z (201.100), but without Z8 field.<br>In HVAC Room Controllers in KNX Standard Mode, DPT_HVACMode shall be used to set the<br>HVAC Mode.<br>The HVAC Room controller may have_in addition_ to the DPT_HVACMode individual<br>Datapoints of 1 bit to set the HVAC Mode. (This means that additional HVAC Mode via<br>individual 1 bit DPs is allowed.)<br>For reporting the currently set HVAC Mode by means of a status/diagnostic Datapoint, the<br>HVAC Room controllers shall use DPT_StatusRHCC or possibly DPT_HVACStatus<br>(see Annex A).|NOTE 23 DPT_HVACMode is the same as DPT_HVACMode_Z (201.100), but without Z8 field.<br>In HVAC Room Controllers in KNX Standard Mode, DPT_HVACMode shall be used to set the<br>HVAC Mode.<br>The HVAC Room controller may have_in addition_ to the DPT_HVACMode individual<br>Datapoints of 1 bit to set the HVAC Mode. (This means that additional HVAC Mode via<br>individual 1 bit DPs is allowed.)<br>For reporting the currently set HVAC Mode by means of a status/diagnostic Datapoint, the<br>HVAC Room controllers shall use DPT_StatusRHCC or possibly DPT_HVACStatus<br>(see Annex A).|
|20.103|DPT_DHWMode 21)|field1 = DHWMode<br>0 <br>= Auto<br>1 <br>= LegioProtect<br>2 <br>= Normal<br>3 <br>= Reduced<br>4 <br>= Off/FrostProtect<br>5 … 255 = reserved|[0 … 4]|HWH|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.104|DPT_LoadPriority|field1 = LoadPriority<br>0 <br>= None<br>1 <br>= Shift load priority<br>2 <br>= Absolute load priority<br>3 … 255 = reserved|[0 … 2]|HVAC|
|20.105|DPT_HVACContrMode 22)|field1 = HVACContrMode<br>0 <br>= Auto<br>1 <br>= Heat<br>2 <br>= Morning Warmup<br>3 <br>= Cool<br>4 <br>= Night Purge<br>5 <br>= Precool<br>6 <br>= Off<br>7 <br>= Test<br>8 <br>= Emergency Heat<br>9 <br>= Fan only<br>10<br>= Free Cool<br>11<br>= Ice<br>12<br>= Maximum Heating Mode<br>13<br>= Economic Heat/Cool Mode<br>14<br>= Dehumidification<br>15<br>= Calibration Mode<br>16<br>= Emergency Cool Mode<br>17<br>= Emergency Steam Mode<br>18 … 19 = reserved<br>20<br>= NoDem<br>21 … 255 = reserved|<br>{[0 … 17], 20}|HVAC|
|20.106|DPT_HVACEmergMode 23)|field1 = HVACEmergMode<br>0 <br>= Normal<br>1 <br>= EmergPressure<br>2 <br>= EmergDepressure<br>3 <br>= EmergPurge<br>4 <br>= EmergShutdown<br>5 <br>= EmergFire<br>6 … 255 = reserved|[0 … 5]|HVAC|
|20.107|DPT_ChangeoverMode|field1 = ChangeoverMode<br>0 <br>= Auto<br>1 <br>= CoolingOnly<br>2 <br>= HeatingOnly<br>3 … 255 = reserved|[0 … 2]|HVAC|


22) Same as DPT_HVACContrMode_Z (201.104), but without Z8 field.
23) Same as DPT_HVACEmergMode_Z (201.109), but without Z8 field.


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.108|DPT_ValveMode|field1 = ValveMode<br>0 <br>= reserved<br>1 <br>= Heat stage A for normal<br>heating<br>2 <br>= Heat stage B for heating<br>with two stages (A + B)<br>3 <br>= Cool stage A for normal<br>cooling<br>4 <br>= Cool stage B for cooling<br>with two stages (A + B)<br>5 <br>= Heat/Cool for changeover<br>applications<br>6 … 255 = reserved|[1 … 5]|HVAC|
|20.109|DPT_DamperMode|field1 = DamperMode<br>0 <br>= reserved<br>1 <br>= Fresh air, e.g. for fancoils<br>2 <br>= Supply Air. e.g. for VAV<br>3 <br>= Discharge Air e.g. for VAV<br>4 <br>= Extract Air e.g. for VAV<br>5 … 255 = reserved|<br>[1 … 4]|HVAC|
|20.110|DPT_HeaterMode|field1 = HeaterMode<br>0 <br>= reserved<br>1 <br>= Heat Stage A On/Off<br>2 <br>= Heat Stage A Proportional<br>3 <br>= Heat Stage B Proportional<br>4 … 255 = reserved|[1 … 3]|HVAC|
|20.111|DPT_FanMode|field1 = FanMode<br>0 <br>= not running<br>1 <br>= permanently running<br>2 <br>= running in intervals<br>3 … 255 = reserved|[0 … 2]|TU|
|20.112|DPT_MasterSlaveMode|field1 = MasterSlaveMode<br>0 <br>= autonomous<br>1 <br>= master<br>2 <br>= slave<br>3 … 255 = reserved|[0 … 2]|TU|
|20.113|DPT_StatusRoomSetp|field1 = StatusRoomSetp<br>0 <br>= normal setpoint<br>1 <br>= alternative setpoint<br>2 <br>= building protection setpoint<br>3 … 255 = reserved|<br>[0 … 2]|TU<br>DEH|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.114|DPT_Metering_DeviceTyp<br>e|_field1_ = Metering_DeviceType<br>0 <br>= <br>Other device typeb) <br>1 <br>= <br>Oil meter<br>2 <br>= <br>Electricity meter<br>3 <br>= <br>Gas meter<br>4 <br>= <br>Heat meter<br>5 <br>= <br>Steam meter<br>6 <br>= <br>Warm Water meter<br>7 <br>= <br>Water meter<br>8 <br>= <br>Heat cost allocator<br>9 <br>= <br>reserved c) <br>10<br>= <br>Cooling Load meter<br>(outlet)<br>11<br>= <br>Cooling Load meter<br>(inlet<br>12<br>= <br>Heat (inlet)<br>13<br>= <br>Heat and Cool<br>14<br>= <br>reservedc)<br>15<br>= <br>reservedc)<br>16 to 31<br>= <br>reserved, unused<br>32<br>= <br>breaker (electricity)<br>33<br>= <br>valve (gas or water)<br>34 to 39<br>= <br>reserved, unused<br>40<br>= <br>waste water meter<br>41<br>= <br>garbage<br>42 to 254 =<br>reserved, unused<br>255<br>= <br>void device typea)|{0, 1, 2, 3, 4,<br>5, 6, 7, 8, 10,<br>11, 12, 13, 32,<br>33, 40, 41,<br>255}|FB|
|20.114|DPT_Metering_DeviceTyp<br>e|a)Metering device type is void; i.e. the metering FB does not<br>contain meaningful data.<br>b)In the M-Bus specification Metering Device Type = 0 is marked<br>as "Other" device type, used for undefined M-Bus device types.<br>c)In the M-Bus specification these encodings are reserved for<br>very specific Device Types that are not supported in the KNX<br>system. In DPT_Metering_DeviceType these enum values are<br>kept as‘reserved’.|a)Metering device type is void; i.e. the metering FB does not<br>contain meaningful data.<br>b)In the M-Bus specification Metering Device Type = 0 is marked<br>as "Other" device type, used for undefined M-Bus device types.<br>c)In the M-Bus specification these encodings are reserved for<br>very specific Device Types that are not supported in the KNX<br>system. In DPT_Metering_DeviceType these enum values are<br>kept as‘reserved’.|a)Metering device type is void; i.e. the metering FB does not<br>contain meaningful data.<br>b)In the M-Bus specification Metering Device Type = 0 is marked<br>as "Other" device type, used for undefined M-Bus device types.<br>c)In the M-Bus specification these encodings are reserved for<br>very specific Device Types that are not supported in the KNX<br>system. In DPT_Metering_DeviceType these enum values are<br>kept as‘reserved’.|
|20.115|DPT_HumDehumMode|field1 =_HumDehumMode_<br>0 <br>= inactive<br>1 <br>= humidification<br>2 <br>= dehumidification<br>3 … 255<br>= not used, reserved|[0 … 2]|HVAC|
|20.115|APPLICATIONS <br>THISDPT SHALL EXCLUSIVELY BE USED INHVAC APPLICATIONS. <br>THISDPT CAN BE USED IN GROUP COMMUNICATION INSTANDARDMODE AND INLTE-MODE.|APPLICATIONS <br>THISDPT SHALL EXCLUSIVELY BE USED INHVAC APPLICATIONS. <br>THISDPT CAN BE USED IN GROUP COMMUNICATION INSTANDARDMODE AND INLTE-MODE.|APPLICATIONS <br>THISDPT SHALL EXCLUSIVELY BE USED INHVAC APPLICATIONS. <br>THISDPT CAN BE USED IN GROUP COMMUNICATION INSTANDARDMODE AND INLTE-MODE.|APPLICATIONS <br>THISDPT SHALL EXCLUSIVELY BE USED INHVAC APPLICATIONS. <br>THISDPT CAN BE USED IN GROUP COMMUNICATION INSTANDARDMODE AND INLTE-MODE.|
|20.120|DPT_ADAType|field1 = ADAType<br>0 <br>= not used, reserved<br>1 <br>= Air Damper<br>2 <br>= VAV<br>3 … 255 = not used, reserved|[1 … 2]|HVAC|
|20.121|DPT_BackupMode|field1 = BackupMode<br>0 <br>= Backup Value<br>1 <br>= Keep Last State<br>2 … 255 = reserved|[0 … 1]|HVAC|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.122|DPT_StartSynchronization|field1 = StartSynchronization<br>0 <br>= Position unchanged<br>1 <br>= Single close<br>2 <br>= Single open<br>3 … 255 = reserved|[0 … 2]|HVAC|


#### 4.4 Data Type “8-Bit Set”

##### 4.4.1 Datapoint Type “Forcing Signal”
###### LTE: compound structure

Format: 1 octet: B8

octet nr. 1

field names Attributes

encoding B B B B B B B B

Encoding: See below.

Range: See below.

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

21.100 DPT_ForceSign See below See below HWH

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>Attributes<br>B B B B B B B B<br>See below.<br>See below.<br>Not applicable.<br>Not applicable.<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|21.100|DPT_ForceSign|See below|See below|HWH|

|Data fields|Description|Col3|Range|
|---|---|---|---|
|Attributes|Bit #||Bitset B8,|
|- ForceRequest|0|indicates if forced power consumption is necessary (validity of<br>the remaining attributes)|true / false|
|- Protection|1|‘Protection’ indicates that a critical overheat condition occurs<br>(e.g. too high boiler temp.).<br>The interpretation of the attributes ‘DHWNorm’, ‘DHWLegio’,<br>‘RoomHComf’ and ‘RoomHMax’ depends on the type of<br>overheat: the addressed heat consumersshallconsume<br>energy|true / false|
|- Oversupply|2|‘Oversupply’ indicates that an uncritical overheat condition<br>occurs (e.g., boiler temperature is much higher than requested<br>by heat demand).<br>The interpretation of the attributes ‘DHWNorm’, ‘DHWLegio’,<br>‘RoomHComf’ and ‘RoomHMax’ depends on the type of<br>overheat: the addressed heat consumersmay consume<br>energy|true / false|


-----

|Data fields|Description|Col3|Range|
|---|---|---|---|
|Attributes|Bit #||Bitset B8,|
|- Overrun|3|indicates that remaining energy is available (e.g. in the boiler<br>after load shutdown). All heat consumers which were active<br>immediately before the overrun condition occurred continue<br>their energy consumption with their last setpoint.<br>This attribute iscompletely independent from the attributes<br>‘Protection’, ‘Oversupply’, ‘DHWNorm’, ‘DHWLegio’,<br>‘RoomHComf’ and ‘RoomHMax’|true / false|
|- DHWNorm|4|Load DHW to ‘Normal’ Level in case of overheat: additional<br>info about the type of overheat is contained in the ‘Protection’<br>and ‘Oversupply’ attributes|true / false|
|- DHWLegio|5|Load DHW to ‘LegioProtect’ Level in case of overheat<br>(‘Protection’ or ‘Oversupply’)|true / false|
|- RoomHComf|6|Load Room Heating to ‘Comfort’ Level in case of overheat<br>(‘Protection’ or ‘Oversupply’)|true / false|
|- RoomHMax|7|Load Room Heating with maximum flow temperature in case<br>of overheat (‘Protection’ or ‘Oversupply’)|true / false|


###### Depending on the usage of this DPT in a given Datapoint, some bit-fields may be unused and set to ‘0’ by the sender and will be ignored by the receiver

 Standard Mode

 The information of this DPT is not available in Standard Mode.

##### 4.4.2 Datapoint Type “Forcing Signal Cool”
###### LTE: compound structure

Format: 1 octet: B8

octet nr. 1

field names Attributes

encoding B B B B B B B B

Encoding: See below.

Range: See below.

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

21.101 DPT_ForceSignCool See below. See below. VAC

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>Attributes<br>B B B B B B B B<br>See below.<br>See below.<br>Not applicable.<br>Not applicable.<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|21.101|DPT_ForceSignCool|See below.|See below.|VAC|


-----

reserved 1 to 7 default 0

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

##### 4.4.3 Datapoint Type “Room Heating Controller Status”
###### LTE: structured DPT

Format: 1 octet: B8

octet nr. 1

field names Attributes

encoding B B B B B B B B

Encoding: See below.

Range: See below.

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

21.102 DPT_StatusRHC See below. See below. HWH

**Data fields** **Description** **Unit / Range**

Attributes Bit # Bitset B8

 - Fault 0 Room Heating Controller as a failure (mainly for true / false
monitoring)

 - StatusECO 1 ECO status; temporary energy saving mode, e.g. due true / false
to high room temperature or high outside temperature

 - TempFlowLimit 2 Flow temperature limitation active true / false

 - TempReturnLimit 3 Return temperature limitation active true / false

 - StatusMorningBoost 4 morning boost active true / false

 - StatusStartOptim 5 start optimization active true / false

 - StatusStopOptim 6 stop optimization active true / false

 - SummerMode 7 room heating is disabled due to local summer/winter true / false
mode

###### Depending on the usage of this DPT in a given Datapoint, some bit-fields may be unused and set to ‘0’ by the sender and will be ignored by the receiver 

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|Attributes|Bit #||Bitset B8|
|- <br>ForceRequest|0|indicates if forced power consumption is necessary<br>(validity of the remaining attributes)|true / false|
|reserved|1 to 7||default 0|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>Attributes<br>B B B B B B B B<br>See below.<br>See below.<br>Not applicable.<br>Not applicable.<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|21.102|DPT_StatusRHC|See below.|See below.|HWH|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|Attributes|Bit #||Bitset B8|
|- Fault|0|Room Heating Controller as a failure (mainly for<br>monitoring)|true / false|
|- StatusECO|1|ECO status; temporary energy saving mode, e.g. due<br>to high room temperature or high outside temperature|true / false|
|- TempFlowLimit|2|Flow temperature limitation active|true / false|
|- TempReturnLimit|3|Return temperature limitation active|true / false|
|- StatusMorningBoost|4|morning boost active|true / false|
|- StatusStartOptim|5|start optimization active|true / false|
|- StatusStopOptim|6|stop optimization active|true / false|
|- SummerMode|7|room heating is disabled due to local summer/winter<br>mode|true / false|


-----

###### Standard Mode

 Separate Boolean DPs.

##### 4.4.4 Datapoint Type “Solar DHW Controller Status”
###### LTE: structured DPT

Format: 1 octet: B8

octet nr. 1

field names Attributes

encoding 0 0 0 0 0 B B B

Encoding: See below.

Range: See below.

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

21.103 DPT_StatusSDHWC See below. See below. DHW control

**Data fields** **Description** **Unit / Range**

Attributes Bit # Bitset B8

 - Fault 0 SDHWC has a failure 1 = fault
0 = ok

 - SDHWLoadActive 1 SDHW load currently active, solar pump is running true / false

 - SolarLoadSufficient 2 enough solar energy available for DHW load to true / false
reach the DHW temperature setpoint

 - reserved 3 to 7 default 0

###### Standard Mode

 Separate Boolean DPs.

|0|0|0|0|0|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>Attributes<br>0 0 0 0 0 B B B<br>See below.<br>See below.<br>Not applicable.<br>Not applicable.<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|21.103|DPT_StatusSDHWC|See below.|See below.|DHW control|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|Attributes|Bit #||Bitset B8|
|- Fault|0|SDHWC has a failure|1 = fault<br>0 = ok|
|- SDHWLoadActive|1|SDHW load currently active, solar pump is running|true / false|
|- SolarLoadSufficient|2|enough solar energy available for DHW load to<br>reach the DHW temperature setpoint|true / false|
|- reserved|3 to 7||default 0|


-----

##### 4.4.5 Datapoint Type “Fuel Type Set”
###### LTE: structured DPT

Format: 1 octet: B8

octet nr. 1

field names Fuel Type Set

encoding 0 0 0 0 0 B B B

Encoding: See below.

Range: See below.

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

21.104 DPT_FuelTypeSet See below. See below. HWH

**Data fields** **Description** **Unit / Range**

FuelType Bit # Bitset B8

 - Oil 0 oil fuel supported true / false

 - Gas 1 gas fuel supported true / false

 - SolidState 2 solid state fuel supported true / false

reserved 3 to 7 default 0

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|0|0|0|0|0|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>Fuel Type Set<br>0 0 0 0 0 B B B<br>See below.<br>See below.<br>Not applicable.<br>Not applicable.<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|21.104|DPT_FuelTypeSet|See below.|See below.|HWH|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|FuelType|Bit #||Bitset B8|
|- Oil|0|oil fuel supported|true / false|
|- Gas|1|gas fuel supported|true / false|
|- SolidState|2|solid state fuel supported|true / false|
|reserved|3 to 7||default 0|


-----

##### 4.4.6 Datapoint Type “Room Cooling Controller Status”
###### LTE: structured DPT

Format: 1 octet: B8

octet nr. 1

field names Attributes

encoding 0 0 0 0 0 0 0 B

Encoding: See below.

Range: See below.

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

21.105 DPT_StatusRCC See below. See below. VAC

**Data fields** **Description** **Unit / Range**

Attributes Bit # Bitset B8

Fault 0 Room Cooling Controller has a failure (mainly for monitoring) true / false

reserved 1 to 7 for features implemented in the future default 0

###### Standard Mode

 Separate Boolean DPs.

|0|0|0|0|0|0|0|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>Attributes<br>0 0 0 0 0 0 0 B<br>See below.<br>See below.<br>Not applicable.<br>Not applicable.<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|21.105|DPT_StatusRCC|See below.|See below.|VAC|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|Attributes|Bit #||Bitset B8|
|Fault|0|Room Cooling Controller has a failure (mainly for monitoring)|true / false|
|reserved|1 to 7|for features implemented in the future|default 0|


-----

##### 4.4.7 Datapoint Type “Ventilation Controller Status”
###### LTE: structured DPT

Format: 1 octet: B8

octet nr. 1

field names Attributes

encoding 0 0 0 0 B B B B

Encoding: See below.

Range: See below.

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

21.106 DPT_StatusAHU See below See below VAC

**Data fields** **Description** **Unit / Range**

Attributes Bit # Bitset B8

 - Fault 0 Ventilation Controller has a failure (mainly for monitoring) true / false

 - FanActive 1 Supply and / or exhaust air fans are operating true / false

 - Heat 2 Ventilation Controller is in heating mode true / false

 - Cool 3 Ventilation Controller is in cooling mode true / false

reserved 4 to 7 for features implemented in the future default 0

###### Standard Mode

 Separate Boolean DPs.

|0|0|0|0|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>Attributes<br>0 0 0 0 B B B B<br>See below.<br>See below.<br>Not applicable.<br>Not applicable.<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|21.106|DPT_StatusAHU|See below|See below|VAC|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|Attributes|Bit #||Bitset B8|
|- Fault|0|Ventilation Controller has a failure (mainly for monitoring)|true / false|
|- FanActive|1|Supply and / or exhaust air fans are operating|true / false|
|- Heat|2|Ventilation Controller is in heating mode|true / false|
|- Cool|3|Ventilation Controller is in cooling mode|true / false|
|reserved|4 to 7|for features implemented in the future|default 0|


-----

#### 4.5 Data Type “16-Bit Set”

##### 4.5.1 Datapoint Type “DHW Controller Status”
###### LTE: compound structure

Format: 2 octets: B16

octet nr. 2MSB 1LSB

field names Attributes

encoding 0 0 0 0 0 0 0 B B B B B B B B B

Encoding:

Range:

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_BITSET16 (alt: PDT_GENERIC_02)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

22.100 DPT_StatusDHWC See below See below DHW control

**Data fields** **Description** **Unit / Range**

Attributes Bit # Bitset B16

Fault 0 DHWC has a failure true / false

DHWLoadActive 1 DHW load currently active true / false

LegioProtActive 2 legionella protection procedure active (load & true / false
hold)

DHWPushActive 3 true during DHW load triggered by a true / false
‘DHWPush’ command

OtherEnergySourceActive 4 load by DHWC is disabled due to other active true / false
energy source (e.g. electrical)

SolarEnergyOnly 5 load by DHWC is disabled due to sufficient true / false
solar energy

SolarEnergySupport 6 DHW load is partly done by solar energy true / false

TempOptimShiftActive 7 actual DHW temp setpoint is influenced by true / false
TempDHWSetpOptimShift ≠ 0

reserved 8 to 15 reserved default 0

###### Standard Mode

 Separate Boolean DPs.

|0|0|0|0|0|0|0|B|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|2 octets: B<br>16<br>2 1<br>MSB LSB<br>Attributes<br>0 0 0 0 0 0 0 B B B B B B B B B<br>Not applicable.<br>Not applicable.<br>PDT BITSET16 (alt: PDT GENERIC 02)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|22.100|DPT_StatusDHWC|See below|See below|DHW control|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|Attributes|Bit #||Bitset B16|
|Fault|0|DHWC has a failure|true / false|
|DHWLoadActive|1|DHW load currently active|true / false|
|LegioProtActive|2|legionella protection procedure active (load &<br>hold)|true / false|
|DHWPushActive|3|true during DHW load triggered by a<br>‘DHWPush’ command|true / false|
|OtherEnergySourceActive|4|load by DHWC is disabled due to other active<br>energy source (e.g. electrical)|true / false|
|SolarEnergyOnly|5|load by DHWC is disabled due to sufficient<br>solar energy|true / false|
|SolarEnergySupport|6|DHW load is partly done by solar energy|true / false|
|TempOptimShiftActive|7|actual DHW temp setpoint is influenced by<br>TempDHWSetpOptimShift≠ 0|true / false|
|reserved|8 to 15|reserved|default 0|


-----

##### 4.5.2 Datapoint Type “RHCC Status”
###### LTE

 Not available.

 Standard Mode

Format: 2 octets: B16

octet nr. 2 MSB 1 LSB

field names Attributes

0 b14 b13 b12 b11 b10 b9 b8 b7 b6 b5 b4 b3 b2 b1 b0

encoding r B B B B B B B B B B B B B B B

Range: all fields: {0,1}

Unit: Not applicable.

Resol.: Not applicable.

PDT: PDT_BITSET16 (alt: PDT_GENERIC_02)

**Datapoint Types**

ID: Name: Use:

22.101 DPT_StatusRHCC HVAC

|0|b<br>14|b<br>13|b<br>12|b<br>11|b<br>10|b<br>9|b<br>8|
|---|---|---|---|---|---|---|---|

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|r|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Range:<br>Unit:<br>Resol.:<br>PDT:|2 octets: B<br>16<br>2 1<br>MSB LSB<br>Attributes<br>0 b b b b b b b b b b b b b b b<br>14 13 12 11 10 9 8 7 6 5 4 3 2 1 0<br>r B B B B B B B B B B B B B B B<br>all fields: {0,1}<br>Not applicable.<br>Not applicable.<br>PDT BITSET16 (alt: PDT GENERIC 02)<br>_ _ _|Col3|
|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Use:|
|22.101|DPT_StatusRHCC|HVAC|

|Data fields|Col2|Description|Sup|Encoding|
|---|---|---|---|---|
|Bit #|Attributes|||Bitset B16|
|0|Fault|Room Temperature Controller has a failure.<br>This is a status information, mainly for monitoring.|M|0 = false<br>1 = true|
|1|StatusEcoH|ECO status of the room heating temperature controller;<br>If true, the heating controller is temporary in energy<br>saving mode and there is no heat demand although the<br>controller is in heating mode (HeatCoolMode=heating)<br>e.g. due to high room temperature because of internal<br>or solar heat gains or due to high outside temperature|O|0 = false<br>1 = true|
|2|TempFlowLimit|Flow temperature limitation is active. E.g., max. flow<br>temperature limitation for floor heating protection|O|0 = false<br>1 = true|
|3|TempReturnLimit|Return temperature limitation is active e.g., min return<br>temperature is maintained for boiler protection|O|0 = false<br>1 = true|
|4|StatusMorningBoostH|Heating morning boost is active, plant is operated at<br>maximum heating output|O|0 = false<br>1 = true|
|5|StatusStartOptim|optimum early start control in the morning is active in<br>order to reach the comfort setpoint according to<br>schedule|O|0 = false<br>1 = true|
|6|StatusStopOptim|optimum early shutdown control in the evenig is active in<br>order to maintain the comfort setpoint until the end of<br>the comfort schedule period|<br>O|0 = false<br>1 = true|


-----

15 reserved -- default 0

###### Usage requirements

 DPT_StatusRHCC shall be used by an HVAC Room controller to report the currently set HVAC Mode by means of a status/diagnostic Datapoint.

NOTE 24 An alternative coding is allowed to report the currently set HVAC Mode. For the description and the usage conditions,
please refer to the description of DPT_HVACStatus in Annex A.

###### Encoding

 Most of the status fields are optional. The coding of the optional fields is defined so that the default value ‘0’ represents the normal case and ‘1’ represents the exception. Displays will usually only indicate the exception but not the normal case. Therefore, depending on the usage of this DPT in a given Datapoint, some bit-fields may be unused and set to ‘0’ by the sender and will be ignored by the receiver.

 Remarks

 - DPT_StatusRHCC is derived from DPT_StatusRHC (21.102) and the “Eberle Status Octet” and extended by some additional attributes

 - DPT_StatusRHC is extended to 16 bit and the information of DPT_StatusRHC is a subset of DPT_StatusRHCC

 - Except HVAC mode information, all relevant attributes of the “Eberle Status Octet” are included

 - The actual HVAC mode of the controller is encoded as enum value in a separate Datapoint.

|Data fields|Col2|Description|Sup|Encoding|
|---|---|---|---|---|
|Bit #|Attributes|||Bitset B16|
|7|HeatingDisabled|room heating is disabled due to local summer/winter<br>mode. E.g., heating is disabled if<br>- <br>the attenuated outside temperature is above a<br>threshold<br>- <br>current date is in programmed summer-period|O|0 = false<br>1 = true|
|8|HeatCoolMode|HeatCoolMode of the controller<br>default: heating|M|0 = cooling<br>1 = heating|
|9|StatusEcoC|ECO status of the room cooling temperature controller;<br>If true, the cooling controller is temporary in energy<br>saving mode and there is no cooling demand although<br>the controller is in cooling mode<br>(HeatCoolMode=cooling) e.g. due to energy savings<br>regulations cooling is not allowed if the room<br>temperature is below a defined limit.|O|0 = false<br>1 = true|
|10|StatusPreCool|Pre cooling mode in the morning, , plant is operated at<br>maximum cooling output|O|0 = false<br>1 = true|
|11|CoolingDisabled|Cooling is disabled due to (examples)<br>- <br>calendar regulations: current date is out of cooling<br>period<br>- <br>the attenuated outside temperature is below a<br>threshold|O|0 = false<br>1 = true|
|12|DewPointStatus|DewPointStatus of the controller|O|0 = no alarm<br>1 = alarm|
|13|FrostAlarm|Frost alarm status of the controller: in alarm if the room<br>temperature drops below a critical threshold|O|0 = no alarm<br>1 = alarm|
|14|OverheatAlarm|Overheat alarm status of the controller: in alarm if the<br>room temperature exceeds a critical threshold|O|0 = no alarm<br>1 = alarm|
|15|reserved||--|default 0|


-----

###### - The cooling control sequence of the controller is active if 
 - HeatCoolMode = cooling 
 - CoolingDisabled = false

 - The heating control sequence of the controller is active if 
 - HeatCoolMode = heating 
 - HeatingDisabled = false

 - The controller is neither heating nor cooling if 
 - HeatCoolMode = don’t care
 - CoolingDisabled = true
 - HeatingDisabled = true

#### 4.6 Datapoint Types N2

|Col1|Col2|Col3|Col4|Col5|Col6|s|
|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|N|N|
|---|---|---|---|---|---|---|---|


00b = Comfort/Economy
01b = Comfort/Nothing
10b = Economy/Nothing
11b = Building prot/Auto

|Format:<br>octet nr<br>field names<br>encoding<br>Unit:<br>Resol.:<br>PDT:|2 bit: N<br>2<br>1<br>s<br>NN<br>None<br>(not applicable)<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Use:|Encoding:|
|23.102|DPT_HVAC_PB_Action|[00b…11b]|FB|s <br>00b = Comfort/Economy<br>01b = Comfort/Nothing<br>10b = Economy/Nothing<br>11b = Building prot/Auto|


-----

#### 4.7 Datapoint Types N3

##### 4.7.1 Datapoint Type DPT_PB_Action_HVAC_Extended

|N|N|N|
|---|---|---|

|Value of<br>DPT PB Action -<br>_ _ _<br>HVAC Extended<br>_|Value transmitted on the Output HVAC Mode<br>when the switch is|Col3|
|---|---|---|
|**Value of**<br>**DPT_PB_Action_-**<br>**HVAC_Extended**|**pressed**|**released**|
|<br>000b|Comfort|Economy|
|001b|Comfort|(no transmission)|
|010b|Economy|(no transmission)|
|011b|Building prot.|Auto|
|100b|Building prot.|(no transmission)|
|101b|Auto|(no transmission)|
|110b|Standby|(no transmission)|
|111b|Comfort|Standby|

|Format:<br>octet nr<br>field names<br>encoding<br>Unit:<br>Resol.:<br>PDT:|3 bit: N<br>3<br>1<br>s<br>N N N<br>None<br>(not applicable)<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Range:|Use:|Encoding:|
|31.101|Name:<br>DPT_PB_Action_HVAC_Extended<br>Range:<br>[000b to 111b]<br>Use:<br>CH_PB_HVAC_Mode_1<br>Encoding:<br>s <br>**This DPT shall not be used for runtime communication.**<br>This DPT shall only be used for encoding Parameter values in CH_PB_HVAC_Mode_1.<br>For the proper interpretation, please refer to the specification of this Channel in the<br>E-Mode specifications.<br>This DPT allows designing a switch to control the HVAC Mode with an Output “HVAC<br>Mode” (DPT_HVACMode, 20.102). This DPT_PB_Action_HVAC_Extended encodes a<br>parameter value to configure which HVAC Mode shall be activated on press of the switch<br>and which HVAC Mode shall be activated on release of the switch.<br>**Value of**<br>**DPT_PB_Action_-**<br>**HVAC_Extended**<br>**Value transmitted on the Output HVAC Mode**<br>**when the switch is**<br>**pressed**<br>**released**<br>000b<br>Comfort<br>Economy<br>001b<br>Comfort<br>(no transmission)<br>010b<br>Economy<br>(no transmission)<br>011b<br>Building prot.<br>Auto<br>100b<br>Building prot.<br>(no transmission)<br>101b<br>Auto<br>(no transmission)<br>110b<br>Standby<br>(no transmission)<br>111b<br>Comfort<br>Standby|Name:<br>DPT_PB_Action_HVAC_Extended<br>Range:<br>[000b to 111b]<br>Use:<br>CH_PB_HVAC_Mode_1<br>Encoding:<br>s <br>**This DPT shall not be used for runtime communication.**<br>This DPT shall only be used for encoding Parameter values in CH_PB_HVAC_Mode_1.<br>For the proper interpretation, please refer to the specification of this Channel in the<br>E-Mode specifications.<br>This DPT allows designing a switch to control the HVAC Mode with an Output “HVAC<br>Mode” (DPT_HVACMode, 20.102). This DPT_PB_Action_HVAC_Extended encodes a<br>parameter value to configure which HVAC Mode shall be activated on press of the switch<br>and which HVAC Mode shall be activated on release of the switch.<br>**Value of**<br>**DPT_PB_Action_-**<br>**HVAC_Extended**<br>**Value transmitted on the Output HVAC Mode**<br>**when the switch is**<br>**pressed**<br>**released**<br>000b<br>Comfort<br>Economy<br>001b<br>Comfort<br>(no transmission)<br>010b<br>Economy<br>(no transmission)<br>011b<br>Building prot.<br>Auto<br>100b<br>Building prot.<br>(no transmission)<br>101b<br>Auto<br>(no transmission)<br>110b<br>Standby<br>(no transmission)<br>111b<br>Comfort<br>Standby|Name:<br>DPT_PB_Action_HVAC_Extended<br>Range:<br>[000b to 111b]<br>Use:<br>CH_PB_HVAC_Mode_1<br>Encoding:<br>s <br>**This DPT shall not be used for runtime communication.**<br>This DPT shall only be used for encoding Parameter values in CH_PB_HVAC_Mode_1.<br>For the proper interpretation, please refer to the specification of this Channel in the<br>E-Mode specifications.<br>This DPT allows designing a switch to control the HVAC Mode with an Output “HVAC<br>Mode” (DPT_HVACMode, 20.102). This DPT_PB_Action_HVAC_Extended encodes a<br>parameter value to configure which HVAC Mode shall be activated on press of the switch<br>and which HVAC Mode shall be activated on release of the switch.<br>**Value of**<br>**DPT_PB_Action_-**<br>**HVAC_Extended**<br>**Value transmitted on the Output HVAC Mode**<br>**when the switch is**<br>**pressed**<br>**released**<br>000b<br>Comfort<br>Economy<br>001b<br>Comfort<br>(no transmission)<br>010b<br>Economy<br>(no transmission)<br>011b<br>Building prot.<br>Auto<br>100b<br>Building prot.<br>(no transmission)<br>101b<br>Auto<br>(no transmission)<br>110b<br>Standby<br>(no transmission)<br>111b<br>Comfort<br>Standby|Name:<br>DPT_PB_Action_HVAC_Extended<br>Range:<br>[000b to 111b]<br>Use:<br>CH_PB_HVAC_Mode_1<br>Encoding:<br>s <br>**This DPT shall not be used for runtime communication.**<br>This DPT shall only be used for encoding Parameter values in CH_PB_HVAC_Mode_1.<br>For the proper interpretation, please refer to the specification of this Channel in the<br>E-Mode specifications.<br>This DPT allows designing a switch to control the HVAC Mode with an Output “HVAC<br>Mode” (DPT_HVACMode, 20.102). This DPT_PB_Action_HVAC_Extended encodes a<br>parameter value to configure which HVAC Mode shall be activated on press of the switch<br>and which HVAC Mode shall be activated on release of the switch.<br>**Value of**<br>**DPT_PB_Action_-**<br>**HVAC_Extended**<br>**Value transmitted on the Output HVAC Mode**<br>**when the switch is**<br>**pressed**<br>**released**<br>000b<br>Comfort<br>Economy<br>001b<br>Comfort<br>(no transmission)<br>010b<br>Economy<br>(no transmission)<br>011b<br>Building prot.<br>Auto<br>100b<br>Building prot.<br>(no transmission)<br>101b<br>Auto<br>(no transmission)<br>110b<br>Standby<br>(no transmission)<br>111b<br>Comfort<br>Standby|


-----

#### 4.8 Data Type “Boolean with Status/Command”

##### 4.8.1 Datapoint Type “Heat/Cool_Z”
###### LTE: compound structure

Format: 2 octets: B1Z8

2 1
Heat/Cool Status

Command

0000000B ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

200.100 DPT_Heat/Cool_Z See below See below HVAC

**Data fields** **Description** **Unit / Range**

Heat/Cool Bit # Bitset B8,

 - Heat/Cool 0 0= cooling
1= heating
Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_Heat/Cool (01.100); without Z8 field.

##### 4.8.2 Datapoint Type “DPT_BinaryValue_Z”
###### LTE: compound structure

Format: 2 octets: B1Z8

2 1
BinaryValue Status

Command

0000000B ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

200.101 DPT_BinaryValue_Z See below See below FOCI

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: B Z<br>1 8<br>2 1<br>Heat/Cool Status<br>Command<br>0000000B ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|200.100|DPT_Heat/Cool_Z|See below|See below|HVAC|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|Heat/Cool|Bit #||Bitset B8,|
|- Heat/Cool|0||0= cooling<br>1= heating|
|Status/Command|standard Status/Command|standard Status/Command|Z8|

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: B Z<br>1 8<br>2 1<br>BinaryValue Status<br>Command<br>0000000B ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|200.101|DPT_BinaryValue_Z|See below|See below|FOCI|


-----

Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_BinaryValue (1.006) without Z8 field.

#### 4.9 Data Type “8-Bit Enum with Status/Command”

##### 4.9.1 Datapoint Type “HVAC Operating Mode”
###### LTE: compound structure

Format: 2 octets: N8Z8

octet nr. 2 1

field names HVACMode Status/
Command

encoding N N N N N N N N Z Z Z Z Z Z Z Z

Resol.: none

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name: Encoding: Range: Unit: Use:

201.100 DPT_HVACMode_Z See below See below See below HVAC

###### DPT_HVACMode_Z

**Data fields** **Description** **Unit / Range**

HVACMode HVAC operating mode enum. N8

Encoding absolute value N = {0,

Depending on the type of Datapoint the value 255}
‘Auto’ is allowed or not ⇒ to be defined per **0 = Auto**

1 = Comfort

Datapoint

2 = Standby
3 = Economy
4 = Bldg.Prot
5-255: reserved

Status/Command standard Status/Command Z8

###### Standard Mode

 DTP_HVACMode (20.102), without Z8 field.

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|BinaryValue|Bit #||Bitset B8|
|- Low/High|0||0 = low<br>1 =high|
|||||
|Status/Command|standard Status/Command|standard Status/Command|Z8|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Resol.:<br>PDT:|2 octets: N Z<br>8 8<br>2 1<br>Status/<br>HVACMode<br>Command<br>N N N N N N N N Z Z Z Z Z Z Z Z<br>none<br>PDT GENERIC 02<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Unit:|Use:|
|201.100|DPT_HVACMode_Z|See below|See below|See below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|HVACMode|HVAC operating mode<br>Depending on the type of Datapoint the value<br>‘Auto’ is allowed or not⇒ to be defined per<br>Datapoint|enum. N8 <br>Encoding absolute value N = {0,<br>255}<br>**0 = Auto** <br>1 = Comfort<br>2 = Standby<br>3 = Economy<br>4 = Bldg.Prot<br>5-255: reserved|
|Status/Command|standard Status/Command|Z8|


-----

##### 4.9.2 Datapoint Type “DHW Mode”
###### LTE: compound structure

Format: 2 octet N8Z8

2 1
DHWMode Status/

Command

NNNNNNNN ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

201.102 DPT_DHWMode_Z See below See below HWH

###### DPT_DHWMode_Z:

**Data fields** **Description** **Unit / Range**
DHWMode DHW operating mode enum. N8

Encoding absolute value N =

Depending on the type of Datapoint the value ‘Auto’ is {0, 255}
allowed or not ⇒ to be defined per Datapoint **0 = Auto**

1 = LegioProtect
2 = Normal
3 = Reduced
4 = Off/FrostProtect
5 to 255: reserved
Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_DHWMode (20.103) without Z8 field.

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octet N Z<br>8 8<br>2 1<br>DHWMode Status/<br>Command<br>NNNNNNNN ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|201.102|DPT_DHWMode_Z|See below|See below|HWH|

|Data fields|Description|Unit / Range|
|---|---|---|
|DHWMode|DHW operating mode<br>Depending on the type of Datapoint the value ‘Auto’ is<br>allowed or not⇒ to be defined per Datapoint|enum. N8 <br>Encoding absolute value N =<br>{0, 255}<br>**0 = Auto** <br>1 = LegioProtect<br>2 = Normal<br>3 = Reduced<br>4 = Off/FrostProtect<br>5 to 255: reserved|
|Status/Command|standard Status/Command|Z8|


-----

##### 4.9.3 Datapoint Type “HVAC Controlling Mode”
###### LTE: compound structure

Format: 2 octets: N8Z8

octet nr. 2 1

field names HVACContr- StatusMode /Command

encoding N N N N N N N N Z Z Z Z Z Z Z Z

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name: Encoding: Unit: Range: Resol.: Use:

201.104 DPT_HVACContrMode_Z See below. See below. See below. See below. TU

**Data fields** **Description** **Unit / Range**

HVACContrMode enum.: N8
Encoding absolute value
N = {0, 255}
0 = Auto
1 = Heat
2 = Morning Warmup
3 = Cool
4 = Night Purge
5 = Precool
6 = Off
7 = Test
8 = Emergency Heat
9 = Fan only
10 = Free Cool
11 = Ice
12 = Maximum Heating Mode
13 = Economic Heat/Cool Mode
14 = Dehumidification
15 = Calibration Mode
16 = Emergency Cool Mode
17 = Emergency Steam Mode
18 to 19 = reserved
20 = NoDem
21 to 255 = reserved

Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_HVACContrMode (20.105), without Z8 field.

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|2 octets: N Z<br>8 8<br>2 1<br>HVACContr- Status-<br>Mode /Command<br>N N N N N N N N Z Z Z Z Z Z Z Z<br>PDT GENERIC 02<br>_ _|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Unit:|Range:|Resol.:|Use:|
|201.104|DPT_HVACContrMode_Z|See below.|See below.|See below.|See below.|TU|

|Data fields|Description|Unit / Range|
|---|---|---|
|HVACContrMode||enum.: N8 <br>Encoding absolute value<br>N = {0, 255}<br>0 <br>= <br>Auto<br>1 <br>= <br>Heat<br>2 <br>= <br>Morning Warmup<br>3 <br>= <br>Cool<br>4 <br>= <br>Night Purge<br>5 <br>= <br>Precool<br>6 <br>= <br>Off<br>7 <br>= <br>Test<br>8 <br>= <br>Emergency Heat<br>9 <br>= <br>Fan only<br>10<br>= <br>Free Cool<br>11<br>= <br>Ice<br>12<br>= <br>Maximum Heating Mode<br>13<br>= <br>Economic Heat/Cool Mode<br>14<br>= <br>Dehumidification<br>15<br>= <br>Calibration Mode<br>16<br>= <br>Emergency Cool Mode<br>17<br>= <br>Emergency Steam Mode<br>18 to 19 =<br>reserved<br>20<br>= <br>NoDem<br>21 to 255= <br>reserved|
|Status/Command|standard Status/Command|Z8|


-----

##### 4.9.4 Datapoint Type “Enable Heat/Cool Stage”
###### LTE: compound structure

Format: 2 octets: N8Z8

octet nr. 2 1

field names EnableH/C- StatusStage /Command

encoding N N N N N N N N Z Z Z Z Z Z Z Z

Unit: none

Resol.: none

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name: Encoding: Range: Use:

201.105 DPT_EnableH/Cstage_Z See below. See below. HVAC

**Data fields** **Description** **Unit / Range**

EnableH/CStage enum.: N8
Encoding absolute value N = {0, 255}
0 = disabled
1 = enable stage A
2 = enable stage B
3 = enable both stages

Status/Command standard Status/Command Z8

###### Standard Mode

 Not available.

##### 4.9.5 Datapoint Type “Building Mode”
###### LTE: compound structure

Format: 2 octets: N8Z8

2 1
BuildingMode Status/

Command

NNNNNNNN ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

201.107 DPT_BuildingMode_Z See below See below general

|EnableH/C-<br>Stage|Status-<br>/Command|
|---|---|

|N|N|N|N|N|N|N|N|Z|Z|Z|Z|Z|Z|Z|Z|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Unit:<br>Resol.:<br>PDT:|2 octets: N Z<br>8 8<br>2 1<br>EnableH/C- Status-<br>Stage /Command<br>N N N N N N N N Z Z Z Z Z Z Z Z<br>none<br>none<br>PDT GENERIC 02<br>_ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|201.105|DPT_EnableH/Cstage_Z|See below.|See below.|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|EnableH/CStage||enum.: N8 <br>Encoding absolute value N = {0, 255}<br>0 =<br>disabled<br>1 =<br>enable stage A<br>2 =<br>enable stage B<br>3 =<br>enable both stages|
|Status/Command|standard Status/Command|Z8|

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: N Z<br>8 8<br>2 1<br>BuildingMode Status/<br>Command<br>NNNNNNNN ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|201.107|DPT_BuildingMode_Z|See below|See below|general|


-----

|Data fields|Description|Unit / Range|
|---|---|---|
|BuildingMode||enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0 = Building in use<br>1 = Building not used<br>2 = Building Protection|
|Status/Command|standard Status/Command|Z8|


###### Standard Mode

 DPT_BuildingMode (20.002), without Z8 field.

##### 4.9.6 Datapoint Type “Occupancy Mode”

**LTE: compound structure**

Format: 2 octets: N8Z8

2 1
OccMode Status/

Command

NNNNNNNN ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

201.108 DPT_OccMode_Z See below See below HVAC

**Data fields** **Description** **Unit / Range**

OccMode enum. N8
Encoding absolute value
N = {0, 255}

0 = Occupied
1 = Standby
2 = Not occupied

Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_OccMode (20.003) without Z8 field.

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: N Z<br>8 8<br>2 1<br>OccMode Status/<br>Command<br>NNNNNNNN ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|201.108|DPT_OccMode_Z|See below|See below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|OccMode||enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0 = Occupied<br>1 = Standby<br>2 = Not occupied|
|Status/Command|standard Status/Command|Z8|


-----

##### 4.9.7 Datapoint Type “HVAC Emergency Mode”
###### LTE: compound structure

Format: 2 octets: N8Z8

2 1
HVACEmerg Status/
Mode Command

NNNNNNNN ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

201.109 DPT_HVACEmergMode_Z See below See below HVAC

**Data fields** **Description** **Unit / Range**

HVACEmergMode enum. N8
Encoding absolute value
N = {0, 255}

0 = Normal
1 = EmergPressure
2 = EmergDepressure
3 = EmergPurge
4 = EmergShutdown
5 = EmergFire
6 to 255: reserved

Status/Command standard Status/Command Z8

###### Standard Mode

 HVACEmergMode (20.106), without Z8 field.

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: N Z<br>8 8<br>2 1<br>HVACEmerg Status/<br>Mode Command<br>NNNNNNNN ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|201.109|DPT_HVACEmergMode_Z|See below|See below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|HVACEmergMode||enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0 = Normal<br>1 = EmergPressure<br>2 = EmergDepressure<br>3 = EmergPurge<br>4 = EmergShutdown<br>5 = EmergFire<br>6 to 255: reserved|
|Status/Command|standard Status/Command|Z8|


-----

#### 4.10 Data Type “16-Bit Unsigned Value with Status/Command”

##### 4.10.1 Datapoint Type “HVAC Air Quality”
###### LTE: compound structure

Format: 3 octets: U16Z8

3 MSB 2 LSB 1
HVACAirQual HVACAirQual Status

Command

UUUUUUUU UUUUUUUU ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

203.100 DPT_ HVACAirQual_Z See below See below TU, VAC

**Data fields** **Description** **Unit / Range**

HVACAirQual U16,
1 ppm resolution
0 ppm to 65 535 ppm

Status/Command standard Status/Command Z8

###### In case of a detected sensor failure the Status Flag ‘Fault’ shall be set. This is a mandatory feature of this DPT.

 In this case in addition the reason of ‘Fault’ may be encoded in the ‘HVACAirQual’ field (optional feature): see standard Z8 mechanism in 4.1.2.

 Standard Mode

 DPT_Value_AirQuality (9.008), only HVACAirQual without Z8 field.

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: U Z<br>16 8<br>3 MSB 2 LSB 1<br>HVACAirQual HVACAirQual Status<br>Command<br>UUUUUUUU UUUUUUUU ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|203.100|DPT_ HVACAirQual_Z|See below|See below|TU, VAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|HVACAirQual||U16,<br>1 ppm resolution<br>0 ppm to 65 535 ppm|
|Status/Command|standard Status/Command|Z8|


-----

##### 4.10.2 Datapoint Type “Wind Speed with Status/Command”
###### LTE: compound structure

Format: 3 octets: U16Z8

3 MSB 2 LSB 1
WindSpeed WindSpeed Status

Command

UUUUUUUU UUUUUUUU ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

203.101 DPT_WindSpeed_Z See below See below HVAC

**Data fields** **Description** **Unit / Range**

WindSpeed wind speed absolute value m/s U16,
0,01 m/s resolution
0 km/h … 200 km/h (and more)

Status/Command standard Status/Command Z8

###### In case of a detected sensor failure the Status Flag ‘Fault’ shall be set. This is a mandatory feature of this DPT.

 In this case in addition the reason of ‘Fault’ may be encoded in the ‘WindSpeed’ field (optional feature): see standard Z8 mechanism in 4.1.2.

 Standard Mode

 DPT_Value_Wsp (9.005), only WindSpeed without Z8 field.

##### 4.10.3 Datapoint Type “Sun Intensity with Status/Command”
###### LTE: compound structure

Format: 3 octets: U16Z8

3 MSB 2 LSB 1
SunIntensity SunIntensity Status

Command

UUUUUUUU UUUUUUUU ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

203.102 DPT_SunIntensity_Z See below See below HVAC

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: U Z<br>16 8<br>3 MSB 2 LSB 1<br>WindSpeed WindSpeed Status<br>Command<br>UUUUUUUU UUUUUUUU ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|203.101|DPT_WindSpeed_Z|See below|See below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|WindSpeed|wind speed absolute value m/s|U16, <br>0,01 m/s resolution<br>0 km/h … 200 km/h  (and more)|
|Status/Command|standard Status/Command|Z8|

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: U Z<br>16 8<br>3 MSB 2 LSB 1<br>SunIntensity SunIntensity Status<br>Command<br>UUUUUUUU UUUUUUUU ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|203.102|DPT_SunIntensity_Z|See below|See below|HVAC|


-----

Status/Command standard Status/Command Z8

###### In case of a detected sensor failure the Status Flag ‘Fault’ shall be set. This is a mandatory feature of this DPT.

 In this case in addition the reason of ‘Fault’ may be encoded in the ‘SunIntensity’ field (optional feature): see standard Z8 mechanism in 4.1.2.

 Standard Mode

 DPT_PowerDensity (9.022); only SunIntensity without Z8 field.

##### 4.10.4 Datapoint Type “HVAC Air Flow Absolute Value”
###### LTE: compound structure

Format: 3 octets: U16Z8

3 MSB 2 LSB 1
HVACAirFlow HVACAirFlow Status

Command

UUUUUUUU UUUUUUUU ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

203.104 DPT_HVACAirFlowAbs_Z See below See below TU

**Data fields** **Description** **Unit / Range**

HVACAirFlow U16
1 m³/h resolution
0 m³/h to 65 535 m³/h

Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_Value_AirFlow (9.009) in m[3]/h, only HVACAirFlow without Z8 field.

 For higher precision, DPT_Value_Volume_Flux 14.077 (F32) shall be used.

|Data fields|Description|Unit / Range|
|---|---|---|
|SunIntensity|Sun intensity W/m2|U16, <br>0,05 W/m2 resolution<br>0 W/m2 … 1 400 W/m2 (theoretical max.<br>sun intensity)|
|Status/Command|standard Status/Command|Z8|

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: U Z<br>16 8<br>3 MSB 2 LSB 1<br>HVACAirFlow HVACAirFlow Status<br>Command<br>UUUUUUUU UUUUUUUU ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|203.104|DPT_HVACAirFlowAbs_Z|See below|See below|TU|

|Data fields|Description|Unit / Range|
|---|---|---|
|HVACAirFlow||U16 <br>1 m³/h resolution<br>0 m³/h to 65 535 m³/h|
|Status/Command|standard Status/Command|Z8|


-----

#### 4.11 Data Type “16-Bit Signed Value with Status/Command”

##### 4.11.1 Datapoint Type “HVAC absolute Temperature”
###### LTE: compound structure

Format: 3 octets: V16Z8

3 MSB 2 LSB 1

Temp Temp Status

Command

VVVVVVVV VVVVVVVV ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

205.100 DPT_TempHVACAbs_Z See below See below HVAC

###### DPT_TempHVACAbs_Z

**Data fields** **Description** **Unit / Range**

Temp temperature absolute value °C V16,
0,02°C resolution
–273°C to 655,34°C

Status/Command standard Status/Command Z8

###### Exception handling

 In case of a detected sensor failure the Status Flag ‘Fault’ shall be set. This is a mandatory feature of this DPT.

 In this case in addition the reason of ‘Fault’ may be encoded in the ‘Temp’ field (optional feature): see standard Z8 mechanism in 4.1.2.

 Standard Mode

 DPT_Value_Temp (9.001), without Z8 field.

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: V Z<br>16 8<br>3 MSB 2 LSB 1<br>Temp Temp Status<br>Command<br>VVVVVVVV VVVVVVVV ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|205.100|DPT_TempHVACAbs_Z|See below|See below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|Temp|temperature**absolute value** °C|V16, <br>0,02°C resolution<br>–273°C to 655,34°C|
|Status/Command|standard Status/Command|Z8|


-----

##### 4.11.2 Datapoint Type “HVAC relative Temperature”
###### LTE: compound structure

Format: 3 octets: V16Z8

3 MSB 2 LSB 1

Temp Temp Status

Command

VVVVVVVV VVVVVVVV ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

205.101 DPT_TempHVACRel_Z See below See below HVAC

###### DPT_TempHVACRel_Z

**Data fields** **Description** **Unit / Range**

Temp temperature relative value / offset K V16,
0,02 K resolution
–273 K to 655,34 K

Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_Value_Tempd (9.002), without Z8 field.

##### 4.11.3 Datapoint Type “HVAC Air Flow Relative Value”
###### LTE: compound structure

Format: 3 octets: V16Z8

3 MSB 2 LSB 1
HVACAirFlow HVACAirFlow Status

Command

VVVVVVVV VVVVVVVV ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

205.102 DPT_HVACAirFlowRel_Z See below See below TU

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: V Z<br>16 8<br>3 MSB 2 LSB 1<br>Temp Temp Status<br>Command<br>VVVVVVVV VVVVVVVV ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|205.101|DPT_TempHVACRel_Z|See below|See below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|Temp|temperature**relative value** / offset K|V16, <br>0,02 K resolution<br>–273 K to 655,34 K|
|Status/Command|standard Status/Command|Z8|

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: V Z<br>16 8<br>3 MSB 2 LSB 1<br>HVACAirFlow HVACAirFlow Status<br>Command<br>VVVVVVVV VVVVVVVV ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|205.102|DPT_HVACAirFlowRel_Z|See below|See below|TU|


-----

Status/Command standard Status/Command Z8

###### Standard Mode

 DPT_Value_AirFlow (9.009) in m3/h, only HVACAirFlow without Z8 field.

 For higher precision, DPT_Value_Volume_Flux 14.077 (F32) shall be used.

##### 4.11.4 Datapoint Type “HVAC Air Quality Relative Value”
###### LTE: compound structure

Format: 3 octets: V16Z8

3 MSB 2 LSB 1
HVACAirQuality HVACAirQuality Status

Command

VVVVVVVV VVVVVVVV ZZZZZZZZ

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

205.103 DPT_HVACAirQualRel_Z See below See below VAC

**Data fields** **Description** **Unit / Range**

HVACAirQuality Relative air quality value V16,
1 ppm resolution
–32 768 ppm to 32 767 ppm

Status/Command standard Status/Command Z8

###### Standard Mode

 None.

|Data fields|Description|Unit / Range|
|---|---|---|
|HVACAirFlow||V16, <br>1m³/h resolution<br>–32 768 m+/h to 32 767 m³/h|
|Status/Command|standard Status/Command|Z8|

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: V Z<br>16 8<br>3 MSB 2 LSB 1<br>HVACAirQuality HVACAirQuality Status<br>Command<br>VVVVVVVV VVVVVVVV ZZZZZZZZ<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|205.103|DPT_HVACAirQualRel_Z|See below|See below|VAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|HVACAirQuality|Relative air quality value|V16, <br>1 ppm resolution<br>–32 768 ppm to 32 767 ppm|
|Status/Command|standard Status/Command|Z8|


-----

#### 4.12 Data Type “16-Bit Unsigned Value & 8-Bit Enum”

##### 4.12.1 Datapoint Type “HVAC Mode & Time delay”
###### LTE and Standard Mode: compound structure

Format: 3 octets: U16N8

3 MSB 2 LSB 1
Delay Time Delay Time HVACMode

UUUUUUUU UUUUUUUU NNNNNNNN

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit:

206.100 DPT_HVACModeNext See below See below G

###### DPT_HVACModeNext

**Data fields** **Description** **Unit / Range**

Time delay time U16, 1 min resolution
1 min to 65 535 min
0 = undefined delay time

HVACMode This DPT can be used to encode: enum. N8

                     - the next active HVACMode after expiration of the Encoding absolute value
delay time, and N = {0, 255}

                     - the currently active HVACMode which will be active 0 = Undefined[*)]
during the delay time. 1 = Comfort

2 = Standby
3 = Economy
4 = Bldg.Prot
5 to 255: reserved

*) The following combinations are in principle possible:

**Time** **HVACMode**

= 0 (Undefined) = 0 (Undefined) the content of the Datapoint is void / undefined

defined and valid HVACMode but the delay time is undefined
= 0 (Undefined) = {1..4}
(unknown)

 - 0 = 0 (Undefined) [undefined (unknown) HVACMode during a defined delay time ]

⇒ in practice this combination is normally useless

 - 0 = {1..4} defined and valid HVACMode and delay time

Allowed combinations and their usage/interpretation are defined at the level of Datapoint specifications.

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: U N<br>16 8<br>3 MSB 2 LSB 1<br>Delay Time Delay Time HVACMode<br>UUUUUUUU UUUUUUUU NNNNNNNN<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|206.100|DPT_HVACModeNext|See below|See below|G|

|Data fields|Description|Unit / Range|
|---|---|---|
|Time|delay time|U16,1 min resolution<br>1 min to 65 535 min<br>0 = undefined delay time*)|
|HVACMode|This DPT can be used to encode:<br>- <br>the next active HVACModeafter expiration of the<br>delay time, and<br>- <br>the currently active HVACMode which will be active<br>duringthe delay time.|enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0 = Undefined*) <br>1 = Comfort<br>2 = Standby<br>3 = Economy<br>4 = Bldg.Prot<br>5 to 255: reserved|

|Time|HVACMode|Col3|
|---|---|---|
|= 0(Undefined)|= 0(Undefined)|the content of the Datapoint is void / undefined|
|= 0 (Undefined)|= {1..4}|defined and valid HVACMode but the delay time is undefined<br>(unknown)|
|> 0|= 0 (Undefined)|undefined (unknown) HVACMode during a defined delay time<br>⇒ inpractice this combination is normally useless|
|> 0|= {1..4}|defined and valid HVACMode and delay time|


-----

##### 4.12.2 Datapoint Type “DHW Mode & Time delay”
###### LTE: compound structure

Format: 3 octets: U16N8

3 MSB 2 LSB 1
Delay Time Delay Time DHWMode

UUUUUUUU UUUUUUUU NNNNNNNN

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

206.102 DPT_DHWModeNext See below See below DHW control

###### DPT_DHWModeNext

**Data fields** **Description** **Unit / Range**

Time delay time U16, 1 min resolution
1 min … 65535 min
0 = undefined delay time [*)]

DHWMode This DPT can be used to encode: enum. N8

                - the next active DHWMode after expiration of the delay Encoding absolute value N =
time {0, 255}

                - the currently active DHWMode which will be active 0 = Undefined[*)]
during the delay time 1 = LegioProtect

2 = Normal
3 = Reduced
4 = Off/FrostProtect
5-255: reserved

*) The following combinations are in principle possible:

**Time** **DHWMode**

= 0 (Undefined) = 0 (Undefined) the content of the Datapoint is void / undefined

defined and valid DHWMode but the delay time is undefined
= 0 (Undefined) = {1..4}
(unknown)

 - 0 = 0 (Undefined) [undefined (unknown) DHWMode during a defined delay time ]

⇒ in practice this combination is normally useless

 - 0 = {1..4} defined and valid DHWMode and delay time

Allowed combinations and their usage/interpretation are defined at the level of Datapoint specifications

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: U N<br>16 8<br>3 MSB 2 LSB 1<br>Delay Time Delay Time DHWMode<br>UUUUUUUU UUUUUUUU NNNNNNNN<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|206.102|DPT_DHWModeNext|See below|See below|DHW control|

|Data fields|Description|Unit / Range|
|---|---|---|
|Time|delay time|U16,1 min resolution<br>1 min … 65535 min<br>0 = undefined delay time*)|
|DHWMode|This DPT can be used to encode:<br>- <br>the next active DHWMode after expiration of the delay<br>time<br>- <br>the currently active DHWMode which will be active<br>during the delay time|enum. N8 <br>Encoding absolute value N =<br>{0, 255}<br>0 = Undefined*) <br>1 = LegioProtect<br>2 = Normal<br>3 = Reduced<br>4 = Off/FrostProtect<br>5-255: reserved|

|Time|DHWMode|Col3|
|---|---|---|
|= 0 (Undefined)|= 0 (Undefined)|the content of the Datapoint is void / undefined|
|= 0 (Undefined)|= {1..4}|defined and valid DHWMode but the delay time is undefined<br>(unknown)|
|> 0|= 0 (Undefined)|undefined (unknown) DHWMode during a defined delay time<br>⇒ inpractice this combination is normally useless|
|> 0|= {1..4}|defined and valid DHWMode and delay time|


-----

##### 4.12.3 Datapoint Type “Occupancy Mode & Time delay”
###### LTE: compound structure

Format: 3 octets: U16N8

3 MSB 2 LSB 1
Delay Time Delay Time OccMode

U U U U U U U U U U U U U U U U N N N N N N N N

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit:

206.104 DPT_OccModeNext See below See below TU

###### DPT_OccModeNext:

**Data fields** **Description** **Unit / Range**

Time delay time U16, 1 Min resolution
1 min … 65 535 min
0 = next mode not available

OccMode enum. N8
Encoding absolute value
N = {0, 255}

0 = Occupied
1 = Standby
2 = Not occupied
3 to 255: reserved

###### Standard Mode

 Not available.

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: U N<br>16 8<br>3 MSB 2 LSB 1<br>Delay Time Delay Time OccMode<br>U U U U U U U U U U U U U U U U N N N N N N N N<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|206.104|DPT_OccModeNext|See below|See below|TU|

|Data fields|Description|Unit / Range|
|---|---|---|
|Time|delay time|U16,1 Min resolution<br>1 min … 65 535 min<br>0 = next mode not available|
|OccMode||enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0 = Occupied<br>1 = Standby<br>2 = Not occupied<br>3 to 255: reserved|


-----

##### 4.12.4 Datapoint Type “Building Mode & Time delay”
###### LTE: compound structure

Format: 3 octets: N8U16

3 MSB 2 LSB 1
Delay Time Delay Time BuildingMode

UUUUUUUU UUUUUUUU NNNNNNNN

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit:

206.105 DPT_BuildingModeNext See below See below TU

###### DPT_BuildingModeNext:

**Data fields** **Description** **Unit / Range**

Time delay time U16, 1 Min resolution
1 min … 65535 min
0 = next mode not available

BuildingMode enum. N8
Encoding absolute value
N = {0, 255}

0 = Building in use
1 = Building not used
2 = Building Protection
3 to 255: reserved

###### Standard Mode

 Not available.

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: N U<br>8 16<br>3 MSB 2 LSB 1<br>Delay Time Delay Time BuildingMode<br>UUUUUUUU UUUUUUUU NNNNNNNN<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|206.105|DPT_BuildingModeNext|See below|See below|TU|

|Data fields|Description|Unit / Range|
|---|---|---|
|Time|delay time|U16,1 Min resolution<br>1 min … 65535 min<br>0 = next mode not available|
|BuildingMode||enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0 = Building in use<br>1 = Building not used<br>2 = Building Protection<br>3 to 255: reserved|


-----

#### 4.13 Data Type “8-Bit Unsigned Value & 8-Bit Set”

##### 4.13.1 Datapoint Type “Status Burner Controller”
###### LTE: compound structure

Format: 2 octets: U8B8

2 1
PrelBurner Attributes

UUUUUUUU 00BBBBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

207.100 DPT_StatusBUC See below See below HWH

**Data fields** **Description** **Unit / Range**

PrelBurner Actual relative power % U8, 0..100%, 1% resolution

Attributes Bit # Bitset B8

 - PrelBurnerValid 0 validity of PrelBurnerField true / false

 - Fault 1 burner failure true / false

 - StatusStage1 2 stage 1 or base stage active on / off

 - StatusStage2 3 stage 2 / modulation active on / off

 - reserved 4-7 default 0

###### Standard Mode

 6 separate Datapoints

- PrelBurner: DPT_RelPos_Valve (5.004)

- Fault: DPT_Bool (1.002)

- StatusStage1, StatusStage2: DPT_Switch (1.001)

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: U B<br>8 8<br>2 1<br>PrelBurner Attributes<br>UUUUUUUU 00BBBBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|207.100|DPT_StatusBUC|See below|See below|HWH|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|PrelBurner|Actual relative power %|Actual relative power %|U8,0..100%, 1% resolution|
|Attributes|Bit #||Bitset B8|
|- <br>PrelBurnerValid|0|validity of PrelBurnerField|true / false|
|- <br>Fault|1|burner failure|true / false|
|- <br>StatusStage1|2|stage 1 or base stage active|on / off|
|- <br>StatusStage2|3|stage 2 / modulation active|on / off|
|- <br>reserved|4-7||default 0|


-----

##### 4.13.2 Datapoint Type “Locking Signal”
###### LTE: compound structure

Format: 2 octets: U8B8

2 1
PwrReduction Attributes

UUUUUUUU 000000BB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

207.101 DPT_LockSign See below See below HVAC

**Data fields** **Description** **Unit / Range**

PwrReduction Requested power reduction U8, 0 % to 100 %,
– 0 %  no reduction 1 % resolution
– 100 % max. reduction

Attributes Bit # Bitset B8,

 - LockRequest 0 indicates if power reduction is necessary (validity of true / false
PwrReduction)

 - Type 1 indicates whether overload is critical (e.g. too low boiler 1= critical
temp.) or uncritical (e.g. requested boiler temperature 0= uncritical
can not be provided but boiler temperature is above
critical lower limit)

 - reserved 2 to 7 default 0

###### Standard Mode

 Not available.

##### 4.13.3 Datapoint Type “Boiler Controller Demand Signal”
###### LTE: compound structure

Format: 2 octets: U8B8

2 1
RelBurner- Attributes
Dem

UUUUUUUU 000000BB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

207.102 DPT_ValueDemBOC See below See below Burner control

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: U B<br>8 8<br>2 1<br>PwrReduction Attributes<br>UUUUUUUU 000000BB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|207.101|DPT_LockSign|See below|See below|HVAC|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|PwrReduction|Requested power reduction<br>– 0 %    no reduction<br>– 100 % max. reduction|Requested power reduction<br>– 0 %    no reduction<br>– 100 % max. reduction|U8,0 % to 100 %,<br>1 % resolution|
|Attributes|Bit #||Bitset B8,|
|- <br>LockRequest|0|indicates if power reduction is necessary (validity of<br>PwrReduction)|true / false|
|- <br>Type|1|indicates whether overload is critical (e.g. too low boiler<br>temp.) or uncritical (e.g. requested boiler temperature<br>can not be provided but boiler temperature is above<br>critical lower limit)|1= critical<br>0= uncritical|
|- <br>reserved|2 to 7||default 0|

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: U B<br>8 8<br>2 1<br>RelBurner- Attributes<br>Dem<br>UUUUUUUU 000000BB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|207.102|DPT_ValueDemBOC|See below|See below|Burner control|


-----

Attributes Bit # Bitset B8,

 - Stage1Control 0 controls operation of stage 1 or base stage 1= on / 0= off

 - Stage2Control 1 controls stage 2 for two stage burner 1= on / 0= off

 - reserved 2 to 7 default 0

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

##### 4.13.4 Datapoint Type “Actuator Position Demand”
###### LTE: compound structure

Format: 2 octets: U8B8

2 1
ActPosDem- Attributes
Abs

UUUUUUUU 0000BBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

207.104 DPT_ActPosDemAbs See below See below HVAC

**Data fields** **Description** **Unit / Range**

ActPosDemAbs Absolute actuator position demand U8, 0 % … 100 %,
(setpoint, valve linearized) 1 % resolution

Attributes Bit # Bitset B8,

 - DemValid 0 Validity of ActPosDem true / false
‘false’ means also ‘no demand’

 - AbsLoadPriority 1 absolute load priority true / false

 - ShiftLoadPriority 2 shift load priority true / false

 - EmergDem 3 emergency demand (heating or cooling) for room true / false
frost protection or de-icing

 - reserved 4 to 7 default 0

###### Remark: depending on the usage of this DPT per Datapoint, some of the attributes (except DemValid) may not be supported and shall then be set to false (=0)

 Standard Mode: % value, without attributes

 The DPT in standard mode is depending on the Datapoint and is defined in the Datapoint specification.

 Two solutions are possible. Solution B) is preferred because there is no mapping of the % value.

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|RelBurnerDem|Relative demand %: for modulating burner|Relative demand %: for modulating burner|U8,0 % … 100 %,<br>1 % resolution|
|Attributes|Bit #||Bitset B8,|
|- <br>Stage1Control|0|controls operation of stage 1 or base stage|1= on / 0= off|
|- <br>Stage2Control|1|controls stage 2 for two stage burner|1= on / 0= off|
|- <br>reserved|2 to 7||default 0|

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: U B<br>8 8<br>2 1<br>ActPosDem- Attributes<br>Abs<br>UUUUUUUU 0000BBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|207.104|DPT_ActPosDemAbs|See below|See below|HVAC|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|ActPosDemAbs|Absolute actuator position demand<br>(setpoint, valve linearized)|Absolute actuator position demand<br>(setpoint, valve linearized)|U8,0 % … 100 %,<br>1 % resolution|
|Attributes|Bit #||Bitset B8,|
|- <br>DemValid|0|Validity of ActPosDem<br>‘false’ means also‘no demand’|true / false|
|- <br>AbsLoadPriority|1|absolute load priority|true / false|
|- <br>ShiftLoadPriority|2|shift load priority|true / false|
|- <br>EmergDem|3|emergency demand (heating or cooling) for room<br>frost protection or de-icing|true / false|
|- <br>reserved|4 to 7||default 0|


-----

###### A) DPT_Scaling (5.001) Encoding 0 % … 100 % full datatype value 0...255, i.e. 1 % = value 255/100!

 To be used in heating individual room control systems for backwards compatibility with actuator position demand in the legacy HWH ObIS.

 B) DPT_Percent_U8 (5.004) Encoding 0 % …255 % full datatype value 0 … 255, i.e. 1 % = value 1

 To be used in ventilation and cooling applications.

##### 4.13.5 Datapoint Type “Actuator Position Status”
###### LTE: compound structure

Format: 2 octets: U8B8

2 1
ActPos Attributes

UUUUUUUU 0000BBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

207.105 DPT_StatusAct See below See below HVAC

**Data fields** **Description** **Unit / Range**

ActPos actual actuator position U8, 0 %… 100 %,
1 % resolution

Attributes Bit # Bitset B8,

 - Failure 0 actuator has a failure true/false

 - ManualOverride 1 actuator position is manually overridden true/false

 - CalibrationMode 2 actuator is currently in calibration mode 0: inactive
1: active

 - ValveKick 3 valve is currently executing a valve kick 0: inactive
1: active

 - SynchronizationMode 4 SynchronizationMode indicates that the 0: inactive
actuator is currently executing a 1: active
synchronization of the stroke model

 - reserved 5 to 7 default 0

###### Standard Mode

 6 separate Datapoints

- ActPosition: DPT_Scaling (5.001)

- ActStatus: 5 individual Boolean Datapoints

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: U B<br>8 8<br>2 1<br>ActPos Attributes<br>UUUUUUUU 0000BBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|207.105|DPT_StatusAct|See below|See below|HVAC|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|ActPos|actual actuator position|actual actuator position|U8,0 %… 100 %,<br>1 % resolution|
|Attributes|Bit #||Bitset B8,|
|- <br>Failure|0|actuator has a failure|true/false|
|- <br>ManualOverride|1|actuator position is manually overridden|true/false|
|- <br>CalibrationMode|2|actuator is currently in calibration mode|0: inactive<br>1: active|
|- <br>ValveKick|3|valve is currently executing a valve kick|0: inactive<br>1: active|
|- <br>SynchronizationMode|4|SynchronizationMode indicates that the<br>actuator is currently executing a<br>synchronization of the stroke model|0: inactive<br>1: active|
|- <br>reserved|5 to 7||default 0|


-----

#### 4.14 Data Type “16-Bit Signed Value & 8-Bit Set”

##### 4.14.1 Datapoint Type “Heat Producer Manager Status”
###### LTE: compound structure

Format: 3 octets: V16B8

3 MSB 2 LSB 1
TempFlow TempFlow Attributes
ProdSegmH ProdSegmH

VVVVVVVV VVVVVVVV 000BBBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

209.100 DPT_StatusHPM See below See below HWH

**Data fields** **Description** **Unit / Range**

TempFlowProdSeg common flow temperature of ProdSegmH V16, –273°C to 655,34°C
mH 0,02°C resolution

Attributes Bit # Bitset B8

 - TempFlowValid 0 validity of TempFlowProdSegmH field true / false

 - Fault 1 some failure in boiler sequence: HPM itself or true / false
boiler(s) have a failure (mainly used for
monitoring)

 - SummerMode 2 boiler sequence switched off due to local true / false
summer/winter mode (mainly used for
monitoring)

 - OffPerm 3 boiler sequence is permanently off (manual true / false
switch or failure)

 - NoHeatAvailable 4 boiler sequence is temporary not producing true / false
heat

 - reserved 5 to 7 default 0

###### Standard Mode

 Separate Datapoints

- TempFlowWaterProdSegmH: DPT_Value_Temp (9.001)

- Fault: DPT_Bool (1.002)

- SummerMode: DPT_Bool (1.002)

- OffPerm: DPT_Bool (1.002)

- NoHeatAvailable: DPT_Bool (1.002)

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: V B<br>16 8<br>3 MSB 2 LSB 1<br>TempFlow TempFlow Attributes<br>ProdSegmH ProdSegmH<br>VVVVVVVV VVVVVVVV 000BBBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|209.100|DPT_StatusHPM|See below|See below|HWH|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|TempFlowProdSeg<br>mH|common flow temperature of ProdSegmH|common flow temperature of ProdSegmH|V16,–273°C to 655,34°C<br>0,02°C resolution|
|Attributes|Bit #||Bitset B8|
|- <br>TempFlowValid|0|validity of TempFlowProdSegmH field|true / false|
|- <br>Fault|1|some failure in boiler sequence: HPM itself or<br>boiler(s) have a failure (mainly used for<br>monitoring)|true / false|
|- <br>SummerMode|2|boiler sequence switched off due to local<br>summer/winter mode (mainly used for<br>monitoring)|true / false|
|- <br>OffPerm|3|boiler sequence is permanently off (manual<br>switch or failure)|true / false|
|- <br>NoHeatAvailable|4|boiler sequence is temporary not producing<br>heat|true / false|
|- <br>reserved|5 to 7||default 0|


-----

##### 4.14.2 Datapoint Type “Room Temperature Demand”
###### LTE: compound structure

Format: 3 octets: V16B8

3 MSB 2 LSB 1
TempRoom TempRoom Attributes

Dem Dem

VVVVVVVV VVVVVVVV 0000BBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

209.101 DPT_TempRoomDemAbs See below See below HWH

**Data fields** **Description** **Unit / Range**

TempRoomDem requested room temperature setpoint V16, –273°C to 655,34°C
0,02°C resolution

Attributes Bit # Bitset B8

 - DemValid 0 Validity of TempRoomDem true / false
‘false’ means also ‘no demand’

 - AbsLoadPriority 1 absolute load priority true / false

 - ShiftLoadPriority 2 shift load priority true / false

 - EmergDem 3 emergency demand (heating or cooling) for true / false
room frost protection or de-icing

 - reserved 4 to 7 default 0

###### Remark

 Depending on the usage of this DPT per Datapoint, some of the attributes (except DemValid) may not be supported and shall then be set to false (=0).

 Standard Mode

 TempRoomDem only: DPT_Value_Temp (9.001).

 No support of load priority functionality.

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: V B<br>16 8<br>3 MSB 2 LSB 1<br>TempRoom TempRoom Attributes<br>Dem Dem<br>VVVVVVVV VVVVVVVV 0000BBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|209.101|DPT_TempRoomDemAbs|See below|See below|HWH|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|TempRoomDem|requested room temperature setpoint|requested room temperature setpoint|V16,–273°C to 655,34°C<br>0,02°C resolution|
|Attributes|Bit #||Bitset B8|
|- <br>DemValid|0|Validity of TempRoomDem<br>‘false’ means also‘no demand’|true / false|
|- <br>AbsLoadPriority|1|absolute load priority|true / false|
|- <br>ShiftLoadPriority|2|shift load priority|true / false|
|- <br>EmergDem|3|emergency demand (heating or cooling) for<br>room frost protection or de-icing|true / false|
|- <br>reserved|4 to 7||default 0|


-----

##### 4.14.3 Datapoint Type “Cold Water Producer Manager Status”
###### LTE: compound structure

Format: 3 octets: V16B8

3 MSB 2 LSB 1
TempFlow TempFlow Attributes
ProdSegmC ProdSegmC

VVVVVVVV VVVVVVVV 0000BBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

209.102 DPT_StatusCPM See below See below VAC

**Data fields** **Description** **Unit / Range**

TempFlowProdSegmC chilled water flow temperature in the cooling V16, –273°C to 655,34°C
production segment 0,02°C resolution

Attributes Bit # Bitset B8

 - TempFlowValid 0 validity of TempFlowProdSegmH field true / false

 - Fault 1 some failure in the chiller true / false

 - OffPerm 2 permanently off (manual switch or failure) true / false

 - NoCoolAvailable 3 temporarily no cooling in the production true / false
segment available

 - reserved 4 to 7 default 0

###### Standard Mode

 Separate Datapoints.

- TempFlowWaterProdSegmC: DPT_Value_Temp (9.001)

- Fault: DPT_Bool (1.002)

- OffPerm: DPT_Bool (1.002)

- NoCoolAvailable: DPT_Bool (1.002)

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: V B<br>16 8<br>3 MSB 2 LSB 1<br>TempFlow TempFlow Attributes<br>ProdSegmC ProdSegmC<br>VVVVVVVV VVVVVVVV 0000BBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|209.102|DPT_StatusCPM|See below|See below|VAC|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|TempFlowProdSegmC|chilled water flow temperature in the cooling<br>production segment|chilled water flow temperature in the cooling<br>production segment|V16,–273°C to 655,34°C<br>0,02°C resolution|
|Attributes|Bit #||Bitset B8|
|- <br>TempFlowValid|0|validity of TempFlowProdSegmH field|true / false|
|- <br>Fault|1|some failure in the chiller|true / false|
|- <br>OffPerm|2|permanently off (manual switch or failure)|true / false|
|- <br>NoCoolAvailable|3|temporarily no cooling in the production<br>segment available|true / false|
|- <br>reserved|4 to 7||default 0|


-----

##### 4.14.4 Datapoint Type “Water Temperature Controller Status”
###### LTE: compound structure

Format: 3 octets: V16B8

3 MSB 2 LSB 1
TempWater TempWater Attributes

VVVVVVVV VVVVVVVV 00000BBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

209.103 DPT_StatusWTC See below See below HVAC

**Data fields** **Description** **Unit / Range**

TempWater actual temperature (flow or return) of the water V16, –273°C to 655,34°C
temperature controller 0,02°C resolution

Attributes Bit # Bitset B8

 - TempWaterValid 0 validity of TempWater field true / false

 - Fault 1 some failure in the water temperature controller true / false

 - CtrlStatus 2 Controller status on / off
on: controller is working (default if not
supported)
off: controller is stopped; no control of water
temperature

 - reserved 3 to 7 default 0

###### Standard Mode

 Separate Datapoints.

 - TempWater: DPT_Value_Temp (9.001)

 - Fault: DPT_Bool (1.002)

 - CtrlStatus: DPT_Switch (1.001)

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: V B<br>16 8<br>3 MSB 2 LSB 1<br>TempWater TempWater Attributes<br>VVVVVVVV VVVVVVVV 00000BBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|209.103|DPT_StatusWTC|See below|See below|HVAC|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|TempWater|actual temperature (flow or return) of the water<br>temperature controller|actual temperature (flow or return) of the water<br>temperature controller|V16,–273°C to 655,34°C<br>0,02°C resolution|
|Attributes|Bit #||Bitset B8|
|- <br>TempWaterValid|0|validity of TempWater field|true / false|
|- <br>Fault|1|some failure in the water temperature controller|true / false|
|- <br>CtrlStatus|2|Controller status<br>on: controller is working (default if not<br>supported)<br>off: controller is stopped; no control of water<br>temperature|on / off|
|- <br>reserved|3 to 7||default 0|


-----

#### 4.15 Data Type “16-Bit Signed Value & 16-Bit Set”

##### 4.15.1 Datapoint Type “Consumer Flow Temperature Demand”
###### LTE: compound structure 

Format: 4 octet; V16B16

4 MSB 3 LSB 2 MSB 1 LSB
TempFlowDem TempFlowDem Attributes Attributes

VVVVVVVV VVVVVVVV 0000BBBB BBBBBBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

210.100 DPT_TempFlowWaterDemAbs See below See below HVAC

**Data fields** **Description** **Unit / Range**

TempFlowDem flow temperature demand (setpoint) V16, –273°C to 655,34°C
0,02°C resolution

Attributes Bit # Bitset B16

 - DemValid 0 Validity of TempFlowDem true / false
‘false’ means also ‘no demand’

 - AbsLoadPriority 1 absolute load priority true / false

 - ShiftLoadPriority 2 shift load priority true / false

 - MaxTempLimit 3 TempFlowDem contains max. temperature true / false
limit

 - MinTempLimit 4 TempFlowDem contains min. temperature limit true / false

 - DHWReq 5 Heat demand from DHW ⇒ for DHW true / false
preparation during summer (room heating off)

 - RoomCtrlReq 6 demand from Room Heating or Cooling true / false

 - VentReq 7 demand from Ventilation (Heating or Cooling) true / false

 - AuxAllSeasonReq 8 demand from auxiliary heat or cool consumer; true / false
all season

 - SystemPumpReq 9 request for water circulation in the primary true / false
distribution segment (common system pump
on)

 - EmergDem 10 emergency demand (heating or cooling) for true / false
room frost protection or de-icing

 - DHWLegioReq 11 demand from DHW while legionella function is true / false
active (can only be ‘true’ if DHWReq = ‘true’)

 - reserved 12 to 15 default 0

###### Remark

 Depending on the usage of this DPT per Datapoint, some of the attributes (except DemValid) may not be supported and shall then be set to false (=0).

 Standard Mode

 The information of this DPT is not available in Standard Mode.

|Format:<br>Encoding:<br>Range:<br>Unit:|4 octet; V B<br>16 16<br>4 MSB 3 LSB 2 MSB 1 LSB<br>TempFlowDem TempFlowDem Attributes Attributes<br>VVVVVVVV VVVVVVVV 0000BBBB BBBBBBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|210.100|DPT_TempFlowWaterDemAbs|See below|See below|HVAC|

|Data fields|Description|Col3|Unit / Range|Col5|
|---|---|---|---|---|
|TempFlowDem|flow temperature demand (setpoint)|flow temperature demand (setpoint)|flow temperature demand (setpoint)|V16,–273°C to 655,34°C<br>0,02°C resolution|
|Attributes|Bit #|||Bitset B16|
|- <br>DemValid|0|Validity of TempFlowDem<br>‘false’ means also‘no demand’|Validity of TempFlowDem<br>‘false’ means also‘no demand’|true / false|
|- <br>AbsLoadPriority|1|absolute load priority|absolute load priority|true / false|
|- <br>ShiftLoadPriority|2|shift load priority|shift load priority|true / false|
|- <br>MaxTempLimit|3|TempFlowDem contains max. temperature<br>limit|TempFlowDem contains max. temperature<br>limit|true / false|
|- <br>MinTempLimit|4|TempFlowDem contains min. temperature limit|TempFlowDem contains min. temperature limit|true / false|
|- <br>DHWReq|5|Heat demand from DHW⇒ for DHW<br>preparation during summer (room heating off)|Heat demand from DHW⇒ for DHW<br>preparation during summer (room heating off)|true / false|
|- <br>RoomCtrlReq|6|demand from Room Heating or Cooling|demand from Room Heating or Cooling|true / false|
|- <br>VentReq|7|demand from Ventilation (Heating or Cooling)|demand from Ventilation (Heating or Cooling)|true / false|
|- <br>AuxAllSeasonReq|8|demand from auxiliary heat or cool consumer;<br>all season|demand from auxiliary heat or cool consumer;<br>all season|true / false|
|- <br>SystemPumpReq|9|request for water circulation in the primary<br>distribution segment (common system pump<br>on)|request for water circulation in the primary<br>distribution segment (common system pump<br>on)|true / false|
|- <br>EmergDem|10|emergency demand (heating or cooling) for<br>room frost protection or de-icing|emergency demand (heating or cooling) for<br>room frost protection or de-icing|true / false|
|- <br>DHWLegioReq|11|demand from DHW while legionella function is<br>active (can only be‘true’ if DHWReq= ‘true’)|demand from DHW while legionella function is<br>active (can only be‘true’ if DHWReq= ‘true’)|true / false|
|- <br>reserved|12 to 15|||default 0|


-----

#### 4.16 Data Type “8-Bit Unsigned Value & 8-Bit Enum”

##### 4.16.1 Datapoint Type “EnergyDemWater”
###### LTE: compound structure

Format: 2 octets: U8N8

2 1
EnergyDem HVACContr Mod

UUUUUUUU NNNNNNNN

Encoding: see below

Range: see below

Unit: see below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

211.100 DPT_EnergyDemWater see below see below HVAC

**Data fields** **Description** **Unit / Range**

EnergyDem Energy demand of terminal unit controller U8, 0 %..100 %
1 % resolution

ContrModeAct Actual controller Mode enum. N8
Encoding absolute value
N = {0, 255}

0: Auto
1: Heat
2: Morning Warmup
3: Cool
4: Night Purge
5: Precool
6: Off
7: Test
8: Emergency Heat
9: Fan only
10: Free Cool
11: Ice
12 to 19: reserved
20: NoDem
21 to 255: reserved

###### Standard Mode

 Splitting in 2 separate Datapoints:

 - DPT_Percent_U8 (5.004)
 - DPT_HVACContrMode (20.105)

|Format:<br>Encoding:<br>Range:<br>Unit:|2 octets: U N<br>8 8<br>2 1<br>EnergyDem HVACContr Mod<br>UUUUUUUU NNNNNNNN<br>see below<br>see below<br>see below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|211.100|DPT_EnergyDemWater|see below|see below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|EnergyDem|Energy demand of terminal unit controller|U8, 0 %..100 %<br>1 % resolution|
|ContrModeAct|Actual controller Mode|enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0:<br>Auto<br>1:<br>Heat<br>2:<br>Morning Warmup<br>3:<br>Cool<br>4:<br>Night Purge<br>5:<br>Precool<br>6:<br>Off<br>7:<br>Test<br>8:<br>Emergency Heat<br>9:<br>Fan only<br>10:<br>Free Cool<br>11:<br>Ice<br>12 to 19:<br>reserved<br>20:<br>NoDem<br>21 to 255:<br>reserved|


-----

#### 4.17 Data Type “3x 16-Bit Signed Value”

##### 4.17.1 Datapoint Type “3x set of RoomTemperature Setpoint Shift values”
###### LTE: compound structure

Format: 6 octet; V16V16V16

6 MSB 5 LSB 4 MSB 3 LSB
TempSetp TempSetp TempSetp TempSetp

ShiftComf ShiftComf ShiftStdby ShiftStdby

VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV

2 MSB 1 LSB
TempSetp TempSetp

ShiftEco ShiftEco

VVVVVVVV VVVVVVVV

Encoding: see below

Range: see below

Unit: K

**Datapoint Types**

ID: Name: Range: Unit: Usage:

212.100 DPT_TempRoomSetpSetShift[3] see below see below HVAC

**Data fields** **Description** **Unit / Range**

TempSetpShiftComf room temperature setpoint shift comfort (delta V16, –655,34 K to 655,34 K

value) 0,02°C resolution

TempSetpShiftStdby room temperature setpoint shift standby (delta V16, –655,34 K to 655,34 K

value) 0,02°C resolution

TempSetpShiftEco room temperature setpoint shift economy (delta V16, –655,34 K to 655,34 K
value) 0,02°C resolution

###### Standard Mode

 DPT_TempRoomSetpSetShiftF16[3] (222.101), float encoding.

|Format:<br>Encoding:<br>Range:<br>Unit:|6 octet; V V V<br>16 16 16<br>6 MSB 5 LSB 4 MSB 3 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>ShiftComf ShiftComf ShiftStdby ShiftStdby<br>VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV<br>2 MSB 1 LSB<br>TempSetp TempSetp<br>ShiftEco ShiftEco<br>VVVVVVVV VVVVVVVV<br>see below<br>see below<br>K|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|212.100|DPT_TempRoomSetpSetShift[3]|see below|see below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|TempSetpShiftComf|room temperature setpoint shift comfort (delta<br>value)|V16,–655,34 K to 655,34 K<br>0,02°C resolution|
|TempSetpShiftStdby|room temperature setpoint shift standby (delta<br>value)|V16,–655,34 K to 655,34 K<br>0,02°C resolution|
|TempSetpShiftEco|room temperature setpoint shift economy (delta<br>value)|V16,–655,34 K to 655,34 K<br>0,02°C resolution|


-----

##### 4.17.2 Datapoint Type “3x set of RoomTemperature Absolute Setpoint values”
###### LTE: compound structure

Format: 6 octet: V16V16V16

6 MSB 5 LSB 4 MSB 3 LSB
TempSetp TempSetp TempSetp TempSetp

Comf Comf Stdby Stdby

VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV

2 MSB 1 LSB
TempSetp TempSetp

Eco Eco

VVVVVVVV VVVVVVVV

Unit: °C

**Datapoint Types**

ID: Name: Usage:

212.101 DPT_TempRoomSetpSet[3] HVAC

**Data fields** **Description** **Unit / Range**
TempSetpComf room temperature setpoint comfort V16, –273°C to 655,34 °C
0,02°C resolution
TempSetpStdby room temperature setpoint standby V16, –273°C to 655,34 °C
0,02°C resolution
TempSetpEco room temperature setpoint economy V16, –273°C to 655,34 °C
0,02°C resolution

###### Standard Mode

 DPT_TempRoomSetpSetF16[3] (222.100), float encoding.

|Format:<br>Unit:|6 octet: V V V<br>16 16 16<br>6 MSB 5 LSB 4 MSB 3 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>Comf Comf Stdby Stdby<br>VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV<br>2 MSB 1 LSB<br>TempSetp TempSetp<br>Eco Eco<br>VVVVVVVV VVVVVVVV<br>°C|Col3|
|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Usage:|
|212.101|DPT_TempRoomSetpSet[3]|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|TempSetpComf|room temperature setpoint comfort|V16,–273°C to 655,34 °C<br>0,02°C resolution|
|TempSetpStdby|room temperature setpoint standby|V16,–273°C to 655,34 °C<br>0,02°C resolution|
|TempSetpEco|room temperature setpoint economy|V16,–273°C to 655,34 °C<br>0,02°C resolution|


-----

#### 4.18 Data Type “4x 16-Bit Signed Value”

##### 4.18.1 Datapoint Type “4x set of RoomTemperature setpoints”
###### LTE: compound structure

Format: 8 octet; V16V16V16V16

8 MSB 7 LSB 6 MSB 5 LSB
TempSetp TempSetp TempSetp TempSetp

Comf Comf Stdby Stdby

VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV

4 MSB 3 LSB 2 MSB 1 LSB
TempSetp TempSetp TempSetp TempSetp

Eco Eco BProt BProt

VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV

Encoding: see below

Range: see below

Unit: °C

**Datapoint Types**

ID: Name: Range: Unit: Usage:

213.100 DPT_TempRoomSetpSet[4] see below see below HVAC

**Data fields** **Description** **Unit / Range**

TempSetpComf room temperature setpoint comfort V16, –273°C to 655,34°C
0,02°C resolution

TempSetpStdby room temperature setpoint standby V16, –273°C to 655,34°C
0,02°C resolution
TempSetpEco room temperature setpoint economy V16, –273°C to 655,34°C
0,02°C resolution
TempSetpBProt room temperature setpoint building protection V16, –273°C to 655,34°C
0,02°C resolution

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|Format:<br>Encoding:<br>Range:<br>Unit:|8 octet; V V V V<br>16 16 16 16<br>8 MSB 7 LSB 6 MSB 5 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>Comf Comf Stdby Stdby<br>VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV<br>4 MSB 3 LSB 2 MSB 1 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>Eco Eco BProt BProt<br>VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV<br>see below<br>see below<br>°C|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|213.100|DPT_TempRoomSetpSet[4]|see below|see below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|TempSetpComf|room temperature setpoint comfort|V16,–273°C to 655,34°C<br>0,02°C resolution|
|TempSetpStdby|room temperature setpoint standby|V16,–273°C to 655,34°C<br>0,02°C resolution|
|TempSetpEco|room temperature setpoint economy|V16,–273°C to 655,34°C<br>0,02°C resolution|
|TempSetpBProt|room temperature setpoint building protection|V16,–273°C to 655,34°C<br>0,02°C resolution|


-----

##### 4.18.2 Datapoint Type “4x set of DHWTemperature setpoints”
###### LTE: compound structure

Format: 8 octet; V16V16V16V16

8 MSB 7 LSB 6 MSB 5 LSB
TempSetp TempSetp TempSetp TempSetp
LegioProtect LegioProtect Normal Normal

VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV

4 MSB 3 LSB 2 MSB 1 LSB
TempSetp TempSetp TempSetpOff/ TempSetpOff/

Reduced Reduced FrostProtect FrostProtect

VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV

Encoding: see below

Range: see below

Unit: °C

**Datapoint Types**

ID: Name: Range: Unit: Usage:

213.101 DPT_TempDHWSetpSet[4] see below see below HVAC
DHW

**Data fields** **Description** **Unit / Range**

TempSetpLegio DHW temperature setpoint for LegioProtect operating V16, –273°C to 655,34°C
Protect mode 0,02°C resolution

TempSetpNormal DHW temperature setpoint for Normal operating mode V16, –273°C to 655,34°C

0,02°C resolution
TempSetpReduced DHW temperature setpoint for Reduced operating V16, –273°C to 655,34°C

mode 0,02°C resolution

TempSetpOff/ DHW temperature setpoint for Off/FrostProtect V16, –273°C to 655,34°C
FrostProtect operating mode 0,02°C resolution

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|Format:<br>Encoding:<br>Range:<br>Unit:|8 octet; V V V V<br>16 16 16 16<br>8 MSB 7 LSB 6 MSB 5 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>LegioProtect LegioProtect Normal Normal<br>VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV<br>4 MSB 3 LSB 2 MSB 1 LSB<br>TempSetp TempSetp TempSetpOff/ TempSetpOff/<br>Reduced Reduced FrostProtect FrostProtect<br>VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV<br>see below<br>see below<br>°C|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|213.101|DPT_TempDHWSetpSet[4]|see below|see below|HVAC<br>DHW|

|Data fields|Description|Unit / Range|
|---|---|---|
|TempSetpLegio<br>Protect|DHW temperature setpoint for LegioProtect operating<br>mode|V16,–273°C to 655,34°C<br>0,02°C resolution|
|TempSetpNormal|DHW temperature setpoint for Normal operating mode|V16,–273°C to 655,34°C<br>0,02°C resolution|
|TempSetpReduced|DHW temperature setpoint for Reduced operating<br>mode|V16,–273°C to 655,34°C<br>0,02°C resolution|
|TempSetpOff/<br>FrostProtect|DHW temperature setpoint for Off/FrostProtect<br>operating mode|V16,–273°C to 655,34°C<br>0,02°C resolution|


-----

##### 4.18.3 Datapoint Type “4x set of RoomTemperature setpoint shift values”
###### LTE: compound structure

Format: 8 octets: V16V16V16V16

8 MSB 7 LSB 6 MSB 5 LSB
TempSetp TempSetp TempSetp TempSetp

ShiftComf ShiftComf ShiftStdby ShiftStdby

VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV

4 MSB 3 LSB 2 MSB 1 LSB
TempSetp TempSetp TempSetp TempSetp

ShiftEco ShiftEco ShiftBProt ShiftBProt

VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV

Unit: K

**Datapoint Types**

ID: Name: Usage:

213.102 DPT_TempRoomSetpSetShift[4] HVAC

**Data fields** **Description** **Unit / Range**

TempSetpShiftComf room temperature setpoint shift comfort (delta V16, –655,34 K to 655,34 K
value) 0,02 K resolution

TempSetpShiftStdby room temperature setpoint shift standby (delta V16, –655,34 K to 655,34 K
value) 0,02 K resolution

TempSetpShiftEco room temperature setpoint shift economy (delta V16, –655,34 K to 655,34 K
value) 0,02 K resolution

TempSetpShiftBProt room temperature setpoint shift building V16, –655,34 K to 655,34 K
protection (delta value) 0,02 K resolution

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|Format:<br>Unit:|8 octets: V V V V<br>16 16 16 16<br>8 MSB 7 LSB 6 MSB 5 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>ShiftComf ShiftComf ShiftStdby ShiftStdby<br>VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV<br>4 MSB 3 LSB 2 MSB 1 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>ShiftEco ShiftEco ShiftBProt ShiftBProt<br>VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV<br>K|Col3|Col4|
|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|ID:|Name:|Usage:|
|213.102|213.102|DPT_TempRoomSetpSetShift[4]|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|TempSetpShiftComf|room temperature setpoint shift comfort (delta<br>value)|V16,–655,34 K to 655,34 K<br>0,02 K resolution|
|TempSetpShiftStdby|room temperature setpoint shift standby (delta<br>value)|V16,–655,34 K to 655,34 K<br>0,02 K resolution|
|TempSetpShiftEco|room temperature setpoint shift economy (delta<br>value)|V16,–655,34 K to 655,34 K<br>0,02 K resolution|
|TempSetpShiftBProt|room temperature setpoint shift building<br>protection (delta value)|V16,–655,34 K to 655,34 K<br>0,02 K resolution|


-----

#### 4.19 Data Type “16-Bit Signed & 8-Bit Unsigned Value & 8-Bit Set”

##### 4.19.1 Datapoint Type “Heat Prod. Manager Demand Signal”
###### LTE: compound structure

Format: 4 octet; V16U8B8

4 MSB 3 LSB 2 1
TempFlowDem TempFlowDem RelDemLimit Attributes

VVVVVVVV VVVVVVVV UUUUUUUU 00BBBBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

214.100 DPT_PowerFlowWaterDemHPM See below See below HWH

**Data fields** **Description** **Unit / Range**

TempFlowDem flow temperature demand / requested boiler V16, –273°C to 655,34°C
temperature 0,02°C resolution

RelDemLimit Relative demand %: max. limitation for modulating U8, 0 % to 100 %
burner, used in boiler 1 % resolution

Attributes Bit # Bitset B8

 - TempFlowDemValid 0 Validity of TempFlowDem true / false
‘false’ means also ‘no demand’

 - Stage1Enabled 1 if enabled, stage 1 can be activated by the 1= Enabled
BoC 0= Disabled
⇒ forced or auto

 - Stage1Forced 2 - if forced: stage 1 is generally on 1= Forced

                 - if auto: stage 1 is activated if necessary 0= Auto
according to boiler temperture

 - Stage2Enable 3 stage 2 control: see stage 1 1= Enabled
0= Disabled

 - Stage2Forced 4 stage 2 control: see stage 1 1= Forced
0= Auto

 - BoilerEnable 5 boiler pump is on (water flow) 1= Enabled
must be enabled before burner is turned on 0= Disabled

reserved 6-7 default 0

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|Format:<br>Encoding:<br>Range:<br>Unit:|4 octet; V U B<br>16 8 8<br>4 MSB 3 LSB 2 1<br>TempFlowDem TempFlowDem RelDemLimit Attributes<br>VVVVVVVV VVVVVVVV UUUUUUUU 00BBBBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|214.100|DPT_PowerFlowWaterDemHPM|See below|See below|HWH|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|TempFlowDem|flow temperature demand / requested boiler<br>temperature|flow temperature demand / requested boiler<br>temperature|V16,–273°C to 655,34°C<br>0,02°C resolution|
|RelDemLimit|Relative demand %: max. limitation for modulating<br>burner, used in boiler|Relative demand %: max. limitation for modulating<br>burner, used in boiler|U8,0 % to 100 %<br>1 % resolution|
|Attributes|Bit #||Bitset B8|
|- TempFlowDemValid|0|Validity of TempFlowDem<br>‘false’ means also‘no demand’|true / false|
|- Stage1Enabled|1|if enabled, stage 1 can be activated by the<br>BoC<br> ⇒ forced or auto|1= Enabled<br>0= Disabled|
|- Stage1Forced|2|- if forced: stage 1 is generally on<br>- if auto: stage 1 is activated if necessary<br>  according to boiler temperture|1= Forced<br>0= Auto|
|- Stage2Enable|3|stage 2 control: see stage 1|1= Enabled<br>0= Disabled|
|- Stage2Forced|4|stage 2 control: see stage 1|1= Forced<br>0= Auto|
|- BoilerEnable|5|boiler pump is on (water flow)<br>must be enabled before burner is turned on|1= Enabled<br>0= Disabled|
|reserved|6-7||default 0|


-----

##### 4.19.2 Datapoint Type “Cold Water Prod. Manager Demand Signal”
###### LTE: compound structure

Format: 4 octet; V16U8B8

4 MSB 3 LSB 2 1
TempFlowDem TempFlowDem RelDemLimit Attributes

VVVVVVVV VVVVVVVV UUUUUUUU 00000BBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

214.101 DPT_PowerFlowWaterDemCPM See below See below VAC

**Data fields** **Description** **Unit / Range**

TempFlowDem chilled water flow temperature demand V16, –273°C to 655,34°C
0,02°C resolution

RelDemLimit This value sets the relative demand limit in U8, 0 % … 100 %,
percent, used in chiller sequences controlled by 1 % resolution
the Cold Water Production Manager CPM (0% =
no stages, 100% = all stages)

Attributes Bit # Bitset B8

  - TempFlowDemValid 0 validity of chilled water flow temperature true / false
‘false’ means also ‘no demand’

  - RelDemLimitValid 1 validity of relative demand limit true / false

  - Chiller Enable 2 chilled water pump enabled (must be true / false
enabled before chiller compressor is
started, only applicable when chilled water
pump available)

  - reserved 3 to 7 default 0

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|Format:<br>Encoding:<br>Range:<br>Unit:|4 octet; V U B<br>16 8 8<br>4 MSB 3 LSB 2 1<br>TempFlowDem TempFlowDem RelDemLimit Attributes<br>VVVVVVVV VVVVVVVV UUUUUUUU 00000BBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|214.101|DPT_PowerFlowWaterDemCPM|See below|See below|VAC|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|TempFlowDem|chilled water flow temperature demand|chilled water flow temperature demand|V16,–273°C to 655,34°C<br>0,02°C resolution|
|RelDemLimit|This value sets the relative demand limit in<br>percent, used in chiller sequences controlled by<br>the Cold Water Production Manager CPM (0% =<br>no stages, 100%= all stages)|This value sets the relative demand limit in<br>percent, used in chiller sequences controlled by<br>the Cold Water Production Manager CPM (0% =<br>no stages, 100%= all stages)|U8,0 % … 100 %,<br>1 % resolution|
|Attributes|Bit #||Bitset B8|
|- <br>TempFlowDemValid|0|validity of chilled water flow temperature<br>‘false’ means also‘no demand’|true / false|
|- <br>RelDemLimitValid|1|validity of relative demand limit|true / false|
|- <br>Chiller Enable|2|chilled water pump enabled (must be<br>enabled before chiller compressor is<br>started, only applicable when chilled water<br>pump available)|true / false|
|- <br>reserved|3 to 7||default 0|


-----

#### 4.20 Data Type “ V16U8B16”

##### 4.20.1 Datapoint Type “Status Boiler Controller”
###### LTE: compound structure

Format: 5 octet; V16U8B16

5 MSB 4 LSB 3 2 MSB 1 LSB
TempBoiler TempBoiler PrelBurner Attributes Attributes

VVVVVVVV VVVVVVVV UUUUUUUU 0000BBBB BBBBBBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

215.100 DPT_StatusBOC See below See below HWH

**Data fields** **Description** **Unit / Range**

TempBoiler Boiler temperature V16, –273°C to 655,34°C
0,02°C resolution

PrelBurner Actual relative power of the burner U8, 0 % to 100 %
1 % resolution
Attributes Bit # Bitset B16

 - TempBoilerValid 0 validity of TempBoiler field true / false

 - PrelBurnerValid 1 validity of PrelBurner field true / false

 - Fault 2 boiler failure true /false

 - SummerMode 3 boiler switched off due to local true / false
summer/winter mode

 - OffPerm 4 permanently off (manual switch or true / false
failure)

 - NoHeatAvailable 5 boiler is temporary not providing true / false
heat

 - StatusBurnerStage1Enable 6 stage 1 or base stage enabled enable (=1) / disable (=0)

 - StatusBurnerStage2Enable 7 stage 2 / modulation enabled enable / disable

 - ReqNextStage 8 for boiler with two stage burner: true / false
power limit of stage 1 is reached,
HPM is requested to enable stage
2

 - ReqNextBoiler 9 power limit of boiler is reached, true / false
HPM is requested to enable next
boiler in cascade

 - ReducedAvailability 10 boiler is in principle available but true / false
other boilers should be used with
preference

 - ChimneySweep 11 ChimneySweep function active true / false

 - reserved 12 to 15 default 0

|Format:<br>Encoding:<br>Range:<br>Unit:|5 octet; V U B<br>16 8 16<br>5 MSB 4 LSB 3 2 MSB 1 LSB<br>TempBoiler TempBoiler PrelBurner Attributes Attributes<br>VVVVVVVV VVVVVVVV UUUUUUUU 0000BBBB BBBBBBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|215.100|DPT_StatusBOC|See below|See below|HWH|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|TempBoiler|Boiler temperature|Boiler temperature|V16,–273°C to 655,34°C<br>0,02°C resolution|
|PrelBurner|Actual relative power of the burner|Actual relative power of the burner|U8,0 % to 100 %<br>1 % resolution|
|Attributes|Bit #||Bitset B16|
|- <br>TempBoilerValid|0|validity of TempBoiler field|true / false|
|- <br>PrelBurnerValid|1|validity of PrelBurner field|true / false|
|- <br>Fault|2|boiler failure|true /false|
|- <br>SummerMode|3|boiler switched off due to local<br>summer/winter mode|true / false|
|- <br>OffPerm|4|permanently off (manual switch or<br>failure)|true / false|
|- <br>NoHeatAvailable|5|boiler is temporary not providing<br>heat|true / false|
|- <br>StatusBurnerStage1Enable|6|stage 1 or base stage enabled|enable (=1) / disable (=0)|
|- <br>StatusBurnerStage2Enable|7|stage 2 / modulation enabled|enable / disable|
|- <br>ReqNextStage|8|for boiler with two stage burner:<br>power limit of stage 1 is reached,<br>HPM is requested to enable stage<br>2|<br>true / false|
|- <br>ReqNextBoiler|9|power limit of boiler is reached,<br>HPM is requested to enable next<br>boiler in cascade|true / false|
|- <br>ReducedAvailability|10|boiler is in principle available but<br>other boilers should be used with<br>preference|true / false|
|- <br>ChimneySweep|11|ChimneySweep function active|true / false|
|- <br>reserved|12to 15||default 0|


-----

###### Standard Mode

 The information of this Datapoint Type is in Standard Mode available through DPs with different DPTs as follows.

 - TempBoiler: DPT_Value_Temp (9.001)
 - PrelBurner: DPT_RelPos_Valve (5.004)
 - Fault: DPT_Bool (1.002)
 - StatusBurnerStage1Enable: DPT_Enable (1.003)
 - StatusBurnerStage2Enable: DPT_Enable (1.003)

##### 4.20.2 Datapoint Type “Status Chiller Controller”
###### LTE: compound structure

Format: 5 octet: V16U8B16

5 MSB 4 LSB 3 2 MSB 1 LSB
TempChiller TempChiller PrelChiller Attributes Attributes

VVVVVVVV VVVVVVVV UUUUUUUU 00000000 BBBBBBBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

215.101 DPT_StatusCC See below See below VAC

**Data fields** **Description** **Unit / Range**

TempChiller chilled water flow temperature V16, –273 to 655,34°C
0,02°C resolution

PrelChiller Actual relative power of the chiller (stages in percent) U8, 0 % to 100 %,
1 % resolution
Attributes Bit # Bitset containing status info Bitset B16

  - TempChillerValid 0 validity of TempChiller field true / false

  - PrelChillerValid 1 validity of PrelChiller field true / false

  - Status 2 chiller running status true /false

  - Fault 3 chiller failure true / false

  - OffPerm 4 permanently off (manual switch of failure) true / false

  - ReqNextStage 5 power limit of current stage is reached, next true / false
stage required

  - ReqNextChiller 6 power limit of chiller is reached, next chiller true / false
required

  - ReducedAvailability 7 reduce availability, chiller is in principle true / false
available, but preferably another chiller is
used

  - reserved 8 to 15 default 0

|Format:<br>Encoding:<br>Range:<br>Unit:|5 octet: V U B<br>16 8 16<br>5 MSB 4 LSB 3 2 MSB 1 LSB<br>TempChiller TempChiller PrelChiller Attributes Attributes<br>VVVVVVVV VVVVVVVV UUUUUUUU 00000000 BBBBBBBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|215.101|DPT_StatusCC|See below|See below|VAC|

|Data fields|Description|Col3|Unit / Range|Col5|
|---|---|---|---|---|
|TempChiller|chilled water flow temperature|chilled water flow temperature|chilled water flow temperature|V16,–273 to 655,34°C<br>0,02°C resolution|
|PrelChiller|Actual relative power of the chiller (stages in percent)|Actual relative power of the chiller (stages in percent)|Actual relative power of the chiller (stages in percent)|U8,0 % to 100 %,<br>1 % resolution|
|Attributes|Bit #|Bitset containing status info|Bitset containing status info|Bitset B16|
|- <br>TempChillerValid|0|validity of TempChiller field|validity of TempChiller field|true / false|
|- <br>PrelChillerValid|1|validity of PrelChiller field|validity of PrelChiller field|true / false|
|- <br>Status|2|chiller running status|chiller running status|true /false|
|- <br>Fault|3|chiller failure|chiller failure|true / false|
|- <br>OffPerm|4|permanently off (manual switch of failure)|permanently off (manual switch of failure)|true / false|
|- <br>ReqNextStage|5|power limit of current stage is reached, next<br>stage required|power limit of current stage is reached, next<br>stage required|true / false|
|- <br>ReqNextChiller|6|power limit of chiller is reached, next chiller<br>required|power limit of chiller is reached, next chiller<br>required|true / false|
|- <br>ReducedAvailability|7|reduce availability, chiller is in principle<br>available, but preferably another chiller is<br>used|reduce availability, chiller is in principle<br>available, but preferably another chiller is<br>used|true / false|
|- <br>reserved|8 to 15|||default 0|


-----

###### Standard Mode

 The information of this Datapoint Type is in Standard Mode available through DPs with different DPTs as follows.

 - TempChiller: DPT_Value_Temp (9.001)
 - PrelChiller: DPT_RelPos_Valve (5.004)
 - Fault: DPT_Bool (1.002)
 - StatusChiller: DPT_Bool (1.002)

#### 4.21 Data Type “U16U8N8B8”

##### 4.21.1 Datapoint Type “Heat Producer Specification”
###### LTE: compound structure

Format: 5 octet: U16U8N8B8

5 MSB 4 LSB 3 2 1

Pnom Pnom BstageLimit BurnerType FuelType

UUUUUUUU UUUUUUUU UUUUUUUU NNNNNNNN 00000BBB

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

216.100 DPT_SpecHeatProd See below See below HWH

**Data fields** **Description** **Unit / Range**

Pnom Nominal power of burner/boiler U16, 0 kW to 65535 kW
resolution 1 kW

BstageLimit relative power limit % of stage 1 resp. base stage U8, 0 % to 100 %,
void (value 100%) for 1stage burner 1 % resolution

BurnerType 1 stage, 2 stage, modulating burner enum. N8
Encoding absolute value
N = {0, 255}
0: reserved
1: 1 stage
2: 2 stage
3: modulating
4 to 255: reserved
FuelType Bit # Bitset B8

  - Oil 0 oil fuel supported true / false

  - Gas 1 gas fuel supported true / false

  - SolidState 2 solid state fuel supported true / false

  - reserved 3 to 7 default 0

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|Format:<br>Encoding:<br>Range:<br>Unit:|5 octet: U U N B<br>16 8 8 8<br>5 MSB 4 LSB 3 2 1<br>Pnom Pnom BstageLimit BurnerType FuelType<br>UUUUUUUU UUUUUUUU UUUUUUUU NNNNNNNN 00000BBB<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|216.100|DPT_SpecHeatProd|See below|See below|HWH|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|Pnom|Nominal power of burner/boiler|Nominal power of burner/boiler|U16, 0 kW to 65535 kW<br>resolution 1 kW|
|BstageLimit|relative power limit % of stage 1 resp. base stage<br>void (value 100%) for 1stage  burner|relative power limit % of stage 1 resp. base stage<br>void (value 100%) for 1stage  burner|U8, 0 % to 100 %,<br>1 % resolution|
|BurnerType|1 stage, 2 stage, modulating burner|1 stage, 2 stage, modulating burner|enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0:<br>reserved<br>1:<br>1 stage<br>2:<br>2 stage<br>3:<br>modulating<br>4 to 255: reserved|
|FuelType|Bit #||Bitset B8|
|- <br>Oil|0|oil fuel supported|true / false|
|- <br>Gas|1|gas fuel supported|true / false|
|- <br>SolidState|2|solid state fuel supported|true / false|
|- <br>reserved|3 to 7||default 0|


-----

#### 4.22 Data Type “16-Bit Unsigned Value & 16-Bit Signed Value”

##### 4.22.1 Datapoint Type “Next Temperature & Time Delay”
###### LTE: compound structure

Format: 4 octet; U16V16

4 MSB 3 LSB 2 MSB 1 LSB

Delay Delay Temp Temp

Time Time

UUUUUUUU UUUUUUUU VVVVVVVV VVVVVVVV

Encoding: See below

Range: See below

Unit: See below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

220.100 DPT_TempHVACAbsNext See below See below TU, DEH

**Data fields** **Description** **Unit / Range**

DelayTime Time delay U16,
1 min resolution
1 min to 65 535 min
0: next temperature value not available

Temp absolute temperature value V16,
0,02°C resolution
-273°C to 655,34°C

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|Format:<br>Encoding:<br>Range:<br>Unit:|4 octet; U V<br>16 16<br>4 MSB 3 LSB 2 MSB 1 LSB<br>Delay Delay Temp Temp<br>Time Time<br>UUUUUUUU UUUUUUUU VVVVVVVV VVVVVVVV<br>See below<br>See below<br>See below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|220.100|DPT_TempHVACAbsNext|See below|See below|TU, DEH|

|Data fields|Description|Unit / Range|
|---|---|---|
|DelayTime|Time delay|U16,<br>1 min resolution<br>1 min to 65 535 min<br>0:<br>next temperature value not available|
|Temp|absolute temperature value|V16, <br>0,02°C resolution<br>-273°C to 655,34°C|


-----

#### 4.23 Data Type “3x 16-Float Value”

##### 4.23.1 Datapoint Type “3x set of RoomTemperature Setpoint Values”

Format: 6 octet: F16F16F16

6 MSB 5 LSB 4 MSB 3 LSB
TempSetp TempSetp TempSetp TempSetp

Comf Comf Stdby Stdby

FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF

2 MSB 1 LSB

TempSetp TempSetp

Eco Eco

FFFFFFFF FFFFFFFF

Encoding: see below

For all fields “Comfort”, “Standby” and “Economy”, only the value 7FFFh shall be used to
denote invalid data.

Range: see below

Unit: °C

**Datapoint Types**

ID: Name: Range: Unit: Usage:

222.100 DPT_TempRoomSetpSetF16[3] see below see below HVAC

**Data fields** **Description** **Unit / Range**

TempSetpComf room temperature setpoint comfort -273°C to 670 433,28°C

TempSetpStdby room temperature setpoint standby -273°C to 670 433,28°C

TempSetpEco room temperature setpoint economy -273°C to 670 433,28°C

###### Similar to DPT_TempRoomSetpSet[4] (213.100) but only 3 values with float encoding

|Format:<br>Encoding:<br>Range:<br>Unit:|6 octet: F F F<br>16 16 16<br>6 MSB 5 LSB 4 MSB 3 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>Comf Comf Stdby Stdby<br>FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF<br>2 MSB 1 LSB<br>TempSetp TempSetp<br>Eco Eco<br>FFFFFFFF FFFFFFFF<br>see below<br>For all fields “Comfort”, “Standby” and “Economy”, only the value 7FFFh shall be used to<br>denote invalid data.<br>see below<br>°C|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|222.100|DPT_TempRoomSetpSetF16[3]|see below|see below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|TempSetpComf|room temperature setpoint comfort|-273°C to 670 433,28°C|
|TempSetpStdby|room temperature setpoint standby|-273°C to 670 433,28°C|
|TempSetpEco|room temperature setpoint economy|-273°C to 670 433,28°C|


-----

##### 4.23.2 Datapoint Type “3x set of RoomTemperature Setpoint Shift Values”

Format: 6 octet: F16F16F16

6 MSB 5 LSB 4 MSB 3 LSB
TempSetp TempSetp TempSetp TempSetp

ShiftComf ShiftComf ShiftStdby ShiftStdby

FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF

2 MSB 1 LSB
TempSetp TempSetp

ShiftEco ShiftEco

FFFFFFFF FFFFFFFF

Encoding: see below

For all fields “Comfort”, “Standby” and “Economy”, only the value 7FFFh shall be used to
denote invalid data.

Range: see below

Unit: K

**Datapoint Types**

ID: Name: Range: Unit: Usage:

222.101 DPT_TempRoomSetpSetShiftF16[3] see below see below HVAC

**Data fields** **Description** **Unit / Range**

TempSetpShiftComf room temperature setpoint shift comfort (delta -671 088,64 K…670 433,28 K
value)

TempSetpShiftStdby room temperature setpoint shift standby (delta -671 088,64 K…670 433,28 K
value)

TempSetpShiftEco room temperature setpoint shift economy (delta -671 088,64 K…670 433,28 K
value)

###### Same as DPT_TempRoomSetpSetShift[3] (212.100) but with float encoding

|Format:<br>Encoding:<br>Range:<br>Unit:|6 octet: F F F<br>16 16 16<br>6 MSB 5 LSB 4 MSB 3 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>ShiftComf ShiftComf ShiftStdby ShiftStdby<br>FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF<br>2 MSB 1 LSB<br>TempSetp TempSetp<br>ShiftEco ShiftEco<br>FFFFFFFF FFFFFFFF<br>see below<br>For all fields “Comfort”, “Standby” and “Economy”, only the value 7FFFh shall be used to<br>denote invalid data.<br>see below<br>K|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|222.101|DPT_TempRoomSetpSetShiftF16[3]|see below|see below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|TempSetpShiftComf|room temperature setpoint shift comfort (delta<br>value)|-671 088,64 K…670 433,28 K|
|TempSetpShiftStdby|room temperature setpoint shift standby (delta<br>value)|-671 088,64 K…670 433,28 K|
|TempSetpShiftEco|room temperature setpoint shift economy (delta<br>value)|-671 088,64 K…670 433,28 K|


-----

#### 4.24 Data Type V8N8N8

##### 4.24.1 Datapoint Type “EnergyDemAir”
###### LTE: compound structure 

Format: 3 octets: V8N8N8

3 2 1
EnergyDem HVACContr Mod HVACEmerg

Mode

VVVVVVVV NNNNNNNN NNNNNNNN

Encoding: see below

Range: see below

Unit: see below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

223.100 DPT_EnergyDemAir see below see below HVAC

**Data fields** **Description** **Unit / Range**

EnergyDem Energy demand of terminal unit controller V8, -100 % to 100 %

           - 100 %: full heating demand 1 % resolution
100 %: full cooling demand

ContrModeAct Actual controller Mode enum. N8
Encoding absolute value
N = {0, 255}
0: Auto
1: Heat
2: Morning Warmup
3: Cool
4: Night Purge
5: Precool
6: Off
7: Test
8: Emergency Heat
9: Fan only
10: Free Cool
11: Ice
12 to 19: reserved
20: NoDem
21 to 255: reserved
HVACEmergMode Acutal HVAC Emergency Mode enum. N8
Encoding absolute value
N = {0, 255}
0: Normal
1: EmergPressure
2: EmergDepressure
3: EmergPurge
4: EmergShutdown
5: EmergFire
6 to 255: reserved

|Format:<br>Encoding:<br>Range:<br>Unit:|3 octets: V N N<br>8 8 8<br>3 2 1<br>EnergyDem HVACContr Mod HVACEmerg<br>Mode<br>VVVVVVVV NNNNNNNN NNNNNNNN<br>see below<br>see below<br>see below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|223.100|DPT_EnergyDemAir|see below|see below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|EnergyDem|Energy demand of terminal unit controller<br>- 100 %: full heating demand<br>100 %: full cooling demand|V8, -100 % to 100 %<br>1 % resolution|
|ContrModeAct|Actual controller Mode|enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0:<br>Auto<br>1:<br>Heat<br>2:<br>Morning Warmup<br>3:<br>Cool<br>4:<br>Night Purge<br>5:<br>Precool<br>6:<br>Off<br>7:<br>Test<br>8:<br>Emergency Heat<br>9:<br>Fan only<br>10:<br>Free Cool<br>11:<br>Ice<br>12 to 19:<br>reserved<br>20:<br>NoDem<br>21 to 255:<br>reserved|
|HVACEmergMode|Acutal HVAC Emergency Mode|enum. N8  <br>Encoding absolute value<br>N = {0, 255}<br>0:<br>Normal<br>1:<br>EmergPressure<br>2:<br>EmergDepressure<br>3:<br>EmergPurge<br>4:<br>EmergShutdown<br>5:<br>EmergFire<br>6 to 255:<br>reserved|


-----

###### Standard Mode

 Splitting in 3 separate Datapoints:

 - DPT_Percent_V8 (6.001)
 - DPT_HVACContrMode (20.105)
 - DPT_HVACEmergMode (20.106)

#### 4.25 Data Type V16V16N8N8

##### 4.25.1 Datapoint Type “TempSupplyAirSetpSet”
###### LTE: compound structure 

Format: 6 octet: V16V16N8N8

6 MSB 5 LSB 4 MSB 3 LSB
TempSetp TempSetp TempSetp TempSetp

Cooling Cooling Heating Heating

VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV

2 1
HVACContr Mod HVACEmerg

Mode

NNNNNNNN NNNNNNNN

Encoding: see below

Range: see below

Unit: see below

**Datapoint Types**

ID: Name: Range: Unit: Usage:

224.100 DPT_TempSupplyAirSetpSet see below see below HVAC

|Format:<br>Encoding:<br>Range:<br>Unit:|6 octet: V V N N<br>16 16 8 8<br>6 MSB 5 LSB 4 MSB 3 LSB<br>TempSetp TempSetp TempSetp TempSetp<br>Cooling Cooling Heating Heating<br>VVVVVVVV VVVVVVVV VVVVVVVV VVVVVVVV<br>2 1<br>HVACContr Mod HVACEmerg<br>Mode<br>NNNNNNNN NNNNNNNN<br>see below<br>see below<br>see below|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Range:|Unit:|Usage:|
|224.100|DPT_TempSupplyAirSetpSet|see below|see below|HVAC|

|Data fields|Description|Unit / Range|
|---|---|---|
|TempSetpCooling|Supply air temperature cooling setpoint|V16,–273°C to 655,34°C<br>0,02°C resolution|
|TempSetpHeating|Supply air temperature heating setpoint|V16,–273°C to 655,34°C<br>0,02°C resolution|


-----

ContrModeAct Actual controller Mode enum. N8
Encoding absolute value
N = {0, 255}
0: Auto
1: Heat
2: Morning Warmup
3: Cool
4: Night Purge
5: Precool
6: Off
7: Test
8: Emergency Heat
9: Fan only
10: Free Cool
11: Ice
12 to 19: reserved
20: NoDem
21 to 255: reserved
HVACEmergMode Acutal HVAC Emergency Mode enum. N8
Encoding absolute value
N = {0, 255}
0: Normal
1: EmergPressure
2: EmergDepressure
3: EmergPurge
4: EmergShutdown
5: EmergFire
6 to 255: reserved

###### Standard Mode

 The information of this DPT is not available in Standard Mode.

|Data fields|Description|Unit / Range|
|---|---|---|
|ContrModeAct|Actual controller Mode|enum. N8 <br>Encoding absolute value<br>N = {0, 255}<br>0:<br>Auto<br>1:<br>Heat<br>2:<br>Morning Warmup<br>3:<br>Cool<br>4:<br>Night Purge<br>5:<br>Precool<br>6:<br>Off<br>7:<br>Test<br>8:<br>Emergency Heat<br>9:<br>Fan only<br>10:<br>Free Cool<br>11:<br>Ice<br>12 to 19:<br>reserved<br>20:<br>NoDem<br>21 to 255: reserved|
|HVACEmergMode|Acutal HVAC Emergency Mode|enum. N8  <br>Encoding absolute value<br>N = {0, 255}<br>0:<br>Normal<br>1:<br>EmergPressure<br>2:<br>EmergDepressure<br>3:<br>EmergPurge<br>4:<br>EmergShutdown<br>5:<br>EmergFire<br>6 to 255:<br>reserved|


-----

### 5 Datapoint Types for Load Management
###### No Datapoint Types for Load Management have been specified so far. This clause is a placeholder.


-----

### 6 Datapoint Types for Lighting

#### 6.1 General
###### Where in the below DALI commands are referred, these refer to IEC 62386-202.

#### 6.2 Datapoint Types U16

Format: 2 octet: U16

octet nr.: 2MSB 1LSB

field names: Absolute Colour Temperature

encoding: UU U U U U U U U U U U U U U U

Range: See below

PDT: PDT_UNSIGNED_INT

**Datapoint Types**

ID: Name: Use:

7.600 DPT_Absolute_Colour_Temperature FB

**Field names Description** **Encoding** **Unit** **Range**

Absolute Contains the Absolute Value binary encoded. K 0 K to 65 535 K 1 K
Colour Colour Temperature
Temperature

#### 6.3 Datapoint Types N8

|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.:<br>field names:<br>encoding:<br>Range:<br>PDT:|2 octet: U<br>16<br>2 1<br>MSB LSB<br>Absolute Colour Temperature<br>UU U U U U U U U U U U U U U U<br>See below<br>PDT UNSIGNED INT<br>_ _|Col3|
|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Use:|
|7.600|DPT_Absolute_Colour_Temperature|FB|

|Field names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|Absolute<br>Colour<br>Temperature|Contains the Absolute<br>Colour Temperature|Value binary encoded.|K|0 K to 65 535 K|1 K|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|1 octet: N<br>8<br>1<br>field1<br>N N N N N N N N<br>Encoding absolute value N = [0 … 255]<br>none<br>none<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|20.600|DPT_Behaviour_Lock_-<br>Unlock|_field1_= Behaviour_Lock_Unlock<br>0 <br>: <br>off<br>1 <br>: <br>on<br>2 <br>: <br>no change<br>3 <br>: <br>value according to<br>additional parameter<br>4 <br>: <br>memory function value<br>5 <br>: <br>updated value<br>6 <br>: <br>value before locking<br>7 … 255<br>: <br>reserved|[0 to 6]|FB|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.601|DPT_Behaviour_Bus_-<br>Power_Up_Down|_field1 =_<br>Behaviour_Bus_Power_Up_Down<br>0 <br>: <br>off<br>1 <br>: <br>on<br>2 <br>: <br>no change<br>3 <br>: <br>value according to<br>additional parameter<br>4 <br>: <br>last (value before bus<br>power down)<br>5 … 255<br>: <br>reserved|[0 to 4]|FB|
|20.602|DPT_DALI_Fade_Time|_field1_ = FadeTime<br>0 <br>: <br>0 s (no fade)<br>1 <br>: <br>0,7 s<br>2 <br>: <br>1,0 s<br>3 <br>: <br>1,4 s<br>4 <br>: <br>2,0 s<br>5 <br>: <br>2,8 s<br>6 <br>: <br>4,0 s<br>7 <br>: <br>5,7 s<br>8 <br>: <br>8,0 s<br>9 <br>: <br>11,3 s<br>10<br>: <br>16,0 s<br>11<br>: <br>22,6 s<br>12<br>: <br>32,0 s<br>13<br>: <br>45,3 s<br>14<br>: <br>64,0 s<br>15<br>: <br>90,5 s<br>16 to 255<br>: <br>reserved|[0 to 15]|FB|
|20.603|DPT_BlinkingMode|_field1_ = BlinkingMode<br>0 <br>: <br>BlinkingDisabled<br>1 <br>: <br>WithoutAcknowledge<br>2 <br>: <br>BlinkingWithAcknowledge<br>3 to 255 :<br>reserved|[0 to 2]|FB|
|20.604|DPT_LightControlMode|_field1_ = LightControlMode<br>0 <br>: <br>automatic light control<br>1 <br>: <br>manual light control<br>2 to 255 :<br>reserved|[0 to 1]|Lighting|
|20.605|DPT_SwitchPBModel|_field1_ = SwitchPBModel<br>0 <br>: <br>reserved<br>1 <br>: <br>one PB/binary input mode<br>2 <br>: <br>two PBs/binary inputs<br>mode<br>3 to 255 :<br>reserved|[1 to 2]|Lighting|
|20.606|DPT_PBAction|_field1_ = SwitchPBAction<br>0 <br>: <br>inactive (no message sent)<br>1 <br>: <br>SwitchOff message sent<br>2 <br>: <br>SwitchOn message sent<br>3 <br>: <br>inverse value of InfoOnOff<br>is sent<br>4 to 255 :<br>reserved|<br>[0 to 3]|Lighting|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.607|DPT_DimmPBModel|_field1_ = LDSBMode<br>0 <br>: <br>reserved<br>1 <br>: <br>one PB/binary input;<br>SwitchOnOff inverts on<br>each transmission<br>2 <br>: <br>one PB/binary input,<br>On / DimUp message sent<br>3 <br>: <br>one PB/binary input,<br>Off / DimDown message sent<br>4 <br>: <br>two PBs/binary inputs<br>mode<br>5 to 255 :<br>reserved|[1 to 4]|Lighting|
|20.608|DPT_SwitchOnMode|_field1_ = SwitchOnMode <br>0 <br>: <br>last actual value<br>1 <br>: <br>value according additional<br>parameter<br>2 <br>: <br>last received absolute<br>setvalue<br>3 to 255 :<br>reserved|[0 to 2]|Lighting|
|20.609|DPT_LoadTypeSet|_field1_ = LoadTypeSet <br>0 <br>: <br>automatic (resistive,<br>capacitive or inductive)<br>1 <br>: <br>leading edge<br>(inductive load)<br>2 <br>: <br>trailing edge<br>(resistive – or capacitive load)<br>3 <br>: <br>switch mode only (non-<br>dimmable load)<br>4 <br>: <br>automatic once<br>5 <br>: <br>CFL 24), leading<br>6 <br>: <br>CFL 24), trailing<br>7 <br>: <br>LED, leading<br>8 <br>: <br>LED, trailing<br>9 to 255 :<br>reserved|[0 to 8]|Lighting|
|20.609|USE: <br>THE VALUE“AUTOMATIC” SHALL MEAN THAT THEFB SHALL AUTONOMOUSLY TAKE THE INITIATIVE TO<br>DETECT THE LOAD EACH TIME THAT IT IS POWERED UP. THE VALUE“AUTOMATIC ONCE” SHALL DENOTE<br>THAT THE LOAD DETECTION SHALL NOT BE DONE AUTONOMOUSLY, BUT ONLY BY AN EXTERNAL<br>TRIGGER, LIKE A MANIPULATION OF THEHMI OF THE DEVICE OR A TRIGGER MESSAGE VIA THEKNX <br>BUS.|USE: <br>THE VALUE“AUTOMATIC” SHALL MEAN THAT THEFB SHALL AUTONOMOUSLY TAKE THE INITIATIVE TO<br>DETECT THE LOAD EACH TIME THAT IT IS POWERED UP. THE VALUE“AUTOMATIC ONCE” SHALL DENOTE<br>THAT THE LOAD DETECTION SHALL NOT BE DONE AUTONOMOUSLY, BUT ONLY BY AN EXTERNAL<br>TRIGGER, LIKE A MANIPULATION OF THEHMI OF THE DEVICE OR A TRIGGER MESSAGE VIA THEKNX <br>BUS.|USE: <br>THE VALUE“AUTOMATIC” SHALL MEAN THAT THEFB SHALL AUTONOMOUSLY TAKE THE INITIATIVE TO<br>DETECT THE LOAD EACH TIME THAT IT IS POWERED UP. THE VALUE“AUTOMATIC ONCE” SHALL DENOTE<br>THAT THE LOAD DETECTION SHALL NOT BE DONE AUTONOMOUSLY, BUT ONLY BY AN EXTERNAL<br>TRIGGER, LIKE A MANIPULATION OF THEHMI OF THE DEVICE OR A TRIGGER MESSAGE VIA THEKNX <br>BUS.|USE: <br>THE VALUE“AUTOMATIC” SHALL MEAN THAT THEFB SHALL AUTONOMOUSLY TAKE THE INITIATIVE TO<br>DETECT THE LOAD EACH TIME THAT IT IS POWERED UP. THE VALUE“AUTOMATIC ONCE” SHALL DENOTE<br>THAT THE LOAD DETECTION SHALL NOT BE DONE AUTONOMOUSLY, BUT ONLY BY AN EXTERNAL<br>TRIGGER, LIKE A MANIPULATION OF THEHMI OF THE DEVICE OR A TRIGGER MESSAGE VIA THEKNX <br>BUS.|


24) CFL = Compact Fluorescent Lamps


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.610|DPT_LoadTypeDetected|_field1_ = LoadTypeDetected <br>0 <br>: <br>undefined<br>1 <br>: <br>leading edge<br>(inductive load)<br>2 <br>: <br>trailing edge<br>(capacitive load)<br>3 <br>: <br>detection not possible or<br>error<br>4 <br>: <br>calibration pending, waiting<br>on trigger<br>5 <br>: <br>CFL, leading<br>6 <br>: <br>CFL, trailing<br>7 <br>: <br>LED, leading<br>8 <br>: <br>LED, trailing<br>9 to 255 :<br>reserved|<br>[0 to 8]|Lighting|
|20.611|DPT_Converter_Test_-<br>Control|_field1_ = TestCtrl <br>0 <br>: Reserved, no effect<br>1 <br>: Start Function Test (FT)<br>Acc. DALI Cmd. 227<br>2 <br>: Start Duration Test (DT)<br>Acc. DALI Cmd. 228<br>3 <br>: Start Partial Duration Test<br>(PDT)<br>4 <br>: Stop Test<br>Acc. DALI Cmd 229<br>5 <br>: Reset Function Test Done<br>Flag<br>Acc. DALI Cmd. 230<br>6 <br>: Reset Duration Test Done<br>Acc. DALI Cmd. 231<br>7 to 255 : Reserved, no effect<br>NOTE 25 :<br>Concurrent tests to the same<br>DALI converter will be supported.<br>This DPT controls a test of a DALI con-<br>verter. Furthermore, it allows to stop a<br>running test and to reset test flags.|[0 to 6]|FB|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.612|DPT_Converter_Control|_field1_ = ConvCtrl <br>0 <br>: <br>Restore Factory Default<br>Settings<br>Acc. DALI Cmd. 254<br>1 <br>: <br>Goto Rest Mode<br>Acc. DALI Cmd. 224<br>2 <br>: <br>Goto Inhibit Mode<br>Acc. DALI Cmd. 225<br>3 <br>: <br>Re-Light / Reset Inhibit<br>Acc. DALI Cmd. 226<br>4 <br>: <br>Reset Lamp Time<br>Resets the Lamp<br>Emergency Time and the<br>Lamp Total Operation<br>Time.<br>Acc. DALI Cmd. 232<br>5 to 255 :<br>Reserved, no effect<br>Allows carrying out DALI-specific control<br>functions via KNX.|[0 to 4]|FB|
|20.613|DPT_Converter_Data_-<br>Request|_field1_ = Request <br>Each enum value requests data from one<br>of the following Datapoints.<br>0 <br>: <br>Reserved, no effect<br>1 <br>: <br>Request Converter Status<br>2 <br>: <br>Request Converter Test<br>Result<br>3 <br>: <br>Request Battery Info<br>4 <br>: <br>Request Converter FT Info<br>5 <br>: <br>Request Converter DT Info<br>6 <br>: <br>Request Converter PDT<br>Info<br>7 <br>: <br>Request Converter Info<br>8 <br>: <br>Request Converter Info Fix<br>9 to 255 :<br>Reserved, no effect|[0 to 8]|FB|


-----

#### 6.4 Datapoint Types B8

##### 6.4.1 Datapoint Type “Lighting Actuator Error Information”

Format: 1 octets: B8

1
Attributes

BBBBBBBB

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name:

21.601 DPT_LightActuatorErrorInfo

**Data fields** **Description** **Unit / Range**

Attributes Bit No. Bitset B

 - LoadDetectionError 0 (lsb) Load detection failed / wrong load type 0: false
1: true

 - Undervoltage 1 Undervoltage of mains supply 0: false
1: true

 - Overcurrent 2 Overcurrent / short circuit on load side 0: false
1: true

 - Underload 3 Underload / no load on load side 0: false
1: true

 - DefectiveLoad 4 Overvoltage / overcurrent pulses on load 0: false
side 1: true

 - LampFailure 5 General failure of the lamp 0: false
1: true

 - Overheat 6 Thermal overload of the actuator 0: false
1: true

 - reserved 7 (msb)

|Format:<br>PDT:|1 octets: B<br>8<br>1<br>Attributes<br>BBBBBBBB<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|
|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Usage:|
|21.601|DPT_LightActuatorErrorInfo|Lighting|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|Attributes|Bit No.||Bitset B8|
|- LoadDetectionError|0 (lsb)|Load detection failed / wrong load type|0: false<br>1: true|
|- Undervoltage|1|Undervoltage of mains supply|0: false<br>1: true|
|- Overcurrent|2|Overcurrent / short circuit on load side|0: false<br>1: true|
|- Underload|3|Underload / no load on load side|0: false<br>1: true|
|- DefectiveLoad|4|Overvoltage / overcurrent pulses on load<br>side|0: false<br>1: true|
|- LampFailure|5|General failure of the lamp|0: false<br>1: true|
|- Overheat|6|Thermal overload of the actuator|0: false<br>1: true|
|- reserved|7 (msb)|||


-----

#### 6.5 Datapoint Types U8B8

##### 6.5.1 Datapoint Type “Status Lighting Actuator”

Format: 2 octets: U8B8

2 1
ActualValue Attributes

UUUUUUUU BBBBBBBB

PDT: PDT_ENUM8 (alt: PDT_UNSIGNED_CHAR)

**Datapoint Types**

ID: Name: Usage:

207.600 DPT_StatusLightingActuator Lighting *)

**Data fields** **Description** **Unit / Range**

ActualValue Current lighting level in %. U8, 0 % to 100 %
In case of a switching actuator LSAB the range is ~ 0,4 % resolution
limited to the discrete values 0 % and 100 %.

Attributes Bit No. Bitset B8

 - ValidActualValue 0 (lsb) Validity of field ActualValue 0: false
1: true

 - Locked 1 true ⇒ actuator is locked, e.g., via input 0: false
LockDevice. 1: true

 - Forced 2 true ⇒ forced on/off control is active, e.g., 0: false
via input SwitchedOnOffForced 1: true

 - NightModeActive 3 true ⇒ night mode is active e.g., via input 0: false
NightMode; the actuator will autonomously 1: true
switch off the light after a defined time
period.

 - StaircaseLightingFunction 4 true ⇒ staircase lighting function is active, 0: false
e.g. via input TimedStartStop. 1: true

 - Dimming 5 true ⇒ actuator is in state DIMMING 0: false
false ⇒ actuator is not in state DIMMING 1: true
Not applicable for switching actuator LSAB.

 - LocalOverride 6 true ⇒ actuator setvalue is locally 0: false
overridden, e.g. via a local user interface. 1: true

 - Failure 7 (msb) General actuator failure 0: false
1: true

*) Lighting actuators may provide two types of status information.

    - Basic information contains the current lighting level (mandatory).

    - Extended information contains the current lighting level and additional status attributes (optional).
Extended actuator status information fits more for the use with a Lighting Controller.
Whether basic or extended status information is activated can be defined by ETS or via configuration parameters
in the LTE-Mode model.

|Format:<br>PDT:|2 octets: U B<br>8 8<br>2 1<br>ActualValue Attributes<br>UUUUUUUU BBBBBBBB<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|
|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Usage:|
|207.600|DPT_StatusLightingActuator|Lighting *)|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|ActualValue|Current lighting level in %.<br>In case of a switching actuator LSAB the range is<br>limited to the discrete values 0 % and 100 %.|Current lighting level in %.<br>In case of a switching actuator LSAB the range is<br>limited to the discrete values 0 % and 100 %.|U8,0 % to 100 %<br>~ 0,4 % resolution|
|Attributes|Bit No.||Bitset B8|
|- ValidActualValue|0 (lsb)|Validity of field ActualValue|0: false<br>1: true|
|- Locked|1|true⇒ actuator is locked, e.g., via input<br>LockDevice.|0: false<br>1: true|
|- Forced|2|true⇒ forced on/off control is active, e.g.,<br>via input SwitchedOnOffForced|0: false<br>1: true|
|- NightModeActive|3|true⇒ night mode is active e.g., via input<br>NightMode; the actuator will autonomously<br>switch off the light after a defined time<br>period.|0: false<br>1: true|
|- StaircaseLightingFunction|4|true⇒ staircase lighting function is active,<br>e.g. via input TimedStartStop.|0: false<br>1: true|
|- Dimming|5|true⇒ actuator is in state DIMMING<br>false⇒ actuator is not in state DIMMING<br>Not applicable for switching actuator LSAB.|0: false<br>1: true|
|- LocalOverride|6|true⇒ actuator setvalue is locally<br>overridden, e.g. via a local user interface.|0: false<br>1: true|
|- Failure|7 (msb)|General actuator failure|0: false<br>1: true|


-----

#### 6.6 Datapoint Types U8U8U8

##### 6.6.1 DPT_Colour_RGB

Format: 3 octets: U8U8U8

octet nr. 3 MSB 2 1 LSB

field names R G B

encoding U U U U U U U U U U U U U U U U U U U U U U U U

Encoding: All values binary encoded.

Range:: R, G, B: 0 to 255

Unit: None

Resol.: 1

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Range: Resol.: Use:

232.600 DPT_Colour_RGB R: 0 to 255 R: 1 G
G: 0 to 255 G: 1
B: 0 to 255 B: 1

NOTE 26 This is useful for simple colour control.

NOTE 27 Because of the device dependent interpretation of RGB, this coding is only suitable for point-to-point communication,
this is, if there is only a single receiver.

NOTE 28 This DPT specification does not tend to give a definition of RGB. Aspects as linearity and influence on brightness are
the scope of the specification of a distributed application or a FB specification. For a definition of RGB, please refer to ISO/IEC
8632-1 Information technology — Computer graphics — Metafile for the storage and transfer of picture description information —
Part 1: Functional specification

#### 6.7 Datapoint Types B10U6

##### 6.7.1 DPT_DALI_Control_Gear_Diagnostics

Format: 2 octets: B10U6

octet nr. 2 MSB 1 LSB

b15 b14 b13 b12 b11 b10 b9 b8 b7 b6 b5 b4 b3 b2 b1 b0

field names r r r r r CE BF LF RR AI Addr

encoding B B B B B B B B B B U6

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name: Use:

237.600 DPT_DALI_Control_Gear_Diagnostic Lighting

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range::<br>Unit:<br>Resol.:<br>PDT:|3 octets: U U U<br>8 8 8<br>3 2 1<br>MSB LSB<br>R G B<br>U U U U U U U U U U U U U U U U U U U U U U U U<br>All values binary encoded.<br>R, G, B: 0 to 255<br>None<br>1<br>PDT GENERIC 03<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|ID:|Name:|Range:|Resol.:|Use:|
|232.600|232.600|DPT_Colour_RGB|R:<br>0 to 255<br>G:<br>0 to 255<br>B:<br>0 to 255|R:<br>1 <br>G:<br>1 <br>B:<br>1|G|

|b<br>15|b<br>14|b<br>13|b<br>12|b<br>11|b<br>10|b<br>9|b<br>8|
|---|---|---|---|---|---|---|---|

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|CE|BF|LF|
|---|---|---|---|---|---|---|---|

|RR|AI|Addr|
|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|U<br>6|
|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|2 octets: B U<br>10 6<br>2 1<br>MSB LSB<br>b b b b b b b b b b b b b b b b<br>15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0<br>r r r r r CE BF LF RR AI Addr<br>B B B B B B B B B B U<br>6<br>PDT GENERIC 02<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|237.600|DPT_DALI_Control_Gear_Diagnostic|Lighting|


-----

This field shall indicate whether or not there is a convertor error.
b11 to b15 r These bits are reserved for future use and shall be 0.

#### 6.8 Datapoint Types B2U6

##### 6.8.1 DPT_DALI_Diagnostics

Format: 1 octet: B2U6

octet nr. 1

b7 b6 b5 b4 b3 b2 b1 b0

field names BF LF Addr

encoding B B U6

Unit: none

Resol.: none

PDT: PDT_GENERIC_01

**Datapoint Types**

ID: Name: Use:

238.600 DPT_DALI_Diagnostics Lighting

25) The bit CE (converter error) is reserved for the application ‘emergency lighting’.

|Bit|Abbr.|Field name|Encoding|Range|Unit|Resol.|
|---|---|---|---|---|---|---|
|b0 to b5|Addr|AI = 0: DALI Device Address|U6|0 to 63|none|1|
|b0 to b5|Addr|AI = 1: DALI Group Address|U6|0 to 15|none|1|
|b0 to b5|Addr|This shall contain the DALI Device Address or the DALI Group Address, according the<br>value of the field AI, for which the diagnostic information isgiven.|This shall contain the DALI Device Address or the DALI Group Address, according the<br>value of the field AI, for which the diagnostic information isgiven.|This shall contain the DALI Device Address or the DALI Group Address, according the<br>value of the field AI, for which the diagnostic information isgiven.|This shall contain the DALI Device Address or the DALI Group Address, according the<br>value of the field AI, for which the diagnostic information isgiven.|This shall contain the DALI Device Address or the DALI Group Address, according the<br>value of the field AI, for which the diagnostic information isgiven.|
|b6|AI|Address Indicator|0: Device Address<br>1: Group Address|{0,1}|none|n/a|
|b6|AI|This field shall indicate whether the address contained in the field Addr contains a DALI<br>Device Address(1) or a DALI Group Address(0).|This field shall indicate whether the address contained in the field Addr contains a DALI<br>Device Address(1) or a DALI Group Address(0).|This field shall indicate whether the address contained in the field Addr contains a DALI<br>Device Address(1) or a DALI Group Address(0).|This field shall indicate whether the address contained in the field Addr contains a DALI<br>Device Address(1) or a DALI Group Address(0).|This field shall indicate whether the address contained in the field Addr contains a DALI<br>Device Address(1) or a DALI Group Address(0).|
|b7|RR|Read or Response|0:<br>Response or<br>spontaneous<br>sending<br>1:<br>Read|{0,1}|none|n/a|
|b7|RR|This field shall indicate whether this data is<br>- <br>a response to a read request or a spontaneous sending (output), or<br>- <br>a read request(input)|This field shall indicate whether this data is<br>- <br>a response to a read request or a spontaneous sending (output), or<br>- <br>a read request(input)|This field shall indicate whether this data is<br>- <br>a response to a read request or a spontaneous sending (output), or<br>- <br>a read request(input)|This field shall indicate whether this data is<br>- <br>a response to a read request or a spontaneous sending (output), or<br>- <br>a read request(input)|This field shall indicate whether this data is<br>- <br>a response to a read request or a spontaneous sending (output), or<br>- <br>a read request(input)|
|b8|LF|Lamp Failure|0: no error<br>1: error|{0,1}|none|n/a|
|b8|LF|This shall signal whether or not there is a failure of the connected lamp.|This shall signal whether or not there is a failure of the connected lamp.|This shall signal whether or not there is a failure of the connected lamp.|This shall signal whether or not there is a failure of the connected lamp.|This shall signal whether or not there is a failure of the connected lamp.|
|b9|BF|Ballast Failure|0: no error<br>1: error|{0,1}|none|na|
|b9|BF|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|
|b10|CE|Convertor Error25)|0: no error<br>1: error|{0,1}|none|na|
|b10|CE|This field shall indicate whether or not there is a convertor error.|This field shall indicate whether or not there is a convertor error.|This field shall indicate whether or not there is a convertor error.|This field shall indicate whether or not there is a convertor error.|This field shall indicate whether or not there is a convertor error.|
|b11 to b15|r|These bits are reserved for future use and shall be 0.|These bits are reserved for future use and shall be 0.|These bits are reserved for future use and shall be 0.|These bits are reserved for future use and shall be 0.|These bits are reserved for future use and shall be 0.|

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|BF|LF|Addr|
|---|---|---|

|B|B|U<br>6|
|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Unit:<br>Resol.:<br>PDT:|1 octet: B U<br>2 6<br>1<br>b b b b b b b b<br>7 6 5 4 3 2 1 0<br>BF LF Addr<br>B B U<br>6<br>none<br>none<br>PDT GENERIC 01<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|238.600|DPT_DALI_Diagnostics|Lighting|


-----

This shall signal whether or not there is an internal device failure in the DALI control
gear.

#### 6.9 DPT_Colour_xyY (C_xyY)

Format: 6 octet: U16U16U8r6B2

octet nr. 6MSB 5 4 3 2

field names x-axis y-axis brightness

encoding UUUUUUUU UUUUUUU U UUUUUUU U UUUU U UUU UUUUU UUU

octet nr. 1LSB

field names r r r r r r CB

encoding 0 0 0 0 0 0 B B

Encoding: See below

PDT: PDT_GENERIC_06

**Datapoint Types**

ID: Name: Use:

242.600 DPT_Colour_xyY FB

|Bit|Abbr.|Field name|Encoding|Range|Unit|Resol.|
|---|---|---|---|---|---|---|
|b0 to b5|Addr|Device Address|U6|0 to 63|none|1|
|b0 to b5|Addr|This shall contain the Device Address of the DALI device for which the diagnostic<br>information isgiven.|This shall contain the Device Address of the DALI device for which the diagnostic<br>information isgiven.|This shall contain the Device Address of the DALI device for which the diagnostic<br>information isgiven.|This shall contain the Device Address of the DALI device for which the diagnostic<br>information isgiven.|This shall contain the Device Address of the DALI device for which the diagnostic<br>information isgiven.|
|b6|LF|Lamp Failure|0: no error<br>1: error|{0,1}|none|n/a|
|b6|LF|This shall signal whether or not there is a failure of the connected lamp.|This shall signal whether or not there is a failure of the connected lamp.|This shall signal whether or not there is a failure of the connected lamp.|This shall signal whether or not there is a failure of the connected lamp.|This shall signal whether or not there is a failure of the connected lamp.|
|b7|BF|Ballast Failure|0: no error<br>1: error|{0,1}|none|na|
|b7|BF|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|This shall signal whether or not there is an internal device failure in the DALI control<br>gear.|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|C|B|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|0|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|Col2|6 octet: U U U r B<br>16 16 8 6 2<br>6 5 4 3 2<br>MSB<br>x-axis y-axis brightness<br>UUUUUUUU UUUUUUU U UUUUUUU U UUUU U UUU UUUUU UUU<br>1<br>LSB<br>r r r r r r CB<br>0 0 0 0 0 0 B B<br>See below<br>PDT GENERIC 06<br>_ _|Col4|
|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|242.600|DPTColourxyY|DPTColourxyY|FB|

|Data fields|Description|Col3|Range|Unit|Resol.|
|---|---|---|---|---|---|
|x-axis|x-coordinate of the colour information|x-coordinate of the colour information|0 to 65 535|None.|None.|
|y-axis|y-coordinate of the colour information|y-coordinate of the colour information|0 to 65 535|None.|None.|
|**Additional encoding information**<br>The x – and y – ordinate of the xyY colour scheme have a value between 0 and 1. This value shall be<br>linearly mapped onto the range from 0 to 65 535, by multiplying the unencoded coordinate value by<br>65 535 and and rounding to the earest integer value. For decoding, the inverse operation shall be done.|**Additional encoding information**<br>The x – and y – ordinate of the xyY colour scheme have a value between 0 and 1. This value shall be<br>linearly mapped onto the range from 0 to 65 535, by multiplying the unencoded coordinate value by<br>65 535 and and rounding to the earest integer value. For decoding, the inverse operation shall be done.|**Additional encoding information**<br>The x – and y – ordinate of the xyY colour scheme have a value between 0 and 1. This value shall be<br>linearly mapped onto the range from 0 to 65 535, by multiplying the unencoded coordinate value by<br>65 535 and and rounding to the earest integer value. For decoding, the inverse operation shall be done.|**Additional encoding information**<br>The x – and y – ordinate of the xyY colour scheme have a value between 0 and 1. This value shall be<br>linearly mapped onto the range from 0 to 65 535, by multiplying the unencoded coordinate value by<br>65 535 and and rounding to the earest integer value. For decoding, the inverse operation shall be done.|**Additional encoding information**<br>The x – and y – ordinate of the xyY colour scheme have a value between 0 and 1. This value shall be<br>linearly mapped onto the range from 0 to 65 535, by multiplying the unencoded coordinate value by<br>65 535 and and rounding to the earest integer value. For decoding, the inverse operation shall be done.|**Additional encoding information**<br>The x – and y – ordinate of the xyY colour scheme have a value between 0 and 1. This value shall be<br>linearly mapped onto the range from 0 to 65 535, by multiplying the unencoded coordinate value by<br>65 535 and and rounding to the earest integer value. For decoding, the inverse operation shall be done.|
|Brightness|Brightness|Brightness of the colour|0 % to 100 %|%|None.|
|**Additional encoding information**<br>The brightness shall be encoded as in DPT_Scaling (5.001).|**Additional encoding information**<br>The brightness shall be encoded as in DPT_Scaling (5.001).|**Additional encoding information**<br>The brightness shall be encoded as in DPT_Scaling (5.001).|**Additional encoding information**<br>The brightness shall be encoded as in DPT_Scaling (5.001).|**Additional encoding information**<br>The brightness shall be encoded as in DPT_Scaling (5.001).|**Additional encoding information**<br>The brightness shall be encoded as in DPT_Scaling (5.001).|
|C|This field shall indicate whether the colour infor-<br>mation in the fields x-axis and y-axis is valid or not.|This field shall indicate whether the colour infor-<br>mation in the fields x-axis and y-axis is valid or not.|0: invalid<br>1: valid|None.|None.|
|B|This field shall indicate whether the Brightness<br>information in the field Brightness is valid or not.|This field shall indicate whether the Brightness<br>information in the field Brightness is valid or not.|0: invalid<br>1: valid|None.|None.|


-----

#### 6.10 DPT_Colour_Transition_xyY

Format: 8 octet: U16U16U16U8r6B2

octet nr. 8MSB 7 6 5 4

field names Time Period y-axis x-axis

encoding UUUUUUUU UUUUUUU U UUU UUU U U UUU U UUU U UU UUU UUU

octet nr. 3 2 1LSB

field names x-axis Brightness 0 0 0 0 0 0 C B

encoding 0 0 0 0 0 0 B B UUUUUUUU 0 0 0 0 0 0 B B

Encoding: See below

PDT: PDT_GENERIC_08

**Datapoint Types**

ID: Name: Use:

243.600 DPT_Colour_Transition_xyY FB

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|0|C|B|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|0|B|B|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|0|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|Col2|8 octet: U U U U r B<br>16 16 16 8 6 2<br>8 7 6 5 4<br>MSB<br>Time Period y-axis x-axis<br>UUUUUUUU UUUUUUU U UUU UUU U U UUU U UUU U UU UUU UUU<br>3 2 1<br>LSB<br>x-axis Brightness 0 0 0 0 0 0 C B<br>0 0 0 0 0 0 B B UUUUUUUU 0 0 0 0 0 0 B B<br>See below<br>PDT GENERIC 08<br>_ _|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|243.600|DPTColourTransitionxyY|DPTColourTransitionxyY|FB|

|Field names|Description|Encoding|Unit|Range|
|---|---|---|---|---|
|Time Period|Unsigned time-value for calculating fading time.<br>(see also DPT_TimePeriod100Msec;<br>DPT_ID = 7.004)|0 to 65 535|100 ms|<br>0-6553,5s|
|x-axis|<br>x-coordinate of the colour information|0 to 65 535|None.|None.|
|y-axis|y-coordinate of the colour information|0 to 65 535|None.|None.|
|Brightness|Brightness of the colour|0 % to 100 %|≅ 0,4 %|%|
|C|This field shall indicate whether the colour<br>information in the fields x-axis and y-axis is valid or<br>not.|0: invalid<br>1: valid|None.|None.|
|B|This field shall indicate whether the luminance<br>information in the field Brightness is valid or not.|0: invalid<br>1: valid|None.|None.|


-----

#### 6.11 DPT_Converter_Status

Format: 2 octets: N4B4N2N2N2N2

octet nr. 2MSB 1LSB

field names CM HS FP DP PP CF

encoding N N NN B B B B N N N N N N N N

Unit: None.

Resol. (not applicable)

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name:

244.600 DPT_Converter_Status FB

**Data field** **Description** **Encoding**

CM Converter Mode according 0: Unknown
to the DALI converter state 1: Normal mode active, all OK
machine 2: Inhibit mode active

3: Hardwired inhibit mode active
4: Rest mode active
5: Emergency mode active
6: Extended emergency mode active
7: FT in progress
8: DT in progress
9: PDT in progress
10 to 15: Reserved. Shall be 0.

HS Hardware Status Bit 0: Hardwired Inhibit is active
Bit 1: Hardwired switch is on
Bit 2 and 3: Reserved. Shall be 0.

FP Function Test Pending 0: Unknown
1: No test pending
2: Test pending
3: Reserved

NOTE 29 The information about a running test is
given in the Converter Mode field.
NOTE 30 The status “Unknown” may for instance
occur at power-up.

DP Duration Test Pending Duration Test Pending
0: Unknown
1: No test pending
2: Test pending
3: Reserved
NOTE 31 The information about a running test is
given in the Converter Mode field.
NOTE 32 The status “Unknown” may for instance
occur at power-up.

PP Partial Duration Test 0: Unknown
Pending 1: No test pending

2: Test pending
3: Reserved
NOTE 33 The information about a running test is
given in the Converter Mode field.
NOTE 34 The status “Unknown” may for instance
occur at power-up.

|CM|HS|
|---|---|

|FP|DP|PP|CF|
|---|---|---|---|

|N|N|N|N|B|B|B|B|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Unit:<br>Resol.<br>PDT:|2 octets: N B N N N N<br>4 4 2 2 2 2<br>2 1<br>MSB LSB<br>CM HS FP DP PP CF<br>N N NN B B B B N N N N N N N N<br>None.<br>(not applicable)<br>PDT GENERIC 02<br>_ _|Col3|
|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Usage:|
|244.600|DPT_Converter_Status|FB|

|Data field|Description|Encoding|Range|
|---|---|---|---|
|CM|Converter Mode according<br>to the DALI converter state<br>machine|0:<br>Unknown<br>1:<br>Normal mode active, all OK<br>2:<br>Inhibit mode active<br>3:<br>Hardwired inhibit mode active<br>4:<br>Rest mode active<br>5:<br>Emergency mode active<br>6:<br>Extended emergency mode active<br>7:<br>FT in progress<br>8:<br>DT in progress<br>9:<br>PDT in progress<br>10 to 15: Reserved. Shall be 0.|{0…15}|
|HS|Hardware Status|Bit 0:<br>Hardwired Inhibit is active<br>Bit 1:<br>Hardwired switch is on<br>Bit 2 and 3: Reserved. Shall be 0.|{0,1}|
|FP|Function Test Pending|0:<br>Unknown<br>1:<br>No test pending<br>2:<br>Test pending<br>3:<br>Reserved<br>NOTE 29<br>The information about a running test is<br>given in the Converter Mode field.<br>NOTE 30<br>The status “Unknown” may for instance<br>occur at power-up.|{0…3}|
|DP|Duration Test Pending|Duration Test Pending<br>0:<br>Unknown<br>1:<br>No test pending<br>2:<br>Test pending<br>3:<br>Reserved<br>NOTE 31<br>The information about a running test is<br>given in the Converter Mode field.<br>NOTE 32<br>The status “Unknown” may for instance<br>occur at power-up.|{0…3}|
|PP|Partial Duration Test<br>Pending|<br>0:<br>Unknown<br>1:<br>No test pending<br>2:<br>Test pending<br>3:<br>Reserved<br>NOTE 33<br>The information about a running test is<br>given in the Converter Mode field.<br>NOTE 34<br>The status “Unknown” may for instance<br>occur at power-up.|{0…3}|


-----

|Data field|Description|Encoding|Range|
|---|---|---|---|
|CF|Converter Failure|Indicates that one or more failures were detected.<br>Further information about the type of failure can be<br>found in CTR.<br>0:<br>Unknown<br>1:<br>No failure detected<br>2:<br>Failure detected<br>3:<br>Reserved|{0…3}|


#### 6.12 DPT_Converter_Test_Result

|LTRF|LTRD|
|---|---|

|LTRP|0|0|0|0|
|---|---|---|---|---|

|SF|SD|SP|0|0|
|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|N|N|N|N|r|r|r|r|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|r|r|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|Col9|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Unit:<br>Resol.<br>PDT:|6 octet: N N N N N N N U U<br>4 4 4 2 2 2 2 16 8<br>6 5 4 3 2<br>MSB<br>LTRF LTRD LTRP 0 0 0 0 SF SD SP 0 0 LDTR<br>NNNNNNNN NNNN r r r r NNN N NN r r UUU UUU U U U U UU U U UU<br>1<br>LSB<br>LPDTR<br>UUUUUUUU<br>None.<br>(not applicable)<br>PDT GENERIC 06<br>_ _|Col3|Col4|
|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Usage:|Usage:|
|245.600|DPT_Converter_Test_Result|FB|FB|

|Field<br>names|Description|Encoding|Range|
|---|---|---|---|
|LTRF|Last Test Result FT: Test result of last<br>function test|0:<br>Unknown<br>1:<br>Passed in time<br>2:<br>Passed max delay exceeded<br>3:<br>Failed, test executed in time<br>4:<br>Failed, max delay exceeded<br>5:<br>Test manually stopped<br>6 to 15: Reserved, do not use|{0…15}|
|LTRD|Last Test Result DT: Test result of last<br>duration test|0:<br>Unknown<br>1:<br>Passed in time<br>2:<br>Passed max delay exceeded<br>3:<br>Failed, test executed in time<br>4:<br>Failed, max delay exceeded<br>5:<br>Test manually stopped<br>6 to 15: Reserved, do not use|{0…15}|


-----

|Field<br>names|Description|Encoding|Range|
|---|---|---|---|
|LTRP|Last Test Result PDT: Test result of last<br>partial duration test|Last Test Result PDT<br>Test result of last partial duration test<br>0:<br>Unknown<br>1:<br>Passed in time<br>2:<br>Passed max delay exceeded<br>3:<br>Failed, test executed in time<br>4:<br>Failed, max delay exceeded<br>5:<br>Test manually stopped<br>6 to 15: Reserved, do not use|{0…15}|
|SF|Start Method of Last FT|0:<br>Unknown<br>1:<br>Started automatically<br>2:<br>Started by Gateway<br>3:<br>Reserved<br>Updated after a test has been<br>finished.|{0…3}|
|SD|Start Method of Last DT|Start Method of Last DT<br>0:<br>Unknown<br>1:<br>Started automatically<br>2:<br>Started by Gateway<br>3:<br>Reserved<br>Updated after a test has been<br>finished.|{0…3}|
|SP|Start Method of Last PDT|Start Method of Last PDT<br>0:<br>Unknown<br>1:<br>Started automatically<br>2:<br>Started by Gateway<br>3:<br>Reserved<br>Updated after a test has been<br>finished.|{0…3}|
|LDTR|Contains the battery discharge time as the<br>result of the last successful duration test<br>(DT). According to DALI Cmd. 243|DPT 7.006<br>DPT_TimePeriodMin<br>The max. value of 510 min shall be<br>interpreted as 510 min or longer.|{0…510}|
|LPDTR|Last PDT Result<br>Provides the remaining Battery Charge<br>Level after the last PDT|0:<br>deep discharge point<br>… <br>254:<br>fully charged<br>255:<br>unknown<br>According DALI Cmd. 241|{0…255}|


-----

#### 6.13 DPT_Battery_Info

Format: 2 octets: r5B3U8

octet nr. 2MSB 1LSB

field names 0 0 0 0 0 BS BCL

encoding r r r r r B B B N N N N N N N N

Unit: None.

Resol. (not applicable)

PDT: PDT_GENERIC_02

**Datapoint Types**

ID: Name:

246.600 DPT_Battery_Info FB

|0|0|0|0|0|BS|
|---|---|---|---|---|---|

|r|r|r|r|r|B|B|B|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Unit:<br>Resol.<br>PDT:|2 octets: r B U<br>5 3 8<br>2 1<br>MSB LSB<br>0 0 0 0 0 BS BCL<br>r r r r r B B B N N N N N N N N<br>None.<br>(not applicable)<br>PDT GENERIC 02<br>_ _|Col3|
|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Usage:|
|246.600|DPT_Battery_Info|FB|

|Field names|Description|Encoding|Range|
|---|---|---|---|
|BS|Battery Status|Bit 0:<br>Battery Failure<br>Acc. DALI Cmd. 252<br>Bit 1:<br>Battery Duration Failure<br>Acc. DALI Cmd. 252<br>Bit 2:<br>Battery Fully Charged<br>Bit 3 to 7: Reserved, must be 0|{0, 1}|
|BCL|Battery Charge Level<br>Indicates the recent charge level|0:<br>deep discharge point<br>… <br>254:<br>fully charged<br>255:<br>unknown or not supported<br>According to DALI Cmd. 241|{0…255}|


-----

#### 6.14 DPT_Converter_Test_Info

Format: 12 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B8[B1r7]U16U16

octet nr. 12MSB 11 10 9 8

Day

HourOfD

field names Year Month [DayOfM] OfW 0 0 Minutes

onth ay

eek

encoding N N N N N N N N N N N N r r r r N N N N N N r r U U U U U U U U r r U UU U UU

octet nr. 7 6 5 4 3

field names 0 0 Seconds 0 0 0 0 0 0 0 Time Period1

encoding r r U U U U U U B B B B B B B B B r r r r r r r U U U U U U U U U U U UU U UU

octet nr. 2 1 LSB

field names Time Period2

encoding U U U U U U U U U U U U U U U U

Unit: None.

Resol. (not applicable)

PDT: PDT_GENERIC_12

**Datapoint Types**

ID: Name: Usage:

247.600 DPT_Converter_Test_Info FB

**Field names** **Description** **Encoding, Unit, Range,**
**Resolution**

Octets 12 to 5 Start Date and Time of preceding test execution. see DPT 19.001
TimePeriod1 Time interval automated test see DPT 7.007
According to DALI Cmd. 242
Value “0” indicates that no automated testing is active.

NOTE 35 The highest resolution provided by the converter is
15 minutes. The value of this DP may thus be rounded.

TimePeriod2 Time period of the preceding test execution. see DPT 7.005

|Col1|Col2|Col3|Col4|Month|
|---|---|---|---|---|

|Col1|Col2|Col3|DayOfM<br>onth|
|---|---|---|---|

|Day<br>OfW<br>eek|HourOfD<br>ay|
|---|---|

|0|0|Minutes|
|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|N|N|N|N|r|r|r|r|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|r|r|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|Col9|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|0|0|Seconds|
|---|---|---|

|Col1|F|W|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Col1|0 C|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|r|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Unit:<br>Resol.<br>PDT:|12 octets: U [r U ][r U ][U U ][r U ][r U ]B [B r ]U U<br>8 4 4 3 5 3 5 2 6 2 6 8 1 7 16 16<br>12 11 10 9 8<br>MSB<br>Day<br>DayOfM HourOfD<br>Year Month OfW 0 0 Minutes<br>onth ay<br>eek<br>N N N N N N N N N N N N r r r r N N N N N N r r U U U U U U U U r r U UU U UU<br>7 6 5 4 3<br>0 0 Seconds 0 0 0 0 0 0 0 Time Period1 F W N N N N N S C<br>r r U U U U U U B B B B B B B B B r r r r r r r U U U U U U U U U U U UU U UU<br>2 1<br>LSB<br>Time Period2<br>U U U U U U U U U U U U U U U U<br>None.<br>(not applicable)<br>PDT GENERIC 12<br>_ _|Col3|
|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Usage:|
|247.600|DPT_Converter_Test_Info|FB|

|Field names|Description|Encoding, Unit, Range,<br>Resolution|
|---|---|---|
|Octets 12 to 5|Start Date and Time of preceding test execution.|see DPT 19.001|
|TimePeriod1|Time interval automated test<br>According to DALI Cmd. 242<br>Value “0” indicates that no automated testing is active.<br>NOTE 35<br>The highest resolution provided by the converter is<br>15 minutes. The value of this DP may thus be rounded.|see DPT 7.007|
|TimePeriod2|Timeperiod of thepreceding test execution.|see DPT 7.005|


-----

#### 6.15 DPT_Converter_Info_Fix

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Unit:<br>Resol.<br>PDT:|5 octets: N U U U B<br>8 8 8 8 8<br>5 4 3 2 1<br>MSB LSB<br>InfoValid EmMinLevel EmMaxLevel RatedDur GearFeat<br>NNNNNNNN UU UUUUU U U UUUUUUU U UUUU U UU B B B B B B B B<br>None.<br>(not applicable)<br>PDT GENERIC 05<br>_ _|Col3|
|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Usage:|
|248.600|DPT_Converter_Info_Fix|FB|


According to DALI Cmd. 251

|Field names|Description|Encoding|Range|
|---|---|---|---|
|InfoValid|Information Valid<br>Returns whether the information of the<br>converter is valid and up to date, e.g.,<br>after power-up.|0:<br>Converter is not existing<br>or no information about<br>the converter available<br>1:<br>Converter information is<br>valid<br>2:<br>Converter information is<br>invalid<br>e.g., it is not a type 1 device<br>3 to 255: Reserved. Shall be 0|{0…2}|
|EmMinLevel|Minimum brightness level in case of<br>active emergency lighting.|According to DALI Cmd. 247<br>0 to254: Emergency Min Level<br>255:<br>Unknown (“Mask”)|{0…255}|
|EmMaxLevel|Maximum brightness level in case of<br>active emergency lighting.|According to DALI Cmd. 248<br>0 to 254: Emergency Min Level<br>255:<br>Unknown (“Mask”)|{0…255}|
|RatedDur|Rated Duration<br>Rated duration of the emergency light<br>(“backup time”).|According to DALI Cmd. 249,<br>mapped on DPT 7.006|{0…255}|
|GearFeat|Gear Features<br>Describes the type of control gear.|Bit 0:<br>integral emergency<br>control gear<br>Bit 1:<br>maintained control gear<br>Bit 2:<br>switched maintained<br>control gear<br>Bit 3:<br>auto test capability<br>Bit 4:<br>adjustable emergency<br>level<br>Bit 5:<br>hardwired inhibit<br>supported<br>Bit 6:<br>physical selection<br>supported<br>Bit 7:<br>re-light in rest mode<br>supported<br>According to DALI Cmd. 251|{0, 1}<br>{0, 1}<br>{0, 1}<br>{0, 1}<br>{0, 1}<br>{0, 1}<br>{0, 1}<br>{0, 1}|


-----

#### 6.16 DPT_Brightness_Colour_Temperature_Transition

Format: 4 octet: U16U16U8B8

octet nr. 6MSB 5

field names Time Period

encoding UUUUUUUU UUUUUUUU

octet nr. 4 3 2 1LSB

Absolute Colour- Absolute
field names Masks
Temperature Brightness

encoding UUUUUUUU UUUUUUUU UUUUUUUU r r r r r B B B

Encoding: See below

PDT: PDT_GENERIC_06

**Datapoint Types**

ID: Name: Use:

249.600 DPT_Brightness_Colour_Temperature_Transition FB

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|Col2|4 octet: U U U B<br>16 16 8 8<br>6 5<br>MSB<br>Time Period<br>UUUUUUUU UUUUUUUU<br>4 3 2 1<br>LSB<br>Absolute Colour- Absolute<br>Masks<br>Temperature Brightness<br>UUUUUUUU UUUUUUUU UUUUUUUU r r r r r B B B<br>See below<br>PDT GENERIC 06<br>_ _|Col4|
|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|249.600|DPTBrightnessColourTemperatureTransition|DPTBrightnessColourTemperatureTransition|FB|

|Field<br>names|Description|Encoding|Unit|Range|Resolutio<br>n:|
|---|---|---|---|---|---|
|Time Period|Unsigned time-value for<br>calculating transition time.<br>(see also<br>DPT_TimePeriod100MSec;<br>DPT_ID = 7.004)|Value binary encoded.|ms|100 ms|Time<br>Period|
|Absolute<br>Colour<br>Temperature|Contains the Absolute<br>Colour Temperature|Value binary encoded.|K|0 K to<br>65 535 K|1 K|
|Absolute<br>Brightness|Absolute brightness<br>according DPT_Scaling<br>(5.001).|See 5.001.|%|0 % to<br>100 %|See 5.001.|
|Masks|b7 to b3: reserved. Shall be<br>0.|0.|none|{0}|n.a.|
||b2: validity of the Time<br>Period|0:<br>invalid<br>1:<br>valid|none|{0, 1}|n.a.|
||b1: validity of the Absolute<br>Colour Temperature|0:<br>invalid<br>1:<br>valid|none|{0, 1}|n.a.|
||b0: validity of the absolute<br>brightness|0:<br>invalid<br>1:<br>valid|none|{0, 1}|n.a.|


-----

#### 6.17 DPT_Brightness_Colour_Temperature_Control

Format: 3 octets: r4B1U3r4B1U3B8

octet nr. 3MSB 2 1LSB

field names r r r r Masks

encoding 0 0 0 0 B UUU 0 0 0 0 B UU U 0 0 0 0 0 0 B B

Encoding: See below

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Use:

250.600 DPT_Brightness_Colour_Temperature_Control FB

|r|r|r|r|Col5|C Step Code Colour Temp|
|---|---|---|---|---|---|

|r|r|r|r|C|B Step Code Brigthness|
|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|0|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|Col2|3 octets: r B U r B U B<br>4 1 3 4 1 3 8<br>3 2 1<br>MSB LSB<br>Code Temp Code Brigthness<br>r r r r Masks C Step Colour r r r r C B Step<br>0 0 0 0 B UUU 0 0 0 0 B UU U 0 0 0 0 0 0 B B<br>See below<br>PDT GENERIC 03<br>_ _|Col4|
|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|250.600|DPTBrightnessColourTemperatureControl|DPTBrightnessColourTemperatureControl|FB|

|Field<br>names|Description|Encoding|Unit|Range|Resolution<br>:|
|---|---|---|---|---|---|
|cCT|Increase or decrease the<br>colour temperature.|0: decrease<br>1: increase|None.|{0,1}|n.a.|
|Step Code<br>Colour<br>Temperature|Shall specify the step size<br>increasing or decreasing the<br>colour temperature or the<br>code to break the change.|- 001b to 111b: Step<br>- 000b: Break|None.|1 to 7|n.a.|
|cB|Increase or decrease the<br>brightness.|0: decrease<br>1: increase|None.|{0,1}|n.a.|
|Step Code<br>Brightness|The number of intervals in<br>which the range of 0 % to<br>100 % is subdivided, or the<br>break indication.|- 001b to 111b: Step<br>- 000b: Break|None.|1 to 7|n.a.|
|Masks|b7 to b2: reserved. Shall be<br>0.|0.|None.|{0}|None.|
||b1: validity of the fields CCT<br>and Step Code Colour<br>Temparature.|0: invalid<br>1: valid|None.|{0, 1}|None.|
||b0: validity of the fields CB<br>and Step Code<br>Brightness.|0: invalid<br>1: valid|None.|{0, 1}|None.|


-----

#### 6.18 DPT Colour_RGBW

Format: 6 octet: U8U8U8U8r8r4B4

octet nr. 6MSB 5 4 3 2

field names R G B W reserved

encoding U U U U U U U U UUUUUUU U UU UUUU U U UU UUUU UU 0 0 0 0 0 0 0 0

octet nr. 1LSB

field names

encoding 0 0 0 0 B B B B

Encoding: See below

PDT: PDT_GENERIC_06

**Datapoint Types**

ID: Name: Use:

251.600 DPT_Colour_RGBW FB

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|r|r|mR|mG|mB|mW|
|---|---|---|---|---|---|---|---|

|0|0|0|0|B|B|B|B|
|---|---|---|---|---|---|---|---|

|6.18 DPT|Col2|Colour_RGBW|Col4|
|---|---|---|---|
|Format: <br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Encoding: <br>PDT:|Format: <br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Encoding: <br>PDT:|6 octet: U8U8U8U8r8r4B4 <br>6MSB <br>5 <br>4 <br>3 <br>2 <br>R <br>G <br>B <br>W <br>reserved<br> U U U U U U U U  UUUUUUU U  UU UUUU U U  UU UUUU UU  0 0 0 0 0 0 0 0<br>1LSB <br>r<br>r<br>r<br>r<br>mR<br>mG<br>mB<br>mW<br> 0 0 0 0 B B B B<br> See below<br> PDT_GENERIC_06|6 octet: U8U8U8U8r8r4B4 <br>6MSB <br>5 <br>4 <br>3 <br>2 <br>R <br>G <br>B <br>W <br>reserved<br> U U U U U U U U  UUUUUUU U  UU UUUU U U  UU UUUU UU  0 0 0 0 0 0 0 0<br>1LSB <br>r<br>r<br>r<br>r<br>mR<br>mG<br>mB<br>mW<br> 0 0 0 0 B B B B<br> See below<br> PDT_GENERIC_06|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|251.600|DPTColourRGBW|DPTColourRGBW|FB|

|Field<br>names|Description|Encoding|Unit|Range|Resolution<br>:|
|---|---|---|---|---|---|
|R|Colour Level Red|value binary encoded|%|0 % to 100 %|≅ 0,4 %|
|G|Colour Level Green|value binary encoded|%|0 % to 100 %|≅ 0,4 %|
|B|Colour Level Blue|value binary encoded|%|0 % to 100 %|≅ 0,4 %|
|W|Colour Level White|value binary encoded|%|0 % to 100 %|≅ 0,4 %|
|mR|Shall specify whether the<br>colour information red in the<br>field R is valid or not.|0 = not valid<br>1 = valid|None.|{0,1}|None.|
|mG|Shall specify whether the<br>colour information green in<br>the field G is valid or not.|0 = not valid<br>1 = valid|None.|{0,1}|None.|
|mB|Shall specify whether the<br>colour information blue in<br>the field B is valid or not.|0 = not valid<br>1 = valid|None.|{0,1}|None.|
|mW|Shall specify whether the<br>colour information white in<br>the field W is valid or not.|0 = not valid<br>1 = valid|None.|{0,1}|None.|


-----

#### 6.19 DPT_Relative_Control_RGBW

Format: 5 octet: r4B1U3r4B1U3r4B1U3r4B1U3B8

octet nr.
5MSB 4 3 2 1LSB

field names r r r r r r r r r r r r r r r r Masks

encoding 0 0 0 0 B UUU 0 0 0 0 B UU U 0 0 0 0 B UUU 0 0 0 0 B UUU B B B B B B B B

Encoding: See below

PDT: PDT_GENERIC_05

**Datapoint Types**

ID: Name: Use:

252.600 DPT_Relative_Control_RGBW FB

|r|r|r|r|Col5|c Step Code Colour Red|
|---|---|---|---|---|---|

|r|r|r|r|Col5|c G Step Code Colour Green|
|---|---|---|---|---|---|

|r|r|r|r|c|B Step Code Colour Blue|
|---|---|---|---|---|---|

|r|r|r|r|c|W Step Code Colour White|
|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|Col2|5 octet: r B U r B U r B U r B U B<br>4 1 3 4 1 3 4 1 3 4 1 3 8<br>5 4 3 2 1<br>MSB LSB<br>Green White<br>Red Blue<br>Code Code Code Code<br>r r r r r r r r r r r r r r r r Masks<br>Colour Colour Colour Colour<br>Step Step Step Step<br>G B W<br>c c c c<br>0 0 0 0 B UUU 0 0 0 0 B UU U 0 0 0 0 B UUU 0 0 0 0 B UUU B B B B B B B B<br>See below<br>PDT GENERIC 05<br>_ _|Col4|
|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|252.600|DPTRelativeControlRGBW|DPTRelativeControlRGBW|FB|

|Field names|Description|Encoding|Unit|Range|Resolution|
|---|---|---|---|---|---|
|cR|Shall specify whether the<br>colour component red shall<br>be increased or decreased.|0: decrease<br>1: increase|None.|{0,1}|None.|
|Step Code<br>Colour Red|Shall specify the fading step<br>size or to the code to stop<br>the fading of the colour red|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|
|cG|Shall specify whether the<br>colour component green<br>shall be increased or<br>decreased.|0: decrease<br>1: increase|None.|{0,1}|None.|
|Step Code<br>Colour Green|Shall specify the fading step<br>size or to the code to stop<br>the fading of the colour<br>green|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|
|cB|Shall specify whether the<br>colour component blue shall<br>be increased or decreased.|0: decrease<br>1: increase|None.|{0,1}|None.|
|Step Code<br>Colour Blue|Shall specify the fading step<br>size or to the code to stop<br>the fading of the colour blue|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|
|CW|Shall specify whether the<br>colour component white shall<br>be increased or decreased.|0: decrease<br>1: increase|None.|{0,1}|None.|
|Step Code<br>Colour White|Shall specify the fading step<br>size or to the code to stop<br>the fading of the colour white|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|
|Masks|b7 to b4: reserved. Shall be<br>0.|0.|None.|{0}|None.|
||b3: validity of the fields CR<br>and Step Code Colour<br>Red.|0:<br>invalid<br>1:<br>valid|None.|{0, 1}|None.|
||b2: validity of the fields CG<br>and Step Code Colour<br>Green.|0:<br>invalid<br>1:<br>valid|None.|{0, 1}|None.|


-----

|Field names|Description|Encoding|Unit|Range|Resolution|
|---|---|---|---|---|---|
||b1: validity of the fields CB<br>and Step Code Colour<br>Blue.|0:<br>invalid<br>1:<br>valid|None.|{0, 1}|None.|
||b0: validity of the fields CW<br>and Step Code Colour<br>White.|0:<br>invalid<br>1:<br>valid|None.|{0, 1}|None.|


#### 6.20 DPT Relative_Control_xyY

Format: 4 octet: r4B1U3r4B1U3r4B1U3B8

octet nr.
4MSB 3 2 1LSB

field names r r r r r r r r r r r r Masks

encoding 0 0 0 0 B UUU 0 0 0 0 B UU U 0 0 0 0 B UUU 0 0 0 0 0 B B B

Encoding: See below

PDT: PDT_GENERIC_04

**Datapoint Types**

ID: Name: Use:

253.600 DPT_Relative_Control_xyY FB

|r|r|r|r|CS|Step Code Saturration|
|---|---|---|---|---|---|

|r|r|r|r|CC|Step Code Colour|
|---|---|---|---|---|---|

|r|r|r|r|cB|Step Code Brigthness|
|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|B|B|B|
|---|---|---|---|---|---|---|---|

|6.20 DPT|Col2|Relative_Control_xyY|Col4|
|---|---|---|---|
|Format: <br>octet nr.<br>field names<br>encoding<br>Encoding: <br>PDT:|Format: <br>octet nr.<br>field names<br>encoding<br>Encoding: <br>PDT:|4 octet: r4B1U3r4B1U3r4B1U3B8 <br>4MSB <br>3 <br>2 <br>1LSB <br>r r r r<br>CS <br>Step Code Saturration<br> r r r r<br>CC <br>Step Code Colour<br>r r r r<br>cB <br>Step Code<br>Brigthness<br>Masks<br>0 0 0 0 B UUU  0 0 0 0 B UU U  0 0 0 0 B UUU  0 0 0 0 0 B B B<br>See below<br>PDT_GENERIC_04|4 octet: r4B1U3r4B1U3r4B1U3B8 <br>4MSB <br>3 <br>2 <br>1LSB <br>r r r r<br>CS <br>Step Code Saturration<br> r r r r<br>CC <br>Step Code Colour<br>r r r r<br>cB <br>Step Code<br>Brigthness<br>Masks<br>0 0 0 0 B UUU  0 0 0 0 B UU U  0 0 0 0 B UUU  0 0 0 0 0 B B B<br>See below<br>PDT_GENERIC_04|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|253.600|DPTRelativeControlxyY|DPTRelativeControlxyY|FB|

|Field names|Description|Encoding|Unit|Range|Resolution|
|---|---|---|---|---|---|
|cS|Shall specify whether the<br>saturation of the colour shall<br>be increased or decreased.|0:<br>decrease distance to<br>white point<br>1:<br>increase distance to<br>whitepoint|None.|{0,1}|None.|
|Step Code<br>Saturation|Shall specify the fading step<br>size or to the code to stop the<br>fading of the saturation|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|
|cC|Shall specify whether the<br>colour shall be increased or<br>decreased.|0:<br>decrease colour wave<br>length<br>1:<br>increase colour wave<br>length|<br>None.|{0,1}|None.|
|Step Code<br>Colour|Shall specify the fading step<br>size or to the code to stop the<br>fading of the colour|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|
|cB|Shall specify whether the<br>brightness shall be increased<br>or decreased.|0:<br>decrease brightness<br>1:<br>increase brightness|None.|{0,1}|None.|
|Step Code<br>Brightness|Shall specify the fading step<br>size or to the code to stop the<br>fading of the brightness|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|
|Masks|b7 to b3: reserved. Shall be 0.|0.|None.|{0}|None.|
||b2:<br>validity of the fields Cs<br>and Step Code Saturation.|0:<br>invalid<br>1:<br>valid|None.|{0, 1}|None.|


-----

|Field names|Description|Encoding|Unit|Range|Resolution|
|---|---|---|---|---|---|
|<br>|b1:<br>validity of the fields Cc<br>and Step Code Colour.|0:<br>invalid<br>1:<br>valid|None.|{0, 1}|None.|
|<br>|b0:<br>validity of the fields CB<br>and Step Code Brightness.|<br>0:<br>invalid<br>1:<br>valid|None.|{0, 1}|None.|


NOTE 36 The mask bits shall allow indicating the validity of the further fields. This shall allow that one
component can be changed without influencing the value or possible ongoing transition of another component.
EXAMPLE 24 If a receiving actuator is currently dimming up or down, then this DPT allows indicating whether that
ongoing brightness transition should be influenced (stopped or get a new set_value) or not.

#### 6.21 DPT_Relative_Control_RGB

Format: 3 octets: r4B1U3r4B1U3r4B1U3

octet nr. 3MSB 2 1LSB

field names r r r r r r r r r r r r

encoding 0 0 0 0 B UUU 0 0 0 0 B UU U 0 0 0 0 B UU U

Encoding: See below

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Use:

254.600 DPT_Relative_Control_RGB FB

|r|r|r|r|c|R Step Code Colour Red|Col7|r|r|r|r|Col12|c G Step Code Colour Green|
|---|---|---|---|---|---|---|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|0|0|B|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|c|B Step Code Colour Blue|Col7|Col8|
|---|---|---|---|---|---|---|---|
|||||||||
|0|0|0|0|B|U|U|U|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|Col2|3 octets: r B U r B U r B U<br>4 1 3 4 1 3 4 1 3<br>3 2 1<br>MSB LSB<br>Green<br>Code Red Code Code Blue<br>r r r r r r r r r r r r R Colour G B Colour<br>c Step c Step Colour c Step<br>0 0 0 0 B UUU 0 0 0 0 B UU U 0 0 0 0 B UU U<br>See below<br>PDT GENERIC 03<br>_ _|Col4|
|---|---|---|---|
|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|**Datapoint Types**|
|ID:|Name:|Name:|Use:|
|254.600|DPTRelativeControlRGB|DPTRelativeControlRGB|FB|

|Field names|Description|Encoding|Unit|Range|Resolution|
|---|---|---|---|---|---|
|cR|Shall specify whether the<br>colour component red<br>shall be increased or<br>decreased.|0: decrease<br>1: increase|None.|{0,1}|None.|
|Step Code<br>Colour Red|Shall specify the fading<br>step size or to the code to<br>stop the fading of the<br>colour red|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|
|cG|Shall specify whether the<br>colour component green<br>shall be increased or<br>decreased.|0: decrease<br>1: increase|None.|{0,1}|None.|
|Step Code<br>Colour Green|Shall specify the fading<br>step size or to the code to<br>stop the fading of the<br>colourgreen|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|
|cB|Shall specify whether the<br>colour component blue<br>shall be increased or<br>decreased.|0: decrease<br>1: increase|None.|{0,1}|None.|
|Step Code<br>Colour Blue|Shall specify the fading<br>step size or to the code to<br>stop the fading of the<br>colour blue|001b to 111b: Step<br>000b:<br>stop fading|None.|000b to<br>111b|None.|


-----

NOTE 37 This DPT does not foresee mask bits to indicate the validity of any field. This keeps the RGB control
simple for the sensor and the actuator. If it is wanted to mark any field as invalid, then DPT_Relative_Control_RGBW
(252.600) can be used and the fields CW and Step Code White can be marked as invalid.

#### 6.22 DPT_Converter_Info (DPT_CI)

Format: 7 octets: N8U16U16U8U8

octet nr. 7 MSB 6 5 4 3

field names InfoValid TimePeriod1 TimePeriod2

encoding N NNNNNNN UU UUUUUU U UUUUUU U U U UUU UUU UUU UU UUU

octet nr. 2 1LSB

field names EmLevel DALI_SA

encoding U UUUUUUU UU UUUUUU

PDT: PDT_GENERIC_07

**Datapoint Types**

ID: Name: Usage:

272.600 DPT_Converter_Info FB

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|7 octets: N U U U U<br>8 16 16 8 8<br>7 6 5 4 3<br>MSB<br>InfoValid TimePeriod1 TimePeriod2<br>N NNNNNNN UU UUUUUU U UUUUUU U U U UUU UUU UUU UU UUU<br>2 1<br>LSB<br>EmLevel DALI SA<br>_<br>U UUUUUUU UU UUUUUU<br>PDT GENERIC 07<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|ID:|Name:|Usage:|
|272.600|272.600|DPT_Converter_Info|FB|

|Field names|Description|Encoding|Unit|Range|Resol:|
|---|---|---|---|---|---|
|InfoValid|Information Valid<br>Returns whether the<br>information of the converter<br>is valid and up to date, e.g.,<br>after power-up.|0: Converter is not existing<br>or no information about<br>the converter available<br>1: Converter information is<br>valid<br>2: Converter information is<br>invalid<br>e.g., it is not a type 1 device<br>3 to 255: Reserved; shall<br>not be used.|None|0 to 2|n/a|
|TimePeriod1|Lamp Emergency Time<br>Accumulated lamp<br>functioning time with the<br>battery as power source.|DPT 7.007<br>According to DALI Cmd.<br>244|h|0 h to<br>65 535 h|1 h|
|TimePeriod2|Lamp Total Operation Time<br>Accumulated lamp total<br>functioning time.|DPT 7.007<br>According to DALI Cmd.<br>245|h|0 h to<br>65 535 h|1 h|
|EmLevel|Emergency Level|0 to 254: Emergency<br>Level<br>255: Emergency<br>Level unknown<br>According to DALI Cmd.<br>246|None.|0 to 255|n/a|
|DALI_SA|DALI Short Address|0 to 63: DALI Short<br>Address<br> 64 to 255: not allowed|None.|0 to 63|n/a|


-----

### 7 Datapoint Types for shutters and blinds

#### 7.1 Datapoint Types N8

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|1 octet: N<br>8<br>1<br>field1<br>N N N N N N N N<br>Encoding absolute value N = [0 to 255]<br>none<br>none<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|20.801|DPT_SABExcept-<br>Behaviour|_field1_ = SABExceptBehaviour<br>0 <br>: up<br>1 <br>: down<br>2 <br>: no change<br>3 <br>: value according to<br>additional parameter<br>4 <br>: stop<br>5 to 255 : reserved|[0 to 4]|Shutter &<br>Blinds|
|20.802|DPT_SABBehaviour_Lock<br>_Unlock|_field1_ = SABBehaviour_Lock_Unlock <br>0 <br>: up<br>1 <br>: down<br>2 <br>: no change<br>3 <br>: value according to<br>additional parameter<br>4 <br>: stop<br>5<br>: updated value<br>6<br>: value before locking<br>7 to 255 : reserved|[0 to 6]|Shutter &<br>Blinds|
|20.803|DPT_SSSBMode|_field1_<br>1 <br>: one push button/binary<br>input;<br>_MoveUpDown inverts on each_<br>_transmission_<br>_=> poor usability, not recommended_ <br>2 <br>: one push button/binary<br>input,<br>MoveUp / StepUp message sent<br>3 <br>: one push button/binary<br>input,<br>MoveDown / StepDown message sent<br>4 <br>:  two push buttons/binary<br>inputs mode<br>5 to 255 : reserved, shall not be<br>used.|[1 to 4]|Shutter &<br>Blinds|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.804|DPT_BlindsControlMode|_field1_<br>0:<br>Automatic Control<br>1:<br>Manual Control<br>2 to 255: reserved, shall not be used.|[0 to 1]|Shutter &<br>Blinds|


#### 7.2 Datapoint Types U8U8B8

##### 7.2.1 Datapoint Type “Combined Position”

Format: 2 octets: U8U8B8

octet nr. 3 (MSB) 2 1 (LSB)

field names HeightPosition SlatsPosition Attributes

encoding UUUUUUUU UUUUUUUU 000000BB

PDT: PDT_ENUM8 (alt: PDT_UNSIGNED_CHAR)

**Datapoint Types**

ID: Name: Usage:

240.800 DPT_CombinedPosition Shutter & Blinds

**Data fields** **Description** **Unit / Range**

HeightPosition Height position of the blinds in percent U8, 0 % to 100 %
~ 0,4% resolution

SlatsPosition Angle position of the slats in percent U8, 0 % to 100 %
~ 0,4% resolution

Attributes Bit # Bitset B8

 - ValidHeightPos 0 Validity of field HeightPosition: true / false
0: false ⇒ value of HeightPosition is void
1: true ⇒ value of HeightPosition is valid

 - ValidSlatsPos 1 Validity of field SlatsPosition: true / false
0: false ⇒ value of SlatsPosition is void
1: true ⇒ value of SlatsPosition is valid

 - reserved 2 to 7 reserved, shall be 0. Reserved bits shall be set to 0

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|2 octets: U U B<br>8 8 8<br>3 (MSB) 2 1 (LSB)<br>HeightPosition SlatsPosition Attributes<br>UUUUUUUU UUUUUUUU 000000BB<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|
|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Usage:|
|240.800|DPT_CombinedPosition|Shutter & Blinds|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|HeightPosition|Height position of the blinds in percent|Height position of the blinds in percent|U8,0 % to 100 %<br> ~ 0,4% resolution|
|SlatsPosition|Angle position of the slats in percent|Angle position of the slats in percent|U8,0 % to 100 %<br> ~ 0,4% resolution|
|Attributes|Bit #||Bitset B8|
|- ValidHeightPos|0|Validity of field HeightPosition:<br>0: false⇒ value of HeightPosition is void<br>1:true ⇒ value of HeightPosition is valid|<br> <br>true / false|
|- ValidSlatsPos|1|Validity of field SlatsPosition:<br>0: false⇒ value of SlatsPosition is void<br>1: true⇒ value of SlatsPosition is valid|true / false|
|- reserved|2 to 7|reserved, shall be 0.|Reserved bits shall be set to 0|


-----

#### 7.3 Datapoint Types U8U8B16

 7.4 Status Shutter & Sunblind Actuator

Format: 4 octets: U8U8B16

octet nr. 4 (MSB) 3 2 1 (LSB)

field names HeightPos SlatsPos p o n m l k j i h g f e d c b a

encoding u u u u u u u u u u u u u u u u B B B B B B B B B B B B B B B B

PDT: PDT_GENERIC4

**Datapoint Types**

ID: Name: Usage:

241.800 DPT_StatusSAB Shutter & Blinds

**Data fields** **Description** **Unit / Range**

HeightPosition Height position of the blinds in percent 0 % to 100 %
~0,4 % resolution
SlatsPosition Angle position of the slats in percent 0 % to 100 %
~0,4 % resolution
Attributes Bit No. Bitset

 - UpperEndPos 0 (a) Upper end position reached 0: false
1: true

 - LowerEndPos 1 (b) Lower end position reached 0: false
1: true

 - LowerPredefPos 2 (c) Lower predefined position reached 0: false

typically height 100 %, slats- 1: true
angle < 100 %

 - DriveState 3 (d) Indicates whether the target position is 0: drive is moving

reached or the drive is moving 1: target position is reached

 - TargetHPosRestrict 4 (e) Restriction of target height position. 0: false

Position can not be reached 1: true

 - TargetSPosRestrict 5 (e) Restriction of target slats position. 0: false

Position can not be reached 1: true

 - WeatherAlarm 6 (g) At least one of the inputs Wind-/Rain- 0: false

/Frost-Alarm is ‘in alarm’ 1: true

 - Forced 7 (h) up/down position is forced by 0: false

MoveUpDownForced input 1: true

 - Locked 8 (i) movement is locked, e.g. by 0: false

DeviceLocked input 1: true

 - LocalOverride 9 (j) true ⇒ actuator setvalue is locally 0: false

overridden, e.g. via a local user interface 1: true

 - Failure 10 (k) General failure of the actuator or the drive 0: false

1: true

 - reserved 11 (l) shall be 0. 0

 - reserved 12(m) shall be 0. 0

 - reserved 13 (n) shall be 0. 0

 - ValidHeightPos 14 (o) Validity of field HeightPosition 0: false
1: true

 - ValidSlatsPos 15 (p) Validity of field SlatsPosition 0: false
1: true

NOTE 38 The definition of DPT_StatusSAB reuses parts of the non-standard “Griesser-Statusobject”.

|p|o|n|m|l|k|j|i|
|---|---|---|---|---|---|---|---|

|h|g|f|e|d|c|b|a|
|---|---|---|---|---|---|---|---|

|u|u|u|u|u|u|u|u|
|---|---|---|---|---|---|---|---|

|u|u|u|u|u|u|u|u|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|4 octets: U U B<br>8 8 16<br>4 (MSB) 3 2 1 (LSB)<br>HeightPos SlatsPos p o n m l k j i h g f e d c b a<br>u u u u u u u u u u u u u u u u B B B B B B B B B B B B B B B B|Col3|
|---|---|---|
|PDT:|PDT_GENERIC4|PDT_GENERIC4|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Usage:|
|241.800|DPT_StatusSAB|Shutter & Blinds|

|Data fields|Description|Col3|Unit / Range|
|---|---|---|---|
|HeightPosition|Height position of the blinds in percent|Height position of the blinds in percent|0 % to 100 %<br>~0,4 % resolution|
|SlatsPosition|Angle position of the slats in percent|Angle position of the slats in percent|0 % to 100 %<br>~0,4 % resolution|
|Attributes|Bit No.||Bitset|
|- UpperEndPos|0 (a)|Upper end position reached|0: false<br>1: true|
|- LowerEndPos|1 (b)|Lower end position reached|0: false<br>1: true|
|- LowerPredefPos|2 (c)|Lower predefined position reached<br>typically height 100 %, slats-<br>angle< 100 %|0: false<br>1: true|
|- DriveState|3 (d)|Indicates whether the target position is<br>reached or the drive is moving|0: drive is moving<br>1: target position is reached|
|- TargetHPosRestrict|4 (e)|Restriction of target height position.<br>Position can not be reached|0: false<br>1: true|
|- TargetSPosRestrict|5 (e)|Restriction of target slats position.<br>Position can not be reached|0: false<br>1: true|
|- WeatherAlarm|6 (g)|At least one of the inputs Wind-/Rain-<br>/Frost-Alarm is‘in alarm’|0: false<br>1: true|
|- Forced|7 (h)|up/down position is forced by<br>MoveUpDownForced input|0: false<br>1: true|
|- Locked|8 (i)|movement is locked, e.g. by<br>DeviceLocked input|0: false<br>1: true|
|- LocalOverride|9 (j)|true⇒ actuator setvalue is locally<br>overridden, e.g. via a local user interface|0: false<br>1: true|
|- Failure|10 (k)|General failure of the actuator or the drive|0: false<br>1: true|
|- reserved|11 (l)|shall be 0.|0|
|- reserved|12(m)|shall be 0.|0|
|- reserved|13 (n)|shall be 0.|0|
|- ValidHeightPos|14 (o)|Validity of field HeightPosition|0: false<br>1: true|
|- ValidSlatsPos|15 (p)|Validity of field SlatsPosition|0: false<br>1:true|


-----

### 8 Datapoint Types for System

#### 8.1 Datapoint Types N8

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|1 octet: N<br>8<br>1<br>field1<br>N N N N N N N N<br>Encoding absolute value N = [0 … 255]<br>none<br>none<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|20.1000|DPT_CommMode|_field1_ = CommMode<br>_Reference: DPT_CommMode shall be_<br>_encoded according to the_<br>_specification of PID_COMM_MODE_<br>_in_[01]_. _|See<br>reference|System|
|20.1001|DPT_AddInfoTypes|<br>_field1_ = AddInfoType<br>00h<br>= reserved<br>01h<br>= PL medium Domain<br>Address<br>02h<br>= RF Control Octet and<br>Serial Number or DoA<br>03h<br>= Busmonitor Error Flags<br>04h<br>= Relative timestamp<br>05h<br>= Time delay<br>06h<br>= Extended Relative<br>Timestamp<br>07h<br>= BiBat information<br>08h … FEh = reserved, shall not be<br>used<br>FFh<br>= reserved for future<br>system extensions<br>(ESC code)||System|
|20.1002|DPT_RF_ModeSelect|_field1_ = RF_ModeSelect<br>00h<br>= asynchronous<br>01h<br>= asynchronous + BiBat<br>Master<br>02h<br>= asynchronous + BiBat<br>Slave<br>03h … FFh = reserved, shall not be<br>used|[00h … 02h]|System|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.1003|DPT_RF_FilterSelect|_field1_ = RF_FilterSelect<br>00h<br>= no filtering, all<br>supported received<br>frames shall be passed<br>to the cEMI client<br>using L_Data.ind<br>01h<br>= filtering by Domain<br>Address<br>02h<br>= filtering by KNX Serial<br>Number table<br>03h<br>= filtering by Domain<br>Address and by Serial<br>number table<br>04h … FFh = reserved, shall not be<br>used|<br>[00h … 03h]|System|
|20.1004|DPT_Medium|_field1_ = KNX Medium<br>0 <br>: KNX TP1<br>1 <br>: KNX PL110<br>2 <br>: KNX RF<br>3 <br>: reserved. Shall not be used.<br>4 <br>: reserved. Shall not be used.<br>5 <br>: KNX IP<br>63 to 255 : not used; reserved|{0, 1, 2, 5}|FB|
||APPLICATIONS: MEDIUM TYPE OF A CONNECTION INCOUPLERMODEL2.0.|APPLICATIONS: MEDIUM TYPE OF A CONNECTION INCOUPLERMODEL2.0.|APPLICATIONS: MEDIUM TYPE OF A CONNECTION INCOUPLERMODEL2.0.|APPLICATIONS: MEDIUM TYPE OF A CONNECTION INCOUPLERMODEL2.0.|
|20.1005|DPT_PB_Function|_field1_ = PB function<br>(Action1 / Action2: Action 1 on first<br>interaction e.g., press, and Action 2 on<br>second interaction e.g., release)<br>0 <br>: reserved<br>1 <br>: default function<br>2 <br>: ON<br>3 <br>: OFF<br>4 <br>: Toggle<br>5 <br>: Dimming Up Down<br>6 <br>: Dimming Up<br>7 <br>: Dimming Down<br>8 <br>: On / Off<br>9 <br>: Timed On Off<br>10<br>: Forced On<br>11<br>: Forced Off<br>12<br>: Shutter Up (for PB)<br>13<br>: Shutter Down (for (PB)<br>14<br>: Shutter Up Down (for PB)<br>15<br>: reserved<br>16<br>: Forced Up<br>17<br>: Forced Down<br>18<br>: Wind Alarm<br>19<br>: Rain Alarm<br>20<br>: HVAC Mode Comfort /<br>Economy<br>21<br>: HVAC Mode Comfort / -<br>22<br>: HVAC Mode Economy / -<br>23<br>: HVAC Mode Building<br>protection / HVAC mode<br>auto<br>24<br>: Shutter Stop|[1 … 55]|System|


-----

APPLICATIONS: CONFIGURATION OF ACTION OF PUSH BUTTON IN PB-MODE.

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|||25<br>: Timed Comfort Standby<br>26<br>: Forced Comfort<br>27<br>: Forced Building protection<br>28<br>: Scene 1<br>29<br>: Scene 2<br>30<br>: Scene 3<br>31<br>: Scene 4<br>32<br>: Scene 5<br>33<br>: Scene 6<br>34<br>: Scene 7<br>35<br>: Scene 8<br>36<br>: Absolute dimming 25 %<br>37<br>: Absolute dimming 50 %<br>38<br>: Absolute dimming 75 %<br>39<br>: Absolute dimming 100 %<br>40<br>: Shutter Up / - (for switch)<br>41<br>: Shutter Down / - (for switch)<br>42<br>: Shutter Up  / Down (for<br>switch)<br>43<br>: Shutter Down / Up (for<br>switch)<br>44<br>: Light sensor<br>45<br>: System clock<br>46<br>: Battery status<br>47<br>: HVAC Mode Standby / -<br>48<br>: HVAC Mode Auto / -<br>49<br>: HVAC Mode Comfort /<br>Standby<br>50<br>: HVAC Mode Building<br>protection  / -<br>51<br>: Timed toggle<br>52<br>: Dimming Absolute switch<br>53<br>: Scene switch<br>54<br>: Smoke alarm<br>55<br>: Sub detector<br>56 to 255 : reserved|||
||APPLICATIONS: <br>CONFIGURATION OF ACTION OF PUSH BUTTON INPB-MODE.|APPLICATIONS: <br>CONFIGURATION OF ACTION OF PUSH BUTTON INPB-MODE.|APPLICATIONS: <br>CONFIGURATION OF ACTION OF PUSH BUTTON INPB-MODE.|APPLICATIONS: <br>CONFIGURATION OF ACTION OF PUSH BUTTON INPB-MODE.|


-----

#### 8.2 Datapoint Types B8

##### 8.2.1 Datapoint Type “RF Communication Mode Info”

Format: 1 octet: B8

octet nr. 1

field names RFCommInfo

b7b6b5b4b3b2b1b0

encoding b b b b b b b b

Encoding: See below

Range:: See below

Unit: none

Resol.: (not applicable)

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding, range: Use:

21.1000 DPT_RF_ModeInfo See below System

**Bit** **Data fields** **Description** **Encoding** **Unit**

b0 Asynchronous asynchronous mode support (0 = value not allowed) none {0,1}
1 = true

b1 BiBat Master BiBat Master mode supported 0 = false none {0,1}
1 = true

b2 BiBat Slave BiBat Slave mode supported 0 = false none {0,1}
1 = true

b3…b7 reserved reserved, set to 0 not applicable n.a. n.a.

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range::<br>Unit:<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>RFCommInfo<br>bbbbbbbb<br>7 6 5 4 3 2 1 0<br>b b b b b b b b<br>See below<br>See below<br>none<br>(not applicable)<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|
|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding, range:|Use:|
|21.1000|DPT_RF_ModeInfo|See below|System|

|Bit|Data fields|Description|Encoding|Unit|Range|
|---|---|---|---|---|---|
|b0|Asynchronous|asynchronous mode support|(0 = value not allowed)<br>1 = true|none|{0,1}|
|b1|BiBat Master|BiBat Master mode supported|0 = false<br>1 = true|none|{0,1}|
|b2|BiBat Slave|BiBat Slave mode supported|0 = false<br>1 = true|none|{0,1}|
|b3…b7|reserved|reserved, set to 0|not applicable|n.a.|n.a.|


-----

##### 8.2.2 Datapoint Type “cEMI Server Supported RF Filtering Modes”

Format: 1 octet: B8

octet nr. 1

field names RFFilterInfo

b7b6b5b4b3b2b1b0

encoding b b b b b b b b

Encoding: See below

Range:: See below

Unit: none

Resol.: (not applicable)

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding, range: Use:

21.1001 DPT_RF_FilterInfo See below System

**Bit** **Data fields** **Description** **Encoding** **Unit**

b0 DoA Filtering by Domain Address 0 = false none {0,1}
supported 1 = true

b1 KNX SN Filtering by KNX Serial Number 0 = false none {0,1}
supported 1 = true

b2 DoA and KNX Filtering by Domain Address 0 = false none {0,1}
SN and KNX Serial Number 1 = true

supported

b3…b7 reserved reserved, set to 0 not applicable n.a. n.a.

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range::<br>Unit:<br>Resol.:<br>PDT:|1 octet: B<br>8<br>1<br>RFFilterInfo<br>bbbbbbbb<br>7 6 5 4 3 2 1 0<br>b b b b b b b b<br>See below<br>See below<br>none<br>(not applicable)<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|
|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding, range:|Use:|
|21.1001|DPT_RF_FilterInfo|See below|System|

|Bit|Data fields|Description|Encoding|Unit|Range|
|---|---|---|---|---|---|
|b0|DoA|Filtering by Domain Address<br>supported|0 = false<br>1 = true|none|{0,1}|
|b1|KNX SN|Filtering by KNX Serial Number<br>supported|0 = false<br>1 = true|none|{0,1}|
|b2|DoA and KNX<br>SN|Filtering by Domain Address<br>and KNX Serial Number<br>supported|0 = false<br>1 = true|none|{0,1}|
|b3…b7|reserved|reserved, set to 0|not applicable|n.a.|n.a.|


-----

##### 8.2.3 Datapoint Type “Security Report”

Format: 1 octet: B8

octet nr. 1

field names Security Report

b7 b6 b5 b4 b3 b2 b1 b0

encoding b b b b b b b b

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding, range: Use:

21.1002 DPT_Security_Report See below System

APPLICATIONS: KNX DATA SECURITY: REPORT SECURITY FAILURES.

**Bit** **Description** **Encoding** **Unit** **Range**

b0 Security Failure = There is no Security Failure. none {0,1}
This field shall indicate whether there = There is a Security Failure
has been a security failure since the
previous transmission or not.

b1 to b7 reserved none 0

##### 8.2.4 Datapoint Type “Channel Activation for 8 channels”

Format: 1 octet: B8

octet nr. 1

field names Channel Activation

b7 b6 b5 b4 b3 b2 b1 b0

encoding b b b b b b b b

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding, range: Use:

21.1010 DPT_Channel_Activation_8 See below System

**Bit** **Data fields** **Description** **Encoding** **Unit** **Range**

bn Activation state Indicates the acti- 0 = The visual effect of channel none {0,1}

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|1 octet: B<br>8<br>1<br>Security Report<br>b b b b b b b b<br>7 6 5 4 3 2 1 0<br>b b b b b b b b<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|
|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding, range:|Use:|
|21.1002|DPT_Security_Report|See below|System|
|21.1002|<br>APPLICATIONS: KNX DATASECURITY: REPORT SECURITY FAILURES.|<br>APPLICATIONS: KNX DATASECURITY: REPORT SECURITY FAILURES.|<br>APPLICATIONS: KNX DATASECURITY: REPORT SECURITY FAILURES.|

|Bit|Description|Encoding|Unit|Range|
|---|---|---|---|---|
|b0|Security Failure<br>This field shall indicate whether there<br>has been a security failure since the<br>previous transmission or not.|<br>= There is no Security Failure.<br>= There is a Security Failure|none|{0,1}|
|b1 to b7|reserved||none|0|

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|1 octet: B<br>8<br>1<br>Channel Activation<br>b b b b b b b b<br>7 6 5 4 3 2 1 0<br>b b b b b b b b<br>PDT BITSET8 (alt: PDT GENERIC 01)<br>_ _ _|Col3|Col4|
|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding, range:|Use:|
|21.1010|DPT_Channel_Activation_8|See below|System|

|Bit|Data fields|Description|Encoding|Unit|
|---|---|---|---|---|
|bn <br>(n = 0 to 7)|Activation state<br>of channel n+1.|Indicates the acti-<br>vation state of<br>this channel n+1|0 = The visual effect of channel<br>n+1 is inactive.<br>1 = The visual effect of channel<br>n+1 is active.|none|


-----

#### 8.3 Datatype B16

##### 8.3.1 Datapoint Type “Media”

Format: 2 octets: B16

octet nr. 2 MSB 1 LSB

field names Media

b15 b14 b13 b12 b11 b10 b9 b8 b7 b6 b5 b4 b3 b2 b1 b0

encoding b b b b b b b b b b b b b b b b

Unit: none

Resol.: not applicable

PDT: PDT_BITSET16 (alt: PDT_GENERIC_02)

**Datapoint Types**

ID: Name: Bit Name: Meaning Coding: Use:

22.1000 DPT_Media b0 (reserved) reserved 0 System

b1 TP1 TP1 is supported 0 = false
1 = true

b2 PL110 PL110 is supported 0 = false
1 = true

b3 (reserved) reserved 0

b4 RF RF is supported 0 = false
1 = true

b5 KNX IP KNX IP is supported 0 = false
1 = true

b6 … b15 none reserved default 0

##### 8.3.2 Datapoint Type “Channel Activation for 16 channels”

Format: 2 octets: B16

octet nr. 2 MSB 1 LSB

field names Channel Activation

b15 b14 b13 b12 b11 b10 b9 b8 b7 b6 b5 b4 b3 b2 b1 b0

encoding b b b b b b b b b b b b b b b b

PDT: PDT_BITSET16 (alt: PDT_GENERIC_02)

**Datapoint Types**

ID: Name: Encoding, range: Use:

22.1010 DPT_Channel_Activation_16 See below System

|2 MSB  1 LSB|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Media|Media|Media|Media|Media|Media|Media|Media|Media|Media|Media|Media|Media|Media|Media|Media|
|b15|b14|b13|b12|b11|b10|b9|b8|b7|b6|b5|b4|b3|b2|b1|b0|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Unit:<br>Resol.:<br>PDT:|Col2|2 octets: B<br>16<br>2 1<br>MSB LSB<br>Media<br>b15 b14 b13 b12 b11 b10 b9 b8 b7 b6 b5 b4 b3 b2 b1 b0<br>b b b b b b b b b b b b b b b b<br>none<br>not applicable<br>PDT BITSET16 (alt: PDT GENERIC 02)<br>_ _ _|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Name:|Bit|Name:|Meaning|Coding:|Use:|
|22.1000|DPT_Media|DPT_Media|b0|(reserved)|reserved|0|System|
|22.1000|DPT_Media|DPT_Media|b1|TP1|TP1 is supported|0 = false<br>1 = true|0 = false<br>1 = true|
|22.1000|DPT_Media|DPT_Media|b2|PL110|PL110 is supported|0 = false<br>1 = true|0 = false<br>1 = true|
|22.1000|DPT_Media|DPT_Media|b3|(reserved)|reserved|0|0|
|22.1000|DPT_Media|DPT_Media|b4|RF|RF is supported|0 = false<br>1 = true|0 = false<br>1 = true|
|22.1000|DPT_Media|DPT_Media|b5 <br>b6 … b15|KNX IP<br> none|KNX IP is supported<br>reserved|0 = false<br>1 = true<br>default 0|0 = false<br>1 = true<br>default 0|

|b<br>15|b<br>14|b<br>13|b<br>12|b<br>11|b<br>10|b<br>9|b<br>8|
|---|---|---|---|---|---|---|---|

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|2 octets: B<br>16<br>2 1<br>MSB LSB<br>Channel Activation<br>b b b b b b b b b b b b b b b b<br>15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0<br>b b b b b b b b b b b b b b b b<br>PDT BITSET16 (alt: PDT GENERIC 02)<br>_ _ _|
|---|---|

|Datapoint Types|Col2|Col3|Col4|
|---|---|---|---|
|ID:|Name:|Encoding, range:|Use:|
|22.1010|DPT_Channel_Activation_16|See below|System|


-----

|Bit|Data fields|Description|Encoding|Unit|Range|
|---|---|---|---|---|---|
|bn <br>(n = 0 to 15)|Activation state of<br>channel n+1.|Indicates the acti-<br>vation state of this<br>channel n+1|0 <br>= <br>The visual effect of<br>channel n+1 is<br>inactive.<br>1 <br>= <br>The visual effect of<br>channel n+1 is<br>active.|none|{0,1}|


#### 8.4 Datatype U4U4

Format: 1 octet: U4U4

octet nr. 1

field names Busy Nak

encoding U U U U U U U U

Encoding: All field values binary encoded.

Range: See below.

Unit: none

Resol.: not applicable

PDT: PDT_GENERIC_01

**Datapoint Types**

ID: Name: Field: Description Range: Use:

25.1000 DPT_DoubleNibble Busy Number of busy repetitions. [0 … 3]

Nak Number of inack repetitions. [0 … 3]

#### 8.5 Datapoint Types B24

##### 8.5.1 Datapoint Type “Channel Activation for 24 channels”

Format: 3 octets: B24

octet nr. 3 MSB 2 1 LSB

field names Channel Activation

b23 b22 b21 b20 b19 b18 b17 b16 b15 b14 b13 b12 b11 b10 b9 b8 b7 b6 b5 b4 b3 b2 b1 b0

encoding b b b b b b b b b b b b b b b b b b b b b b b b

PDT: PDT_GENERIC_03

**Datapoint Types**

ID: Name: Encoding, range: Use:

30.1010 DPT_Channel_Activation_24 See below System

|Busy|Nak|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Range:<br>Unit:<br>Resol.:<br>PDT:|1 octet: U U<br>4 4<br>1<br>Busy Nak<br>U U U U U U U U<br>All field values binary encoded.<br>See below.<br>none<br>not applicable<br>PDT GENERIC 01<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Field:|Description|Range:|Use:|
|25.1000|DPT_DoubleNibble|Busy|Number of busy repetitions.|[0 … 3]|System|
|25.1000|DPT_DoubleNibble|Nak|Number of inack repetitions.|[0 … 3]|[0 … 3]|

|b<br>23|b<br>22|b<br>21|b<br>20|b<br>19|b<br>18|b<br>17|b<br>16|
|---|---|---|---|---|---|---|---|

|b<br>15|b<br>14|b<br>13|b<br>12|b<br>11|b<br>10|b<br>9|b<br>8|
|---|---|---|---|---|---|---|---|

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|3 octets: B<br>24<br>3 2 1<br>MSB LSB<br>Channel Activation<br>b b b b b b b b b b b b b b b b b b b b b b b b<br>23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0<br>b b b b b b b b b b b b b b b b b b b b b b b b<br>PDT GENERIC 03<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding, range:|Use:|
|30.1010|DPT_Channel_Activation_24|See below|System|


-----

|Bit|Data fields|Description|Encoding|Unit|Range|
|---|---|---|---|---|---|
|bn <br>(n = 0 to 23)|Activation state of<br>channel n+1.|Indicates the acti-<br>vation state of this<br>channel n+1|0 <br>= <br>The visual effect of<br>channel n+1 is<br>inactive.<br>1 <br>= <br>The visual effect of<br>channel n+1 is<br>active.|none|{0,1}|


#### 8.6 Datapoint Type “MBus Address”

Format: 8 octets: U16U32U8N8

octet nr. 8 MSB 7 6 5 4

field names MSB ManufactID LSB MSB IdentNumber

encoding U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U

octet nr. 3 2 1 LSB

field names LSB Version Medium

encoding U U U U U U U U U U U U U U U U N N N N N N N N

Encoding: All values binary encoded.

PDT: PDT_GENERIC_08

**Datapoint Types**

ID: Name: Use:

230.1000 DPT_MBus_Address Metering

Data fields Description Unit / Range

ManufactID Manufacturer identification According to M-Bus manufacturer codes.
IdentNumber Identification number Full range, encoding is manufacturer specific.
Version Device Version Full range, manufacturer specific.
Medium Measured medium Enum according to MBus,
See EN 13757-3 and Table 1 “Supported physical
media” in Part 10/3 “RF metering protocol”.

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>PDT:|8 octets: U U U N<br>16 32 8 8<br>8 7 6 5 4<br>MSB<br>MSB ManufactID LSB MSB IdentNumber<br>U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U<br>3 2 1<br>LSB<br>LSB Version Medium<br>U U U U U U U U U U U U U U U U N N N N N N N N<br>All values binary encoded.<br>PDT GENERIC 08<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|ID:|Name:|Use:|
|230.1000|230.1000|DPT_MBus_Address|Metering|

|Data fields|Description|Unit / Range|
|---|---|---|
|ManufactID|Manufacturer identification|According to M-Bus manufacturer codes.|
|IdentNumber|Identification number|Full range, encoding is manufacturer specific.|
|Version|Device Version|Full range, manufacturer specific.|
|Medium|Measured medium|Enum according to MBus,<br>See EN 13757-3 and Table 1 “Supported physical<br>media” in Part 10/3 “RF metering protocol”.|


-----

### 9 Datapoint Types for Metering

#### 9.1 Datapoint Types B1

Format: 1 bit: B1

octet nr. 1

field names b

encoding B

Range: b = {0,1}

Unit none

Resol (not applicable)

PDT: PDT_BINARY_INFORMATION

**Datapoint Types**

ID: Name: Encoding: Use:

1.1200 DPT_ConsumerProducer 0 = Consumer Metering
1 = Producer

1.1201 DPT_EnergyDirection 0 = Positive Metering
1 = Negative

#### 9.2 Datapoint Types U32

Format: 4 octets: U32

octet nr 4 MSB 3 2 1 LSB

field names UnsignedValue

encoding U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U

Encoding: Binary encoded

Range: UnsignedValue = [0…4 294 967 295]

PDT PDT_UNSIGNED_LONG

**Datapoint Types**

ID: Name: Unit: Resol.:

12.1200 DPT_VolumeLiquid_Litre[ a] litre 1 litre

APPLICATIONS WATER METER TOTAL CONSUMPTION (VOLUME)

HEAT METER TOTAL CONSUMPTION (VOLUME)

12.1201 DPT_Volume_m3[ a] m[3] 1 m[3]

APPLICATIONS GAS METER TOTAL CONSUMPTION (VOLUME)

WATER METER TOTAL CONSUMPTION (VOLUME)

HEAT METER TOTAL CONSUMPTION (VOLUME)

a These U32 encoded DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201) and may be used as
alternative encodings for the transmission of the V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and
DPT_DeltaVolume_m3 (13.1201) under the condition that the encoded value never exceeds 2 147 483 647. For
metering, the typical solution would thus be to implement a decimal overflow at 999 999 999 and then reset to 0. A
receiver may either allow the same flexibility or may assume further a V32.

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|b|
|---|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Range:<br>Unit<br>Resol<br>PDT:|1 bit: B<br>1<br>1<br>b<br>B<br>b = {0,1}<br>none<br>(not applicable)<br>PDT BINARY INFORMATION<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Use:|
|1.1200|DPT_ConsumerProducer|0 = Consumer<br>1 = Producer|Metering|
|1.1201|DPT_EnergyDirection|0 = Positive<br>1 = Negative|Metering|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT|4 octets: U<br>32<br>4 3 2 1<br>MSB LSB<br>UnsignedValue<br>U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U<br>Binary encoded<br>UnsignedValue = [0…4 294 967 295]<br>PDT UNSIGNED LONG<br>_ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Unit:|Resol.:|
|12.1200|DPT_VolumeLiquid_Litre a|litre|1 litre|
|12.1200|APPLICATIONS WATER METER TOTAL CONSUMPTION(VOLUME) <br>HEAT METER TOTAL CONSUMPTION(VOLUME)|APPLICATIONS WATER METER TOTAL CONSUMPTION(VOLUME) <br>HEAT METER TOTAL CONSUMPTION(VOLUME)|APPLICATIONS WATER METER TOTAL CONSUMPTION(VOLUME) <br>HEAT METER TOTAL CONSUMPTION(VOLUME)|
|12.1201|DPT_Volume_m3 a|m3|1 m3|
|12.1201|APPLICATIONS GAS METER TOTAL CONSUMPTION(VOLUME) <br>WATER METER TOTAL CONSUMPTION(VOLUME) <br>HEAT METER TOTAL CONSUMPTION(VOLUME)|APPLICATIONS GAS METER TOTAL CONSUMPTION(VOLUME) <br>WATER METER TOTAL CONSUMPTION(VOLUME) <br>HEAT METER TOTAL CONSUMPTION(VOLUME)|APPLICATIONS GAS METER TOTAL CONSUMPTION(VOLUME) <br>WATER METER TOTAL CONSUMPTION(VOLUME) <br>HEAT METER TOTAL CONSUMPTION(VOLUME)|
|a These U32 encoded DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201) and may be used as<br>alternative encodings for the transmission of the V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and<br>DPT_DeltaVolume_m3 (13.1201) under the condition that the encoded value never exceeds 2 147 483 647. For<br>metering, the typical solution would thus be to implement a decimal overflow at 999 999 999 and then reset to 0. A<br>receiver may either allow the same flexibility or may assume further a V32.|a These U32 encoded DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201) and may be used as<br>alternative encodings for the transmission of the V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and<br>DPT_DeltaVolume_m3 (13.1201) under the condition that the encoded value never exceeds 2 147 483 647. For<br>metering, the typical solution would thus be to implement a decimal overflow at 999 999 999 and then reset to 0. A<br>receiver may either allow the same flexibility or may assume further a V32.|a These U32 encoded DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201) and may be used as<br>alternative encodings for the transmission of the V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and<br>DPT_DeltaVolume_m3 (13.1201) under the condition that the encoded value never exceeds 2 147 483 647. For<br>metering, the typical solution would thus be to implement a decimal overflow at 999 999 999 and then reset to 0. A<br>receiver may either allow the same flexibility or may assume further a V32.|a These U32 encoded DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201) and may be used as<br>alternative encodings for the transmission of the V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and<br>DPT_DeltaVolume_m3 (13.1201) under the condition that the encoded value never exceeds 2 147 483 647. For<br>metering, the typical solution would thus be to implement a decimal overflow at 999 999 999 and then reset to 0. A<br>receiver may either allow the same flexibility or may assume further a V32.|


-----

#### 9.3 Datapoint Types V32

Format: 4 octets: V32

octet nr 4 MSB 3 2 1 LSB

field names SignedValue

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

Encoding: Two’s complement notation

Range: SignedValue = [-2 147 483 648 … 2 147 483 647]

PDT PDT_LONG

**Datapoint Types**

ID: Name: Unit: Resol.: Use:

13.1200 DPT_DeltaVolumeLiquid_Litre[ a] litre 1 litre water meter total consumption (volume)
heat meter total consumption (volume)

13.1201 DPT_DeltaVolume_m3[ a] m[3] 1 m[3] gas meter total consumption (volume)
water meter total consumption (volume)
heat meter total consumption (volume)

a For these V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and DPT_DeltaVolume_m3 (13.1201), under
conditions, the alternative standard U32 DPTs DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201)
may be used. For the conditions, please refer to the DPT definitions.

b
DPT_DeltaVolume_m3 (13.1202) shall in the water meter only be used if for the same purpose also a DPT
according DPT_DeltaVolumeLiquid_Litre (13.200) is implemented.

#### 9.4 Datapoint Types F32

Format: 4 octets: F32

octet nr. 4 MSB 3 2 1 LSB

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

Encoding: The values are encoded in the IEEE floating point format according to IEEE 754 single
precision format.

NOTE 39 This specifies that the exponent is biased. This allows negative exponent values.

Range: S (Sign) = {0,1}
Exponent = [0 … 255]
Fraction = [0 … 8 388 607]
Resol.: The resolution is given by the use of the IEEE 754 format and varies with the used exponent.

PDT: PDT_FLOAT

**Datapoint Types**

ID: Name: Unit: Comment: Use:

14.1200 DPT_Volume_Flux_Meter m[3]h[-1] volume flux for meters Metering

APPLICATIONS GAS METER FLOW

WATER METER FLOW

14.1201 DPT_Volume_Flux_ls ls[-1] volume flux for meters G

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr<br>field names<br>encoding<br>Encoding:<br>Range:<br>PDT|4 octets: V<br>32<br>4 3 2 1<br>MSB LSB<br>SignedValue<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>Two’s complement notation<br>SignedValue = [-2 147 483 648 … 2 147 483 647]<br>PDT LONG<br>_|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Unit:|Resol.:|Use:|
|13.1200|DPT_DeltaVolumeLiquid_Litre a|litre|1 litre|water meter total consumption (volume)<br>heat meter total consumption (volume)|
|13.1201|DPT_DeltaVolume_m3 a|m3|1 m3|gas meter total consumption (volume)<br>water meter total consumption (volume)<br>heat meter total consumption (volume)|
|a For these V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and DPT_DeltaVolume_m3 (13.1201), under<br>conditions, the alternative standard U32 DPTs DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201)<br>may be used. For the conditions, please refer to the DPT definitions.|a For these V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and DPT_DeltaVolume_m3 (13.1201), under<br>conditions, the alternative standard U32 DPTs DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201)<br>may be used. For the conditions, please refer to the DPT definitions.|a For these V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and DPT_DeltaVolume_m3 (13.1201), under<br>conditions, the alternative standard U32 DPTs DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201)<br>may be used. For the conditions, please refer to the DPT definitions.|a For these V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and DPT_DeltaVolume_m3 (13.1201), under<br>conditions, the alternative standard U32 DPTs DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201)<br>may be used. For the conditions, please refer to the DPT definitions.|a For these V32 encoded DPT_DeltaVolumeLiquid_Litre (13.1200) and DPT_DeltaVolume_m3 (13.1201), under<br>conditions, the alternative standard U32 DPTs DPT_VolumeLiquid_Litre (12.1200) and DPT_Volume_m3 (12.1201)<br>may be used. For the conditions, please refer to the DPT definitions.|
|b DPT_DeltaVolume_m3 (13.1202) shall in the water meter only be used if for the same purpose also a DPT<br>according DPT_DeltaVolumeLiquid_Litre (13.200) is implemented.|b DPT_DeltaVolume_m3 (13.1202) shall in the water meter only be used if for the same purpose also a DPT<br>according DPT_DeltaVolumeLiquid_Litre (13.200) is implemented.|b DPT_DeltaVolume_m3 (13.1202) shall in the water meter only be used if for the same purpose also a DPT<br>according DPT_DeltaVolumeLiquid_Litre (13.200) is implemented.|b DPT_DeltaVolume_m3 (13.1202) shall in the water meter only be used if for the same purpose also a DPT<br>according DPT_DeltaVolumeLiquid_Litre (13.200) is implemented.|b DPT_DeltaVolume_m3 (13.1202) shall in the water meter only be used if for the same purpose also a DPT<br>according DPT_DeltaVolumeLiquid_Litre (13.200) is implemented.|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:|4 octets: F<br>32<br>4 3 2 1<br>MSB LSB<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>The values are encoded in the IEEE floating point format according to IEEE 754 single<br>precision format.<br>NOTE 39 This specifies that the exponent is biased. This allows negative exponent values.<br>S (Sign) = {0,1}<br>Exponent = [0 … 255]<br>Fraction = [0 … 8 388 607]<br>The resolution is given by the use of the IEEE 754 format and varies with the used exponent.<br>PDT FLOAT<br>_|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>Range: <br>Resol.:<br>PDT:|<br>Range: <br>Resol.:<br>PDT:|<br>Range: <br>Resol.:<br>PDT:|<br>Range: <br>Resol.:<br>PDT:|<br>Range: <br>Resol.:<br>PDT:|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Unit:|Comment:|Use:|
|14.1200|DPT_Volume_Flux_Meter|m3h-1|volume flux for meters|Metering|
|14.1200|APPLICATIONS <br>GAS METER FLOW <br>WATER METER FLOW|APPLICATIONS <br>GAS METER FLOW <br>WATER METER FLOW|APPLICATIONS <br>GAS METER FLOW <br>WATER METER FLOW|APPLICATIONS <br>GAS METER FLOW <br>WATER METER FLOW|
|14.1201|DPT_Volume_Flux_ls|ls-1|volume flux for meters|G|


-----

#### 9.5 Datapoint Types N8

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Encoding:<br>Unit:<br>Resol.:<br>PDT:|1 octet: N<br>8<br>1<br>field1<br>N N N N N N N N<br>Encoding absolute value N = [0 … 255]<br>none<br>none<br>PDT ENUM8 (alt: PDT UNSIGNED CHAR)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|20.1200|DPT_MBus_Breaker-<br>Valve_State|_field1_ = Breaker State<br>0:<br>Breaker/Valve is closed<br>1:<br>Breaker/Valve is open<br>2:<br>Breaker/Valve is released<br>3 to 254: reserved<br>255:<br>invalid|0 to 2,<br>255|FB|
|20.1202|DPT_Gas_Measurement<br>_Condition|_field1_ = GasMeasurementCondition<br>0:<br>unknown<br>1:<br>temperature converted<br>2:<br>at base condition<br>3:<br>at measurement condition<br>4 to 255: reserved. shall not be used|[0 to 3]|FB|
|20.1203|DPT_Breaker_Status|_field 1_ = BreakerStatus <br>0:<br>closed<br>1:<br>open on overload<br>2.<br>: open on overvoltage<br>3.<br>: open on load shedding<br>4:<br>open on PLC or Euridis command<br>5:<br>open on overheat with a current<br>value over the maximum<br>switching current value.<br>6:<br>open on overheat with a current<br>value under the maximum<br>switching current value|[0 to 6]|Metering|
|20.1204|DPT_Euridis_Communic<br>ation_Interface_Status|_field 1_ =<br>EuridisCommunicationInterfaceStatus <br>0:<br>deactivated<br>1:<br>activated without security<br>2:<br>activated with security|[0 to 2]|Metering|
|20.1205|DPT_PLC_Status|_field 1_ = PLCStatus <br>0:<br>New / Unlock (S-SFK) – Not<br>Associated (G3-PLC)<br>1:<br>New / Lock (S-FSK) – Associated<br>(G3-PLC)<br>2:<br>Registered (S-FSK) – reserved<br>(G3-PLC)|[0 to 2]|Metering|


-----

|Datapoint Types|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|ID:|Name:|Encoding:|Range:|Use:|
|20.1206|DPT_Peak_Event_-<br>Notice|_field 1_ = PeakEventNotice <br>0:<br>no notice in progress<br>1:<br>notice PE1 in progress<br>2:<br>notice PE2 in progress<br>3:<br>notice PE3 in progress|[0 to 3]|Metering|
|20.1207|DPT_Peak_Event|_field 1 = PeakEvent_<br>0:<br>no peak event<br>1:<br>PE1 in progress<br>2:<br>PE2 in progress<br>3:<br>PE3 in progress|[0 to 3]|Metering|
|20.1208|DPT_TIC_Type|_field 1_ = TICType <br>0:<br>Historical<br>1:<br>Standard|[0 to 1]|Metering|
|20.1209|DPT_Type_TIC_Channel|_field 1_ = TICChannelType <br>0:<br>None<br>1:<br>Historical single-phase<br>2:<br>Historical three-phase<br>3:<br>Standard single-phase<br>4:<br>Standard three-phase|[0 to 4]|Metering|


#### 9.6 Datapoint Types B8

|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Range:<br>Unit<br>Resol<br>PDT:|8 bits: B<br>8<br>1<br>b b b b b b b b<br>7 6 5 4 3 2 1 0<br>B B B B B B B B<br>b = {0,1}<br>x<br>none<br>none<br>PDT BITSET8 (Alt. PDT GENERIC 01)<br>_ _ _|Col3|Col4|
|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Use:|
|21.1200|DPT_VirtualDryContact|bx : Status of Virtual Dry Contact X<br>0 : Virtual contact open<br>1 : Virtual contact closed|Metering|


-----

#### 9.7 Datapoint Types r5B3

|reserved|b<br>2|b<br>1|b<br>0|
|---|---|---|---|

|00000b|B|B|B|
|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>Range:<br>Unit<br>Resol<br>PDT:|8 bits: B<br>8<br>1<br>reserved b b b<br>2 1 0<br>00000b B B B<br>b = {0,1}<br>x<br>none<br>none<br>PDT BITSET8 (Alt. PDT GENERIC 01)<br>_ _ _|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding:|Use:|Use:|
|21.1201|DPT_Phases_Status|bx : Status of Phase X<br>0 : Phase absent<br>1 : Phase present|Metering|Metering|


-----

#### 9.8 Datapoint Types F32F32F32

Format: 12 octets: F32F32F32

octet nr. 12 MSB 11 10 9

Phase 1

field names

S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

octet nr. 8 7 6 5

Phase 2

field names

S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

octet nr. 4 3 2 1 LSB

Phase 3

field names

S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

Encoding The values are encoded in the IEEE floating point format according to IEEE 754.
:

Range: S (Sign) = {0,1}
Exponent = [0 … 255]
Fraction = [0 … 8 388 607]
PDT: PDT_GENERIC_12

**Datapoint Types**

ID: Name: Unit: Resol.: Comment: Use:

257.1200 DPT_Value_Electric_Current_3 A 1 A electric current Metering

257.1201 DPT_Value_Electric_Potential_3 V 1 V electric potential Metering

257.1202 DPT_Value_ApparentPower_3 VA 1 VA apparent power Metering

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>Encoding<br>:<br>Range:<br>PDT:|12 octets: F F F<br>32 32 32<br>12 11 10 9<br>MSB<br>Phase 1<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>8 7 6 5<br>Phase 2<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>4 3 2 1<br>LSB<br>Phase 3<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>The values are encoded in the IEEE floating point format according to IEEE 754.<br>S (Sign) = {0,1}<br>Exponent = [0 … 255]<br>Fraction = [0 … 8 388 607]<br>PDT GENERIC 12<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Unit:|Resol.:|Comment:|Use:|
|257.1200|DPT_Value_Electric_Current_3|A|1 A|electric current|Metering|
|257.1201|DPT_Value_Electric_Potential_3|V|1 V|electricpotential|Metering|
|257.1202|DPT_Value_ApparentPower_3|VA|1 VA|apparent power|Metering|


-----

#### 9.9 Datapoint Types B1 with Date and Time

Format: 9 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16B1

octet nr. 9 MSB 8 7 6

field names
Year 0 0 0 0 Month 0 0 0 [DayOfMont] [DayOf-]
h Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 5 4 3 2

field names

0 0 Minutes 0 0 Seconds 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r

octet nr. 1 LSB

field names Binary Information

encoding B

PDT: PDT_GENERIC_09

**Datapoint Types**

ID: Name: Use:

265.1200 DPT_DateTime_ConsumerProducer Metering

265.1201 DPT_DateTime_EnergyDirection Metering

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Date and Time Same as DPT 19.001. {0,1} none none

Binary Information Same as DPT 1.xxx. {0,1} none none

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMont<br>h|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|9 octets: U [r U ][r U ][U U ][r U ][r U ]B B<br>8 4 4 3 5 3 5 2 6 2 6 16 1<br>9 8 7 6<br>MSB<br>DayOfMont DayOf-<br>Year 0 0 0 0 Month 0 0 0 HourOfDay<br>h Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>5 4 3 2<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC<br>r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r<br>1<br>LSB<br>Binary Information<br>B<br>PDT GENERIC 09<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|265.1200|DPT_DateTime_ConsumerProducer|Metering|
|265.1201|DPT_DateTime_EnergyDirection|Metering|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001.|{0,1}|none|none|
|Binary Information||Same as DPT 1.xxx.|{0,1}|none|none|


-----

#### 9.10 Datapoint Types Enum8 with Date and Time

Format: 9 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16N8

octet nr. 9 MSB 8 7 6

field names
Year 0 0 0 0 Month 0 0 0 [DayOfMont] [DayOf-]
h Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 5 4 3 2

field names

0 0 Minutes 0 0 Seconds 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r

octet nr. 1 LSB

field names _field 1_

encoding _N N N N N N N N_

PDT: PDT_DateTime_Enum8

**Datapoint Types**

ID: Name: Use:

268.1203 DPT_DateTime_Breaker_Status Metering

268.1204 DPT_DateTime_Euridis_Communication_Interface_Status Metering

268.1205 DPT_DateTime_PLC_Status Metering

268.1206 DPT_DateTime_Peak_Notice Metering

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Date and Time Same as DPT 19.001. none none

field 1 Same as DPT 20.xxx. 0 to 255 none none

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMont<br>h|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Col1|0|0|Minutes|
|---|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|N|N|N|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|9 octets: U [r U ][r U ][U U ][r U ][r U ]B N<br>8 4 4 3 5 3 5 2 6 2 6 16 8<br>9 8 7 6<br>MSB<br>DayOfMont DayOf-<br>Year 0 0 0 0 Month 0 0 0 HourOfDay<br>h Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>5 4 3 2<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC<br>r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r<br>1<br>LSB<br>field 1<br>N N N N N N N N<br>PDT DateTime Enum8<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|268.1203|DPT_DateTime_Breaker_Status|Metering|
|268.1204|<br>DPT_DateTime_Euridis_Communication_Interface_Status|Metering|
|268.1205|<br>DPT_DateTime_PLC_Status|Metering|
|268.1206|<br>DPT_DateTime_Peak_Notice|Metering|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001.||none|none|
|field 1||Same as DPT 20.xxx.|0 to 255|none|none|


-----

#### 9.11 Datapoint Types DPT_Tariff_ActiveEnergy with Date and Time

Format: 14 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16V32U8B8

octet nr. 14 MSB 13 12 11

field names
Year 0 0 0 0 Month 0 0 0 DayOfMonth [DayOf-]
Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 10 9 8 7

field names 0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r

octet nr. 6 5 4 3

field names ActiveElectricalEnergy

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr. 2 1 LSB

field names Tariff Validity

encoding U U U U U U U U r r r r r r B B

PDT: PDT_GENERIC_14

**Datapoint Types**

ID: Name: Use:

269.1200 DPT_DateTime_Tariff_ActiveEnergy Metering

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Date and Time Same as DPT 19.001. none none

Tariff Active energy Same as DPT 235.001. none none

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|0|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|r|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|14 octets: U [r U ][r U ][U U ][r U ][r U ]B V U B<br>8 4 4 3 5 3 5 2 6 2 6 16 32 8 8<br>14 13 12 11<br>MSB<br>DayOf-<br>Year 0 0 0 0 Month 0 0 0 DayOfMonth HourOfDay<br>Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>10 9 8 7<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ<br>r r U U U U U U r r U U U U U U B B B B B B B B B r r r r r r r<br>6 5 4 3<br>ActiveElectricalEnergy<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>2 1<br>LSB<br>Tariff Validity<br>U U U U U U U U r r r r r r B B<br>PDT GENERIC 14<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|269.1200|DPT_DateTime_Tariff_ActiveEnergy|Metering|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001.||none|none|
|Tariff Active energy||Same as DPT 235.001.||none|none|


-----

#### 9.12 Datapoint Types F32F32F32 with Date and Time

Format: 20 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16F32F32F32

octet nr. 20 MSB 19 18 17

field names DayOfYear 0 0 0 0 Month 0 0 0 [DayOf-]
Month Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. 16 15 14 13

field names 0 0 Minutes 0 0 Seconds 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r

octet nr. 12 11 10 9

Phase 1

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

octet nr. 8 7 6 5

Phase 2

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

octet nr. 4 3 2 1 LSB

Phase 3

field names S Exponent Fraction

encoding F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F

PDT: PDT_GENERIC_20

**Datapoint Types**

ID: Name: Use:

270.1200 DPT_DateTime_Value_Electric_Current_3 Metering

270.1201 DPT_DateTime_Value_Electric_Potential_3 Metering

270.1202 DPT_DateTime_Value_ApparentPower_3 Metering

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Date and Time Same as DPT 19.001. none none

Phase 1 Same as DPT 14.xxx.

Phase 2 Same as DPT 14.xxx.

Phase 3 Same as DPT 14.xxx.

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOf-<br>Month|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|S|Exponent|Fraction|
|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|F|F|F|F|F|F|F|F|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|20 octets: U [r U ][r U ][U U ][r U ][r U ]B F F F<br>8 4 4 3 5 3 5 2 6 2 6 16 32 32 32<br>20 19 18 17<br>MSB<br>DayOf- DayOf-<br>Year 0 0 0 0 Month 0 0 0 HourOfDay<br>Month Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>16 15 14 13<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC<br>r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r<br>12 11 10 9<br>Phase 1<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>8 7 6 5<br>Phase 2<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>4 3 2 1<br>LSB<br>Phase 3<br>S Exponent Fraction<br>F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F F<br>PDT GENERIC 20<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|270.1200|DPT_DateTime_Value_Electric_Current_3|Metering|
|270.1201|<br>DPT_DateTime_Value_Electric_Potential_3|Metering|
|270.1202|<br>DPT_DateTime_Value_ApparentPower_3|Metering|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001.||none|none|
|Phase 1||Same as DPT 14.xxx.||||
|Phase 2||Same as DPT 14.xxx.||||
|Phase 3||Same as DPT 14.xxx.||||


-----

#### 9.13 Datapoint Types TariffDayProfile

Format: 7 octets: [N3U5][r2U6][r2U6][U4U4]U8[U6N2][r1B7]

octet nr. 7 MSB 6 5 4

field names

Total

Item
Day Hour 0 0 Minutes 0 0 Seconds Number Of
Number

Item

encoding N N N U U U U U r r U U U U U U r r U U U U U U U U U U U U U U

octet nr. 3 2 1 LSB

field names

Tariff Day Profile # 0

encoding U U U U U U U U U U U U U U N N r B B B B B B B

PDT: PDT_GENERIC_07

**Datapoint Types**

ID: Name: Use:

271.1200 DPT_TariffDayProfile Metering

|Day|Hour|
|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|Item<br>Number|Total<br>Number Of<br>Item|
|---|---|

|N|N|N|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Day Profile #|Dry Contact|
|---|---|

|0|VC7|VC6|VC5|VC4|VC3|VC2|VC1|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|N|N|
|---|---|---|---|---|---|---|---|

|r|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|7 octets: [N U ][r U ][r U ][U U ]U [U N ][r B ]<br>3 5 2 6 2 6 4 4 8 6 2 1 7<br>7 6 5 4<br>MSB<br>Total<br>Item<br>Day Hour 0 0 Minutes 0 0 Seconds Number Of<br>Number<br>Item<br>It<br>N N N U U U U U r r U U U U U U r r U U U U U U U U U U U U U U<br>3 2 1<br>LSB<br>Contact<br>VC7 VC6 VC5 VC4 VC3 VC2 VC1<br>Tariff Day Profile # 0<br>Dry<br>U U U U U U U U U U U U U U N N r B B B B B B B<br>PDT GENERIC 07<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|271.1200|DPT_TariffDayProfile|Metering|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Time||Same as DPT 10.001.||none|none|
|Tariff||Same as DPT 5.006.||||
|Dry contact||0 :<br>The dry contact remains in<br>the sale position (no<br>switching).<br>1 :<br>If the contract is contract<br>Tempo, then the positions of<br>the dry contact and the<br>virtual contact #1 is defined<br>by the objet “Tempo dry<br>contact configuration”<br>If the contract is not Tempo,<br>then the dry contact remains<br>in the same position (no<br>switching).<br>2 :<br>The dry contact switches to<br>open position and remains in<br>open position.<br>3 :<br>The dry contact switches to<br>closed position and remains<br>in closedposition.|0 to 3|None|None|
|VCx|Virtual contact #x|0 : Virtual contact open.<br>1 : Virtual contact closed.|{0, 1}|None|None|
|Item number||Item number of the day profile|0 to 15|None|None|
|Total Number<br>Of Items||Total number of items in the day<br>profile.|0 to 15|None|None|


-----

Day Profile # Number of the Day Profile 0 to 63 None None

#### 9.14 Datapoint Types DPT_ERL_Status

Format: 4 octets: U8U8U8r3B5

octet nr. 4 MSB 3 2 1

field names

Duty Cycle 1 Duty Cycle 2 Duty Cycle 3

encoding U U U U U U U U U U U U U U U U U U U U U U U U r r r B B B B B

PDT: PDT_GENERIC_04

**Datapoint Types**

ID: Name: Use:

276.1200 DPT_ERL_Status Metering

**Field** **Description** **Encoding** **Range** **Unit** **Resol.:**

Duty Cycle 1 Current duty cycle of channel F1 5.001 0 % to 100 % None None

Duty Cycle 2 Current duty cycle of channel F2 5.001 0 % to 100 % None None

Duty Cycle 3 Current duty cycle of channel F3 5.001 0 % to 100 % None None

DCA1 Duty Cycle Alarm of channel F1: 1.005 {0, 1} None None
set to 1 when Duty cycle reaches
98% (*)

DCA2 Duty Cycle Alarm of channel F2: 1.005 {0, 1} None None
set to 1 when Duty cycle reaches
98% (*)

DCA3 Duty Cycle Alarm of channel F3: 1.005 {0, 1} None None
set to 1 when Duty cycle reaches
98% (*)

Update Set to 1 when a software update 1.011 {0, 1} None None
is in progress.

TA TIC alarm: set to 1 when the TIC 1.005 {0, 1} None None
is not correctly received.

a It is recommended that in any RF channel, 98 % of the duty cycle value is used for usual runtime
transmissions and 2 % reserved for the alarms transmissions. For alarms transmission please refer to the
clause “Alarm management” in the specification of the ERL Channel in [09].

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Day Profile #||Number of the Day Profile|0 to 63|None|None|

|Col1|Col2|Col3|TA|Update|DCA3|DCA2|DCA1|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>PDT:|4 octets: U U U r B<br>8 8 8 3 5<br>4 3 2 1<br>MSB<br>Update DCA3 DCA2 DCA1<br>Duty Cycle 1 Duty Cycle 2 Duty Cycle 3 TA<br>It<br>U U U U U U U U U U U U U U U U U U U U U U U U r r r B B B B B<br>PDT GENERIC 04<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|276.1200|DPT_ERL_Status|Metering|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Duty Cycle 1|Current duty cycle of channel F1|5.001|0 % to 100 %|None|None|
|Duty Cycle 2|Current duty cycle of channel F2|5.001|0 % to 100 %|None|None|
|Duty Cycle 3|Current duty cycle of channel F3|5.001|0 % to 100 %|None|None|
|DCA1|Duty Cycle Alarm of channel F1:<br>set to 1 when Duty cycle reaches<br>98%(*)|1.005|{0, 1}|None|None|
|DCA2|Duty Cycle Alarm of channel F2:<br>set to 1 when Duty cycle reaches<br>98%(*)|1.005|{0, 1}|None|None|
|DCA3|Duty Cycle Alarm of channel F3:<br>set to 1 when Duty cycle reaches<br>98%(*)|1.005|{0, 1}|None|None|
|Update|Set to 1 when a software update<br>is inprogress.|1.011|{0, 1}|None|None|
|TA|TIC alarm: set to 1 when the TIC<br>is not correctly received.|1.005|{0, 1}|None|None|
|a <br>It is recommended that in any RF channel, 98 % of the duty cycle value is used for usual runtime<br>transmissions and 2 % reserved for the alarms transmissions. For alarms transmission please refer to the<br>clause “Alarm management” in the specification of the ERL Channel in [09].|a <br>It is recommended that in any RF channel, 98 % of the duty cycle value is used for usual runtime<br>transmissions and 2 % reserved for the alarms transmissions. For alarms transmission please refer to the<br>clause “Alarm management” in the specification of the ERL Channel in [09].|a <br>It is recommended that in any RF channel, 98 % of the duty cycle value is used for usual runtime<br>transmissions and 2 % reserved for the alarms transmissions. For alarms transmission please refer to the<br>clause “Alarm management” in the specification of the ERL Channel in [09].|a <br>It is recommended that in any RF channel, 98 % of the duty cycle value is used for usual runtime<br>transmissions and 2 % reserved for the alarms transmissions. For alarms transmission please refer to the<br>clause “Alarm management” in the specification of the ERL Channel in [09].|a <br>It is recommended that in any RF channel, 98 % of the duty cycle value is used for usual runtime<br>transmissions and 2 % reserved for the alarms transmissions. For alarms transmission please refer to the<br>clause “Alarm management” in the specification of the ERL Channel in [09].|a <br>It is recommended that in any RF channel, 98 % of the duty cycle value is used for usual runtime<br>transmissions and 2 % reserved for the alarms transmissions. For alarms transmission please refer to the<br>clause “Alarm management” in the specification of the ERL Channel in [09].|


-----

#### 9.15 Datapoint Types DPT_UTF-8 and N DPT_Tariff_ActiveEnergy

Format: n*6+12 octets: A[12](V32U8B8)[n]

octet nr. N*6+12 MSB … … N*6+1

field names A … … 00

encoding A A A A A A A A 0 0 0 0 0 0 0 0

octet nr. N*6 N*6-1 N*6-2 N*6-3

field names ActiveElectricalEnergy

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr. N*6-4 N*6-5

field names Tariff Validity

encoding U U U U U U U U r r r r r r B B

octet nr. 6 5 4 3

field names ActiveElectricalEnergy

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr. 2 1 LSB

field names Tariff Validity

encoding U U U U U U U U r r r r r r B B

PDT: PDT_GENERIC_14

**Datapoint Types**

ID: Name: Use:

277.1200 DPT_4_EnergyRegisters (N=4) Metering

278.1200 DPT_5_EnergyRegisters (N=5) Metering

279.1200 DPT_6_EnergyRegisters (N=6) Metering

280.1200 DPT_11_EnergyRegisters (N=11) Metering

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|B|B|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|n*6+12 octets: A[12](V U B )[n]<br>32 8 8<br>N*6+12 … … N*6+1<br>MSB<br>A … … 00<br>A A A A A A A A 0 0 0 0 0 0 0 0<br>N*6 N*6-1 N*6-2 N*6-3<br>ActiveElectricalEnergy<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>N*6-4 N*6-5<br>Tariff Validity<br>U U U U U U U U r r r r r r B B<br>6 5 4 3<br>ActiveElectricalEnergy<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>2 1<br>LSB<br>Tariff Validity<br>U U U U U U U U r r r r r r B B<br>PDT GENERIC 14<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|277.1200|DPT_4_EnergyRegisters (N=4)|Metering|
|278.1200|<br>DPT_5_EnergyRegisters (N=5)|Metering|
|279.1200|<br>DPT_6_EnergyRegisters (N=6)|Metering|
|280.1200|<br>DPT_11_EnergyRegisters (N=11)|Metering|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|A[12]||Same as DPT 28.001.||none|none|
|Tariff Active<br>energy||Same as DPT 235.001 with<br>extensions for energy registers<br>related to active or reactive energy<br>and not linked to a tariff.||none|none|


-----

#### 9.16 Datapoint Types DPT_UTF-8 and N DPT_Tariff_ActiveEnergy with Date and Time

Format: n*6+20 octets: U8[r4U4][r3U5][U3U5][r2U6][r2U6]B16A[12](V32U8B8)[n]

octet nr. N*6+20 MSB N*6+19 N*6+18 N*6+17

field names
Year 0 0 0 0 Month 0 0 0 DayOfMonth [DayOf-]
Week [HourOfDay ]

encoding U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U

octet nr. N*6+16 N*6+15 N*6+14 N*6+13

field names

0 0 Minutes 0 0 Seconds 0 0 0 0 0 0

encoding r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r

octet nr. N*6+12 … … N*6+1

field names A … … 00

encoding A A A A A A A A 0 0 0 0 0 0 0 0

octet nr. N*6 N*6-1 N*6-2 N*6-3

field names ActiveElectricalEnergy

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr. N*6-4 N*6-5

field names Tariff Validity

encoding U U U U U U U U r r r r r r B B

octet nr. 6 5 4 3

field names ActiveElectricalEnergy

encoding V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V

octet nr. 2 1 LSB

field names Tariff Validity

encoding U U U U U U U U r r r r r r B B

PDT: PDT_GENERIC_14

**Datapoint Types**

ID: Name: Use:

281.1200 DPT_DateTime_4_EnergyRegisters (N=4) Metering

282.1200 DPT_DateTime_5_EnergyRegisters (N=5) Metering

283.1200 DPT_DateTime_6_EnergyRegisters (N=6) Metering

284.1200 DPT_DateTime_11_EnergyRegisters (N=11) Metering

|0|0|0|0|Month|
|---|---|---|---|---|

|0|0|0|DayOfMonth|
|---|---|---|---|

|DayOf-<br>Week|HourOfDay|
|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|0|0|Minutes|
|---|---|---|

|0|0|Seconds|
|---|---|---|

|F|WD|NWD|NY|ND|NDoW|NT|SUTI|
|---|---|---|---|---|---|---|---|

|CLQ|SRC|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|B|B|r|r|r|r|r|r|
|---|---|---|---|---|---|---|---|

|A|A|A|A|A|A|A|A|
|---|---|---|---|---|---|---|---|

|0|0|0|0|0|0|0|0|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|B|B|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|V|V|V|V|V|V|V|V|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|r|r|r|r|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|n*6+20 octets: U [r U ][r U ][U U ][r U ][r U ]B A[12](V U B )[n]<br>8 4 4 3 5 3 5 2 6 2 6 16 32 8 8<br>N*6+20 N*6+19 N*6+18 N*6+17<br>MSB<br>DayOf-<br>Year 0 0 0 0 Month 0 0 0 DayOfMonth HourOfDay<br>Week<br>U U U U U U U U r r r r U U U U r r r U U U U U U U U U U U U U<br>N*6+16 N*6+15 N*6+14 N*6+13<br>0 0 Minutes 0 0 Seconds 0 0 0 0 0 0 F WD NWD NY ND NDoW NT SUTI CLQ SRC<br>r r U U U U U U r r U U U U U U B B B B B B B B B B r r r r r r<br>N*6+12 … … N*6+1<br>A … … 00<br>A A A A A A A A 0 0 0 0 0 0 0 0<br>N*6 N*6-1 N*6-2 N*6-3<br>ActiveElectricalEnergy<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>N*6-4 N*6-5<br>Tariff Validity<br>U U U U U U U U r r r r r r B B<br>6 5 4 3<br>ActiveElectricalEnergy<br>V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V<br>2 1<br>LSB<br>Tariff Validity<br>U U U U U U U U r r r r r r B B<br>PDT GENERIC 14<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|281.1200|DPT_DateTime_4_EnergyRegisters (N=4)|Metering|
|282.1200|<br>DPT_DateTime_5_EnergyRegisters (N=5)|Metering|
|283.1200|<br>DPT_DateTime_6_EnergyRegisters (N=6)|Metering|
|284.1200|<br>DPT_DateTime_11_EnergyRegisters (N=11)|Metering|


-----

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Date and Time||Same as DPT 19.001.||none|none|
|A[12]||Same as DPT 28.001.||none|none|
|Tarif Active<br>energy||Same as DPT 235.001 with<br>extensions for energy registers<br>related to active or reactive energy<br>and not linked to a tariff.||none|none|


-----

### 10 Datapoint types for weather encoding

#### 10.1 Forecasts for F16 values

Format: 8 octets: B8U16U8F16F16

octet nr. 8 MSB 7 6 5

field names Mask DelayTime Probability

encoding r r r r B B B B U U U U U U U U U U U U U U U U U U U U U U U U

octet nr. 4 3 2 1 LSB

field names Maximum Value Minimal Value

encoding ME E E E MMM MMMMMMMM ME E E E MMM MMMMMMMM

PDT: PDT_GENERIC_08

**Datapoint Types**

ID: Name: Encoding[ a] Unit[ a] Resol.[ a] Use:

273.001 DPT_Forecast_Temperature See DPT_Value_Temp °C 0,01 °C G
(9.001).

273.002 DPT_Forecast_WindSpeed See DPT_Value_Wsp m/s 0,01 m/s G
(9.005)

See DPT_Value_Humidity
273.003 DPT_Forecast_RelativeHumidity % 0,01 % G
(9.007)

273.004 DPT_Forecast_AbsoluteHumidity See DPT_Value_Humidity % 0,01 % G
(9.007)

273.005 DPT_Forecast_CO2 See DPT_Value_AirQuality ppm 0,01 ppm G
(9.008)

273.006 DPT_Forecast_AirPollutants See µgm[-3] 0,01 µgm G
DPT_Concentration_µgm3 -3
(9.030)

273.007 DPT_Forecast_SunIntensity See DPT_PowerDensity W/m[2] 0,01 W/m G
(9.022) 2

a This is for both the fields Maximal Value and Minimal Value. For the other fields, please refer to the
encoding below.

|r|r|r|r|B|B|B|B|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|M|E|E|E|E|M|M|M|
|---|---|---|---|---|---|---|---|

|M|M|M|M|M|M|M|M|
|---|---|---|---|---|---|---|---|

|M|E|E|E|E|M|M|M|
|---|---|---|---|---|---|---|---|

|M|M|M|M|M|M|M|M|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|8 octets: B U U F F<br>8 16 8 16 16<br>8 7 6 5<br>MSB<br>Mask DelayTime Probability<br>r r r r B B B B U U U U U U U U U U U U U U U U U U U U U U U U<br>4 3 2 1<br>LSB<br>Maximum Value Minimal Value<br>ME E E E MMM MMMMMMMM ME E E E MMM MMMMMMMM<br>PDT GENERIC 08<br>_ _|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Encoding a|Unit a|Resol. a|Use:|
|273.001|DPT_Forecast_Temperature|See DPT_Value_Temp<br>(9.001).|°C|0,01 °C|G|
|273.002|DPT_Forecast_WindSpeed|See DPT_Value_Wsp<br>(9.005)|m/s|0,01 m/s|G|
|273.003|DPT_Forecast_RelativeHumidity|See DPT_Value_Humidity<br>(9.007)|%|0,01 %|G|
|273.004|DPT_Forecast_AbsoluteHumidity|See DPT_Value_Humidity<br>(9.007)|%|0,01 %|G|
|273.005|DPT_Forecast_CO2|See DPT_Value_AirQuality<br>(9.008)|ppm|0,01 ppm|G|
|273.006|DPT_Forecast_AirPollutants|See<br>DPT_Concentration_µgm3<br>(9.030)|µgm-3|0,01 µgm<br>-3|G|
|273.007|DPT_Forecast_SunIntensity|See DPT_PowerDensity<br>(9.022)|W/m2|0,01 W/m<br>2|G|
|a <br>This is for both the fields Maximal Value and Minimal Value. For the other fields, please refer to the<br>encoding below.|a <br>This is for both the fields Maximal Value and Minimal Value. For the other fields, please refer to the<br>encoding below.|a <br>This is for both the fields Maximal Value and Minimal Value. For the other fields, please refer to the<br>encoding below.|a <br>This is for both the fields Maximal Value and Minimal Value. For the other fields, please refer to the<br>encoding below.|a <br>This is for both the fields Maximal Value and Minimal Value. For the other fields, please refer to the<br>encoding below.|a <br>This is for both the fields Maximal Value and Minimal Value. For the other fields, please refer to the<br>encoding below.|

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Mask|This field shall indicate<br>whether a further<br>corresponding field in<br>the DPT is valid or not.|b7 to b4:reserved. Shall be 0.<br>Validity fields<br>0: the field is invalid<br>1: the field is valid<br>b3: validity of the Delay Time<br>b2: validity of the Probability<br>b1: validity of the Maximum<br>Value<br>b0: validity of the Minimum<br>Value|See<br>encoding.|none|none|


-----

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Delay Time|This shall be the time<br>after reception of the<br>message when this<br>weather forecast will<br>become applicable.<br>NOTE 40<br>This DPT<br>does not foresee a time<br>span indicating the period<br>during which the weather<br>forecast is valid. The<br>weather forecast will be<br>valid until the next weather<br>forecast indication.|U16 according<br>DPT_TimePeriodMin (7.006)|1 min to<br>65 535<br>min|min|1 min|
|Probability|Probability of this<br>weather forecast.|U8 according DPT_Scaling<br>(5.001)<br>0 %:<br>absolute no certainty<br>… <br>100 %: absolute certainty|0 % to<br>100 %|%|≅ 0,4 %|
|Maximum<br>Value|This shall be the<br>maximal value.|F16|-671<br>088,64 to<br>670<br>760,96|See<br>above<br>.|See<br>above.|
|Minimum<br>Value|This shall be the<br>minimal value.|F16|-671<br>088,64 to<br>670<br>760,96|See<br>above<br>.|See<br>above.|


###### Error handling

 • If Maximal Value and Minimal Value are both valid, then the sender shall take care that the Maximal Value is higher than the Minimal Value; the receiver shall also check this and ignore the message if this is not the case.

#### 10.2 Forecasts for U8 values

|r|r|r|r|B|B|B|B|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding<br>octet nr.<br>field names<br>encoding<br>PDT:|6 octet: B U U U U<br>8 16 8 8 8<br>6 5 4 3<br>MSB<br>Mask DelayTime Probability<br>r r r r B B B B U UUUUUUU U UUUUUUU U UUUUUUU<br>2 1<br>LSB<br>Maximum Minimum<br>Value Value<br>U U U U U U U U U U U U U U U U<br>PDT GENERIC 06<br>_ _|Col3|
|---|---|---|
|<br>**Datapoint Types**|<br>**Datapoint Types**|<br>**Datapoint Types**|
|ID:|Name:|Use:|
|274.001|DPT_Forecast_Wind_Direction|G|


-----

|Field|Description|Encoding|Range|Unit|Resol.:|
|---|---|---|---|---|---|
|Mask|This field shall indicate<br>whether a further<br>corresponding field in<br>the DPT is valid or not.|b7 to b4:reserved. Shall be 0.<br>Validity fields<br>0: the field is invalid<br>1: the field is valid<br>b3: validity of the Delay Time<br>b2: validity of the Probability<br>b1: validity of the Maximum<br>Value<br>b0: validity of the Minimum<br>Value|See<br>encoding<br>.|none|none|
|Delay Time|This shall be the time<br>after reception of the<br>message when this<br>weather forecast will<br>become applicable.<br>NOTE 41<br>This DPT<br>does not foresee a time<br>span indicating the<br>period during which the<br>weather forecast is<br>valid. The weather<br>forecast will be valid<br>until the next weather<br>forecast indication.|U16 according<br>DPT_TimePeriodMin (7.006)|1 min to<br>65 535<br>min|min|1 min|
|Probability|Probability of this<br>weather forecast.|U8 according DPT_Scaling<br>(5.001)<br>0 %:<br>absolute no certainty<br>… <br>100 %: absolute certainty|0 % to<br>100 %|%|≅ 0,4 %|
|Maximum<br>Value|This shall be the<br>numerical maximal<br>value.|U8 according DPT_Angle<br>(5.003): see the mapping of<br>wind direction in [06].<br>0°:<br>North<br>… <br>270°:<br>West|0° to<br>360°|°|≈ 1,4°|
|Minimum<br>Value|This shall be the<br>numerical minimal<br>value.|U8 according DPT_Angle<br>(5.003): see the mapping of<br>wind direction in [06].<br>0°:<br>North<br>… <br>270°:<br>West|0° to<br>360°|°|≈ 1,4°|


###### Error handling

 • If Maximal Value and Minimal Value are both valid, then the sender shall take care that the Maximal Value is higher than the Minimal Value; the receiver shall also check this and ignore the message if this is not the case.


-----

### 11 Parameter Types

|PART Name<br>_|Parameter<br>Size|Parameter<br>Format|Standard<br>Parameter<br>Type|DPT ID<br>_|DPT Name<br>_|Range|
|---|---|---|---|---|---|---|
|PART_Switch_Value|1 bit|B1|0101h|1.001|DPT_Switch|As in DPT.|
|PART_Boolean|1 bit|B1|0102h|1.002|DPT_Bool|As in DPT.|
|PART_UpDown_Action|1 bit|B1|0103h|1.008|DPT_UpDown|As in DPT.|
|PART_Invert|1 bit|B1|0104h|1.012|DPT_Invert|As in DPT.|
|PART_Logical|1 bit|B1|0105h|1.021|DPT_LogicalFunction|As in DPT.|
|PART_Scene_Value|1 bit|B1|0106h|1.022|DPT_Scene_AB|As in DPT.|
|PART_Blind_Mode|1 bit|B1|0107h|1.023|DPT_ShutterBlinds_Mode|As in DPT.|
|PART_Enable|1 bit|B1|0108h|1.003|DPT_Enable|(no indications)|
|PART_Scene_Number|6 bit|U6|1101h|17.001|DPT_SceneNumber|[0 … 7]|
|PART_Date_Time|8 octets|U8[r4U4][r3U5][U3U5]-<br>[r2U6][r2U6]B16|1301h|19.001|DPT_DateTime|As in DPT.|
|PART_Cycle_Time|1 octet|N8|1401h|20.013|DPT_Time_Delay|{5, 8, 9, 10, 13, 15}|
|PARTTimeDelay|1 octet|N8|1402h|20.013|DPTTimeDelay|As in DPT.|
|__<br>PARTPrewarningDelay|1 octet|N8|1403h|20.013|__<br>DPTTimeDelay|{0, 6, 8, 10}|
|__<br>PARTHVACMode|1 octet|N8|1404h|20.102|__<br>DPTHVACMode|(no indications)|
|_<br>PART_MasterSlaveMode|1 octet|N8|1405h|20.112|_<br>DPT_MasterSlaveMode|(no indications)|
|PART_Adaptive_Selection|1 octet|U5N3|E401h|228.1000|DPT_Adaptive_Selection|Prio: As in DPT.<br>Size:{001b, 010b, 011b}|
|PARTOnOffAction|2 bit|N2|1701h|23.001|DPTOnOffAction|As in DPT.|
|__<br>PARTAlarmReaction|2 bit|N2|1702h|23.002|_<br>DPTAlarmReaction|As in DPT.|
|__<br>PART_UpDown_Switch_Action|2 bit|N2|1703h|23.003|__<br>DPT_UpDown_Action|As in DPT.|
|PART_PB_Action_HVAC|2 bit|N2|1704h|23.102|DPT_HVAC_PB_Action|As in DPT.|
|PART_UpDown_Action_Extended|2 bit|N2|1705h|23.xxx|DPT_XXX|(no indications)|
|PART_Byte_Value|1 octet|U8|0501h|(none)|(none)|(no indications)|
|PART_Dimming_Value|8 bit|U8|0502h|5.001|DPT_Scaling|As in DPT.|
|PART_Adjustable_Selection|1 octet|U8|0503h|5.010|DPT_Value_1_Ucount|As in DPT.<br>0 = none|
|PART_Shutter_Position|1 octet|U8|0504h|5.001|DPT_Scaling|(no indications)|
|PART_Slat_Position|1 octet|U8|0505h|5.001|DPT_Scaling|(no indications)|
|PART_Orientation|1 octet|U8|0506h|5.003|DPT_Angle|(no indications)|
|PART_Render_Value|2 octets|U16|0701h|7.001|DPT_Value_2_Ucount|As in DPT.|
|PART_Light_Value|2 octets|U16|0702h|7.013|DPT_Brightness|As in DPT.|
|PART_Move_UpDown_Time|2 octets|U16|0703h|7.005|DPT_TimePeriodSec|(no indications)|
|PART_COV_Lux|2 octets|F16|0901h|9.004|DPT_Value_Lux|As in DPT.|


-----

PART_COV_Power 4 octets t.b.d. t.b.d. 14.056 DPT_Value_Power As in DPT.
PART_COV_Energy 4 octets t.b.d. t.b.d. 13.010 DPT_ActiveEnergy As in DPT.

|PART Name<br>_|Parameter<br>Size|Parameter<br>Format|Standard<br>Parameter<br>Type|DPT ID<br>_|DPT Name<br>_|Range|
|---|---|---|---|---|---|---|
|PART_Value_Tempd|2 octets|F16|0902h|9.002|DPT_Value_Tempd|(no indications)|
|PART_Input_Connected|4 bit|none||none|No DPT is defined.<br>Coding: for bit 0 (lsb) to bit 3<br>bit n = 0: Input n is not connected<br>bit n = 1: Input n is connected|All 4 bits {0,1}|
|PART_PB_Action_HVAC_Extended|3 bit|t.b.d.|t.b.d.|t.b.d.|DPT_HVAC_PB_Action_Extende<br>d|As in DPT.|
|PART_COV_Power|4 octets|t.b.d.|t.b.d.|14.056|DPT_Value_Power|As in DPT.|
|PART_COV_Energy|4 octets|t.b.d.|t.b.d.|13.010|DPT_ActiveEnergy|As in DPT.|


-----

###### (normative)

## DPT_HVACStatus

###### DPT_HVACStatus is a non-standard DPT that is used by an HVAC Room controller to report the currently set HVAC Mode by means of a status/diagnostic Datapoint.

 The use of the possible DPTs to this purpose shall comply with Table 6.

 Table 6 – Use conditions of DPT_HVACStatus and DPT_StatusRHCC

**DPT** **Until April 2010** **After April 2010**

DPT_HVACStatus may[ a)] may
(Eberle status octet)

DPT_StatusRHCC may[ a)] shall

a) At least one of DPT_HVACStatus or DPT_StatusRHCC shall be used.

###### It may use the following non-standardised but common coding, sometimes referred to as ‘the Eberle status octet’ (but only until April 2010, if this DPT is the only status/diagnostic Datapoint included in the respective application for this purpose).

Format: 1 octet: B8

octet nr. 1

field Attributes
names

b7b6b5b4b3b2b1b0

encoding b b b b b b b b

Resol.: not applicable

PDT: PDT_BITSET8 (alt: PDT_GENERIC_01)

**Datapoint Types**

ID: Name: Encoding: Range: Use:

-- DPT_HVACStatus See below See below HVAC

|DPT|Until April 2010|After April 2010|
|---|---|---|
|DPT_HVACStatus<br>(Eberle status octet)|may a)|may|
|DPT_StatusRHCC|may a)|shall|
|<br>a) At least one of DPT_HVACStatus or DPT_StatusRHCC shall be used.|<br>a) At least one of DPT_HVACStatus or DPT_StatusRHCC shall be used.|<br>a) At least one of DPT_HVACStatus or DPT_StatusRHCC shall be used.|

|1|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|Attributes|Attributes|Attributes|Attributes|Attributes|Attributes|Attributes|Attributes|
|b7|b6|b5|b4|b3|b2|b1|b0|

|b|b|b|b|b|b|b|b|
|---|---|---|---|---|---|---|---|

|respective|application for this purpose).|Col3|Col4|Col5|
|---|---|---|---|---|
|Format: <br>octet nr.<br>field<br>names<br> <br>encoding<br>Resol.:<br>PDT:|1 octet: B8 <br> <br>1 <br> <br>Attributes<br> b7b6b5b4b3b2b1b0 <br> b b b b b b b b<br>not applicable<br>PDT_BITSET8<br>(alt: PDT_GENERIC_01)|1 octet: B8 <br> <br>1 <br> <br>Attributes<br> b7b6b5b4b3b2b1b0 <br> b b b b b b b b<br>not applicable<br>PDT_BITSET8<br>(alt: PDT_GENERIC_01)|1 octet: B8 <br> <br>1 <br> <br>Attributes<br> b7b6b5b4b3b2b1b0 <br> b b b b b b b b<br>not applicable<br>PDT_BITSET8<br>(alt: PDT_GENERIC_01)|1 octet: B8 <br> <br>1 <br> <br>Attributes<br> b7b6b5b4b3b2b1b0 <br> b b b b b b b b<br>not applicable<br>PDT_BITSET8<br>(alt: PDT_GENERIC_01)|
|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|<br> <br>**Datapoint Types**|
|ID:|Name:|Encoding:|Range:|Use:|
|--|DPT_HVACStatus|See below|See below|HVAC|

|Data fields|Col2|Description|Encoding|Unit|Range|
|---|---|---|---|---|---|
|Bit|Attributes|||||
|b0|Comfort|Indicates whether comfort mode is active or<br>not|0 = false<br>1 = true|none|{0,1}|
|b1|Standby|Indicates whether standby mode is active or<br>not|0 = false<br>1 = true|none|{0,1}|
|b2|Night|Indicates whether night mode is active or not|0 = false<br>1 = true|none|{0,1}|
|b3|Frost/Heat<br>protection|Indicates whether frost/heat protection is<br>active or not|0 = false<br>1 = true|none|{0,1}|
|b4|Dew Point|Indicates whether dew point mode is active<br>or not|0 = false<br>1 = true|none|{0,1}|
|b5|Heat/Cool|Indicates whether the controller is heating or<br>cooling|0 = cooling<br>1 = heating|none|{0,1}|


-----

|Data fields|Col2|Description|Encoding|Unit|Range|
|---|---|---|---|---|---|
|Bit|Attributes|||||
|b6|Controller Status|Indicates whether the controller is active or<br>inactive|0 = active<br>1 = inactive|none|{0,1}|
|b7|Frost alarm|Indicates whether the frost alarm is active|0 = inactive<br>1 = active|none|{0,1}|


-----

###### (normative)

## Legacy non-standard DPTs for DALI Emergency Lighting

#### B.1 Applicability of the new DPTs introduced in this paper
###### The following DPTs are standardised for gateways to DALI Emergency lighting.

 - 20.611 DPT_Converter_Test_Control (DPT_CTC)
 - 20.612 DPT_Converter_Control (DPT_CC)
 - 20.613 DPT_Converter_Data_Request (DPT_CDR)
 - 244.600 DPT_Converter_Status (DPT_CS)
 - 245.600 DPT_Converter_Test_Result (DPT_CTR)
 - 246.600 DPT_Battery_Info (DPT_BI)
 - 247.600 DPT_Converter_Test_Info (DPT_CTI)
 - 248.600 DPT_Converter_Info_Fix (DPT_CIF)
 - 272.600 DPT_Converter_Info

 These DPTs are mandatory as from September 12, 2015, for new application versions and for new applications. For bug fixes – this is, without new GOs or Parameters - of existing applications, legacy non-standard DPTs will be accepted until September 12, 2019.

#### B.2 Legacy Datapoints and non-standard DPTs

##### B.2.1 Goal and use
###### This clause describes the legacy Datapoints of already existing implementations.

 This clause describes some of the existing non-standard DPTs that have been used for mapping DALI emergency lighting in the past. The below descriptions may be incomplete and may differ from the current realisations. For the current description of approved non-standard DPTs for this purpose, members of KNX Association can consult KNX Association.

##### B.2.2 Overview

|Datapoint|Abbr.|Description/Remarks|Datapoint Type|
|---|---|---|---|
|**Inputs / Outputs**||||
|Addressed Converter Test<br>Status|ACTS|Information about the emergency<br>converter and test status of the DALI gear<br>selected by thegiven DALI short address.|2 octets|
|Addressed Converter Test<br>Trigger|ACTT|Start one of the emergency light tests<br>given in the enumeration for the DALI<br>gear selected by the given DALI short<br>address. Any running test on this<br>emergency converter will be aborted<br>before the new test is started.|2 octets|
|Addressed Brightness Level<br>Status|ABLS|Information about the brightness level of<br>the DALI control gear(s) selected by the<br>given DALIgroup or short address.|2 octets|
|Addressed Switch Status|ASS|Information about the switching status of<br>the DALI control gear(s) selected by the<br>given DALIgroup or short address.|2 octets|


-----

|Datapoint|Abbr.|Description/Remarks|Datapoint Type|
|---|---|---|---|
|Converter Test Trigger and<br>Status|CTTS|Start one of the emergency light tests<br>given in the enumeration and get<br>information about the status of the<br>converter connected to the DALI bus.|1 octet|
|Addressed DALI Device Failure<br>Status|ADDF|Information about the failure states of the<br>DALI control gear(s) selected by the given<br>DALIgroup or short address|237.600|
|Addressed Converter Test<br>Result|ACTR|Getting collected information about the<br>emergency test results of the emergency<br>converter connected to the DALI bus.|4 octets|
|Emergency operation Test<br>Start/Status|EOTS<br>S|Starting and stopping, as well as the<br>provision of status information of the<br>diagnostics function of single battery-<br>operated DALI emergency lights in only<br>one datapoint.|1 octet|
|**Outputs**||||
|Converter Fault Statistics|CFS|Getting collected information about a<br>certain group of control gears and<br>emergency converter connected to the<br>DALI bus.|4 octets|
|Feedback emergency operation<br>test|FEOT|Provision of the test results of the<br>diagnostics function of single battery-<br>operated DALI emergency lights in only<br>one datapoint.|3 octets|
|**Inputs**||||
|Converter Test Trigger|CTT|Starts one of the emergency light tests<br>given in the enumeration. Any running<br>test will be aborted before new test is<br>started.|1 octet|
|Converter Test Stop|CTS|Stops all emergency lighting tests|DPT 1.010|
|Emergency operation Test<br>Start/Status|EOTS<br>S|Emergency operation Test Start/Status|1 octet|
|Feedback emergency operation<br>test|FEOT|Provision of the test results of the<br>diagnostics function of single battery-<br>operated DALI emergency lights in only<br>one datapoint.|3 octets|


-----

##### B.2.3 Addressed Converter Test Status (ACTS) (LEGACY!)

DP Name: Addressed Converter Test Status Abbr.: ACTS Mandatory
FB Name: Can be internal
Description
Triggers or sends information about the emergency converter and test status of the DALI gear selected
by the given DALI short address.
Datapoint Type
DPT_Name: None.
DPT Format: DPT_ID:
Field Supp. Range Unit Default

Access Type
♦ Input
N → this 1 → this
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

###### Format definition

|DP Name:|Col2|Addressed Converter Test Status|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|Col20|ACTS|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:||||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|Triggers or sends information about the emergency converter and test status of the DALI gear selected<br>by the given DALI short address.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTName:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|||||||||||||||||||DPTID:|DPTID:|DPTID:|DPTID:||||||||||||
|Field|Field|Field||||||||||||||||||_<br>Supp.|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|N → this|N → this||||1 → this|1 → this|1 → this|1 → this||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:|||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request|Request|||||||||||||||||||||||||||||||||
|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|
||this→ M|this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:|||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request|Request|||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|

|c|l|m|s|Test<br>Type|
|---|---|---|---|---|

|0|0|DALI<br>Address|
|---|---|---|

|B|B|B|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|B|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|16-Bit: B N N B r U<br>3 2 3 1 1 6<br>2 1<br>MSB LSB<br>Test DALI<br>c l m s 0 0<br>Type Address<br>B B B NNNNN B r UUUU U U|
|---|---|

|Field<br>names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|- c|Emergency converter<br>failure|0 = ok<br>1 = Converter failure|None|{0, 1}|not applicable|
|- l|Lamp failure|0 = ok<br>1 = Lamp failure|None|{0, 1}|not applicable|
|- m|Current test given by<br>Test Type was started<br>manually|0 = Automatic test<br>1 = Manually triggered<br>test|None|{0, 1}|not applicable|


-----

|Field<br>names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|- s|Status of the test given<br>in Test Type|0 = Completed / Idle<br>1 = Pending<br>2 = Running<br>3 = Aborted|None|{0…3}|not applicable|
|- Test Type|Type of converter test|0 = None<br>1 = Function Test<br>2 = Partial duration Test<br>3 = Duration Test<br>4 4,5,6 = reserved<br>7 = invalid1|None|{0…7}|not applicable|
|- DALI<br>Address|DALI Short Address|See note|None|{0…63}|not applicable|


##### B.2.4 Addressed Converter Test Trigger (ACTT) (LEGACY!)

DP Name: Addressed Converter Test Trigger Abbr.: ACTT Mandatory
FB Name: Can be internal
Description

Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by
the given DALI short address. Any running test on this converter will be aborted before the new test is
started.

If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the
new test shall be carried out. This is also the case when the ongoing test is requested again. Only one
test can be undertaken on the converter at any time.

A Stop test always triggers the sending of Test Status independent from if a test is running or not.
Datapoint Type
DPT_Name: None.
DPT Format: DPT_ID: None.
Field Supp. Range Unit Default

Access Type
♦ Input
N → this 1 → this
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

|DP Name:|Col2|Addressed Converter Test Trigger|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|Col20|ACTT|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:||||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|Start one of the emergency light converter tests given in the enumeration for the DALI gear selected by<br>the given DALI short address. Any running test on this converter will be aborted before the new test is<br>started.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.<br>A Stop test always triggers the sending of Test Status independent from if a test is running or not.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|_<br>DPT Format:|_<br>DPT Format:||||||||||||||||||||DPTID:|DPTID:|DPTID:|DPTID:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Field|Field|||||||||||||||||||_<br>Supp.|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|N → this||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request||||||||||||||||||||||||||||||||||
|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|
||this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request||||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### Format definition

**Format:** 2 octets: r5N3r2U6

octet nr. 2MSB 1LSB

DALI

field names 0 0 0 0 0 [Test ]

Type [ 0 0 ] Address

encoding r r r r r NNN r r UUUU U U

**Field names Description** **Encoding** **Unit** **Range** **Resolution:**

 - Test Type Type of converter test 0 = Stop Test None {0…7} not applicable
1 = Start Function Test
2 = Start Partial duration Test
3 = Start Duration Test
4-7 = reserved

 - DALI DALI Short Address See note None {0…63} not applicable
Address

##### B.2.5 Addressed Brightness Level Status (ABLS) (LEGACY!)

DP Name: Addressed Brightness Level Status Abbr.: ABLS Mandatory
FB Name: Can be internal
Description
Triggers or sends information about the brightness level of the DALI control gear(s) selected by the
given DALI group or short address.
Datapoint Type
DPT_Name: None.
DPT Format: DPT_ID: None.
Field Supp. Range Unit Default

Access Type
♦ Input
N → this 1 → this
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

|0|0|0|0|0|Test<br>Type|
|---|---|---|---|---|---|

|0|0|DALI<br>Address|
|---|---|---|

|r|r|r|r|r|N|N|N|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|2 octets: r N r U<br>5 3 2 6<br>2 1<br>MSB LSB<br>Test DALI<br>0 0 0 0 0 0 0<br>Type Address<br>r r r r r NNN r r UUUU U U|
|---|---|

|Field names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|- Test Type|Type of converter test|0 = Stop Test<br>1 = Start Function Test<br>2 = Start Partial duration Test<br>3 = Start Duration Test<br>4-7 = reserved|None|{0…7}|not applicable|
|- DALI<br>Address|DALI Short Address|See note|None|{0…63}|not applicable|

|DP Name:|Col2|Addressed Brightness Level Status|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Abbr.:|Col16|Col17|Col18|Col19|ABLS|Col21|Col22|Col23|Col24|Mandatory|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the brightness level of the DALI control gear(s) selected by the<br>given DALI group or short address.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|_<br>DPT Format:|_<br>DPT Format:|||||||||||||||||||DPTID:|DPTID:|DPTID:|DPTID:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Field|Field||||||||||||||||||_<br>Supp.|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|N → this||||1 → this|1 → this|1 → this|1 → this||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:|||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request|||||||||||||||||||||||||||||||||
|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|
||this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:|||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request|||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### Format definition

|r/<br>w|g<br>/<br>s|DALI<br>Address|
|---|---|---|

|U|U|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|2 octets: U B U<br>8 2 6<br>2 1<br>MSB LSB<br>g<br>Brightness r/ DALI<br>/<br>Level Status w Address<br>s<br>UUUUUUUU B B UUUU U U|
|---|---|

|Field names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|- Brightness<br>Level Status|Current Brightness Level Status|0 = Off<br>1 = min.<br>255= max.|%|{0…100<br>}|~0,4%|
|- r/w|Read / Write|1 = request<br>0 = answer|None|{0, 1}|not applicable|
|- g/s|Group / Short|1 = Group Addr.<br>0 = Short Addr.|None|{0, 1}|not applicable|
|- DALI Address|DALI Group or Short Address|See note|None|{0…15}<br>{0…63}|not applicable|


-----

##### B.2.6 Addressed Switch Status (ASS) (LEGACY!)

DP Name: Addressed Switch Status Abbr.: ASS Mandatory
FB Name: Can be internal
Description
Triggers or sends information about the switching status of the DALI control gear(s) selected by the
given DALI group or short address.
Datapoint Type
DPT_Name: None.
DPT Format: DPT_ID: None.
Field Supp. Range Unit Default

Access Type
♦ Input
N → this 1 → this
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

###### Format definition

|DP Name:|Col2|Addressed Switch Status|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Abbr.:|Col16|Col17|Col18|Col19|ASS|Col21|Col22|Col23|Col24|Mandatory|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|Triggers or sends information about the switching status of the DALI control gear(s) selected by the<br>given DALI group or short address.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|_<br>DPT Format:|_<br>DPT Format:|||||||||||||||||||DPTID:|DPTID:|DPTID:|DPTID:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Field|Field||||||||||||||||||_<br>Supp.|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|N → this||||1 → this|1 → this|1 → this|1 → this||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:|||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request|||||||||||||||||||||||||||||||||
|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|
||this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:|||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request|||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|

|0|0|0|0|0|0|0|s|
|---|---|---|---|---|---|---|---|

|r/<br>w|g<br>/<br>s|DALI<br>Address|
|---|---|---|

|r|r|r|r|r|r|r|B|
|---|---|---|---|---|---|---|---|

|B|B|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|16-Bit: r B U<br>7 3 6<br>2 1<br>MSB LSB<br>g<br>r/ DALI<br>0 0 0 0 0 0 0 s /<br>w Address<br>s<br>r r r r r r r B B B UUUU U U|
|---|---|

|Field names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|- s|Switching Status|0 = Off<br>1 = On|None|{0, 1}||
|- r/w|Read / Write|1 = request<br>0 = answer|None|{0, 1}||
|- g/s|Group / Short|1 = Group Addr.<br>0 = Short Addr.|None|{0, 1}||
|- DALI<br>Address|DALI Group or Short Address|See note|None|{0…15}<br>{0…63}||


-----

##### B.2.7 Converter Test Trigger and Status (CTTS) (LEGACY!)

DP Name: Converter Test Trigger and Status Abbr.: CTTS Mandatory
FB Name: Can be internal
Description
Start one of the emergency converter tests given in the enumeration and get information about the
status of the converter connected to the DALI bus.
If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the
new test shall be carried out. This is also the case when the ongoing test is requested again. Only one
test can be undertaken on the converter at any time.
Datapoint Type
DPT_Name: None.
DPT Format: DPT_ID: None.
Field Supp. Range Unit Default

Access Type
♦ Input
N → this 1 → this
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

|DP Name:|Col2|Converter Test Trigger and Status|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|Col20|CTTS|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:||||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|Start one of the emergency converter tests given in the enumeration and get information about the<br>status of the converter connected to the DALI bus.<br>If a new test is requested via this data point, an ongoing test shall be immediately interrupted and the<br>new test shall be carried out. This is also the case when the ongoing test is requested again. Only one<br>test can be undertaken on the converter at any time.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|_<br>DPT Format:|_<br>DPT Format:||||||||||||||||||||DPTID:|DPTID:|DPTID:|DPTID:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Field|Field|||||||||||||||||||_<br>Supp.|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|N → this||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request||||||||||||||||||||||||||||||||||
|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|
||this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request||||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### Format definition

|c|l|m|s|Test<br>Type|
|---|---|---|---|---|

|B|B|B|N|N|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|8-Bit: B N N<br>3 2 3<br>1<br>Test<br>c l m s<br>Type<br>B B B NNNN N|
|---|---|

|Field names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|- c|Emergency converter<br>failure|0 = ok<br>1 = Converter failure|None|{0, 1}|not applicable|
|- l|Lamp failure|0 = ok<br>1 = Lamp failure|None|{0, 1}|not applicable|
|- m|Current test given by Test<br>Type was started manually|0 = Automatic test<br>1 = Manually triggered<br>test|None|{0, 1}|not applicable|
|- s|Status of the test given in<br>Test Type|0 = Completed / Idle<br>1 = Pending<br>2 = Running<br>3 = Aborted|None|{0…3}|not applicable|
|- Test Type|Type of emergency test|0 = None<br>1 = Function Test<br>2 = Partial duration Test<br>3 = Duration Test<br>4 = Query Battery<br>5 = reserved<br>6 = reserved<br>7 = reserved, invalid1|None|{0…7}|not applicable|


-----

##### B.2.8 Emergency operation Test Start/Status (EOTSS) (LEGACY!)

DP Name: Emergency operation Test Abbr.: EOTSS Mandatory
Start/Status

FB Name: Can be internal
Description
Starting and stopping, as well as the provision of status information of the diagnostics function of single
battery-operated DALI emergency lights in only one data point.
Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and
for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination
of a test is possible on all bits with the object value "0". For as long as a test is running, the
corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).
Only one test can be run at any given time. Commands to start a test are rejected for as long as another
test is active. The object value is transmitted automatically on status changes. Alternatively, it can be
read out.
Datapoint Type
DPT_Name: None.
DPT Format: DPT_ID: None.
Field Supp. Range Unit Default

Access Type
♦ Input
N → this 1 → this
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

|DP Name:|Col2|Emergency operation Test<br>Start/Status|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|Col20|EOTSS|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:||||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|Starting and stopping, as well as the provision of status information of the diagnostics function of single<br>battery-operated DALI emergency lights in only one data point.<br>Bidirectional 1-byte object for starting functional tests for single battery-operated emergency lighting and<br>for transmitting the test status. The tests can be started in bit-orientated form with "1". Early termination<br>of a test is possible on all bits with the object value "0". For as long as a test is running, the<br>corresponding odd bits contain the test status ("1" = Test running, "0" = Test terminated or not started).<br>Only one test can be run at any given time. Commands to start a test are rejected for as long as another<br>test is active. The object value is transmitted automatically on status changes. Alternatively, it can be<br>read out.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|_<br>DPT Format:|_<br>DPT Format:||||||||||||||||||||DPTID:|DPTID:|DPTID:|DPTID:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Field|Field|||||||||||||||||||_<br>Supp.|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|N → this||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request||||||||||||||||||||||||||||||||||
|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|
||this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request||||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### Format definition

Format: 8-Bit: B8

octet nr. 1

field names h g f e d c b a

encoding B B B B B B B B

**Field names Description** **Encoding** **Unit** **Range** **Resolution:**

 - a Function test start B none 0, 1 not applicable

 - b Function test status B none 0, 1 not applicable

 - c Limited continuous operation test B none 0, 1 not applicable
start

 - d Limited continuous operation test B none 0, 1 not applicable
status

 - e Continuous operation test start B none 0, 1 not applicable

 - f Continuous operation test status B none 0, 1 not applicable

 - g Battery test start B none 0, 1 not applicable

 - h Battery test status B none 0, 1 not applicable

##### B.2.9 Converter Fault Statistics (CFS) (LEGACY!)

DP Name: Converter Fault Statistics Abbr.: CFS Mandatory
FB Name: Can be internal
Description
Getting collected information about a certain group of control gears and emergency converter
connected to the DALI bus.
Datapoint Type
DPT_Name: None.
DPT Format: DPT_ID: None.
Field Supp. Range Unit Default

Access Type
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value Min repetition time:

:

Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

|h|g|f|e|d|c|b|a|
|---|---|---|---|---|---|---|---|

|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|8-Bit: B<br>8<br>1<br>h g f e d c b a<br>B B B B B B B B|
|---|---|

|Field names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|- a|Function test start|B|none|0, 1|not applicable|
|- b|Function test status|B|none|0, 1|not applicable|
|- c|Limited continuous operation test<br>start|B|none|0, 1|not applicable|
|- d|Limited continuous operation test<br>status|B|none|0, 1|not applicable|
|- e|Continuous operation test start|B|none|0, 1|not applicable|
|- f|Continuous operation test status|B|none|0, 1|not applicable|
|- g|Battery test start|B|none|0, 1|not applicable|
|- h|Battery test status|B|none|0, 1|not applicable|

|DP Name:|Col2|Converter Fault Statistics|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|Col20|CFS|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:||||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|Getting collected information about a certain group of control gears and emergency converter<br>connected to the DALI bus.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|_<br>DPT Format:|_<br>DPT Format:||||||||||||||||||||DPTID:|DPTID:|DPTID:|DPTID:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Field|Field|||||||||||||||||||<br>Supp.|<br>Supp.|<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br> COV:|<br> COV:|<br> COV:|<br> COV:||||Δ-Value<br>:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:||||||||
|||||||Cyclic|Cyclic|Cyclic|Cyclic||||Period:||||||||||||||||||||||
||Request|Request|||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### Format definition

|n|e|Gear<br>faults|
|---|---|---|

|n|e|Lamp<br>faults|
|---|---|---|

|f|0|Emergen-<br>cy gears|
|---|---|---|

|0|0|Normal<br>gears|
|---|---|---|

|B|B|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|B|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|B|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|r|r|U|U|U|U|U|U|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|32-Bit: B U B U B r U r U<br>2 6 2 6 1 1 6 2 6<br>4 3 2 1<br>MSB LSB<br>Gear Lamp Emergen- Normal<br>n e n e f 0 0 0<br>faults faults cy gears gears<br>B B UUUUUU B B UU UUU U B r UUU UUU r r U UU U U U|
|---|---|

|Field names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|- n|Number of faults given in the<br>octet includes normal control<br>gears|0 = no normal gear<br>failure<br>1 = at least one normal<br>gear failure|None|{0, 1}||
|- e|Number of faults given in the<br>octet includes emergency<br>converter|0 = no emergency<br>converter failure<br>1 = at least one<br>emergency converter<br>failure|None|{0, 1}||
|- Gear faults|Total number of emergency<br>converter and normal control<br>gears with faults|Number|None|{0…63}||
|- Lamp faults|Total number of emergency<br>converter and normal control<br>gears with lamp fault|Number|None|{0…63}||
|- f|At least one of the counted<br>emergency converter has an<br>fault|0 = no emergency<br>converter failure<br>1 = at least one<br>emergency converter<br>failure|None|{0, 1}||
|- Emergency<br>converter|Number of emergency<br>converter in the group of control<br>gears|Number|None|{0…63}||
|- Normal<br>controlgears|Number of normal control gears<br>in thegroup of controlgears|Number|None|{0…63}||


-----

##### B.2.10 Converter Test Trigger (CTT) (LEGACY!)

DP Name: Converter Test Trigger Abbr.: CTT Mandatory
FB Name: Can be internal
Description
Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before
new test is started.
Datapoint Type
DPT_Name: None.
DPT Format: DPT_ID: None.
Field Supp. Range Unit Default

Access Type
♦ Input
N → this 1 → this
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

###### Format definition

|DP Name:|Col2|Converter Test Trigger|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|Col20|CTT|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:||||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|Starts one of the emergency light tests given in the enumeration. Any running test will be aborted before<br>new test is started.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|_<br>DPT Format:|_<br>DPT Format:||||||||||||||||||||DPTID:|DPTID:|DPTID:|DPTID:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Field|Field|||||||||||||||||||_<br>Supp.|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|N → this||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request||||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|

|r|r|r|r|r|Test<br>Type|
|---|---|---|---|---|---|

|0|0|0|0|0|N|N|N|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|8-Bit: r N<br>5 3<br>1<br>Test<br>r r r r r<br>Type<br>0 0 0 0 0 NNN|
|---|---|

|Field names|Description|Encoding|Unit|Rang<br>e|Resolution:|
|---|---|---|---|---|---|
|- Test Type|Type of emergency test|0 = Stop Test<br>1 = Start Function Test<br>2 = Start Partial duration Test<br>3 = Start Duration Test<br>4 = Start Query Battery<br>5 = reserved<br>6 = reserved<br>7 = reserved|None|{0…7}|not applicable|


-----

##### B.2.11 Converter Test Stop (CTS) (LEGACY!)

DP Name: Converter Test Stop Abbr.: CTS Mandatory
FB Name: Can be internal
Description
Stops all emergency lighting tests
Datapoint Type
DPT_Name: DPT_Start
DPT Format: B1 DPT_ID: 1.010
Field Supp. Range Unit Default

Access Type
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

|DP Name:|Col2|Converter Test Stop|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|Col20|CTS|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:||||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|Stops all emergency lighting tests|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|DPTStart|
|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.010|1.010|1.010|1.010|1.010|1.010|1.010|1.010|1.010|1.010|1.010|
|Field|Field|||||||||||||||||||_<br>Supp.|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
||Request|Request||||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

##### B.2.12 Feedback emergency operation test (FEOT) (LEGACY!)

DP Name: Feedback emergency operation test Abbr.: FEOT Mandatory
FB Name: Can be internal
Description
Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights
in only one data point.
3-byte object for bit-orientated provision of the test result of the function and continuous operation test of
a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end
of the test. Alternatively, it can be read out. Should a test have been cancelled early using the
"Emergency operation, test start / status", then no feedback is transmitted. The test result provided in the
object always contains the most recent result of the most recently started and ended test function.
Datapoint Type
DPT_Name: None.
DPT Format: DPT_ID: None.
Field Supp. Range Unit Default

Access Type
♦ Input
N → this 1 → this
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address:
Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

|DP Name:|Col2|Feedback emergency operation test|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|Col20|FEOT|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:||||||||||||||||||||||||Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|<br> <br>Description|
|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|Provision of the test results of the diagnostics function of single battery-operated DALI emergency lights<br>in only one data point.<br>3-byte object for bit-orientated provision of the test result of the function and continuous operation test of<br>a single battery-operated DALI emergency lamp. The object value is transmitted automatically at the end<br>of the test. Alternatively, it can be read out. Should a test have been cancelled early using the<br>"Emergency operation, test start / status", then no feedback is transmitted.The test result provided in the<br>object always contains the most recent result of the most recently started and ended test function.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|_<br>DPT Format:|_<br>DPT Format:||||||||||||||||||||DPTID:|DPTID:|DPTID:|DPTID:|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Field|Field|||||||||||||||||||_<br>Supp.|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|||||||||||||||||||||||||||||||||||||
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|N → this||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||||
||Request|Request||||||||||||||||||||||||||||||||||
|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|
||this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||||
||Request|Request||||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### Format definition

|Test result|m|l|k|j|i|h|g|f|
|---|---|---|---|---|---|---|---|---|

|r|r|r|e|d|c|b|a|
|---|---|---|---|---|---|---|---|

|U|U|U|U|U|U|U|U|B|B|B|B|B|B|B|B|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|0|0|0|B|B|B|B|B|
|---|---|---|---|---|---|---|---|

|Format:<br>octet nr.<br>field names<br>encoding|8-Bit: U B r B<br>8 8 3 5<br>3 2 1<br>MSB LSB<br>Test result m l k j i h g f r r r e d c b a<br>UUUUUUUU B B B B B B B B 0 0 0 B B B B B|
|---|---|

|Field names|Description|Encoding|Unit|Range|Resolution:|
|---|---|---|---|---|---|
|- a|Function test (1= Test ended)|B|none|0, 1|not applicable|
|- b|Limited continuous operation test<br>(1= Test ended)|B|none|0, 1|not applicable|
|- c|Continuous operation test (1 = Test<br>ended)|B|none|0, 1|not applicable|
|- d|Error status (1= Error(s) occurred)|B|none|0, 1|not applicable|
|- e|Battery test (1= Test ended)|B|none|0, 1|not applicable|
|- f|Converter error (1= Error(s) occurred)|B|none|0, 1|not applicable|
|- g|Battery status, operation length<br>(1= Operation length too short)|B|none|0, 1|not applicable|
|- h|Battery status (1= Battery defective)|B|none|0, 1|not applicable|
|- i|Emergency lamp status<br>(1= Emergency lamp defective)|B|none|0, 1|not applicable|
|- j|Time period, function test<br>(1= maximum time period exceeded)|B|none|0, 1|not applicable|
|- k|Time period, continuous operation test<br>(1= maximum time period exceeded)|B|none|0, 1|not applicable|
|- l|Function test result (1= Error)|B|none|0, 1|not applicable|
|- m|Continuous operation test result (1 =<br>Error)|B|none|0, 1|not applicable|
|Test result|Battery charging or continuous operation<br>test<br>(depending on the started test function)|U8|%,<br>min.|0-255|0,4%, min.x2|


-----

###### (informative)

## Chronologic overview of DPTs added and modified in this paper

#### C.1 Chronologic overview

|Version|Modification|
|---|---|
|01.08.03|Added the following DPTs.<br>− 20.114<br>DPT_Metering_DeviceType<br>− 20.1202<br>DPT_Gas_Measurement_Condition<br>− 20.1200<br>DPT_MBus_BreakerValve_State<br>− 9.009<br>DPT_Value_AirFlow<br>Updated specifications of<br>− 229.001<br>DPT_MeteringValue|
|01.09.01|<br>Integration of AN166 “DALI emergency light control”. Integration of the following DPTs:<br>− 20.611<br>DPT_Converter_Test_Control (DPT_CTC)<br>− 20.612<br>DPT_Converter_Control (DPT_CC)<br>− 20.613<br>DPT_Converter_Data_Request (DPT_CDR)<br>− 244.600<br>DPT_Converter_Status (DPT_CS)<br>− 245.600<br>DPT_Converter_Test_Result (DPT_CTR)<br>− 246.600<br>DPT_Battery_Info (DPT_BI)<br>− 247.600<br>DPT_Converter_Test_Info (DPT_CTI)<br>− 248.600<br>DPT_Converter_Info_Fix (DPT_CIF)|
|01.11.01|<br>Completion of integration of AN166 “DALI emergency light control”.<br>− 272.600<br>DPT_Converter_Info|
|02.01.01|<br>Integration of AN158 “KNX Data Security”<br>− 21.1002<br>DPT_Security_Report<br>AN169 “Secure PV-Mode Configuration”<br>− 20.1005<br>DPT_PB_Function<br>Integration of AN161 “Coupler Model 2.0”<br>− 20.1004<br>DPT_Medium<br>Integration of AN173 “WGI accepted DPTs 10.13”<br>− 1.024<br>DPT_DayNight<br>− 8.012<br>DPT_Length_m<br>− 12.1200<br>DPT_VolumeLiquid_Litre<br>− 12.1201<br>DPT_Volume_m3<br>− 13.1200<br>DPT_DeltaVolumeLiquid_Litre<br>− 13.1201<br>DPT_DeltaVolume_m3<br>− 13.016<br>DPT_ActiveEnergy_MWh4<br>− 14.1200<br>DPT_Volume_Flux_Meter<br>− 14.1201<br>DPT_Volume_Flux_ls<br>− 20.115<br>DPT_HumDehumMode<br>− 20.022<br>DPT_PowerReturnMode<br>− 20.609<br>DPT_LoadTypeSet (range extended)<br>− 20.610<br>DPT_LoadTypeDetected (range extended)<br>Integration of DPT for colour control in 7/20/1, 7/20/2 and 7/20/3<br>− 251.600<br>DPT_Colour_RGBW<br>− 252.600<br>DPT_Relative_Control_RGBW<br>− 254.600<br>DPT_Relative_Control_RGB|
|02.01.02|<br>Integration of further DPTs for colour control.<br>− 7.600<br>DPT_Absolute_Colour_Temperature<br>− 250.600<br>DPT_Brightness_Colour_Temperature_Control<br>− 242.600<br>DPT_Colour_xyY|


-----

|Version|Modification|
|---|---|
||− 253.600<br>DPT_Relative_Control_xyY<br>− 243.600<br>DPT_Colour_Transition_xyY<br>Integration of DPTs from AN182 v03 “WGI accepted DPTs 07.16”<br>− 273.001<br>DPT_Forecast_Temperature<br>− 273.002<br>DPT_Forecast_WindSpeed<br>− 273.003<br>DPT_Forecast_RelativeHumidity<br>− 273.004<br>DPT_Forecast_AbsoluteHumidity<br>− 273.005<br>DPT_Forecast_CO2<br>− 273.006<br>DPT_Forecast_AirPollutants<br>− 273.007<br>DPT_Forecast_SunIntensity<br>− 274.001<br>DPT_Forecast_Wind_Direction<br>− 9.029<br>DPT_Value_Absolute_Humidity<br>− 9.030<br>DPT_Concentration_µgm3<br>− 20.021<br>DPT_Cloud_Cover<br>− 255.001<br>DPT_GeographicalLocation<br>− 12.100<br>DPT_LongTimePeriod_Sec<br>− 12.101<br>DPT_LongTimePeriod_Min<br>− 12.102<br>DPT_LongTimePeriod_Hrs<br>Integration of DPTs from AN179 “ERL Channel”<br>− 14.080<br>DPT_Value_ApparentPower<br>− 265.001<br>DPT_DateTime_Switch<br>− 265.005<br>DPT_DateTime_Alarm<br>− 265.009<br>DPT_DateTime_OpenClose<br>− 265.011<br>DPT_DateTime_State<br>− 265.012<br>DPT_DateTime_Invert<br>− 266.027<br>DPT_DateTime_Value_Electric_Potential<br>− 266.056<br>DPT_DateTime_Value_Power<br>− 266.080<br>DPT_DateTime_Value_ApparentPower<br>− 267.001<br>DPT_DateTime_UTF-8<br>− 256.001<br>DPT_DateTime_Period<br>− 1.1200<br>DPT_ConsumerProducer<br>− 1.1201<br>DPT_EnergyDirection<br>− 257.1200 DPT_Value_Electric_Current_3<br>− 257.1201 DPT_Value_Electric_Potential_3<br>− 257.1202 DPT_Value_ApparentPower_3<br>− 20.1203<br>DPT_Breaker_Status<br>− 20.1204<br>DPT_Euridis_Communication_Interface_Status<br>− 20.1205<br>DPT_PLC_Status<br>− 20.1206<br>DPT_Peak_Event_Notice<br>− 20.1207<br>DPT_Peak_Event<br>− 20.1208<br>DPT_TIC_Type<br>− 20.1209<br>DPT_Type_TIC_Channel<br>− 21.1200<br>DPT_VirtualDryContact<br>− 21.1201<br>DPT_Phases_Status<br>− 257.1200 DPT_Value_Electric_Current_3<br>− 257.1201 DPT_Value_Electric_Potential_3<br>− 257.1202 DPT_Value_ApparentPower_3<br>− 265.1200 DPT_DateTime_ConsumerProducer<br>− 265.1201 DPT_DateTime_EnergyDirection<br>− 268.1203 DPT_DateTime_Breaker_Status<br>− 268.1204 DPT_DateTime_Euridis_Communication_Interface_Status<br>− 268.1205 DPT_DateTime_PLC_Status<br>− 268.1206 DPT_DateTime_Peak_Notice<br>− 269.1200 DPT_DateTime_Tariff_ActiveEnergy<br>− 270.1200 DPT_DateTime_Value_Electric_Current_3|


-----

02.02.01 Integration of DPT_HVACAirQualRel_Z (205.103), which was missing from 7/10/1.

|Version|Modification|
|---|---|
||− 270.1201 DPT_DateTime_Value_Electric_Potential_3<br>− 270.1202 DPT_DateTime_Value_ApparentPower_3<br>− 271.1200 DPT_TariffDayProfile<br>− 276.1200 DPT_ERL_Status<br>− 277.1200 DPT_4_EnergyRegisters<br>− 278.1200 DPT_5_EnergyRegisters<br>− 279.1200 DPT_6_EnergyRegisters<br>− 280.1200 DPT_11_EnergyRegisters<br>− 281.1200 DPT_DateTime_4_EnergyRegisters<br>− 282.1200 DPT_DateTime_5_EnergyRegisters<br>− 283.1200 DPT_DateTime_6_EnergyRegisters<br>− 284.1200 DPT_DateTime_11_EnergyRegisters<br>− **Extension** of the following:<br>19.001<br>DPT_DateTime with field SRC.|
|02.02.01|<br>Integration of DPT_HVACAirQualRel_Z (205.103), which was missing from 7/10/1.|


-----

