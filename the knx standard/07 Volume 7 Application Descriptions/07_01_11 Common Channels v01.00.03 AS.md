# Application Descriptions

## Functional Blocks of Common Interest

 Common Channels

###### Summary

 This document provides the specification of the E-Mode Channels that are not specific to any Application Domain.

 Version 01.00.03 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

0.1 2007.10.01 Document creation.

              - **S12 “Channel Codes” integrated.**
2007.10.02       - **AN050 “AN to Supplement 12” integrated.**
2007.10.18       - **AN087 “New Channels 2005.02” integrated.**
2008.05.09       - Moved CH_LightSensor_Slave to Chapter 7/20/11 “Lighting Channels”.
2008.08.09       - **AN106 "Phasing out TP0" integrated.**

              - **AN107 "Phasing out LT-R" integrated.**

              - **AN108 "Phasing out LT-S" integrated.**

              - **AN109 "Phasing out PL132" integrated.**

              - **AN110 "Phasing out A-Mode" integrated.**
1.0 2009.05.05 Preparation of the Approved Standard in view of publication in the KNX
Specifications v2.0.
01.00.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.
01.00.02 2013.12.10 Final editorial review in view of publication of the KNX Specifications v2.1.
01.00.03 2022.02.24 Preparation for inclusion in the KNX Specifications v3.0.

#### References

[01] Chapter 3/7/3 “Standard Identifier Tables”

[02] Chapter 7/1/1 “System Clock”

[03] Chapter 7/1/2 “Common Sensors”

[04] Chapter 7/1/3 “Common Schedulers and Controllers”

[05] Chapter 7/1/5 “General Purpose I/O”

[06] Chapter 7/10/1 “HVAC Sensor Functional Blocks”

[07] Chapter 7/20/1 “Lighting Sensors”

Filename: 07_01_11 Common Channels v01.00.03 AS.docx
Version: 01.00.03
Status: Approved Standard
Savedate: 2022.02.24
Number of pages: 33

|Version|Date|Modifications|
|---|---|---|
|0.1|2007.10.01|Document creation.<br>• **S12“Channel Codes”** integrated.|
|0.1|2007.10.02|<br>• **AN050“AN to Supplement 12”** integrated.|
|0.1|2007.10.18|<br>• **AN087“New Channels 2005.02”** integrated.|
|0.1|2008.05.09|<br>• Moved CHLightSensorSlave to Chapter 7/20/11“Lighting Channels”.|
|0.1|2008.08.09|__ <br>• **AN106 "Phasing out TP0"** integrated. <br>• **AN107 "Phasing out LT-R"** integrated. <br>• **AN108 "Phasing out LT-S"** integrated. <br>• **AN109 "Phasing out PL132"** integrated. <br>• **AN110"Phasing out A-Mode"** integrated.|
|1.0|2009.05.05|<br>Preparation of the Approved Standard in view of publication in the KNX<br>Specifications v2.0.|
|01.00.01|2013.10.29|Editorial updates for the publication of KNX Specifications 2.1.|
|01.00.02|2013.12.10|Final editorial review in view of publication of the KNX Specifications v2.1.|
|01.00.03|2022.02.24|Preparation for inclusion inthe KNXSpecifications v3.0.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Support of scenes ............................................................................................................ 4 1.2 E-Mode Channel overview ............................................................................................. 4

 2 E-Mode Channels ................................................................................................................... 5 2.1 CH_Logical_Sensor (Channel Code 001Fh) .................................................................. 5 2.2 CH_Battery_Status (Channel Code 0021h) .................................................................... 6 2.3 CH_Smoke_Detector_Basic (Channel Code 0022h) ...................................................... 7 2.4 CH_Window_Door_Contact_Basic (Channel Code 0023h) .......................................... 7 2.5 CH_Forced_Info (Channel Code 002Bh) ....................................................................... 8 2.6 CH_Logical_Actuator (Channel Code 010Eh) ............................................................... 9 2.7 CH_Info_Adaptable (Channel Code 0120h) .................................................................. 9 2.8 CH_Logic_AndOr (Channel Code 0200h) ................................................................... 11 2.9 CH_8_Scenes_4_Outputs_Basic (Channel Code 0201h) ............................................. 12 2.10 CH_4_Scenes_4_Outputs_Complex (Channel Code 0202h) ....................................... 16 2.11 CH_Scene_Converter (Channel Code 0203h) .............................................................. 21 2.12 CH_Event_Scheduler_4_Outputs (Channel Code 0204h) ........................................... 22 2.13 CH_DateTime_Scheduler (Channel Code 0205h) ....................................................... 26 2.14 CH_System_Clock_Master (Channel Code 0206h) ..................................................... 27 2.15 CH_System_Clock_Slave (Channel Code 0209h) ....................................................... 28

 3 Functional Blocks ................................................................................................................. 29 3.1 Usage requirements ...................................................................................................... 29 3.2 FB_Logic_ANDOR (FB LAO) .................................................................................... 29 3.2.1 Functional description ....................................................................................... 29 3.2.2 FB description ................................................................................................... 29 3.2.3 Datapoints ......................................................................................................... 30


-----

### 1 Introduction

#### 1.1 Support of scenes
###### For Scene Number Datapoints, it is mandatory to deal at least with numbers from 1 to 8 (coded 0 to 7). It is allowed to deal with higher values. This shall thus be as specified in Table 1.

 Table 1 – Scene numbering and coding in E-Mode Channels

**Scene number Scene letter** **Coding**

1 A xx000000b

2 B xx000001b

3 C xx000010b

4 D xx000011b

5 E xx000100b

6 F xx000101b

7 G xx000110b

8 H xx000111b

#### 1.2 E-Mode Channel overview
###### Table 2 lists the E-Mode Channels that are specified in this document. Other E-Mode Channels are specified in other Parts of Volume 7 “Application Descriptions” of the KNX Specifications. Please refer to [01] for the complete list of E-Mode Channels.

 Table 2 – E-Mode Channels specified in this document

**Channel Code** **Channel Name**
001Fh CH_Logical_Sensor
0021h CH_Battery_Status
0022h CH_Smoke_Detector_Basic
0023h CH_Window_Door_Contact_Basic
002Bh CH_Forced_Info
010Eh CH_Logical_Actuator
0120h CH_Info_Adaptable
0200h CH_Logic_AndOr
0201h CH_8_Scenes_4_Outputs_Basic
0202h CH_4_Scenes_4_Outputs_Complex
0203h CH_Scene_Converter
0204h CH_Event_Scheduler_4_Outputs
0205h CH_DateTime_Scheduler
0206h CH_System_Clock_Master
0209h CH_System_Clock_Slave

|Scene number|Scene letter|Coding|
|---|---|---|
|1|A|xx000000b|
|2|B|xx000001b|
|3|C|xx000010b|
|4|D|xx000011b|
|5|E|xx000100b|
|6|F|xx000101b|
|7|G|xx000110b|
|8|H|xx000111b|

|Channel Code|Channel Name|
|---|---|
|001Fh|CHLogicalSensor|
|<br>0021h|__<br>CHBatteryStatus|
|<br>0022h|__<br>CHSmokeDetectorBasic|
|<br>0023h|___<br>CHWindowDoorContactBasic|
|<br>002Bh|____<br>CHForcedInfo|
|<br>010Eh|__<br>CHLogicalActuator|
|<br>0120h|__<br>CHInfoAdaptable|
|<br>0200h|__<br>CHLogicAndOr|
|<br>0201h|__<br>CH8Scenes4OutputsBasic|
|<br>0202h|_____<br>CH4Scenes4OutputsComplex|
|<br>0203h|_____<br>CHSceneConverter|
|<br>0204h|__<br>CHEventScheduler4Outputs|
|<br>0205h|____<br>CHDateTimeScheduler|
|<br>0206h|__<br>CHSystemClockMaster|
|<br>0209h|___<br>CHSystemClockSlave|


-----

### 2 E-Mode Channels

#### 2.1 CH_Logical_Sensor (Channel Code 001Fh)

###### • Name: CH_Logical_Sensor

 • ID: 001Fh

 • Classification: sensor

 • Functional Block:

 • 421 - FB Switching Sensor Basic (see [07])

 • Graphical representation:

 Inputs Outputs


###### CH_Logical_Sensor


###### LV Logical Value

 Parameters

 • Description: See FB Switching Sensor Basic

 OO = On means LV = True

 OO = Off means LV = False
 • Datapoint list:

**Index** **FB / DP_Name** **Name** **Main CC** **Additional CCs**

1 421/Switch On Off Logical Value CC_Logical O L

|CH Logical Sensor<br>_ _|LV|
|---|---|
|**CH_Logical_Sensor**||

|Index|FB / DP Name<br>_|Name|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|
|1|421/Switch On Off|Logical Value|CC_Logical||O L|


-----

#### 2.2 CH_Battery_Status (Channel Code 0021h)

###### • Name: CH_Battery_Status

 • ID: 0021h

 • Classification: sensor

 • Functional Block:

 • 1005 – FB Battery Status (BS)

 • Graphical representation:

 Inputs Outputs


###### CH_Battery_Status


###### BS BS.Battery Status

 Parameters

 • Description: The E_Mode Channel CH_Battery_Status is used in battery-devices, especially in RF.

 If the device is powered up (eg. new battery or battery is replaced) it sends the Battery Status with value 1 (“battery ok”).

 If the battery voltage drops under a certain level (product specific) the E-Mode Channel sends the Battery Status with value 0 (“battery weak”).

 Additionally (optional) the info “battery ok” and/or “battery_weak” can be sent periodically. In this case the interval 24 hours is recommended

NOTE Reasons for necessity of an own E-Mode Channel for battery:
        - E-Mode Channels are defined independently of whether they are realised as stand alone device or as part of a
multichannel device. Thus, E-Mode Channels do not contain device info.
        - E-Mode Channels are defined medium independent (as far as possible). So they don’t contain info from RF.
        - In order not to create all E-Mode Channels anew, now with an additional Battery state, this info must be an own EMode channel.
        - A device also having other inputs may optionally send its battery status when these inputs are activated and battery
status is 0 (weak).

###### • Datapoint list:

**Inde** **Sub-** **Flags**

**FB Datapoint ID** **Name** **Main CC** **Additional CCs**
**x** **unit** **(i/o,x,v, …)**

