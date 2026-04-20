# Application Descriptions

## Shutters and Blinds

 Shutters and Blinds Channels

Summary:

This document provides the specification of the E-Mode channels in the
application domain Shutters and Blinds.

Version 01.00.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

v01 2007.09.27 Document creation.

               - **S12 “Channel Codes” integrated.**
2007.10.03        - **AN050 “AN to Supplement 12” integrated.**
2007.10.19        - **AN087 “New Channels 2005.05” integrated.**
v1.0 2009.06.26 Update in view of publication in the KNX Specifications v2.0.
01.00.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

[01] Chapter 7/50/1 “Shutters and Blinds Sensors”

[02] Chapter 7/50/2 “Shutters and Blinds Actuators”

Filename: 07_50_11 Shutters and Blinds Channels v01.00.01 AS.docx
Version: 01.00.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 31

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 2 f 31

|Version|Date|Modifications|
|---|---|---|
|v01|2007.09.27|Document creation.<br>• <br>**S12 “Channel Codes”** integrated.|
|v01|2007.10.03|• <br>**AN050 “ANto Supplement 12”** integrated.|
|v01|2007.10.19|<br>• <br>**AN087 “New Channels 2005.05”** integrated.|
|v1.0|2009.06.26|<br>Update in view of publication inthe KNXSpecifications v2.0.|
|01.00.01|2013.10.29|<br>Editorial updates for thepublication of KNX Specifications 2.1.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Overview of the application ............................................................................................ 4 1.2 Support of scenes ............................................................................................................ 4

 2 Channels Shutters and Blinds ............................................................................................... 5 2.1 CH_Switch_Shutter (Channel Code 0015h) .................................................................. 5 2.2 CH_Switch_Blind (Channel Code 0016h) ..................................................................... 6 2.3 CH_PB_Shutter (Channel Code 0017h) ......................................................................... 7 2.4 CH_PB_Blind (Channel Code 0018h) ........................................................................... 8 2.5 CH_PB_Shutter_Toggle (Channel Code 0019h) ............................................................ 9 2.6 CH_PB_Blind_Toggle (Channel Code 001Ah) ........................................................... 10 2.7 CH_Wind_Alarm_Sensor (Channel Code 001Bh) ....................................................... 11 2.8 CH_Rain_Alarm_Sensor (Channel Code 001Ch) ........................................................ 11 2.9 CH_Frost_Alarm_Sensor (Channel Code 001Dh) ....................................................... 12 2.10 CH_PB_Shutter_1 (Channel Code 002Fh) ................................................................... 13 2.11 CH_Shutter_Actuator_Basic_Wind (Channel Code 0108h) ........................................ 14 2.12 CH_ShutterBlinds_Actuator_Basic_Wind (Channel Code 0109h) .............................. 15 2.13 CH_Shutter_Actuator_Basic_Rain (Channel Code 010Ah) ........................................ 16 2.14 CH_ShutterBlinds_Actuator_Basic_Rain (Channel Code 010Bh) .............................. 17 2.15 CH_ShutterBlinds_Actuator_Basic (Channel Code 010Ch) ........................................ 18 2.16 CH_ShutterBlinds_Actuator_Scene (Channel Code 010Dh) ....................................... 19 2.17 CH_ShutterBlinds_Actuator_Scene_1 (Channel Code 0480h) .................................... 21

 3 Examples ............................................................................................................................... 23

 4 Functional Blocks ................................................................................................................. 24 4.1 Usage requirements ...................................................................................................... 24 4.2 Functional Block FB Wind Sensor (FB WS) ............................................................... 24 4.2.1 Definitions......................................................................................................... 24 4.2.2 FB Description .................................................................................................. 24 4.3 Functional Block FB Rain Sensor (FB RS) .................................................................. 27 4.3.1 Definitions......................................................................................................... 27 4.3.2 Functional specification .................................................................................... 27 4.4 Functional Block FB Frost Sensor (FB FS) .................................................................. 29 4.4.1 Definitions......................................................................................................... 29 4.4.2 Functional specification .................................................................................... 29

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 3 f 31


-----

### 1 Introduction

#### 1.1 Overview of the application

**Wind sensor**

**DoublePush**
**Button or** **ACTUATOR**
**switch** **SHUTTER**

**ACTUATOR**

**Rain sensor** **BLINDS**

**Figure 1 – The application “Shutters and Blinds”**

#### 1.2 Support of scenes
For Scene Number Datapoints, it is mandatory to deal at least with numbers from 1 to 8 (coded 0 to 7). It
is allowed to deal with higher values. This shall thus be as specified in Table 1.

**Table 1 – Scene numbering and coding in E-Mode Channels**

**Scene number** **Scene letter** **Coding**

1 A xx000000b

2 B xx000001b

3 C xx000010b

4 D xx000011b

5 E xx000100b

6 F xx000101b

7 G xx000110b

8 H xx000111b

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 4 f 31

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


-----

### 2 Channels Shutters and Blinds

#### 2.1 CH_Switch_Shutter (Channel Code 0015h)

- **Name:** CH_Switch_Shutter

- **ID:** 0015h

- **Classification:** sensor

- **Functional Block:**

    - 801 – FB Sunblind Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Switch_Shutter**


MUD SSB.Move UpDown

**_Parameters_** STOP SSB.Stop

- **Description:** **See Functional Block FB_SW_shutter/blind**
The parameter “Sel_shutter/blind“ is fixed to 0:shutter.

- **Datapoint list**

Sub- Flags
Index FB / DP_Name Name Main CC Additional CCs

unit (i/o,x,v,…)

1 801 / Move Move UpDown 1 CC_Move UpDown CC_Logical O L
UpDown

2 801 / Stop Stop 1 CC_Stop CC_StepStop_UpDown O

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 5 f 31

|CH Switch Shutter<br>_ _|MUD|
|---|---|
|**CH_Switch_Shutter**|STOP|
|**CH_Switch_Shutter**||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|801 / Move<br>UpDown|Move UpDown|1|CC_Move UpDown|CC_Logical|O L|
|2|801 / Stop|Stop|1|CC_Stop|CC_StepStop_UpDown|O|


-----

#### 2.2 CH_Switch_Blind (Channel Code 0016h)

- **Name:** CH_Switch_Blind

- **ID:** 0016h

- **Classification:** sensor

- **Functional Block:**

    - 801 – FB Sunblind Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Switch_Blind**


MUD SSB.Move UpDown

