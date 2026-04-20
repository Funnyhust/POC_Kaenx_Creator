KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

# Application Note 171/15 v02

**Title:** **FEC Basic E-Mode Channels**

**Status:** **Date:**

Draft for Voting 2015.05.05

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2015.05.05

**Subject:** Definition of FEC Basic E-Mode Channels.

**Documents** **Modified**

[01] Volume 7 “Application Descriptions”

[02] AN134 “Flexible E-Mode Channels”

**Document updates**

**Version** **Date** **Modifications**
WGI0077-01 2014.07.01 Document creation.
WGI0077-02 2014.11.15 Update
WGI0077-03 2015.01.05 Addition of info “Basic” for Datapoints and Parameters.
AN171 v01 2015.01.30 Creation of the Draft Proposal.
WGI0077-03 2015.04.27 Inclusion of the resolution of comments from RfV.
AN171 v02 2015.05.05 Preparation of the Draft for Voting.

**Contents**

##### 1 Purpose, motivation and scope ......................................................................... 2
 1.1 Purpose .................................................................................................... 2 1.2 Abbreviation ............................................................................................. 2

 2 Existing E-Mode Channels usable as Basic E-Mode Channels ...................... 3

 3 New E-Mode Channels definition usable as Basic E-Mode Channel .............. 4
 3.1 CH_Logic_AndOr_Basic .......................................................................... 4 3.2 CH_Binary_Actuator................................................................................. 5 3.3 CH_Motion_Detector ................................................................................ 6 3.4 CH_Dimming_Sensor_Value ................................................................... 7 3.5 CH_Dimming_Actuator ............................................................................. 8 3.6 CH_Room_Light_Controller ..................................................................... 9 3.7 CH_Shutter_Actuator_Basic .................................................................. 10 3.8 CH_SunBlinds_Actuator_Basic .............................................................. 11 3.9 CH_Shutter_Sensor_Value .................................................................... 12 3.10 CH_Slat_Sensor_Value ......................................................................... 13 3.11 CH_Floor_Temperature_Sensor ............................................................ 14

Savedate: Filename: page 1 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|Version|Date|Modifications|
|---|---|---|
|WGI0077-01|2014.07.01|Document creation.|
|WGI0077-02|2014.11.15|Update|
|WGI0077-03|2015.01.05|Addition of info“Basic” for Datapoints and Parameters.|
|AN171 v01|2015.01.30|Creation of the Draft Proposal.|
|WGI0077-03|2015.04.27|Inclusion of the resolution of comments from RfV.|
|AN171 v02|2015.05.05|Preparation of the Draft for Voting.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

##### 3.12 CH_Room_Regulator ............................................................................. 15 3.13 CH_HeatCoolMode ................................................................................ 16 3.14 CH_TemperatureSetpointShift ............................................................... 17 3.15 CH_Tariff_Sensor_Basic ........................................................................ 18 3.16 CH_Tariff_Display_Basic ....................................................................... 18 3.17 CH_Energy_Tariff_Sensor ..................................................................... 19 3.18 CH_Energy_Tariff_Sensor ..................................................................... 20

 4 New Codes list .................................................................................................. 20
 4.1 New Channel Codes .............................................................................. 20 4.2 New connection codes ........................................................................... 21

 5 Extended E-Mode Channel specification format ............................................ 22
 5.1 Channel specification ............................................................................. 22 5.2 Adjustable E-Mode Channel description ................................................ 25

## 1 Purpose, motivation and scope

 _This clause is not intended for inclusion in the KNX Specifications._

### 1.1 Purpose
E-Mode is based on the concept of E-Mode Channels.

Until now, the E-Mode Channels are specified and voted within the KNX Association. (They
are called “SEC Channels”).

Now with the FEC Channels, the manufacturer can specify an E-Mode Channel as he wants
but this E-Mode Channel must be defined based on an existing standard E-Mode Channels.
Those E-Mode Channels are called Basic E-Mode Channels.

In the list of existing standard E-Mode channels, some E-Mode channels are sufficiently
basic to be easily extendable for a definition of a new E-Mode Channel. Other E-Mode
Channels are too complex to allow flexibility in definition of new E-Mode Channels.

This list of potentially extendable E-Mode Channels is enumerated in clause 2 “Existing
E-Mode Channels usable as Basic E-Mode Channels”.

Moreover, for covering different applications, some E-Mode Channels with basic functionality
are missing. New E-Mode Channels are defined to fulfil this gap in clause 3 “New E-Mode
Channels definition usable as Basic E-Mode Channel”.

### 1.2 Abbreviation

 _These abbreviations are repeated here for convenience. They are already available in Chapter 3/1/2_

_“Glossary”. This clause needs therefore not to be considered for integration in the KNX Specifications._

AJS: Adjustable Selection

FEC: Flexible E-mode Channel

SEC: Static E-mode Channel

Savedate: Filename: page 2 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

## 2 Existing E-Mode Channels usable as Basic E-Mode
 Channels

**Table 1 – Overview of existing E-Mode Channels that are accepted as Basic E-Mode Channel**

**Channel Code** **Channel name**

0002h CH_PB_Toggle

0003h CH_PB_Timed

0005h CH_PB_Dimmer

0007h CH_PB_Scene_Numbered

0008h CH_PB_Scene

0009h CH_Switch

000Bh CH_Switch_Forced

000Ch CH_Switch_Dimmer

000Eh CH_Switch_Dimmer_Toggle

000Fh CH_Switch_Scene_Numbered

0010h CH_Switch_Scene

0012h CH_Light_Sensor

0015h CH_Switch_Shutter

0016h CH_Switch_Sunblind

0017h CH_PB_Shutter

0018h CH_PB_Blind (also named CH_PB_Sunblind)

0019h CH_PB_Shutter_Toggle

