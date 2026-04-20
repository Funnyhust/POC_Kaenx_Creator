# Application Descriptions

## Common Functional Blocks

 Adjustable E-Mode Channels

###### Summary

 This document provides the specification of the Adjustable E-Mode Channels.

 Version 01.00.03 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

0.1 2007.10.01 Document creation.

                - **S12 “Channel Codes” integrated.**
2007.10.03         - **AN050 “AN to Supplement 12” integrated.**
2007.10.05         - **AN051 “New E-Mode Channels” integrated.**
2007.10.18         - **AN078 “New E-Mode Channels 2005.02” integrated.**
2008.08.09 **1. AN106 "Phasing out TP0" integrated.**
**2. AN107 "Phasing out LT-R" integrated.**
**3. AN108 "Phasing out LT-S" integrated.**
**4. AN109 "Phasing out PL132" integrated.**
**5. AN110 "Phasing out A-Mode" integrated.**
1.0 2009.05.06 Preparation of the AS in preparation of integration in KNX Specifications
v2.0.
01.00.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.
01.00.02 2013.11.29 Editorial updates.
01.00.03 2022.02.24 Preparation for inclusion in the KNX Specifications v3.0.

#### References

[01] Chapter 7/1/2 “Common Sensors”

[02] Chapter 7/10/2 “HVAC HMI Functional Blocks”

[03] Chapter 7/20/1 “Lighting Sensors”

[04] Chapter 7/50/1 “Shutters and Blinds Sensors”

[05] Chapter 7/50/11 “Shutters and Blinds E-Mode Channels”

Filename: 07_01_12 Adjustable Channels v01.00.03 AS.docx
Version: 01.00.03
Status: Approved Standard
Savedate: 2022.02.24
Number of pages: 54

|Version|Date|Modifications|
|---|---|---|
|0.1|2007.10.01|Document creation.<br>• **S12 “Channel Codes”** integrated.|
|0.1|2007.10.03|<br>• **AN050 “ANto Supplement 12”** integrated.|
|0.1|2007.10.05|<br>• **AN051 “New E-Mode Channels”** integrated.|
|0.1|2007.10.18|<br>• **AN078 “New E-Mode Channels 2005.02”** integrated.|
|0.1|2008.08.09|<br>**1. AN106 "Phasing out TP0"** integrated. <br>**2. AN107 "Phasing out LT-R"** integrated. <br>**3. AN108 "Phasing out LT-S"** integrated. <br>**4. AN109 "Phasing out PL132"** integrated. <br>**5. AN110 "Phasing out A-Mode"** integrated.|
|1.0|2009.05.06|<br>Preparation of the AS in preparation of integration in KNX Specifications<br>v2.0.|
|01.00.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.00.02|2013.11.29|Editorial updates.|
|01.00.03|2022.02.24|Preparation for inclusion in the KNXSpecifications v3.0.|


-----

#### Contents

##### 1 Introduction ............................................................................................................................ 4 1.1 Definition ........................................................................................................................ 4 1.2 Application ..................................................................................................................... 4 1.3 Support of scenes ............................................................................................................ 5

 2 E-Mode Channels ................................................................................................................... 7 2.1 CH_Generic_Switch_1 (Channel Code 0300h) .............................................................. 7 2.2 CH_Generic_Switch_2 (Channel Code 0301h) .............................................................. 9 2.3 CH_Generic_Switch_3 (Channel Code 0302h) ............................................................ 12 2.4 CH_Generic_Switch_4 (Channel Code 0303h) ............................................................ 14 2.5 CH_Generic_Switch_Info_1 (Channel Code 0304h) ................................................... 16 2.6 CH_Generic_Switch_Info_2 (Channel Code 0305h) ................................................... 18 2.7 CH_Generic_Switch_FixedPos_1 (Channel Code 0306h) ........................................... 19 2.8 CH_Generic_Switch_FixedPos_2 (Channel Code 0307h) ........................................... 21 2.9 CH_Generic_PB_Info_1 (Channel Code 0308h) ......................................................... 22 2.10 CH_Generic_PB_2 (Channel Code 0309h) .................................................................. 25 2.11 CH_Generic_PB_3 (Channel Code 030Ah) ................................................................. 27 2.12 CH_Generic_PB_4 (Channel Code 030Bh) ................................................................. 28 2.13 CH_Generic_PB_1/2_1 (Channel Code 030Ch) .......................................................... 30 2.14 CH_Generic_PB_1/2_Info_1 (Channel Code 030Dh) ................................................ 32 2.15 CH_Generic_PB_1/2_Info_2 (Channel Code 030Eh) .................................................. 35 2.16 CH_Generic_Binary_Contact (Channel Code 030Fh) ................................................. 38 2.17 CH_Generic_Switch_5 (Channel Code 0311h) ............................................................ 39 2.18 CH_Generic_PB_1/2_Info_3 (Channel Code 0312h) .................................................. 41 2.19 CH_Generic_PB_1/2_Info_4 (Channel Code 0313h) .................................................. 44 2.20 CH_Generic_PB_1/2_2 (Channel Code 0314h) ........................................................... 47 2.21 CH_Generic_Switch_Lighting_Complex_Info (Channel Code 0315h) ...................... 50 2.22 CH_Generic_PB_½_Info_5 (Channel Code 0316h) .................................................... 52


-----

### 1 Introduction

#### 1.1 Definition
###### Adjustable E-Mode Channels (or Generic E-Mode Channels) come from the today requirements. These E-Mode Channels are able to work as a lighting switch, as a dimming push button, as a blind sensor, with each function configurable. The Generic E-Mode Channel is based on the feature of an application level process (a controller for example) to adjust the predefined application to its actual target function. The following features are used:
 - Standard E-Mode Channels for each implemented function inside the Generic E-Mode Channel. - Possibility to have E-Mode Channels with dummy Datapoints. - A Parameter (named Adjustable Select = “ajs”) inside the E-Mode Channel to adjust the used functionality.

NOTE For localisation in Ctrl-Mode, use the localisation Datapoint of the current selection. If default (not configured), use the
Datapoint from the default line in the adjustable table.

#### 1.2 Application
###### The appliance is drawn in the following overview.

**Push Button** **Switch released** **Switch fixed pos** **Push Button Info**
One pressing point release Two pressing points released Two pressing points One pressing point release
after press after press into independent staying in last position after press with indication

position lamp

possible E-Mode Channels possible E-Mode Channels possible E-Mode possible E-Mode Channels
Channels

CH_Push-Button CH_Push-Button[3] CH_Push-Button[3] CH_Push-Button[1]
CH_PB_Toggle CH_PB_Toggle[3] CH_PB_Toggle[3] CH_PB_Toggle[2]
(???)[7]

CH_Switch CH_Switch[6 ]
CH_PB_Scene_Numbered CH_Switch_Scene_Numbered CH_PB_Scene_Numbered[1]
CH_PB_Scene CH_Switch_Scene CH_PB_Scene[1]
CH_Switch_Forced CH_Switch_Forced
CH_PB_Timed StartStop CH_PB_Timed StartStop[5] CH_PB_Timed
StartStop_Info
CH_Switch_Dimmer
CH_PB_Dimmer_Toggle CH_Switch_Dimmer_Toggle[4] CH_PB_Dimmer_Toggle[2]
CH_Switch_Sunblind
CH_PB_Sunblind_Toggle CH_PB_Shutter_Toggle[1]

###### NOTES 1. Without Info functionality (display status) via feedback. 2. Info functionality (display status) derived from the Info OnOff Datapoint. 3. The interaction point is on top and on bottom. 4. The toggle functionality is on top and on bottom for interaction 1 only.
 The long press on top or on bottom is like standard dimming behaviour. 5. It is assumed that it is possible to send manually off on second interaction (bottom). 6. It’s critical to use this E-Mode Channel type in parallel. 7. The use of this function is not clear to the end user.

|Push Button<br>One pressing point release<br>after press<br>possible E-Mode Channels|Switch released<br>Two pressing points released<br>after press into independent<br>position<br>possible E-Mode Channels|Switch fixed pos<br>Two pressing points<br>staying in last position<br>possible E-Mode<br>Channels|Push Button Info<br>One pressing point release<br>after press with indication<br>lamp<br>possible E-Mode Channels|
|---|---|---|---|
|CHPush-Button|CHPush-Button3|CHPush-Button3|CHPush-Button1|
|_<br>CH_PB_Toggle|_<br>CH_PB_Toggle3|_<br>CH_PB_Toggle3 <br>(???)7|_<br>CH_PB_Toggle2|
||CHSwitch|CHSwitch6||
|CHPBSceneNumbered|_<br>CHSwitchSceneNumbered|_<br>|CHPBSceneNumbered1|
|___<br>CHPBScene|___<br>CHSwitchScene||___<br>CHPBScene1|
|__|__<br>CHSwitchForced|CHSwitchForced|__|
|CH_PB_Timed StartStop|__<br>CH_PB_Timed StartStop5|__|CH_PB_Timed<br>StartStopInfo|
||CHSwitchDimmer||_|
|CHPBDimmerToggle|__<br>CHSwitchDimmerToggle4||CHPBDimmerToggle2|
|___|___<br>CHSwitchSunblind||___|
|CH_PB_Sunblind_Toggle|__||CH_PB_Shutter_Toggle1|


-----

CH_PB_Scene CH_PB_Scene[1]
CH_Switch_Forced[8] CH_Switch_Forced
CH_PB_Timed_ON_Info[5] CH_PB_Timed_ON CH_PB_Timed_ON_Info
CH_Switch_Dimmer_Info CH_PB_Dimmer[9] CH_PB_Dimmer_info[9]
CH_PB_Dimmer_Toggle CH_PB_Dimmer_Toggle
CH_Switch_Sunblind[1] CH_PB_Blind[9] CH_PB_Blind[9]
CH_PB_Sunblind_Toggle CH_PB_Sunblind_Toggle
CH_Wind_Sensor
CH_Rain_Sensor

###### NOTES 1. The forced state is displayed while listening to the Forced Datapoint. 2. This is a ½-E-Mode Channel. A second E-Mode Channel of same type is needed for a complete function. Localisation Datapoints of Adjustable E-Mode Channels

 The localisation of the Adjustable E-Mode Channels shall normally be done with unconfigured adjustment (default). For this use, the localisation Datapoint shall be marked with the L-flag.

 On other Configuration Modes than Ctrl-Mode the Localisation flag (L-flag) and localisation Datapoint shall be optional. In Configuration Modes with tool access (Ctrl-Mode) if ajs = 0 it is mandatory to send the localisation Datapoint according to the functionality of the default adjustment.

 To adjusted Generic E-Mode Channels there are GAs already assigned to the Datapoints that are valid for the selection. This shall be used for localisation.

#### 1.3 Support of scenes
###### For Scene Number Datapoints, it is mandatory to deal at least with numbers from 1 to 8 (coded 0 to 7). It is allowed to deal with higher values. This shall thus be as specified in Table 1.

 Table 1 – Scene numbering and coding in E-Mode Channels

|Switch release end Info<br>Two pressing points released<br>after press into independent<br>position with indication lamp<br>possible E-Mode Channels|Push Button ½<br>One pressing point released<br>after press, possibility to<br>combine two of them to one<br>function (= ½-function)<br>possible E-Mode Channels|Push Button ½ Info<br>One pressing point<br>release after press with<br>indication lamp, possibility<br>to combine two of them to<br>one function (= ½-<br>function)<br>possible E-Mode<br>Channels|Binary contact<br>Binary input<br>functionality<br>possible E-Mode<br>Channels|
|---|---|---|---|
||CHPush-Button|CHPush-Button1||
||_<br>CHPBToggle|_<br>CHPBToggle2||
|CHSwitchInfo|__<br>---|__<br>---||
|__<br>CH_Switch_Scene_Numbered1|CH_PB_Scene_Numbered|CH_PB_Scene_-<br>Numbered1||
||CHPBScene|CHPBScene1||
|CHSwitchForced8|__|__|CHSwitchForced|
|__<br>CHPBTimedONInfo5|CHPBTimedON|CHPBTimedONInfo|__|
|____<br>CHSwitchDimmerInfo|___<br>CHPBDimmer9|____<br>CHPBDimmerinfo9||
|___|__<br>CHPBDimmerToggle|___<br>CHPBDimmerToggle||
|CHSwitchSunblind1|___<br>CHPBBlind9|___<br>CHPBBlind9||
|__|__<br>CHPBSunblindToggle|__<br>CHPBSunblindToggle||
||___|___|CHWindSensor|
||||__<br>CH_Rain_Sensor|

|Scene number|Scene letter|Coding|
|---|---|---|
|1|A|xx000000b|
|2|B|xx000001b|
|3|C|xx000010b|
|4|D|xx000011b|
|5|E|xx000100b|


-----

8 H xx000111b

|Scene number|Scene letter|Coding|
|---|---|---|
|6|F|xx000101b|
|7|G|xx000110b|
|8|H|xx000111b|


-----

### 2 E-Mode Channels

#### 2.1 CH_Generic_Switch_1 (Channel Code 0300h)
###### Name: CH_Generic_Switch_1

 ID: 0300h

 Classification: sensor

 Functional Block(s):

 421 - FB Switching Sensor Basic

 2 x 403 - FB Scene Sensor

 406 – FB PB Timed Sensor

 1020 – FB Priority Sensor

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_Switch_1**


OO + OnOff

TSS + Timed StartStop

SSUD StepStop UpDown

MUD Move UpDown

FO Forced_OnOff

**_Parameters_** DC Dimming_Ctrl

Adjustable select AJS SN Scene_Number

Scene number 1 P1

Scene number 2 P2

Control type P3

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control.

 Datapoint list:

**FB /** **Sub-** **Additional** **Flags**
**Index** **Name** **Main CC**
**DP_Name** **unit** **CCs** **(i/o,x,v,…)**

1 401 / OO OnOff 1 CC_Switch_OnOff CC_Logical O L
1 406 / TSS Timed StartStop 1 CC_Timed O
1 800 / SSUD StepStop UpDown 1 CC_StepStop_UpDow O
n

2 800 / MUD Move UpDown 1 CC_Move UpDown CC_Logical O
3 405 / FO Forced_OnOff 1 CC_Forced O
4 401-410 / DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O
5 403 - SN Scene number 1 CC_Scene_Number O

|AJS|CH Generic Switch 1<br>_ _ _|OO +|
|---|---|---|
|<br> <br> <br>AJS|**CH_Generic_Switch_1**|TSS+|
|<br> <br> <br>AJS|**CH_Generic_Switch_1**|SSUD|
|<br> <br> <br>AJS|**CH_Generic_Switch_1**|MUD|
|<br> <br> <br>AJS|**CH_Generic_Switch_1**|FO|
|<br> <br> <br>AJS|**CH_Generic_Switch_1**|DC|
|<br> <br> <br>AJS|**CH_Generic_Switch_1**|<br>SN|
|<br>P1|<br>P1||
|<br> <br> <br>P2|<br> <br> <br>P2|<br> <br> <br>P2|
|<br> <br> <br>P3|<br> <br> <br>P3|<br> <br> <br>P3|
|<br>|<br>|<br>|

|Index|FB /<br>DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|<br>401 / OO|OnOff|1|CCSwitchOnOff|CCLogical|O L|
|1|406 / TSS|Timed StartStop|1|__<br>CCTimed|_|<br>O|
|1|800 / SSUD|StepStop UpDown|1|_<br>CC_StepStop_UpDow<br>n||O|
|2|800 / MUD|Move UpDown|1|CCMove UpDown|CCLogical|O|
|3|405 / FO|ForcedOnOff|1|_<br>CCForced|_|<br>O|
|4|401-410 / DC|_<br>   DimmerCtrl|1|_<br>CCDimmingCtrl||O|
|5|<br>403- SN|_<br>Scene number|1|__<br>CCSceneNumber||O|


-----

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4** **5**

**Selection** **Parameter value**

**_Output_** **_Output_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_2 bits_** **_4 bits_** **_8 bits_**

Default 0 (none) OO - - - Switch CH_Switch OO - - - Dimming CH_Switch_Dimmer OO - - DC Sunblind CH_Switch_Sunblind SSUD MUD - - Timed CH_Timed StartStop TSS - - - Scene CH_Switch_Scene_Numbe

                                   -                                   -                                   -                                   - SN
r

Forced CH_Switch_Forced - - FO - 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 The parameter value corresponds to the E-Mode Channel ID.

 Parameter table:

**Recommended**
**Index** **Identifier** **Name** **Type**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 Scene number 1 PART_Scene_Number 0 10
3 P2 Scene number 2 PART_Scene_Number 0 18
2 P3 Control type PART_Boolean 0: Ctrl FALSE 15

###### Parameter overview:

0 8 16 23

|Selection|Parameter value|Datapoint<br>1<br>Output<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>2 bits|Datapoint<br>4<br>Output<br>4 bits|Datapoint<br>5<br>Output<br>8 bits|
|---|---|---|---|---|---|---|
|Default|0 (none)|OO|-|-|-|-|
|Switch|CHSwitch|OO|-|-|-|-|
|Dimming|_<br>CHSwitchDimmer|OO|-|-|DC|-|
|Sunblind|__<br>CHSwitchSunblind|SSUD|MUD|-|-|-|
|Timed|__<br>CHTimed StartStop|TSS|-|-|-|-|
|Scene|_<br>CH_Switch_Scene_Numbe<br>r|-|-|-|-|SN|
|Forced|CHSwitchForced|-|-|FO|-|-|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|<br>Scene number 1|__<br>PARTSceneNumber|<br>0|10|
|3|P2|Scene number 2|__<br>PARTSceneNumber|0|18|
|2|P3|Control type|__<br>PARTBoolean|0: Ctrl FALSE|15|

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|Adjustable selection = 1 <br>(switch)||||||
|Adjustable selection = 2 <br>(Switch_Dimmer)||||||
|Adjustable selection = 3 <br>(Switch_Sunblind)||||||
|Adjustable selection = 4 <br>(Timed)||||||
|Adjustable selection = 5 <br>(Scene Number)||Scene Number 1|Scene Number 1||Scene number 2|
|Adjustable selection = 6 <br>(Forced)|Control Type|Control Type||||


-----

#### 2.2 CH_Generic_Switch_2 (Channel Code 0301h)

###### Name: CH_Generic_Switch_2

 ID: 0301h

 Classification: sensor

 Functional Block(s):

 3 x 421 - FB Switching Sensor Basic

 2 x 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic

 406 – FB PB Timed Sensor

 2 x 403 - FB Scene Sensor

 1020 – FB Priority Sensor
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_Switch_2**


OO +


OnOff

Timed StartStop

StepStop UpDown


Info OnOff IOO MUD Move UpDown

FO Forced_OnOff

**_Parameters_** DC Dimming_Ctrl

Adjustable select AJS SN Scene_Number

Scene number 1 P1

Scene number 2 P2

Control type P3

Switch action P4

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control.

 Datapoint list:

**Sub-** **Additional** **Flags**
**Index FB / DP_Name** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v,…)**

1 407-413 / IOO Info OnOff 1 CC_Switch_OnOff_Status I
2 400-407-410- OnOff 1 CC_Switch_OnOff CC_Logical O L
411-413 /OO

2 406 / TSS Timed StartStop 1 CC_Timed O
2 800 / SSUD StepStopUpDown 1 CC_StepStop_UpDown O
3 800 / MUD Move UpDown 1 CC_Move_UpDown CC_Logical O
4 405 / FO Forced_OnOff 1 CC_Forced O
5 410-411/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O
6 403 / SN Scene number 1 CC_Scene_Number O

|IOO|CH Generic Switch 2<br>_ _ _|OO +<br>TSS +<br>SSUD|
|---|---|---|
|<br> <br>IOO|**CH_Generic_Switch_2**|MUD|
|<br> <br>AJS|<br> <br>AJS|FO|
|<br> <br>AJS|<br> <br>AJS|DC|
|<br> <br>AJS|<br> <br>AJS|<br>SN|
|<br>P1|<br>P1||
|<br> <br> <br>P2|<br> <br> <br>P2|<br> <br> <br>P2|
|<br> <br> <br>P3|<br> <br> <br>P3|<br> <br> <br>P3|
|<br> <br> <br>P4|<br> <br> <br>P4|<br> <br> <br>P4|
|<br>|<br>|<br>|

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|407-413 / IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|2|400-407-410-<br>411-413 /OO|OnOff|1|___<br>CC_Switch_OnOff|<br>CC_Logical|O L|
|2|406 / TSS|Timed StartStop|1|CCTimed||O|
|2|800 / SSUD|StepStopUpDown|1|_<br>CCStepStopUpDown||O|
|3|800 / MUD|Move UpDown|1|__<br>CCMoveUpDown|CCLogical|O|
|4|405 / FO|ForcedOnOff|1|__<br>CCForced|_|<br>O|
|5|410-411/DC|_<br>DimmerCtrl|1|_<br>CCDimmingCtrl||O|
|6|403 / SN|_<br>Scene number|1|__<br>CCSceneNumber||O|


-----

###### Adjustable table:

**Selection** **Parameter value** **Datapoint Datapoint Datapoint Datapoint Datapoint Datapoint**

**1** **2** **3** **4** **5** **6**
**_Input_** **_Output_** **_Output_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_1 bit_** **_2 bits_** **_4 bits_** **_8 bits_**

Default 0 (none) - OO - - - Switch CH_Switch - OO - - - Dimming CH_Switch_Dimmer - OO - - DC Sunblind CH_Switch_Sunblind - SSUD MUD - - Timed CH_Timed_StartStop - TSS - - - Scene CH_Switch_Scene_Num - - - - - SN
ber

Forced CH_Switch_Forced - - - FO - PB CH_Push_Button - OO - - - Toggle CH_PB_Toggle IOO OO - - - Dimming CH_Switch_Dimmer_To IOO OO - - DC Toggle ggle

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 The parameter value corresponds to the E-Mode Channel ID.

 Parameter table:

**Recommended** **Bit**
**Index** **Identifier** **Name** **Type**

**default value** **Offset**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 Scene number 1 PART_Scene_Number 0 10
3 P2 Scene number 2 PART_Scene_Number 0 18
2 P3 Control type PART_Boolean 0: Ctrl FALSE 15
2 P4 Switch action PART_OnOff_Action 11b: OnOff 14

|Selection|Parameter value|Datapoint<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>2 bits|Datapoint<br>5<br>Output<br>4 bits|Datapoint<br>6<br>Output<br>8 bits|
|---|---|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|-|-|
|Switch|CHSwitch|-|OO|-|-|-|-|
|Dimming|_<br>CHSwitchDimmer|-|OO|-|-|DC|-|
|Sunblind|__<br>CHSwitchSunblind|-|SSUD|MUD|-|-|-|
|Timed|__<br>CHTimedStartStop|-|TSS|-|-|-|-|
|Scene|__<br>CH_Switch_Scene_Num<br>ber|-|-|-|-|-|SN|
|Forced|CHSwitchForced|-|-|-|FO|-|-|
|PB|__<br>CHPushButton|-|OO|-|-|-|-|
|Toggle|__<br>CHPBToggle|IOO|OO|-|-|-|-|
|Dimming<br>Toggle|__<br>CH_Switch_Dimmer_To<br>ggle|IOO|OO|-|-|DC|-|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|Scene number 1|__<br>PARTSceneNumber|0|10|
|3|P2|Scene number 2|__<br>PARTSceneNumber|0|18|
|2|P3|Control type|__<br>PARTBoolean|0: Ctrl FALSE|15|
|2|P4|Switch action|_<br>PARTOnOffAction|11b: OnOff|14|


-----

###### Parameter overview

0 8 16 23

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|Adjustable selection = 1 <br>(switch)|||||||
|Adjustable selection = 2 <br>(Switch_Dimmer)|||||||
|Adjustable selection = 3 <br>(Switch_Sunblind)|||||||
|Adjustable selection = 4 <br>(Timed)|||||||
|Adjustable selection = 5 <br>(Scene Number)||Scene Number 1|Scene Number 1|Scene Number 1||Scene number 2|
|Adjustable selection = 6 <br>(Forced)|Control Type|Control Type|Control Type||||
|Adjustable selection = 7 <br>(Push button)|Switch action|Switch action|||||
|Adjustable selection = 8 <br>(PB toggle)|||||||
|Adjustable selection = 9 <br>(Switch Dimmer toggle)|||||||


-----

#### 2.3 CH_Generic_Switch_3 (Channel Code 0302h)

###### Name: CH_Generic_Switch_3

 ID: 0302h

 Classification: sensor

 Functional Block(s):

 4x 421 - FB Switching Sensor Basic

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic

 406 – FB PB Timed Sensor

 2 x 403 – FB Scene Sensor

 1020 – FB Priority Sensor
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_Switch_3**


OO + OnOff

TSS + Timed StartStop

SSUD + StepStop UpDown

SA Scene Activate

Info OnOff IOO MUD + Move UpDown

Sl Scene learn

FO Forced_OnOff

**_Parameters_** DC Dimming_Ctrl

Adjustable select AJS

Scene value P1

Control type P2

Switch action P3

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control, and see equivalent descriptions.

 Datapoint list:

|IOO|CH Generic Switch 3<br>_ _ _|OO +|
|---|---|---|
|IOO|**CH_Generic_Switch_3**|<br>TSS+|
|IOO|**CH_Generic_Switch_3**|<br>SSUD+|
|IOO|**CH_Generic_Switch_3**|<br>SA|
|IOO|**CH_Generic_Switch_3**|<br>MUD+|
|<br>AJS|<br>AJS|<br>Sl|
|<br>AJS|<br>AJS|FO|
|<br>AJS|<br>AJS|DC|
|<br>AJS|<br>AJS||
|P1|P1|P1|
|<br>P2|<br>P2|<br>P2|
|<br>P3|<br>P3|<br>P3|
||||

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|407-411/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|2|400-401-407-<br>410-411/OO|OnOff|1|___<br>CC_Switch_OnOff|<br>CC_Logical|O L|
|2|406/TSS|Timed StartStop|1|CCTimed||O|
|2|800/SSUD|StepStop UpDown|1|_<br>CCStepStopUpDown||O|
|2|404/SA|Scene activate|1|__<br>CCActivate||O|
|3|800/MUD|Move UpDown|1|_<br>CCMoveUpDown|CCLogical|O|


-----

3 404/SL Scene Learn 1 CC_Learn O
4 405/FO Forced_OnOff 1 CC_Forced O
5 410-411/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O

###### Adjustable table:

**Selection** **Parameter value** **Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4**

**_Input_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_1 bit_** **_2 bits_**

Default 0 (none) OO - Switch CH_Switch OO - Dimming CH_Switch_Dimmer OO - Sunblind CH_Switch_Sunblind SSUD MUD Timed CH_Timed_StartStop TSS - Scene CH_Switch_Scene SA SL Forced CH_Switch_Forced - - FO
PB CH_Push_Button - OO - Toggle CH_PB_Toggle IOO OO - Dimming CH_Switch_Dimmer_Toggle IOO OO - Toggle

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 The parameter value corresponds to the E-Mode Channel ID.

 Parameter table:

**Recommended**
**Index Identifier** **Name** **Type**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 Scene value PART_Scene_Value 1 15
2 P2 Control type PART_Boolean 0: Ctrl FALSE 15
2 P3 Switch action PART_OnOff_Action 11b : OnOff 14

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|3|404/SL|Scene Learn|1|CCLearn||O|
|4|405/FO|ForcedOnOff|1|_<br>CCForced||O|
|5|410-411/DC|_<br>DimmerCtrl|1|_<br>CCDimmingCtrl||O|

|Selection|Parameter value|Datapoint<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>2 bits|Datapoint<br>5<br>Output<br>4 bits|
|---|---|---|---|---|---|---|
|Default|0 (none)||OO|-|-|-|
|Switch|CHSwitch||OO|-|-|-|
|Dimming|_<br>CHSwitchDimmer||OO|-|-|DC|
|Sunblind|__<br>CHSwitchSunblind||SSUD|MUD|-|-|
|Timed|__<br>CHTimedStartStop||TSS|-|-|-|
|Scene|__<br>CHSwitchScene||SA|SL|-|-|
|Forced|__<br>CHSwitchForced||-|-|FO|-|
|PB|__<br>CHPushButton|-|OO|-|-|-|
|Toggle|__<br>CHPBToggle|IOO|OO|-|-|-|
|Dimming<br>Toggle|__<br>CH_Switch_Dimmer_Toggle|IOO|OO|-|-|DC|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|<br>Scene value|__<br>PARTSceneValue|<br>1|15|
|2|P2|Control type|__<br>PARTBoolean|0: Ctrl FALSE|15|
|2|P3|Switch action|_<br>PARTOnOffAction|11b : OnOff|14|


-----

###### Parameter overview

0 8 15

Adjustable selection = 0

(none)

Adjustable selection = 1

(switch)

Adjustable selection = 2

(Switch_Dimmer)

Adjustable selection = 3

(Switch_Sunblind)

Adjustable selection = 4

(Timed)

Adjustable selection = 5 Scene Value

(Switch scene)

Adjustable selection = 6 Control Type

(Forced)

Adjustable selection = 7 Switch action

(Push button)

Adjustable selection = 8

(PB toggle)

Adjustable selection = 9

(Switch Dimmer toggle)

#### 2.4 CH_Generic_Switch_4 (Channel Code 0303h)

###### Name: CH_Generic_Switch_4

 ID: 0303h

 Classification: sensor

 Functional Block(s):

 421 - FB Switching Sensor Basic

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic
###### Graphical representation:

**_Inputs_** **_Outputs_**

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|
|---|---|---|---|
|Adjustable selection = 1 <br>(switch)||||
|Adjustable selection = 2 <br>(Switch_Dimmer)||||
|Adjustable selection = 3 <br>(Switch_Sunblind)||||
|Adjustable selection = 4 <br>(Timed)||||
|Adjustable selection = 5 <br>(Switch scene)|Scene Value|Scene Value||
|Adjustable selection = 6 <br>(Forced)|Control Type|Control Type||
|Adjustable selection = 7 <br>(Push button)|Switch action|||
|Adjustable selection = 8 <br>(PB toggle)||||
|Adjustable selection = 9 <br>(Switch Dimmer toggle)||||


**CH_Generic_Switch_4**


OO + OnOff

SSUD StepStop UpDown

MUD Move UpDown

**_Parameters_** DC Dimming_Ctrl

Adjustable select AJS

|AJS|CH Generic Switch 4<br>_ _ _|OO +|
|---|---|---|
|<br> <br> <br>AJS|**CH_Generic_Switch_4**|<br>SSUD|
|<br> <br> <br>AJS|**CH_Generic_Switch_4**|MUD|
|<br> <br> <br>AJS|**CH_Generic_Switch_4**|DC|
|<br> <br> <br>AJS|**CH_Generic_Switch_4**||
||||


-----

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, dimming and shutter control.

 Datapoint list:

**FB /** **Sub-** **Additional** **Flags**
**Index** **Name** **Main CC**
**DP_Name** **unit** **CCs** **(i/o,x,v,…)**

1 401-410/OO OnOff 1 CC_Switch_OnOff CC_Logical O L
1 800/SSUD StepStop UpDown 1 CC_StepStop_UpDown O
2 800/MUD Move UpDown 1 CC_Move_UpDown CC_Logical O
3 410/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O

###### Adjustable table:

**Selection** **Parameter value** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3**

**_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_4 bits_**

Default 0 (none) OO - Switch CH_Switch OO - Dimming CH_Switch_Dimmer OO - DC
Sunblind CH_Switch_Sunblind SUD MUD 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 The parameter value corresponds to the E-Mode Channel ID. Parameter table

**Recommended**
**Index Identifier** **Name** **Type** **Bit Offset**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0

###### Parameter overview

0 7

Adjustable selection = 0

(none)

Adjustable selection = 1

(switch)

Adjustable selection = 2

(Switch_Dimmer)

Adjustable selection = 3

(Switch_Sunblind)

|Index|FB /<br>DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|<br>401-410/OO|OnOff|1|CCSwitchOnOff|CCLogical|O L|
|1|800/SSUD|StepStop UpDown|1|__<br>CCStepStopUpDown|_<br>|O|
|2|800/MUD|Move UpDown|1|__<br>CCMoveUpDown|<br>CCLogical|O|
|3|410/DC|DimmerCtrl|1|__<br>CCDimmingCtrl|_|O|

|Selection|Parameter value|Datapoint<br>1<br>Output<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>4 bits|
|---|---|---|---|---|
|Default|0 (none)|OO|-|-|
|Switch|CHSwitch|OO|-|-|
|Dimming|_<br>CHSwitchDimmer|OO|-|DC|
|Sunblind|__<br>CHSwitchSunblind|SUD|MUD|-|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|


-----

#### 2.5 CH_Generic_Switch_Info_1 (Channel Code 0304h)

###### Name: CH_Generic_Switch_Info_1

 ID: 0304h

 Classification: sensor

 Functional Block(s):

 421 - FB Switching Sensor Basic

 2 x 403 - FB Scene Sensor

 406 – FB PB Timed Sensor

 1020 – FB Priority Sensor

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_Switch_Info_1**


Info OnOff IOO OO + OnOff

TSS + Timed StartStop

SSUD StepStop UpDown

MUD Move UpDown

FO Forced_OnOff

**_Parameters_** DC Dimming_Ctrl

Adjustable select AJS SN Scene_Number

Scene number 1 P1

Scene number 2 P2

Control type P3

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control.

 Datapoint list:

**FB /** **Sub-** **Additional** **Flags**
**Index** **Name** **Main CC**
**DP_Name** **unit** **CCs** **(i/o,x,v,…)**

1 402/IOO Info OnOff 1 CC_Switch_OnOff_Status I
2 401-410/OO OnOff 1 CC_Switch_OnOff CC_Logical O L
2 406/TSS Timed StartStop 1 CC_Timed O
2 800/SSUD StepStop UpDown 1 CC_StepStop_UpDown O
3 800/MUD Move UpDown 1 CC_Move_UpDown CC_Logical O
4 405/FO Forced_OnOff 1 CC_Forced O
5 410/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O
6 403/SN Scene number 1 CC_Scene_Number O

|IOO|CH Generic Switch Info 1<br>_ _ _ _|OO +|
|---|---|---|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS|<br>TSS+|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS|<br>SSUD|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS|MUD|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS|FO|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS|DC|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS|<br>SN|
|<br>P1|<br>P1||
|<br> <br> <br>P2|<br> <br> <br>P2|<br> <br> <br>P2|
|<br> <br> <br>P3|<br> <br> <br>P3|<br> <br> <br>P3|
|<br>|<br>|<br>|

|Index|FB /<br>DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|<br>402/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|2|401-410/OO|OnOff|1|___<br>CCSwitchOnOff|CCLogical|O L|
|2|406/TSS|Timed StartStop|1|__<br>CCTimed|_|O|
|2|800/SSUD|StepStop UpDown|1|_<br>CCStepStopUpDown||O|
|3|800/MUD|Move UpDown|1|__<br>CCMoveUpDown|CCLogical|O|
|4|405/FO|ForcedOnOff|1|__<br>CCForced|_|O|
|5|410/DC|_<br>DimmerCtrl|1|_<br>CCDimmingCtrl||O|
|6|403/SN|_<br>Scene number|1|__<br>CCSceneNumber||O|


-----

###### Adjustable table:

**Selection** **Parameter value** **Datapoint Datapoint Datapoint Datapoint Datapoint Datapoint**

**1** **2** **3** **4** **5** **6**

**_Intput1 bit_** **_Output_** **_Output_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_2 bits_** **_4 bits_** **_8 bits_**

Default 0 (none) - OO - - - Switch CH_Switch_Info IOO OO - - - Dimming CH_Switch_Dimmer_Info IOO OO - - DC Sunblind CH_Switch_Sunblind - SSUD MUD - - Timed CH_Timed_StartStop_Inf IOO TSS - - - o

Scene CH_Switch_Scene_Num - - - - - SN
ber

Forced CH_Switch_Forced - - - FO - 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 The parameter value corresponds to the E-Mode Channel ID.

 Parameter table:

**Recommended**
**Index Identifier** **Name** **Type** **Bit Offset**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 Scene number 1 PART_Scene_Number 0 10
3 P2 Scene number 2 PART_Scene_Number 0 18
2 P3 Control type PART_Boolean 0: Ctrl FALSE 15

###### Parameter overview

0 8 16 23

|Selection|Parameter value|Datapoint<br>1<br>Intput1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>2 bits|Datapoint<br>5<br>Output<br>4 bits|Datapoint<br>6<br>Output<br>8 bits|
|---|---|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|-|-|
|Switch|CHSwitchInfo|IOO|OO|-|-|-|-|
|Dimming|__<br>CHSwitchDimmerInfo|IOO|OO|-|-|DC|-|
|Sunblind|___<br>CHSwitchSunblind|-|SSUD|MUD|-|-|-|
|Timed|__<br>CH_Timed_StartStop_Inf<br>o|IOO|TSS|-|-|-|-|
|Scene|CH_Switch_Scene_Num<br>ber|-|-|-|-|-|SN|
|Forced|CHSwitchForced|-|-|-|FO|-|-|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|<br>Scene number 1|__<br>PARTSceneNumber|<br>0|10|
|3|P2|Scene number 2|__<br>PARTSceneNumber|0|18|
|2|P3|Control type|__<br>PARTBoolean|0: Ctrl FALSE|15|

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|Adjustable selection = 1 <br>(switch info)||||||
|Adjustable selection = 2 <br>(Switch_Dimmer info)||||||
|Adjustable selection = 3 <br>(Switch_sunblind)||||||
|Adjustable selection = 4 <br>(Timed info)||||||
|Adjustable selection = 5 <br>(Scene Number)||Scene Number 1|Scene Number 1||Scene number 2|
|Adjustable selection = 6 <br>(Forced)|Control Type|Control Type||||


-----

#### 2.6 CH_Generic_Switch_Info_2 (Channel Code 0305h)

###### Name: CH_Generic_Switch_Info_2

 ID: 0305h

 Classification: sensor

 Functional Block(s):

 421 - FB Switching Sensor Basic

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_Switch_Info_2**


Info OnOff IOO OO + OnOff

SSUD StepStop UpDown

MUD Move UpDown

DC Dimming_Ctrl

**_Parameters_**

Adjustable select AJS

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control.

 Datapoint list:

**FB /** **Sub-** **Additional** **Flags**
**Index** **Name** **Main CC**
**DP_Name** **unit** **CCs** **(i/o,x,v,…)**

1 402/IOO Info OnOff 1 CC_Switch_OnOff_Status I
2 401-410/OO OnOff 1 CC_Switch_OnOff CC_Logical O L
2 800/SSUD StepStop UpDown 1 CC_StepStop_UpDown O
3 800/MUD Move UpDown 1 CC_Move_UpDown CC_Logical O
4 410/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4**

**Selection** **Parameter value**

**_Intput1 bit_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_4 bits_**

Default 0 (none) - OO - Switch CH_Switch_Info IOO OO - Dimming CH_Switch_Dimmer_Info IOO OO - DC
Sunblind CH_Switch_Sunblind - SSUD MUD 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 The parameter value corresponds to the E-Mode Channel ID.

|IOO|CH Generic Switch Info 2<br>_ _ _ _|OO +|
|---|---|---|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS|<br>SSUD|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS|MUD|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS|DC|
|<br> <br> <br> <br>AJS|<br> <br> <br> <br>AJS||
||||

|Index|FB /<br>DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|<br>402/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|2|401-410/OO|OnOff|1|___<br>CCSwitchOnOff|CCLogical|O L|
|2|800/SSUD|StepStop UpDown|1|__<br>CCStepStopUpDown|_|O|
|3|800/MUD|Move UpDown|1|__<br>CCMoveUpDown|CCLogical|O|
|4|410/DC|DimmerCtrl|1|__<br>CCDimmingCtrl|_|O|

|Selection|Parameter value|Datapoint<br>1<br>Intput1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>4 bits|
|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|
|Switch|CHSwitchInfo|IOO|OO|-|-|
|Dimming|__<br>CHSwitchDimmerInfo|IOO|OO|-|DC|
|Sunblind|___<br>CHSwitchSunblind|-|SSUD|MUD|-|


-----

###### Parameter table:

**Recommended**
**Index Identifier** **Name** **Type**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0

###### Parameter overview

0 7

Adjustable selection = 0

(none)

Adjustable selection = 1

(switch info)

Adjustable selection = 2

(Switch_Dimmer info)

Adjustable selection = 3

(Switch_sunblind)

#### 2.7 CH_Generic_Switch_FixedPos_1 (Channel Code 0306h)

###### Name: CH_Generic_Switch_FixedPos_1

 ID: 0306h

 Classification: sensor

 Functional Block(s):

 421 - FB Switching Sensor Basic

 1020 – FB Priority Sensor

 421 – FB Switching Sensor Basic

 421 – FB Switching Sensor Basic
###### Graphical representation:

**_Inputs_** **_Outputs_**

|Index|Identifier|Name|Type|Recommended<br>default value|Bit Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|


**CH_Generic_Switch_FixedPos_1**


Info OnOff IOO OO OnOff

FO Forced

**_Parameters_**

Adjustable select AJS

Control type P1

Switch action P2

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching

|IOO|CH Generic Switch FixedPos 1<br>_ _ _ _|OO|
|---|---|---|
|AJS|AJS|FO|
|AJS|AJS||
|P1|P1|P1|
|<br>P2|<br>P2|<br>P2|
||||


-----

###### Datapoint list:

**Additional**
**Index** **FB / DP_Name** **Name** **Subunit** **Main CC**

**CCs**

1 407/IOO Info OnOff 1 CC_Switch_OnOff_Status I
2 400-401-407/OO OnOff 1 CC_Switch_OnOff CC_Logical O L
3 405/FO Forced 1 CC_Forced O

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint**

**1** **2** **3**

**Selection** **Parameter value**

**_Input 1 bis_** **_Output_** **_Output 2 bit_**

**_1 bit_**

Default 0 (none) - OO Toggle CH_PB_Toggle IOO OO Switch CH_Switch - OO PB CH_Push_Button - OO Forced CH_Switch_Forced - - FO

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 The parameter value corresponds to the E-Mode Channel ID.

 Parameter table:

**Recommended**
**Index** **Identifier** **Name** **Type**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 Control type PART_Boolean 0: Ctrl FALSE 15
2 P2 Switch action PART_OnOff_Action 11b : OnOff 14

###### Parameter overview

0 8 15

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|407/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|2|400-401-407/OO|OnOff|1|___<br>CCSwitchOnOff|<br>CCLogical|O L|
|3|405/FO|Forced|1|__<br>CCForced|_|<br>O|

|Selection|Parameter value|Datapoint<br>1<br>Input 1 bis|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output 2 bit|
|---|---|---|---|---|
|Default|0 (none)|-|OO|-|
|Toggle|CHPBToggle|IOO|OO|-|
|Switch|__<br>CHSwitch|-|OO|-|
|PB|_<br>CHPushButton|-|OO|-|
|Forced|__<br>CHSwitchForced|-|-|FO|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|Control type|__<br>PARTBoolean|0: Ctrl FALSE|15|
|2|P2|Switch action|_<br>PARTOnOffAction|11b : OnOff|14|

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|
|---|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)||||
|Adjustable selection = 2 <br>(switch)||||
|Adjustable selection = 3 <br>(Push button)|Switch action|||
|Adjustable selection = 4 <br>(Forced)|Control Type|Control Type||


-----

#### 2.8 CH_Generic_Switch_FixedPos_2 (Channel Code 0307h)

###### Name: CH_Generic_Switch_FixedPos_2

 ID: 0307h

 Classification: sensor

 Functional Block(s):

 421 - FB Switching Sensor Basic
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_Switch_FixedPos_2**


Info OnOff IOO OO OnOff

**_Parameters_**

Adjustable select AJS

Switch action P1

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching

 Datapoint list:

**Additional** **Flags**
**Index** **FB / DP_Name** **Name** **Subunit** **Main CC**

**CCs** **(i/o,x,v,…)**

1 407/IOO Info OnOff 1 CC_Switch_OnOff_Status I
2 400-401-407/OO OnOff 1 CC_Switch_OnOff CC_Logical O L

###### Adjustable table

**Datapoint** **Datapoint**

**1** **2**

**Selection Parameter value**

**_Input 1 bis_** **_Output_**

**_1 bit_**

Default 0 (none) - OO
Toggle CH_PB_Toggle IOO OO
Switch CH_Switch - OO
PB CH_Push_Button - OO

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 The parameter value corresponds to the E-Mode Channel ID.

 Parameter table:

**Recommended** **Bit**
**Index** **Identifier** **Name** **Type**

**default value** **Offset**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 Switch action PART_OnOff_Action 11b : OnOff 14

|CH Generic Switch FixedPos 2<br>_ _ _ _|OO|
|---|---|
|**CH_Generic_Switch_FixedPos_2**||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|407/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|2|400-401-407/OO|OnOff|1|___<br>CCSwitchOnOff|<br>CCLogical|O L|

|Selection|Parameter value|Datapoint<br>1<br>Input 1 bis|Datapoint<br>2<br>Output<br>1 bit|
|---|---|---|---|
|Default|0 (none)|-|OO|
|Toggle|CHPBToggle|IOO|OO|
|Switch|__<br>CHSwitch|-|OO|
|PB|_<br>CHPushButton|-|OO|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|Switch action|__<br>PARTOnOffAction|11b : OnOff|14|


-----

###### Parameter overview

0 8 15

Adjustable selection = 0

(none)

Adjustable selection = 1

(PB toggle)

Adjustable selection = 2

(switch)

Adjustable selection = 3 Switch action

(Push button)

#### 2.9 CH_Generic_PB_Info_1 (Channel Code 0308h)

###### Name: CH_Generic_PB_Info_1

 ID: 0308h

 Classification: sensor

 Functional Block(s):

 2x 421 – FB Switching Sensor Basic

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic

 403 - FB Scene Sensor

 406 – FB PB Timed Sensor
###### Graphical representation:

**_Inputs_** **_Outputs_**

|Adjustable selection = 0<br>(none)|Col2|Col3|
|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)|||
|Adjustable selection = 2 <br>(switch)|||
|Adjustable selection = 3 <br>(Push button)|Switch action||


**CH_Generic_PB_Info_1**


OO + OnOff

TSS + Timed StartStop

Info OnOff IOO + SSUD StepStop UpDown

Info Move UpDown IMUD MUD Move UpDown

DC Dimming_Ctrl

**_Parameters_** SN Scene_Number

Adjustable select AJS

Switch action P1

Scene number P2

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control.

 REMARK To avoid multiplication of generic PB, this E-Mode Channel is usable even if no info is displayed to the user.

|IOO +|CH Generic PB Info 1<br>_ _ _ _|OO +|
|---|---|---|
|<br> <br>IOO+|**CH_Generic_PB_Info_1**|<br>TSS+|
|<br> <br>IOO+|**CH_Generic_PB_Info_1**|<br>SSUD|
|<br>IMUD|<br>IMUD|MUD|
|<br> <br>AJS|<br> <br>AJS|DC|
|<br> <br>AJS|<br> <br>AJS|SN|
|<br> <br>AJS|<br> <br>AJS||
|<br>P1|<br>P1|<br>P1|
|<br> <br> <br>P2|<br> <br> <br>P2|<br> <br> <br>P2|
|<br>|<br>|<br>|


-----

###### Datapoint list:

**Sub** **Additional**
**Index** **FB / DP_Name** **Name** **Main CC**
**unit** **CCs**

1 407-413/IOO Info OnOff 1 CC_Switch_OnOff_Status I
1 801/IMUD Info MUD 1 CC_Move_UpDown_Status I
2 400-407-413/OO OnOff 1 CC_Switch_OnOff CC_Logical O L
2 406/TSS Timed StartStop 1 CC_Timed O
2 801/SSUD StepStop 1 CC_StepStop_UpDown O
UpDown

3 801/MUD Move UpDown 1 CC_Move_UpDown CC_Logical O
4 413/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O
5 403/SN Scene number 1 CC_Scene_Number O

###### Adjustable table:

**Datapoin**

**Datapoint** **Datapoint** **Datapoint**

**t**

**2** **3** **4**

**Selection** **Parameter value** **1**

**_Output_** **_Output_** **_Output_**

**_Input_**

**_1 bit_** **_1 bit_** **_4 bits_**

**_1 bit_**

Default 0 (none) - OO - Toggle CH_PB_Toggle IOO OO - Dimming Toggle CH_PB_Dimming_Toggle IOO OO - DCSunblind Toggle CH_PB_Blind_Toggle IMUD SSUD MUD Push Button CH_Push_Button - OO - Timed CH_Timed_StartStop_Inf IOO TSS - o

Scene Number CH_PB_Scene_- - - Numbered

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 Parameter table:

**Recommended**
**Index** **Identifier** **Name** **Type**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (= 0) 0
2 P1 Switch action PART_OnOff_Action 11b : OnOff 14
2 P2 Scene number PART_Scene_Number 0 10

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|407-413/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|1|801/IMUD|Info MUD|1|___<br>CCMoveUpDownStatus||I|
|2|400-407-413/OO|OnOff|1|___<br>CCSwitchOnOff|<br>CCLogical|O L|
|2|406/TSS|Timed StartStop|1|__<br>CCTimed|_|<br>O|
|2|801/SSUD|StepStop<br>UpDown|1|_<br>CC_StepStop_UpDown||O|
|3|801/MUD|Move UpDown|1|CCMoveUpDown|CCLogical|O|
|4|413/DC|DimmerCtrl|1|__<br>CCDimmingCtrl|_|<br>O|
|5|403/SN|_<br>Scene number|1|__<br>CCSceneNumber||O|

|Selection|Parameter value|Datapoin<br>t<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>4 bits|Datapoint<br>5<br>Output<br>8 bits|
|---|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|-|
|Toggle|CHPBToggle|IOO|OO|-|-|-|
|Dimming Toggle|__<br>  CHPBDimmingToggle|IOO|OO|-|DC-|-|
|<br>Sunblind Toggle|___<br>  CHPBBlindToggle|IMUD|SSUD|MUD|-|-|
|<br>Push Button|___<br>CHPushButton|-|OO|-|-|-|
|Timed|__<br>CH_Timed_StartStop_Inf<br>o|IOO|TSS|-|-|-|
|Scene Number|CH_PB_Scene_-<br>Numbered||-|-|-|SN|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (= 0)|0|
|2|P1|Switch action|__<br>PARTOnOffAction|11b : OnOff|14|
|2|P2|Scene number|__<br>PARTSceneNumber|0|10|


-----

###### Parameter overview

0 8 15

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|
|---|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)||||
|Adjustable selection = 2 <br>(PB Dimmer toggle)||||
|Adjustable selection = 3 <br>(PB sunblind toggle)||||
|Adjustable selection = 4 <br>(Push button)|Switch action|Switch action||
|Adjustable selection = 5 <br>(Timed)||||
|Adjustable selection = 6 <br>(Scene Number)||Scene Number|Scene Number|


-----

#### 2.10 CH_Generic_PB_2 (Channel Code 0309h)

###### Name: CH_Generic_PB_2

 ID: 0309h

 Classification: sensor

 Functional Block(s):

 2 x 421 – FB Switching Sensor Basic

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic

 403 – FB Scene Sensor

 406 – FB PB Timed Sensor
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_PB_2**


OO + OnOff

TSS + Timed StartStop

SSUD + StepStop UpDown

SA Scene Activate

Info OnOff IOO + MUD + Move UpDown

Info Move UpDown IMUD SL Scene learn

DC Dimming_Ctrl

**_Parameters_** SN Scene_Number

Adjustable select AJS

Switch action P1

Scene value P2

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, scenes, timed, switch forced, dimming and shutter control.

 Datapoint list:

**Sub-** **Additional** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v,…)**

1 407-413/IOO Info OnOff 1 CC_Switch_OnOff_Status I
1 801/IMUD Info MUD 1 CC_Move_UpDown_Status I
2 400-407- OnOff 1 CC_Switch_OnOff CC_Logical O L
413/OO

2 406/TSS Timed StartStop 1 CC_Timed O
2 801/SSUD StepStopUpDown 1 CC_StepStop_UpDown O
2 404/SA Scene Activate 1 CC_Activate O
3 801/MUD Move UpDown 1 CC_Move_UpDown CC_Logical O
3 404/SL Scene Learn 1 CC_Learn O
4 413/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O

|IOO +|CH Generic PB 2<br>_ _ _|OO +|
|---|---|---|
|<br> <br>IOO+|**CH_Generic_PB_2**|<br>TSS+|
|<br> <br>IOO+|**CH_Generic_PB_2**|<br>SSUD+|
|<br> <br>IOO+|**CH_Generic_PB_2**|<br>SA|
|<br> <br>IOO+|**CH_Generic_PB_2**|MUD+|
|<br>  <br> <br>IMUD|<br>  <br> <br>IMUD|<br>SL|
|<br> <br>AJS|<br> <br>AJS|DC|
|<br> <br>AJS|<br> <br>AJS|SN|
|<br> <br>AJS|<br> <br>AJS||
|<br>P1|<br>P1|<br>P1|
|<br> <br> <br>P2|<br> <br> <br>P2|<br> <br> <br>P2|
|<br>|<br>|<br>|

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|407-413/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|1|801/IMUD|Info MUD|1|___<br>CCMoveUpDownStatus||I|
|2|400-407-<br>413/OO|OnOff|1|___<br>CC_Switch_OnOff|<br>CC_Logical|O L|
|2|406/TSS|Timed StartStop|1|CCTimed||O|
|2|801/SSUD|StepStopUpDown|1|_<br>CCStepStopUpDown||O|
|2|404/SA|Scene Activate|1|__<br>CCActivate||O|
|3|801/MUD|Move UpDown|1|_<br>CCMoveUpDown|CCLogical|O|
|3|404/SL|Scene Learn|1|__<br>CCLearn|_|<br>O|
|4|413/DC|DimmerCtrl|1|_<br>CCDimmingCtrl||O|


-----

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4**

**Selection** **Parameter value**

**_Input_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_1 bit_** **_4 bits_**

Default 0 (none) - OO - Toggle CH_PB_Toggle IOO OO - Dimming Toggle CH_PB_Dimming_Toggle IOO OO - DC
Sunblind Toggle CH_PB_Blind_Toggle IMUD SSUD MUD Push Button CH_Push_Button - OO - Timed CH_Timed StartStop - TSS - Scene CH_PB_Scene - SA SL 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection

 Parameter table:

**Recommended**
**Index** **Identifier** **Name** **Type**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 Switch action PART_OnOff_Action 11b : OnOff 14
2 P2 Scene value PART_Scene_Value 1 15

###### Parameter overview

0 8 15

|Selection|Parameter value|Datapoint<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>4 bits|
|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|
|Toggle|CHPBToggle|IOO|OO|-|-|
|Dimming Toggle|__<br>CHPBDimmingToggle|IOO|OO|-|DC|
|Sunblind Toggle|___<br>CHPBBlindToggle|IMUD|SSUD|MUD|-|
|Push Button|___<br>CHPushButton|-|OO|-|-|
|Timed|__<br>CHTimed StartStop|-|TSS|-|-|
|Scene|_<br>CHPBScene|-|SA|SL|-|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|Switch action|__<br>PARTOnOffAction|11b : OnOff|14|
|2|P2|Scene value|__<br>PARTSceneValue|1|15|

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|
|---|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)||||
|Adjustable selection = 2 <br>(PB Dimmer toggle)||||
|Adjustable selection = 3 <br>(PB Sunblind toggle)||||
|Adjustable selection = 4 <br>(Push button)|Switch action|||
|Adjustable selection = 5 <br>(Timed)||||
|Adjustable selection = 6 <br>(Scene)|Scene Value|Scene Value||


-----

#### 2.11 CH_Generic_PB_3 (Channel Code 030Ah)

###### Name: CH_Generic_PB_3

 ID: 030Ah

 Classification: sensor

 Functional Block(s):

 421 – FB Switching Sensor Basic

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_PB_3**


OO + OnOff

Info OnOff IOO + SSUD StepStop UpDown

Info Move UpDown IMUD MUD Move UpDown

DC Dimming_Ctrl

**_Parameters_**

Adjustable select AJS

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, dimming and shutter control.

 Datapoint list:

**FB /** **Sub-** **Additional** **Flags**
**Index** **Name** **Main CC**
**DP_Name** **unit** **CCs** **(i/o,x,v,…)**

1 407-413/IOO Info OnOff 1 CC_Switch_OnOff_Status I
1 801/IMUD Info MUD 1 CC_Move UpDown_Status I
2 407-413/OO OnOff 1 CC_Switch_OnOff CC_Logical O L
2 801/SSUD StepStop UpDown 1 CC_StepStop_UpDown O
3 801/MUD Move UpDown 1 CC_Move UpDown CC_Logical O
4 413/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4**

**Selection** **Parameter value**

**_Input_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_1 bit_** **_4 bits_**

Default 0 (none) - OO - Toggle CH_PB_Toggle IOO OO - Dimming Toggle CH_PB_Dimming_Toggle IOO OO - DC
Sunblind Toggle CH_PB_Blind_Toggle IMUD SSUD MUD 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection

|IOO +|CH Generic PB 3<br>_ _ _|OO +|
|---|---|---|
|<br> <br>IOO+|**CH_Generic_PB_3**|<br>SSUD|
|<br>IMUD|<br>IMUD|MUD|
|<br> <br>AJS|<br> <br>AJS|DC|
|<br> <br>AJS|<br> <br>AJS||
||||

|Index|FB /<br>DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|<br>407-413/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|1|801/IMUD|Info MUD|1|___<br>CCMove UpDownStatus||I|
|2|407-413/OO|OnOff|1|_ _<br>CCSwitchOnOff|<br>CCLogical|O L|
|2|801/SSUD|StepStop UpDown|1|__<br>CCStepStopUpDown|_|<br>O|
|3|801/MUD|Move UpDown|1|__<br>CCMove UpDown|CCLogical|O|
|4|413/DC|DimmerCtrl|1|_<br>CCDimmingCtrl|_|<br>O|

|Selection|Parameter value|Datapoint<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>4 bits|
|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|
|Toggle|CHPBToggle|IOO|OO|-|-|
|Dimming Toggle|__<br>CHPBDimmingToggle|IOO|OO|-|DC|
|Sunblind Toggle|___<br>CHPBBlindToggle|IMUD|SSUD|MUD|-|


-----

###### Parameter table:

**Recommended**
**Index** **Identifier** **Name** **Type**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0

###### Parameter overview

0 8

Adjustable selection = 0

(none)

Adjustable selection = 1

(PB toggle)

Adjustable selection = 2

(PB Dimmer toggle)

Adjustable selection = 3

(PB Sunblind toggle)

#### 2.12 CH_Generic_PB_4 (Channel Code 030Bh)

###### Name: CH_Generic_PB_4

 ID: 030Bh

 Classification: sensor

 Functional Block(s):

 421 – FB Switching Sensor Basic

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic
###### Graphical representation:

**_Inputs_** **_Outputs_**

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|


**CH_Generic_PB_4**


OO + OnOff

Info OnOff IOO + SSUD StepStop UpDown

Info Move UpDown IMUD MUD Move UpDown

DC Dimming_Ctrl

**_Parameters_**

Adjustable select AJS

Switch action P1

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, dimming and shutter control.

|IOO +|CH Generic PB 4<br>_ _ _|OO +|
|---|---|---|
|<br> <br>IOO+|**CH_Generic_PB_4**|<br>SSUD|
|<br>IMUD|<br>IMUD|MUD|
|<br> <br>AJS|<br> <br>AJS|DC|
|<br> <br>AJS|<br> <br>AJS||
|<br>P1|<br>P1|<br>P1|
|<br>|<br>|<br>|


-----

###### Datapoint list:

**Sub** **Additional**
**Index** **FB / DP_Name** **Name** **Main CC**
**unit** **CCs**

1 407-413/IOO Info OnOff 1 CC_Switch_OnOff_Status I
1 801/IMUD Info MUD 1 CC_Move_UpDown_Status I
2 400-407-413/OO OnOff 1 CC_Switch_OnOff CC_Logica O L
l

2 801/SSUD StepStop UpDown 1 CC_StepStop_UpDown O
3 801/MUD Move UpDown 1 CC_Move_UpDown CC_Logica O
l

4 413/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4**

**Selection** **Parameter value**

**_Input_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_1 bit_** **_4 bits_**

Default 0 (none) - OO - Toggle CH_PB_Toggle IOO OO - Dimming Toggle CH_PB_Dimming_Toggle IOO OO - DC
Sunblind Toggle CH_PB_Blind_Toggle IMUD SSUD MUD Push Button CH_Push_Button - OO - 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection

 Parameter table:

**Recommended**
**Index** **Identifier** **Name** **Type**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 Switch action PART_OnOff_Action 11b : OnOff 14

###### Parameter overview

0 8 15

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|407-413/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|1|801/IMUD|Info MUD|1|___<br>CCMoveUpDownStatus||I|
|2|400-407-413/OO|OnOff|1|___<br>CC_Switch_OnOff|<br>CC_Logica<br>l|O L|
|2|801/SSUD|StepStop UpDown|1|CCStepStopUpDown||O|
|3|801/MUD|Move UpDown|1|__<br>CC_Move_UpDown|CC_Logica<br>l|O|
|4|413/DC|DimmerCtrl|1|CCDimmingCtrl||O|

|Selection|Parameter value|Datapoint<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>4 bits|
|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|
|Toggle|CHPBToggle|IOO|OO|-|-|
|Dimming Toggle|__<br>CHPBDimmingToggle|IOO|OO|-|DC|
|Sunblind Toggle|___<br>CHPBBlindToggle|IMUD|SSUD|MUD|-|
|Push Button|___<br>CHPushButton|-|OO|-|-|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|Switch action|__<br>PARTOnOffAction|11b : OnOff|14|

|Adjustable selection = 0<br>(none)|Col2|Col3|
|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)|||
|Adjustable selection = 2 <br>(PB Dimmer toggle)|||
|Adjustable selection = 3 <br>(PB Sunblind toggle)|||
|Adjustable selection = 4 <br>(Push button)|Switch action||


-----

#### 2.13 CH_Generic_PB_1/2_1 (Channel Code 030Ch)

###### Name: CH_Generic_PB_1/2_1

 ID: 030Ch

 Classification: sensor

 Functional Block(s):

 421 – FB Switching Sensor Basic

 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_PB_1/2_1**


OO + OnOff

SSUD StepStop UpDown

Info OnOff IOO MUD Move UpDown

DC Dimming_Ctrl

**_Parameters_**

Adjustable select AJS

PB action shutter P1

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, dimming and shutter control.

 Datapoint list:

**FB /** **Sub** **Additional** **Flags**
**Index** **Name** **Main CC**
**DP_Name** **unit** **CCs** **(i/o,x,v,…)**

1 407-413/IOO Info OnOff 1 CC_Switch_OnOff_Status I
2 407-413/OO OnOff 1 CC_Switch_OnOff CC_Logical O L
2 801/SSUD StepStop UpDown 1 CC_StepStop_UpDown O
3 801/MUD Move UpDown 1 CC_Move UpDown CC_Logical O
4 413/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4**

**Selection** **Parameter value**

**_Input_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_1 bit_** **_4 bits_**

Default 0 (none) - OO - Toggle CH_PB_Toggle IOO OO - Dimming Toggle CH_PB_Dimming_Toggle IOO OO - DC
PB_Sunblind CH_PB_Blind - SSUD MUD 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection

|IOO|CH Generic PB 1/2 1<br>_ _ _ _|OO +|
|---|---|---|
|<br> <br>IOO|**CH_Generic_PB_1/2_1**|<br>SSUD|
|<br> <br>IOO|**CH_Generic_PB_1/2_1**|MUD|
|<br> <br>AJS|<br> <br>AJS|DC|
|<br> <br>AJS|<br> <br>AJS||
|<br>P1|<br>P1|<br>P1|
|<br>|<br>|<br>|

|Index|FB /<br>DP Name<br>_|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|<br>407-413/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|2|407-413/OO|OnOff|1|___<br>CCSwitchOnOff|<br>CCLogical|O L|
|2|801/SSUD|StepStop UpDown|1|__<br>CCStepStopUpDown|_|O|
|3|801/MUD|Move UpDown|1|__<br>CCMove UpDown|CCLogical|O|
|4|413/DC|DimmerCtrl|1|_<br>CCDimmingCtrl|_|O|

|Selection|Parameter value|Datapoint<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>4 bits|
|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|
|Toggle|CHPBToggle|IOO|OO|-|-|
|Dimming Toggle|__<br>CHPBDimmingToggle|IOO|OO|-|DC|
|PBSunblind|___<br>CHPBBlind|-|SSUD|MUD|-|


-----

###### Parameter table:

**Recommended**

**Index** **[Identifie]** **Name** **Type**

**r** **default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 PB action (shutter) PART_UpDown_Action Up 15

###### Parameter overview

0 8 15

|Index|Identifie<br>r|Name|Type|Recommended<br>default value|Bit Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|PB action (shutter)|__<br>PARTUpDownAction|<br>Up|15|

|Adjustable selection = 0<br>(none)|Col2|Col3|
|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)|||
|Adjustable selection = 2 <br>(PB Dimmer toggle)|||
|Adjustable selection = 3 <br>(PB Sunblind)|PB action shutte~~r ~~||


-----

#### 2.14 CH_Generic_PB_1/2_Info_1 (Channel Code 030Dh)

###### Name: CH_Generic_PB_1/2_Info_1

 ID: 030Dh

 Classification: sensor

 Functional Block(s):

 421 – FB Switching Sensor Basic

 421 – FB Switching Sensor Basic

 2 x 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic

 403 - FB Scene Sensor

 406 – FB PB Timed Sensor
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_PB_1/2_Info_1**


OO + OnOff

TSS + Timed StartStop

Info OnOff IOO + SSUD StepStop UpDown

Info Move UpDown IMUD MUD Move UpDown

DC Dimming_Ctrl

**_Parameters_** SN Scene_Number

Adjustable select AJS

PB action dimming P1

PB action shutter P2

Switch action P3

Scene number P4

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control.

 REMARK To avoid multiplication of generic PB, this E-Mode Channel is usable even if no info is displayed to the user.

 Datapoint list:

**Sub** **Additional** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC**
**unit** **CCs** **(i/o,x,v,…)**

|IOO +|CH Generic PB 1/2 Info 1<br>_ _ _ _ _|OO +|
|---|---|---|
|<br> <br>IOO+|**CH_Generic_PB_1/2_Info_1**|<br>TSS+|
|<br> <br>IOO+|**CH_Generic_PB_1/2_Info_1**|<br>SSUD|
|<br>IMUD|<br>IMUD|MUD|
|<br> <br>AJS|<br> <br>AJS|DC|
|<br> <br>AJS|<br> <br>AJS|SN|
|<br> <br>AJS|<br> <br>AJS||
|<br>P1|<br>P1|<br>P1|
|<br> <br> <br>P2|<br> <br> <br>P2|<br> <br> <br>P2|
|<br>P3|<br>P3|<br>P3|
|<br> <br> <br>P4|<br> <br> <br>P4|<br> <br> <br>P4|
|<br>|<br>|<br>|

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|402-407-413/IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|1|801/IMUD|Info MUD|1|___<br>CC_Move_UpDown_-<br>Status||I|
|2|400-407-412-<br>413/OO|OnOff|1|CC_Switch_OnOff|CC_Logical|O L|
|2|406/TSS|Timed StartStop|1|CCTimed||O|
|2|801/SSUD|StepStop UpDown|1|_<br>CCStepStopUpDown||O|


-----

**Sub** **Additional** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC**
**unit** **CCs** **(i/o,x,v,…)**

3 801/MUD Move UpDown 1 CC_Move_UpDown CC_Logical O
4 412-413/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O
5 403/SN Scene number 1 CC_Scene_Number O

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4** **5**

**Selection** **Parameter value**

**_Input_** **_Output_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_1 bit_** **_4 bits_** **_8 bits_**

Default 0 (none) - OO - - Toggle CH_PB_Toggle IOO OO - - Dimming Toggle CH_PB_Dimming_Toggle IOO OO - DC Sunblind Toggle CH_PB_Blind_Toggle IMUD SSUD MUD - Dimming info CH_Dimmer_Info IOO OO DC PB_Sunblind CH_PB_Blind - SSUD MUD - Push Button CH_Push_Button - OO - - Timed CH_Timed StartStop_Info IOO TSS - - Scene Number CH_PB_Scene_Numbered - - - SN

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection

 Parameter table:

**Recommended** **Bit**
**Index** **Identifier** **Name** **Type**

**default value** **Offset**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 PB action (dimming) PART_UpDown_Action Up 15
2 P2 PB action (shutter) PART_UpDown_Action Up 15
2 P3 Switch action PART_OnOff_Action 11b : OnOff 14
2 P4 Scene number PART_Scene_Number 0 10

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|3|801/MUD|Move UpDown|1|CCMoveUpDown|CCLogical|O|
|4|412-413/DC|DimmerCtrl|1|__<br>CCDimmingCtrl|_|<br>O|
|5|403/SN|_<br>Scene number|1|__<br>CCSceneNumber||O|

|Selection|Parameter value|Datapoint<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>4 bits|Datapoint<br>5<br>Output<br>8 bits|
|---|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|-|
|Toggle|CHPBToggle|IOO|OO|-|-|-|
|Dimming Toggle|__<br>CHPBDimmingToggle|IOO|OO|-|DC|-|
|Sunblind Toggle|___<br>CHPBBlindToggle|IMUD|SSUD|MUD|-|-|
|Dimming info|___<br>CHDimmerInfo|IOO|OO||DC|-|
|PBSunblind|__<br>CHPBBlind|-|SSUD|MUD|-|-|
|_<br>Push Button|__<br>CHPushButton|-|OO|-|-|-|
|Timed|__<br>CHTimed StartStopInfo|IOO|TSS|-|-|-|
|Scene Number|_ _<br>CHPBSceneNumbered||-|-|-|SN|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|PB action (dimming)|__<br>PARTUpDownAction|Up|15|
|2|P2|PB action (shutter)|__<br>PARTUpDownAction|Up|15|
|2|P3|Switch action|__<br>PARTOnOffAction|11b : OnOff|14|
|2|P4|Scene number|__<br>PARTSceneNumber|0|10|


-----

###### Parameter overview

0 8 15

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)|||||
|Adjustable selection = 2 <br>(PB Dimmer toggle)|||||
|Adjustable selection = 3 <br>(PB Shutter toggle)|||||
|Adjustable selection = 4 <br>(PB Dimmer info)|PB action dimmin~~g ~~|PB action dimmin~~g ~~|PB action dimmin~~g ~~||
|Adjustable selection = 5 <br>(PB sunblind)|PB action shutte~~r ~~|PB action shutte~~r ~~|PB action shutte~~r ~~||
|Adjustable selection = 6 <br>(Push button)|Switch action|Switch action|||
|Adjustable selection = 7 <br>(Timed)|||||
|Adjustable selection = 8 <br>(Scene Number)||Scene Number|Scene Number|Scene Number|


-----

#### 2.15 CH_Generic_PB_1/2_Info_2 (Channel Code 030Eh)

###### Name: CH_Generic_PB_1/2_Info_2

 ID: 030Eh

 Classification: sensor

 Functional Block(s):

 2 x 421 – FB Switching Sensor Basic

 2 x 420 – FB Dimming Sensor Basic

 801 – FB Sunblind Sensor Basic

 403 - FB Scene Sensor

 406 – FB PB Timed Sensor

 1020 – FB Priority Sensor

 802 - FB_Wind_Alarm

 803 - FB_Rain_Alarm
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_PB_1/2_Info_2**


OO + OnOff

TSS + Timed StartStop

SSUD + StepStop UpDown

WA + Wind Alarm

Info OnOff IOO + RA Rain Alarm

Info Move UpDown IMUD MUD Move UpDown

FO Forced

DC Dimming_Ctrl

**_Parameters_** SN Scene_Number

Adjustable select AJS

PB action dimming P1

PB action shutter P2

Switch action P3

Scene number P4

Control type P5

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control..

 REMARK To avoid multiplication of generic PB, this E-Mode Channel is usable even if no info is displayed to the user.

|IOO +|CH Generic PB 1/2 Info 2<br>_ _ _ _ _|OO +|
|---|---|---|
|<br> <br>IOO+|**CH_Generic_PB_1/2_Info_2**|<br>TSS+|
|<br> <br>IOO+|**CH_Generic_PB_1/2_Info_2**|<br>SSUD+|
|<br> <br>IOO+|**CH_Generic_PB_1/2_Info_2**|<br>WA+|
|<br> <br>IOO+|**CH_Generic_PB_1/2_Info_2**|<br>RA|
|<br>IMUD|<br>IMUD|MUD|
|<br> <br>AJS|<br> <br>AJS|FO|
|<br> <br>AJS|<br> <br>AJS|DC|
|<br> <br>AJS|<br> <br>AJS|SN|
|<br> <br>AJS|<br> <br>AJS||
|<br>P1|<br>P1|<br>P1|
|<br> <br> <br>P2|<br> <br> <br>P2|<br> <br> <br>P2|
|<br>P3|<br>P3|<br>P3|
|<br> <br> <br>P4|<br> <br> <br>P4|<br> <br> <br>P4|
|<br>P5|<br>P5|<br>P5|
|<br>|<br>|<br>|


-----

###### Datapoint list:

**Sub-** **Additional** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v,…)**

1 402-407-413/IOO Info OnOff 1 CC_Switch_OnOff_- I
Status

1 801/IMUD Info MUD 1 CC_Move_UpDown_- I
Status

2 400-407-412-413/OO OnOff 1 CC_Switch_OnOff CC_Logical O L
2 406/TSS Timed StartStop 1 CC_Timed O
2 801/SSUD StepStop 1 CC_StepStop_UpDown O
UpDown

2 802/WA Wind Alarm 1 CC_Wind O
2 803/RA Rain Alarm 1 CC_Rain O
3 801/MUD Move UpDown 1 CC_Move_UpDown CC_Logical O
4 405/FO Forced 1 CC_Forced O
5 412-413/DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O
6 403/SN Scene number 1 CC_Scene_Number O

###### Adjustable table:

**Datapoint Datapoint Datapoint Datapoint Datapoint Datapoint**

**1** **2** **3** **4** **5** **6**

**Selection** **Parameter value**

**_Input_** **_Output_** **_Output_** **_Output_** **_Output_** **_Output_**

**_1 bit_** **_1 bit_** **_1 bit_** **_2 bits_** **_4 bits_** **_8 bits_**

Default 0 (none) - OO - - - Toggle CH_PB_Toggle IOO OO - - - Dimming CH_PB_Dimming_- IOO OO - - DC Toggle Toggle

Sunblind CH_PB_Blind_- IMUD SSUD MUD - - Toggle Toggle

Dimming info CH_Dimmer_Info IOO OO - - DC PB_Sunblind CH_PB_Sunblind - SSUD MUD - - Push Button CH_Push_Button - OO - - - Timed CH_Timed IOO TSS - - - StartStop_Info

Scene Number CH_PB_Scene_- - - - - SN
Numbered

Forced CH_Forced - - - FO - Wind alarm CH_Wind_Sensor - WA - - - Rain Alarm CH_Rain_Sensor - RA - - - 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection

 Parameter table:

**Recommended**
**Index Identifier** **Name** **Type** **Bit Offset**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 PB action (dimming) PART_UpDown_Action Up 15
2 P2 PB action (shutter) PART_UpDown_Action Up 15
2 P3 Switch action PART_OnOff_Action 11b : OnOff 14
2 P4 Scene number PART_Scene_Number 0 10
2 P5 Control type PART_Boolean 0: Ctrl FALSE 15

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|402-407-413/IOO|Info OnOff|1|CC_Switch_OnOff_-<br>Status||I|
|1|801/IMUD|Info MUD|1|CC_Move_UpDown_-<br>Status||I|
|2|400-407-412-413/OO|OnOff|1|CCSwitchOnOff|CCLogical|O L|
|2|406/TSS|Timed StartStop|1|__<br>CCTimed|_|O|
|2|801/SSUD|StepStop<br>UpDown|1|_<br>CC_StepStop_UpDown||O|
|2|802/WA|Wind Alarm|1|CCWind||O|
|2|803/RA|Rain Alarm|1|_<br>CCRain||O|
|3|801/MUD|Move UpDown|1|_<br>CCMoveUpDown|CCLogical|O|
|4|405/FO|Forced|1|__<br>CCForced|_|O|
|5|412-413/DC|DimmerCtrl|1|_<br>CCDimmingCtrl||O|
|6|403/SN|_<br>Scene number|1|__<br>CCSceneNumber||O|

|Selection|Parameter value|Datapoint<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>2 bits|Datapoint<br>5<br>Output<br>4 bits|Datapoint<br>6<br>Output<br>8 bits|
|---|---|---|---|---|---|---|---|
|Default|0 (none)|-|OO|-|-|-|-|
|Toggle|CHPBToggle|IOO|OO|-|-|-|-|
|Dimming<br>Toggle|__<br>CH_PB_Dimming_-<br>Toggle|IOO|OO|-|-|DC|-|
|Sunblind<br>Toggle|CH_PB_Blind_-<br>Toggle|IMUD|SSUD|MUD|-|-|-|
|Dimming info|CHDimmerInfo|IOO|OO|-|-|DC|-|
|PBSunblind|__<br>CHPBSunblind|-|SSUD|MUD|-|-|-|
|_<br>Push Button|__<br>CHPushButton|-|OO|-|-|-|-|
|Timed|__<br>CH_Timed<br>StartStopInfo|IOO|TSS|-|-|-|-|
|Scene Number|_<br>CH_PB_Scene_-<br>Numbered||-|-|-|-|SN|
|Forced|CHForced|-|-|-|FO|-|-|
|Wind alarm|_<br>CHWindSensor|-|WA|-|-|-|-|
|Rain Alarm|__<br>CHRainSensor|-|RA|-|-|-|-|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|<br>PB action (dimming)|__<br>   PARTUpDownAction|<br>Up|15|
|2|P2|<br>PB action (shutter)|__<br>PARTUpDownAction|Up|15|
|2|P3|Switch action|__<br>PARTOnOffAction|11b : OnOff|14|
|2|P4|Scene number|__<br>PARTSceneNumber|0|10|
|2|P5|Control type|__<br>PARTBoolean|0: Ctrl FALSE|15|


-----

###### Parameter overview:

0 8 15

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)|||||
|Adjustable selection = 2 <br>(PB Dimmer toggle)|||||
|Adjustable selection = 3 <br>(PB Shutter toggle)|||||
|Adjustable selection = 4 <br>(PB Dimmer info)|PB action dimmin~~g ~~|PB action dimmin~~g ~~|PB action dimmin~~g ~~||
|Adjustable selection = 5 <br>(PB sunblind)|PB action shutte~~r ~~|PB action shutte~~r ~~|PB action shutte~~r ~~||
|Adjustable selection = 6 <br>(Push button)|Switch action|Switch action|||
|Adjustable selection = 7 <br>(Timed)|||||
|Adjustable selection = 8 <br>(Scene Number)||Scene Number|Scene Number|Scene Number|
|Adjustable selection = 9 <br>(Forced)|Control Type|Control Type|Control Type||
|Adjustable selection = 10 <br>(Wind sensor)|||||
|Adjustable selection = 11 <br>(Rain sensor)|||||


-----

#### 2.16 CH_Generic_Binary_Contact (Channel Code 030Fh)

###### Name: CH_Generic_Binary_Contact

 ID: 030Fh

 Classification: sensor

 Functional Block(s):

 1020 – FB Priority Sensor

 802 - FB_Wind_Alarm

 803 - FB_Rain_Alarm
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_Binary_Contact**


WA + Wind Alarm

RA Rain Alarm

FO Forced

**_Parameters_**

Adjustable select AJS

Control type P1

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic contact with ability for wind and rain alarm and Forcing

 Datapoint list:

**Flags**
**Index** **FB / DP_Name** **Name** **Subunit** **Main CC** **Additional CCs**
**(i/o,x,v,…)**

1 802/WA Wind Alarm 1 CC_Wind O L
1 803/RA Rain Alarm 1 CC_Rain O
2 405/FO Forced 1 CC_Forced O

###### Adjustable table:

**Datapoint** **Datapoint**

**1** **3**

**Selection** **Parameter value**

**_Output_** **_Output_**

**_1 bit_** **_2 bits_**

Default 0 (none) WA Wind Alarm CH_Wind_Sensor WA Rain Alarm CH_Rain_Sensor RA Forced CH_Forced - FO

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection

|AJS|CH Generic Binary Contact<br>_ _ _|WA +|
|---|---|---|
|<br> <br> <br>AJS|**CH_Generic_Binary_Contact**|<br>RA|
|<br> <br> <br>AJS|**CH_Generic_Binary_Contact**|FO|
|<br> <br> <br>AJS|**CH_Generic_Binary_Contact**||
|<br>P1|<br>P1|<br>P1|
|<br>|<br>|<br>|

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|802/WA|Wind Alarm|1|CCWind||O L|
|1|803/RA|Rain Alarm|1|_<br>CCRain||O|
|2|405/FO|Forced|1|_<br>CCForced||O|

|Selection|Parameter value|Datapoint<br>1<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>2 bits|
|---|---|---|---|
|Default|0 (none)|WA|-|
|Wind Alarm|CHWindSensor|WA|-|
|Rain Alarm|__<br>CHRainSensor|RA|-|
|Forced|__<br>CHForced|-|FO|


-----

###### Parameter table:

**Recommended**
**Index** **Identifier** **Name** **Type**

**default value**

1 AJS Adjustable selection PART_Adaptive_Selection none (=0) 0
2 P1 Wind Alarm PART_Boolean 0: Ctrl FALSE 15
2 P2 Rain Alarm PART_Boolean 0: Ctrl FALSE 15
2 P3 Control Type PART_Boolean 0: Ctrl FALSE 15

###### Parameter overview

0 8 15

Adjustable selection = 0

(none)

Adjustable selection = 1

(Wind)

Adjustable selection = 2

(Rain)

Adjustable selection = 3 Control Type

(Forced)

#### 2.17 CH_Generic_Switch_5 (Channel Code 0311h)

###### Name: CH_Generic_Switch_5

 ID: 0311h

 Classification: sensor

 Functional Block(s):

 403 – FB Scene Sensor (See [01])

 420 – FB Dimming Sensor Basic (See [03])

 421 – FB Switching Sensor Basic (See [03])

 801 – FB Sunblind Sensor Basic (See [04])
###### Graphical representation:

**_Inputs_** **_Outputs_**

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|AJS|Adjustable selection|PARTAdaptiveSelection|none (=0)|0|
|2|P1|Wind Alarm|__<br>PARTBoolean|0: Ctrl FALSE|15|
|2|P2|Rain Alarm|_<br>PARTBoolean|0: Ctrl FALSE|15|
|2|P3|Control Type|_<br>PARTBoolean|0: Ctrl FALSE|15|

|Adjustable selection = 0<br>(none)|Col2|Col3|
|---|---|---|
|Adjustable selection = 1<br>(Wind)|||
|Adjustable selection = 2<br>(Rain)|||
|Adjustable selection = 3 <br>(Forced)|Control Type||


**CH_Generic_Switch_5**


SOO + 421.Switch On Off

SSUD 801.StopStep Up Down

MUD 801.Move Up Down

**_Parameters_** RSC 420.RelativeSetvalueControl

Adjustable select AJS SN 403.SceneNumber

Scene number 1 P1

Scene number 2 P2

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, dimming and shutter control.

|AJS|CH Generic Switch 5<br>_ _ _|SOO +|
|---|---|---|
|<br> <br>AJS|**CH_Generic_Switch_5**<br> <br> <br>|SSUD|
|<br> <br>AJS|**CH_Generic_Switch_5**<br> <br> <br>|MUD|
|<br> <br>AJS|**CH_Generic_Switch_5**<br> <br> <br>|RSC|
|<br> <br>AJS|**CH_Generic_Switch_5**<br> <br> <br>|<br>SN|
|P1|P1||
|<br>P2|<br>P2|<br>P2|
||||


-----

###### Datapoint list:

**FB**

**Sub-** **Flags**

**Index** **Datapoint** **Name** **Main CC** **Additional CCs**

**unit** **(i/o,x,v,…)**

**ID**

1 OO OnOff 1 CC_Switch_OnOff CC_Logical O L(1)
2 SSUD StepStop UpDown 1 CC_StepStop UpDown O
3 MUD Move UpDown 1 CC_Move UpDown CC_Logical O
4 DC Dimmer_Ctrl 1 CC_Dimming_Ctrl O
5 SN Scene number 1 CC_Scene_Number O

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4** **5**

**Selection** **Parameter value**

**Output** **Output** **Output** **Output** **Output**

**1 bit** **1 bit** **1 bit** **4 bits** **8 bits**

Default 0 (none) OO [(1)] - - - Switch CH_Switch OO - - - Dimming CH_Switch_Dimmer OO - - DC Sunblind CH_Switch_Sunblind - SSUD MUD - Scene CH_Switch_Scene_Number - - - - SN

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection. The parameter value corresponds to the E-Mode Channel ID.

(1) On other modes than Ctrl-Mode (L)ocalisation flag and localisation Datapoint is optional. In modes
###### with tool-access (Ctrl-Mode) when ajs = 0 it is mandatory to send the localisation Datapoint according to the functionality of the default adjustment 

 Parameter table:

**Index Identifier** **Name** **Recommended default** **Bit**

**value** **offset**

1 AJS Adjustable selection none (=0) 0
2 P1 Scene number 1 0 10
3 P2 Scene number 2 0 18

###### Parameter overview

0 8 16 23

Adjustable selection = 0

(none)

Adjustable selection = 1

(switch)

Adjustable selection = 2

(Switch_Dimmer)

Adjustable selection = 3

(Switch_Sunblind)

Adjustable selection = 4 Scene Number 1 Scene number 2

(Scene Number)

|Index|FB<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|OO|OnOff|1|CCSwitchOnOff|CCLogical|O L(1)|
|2|SSUD|StepStop UpDown|1|__<br>CCStepStop UpDown|_<br>|O|
|3|MUD|Move UpDown|1|_<br>CCMove UpDown|<br>CCLogical|O|
|4|DC|DimmerCtrl|1|_<br>CCDimmingCtrl|_|O|
|5|SN|_<br>Scene number|1|__<br>CCSceneNumber||O|

|Selection|Parameter value|Datapoint<br>1<br>Output<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>4 bits|Datapoint<br>5<br>Output<br>8 bits|
|---|---|---|---|---|---|---|
|Default|0 (none)|OO(1)|-|-|-|-|
|Switch|CHSwitch|OO|-|-|-|-|
|Dimming|_<br>CHSwitchDimmer|OO|-|-|DC|-|
|Sunblind|__<br>CHSwitchSunblind|-|SSUD|MUD|-|-|
|Scene|__<br>CHSwitchSceneNumber|-|-|-|-|SN|

|Index|Identifier|Name|Recommended default<br>value|Bit<br>offset|
|---|---|---|---|---|
|1|AJS|Adjustable selection|none (=0)|0|
|2|P1|Scene number 1|0|10|
|3|P2|Scene number 2|0|18|

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|Adjustable selection = 1 <br>(switch)|||||
|Adjustable selection = 2 <br>(Switch_Dimmer)|||||
|<br>Adjustable selection = 3 <br>(Switch_Sunblind)|||||
|<br>Adjustable selection = 4 <br>(Scene Number)||Scene Number 1||Scene number 2|


-----

#### 2.18 CH_Generic_PB_1/2_Info_3 (Channel Code 0312h)

###### Name: CH_Generic_PB_1/2_Info_3

 ID: 0312h

 Classification: sensor

 Functional Block(s):

 421 – FB Switching Sensor Basic (See [03])

 420 – FB Dimming Sensor Basic (See [03])

 801 – FB Sunblind Sensor Basic (See [04])

 403 – FB Scene Sensor (See [01])

 406 – FB Timed Sensors (See [01])

 384 – FB User HVAC Room Setting (UHRS) (See [02])

 ??? – FB Lock Sensor (See [01])
###### Graphical representation:

**_Inputs_** **_Outputs_**

**CH_Generic_PB_1/2_Info_3**

420.SwitchOnOff

SOO+ 421.SwitchOnOff

TSS + 406.TimedStartStop


406.OnOffIn
420.InfoOnOff
421.InfoOnOff IOO+


SSUD + 801.StepStopUpDown


801.InfoMoveUpDown IMUD LO ???.Lock

MUD 801.MoveUpDown

**_Parameters_** RSC 420.RelativeSetvalueControl

Adjustable select AJS SN + 403.SceneNumber

PB action dimming P1 HMU 384.HVACModeUser

PB action shutter P2

Switch action P3

Scene number P4

PB action HVAC P5

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control.

 The Output LO shall allow disabling and enabling heating.

NOTE To avoid multiplication of generic PBs, this E-Mode Channel is usable even if no info is displayed to the user.

|406.OnOffIn<br>0.InfoOnOff<br>1.InfoOnOff IOO+<br>oveUpDown IMUD<br>Parameters<br>stable select AJS<br>ion dimming P1<br>ction shutter P2<br>witch action P3<br>ene number P4<br>ction HVAC P5|CH Generic PB 1/2 Info 3<br>_ _ _ _ _|SOO+|
|---|---|---|
|<br>406.OnOffIn<br>0.InfoOnOff<br>1.InfoOnOff <br>IOO+ <br>oveUpDown IMUD<br>**_Parameters_**<br>stable select<br>AJS <br> ion dimming <br>P1<br> ction shutter<br>P2<br>witch action <br>P3<br>ene number <br>P4<br> ction HVAC <br>P5|**CH_Generic_PB_1/2_Info_3**<br> <br>  <br> <br>  <br> <br>  <br>  <br>|<br>TSS+|
|<br>406.OnOffIn<br>0.InfoOnOff<br>1.InfoOnOff <br>IOO+ <br>oveUpDown IMUD<br>**_Parameters_**<br>stable select<br>AJS <br> ion dimming <br>P1<br> ction shutter<br>P2<br>witch action <br>P3<br>ene number <br>P4<br> ction HVAC <br>P5|**CH_Generic_PB_1/2_Info_3**<br> <br>  <br> <br>  <br> <br>  <br>  <br>|<br>SSUD+|
|<br>406.OnOffIn<br>0.InfoOnOff<br>1.InfoOnOff <br>IOO+ <br>oveUpDown IMUD<br>**_Parameters_**<br>stable select<br>AJS <br> ion dimming <br>P1<br> ction shutter<br>P2<br>witch action <br>P3<br>ene number <br>P4<br> ction HVAC <br>P5|**CH_Generic_PB_1/2_Info_3**<br> <br>  <br> <br>  <br> <br>  <br>  <br>|<br>LO|
|<br>406.OnOffIn<br>0.InfoOnOff<br>1.InfoOnOff <br>IOO+ <br>oveUpDown IMUD<br>**_Parameters_**<br>stable select<br>AJS <br> ion dimming <br>P1<br> ction shutter<br>P2<br>witch action <br>P3<br>ene number <br>P4<br> ction HVAC <br>P5|**CH_Generic_PB_1/2_Info_3**<br> <br>  <br> <br>  <br> <br>  <br>  <br>|MUD|
|<br>406.OnOffIn<br>0.InfoOnOff<br>1.InfoOnOff <br>IOO+ <br>oveUpDown IMUD<br>**_Parameters_**<br>stable select<br>AJS <br> ion dimming <br>P1<br> ction shutter<br>P2<br>witch action <br>P3<br>ene number <br>P4<br> ction HVAC <br>P5|**CH_Generic_PB_1/2_Info_3**<br> <br>  <br> <br>  <br> <br>  <br>  <br>|RSC|
|<br>406.OnOffIn<br>0.InfoOnOff<br>1.InfoOnOff <br>IOO+ <br>oveUpDown IMUD<br>**_Parameters_**<br>stable select<br>AJS <br> ion dimming <br>P1<br> ction shutter<br>P2<br>witch action <br>P3<br>ene number <br>P4<br> ction HVAC <br>P5|**CH_Generic_PB_1/2_Info_3**<br> <br>  <br> <br>  <br> <br>  <br>  <br>|<br>SN+|
|<br>406.OnOffIn<br>0.InfoOnOff<br>1.InfoOnOff <br>IOO+ <br>oveUpDown IMUD<br>**_Parameters_**<br>stable select<br>AJS <br> ion dimming <br>P1<br> ction shutter<br>P2<br>witch action <br>P3<br>ene number <br>P4<br> ction HVAC <br>P5|**CH_Generic_PB_1/2_Info_3**<br> <br>  <br> <br>  <br> <br>  <br>  <br>|HMU|
|<br>406.OnOffIn<br>0.InfoOnOff<br>1.InfoOnOff <br>IOO+ <br>oveUpDown IMUD<br>**_Parameters_**<br>stable select<br>AJS <br> ion dimming <br>P1<br> ction shutter<br>P2<br>witch action <br>P3<br>ene number <br>P4<br> ction HVAC <br>P5|**CH_Generic_PB_1/2_Info_3**<br> <br>  <br> <br>  <br> <br>  <br>  <br>||


-----

###### Datapoint list:

**FB**

**Sub** **Additional** **Flags**

**Index** **Datapoint** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v,…)**

**ID**

1 IOO 406.OnOffIn 1 CC_Switch_OnOff_- I
420.InfoOnOff Status
421.InfoOnOff

1 IMUD 801.InfoMoveUppDown 1 CC_Move UpDown_- I
Status

2 SOO 420.SwitchOnOff 1 CC_Switch_OnOff CC_Logical O L
421.SwitchOnOff

2 TSS 406.TimedStartStop 1 CC_Timed O
2 SSUD 801.StepStopUpDown 1 CC_StepStop O
UpDown

2 LO ???.Lock 1 CC_Heating_Enabled CC_Logical O
3 MUD 801.MoveUpDown 1 CC_Move UpDown CC_Logical O
4 RSC 421.RelativeSetvalueContro 1 CC_Dimming_Ctrl O
l

5 SN 403.SceneNumber 1 CC_Scene_Number O
5 HMU 384.HvacModeUser 1 CC_HVAC_Mode O

###### Adjustable table

**Datapoint** **Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4** **5**

**Selection** **Parameter value**

**Input** **Output** **Output** **Output** **Output**

**1 bit** **1 bit** **1 bit** **4 bit** **8 bit**

Default 0 (none) - SOO - - Toggle CH_PB_Toggle IOO SOO - - Dimming Toggle CH_PB_Dimming_Toggle IOO SOO - RSC Shutter Toggle CH_PB_Sunblind_Toggle IMUD SSUD MUD - Dimming info CH_Dimmer_Info IOO SOO RSC PB_Sunblind CH_PB_Sunblind - SSUD MUD - Push Button CH_Push_Button - SOO - - Timed CH_Timed StartStop_Info IOO TSS - - Scene Number CH_PB_Scene_Numbered - - - SN
HVAC Mode CH_PB_HVAC_Mode - - - - HMU
HVAC Control CH_PB_HVAC_HeatingEnabled - LO - - 
###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection

 Parameter table:

**Index** **Identifier** **Name** **Recommended default value** **Bit-Offset**

1 AJS Adjustable selection none (=0) 0
2 P1 421.OnOffAction Dim up 15
2 P2 801.UpDownAction Up 15
2 P3 400.SwitchAction 11b: OnOff 14
2 P4 403.SceneNumber 0 10
2 P5 PB action hvac 0 =Comfort/Economy 14

|Index|FB<br>Datapoint<br>ID|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|IOO|406.OnOffIn<br>420.InfoOnOff<br>421.InfoOnOff|1|CC_Switch_OnOff_-<br>Status||I|
|1|IMUD|801.InfoMoveUppDown|1|CC_Move UpDown_-<br>Status||I|
|2|SOO|420.SwitchOnOff<br>421.SwitchOnOff|1|CC_Switch_OnOff|CC_Logical|O L|
|2|TSS|406.TimedStartStop|1|CCTimed||O|
|2|SSUD|801.StepStopUpDown|1|_<br>CC_StepStop<br>UpDown||O|
|2|LO|???.Lock|1|CCHeatingEnabled|CCLogical|O|
|3|MUD|801.MoveUpDown|1|__<br>CCMove UpDown|_<br>CCLogical|<br> O|
|4|RSC|421.RelativeSetvalueContro<br>l|1|_<br>CC_Dimming_Ctrl|_|<br>O|
|5|SN|403.SceneNumber|1|CCSceneNumber||O|
|5|HMU|384.HvacModeUser|1|__<br>CCHVACMode||O|

|Selection|Parameter value|Datapoint<br>1<br>Input<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>1 bit|Datapoint<br>4<br>Output<br>4 bit|Datapoint<br>5<br>Output<br>8 bit|
|---|---|---|---|---|---|---|
|Default|0 (none)|-|SOO|-|-|-|
|Toggle|CHPBToggle|IOO|SOO|-|-|-|
|Dimming Toggle|__<br>CHPBDimmingToggle|IOO|SOO|-|RSC|-|
|Shutter Toggle|___<br>CHPBSunblindToggle|IMUD|SSUD|MUD|-|-|
|Dimming info|___<br>CHDimmerInfo|IOO|SOO||RSC|-|
|PBSunblind|__<br>CHPBSunblind|-|SSUD|MUD|-|-|
|_<br>Push Button|__<br>CHPushButton|-|SOO|-|-|-|
|Timed|__<br>CHTimed StartStopInfo|IOO|TSS|-|-|-|
|Scene Number|_ _<br>CHPBSceneNumbered||-|-|-|SN|
|HVAC Mode|___<br>CHPBHVACMode|-|-|-|-|HMU|
|HVAC Control|___<br>CHPBHVACHeatingEnabled|-|LO|-|-|-|

|Index|Identifier|Name|Recommended default value|Bit-Offset|
|---|---|---|---|---|
|1|AJS|Adjustable selection|none (=0)|0|
|2|P1|421.OnOffAction|Dim up|15|
|2|P2|801.UpDownAction|Up|15|
|2|P3|400.SwitchAction|11b: OnOff|14|
|2|P4|403.SceneNumber|0|10|
|2|P5|PB action hvac|0 =Comfort/Economy|14|


-----

###### Parameter overview

0 8 15

Adjustable selection = 0

(none)

Adjustable selection = 1

(PB toggle)

Adjustable selection = 2

(PB Dimmer toggle)

Adjustable selection = 3

(PB Shutter toggle)

Adjustable selection = 4 PB action dimming

(PB Dimmer info)

Adjustable selection = 5 PB action shutter

(PB Shutter)

Adjustable selection = 6 Switch action

(Push button)

Adjustable selection = 7

(Timed)

Adjustable selection = 8 Scene Number

(Scene Number)

Adjustable selection = 9 PB action hvac

(Hvac Mode User)

Adjustable selection = 10

(HVAC Heating Enabled)

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)|||||
|Adjustable selection = 2 <br>(PB Dimmer toggle)|||||
|Adjustable selection = 3 <br>(PB Shutter toggle)|||||
|Adjustable selection = 4 <br>(PB Dimmer info)|PB action dimmin~~g ~~|PB action dimmin~~g ~~|PB action dimmin~~g ~~||
|Adjustable selection = 5 <br>(PB Shutter)|PB action shutte~~r ~~|PB action shutte~~r ~~|PB action shutte~~r ~~||
|Adjustable selection = 6 <br>(Push button)|Switch action|Switch action|||
|Adjustable selection = 7 <br>(Timed)|||||
|Adjustable selection = 8 <br>(Scene Number)||Scene Number|Scene Number|Scene Number|
|Adjustable selection = 9<br>(Hvac Mode User)|PB action hvac|PB action hvac|||
|Adjustable selection = 10 <br>(HVAC Heating Enabled)|||||


-----

#### 2.19 CH_Generic_PB_1/2_Info_4 (Channel Code 0313h)

###### Name: CH_Generic_PB_1/2_Info_4

 ID: 0313h

 Classification: sensor

 Functional Block(s):

 421 – FB Switching Sensor Basic (See [03])

 420 – FB Dimming Sensor Basic (See [03])

 801 – FB Sunblind Sensor Basic (See [04])

 403 – FB Scene Sensor (See [01])

 406 – FB Timed Sensors (See [01])

 1020 – FB Priority Sensor (See [01])

 802 – FB Wind Alarm

 803 – FB Rain Alarm

 384 – FB User HVAC Room Setting (UHRS) (See [02])

 ??? – FB Lock Sensor (See [01])
###### Graphical representation:

**_Inputs_** **_Outputs_**

**[CH_Generic_PB ]**

**_1/2_Info_4**


420.InfoOnOff

421.InfoOnOff IOO +


420.SwitchOnOff

421.SwitchOnOff


801.InfoMoveUpDown IMUD TSS + 406.TimedStartStop

SSUD + 801.StopStepUpDown

**_Parameters_** WA + 802.WindAlarm

Adjustable select AJS RA + 803.RainAlarm

420.OnOffAction P1 LO ???.Lock

801.UpDownAction P2 MUD 801.MoveUpDown

421.SwitchAction P3 FO 1020.Force

403.SceneNumber P4 RSC 420.RelativeSetvalueControl

1020.ControlActivationValue P5 SC + 403.SceneControl

384.PBActionHVAC P6 HMU 384.HVACModeUser

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control.

 The Output LO shall allows to disable and enable heating (HVAC Heating Enabled).

NOTE To avoid multiplication of generic PB, this E-Mode Channel is usable even if no info is displayed to the user.

|406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO +<br>oveUpDown IMUD<br>Parameters<br>stable select AJS<br>OnOffAction P1<br>DownAction P2<br>SwitchAction P3<br>eneNumber P4<br>ivationValue P5<br>ActionHVAC P6|CH _Generic _PB<br>1/2 Info 4<br>_ _ _|SOO +|
|---|---|---|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>TSS+|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>SSUD+|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>WA+|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>RA+|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>LO|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|MUD|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|FO|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|RSC|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|SC+|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|HMU|
|<br> <br>406.OnOffIn<br>20.InfoOnOff<br>21.InfoOnOff IOO+ <br>oveUpDown IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>SwitchAction <br>P3<br>eneNumber <br>P4<br>ivationValue<br>P5 <br>ActionHVAC <br>P6|**CH_Generic_PB**<br>**_1/2_Info_4**<br> <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>||


-----

###### Datapoint list:

**FB**

**Sub**

**Index** **Datapoin** **Name** **Main CC** **Additional CCs**

**unit**

**t ID**

1 IOO 406.OnOffIn 1 CC_Switch_OnOff_- I
420.InfoOnOff Status
421.InfoOnOff

1 IMUD 801.InfoMoveUpDown 1 CC_Move UpDown_- I
Status

2 SOO 421.SwitchOnOff 1 CC_Switch_OnOff CC_Logical O L
2 TSS 406.TimedStartStop 1 CC_Timed O
2 SSUD 801.StopStepUpDown 1 CC_StepStop UpDown O
2 WA 802.WindAlarm 1 CC_Wind O
2 RA 803.RainAlarm 1 CC_Rain O
2 LO ???.Lock 1 CC_Heating_Enabled CC_Logical O
3 MUD 801.MoveUpDown 1 CC_Move UpDown CC_Logical O
4 FO 1020.Force 1 CC_Forced O
5 RSC 420.RelativeSetvalueConrol 1 CC_Dimming_Ctrl O
6 SN 403.SceneNumber 1 CC_Scene_Number O
6 HMU 384.HVACModeUser Mode 1 CC_HVAC_Mode O

###### Adjustable table

**DP 1** **DP 2** **DP 3** **DP 4** **DP 5**

**Selection** **Parameter value** **_Input_** **_Output_** **_Output_** **_Output_** **_Output_**

**_1bit_** **_1 bit_** **_1 bit_** **_2 bit_** **_4 bit_**

Default 0 (none) - SOO - - Toggle CH_PB_Toggle IOO SOO - - Dimming Toggle CH_PB_Dimming_Toggle IOO SOO - - RSC
Sunblind Toggle CH_PB_Sunblind_Toggle IMUD SSUD MUD - Dimming info CH_Dimmer_Info IOO SOO - - RSC
PB_Sunblind CH_PB_Sunblind - SSUD MUD - Push Button CH_Push_Button - SOO - - Timed CH_Timed StartStop_Info IOO TSS - - Scene Number CH_PB_Scene_Numbered - - - Forced CH_Forced - - - FO Wind alarm CH_Wind_Sensor - WA - - Rain Alarm CH_Rain_Sensor - RA - - HVAC Mode CH_PB_HVAC_Mode_User - - - - HVAC Control CH_PB_HVAC_Heating_Enable - LO - - d

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 Parameter table:

**Index** **Identifier** **Name** **Recommended default value** **Bit-Offset**

1 AJS Adjustable selection 0: none 0
2 P1 420.OnOffAction Dim up 15
2 P2 801.UpDownAction Up 15
2 P3 421.OnOffAction 11b: OnOff 14
2 P4 403.SceneNumber 0 10
2 P5 1020.ControlActivationValue 0: Ctrl OFF 15
2 P6 384.PBActionHVAC 0: Comfort/Economy 14

|Index|FB<br>Datapoin<br>t ID|Name|Sub<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|IOO|406.OnOffIn<br>420.InfoOnOff<br>421.InfoOnOff|1|CC_Switch_OnOff_-<br>Status||I|
|1|IMUD|801.InfoMoveUpDown|1|CC_Move UpDown_-<br>Status||I|
|2|SOO|421.SwitchOnOff|1|CCSwitchOnOff|CCLogical|O L|
|2|TSS|406.TimedStartStop|1|__<br>CCTimed|_|O|
|2|SSUD|801.StopStepUpDown|1|_<br>CCStepStop UpDown||O|
|2|WA|802.WindAlarm|1|_<br>CCWind||O|
|2|RA|803.RainAlarm|1|_<br>CCRain||O|
|2|LO|???.Lock|1|_<br>CCHeatingEnabled|CCLogical|O|
|3|MUD|801.MoveUpDown|1|__<br>CCMove UpDown|_<br>CCLogical|O|
|4|FO|1020.Force|1|_<br>CCForced|_|O|
|5|RSC|420.RelativeSetvalueConrol|1|_<br>CCDimmingCtrl||O|
|6|SN|403.SceneNumber|1|__<br>CCSceneNumber||O|
|6|HMU|384.HVACModeUser Mode|1|__<br>CCHVACMode||O|

|Selection|Parameter value|DP 1<br>Input<br>1bit|DP 2<br>Output<br>1 bit|DP 3<br>Output<br>1 bit|DP 4<br>Output<br>2 bit|DP 5<br>Output<br>4 bit|DP 6<br>Output<br>8 bit|
|---|---|---|---|---|---|---|---|
|Default|0 (none)|-|SOO|-|-|-|-|
|Toggle|CHPBToggle|IOO|SOO|-|-|-|-|
|Dimming Toggle|__<br>  CHPBDimmingToggle|IOO|SOO|-|-|RSC|-|
|<br>Sunblind Toggle|___<br>  CHPBSunblindToggle|IMUD|SSUD|MUD|-|-|-|
|<br>Dimming info|___<br>CHDimmerInfo|IOO|SOO|-|-|RSC|-|
|PBSunblind|__<br>CHPBSunblind|-|SSUD|MUD|-|-|-|
|_<br>Push Button|__<br>CHPushButton|-|SOO|-|-|-|-|
|Timed|__<br>CHTimed StartStopInfo|IOO|TSS|-|-|-|-|
|Scene Number|_ _<br>CHPBSceneNumbered||-|-|-|-|SC|
|Forced|___<br>CHForced|-|-|-|FO|-|-|
|Wind alarm|_<br>CHWindSensor|-|WA|-|-|-|-|
|Rain Alarm|__<br>CHRainSensor|-|RA|-|-|-|-|
|HVAC Mode|__<br>CHPBHVACModeUser|-|-|-|-|-|HMU|
|HVAC Control|____<br>CH_PB_HVAC_Heating_Enable<br>d|-|LO|-|-|-|-|

|Index|Identifier|Name|Recommended default value|Bit-Offset|
|---|---|---|---|---|
|1|AJS|Adjustable selection|0: none|0|
|2|P1|420.OnOffAction|Dim up|15|
|2|P2|801.UpDownAction|Up|15|
|2|P3|421.OnOffAction|11b: OnOff|14|
|2|P4|403.SceneNumber|0|10|
|2|P5|1020.ControlActivationValue|0: Ctrl OFF|15|
|2|P6|384.PBActionHVAC|0: Comfort/Economy|14|


-----

###### Parameter overview

0 8 15

Adjustable selection = 0

(none)

Adjustable selection = 1

(PB toggle)

Adjustable selection = 2

(PB Dimmer toggle)

Adjustable selection = 3

(PB Shutter toggle)
Adjustable selection = 4  420.OnOffAction
(PB Dimmer info)
Adjustable selection = 5  801.UpDownAction
(PB Shutter)
Adjustable selection = 6  421.OnOffAction
(Push button)

Adjustable selection = 7

(Timed)

Adjustable selection = 8 403.SceneNumber

(Scene Number)
Adjustable selection = 9  1020.ControlActivationValue
(Forced)

Adjustable selection = 10

(Wind Sensor)

Adjustable selection = 11

(Rain Sensor)
Adjustable selection = 12  384.PBActionHVAC
(Hvac Mode User)

Adjustable selection = 13

(HVAC Heating Enabled)

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)|||||
|Adjustable selection = 2 <br>(PB Dimmer toggle)|||||
|Adjustable selection = 3 <br>(PB Shutter toggle)|||||
|Adjustable selection = 4 <br>(PB Dimmer info)|||||
|Adjustable selection = 5 <br>(PB Shutter)|||||
|Adjustable selection = 6 <br>(Push button)|||||
|Adjustable selection = 7 <br>(Timed)|||||
|Adjustable selection = 8 <br>(Scene Number)||403.SceneNumber|403.SceneNumber|403.SceneNumber|
|Adjustable selection = 9 <br>(Forced)|||||
|Adjustable selection = 10 <br>(Wind Sensor)|||||
|Adjustable selection = 11 <br>(Rain Sensor)|||||
|Adjustable selection = 12<br>(Hvac Mode User)|||||
|Adjustable selection = 13 <br>(HVAC Heating Enabled)|||||


-----

#### 2.20 CH_Generic_PB_1/2_2 (Channel Code 0314h)

###### Name: CH_Generic_PB_1/2_2

 ID: 0314h

 Classification: Sensor

 Functional Block(s):

 421 – FB Switching Sensor Basic (See [03])

 801 – FB Sunblind Sensor Basic (See [04])

 406 – FB Timed Sensors (See [01])

 1020 – FB Priority Sensor (See [01])

 403 – FB Scene Sensor (See [01])

 421 – FB Switching Sensor Basic (See [03])

 384 – FB User HVAC Room Setting (UHRS) (See [02])

 420 – FB Dimming Sensor Basic (See [03])

 ??? – FB Lock Sensor
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_PB**


SOO+ 421.SwitchOnOff

MUD+ 801.MoveUpDown

SSUD 801.StepStopUpDown

TSS 406.TimedStartStop

FO+ 1020.Force

SC+ 403.SceneControl

HMU+ 384.HVACModeUser

LO ???.Lock

ASC+ 420.AbsoluteSetvalueControl

**_Parameters_**

Adjustable Select AJS

1020.ControlActivationValue P1

403.SceneNumber P2

420.Absolute Setvalue P3

Action HVAC P4

421.SwitchAction P5

801.UpDownAction P6

###### Description:

 Please refer to the functional specifications of the composing FBs.

|AJS|CH Generic PB<br>_ _<br>1/2 2<br>_ _|SOO+|
|---|---|---|
|<br> <br>AJS|**CH_Generic_PB**<br>**_1/2_2**<br> <br> <br> <br> <br> <br> <br>|MUD+|
|<br> <br>AJS|**CH_Generic_PB**<br>**_1/2_2**<br> <br> <br> <br> <br> <br> <br>|SSUD|
|<br> <br>AJS|**CH_Generic_PB**<br>**_1/2_2**<br> <br> <br> <br> <br> <br> <br>|TSS|
|<br> <br>AJS|**CH_Generic_PB**<br>**_1/2_2**<br> <br> <br> <br> <br> <br> <br>|FO+|
|<br> <br>AJS|**CH_Generic_PB**<br>**_1/2_2**<br> <br> <br> <br> <br> <br> <br>|SC+|
|<br> <br>AJS|**CH_Generic_PB**<br>**_1/2_2**<br> <br> <br> <br> <br> <br> <br>|HMU+|
|<br> <br>AJS|**CH_Generic_PB**<br>**_1/2_2**<br> <br> <br> <br> <br> <br> <br>|LO|
|<br> <br>AJS|**CH_Generic_PB**<br>**_1/2_2**<br> <br> <br> <br> <br> <br> <br>|ASC+|
|<br> <br>AJS|**CH_Generic_PB**<br>**_1/2_2**<br> <br> <br> <br> <br> <br> <br>||
|<br>P1|<br>P1|<br>P1|
|<br>P2|<br>P2|<br>P2|
|<br>P3|<br>P3|<br>P3|
|<br>P4|<br>P4|<br>P4|
|<br>P5|<br>P5|<br>P5|
|<br>P6|<br>P6|<br>P6|
||||


-----

###### Datapoint list:

**FB**

**Sub-** **Additional** **Flags**

**Index** **Datapoint** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v,…)**

**ID**

1 SOO 421.SwitchOnOff 1 CC_Switch_OnOff CC_Logical OL
1 MUD 801.MoveUpDown 1 CC_Move_UpDown CC_Logical O
1 TSS 406.TimedStartStop 1 CC_Timed O
1 LO ???.Lock 1 CC_Heating_Enabled CC_Logical O
2 SSUD 801.StepStopUpDown 1 CC_StepStop_UpDown O
3 FO 1020.Forced 1 CC_Forced O
4 SC 403.SceneControl 1 CC_Scene_Number O
4 HMU 384.HvacModeUser 1 CC_HVAC_Mode O
4 ASC 420Absolute Setvalue Control 1 CC_Dimming_Value O

###### Adjustable table:

**Datapoint** **Datapoint** **Datapoint** **Datapoint**

**1** **2** **3** **4**

**Selection** **Parameter value**

**Output** **Output** **Output** **Output**

**1 bit** **1 bit** **2 bit** **8 bit**

Default 0 (none) SOO - - Switch CH_PushButton SOO - - Sunblind CH_PB_Shutter MUD SSUD - Timed CH_PB_Timed TSS Forced CH_Switch_Forced - - FO Scene Number CH_PB_Scene_Numbered - - - SC
HVAC Mode CH_PB_HVAC_Mode - - - HMU
HVAC Control CH_PB_HVAC_HeatingEnable LO - - d

Dimming value CH_PB_Dimmer_Value - - - ASC

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection.

 Parameter table:

**Index** **Identifier** **Name** **Recommended default value** **Bit-**
**Offset**

1 AJS Adjustable selection 0: none 0
2 P1 1020.ControlActivationValue 0: Ctrl False 15
2 P2 403.Scene number[ a] 0 10
2 P3 420.Absolute Setvalue Control 100 % (format DPT_Scaling) 8
2 P4 PB action hvac 0 =Comfort/Economy 14
2 P5 421.Switch Action 11b: OnOff 14
2 P6 801.Up Down Action 0b11: DownUp 14
a This parameter is only defined in this E-Mode Channel definition. It is not defined in the FB specification in Chapter 7/50/1
“Shutters and Blinds Sensors”.

|Index|FB<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|SOO|421.SwitchOnOff|1|CCSwitchOnOff|CCLogical|OL|
|1|MUD|801.MoveUpDown|1|__<br>CCMoveUpDown|_<br>CCLogical|<br> O|
|1|TSS|406.TimedStartStop|1|__<br>CCTimed|_|<br>O|
|1|LO|???.Lock|1|_<br>CCHeatingEnabled|CCLogical|O|
|2|SSUD|801.StepStopUpDown|1|__<br>CCStepStopUpDown|_|<br>O|
|3|FO|1020.Forced|1|__<br>CCForced||O|
|4|SC|403.SceneControl|1|_<br>CCSceneNumber||O|
|4|HMU|384.HvacModeUser|1|__<br>CCHVACMode||O|
|4|ASC|420Absolute Setvalue Control|1|__<br>CCDimmingValue||O|

|Selection|Parameter value|Datapoint<br>1<br>Output<br>1 bit|Datapoint<br>2<br>Output<br>1 bit|Datapoint<br>3<br>Output<br>2 bit|Datapoint<br>4<br>Output<br>8 bit|
|---|---|---|---|---|---|
|Default|0 (none)|SOO|-|-|-|
|Switch|CHPushButton|SOO|-|-|-|
|Sunblind|_<br>CHPBShutter|MUD|SSUD|-|-|
|Timed|__<br>CHPBTimed|TSS|||-|
|Forced|__<br>CHSwitchForced|-|-|FO|-|
|Scene Number|__<br>  CHPBSceneNumbered|-|-|-|SC|
|<br>HVAC Mode|___<br>CHPBHVACMode|-|-|-|HMU|
|HVAC Control|___<br>CH_PB_HVAC_HeatingEnable<br>d|LO|-|-|-|
|Dimming value|CHPBDimmerValue|-|-|-|ASC|

|Index|Identifier|Name|Recommended default value|Bit-<br>Offset|
|---|---|---|---|---|
|1|AJS|Adjustable selection|0: none|0|
|2|P1|1020.ControlActivationValue|0: Ctrl False|15|
|2|P2|403.Scene number a|0|10|
|2|P3|420.Absolute Setvalue Control|100 % (format DPTScaling)|8|
|2|P4|PB action hvac|_<br>0 =Comfort/Economy|14|
|2|P5|421.Switch Action|11b: OnOff|14|
|2|P6|801.Up Down Action|0b11: DownUp|14|
|a <br>This parameter is only defined in this E-Mode Channel definition. It is not defined in the FB specification in Chapter 7/50/1<br>“Shutters and Blinds Sensors”.|a <br>This parameter is only defined in this E-Mode Channel definition. It is not defined in the FB specification in Chapter 7/50/1<br>“Shutters and Blinds Sensors”.|a <br>This parameter is only defined in this E-Mode Channel definition. It is not defined in the FB specification in Chapter 7/50/1<br>“Shutters and Blinds Sensors”.|a <br>This parameter is only defined in this E-Mode Channel definition. It is not defined in the FB specification in Chapter 7/50/1<br>“Shutters and Blinds Sensors”.|a <br>This parameter is only defined in this E-Mode Channel definition. It is not defined in the FB specification in Chapter 7/50/1<br>“Shutters and Blinds Sensors”.|


-----

###### Parameter overview

0 8 15

Adjustable selection = 0

(none)

Adjustable selection = 1 Switch action

(PushButton)

Adjustable selection = 2 Switch action shutter

(PB Shutter)

Adjustable selection = 3

(PB Timed)

Adjustable selection = 4 Control type

(Switch Forced)

Adjustable selection = 5 Scene Number

(PB Scene Number)

Adjustable selection = 6 PB action hvac

(Hvac Mode User)

Adjustable selection = 7

(Hvac Heating Enabled)

Adjustable selection = 8 Abs. Setvalue Control

(Dimmer Info)

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|Adjustable selection = 1<br>(PushButton)|Switch action|Switch action|||
|Adjustable selection = 2<br>(PB Shutter)|Switch action shutter|Switch action shutter|||
|Adjustable selection = 3 <br>(PB Timed)|||||
|Adjustable selection = 4 <br>(Switch Forced)|Control  type|Control  type|Control  type||
|Adjustable selection = 5 <br>(PB Scene Number)||Scene Number|Scene Number|Scene Number|
|Adjustable selection = 6<br>(Hvac Mode User)|PB action hvac|PB action hvac|||
|Adjustable selection = 7 <br>(Hvac Heating Enabled)|||||
|Adjustable selection = 8 <br>(Dimmer Info)|Abs. Setvalue Control|Abs. Setvalue Control|Abs. Setvalue Control|Abs. Setvalue Control|


-----

#### 2.21 CH_Generic_Switch_Lighting_Complex_Info (Channel Code 0315h)

###### Name: CH_Generic_Switch_Lighting_Complex_Info

 ID: 0315h

 Classification: sensor

 Functional Block(s):

 421 – FB Switching Sensor Basic (See [03])

 403 – FB Scene Sensor (See [01])

 1020 – FB Priority Sensor (See [01])

 406 – FB Timed Sensor (See [01])

 420 - FB Dimming Sensor Basic (See [03])
###### Graphical representation:

**_Inputs_** **_Outputs_**

**CH_Generic_Switch_-**

**Lighting_-**
**Complex_Info**

421.InfoOnOff IOO SOO 421.SwitchOnOff

TSS 406.TimedStartStop

**_Parameters_** FO 1020.Force

Adjustable Select AJS ASC 420.AbsoluteSetvalueControl

421.OnOffAction P1 SN 403.SceneNumber

405.ControlActivationValu P2

e

420.AbsoluteSetvalue1 P3

420.AbsoluteSetvalue 2 P4

Scene Number 1 P5

Scene Number 2 P6

###### Description:

 Please refer to the functional specification of the FBs that compose this E–Mode E-Mode Channel.

 To avoid multiplication of generic PB, this E-Mode Channel is usable even if no info is displayed to the user.

 Datapoint list:

**FB**

**Sub** **Additional** **Flags**

**Index** **Datapoin** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v,…)**

**t ID**

1 421.IOO InfoOnOff 1 CC_Switch_OnOff_Status I
2 421.SOO SwitchOnOff 1 CC_Switch_OnOff CC_Logical O L
3 406.TSS TimedStartStop 1 CC_Timed StartStop O
4 1020.FO Force 1 CC_Forced O
5 421.ASC AbsoluteSetvalueControl 1 CC_Dimming_Value O
6 SN Scene number 1 CC_Scene_Numbered O

|1.InfoOnOff IOO<br>Parameters<br>table Select AJS<br>OnOffAction P1<br>tivationValu P2<br>e<br>teSetvalue1 P3<br>eSetvalue 2 P4<br>e Number 1 P5<br>e Number 2 P6|CH Generic Switch -<br>_ _ _<br>Lighting -<br>_<br>Complex Info<br>_|SOO|
|---|---|---|
|<br>1.InfoOnOff <br>IOO<br>**_Parameters_** <br>table Select <br>AJS<br>OnOffAction <br>P1<br>tivationValu<br>e <br>P2<br>teSetvalue1 <br>P3<br>eSetvalue 2 <br>P4<br>e Number 1 <br>P5<br>e Number 2 <br>P6|**CH_Generic_Switch_-**<br>**Lighting_-**<br>**Complex_Info**|<br>TSS|
|<br>1.InfoOnOff <br>IOO<br>**_Parameters_** <br>table Select <br>AJS<br>OnOffAction <br>P1<br>tivationValu<br>e <br>P2<br>teSetvalue1 <br>P3<br>eSetvalue 2 <br>P4<br>e Number 1 <br>P5<br>e Number 2 <br>P6|**CH_Generic_Switch_-**<br>**Lighting_-**<br>**Complex_Info**|FO|
|<br>1.InfoOnOff <br>IOO<br>**_Parameters_** <br>table Select <br>AJS<br>OnOffAction <br>P1<br>tivationValu<br>e <br>P2<br>teSetvalue1 <br>P3<br>eSetvalue 2 <br>P4<br>e Number 1 <br>P5<br>e Number 2 <br>P6|**CH_Generic_Switch_-**<br>**Lighting_-**<br>**Complex_Info**|<br>ASC|
|<br>1.InfoOnOff <br>IOO<br>**_Parameters_** <br>table Select <br>AJS<br>OnOffAction <br>P1<br>tivationValu<br>e <br>P2<br>teSetvalue1 <br>P3<br>eSetvalue 2 <br>P4<br>e Number 1 <br>P5<br>e Number 2 <br>P6|**CH_Generic_Switch_-**<br>**Lighting_-**<br>**Complex_Info**|<br>SN|
|<br>1.InfoOnOff <br>IOO<br>**_Parameters_** <br>table Select <br>AJS<br>OnOffAction <br>P1<br>tivationValu<br>e <br>P2<br>teSetvalue1 <br>P3<br>eSetvalue 2 <br>P4<br>e Number 1 <br>P5<br>e Number 2 <br>P6|**CH_Generic_Switch_-**<br>**Lighting_-**<br>**Complex_Info**||

|Index|FB<br>Datapoin<br>t ID|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|421.IOO|InfoOnOff|1|CCSwitchOnOffStatus||I|
|2|421.SOO|SwitchOnOff|1|___<br>CCSwitchOnOff|<br>CCLogical|O L|
|3|406.TSS|TimedStartStop|1|__<br>CCTimed StartStop|_|<br>O|
|4|1020.FO|Force|1|_<br>CCForced||O|
|5|421.ASC|AbsoluteSetvalueControl|1|_<br>CCDimmingValue||O|
|6|SN|Scene number|1|__<br>CCSceneNumbered||O|


-----

###### Adjustable table:

**Selection**

Default
Switch
Toggle
Timed
Forced
Dimming Value
Switch Dimming
Value

Scene Numbered
Switch Scene
Numbered

###### Parameter table:

|Selection|Parameter value|Datapoint 1|I 1 bi Datapoint 2|O Datapoint 3|O Datapoint 4|O Datapoint 5|O Datapoint 6|
|---|---|---|---|---|---|---|---|
|Default|0 (none)|-|SOO|-|-|-|-|
|<br>Switch|<br>CHPushButtonInfo|<br>IOO|<br>SOO|<br>-|<br>-|<br>-|<br>-|
|<br>Toggle|___<br>CHPBToggle|<br>IOO|<br>SOO|<br>-|<br>-|<br>-|<br>-|
|<br>Timed|__<br>CHTimed StartStopInfo|<br>IOO||<br>TSS|<br>-|<br>-|<br>-|
|<br>Forced|_ _<br>CHForcedInfo|<br>IOO|-|<br>-|<br>FO|<br>-|<br>-|
|<br>Dimming Value|__<br>CHPBDimmingValueInfo|<br>IOO|<br>-|<br>-|<br>-|<br>ASC|<br>-|
|<br>Switch Dimming<br>Value|____<br>CH_Switch_Dimming_Value_Info|<br>IOO|<br>-|<br>-|<br>-|<br>ASC|<br>-|
|<br>Scene Numbered|CHPBSceneNumbered|-|-|-|-|-|SN|
|<br>Switch Scene<br>Numbered|___<br>CH_Switch_Scene_Numbered|<br>-|<br>-|<br>-|<br>-|<br>-|<br>SN|


1 AJS Adjustable selection none (=0) 0
2 P1 OnOffAction 11b : OnOff 14
2 P2 Control Activation Value 0 : ctrl False 15
2 P3 Absolute Setvalue 1 FFh : 100 % 8
3 P4 Absolute Setvalue 2 00h : 0 % 16
2 P5 Scene Number 1 0 : Scene 1 10
3 P6 Scene Number 2 0 : Scene 1 18

###### Parameter overview

 0 8 15 16 AJS = 0 (none) AJS = 1 OnOffAction (P1) (Switch) AJS = 2 (Toggle) AJS = 3 (Timed) AJS = 4 ControlActivationValue (P2)
 (Forced) AJS = 5 AbsoluteSetvalue 1 (P3) (Dimming Value) AJS = 6 AbsoluteSetvalue 1 (P3) AbsoluteSetvalue 2 (P4) (Switch Dimming Value) AJS = 7 Scene Number 1 (P5)
 (Scene Numbered) AJS = 8 Scene Number 1 Scene Number 2 (P5) (P6)
 (Switch Scene Numbered)

|Index|Identifier|Name|Recommended default value|Bit Offset|
|---|---|---|---|---|
|1|AJS|Adjustable selection|none (=0)|0|
|2|P1|OnOffAction|11b : OnOff|14|
|2|P2|Control Activation Value|0 : ctrl False|15|
|2|P3|Absolute Setvalue 1|FFh : 100 %|8|
|3|P4|Absolute Setvalue 2|00h : 0 %|16|
|2|P5|Scene Number 1|0 : Scene 1|10|
|3|P6|Scene Number 2|0 : Scene 1|18|

|0|8|15|16|23|
|---|---|---|---|---|
|AJS = 0<br>(none)|||||
|AJS = 1<br>(Switch)|**OnOffAction (P1)**|**OnOffAction (P1)**|||
|AJS = 2<br>(Toggle)|||||
|AJS = 3<br>(Timed)|||||
|AJS = 4<br>(Forced)|**ControlActivationValue **<br>**(P2)**|**ControlActivationValue **<br>**(P2)**|||
|AJS = 5<br>(Dimming Value)|**AbsoluteSetvalue 1 (P3)**|**AbsoluteSetvalue 1 (P3)**|||
|AJS = 6<br>(Switch Dimming Value)|**AbsoluteSetvalue 1 (P3)**|**AbsoluteSetvalue 1 (P3)**|**AbsoluteSetvalue 2 (P4)**|**AbsoluteSetvalue 2 (P4)**|
|AJS = 7<br>(Scene Numbered)|**Scene Number 1**<br>**(P5)**|**Scene Number 1**<br>**(P5)**|||
|AJS = 8<br>(Switch Scene Numbered)|**Scene Number 1**<br>**(P5)**|**Scene Number 1**<br>**(P5)**|**Scene Number 2**<br>**(P6)**|**Scene Number 2**<br>**(P6)**|


-----

#### 2.22 CH_Generic_PB_½_Info_5 (Channel Code 0316h)

###### Name: CH_Generic_PB_½_Info_5

 ID: 0316h

 Classification: sensor

 Functional Block(s):

 421 - FB Switching Sensor Basic (See [03])

 420 - FB Dimming Sensor Basic (See [03])

 801 - Sunblind Sensor Basic (See [04])

 403 - FB Scene Sensor (See [01])

 406 - FB Timed Sensor (See [01])

 1020 - FB Priority Sensor (See [01])

 802 - FB Wind Sensor (See [05])

 803 - FB Rain Sensor (See [05])

 384 - User HVAC Room Settings (UHRS) (See [02])

 421 - FB Switching Sensor Basic (See [03])
###### Graphical representation:

**_Inputs_** **_Outputs_**


**CH_Generic_PB-**


421.InfoOnOff IOO+ SOO 421.SwitchOnOff

801.InfoMoveUpDown IMUD TSS 406.TimedStartStop

SSUD 801.StopStepUpDown

**_Parameters_** WA 802.WindAlarm

Adjustable select AJS RA 803.Rain Alarm

420.OnOffAction P1 HHE 421.HVACHeatingEnabled

801.UpDownAction P2 STOP 801.Stop

421.OnOffAction P3 MUD 801.MoveUpDown

403.SceneNumber P4 FO 1020.Force

1020.ControlActivationValue P5 RSC 420.RelativeSetvalueControl

PB Action Hvac Extended P6 SN 403.SceneNumber

PB action UpDown P7 HMU 384.HVACModeUser

###### Description:

 This E-Mode Channel groups functionality from the given Functional Blocks to a generic switch with ability for switching, numbered scenes, timed, switch forced, dimming and shutter control.

NOTE To avoid multiplication of generic PB, this E-Mode Channel is usable even if no info is displayed to the user.

|21.InfoOnOff IOO+<br>oveUpDown IMUD<br>Parameters<br>stable select AJS<br>OnOffAction P1<br>DownAction P2<br>OnOffAction P3<br>eneNumber P4<br>ivationValue P5<br>ac Extended P6<br>ion UpDown P7|CH Generic PB-<br>_ _<br>1/2 Info 5<br>_ _ _|SOO|
|---|---|---|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>TSS|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>SSUD|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>WA|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>RA|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>HHE|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|<br>STOP|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|MUD|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|FO|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|RSC|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>|SN<br>HMU|
|<br>21.InfoOnOff <br>IOO+ <br>oveUpDown <br>IMUD<br>**_Parameters_** <br>stable select <br>AJS<br>OnOffAction <br>P1<br>DownAction <br>P2<br>OnOffAction <br>P3<br>eneNumber <br>P4<br>ivationValue <br>P5<br>  ac Extended<br>P6 <br> ion UpDown <br>P7|**CH_Generic_PB-**<br>**_1/2_Info_5** <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br>  <br> <br>||


-----

###### Datapoint list:

**FB**

**Sub-** **Flags**

**Index** **Datapoint** **Name** **Main CC** **Additional CCs**

**unit** **(i/o,x,v,…)**

**ID**

1 421.IOO Info OnOff 1 CC_Switch_OnOff_Status I
1 801.IMUD Info MUD 1 CC_Move UpDown_Status I
2 421.SOO OnOff 1 CC_Switch_OnOff CC_Logical O L
2 406.TSS Timed StartStop 1 CC_Timed O
2 801.SSUD StepStop UpDown 1 CC_StepStop UpDown O
2 802.WA Wind Alarm 1 CC_Wind O
2 803.RA Rain Alarm 1 CC_Rain O
2 421.HHE Hvac Heating 1 CC_Heating_Enabled CC_Logical O
Enabled

2 801.STOP Stop 1 CC_Stop CC_StepStop- O
_UpDown

3 801.MUD Move UpDown 1 CC_Move UpDown CC_Logical O
4 1020.FO Forced 1 CC_Forced O
5 420.RSC Relative Setvalue 1 CC_Dimming_Ctrl O
Control

6 403.SN Scene Number 1 CC_Scene_Number O
6 384.HMU Hvac Mode User 1 CC_Hvac_Mode O

###### Adjustable table:

**Selection** **Parameter value**

Default 0 (none) - SOO - - - Toggle CH_PB_Toggle IOO SOO - - - Dimming Toggle CH_PB_Dimming_Toggle IOO SOO - - RSC Sunblind Toggle CH_PB_Sunblind_Toggle IMUD SSUD MUD - - Dimming Info CH_Dimmer_Info IOO SOO - - RSC PB_Sunblind CH_PB_Sunblind - SSUD MUD - - Push Button CH_Push_Button IOO SOO - - - Timed CH_Timed StartStop_Info IOO TSS - - - Scene Number CH_PB_Scene_Numbered - - - - SN
Forced CH_Forced IOO - - FO - Wind Sensor CH_Wind_Sensor - WA - - - Rain Alarm CH_Rain_Sensor - RA - - - HVAC Mode CH_PB_HVAC_Mode_1 - - - - - HMU
HVAC Control CH_PB_HVAC_Heating_Enabled - HHE - - - Sunblind CH_PB_Shutter_1 STOP MUD

###### The corresponding parameter to this adjustable table is parameter index 1 Adjustable selection

|Index|FB<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|421.IOO|Info OnOff|1|CCSwitchOnOffStatus||I|
|1|801.IMUD|Info MUD|1|___<br>CCMove UpDownStatus||I|
|2|421.SOO|OnOff|1|_ _<br>CCSwitchOnOff|<br>CCLogical|O L|
|2|406.TSS|Timed StartStop|1|__<br>CCTimed|_|O|
|2|801.SSUD|StepStop UpDown|1|_<br>CCStepStop UpDown||O|
|2|802.WA|Wind Alarm|1|_<br>CCWind||O|
|2|803.RA|Rain Alarm|1|_<br>CCRain||O|
|2|421.HHE|Hvac Heating<br>Enabled|1|_<br>CC_Heating_Enabled|CC_Logical|O|
|2|801.STOP|Stop|1|CC_Stop|CC_StepStop-<br>UpDown|O|
|3|801.MUD|Move UpDown|1|CCMove UpDown|_<br>CCLogical|O|
|4|1020.FO|Forced|1|_<br>CCForced|_|O|
|5|420.RSC|Relative Setvalue<br>Control|1|_<br>CC_Dimming_Ctrl||O|
|6|403.SN|Scene Number|1|CCSceneNumber||O|
|6|384.HMU|Hvac Mode User|1|__<br>CCHvacMode||O|

|Selection|Parameter value|Datapoint 1|Datapoint 2|Datapoint 3|Datapoint 4|Datapoint 5|Datapoint 6|
|---|---|---|---|---|---|---|---|
|Default|0 (none)|-|SOO|-|-|-|-|
|Toggle|CHPBToggle|IOO|SOO|-|-|-|-|
|Dimming Toggle|__<br>CHPBDimmingToggle|IOO|SOO|-|-|RSC|-|
|Sunblind Toggle|___<br>CHPBSunblindToggle|IMUD|SSUD|MUD|-|-|-|
|Dimming Info|___<br>CHDimmerInfo|IOO|SOO|-|-|RSC|-|
|PBSunblind|__<br>CHPBSunblind|-|SSUD|MUD|-|-|-|
|_<br>Push Button|__<br>CHPushButton|IOO|SOO|-|-|-|-|
|Timed|__<br>CHTimed StartStopInfo|IOO|TSS|-|-|-|-|
|Scene Number|_ _<br>CHPBSceneNumbered||-|-|-|-|SN|
|Forced|___<br>CHForced|IOO|-|-|FO|-|-|
|Wind Sensor|_<br>CHWindSensor|-|WA|-|-|-|-|
|Rain Alarm|__<br>CHRainSensor|-|RA|-|-|-|-|
|HVAC Mode|__<br>CHPBHVACMode1|-|-|-|-|-|HMU|
|HVAC Control|____<br>CHPBHVACHeatingEnabled|-|HHE|-|-|-|-|
|Sunblind|____<br>CHPBShutter1||STOP|MUD||||


-----

###### Parameter table

**Index Identifier** **Name** **Recommended default**

**value**

1 AJS Adjustable selection None (=0) 0
2 P1 420.OnOffAction Dim up 15
2 P2 801.UpDownAction Up 15
2 P3 421.OnOffAction 0b11 : OnOff 14
2 P4 403.SceneNumber 0 10
2 P5 1020.ControlActivationValue 0: Ctrl OFF 15
2 P6 PB action hvac 0 =Comfort/Economy 13
2 P7 PB action UpDown 0b11 : DownUp 14

###### Parameter overview

0 8 15
Adjustable selection = 0
(none)

Adjustable selection = 1
(PB toggle)

Adjustable selection = 2
(PB Dimmer toggle)

Adjustable selection = 3
(PB Shutter toggle)
Adjustable selection = 4 420.OnOffAction
(PB Dimmer info)
Adjustable selection = 5 801.UpDownAction
(PB Shutter)
Adjustable selection = 6 421.OnOffAction
(Push button)

Adjustable selection = 7
(Timed)
Adjustable selection = 8 403.SceneNumber
(Scene Number)
Adjustable selection = 9 1020.ControlActivationValue
(Forced)

Adjustable selection = 10
(Wind Sensor)

Adjustable selection = 11
(Rain Sensor)
Adjustable selection = 12 PBActionHVAC Extended
(HVAC Mode Extended)

Adjustable selection = 13
(HVAC Heating Enabled)
Adjustable selection = 14 PBActionUpDown
(PB Shutter 1)

|Index|Identifier|Name|Recommended default<br>value|Bit-Offset|
|---|---|---|---|---|
|1|AJS|Adjustable selection|None  (=0)|0|
|2|P1|420.OnOffAction|Dim up|15|
|2|P2|801.UpDownAction|Up|15|
|2|P3|421.OnOffAction|0b11 : OnOff|14|
|2|P4|403.SceneNumber|0|10|
|2|P5|1020.ControlActivationValue|0: Ctrl OFF|15|
|2|P6|PB action hvac|0 =Comfort/Economy|13|
|2|P7|PB action UpDown|0b11 : DownUp|14|

|Adjustable selection = 0<br>(none)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|Adjustable selection = 1 <br>(PB toggle)||||||
|Adjustable selection = 2 <br>(PB Dimmer toggle)||||||
|Adjustable selection = 3 <br>(PB Shutter toggle)||||||
|Adjustable selection = 4 <br>(PB Dimmer info)||||||
|Adjustable selection = 5 <br>(PB Shutter)||||||
|Adjustable selection = 6 <br>(Push button)||||||
|Adjustable selection = 7 <br>(Timed)||||||
|Adjustable selection = 8 <br>(Scene Number)||||||
|Adjustable selection = 9 <br>(Forced)||||||
|Adjustable selection = 10 <br>(Wind Sensor)||||||
|Adjustable selection = 11 <br>(Rain Sensor)||||||
|Adjustable selection = 12<br>(HVAC Mode Extended)||||||
|Adjustable selection = 12<br>(HVAC Mode Extended)||||||
|Adjustable selection = 13 <br>(HVAC Heating Enabled)||||||
|Adjustable selection = 14 <br>(PB Shutter  1)||||||


-----

