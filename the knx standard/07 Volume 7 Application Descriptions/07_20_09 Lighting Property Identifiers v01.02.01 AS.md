# Application Descriptions

## Lighting

 Property Identifiers

###### Summary

 This document is a part of the Lighting Application Interworking Standard. It specifies the standard Property Identifiers for each Lighting specific Functional Block / Interface Object.

 Version 01.02.01 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

01.00.00 2012.03.12 Document creation.
01.01.00 2012.03.14 Extension with Interface Objects and Properties of other lighting FBs.
01.01.01 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.
01.02.01 2019.10.29  - Inclusion of the Property Identifiers of Chapter 7/20/1 v01.05.01
and Chapter 7/20/2 v01.05.01.

               - Creation of the Approved Standard.

#### References

###### None.

Filename: 07_20_09 Lighting Property Identifiers v01.02.01 AS.docx
Version: 01.02.01
Status: Approved Standard
Savedate: 2019.10.29
Number of pages: 20

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 2 f 20

|Version|Date|Modifications|
|---|---|---|
|01.00.00|2012.03.12|Document creation.|
|01.01.00|2012.03.14|Extension with Interface Objects and Properties of other lighting FBs.|
|01.01.01|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.02.01|2019.10.29| <br>Inclusion of the Property Identifiers of Chapter 7/20/1 v01.05.01<br>and Chapter 7/20/2 v01.05.01.<br> <br>Creation of the Approved Standard.|


-----

#### Contents

##### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4

 2 FB Indoor Brightness Sensor (IBS) (Object Type 409) ...................................................... 5

 3 FB Indoor Luminance Sensor (ILS) (Object Type 410) ..................................................... 6

 4 FB Light Switching Actuator Basic (LSAB) (Object Type 417) ........................................ 7

 5 FB Dimming Actuator Basic (Object Type 418) ................................................................. 8

 6 FB Dimming Sensor Basic (DSB) (Object Type 420) .......................................................... 9

 7 FB Light Switching Sensor Basic (LSSB) (Object Type 421) .......................................... 10

 8 FB Colour Actuator xyY (Object Type 422) ...................................................................... 11

 9 FB Colour Actuator RGB(W) (Object Type 423) ............................................................. 12

 10 FB Colour Setting Sensor RGB(W) (CSSRGB) (Object Type 424) ................................ 13

 11 FB Colour Setting Sensor xyY (CSSXYY) (Object Type 425) ......................................... 14

 12 FB Colour Temperature Setting Sensor (CTSS) (Object Type 426) ............................... 15

 13 FB Colour Temperature Actuator (CTA) (Object Type 427) .......................................... 16

 14 FB DALI Proxy Basic Light Application (DPBLA) (Object Type 440) .......................... 17

 15 FB DALI Proxy Basic Scene Application (DPBSA) (Object Type 441) .......................... 18

 16 FB DALI Proxy Basic Device Specific (DPDS) (Object Type 442) .................................. 20

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 3 f 20


-----

### 1 Introduction

#### 1.1 Scope
###### This document specifies the Property Identifiers for Lighting process Data (runtime Interworking) and Parameters - and Diagnostic data used in the data interfaces of Lighting Functional Blocks. This document is part of the KNX Lighting Application Interworking Standard.

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 4 f 20


-----

### 2 FB Indoor Brightness Sensor (IBS) (Object Type 409)
###### Object Name: FB Indoor Brightness Sensor

 Object abbreviation: IBS

 Object Type: 409

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
110 Change of Value DPT_Value_Lux 9.004
111 Repetition Time DPT_TimePeriodSec 7.005

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 5 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|110|Change of Value|DPTValueLux|9.004|
|111|Repetition Time|__<br>DPTTimePeriodSec|7.005|


-----

### 3 FB Indoor Luminance Sensor (ILS) (Object Type 410)
###### Object Name: FB Indoor Luminance Sensor

 Object abbreviation: ILS

 Object Type: 410

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
110 Change of Value DPT_Value_Luminance 14.041
111 Repetition Time DPT_TimePeriodSec 7.005

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 6 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|110|Change of Value|DPTValueLuminance|14.041|
|111|Repetition Time|__<br>DPTTimePeriodSec|7.005|


-----