001Ah CH_PB_Sunblind_Toggle

001Bh CH_Wind_Alarm_Sensor

001Ch CH_Rain_Alarm_Sensor

001Dh CH_Frost_Alarm_Sensor

001Fh CH_Logical_Sensor

0020h CH_PushPutton

0021h CH_Battery_Status

0022h CH_Smoke_Detector

0023h CH_Window_Door_Contact_Basic

0024h CH_Outside_Temperature_Sensor

0025h CH_Room_Temperature_Sensor

0028h CH_Switch_HVAC_Heating Enabled

0029h CH_PB_Dimming_Value

002Eh CH_PB_HVAC_Mode_1

002Fh CH_PB_Shutter_1

0100h CH_Status_Info

0101h CH_Binary_Actuator_Basic

0105h CH_Dimming_Actuator_Basic

Savedate: Filename: page 3 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|Channel Code|Channel name|
|---|---|
|0002h|CH_PB_Toggle|
|0003h|<br>CH_PB_Timed|
|0005h|<br>CH_PB_Dimmer|
|0007h|<br>CH_PB_Scene_Numbered|
|0008h|<br>CH_PB_Scene|
|0009h|<br>CH_Switch|
|000Bh|<br>CH_Switch_Forced|
|000Ch|<br>CH_Switch_Dimmer|
|000Eh|<br>CH_Switch_Dimmer_Toggle|
|000Fh|<br>CH_Switch_Scene_Numbered|
|0010h|<br>CH_Switch_Scene|
|0012h|<br>CH_Light_Sensor|
|0015h|<br>CH_Switch_Shutter|
|0016h|<br>CH_Switch_Sunblind|
|0017h|<br>CH_PB_Shutter|
|0018h|<br>CH_PB_Blind (also named CH_PB_Sunblind)|
|0019h|<br>CH_PB_Shutter_Toggle|
|001Ah|<br>CH_PB_Sunblind_Toggle|
|001Bh|<br>CH_Wind_Alarm_Sensor|
|001Ch|<br>CH_Rain_Alarm_Sensor|
|001Dh|<br>CH_Frost_Alarm_Sensor|
|001Fh|<br>CH_Logical_Sensor|
|0020h|<br>CH_PushPutton|
|0021h|<br>CH_Battery_Status|
|0022h|<br>CH_Smoke_Detector|
|0023h|<br>CH_Window_Door_Contact_Basic|
|0024h|<br>CH_Outside_Temperature_Sensor|
|0025h|<br>CH_Room_Temperature_Sensor|
|0028h|<br>CH_Switch_HVAC_Heating Enabled|
|0029h|<br>CH_PB_Dimming_Value|
|002Eh|<br>CH_PB_HVAC_Mode_1|
|002Fh|<br>CH_PB_Shutter_1|
|0100h|<br>CH_Status_Info|
|0101h|<br>CH_Binary_Actuator_Basic|
|0105h|<br>CH_Dimming_Actuator_Basic|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

**Channel Code** **Channel name**

010Eh CH_Logical_Actuator

0120h CH_Info_Adaptable

0203h CH_Scene_Converter

0205h CH_DateTime_Scheduler

0206h CH_System_Clock_Master

0207h CH_HVAC_Mode_Scheduler

0209h CH_System_Clock_Slave

020Ah CH_LightSensor_Slave

0501h CH_Heating_Valve_Actuator

0502h CH_HVAC_Mode_Display

0504h CH_Electrical_Heating_Enable_Disable

## 3 New E-Mode Channels definition usable as Basic E-Mode
 Channel

### 3.1 CH_Logic_AndOr_Basic

- **Name:** CH_Logic_AndOr_Basic

- **ID:** 020Ch

- **Classification:** functional module

- **Functional Block:**

    - 1007 FB_Logic_AndOr (LAO)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**[CH_Logic_AndOr_Basic ]**

LAO.Logical value 1 LV1 Sub- Sub- LR LAO.Logical Result

LAO.Logical value 2 LV2 Unit 1 Unit 2

**_Parameters_**

Logical function type P1

- **Description**

See Functional Block FB_Logical_AndOr.

Savedate: Filename: page 4 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|Channel Code|Channel name|
|---|---|
|010Eh|CH_Logical_Actuator|
|0120h|<br>CH_Info_Adaptable|
|0203h|<br>CH_Scene_Converter|
|0205h|<br>CH_DateTime_Scheduler|
|0206h|<br>CH_System_Clock_Master|
|0207h|<br>CH_HVAC_Mode_Scheduler|
|0209h|<br>CH_System_Clock_Slave|
|020Ah|<br>CH_LightSensor_Slave|
|0501h|<br>CH_Heating_Valve_Actuator|
|0502h|<br>CH_HVAC_Mode_Display|
|0504h|<br>CH_Electrical_Heating_Enable_Disable|

|LV1|Col2|CH Logic AndOr Basic<br>_ _ _<br>Sub- Sub-<br>Unit 1 Unit 2|Col4|LR|
|---|---|---|---|---|
|<br>LV1|LV1|Sub-<br>Unit 1|Sub-<br>Unit 2|LR|
||LV2|LV2|LV2||
|<br>P1|||||
||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

- **Datapoint list**

**Flags**
**Index** **FB Datapoint ID** **Name** **Subunit** **Main CC** **Additional CCs**
**(i/o,x,v…..)**

1 1007/LV1 Logical value 1 1 CC_Logical I X

2 1007/LV2 Logical value 2 1 CC_Logical I X

3 1007/LR Logical result 2 CC_Logical CC_switch_OnOff O

- **Parameter table**

**Recommended default** **Bit**
**Index Identifier** **Name** **Type**

**value** **Offset**

1 P1 Logical function type PART_Logical OR (=0) 0

### 3.2 CH_Binary_Actuator