SSUD SSB.StepStop UpDown

**_Parameters_**

- **Description:**

See FB Sunblind Sensor Basic (SSB).

Parameter sel_shutter/blind is fixed to 1 (blind)

- **Datapoint list**

Sub- Additional Flags
Index FB / DP_Name Name Main CC

unit CCs (i/o,x,v,…)

1 801 / Move UpDown Move UpDown 1 CC_Move UpDown CC_Logical O L

2 801 / StopStep StopStep 1 CC_StepStop_UpDown CC_Stop O
UpDown UpDown

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 6 f 31

|CH Switch Blind<br>_ _|MUD|
|---|---|
|**CH_Switch_Blind**|SSUD|
|**CH_Switch_Blind**||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|801 / Move UpDown|Move UpDown|1|CC_Move UpDown|CC_Logical|O L|
|2|801 / StopStep<br>UpDown|StopStep<br>UpDown|1|<br>CC_StepStop_UpDown|<br> CC_Stop|<br>O|


-----

#### 2.3 CH_PB_Shutter (Channel Code 0017h)

- **Name:** CH_PB_Shutter

- **ID:** 0017h

- **Classification:** sensor

- **Functional Block:**

    - 801 – FB Sunblind Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_Shutter**


MUD SSB.Move UpDown

**_Parameters_** STOP SSB.Stop

PB_Action P1

- **Description:**

See FB Sunblind Sensor Basic.

The parameter ”Sel_shutter/blind” is fixed to 0:shutter

The parameter ”Device mode“ is fixed to 0:mormalmode (1/2 mode).

- **Datapoint list:**

Sub- Flags
Index FB / DP_Name Name Main CC Additional CCs

unit (i/o,x,v,…)

1 801 / MoveUpDown Move UpDown 1 CC_Move_UpDown CC_Logical O L

2 801 / Stop Stop 1 CC_Stop CC_StepStop O
UpDown

- **Parameter list:**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 PB action PART_UpDown_Action Up 7

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 7 f 31

|P1|CH PB Shutter<br>_ _|MUD|
|---|---|---|
|P1|**CH_PB_Shutter**|STOP|
|P1|**CH_PB_Shutter**||
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|801 / MoveUpDown|Move UpDown|1|CC_Move_UpDown|CC_Logical|O L|
|2|801 / Stop|Stop|1|<br>CC_Stop|<br>CC_StepStop<br>UpDown|O|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|PB action|PART_UpDown_Action|Up|7|


-----

#### 2.4 CH_PB_Blind (Channel Code 0018h)

- **Name:** CH_PB_Blind

- **ID:** 0018h

- **Classification:** sensor

- **Functional Block:**

    - 801 – FB Sunblind Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_Blind**


MUD SSB.Move UpDown

**_Parameters_** SSUD SSB.StepStop UpDown

PB_Action P1

- **Description:**

See FB Sunblind Sensor Basic (SSB)

The parameter "Sel_shutter/blind" is fixed to 1:blind

The parameter ”Device mode“ is fixed to 0:normal mode (1/2 mode).

- **Datapoint list:**

Sub- Flags
Index FB / DP_Name Name Main CC Additional CCs

unit (i/o,x,v,…)

1 801 / Move UpDown Move UpDown 1 CC_Move_UpDown CC_Logical O L

2 801 / StopStep UpDown StopStep UpDown 1 CC_StepStop_UpDown CC_Stop O

- **Parameter list:**

Bit
Index Identifier Name Type Recommended default value
Offset

1 P1 PB action PART_UpDown_Action Up 7

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 8 f 31

|P1|CH PB Blind<br>_ _|MUD|
|---|---|---|
|P1|**CH_PB_Blind**|SSUD|
|P1|**CH_PB_Blind**||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|801 / Move UpDown|Move UpDown|1|CC_Move_UpDown|CC_Logical|O L|
|2|801 / StopStep UpDown|StopStep UpDown|1|<br>CC_StepStop_UpDown|<br> CC_Stop|<br>O|

|Index|Identifier|Name|Type|Recommended default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|PB action|PART_UpDown_Action|Up|7|


-----

#### 2.5 CH_PB_Shutter_Toggle (Channel Code 0019h)

- **Name:** CH_PB_Shutter_Toggle

- **ID:** 0019h

- **Classification:** sensor

- **Functional Block:**

    - 801 – FB Sunblind Sensor Basic (SSB)s

- **Graphical representation:**

**_Inputs_** **_Outputs_**

SSB.Info Move Up Down IMUD **CH_PB_Shutter_Toggle**

MUD SSB.Move Up Down

**_Parameters_** STOP SSB.Dedicated Stop

- **Description: See Functional Block FB Sunblind Sensor Basic**

The parameter ”Sel_shutter/blind is fixed to 0:shutter.The parameter ”Device mode“ is fixed to
1:togglemode, the parameter ”PB Action“ doesn't exist.

- **Datapoint list:**

Sub- Flags
Index FB / DP_Name Name Main CC Additional CCs

unit (i/o,x,v,…)

1 801 / Info Move Info MoveUpDown 1 CC_Move_UpDown I
UpDown _Status

2 801 / Move UpDown Move UpDown 1 CC_Move_UpDown CC_Logical O L

3 801 / Stop Stop 1 CC_Stop CC_StepStop O
UpDown

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 9 f 31

|IMUD|CH PB Shutter Toggle<br>_ _ _|MUD|
|---|---|---|
||||
|||STOP|
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|801 / Info Move<br>UpDown|Info MoveUpDown|1|CC_Move_UpDown<br>_Status||I|
|2|801 / Move UpDown|Move UpDown|1|<br>CC_Move_UpDown|CC_Logical|O L|
|3|801 / Stop|Stop|1|<br>CC_Stop|<br>CC_StepStop<br>UpDown|O|


-----

#### 2.6 CH_PB_Blind_Toggle (Channel Code 001Ah)

- **Name:** CH_PB_Blind_Toggle

- **ID:** 001Ah

- **Classification:** sensor

- **Functional Block:**

    - 801 – FB Sunblind Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

SSB.Info Move Up Down IMUD **CH_PB_Blind_Toggle**

MUD SSB.Move Up Down

**_Parameters_** SSUD SSB.StepStop UpDown

- **Description:**

See FB Sunblind Sensor Basic (SSB).

The parameter ”Sel_shutter/blind is fixed to 1:blind

The parameter ”Device mode“ is fixed to 1:togglemode, the parameter ”PB Action“ doesn't
exist.