### 4 FB Light Switching Actuator Basic (LSAB) (Object Type 417)
###### Object Name: FB Light Switching Actuator Basic

 Object abbreviation: LSAB

 Object Type: 417

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
101 On Delay DPT_TimePeriod10Msec 7.003
102 Off Delay DPT_TimePeriod10MSec 7.003
103 Timed On Duration DPT_TimePeriodSec 7.005
104 Prewarning Duration DPT_TimePeriodSec 7.005
105 Transmission Cycle Time DPT_TimePeriodSec 7.005
106 Bus Power Up Message Delay DPT_Timeout_10Msec 7.003
107 Behaviour at Locking DPT_Behaviour_Lock_Unlock 20.600
108 Behaviour at Unlocking DPT_Behaviour_Lock_Unlock 20.600
109 Behaviour Bus Power Up DPT_Behaviour_Bus_Power_Up_Down 20.601
110 Behaviour Bus Power Down DPT_Behaviour_Bus_Power_Up_Down 20.601
111 Invert Output State DPT_Invert 1.012
112 Timed On Retrigger Function DPT_Enable 1.003
113 Manual Off Enable DPT_Enable 1.003
114 Invert Lock Device DPT_Invert 1.012
115 Lock State DPT_Switch 1.001
116 Unlock State DPT_Switch 1.001
117 State for Scene Number DPT_Switch[] 1.001
118 Storage Function for Scene DPT_Enable[] 1.003
119 Bus Power Up State DPT_Switch 1.001
120 Bus Power Down State DPT_Switch 1.001

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 7 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|101|On Delay|DPTTimePeriod10Msec|7.003|
|102|Off Delay|_<br>DPTTimePeriod10MSec|7.003|
|103|Timed On Duration|_<br>DPTTimePeriodSec|7.005|
|104|Prewarning Duration|_<br>DPTTimePeriodSec|7.005|
|105|Transmission Cycle Time|_<br>DPTTimePeriodSec|7.005|
|106|Bus Power Up Message Delay|_<br>DPTTimeout10Msec|7.003|
|107|Behaviour at Locking|__<br>DPTBehaviourLockUnlock|20.600|
|108|Behaviour at Unlocking|___<br>DPTBehaviourLockUnlock|20.600|
|109|Behaviour Bus Power Up|___<br>DPTBehaviourBusPowerUpDown|20.601|
|110|Behaviour Bus Power Down|_____<br>DPTBehaviourBusPowerUpDown|20.601|
|111|Invert Output State|_____<br>DPTInvert|1.012|
|112|Timed On Retrigger Function|_<br>DPTEnable|1.003|
|113|Manual Off Enable|_<br>DPTEnable|1.003|
|114|Invert Lock Device|_<br>DPTInvert|1.012|
|115|Lock State|_<br>DPTSwitch|1.001|
|116|Unlock State|_<br>DPTSwitch|1.001|
|117|State for Scene Number|_<br>DPTSwitch[]|1.001|
|118|Storage Function for Scene|_<br>DPTEnable[]|1.003|
|119|Bus Power Up State|_<br>DPTSwitch|1.001|
|120|Bus Power DownState|_<br>DPTSwitch|1.001|


-----

### 5 FB Dimming Actuator Basic (Object Type 418)
###### Object Name: FB Dimming Actuator Basic

 Object abbreviation: (none)

 Object Type: 418

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
101 On Delay DPT_TimePeriod10MSec 7.003
102 Off Delay DPT_TimePeriod10MSec 7.003
103 Switch Off Brightness Delay Time DPT_TimePeriodSec 7.005
104 Timed On Duration DPT_TimePeriodSec 7.005
105 Prewarning Duration DPT_TimePeriodSec 7.005
106 Transmission Cycle Time DPT_TimePeriodSec 7.005
107 Bus Power Up Message Delay DPT_Timeout_10MSec 7.003
108 Dimming Speed DPT_ScalingSpeed[] 225.001
109 Dimming Step Time DPT_Scaling_Step_Time[] 225.002
110 Dimming Speed for Switch on Set DPT_ScalingSpeed[] 225.001
Value

111 Dimming Speed for Switch Off DPT_ScalingSpeed 225.001
112 Dimming Step Time for Switch DPT_Scaling_Step_Time 225.002
On Set Value

113 Dimming Step Time for Switch DPT_Scaling_Step_Time 225.002
Off