- **Name:** CH_Binary_Actuator

- **ID:** 0400h

- **Classification:** actuator

- **Functional Block:**

    - 417 - FB Light Switching Actuator Basic (LSAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

LSAB.Switch OnOff SOO **CH_Binary_Actuator**

**_Parameters_**

- **Description**

See FB Light Switching Actuator Basic (LSAB).

- **Datapoint list**

**Sub-** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC** **Additional CCs**

**unit** **(i/o,x,v…..)**

1 417 / Switch On Off OnOff 1 CC_Switch_OnOff I

Savedate: Filename: page 5 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|1007/LV1|Logical value 1|1|CC_Logical||I X|
|2|1007/LV2|Logical value 2|1|<br>CC_Logical|<br>|I X|
|3|1007/LR|Logical result|2|<br>CC_Logical|<br> CC_switch_OnOff|O|

|Index|Identifier|Name|Type|Recommended default<br>value|Bit<br>Offset|
|---|---|---|---|---|---|
|1|P1|Logical function type|PART_Logical|OR (=0)|0|

|SOO|CH Binary Actuator<br>_ _|
|---|---|
|||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|417 / Switch On Off|OnOff|1|CC_Switch_OnOff||I|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.3 CH_Motion_Detector

- **Name:** CH_Motion_Detector

- **ID:** 0401h

- **Classification:** sensor

- **Functional Block:**

    - 414 – FB Movement Detector for Lighting (MDL)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Motion_Detector_Basic**

TSS MDL.Timed StartStop
**_Parameters_**

Cycle time P1

- **Description**

See FB Movement Detector for Lighting.

The parameter Cycle_time is fixed to 45 s.

The recommended value for the parameter of the timed function in the actuator
linked to this channel is 1 min.

- **Datapoint list**

**Sub-** **Additional** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v…..)**

1 414 / Timed Timed StartStop 1 CC_Timed O
StartStop

- **Parameter table**

**Recommended default**
**Index Identifier** **Name** **Type** **Bit Offset**

**value**

1 P1 Cycle_time PART_Cycle_Tim 45 s 0
e

Savedate: Filename: page 6 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|P1|CH Motion Detector Basic<br>_ _ _|TSS|
|---|---|---|
|<br> <br> <br>P1|**CH_Motion_Detector_Basic** <br> <br> <br> <br>||
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|414 / Timed<br>StartStop|Timed StartStop|1|CC_Timed||O|

|Index|Identifier|Name|Type|Recommended default<br>value|Bit Offset|
|---|---|---|---|---|---|
|1|P1|Cycle_time|PART_Cycle_Tim<br>e|45 s|0|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.4 CH_Dimming_Sensor_Value

 - **Name:** CH_Dimming_Sensor_Value

 - **ID:** 0440h

 - **Classification:** Sensor

 - **Functional Block:**

     - 420 – FB Dimming Sensor Basic

 - **Graphical representation**

**_Inputs_** **_Outputs_**

**CH_Dimming_Sensor_Value**

ASC 420.AbsoluteSetvalueControl

**_Parameters_**

AbsoluteSetvalue1 P1

AbsoluteSetvalue2 P2

 - **Description**

Please refer to the specification of FB Dimming Sensor Basic

 - **Datapoint list**

**FB**

**Sub-** **Additional** **Flags**

**Index** **Datapoint** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v…..)**

**ID**

1 420.ASC AbsoluteSetvalueCon 1 CC_Dimming_Valu O
trol e

 - **Parameter table**

**Recommended** **Bit-**
**Index Identifier** **Name** **Type**

**default value** **Offset**

1 P1 AbsoluteSetvalue1 PART_Dimming_Value 255: 100 % 0

2 P2 AbsoluteSetvalue2 PART_Dimming_Value 0 :  0 % 8

Savedate: Filename: page 7 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|Parameters<br>teSetvalue1 P1<br>teSetvalue2 P2|CH Dimming Sensor Value<br>_ _ _|ASC|
|---|---|---|
|**_Parameters_** <br>teSetvalue1 <br>P1<br>teSetvalue2 <br>P2|**CH_Dimming_Sensor_Value**<br>  <br>||

|Index|FB<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|420.ASC|AbsoluteSetvalueCon<br>trol|1|CC_Dimming_Valu<br>e||O|

|Index|Identifier|Name|Type|Recommended<br>default value|Bit-<br>Offset|
|---|---|---|---|---|---|
|1|P1|AbsoluteSetvalue1|PART_Dimming_Value|255: 100 %|0|
|2|P2|<br>AbsoluteSetvalue2|<br> PART_Dimming_Value|0 :    0 %|8|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.5 CH_Dimming_Actuator

- **Name:** CH_Dimming_Actuator

- **ID:** 0441h

- **Classification:** Actuator