- **Datapoint list:**

Sub- Additional Flags
Index FB / DP_Name Name Main CC

Unit CCs (i/o,x,v,…)

1 801 / Info Info 1 CC_Move_UpDown_- I
MoveUpDown MoveUpDown Status

2 801 / Move UpDown Move UpDown 1 CC_Move_UpDown CC_Logical O L

3 801 / StopStep UpDown StopStep 1 CC_StepStop_UpDown CC_Stop O

UpDown

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 10 f 31

|IMUD|CH PB Blind Toggle<br>_ _ _|MUD|
|---|---|---|
||||
|||SSUD|
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>Unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|801 / Info<br>MoveUpDown|Info<br>MoveUpDown|1|CC_Move_UpDown_-<br>Status||I|
|2|801 / Move UpDown|Move UpDown|1|CC_Move_UpDown|CC_Logical|O L|
|3|801 / StopStep UpDown|StopStep<br>UpDown|1|<br>CC_StepStop_UpDown|<br> CC_Stop|<br>O|


-----

#### 2.7 CH_Wind_Alarm_Sensor (Channel Code 001Bh)

- **Name:** CH_Wind_Alarm_Sensor

- **ID:** 001Bh

- **Classification:** sensor

- **Functional Block:**

    - 802 - FB Wind Sensor (WS) (See clause 4.2 in this document.)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Wind_Alarm_Sensor**


WA WS.Wind Alarm

**_Parameters_**

- **Description:**

See FB Wind Sensor.

The cycle time parameter is fixed to 10 minutes.

- **Datapoint list:**

Index FB / DP_Name Name Subunit Main CC Additional CCs

1 802 / Wind Alarm Wind detected 1 CC_Wind CC_Logical O L

#### 2.8 CH_Rain_Alarm_Sensor (Channel Code 001Ch)

- **Name:** CH_Rain_Alarm_Sensor

- **ID:** 001Ch

- **Classification:** sensor

- **Functional Block:**

    - 803 - FB Rain Sensor (RS) (See clause 4.3 in this document.)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

|CH Wind Alarm Sensor<br>_ _ _|WA|
|---|---|
|**CH_Wind_Alarm_Sensor**||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|802 / Wind Alarm|Wind detected|1|CC_Wind|CC_Logical|O L|


**CH_Rain_Alarm_Sensor**


RA RS.Rain Alarm

**_Parameters_**

- **Description:** **See Functional Block FB Rain Sensor**
The cycle Time parameter is fixed to 10 minutes.

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 11 f 31

|CH Rain Alarm Sensor<br>_ _ _|RA|
|---|---|
|**CH_Rain_Alarm_Sensor**||


-----

- **Datapoint list:**

Index FB / DP_Name Name Subunit Main CC Additional CCs

1 803 / Rain Alarm Rain Alarm 1 CC_Rain CC_Logical O L

#### 2.9 CH_Frost_Alarm_Sensor (Channel Code 001Dh)

- **Name:** CH_Frost_Alarm_Sensor

- **ID:** 001Dh

- **Classification:** sensor

- **Functional Block:**

    - 804 - FB Frost Sensor (FS) (See clause 4.4 in this document.)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|803 / Rain Alarm|Rain Alarm|1|CC_Rain|CC_Logical|O L|


**CH_Frost_Alarm_Sensor**


FA FS.Frost Alarm

**_Parameters_**

 - **Description:** **See Functional Block FB_Frost Alarm_Sensor**
The cycle time parameter is fixed to 10 minutes.

 - **Datapoint list:**

Sub- Flags
Index FB / DP_Name Name Main CC Additional CCs

unit (i/o,x,v,…)

1 804 / Frost Alarm Frost Alarm 1 CC_Frost CC_Logical O L

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 12 f 31

|CH Frost Alarm Sensor<br>_ _ _|FA|
|---|---|
|**CH_Frost_Alarm_Sensor**||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|804 / Frost Alarm|Frost Alarm|1|CC_Frost|CC_Logical|O L|


-----

#### 2.10 CH_PB_Shutter_1 (Channel Code 002Fh)

- **Name:** CH_PB_Shutter_1

- **ID:** 002Fh

- **Classification:** sensor

- **Functional Block:**

      - 801 - Sunblind Sensor Basic (See [01])

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_Shutter_1**


MUD 801.MoveUpDown

**_Parameters_** STOP 801.Stop

801.UpDownAction P1

- **Description:**

Please refer to [01] for the FB specification of FB Sunblind Sensor Basic.

The Parameter “Enable Blinds Mode” in that FB shall be fixed to the value 0 (disabled): the
blinds mode shall be disabled; the Channel shall work as a shutter sensor.

The parameter “Enable Toggle Mode” in that FB shall be fixed to the value 0 (disabled): the
shutter Channel shall work in “1/2 mode”: the value of the Output MUD shall not toggle with
each transmission.

- **Datapoint list:**

Sub- Flags
Index FB / DP_Name Name Main CC Additional CCs

unit (i/o,x,v…)

1 801.MoveUpDown Move UpDown 1 CC_Move_UpDown CC_Logical O L

2 801.Stop Stop 1 CC_Stop CC_StepStop_Up O
Down

- **Parameter list**

Recommended
Index Identifier Name Type Bit offset

default value

1 P1 Up Down Action PART_UpDown_Switch_Action Up 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 13 f 31

|Parameters<br>ownAction P1|CH PB Shutter 1<br>_ _ _|MUD|
|---|---|---|
|<br>**_Parameters_** <br>ownAction<br>P1|**CH_PB_Shutter_1** <br> <br>|STOP|
|<br>**_Parameters_** <br>ownAction<br>P1|**CH_PB_Shutter_1** <br> <br>||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v…)|
|---|---|---|---|---|---|---|
|1 <br>|801.MoveUpDown|Move UpDown|1|CC_Move_UpDown|CC_Logical|O L|
|2 <br>|801.Stop|Stop|1|<br>CC_Stop|<br>CC_StepStop_Up<br>Down|O|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit offset|
|---|---|---|---|---|---|
|1|P1|Up Down Action|PART_UpDown_Switch_Action<br>|Up|6|


-----

#### 2.11 CH_Shutter_Actuator_Basic_Wind (Channel Code 0108h)

- **Name:** CH_Shutter_Actuator_Basic_Wind

- **ID:** 0108h

- **Classification:** actuator