114 Switch Off Brightness DPT_Scaling 5.001
115 Minimum Set Value DPT_Scaling 5.001
116 Maximum Set Value DPT_Scaling 5.001
117 Switch On Set Value DPT_Scaling 5.001
118 Dimm Mode Selection DPT_Ramp 1.004
119 Relativ Off Enable DPT_Enable 1.003
120 Memory Function DPT_Enable 1.003
121 Timed On Retrigger Function DPT_Enable 1.003
122 Manual Off Enable DPT_Enable 1.003
123 Invert Lock Device DPT_Invert 1.012
124 Behaviour at Locking DPT_Behaviour_Lock_Unlock 20.600
125 Behaviour at Unlocking DPT_Behaviour_Lock_Unlock 20.600
126 Lock Setvalue DPT_Scaling 5.001
127 Unlock Setvalue DPT_Scaling 5.001
128 Brightness for Scene DPT_Scaling[] 5.001
129 Storage Function for Scene DPT_Enable[] 1.003
130 Delta Dimming Value DPT_Scaling 5.001
131 Behaviour Bus Power Up DPT_Behaviour_Bus_Power_Up_Down 20.601
132 Behaviour Bus Power Up Set DPT_Scaling 5.001
Value

133 Behaviour Bus Power Down DPT_Behaviour_Bus_Power_Up_Down 20.601
134 Bus Power Down Set Value DPT_Scaling 5.001

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 8 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|101|On Delay|DPTTimePeriod10MSec|7.003|
|102|Off Delay|_<br>DPTTimePeriod10MSec|7.003|
|103|Switch Off Brightness Delay Time|_<br> DPTTimePeriodSec|7.005|
|104|Timed On Duration|_<br>DPTTimePeriodSec|7.005|
|105|Prewarning Duration|_<br>DPTTimePeriodSec|7.005|
|106|Transmission Cycle Time|_<br>DPTTimePeriodSec|7.005|
|107|Bus Power Up Message Delay|_<br>DPTTimeout10MSec|7.003|
|108|Dimming Speed|__<br>DPTScalingSpeed[]|225.001|
|109|Dimming Step Time|_<br>DPTScalingStepTime[]|225.002|
|110|Dimming Speed for Switch on Set<br>Value|___<br>DPT_ScalingSpeed[]|225.001|
|111|Dimming Speed for Switch Off|DPTScalingSpeed|225.001|
|112|Dimming Step Time for Switch<br>On Set Value|_<br>DPT_Scaling_Step_Time|225.002|
|113|Dimming Step Time for Switch<br>Off|DPT_Scaling_Step_Time|225.002|
|114|Switch Off Brightness|DPTScaling|5.001|
|115|Minimum Set Value|_<br>DPTScaling|5.001|
|116|Maximum Set Value|_<br>DPTScaling|5.001|
|117|Switch On Set Value|_<br>DPTScaling|5.001|
|118|Dimm Mode Selection|_<br>DPTRamp|1.004|
|119|RelativOff Enable|_<br>DPTEnable|1.003|
|120|Memory Function|_<br>DPTEnable|1.003|
|121|Timed On Retrigger Function|_<br>DPTEnable|1.003|
|122|Manual Off Enable|_<br>DPTEnable|1.003|
|123|Invert Lock Device|_<br>DPTInvert|1.012|
|124|Behaviour at Locking|_<br>DPTBehaviourLockUnlock|20.600|
|125|Behaviour at Unlocking|___<br>DPTBehaviourLockUnlock|20.600|
|126|Lock Setvalue|___<br>DPTScaling|5.001|
|127|Unlock Setvalue|_<br>DPTScaling|5.001|
|128|Brightness for Scene|_<br>DPTScaling[]|5.001|
|129|Storage Function for Scene|_<br>DPTEnable[]|1.003|
|130|Delta Dimming Value|_<br>DPTScaling|5.001|
|131|Behaviour Bus Power Up|_<br>DPTBehaviourBusPowerUpDown|20.601|
|132|Behaviour Bus Power Up Set<br>Value|_____<br>DPT_Scaling|5.001|
|133|Behaviour Bus Power Down|DPTBehaviourBusPowerUpDown|20.601|
|134|Bus Power Down Set Value|_____<br>DPTScaling|5.001|


