# Application descriptions

## Lighting

 Lighting channels

Summary:

This document provides the specification of the E-Mode channels in the
application domain Lighting.

Version 01.00.01 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

v01 2007.09.27 Document creation.

              - **S12 “Channel Codes” integrated.**
2007.10.02        - **AN050 “AN to Supplement 12” integrated.**
2007.10.18        - **AN087 “New Channels 2005.02” integrated.**
2008.05.09        - **AN076 “Localisation Easy Actuators” integrated: insertion of**
LA-flag as specified in AN076.
v1.0 2009.06.26  - Update in view of publication in the KNX Specifications v2.0.
v1.0 2009.06.26  - Update in view of publication in the KNX Specifications v2.0.
01.00.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

[01] Chapter 7/20/1 “Lighting Sensors”

Filename: 07_20_11 Lighting Channels v01.00.01 AS.docx
Version: 01.00.01
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 67

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 2 f 67

|Version|Date|Modifications|
|---|---|---|
|v01|2007.09.27|Document creation.<br>• <br>**S12 “Channel Codes”** integrated.|
|v01|2007.10.02|<br>• <br>**AN050 “ANto Supplement 12”** integrated.|
|v01|2007.10.18|<br>• <br>**AN087 “New Channels 2005.02”** integrated.|
|v01|2008.05.09|<br>• <br>**AN076 “Localisation Easy Actuators”** integrated: insertion of<br>LA-flag as specified in AN076.|
|v1.0|2009.06.26|<br>• <br>Update in view of publication inthe KNXSpecifications v2.0.|
|v1.0|2009.06.26|<br>• <br>Update in view of publication inthe KNXSpecifications v2.0.|
|01.00.01|2013.10.29|<br>Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 5 1.1 Overview of the application ............................................................................................ 5 1.2 Support of scenes ............................................................................................................ 5 1.3 Channel overview ........................................................................................................... 6

 2 Channels Lighting .................................................................................................................. 7 2.1 CH_PB_Toggle (Channel Code 0002h) ......................................................................... 7 2.2 CH_PB_Timed (Channel Code 0003h) .......................................................................... 8 2.3 CH_PB_Timed_Info (Channel Code 0004h) ................................................................. 9 2.4 CH_PB_Dimmer (Channel Code 0005h) ..................................................................... 10 2.5 CH_PB_Dimmer_Toggle (Channel Code 0006h) ........................................................ 11 2.6 CH_PB_Scene_Numbered (Channel Code 0007h) ...................................................... 12 2.7 CH_PB_Scene (Channel Code 0008h) ......................................................................... 13 2.8 CH_Switch (Channel Code 0009h) .............................................................................. 14 2.9 CH_Switch_Info (Channel Code 000Ah) .................................................................... 15 2.10 CH_Switch_Forced (Channel Code 000Bh) ................................................................ 16 2.11 CH_Switch_Dimmer (Channel Code 000Ch) .............................................................. 17 2.12 CH_Switch_Dimmer_Info (Channel Code 000Dh) ..................................................... 17 2.13 CH_Switch_Dimmer_Toggle (Channel Code 000Eh) ................................................. 18 2.14 CH_Switch_Scene_Numbered (Channel Code 000Fh) ................................................ 19 2.15 CH_Switch_Scene (Channel Code 0010h) ................................................................... 20 2.16 CH_Light_Setpoint_Controller (Channel Code 0011h) ............................................... 22 2.17 CH_Light_Sensor (Channel Code 0012h) .................................................................... 24 2.18 CH_Motion_Detector_Basic (Channel Code 0013h) ................................................... 25 2.19 CH_Motion_Detector_Complex (Channel Code 0014h) ............................................. 26 2.20 CH_Switch_Operation_Mode (Channel Code 001Eh) ................................................ 27 2.21 CH_PushButton (Channel Code 0020h) ....................................................................... 28 2.22 CH_PB_Dimming_Value (Channel Code 0029h) ........................................................ 29 2.23 CH_Push_Button_Info (Channel Code 002Ah) ........................................................... 30 2.24 CH_PB_Dimming_Value_Info (Channel Code 002Ch) .............................................. 31 2.25 CH_Switch_Dimming_Value_Info (Channel Code 002Dh) ........................................ 32 2.26 CH_Status_Info (Channel Code 0100h) ....................................................................... 33 2.27 CH_Binary_Actuator_Basic (Channel Code 0101h) .................................................... 34 2.28 CH_Light_Actuator_Complex (Channel Code 0102h) ................................................ 35 2.29 CH_Light_Actuator_Scene (Channel Code 0103h) ..................................................... 36 2.30 CH_Light_Actuator_Controlled (Channel Code 0104h) .............................................. 37 2.31 CH_Dimming_Actuator_Basic (Channel Code 0105h) ............................................... 38 2.32 CH_Dimming_Actuator_Complex (Channel Code 0106h) ......................................... 39 2.33 CH_Dimming_Actuator_Scene (Channel Code 0107h) .............................................. 41 2.34 CH_LightSensor_Slave (Channel Code 020Ah) .......................................................... 42 2.35 CH_Light_Setpoint_Controller_Info (Channel Code 020Bh) ...................................... 43

 3 Examples ............................................................................................................................... 45 3.1 Example 1: 2 CH_PushButton connected with 2 CH_Binary_Actuator_Basic ........... 45 3.2 Example 2: CH_PB_Toggle connected with 2 CH_Binary_Actuator_Basic ............... 46 3.3 Example 3: CH_PB_Toggle with overlapping group ................................................... 46 3.4 Example 4: CH_PB_Toggle connected with 2 from 3 CH_Binary_Actuator_Basic with a central OFF (CH_PushButton with parameter to allow only OFF values) ........................................................................... 48

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 3 f 67


-----

###### 3.5 Example 4: 1 CH_Dimmer_Switch and 1 CH_Dimmer_PB, connected to 2 CH_Dimmer_Actuator_Basic ....................................................................................... 49 3.6 Example 6: CH_Motion_Detector, CH_PB_TimedON, CH_PB_Forced, CH_PushButton connected to a CH_Binary_Actuator_Complex ................................ 50

 4 Functional Blocks ................................................................................................................. 51 4.1 Usage requirements ...................................................................................................... 51 4.2 Functional Block “Room Light Setpoint” ................................................................... 51 4.2.1 Definitions......................................................................................................... 51 4.2.2 Functional specification .................................................................................... 51 4.2.3 FB description ................................................................................................... 51 4.3 Functional Block “Room Light Sensor” (RLS) ............................................................ 57 4.3.1 Definitions......................................................................................................... 57 4.3.2 Functional specification .................................................................................... 57 4.3.3 FB description ................................................................................................... 58 4.4 Functional Block “Room Light Controller” (RLC) ..................................................... 60 4.4.1 Definitions......................................................................................................... 60 4.4.2 Functional specification .................................................................................... 60 4.4.3 FB description ................................................................................................... 60

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 4 f 67


-----

### 1 Introduction

#### 1.1 Overview of the application

**Light sensor**

**Push Button**

**ACTUATOR 1**

**Switch**

**ACTUATOR 2**

**Toggle**

**ACTUATOR 3**

**Motion detector**

**DIMMER**

**Figure 1 – The application “Lighting”**

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

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 5 f 67

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

#### 1.3 Channel overview

Channel Code Channel Name

0002h CH_PB_Toggle

0003h CH_PB_Timed

0004h CH_PB_Timed_Info

0005h CH_PB_Dimmer

0006h CH_PB_Dimmer_Toggle

0007h CH_PB_Scene_Numbered

0008h CH_PB_Scene

0009h CH_Switch

000Ah CH_Switch_Info

000Bh CH_Switch_Forced

000Ch CH_Switch_Dimmer

000Dh CH_Switch_Dimmer_Info

000Eh CH_Switch_Dimmer_Toggle

000Fh CH_Switch_Scene_Numbered

0010h CH_Switch_Scene

0011h CH_Light_Setpoint_Controller

0012h CH_Light_Sensor

0013h CH_Motion_Detector_Basic

0014h CH_Motion_Detector_Complex

001Eh CH_Switch_Operation_Mode

0020h CH_PushButton

0100h CH_Status_Info

0101h CH_Binary_Actuator_Basic

0102h CH_Light_Actuator_Complex

0103h CH_Light_Actuator_Scene

0104h CH_Light_Actuator_Controlled

0105h CH_Dimming_Actuator_Basic

0106h CH_Dimming_Actuator_Complex

0107h CH_Dimming_Actuator_Scene

020Ah CH_LightSensor_Slave

020Bh CH_Light_Setpoint_Controller_Info

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 6 f 67

|Channel Code|Channel Name|
|---|---|
|0002h|CH_PB_Toggle|
|0003h|<br>CH_PB_Timed|
|0004h|<br>CH_PB_Timed_Info|
|0005h|<br>CH_PB_Dimmer|
|0006h|<br>CH_PB_Dimmer_Toggle|
|0007h|<br>CH_PB_Scene_Numbered|
|0008h|<br>CH_PB_Scene|
|0009h|<br>CH_Switch|
|000Ah|<br>CH_Switch_Info|
|000Bh|<br>CH_Switch_Forced|
|000Ch|<br>CH_Switch_Dimmer|
|000Dh|<br>CH_Switch_Dimmer_Info|
|000Eh|<br>CH_Switch_Dimmer_Toggle|
|000Fh|<br>CH_Switch_Scene_Numbered|
|0010h|<br>CH_Switch_Scene|
|0011h|<br>CH_Light_Setpoint_Controller|
|0012h|<br>CH_Light_Sensor|
|0013h|<br>CH_Motion_Detector_Basic|
|0014h|<br>CH_Motion_Detector_Complex|
|001Eh|<br>CH_Switch_Operation_Mode|
|0020h|<br>CH_PushButton|
|0100h|<br>CH_Status_Info|
|0101h|<br>CH_Binary_Actuator_Basic|
|0102h|<br>CH_Light_Actuator_Complex|
|0103h|<br>CH_Light_Actuator_Scene|
|0104h|<br>CH_Light_Actuator_Controlled|
|0105h|<br>CH_Dimming_Actuator_Basic|
|0106h|<br>CH_Dimming_Actuator_Complex|
|0107h|<br>CH_Dimming_Actuator_Scene|
|020Ah|<br>CH_LightSensor_Slave|
|020Bh|<br>CH_Light_Setpoint_Controller_Info|


-----

### 2 Channels Lighting

#### 2.1 CH_PB_Toggle (Channel Code 0002h)

- **Name:** CH_PB_Toggle

- **ID:** 0002h

- **Classification:** sensor

- **Functional Block:**

    - 421 – FB Switching Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

SSB.Info On Off IOO **CH_PB_Toggle**

SOO SSB.Switch On Off

**_Parameters_**

- **Description:**

See FB Switching Sensor Basic (SSB).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 421 / Info On Off Info On Off 1 CC_Switch_OnOff_Status I

2 421 / Switch On Off OnOff 1 CC_Switch_OnOff CC_Logical O L

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 7 f 67

|IOO|CH PB Toggle<br>_ _|SOO|
|---|---|---|
||||
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|421 / Info On Off|Info On Off|1|CC_Switch_OnOff_Status||I|
|2|421 / Switch On Off|OnOff|1|<br>CC_Switch_OnOff|<br>CC_Logical|O L|


-----

#### 2.2 CH_PB_Timed (Channel Code 0003h)

- **Name:** CH_PB_Timed

- **ID:** 0003h

- **Classification:** sensor

- **Functional Block:**

    - 406 – FB Timed Sensor (TS)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_timed**


TSS TS.Timed Start Stop

**_Parameters_**

- **Description:**

See FB Timed Sensor.

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 406 / Timed Start Stop Timed Start Stop 1 CC_Timed O L

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 8 f 67

|CH PB timed<br>_ _|TSS|
|---|---|
|**CH_PB_timed**||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|406 / Timed Start Stop|Timed Start Stop|1|CC_Timed||O L|


-----

#### 2.3 CH_PB_Timed_Info (Channel Code 0004h)

- **Name:** CH_PB_Timed_Info

- **ID:** 0004h

- **Classification:** sensor

- **Functional Block:**

    - 406 - FB Timed Sensor (TS)

    - 421 – FB Switching Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_Timed_Info**


SSB.Info On Off IOO TSS TS.Timed StartStop

**_Parameters_**

- **Description:**

Grouping of functionality from FB Timed Sensor and FB Switching Sensor Basic. There are no
relationships between the Functional Blocks.

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 421 / Info On Off Info On Off 1 CC_Switch_OnOff_Status I

2 406 / Timed Start Stop Timed StartStop 1 CC_Timed O L

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 9 f 67

|IOO|CH PB Timed Info<br>_ _ _|TSS|
|---|---|---|
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|421 / Info On Off|Info On Off|1|CC_Switch_OnOff_Status||I|
|2|406 / Timed Start Stop|Timed StartStop|1|<br>CC_Timed||O L|


-----

#### 2.4 CH_PB_Dimmer (Channel Code 0005h)

- **Name:** CH_PB_Dimmer

- **ID:** 0005h

- **Classification:** sensor