- **Functional Block:**

    - 805 – FB Sunblind Actuator Basic (SAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

SAB.Move UpDown MUD **CH_Shutter_Actuator_Basic_Wind**

SAB.StepStop UpDown SSUD


SAB.Wind Alarm WA

**_Parameters_**

Use Weather Alarm P1

- **Description:**

The operation mode is fixed to shutter.

The alarm-cycle time parameter is fixed to 30 min.

- **Datapoint list:**

SubIndex FB / DP_Name Name Main CC
unit

1 805 / Move UpDown Move UpDown 1

2 805 / StopStep StopStep 1
UpDown UpDown

3 805 / Wind Alarm Wind_Alarm 1 CC_Wind

4 805 / Info Move Info UD 1
UpDown us

- **Parameter table:**


SAB.Info Move Up
Down

|ve UpDown MUD<br>op UpDown SSUD<br>Wind Alarm WA<br>Parameters<br>ather Alarm P1|CH Shutter Actuator Basic Wind<br>_ _ _ _|IMUD|
|---|---|---|
|ve UpDown<br>MUD<br>op UpDown<br>SSUD<br>Wind Alarm<br>WA<br>**_Parameters_**<br> ather Alarm<br>P1|**CH_Shutter_Actuator_Basic_Wind** <br> <br> <br>||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,<br>…)|
|---|---|---|---|---|---|---|
|1|805 / Move UpDown|Move UpDown|1|CC_Move_UpDown||I L|
|2|805 / StopStep<br>UpDown|StopStep<br>UpDown|1|<br>CC_StepStop_UpDown||I|
|3|805 / Wind Alarm|Wind_Alarm|1|CC_Wind||I|
|4|805 / Info Move<br>UpDown|<br>Info UD|1|<br>CC_Move_UpDown_Stat<br>us|CC_Logical|O V LA|


1 P1 Use Weather alarm PART_Alarm_Reaction “no alarm is used” 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 14 f 31

|Index|Identifier|Name|Type|Recommended default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Use Weather alarm|PART_Alarm_Reaction|“no alarm is used”|6|


-----

#### 2.12 CH_ShutterBlinds_Actuator_Basic_Wind (Channel Code 0109h)

- **Name:** CH_ShutterBlinds_Actuator_Basic_Wind

- **ID:** 0109h

- **Classification:** actuator

- **Functional Block:**

    - 805 – FB Sunblind Actuator Basic (SAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

SAB.Move UpDown MUD **CH_ShutterBlinds_-**
**Actuator_Basic_Wind**

SAB.StepStop UpDown SSUD

SAB.Wind Alarm WA IMUD SAB.Info Move Up Down

**_Parameters_**

Use Weather Alarm P1

- **Description:**

The alarm-cycle-time is fixed to 30 min.

The operation mode is fixed to blinds.

- **Datapoint list:**

Flags

Sub- Additional
Index FB / DP_Name Name (i/o,x,v,

unit [Main CC ] CCs

…)

1 805 / Move UpDown Move UpDown 1 CC_Move_UpDown I L

2 805 / StopStep StepStop UpDown 1 CC_StepStop_UpDown I
UpDown

3 805 / Wind Alarm Wind_Alarm 1 CC_Wind I

4 805 / Info Move Info UD 1 CC_Move_UpDown_St CC_Logical O V
UpDown atus LA

- **Parameter table:**

Recommended default
Index Identifier Name Type Bit Offset

value

1 P1 Use Weather alarm PART_Alarm_Reaction “no alarm is used” 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 15 f 31

|MUD|CH ShutterBlinds -<br>_ _<br>Actuator Basic Wind<br>_ _|IMUD|
|---|---|---|
|SSUD|SSUD|SSUD|
|WA|WA|WA|
|P1|P1||
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,<br>…)|
|---|---|---|---|---|---|---|
|1|805 / Move UpDown|Move UpDown|1|CC_Move_UpDown||I L|
|2|805 / StopStep<br>UpDown|StepStop UpDown|1|<br>CC_StepStop_UpDown||I|
|3|805 / Wind Alarm|Wind_Alarm|1|CC_Wind||I|
|4|805 / Info Move<br>UpDown|<br>Info UD|1|<br>CC_Move_UpDown_St<br>atus|CC_Logical|O V<br>LA|

|Index|Identifier|Name|Type|Recommended default<br>value|Bit Offset|
|---|---|---|---|---|---|
|1 <br>|P1|Use Weather alarm|PART_Alarm_Reaction|“no alarm is used”|6|


-----

#### 2.13 CH_Shutter_Actuator_Basic_Rain (Channel Code 010Ah)

- **Name:** CH_Shutter_Actuator_Basic_Rain

- **ID:** 010Ah

- **Classification:** actuator