1 BS Battery Status 1 CC_Battery_Status CC_Switch_OnOff O L

|CH Battery Status<br>_ _|BS|
|---|---|
|**CH_Battery_Status**||

|Inde<br>x|FB Datapoint ID|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|1|BS|Battery Status|1|CC_Battery_Status|CC_Switch_OnOff|O L|


-----

#### 2.3 CH_Smoke_Detector_Basic (Channel Code 0022h)

###### • Name: CH_Smoke_Detector_Basic

 • ID: 0022h

 • Classification: sensor

 • Functional Block:

 • 1004- FB Smoke Alarm (SA)

 • Graphical representation:

 Inputs Outputs


###### CH_Smoke_Detector_Basic


###### SA SA.Smoke Alarm

 Parameters

 • Description: The smoke detector sends an alarm (value 1) cyclically (every minute at least), if smoke is detected. If no smoke is detected the Datapoint Smoke Alarm is sent with value 0 once a day at least.

 • Datapoint list:

**Sub** **Flags**
**Index FB Datapoint ID** **Name** **Main CC** **Additional CCs**
**unit** **(i/o,x,v, …)**

1 SA Smoke Alarm 1 CC_Smoke_Alarm CC_Switch_OnOff O L

#### 2.4 CH_Window_Door_Contact_Basic (Channel Code 0023h)

###### • Name: CH_Window_Door_Contact_Basic

 • ID: 0023h

 • Classification: sensor

 • Functional Block:

 • 343 – FB Window Switch (WOS) (See [06])

 • Graphical representation:

 Inputs Outputs

 CH_Window_Door_Contact_Basic

 W_ST WOS.WindowStatus

 Parameters

|CH Smoke Detector Basic<br>_ _ _|SA|
|---|---|
|**CH_Smoke_Detector_Basic**||

|Index|FB Datapoint ID|Name|Sub<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|1|SA|Smoke Alarm|1|CC_Smoke_Alarm|CC_Switch_OnOff|O L|

|CH Window Door Contact Basic<br>_ _ _ _|W ST|
|---|---|
|**CH_Window_Door_Contact_Basic**|_|


-----

###### • Description: The Window-/door contact sends the status when the window (door) is opened or closed.

 • Datapoint list:

**Sub-**

**Index** **[FB Datapoint ]** **Name** **Main CC** **Additional CCs**

**ID** **unit**

1 W_ST WindowStatus 1 CC_Window_Status CC_Switch_OnOff O L

#### 2.5 CH_Forced_Info (Channel Code 002Bh)

###### • Name: CH_Forced_Info

 • ID: 002Bh

 • Classification: sensor

 • Functional Block:

  1020 – FB Priority Sensor (See [03].)
  421 – FB Switching Sensor Basic (See [07].)
 • Graphical representation:

 Inputs Outputs

|Index|FB Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|1|W_ST|WindowStatus|1|CC_Window_Status|CC_Switch_OnOff|O L|


###### CH_Forced_Info


###### 421.InfoOnOff IOO  FO 1020.Force

 Parameters

 421.ControlActivationValue P1

 • Description: This E-Mode Channel groups functionality from FB Priority Sensor and FB Switching Sensor Basic. There are no relationships between the Functional Blocks.

 • Datapoint list:

**Sub-** **Additional** **Flags**
**Index FB Datapoint ID** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v…..)**

1 421.IOO InfoOnOff 1 CC_Switch_OnOff_Status I

2 1020.FO Force 1 CC_Forced O L

###### • Parameter table:

**Index Identifier Name** **Type** **Recommended default value** **Bit**
**Offset**

1 P1 Control type PART_Bool_Value 0: Ctrl False 7

|1.InfoOnOff IOO<br>Parameters<br>vationValue P1|CH Forced Info<br>_ _|FO|
|---|---|---|
|<br>1.InfoOnOff <br>IOO<br>**_Parameters_**  <br>vationValue <br>P1|**CH_Forced_Info**<br> <br> <br>||

|Index|FB Datapoint ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|421.IOO|InfoOnOff|1|CC_Switch_OnOff_Status||I|
|2|1020.FO|Force|1|<br>CC_Forced||O L|

|Index|Identifier|Name|Type|Recommended default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Control type|PART_Bool_Value|0: Ctrl False|7|


-----

#### 2.6 CH_Logical_Actuator (Channel Code 010Eh)

###### • Name: CH_Logical_Actuator

 • ID: 010Eh

 • Classification: actuator

 • Functional Block:

 • 1018 – FB General Purpose Digital Output (GPDU) (See [05])

 • Graphical representation:

 Inputs Outputs


###### CH_Logical_Actuator


###### Logical Value LV

 Parameters

 • Description: See FB General Purpose Digital Output (GPDU).

 • Datapoint list:

**Index** **FB / DP_Name** **Name** **Main CC** **Additional CCs**

1 1009/LV Logical Value CC_Logical I L

#### 2.7 CH_Info_Adaptable (Channel Code 0120h)

###### • Name: CH_Info_Adaptable

 • ID: 0120h

 • Classification: actuator

 • Functional Block:

 • 1006 – FB Display

 • Graphical representation:

 Inputs Outputs

 CH_Info_Adaptable 1006.INFO_1BIT INF1 

Sub-block 1

###### 1006.INFO_8BIT INF8  1006.INFO_16BIT INF16 
 Parameters 1006.Adaptation info AI 

|gical Value LV<br>Parameters|CH Logical Actuator<br>_ _|
|---|---|

|Index|FB / DP Name<br>_|Name|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|
|1|1009/LV|Logical Value|CC_Logical||I L|

|NFO 1BIT INF1<br>_<br>NFO 8BIT INF8<br>_<br>FO 16BIT INF16<br>_<br>Parameters<br>ptation info AI|CH Info Adaptable<br>_ _<br>Sub-block 1|
|---|---|


-----

###### • Description: This E-Mode Channel shall display information according the value received on the Datapoint. A parameter AI shall indicate the format and the interpretation of the received value.

 This E-Mode Channel shall allow connecting only one Datapoint as an Input (the Datapoints are adaptable). The parameter describes which of the three Datapoints is connected. Three formats of data are possible: 1 bit, 1 octet or 2 octets; it allows connecting almost all the data from the KNX bus (pressure, temperature, light on/off, scene number …).

 • Datapoint list:

**Additional** **Flags**
**Index** **FB Datapoint ID** **Name** **Subunit** **Main CC**

**CCs** **(i/o,x,v, …)**

1 1006.INF0_1BIT INF1 1 CC_ADAPT_1BIT I T

2 1006.INF0_8BIT INF8 1 CC_ADAPT_8BIT I T

3 1006.INF0_16BIT INF16 1 CC_ADAPT_16BIT I T

###### • Parameter table:

**Index** **FB Parameter ID** **Name** **Recommended default value** **Bit-Offset**

1 Adaptation info AI 0

**Correspondin** **Adapting**

**Subblock** **Input** **Output**

**Connection Code** **g Parameter** **Parameter**
**index** **Datapoint** **Datapoint**

**index** **value**

1 CC_Move UpDown_Info 1 1.1 1 
1 CC_Dimming_Value_Status 1 2.8 2 
1 CC_Swith_OnOff_Status 1 8.1 1 
1 CC_Temperature 1 1.16 3 
1 CC_HVAC_mode_Status 1 3.8 2 
1 CC_Illumination 1 2.16 3 
1 CC_Logical 1 2.1 1 
1 CC_WindSpeed 1 3.16 3 
|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|1|1006.INF0_1BIT|INF1|1|CC_ADAPT_1BIT||I T|
|2|<br>1006.INF0_8BIT|INF8|1|<br>CC_ADAPT_8BIT||I T|
|3|<br>1006.INF0_16BIT|INF16|1|<br>CC_ADAPT_16BIT||I T|

|Index|FB Parameter ID|Name|Recommended default value|Bit-Offset|
|---|---|---|---|---|
|1|Adaptation info|AI||0|

|Subblock<br>index|Connection Code|Correspondin<br>g Parameter<br>index|Adapting<br>Parameter<br>value|Input<br>Datapoint|Output<br>Datapoint|
|---|---|---|---|---|---|
|1|CC_Move UpDown_Info|1|1.1|1|-|
|1|<br>CC_Dimming_Value_Status|1|2.8|2|-|
|1|<br>CC_Swith_OnOff_Status|1|8.1|1|-|
|1|<br>CC_Temperature|1|1.16|3|-|
|1|<br>CC_HVAC_mode_Status|1|3.8|2|-|
|1|<br>CC_Illumination|1|2.16|3|-|
|1|<br>CC_Logical|1|2.1|1|-|
|1|<br>CC_WindSpeed|1|3.16|3|-|


-----

#### 2.8 CH_Logic_AndOr (Channel Code 0200h)

###### • Name: CH_Logic_AndOr

 • ID: 0200h

 • Classification: functional module

 • Functional Block:

 • 1007 FB_Logic_AndOr (LAO) (See 3.2 in this document).

 • Graphical representation:

 Inputs Outputs


###### CH_Logic_AndOr


###### LAO.Logical value 1 LV1 LR LAO.Logical Result
 Sub- Sub LAO.Logical value 2 LV2
 Unit 1 Unit 2
 LAO.Logical value 3 LV3

 LAO.Logical value 4 LV4

 Paramaters

 Logical function type  P1

 Invert result P2

 Used input P3

 • Description:
 See Functional Block FB_Logical_AndOr

 • Datapoint list:

**Flags**
**Index** **FB Datapoint ID** **Name** **Subunit** **Main CC** **Additional CCs**
**(i/o,x,v,…)**

1 1007/LV1 Logical value 1 1 CC_Logical I X C

2 1007/LV2 Logical value 2 1 CC_Logical I X C

3 1007/LV3 Logical value 3 1 CC_Logical I X C

4 1007/LV4 Logical value 4 1 CC_Logical I X C

5 1007/LR Logical result 2 CC_Logical CC_switch_OnOff O L

###### • Parameter table:

|LV1|Col2|CH Logic AndOr<br>_ _<br>Sub- Sub-<br>Unit 1 Unit 2|Col4|LR|
|---|---|---|---|---|
||<br>LV2|Sub-<br>Unit 1|Sub-<br>Unit 2||
||LV3|LV3|LV3|LV3|
||LV4|LV4|LV4|LV4|
|<br>P1|||||
|P2|P2|P2|P2|P2|
|P3|P3|P3|P3|P3|
||||||

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|1007/LV1|Logical value 1|1|CC_Logical||<br>I X C|
|2|1007/LV2|Logical value 2|1|<br>CC_Logical||I X C|
|3|1007/LV3|Logical value 3|1|<br>CC_Logical||I X C|
|4|1007/LV4|Logical value 4|1|<br>CC_Logical||I X C|
|5|1007/LR|Logical result|2|<br>CC_Logical|CC_switch_OnOff|O L|

|Index|Identifier|Name|Type|Recommended default<br>value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Logical function type|PART_Logical|OR (=0)|0|
|2|P2|Invert result|<br>PART_Invert|0|1|
|3|P3|Used input Bit stream|<br>PART_Input_Connecte<br>d|0b0000|4|


-----

#### 2.9 CH_8_Scenes_4_Outputs_Basic (Channel Code 0201h)

###### • Name: CH_8_Scenes_4_Outputs_Basic

 • ID: 0201h

 • Classification: functional module

 • Functional Block:

 • 1010 FB Scene Controller (SC)

 • Graphical representation:

 Inputs CH_8_Scenes_4_Outputs_Basic Outputs

 Scene_Number SN

 Iad1.1bit OAd1.1bit

 Iad1.8bit Subblock 1 Oad1.8bit
 Iad1.16bit Oad1.16bit

 Iad2.1bit Oad2.1bit

 Iad2.8bit Oad2.8bit
 Subblock 2
 Iad2.16bit Oad2.16bit

 Iad3.1bit Oad3.1bit

 Iad3.8bit Subblock 3 Oad3.8bit

 Iad3.16bit Oad3.16bit

 Iad4.1bit Oad4.1bit

 Iad4.8bit Oad4.8bit
 Subblock 4
 Iad4.16bit Oad4.16bit

 Paramaters

 Selection sub-block1 P1

 Selection sub-block2 P2

 Selection sub-block3 P3

 Selection sub-block4 P4

 Value subBlock1/SN1 P5

 Value subBlock2/SN1 P6

 Value subBlock3/SN1 P7

 Value subBlock4/SN1 P8

 ……

 Value subBlock1/SN8 P33

 Value subBlock2/SN8 P34

 Value subBlock3/SN8 P35

 Value subBlock4/SN8 P36

|Inputs<br>SN<br>Iad1.1bit<br>Iad1.8bit<br>Iad1.16bit<br>Iad2.1bit<br>Iad2.8bit<br>Iad2.16bit<br>Iad3.1bit<br>Iad3.8bit<br>Iad3.16bit<br>Iad4.1bit<br>Iad4.8bit<br>Iad4.16bit<br>Paramaters<br>sub-block1 P1<br>sub-block2 P2<br>sub-block3 P3<br>sub-block4 P4<br>Block1/SN1 P5<br>Block2/SN1 P6<br>Block3/SN1 P7<br>Block4/SN1 P8<br>……<br>Block1/SN8 P33<br>Block2/SN8 P34<br>Block3/SN8 P35<br>Block4/SN8 P36|CH 8 Scenes 4 Outputs Basic|Outputs<br>OAd1.1bit<br>Oad1.8bit<br>Oad1.16bit<br>Oad2.1bit<br>Oad2.8bit<br>Oad2.16bit<br>Oad3.1bit<br>Oad3.8bit<br>Oad3.16bit<br>Oad4.1bit<br>Oad4.8bit<br>Oad4.16bit|
|---|---|---|
|**_Inputs_** <br> <br> <br>SN<br> Iad1.1bit<br> Iad1.8bit<br> Iad1.16bit<br> Iad2.1bit<br> Iad2.8bit<br> Iad2.16bit<br> Iad3.1bit<br> Iad3.8bit<br> Iad3.16bit<br> Iad4.1bit<br> Iad4.8bit<br> Iad4.16bit<br>**_Paramaters_** <br> sub-block1<br>P1<br> sub-block2<br>P2<br> sub-block3<br>P3<br> sub-block4<br>P4<br> Block1/SN1<br>P5<br> Block2/SN1<br>P6<br> Block3/SN1<br>P7<br> Block4/SN1<br>P8<br>……<br> Block1/SN8<br>P33<br> Block2/SN8<br>P34<br> Block3/SN8<br>P35<br> Block4/SN8<br>P36|**_____**<br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br>Subblock 2<br>Subblock 1<br>Subblock 3<br>Subblock 4|**_____**<br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br>Subblock 2<br>Subblock 1<br>Subblock 3<br>Subblock 4|


-----

###### • Description:
 See FB Scene Controller.

 There are 12 output Datapoints and 12 input Datapoints.

 They are grouped in 4 blocks (adaptive channels).

 The parameter blocks consist of:

Adaptive set 1 Adaptive set 2 Move Up/Down value Move Up/Down value Move Up/Down value Move Up/Down value
selection selection set 1 scene 1 set 1 scene 2 set 2 scene 1 set 2 scene 2

,,,,,,,,,,,,,,

###### The length of the parameter is related to the selection coded in the lower part.

  high part (Bit 7…3) = priority for adaptation

  lower part (Bit 2, 1, 0)= size of Datapoint

 - When activated, the values contained in the parameter blocks corresponding to the Scene A or B (or scene number) are copied in the Datapoint, respecting the size and the Datapoint index. The size is coded in the lower part of the adaptive value.

 - When learning, the values are copied from the Datapoint in the parameter blocks corresponding to the Scene A or B (or scene number) respecting the size and the Datapoint index.

 - The number of scene that shall be supported is 8.

 • Datapoint list:

|Adaptive set 1<br>selection|Adaptive set 2<br>selection|Move Up/Down value<br>set 1 scene 1|Col4|Move Up/Down value<br>set 1 scene 2|Col6|Move Up/Down value<br>set 2 scene 1|Col8|Move Up/Down value<br>set 2 scene 2|Col10|
|---|---|---|---|---|---|---|---|---|---|
|,  ,  ,  ,  ,  ,  ,|,  ,  ,  ,  ,  ,  ,|||||||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|1010/Scene_Numbere<br>d||1|CC_Scene_Number||I|
|2|Iad1.1bit||1|CC_ADAPT_1BIT||I T|
|3|Iad1.8bit||1|<br>CC_ADAPT_8BIT||IT|
|4|Iad1.16bit||1|<br>CC_ADAPT_16BIT||IT|
|5|Iad2.1bit||1|<br>CC_ADAPT_1BIT||IT|
|6|Iad2.8bit||1|<br>CC_ADAPT_8BIT||IT|
|7|Iad2.16bit||1|<br>CC_ADAPT_16BIT||IT|
|8|Iad31bit||1|<br>CC_ADAPT_1BIT||IT|
|9|Iad38bit||1|<br>CC_ADAPT_8BIT||IT|
|10|Iad316bit||1|<br>CC_ADAPT_16BIT||IT|
|11|Iad41bit||1|<br>CC_ADAPT_1BIT||IT|
|12|Iad48bit||1|<br>CC_ADAPT_8BIT||IT|
|13|Iad416bit||1|<br>CC_ADAPT_16BIT||IT|
|14|Oad1.1bit||1|<br>CC_ADAPT_1BIT||O T L|
|15|Oad1.8bit||1|<br>CC_ADAPT_8BIT||OT L|
|16|Oad1.16bit||1|<br>CC_ADAPT_16BIT||OT L|
|17|Oad2.1bit||1|<br>CC_ADAPT_1BIT||OT|
|18|Oad2.8bit||1|<br>CC_ADAPT_8BIT||OT|
|19|Oad2.16bit||1|<br>CC_ADAPT_16BIT||OT|


-----

25 Oad4.16bit 1 CC_ADAPT_16BIT OT

###### • Parameter table:

**Recommended** **Bit**
**Index** **FB Parameter ID** **Name** **Type**
**default value** **Offset**

1 Selection SubBlock1 P1 PART_Adaptative_Selection 0

2 Selection SubBlock2 P2 PART_Adaptative_Selection 8

3 Selection SubBlock3 P3 PART_Adaptative_Selection 16

4 Selection SubBlock4 P4 PART_Adaptative_Selection 24

5 ValueSubBlock1/SN1 P5 PART_Render_Value 32

6 ValueSubBlock1/SN2 P9 PART_Render_Value 48

7 ValueSubBlock1/SN3 P13 PART_Render_Value 64

8 ValueSubBlock1/SN4 P17 PART_Render_Value 80

9 ValueSubBlock1/SN5 P21 PART_Render_Value 96

10 ValueSubBlock1/SN6 P25 PART_Render_Value 112

11 ValueSubBlock1/SN7 P29 PART_Render_Value 128

12 ValueSubBlock1/SN8 P33 PART_Render_Value 144

… …. …. PART_Render_Value …. …

29 ValueSubBlock4/SN1 P8 PART_Render_Value 416

30 ValueSubBlock4/SN2 P12 PART_Render_Value 432

31 ValueSubBlock4/SN3 P16 PART_Render_Value 448

32 ValueSubBlock4/SN4 P20 PART_Render_Value 464

33 ValueSubBlock4/SN5 P24 PART_Render_Value 480

34 ValueSubBlock4/SN6 P28 PART_Render_Value 496

35 ValueSubBlock4/SN7 P32 PART_Render_Value 512

36 ValueSubBlock4/SN8 P36 PART_Render_Value 528

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|20|Oad3.1bit||1|CC_ADAPT_1BIT||OT|
|21|Oad3.8bit||1|<br>CC_ADAPT_8BIT||OT|
|22|Oad3.16bit||1|<br>CC_ADAPT_16BIT||OT|
|23|Oad4.1bit||1|<br>CC_ADAPT_1BIT||OT|
|24|Oad4.8bit||1|<br>CC_ADAPT_8BIT||OT|
|25|Oad4.16bit||1|<br>CC_ADAPT_16BIT||OT|