- **Functional Block:**

    - 418 - FB Dimming Actuator Basic (DAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

DAB.Switch On Off SOO **CH_Dimming_Actuator**

DAB.Relative Setvalue

Control RSC

DAB.Absolute Setvalue

Control ASC

**_Parameters_**

- **Description**

See FB Dimming Actuator Basic (DAB).

- **Datapoint list**

**Inde** **Sub-** **Additional** **Flags**

**FB / DP_Name** **Name** **Main CC**
**x** **unit** **CCs** **(i/o,x,v…..)**

1 418 / OnOff OnOff 1 CC_Switch_OnOff I

2 418 / Dimming Dimming Ctrl 1 CC_Dimming_Ctrl I
Ctrl

3 418 / Dimming Dimming Value 1 CC_Dimming_Value I
Value

Savedate: Filename: page 8 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|SOO|CH Dimming Actuator<br>_ _|
|---|---|
|RSC|RSC|
|ASC|ASC|
|||

|Inde<br>x|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|418 / OnOff|OnOff|1|CC_Switch_OnOff||I|
|2|418 / Dimming<br>Ctrl|Dimming Ctrl|1|<br>CC_Dimming_Ctrl||I|
|3|418 / Dimming<br>Value|Dimming Value|1|CC_Dimming_Value||I|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.6 CH_Room_Light_Controller

- **Name:** CH_Room_Light_Controller

- **ID:** 0442h

- **Classification:** actuator

- **Functional Block:**

    - 417 - FB Light Switching Actuator Basic (LSAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


RLC.RoomIllumination

RI

RLC.RoomIllumination

Setpoint RIS

**_Parameters_**

- **Description**

- **Datapoint list**


RLC.DimmingValue

|RI|CH Room Light -<br>_ _ _<br>Controller|DV|
|---|---|---|
|RIS|RIS||
||||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|415 /<br>RoomIllumination|Room<br>Illumination|1|CC_Illumination||I|
|2|415 /<br>RoomIllumination<br>Setpoint|Room<br>Illumination<br>Setpoint|1|CC_IlluminationSetpoint||I|
|3|415 / Dimming<br>Value|Dimming<br>Value|1|CC_Dimming_Value||O|


Savedate: Filename: page 9 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.7 CH_Shutter_Actuator_Basic

- **Name:** CH_Shutter_Actuator_Basic

- **ID:** 0481h

- **Classification:** actuator

- **Functional Block:**

    - 805 – FB Sunblind Actuator Basic (SAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

SAB.Move UpDown MUD **CH_Shutter_Actuator_Basic**

SAB.DedicatedStop STOP

**_Parameters_**

- **Description**

The operation mode is fixed to shutter.

- **Datapoint list**

**Sub-** **Additional** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v…..)**

1 805 / Move Move 1 CC_Move_UpDown I
UpDown UpDown

2 805 / Dedicated Stop 1 CC_Stop I
Stop

- **Parameter table**

Savedate: Filename: page 10 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|ve UpDown MUD<br>dicatedStop STOP<br>Parameters|CH Shutter Actuator Basic<br>_ _ _|
|---|---|

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|805 / Move<br>UpDown|Move<br>UpDown|1|CC_Move_UpDown||I|
|2|805 / Dedicated<br>Stop|Stop|1|CC_Stop||I|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.8 CH_SunBlinds_Actuator_Basic

- **Name:** CH_SunBlinds_Actuator_Basic

- **ID:** 0482h

- **Classification:** actuator

- **Functional Block:**

    - 805 – FB Sunblind Actuator Basic (SAB)

- **Graphical representation:**

**_Inputs_** **_Outputs_**

SAB.Move UpDown MUD **[CH_SunBlinds_Actuator_Basic]**

SAB.StepStop UpDown SSUD

**_Parameters_**

- **Description**

- **Datapoint list**

**Sub-** **Additional** **Flags**
**Index** **FB / DP_Name** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v…..)**

1 805 / Move Move UpDown 1 CC_Move_UpDown I
UpDown

2 805 / StopStep StepStop 1 CC_StepStop_UpDow I
UpDown UpDown n

- **Parameter table**

Savedate: Filename: page 11 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|MUD|CH SunBlinds Actuator Basic<br>_ _ _|
|---|---|
|SSUD|SSUD|
|||

|Index|FB / DP Name<br>_|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|805 / Move<br>UpDown|Move UpDown|1|CC_Move_UpDown||I|
|2|805 / StopStep<br>UpDown|<br>StepStop<br>UpDown|1|CC_StepStop_UpDow<br>n||I|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.9 CH_Shutter_Sensor_Value

- **Name:** CH_Shutter_Sensor_Value

- **ID:** 0483h

- **Classification:** Sensor

- **Functional Block:**

    - 801 - FB Shutters and Blinds Sunblind Sensor Basic (SSSB)

- **Graphical representation**

**_Inputs_** **_Outputs_**

**CH_Shutter_Sensor_Value**

SAPBP 801.

SetAbsolutePositionBlinds%

**_Parameters_**

- **Description**

- **Datapoint list**

**FB**

**Sub** **Additional** **Flags**

**Index** **Datapoint** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v…..)**

**ID**

1 801.SAPBP Set Absolute 1 CC_Blinds_Position_P O

Position Blinds ercentage
Percentage

Savedate: Filename: page 12 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|CH Shutter Sensor Value<br>_ _ _|SAPBP|
|---|---|
|**CH_Shutter_Sensor_Value**||

|Index|FB<br>Datapoint<br>ID|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|801.SAPBP|Set Absolute<br>Position Blinds<br>Percentage|1|CC_Blinds_Position_P<br>ercentage||O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.10 CH_Slat_Sensor_Value

- **Name:** CH_Slat_Sensor_Value

- **ID:** 0484h

- **Classification:** Sensor

- **Functional Block:**

    - 801 - FB Shutters and Blinds Sunblind Sensor Basic (SSSB)

- **Graphical representation**

**_Inputs_** **_Outputs_**


**CH_Slat_Sensor_Value**


SAPBL 801.

SetAbsolutePositionSlats%

**_Parameters_**

- **Description**

- **Datapoint list**

**FB**

**Sub** **Additional** **Flags**

**Index** **Datapoint** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v…..)**

**ID**

1 801.SAPBL Set Absolute 1 CC_Slats_Position_Per O

Position Slats centage
Percentage

Savedate: Filename: page 13 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|CH Slat Sensor Value<br>_ _ _|SAPBL|
|---|---|
|**CH_Slat_Sensor_Value**||

|Index|FB<br>Datapoint<br>ID|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|801.SAPBL|Set Absolute<br>Position Slats<br>Percentage|1|CC_Slats_Position_Per<br>centage||O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.11 CH_Floor_Temperature_Sensor