-----

### 6 FB Dimming Sensor Basic (DSB) (Object Type 420)
###### Object Name: FB Dimming Sensor Basic

 Object abbreviation: DSB

 Object Type: 420

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
51 On Off Action DPT_Switch 1.001
52 Enable Toggle Mode DPT_Enable 1.003
53 Absolute Setvalue DPT_Scaling 5.001

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 9 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|51|On Off Action|DPTSwitch|1.001|
|52|Enable Toggle Mode|_<br>DPTEnable|1.003|
|53|Absolute Setvalue|_<br>DPTScaling|5.001|


-----

### 7 FB Light Switching Sensor Basic (LSSB) (Object Type 421)
###### Object Name: FB Light Switching Sensor Basic

 Object abbreviation: LSSB

 Object Type: 421

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
51 On Off Action DPT_Switch 1.001
52 Enable Toggle Mode DPT_Enable 1.003

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 10 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|51|On Off Action|DPTSwitch|1.001|
|52|Enable Toggle Mode|_<br>DPTEnable|1.003|


-----

### 8 FB Colour Actuator xyY (Object Type 422)
###### Object Name: FB Colour Actuator xyY

 Object abbreviation: CAXYY

 Object Type: 422

 No standard Property Identifiers are defined.

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 11 f 20


-----

### 9 FB Colour Actuator RGB(W) (Object Type 423)
###### Object Name: FB Colour Actuator RGB(W)

 Object abbreviation: CARGB

 Object Type: 423

 No standard Property Identifiers are defined.

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 12 f 20


-----

### 10 FB Colour Setting Sensor RGB(W) (CSSRGB) (Object Type 424)
###### Object Name: FB Colour Setting Sensor RGB(W)

 Object abbreviation: CSSRGB

 Object Type: 424

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
101 Absolute RGB Colour Control DPT_Colour_-RGB 232.600
Value

102 Absolute RGBW Colour Control DPT_Colour_RGBW 251.600
Value

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 13 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|101|Absolute RGB Colour Control<br>Value|DPT_Colour_-RGB|232.600|
|102|Absolute RGBW Colour Control<br>Value|DPT_Colour_RGBW|251.600|


-----

### 11 FB Colour Setting Sensor xyY (CSSXYY) (Object Type 425)
###### Object Name: FB Colour Setting Sensor xyY

 Object abbreviation: CSSXYY

 Object Type: 425

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
101 Absolute xyY Colour Control DPT_Colour-_yxY 242.600
Value

102 Absolute xyY Colour Transition DPT_TimePeriod100Msec 7.004
Time

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 14 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|101|Absolute xyY Colour Control<br>Value|DPT_Colour-_yxY|242.600|
|102|Absolute xyY Colour Transition<br>Time|DPT_TimePeriod100Msec|7.004|


-----

### 12 FB Colour Temperature Setting Sensor (CTSS) (Object Type 426)
###### Object Name: FB Colour Temperature Setting Sensor

 Object abbreviation: CTSS

 Object Type: 426

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
100 Absolute Colour Temperature DPT_Absolute_Colour_Temperature 7.600
101 Absolute Colour Temperature DPT_TimePeriod100Msec 7.004
Transition Time

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 15 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|100|Absolute Colour Temperature|DPTAbsoluteColourTemperature|7.600|
|101|Absolute Colour Temperature<br>Transition Time|___<br>DPT_TimePeriod100Msec|7.004|


-----

### 13 FB Colour Temperature Actuator (CTA) (Object Type 427)
###### Object Name: FB Colour Temperature Actuator

 Object abbreviation: CTA

 Object Type: 427

 No standard Property Identifiers are defined.

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 16 f 20


-----

### 14 FB DALI Proxy Basic Light Application (DPBLA)
 (Object Type 440)
###### Object Name: FB DALI Proxy Basic Light Application

 Object abbreviation: DPBLA

 Object Type: 440

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
110 Minimum Set Value DPT_Scaling 5.001
111 Maximum Set Value DPT_Scaling 5.001
112 Switch On Set Value DPT_Scaling 5.001
113 Dimm Mode Selection DPT_Ramp 1.004
114 Relative Off Enable DPT_Enable 1.003
115 Memory Function DPT_Enable 1.003
116 Dimming Speed DPT_ScalingSpeed[] 225.001
117 KNX Fade Time DPT_TimePeriod100MSec 7.004
118 DALI Fade Time DPT_DALI_Fade_Time 20.602
119 On Delay DPT_TimePeriod10MSec 7.003
120 Off Delay Dimming Speed for DPT_TimePeriod10MSec 7.003
Switch on Set Value