|Index|FB Parameter ID|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|Selection SubBlock1|P1|PART_Adaptative_Selection||0|
|2|Selection SubBlock2|P2|<br>PART_Adaptative_Selection||8|
|3|Selection SubBlock3|P3|<br>PART_Adaptative_Selection||16|
|4|Selection SubBlock4|P4|<br>PART_Adaptative_Selection||24|
|5|ValueSubBlock1/SN1|P5|<br>PART_Render_Value||32|
|6|ValueSubBlock1/SN2|P9|<br>PART_Render_Value||48|
|7|ValueSubBlock1/SN3|P13|<br>PART_Render_Value||64|
|8|ValueSubBlock1/SN4|P17|<br>PART_Render_Value||80|
|9|ValueSubBlock1/SN5|P21|<br>PART_Render_Value||96|
|10|ValueSubBlock1/SN6|P25|<br>PART_Render_Value||112|
|11|ValueSubBlock1/SN7|P29|<br>PART_Render_Value||128|
|12|ValueSubBlock1/SN8|P33|<br>PART_Render_Value||144|
|…|….|….|<br>PART_Render_Value|….|…|
|29|ValueSubBlock4/SN1|P8|<br>PART_Render_Value||416|
|30|ValueSubBlock4/SN2|P12|<br>PART_Render_Value||432|
|31|ValueSubBlock4/SN3|P16|<br>PART_Render_Value||448|
|32|ValueSubBlock4/SN4|P20|<br>PART_Render_Value||464|
|33|ValueSubBlock4/SN5|P24|<br>PART_Render_Value||480|
|34|ValueSubBlock4/SN6|P28|<br>PART_Render_Value||496|
|35|ValueSubBlock4/SN7|P32|<br>PART_Render_Value||512|
|36|ValueSubBlock4/SN8|P36|<br>PART_Render_Value||528|


-----

4 CC_Switch_OnOff_Status 4 8.1 11 
|Subblock<br>index|Connection Code|Corresponding<br>Parameter<br>index|Adapting<br>Parameter value|Input<br>Datapoint|Output<br>Datapoint|
|---|---|---|---|---|---|
|1|CC_Move_UpDown|1|1.1|-|14|
|1|<br>CC_Move_UpDown_Status|1|1.1|2|-|
|1|<br>CC_Dimming_Value|1|2.8|-|15|
|1|<br>CC_Dimming_Value_Status|1|2.8|3|-|
|1|<br>CC_Switch_OnOff|1|8.1|-|14|
|1|<br>CC_Switch_OnOff_Status|1|8.1|2|-|
|2|<br>CC_Move_UpDown|2|1.1|-|17|
|2|<br>CC_Move_UpDown_Info|2|1.1|5|-|
|2|<br>CC_Dimming_Value|2|2.8|-|18|
|2|<br>CC_Dimming_Value_Status|2|2.8|6|-|
|2|<br>CC_Switch_OnOff|2|8.1|-|17|
|2|<br>CC_Switch_OnOff_Status|2|8.1|5|-|
|3|<br>CC_Move_UpDown|3|1.1|-|20|
|3|<br>CC_Move_UpDown_Info|3|1.1|8|-|
|3|<br>CC_Dimming_Value|3|2.8|-|21|
|3|<br>CC_Dimming_Value_Status|3|2.8|9|-|
|3|<br>CC_Switch_OnOff|3|8.1|-|20|
|3|<br>CC_Switch_OnOff_Status|3|8.1|8|-|
|4|<br>CC_Move_UpDown|4|1.1|-|23|
|4|<br>CC_Move_UpDown_Info|4|1.1|11|-|
|4|<br>CC_Dimming_Value|4|2.8|-|24|
|4|<br>CC_Dimming_Value_Status|4|2.8|12|-|
|4|<br>CC_Switch_OnOff|4|8.1|-|23|
|4|<br>CC_Switch_OnOff_Status|4|8.1|11|-|


-----

#### 2.10 CH_4_Scenes_4_Outputs_Complex (Channel Code 0202h)

###### • Name: CH_4_Scenes_4_Outputs_Complex

 • ID: 0202h

 • Classification: functional module

 • Functional Block:

 • 1010 FB Scene Controller (SC)

 • Graphical representation:


-----

###### Inputs CH_4_Scene_4_Outputs_Complex Outputs

 SC.Scene AB Learn SABL
 Subunit 1
 SC.Scene AB Activate SABA SC.Scene AB Learn SABL
 Subunit 2
 SC.Scene AB Activate SABA SC.Scene Number SN
 Subunit 3
 Iad1.1bit OAd1.1bit  Iad1.8bit Oad1.8bit
 Subblock 1
 Iad1.16bit Oad1.16bit  Iad2.1bit Oad2.1bit Iad2.8bit Oad2.8bit
 Subblock 2
 Iad2.16bit Oad2.16bit  Iad3.1bit Oad3.1bit Iad3.8bit Oad3.8bit
 Subblock 3
 Iad3.16bit Oad3.16bit  Iad4.1bit Oad4.1bit Iad4.8bit Oad4.8bit
 Subblock 4
 Iad4.16bit Oad4.16bit  Parameters Selection subblock1 P1 Selection subblock2 P2 Selection subblock3 P3 Selection subblock4 P4 Value subBlock1/SA P5 Value subBlock2/SA P6 Value subBlock3/SA P7 Value subBlock4/SA P8 Value subBlock1/SB P9 Value subBlock2/SB P10 Value subBlock3/SB P11 Value subBlock4/SB P12 Value subBlock1/SC P13 Value subBlock2/SC P14 Value subBlock3/SC P15 Value subBlock4/SC P16 Value subBlock1/SD P17 Value subBlock2/SD P18 Value subBlock3/SD P19 Value subBlock4/SD P20

|SABL|CH 4 Scene 4 Outputs Complex<br>_ _ _ _ _<br>Subunit 1<br>Subunit 2<br>Subunit 3<br>Subblock 1<br>Subblock 2<br>Subblock 3<br>Subblock 4|OAd1.1bit|
|---|---|---|
|SABA|SABA|SABA|
|SABL|SABL|SABL|
|SABA|SABA|SABA|
|SN|SN|SN|
|Iad1.1bit|Iad1.1bit|Iad1.1bit|
|Iad1.8bit|Iad1.8bit|Oad1.8bit|
|Iad1.16bit|Iad1.16bit|Oad1.16bit|
|Iad2.1bit|Iad2.1bit|Oad2.1bit|
|Iad2.8bit|Iad2.8bit|Oad2.8bit|
|Iad2.16bit|Iad2.16bit|Oad2.16bit|
|Iad3.1bit|Iad3.1bit|Oad3.1bit|
|Iad3.8bit|Iad3.8bit|Oad3.8bit|
|Iad3.16bit|Iad3.16bit|Oad3.16bit|
|Iad4.1bit|Iad4.1bit|Oad4.1bit|
|Iad4.8bit|Iad4.8bit|Oad4.8bit|
|Iad4.16bit|Iad4.16bit|Oad4.16bit|
|<br>P1|<br>P1||
|P2|P2|P2|
|P3|P3|P3|
|P4|P4|P4|
|P5|P5|P5|
|P6|P6|P6|
|P7|P7|P7|
|P8|P8|P8|
|P9|P9|P9|
|P10|P10|P10|
|P11|P11|P11|
|P12|P12|P12|
|P13|P13|P13|
|P14|P14|P14|
|P15|P15|P15|
|P16|P16|P16|
|P17|P17|P17|
|P18|P18|P18|
|P19|P19|P19|
|P20|P20|P20|
||||


-----

###### • Description:
 See Functional Block Scene Controller.

 - There are 12 output Datapoints and 12 input Datapoints.

 - They are grouped in 4 blocks (adaptive channels).

 - The parameter blocks consist of:

Move Up/Down Move Up/Down Move Up/Down Move Up/Down

Adaptive set Adaptive set

value value value value

1 selection 2 selection

set 1 scene 1 set 1 scene 2 set 2 scene 1 set 2 scene 2

,,,,,,,,,,,,,,

###### - The length of the parameter is related to the selection coded in the lower part:

  high part (Bit 7…3) = priority for adaptation

  lower part (Bit 2, 1, 0) = size of Datapoint 

 - When activate, the values contained in the parameter blocks corresponding to the Scene A or B (or scene number) are copied in the Datapoint, respecting the size and the Datapoint index. The size is coded in the lower part of the adaptive value.

 - When learning, the values are copied from the Datapoint in the parameter blocks corresponding to the Scene A or B (or scene number), respecting the size and the Datapoint index.

 - The number of scenes to be supported shall be 4.

 • Datapoint list:

|Adaptive set<br>1 selection|Adaptive set<br>2 selection|Move Up/Down<br>value<br>set 1 scene 1|Col4|Move Up/Down<br>value<br>set 1 scene 2|Col6|Move Up/Down<br>value<br>set 2 scene 1|Col8|Move Up/Down<br>value<br>set 2 scene 2|Col10|
|---|---|---|---|---|---|---|---|---|---|
|,  ,  ,  ,  ,  ,  ,|,  ,  ,  ,  ,  ,  ,|||||||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v, l…)|
|---|---|---|---|---|---|---|
|1|1004/Activate A/B||1|CC_Activate||I|
|2|1004/Learn A/B||1|<br>CC_Learn||I|
|3|1004/Actiavte C/D||2|<br>CC_Activate||I|
|4|1004/Learn C/D||2|<br>CC_Learn||I|
|5|1004/Scene_Numbered||3|<br>CC_Scene_Number||I|
|6|<br>Iad1.1bit / GI1||3|<br>CC_ADAPT_1BIT||I T|
|7|Iad1.8bit / GI1||3|<br>CC_ADAPT_8BIT||IT|
|8|Iad1.16bit / GI1||3|<br>CC_ADAPT_16BIT||IT|
|9|Iad2.1bit / GI2||3|<br>CC_ADAPT_1BIT||IT|
|10|Iad2.8bit / GI2||3|<br>CC_ADAPT_8BIT||IT|
|11|Iad2.16bit / GI2||3|<br>CC_ADAPT_16BIT||IT|
|12|Iad3.1bit  / GI3||3|<br>CC_ADAPT_1BIT||IT|
|13|Iad3.8bit  / GI3||3|<br>CC_ADAPT_8BIT||IT|
|14|Iad3.16bit  / GI3||3|<br>CC_ADAPT_16BIT||IT|
|15|Iad4.1bit  / GI4||3|<br>CC_ADAPT_1BIT||IT|
|16|Iad4.8bit  / GI4||3|<br>CC_ADAPT_8BIT||IT|
|17|Iad4.16bit  / GI4||3|<br>CC_ADAPT_16BIT||IT|
|18|Oad1.1bit  / GO1||3|<br>CC_ADAPT_1BIT||O T L|
|19|Oad1.8bit  / GO1||3|<br>CC_ADAPT_8BIT||OT L|