- **Functional Block:**

    - 420 – FB Dimming Sensor Basic (DSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_Dimmer**


SOO DSB.Switch On Off

**_Parameters_** RSC DSB.Relative Setvalue Control

PB_Action P1

- **Description:**

See FB Dimming Sensor Basic (DSB).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 420 / Switch On Off OnOff 1 CC_Switch_OnOff CC_Logical O L

2 420 / Relative Setvalue Dimming Ctrl 1 CC_Dimming_Ctrl O
Control

- **Parameter table:**

Index Name Identifier Type Recommended default value Bit Offset

1 PB_Action P1 PART_UpDown_Action UP 7

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 10 f 67

|P1|CH PB Dimmer<br>_ _|SOO|
|---|---|---|
|P1|**CH_PB_Dimmer**|RSC|
|P1|**CH_PB_Dimmer**||
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|420 / Switch On Off|OnOff|1|CC_Switch_OnOff|CC_Logical|O L|
|2|420 / Relative Setvalue<br>Control|Dimming Ctrl|1|<br>CC_Dimming_Ctrl||O|

|Index|Name|Identifier|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|PB_Action|P1|PART_UpDown_Action|UP|7|


-----

#### 2.5 CH_PB_Dimmer_Toggle (Channel Code 0006h)

- **Name:** CH_PB_Dimmer_Toggle

- **ID:** 0006h

- **Classification:** sensor

- **Functional Block:**

    - 420 – FB Dimming Sensor Basic (DSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_PB_Dimmer_Toggle**

DSB.Info On Off IOO SOO DSB.Switch On Off

**_Parameters_** RSC DSB.Relative Setvalue Control

- **Description:**

See FB Dimming Sensor Basic (DSB).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 420 / Info On Off Info On Off 1 CC_Switch_OnOff_Status I

2 413 / Switch On Off OnOff 1 CC_Switch_OnOff CC_Logical O L

3 413 / Relative Dimming Ctrl 1 CC_Dimming_Ctrl O
Setvalue Control

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 11 f 67

|IOO|CH PB Dimmer Toggle<br>_ _ _|SOO|
|---|---|---|
|||RSC|
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|420 / Info On Off|Info On Off|1|CC_Switch_OnOff_Status||I|
|2|413 / Switch On Off|OnOff|1|<br>CC_Switch_OnOff|<br>CC_Logical|O L|
|3|413 / Relative<br>Setvalue Control|Dimming Ctrl|1|<br>CC_Dimming_Ctrl||<br>O|


-----

#### 2.6 CH_PB_Scene_Numbered (Channel Code 0007h)

- **Name:** CH_PB_Scene_Numbered

- **ID:** 0007h

- **Classification:** sensor

- **Functional Block:**

    - 403 –FB Scene Sensor (ScS)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_Scene_Numbered**


SN ScS.Scene Number

**_Parameters_**

Scene number P1

- **Description:** **See Functional Block FB Scene Sensor.**
The range for the parameter “Scene number” is restricted frm 0 to 7 for the E-Mode
Management Client.

- **Datapoint list:**

Subun Flags
Index FB / DP_Name Name Main CC Additional CCs

it (i/o,x,v,…)

1 403 / Scene Number Scene number 1 CC_Scene_Number O L

- **Parameter table:**

Recommended default
Index Identifier Name Type Bit Offset

value

1 P1 Scene number PART_Scene_Number 0 2

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 12 f 67

|P1|CH PB Scene Numbered<br>_ _ _|SN|
|---|---|---|
|P1|**CH_PB_Scene_Numbered**||
||||

|Index|FB / DP Name<br>_|Name|Subun<br>it|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|403 / Scene Number|Scene number|1|CC_Scene_Number||O L|

|Index|Identifier|Name|Type|Recommended default<br>value|Bit Offset|
|---|---|---|---|---|---|
|1 <br>|P1|Scene number|PART_Scene_Number|0|2|


-----

#### 2.7 CH_PB_Scene (Channel Code 0008h)

- **Name:** CH_PB_Scene

- **ID:** 0008h

- **Classification:** sensor

- **Functional Block:**

    - 403 – FB Scene Sensor (ScS)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_Scene**


SA ScS.Scene Activate

**_Parameters_** SL ScS.Scene Learn

Scene Value P1

- **Description:**

See FB Scene Sensor (ScS).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 403 / Scene AB Activate Scene Activate 1 CC_Activate CC_Switch_OnOff O L

2 403 / Scene AB Teach Scene Learn 1 CC_Learn O

- **Parameter table:**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 Scene Value PART_Scene_Value 0 7

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 13 f 67

|P1|CH PB Scene<br>_ _|SA|
|---|---|---|
|P1|**CH_PB_Scene**|SL|
|P1|**CH_PB_Scene**||
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|403 / Scene AB Activate|Scene Activate|1|CC_Activate|CC_Switch_OnOff|O L|
|2|403 / Scene AB Teach|Scene Learn|1|<br>CC_Learn||<br>O|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Scene Value|PART_Scene_Value|0|7|


-----

#### 2.8 CH_Switch (Channel Code 0009h)

- **Name:** CH_Switch

- **ID:** 0009h

- **Classification:** sensor

- **Functional Block:**

    - 421 - FB Switching Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Switch**


SOO SSB.Switch On Off

**_Parameters_**

- **Description:**

See FB Switching Sensor Basic (SSB).

- **Datapoint list**

Flags
Index FB / DP_Name Name Main CC Additional CCs
(i/o,x,v,…)

1 421 / Switch On Off OnOff CC_Switch_OnOff CC_Logical O L

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 14 f 67

|CH Switch<br>_|SOO|
|---|---|
|**CH_Switch**||

|Index|FB / DP Name<br>_|Name|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|
|1|421 / Switch On Off|OnOff|CC_Switch_OnOff|CC_Logical|O L|


-----

#### 2.9 CH_Switch_Info (Channel Code 000Ah)

- **Name:** CH_Switch_Info

- **ID:** 000Ah

- **Classification:** sensor

- **Functional Block:**

    - 421 - FB Switching Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Switch_Info**


SSB.Info On Off IOO SOO SSB.Switch On Off

**_Parameters_**

- **Description:**

See FB Switching Sensor Basic (SSB).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 421 / Info On Off Info On Off 1 CC_Switch_OnOff_Status I

2 421 / Switch On Off OnOff 1 CC_Switch_OnOff CC_Logical O L

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 15 f 67

|IOO|CH Switch Info<br>_ _|SOO|
|---|---|---|
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|421 / Info On Off|Info On Off|1|CC_Switch_OnOff_Status||I|
|2|421 / Switch On Off|OnOff|1|<br>CC_Switch_OnOff|<br>CC_Logical|O L|


-----

#### 2.10 CH_Switch_Forced (Channel Code 000Bh)

- **Name:** CH_Switch_Forced

- **ID:** 000Bh

- **Classification:** sensor

- **Functional Block:**

    - 405 - FB Priority Sensor (PS)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Switch_Forced**


FO PS.Force

**_Parameters_**

Control type P1

- **Description:**

See FB Priority Sensor (PS).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 405 / Force Forced 1 CC_Forced O L

- **Parameter table:**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 Control type PART_Boolean 0: Ctrl False 7

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 16 f 67

|P1|CH Switch Forced<br>_ _|FO|
|---|---|---|
|P1|**CH_Switch_Forced**||
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|405 / Force|Forced|1|CC_Forced||O L|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Control type|PART_Boolean|0: Ctrl False|7|


-----

#### 2.11 CH_Switch_Dimmer (Channel Code 000Ch)

- **Name:** CH_Switch_Dimmer

- **ID:** 000Ch

- **Classification:** sensor

- **Functional Block:**

    - 420 - FB Dimming Sensor Basic (DSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Switch_Dimmer**

SOO DSB.Switch On Off

**_Parameters_** RSC DSB.Relative Setvalue Control

- **Description:**

See FB Dimming Sensor Basic (DSB).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 420.OnOff OnOff 1 CC_Switch_OnOff CC_Logical O L

2 420.Dimming Ctrl Dimming Ctrl 1 CC_Dimming_Ctrl O

#### 2.12 CH_Switch_Dimmer_Info (Channel Code 000Dh)

- **Name:** CH_Switch_Dimmer_Info

- **ID:** 000Dh

- **Classification:** sensor

- **Functional Block:**

    - 420 - FB Dimming Sensor Basic (DSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Switch_Dimmer_Info**

DSB.Info On Off IOO SOO DSB.Switch On Off

RSC DSB.Relative Setvalue Control

**_Parameters_**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 17 f 67

|CH Switch Dimmer<br>_ _|SOO|
|---|---|
|**CH_Switch_Dimmer**|RSC|
|**CH_Switch_Dimmer**||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|420.OnOff|OnOff|1|CC_Switch_OnOff|CC_Logical|O L|
|2|420.Dimming Ctrl|Dimming Ctrl|1|<br>CC_Dimming_Ctrl||O|

|IOO|CH Switch Dimmer Info<br>_ _ _|SOO|
|---|---|---|
|||RSC|
||||


-----

- **Description:**

See FB Dimming Sensor Basic (DSB).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 420.Info On Off Info On Off 1 CC_Switch_OnOff_Status I

2 420.Switch On Off OnOff 1 CC_Switch_OnOff CC_Logical O L

3 420.Relative Setvalue Dimmer Ctrl 1 CC_Dimming_Ctrl O
Control

#### 2.13 CH_Switch_Dimmer_Toggle (Channel Code 000Eh)

- **Name:** CH_Switch_Dimmer_Toggle

- **ID:** 000Eh

- **Classification:** sensor

- **Functional Block:**

    - 420 – FB Dimming Sensor Basic (DSB).

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Switch_Dimmer_Toggle**

DSB.Info On Off IOO SOO DSB.Switch On Off

**_Parameters_** RSC DSB.Relative Setvalue Control

- **Description:**

See FB Dimming Sensor Basic (DSB).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 420 / Info On Off Info On Off 1 CC_Switch_OnOff_Status I

2 420 / Switch On Off OnOff 1 CC_Switch_OnOff CC_Logical O L

3 420 / Relative Setvalue Dimmer Ctrl 1 CC_Dimming_Ctrl O
Control

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 18 f 67

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|420.Info On Off|Info On Off|1|CC_Switch_OnOff_Status||I|
|2|420.Switch On Off|OnOff|1|<br>CC_Switch_OnOff|<br>CC_Logical|O L|
|3|420.Relative Setvalue<br>Control|Dimmer Ctrl|1|<br>CC_Dimming_Ctrl||<br>O|

|IOO|CH Switch Dimmer Toggle<br>_ _ _|SOO|
|---|---|---|
|<br>IOO|**CH_Switch_Dimmer_Toggle**|RSC|
|<br>IOO|**CH_Switch_Dimmer_Toggle**||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|420 / Info On Off|Info On Off|1|CC_Switch_OnOff_Status||I|
|2|420 / Switch On Off|OnOff|1|<br>CC_Switch_OnOff|CC_Logical|O L|
|3|420 / Relative Setvalue<br>Control|Dimmer Ctrl|1|<br>CC_Dimming_Ctrl|<br>|<br>O|


-----

#### 2.14 CH_Switch_Scene_Numbered (Channel Code 000Fh)

- **Name:** CH_Switch_Scene_Numbered

- **ID:** 000Fh

- **Classification:** sensor

- **Functional Block:**

    - 2x 403 - FB Scene Sensor (ScS)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Switch_Scene_Numbered**

SN ScS.Scene Number

**_Parameters_**

Scene number 1 P1

Scene number 2 P2

  - **Description:**
Grouping of two FBs Scene Sensor, see equivalent descriptions. The two Functional Blocks of
same type use a shared output Datapoint. The two FB themselves have moreover no interaction.

**_Inputs_** **_Outputs_**

**FB Scene Sensor**

SN

**_Parameters_**

Scene number P1

Scene Number

**_Inputs_**

**FB Scene Sensor**

SN

**_Parameters_**

Scene number P1

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 19 f 67

|P1|CH Switch Scene Numbered<br>_ _ _|SN|
|---|---|---|
|<br>P1|**CH_Switch_Scene_Numbered**||
|P2|P2|P2|
||||

|P1|FB Scene Sensor|
|---|---|

|Col1|FB Scene Sensor|
|---|---|
|||


-----

This Channel contains 4 human interaction points, two groups concerning to the FB Scene Sensor
interaction points.

There are 4 possible interactions:

1. on interaction 1(e.g. long press on ON) send the value of parameter P1 “scene number 1”
with the bit “ learn ” set to 1
2. on interaction 2(e.g. long press on OFF) send the value of parameter P2 “scene number
2”with the bit “ learn ” set to 1
3. on interaction 3(e.g. short press on ON) send the value of parameter P1 “scene number
1”with the bit “ learn ” set to 0
4. on interaction 4(e.g. - short press on OFF) send the value of parameter P2 “scene number
2”with the bit “ learn ” set to 0

The range for the parameter “Scene number” is restricted from 0 to 7 for the E-Mode
Management Client.

- **Datapoint list:**

Index FB / DP_Name Name Subunit Main CC Additional CCs Flags (i/o,x,v,…)

1 403 / Scene Number Scene number 1 CC_Scene_Number O L

- **Parameter table:**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 Scene number 1 PART_Scene_Number 0 2

2 P2 Scene number 2 PART_Scene_Number 0 10

#### 2.15 CH_Switch_Scene (Channel Code 0010h)

- **Name:** CH_Switch_Scene

- **ID:** 0010h

- **Classification:** sensor

- **Functional Block:**

    - 2x 403 - FB Scene Sensor (ScS)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Switch_Scene**

SA ScS.Scene AB Activate

**_Parameters_** SL ScS.Scene AB Teach

Scene value P1

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 20 f 67

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags (i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|<br>403 / Scene Number|Scene number|1|CC_Scene_Number||O L|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Scene number 1|PART_Scene_Number|0|2|
|2|P2|Scene number 2|<br>PART_Scene_Number|0|10|

|P1|CH Switch Scene<br>_ _|SA|
|---|---|---|
|<br>P1|**CH_Switch_Scene**|SL|
|<br>P1|**CH_Switch_Scene**||
||||


-----

  - **Description:**

Grouping of two FB Scene Sensor, see equivalent descriptions. The two FBs of the same
type use a shared Output. The two FB themselves moreover have no interaction.

**_Inputs_** **_Outputs_**

**FB_PB_Scene**

SABA Scene AB Activate

**_Parameters_**

Scene value P1 SABT Scene AB Teach

**_Inputs_**

**FB_PB_Scene**

SABA

**_Parameters_**

Scene value P1 SABT

This Channel contains 4 human interaction points, two groups concerning to the FB Scene
interaction points.

There are 4 possible interactions :

1. on interaction 1 (e.g. long press on ON) send the value Scene value via the Scene AB
Teach Output
2. on interaction 2 (e.g. long press on OFF) send the value inverted(Scene value) via the
Scene AB Teach Output
3. on interaction 3 (e.g. short press on ON) send the value Scene value via the Scene AB
Activate Output
4. on interaction 4 (e.g. short press on OFF) send the value inverted(Scene value) via the
Scene AB Activate Output

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 403 / Scene AB Scene_Activate 1 CC_Activate CC_Switch_OnOff O L
Activate

2 403 / Scene AB Teach Scene learn 1 CC_Learn O

- **Parameter table:**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 Scene value PART_Scene_Value 1 7

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 21 f 67

|P1|FB PB Scene<br>_ _|SABA|Col4|Col5|
|---|---|---|---|---|
|P1|**FB_PB_Scene** <br>|SABT|SABT||
|P1|**FB_PB_Scene** <br>|SABT|||
|P1|**FB_PB_Scene** <br>|SABT|SABT|SABT|

|Col1|FB PB Scene<br>_ _|
|---|---|
|||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|403 / Scene AB<br>Activate<br>|Scene_Activate|1|CC_Activate|CC_Switch_OnOff|O L|
|2|403 / Scene AB Teach|Scene learn|1|CC_Learn||O|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Scene value|PART_Scene_Value|1|7|


-----

#### 2.16 CH_Light_Setpoint_Controller (Channel Code 0011h)

- **Name:** CH_Light_Setpoint_Controller

- **ID:** 0011h

- **Classification:** functional module

- **Functional Block:**

    - 408 - FB_Room_Light_Setpoint (see 4.2 in this document)

    - 415 - FB_Room_Light_Controller (see 4.4 in this document)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Light_SetPoint_Controller**

RLS.Dimming Ctrl DC DV RLC.Dimming value

RLS.OnOff OO

RLS.Forced FO

RLC.Room illumination RI

RLC.Scene_Number SN

**_Parameters_**

Light Setpoint Low P1

Light Setpoint High P2

Light Setpoint Forced P3

- **Description:**

See Functional Block FB_Room_Light_Setpoint (clause 4.2), FB_Room_Light_Controller
(clause 4.4).

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 22 f 67

|DC|CH Light SetPoint Controller<br>_ _ _|DV|
|---|---|---|
|OO|OO||
|FO|FO|FO|
|RI|RI|RI|
|SN|SN|SN|
|P1|P1|P1|
|P2|P2|P2|
|P3|P3|P3|
||||


-----

**_Inputs_** FB_Room_Light_Setpoint **_Outputs_**

RLS.OO

RLS.DC

RLS.FO

FB_Room_Light_Controller

RLS

RLC.RI RLC.DV

LAM

RLC.SN

- **Datapoint list:**

Index FB / DP_Name Name Subunit Main CC Additional CCs [Flags ]

(i/o,x,v,…)

1 408 / Dimming CtrlC Dimming Ctrl 1 CC_Dimming_Ctrl I

2 408 / OnOff OnOff 1 CC_Switch_OnOff CC_Logical I L

3 408 / Forced Forced 1 CC_Forced I

4 415 / Room Illumination Room illumination 1 CC_Illumination I

5 415 / Scene Numbered Scene numbered 1 CC_Scene_Number I

6 415 / Dimming Value Dimming value 1 CC_Dimming_Value O LA

- **Parameter table:**

Bit
Index Identifier Name Type Recommended default value
Offset

1 P1 Light Setpoint Low PART_Light_Value 50 lux 0

2 P2 Light SetPoint High PART_Light_Value 1000 lux 16

3 P3 Light SetPoint_Forced PART_Light_Value 500 lux 32

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 23 f 67

|Inputs<br>RLS.OO|FB Room Light Setpoint<br>_ _ _|
|---|---|
|**_Inputs_**<br>RLS.OO||
|RLS.DC|RLS.DC|
|RLS.FO|RLS.FO|

|Col1|FB Room Light Controller<br>_ _ _|Col3|
|---|---|---|
||||
|LAM<br>RLC.SN|LAM<br>RLC.SN||
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|408 / Dimming CtrlC|Dimming Ctrl|1|CC_Dimming_Ctrl||I|
|2|408 / OnOff|OnOff|1|<br>CC_Switch_OnOff|CC_Logical|I L|
|3|408 / Forced|Forced|1|<br>CC_Forced||<br>I|
|4|415 / Room Illumination|Room illumination|1|<br>CC_Illumination||I|
|5|415 / Scene Numbered|Scene numbered|1|<br>CC_Scene_Number||I|
|6|415 / Dimming Value|Dimming value|1|<br>CC_Dimming_Value||O LA|

|Index|Identifier|Name|Type|Recommended default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Light Setpoint Low|PART_Light_Value|50 lux|0|
|2|P2|Light SetPoint High|<br>PART_Light_Value|1000 lux|16|
|3|P3|Light SetPoint_Forced|<br>  PART_Light_Value|500 lux|32|


-----

#### 2.17 CH_Light_Sensor (Channel Code 0012h)

- **Name:** CH_Light_Sensor

- **ID:** 0012h

- **Classification:** sensor

- **Functional Block:**

    - 409 – FB Room Light Sensor (RLS)(see 4.3 in this document)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Light_Sensor**


RI RLS.Room Illumination

**_Parameters_**

COV P1

Repetition Value P2

- **Description:**

See FB Room Light Sensor (RLS)(see 4.3 in this document).

- **Datapoint list:**

Additional Flags
Index FB / DP_Name Name Subunit Main CC

CCs (i/o,x,v,…)

0 409 / Room Illumination Room illumination 1 CC_Illumination O L

- **Parameter table:**

Recommended default
Index Name Identifier Type Bit Offset

value

0 Change of value in lux P1 PART_COV_Lux 10 lux 0

1 Repetition time P2 PART_Time_Delay 5 min 16

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 24 f 67

|P1|CH Light Sensor<br>_ _|RI|
|---|---|---|
|P1|**CH_Light_Sensor** <br> <br>||
|P2|P2|P2|
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|0 <br>|409 / Room Illumination|Room illumination|1|CC_Illumination||O L|

|Index|Name|Identifier|Type|Recommended default<br>value|Bit Offset|
|---|---|---|---|---|---|
|0|Change of value in lux|P1|PART_COV_Lux|10 lux|0|
|1|Repetition time<br>|P2|<br>PART_Time_Delay|5 min|16|


-----

#### 2.18 CH_Motion_Detector_Basic (Channel Code 0013h)

- **Name:** CH_Motion_Detector_Basic

- **ID:** 0013h

- **Classification:** sensor

- **Functional Block:**

    - 414 – FB Movement Detector for Lighting (MDL)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Motion_Detector_Basic**

MDL.Info OnOff IOO TSS MDL.Timed StartStop

**_Parameters_**

Cycle time P1

- **Description:**

See FB Movement Detector for Lighting.

The parameter Cycle_time is fixed to 45 s.

The recommended value for the parameter of the timed function in the actuator linked to this
channel is 1 min.

- **Datapoint list:**

Additional Flags
Index FB / DP_Name Name Subunit Main CC

CCs (i/o,x,v,…)

1 414 / InfoOnOff Info On Off 1 CC_Switch_OnOff_Status I

2 414 / Timed StartStop Timed StartStop 1 CC_Timed O L

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 25 f 67

|IOO|CH Motion Detector Basic<br>_ _ _|TSS|
|---|---|---|
|P1|P1||
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|414 / InfoOnOff|Info On Off|1|CC_Switch_OnOff_Status||I|
|2|414 / Timed StartStop|Timed StartStop|1|<br>CC_Timed||O L|


-----

#### 2.19 CH_Motion_Detector_Complex (Channel Code 0014h)

- **Name:** CH_Motion_Detector_Complex

- **ID:** 0014h

- **Classification:** sensor

- **Functional Block:**

    - 414 – FB Movement Detector for Lighting (MDL)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Motion_Detector_Complex**

MDL.Info OnOff IOO TSS MDL.Timed StartStop

MDL.LD LD

**_Parameters_**

Cycle time P1

Trigger Continue P2

- **Description:**

See FB Movement Detector for Lighting (MDL).

- **Datapoint list:**

Additional Flags
Index FB / DP_Name Name Subunit Main CC

CCs (i/o,x,v,…)

1 414 / Info On Off Info On Off 1 CC_Switch_OnOff_Status I

2 414 / Lock Device Enable 1 CC_Enable I

3 414 / Timed StartStop Timed StartStop 1 CC_Timed O L

- **Parameter table:**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 Cycle_time PART_Cycle_Time 45 s 0

2 P2 Trigger_Continue PART_Boolean Disable = FALSE 15

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 26 f 67

|Info OnOff IOO<br>MDL.LD LD<br>Parameters<br>Cycle time P1<br>er Continue P2|CH Motion Detector Complex<br>_ _ _|TSS|
|---|---|---|
|<br>Info OnOff<br>IOO<br>MDL.LD<br>LD<br>**_Parameters_**<br>Cycle time<br>P1<br>er Continue<br>P2|**CH_Motion_Detector_Complex**||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1 <br>|414 / Info On Off|Info On Off|1|CC_Switch_OnOff_Status||I|
|2 <br>|414 / Lock Device|Enable|1|<br>CC_Enable||I|
|3 <br>|414 / Timed StartStop|Timed StartStop|1|<br>CC_Timed||O L|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Cycle_time|PART_Cycle_Time|45 s|0|
|2|P2|<br>Trigger_Continue|<br>PART_Boolean|Disable = FALSE|15|


-----

#### 2.20 CH_Switch_Operation_Mode (Channel Code 001Eh)

- **Name:** CH_Switch_Operation_Mode

- **ID:** 001Eh

- **Classification:** sensor

- **Functional Block:**

    - 421 - FB Switching Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Switch_Operation_Mode**

Operation Mode =

SOO SSB.Switch On Off

**_Parameters_**

- **Description:**

On human interaction, the state of the switch is sent. There are 2 possible interactions:

1. on interaction 1 send value 1 (e.g. when pressed on ON)
2. on interaction 2 send value 0 (e.g. when pressed on OFF)

- **Datapoint list:**

Index FB / DP_Name Name Main CC Additional CCs Flags (i/o,x,v,…)

1 421 / Switch On Off Operation Mode CC_Operation_Mode O L

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 27 f 67

|CH Switch Operation Mode<br>_ _ _|SOO|
|---|---|
|**CH_Switch_Operation_Mode**||

|Index|FB / DP Name<br>_|Name|Main CC|Additional CCs|Flags (i/o,x,v,…)|
|---|---|---|---|---|---|
|1|<br>421 / Switch On Off|Operation Mode|CC_Operation_Mode||O L|


-----

#### 2.21 CH_PushButton (Channel Code 0020h)

- **Name:** CH_PushButton

- **ID:** 0020h

- **Classification:** sensor

- **Functional Block:**

    - 421 - FB Switching Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PushButton**


SOO SSB.Switch On Off

**_Parameters_**

Switch action P1

- **Description:**

See FB Switching Sensor Basic (SSB).

- **Datapoint list:**

###### Flags Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 421 / Switch On Off OnOff 1 CC_Switch_OnOff CC_Logical O L

- **Parameter table:**

###### Recommended Bit Index Identifier Name Type
 default Value Offset

1 P1 Switch action PART_OnOff_Action 11b : OnOff 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 28 f 67

|P1|CH PushButton<br>_|SOO|
|---|---|---|
|P1|**CH_PushButton** <br>||
||||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1 <br>|421 / Switch On Off|OnOff|1|CC_Switch_OnOff|CC_Logical|O L|

|Index|Identifier|Name|Type|Recommended<br>default Value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Switch action|PART_OnOff_Action|11b : OnOff|6|


-----

#### 2.22 CH_PB_Dimming_Value (Channel Code 0029h)

- **Name:** CH_PB_Dimming_Value

- **ID:** 0029h

- **Classification:** sensor

- **Functional Block:**

      - 420 - FB Dimming Sensor Basic (DSB) (See [01]).

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_PB_Dimming_Value**


ASC 420.AbsoluteSetvalueControl

**_Parameters_**

AbsoluteSetvalue P1

- **Description:**

Please refer to the specification of FB Dimming Sensor Basic in [01].

- **Datapoint list:**

Sub- Flags

Index [FB Datapoint ] Name Main CC Additional CCs

ID unit (i/o,x,v, …)

1 420.ASC AbsoluteSetvalueControl 1 CC_Dimming_Value O L

- **Parameter table**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 AbsoluteSetvalue PART_Dimming_Value 255 : 100 % 0

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 29 f 67

|Parameters<br>uteSetvalue P1|CH PB Dimming Value<br>_ _ _|ASC|
|---|---|---|
|<br>**_Parameters_** <br>uteSetvalue <br>P1|**CH_PB_Dimming_Value**<br>||

|Index|FB Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|1|420.ASC|AbsoluteSetvalueControl|1|CC_Dimming_Value||O L|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|AbsoluteSetvalue|PART_Dimming_Value<br>|255 : 100 %|0|


-----

#### 2.23 CH_Push_Button_Info (Channel Code 002Ah)

- **Name:** CH_Push_Button_Info

- **ID:** 002Ah

- **Classification:** sensor

- **Functional Block:**

      - 421 – FB Switching Sensor Basic (SSB) (See [01]).

- **Graphical** **representation**

**_Inputs_** **_Outputs_**


**CH_Push_Button_Info**


421.InfoOnOff IOO SOO 421.SwitchOnOff

**_Parameters_**

421.OnOffAction P1

- **Description:**

Please refer to the FB specification in [01]).

- **Datapoint list:**

Sub- Flags
Index FB Datapoint ID Name Main CC Additional CCs

unit (i/o,x,v…..)

1 421.IOO InfoOnOff 1 CC_Switch_OnOff_Status I

2 421.SOO SwitchOnOff 1 CC_Switch_OnOff CC_Logical O L

- **Parameter table**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 OnOffAction PART_Switch_Value 11b: OnOff 6

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 30 f 67

|.InfoOnOff IOO<br>Parameters<br>nOffAction P1|CH Push Button Info<br>_ _ _|SOO|
|---|---|---|
|<br>.InfoOnOff <br>IOO<br>**_Parameters_**  <br>nOffAction<br>P1|**CH_Push_Button_Info**<br>  <br>||

|Index|FB Datapoint ID|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|421.IOO|InfoOnOff|1|CC_Switch_OnOff_Status||I|
|2|421.SOO|SwitchOnOff|1|<br>CC_Switch_OnOff|CC_Logical|O L|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|OnOffAction|PART_Switch_Value|11b: OnOff|6|


-----

#### 2.24 CH_PB_Dimming_Value_Info (Channel Code 002Ch)

- **Name:** CH_PB_Dimming_Value_Info

- **ID:** 002Ch

- **Classification:** sensor

- **Functional Block:**

      - 420 – FB Dimming Sensor Basic (See [01].)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_PB_Dimming_Value_Info**

420.InfoOnOff IOO ASC 420.AbsoluteSetvalueControl

**_Parameters_**

420.SetvalueControl P1

- **Description:**

Please refer to the specification of the FB Dimming Sensor Basic in [01].

- **Datapoint list:**

FB

Sub- Additional Flags

Index Datapoint Name Main CC

unit CCs i/o,x,v…..)

ID

1 420.IOO InfoOnOff 1 CC_Switch_OnOff_Status I

2 420.ASC AbsoluteSetvalueControl 1 CC_Dimming_Value O L

- **Parameter table:**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 SetvalueControl PART_Dimming_Value 255 : 100% 0

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 31 f 67

|.InfoOnOff IOO<br>Parameters<br>alueControl P1|CH PB Dimming Value Info<br>_ _ _ _|ASC|
|---|---|---|
|<br> <br>.InfoOnOff <br>IOO<br>**_Parameters_**  <br>alueControl<br>P1|<br>**CH_PB_Dimming_Value_Info**<br>  <br>||

|Index|FB<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|420.IOO|InfoOnOff|1|CC_Switch_OnOff_Status||I|
|2|420.ASC|AbsoluteSetvalueControl|1|<br>CC_Dimming_Value||O L|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|SetvalueControl|PART_Dimming_Value|255 : 100%|0|


-----

#### 2.25 CH_Switch_Dimming_Value_Info (Channel Code 002Dh)

- **Name:** CH_Switch_Dimming_Value_Info

- **ID:** 002Dh

- **Classification:** Sensor

- **Functional Block:**

      - 420 – FB Dimming Sensor Basic (See [01].)

- **Graphical representation**

**_Inputs_** **_Outputs_**

**CH_Switch_Dimming_Value_Info**

420.InfoOnOff IOO ASC 420.AbsoluteSetvalueControl

**_Parameters_**

AbsoluteSetvalue1 P1

AbsoluteSetvalue2 P2

- **Description:**

Please refer to the specification of FB Dimming Sensor Basic in [01].

- **Datapoint list:**

Sub- Additional Flags

Index [FB Datapoint ] Name Main CC

ID unit CCs (i/o,x,v…..)

1 420.IOO InfoOnOff 1 CC_Switch_OnOff_Status I

2 420.ASC AbsoluteSetvalueContro 1 CC_Dimming_Value O L
l

- **Parameter table:**

Index Identifier Name Type Recommended default value Bit-Offset

1 P1 AbsoluteSetvalue1 PART_Dimming_Value 255: 100 % 0

2 P2 AbsoluteSetvalue 2 PART_Dimming_Value 0 :  0 % 8

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 32 f 67

|0.InfoOnOff IOO<br>Parameters<br>teSetvalue1 P1<br>teSetvalue2 P2|CH Switch Dimming Value Info<br>_ _ _ _|ASC|
|---|---|---|
|<br>0.InfoOnOff <br>IOO<br>**_Parameters_**  <br>teSetvalue1<br>P1<br>teSetvalue2<br>P2|**CH_Switch_Dimming_Value_Info**<br>  <br> <br>||

|Index|FB Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|420.IOO|InfoOnOff|1|CC_Switch_OnOff_Status||I|
|2|420.ASC|AbsoluteSetvalueContro<br>l|1|<br>CC_Dimming_Value||O L|

|Index|Identifier|Name|Type|Recommended default value|Bit-Offset|
|---|---|---|---|---|---|
|1|P1|AbsoluteSetvalue1|PART_Dimming_Value|255: 100 %|0|
|2|P2|<br>AbsoluteSetvalue 2|<br>  PART_Dimming_Value|0 :    0 %|8|


-----

#### 2.26 CH_Status_Info (Channel Code 0100h)

- **Name:** CH_Status_Info

- **ID:** 0100h

- **Classification:** actuator

- **Functional Block:**

    - 421 – FB Switching Sensor Basic (SSB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

SSB.Info On Off IOO **CH_Status_Info**

**_Parameters_**

- **Description:**

See FB Switching Sensor Basic (SSB).

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 421 / Info On Off Info On Off 1 CC_Switch_OnOff_Status CC_Logical I L

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 33 f 67

|IOO|CH Status Info<br>_ _|
|---|---|
|||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|421 / Info On Off|Info On Off|1|CC_Switch_OnOff_Status|CC_Logical|I L|


-----

#### 2.27 CH_Binary_Actuator_Basic (Channel Code 0101h)

- **Name:** CH_Binary_Actuator_Basic

- **ID:** 0101h

- **Classification:** actuator

- **Functional Block:**

    - 417 - FB Light Switching Actuator Basic (LSAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

LSAB.Switch OnOff SOO **CH_Binary_Actuator_Basic**

IOO LSAB.Info On Off

**_Parameters_**

- **Description:**

See FB Light Switching Actuator Basic (LSAB).

- **Datapoint list:**

Sub- Flags
Index FB / DP_Name Name Main CC Additional CCs

unit (i/o,x,v,…)

1 417 / Switch On Off OnOff 1 CC_Switch_OnOff I L

2 417 / Info On Off Info On Off 1 CC_Switch_OnOff_Status CC_Logical O V LA

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 34 f 67

|SOO|CH Binary Actuator Basic<br>_ _ _|IOO|
|---|---|---|
||||
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|417 / Switch On Off|OnOff|1|CC_Switch_OnOff||I L|
|2|417 / Info On Off|Info On Off|1|<br>CC_Switch_OnOff_Status|CC_Logical|O V LA|


-----

#### 2.28 CH_Light_Actuator_Complex (Channel Code 0102h)

- **Name:** CH_Light_Actuator_Complex

- **ID:** 0102h

- **Classification:** actuator

- **Functional Block:**

    - 417 - FB Light Switching Actuator Basic (LSAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

LSAB.Switch On Off SOO **CH_Light_Actuator_Complex**

LSAB.Timed StartStop TSS

LSAB.Forced FO IOO LSAB.Info On Off

**_Parameters_**

timed duration P1

pre-warning duration P2

- **Description:**

See FB Light Switching Actuator Basic (LSAB).

- **Datapoint list:**

Sub Flags
Index FB / DP_Name Name Additional CCs
unit [Main CC ] (i/o,x,v,…)

1 417 / Switch On Off OnOff 1 CC_Switch_OnOff I L

2 417 / Timed Timed StartStop 1 CC_Timed I
StartStop

3 417 / Forced Forced 1 CC_Forced I

4 417 / Info On Off Info On Off 1 CC_Switch_OnOff_Status CC_Logical O V LA

- **Parameter table:**

Recommended Bit
Index Identifier Name Type

default value Offset

1 P1 Timed duration PART_Time_Delay 1 minute 0

2 P2 Pre-warning duration PART_Prewarning_Delay 0 : no prewarning 8

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 35 f 67

|SOO|CH Light Actuator Complex<br>_ _ _|IOO|
|---|---|---|
|TSS|TSS|TSS|
|FO|FO|FO|
|P1|P1||
|P2|P2|P2|
||||

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|417 / Switch On Off|OnOff|1|CC_Switch_OnOff||I L|
|2|417 / Timed<br>StartStop|Timed StartStop|1|<br>CC_Timed||I|
|3|417 / Forced|Forced|1|CC_Forced||I|
|4|417 / Info On Off|Info On Off|1|<br>CC_Switch_OnOff_Status|CC_Logical|O V LA|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Timed duration|PART_Time_Delay<br>|1 minute|0|
|2|P2|Pre-warning duration|<br>  PART_Prewarning_Delay<br>|0 : no prewarning|8|


-----

#### 2.29 CH_Light_Actuator_Scene (Channel Code 0103h)

- **Name:** CH_Light_Actuator_Scene

- **ID:** 0103h

- **Classification:** actuator

- **Functional Block:**

    - 417 - FB Light Switching Actuator Basic (LSAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

LSAB.Switch OnOff SOO **CH_Light_Actuator_Scene**

LSAB.Timed StartStop TSS

LSAB.Forced FO IOO LSAB.Info On Off

LSAB.Scene Number SN

**_Parameters_**

Timed duration P1

Pre-warning duration P2

- **Description:**

See FB Light Switching Actuator Basic.

Number of scene to be supported is 8.

- **Datapoint list:**

Additional Flags
Index FB / DP_Name Name Subunit Main CC

CCs (i/o,x,v,…)

1 417 / Switch On Off OnOff 1 CC_Switch_OnOff I L

2 417 / Timed StartStop Timed StartStop 1 CC_Timed I

3 417 / Forced Forced 1 CC_Forced I

4 417 / Scene Number Scene Number 1 CC_Scene_Number I

5 417 / Info On Off Info On Off 1 CC_Switch_OnOff_St CC_Logical O V LA
atus

- **Parameter table:**

Recommended Bit
Index Identifier Name Type

default value Offset

1 P1 Timed duration PART_Time_Delay 1 minute 0

2 P2 Pre-warning duration PART_Prewarning_Delay 0 : no prewarning 8

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 36 f 67

|itch OnOff SOO<br>ed StartStop TSS<br>SAB.Forced FO<br>ene Number SN<br>Parameters<br>ed duration P1<br>ng duration P2|CH Light Actuator Scene<br>_ _ _|IOO|
|---|---|---|
|itch OnOff<br>SOO<br>ed StartStop<br>TSS<br>SAB.Forced<br>FO<br>ene Number<br>SN<br>**_Parameters_**<br>ed duration<br>P1<br>ng duration<br>P2|**CH_Light_Actuator_Scene**||

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|417 / Switch On Off|OnOff|1|CC_Switch_OnOff||I L|
|2|417 / Timed StartStop|Timed StartStop|1|<br>CC_Timed||I|
|3|417 / Forced|Forced|1|<br>CC_Forced||I|
|4|417 / Scene Number|Scene Number|1|<br>CC_Scene_Number||I|
|5|417 / Info On Off|Info On Off|1|<br>CC_Switch_OnOff_St<br>atus|CC_Logical|O V LA|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Timed duration|PART_Time_Delay|1 minute|0|
|2|P2|Pre-warning duration|<br>PART_Prewarning_Delay|0 : no prewarning|8|


-----

#### 2.30 CH_Light_Actuator_Controlled (Channel Code 0104h)

- **Name:** CH_Light_Actuator_Controlled

- **ID:** 0104h

- **Classification:** actuator

- **Functional Block:**

    - 417 - FB Light Switching Actuator Basic (LSAB)

    - 406 - FB Timed Sensor (TS)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Light_Actuator_Controlled**

LSAB.Switch OnOff SOO IOO LSAB.Info On Off

TS.Operation Mode OM

**_Parameters_**

LSAB.Timed On Duration P1

- **Description:**

See FB Light Switching Actuator Basic and FB Timed Sensor.

**_Input_** FB Timed Sensor **_Output_**

OOI

TM OOO

TSS

FB Light Switching
Actuator Basic

SOO IOO

TSS

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 37 f 67

|SOO|CH Light Actuator Controlled<br>_ _ _|IOO|
|---|---|---|
|OM|OM||
|P1|P1|P1|
||||

|Input<br>OOI|FB Timed Sensor|
|---|---|
|**_Input_** <br>OOI|<br>|
|TM|TM|

|FB Light Switching<br>Actuator Basic|Col2|
|---|---|
|<br>|<br>|
|<br>||


-----

- **Datapoint list:**

Sub Flags
Index FB / DP_Name Name Main CC Additional CCs
unit (i/o,x,v,…)

1 406 / On Off In OnOff 1 CC_Switch_OnOff I L

2 406 / TimedMode Operation Mode 1 CC_OperationMode I

3 417 / Info On Off Info On Off 1 CC_Switch_OnOff_Status CC_Logical O V LA

- **Parameter table:**

Index Identifier Name Type Recommended default value Bit Offset

1 P1 Timed duration PART_Time_Delay 1 minute 0

#### 2.31 CH_Dimming_Actuator_Basic (Channel Code 0105h)

- **Name:** CH_Dimming_Actuator_Basic

- **ID:** 0105h

- **Classification:** actuator

- **Functional Block:**

    - 418 - FB Dimming Actuator Basic (DAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

DAB.Switch On Off SOO **CH_Dimming_Actuator_Basic**

DAB.Relative Setvalue

Control RSC IOO DAB.Info On Off

DAB.Absolute Setvalue DAB.Actual Dimming

Control ASC IDV Value

**_Parameters_**

- **Description**

See FB Dimming Actuator Basic (DAB).

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 38 f 67

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|406 / On Off In|OnOff|1|CC_Switch_OnOff||I L|
|2|406 / TimedMode|Operation Mode|1|<br>CC_OperationMode||I|
|3|417 / Info On Off|Info On Off|1|<br>CC_Switch_OnOff_Status|CC_Logical|O V LA|

|Index|Identifier|Name|Type|Recommended default value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Timed duration|PART_Time_Delay|1 minute|0|

|SOO|CH Dimming Actuator Basic<br>_ _ _|IOO|
|---|---|---|
|RSC|RSC|RSC|
|ASC|ASC|IDV|
||||


-----

- **Datapoint list:**

Sub Additional
Index FB / DP_Name Name Main CC
unit CCs

1 418 / OnOff OnOff 1 CC_Switch_OnOff

2 418 / Dimming Ctrl Dimming Ctrl 1 CC_Dimming_Ctrl

3 418 / Dimming Dimming Value 1 CC_Dimming_Value
Value

4 418 / Info On Off Info On Off 1 CC_Switch_OnOff_Status CC_Logical O V LA

5 418 / Info Dimming Info Dimming 1 CC_Dimming_Value_Statu
value Value s

#### 2.32 CH_Dimming_Actuator_Complex (Channel Code 0106h)

- **Name:** CH_Dimming_Actuator_Complex

- **ID:** 0106h

- **Classification:** actuator

- **Functional Block:**

    - 418 - FB Dimming Actuator Basic (DAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

DAB.Switch On Off SOO **CH_Dimming_Actuator_Complex**

DAB.Relative Setvalue
Control RSC

|Index|FB / DP Name<br>_|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|418 / OnOff|OnOff|1|CC_Switch_OnOff||I L|
|2|418 / Dimming Ctrl|Dimming Ctrl|1|<br>CC_Dimming_Ctrl||I|
|3|418 / Dimming<br>Value|Dimming Value|1|<br>CC_Dimming_Value||I|
|4|418 / Info On Off|Info On Off|1|CC_Switch_OnOff_Status|CC_Logical|O V LA|
|5|418 / Info Dimming<br>value|Info Dimming<br>Value|1|<br>CC_Dimming_Value_Statu<br>s||<br>O V|


DAB.Absolute Setvalue
Control DV

DAB.Timed StartStop TSS

DAB.Forced FO

**_Parameters_**

Timed duration P1

PreWarning Duration P2

- **Description:**

See FB Dimming Actuator Basic.


IOO DAB.Info On Off

DAB.Actual Dimming

ADV Value

|SOO|CH Dimming Actuator Complex<br>_ _ _|IOO|
|---|---|---|
|RSC|RSC|RSC|
|DV|DV|DV|
|TSS|TSS|ADV|
|FO|FO||
|P1|P1|P1|
|P2|P2|P2|
||||


©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 39 f 67


-----

- **Datapoint list:**

Flags

Sub- Additional
Index FB / DP_Name Name Main CC (i/o,x,v,

unit CCs

…)

1 418 / Switch OnOff OnOff 1 CC_Switch_OnOff I L

2 418 / Relative Setvalue Dimming Ctrl 1 CC_Dimming_Ctrl I
Control

3 418 / Absolute Setvalue Dimming Value 1 CC_Dimming_Value I
Control

4 418 / Timed StartStop Timed StartStop 1 CC_Timed I

5 418 / Forced Forced 1 CC_Forced I

6 418 / Info On Off Info On Off 1 CC_Switch_OnOff_Status CC_Logical O V

LA

7 418 / Actual Dimming Info Dimming 1 CC_Dimming_Value_Stat O V
Value Value us

- **Parameter table:**

Recommended default Bit
Index Identifier Name Type

value Offset

1 P1 Timed duration PART_Time_Delay 1 minute 0

2 P2 Pre-warning duration PART_Prewarning_Delay 0 : no prewarning 8

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 40 f 67

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v,<br>…)|
|---|---|---|---|---|---|---|
|1|418 / Switch OnOff|OnOff|1|CC_Switch_OnOff||I L|
|2|418 / Relative Setvalue<br>Control|Dimming Ctrl|1|<br>CC_Dimming_Ctrl||I|
|3|418 / Absolute Setvalue<br>Control|<br>Dimming Value|1|CC_Dimming_Value||I|
|4|418 / Timed StartStop|Timed StartStop|1|CC_Timed||I|
|5|418 / Forced|Forced|1|<br>CC_Forced||I|
|6|418 / Info On Off|Info On Off|1|<br>CC_Switch_OnOff_Status|CC_Logical|O V<br>LA|
|7|418 / Actual Dimming<br>Value|Info Dimming<br>Value|1|CC_Dimming_Value_Stat<br>us||O V|

|Index|Identifier|Name|Type|Recommended default<br>value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Timed duration|PART_Time_Delay|1 minute<br>|0|
|2|P2|Pre-warning duration|<br>  PART_Prewarning_Delay|0 : no prewarning<br>|8|


-----

#### 2.33 CH_Dimming_Actuator_Scene (Channel Code 0107h)

- **Name:** CH_Dimming_Actuator_Scene

- **ID:** 0107h

- **Classification:** actuator

- **Functional Block:**

    - 418 - FB Dimming Actuator Basic (DAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

DAB.Switch On Off SOO **CH_Dimming_Actuator_Scene**

DAB.Relative Setvalue

Control RSC

DAB.Absolute Setvalue

Control ASC IOO DAB.Info On Off

DAB.Actual Dimming

DAB.Timed StartStop TSS ADV Value

DAB.Forced FO

DAB.Scene Number SN

**_Parameters_**

Timed duration P1

PreWarning Duration P2

- **Description:**

See FB Dimming Actuator Basic.

Number of scene to be supported is 8.

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 41 f 67

|SOO|CH Dimming Actuator Scene<br>_ _ _|IOO|
|---|---|---|
|RSC|RSC|RSC|
|ASC|ASC|ASC|
|TSS|TSS|ADV|
|FO|FO||
|SN|SN|SN|
|P1|P1|P1|
|P2|P2|P2|
||||


-----

- **Datapoint list:**

Flags
Index FB / DP_Name Name Subunit Main CC Additional CCs
(i/o,x,v,…)

1 418 / Switch On Off OnOff 1 CC_Switch_OnOff I L

2 418 / Relative Setvalue Dimming Ctrl 1 CC_Dimming_Ctrl I
Control

3 418 / Absolute Setvalue Dimming Value 1 CC_Dimming_Value I
Control

4 418 / Timed StartStop Timed StartStop 1 CC_Timed I

5 418 / Forced Forced 1 CC_Forced I

6 418 / Scene Number Scene Number 1 CC_Scene_Number I

7 418 / Info On Off Info On Off 1 CC_Switch_OnOff_- CC_Logical O V LA
Status

8 418 / Actual Dimming Info Dimming 1 CC_Dimming_Value_ O V
Value Value Status

- **Parameter table**

Recommended default
Index Identifier Name Type Bit Offset

value

1 P1 TimedON duration PART_Time_Delay 1 minute 0

2 P2 Pre-warning duration PART_Prewarning_Dela 0 : no prewarning 8

y

#### 2.34 CH_LightSensor_Slave (Channel Code 020Ah)

- **Name:** CH_LightSensor_Slave

- **ID:** 020Ah

- **Classification:** actuator

- **Functional Block:**

    - 419 – FB Light Sensor Slave

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**[CH_LightSensor_Slave ]**

419.RoomIllumination RI
**_Parameters_**
419.CycleTime P1

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 42 f 67

|Index|FB / DP Name<br>_|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v,…)|
|---|---|---|---|---|---|---|
|1|418 / Switch On Off|OnOff|1|CC_Switch_OnOff||I L|
|2|418 / Relative Setvalue<br>Control|Dimming Ctrl|1|<br>CC_Dimming_Ctrl||I|
|3|418 / Absolute Setvalue<br>Control|Dimming Value|1|CC_Dimming_Value||I|
|4|418 / Timed StartStop|Timed StartStop|1|CC_Timed||I|
|5|418 / Forced|Forced|1|CC_Forced||I|
|6|418 / Scene Number|Scene Number|1|<br>CC_Scene_Number||I|
|7|418 / Info On Off|Info On Off|1|<br>CC_Switch_OnOff_-<br>Status|CC_Logical|O V LA|
|8|418 / Actual Dimming<br>Value|Info Dimming<br>Value|1|CC_Dimming_Value_<br>Status||O V|

|Index|Identifier|Name|Type|Recommended default<br>value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|TimedON duration|PART_Time_Delay|1 minute|0|
|2|P2|Pre-warning duration|<br>  PART_Prewarning_Dela<br>y|0 : no prewarning|8|

|llumination RI<br>Parameters<br>CycleTime P1|CH LightSensor Slave<br>_ _|
|---|---|


-----

- **Description**

Please refer to the Functional Block specification.

The light sensor slave channel gets a room illumination measure provided by a channel light
sensor.

The cycle time default value is set to 15 min.

- **Datapoint list:**

Flags
Index FB Datapoint ID Name Subunit Main CC Additional CCs
(i/o,x,v, …)

0 RI Room Illumination 1 CC_Illumination OL

- **Parameter table**

Index Identifier Name Type Recommended default Value Bit-Offset

1 P1 Cycle Time PART_Time_Delay 15 min 0

#### 2.35 CH_Light_Setpoint_Controller_Info (Channel Code 020Bh)

- **Name:** CH_Light_Setpoint_Controller_Info

- **ID:** 020Bh

- **Classification:** functional module

- **Functional Block:**

    - 408 - FB_Room_Light_Setpoint (see 4.2 in this document)

    - 415 - FB_Room_Light_Controller (see 4.4 in this document)

- **Graphical representation**

**_Inputs_** **_Outputs_**

**CH_LightSetPoint_Controller_Info**

408.Dimming Ctrl DC DV 415.DimmingValue

408.OnOff OO

408.Forced FO

415.SceneNumbered SN

408.InfoOnOff IOO

**_parameters_**

Light Setpoint Off P1

Light Setpoint On P2

Light Setpoint Forced P3

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 43 f 67

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v, …)|
|---|---|---|---|---|---|---|
|0|RI|Room Illumination|1|CC_Illumination||OL|

|Index|Identifier|Name|Type|Recommended default Value|Bit-Offset|
|---|---|---|---|---|---|
|1|P1|Cycle Time|PART_Time_Delay|15 min|0|

|mming Ctrl DC<br>408.OnOff OO<br>408.Forced FO<br>eNumbered SN<br>.InfoOnOff IOO<br>parameters<br>etpoint Off P1<br>Setpoint On P2<br>oint Forced P3|CH LightSetPoint Controller Info<br>_ _ _|DV|
|---|---|---|
|<br>mming Ctrl<br>DC <br>408.OnOff <br>OO<br>408.Forced<br>FO <br>eNumbered<br>SN <br>.InfoOnOff <br>IOO<br>**_parameters_**  <br> etpoint Off<br>P1<br> Setpoint On<br>P2<br> oint Forced<br>P3|**CH_LightSetPoint_Controller_Info** <br> <br>  <br> <br> <br>  <br> <br> <br>||


-----

- **Description:**

See Functional Blocks FB_Room_Light_Setpoint and FB_Room_Light_Controller.

Input FB_Room_Light_Setpoint Output

IOO

OO

DC

FO

FB_Room_Light_Controller

RLS

RI DV

LAM

SN

- **Datapoint list:**

Sub- Additional Flags
Index FB / DP_Name Name Main CC

unit CCs (i/o,x,v.)

1 408.DimmingCtrl Dimming Ctrl 1 CC_Dimming_Ctrl I

2 408.OnOff OnOff 1 CC_Switch_OnOff CC_Logical I L

3 408.Forced Forced 1 CC_Forced I

4 415.SceneNumbered Scene numbered 1 CC_Scene_Numbered I

5 408.InfoOnOff Info OnOff 1 CC_Switch_OnOff_Status I

6 415.DimmingValue Dimming value 1 CC_Dimming_Value O

- **Parameter table**

Recommended
Index Identifier Name Type Bit-Offset

default value

1 P1 Light Setpoint Off PART_Light_Value 0 lux = Off 0

2 P2 Light SetPoint On PART_Light_Value 400 lux 16

3 P3 Light SetPoint_Forced PART_Light_Value 800 lux 32

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 44 f 67

|Input<br>IOO|FB Room Light Setpoint<br>_ _ _|
|---|---|
|Input<br>IOO||
|OO|OO|
|DC|DC|
|FO|FO|

|Col1|FB Room Light Controller<br>_ _ _|Col3|
|---|---|---|
||||
||||
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v.)|
|---|---|---|---|---|---|---|
|1|408.DimmingCtrl|Dimming Ctrl|1|CC_Dimming_Ctrl||I|
|2|408.OnOff|OnOff|1|<br>CC_Switch_OnOff|CC_Logical|I L|
|3|408.Forced|Forced|1|<br>CC_Forced||<br>I|
|4|415.SceneNumbered|Scene numbered|1|<br>CC_Scene_Numbered||I|
|5|408.InfoOnOff|Info OnOff|1|<br>CC_Switch_OnOff_Status||I|
|6|415.DimmingValue|Dimming value|1|<br>CC_Dimming_Value||O|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit-Offset|
|---|---|---|---|---|---|
|1|P1|Light Setpoint Off|PART_Light_Value|0 lux = Off|0|
|2|P2|Light SetPoint On|<br>PART_Light_Value|400 lux|16|
|3|P3|Light SetPoint_Forced|<br>PART_Light_Value|800 lux|32|


-----

### 3 Examples

#### 3.1 Example 1: 2 CH_PushButton connected with 2 CH_Binary_Actuator_Basic

**_CH_PushButton_** **_CH_Binary_Actuator_**

Datapoints Datapoints

Info OnOff

OnOff OnOff

**_CC_Switch_OnOff__**

**_CC_Switch_OnOff_** **_CC_Switch_OnOff_** **_Status_** **VO**

Parameters

ON/OFF, ON, OFF,
OFF/ON

@1

**_CH_PushButton_** **_CH_Binary_Actuator_**

Datapoints Datapoints

OnOff OnOff Info OnOff
**_CC_Switch_OnOff_** **_CC_Switch_OnOff_** **_CC_Switch_OnOff__**

**_Status_** **VO**

Parameters

ON/OFF, ON, OFF,
OFF/ON

This datapoint will not be linked
because no receiver is defined

**Figure 2 – Example 1**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 45 f 67

|OnOff<br>CC_Switch_OnOff|Col2|
|---|---|

|Col1|CH Binary Actuator<br>_ _|Col3|Col4|
|---|---|---|---|
||OnOff<br>**_C_Switch_OnOff_**<br>Datapoints<br>Info OnOff<br>**_CC_Switch_OnOff__**<br>**_Status_**<br>**VO**|OnOff<br>**_C_Switch_OnOff_**<br>Datapoints<br>Info OnOff<br>**_CC_Switch_OnOff__**<br>**_Status_**<br>**VO**|OnOff<br>**_C_Switch_OnOff_**<br>Datapoints<br>Info OnOff<br>**_CC_Switch_OnOff__**<br>**_Status_**<br>**VO**|
|**_C_**|OnOff<br>**_C_Switch_OnOff_**|Info OnOff<br>**_CC_Switch_OnOff__**<br>**_Status_**<br>**VO**||
|||||

|OnOff<br>CC_Switch_OnOff|Col2|
|---|---|

|Col1|CH Binary Actuator<br>_ _|Col3|Col4|
|---|---|---|---|
||OnOff<br>**_C_Switch_OnOff_**<br>Datapoints<br>Info OnOff<br>**_CC_Switch_OnOff__**<br>**_Status_**<br>**VO**|OnOff<br>**_C_Switch_OnOff_**<br>Datapoints<br>Info OnOff<br>**_CC_Switch_OnOff__**<br>**_Status_**<br>**VO**|OnOff<br>**_C_Switch_OnOff_**<br>Datapoints<br>Info OnOff<br>**_CC_Switch_OnOff__**<br>**_Status_**<br>**VO**|
|**_C_**|OnOff<br>**_C_Switch_OnOff_**|Info OnOff<br>**_CC_Switch_OnOff__**<br>**_Status_**<br>**VO**||


-----

#### 3.2 Example 2: CH_PB_Toggle connected with 2 CH_Binary_Actuator_Basic

at first these datapoints
are connected

**_CH_PB_Toggle_** **_CH_Binary_Actuator_**

Datapoints Datapoints

Info OnOff Info onOff

OnOff OnOff

**_CC_Switch_On_** **_CC_Switch_OnOff__**
**_Off_Status_** **Vi** **_CC_Switch_OnOff_** **_CC_Switch_OnOff_** **_Status_** **VO**

**@1**

**_CH_PB_Toggle_** **_CH_Binary_Actuator_**

Datapoints Datapoints

**_CC_Switch_OnOff_StatusInfo OnOff_** **Vi** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOff_Info OnOffStatus_** **VO**

then the CC with VO and
VI flags are connected
according the visualisation rule

**@2**

**Figure 3 – Example 2: Illustration for V flag connection calculation**

#### 3.3 Example 3: CH_PB_Toggle with overlapping group

1st link to be
esthablished

**_CH_PB_Toggle_** **_CH_Binary_Actuator_**

Datapoints Datapoints

**_CC_Switch_OnOff_StatusInfo OnOffVi_** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOff_Info OnOffStatus_** **VO**

**@1**

**_CH_PB_Toggle_** **_CH_Binary_Actuator_**

Datapoints Datapoints

**_CC_Switch_OnOff_StatusInfo OnOffVi_** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOff_Info OnOffStatus_** **VO**

**@2**

**_CH_PB_Toggle_**

Datapoints 2nd link to

**_CC_Switch_OnOff_StatusInfo OnOffVi_** **_CC_Switch_OnOffOnOff_** **@3** esthablish

**@4**

**Figure 4 – Example 3, solution 1**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 46 f 67

|C|OnOff<br>C_Switch_OnOff|
|---|---|

|Info onOff<br>CC_Switch_OnOff_<br>Status VO|Col2|
|---|---|

|Col1|CH PB Toggle<br>_ _|Col3|Col4|
|---|---|---|---|
||Datapoints|Datapoints|Datapoints|
||Info OnOff<br>**_CC_Switch_On_**<br>**_Off_Status_**<br>**Vi**|OnOff<br>**_CC_Switch_OnOff_**||
|||||

|C|OnOff<br>C_Switch_OnOff|
|---|---|

|Info OnOff<br>CC_Switch_OnOff_<br>Status VO|Col2|
|---|---|

|Col1|CH PB Toggle<br>_ _|Col3|Col4|
|---|---|---|---|
||<br>Datapoints|<br>Datapoints|<br>Datapoints|
||Info OnOff<br>**_CC_Switch_On_**<br>**_Off_Status_**<br>**Vi**|OnOff<br>**_CC_Switch_OnOff_**||
|||||

|C|OnOff<br>C_Switch_OnOff|
|---|---|

|Info OnOff<br>CC_Switch_OnOff_<br>Status VO|Col2|
|---|---|

|Col1|CH_PB_Toggle|Col3|Col4|
|---|---|---|---|
||Datapoints|Datapoints|Datapoints|
||Info OnOff<br>**_CC_Switch_On_**<br>**_Off_Status_**<br>**Vi**|OnOff<br>**_CC_Switch_OnOff_**||
|||||

|C|OnOff<br>C_Switch_OnOff|
|---|---|

|Info OnOff<br>CC_Switch_OnOff_<br>Status VO|Col2|
|---|---|

|Col1|CH_PB_Toggle|Col3|Col4|
|---|---|---|---|
||Datapoints|Datapoints|Datapoints|
||Info OnOff<br>**_CC_Switch_On_**<br>**_Off_Status_**<br>**Vi**|OnOff<br>**_CC_Switch_OnOff_**||
|||||

|Col1|CH_PB_Toggle|Col3|Col4|
|---|---|---|---|
||Datapoints|Datapoints|Datapoints|
||Info OnOff<br>**_CC_Switch_On_**<br>**_Off_Status_**<br>**Vi**|OnOff<br>**_CC_Switch_OnOff_**||
|||||


-----

This could also have been:

1st link to be
esthablished

**_CH_PB_Toggle_** **_CH_Binary_Actuator_**

Datapoints Datapoints

**_CC_Switch_OnOff_StatusInfo OnOff_** **Vi** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOff_Info OnOffStatus_** **VO**

**@1**

**_CH_PB_Toggle_** **_CH_Binary_Actuator_**

Datapoints Datapoints

**_CC_Switch_OnOff_StatusInfo OnOff_** **Vi** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOffOnOff_** **_CC_Switch_OnOff_Info OnOffStatus_** **VO**

**@2**

**_CH_PB_Toggle_**

Datapoints 2nd link to

**_CC_Switch_OnOff_StatusInfo OnOff_** **Vi** **_CC_Switch_OnOffOnOff_** **@3** esthablish

**@2**

**Figure 5 – Example 3, solution 2**

**Problem:** With overlapping group, the configuration sequence influences the result.

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 47 f 67

|C|OnOff<br>C_Switch_OnOff|
|---|---|

|Info OnOff<br>CC_Switch_OnOff_<br>Status VO|Col2|
|---|---|

|Col1|CH_PB_Toggle|Col3|Col4|
|---|---|---|---|
||Datapoints|Datapoints|Datapoints|
||Info OnOff<br>**_CC_Switch_On_**<br>**_Off_Status_**<br>**Vi**|OnOff<br>**_CC_Switch_OnOff_**||
|||||

|C|OnOff<br>C_Switch_OnOff|
|---|---|

|Info OnOff<br>CC_Switch_OnOff_<br>Status VO|Col2|
|---|---|

|Col1|CH_PB_Toggle|Col3|Col4|
|---|---|---|---|
||Datapoints|Datapoints|Datapoints|
||Info OnOff<br>**_CC_Switch_On_**<br>**_Off_Status_**<br>**Vi**|OnOff<br>**_CC_Switch_OnOff_**||
|||||

|Col1|CH_PB_Toggle|Col3|Col4|
|---|---|---|---|
||Datapoints|Datapoints|Datapoints|
||Info OnOff<br>**_CC_Switch_On_**<br>**_Off_Status_**<br>**Vi**|OnOff<br>**_CC_Switch_OnOff_**||
|||||


-----

#### 3.4 Example 4: CH_PB_Toggle connected with 2 from 3 CH_Binary_Actuator_Basic with a central OFF (CH_PushButton with parameter to allow only OFF values)


**_CH_Binary_Actuator_**


Datapoints


Info OnOff
**_CC_Switch_OnOff__**
**_Status_** **VO**

|C|OnOff<br>C_Switch_OnOff|
|---|---|

|Info OnOff<br>CC_Sw Si tt ac th u_ sOnO Vff O_|Col2|
|---|---|

|Col1|CH_PB_Toggle|Col3|
|---|---|---|
||Datapoints|Datapoints|
||InfoOnOff<br>**_CC_Switch_On_**<br>**_Off_Status_**<br>**Vi**|OnOff<br>**_CC_Switch_OnOff_**|
||||


**_CH_Binary_Actuator_**


Datapoints

|C|OnOff<br>C_Switch_OnOff|
|---|---|

|Info OnOff<br>CC_Switch_OnOff_<br>Status VO|Col2|
|---|---|


**_CH_Binary_Actuator_**


Datapoints


Info OnOff
**_CC_Switch_OnOff__**
**_Status_** **VO**

|C|OnOff<br>C_Switch_OnOff|
|---|---|

|Info OnOff<br>CC_Sw Si tt ac th u_ sOnO Vff O_|Col2|
|---|---|


**Figure 6 – Example 4**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 48 f 67


-----

#### 3.5 Example 4: 1 CH_Dimmer_Switch and 1 CH_Dimmer_PB, connected to 2 CH_Dimmer_Actuator_Basic

See chapter 7.3.1 of easy spec to choose at
minimum one input and one output

**@3**

normally these
datapoints should
have been

1st link to be connected in the
esthablished first step

==> modification of

**_CH_Dimmer_Switch_** the basic connection **_CH_Dimmer_Actuator_Basic_**

rules Datapoints

DatapointsCC_Switch_OnOffOutput_State **@1** **_CC_Switch_OnOffon / off_** **_CC_Switch_OnOff_Statusstate_** **VO**

value

1 **_CC_Dimming_CtrlOutput_Dimmer_** **_CC_Dimming_Ctrldimming_** **_CC_Dimming_Value_Status_** **VO**

value
**_CC_Dimming__**
**_Value_** 3

**@2**

**_CH_Dimmer_PB_** **_CH_Dimmer_Actuator_Basic_**

Datapoints Datapoints

**_CC_Switch_OnOffInput_Feedback_Status_** **_CC_Switch_OnOffOutput_State_** **_CC_Switch_OnOffon / off_** **_CC_Switch_OnOff_Statusstate_** **VO**

value

Output_Dimmer dimming **_CC_Dimming__**
**_CC_Dimming_Ctrl_** **_CC_Dimming_Ctrl_** **_Value_Status_** **VO**

2 value

**_CC_Dimming__**
**_Value_** 4

**@4** **_CH_Binary_Actuator_Basic_**

Datapoints

**_CH_PushButton_** **_CC_Switch_OnOffon/off_** **_CC_Switch_OnOff_Statusstate_** **VO**

Datapoints

Output_State
**_CC_Switch_OnOff_** This link is possible, but if the user wants to

dim up on the CH_Dimmer_Switch (1) there

Parameters will be no reaction on the output

ON/OFF, ON, OFF, ==> redeifine EIS2
OFF/ON

**Figure 7 – Example 5**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 49 f 67

|Output_State<br>CCSwitchOnOff|Col2|
|---|---|
|**____**<br>Output_Dimmer<br>**_CCDimmingCtrl_**||

|state<br>CC_Switch_OnOff<br>_Status VO|Col2|
|---|---|
|value<br>**_CC_Dimming__**<br>**_Value_Status_**<br>**V**|**O**|

|Col1|CH_Dimmer_Actuator_Basic|
|---|---|
||state<br>**_CC_Switch_OnOff_**<br>**__Status_**<br>on / off<br>**_CC_Switch_OnOff_**<br>Datapoints<br>dimming<br>**_CC_Dimming_Ctrl_**<br>value<br>**_CC_Dimming__**<br>**_Value_**<br>value<br>**_CC_Dimming__**<br>**_Value_Status_**<br>**VO**<br>**V**<br>3|
||on / off<br>**_CC_Switch_OnOff_**|
||dimming<br>**_CC_Dimming_Ctrl_**|
||value<br>**_CC_Dimming__**<br>**_Value_**|

|C|Input_Feedback<br>C_Switch_OnOff<br>_Status|
|---|---|

|CH_Dimmer_PB|Col2|Col3|
|---|---|---|
|Output_State<br>**_CC_Switch_OnOff_**<br>Input_Feedback<br>**_C_Switch_OnOff_**<br>**__Status_**<br>Datapoints<br>Output_Dimmer<br>**_CC_Dimming_Ctrl_**<br>|Output_State<br>**_CC_Switch_OnOff_**<br>Input_Feedback<br>**_C_Switch_OnOff_**<br>**__Status_**<br>Datapoints<br>Output_Dimmer<br>**_CC_Dimming_Ctrl_**<br>|Output_State<br>**_CC_Switch_OnOff_**<br>Input_Feedback<br>**_C_Switch_OnOff_**<br>**__Status_**<br>Datapoints<br>Output_Dimmer<br>**_CC_Dimming_Ctrl_**<br>|
|Output_State<br>**_CC_Switch_OnOff_**<br>Input_Feedback<br>**_C_Switch_OnOff_**<br>**__Status_**<br>Datapoints<br>Output_Dimmer<br>**_CC_Dimming_Ctrl_**<br>|Output_State<br>**_CC_Switch_OnOff_**||
|Output_State<br>**_CC_Switch_OnOff_**<br>Input_Feedback<br>**_C_Switch_OnOff_**<br>**__Status_**<br>Datapoints<br>Output_Dimmer<br>**_CC_Dimming_Ctrl_**<br>|Output_Dimmer<br>**_CC_Dimming_Ctrl_**||

|state<br>CC_Switch_OnOff<br>_Status VO|Col2|
|---|---|
|value<br>**_CC_Dimming__**<br>**_Value_Status_**<br>**V**|**O**|

|Col1|CH_Dimmer_Actuator_Basic|
|---|---|
||state<br>**_CC_Switch_OnOff_**<br>**__Status_**<br>on / off<br>**_CC_Switch_OnOff_**<br>Datapoints<br>dimming<br>**_CC_Dimming_Ctrl_**<br>value<br>**_CC_Dimming__**<br>**_Value_**<br>value<br>**_CC_Dimming__**<br>**_Value_Status_**<br>**VO**<br>**V**<br>4|
||on / off<br>**_CC_Switch_OnOff_**|
||dimming<br>**_CC_Dimming_Ctrl_**|
||value<br>**_CC_Dimming__**<br>**_Value_**|

|C|on/off<br>C_Switch_OnOff|
|---|---|

|state<br>CC_Switch_OnOff_<br>Status VO|Col2|
|---|---|

|Output_State<br>CC_Switch_OnOff|Col2|
|---|---|
|Output_State<br>**_CC_Switch_OnOff_**||


See chapter 7.3.1 of easy spec to choose at
minimum one input and one output


-----

#### 3.6 Example 6: CH_Motion_Detector, CH_PB_TimedON, CH_PB_Forced, CH_PushButton connected to a CH_Binary_Actuator_Complex

**@2**

1st link to be **_CH_Binary_Actuator_Complex_**

**_CH_Motion_Detector_** esthablished

Datapoints

**_CC_Switch_OnOffInput_OnOff_Status_** DatapointsTimer StartStopCC_Timed **@1** **_CC_Switch_OnOffOn / Off_** **_CC_Switch_OnOff_Info OnOffStatus_** **VO**

Timer StartStop
**_CC_Timed_**

Parameters

Forced

On time **_CC_Forced_**

2nd link to be
esthablished **@3** Parameters3

**_CH_PushButton_** Timed On delay

Datapoints Pre-warning delay

OnOff
**_CC_Switch_OnOff_**

Parameters

ON/OFF, ON, OFF,OFF/ON 3rd link to be **@1**

esthablished

**_CH_PB_Timed_**

Datapoints

Timer StartStop
**_CC_Timed_**

4th link to be
esthablished **@4**

**_CH_Switch_Override_**

Datapoints

Forced
**_CC_Forced_**

**Figure 8 – Example 6**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 50 f 67

|Info OnOff<br>CC_Switch_OnOff_<br>Status VO|Col2|
|---|---|

|C|Input_OnOff<br>C_Switch_OnOff<br>_Status|
|---|---|

|Col1|On / Off<br>CC_Switch_OnOff|
|---|---|
||Timer StartStop<br>**_CC_Timed_**|
||Forced<br>**_CC_Forced_**|


-----

### 4 Functional Blocks

#### 4.1 Usage requirements
The Functional Block specifications below only provide complementary information to the Channel
Definitions specified in this doucment. They are only provided for completeness and understanding of the
these channel definitions.

These Functional Blocks shall be used only for implementation of Easy Configuration mode devices.

These Functional Block specifications shall not be used for any other goal; in particular, no
implementation for S-Mode devices shall be based on these specifications.

KNX Association will take care of compatibility between any currently specified Channel Definition and
the final version of these Functional Blocks.

To this, the KNX Association Application Specification Groups shall take the functionality achieved by
these Functional Blocks as the minimal mandatory basis for further work.

#### 4.2 Functional Block “Room Light Setpoint”

##### 4.2.1 Definitions

 - **Name:** FB_Room_Light_Setpoint

 - **Application description Block:** Light Setpoint

 - **Object Type:** 408

##### 4.2.2 Functional specification
Any update of the Setpoint Absolute is sent on the room light Setpoint datapoint.

The dimming ctrl permits to increase and decrease the actual value of the room light Setpoint. The On/off
permits to switch from 0 to actual value of the room light setpoint.

If “Forced” is set to control-off, the Room light Setpoint is forced to “Light Setpoint Forced”. “Light
Setpoint Forced” default value = 0. All commands coming from SPA, OO, DC are ignored.

On human interaction, a new value can be calculated and sent on the light Setpoint RLS..

##### 4.2.3 FB description

FB_Room_Light_Setpoint

Setpoint
absolute Room
Light
Setpoint
OnOff

Dimming
Ctrl

Forced

Parameters
Light Stepoin low
Light SetPoint High
Light Setpoint Forced

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 51 f 67

|FB Room Light Setpoint<br>_ _ _|Col2|Col3|
|---|---|---|
|Setpoint<br>absolute<br>Room<br>Light<br>Setpoint<br>OnOff<br>Dimming<br>Ctrl<br>Forced|Setpoint<br>absolute<br>Room<br>Light<br>Setpoint<br>OnOff<br>Dimming<br>Ctrl<br>Forced|Setpoint<br>absolute<br>Room<br>Light<br>Setpoint<br>OnOff<br>Dimming<br>Ctrl<br>Forced|
|Setpoint<br>absolute|Setpoint<br>absolute|Setpoint<br>absolute|
|OnOff|OnOff|OnOff|
|Dimming<br>Ctrl|Dimming<br>Ctrl|Dimming<br>Ctrl|
|Forced|Forced|Forced|
|Parameters<br>Light Stepoin low<br>Light SetPoint High<br>Light Setpoint Forced|||


-----

###### 4.2.3.1 Datapoints

Data Point Abbr. Description Data Point Type

Outputs

Room Light RLS Value of the illumination to get 9.004 DPT_Value_Lux
Setpoint

Inputs

Setpoint SPA To affect directly the RLS 9.004 DPT_Value_Lux
Absolute

OnOff OO To switch the RLS to 0 (off) or current 1.001 DPT_Switch
value (on)

Dimming Ctrl DC To increase or decrease the RLS value 3.007 DPT_Control_Dimming

Forced FO To witch the RLS value to the value of 2.001 DPT_Switch_Control
LSF

Parameters

Light Setpoint LSL Light setpoint for scaling position 0 9.004 DPT_Value_Lux
Low

Light Setpoint LSH Light setpoint for scaling position 100% 9.004 DPT_Value_Lux
High

Light Setpoint LSF Light setpoint for forced Setpoint (from 0 9.004 DPT_Value_Lux
Forced to 100%)

4.2.3.1.1 Distribution Table

**STANDARD** **EXTENDED**

**MODE** **MODE**

**RLS** GO - - 
**Inputs** **SPA** GO  -  -  
**OO** GO      -      -      
**DC** (GO)       -       -       
**FO** (GO)       -       -       
**Parameters LSL** M  -  -  
**LSH** O       -       -       
**LSF** M       -       -       
©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 52 f 67

|Data Point|Abbr.|Description|Data Point Type|
|---|---|---|---|
|Outputs||||
|Room Light<br>Setpoint|RLS|Value of the illumination to get|9.004 DPT_Value_Lux|
|Inputs||||
|Setpoint<br>Absolute|SPA|To affect directly the RLS|9.004 DPT_Value_Lux|
|OnOff|OO|To switch the RLS to 0 (off) or current<br>value (on)|1.001 DPT_Switch|
|Dimming Ctrl|DC|To increase or decrease the RLS value|3.007 DPT_Control_Dimming|
|Forced|FO|To witch the RLS value to the value of<br>LSF|<br>2.001 DPT_Switch_Control|
|Parameters||||
|Light Setpoint<br>Low|LSL|Light setpoint for scaling position 0|9.004 DPT_Value_Lux|
|Light Setpoint<br>High|LSH|Light setpoint for scaling position 100%|9.004 DPT_Value_Lux|
|Light Setpoint<br>Forced|LSF|Light setpoint for forced Setpoint (from 0<br>to 100%)|9.004 DPT_Value_Lux|

|Col1|Col2|Basic FB|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|||**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|<br>**LTE-Mode**|
|**RLS**|GO||-|-|-|
|**Inputs**|**SPA**|GO|-|-|-|
||**OO**|GO|-|-|-|
||**DC**|(GO)|<br>-|-|-|
||**FO**|(GO)|<br>-|-|-|
|**Parameters**|** LSL**|M|-|-|-|
||**LSH**|O|-|-|-|
||**LSF**|M|-|-|-|


-----

4.2.3.1.2 Output :Room Light Setpoint
DP Name: Room light Set Point Abbr.: RLS Mandatory
FB Name: 408 FB_Room_Light_Setpoint Can be internal
**Description**
This datapoint represents the value calculated by this FB according to the input datapoints received.
**Datapoint Type**
DPT_Name: DPT_Value_Lux
DPT Format: F16 DPT_ID: 9.004

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

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 53 f 67

|DP Name:|Col2|Room light Set Point|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|RLS|Col21|Col22|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|408 FBRoomLightSetpoint|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|
|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|<br>This datapoint represents the value calculated by this FB according to the input datapoints received.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|DPTID:|9.004|9.004|9.004|9.004|9.004|9.004|9.004|9.004|
|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M||||||this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:|<br>COV:|||||∆-Value|∆-Value|∆-Value|∆-Value|∆-Value|||||Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:|||||||
||||||||Cyclic|Cyclic|Cyclic|Cyclic|||||<br>Period:|<br>Period:|<br>Period:|<br>Period:|<br>Period:|||||||||||||||||
||Request|Request|Request|Request||||||||||||||||||||||||||||||||
|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Client <br>|<br>• <br>Client <br>|<br>• <br>Client <br>|<br>• <br>Client <br>|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):||||||||PID(property server):|PID(property server):|PID(property server):|PID(property server):|PID(property server):|PID(property server):||||||||
||<br> <br>|<br> <br>|<br> <br>|<br> <br>|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||Power down:<br>|Power down:<br>|Power down:<br>|Power down:<br>|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up: <br>|Power up: <br>|Power up: <br>|Power up: <br>|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|||||||||||||||||||||||||||||||||||||


-----

4.2.3.1.3 Input : OnOff
DP Name: OnOff Abbr.: OO Mandatory
FB Name: 408 FB Room Light Setpoint Can be internal
**Description**
To switch the value between 0 and the actual value of Room Light Setpoint
**Datapoint Type**
DPT_Name: DPT_Switch
DPT Format: B1 DPT_ID: 1.001
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
Power up: Value: No initialisation: Default value:
Saved value: Actual value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
**Exception Handling**

**Special Features**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 54 f 67

|DP Name:|Col2|OnOff|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Abbr.:|Col13|Col14|Col15|OO|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Mandatory|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|
|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|<br>To switch the value between 0 and the actual value of Room Light Setpoint|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|<br>DPTSwitch|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|
|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|Time-out:|Time-out:|||||||
||Request|Request|Request|Request||||||Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:|Period:|Period:|||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>Object_type:|<br>Object_type:|<br>Object_type:|<br>Object_type:||||||||||PID:|PID:|PID:|PID:|PID:|PID:||||||||
||<br>|<br>|<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:||||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|
||||||||||||||||||||||||||||||||||
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
||||||||||||||||||||||||||||||||||


-----

4.2.3.1.4 Input : Dimming Control
DP Name: Dimming Control Abbr.: DC Mandatory
FB Name: 408 FB Room Light Setpoint Can be internal
**Description**
To increase or decrease the actual value of the room light setpoint
**Datapoint Type**
DPT_Name: DPT_Control_Dimming
DPT Format: B1U3 DPT_ID: 3.007
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

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 55 f 67

|DP Name:|Col2|Dimming Control|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Abbr.:|Col13|Col14|Col15|DC|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Mandatory|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|
|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|<br>To increase or decrease the actual value of the room light setpoint|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|<br>DPTControlDimming|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|__<br>B1U3|DPTID:|DPTID:|DPTID:|DPTID:|3.007|3.007|3.007|3.007|3.007|3.007|3.007|3.007|
|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|Time-out:|Time-out:|||||||
||Request|Request|Request|Request||||||Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:|Period:|Period:|||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>Object_type:|<br>Object_type:|<br>Object_type:|<br>Object_type:||||||||||PID:|PID:|PID:|PID:|PID:|PID:||||||||
||<br>|<br>|<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:||||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||0|0|0|
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|
||||||||||||||||||||||||||||||||||
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
||||||||||||||||||||||||||||||||||


-----

4.2.3.1.5 Input : Forced
DP Name: Forced Abbr.: FO Mandatory
FB Name: 408 FB Room Light Setpoint Can be internal
**Description**
To force the room light setpoint by the value contained in the parameter LSF
**Datapoint Type**
DPT_Name: DPT_Switch_Control
DPT Format: B2 DPT_ID: 2.001
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

4.2.3.1.6 Parameter: Light Setpoint Low
DP Name: Light Setpoint Low Abbr.: LSL Mandatory
FB Name: 408 - FB_Room_Light_Setpoint Can be internal
**Description**
This parameter is used to set the value of RLS for scaling position 0.
**Datapoint Type**
DPT_Name: DPT_Value_Lux
DPT Format: F16 DPT_ID: 9.004
Field Description Supp. Range Unit Default

**Exception Handling**
--**Special Features**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 56 f 67

|DP Name:|Col2|Forced|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Abbr.:|Col12|Col13|Col14|FO|Col16|Col17|Col18|Col19|Col20|Col21|Mandatory|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|408 FB Room Light Setpoint|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|
|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|<br>To force the room light setpoint by the value contained in the parameter LSF|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|<br>DPTSwitchControl|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|__<br>B2|DPTID:|DPTID:|DPTID:|DPTID:|2.001|2.001|2.001|2.001|2.001|2.001|2.001|2.001|
|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this|||||1 → this|1 → this|1 → this||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|||||||Time-out:|Time-out:|Time-out:|Time-out:|Time-out:|||||||
||Request|Request|Request|Request|||||Polling:|Polling:|Polling:|Polling:|Polling:|||||||Period:|Period:|Period:|Period:|Period:|||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>Object_type:|<br>Object_type:|<br>Object_type:|<br>Object_type:|||||||||PID:|PID:|PID:|PID:|PID:|PID:||||||||
||<br>|<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:|||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||<br>Power down:<br>|<br>Power down:<br>|<br>Power down:<br>|<br>Power down:<br>|Save:|Save:|Save:||||||||||||||||||||||||
||Power up:<br>|Power up:<br>|Power up:<br>|Power up:<br>|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||0|0|0|
|||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|
||||||||||||||||||||||||||||||||
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
||||||||||||||||||||||||||||||||

|DP Name:|Light Setpoint Low|Col3|Col4|Abbr.:|LSL|Col7|Col8|Col9|Mandatory|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|
|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|<br>This parameter is used to set the value of RLS for scaling position 0.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|
|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|9.004|9.004|9.004|9.004|9.004|9.004|
|Field|Field|Field|Description|Description|Description|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Default|Default|Default|Default|
|||||||||||||||||
|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|||||||||||||||||


-----

4.2.3.1.7 Parameter: Light Setpoint High
DP Name: Light Setpoint High Abbr.: LSH Mandatory
FB Name: 408 - FB_Room_Light_Setpoint Can be internal
**Description**
This parameter is used to set the value of RLS for scaling position 100%
**Datapoint Type**
DPT_Name: DPT_Value_Lux
DPT Format: F16 DPT_ID: 9.004
Field Description Supp. Range Unit Default

**Exception Handling**
--**Special Features**

4.2.3.1.8 Parameter: Light Setpoint Forced
DP Name: Light Setpoint Forced Abbr.: LSF Mandatory
FB Name: 408 - FB_Room_Light_Setpoint Can be internal
**Description**
This parameter is used to set the value of RLS for forced position
**Datapoint Type**
DPT_Name: DPT_Value_Lux
DPT Format: F16 DPT_ID: 9.004
Field Description Supp. Range Unit Default

**Exception Handling**
--**Special Features**

#### 4.3 Functional Block “Room Light Sensor” (RLS)

##### 4.3.1 Definitions

 - **Name:** FB_Room_Light_Sensor

 - **Application description Block:** Light Sensor

 - **Object Type:** 409

##### 4.3.2 Functional specification
Sends the value measured of the current illumination. The conversion light (in lux) into value is
standardised

If the variation of illumination changes more than COV then send the new value. If the illumination
doesn’t change more than COV, then re-sends the value every repetition value.

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 57 f 67

|DP Name:|Light Setpoint High|Col3|Col4|Abbr.:|LSH|Col7|Col8|Col9|Mandatory|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|408- FBRoomLightSetpoint|408- FBRoomLightSetpoint|408- FBRoomLightSetpoint|408- FBRoomLightSetpoint|408- FBRoomLightSetpoint|408- FBRoomLightSetpoint|408- FBRoomLightSetpoint|408- FBRoomLightSetpoint|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|
|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|<br>This parameter is used to set the value of RLS for scaling position 100%|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|
|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|9.004|9.004|9.004|9.004|9.004|9.004|
|Field|Field|Field|Description|Description|Description|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Default|Default|Default|Default|
|||||||||||||||||
|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|||||||||||||||||

|DP Name:|Light Setpoint Forced|Col3|Col4|Abbr.:|LSF|Col7|Col8|Col9|Mandatory|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|408 - FBRoomLightSetpoint|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|<br> ___ <br>   <br>**Description**|
|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|<br>This parameter is used to set the value of RLS for forced position|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|
|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|9.004|9.004|9.004|9.004|9.004|9.004|
|Field|Field|Field|Description|Description|Description|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Default|Default|Default|Default|
|||||||||||||||||
|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|||||||||||||||||


-----

##### 4.3.3 FB description

FB_Room_Light_Sensor

Room
Illumination

Parameter
Change of Value
Repetition time

###### 4.3.3.1 Datapoints

**Data Point** **Abbr. Description** **Data Point Type**

**Outputs**

Room illumination RI Output state 9.004 DPT_Value_Lux

**Parameters**

Change of Value P1 Change of value in lux 9.004 DPT_Value_Lux

Repetition Time P2 Repetition time value in seconds 7.005 DPT_TimePeriodSec

4.3.3.1.1 Distribution Table

**STANDARD** **EXTENDED**

**MODE** **MODE**

**Outputs** **RI** GO  -  -  
**Parameters P1** M1  -  -  
**P2** M2        -        -        
1 In the channel definition this parameter is defined as PART_COV_Lux.
2 In the channel definition this parameter is defined as PART_Repetition_Time.

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 58 f 67

|FB Room Light Sensor<br>_ _ _|Col2|
|---|---|
|Room<br>Illumination|Room<br>Illumination|
|Parameter<br>Change of Value<br>Repetition time||

|Data Point|Abbr.|Description|Data Point Type|
|---|---|---|---|
|**Outputs**||||
|Room illumination|RI|Output state|9.004 DPT_Value_Lux|
|**Parameters**||||
|Change of Value<br>Repetition Time|P1|Change of value in lux|9.004 DPT_Value_Lux|
|Change of Value<br>Repetition Time|P2|Repetition time value in seconds|<br>7.005 DPT_TimePeriodSec|

|Col1|Col2|Basic FB|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|||**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|<br>**LTE-Mode**|
|**Outputs**|**RI**|GO|-|-|-|
|**Parameters**|** P1**|M1|-|-|-|
||**P2**|M2|-|-|-|


-----

4.3.3.1.2 Output :Room Light Illumination
DP Name: Room Illumination Abbr.: RI Mandatory
FB Name: 409 FB_Room_Light_Sensor Can be internal
**Description**
This datapoint represents the current illumination measured by the sensor
**Datapoint Type**
DPT_Name: DPT_Value_Lux
DPT Format: F16 DPT_ID: 9.004

♦ Output
this → M this → 1
Spontaneous COV: ∆-Value P1 Min repetition period:
Cyclic Period: P2
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

4.3.3.1.3 Parameter: Change of Value
DP Name: Change of Value Abbr.: P1 Mandatory
FB Name: 409 - FB_Light_Sensor Can be internal
**Description**
This represents the minimal change of the measurement that send a new value on the RLI datapoint
**Datapoint Type**
DPT_Name: DPT_Value_Lux
DPT Format: F16 DPT_ID: 9.004
Field Description Supp. Range Unit Default

**Exception Handling**
--**Special Features**
In channel code PART_COV_Lux is used

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 59 f 67

|DP Name:|Col2|Room Illumination|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Abbr.:|Col15|Col16|Col17|RI|Col19|Col20|Col21|Col22|Col23|Mandatory|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|409 FBRoomLightSensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|<br> ___<br> <br>**Description**|
|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|<br>This datapoint represents the current illumination measured by the sensor|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|DPTID:|9.004|9.004|9.004|9.004|9.004|9.004|9.004|
|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M||||||this→ 1|this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:||||∆-Value|∆-Value|∆-Value|∆-Value|∆-Value|P1|P1|P1|P1|Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:||||||
||||||||Cyclic|Cyclic|Cyclic||||<br>Period:|<br>Period:|<br>Period:|<br>Period:|<br>Period:|P2|P2|P2|P2|P2|P2|P2|P2|P2|P2|P2|P2|P2|P2|
||Request|Request|Request|Request||||||||||||||||||||||||||||
|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Client <br>|<br>• <br>Client <br>|<br>• <br>Client <br>|<br>• <br>Client <br>|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|<br> Object_type (server):|||||||||PID(property server):|PID(property server):|PID(property server):|PID(property server):|PID(property server):|||||||
||<br> <br>|<br> <br>|<br> <br>|<br> <br>|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|<br>Startindex:|||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||Power down:<br>|Power down:<br>|Power down:<br>|Power down:<br>|Save:|Save:|Save:|Save:||||||||||||||||||||||||
||Power up: <br>|Power up: <br>|Power up: <br>|Power up: <br>|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|||||||||||||||||||||||||||||||||

|DP Name:|Change of Value|Col3|Col4|Abbr.:|P1|Col7|Col8|Col9|Mandatory|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|409 - FBLightSensor|409 - FBLightSensor|409 - FBLightSensor|409 - FBLightSensor|409 - FBLightSensor|409 - FBLightSensor|409 - FBLightSensor|409 - FBLightSensor|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|
|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|<br>This represents the minimal change of the measurement that send a new value on the RLIdatapoint|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|
|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|9.004|9.004|9.004|9.004|9.004|9.004|
|Field|Field|Field|Description|Description|Description|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Default|Default|Default|Default|
|||||||||||||||||
|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|<br>Inchannel code PART_COV_Lux is used|


-----

4.3.3.1.4 Parameter: Repetition time
DP Name: Repetition time Abbr.: P2 Mandatory
FB Name: 409 - FB_Light_Sensor Can be internal
**Description**
This represents the period of emission of RLI when no change of value is detected.
**Datapoint Type**
DPT_Name: DPT_TimePeriodSec
DPT Format: U16 DPT_ID: 7.005
Field Description Supp. Range Unit Default

**Exception Handling**
--**Special Features**
In channel code PART_Cycle_Time is used

#### 4.4 Functional Block “Room Light Controller” (RLC)

##### 4.4.1 Definitions

 - **Name:** FB_Room_Light_Controller

 - **Application description Block:** Light controller

 - **Object Type:** 415

##### 4.4.2 Functional specification
The light controller takes into account the current value of the illumination in the room, the current value
of the illumination setpoint and works out the command room light power. The calculation may be based
on a PID controller

The scene datapoint can be use to activate/learn a state of the FB_Light_Controller for a certain
scene_number.

##### 4.4.3 FB description

FB_Room_Light_
Controller

Room
illumination
Dimming
Value
Room light
setpoint

Light
Application
Mode

Scene_
Number

Parameters
Proportional
Integral
Differencial

###### 4.4.3.1 Datapoints

**Outputs**

Dimming value DV The value of light required (in 5.001 DPT_Scaling
percent)

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 60 f 67

|DP Name:|Repetition time|Col3|Col4|Abbr.:|P2|Col7|Col8|Col9|Mandatory|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|409- FBLightSensor|409- FBLightSensor|409- FBLightSensor|409- FBLightSensor|409- FBLightSensor|409- FBLightSensor|409- FBLightSensor|409- FBLightSensor|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|
|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|<br>This represents the period of emission of RLI when no change of value is detected.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|<br>DPTTimePeriodSec|
|_<br>DPT Format:|_<br>DPT Format:|_<br>U16|_<br>U16|_<br>U16|_<br>U16|_<br>U16|_<br>U16|DPTID:|DPTID:|7.005|7.005|7.005|7.005|7.005|7.005|
|Field|Field|Field|Description|Description|Description|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Default|Default|Default|Default|
|||||||||||||||||
|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|<br>Inchannel code PART_Cycle_Time is used|

|FB Room Light<br>_ _ _<br>Controller|Col2|Col3|
|---|---|---|
|Room<br>illumination<br>Dimming<br>Value<br>Room light<br>setpoint<br>Light<br>Application<br>Mode<br>Scene_<br>Number|Room<br>illumination<br>Dimming<br>Value<br>Room light<br>setpoint<br>Light<br>Application<br>Mode<br>Scene_<br>Number|Room<br>illumination<br>Dimming<br>Value<br>Room light<br>setpoint<br>Light<br>Application<br>Mode<br>Scene_<br>Number|
|Room<br>illumination|Room<br>illumination|Room<br>illumination|
|Room light<br>setpoint|Room light<br>setpoint|Room light<br>setpoint|
|Light<br>Application<br>Mode|Light<br>Application<br>Mode|Light<br>Application<br>Mode|
|Scene_<br>Number|Scene_<br>Number|Scene_<br>Number|
|Parameters<br>Proportional<br>Integral<br>Differencial|||

|Outputs|Col2|Col3|Col4|
|---|---|---|---|
|Dimming value|DV|The value of light required (in<br>percent)|5.001 DPT_Scaling|


-----

|Inputs|Col2|Col3|Col4|
|---|---|---|---|
|Room illumination|RI|to get the current illumination of<br>the room where the light control<br>is working|9.004 DPT_Value_Lux|
|Room light setpoint|RLS|The illumination to reach|9.004 DPT_Value_Lux|
|Light application mode|LAM|To set the mode of the FB|<br>20.005<br>DPT_LightApplicationMode|
|Scene Number|SN|To activate or learn a scene|<br>18.001 DPT_SceneControl|
|**Parameters**||||
|Proportional|P1|Parameter of the light regulation|7.001 DPT_Value_2_Ucount|
|Integral|P2|Parameter of the light regulation|<br>7.001 DPT_Value_2_Ucount|
|Differential|P3|Parameter of the light regulation|<br>7.001 DPT_Value_2_Ucount|


4.4.3.1.1 Distribution Table

**STANDARD** **EXTENDED**

**MODE** **MODE**

**Outputs** **DV** GO  -  -  
**Inputs** **RI** GO  -  -  
**RLS** GO       -       -       
**LAM** (GO)      -      -      
**SN** (GO)        -        -        
**Parameters P1** O  -  -  
**P2** O         -         -         
**P3** O         -         -         
©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 61 f 67

|Col1|Col2|Basic FB|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|||**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|<br>**LTE-Mode**|
|**Outputs**|**DV**|GO|-|-|-|
|**Inputs**|**RI**|GO|-|-|-|
||**RLS**|GO|-|-|-|
||**LAM**|(GO)|-|-|-|
||**SN**|(GO)|-|-|-|
|**Parameters**|**  P1**|O|-|-|-|
||**P2**|O|-|-|-|
||**P3**|O|-|-|-|


-----

4.4.3.1.2 Output : Dimming Value
DP Name: Dimming Value Abbr.: DV Mandatory
FB Name: 415 - FB_Room_Light_Controller Can be internal
**Description**

**Datapoint Type**
DPT_Name: DPT_Scaling
DPT Format: B1 DPT_ID: 5.001

♦ Output
this → M this → 1
Spontaneous COV: ∆-Value: Min repetition period:
Cyclic Period:
Request
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --♦ Interface Object Property Datapoint Mandatory:

  - Client: Object_type (server): PID (property server):
Start_index: Nr_of_elements:
**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Actual value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
**Exception Handling**
--**Special Features**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 62 f 67

|DP Name:|Col2|Dimming Value|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Abbr.:|Col16|Col17|Col18|DV|Col20|Col21|Col22|Col23|Col24|Mandatory|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|
||||||||||||||||||||||||||||||||||
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:<br>|<br>DPTName:<br>|<br>DPTName:<br>|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|
|_<br> <br>DPT Format:<br>|_<br> <br>DPT Format:<br>|_<br> <br>DPT Format:<br>|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|5.001|5.001|5.001|5.001|5.001|5.001|5.001|
|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M||||||this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||∆-Value:|∆-Value:|∆-Value:|∆-Value:|∆-Value:|||||Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:|Min repetition period:||||||
||||||||Cyclic|Cyclic|Cyclic|Cyclic||||<br>Period:|<br>Period:|<br>Period:|<br>Period:|<br>Period:|||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||
|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|<br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Client:|<br>• <br>Client:|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|<br>Object_type (server):|||||||||PID(property server):|PID(property server):|PID(property server):|PID(property server):|PID(property server):|||||||
||<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|Startindex:|||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||
|||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|<br>      <br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
||||||||||||||||||||||||||||||||||


-----

4.4.3.1.3 Input :Room illumination
DP Name: Room Illumination Abbr.: RI Mandatory
FB Name: 415 - FB_Room_Light_Controller Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_Value_Lux
DPT Format: F16 DPT_ID: 9.004
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

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 63 f 67

|DP Name:|Col2|Room Illumination|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Abbr.:|Col13|Col14|Col15|Col16|RI|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Mandatory|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|DPTID:|DPTID:|9.004|9.004|9.004|9.004|9.004|9.004|9.004|9.004|
|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this|||||||1 → this|1 → this||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|Time-out:|Time-out:|||||||
||Request|Request|Request|Request||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:|Period:|Period:|||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>Object_type:|<br>Object_type:|<br>Object_type:|<br>Object_type:|||||||||||PID:|PID:|PID:|PID:|PID:|PID:||||||||
||<br>|<br>|<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:|||||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||0|0|
|||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|
|||||||||||||||||||||||||||||||||||
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|||||||||||||||||||||||||||||||||||


-----

4.4.3.1.4 Input :Room Light Setpoint
DP Name: Room Light Setpoint Abbr.: RLS Mandatory
FB Name: 415 - FB_Room_Light_Controller Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_Value_Lux
DPT Format: F16 DPT_ID: 9.004
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

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 64 f 67

|DP Name:|Col2|Room Light Setpoint|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Abbr.:|Col13|Col14|Col15|RLS|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Mandatory|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|<br>DPTValueLux|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|DPTID:|DPTID:|9.004|9.004|9.004|9.004|9.004|9.004|9.004|9.004|
|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|Time-out:|Time-out:|||||||
||Request|Request|Request|Request||||||Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:|Period:|Period:|||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>Object_type:|<br>Object_type:|<br>Object_type:|<br>Object_type:||||||||||PID:|PID:|PID:|PID:|PID:|PID:||||||||
||<br>|<br>|<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:||||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||0|0|0|
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|
||||||||||||||||||||||||||||||||||
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
||||||||||||||||||||||||||||||||||


-----

4.4.3.1.5 Input :Light Application Mode
DP Name: Light Application Mode Abbr.: LAM Mandatory
FB Name: 415 - FB_Room_Light_Controller Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_LightApplicationMode
DPT Format: N8 DPT_ID: 20.005
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

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 65 f 67

|DP Name:|Col2|Light Application Mode|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Abbr.:|Col13|Col14|Col15|LAM|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Mandatory|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|<br>DPTLightApplicationMode|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|DPTID:|DPTID:|DPTID:|DPTID:|20.005|20.005|20.005|20.005|20.005|20.005|20.005|20.005|
|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|Time-out:|Time-out:|||||||
||Request|Request|Request|Request||||||Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:|Period:|Period:|||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>Object_type:|<br>Object_type:|<br>Object_type:|<br>Object_type:||||||||||PID:|PID:|PID:|PID:|PID:|PID:||||||||
||<br>|<br>|<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:||||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||0|0|0|
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|
||||||||||||||||||||||||||||||||||
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
||||||||||||||||||||||||||||||||||


-----

4.4.3.1.6 Input :Scene Number
DP Name: Scene number Abbr.: SN Mandatory
FB Name: 415 - FB_Room_Light_Controller Can be internal
**Description**
See functional description
**Datapoint Type**
DPT_Name: DPT_SceneControl
DPT Format: B1r1U6 DPT_ID: 18.001
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

4.4.3.1.7 Parameter : Proportional
DP Name: Proportional Abbr.: P1 Mandatory
FB Name: 415 - FB_Light_Controller Can be internal
**Description**
Proportional parameter for the light regulation
**Datapoint Type**
DPT_Name: DPT_Value_2_Ucount
DPT Format: U16 DPT_ID: 7.001
Field Description Supp. Range Unit Default
0
**Exception Handling**
--**Special Features**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 66 f 67

|DP Name:|Col2|Scene number|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Abbr.:|Col12|Col13|Col14|SN|Col16|Col17|Col18|Col19|Col20|Col21|Mandatory|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|415- FBRoomLightController|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|<br>  ___<br> <br>**Description**|
|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|<br>See functional description|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|<br>DPTSceneControl|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|DPTID:|DPTID:|DPTID:|DPTID:|18.001|18.001|18.001|18.001|18.001|18.001|18.001|18.001|
|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|_<br>**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this|||||1 → this|1 → this|1 → this||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|||||||Time-out:|Time-out:|Time-out:|Time-out:|Time-out:|||||||
||Request|Request|Request|Request|||||Polling:|Polling:|Polling:|Polling:|Polling:|||||||Period:|Period:|Period:|Period:|Period:|||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|♦ Interface Object Property Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||
||<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>• <br>Server|<br>Object_type:|<br>Object_type:|<br>Object_type:|<br>Object_type:|||||||||PID:|PID:|PID:|PID:|PID:|PID:||||||||
||<br>|<br>|<br>|<br>|<br>|Startindex:|Startindex:|Startindex:|Startindex:|||||||||Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:|Nrofelements:||||||||
|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|_<br>__<br>**Dynamics**|
||<br>Power down:<br>|<br>Power down:<br>|<br>Power down:<br>|<br>Power down:<br>|Save:|Save:|Save:||||||||||||||||||||||||
||Power up:<br>|Power up:<br>|Power up:<br>|Power up:<br>|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||0|0|0|
|||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):|<br>Actual value (not for input):||||||
||||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|<br> <br>**Exception Handling**|
||||||||||||||||||||||||||||||||
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
||||||||||||||||||||||||||||||||

|DP Name:|Proportional|Col3|Col4|Abbr.:|P1|Col7|Col8|Col9|Mandatory|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|
|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|<br>Proportional parameter for the light regulation|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|
|_<br>DPT Format:|_<br>DPT Format:|___<br>U16|___<br>U16|___<br>U16|___<br>U16|___<br>U16|___<br>U16|DPTID:|DPTID:|7.001|7.001|7.001|7.001|7.001|7.001|
|Field|Field|Field|Description|Description|Description|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Default|Default|Default|Default|
|||||||||||||0|0|0|0|
|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|||||||||||||||||


-----

4.4.3.1.8 Parameter : Integral
DP Name: Integral Abbr.: P2 Mandatory
FB Name: 415 - FB_Light_Controller Can be internal
**Description**
Integral parameter for the light regulation
**Datapoint Type**
DPT_Name: DPT_Value_2_Ucount
DPT Format: U16 DPT_ID: 7.001
Field Description Supp. Range Unit Default
0
**Exception Handling**
--**Special Features**

4.4.3.1.9 Parameter : Differential
DP Name: Differential Abbr.: P3 Mandatory
FB Name: 415 - FB_Light_Controller Can be internal
**Description**
Differential parameter for the light regulation
**Datapoint Type**
DPT_Name: DPT_Value_2_Ucount
DPT Format: U16 DPT_ID: 7.001
Field Description Supp. Range Unit Default
0
**Exception Handling**
--**Special Features**

©C i h 2000 2013 KNX A i i A li i D i i 01 00 01 67 f 67

|DP Name:|Integral|Col3|Col4|Abbr.:|P2|Col7|Col8|Col9|Mandatory|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|415- FBLightController|415- FBLightController|415- FBLightController|415- FBLightController|415- FBLightController|415- FBLightController|415- FBLightController|415- FBLightController|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|<br>  __<br> <br>**Description**|
|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|<br>Integral parameter for the light regulation|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|
|_<br>DPT Format:|_<br>DPT Format:|___<br>U16|___<br>U16|___<br>U16|___<br>U16|___<br>U16|___<br>U16|DPTID:|DPTID:|7.001|7.001|7.001|7.001|7.001|7.001|
|Field|Field|Field|Description|Description|Description|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Default|Default|Default|Default|
|||||||||||||0|0|0|0|
|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|||||||||||||||||

|DP Name:|Differential|Col3|Col4|Abbr.:|P3|Col7|Col8|Col9|Mandatory|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|415 - FBLightController|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|<br> __ <br>   <br>**Description**|
|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|<br>Differential parameter for the light regulation|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|<br>DPTValue2Ucount|
|_<br>DPT Format:|_<br>DPT Format:|___<br>U16|___<br>U16|___<br>U16|___<br>U16|___<br>U16|___<br>U16|DPTID:|DPTID:|7.001|7.001|7.001|7.001|7.001|7.001|
|Field|Field|Field|Description|Description|Description|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Default|Default|Default|Default|
|||||||||||||0|0|0|0|
|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|||||||||||||||||


-----