121 Dimming Speed for Switch on Set DPT_ScalingSpeed[] 225.001
Value

122 Dimming Speed for Switch Off DPT_ScalingSpeed 225.001
123 KNX Fade Time for Switch On DPT_TimePeriod100MSec 7.004
Set Value

124 DALI Fade Time for Switch On DPT_DALI_Fade_Time 20.602
Set Value

125 KNX Fade Time for Switch Off DPT_TimePeriod100MSec 7.004
126 DALI Fade Time for Switch Off DPT_DALI_Fade_Time 20.602
127 Switch Off Brightness DPT_Scaling 5.001
128 Switch Off Brightness Delay Time DPT_TimePeriod_Sec 7.005
129 Timed On Duration DPT_TimePeriodSec 7.005
130 Prewarning Duration DPT_TimePeriodSec 7.005
131 Timed On Retrigger Function DPT_Enable 1.003
132 Manual Off Enable DPT_Enable 1.003
133 Invert Lock Device DPT_Invert 1.012
134 Behaviour at Locking DPT_Behaviour_Lock_Unlock 20.600
135 Lock Setvalue DPT_Scaling 5.001
136 Behaviour at Unlocking DPT_Behaviour_Lock_Unlock 20.600
137 Unlock Setvalue DPT_Scaling 5.001
138 Transmission Cycle Time DPT_TimePeriodSec 7.005
139 Delta Dimming Value DPT_Scaling 5.001
140 KNX Bus Power Up Message DPT_Timeout_10MSec 7.003
Delay

141 Behaviour KNX Bus Power Up DPT_Behaviour_Bus_Power_Up_Down 20.601
142 Behaviour KNX Bus Power Down DPT_Behaviour_Bus_Power_Up_Down 20.601
143 KNX Bus Power Up Set Value DPT_Scaling 5.001
144 KNX Bus Power Down Set Value DPT_Scaling 5.001

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 17 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|110|Minimum Set Value|DPTScaling|5.001|
|111|Maximum Set Value|_<br>DPTScaling|5.001|
|112|Switch On Set Value|_<br>DPTScaling|5.001|
|113|Dimm Mode Selection|_<br>DPTRamp|1.004|
|114|Relative Off Enable|_<br>DPTEnable|1.003|
|115|Memory Function|_<br>DPTEnable|1.003|
|116|Dimming Speed|_<br>DPTScalingSpeed[]|225.001|
|117|KNX Fade Time|_<br>DPTTimePeriod100MSec|7.004|
|118|DALI Fade Time|_<br>DPTDALIFadeTime|20.602|
|119|On Delay|___<br>DPTTimePeriod10MSec|7.003|
|120|Off Delay Dimming Speed for<br>Switch on Set Value|_<br>DPT_TimePeriod10MSec|7.003|
|121|Dimming Speed for Switch on Set<br>Value|DPT_ScalingSpeed[]|225.001|
|122|Dimming Speed for Switch Off|DPTScalingSpeed|225.001|
|123|KNX Fade Time for Switch On<br>Set Value|_<br>DPT_TimePeriod100MSec|7.004|
|124|DALI Fade Time for Switch On<br>Set Value|DPT_DALI_Fade_Time|20.602|
|125|KNX Fade Time for Switch Off|DPTTimePeriod100MSec|7.004|
|126|DALI Fade Time for Switch Off|_<br>DPTDALIFadeTime|20.602|
|127|Switch Off Brightness|___<br>DPTScaling|5.001|
|128|Switch Off Brightness Delay Time|_<br> DPTTimePeriodSec|7.005|
|129|Timed On Duration|__<br>DPTTimePeriodSec|7.005|
|130|Prewarning Duration|_<br>DPTTimePeriodSec|7.005|
|131|Timed On Retrigger Function|_<br>DPTEnable|1.003|
|132|Manual Off Enable|_<br>DPTEnable|1.003|
|133|Invert Lock Device|_<br>DPTInvert|1.012|
|134|Behaviour at Locking|_<br>DPTBehaviourLockUnlock|20.600|
|135|Lock Setvalue|___<br>DPTScaling|5.001|
|136|Behaviour at Unlocking|_<br>DPTBehaviourLockUnlock|20.600|
|137|Unlock Setvalue|___<br>DPTScaling|5.001|
|138|Transmission Cycle Time|_<br>DPTTimePeriodSec|7.005|
|139|Delta Dimming Value|_<br>DPTScaling|5.001|
|140|KNX Bus Power Up Message<br>Delay|_<br>DPT_Timeout_10MSec|7.003|
|141|Behaviour KNX Bus Power Up|DPTBehaviourBusPowerUpDown|20.601|
|142|Behaviour KNX Bus Power Down|_____<br> DPTBehaviourBusPowerUpDown|20.601|
|143|KNX Bus Power Up Set Value|_____<br>DPTScaling|5.001|
|144|KNX Bus Power DownSet Value|_<br> DPTScaling|5.001|