-----

29 Oad4.16bit / GO4 3 CC_ADAPT_16BIT OT

###### • Parameter table:

**Recom-**
**mended**

**Index** **FB Parameter ID** **Name** **Type**

**default**

**value**

1 Selection SubBlock1 PART_Adaptive_Selection 0

2 Selection SubBlock2 PART_Adaptive_Selection 8

3 Selection SubBlock3 PART_Adaptive_Selection 16

4 Selection SubBlock4 PART_Adaptive_Selection 24

5 P’’1 with P1=0, P’1=1 ValueSubBlock1/SA PART_Render_Value 32

6 P’’2 with P2=1, P’2=1 ValueSubBlock1/SB PART_Render_Value 48

7 P’’3 with P3=2, P’3=1 ValueSubBlock1/SC PART_Render_Value 64

8 P’’4 with P4=3, P’4=1 ValueSubBlock1/SD PART_Render_Value 80

9 P’’5 with P5=0, P’5=2 ValueSubBlock2/SA PART_Render_Value 96

10 P’’6 with P6=1, P’6=2 ValueSubBlock2/SB PART_Render_Value 112

11 P’’7 with P7=2, P’7=2 ValueSubBlock2/SC PART_Render_Value 128

12 P’’8 with P8=3, P’8=2 ValueSubBlock2/SD PART_Render_Value 144

13 P’’9 with P9=0, P’9=3 ValueSubBlock3/SA PART_Render_Value 160

14 P’’10 with P10=1, P’10=3 ValueSubBlock3/SB PART_Render_Value 176

15 P’’11 with P11=2, P’11=3 ValueSubBlock3/SC PART_Render_Value 192

16 P’’12 with P12=3, P’12=3 ValueSubBlock3/SD PART_Render_Value 208

17 P’’13 with P13=0, P’13=4 ValueSubBlock4/SA PART_Render_Value 224

18 P’’14 with P14=1, P’14=4 ValueSubBlock4/SB PART_Render_Value 240

19 P’’15 with P15=2, P’15=4 ValueSubBlock4/SC PART_Render_Value 256

20 P’’16 with P16=3, P’16=4 ValueSubBlock4/SD PART_Render_Value 272

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v, l…)|
|---|---|---|---|---|---|---|
|20|Oad1.16bit  / GO1||3|CC_ADAPT_16BIT||OT L|
|21|Oad2.1bit  / GO2||3|<br>CC_ADAPT_1BIT||OT|
|22|Oad2.8bit  / GO2||3|<br>CC_ADAPT_8BIT||OT|
|23|Oad2.16bit  / GO2||3|<br>CC_ADAPT_16BIT||OT|
|24|Oad3.1bit  / GO3||3|<br>CC_ADAPT_1BIT||OT|
|25|Oad3.8bit  / GO3||3|<br>CC_ADAPT_8BIT||OT|
|26|Oad3.16bit  / GO3||3|<br>CC_ADAPT_16BIT||OT|
|27|Oad4.1bit  / GO4||3|<br>CC_ADAPT_1BIT||OT|
|28|Oad4.8bit  / GO4||3|<br>CC_ADAPT_8BIT||OT|
|29|Oad4.16bit  / GO4||3|<br>CC_ADAPT_16BIT||OT|

|Index|FB Parameter ID|Name|Type|Recom-<br>mended<br>default<br>value|Bit<br>Offset|
|---|---|---|---|---|---|
|1||Selection SubBlock1|PART_Adaptive_Selection||0|
|2||<br>Selection SubBlock2|<br>  PART_Adaptive_Selection|<br>|8|
|3||<br>Selection SubBlock3|<br>  PART_Adaptive_Selection|<br>|16|
|4||<br>Selection SubBlock4|<br>  PART_Adaptive_Selection|<br>|24|
|5|P’’1 with P1=0, P’1=1|<br>ValueSubBlock1/SA|<br> PART_Render_Value||32|
|6|P’’2 with P2=1, P’2=1|<br>ValueSubBlock1/SB|<br> PART_Render_Value||48|
|7|P’’3 with P3=2, P’3=1|<br>ValueSubBlock1/SC|<br> PART_Render_Value||64|
|8|P’’4 with P4=3, P’4=1|<br>ValueSubBlock1/SD|<br> PART_Render_Value||80|
|9|P’’5 with P5=0, P’5=2|<br>ValueSubBlock2/SA|<br> PART_Render_Value||96|
|10|P’’6 with P6=1, P’6=2|<br>ValueSubBlock2/SB|<br> PART_Render_Value||112|
|11|P’’7 with P7=2, P’7=2|<br>ValueSubBlock2/SC|<br> PART_Render_Value||128|
|12|P’’8 with P8=3, P’8=2|<br>ValueSubBlock2/SD|<br> PART_Render_Value||144|
|13|P’’9 with P9=0, P’9=3|<br>ValueSubBlock3/SA|<br> PART_Render_Value||160|
|14|P’’10 with P10=1, P’10=3|<br>    ValueSubBlock3/SB|<br>     PART_Render_Value||176|
|15|<br>P’’11 with P11=2, P’11=3|<br>    ValueSubBlock3/SC|<br>     PART_Render_Value||192|
|16|<br>P’’12 with P12=3, P’12=3|<br>    ValueSubBlock3/SD|<br>     PART_Render_Value||208|
|17|<br>P’’13 with P13=0, P’13=4|<br>    ValueSubBlock4/SA|<br>     PART_Render_Value||224|
|18|<br>P’’14 with P14=1, P’14=4|<br>    ValueSubBlock4/SB|<br>     PART_Render_Value||240|
|19|<br>P’’15 with P15=2, P’15=4|<br>    ValueSubBlock4/SC|<br>     PART_Render_Value||256|
|20|<br>P’’16 with P16=3, P’16=4|<br>    ValueSubBlock4/SD|<br>     PART_Render_Value||272|


-----

**index** **Parameter index** **Datapoint**

**value**

1 CC_Move UpDown 1 1.1 - 18

1 CC_Move_UpDown_Status 1 1.1 6 
1 CC_Dimming_Value 1 2.8 - 19

1 CC_Dimming_Value_Status 1 2.8 7 
1 CC_Switch_OnOff 1 8.1 - 18

1 CC_Switch_OnOff_Status 1 8.1 6 
2 CC_Move UpDown 2 1.1 - 21

2 CC_Move_UpDown_Status 2 1.1 9 
2 CC_Dimming_Value 2 2.8 - 22

2 CC_Dimming_Value_Status 2 2.8 10 
2 CC_Switch_OnOff 2 8.1 - 21

2 CC_Switch_OnOff_Status 2 8.1 9 
3 CC_Move UpDown 3 1.1 - 24

3 CC_Move_UpDown_Status 3 1.1 12 
3 CC_Dimming_Value 3 2.8 - 25

3 CC_Dimming_Value_Status 3 2.8 13 
3 CC_Switch_OnOff 3 8.1 - 24

3 CC_Switch_OnOff_Status 3 8.1 12 
4 CC_Move UpDown 4 1.1 - 27

4 CC_Move_UpDown_Status 4 1.1 15 
4 CC_Dimming_Value 4 2.8 - 28

4 CC_Dimming_Value_Status 4 2.8 16 
4 CC_Switch_OnOff 4 8.1 - 27

4 CC_Switch_OnOff_Status 4 8.1 15 
|Subblock<br>index|Connection Code|Corresponding<br>Parameter index|Adapting<br>Parameter<br>value|Input Datapoint|Output<br>Datapoint|
|---|---|---|---|---|---|
|1|CC_Move UpDown|1|1.1|-|18|
|1|<br>CC_Move_UpDown_Status|1|1.1|6|-|
|1|<br>CC_Dimming_Value|<br>1|2.8|-|19|
|1|<br>CC_Dimming_Value_Status|1|2.8|7|-|
|1|<br>CC_Switch_OnOff|<br>1|8.1|-|18|
|1|<br>CC_Switch_OnOff_Status|1|8.1|6|-|
|2|<br>CC_Move UpDown|2|1.1|-|21|
|2|<br>CC_Move_UpDown_Status|2|1.1|9|-|
|2|<br>CC_Dimming_Value|<br>2|2.8|-|22|
|2|<br>CC_Dimming_Value_Status|2|2.8|10|-|
|2|<br>CC_Switch_OnOff|<br>2|8.1|-|21|
|2|<br>CC_Switch_OnOff_Status|2|8.1|9|-|
|3|<br>CC_Move UpDown|3|1.1|-|24|
|3|<br>CC_Move_UpDown_Status|3|1.1|12|-|
|3|<br>CC_Dimming_Value|<br>3|2.8|-|25|
|3|<br>CC_Dimming_Value_Status|3|2.8|13|-|
|3|<br>CC_Switch_OnOff|<br>3|8.1|-|24|
|3|<br>CC_Switch_OnOff_Status|3|8.1|12|-|
|4|<br>CC_Move UpDown|4|1.1|-|27|
|4|<br>CC_Move_UpDown_Status|4|1.1|15|-|
|4|<br>CC_Dimming_Value|<br>4|2.8|-|28|
|4|<br>CC_Dimming_Value_Status|4|2.8|16|-|
|4|<br>CC_Switch_OnOff|<br>4|8.1|-|27|
|4|<br>CC_Switch_OnOff_Status|4|8.1|15|-|


-----

#### 2.11 CH_Scene_Converter (Channel Code 0203h)