- **Name:** CH_Floor_Temperature_Sensor

- **ID:** 0527h

- **Classification:** sensor

- **Functional Block:**

    - 329 - FB Floor Temperature Sensor (FTS)

- **Graphical representation:**

**_Inputs_** **_Outputs_**


**CH_Floor_Temperature_-**


TO 329.TempFloor

**_Parameters_**

- **Description**

The floor temperature sensor channel shall measure the floor temperature and shall
provide it to the system. The floor temperature shall be sent on change and shall be
repeated periodically.

     - The period for sending the floor temperature shall be 15 min and the TempCOV

value shall be 0,2 K.

     - The TempFloor Datapoint Type shall be 9.001 DPT_Value_Temp. The exponent

may be fixed to 3.

- **Datapoint list**

**Flags**
**Index** **FB Datapoint ID** **Name** **Subunit Main CC** **Additional CCs**
**(i/o,x,v…..)**

0 329.TempFloor TempFloor 1 CC_TF CC_Temperature O

Savedate: Filename: page 14 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|CH Floor Temperature -<br>_ _ _<br>Sensor|TO|
|---|---|
|||
|||

|Index|FB Datapoint ID|Name|Subunit|Main CC|Additional CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|0|329.TempFloor|TempFloor|1|CC_TF|CC_Temperature|O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.12 CH_Room_Regulator

- **Name:** CH_Room_Regulator

- **ID:** 528h

- **Classification:** Functional Module

- **Functional Block:**

    - 257 - Radiator and Chilled Ceiling Room Control (RCCRC)

    - 116 - FB_Position_to_On_Off_Converter

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Room_Regulator**

APHSA ActPosSetHeatStageA

OOHSA OnOffHeatStageA

**_Parameters_**

The necessary setpoint and room temperature for regulation are internal information
of the E-Mode Channel.

- **Datapoint list**

**FB Datapoint** **Sub-** **Flags**
**Index** **Name** **Main CC** **Additional CCs**

**ID** **Unit** **(i/o,x,v…..)**

1 257.APSHSA ActPosSetpHeat 1 CC_Scaling_Value O
StageA

2 116.OOHSA OnOffHeatStage 1 CC_Switch_OnOff O
A

Savedate: Filename: page 15 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|CH Room Regulator<br>_ _|APHSA|
|---|---|
|**CH_Room_Regulator**|OOHSA|
|**CH_Room_Regulator**||

|Index|FB Datapoint<br>ID|Name|Sub-<br>Unit|Main CC|Additional CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|257.APSHSA|ActPosSetpHeat<br>StageA|1|CC_Scaling_Value||O|
|2|116.OOHSA|OnOffHeatStage<br>A|1|CC_Switch_OnOff||O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.13 CH_HeatCoolMode

- **Name:** CH_HeatCoolMode

- **ID:** 0529h

- **Classification:** Sensor

- **Functional Block:**

    - 257 - Radiator and Chilled Ceiling Room Control (RCCRC)

- **Graphical representation**

**_Inputs_** **_Outputs_**


**CH_HeatCoolMode**


HCM HeatCoolMode

**_Parameters_**

- **Description**

- **Datapoint list**

**Sub** **Additional** **Flags**

**Index** **[FB Datapoint ]** **Name** **Main CC**

**ID** **unit** **CCs** **(i/o,x,v…..)**

1 257.HCM HeatCoolMode 1 CC_HeatCool O

Savedate: Filename: page 16 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|CH HeatCoolMode<br>_|HCM|
|---|---|
|**CH_HeatCoolMode**<br>||

|Index|FB Datapoint<br>ID|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|257.HCM|HeatCoolMode|1|CC_HeatCool||O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.14 CH_TemperatureSetpointShift

- **Name:** CH_TemperatureSetpointShift

- **ID:** 052Ah

- **Classification:** Sensor

- **Functional Block:**

    - 384 - User HVAC Room Settings

- **Graphical representation**

**_Inputs_** **_Outputs_**


**CH_TemperatureSetpoint-**


TRSUO TempRoomSetpUserOffset

**_Parameters_**

- **Description**

- **Datapoint list**

**Sub** **Additional** **Flags**

**Index** **[FB Datapoint ]** **Name** **Main CC**

**ID** **unit** **CCs** **(i/o,x,v…..)**

1 384.TRSUO TempRoomSetp 1 CC_TempRoomSetpS O

UserOffset etShift

Savedate: Filename: page 17 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|CH TemperatureSetpoint-<br>_<br>Shift|TRSUO|
|---|---|
|**CH_TemperatureSetpoint-**<br>**Shift**<br>||

|Index|FB Datapoint<br>ID|Name|Sub<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|384.TRSUO|TempRoomSetp<br>UserOffset|1|CC_TempRoomSetpS<br>etShift||O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.15 CH_Tariff_Sensor_Basic

- **Name:** CH_Tariff_Sensor_Basic

- **ID:** 0586h

- **Classification:** Metering

- **Functional Block:**

    - 1122 - FB Tariff Sensor

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Tariff_Sensor_Basic**

T Tariff

- **Datapoint list**