-----

### 15 FB DALI Proxy Basic Scene Application (DPBSA)
 (Object Type 441)
###### Object Name: FB DALI Proxy Basic Scene Application

 Object abbreviation: DPBSA

 Object Type: 441

 Parameters

 Datapoint
 Property Datapoint Name Datapoint Type Name Type Identifier
 Identifier
150 KNX Scene Number List[] DPT_SceneConfig[] 238.001
151 Scene Learning Mode Enable DPT_Enable 1.003
152 Scene Taught In[] DPT_Bool[] 1.002
154 KNX Scene Fade Time List[] DPT_TimePeriod100MSec[] 7.004
155 DALI Scene Fade Time List[] DPT_DALI_Fade_Time[] 20.602
160 CAS01 DPT_FlaggedScaling[] U8r7B1
161 CAS02 DPT_FlaggedScaling[] U8r7B1
162 CAS03 DPT_FlaggedScaling[] U8r7B1
163 CAS04 DPT_FlaggedScaling[] U8r7B1
164 CAS05 DPT_FlaggedScaling[] U8r7B1
165 CAS06 DPT_FlaggedScaling[] U8r7B1
166 CAS07 DPT_FlaggedScaling[] U8r7B1
167 CAS08 DPT_FlaggedScaling[] U8r7B1
168 CAS09 DPT_FlaggedScaling[] U8r7B1
169 CAS10 DPT_FlaggedScaling[] U8r7B1
170 CAS11 DPT_FlaggedScaling[] U8r7B1
171 CAS12 DPT_FlaggedScaling[] U8r7B1
172 CAS13 DPT_FlaggedScaling[] U8r7B1
173 CAS14 DPT_FlaggedScaling[] U8r7B1
174 CAS15 DPT_FlaggedScaling[] U8r7B1
175 CAS16 DPT_FlaggedScaling[] U8r7B1
176 CAS17 DPT_FlaggedScaling[] U8r7B1
177 CAS18 DPT_FlaggedScaling[] U8r7B1
178 CAS19 DPT_FlaggedScaling[] U8r7B1
179 CAS20 DPT_FlaggedScaling[] U8r7B1
180 CAS21 DPT_FlaggedScaling[] U8r7B1
181 CAS22 DPT_FlaggedScaling[] U8r7B1
182 CAS23 DPT_FlaggedScaling[] U8r7B1
183 CAS24 DPT_FlaggedScaling[] U8r7B1
184 CAS25 DPT_FlaggedScaling[] U8r7B1
185 CAS26 DPT_FlaggedScaling[] U8r7B1
186 CAS27 DPT_FlaggedScaling[] U8r7B1
187 CAS28 DPT_FlaggedScaling[] U8r7B1
188 CAS29 DPT_FlaggedScaling[] U8r7B1
189 CAS30 DPT_FlaggedScaling[] U8r7B1
190 CAS31 DPT_FlaggedScaling[] U8r7B1
191 CAS32 DPT_FlaggedScaling[] U8r7B1
192 CAS33 DPT_FlaggedScaling[] U8r7B1
193 CAS34 DPT_FlaggedScaling[] U8r7B1
194 CAS35 DPT_FlaggedScaling[] U8r7B1
195 CAS36 DPT_FlaggedScaling[] U8r7B1

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 18 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|150|KNXScene Number List[]|DPTSceneConfig[]|238.001|
|151|Scene Learning Mode Enable|_<br>DPTEnable|1.003|
|152|Scene Taught In[]|_<br>DPTBool[]|1.002|
|154|KNXScene Fade Time List[]|_<br>DPTTimePeriod100MSec[]|7.004|
|155|DALIScene Fade Time List[]|_<br>DPTDALIFadeTime[]|20.602|
|160|CAS01|___<br>DPTFlaggedScaling[]|U8r7B1|
|161|CAS02|_<br>DPTFlaggedScaling[]|U8r7B1|
|162|CAS03|_<br>DPTFlaggedScaling[]|U8r7B1|
|163|CAS04|_<br>DPTFlaggedScaling[]|U8r7B1|
|164|CAS05|_<br>DPTFlaggedScaling[]|U8r7B1|
|165|CAS06|_<br>DPTFlaggedScaling[]|U8r7B1|
|166|CAS07|_<br>DPTFlaggedScaling[]|U8r7B1|
|167|CAS08|_<br>DPTFlaggedScaling[]|U8r7B1|
|168|CAS09|_<br>DPTFlaggedScaling[]|U8r7B1|
|169|CAS10|_<br>DPTFlaggedScaling[]|U8r7B1|
|170|CAS11|_<br>DPTFlaggedScaling[]|U8r7B1|
|171|CAS12|_<br>DPTFlaggedScaling[]|U8r7B1|
|172|CAS13|_<br>DPTFlaggedScaling[]|U8r7B1|
|173|CAS14|_<br>DPTFlaggedScaling[]|U8r7B1|
|174|CAS15|_<br>DPTFlaggedScaling[]|U8r7B1|
|175|CAS16|_<br>DPTFlaggedScaling[]|U8r7B1|
|176|CAS17|_<br>DPTFlaggedScaling[]|U8r7B1|
|177|CAS18|_<br>DPTFlaggedScaling[]|U8r7B1|
|178|CAS19|_<br>DPTFlaggedScaling[]|U8r7B1|
|179|CAS20|_<br>DPTFlaggedScaling[]|U8r7B1|
|180|CAS21|_<br>DPTFlaggedScaling[]|U8r7B1|
|181|CAS22|_<br>DPTFlaggedScaling[]|U8r7B1|
|182|CAS23|_<br>DPTFlaggedScaling[]|U8r7B1|
|183|CAS24|_<br>DPTFlaggedScaling[]|U8r7B1|
|184|CAS25|_<br>DPTFlaggedScaling[]|U8r7B1|
|185|CAS26|_<br>DPTFlaggedScaling[]|U8r7B1|
|186|CAS27|_<br>DPTFlaggedScaling[]|U8r7B1|
|187|CAS28|_<br>DPTFlaggedScaling[]|U8r7B1|
|188|CAS29|_<br>DPTFlaggedScaling[]|U8r7B1|
|189|CAS30|_<br>DPTFlaggedScaling[]|U8r7B1|
|190|CAS31|_<br>DPTFlaggedScaling[]|U8r7B1|
|191|CAS32|_<br>DPTFlaggedScaling[]|U8r7B1|
|192|CAS33|_<br>DPTFlaggedScaling[]|U8r7B1|
|193|CAS34|_<br>DPTFlaggedScaling[]|U8r7B1|
|194|CAS35|_<br>DPTFlaggedScaling[]|U8r7B1|
|195|CAS36|_<br>DPTFlaggedScaling[]|U8r7B1|