###### • Name: CH_Scene_Converter

 • ID: 0203h

 • Classification: Functional Module

 • Functional Block:

 • 1012 - FB Scheduler (See [04]

 • Graphical representation:

 Inputs Outputs
 Scene Activate SA CH_Scene_Converter

 Scene Learn SL SN Scene_Number

 Paramaters

 Scene Number for activated scene A P1

 Scene Number for activated scene B P2
 • Description: The functionality of this E-Mode Channel can be solved by appropriate configuration of a FB Scheduler: one Input (DPT_Scene_AB) can cause the transmission of one Output with DPT_Scene_Control; learning/calling scene can be differentiated through parameterisation.

 • Datapoint list:

**Sub** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC** **Additional CCs**
**unit** **(i/o,x,v,…)**

1 1010/Scene Activate Scene Activate 1 CC_Activate CC_Switch_OnOff I

2 1010/Scene learn Scene learn 1 CC_Learn I

3 1010/Scene Number Scene Number 1 CC_Scene_Numbe OL
r

###### • Parameter table:

|ne Activate SA<br>Scene Learn SL<br>Paramaters<br>ted scene A P1<br>ted scene B P2|CH Scene Converter<br>_ _|SN|
|---|---|---|
|ne Activate<br>SA <br>Scene Learn<br>SL <br>**_Paramaters _**<br>   ted scene A<br>P1<br>   ted scene B <br>P2|**CH_Scene_Converter**||

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|1010/Scene Activate|Scene Activate|1|CC_Activate|CC_Switch_OnOff|I|
|2|1010/Scene learn|Scene learn|1|<br>CC_Learn||<br>I|
|3|1010/Scene Number|Scene Number|1|<br>CC_Scene_Numbe<br>r||OL|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Scene Number for<br>activated scene A|PART_Scene_Number|0|2|
|2|P2|Scene Number for<br>activated scene B|PART_Scene_Number|1|10|


-----

#### 2.12 CH_Event_Scheduler_4_Outputs (Channel Code 0204h)

###### • Name: CH_Event_Scheduler_4_Outputs

 • ID: 0204h

 • Classification: Functional module

 • Functional Block:

 • 1012 - FB Scheduler (See [04]

 • Graphical representation:

 Inputs Outputs Event EV CH_Event_Scheduler_4_Outputs OAd1.1bit  Oad1.8bit 
 Sub-block 1
 Oad1.16bit  Oad2.1bit  Oad2.8bit 
 Sub-block 2
 Oad2.16bit  Oad3.1bit  Oad3.8bit 
 Sub-block 3
 Oad3.16bit  Oad4.1bit  Oad4.8bit 
 Sub-block 4
 Oad4.16bit  Parameters Selection sub-block1 P1 Selection sub-block2 P2 Selection sub-block3 P3 Selection sub-block4 P4 Value subBlock1/Event0 P5  Delay subBlock1/Event0 P6  Value subBlock1/ Event1 P7  Delay subBlock1/Event1 P8  Value subBlock2/ Event0 P9  Delay subBlock2/Event0 P10  Value subBlock2/ Event1 P11  Delay subBlock2/Event1 P12  Value subBlock3/ Event0 P13  Delay subBlock3/Event0 P14  Value subBlock3/ Event1 P15  Delay subBlock3/Event1 P16  Value subBlock4/ Event0 P17  Delay subBlock4/Event0 P18  Value subBlock4/ Event1 P19  Delay subBlock4/Event1 P20 

|EV|CH Event Scheduler 4 Outputs<br>_ _ _ _<br>Sub-block 1<br>Sub-block 2<br>Sub-block 3<br>Sub-block 4|OAd1.1bit|
|---|---|---|
|<br>P1|<br>P1|<br>P1|
|<br>P1|<br>P1|Oad1.8bit|
|<br>P1|<br>P1|Oad1.16bit|
|<br>P1|<br>P1|Oad2.1bit|
|<br>P1|<br>P1|Oad2.8bit|
|<br>P1|<br>P1|Oad2.16bit|
|<br>P1|<br>P1|Oad3.1bit|
|<br>P1|<br>P1|Oad3.8bit|
|<br>P1|<br>P1|Oad3.16bit|
|<br>P1|<br>P1|Oad4.1bit|
|<br>P1|<br>P1|Oad4.8bit|
|<br>P1|<br>P1|Oad4.16bit|
|<br>P1|<br>P1||
|P2|P2|P2|
|P3|P3|P3|
|P4|P4|P4|
|P5|P5|P5|
|P6|P6|P6|
|P7|P7|P7|
|P8|P8|P8|
|P9|P9|P9|
|P10|P10|P10|
|P11|P11|P11|
|P12|P12|P12|
|P13|P13|P13|
|P14|P14|P14|
|P15|P15|P15|
|P16|P16|P16|
|P17|P17|P17|
|P18|P18|P18|
|P19|P19|P19|
|P20|P20|P20|
||||


-----

###### • Description: See Functional Block Scene Controller

 - There are 12 output Datapoints and 12 input Datapoints.

 - They are grouped in 4 blocks (adaptive E-Mode Channels).

 - The parameter blocks consist of:

Move Up/Down Move Up/Down Move Up/Down Move Up/Down

Adaptive set Adaptive set 2

value value value value

1 selection selection

set 1 scene 1 set 1 scene 2 set 2 scene 1 set 2 scene 2

,,,,,,,,,,,,,,

###### - The length of the parameter is related to the selection coded in the lower part:
  high part (bit 7…3) = priority for adaptation
  lower part (bit 2, 1, 0) = size of Datapoint

 - When activate, the values contained in the parameter blocks corresponding to the Scene A or B (or scene number) are copied in the Datapoint, respecting the size and the Datapoint index. The size is coded in the lower part of the adaptive value.

 - When learning, the values are copied from the Datapoint in the parameter blocks corresponding to the Scene A or B (or scene number), respecting the size and the Datapoint index.

 • Datapoint list:

**Sub-** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC** **Additional CCs**

**unit** **(i/o,x,v, l,…)**

1 1006/Event 1 CC_Switch_OnOff I

2 Oad1.1bit 1 CC_ADAPT_1BIT OTL

3 Oad1.8bit 1 CC_ADAPT_8BIT OTL

4 Oad1.16bit 1 CC_ADAPT_16BIT OTL

5 Oad2.1bit 1 CC_ADAPT_1BIT OT

6 Oad2.8bit 1 CC_ADAPT_8BIT OT

7 Oad2.16bit 1 CC_ADAPT_16BIT OT

8 Oad3.1bit 1 CC_ADAPT_1BIT OT

9 Oad3.8bit 1 CC_ADAPT_8BIT OT

10 Oad3.16bit 1 CC_ADAPT_16BIT OT

11 Oad4.1bit 1 CC_ADAPT_1BIT OT

12 Oad4.8bit 1 CC_ADAPT_8BIT OT

13 Oad4.16bit 1 CC_ADAPT_16BIT OT

|Adaptive set<br>1 selection|Adaptive set 2<br>selection|Move Up/Down<br>value<br>set 1 scene 1|Col4|Move Up/Down<br>value<br>set 1 scene 2|Col6|Move Up/Down<br>value<br>set 2 scene 1|Col8|Move Up/Down<br>value<br>set 2 scene 2|Col10|
|---|---|---|---|---|---|---|---|---|---|
|,  ,  ,  ,  ,  ,  ,|,  ,  ,  ,  ,  ,  ,|||||||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v, l,…)|
|---|---|---|---|---|---|---|
|1|1006/Event||1|CC_Switch_OnOff||I|
|2|Oad1.1bit||1|<br>CC_ADAPT_1BIT||OTL|
|3|Oad1.8bit||1|<br>CC_ADAPT_8BIT||OTL|
|4|Oad1.16bit||1|<br>CC_ADAPT_16BIT||OTL|
|5|Oad2.1bit||1|<br>CC_ADAPT_1BIT||OT|
|6|Oad2.8bit||1|<br>CC_ADAPT_8BIT||OT|
|7|Oad2.16bit||1|<br>CC_ADAPT_16BIT||OT|
|8|Oad3.1bit||1|<br>CC_ADAPT_1BIT||OT|
|9|Oad3.8bit||1|<br>CC_ADAPT_8BIT||OT|
|10|Oad3.16bit||1|<br>CC_ADAPT_16BIT||OT|
|11|Oad4.1bit||1|<br>CC_ADAPT_1BIT||OT|
|12|Oad4.8bit||1|<br>CC_ADAPT_8BIT||OT|
|13|Oad4.16bit||1|<br>CC_ADAPT_16BIT||OT|


-----

###### • Parameter table:

**Recommended** **Bit**
**Index** **FB Parameter ID** **Name** **Type**

**default value** **Offset**

1 Selection SubBlock1 PART_Adaptative_Selection 0

2 Selection SubBlock2 PART_Adaptative_Selection 8

3 Selection SubBlock3 PART_Adaptative_Selection 16

4 Selection SubBlock4 PART_Adaptative_Selection 24

5 ValueSubBlock1/Event0 PART_Render_Value 32

6 Delay for SubBlock 1/Event 0 PART_Time_Delay 48

7 ValueSubBlock1/Event1 PART_Render_Value 56

8 Delay for SubBlock 1/Event 1 PART_Time_Delay 72

9 ValueSubBlock2/Event0 PART_Render_Value 80

10 Delay for SubBlock 2/Event 0 PART_Time_Delay 96

11 ValueSubBlock2/Event1 PART_Render_Value 104

12 Delay for SubBlock 2/Event 1 PART_Time_Delay 120

13 ValueSubBlock3/event0 PART_Render_Value 128

14 Delay for SubBlock 3/ Event 0 PART_Time_Delay 144

15 ValueSubBlock3/Event1 PART_Render_Value 152

16 Delay for SubBlock 3/ Event 1 PART_Time_Delay 168

17 ValueSubBlock4/event0 PART_Render_Value 176

18 Delay for SubBlock 4/Event 0 PART_Time_Delay 192

19 ValueSubBlock4/Event1 PART_Render_Value 200

20 Delay for SubBlock 4/Event 1 PART_Time_Delay 216

|Index|FB Parameter ID|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|Selection SubBlock1||PART_Adaptative_Selection||0|
|2|Selection SubBlock2||<br>PART_Adaptative_Selection||8|
|3|Selection SubBlock3||<br>PART_Adaptative_Selection||16|
|4|Selection SubBlock4||<br>PART_Adaptative_Selection||24|
|5|ValueSubBlock1/Event0||<br>PART_Render_Value||32|
|6|Delay for SubBlock 1/Event 0||<br>PART_Time_Delay||48|
|7|ValueSubBlock1/Event1||<br>PART_Render_Value||56|
|8|Delay for SubBlock 1/Event 1||<br>PART_Time_Delay||72|
|9|ValueSubBlock2/Event0||<br>PART_Render_Value||80|
|10|Delay for SubBlock 2/Event 0||<br>PART_Time_Delay||96|
|11|ValueSubBlock2/Event1||<br>PART_Render_Value||104|
|12|Delay for SubBlock 2/Event 1||<br>PART_Time_Delay||120|
|13|ValueSubBlock3/event0||<br>PART_Render_Value||128|
|14|Delay for SubBlock 3/ Event 0||<br>PART_Time_Delay||144|
|15|ValueSubBlock3/Event1||<br>PART_Render_Value||152|
|16|Delay for SubBlock 3/ Event 1||<br>PART_Time_Delay||168|
|17|ValueSubBlock4/event0||<br>PART_Render_Value||176|
|18|Delay for SubBlock 4/Event 0||<br>PART_Time_Delay||192|
|19|ValueSubBlock4/Event1||<br>PART_Render_Value||200|
|20|Delay for SubBlock 4/Event 1||<br>PART_Time_Delay||216|


-----

4 CC_Switch_OnOff 4 8.1 - 11

|Subblock<br>index|Connection Code|Corresponding<br>Parameter index|Adapting<br>Parameter<br>value|Input<br>Datapoint|Output<br>Datapoint|
|---|---|---|---|---|---|
|1|CC_Move_UpDown|1|1.1|-|2|
|1|<br>CC_Dimming_Value|1|2.8|-|3|
|1|<br>CC_Operation_Mode|1|6.1|-|2|
|1|<br>CC_Enable|1|7.1|-|2|
|1|<br>CC_Switch_OnOff|1|8.1|-|2|
|2|<br>CC_Move_UpDown|2|1.1|-|5|
|2|<br>CC_Dimming_Value|2|2.8|-|6|
|2|<br>CC_Operation_Mode|2|6.1|-|5|
|2|<br>CC_Enable|2|7.1|-|5|
|2|<br>CC_Switch_OnOff|2|8.1|-|5|
|3|<br>CC_Move_UpDown|3|1.1|-|8|
|3|<br>CC_Dimming_Value|3|2.8|-|9|
|3|<br>CC_Operation_Mode|3|6.1|-|8|
|3|<br>CC_Enable|3|7.1|-|8|
|3|<br>CC_Switch_OnOff|3|8.1|-|8|
|4|<br>CC_Move_UpDown|4|1.1|-|11|
|4|<br>CC_Dimming_Value|4|2.8|-|12|
|4|<br>CC_Operation_Mode|4|6.1|-|11|
|4|<br>CC_Enable|4|7.1|-|11|
|4|<br>CC_Switch_OnOff|4|8.1|-|11|


-----

#### 2.13 CH_DateTime_Scheduler (Channel Code 0205h)

###### • Name: CH_DateTime_Scheduler

 • ID: 0205h

 • Classification: Functional Module

 • Functional Block:

 • 1001 – FB System Clock (See [02])

    - 1012 – FB Scheduler (See [04])

###### • Graphical representation:

 Inputs Outputs

 Date DA CH_DateTime_Scheduler

 Time TI

 Oad1.1bit

 Oad1.8bit
 Subblock 1
 Oad1.16bit

 Parameters

 Selection sub-block1 P1

 DateTime for step 1 P2

 Value for step 1 P3

 DateTime for step 2 P4

 Value for step 2 P5

 DateTime for step 3 P6

 Value for step 3 P7

 DateTime for step 4 P8

 Value for step 4 P9

 • Description: See Functional Block Scheduler.

 • Datapoint list:

**Additional** **Flags**
**Index FB / DP_Name** **Name** **Subunit** **Main CC**

**CCs** **(i/o,x,v, l…)**

1 1005/Date 1 CC_Date I

2 1005/Time 1 CC_Time I

3 Oad1.1bit 1 CC_ADAPT_1BIT O T L

4 Oad1.8bit 1 CC_ADAPT_8BIT O T L

5 Oad1.16bit 1 CC_ADAPT_16BIT O T L

|Inputs|Col2|Col3|
|---|---|---|
|DA<br>TI<br>**_Parameters_** <br> sub-block1 P1<br>  ep 1<br>P2<br> <br>P3<br>  ep 2<br>P4<br> <br>P5<br>  ep 3<br>P6<br> <br>P7<br>  ep 4<br>P8<br> <br>P9|**CH_DateTime_Scheduler**|Oad1.1bit|
|DA<br>TI<br>**_Parameters_** <br> sub-block1 P1<br>  ep 1<br>P2<br> <br>P3<br>  ep 2<br>P4<br> <br>P5<br>  ep 3<br>P6<br> <br>P7<br>  ep 4<br>P8<br> <br>P9|Subblock 1|Subblock 1|
|DA<br>TI<br>**_Parameters_** <br> sub-block1 P1<br>  ep 1<br>P2<br> <br>P3<br>  ep 2<br>P4<br> <br>P5<br>  ep 3<br>P6<br> <br>P7<br>  ep 4<br>P8<br> <br>P9|Subblock 1|Oad1.8bit|
|DA<br>TI<br>**_Parameters_** <br> sub-block1 P1<br>  ep 1<br>P2<br> <br>P3<br>  ep 2<br>P4<br> <br>P5<br>  ep 3<br>P6<br> <br>P7<br>  ep 4<br>P8<br> <br>P9|Subblock 1|Oad1.16bit|
|DA<br>TI<br>**_Parameters_** <br> sub-block1 P1<br>  ep 1<br>P2<br> <br>P3<br>  ep 2<br>P4<br> <br>P5<br>  ep 3<br>P6<br> <br>P7<br>  ep 4<br>P8<br> <br>P9|Subblock 1||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v, l…)|
|---|---|---|---|---|---|---|
|1|1005/Date||1|CC_Date||I|
|2|1005/Time||1|<br>CC_Time||I|
|3|Oad1.1bit||1|<br>CC_ADAPT_1BIT||O T L|
|4|Oad1.8bit||1|<br>CC_ADAPT_8BIT||O T L|
|5|Oad1.16bit||1|<br>CC_ADAPT_16BIT||O T L|