**FB /** **Sub**

**Additional** **Flags**

**Index** **Datapoint** **Name** **-** **Main CC**

**CCs** **(i/o,x,v…..)**

**ID** **unit**

1 1122.T Tariff 1 CC_Tariff (108) O

### 3.16 CH_Tariff_Display_Basic

- **Name:** CH_Tariff_Display_Basic

- **ID:** 0587h

- **Classification:** Metering

- **Functional Block:**

     - 1123 - FB Tariff Display

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Tariff_Display_Basic**

Tariff T

Savedate: Filename: page 18 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|CH Tariff Sensor Basic<br>_ _ _|T|
|---|---|
|**CH_Tariff_Sensor_Basic**||

|Index|FB /<br>Datapoint<br>ID|Name|Sub<br>-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|1122.T|Tariff|1|CC_Tariff(108)||O|

|T|CH Tariff Display Basic<br>_ _ _|
|---|---|
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

- **Datapoint list**

**FB /** **Sub**

**Additional** **Flags**

**Index** **Datapoint** **Name** **-** **Main CC**

**CCs** **(i/o,x,v…..)**

**ID** **unit**

1 1123.T Tariff 1 CC_Tariff (108) I

### 3.17 CH_Energy_Tariff_Sensor

- **Name:** CH_Energy_Tariff_Sensor

- **ID:** 0584h

- **Classification:** Sensor

- **Functional Block:**

     - 1120 - FB Electrical Energy Tariff Sensor

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Energy_Tariff_Sensor**

Tariff T TAE Tariff_ActiveEnergy

**_Parameters_**

- **Datapoint list**

**FB /** **Sub**

**Additional** **Flags**

**Index** **Datapoint** **Name** **-** **Main CC**

**CCs** **(i/o,x,v…..)**

**ID** **unit**

1 1120.TAET Tariff_ActiveEnergy 1 CC_Tariff_ActiveEne O
rgy_Total (111)

2 1120.T Tariff 1 CC_Tariff (100) I

Savedate: Filename: page 19 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|Index|FB /<br>Datapoint<br>ID|Name|Sub<br>-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|1123.T|Tariff|1|CC_Tariff(108)||I|

|Tariff T<br>Parameters|CH Energy Tariff Sensor<br>_ _ _|TAE|
|---|---|---|
|Tariff <br>T <br>**_Parameters _**|**CH_Energy_Tariff_Sensor** <br>||

|Index|FB /<br>Datapoint<br>ID|Name|Sub<br>-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|1120.TAET|Tariff_ActiveEnergy|1|CC_Tariff_ActiveEne<br>rgy_Total(111)||O|
|2|1120.T|Tariff|1|<br>CC_Tariff(100)||I|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

### 3.18 CH_Energy_Tariff_Sensor

- **Name:** CH_Energy_Tariff_Sensor

- **ID:** 0585h

- **Classification:** Sensor

- **Functional Block:**

     - 1121 - FB Electrical Energy Tariff Display

- **Graphical representation:**

**_Inputs_** **_Outputs_**

**CH_Energy_Tariff_Sensor**

Tariff_ActiveEnergy TAE

**_Parameters_**

- **Datapoint list**

**FB /**

**Sub-** **Additional** **Flags**

**Index** **Datapoint** **Name** **Main CC**

**unit** **CCs** **(i/o,x,v…..)**

**ID**

1 1121.TAET Tariff_ActiveEnergy 1 CC_Tariff_ActiveEn I
ergy_Total (111)

## 4 New Codes list

### 4.1 New Channel Codes

**Table 2 – Overview of new Channel Codes**

**Channel**

**Channel name**
**Code**

020Ch CH_Logic_AndOr_Basic

0400h CH_Binary_Actuator

0401h CH_Motion_Detector

0440h CH_Dimming_Sensor_Value

0441h CH_Dimming_Actuator

0442h CH_Room_Light_Controller

0481h CH_Shutter_Actuator_Basic

0482h CH_SunBlinds_Actuator_Basic

0483h CH_Shutter_Sensor_Value

Savedate: Filename: page 20 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|ctiveEnergy TAE<br>Parameters|CH Energy Tariff Sensor<br>_ _ _|
|---|---|

|Index|FB /<br>Datapoint<br>ID|Name|Sub-<br>unit|Main CC|Additional<br>CCs|Flags<br>(i/o,x,v…..)|
|---|---|---|---|---|---|---|
|1|1121.TAET|Tariff_ActiveEnergy|1|CC_Tariff_ActiveEn<br>ergy_Total(111)||I|

|Channel<br>Code|Channel name|
|---|---|
|020Ch|CH_Logic_AndOr_Basic|
|0400h|<br>CH_Binary_Actuator|
|0401h|<br>CH_Motion_Detector|
|0440h|<br>CH_Dimming_Sensor_Value|
|0441h|<br>CH_Dimming_Actuator|
|0442h|<br>CH_Room_Light_Controller|
|0481h|<br>CH_Shutter_Actuator_Basic|
|0482h|<br>CH_SunBlinds_Actuator_Basic|
|0483h|<br>CH_Shutter_Sensor_Value|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

**Channel**

**Channel name**
**Code**

0484h CH_Slat_Sensor_Value

0527h CH_Floor_Temperature_Sensor

0528h CH_Room_Regulator

0529h CH_HeatCoolMode

052Ah CH_TemperatureSetpointShift

0584h CH_Energy_Tariff_Sensor

0585h CH_Energy_Tariff_Display

0586h CH_Tariff_Sensor_Basic

0587h CH_Tariff_Display_Basic

### 4.2 New connection codes

**Table 3 – Overview of new Connection Codes**

**Value** **Value**

**Connection code** **Datapoint Type**

**(Dec)** **(Hex)**

148 94h CC_IlluminationSetpoint 9.004 DPT_Value_Lux

Savedate: Filename: page 21 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|Channel<br>Code|Channel name|
|---|---|
|0484h|CH_Slat_Sensor_Value|
|0527h|<br>CH_Floor_Temperature_Sensor|
|0528h|<br>CH_Room_Regulator|
|0529h|CH_HeatCoolMode|
|052Ah|<br>CH_TemperatureSetpointShift|
|0584h|CH_Energy_Tariff_Sensor|
|0585h|<br>CH_Energy_Tariff_Display|
|0586h|CH_Tariff_Sensor_Basic|
|0587h|<br>CH_Tariff_Display_Basic|

|Value<br>(Dec)|Value<br>(Hex)|Connection code|Datapoint Type|
|---|---|---|---|
|148|94h|CC_IlluminationSetpoint|9.004 DPT_Value_Lux|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

## 5 Extended E-Mode Channel specification format

### 5.1 Channel specification
Every Extended E-Mode Channel is described for registration purpose according the
following layout.

- **Name:** The chosen E-Mode Channel name shall be given here. It shall be
with “FEC_”.

- **ID:** The newly chosen Channel Code shall be given here.
Manuf / Channel Code / Version.
Each manufacturer shall manage his own Channel Codes and
versions list.

- **Classification:** Here, the classification of the E-Mode Channel shall be given,
according one of the following classes:

                  - sensor
                  - actuator
                  - controller

- **Basic channel:** Here, the Basic E-Mode Channel used for the E-Mode Channel. It
shall be with “CH_”.
EXAMPLE

    - 0101h - CH_Binary_Actuator_Basic



- **Functional**

**Blocks:**

EXAMPLE


Here, the list of Functional Blocks used to achieve the E-Mode
Channel functionality shall be given even the Functional Block of the
Basic E-Mode Channel. This list relates the channel to one or more
FBs. For each FB, its Interface Object Type and its name shall be
given.



    - 384 - User HVAC Room Settings (UHRS)

    - 321 – Room Temperature Sensor (RTS)

Savedate: Filename: page 22 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

- **Graphical representation**

The difference to a FB Diagram is the
double line, and the grey background.

**_Inputs_** **_Outputs_**


List and name of the
Inputs of the Channel.

**_parameters_**


**Name of the Channel** List and name of the
Outputs of the
Channel.

I1 O1

… …

In On


List and name of the
Parameters of the
Channel.
P1

…

Pn

- **Datapoint list**

List of the Datapoints used by the Channel. (In case of grouping Functional Blocks the
internal Datapoints should not be present in this list).

**Index** **FB** **Name** **Sub-** **Main CC** **Additional CCs** **Flags**
**Datapoint** **Unit** **(i,o,x)**

**ID**

**Index:** Index of the Datapoint in the E-Mode Channel. According the
connection rules, the Datapoints will be connected in the order of the
index.

**FB / DP_Name:** This shall identify the Datapoint by referring to its name or

abbreviation from the Functional Block description.

**Name:** This shall be the name of Datapoint.

Savedate: Filename: page 23 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|I1|Name of the Channel|O1|
|---|---|---|
|I1|||
|…|…|…|
|In|In|On|
|P1|P1||
|…|…|…|
|Pn|Pn|Pn|
||||

|Index|FB<br>Datapoint<br>ID|Name|Sub-<br>Unit|Main CC|Additional CCs|Flags<br>(i,o,x)|Basic|
|---|---|---|---|---|---|---|---|
|||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

**Sub-Unit:** When having an E-Mode Channel with several Datapoints with the
same Connection Code, there is a need to designate one given
Datapoint when establishing the links. A Sub-Unit defines one set of
such Datapoints.

EXAMPLE A channel with a logical OR functionality will have the same Input and Output
Connection Code and thus needs to have the possibility to connect the “input part” and the
“output part” separately.

**Main CC:** Here, the Connection Code of the Datapoint shall be filled in. This
value will be used with the connection rules during the link procedure.


**Additional**
**CCs:**


Here, “compatible” connections codes can be listed. At least the data
format shall be the same. Maximum 3 additional connection code.


**Flags:** Here, the E-Mode flags for the Datapoint shall be specified. These will
be used while applying the connection rules during the link procedure.

**Basic:** Defines if the Datapoint is in the Basic channel

Specification of E-Mode Datapoint flags:

**Flag Meaning** **Description**

X Datapoints connectable This Datapoint shall have exactly one connection.
only once Only one Group Address shall be assigned to this

Datapoint (1-to-1 connection).

O Output Datapoint The value of this Datapoint shall be sent.

I Input Datapoint The value of this Datapoint shall be received.

- **Parameter table**

This table shall list the parameters that shall be implemented for this Channel.

Index FB ID Name Recommended Parameter type Flags Basic
default value name

**Index:** The cell shall specify the index of the Parameter in the
channel.

**FB ID:** This identifier shall indicate the corresponding Parameter of
the used FB(s).

**Name:** This shall be the name of the Parameter.

|Flag|Meaning|Description|
|---|---|---|
|X|Datapoints connectable<br>only once|This Datapoint shall have exactly one connection.<br>Only one Group Address shall be assigned to this<br>Datapoint (1-to-1 connection).|
|O|Output Datapoint|The value of this Datapoint shall be sent.|
|I|Input Datapoint|The value of this Datapoint shall be received.|

|Index|FB ID|Name|Recommended<br>default value|Parameter type<br>name|Flags|Basic|
|---|---|---|---|---|---|---|
||||||||


**Recommended**
**default value:**


This is the recommended default value for this Parameter. A
manufacturer may choose another value in an
implementation.


**Parameter type name:** Defines the name for the parameter type.

**Flags:** L/X/R

**Basic:** Defines if the parameter is in the Basic channel

Savedate: Filename: page 24 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

Specification of E-Mode Parameter flags:

**Flag Meaning** **Description**

L Local This flag shall indicate whether the Parameter is set locally or
not.

X Void This flag shall indicate whether this Parameter is void or not.
The value of a void Parameter shall have no effect on the
behaviour of the application.

R Restart This flag shall indicate whether the changing of this Parameter
will have immediate effect, or will only become effective after a
restart of the device.

Parameter Type name

**Octet**

**Format**

**0 (MSB)**

**1** **2** **3** **4** **5** **6** **7** **8**
**Type**

**Standard** 1 Standard Parameter 00h 00h 00h 00h 00h 00h

Type

**Bool** 2 Type 00h 00h 00h 00h 00h 00h 00h
**Enum** 3 Count Reference Object Object Object PID 0 Start Index

Type Type Instance Index (4 bit) (12 bit)

**INT8** 4 Flags Steps 00h Minimum 00h Maximum 00h 00h
**UINT8** 5 Flags Steps 00h Minimum 00h Maximum 00h 00h
**INT16** 6 Flags Steps Minimum Maximum 00h 00h
**UINT16** 7 Flags Steps Minimum Maximum 00h 00h
**FLOAT16** 8 Flags Steps Minimum Maximum 00h 00h
**Enum** 9 Count Reference Object Object Instance PID Start Index
**extended** Type Type (12 bits) (12 bits)

- **Explanation**

A graphical representation of the combination of the FB and a description of the behaviour of
the E-Mode Channel shall be added.

### 5.2 Adjustable E-Mode Channel description
An Adjustable E-Mode Channel can be seen as combination of E-Mode Channels.
Depending of the AJS, the set of Datapoints and parameters are different.

So, for each AJS, the Datapoints list and the parameters list must be specified. However the
parameter types list can be factorized for the complete E-Mode Channel.

Savedate: Filename: page 25 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|Flag|Meaning|Description|
|---|---|---|
|L|Local|This flag shall indicate whether the Parameter is set locally or<br>not.|
|X|Void|This flag shall indicate whether this Parameter is void or not.<br>The value of a void Parameter shall have no effect on the<br>behaviour of the application.|
|R|Restart|This flag shall indicate whether the changing of this Parameter<br>will have immediate effect, or will only become effective after a<br>restart of the device.|

|Parameter<br>Type<br>name|Format|Octet|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Parameter**<br>**Type**<br>**name**|**Format**|**0 (MSB)**<br>**Type **|<br>**1 **|**2 **|**3 **|**4 **|**5 **|**6 **|**6 **|**7 **|**8 **|**8 **|**9 (LSB)**|
||**Standard**|1|Standard Parameter<br>Type|Standard Parameter<br>Type|00h|00h|00h|00h|00h|00h|00h|00h|00h|
||**Bool **|2|Type|00h|00h|00h|00h|00h|00h|00h|00h|00h|00h|
||**Enum**|3|Count|Reference<br>Type|Object<br>Type|Object<br>Type|Object<br>Instance|Object<br>Index|Object<br>Index|PID|0 <br>(4 bit)|<br>Start Index<br>(12 bit)|<br>Start Index<br>(12 bit)|
||**INT8 **|4|Flags|Steps|00h|Minimum|00h|Maximum|Maximum|00h|00h|00h|00h|
||**UINT8 **|5|Flags|Steps|00h|Minimum|00h|Maximum|Maximum|00h|00h|00h|00h|
||**INT16 **|6|Flags|Steps|Minimum|Minimum|Maximum|Maximum|Maximum|00h|00h|00h|00h|
||**UINT16 **|7|Flags|Steps|Minimum|Minimum|Maximum|Maximum|Maximum|00h|00h|00h|00h|
||**FLOAT16 **|8|Flags|Steps|Minimum|Minimum|Maximum|Maximum|Maximum|00h|00h|00h|00h|
||**Enum**<br>**extended **|9|Count|Reference<br>Type|Object<br>Type|Object<br>Type|Object Instance<br>(12 bits)|Object Instance<br>(12 bits)|PID<br>(12 bits)|PID<br>(12 bits)|Start Index|Start Index|Start Index|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN171** **FEC Basic E-Mode Channels**

#### 5.2.1 Example

- **Name:** FEC_Light_Actuator_Timed

- **ID:** 250 / 1234 / 1.0.0

- **Classification:** Actuator

- **Basic channel:** 0101h - CH_Binary_Actuator_Basic

- **Functional Blocks:** 417 - FB Light Switching Actuator Basic (LSAB)

**_Inputs_** **_Outputs_**


**FEC_Light_Actuator_Timed**


LSAB.SwitchOnOff SOO

LSAB.TimedStartStop TSS

**_parameters_**

LSAB.Timed duration P1

- **Datapoint list**


IOO LSAB.InfoOnOff

|SOO|FEC Light Actuator Timed<br>_ _ _|IOO|
|---|---|---|
|<br>SOO|||
|<br>TSS|<br>TSS||
|<br> <br>P1|<br> <br>P1|<br> <br>P1|
||||


List of the Datapoints used by the Channel. (In case of grouping Functional Blocks the
internal Datapoints should not be present in this list).

**Sub-** **Additional** **Flags**
**Index FB ID** **Name** **Main CC**

**Unit** **CCs** (i,o,x) **[Basic ]**

1 417 SwitchOnOff CC_Switch_OnOff I Yes

2 417 TimedStartStop CC_Timed I No

3 417 InfoOnOff CC_Switch_OnOff_Status O Yes

- **Parameter table**

**Recommended**
**Index FB ID** **Name** **Parameter type name Flags Basic**

**default value**

1 417 Timed duration 1 minute PART_Time_Delay No

Savedate: Filename: page 26 of 26
2015 05 05 AN171 v02 Basic E-Mode Channels DV docx

|Index|FB ID|Name|Sub-<br>Unit|Main CC|Additional<br>CCs|Flags<br>(i,o,x)|Basic|
|---|---|---|---|---|---|---|---|
|1|417|SwitchOnOff||CC_Switch_OnOff||I|Yes|
|2|417|TimedStartStop||<br>CC_Timed||I|No|
|3|417|InfoOnOff||<br>CC_Switch_OnOff_Status||O|Yes|

|Index|FB ID|Name|Recommended<br>default value|Parameter type name|Flags|Basic|
|---|---|---|---|---|---|---|
|1|417|Timed duration|1 minute|PART_Time_Delay||No|


-----