-----

###### Datapoint Name Datapoint Type Name Type Identifier
 Identifier
196 CAS37 DPT_FlaggedScaling[] U8r7B1
197 CAS38 DPT_FlaggedScaling[] U8r7B1
198 CAS39 DPT_FlaggedScaling[] U8r7B1
199 CAS40 DPT_FlaggedScaling[] U8r7B1
200 CAS41 DPT_FlaggedScaling[] U8r7B1
201 CAS42 DPT_FlaggedScaling[] U8r7B1
202 CAS43 DPT_FlaggedScaling[] U8r7B1
203 CAS44 DPT_FlaggedScaling[] U8r7B1
204 CAS45 DPT_FlaggedScaling[] U8r7B1
205 CAS46 DPT_FlaggedScaling[] U8r7B1
206 CAS47 DPT_FlaggedScaling[] U8r7B1
207 CAS48 DPT_FlaggedScaling[] U8r7B1
208 CAS49 DPT_FlaggedScaling[] U8r7B1
209 CAS50 DPT_FlaggedScaling[] U8r7B1
210 CAS51 DPT_FlaggedScaling[] U8r7B1
211 CAS52 DPT_FlaggedScaling[] U8r7B1
212 CAS53 DPT_FlaggedScaling[] U8r7B1
213 CAS54 DPT_FlaggedScaling[] U8r7B1
214 CAS55 DPT_FlaggedScaling[] U8r7B1
215 CAS56 DPT_FlaggedScaling[] U8r7B1
216 CAS57 DPT_FlaggedScaling[] U8r7B1
217 CAS58 DPT_FlaggedScaling[] U8r7B1
218 CAS59 DPT_FlaggedScaling[] U8r7B1
219 CAS60 DPT_FlaggedScaling[] U8r7B1
220 CAS61 DPT_FlaggedScaling[] U8r7B1
221 CAS62 DPT_FlaggedScaling[] U8r7B1
222 CAS63 DPT_FlaggedScaling[] U8r7B1
223 CAS64 DPT_FlaggedScaling[] U8r7B1

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 19 f 20