-----

###### • Parameter table:

**Bit**
**Index** **FB Parameter ID** **Name** **Recommended default value**
**Offset**

1 Selection SubBlock1 PART_Adaptative_Selection 0

2 Date for step 1 PART_Date_Time 8 (8 octets)

3 Value for step 1 PART_Render_Value 72 (1 octet)

4 Date for step 2 PART_Date_Time 88

5 Value for step 2 PART_Render_Value 152

6 Date for step 3 PART_Date_Time 168

7 Value for step 3 PART_Render_Value 232

8 Date for step 4 PART_Date_Time 248

9 Value for step 4 PART_Render_Value 312

###### The usage of format Date&Time with the validity of fields, enables to have some calendar events like the first Monday of every week, the 3[rd] of each month …

Note - Don't care about the field “seconds”.

**Corresponding** **Adapting**

**Subblock** **Connection** **Output**

**Parameter** **Parameter** **Input Datapoint**

**index** **Code** **Datapoint**

**index** **value**

1 CC_Move UpDown 1 1.1 3

1 CC_Dimming_Value 1 2.8 4

1 CC_Operation_Mode 1 6.1    - 3

1 CC_Enable 1 7.1 3

1 CC_Switch_OnOff 1 8.1 3

#### 2.14 CH_System_Clock_Master (Channel Code 0206h)

###### • Name: CH_System_Clock_Master

 • ID: 0206h

 • Classification: sensor

 • Functional Block:

 • 1001 - FB System Clock

 • Graphical representation:

 Inputs Outputs

 [CH_System_Clock_Master]

 DA Date

 Paramaters TI Time

|Index|FB Parameter ID|Name|Recommended default value|Bit<br>Offset|
|---|---|---|---|---|
|1|Selection SubBlock1||PART_Adaptative_Selection|0|
|2|Date for step 1||<br>PART_Date_Time|8 (8 octets)|
|3|Value for step 1||<br>PART_Render_Value|72 (1 octet)|
|4|Date for step 2||<br>PART_Date_Time|88|
|5|Value for step  2||<br>PART_Render_Value|152|
|6|Date for step 3||<br>PART_Date_Time|168|
|7|Value for step 3||<br>PART_Render_Value|232|
|8|Date  for step 4||<br>PART_Date_Time|248|
|9|Value for step 4||<br>PART_Render_Value|312|

|Subblock<br>index|Connection<br>Code|Corresponding<br>Parameter<br>index|Adapting<br>Parameter<br>value|Input Datapoint|Output<br>Datapoint|
|---|---|---|---|---|---|
|1|CC_Move UpDown|1|1.1||3|
|1|<br>CC_Dimming_Value|1|2.8||4|
|1|<br>CC_Operation_Mode|1|6.1|-|3|
|1|<br>CC_Enable|1|7.1||3|
|1|<br>CC_Switch_OnOff|1|8.1||3|

|CH System Clock Master<br>_ _ _|DA|
|---|---|
|**CH_System_Clock_Master**|TI|
|**CH_System_Clock_Master**||


-----

###### • Description: See FB System Clock (see [02]).

 With Parameter SCLO mode is set to master (=2).

 • Datapoint list:

**Sub-** **Additional** **Flags**
**Index FB / DP_Name** **Name**
**Unit** **[Main CC ]** **CCs** **(i/o,x,v,…)**

1 1001/Date Date 1 CC_Date O

2 1001/Time Time 1 CC_Time O L

#### 2.15 CH_System_Clock_Slave (Channel Code 0209h)

###### • Name: CH_System_Clock_Slave

 • ID: 0209h

 • Classification: actuator

 • Functional Block:

 • 1001 - FB System Clock (See [02].)

 • Graphical representation:

 Inputs Outputs
 CH_System_Clock_Slave
 1001.Date DA  1001.Time TI 
 Parameters
 • Description: Please refer to the specifications of FB System Clock in [02]. The Parameter SCLOMode of this FB shall be set to “Slave” (value = 1).

 • Datapoint list 

**Flags**
**Index** **FB Datapoint ID** **Name** **Subunit** **Main CC** **Additional CCs**
**(i/o,x,v, …)**

1 1001.Date Date 1 CC_Date I

2 1001.Time Time 1 CC_Time IL

|Index|FB / DP Name<br>_|Name|Sub-<br>Unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1 <br>|1001/Date|Date|1|CC_Date||O|
|2 <br>|1001/Time|Time|1|<br>CC_Time||O L|

|1001.Date DA<br>1001.Time TI<br>Parameters|CH System Clock Slave<br>_ _ _|
|---|---|

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|1|1001.Date|Date|1|CC_Date||I|
|2|1001.Time|Time|1|<br>CC_Time||IL|