- **Functional Block:**

    - 805 – FB Sunblind Actuator Basic (SAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Shutter_Actuator-**

SAB.Move UpDown MUD **_Basic_Rain**

SAB.StepStop UpDown SSUD

SAB.Rain Alarm RA IMUD SAB.Info Move upDown

**_Parameters_**

Use Weather Alarm P1

- **Description:**

The alarm-cycle-time is fixed to 30 min.

The operation mode is fixed to shutter.

- **Datapoint list:**

Sub- Additional Flags
Index FB / DP_Name Name Main CC

unit CCs (i/o,x,v,…)

1 805 / Move UpDown Move UpDown 1 CC_Move_UpDown I L

2 805 / StopStep StopStep UpDown 1 CC_StepStop_UpDown I
UpDown

3 805 / Rain Alarm Rain_Alarm 1 CC_Rain I

4 805 / Info Move Info UD 1 CC_Move_UpDown_St CC_Logical O V LA
UpDown atus

- **Parameter table:**

Bit
Index Identifier Name Type Recommended default value
Offset

1 P1 Use Weather alarm PART_Alarm_Reaction “no alarm is used” 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 16 f 31

|MUD|CH Shutter Actuator-<br>_ _<br>Basic Rain<br>_ _|IMUD|
|---|---|---|
|SSUD|SSUD|SSUD|
|RA|RA|RA|
|P1|P1||
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|805 / Move UpDown|Move UpDown|1|CC_Move_UpDown||I L|
|2|805 / StopStep<br>UpDown|StopStep UpDown|1|<br>CC_StepStop_UpDown||I|
|3|805 / Rain Alarm|Rain_Alarm|1|CC_Rain||I|
|4|805 / Info Move<br>UpDown|<br>Info UD|1|<br>CC_Move_UpDown_St<br>atus|CC_Logical|O V LA|

|Index|Identifier|Name|Type|Recommended default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Use Weather alarm|PART_Alarm_Reaction|“no alarm is used”|6|


-----

#### 2.14 CH_ShutterBlinds_Actuator_Basic_Rain (Channel Code 010Bh)

- **Name:** CH_ShutterBlinds_Actuator_Basic_Rain

- **ID:** 010Bh

- **Classification:** actuator

- **Functional Block:**

    - 805 – FB Sunblind Actuator Basic (SAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

Move UpDown MUD **CH_ShutterBlinds_Actuator**

**_Basic_Rain**

StepStop UpDown SSUD

Rain Alarm RA IMUD Info MUD

**_Parameters_**

Use Weather Alarm P1

- **Description:**

The alarm-cycle-time is fixed to 30 min.

The operation mode is fixed to blinds.

- **Datapoint list:**

Sub- Additional Flags
Index FB / DP_Name Name Main CC

unit CCs (i/o,x,v,…)

1 805 / Move UpDown Move UpDown 1 CC_Move_UpDown I L

2 805 / StopStep StopStep UpDown 1 CC_StepStop_UpDown I
UpDown

3 805 / Rain Alarm Rain_Alarm 1 CC_Rain I

4 805 / Info Move Info MUD 1 CC_Move_UpDown_Statu CC_Logical O V LA
UpDown s

- **Parameter table:**

Recommended default
Index Identifier Name Type Bit Offset
value

1 P1 Use Weather alarm PART_Alarm_Reaction “no alarm is used” 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 17 f 31

|MUD|CH ShutterBlinds Actuator<br>_ _<br>Basic Rain<br>_ _|IMUD|
|---|---|---|
|SSUD|SSUD|SSUD|
|RA|RA|RA|
|P1|P1||
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|805 / Move UpDown|Move UpDown|1|CC_Move_UpDown||I L|
|2|805 / StopStep<br>UpDown|StopStep UpDown|1|<br>CC_StepStop_UpDown||I|
|3|805 / Rain Alarm|Rain_Alarm|1|CC_Rain||I|
|4|805 / Info Move<br>UpDown|<br>Info MUD|1|<br>CC_Move_UpDown_Statu<br>s|CC_Logical|O V LA|

|Index|Identifier|Name|Type|Recommended default<br>value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Use Weather alarm|PART_Alarm_Reaction|“no alarm is used”|6|


-----

#### 2.15 CH_ShutterBlinds_Actuator_Basic (Channel Code 010Ch)

- **Name:** CH_ShutterBlinds_Actuator_Basic

- **ID:** 010Ch

- **Classification:** actuator

- **Functional Block:**

    - 805 – FB Sunblind Actuator Basic (SAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_ShutterBlinds_-**

SAB.Move UpDown MUD **Actuator_Basic**

SAB.StepStop UpDown SSUD

SAB.Wind Alarm WA IMUD SAB.Info Move UpDown

SAB.Rain Alarm RA
**_Parameters_**

Operation Mode P1

Use Weather Alarm P2

- **Description:**

The alarm-cycle-time is fixed to 30 min.

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 805 / Move UpDown Move UpDown 1 CC_Move_UpDown I L

2 805 / StopStep UpDown StepStop 1 CC_Step_UpDown I

UpDown

3 805 / Wind Alarm Wind Alarm 1 CC_Wind I

4 805 / Rain Alarm Rain Alarm 1 CC_Rain I

5 I805 / Info Move Info MUD 1 CC_Move_UpDown CC_Logical O V
UpDown _Status LA

- **Parameter table:**

Recommended default
Index Identifier Name Type Bit Offset

value

1 P1 Operation Mode PART_Blind_Mode Shutter 0

2 P2 Use Weather Alarm PART_Alarm_Reaction “no alarm is used” 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 18 f 31

|ve UpDown MUD<br>op UpDown SSUD<br>Wind Alarm WA<br>Rain Alarm RA<br>Parameters<br>ration Mode P1<br>ather Alarm P2|CH ShutterBlinds -<br>_ _<br>Actuator Basic<br>_|IMUD|
|---|---|---|
|ve UpDown MUD<br>op UpDown SSUD<br>Wind Alarm<br>WA<br>Rain Alarm<br>RA<br>**_Parameters_** <br>ration Mode<br>P1<br> ather Alarm<br>P2|<br>**CH_ShutterBlinds_-**<br>**Actuator_Basic**<br> <br> <br> <br> <br>||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|805 / Move UpDown|Move UpDown|1|CC_Move_UpDown||I L|
|2|805 / StopStep UpDown|StepStop<br>UpDown|1|<br>CC_Step_UpDown|<br>|I|
|3|805 / Wind Alarm|Wind Alarm|1|CC_Wind||I|
|4|805 / Rain Alarm|Rain Alarm|1|<br>CC_Rain||I|
|5|I805 / Info Move<br>UpDown|Info MUD|1|<br>CC_Move_UpDown<br>_Status|CC_Logical|O V<br>LA|

|Index|Identifier|Name|Type|Recommended default<br>value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Operation Mode|PART_Blind_Mode|Shutter|0|
|2|P2|Use Weather Alarm|<br>   PART_Alarm_Reaction|“no alarm is used”|6|


-----

#### 2.16 CH_ShutterBlinds_Actuator_Scene (Channel Code 010Dh)

- **Name:** CH_ShutterBlinds_Actuator_Scene

- **ID:** 010Dh

- **Classification:** actuator

- **Functional Block:**

    - 805 – FB Sunblind Actuator Basic (SAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_ShutterBlinds-**

SAB.Move UpDown MUD **_Actuator__Scene**

SAB.StepStop UpDown SSUD

SAB.Forced FO

SAB.Wind Alarm WA

SAB.Rain Alarm RA IMUD SAB.Info Move UpDown

SAB.Scene Number SN

**_Parameters_**

Operation Mode P1

Use Weather Alarm P2

- **Description:**

The alarm-cycle-time is fixed to 30 min.
Number of scene to be supported is 8.
This channel can only detect simultaneous failure of both wind sensor and rain sensor due to the
presence of only one parameter for weather alarm.

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 19 f 31

|MUD|CH ShutterBlinds-<br>_<br>Actuator Scene<br>_ __|IMUD|
|---|---|---|
|SSUD|SSUD|SSUD|
|FO|FO|FO|
|WA|WA|WA|
|RA|RA|RA|
|SN|SN||
|P1|P1|P1|
|P2|P2|P2|
||||


-----

- **Datapoint list:**

Sub- Flags
Index FB / DP_Name Name Main CC Additional CCs

unit (i/o,x,v…)

1 805 / Move Move UpDown 1 CC_Move_UpDown I L
UpDown

2 805 / StopStep StepStop UpDown 1 CC_StepStop_UpDown I
UpDown

3 805 / Forced Forced 1 CC_Forced I

4 805 / Wind Alarm Wind_Alarm 1 CC_Wind I

5 805 / Rain Alarm Rain Alarm 1 CC_Rain I

6 805 / Scene Scene Number 1 CC_Scene_Number I
Number

7 805 / Info MUD Info MUD 1 CC_Move_UpDown_Stat CC_Logical O V LA
us

  - **Parameter table:**

Bit
Index Identifier Name Type Recommended default value
Offset

1 P1 Operation Mode PART_Blind_Mode Shutter 0

2 P2 Use Weather Alarm PART_Alarm_Reaction “no alarm is used” 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 20 f 31

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v…)|
|---|---|---|---|---|---|---|
|1|805 / Move<br>UpDown|Move UpDown|1|CC_Move_UpDown||I L|
|2|805 / StopStep<br>UpDown|StepStop UpDown|1|CC_StepStop_UpDown||I|
|3|805 / Forced|Forced|1|CC_Forced||I|
|4|805 / Wind Alarm|Wind_Alarm|1|<br>CC_Wind||I|
|5|805 / Rain Alarm|<br>Rain Alarm|1|<br>CC_Rain||I|
|6|805 / Scene<br>Number|Scene Number|1|<br>CC_Scene_Number||I|
|7|805 / Info MUD|Info MUD|1|CC_Move_UpDown_Stat<br>us|CC_Logical|O V LA|

|Index|Identifier|Name|Type|Recommended default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Operation Mode|PART_Blind_Mode|Shutter|0|
|2|P2|Use Weather Alarm|<br>   PART_Alarm_Reaction|“no alarm is used”|6|


-----

#### 2.17 CH_ShutterBlinds_Actuator_Scene_1 (Channel Code 0480h)

- **Name:** CH_ShutterBlinds_Actuator_Scene_1

- **ID:** 0480h

- **Classification:** actuator

- **Functional Block:**

      - 805 - FB Shutter Actuator Basic (See [02])

- **Graphical representation**

**_Inputs_** **_Outputs_**

**CH_ShutterBlinds_-**

805.MoveUpDown MUD **Actuator_Scene_1**

805.StopStepUpDown SSUD

805.Forced FO

805.WindAlarm WA

805.RainAlarm RA IMUD 805.InfoMoveUpDown

805.SceneNumber SN

**_Parameters_**

805.EnableBlindsMode P1

805.ReactionOnWindAlarm P2

805. ReactionOnRaiAlarm P3

- **Description:**

The alarm-cycle-time shall be fixed to 30 min.

The number of scenes that shall be supported is 8.

The priority between the two alarms has to be determined by the manufacturer and shall be
documented.

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 21 f 31

|veUpDown MUD<br>epUpDown SSUD<br>805.Forced FO<br>WindAlarm WA<br>.RainAlarm RA<br>eneNumber SN<br>Parameters<br>BlindsMode P1<br>WindAlarm P2<br>nRaiAlarm P3|CH ShutterBlinds -<br>_ _<br>Actuator Scene 1<br>_ _|IMUD|
|---|---|---|
|<br>veUpDown<br>MUD<br>epUpDown<br>SSUD<br>805.Forced<br>FO<br>WindAlarm<br>WA<br>.RainAlarm<br>RA<br>eneNumber<br>SN<br>**_Parameters_**  <br>BlindsMode<br>P1<br>WindAlarm<br>P2<br> nRaiAlarm<br>P3|<br>**CH_ShutterBlinds_-**<br>**Actuator_Scene_1** <br> <br> <br> <br> <br> <br> <br> <br>||


-----

 - **Datapoint list:**

SubIndex FB / DP_Name Name

unit

1 805.MoveUpDown Move UpDown 1

2 805.StopStepUpDown StopStep 1
UpDown

3 805.Forced Forced 1

4 805.ReactionOnWind- Wind Alarm 1
Alarm

5 805.ReactionOnRain- Rain Alarm 1
Alarm

6 805.SceneNumber Scene Number 1

7 805.InfoMoveUpDown Info Move Up 1
Down

 - **Parameter table**


Flags
(i/o,x,v…..)

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|805.MoveUpDown|Move UpDown|1|CC_Move UpDown||I L|
|2|805.StopStepUpDown|StopStep<br>UpDown|1|<br>CC_StepStop_-<br>UpDown||I|
|3|805.Forced|Forced|1|CC_Forced||I|
|4|805.ReactionOnWind-<br>Alarm|Wind Alarm|1|<br>CC_Wind||I|
|5|805.ReactionOnRain-<br>Alarm|Rain Alarm|1|CC_Rain||I|
|6|805.SceneNumber|Scene Number|1|CC_Scene_Numbered||I|
|7|805.InfoMoveUpDown|Info Move Up<br>Down|1|<br>CC_MoveUpDown_-<br>Info|<br>CC_Logical|O V|


Index Identifier Name Type Recommended default value Bit offset

1 P1 Enable Blinds Mode PART_Blind_Mode Shutter 0

2 P2 Reaction On Wind Alarm PART_Alarm_reaction Disabled 4

3 P3 Reaction On Rain Alarm PART_Alarm_reaction Disabled 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 22 f 31

|Index|Identifier|Name|Type|Recommended default value|Bit offset|
|---|---|---|---|---|---|
|1|P1|Enable Blinds Mode|PART_Blind_Mode|Shutter|0|
|2|P2|Reaction On Wind Alarm|<br>    PART_Alarm_reaction|Disabled|4|
|3|P3|<br>Reaction On Rain Alarm|<br>    PART_Alarm_reaction|<br>     Disabled|6|


-----

### 3 Examples
There are no examples available yet.

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 23 f 31


-----

### 4 Functional Blocks

#### 4.1 Usage requirements
The Functional Block specifications below only provide complementary information to the Channel
Definitions specified in this document. They are only provided for completeness and understanding of the
these channel definitions.

These Functional Blocks shall be used only for implementation of Easy Configuration mode devices.

These Functional Block specifications shall not be used for any other goal; in particular, no
implementation for S-Mode devices shall be based on these specifications.

KNX Association will take care of compatibility between any currently specified Channel Definition and
the final version of these Functional Blocks.

To this, the KNX Association Application Specification Groups shall take the functionality achieved by
these Functional Blocks as the minimal mandatory basis for further work.

#### 4.2 Functional Block FB Wind Sensor (FB WS)

##### 4.2.1 Definitions

- **Name:** FB Wind Sensor

- **Application description Block:** weather sensor

- **Object type:** 802

##### 4.2.2 FB Description
If the wind-Sensor detects wind then it sends a 1-Value (1-bit-Value like on/off)

If the wind-Sensor detects no wind then it sends a 0-Value.

The lowest windspeed value to send a 1 Value (wind alarm) is manufacturer specific.

The output has always to be sent at a cycle-time defined by parameter.

###### 4.2.2.1 FB description

FB_Wind_Sensor

Wind
Alarm

Parameters
Cycle Time

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 24 f 31

|FB Wind Sensor<br>_ _|Col2|Col3|
|---|---|---|
|Wind<br>Alarm|Wind<br>Alarm|Wind<br>Alarm|
|Parameters<br>Cycle Time|||


-----

###### 4.2.2.2 Datapoints

Datapoint Abbr. Description Datapoint Type

Outputs

Wind_Alarm WA To detect wind (alarm) 1.005 DPT_Alarm

Parameters

CycleTime P1 Value of the Periodic sending 7.005 DPT_TimePeriodSec

4.2.2.2.1 Distribution Table

**STANDARD** **EXTENDED**

**MODE** **MODE**

**Outputs** **WA** (GO)  -  -  
**Parameters P1** O  -  -  
©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 25 f 31

|Datapoint|Abbr.|Description|Datapoint Type|
|---|---|---|---|
|Outputs||||
|Wind_Alarm|WA|To detect  wind (alarm)|1.005 DPT_Alarm|
|<br>Parameters||||
|CycleTime|P1|Value of the Periodic sending|7.005 DPT_TimePeriodSec|

|Col1|Col2|Basic FB|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|||**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|<br>**LTE-Mode**|
|**Outputs**|**WA**|(GO)|-|-|-|
|**Parameters**|** P1**|O|-|-|-|


-----

4.2.2.2.2 Output Wind_Alarm

DP Name: Wind_Alarm Abbr.: WA Mandatory
FB Name: 802 FB Wind Sensor Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_Alarm
DPT Format: B1 DPT_ID: 1.005

♦ Output
this → M this → 1
Spontaneous COV: ∆-Value Min repetition period:
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

4.2.2.2.3 Parameter CycleTime

DP Name: CycleTime Abbr.: P1 Mandatory
FB Name: 802 FB Wind Sensor Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_TimePeriodSec
DPT Format: U16 DPT_ID: 7.005
**Exception Handling**
--**Special Features**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 26 f 31

|DP Name:|Col2|Wind Alarm|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|WA|Col22|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|_<br>802 FB Wind Sensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|1.005|1.005|1.005|1.005|1.005|1.005|1.005|
|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|||||||this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:|||||∆-Value|∆-Value|∆-Value|∆-Value|∆-Value|||||Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:||||||
|||||||||Cyclic|Cyclic|Cyclic|Cyclic|||||<br>Period:|<br>Period:|<br>Period:|<br>Period:|<br>Period:|||||||||||||||
||Request|Request|Request|Request|||||||||||||||||||||||||||||||
|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Client|<br>• <br>Client|<br>• <br>Client|<br>• <br>Client|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):||||||||PID(property server):|PID(property server):|PID(property server):|PID(property server):|PID(property server):|||||||
||<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|||||||
|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
|||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|
||||||||||||||||||||||||||||||||||||

|DP Name:|CycleTime|Col3|Abbr.:|P1|Col6|Mandatory|Col8|Col9|Col10|Col11|
|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|802 FB Wind Sensor|802 FB Wind Sensor|802 FB Wind Sensor|802 FB Wind Sensor|802 FB Wind Sensor|Can be internal|Can be internal||||
|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|
|<br>DPTName:|<br>DPTName:|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|
|_<br>DPT Format:|_<br>DPT Format:|_<br>U16|_<br>U16|_<br>U16|DPTID:|DPTID:|7.005|7.005|7.005|7.005|
|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|
||||||||||||


-----

#### 4.3 Functional Block FB Rain Sensor (FB RS)

##### 4.3.1 Definitions

- **Name:** FB Rain Sensor

- **Application description Block:** weather sensor

- **Object type:** 803

##### 4.3.2 Functional specification

###### 4.3.2.1 Functional description
If the rain sensor detects rain, it shall send value 1 (DPT_Alarm).

If the rain sensor detects no rain, it shall a value 0 (DPT_Alarm).

The lowest rain intensity to send a 1 value (rain alarm) is manufacturer specific.

The output shall always be sent at a cycle-time defined by a parameter.

###### 4.3.2.2 FB description

FB_Rain_Sensor

Rain
Alarm

Parameters
Cycle Time

###### 4.3.2.3 Datapoints

**Datapoint** **Abbr.** **Description** **Datapoint Type**

**Outputs**

Rain_Alarm RA To detect rain (alarm) 1.005 DPT_Alarm

**Parameters**

CycleTime P1 Value of the Periodic sending 7.005 DPT_TimePeriodSec

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 27 f 31

|FB Rain Sensor<br>_ _|Col2|Col3|
|---|---|---|
|Rain<br>Alarm|Rain<br>Alarm|Rain<br>Alarm|
|Parameters<br>Cycle Time|||

|Datapoint|Abbr.|Description|Datapoint Type|
|---|---|---|---|
|**Outputs**||||
|Rain_Alarm|RA|To detect rain (alarm)|1.005 DPT_Alarm|
|**Parameters**||||
|CycleTime|P1|Value of the Periodic sending|7.005 DPT_TimePeriodSec|


-----

4.3.2.3.1 Distribution Table

**S**

**M**

**Outputs** **RA** (GO)

**Parameters P1** O

4.3.2.3.2 Output Rain_Alarm


**EXTENDED**

|Col1|Col2|Basic FB|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|||**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-Mode**|
|**Outputs**|**RA**|(GO)|-|-|-|
|**Parameters**|** P1**|O|-|-|-|


DP Name: Rain_Alarm Abbr.: RA Mandatory
FB Name: 803 FB Rain Sensor Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_Alarm
DPT Format: B1 DPT_ID: 1.005

♦ Output
this → M this → 1
Spontaneous COV: ∆-Value Min repetition period:
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

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 28 f 31

|DP Name:|Col2|Rain Alarm|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|RA|Col21|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|_<br>803 FB RainSensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|1.005|1.005|1.005|1.005|1.005|1.005|1.005|
|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|||||||this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||∆-Value|∆-Value|∆-Value|∆-Value|∆-Value|||||Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:||||||
|||||||||Cyclic|Cyclic|Cyclic|Cyclic||||<br>Period:|<br>Period:|<br>Period:|<br>Period:|<br>Period:|||||||||||||||
||Request|Request|Request|Request||||||||||||||||||||||||||||||
|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Client|<br>• <br>Client|<br>• <br>Client|<br>• <br>Client|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|||||||||PID(property server):|PID(property server):|PID(property server):|PID(property server):|PID(property server):|||||||
||<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|||||||
|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
|||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|<br>      <br>**Exception Handling **|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|
|||||||||||||||||||||||||||||||||||


-----

4.3.2.3.3 Parameter CycleTime

DP Name: CycleTime Abbr.: P1 Mandatory
FB Name: 803 FB Rain Sensor Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_TimePeriodSec
DPT Format: U16 DPT_ID: 7.005
**Exception Handling**
--**Special Features**

#### 4.4 Functional Block FB Frost Sensor (FB FS)

##### 4.4.1 Definitions

- **Name:** FB Frost Sensor

- **Application description Block:** weather sensor

- **Object type:** 804

##### 4.4.2 Functional specification

###### 4.4.2.1 Functional description
If the frost sensor detects frost, it shall send a value 1 (DPT_Alarm).

If the frost sensor detects no frost, it shall send a value 0 (DPT_Alarm).

The lowest frost intensity value to send a value 1 (frost alarm) is manufacturer specific.

The output shall always be sent at a cycletime defined by parameter.

###### 4.4.2.2 FB description

FB_Frost_Sensor

Frost
Alarm

Parameters
Cycle Time

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 29 f 31

|DP Name:|CycleTime|Col3|Abbr.:|P1|Col6|Mandatory|Col8|Col9|Col10|Col11|
|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|803 FB RainSensor|803 FB RainSensor|803 FB RainSensor|803 FB RainSensor|803 FB RainSensor|Can be internal|Can be internal||||
|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|
|<br>DPTName:|<br>DPTName:|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|
|_<br>DPT Format:|_<br>DPT Format:|_<br>U16|_<br>U16|_<br>U16|DPTID:|DPTID:|7.005|7.005|7.005|7.005|
|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|
||||||||||||

|FB Frost Sensor<br>_ _|Col2|Col3|
|---|---|---|
|Frost<br>Alarm|Frost<br>Alarm|Frost<br>Alarm|
|Parameters<br>Cycle Time|||


-----

###### 4.4.2.3 Datapoints

**Datapoint** **Abbr.** **Description** **Datapoint Type**

**Outputs**

Frost_Alarm FA To detect frost (alarm) 1.005 DPT_Alarm

**Parameters**

CycleTime P1 Value of the Periodic sending 7.005
DPT_TimePeriodSec

4.4.2.3.1 Distribution Table

**STANDARD** **EXTENDED**

**MODE** **MODE**

**Outputs** **FA** (GO)  -  -  
**Parameters P1** O  -  -  
©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 30 f 31

|Datapoint|Abbr.|Description|Datapoint Type|
|---|---|---|---|
|**Outputs**||||
|Frost_Alarm|FA|To detect frost (alarm)|1.005 DPT_Alarm|
|**Parameters**||||
|CycleTime|P1|Value of the Periodic sending|7.005<br>DPT_TimePeriodSec|

|Col1|Col2|Basic FB|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|||**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|<br>**LTE-Mode**|
|**Outputs**|**FA**|(GO)|-|-|-|
|**Parameters**|** P1**|O|-|-|-|


-----

4.4.2.3.2 Output Frost_Alarm

DP Name: Frost_Alarm Abbr.: FA Mandatory
FB Name: 804 FB Frost Sensor Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_Alarm
DPT Format: B1 DPT_ID: 1.005

♦ Output
this → M this → 1
Spontaneous COV: ∆-Value Min repetition period:
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

4.4.2.3.3 Parameter CycleTime

DP Name: CycleTime Abbr.: P1 Mandatory
FB Name: 804 FB Frost Sensor Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_TimePeriodSec
DPT Format: U16 DPT_ID: 7.005
**Exception Handling**
--**Special Features**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 31 f 31

|DP Name:|Col2|Frost Alarm|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|FA|Col21|Col22|Col23|Col24|Col25|Mandatory|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|_<br>804 FB Frost Sensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|<br>DPTAlarm|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|1.005|1.005|1.005|1.005|1.005|1.005|1.005|
|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|||||||this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||∆-Value|∆-Value|∆-Value|∆-Value|∆-Value|||||Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:||||||
|||||||||Cyclic|Cyclic|Cyclic|Cyclic||||<br>Period:|<br>Period:|<br>Period:|<br>Period:|<br>Period:|||||||||||||||
||Request|Request|Request|Request||||||||||||||||||||||||||||||
|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|<br>**Communication Type **|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Client|<br>• <br>Client|<br>• <br>Client|<br>• <br>Client|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|||||||||PID(property server):|PID(property server):|PID(property server):|PID(property server):|PID(property server):|||||||
||<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|||||||
|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|_<br>__<br>**Dynamics **|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
|||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|<br> <br>**Exception Handling **|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|<br>**Special Features **|
|||||||||||||||||||||||||||||||||||

|DP Name:|CycleTime|Col3|Abbr.:|P1|Col6|Mandatory|Col8|Col9|Col10|Col11|
|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|804 FB Frost Sensor|804 FB Frost Sensor|804 FB Frost Sensor|804 FB Frost Sensor|804 FB Frost Sensor|Can be internal|Can be internal||||
|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|<br>   <br>   <br>**Description **|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|
|<br>DPTName:|<br>DPTName:|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|
|_<br>DPT Format:|_<br>DPT Format:|_<br>U16|_<br>U16|_<br>U16|DPTID:|DPTID:|7.005|7.005|7.005|7.005|
|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|_<br>**Exception Handling **|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|**Special Features **|
||||||||||||


-----