|Parameters|Col2|Col3|Col4|
|---|---|---|---|
|**Property**<br>**Identifier**|**Datapoint Name**|**Datapoint Type Name**|**Datapoint**<br>**Type**<br>**Identifier **|
|196|CAS37|DPTFlaggedScaling[]|U8r7B1|
|197|CAS38|_<br>DPTFlaggedScaling[]|U8r7B1|
|198|CAS39|_<br>DPTFlaggedScaling[]|U8r7B1|
|199|CAS40|_<br>DPTFlaggedScaling[]|U8r7B1|
|200|CAS41|_<br>DPTFlaggedScaling[]|U8r7B1|
|201|CAS42|_<br>DPTFlaggedScaling[]|U8r7B1|
|202|CAS43|_<br>DPTFlaggedScaling[]|U8r7B1|
|203|CAS44|_<br>DPTFlaggedScaling[]|U8r7B1|
|204|CAS45|_<br>DPTFlaggedScaling[]|U8r7B1|
|205|CAS46|_<br>DPTFlaggedScaling[]|U8r7B1|
|206|CAS47|_<br>DPTFlaggedScaling[]|U8r7B1|
|207|CAS48|_<br>DPTFlaggedScaling[]|U8r7B1|
|208|CAS49|_<br>DPTFlaggedScaling[]|U8r7B1|
|209|CAS50|_<br>DPTFlaggedScaling[]|U8r7B1|
|210|CAS51|_<br>DPTFlaggedScaling[]|U8r7B1|
|211|CAS52|_<br>DPTFlaggedScaling[]|U8r7B1|
|212|CAS53|_<br>DPTFlaggedScaling[]|U8r7B1|
|213|CAS54|_<br>DPTFlaggedScaling[]|U8r7B1|
|214|CAS55|_<br>DPTFlaggedScaling[]|U8r7B1|
|215|CAS56|_<br>DPTFlaggedScaling[]|U8r7B1|
|216|CAS57|_<br>DPTFlaggedScaling[]|U8r7B1|
|217|CAS58|_<br>DPTFlaggedScaling[]|U8r7B1|
|218|CAS59|_<br>DPTFlaggedScaling[]|U8r7B1|
|219|CAS60|_<br>DPTFlaggedScaling[]|U8r7B1|
|220|CAS61|_<br>DPTFlaggedScaling[]|U8r7B1|
|221|CAS62|_<br>DPTFlaggedScaling[]|U8r7B1|
|222|CAS63|_<br>DPTFlaggedScaling[]|U8r7B1|
|223|CAS64|_<br>DPTFlaggedScaling[]|U8r7B1|


-----

### 16 FB DALI Proxy Basic Device Specific (DPDS) (Object Type 442)
###### Object Name: FB DALI Proxy Basic Device specific

 Object abbreviation: DPDS

 Object Type: 442

 This Interface Object Type does not have standard Properties.

© C i h 2003 2019 KNX A i i A li i D i i 01 02 01 20 f 20


-----