-----

### 3 Functional Blocks

#### 3.1 Usage requirements
###### The Functional Block specifications below only provide complementary information to the Channel Definitions specified in this document. They are only provided for completeness and understanding of the these channel definitions.

 These Functional Blocks shall be used only for implementation of Easy Configuration mode devices.

 These Functional Block specifications shall not be used for any other goal; in particular, no implementation for S-Mode devices shall be based on these specifications.

 KNX Association will take care of compatibility between any currently specified Channel Definition and the final version of these Functional Blocks.

 To this, the KNX Association Application Specification Groups shall take the functionality achieved by these Functional Blocks as the minimal mandatory basis for further work.

#### 3.2 FB_Logic_ANDOR (FB LAO)

###### • Name: FB_Logic_ANDOR

 • Object type: 1007

##### 3.2.1 Functional description
###### When a value on one of the input Datapoints is received the logical function AND or OR (according toparameterisation) shall be carried out for all connected input Datapoints. The result shall be sent on the output Datapoint. According to the parameter “invert result” the result can be inverted to allow more logical calculation.

 Default value for OR is 0, for AND shall be 1.

 The parameter Used input shall be used to indicate to the application which Datapoints are connected. This permits an immediate distribution of the result after restart.

##### 3.2.2 FB description

|FB Logic ANDOR<br>_ _|Col2|
|---|---|
|Logical<br>result<br>logical value 1<br>logical value<br>...<br>logical value<br>N|Logical<br>result<br>logical value 1<br>logical value<br>...<br>logical value<br>N|
|||
|Parameters<br>Logical function type<br>Invert result<br>Used inputs||


-----

##### 3.2.3 Datapoints

**Datapoint** **Abbr. Description** **Datapoint Type**

**Inputs**

Logical value 1 LV1 Input for logical function 1.002 DPT_Bool

…

Logical value N LVN Input for logical function 1.002 DPT_Bool

**Outputs**

Logical Result LR Datapoint 1 to be connected and to be 1.002 DPT_Bool
mastered by the scene manager

**Parameters**

Logical function type P1 To set the function AND or OR of the 1.021 DPT_LogicalFunction
FB

Invert result P2 To invert the result 1.012 DPT_Invert

Used Inputs P3 To indicate which inputs are connected 1)

###### 3.2.3.1 Distribution table

**STANDARD**
**EXTENDED MODE**
**MODE**

**Inputs** **LV1** GOb  -  -  
**LV2** GOb        -        -        
**LVn** (GO)b        -        -        
**Outputs** **LR** GOb  -  -  
**Parameters P1** M  -  -  
**P2** O        -        -        
**P3** O        -        -        
1) According to the implementation and the number of inputs Logical value, this parameter is a bit field.
Bit 0 = LV1, bit 1=LV2…

|Datapoint|Abbr.|Description|Datapoint Type|
|---|---|---|---|
|**Inputs**||||
|Logical value 1|LV1|Input for logical function|1.002 DPT_Bool|
|…||||
|Logical value N|LVN|Input for logical function|1.002 DPT_Bool|
|**Outputs**||||
|Logical Result|LR|Datapoint 1 to be connected and to be<br>mastered by the scene manager|1.002 DPT_Bool|
|**Parameters**||||
|Logical function type|P1|To set the function AND or OR of the<br>FB|1.021 DPT_LogicalFunction|
|Invert result|P2|To invert the result|1.012 DPT_Invert|
|Used Inputs|P3|To indicate which inputs are connected|<br>1)|

|Col1|Col2|Basic FB|STANDARD<br>MODE|EXTENDED MODE|Col6|
|---|---|---|---|---|---|
|||**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-Mode**|
|**Inputs**|**LV1**|GOb|-|-|-|
||**LV2**|GOb|-|-|-|
||**LVn**|(GO)b|-|-|-|
|**Outputs**|**LR**|GOb|-|-|-|
|**Parameters**|** P1**|M|-|-|-|
||**P2**|O|-|-|-|
||**P3**|O|-|-|-|


-----

###### 3.2.3.2 Input:Logical value

DP Name: Logical value X Abbr.: LVx Mandatory
FB Name: 1007 FB Logic AND/OR Can be internal
**Description**
Input value for the logic calculation
**Datapoint Type**
DPT_Name: DPT_Bool
DPT Format: B1 DPT_ID: 1.002
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out:
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --♦ Interface Object Property Datapoint Mandatory:

  - Server Object_type: PID:
Start_index: Nr_of_elements:
**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value: 0
Saved value: Actual value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
**Exception Handling**

**Special Features**

|DP Name:|Col2|Logical value X|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Abbr.:|Col15|Col16|Col17|LVx|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|1007 FB Logic AND/OR|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|
|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|<br>Input value for the logic calculation|
|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.002|1.002|1.002|1.002|1.002|1.002|1.002|1.002|1.002|
|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|<br> <br>_<br> <br>**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this|N → this|||||||1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|||||||||Time-out:|Time-out:|Time-out:|Time-out:|Time-out:||||||||
||Request|Request|Request|Request|Request|Request||||||Polling:|Polling:|Polling:|Polling:|Polling:|||||||||Period:|Period:|Period:|Period:|Period:||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:|||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:|||||||
||<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>Object_type:|<br>Object_type:|<br>Object_type:|<br>Object_type:|||||||||||PID:|PID:|PID:|PID:|PID:|PID:|||||||||
||<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:|||||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||0|0|0|
||||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|||||||
|||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|||||
|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|
||||||||||||||||||||||||||||||||||||||
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
||||||||||||||||||||||||||||||||||||||


-----

###### 3.2.3.3 Output: Logical result

DP Name: Logical result Abbr.: LR Mandatory
FB Name: 1007 FB Logic And/Or Can be internal
**Description**
This Datapoint is the result of the logic calculation
**Datapoint Type**
DPT_Name: DPT_Bool
DPT Format: B1 DPT_ID: 1.002

♦ Output
this → M this → 1
Spontaneous COV: ∆-Value: Min repetition period:
Cyclic Period:
Request
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --♦ Interface Object Property Datapoint Mandatory:

  - Client Object_type (server): PID (property server):
Start_index: Nr_of_elements:
**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Actual value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
**Exception Handling**
--**Special Features**

###### 3.2.3.4 Parameter: Logical Function type

DP Name: Logical function type Abbr.: P1 Mandatory
FB Name: 1007 - FB_Logical_And/Or Can be internal
**Description**

**Datapoint Type**
DPT_Name: DPT_LogicalFunction
DPT Format: B1 DPT_ID: 1.021
Field Description Supp. Range Unit
B1 0 = logical function OR
1 = logical function AND

**Exception Handling**
--**Special Features**
None.

|DP Name:|Col2|Logical result|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|LR|Col23|Col24|Col25|Col26|Col27|Mandatory|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|1007 FB Logic And/Or|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|
|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|<br>This Datapoint is the result of the logic calculation|
|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|<br>**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|<br>DPTBool|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|1.002|1.002|1.002|1.002|1.002|1.002|1.002|1.002|1.002|
|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|<br> <br>_<br>|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M|||||||this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:|<br>COV:|<br>COV:||||∆-Value:|∆-Value:|∆-Value:|∆-Value:|∆-Value:|||||Min repetitionperiod:|Min repetitionperiod:|Min repetitionperiod:|Min repetitionperiod:|Min repetitionperiod:||||||||
||||||||||Cyclic|Cyclic|Cyclic|Cyclic|Cyclic||||Period:|Period:|Period:|Period:|Period:|||||||||||||||||
||Request|Request|Request|Request|Request|Request||<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:|||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:|||||||
||<br>• <br>Client<br>|<br>• <br>Client<br>|<br>• <br>Client<br>|<br>• <br>Client<br>|<br>• <br>Client<br>|<br>• <br>Client<br>|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|||||||||PID(property server):|PID(property server):|PID(property server):|PID(property server):|PID(property server):|||||||||
||<br> <br>|<br> <br>|<br> <br>|<br> <br>|<br> <br>|<br> <br>|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||
||||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|||||||
|||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|||||
|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|
|||||||||||||||||||||||||||||||||||||||

|DP Name:|Logical function type|Col3|Col4|Abbr.:|P1|Col7|Col8|Mandatory|Col10|Col11|Col12|Col13|Col14|Col15|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|Can be internal|Can be internal|Can be internal|Can be internal||||
|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|
||||||||||||||||
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|<br>DPTLogicalFunction|
|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|1.021|1.021|1.021|1.021|1.021|1.021|
|<br> <br>Field|<br> <br>Field|<br> <br>Field|Description|Description|Description|Supp.|_<br> <br>Range|_<br> <br>Range|_<br> <br>Range|<br>Unit|Default|Default|Default|Default|
|<br>B1|<br>B1|<br>B1|<br>0 = logical function OR<br>1 = logical function AND|<br>0 = logical function OR<br>1 = logical function AND|<br>0 = logical function OR<br>1 = logical function AND||||||<br>0|<br>0|<br>0|<br>0|
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|
|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|


-----

###### 3.2.3.5 Parameter: Invert result

DP Name: Invert result
FB Name: 1007 - FB_Logical_And/Or
**Description**

**Datapoint Type**
DPT_Name: DPT_Invert
DPT Format: B1
Field Description
B1 0 = result not inverted
1 = result inverted

**Exception Handling**
--**Special Features**
None.

|DP Name:|Invert result|Col3|Col4|Abbr.:|P2|Col7|Col8|Mandatory|Col10|Col11|Col12|Col13|Col14|Col15|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|1007 - FBLogicalAnd/Or|Can be internal|Can be internal|Can be internal|Can be internal||||
|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|__<br>**Description**|
||||||||||||||||
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|<br>DPTInvert|
|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|1.012|1.012|1.012|1.012|1.012|1.012|
|<br> <br>Field|<br> <br>Field|<br> <br>Field|Description|Description|Description|Supp.|_<br> <br>Range|_<br> <br>Range|_<br> <br>Range|<br>Unit|Default|Default|Default|Default|
|<br>B1|<br>B1|<br>B1|<br>0 = result not inverted<br>1 = result inverted|<br>0 = result not inverted<br>1 = result inverted|<br>0 = result not inverted<br>1 = result inverted||||||<br>0|<br>0|<br>0|<br>0|
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|<br>**Special Features**|
|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|


-----

