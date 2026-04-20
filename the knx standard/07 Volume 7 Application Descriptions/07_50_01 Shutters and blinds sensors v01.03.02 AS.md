# Application Descriptions

## Shutters and Blinds

 Shutters and Blinds Sensors

###### Summary:

 This document specifies the Functional Blocks for sensors in the Shutters and Blinds Application Domain.

 Version 01.03.02 is a KNX Approved Standard.

 This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

01 2003.08.27 Takeover from ASG Shutter & Blinds

Issue: "07_50_01 Shutters and blinds sensors v01.03.02 AS.docx"
02 2005.05.18 Moved inputs for position (CAP, CAPL, CAPSD, CAPS) to dedicated FB.

Concluded on DPs for interaction points.
2005.10.18 Update by TF Editing

Shutter sensor and blinds sensor only differentiated through mandatory
parameters.
Removed all HMI aspects and “half mode”.
Completed main concepts of functional specification.
2006.01.10 Accepted all changes in the document.

First specification of the detailed DPs at end of doc. (input/output/params).
Streamlined DP names.
Corrected list of abbreviations and grouped per class as in other papers.
Inserted specification of parameter Up Down Action (UDA): this should be the
same as for PART_UpDown_Switch_Action of S12 and PB_Action of
Part 7/50.
The parameters are specified in the sequence as they are introduced in the
introduction.
2006.02.01 TF Editing

Decided on Object Type and Property Identifiers.
Corrected parameters in Table 4.
2006.05.09 TF Editing:

Inserts SAPBP and SAPSP.
2006-05-12 Add of SAPBL and SAPSD
1.0 2006.06.09 Preparation of the Draft Proposal.
1.1 2006.09.18 Accepted all changed.

Inclusion of feedback from RfV.
2007.02.01 Inclusion of Document References.

Preparation of the Draft Proposal.
1.2 2007.03.20 Publication of the Approved Standard.
1.2 2009.06.26 Update in view of publication in the KNX Specifications v2.0.
01.03.01 2013.09.06 - **AN150 “FB Profiles for existing FBs” integrated.**
01.03.02 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

[01] Chapter 6/30/1 “Runtime Profiles”

Filename: 07_50_01 Shutters and blinds sensors v01.03.02 AS.docx
Version: 01.03.02
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 19

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 2 f 19

|Version|Date|Modifications|
|---|---|---|
|01|2003.08.27|Takeover from ASG Shutter & Blinds<br>Issue: "07_50_01 Shutters and blinds sensors v01.03.02 AS.docx"|
|02|2005.05.18|Moved inputs for position (CAP, CAPL, CAPSD, CAPS) to dedicated FB.<br>Concluded on DPs for interaction points.|
|02|2005.10.18|Update by TF Editing<br>Shutter sensor and blinds sensor only differentiated through mandatory<br>parameters.<br>Removed all HMI aspects and “half mode”.<br>Completed mainconcepts of functional specification.|
|02|2006.01.10|Accepted all changes in the document.<br>First specification of the detailed DPs at end of doc. (input/output/params).<br>Streamlined DP names.<br>Corrected list of abbreviations and grouped per class as in other papers.<br>Inserted specification of parameter Up Down Action (UDA): this should be the<br>same as for PART_UpDown_Switch_Action of S12 and PB_Action of<br>Part 7/50.<br>The parameters are specified in the sequence as they are introduced in the<br>introduction.|
|02|2006.02.01|TF Editing<br>Decided on Object Type and Property Identifiers.<br>Corrected parameters in Table 4.|
|02|2006.05.09|TF Editing:<br>Inserts SAPBPand SAPSP.|
|02|2006-05-12|Add of SAPBLand SAPSD|
|1.0|2006.06.09|Preparation of the Draft Proposal.|
|1.1|2006.09.18|Accepted all changed.<br>Inclusion of feedback from RfV.|
|1.1|2007.02.01|Inclusion of Document References.<br>Preparation of the Draft Proposal.|
|1.2|2007.03.20|Publication of the Approved Standard.|
|1.2|2009.06.26|Update in view of publication inthe KNXSpecifications v2.0.|
|01.03.01|2013.09.06|• <br>**AN150 “FB Profiles for existing FBs”** integrated.|
|01.03.02|2013.10.29|<br> Editorial updates for thepublication of KNX Specifications 2.1.|


-----

#### Contents

###### 1 FB Shutters and Blinds Sunblind Sensor Basic ................................................................... 5 1.1 Aims and objectives ........................................................................................................ 5 1.2 Functional specification .................................................................................................. 5 1.2.1 Overview ............................................................................................................. 5 1.2.2 Parameter Up Down Action ................................................................................ 6 1.2.3 Toggle Mode ....................................................................................................... 6 1.2.4 Dedicated stop ..................................................................................................... 7 1.2.5 Parameter Enable Blinds Mode .......................................................................... 8 1.2.6 Functionality of the HMI .................................................................................... 8 1.3 Constraints ...................................................................................................................... 8 1.4 Functional Block Diagram .............................................................................................. 9 1.5 Datapoints ....................................................................................................................... 9 1.5.1 Overview ............................................................................................................. 9 1.5.2 FB Profiles ........................................................................................................ 10 1.5.3 Detailed specification of Datapoints ................................................................. 11

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 3 f 19


-----

#### Abbreviations

###### Datapoints

 IMUD Info Move Up Down MUD Move Up Down SAPBL Set Absolute Position Blinds Length SAPBP Set Absolute Position Blinds Percentage SAPSD Set Absolute Position Slats Degrees SAPSP Set Absolute Position Slats Percentage SSUD StopStep Up Down STOP Dedicated Stop

 Parameters

 EBM Enable Blinds Mode ETM Enable Toggle Mode UDA Up Down Action

 Other

 HMI Human Machine Interface SSSB Shutters and Blinds Sunblind Sensor Basic

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 4 f 19


-----

### 1 FB Shutters and Blinds Sunblind Sensor Basic

#### 1.1 Aims and objectives
###### The FB Shutters and Blinds Sunblind Sensor Basic is used in the Application Domain Shutters and Blinds for providing input data to shutter and blinds actuators. It specifies the functionality, for example contained in a switch or a push button, to set (Venetian) blinds or shutters in a defined position.

 Hardwired contacts and display elements (with own FBs) can be integrated, e.g. to send a dedicated stop request or to show the alarm or automatic status of the shutter or blinds actuator.

 The inputs and outputs of the Functional Block are described but not the Human Machine Interface (HMI). Consequently, the manufacturers of the button or switch have the possibility to implement their design and their operation methods.

#### 1.2 Functional specification

##### 1.2.1 Overview
###### The FB Shutters and Blinds Sunblind Sensor Basic provides hardwired inputs for triggering transmission of values of output Datapoints.

FB Sunblind Sensor Basic FB Sunblind Actuator Basic

IMUD MUD MUD IMUD

SSUD SSUD

###### Figure 1 – Basic communication model (example)

 This FB allows controlling both blinds actuators (through the DPs MUD and SSUD) as well as shutter actuators (through the DPs MUD and STOP).

FB Sunblind Sensor Basic FB Sunblind Actuator Basic

IMUD MUD MUD IMUD

STOP STOP

###### Figure 2 – FB Shutters and Blinds Sunblind Sensor Basic used for shutter control

 The parameter Enable Blinds Mode optionally allows selecting the functionality.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 5 f 19

|IMUD|Col2|
|---|---|

|Col1|F|
|---|---|
|IMU|D|
|IMU||

|MUD|Col2|
|---|---|
|MUD||

|MU|D|
|---|---|
|SS|U|

|IMUD|Col2|
|---|---|

|Col1|F|
|---|---|
|IMU|D|
|IMU||

|MUD|Col2|
|---|---|
|MUD||

|MU|D|
|---|---|
|ST|O|


-----

##### 1.2.2 Parameter Up Down Action
###### The parameter Up Down Action shall limit the values transmitted by the Outputs MUD and SSUD to either only 0 (“Up” and “Decrease”) or 1 (“Down” or “Increase”).

 This mainly makes sense if an appliance is realised as a combination of two FBs SSSB each with one interaction point. This realisation however is only meaningful if the parameter ETM is not implemented or has the value “Disable”.


FB Sunblind Sensor Basic


FB Sunblind Sensor Basic

MUD: Up/Down

SSUD: Up/Down

###### Figure 3 – One FB with two interaction points


MUD: Up

SSUD: Up

ETM = disable

FB Sunblind Sensor Basic

UDA = Down

MUD: Down

SSUD: Down

ETM = disable

###### Figure 4 – Two FBs each with one interaction points

|Col1|FB Sunblind Sensor B|asic|
|---|---|---|

|Col1|FB Sunblind Sensor B<br>UDA = Up<br>ETM = disable<br>FB Sunblind Sensor B<br>UDA = Down<br>ETM = disable|asic<br>asic|
|---|---|---|


###### The dashed outlined areas realise the same functionality. The DP MUD in the left solution sends both Up and Down. The DPs MUD in the right solution only send either Up (e.g. upper FB) or Down (e.g. lower FB).

##### 1.2.3 Toggle Mode
###### Toggle Mode denotes the behaviour where the value of the output MUD inverts on each transmission. The value of MUD can be calculated by the device internally or by interpreting the received value of the input Info Move Up Down (IMUD).

 The concept of toggle mode is only meaningful in the realisation as given in Figure 4. In case the parameter Enable Toggle Mode (ETM) has the value Enable, the parameter Up Down Action (UDA) becomes meaningless.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 6 f 19


-----

###### Toggle Mode implemented and active;
 IMUD is not implemented


###### Toggle Mode implemented and active;
 IMUD is implemented


FB Sunblind Sensor Basic


FB Sunblind Sensor Basic


MUD: Up/Down

SSUD: Up/Down

ETM = enable

FB Sunblind Sensor Basic

MUD: Up/Down

SSUD: Up/Down


IMUD MUD: Up/Down

SSUD: Up/Down


IMUD


MUD: Up/Down

SSUD: Up/Down

ETM = enable

FB Sunblind Sensor Basic

|Col1|FB Sunblind Sensor B<br>ETM = enable<br>FB Sunblind Sensor B<br>ETM = enable|asic<br>asic|
|---|---|---|

|D<br>D|FB Sunblind Sensor B<br>ETM = enable<br>FB Sunblind Sensor B<br>ETM = enable|asic<br>asic|
|---|---|---|


###### Figure 5 – Toggle Mode without IMUD Figure 6 – Toggle Mode without IMUD


###### Rule 1

 Each subsequent transmission on the DP MUD will have an inverted value compared to the previous transmission.

 MUDn+1 = NOT(MUDn)


###### Rule 2

 Rule 1 is in this case extended with the following: on each reception of IMUD, MUD becomes the value of IMUD.

 MUD = IMUD


###### The relation between IMUD and Toggle Mode (Figure 6) can be summarized in the following pseudo code.

if(Update(DP_IMUD)) { // This is rule 2.
DP_MUD = GetValue(DP_IMUD);
}
if (UserInteraction) { // This is rule 1.
DP_MUD = InvertValue(DP_MUD);
SendValue(DP_MUD);
}
###### The interpretation of Toggle Mode concerning DP SSUD is manufacturer specific.

 The value of the DP STOP is not influenced by Toggle Mode.

##### 1.2.4 Dedicated stop

###### • An implementation of the FB Shutters and Blinds Sunblind Sensor Basic with solely the DPs MUD and STOP is designed for shutter control.

 • An implementation of the FB Shutters and Blinds Sunblind Sensor Basic with solely the DPs MUD and SSUD is designed for blinds control.

 Controlling blinds in groups: unintended step

 If one sensor controls two blinds of which one is moving and the other has stopped, transmission of the DP SSUD will cause the first blinds to stop its movement and the second blinds actuator to perform an unintended step.

 To prevent from this possible side-effect, the DP Stop (DPT_Trigger) can be used. The DP Stop is used to stop the motion of shutters. It can also serve as a direct stop for blinds.

NOTE The functionality of the DP SSUD in the actuator is not influenced by this.

###### • An implementation of the FB Shutters and Blinds Sunblind Sensor Basic with the DPs MUD, SSUD and STOP can be used for both blinds control as well as shutter control.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 7 f 19


-----

##### 1.2.5 Parameter Enable Blinds Mode
###### There may be devices that control only shutters or only blinds. However, there can be also sensors that combine shutter- and blind- actuators control. Such devices can implement the parameter Enable Blinds Mode, which shall be interpreted as indicated in Table 1.

 Table 1 – Interpretation of parameter Enable Blinds Mode

**Enable Blinds Mode**

**Datapoint** **Disable** **Enable**

**STOP** active inactive

**SSUD** inactive active

##### 1.2.6 Functionality of the HMI
###### No requirements are specified concerning the interpretation of the HMI.

 The following parameters shall allow coping with various HMI flavours and approaches towards controlling both shutter actuators as well as blinds actuators:

 1. Input IMUD

 2. Parameter Enable Blinds Mode

 3. Parameter Enable Toggle Mode

 4. Parameter Up Down Action

#### 1.3 Constraints
###### This FB foresees the relative positioning of the blinds and the slats in percent. No parameters are standardised for these Outputs however. The relative control (DPT_Control_Blinds, 3.008) is foreseen for a future extension.

 This FB does not foresee any functionality for scene controlling. The inputs in the shutters and blinds actuator for scene control can be controlled by a dedicated FB for scene purposes. 

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 8 f 19

|Datapoint|Enable Blinds Mode|Col3|
|---|---|---|
|**Datapoint**|**Disable**|**Enable**|
|**STOP**|active|inactive|
|**SSUD**|inactive|active|


-----

#### 1.4 Functional Block Diagram

**FB Shutters and Blinds Sunblind Sensor Basic (SSSB)** **801**
**Inputs** **Outputs**

Info Move Up Down (IMUD) Move Up Down (MUD)
StopStep Up Down (SSUD)
Dedicated Stop (STOP)
Set Absolute Position Blinds Percentage

(SAPBP)
Set Absolute Position Blinds Length

(SAPBL)
Set Absolute Position Slats Percentage

(SAPSP)
Set Absolute Position Slats Degrees

(SAPSD)

**additional I/Os** **Parameters**
Enable Blinds Mode (EBM)
mandatory Up Down Action (UDA)
One or more user interaction points for trig- Enable Toggle Mode (ETM)
gering transmission of values from output
Datapoints

mandatory optional

###### Figure 7 – Functional Block Diagram for FB Shutters and Blinds Sunblind Sensor Basic

#### 1.5 Datapoints

##### 1.5.1 Overview

###### Table 2 – Datapoint overview

**Datapoint** **Description/Remarks** **Datapoint Type**

**Outputs**

Move Up Down To move sunblind up (“0”) and down (“1”) DPT_UpDown (1.008)
StopStep Up Down To stop the sunblind and to step it Up Down DPT_Step (1.007)
Dedicated Stop To stop the sunblind DPT_Trigger (1.017)
Set Absolute Position To set the absolute position of the blinds in DPT_Scaling (5.001)
Blinds Percentage percent.

Set Absolute Position To set the absolute position of the blinds in DPT_Length_mm (7.011)
Blinds Length millimetre.

Set Absolute Position To set the absolute position of the slats in DPT_Scaling (5.001)
Slats Percentage percent.

Set Absolute Position To set the absolute position of the slats in DPT_Rotation_Angle
Slats Degrees degrees. (8.011)

**Inputs**

Info Move Up Down To indicate the last moving direction DPT_UpDown (1.008)

**Parameters**

Enable Blinds Mode Defines which of the outputs SSUD or STOP is DPT_Enable (1.003)
active.
E-Mode: Sel_ShutterBlinds

Up Down Action Limits the values sent by the output IMUD to only DPT_UpDown (1.008)
Up or only Down.
E-Mode: PB_Action

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 9 f 19

|Datapoint|Description/Remarks|Datapoint Type|
|---|---|---|
|**Outputs**|||
|Move Up Down|To move sunblind up (“0”) and down(“1”)|DPT_UpDown(1.008)|
|StopStep Up Down|To stop the sunblind and to step it Up Down|DPT_Step (1.007)|
|Dedicated Stop|To stop the sunblind|DPT_Trigger(1.017)|
|Set Absolute Position<br>Blinds Percentage|To set the absolute position of the blinds in<br>percent.|DPT_Scaling (5.001)|
|Set Absolute Position<br>Blinds Length|To set the absolute position of the blinds in<br>millimetre.|DPT_Length_mm (7.011)|
|Set Absolute Position<br>Slats Percentage|To set the absolute position of the slats in<br>percent.|DPT_Scaling (5.001)|
|Set Absolute Position<br>Slats Degrees|To set the absolute position of the slats in<br>degrees.|DPT_Rotation_Angle<br>(8.011)|
|**Inputs**|||
|Info Move Up Down|To indicate the last moving direction|DPT_UpDown(1.008)|
|**Parameters**|||
|Enable Blinds Mode|Defines which of the outputs SSUD or STOP is<br>active.<br>E-Mode:<br>Sel_ShutterBlinds|DPT_Enable (1.003)|
|Up Down Action|Limits the values sent by the output IMUD to only<br>Up or only Down.<br>E-Mode:<br>PB_Action|DPT_UpDown (1.008)|


-----

|Datapoint|Description/Remarks|Datapoint Type|
|---|---|---|
|Enable Toggle Mode|Specifies whether the output MUD is the inverse<br>of the input IMUD or not.<br>E-Mode:<br>Device_Mode|DPT_Enable (1.003)|


##### 1.5.2 FB Profiles

**Standard**

**Mode**

**Features and options**

Output MUD M GO GO
select 1 of 2 {
Output SSUD M O GO
Output STOP M GO O
}

###### Table 3 exclusively specifies the allowed combinations of output Datapoints. Combination 1 is designed for controlling shutter actuators (which have no slats). Combination 2 is designed for controlling blinds actuators (which have slats). The parameter Enable Blinds Mode allows toggling between these operation modes.

 Table 3 - Combination of mandatory Datapoints

 Combination

 Datapoints 1 2

 SSUD O M

 STOP M O

 MUD M M

 Table 4 - Parameters

**Parameters** EBM **O** **O**
UDA **O** **O**
ETM **O** **O**

1) This FB Profile 1 is mainly for the documentation of legacy implementations and is not recommended for new
implementations.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 10 f 19

|Col1|Col2|Standard<br>Mode|Col4|
|---|---|---|---|
|**Features and options**|**Basic FB**|**FB Profile 1**1) <br>**LTE-Mode interface**|**FB Profile 2**<br>**(recommended)**|
|Output MUD|M|GO|GO|
|select 1of 2{||||
|Output SSUD|M|O|GO|
|Output STOP|M|GO|O|
|}||||

|Datapoints|Combination|Col3|
|---|---|---|
|**Datapoints**|**1 **|**2 **|
|**SSUD**|O|M|
|**STOP**|M|O|
|**MUD**|M|M|

|Col1|Col2|Basic FB|S-Mode|
|---|---|---|---|
|**Parameters **|EBM|**O **|**O **|
||UDA|<br>**O **|<br>**O **|
||ETM|<br>**O **|<br>**O **|


-----

###### As regards S-Mode/LTE-Standard mode interface/Ctrl mode implementation of parameters, in case of memory mapped Datapoints the DPT may be manufacturer specific. In case of implementation as a Property of an Interface Object, the use of the standardise parameter specification is mandatory. 

##### 1.5.3 Detailed specification of Datapoints

###### 1.5.3.1 Output Move Up Down

DP Name: Move Up Down Abbr.: MUD Mandatory
FB Name: Shutters and Blinds Sunblind Sensor Basic (SSSB) Can be internal
Description
The output Move Up Down shall be used to control the movement of the shutter or blinds actuators.
Datapoint Type
DPT_Name: DPT_UpDown
DPT Format: B1 DPT_ID: 1.008
Field Description Supp. Range Unit Default
b This field shall indicate whether the shutter or blinds shall M {0, 1} - be moved upwards (open) or downwards (close).

Access Type
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address: --Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
Through the parameter Up Down Action it is possible that on human interaction only one value of the
range is transmitted
Special Features
None.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 11 f 19

|DP Name:|Col2|Col3|Move Up Down|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|MUD|Col23|Col24|Mandatory|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|FB Name:|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|
|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|The output Move Up Downshallbe used to control the movement of the shutter or blinds actuators.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTName:|DPTName:|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.008|1.008|1.008|1.008|1.008|1.008|1.008|1.008|1.008|
|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Default|Default|Default|Default|Default|
|b|b|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|This field shall indicate whether the shutter or blinds shall<br>be moved upwards (open) or downwards (close).|M|M|M|{0, 1}|{0, 1}|-|-|-|-|-|-|-|-|
|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|
|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|
||this→ M|this→ M|this→ M|this→ M|||this→ 1|this→ 1|this→ 1||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:||||Δ-Value:||||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:||||||||||||||||||||||
||Request|Request|Request|Request|||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||||||||||||||||||||
||||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|Through the parameterUp Down Actionit is possible that on human interaction only one value of the<br>range is transmitted|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### 1.5.3.2 Output StopStep Up Down

DP Name: StopStep Up Down Abbr.: SSUD Mandatory [a)]
FB Name: Shutters and Blinds Sunblind Sensor Basic (SSSB) Can be internal
Description
This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its
slats. It can also stop a movement of a shutter actuator.
Datapoint Type
DPT_Name: DPT_Step
DPT Format: B1 DPT_ID: 1.007
Field Description Supp. Range Unit Default
b 0: step up M {0, 1} none 1: step down

Access Type
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address: --Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
A read response received on an attributed Group Address may cause a moving sunblind actuator to stop
or a stopped sunblind actuator to perform a step.
Special Features
a) At least either one of the outputs SSUD or STOP shall be implemented: see Table 3.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 12 f 19

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|a)|Col35|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|DP Name:|DP Name:|StopStep Up Down|StopStep Up Down|StopStep Up Down|StopStep Up Down|StopStep Up Down|StopStep Up Down|StopStep Up Down|StopStep Up Down|StopStep Up Down|StopStep Up Down|StopStep Up Down|StopStep Up Down|Abbr.:|Abbr.:|Abbr.:|Abbr.:|Abbr.:|SSUD|SSUD|SSUD|SSUD|Mandatory|Mandatory|Mandatory|Mandatory|Mandatory|Mandatory|Mandatory||||~~a)~~|~~a)~~|
|FB Name:|FB Name:|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||||
|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|
|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|This output shall be used to stop the movement of a blinds actuator or perform a gradual movement of its<br>slats. It can also stop a movement of a shutter actuator.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTName:|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|DPTStep|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.007|1.007|1.007|1.007|1.007|1.007|1.007|1.007|1.007|1.007|1.007|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|b|b|b|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|0:<br>step up<br>1:<br>step down|M|M|{0, 1}|{0, 1}|{0, 1}|none|none|none|none|-|-|-|-|-|-|
|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|<br> <br>Access Type|
|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|<br>♦ Output|
||this→ M|this→ M|this→ M|||this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|A read response received on an attributed Group Address may cause a moving sunblind actuator to stop<br>or a stopped sunblind actuator to performa step.|
|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|
|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|


-----

###### 1.5.3.3 Output Dedicated Stop

DP Name: Dedicated Stop Abbr.: STOP Mandatory [a)]
FB Name: Shutters and Blinds Sunblind Sensor Basic (SSSB) Can be internal
Description
This output shall be used to request a shutter or blinds actuator to stop its movement.
Datapoint Type
DPT_Name: DPT_Trigger
DPT Format: B1 DPT_ID: 1.017
Field Description Supp. Range Unit Default
b 0, 1: Requests to stop the movement. M {0, 1} none none
Access Type
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address: --Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
-Special Features
a) At least either one of the outputs SSUD or STOP shall be implemented: see Table 3.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 13 f 19

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|a)|Col31|Col32|Col33|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|DP Name:|DP Name:|Dedicated Stop|Dedicated Stop|Dedicated Stop|Dedicated Stop|Dedicated Stop|Dedicated Stop|Dedicated Stop|Dedicated Stop|Dedicated Stop|Dedicated Stop|Dedicated Stop|Dedicated Stop|Abbr.:|Abbr.:|Abbr.:|Abbr.:|Abbr.:|STOP|STOP|STOP|Mandatory|Mandatory|Mandatory|Mandatory|Mandatory|Mandatory||~~a)~~|~~a)~~|~~a)~~|~~a)~~|
|FB Name:|FB Name:|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||||
|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|
|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|This output shallbe used to request a shutter or blinds actuator to stop its movement.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTName:|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|DPTTrigger|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.017|1.017|1.017|1.017|1.017|1.017|1.017|1.017|1.017|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Default|Default|Default|Default|Default|
|b|b|b|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|0, 1:<br>Requests to stop the movement.|M|M|M|{0, 1}|{0, 1}|none|none|none|none|none|none|none|none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M|||this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|
|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|Special Features <br>|
|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|~~a)~~ At least either one of the outputs SSUD or STOP shallbe implemented: see Table 3.|


-----

###### 1.5.3.4 Output Set Absolute Position Blinds Percentage (SAPBP)

DP Name: Set Absolute Position Blinds Percentage Abbr.: SAPBP Mandatory
FB Name: Shutters and Blinds Sunblind Sensor Basic (SSSB) Can be internal
Description
The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified
position between 0 % (fully open) and 100 % (fully closed).
The range may in the implementation be limited.
Datapoint Type
DPT_Name: DPT_Scaling
DPT Format: U8 DPT_ID: 5.001
Field Description Supp. Range Unit Default
UnsignedValue Requested position of the sunblind in percent. M 0 % … % none

100 %

Access Type
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address: --Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
-Special Features

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 14 f 19

|DP Name:|Col2|Set Absolute Position Blinds Percentage|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|SAPBP|Col21|Col22|Mandatory|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||||
|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|
|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Percentage“ shall be used to move the sunblind to a specified<br>position between 0 % (fully open) and 100 % (fully closed).<br>The range may in the implementation be limited.|
|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|<br>DPTScaling|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|DPTID:|DPTID:|DPTID:|5.001|5.001|5.001|5.001|5.001|5.001|5.001|5.001|5.001|5.001|
|<br> <br>Field|<br> <br>Field|<br> <br>Field|<br> <br>Field|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|_<br>Supp.|_<br>Supp.|<br> <br>Range|<br> <br>Range|<br>Unit|<br>Unit|<br>Unit|Default|Default|Default|Default|Default|Default|
|<br>UnsignedValue|<br>UnsignedValue|<br>UnsignedValue|<br>UnsignedValue|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>Requested position of the sunblind in percent.|<br>M|<br>M|<br>0 % …<br>100 %|<br>0 % …<br>100 %|<br>%|<br>%|<br>%|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M|||this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
||||||||||||||||||||||||||||||||||


-----

###### 1.5.3.5 Output Set Absolute Position Blinds Length (SAPBL)

DP Name: Set Absolute Position Blinds Length Abbr.: SAPBL Mandatory
FB Name: Shutters and Blinds Sunblind Sensor Basic (SSSB) Can be internal
Description
The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified
position between 0 mm (fully open) and the lowest position (fully closed).
The range may in the implementation be limited.
Datapoint Type
DPT_Name: DPT_Length_mm
DPT Format: U16 DPT_ID: 7.011
Field Description Supp. Range Unit Defaul

t
UnsignedValue Requested position of the sunblind M 0 mm … 65 535 mm mm none
in mm.

Access Type
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address: --Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
-Special Features

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 15 f 19

|DP Name:|Col2|Set Absolute Position Blinds Length|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Abbr.:|Col16|Col17|Col18|Col19|SAPBL|Col21|Mandatory|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||||
|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|
|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|The Output „Set Absolute Position Blinds Length“ shall be used to move the sunblind to a specified<br>position between 0 mm (fully open) and the lowest position (fully closed).<br>The range may in the implementation be limited.|
|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|<br>DPTLengthmm|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>U16|__<br>U16|__<br>U16|__<br>U16|__<br>U16|__<br>U16|__<br>U16|__<br>U16|__<br>U16|__<br>U16|__<br>U16|__<br>U16|__<br>U16|DPTID:|DPTID:|DPTID:|DPTID:|DPTID:|DPTID:|DPTID:|7.011|7.011|7.011|7.011|7.011|7.011|7.011|7.011|7.011|7.011|
|<br><br>Field|<br><br>Field|<br><br>Field|<br><br>Field|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|<br>Description|_<br>Supp.|_<br>Supp.|_<br>Supp.|<br> <br>Range|<br> <br>Range|<br> <br>Range|<br> <br>Range|<br> <br>Range|Unit|Unit|Unit|Unit|Defaul<br>t|Defaul<br>t|Defaul<br>t|Defaul<br>t|Defaul<br>t|
|UnsignedValue|UnsignedValue|UnsignedValue|UnsignedValue|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|Requested position of the sunblind<br>in mm.|M|M|M|0 mm … 65 535 mm|0 mm … 65 535 mm|0 mm … 65 535 mm|0 mm … 65 535 mm|0 mm … 65 535 mm|mm|mm|mm|mm|none|none|none|none|none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M|||this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:||||Δ-Value:||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
|||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):||||
|||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|<br>--|
|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|
||||||||||||||||||||||||||||||||||


-----

###### 1.5.3.6 Output Set Absolute Position Slats Percentage (SAPSP)

DP Name: Set Absolute Position Slats Abbr.: SAPSP Mandatory [a)]
Percentage

FB Name: Shutters and Blinds Sunblind Sensor Basic (SSSB) Can be internal
Description
The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat
position between 0% and 100%.
The range may in the implementation be limited.
Datapoint Type
DPT_Name: DPT_Scaling
DPT Format: U8 DPT_ID: 5.001
Field Description Supp. Range Unit Default
UnsignedValue Requested position of the slats in M 0 % … 100 % % none
percent.

Access Type
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address: --Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 16 f 19

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|a)|Col32|Col33|Col34|Col35|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|DP Name:|DP Name:|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Set Absolute Position Slats<br>Percentage|Abbr.:|Abbr.:|Abbr.:|Abbr.:|Abbr.:|Abbr.:|SAPSP|SAPSP|SAPSP|SAPSP|Mandatory|Mandatory|Mandatory|Mandatory|Mandatory|Mandatory|~~a)~~|~~a)~~|~~a)~~|~~a)~~|~~a)~~|
|FB Name:|FB Name:|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||||
|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|
|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Percentage “ shall be used to move the slats into a specified slat<br>position between 0% and 100%.<br>The range may inthe implementation be limited.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTName:|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|DPTScaling|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|_<br>U8|DPTID:|DPTID:|DPTID:|DPTID:|DPTID:|5.001|5.001|5.001|5.001|5.001|5.001|5.001|5.001|5.001|
|Field|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Supp.|Supp.|Supp.|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Unit|Unit|Default|Default|Default|Default|Default|
|UnsignedValue|UnsignedValue|UnsignedValue|UnsignedValue|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|Requested position of the slats in<br>percent.|M|M|M|M|0 % … 100 %|0 % … 100 %|0 % … 100 %|0 % … 100 %|0 % … 100 %|%|%|%|none|none|none|none|none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M|||this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
|||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):||||
|||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|
|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|
|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|


-----

###### 1.5.3.7 Output Set Absolute Position Slats Degrees (SAPSD)

DP Name: Set Absolute Position Slats Degrees Abbr.: SAPSD Mandatory
FB Name: Shutters and Blinds Sunblind Sensor Basic (SSSB) Can be internal
Description
The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat
position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle
(negative value)
The range may in the implementation be limited.
Datapoint Type
DPT_Name: DPT_Rotation_Angle
DPT Format: V16 DPT_ID: 8.011
Field Description Supp. Range Unit Default
UnsignedValue Requested position of the slats in M -180° … 180° ° none
degrees.

Access Type
♦ Output
this → M this → 1
Spontaneous COV: Δ-Value: Min repetition time:
Cyclic Period:
Request
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address: --Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Current value (not for input):
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
None.
Special Features
None.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 17 f 19

|DP Name:|Col2|Set Absolute Position Slats Degrees|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Abbr.:|Col16|Col17|Col18|Col19|Col20|SAPSD|Col22|Col23|Col24|Mandatory|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||||
|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|
|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|The Output „ Set Absolute Position Slat Degrees “ shall be used to move the slats into a specified slat<br>position between 0° and the maximum slat-angle (positive value) or 0° and the minimum slat-angle<br>(negative value)<br>The range may inthe implementation be limited.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTName:|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|DPTRotationAngle|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|__<br>V16|DPTID:|DPTID:|DPTID:|DPTID:|DPTID:|8.011|8.011|8.011|8.011|8.011|8.011|8.011|8.011|8.011|
|Field|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Supp.|Supp.|Supp.|Supp.|_<br>Range|_<br>Range|_<br>Range|_<br>Range|_<br>Range|Unit|Unit|Unit|Default|Default|Default|Default|Default|
|UnsignedValue|UnsignedValue|UnsignedValue|UnsignedValue|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|Requested position of the slats in<br>degrees.|M|M|M|M|-180° … 180°|-180° … 180°|-180° … 180°|-180° … 180°|-180° … 180°|°|°|°|none|none|none|none|none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M|||this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||
|||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|||||<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):|<br>Current value (not for input):||||
|||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|
|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|<br>Special Features|
|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|


-----

###### 1.5.3.8 Input Info Move Up Down

DP Name: Info Move Up Down Abbr.: IMUD Mandatory
FB Name: Shutters and Blinds Sunblind Sensor Basic (SSSB) Can be internal
Description
The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or
shutter.
This information can be used solely for visualisation purposes, for realising the toggle functionality or
other purposes.
Datapoint Type
DPT_Name: DPT_UpDown
DPT Format: B1 DPT_ID: 1.008
Field Description Supp. Range Unit Default
b Indicates the last moving direction as received M {0, 1} - from the actuator.

Access Type
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out:
Request Polling: Period:
Communication Type
♦ Group Object Datapoint Mandatory:
Default Group Address: --Dynamics
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Actual value:
Transmit on bus (only for output): Read from bus (only for input):
Exception Handling
If this DP is not received (communication failure or configuration mistake) and the toggle functionality is
implemented, then the specification the output MUD will still toggle, as specified in 1.2.3.
Special Features
None.

###### 1.5.3.9 Parameter Enable Blinds Mode

FB: Shutters and Blinds Property Name Enable Blinds Mode (EBM) Mandatory
Sunblind Sensor Basic (Server): Optional
(SSSB)

Description:
In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of
these is active. The FB shall not react on any data received on the inactive input.
DPT: Name DPT_Enable DPT_ID 1.003 Datatype format B1
Field Description Sup. Range Unit Default
b See Table 1. M {0, 1} none none
Communication:
DP Address: object_type: 801 PID: 51
(in the server) start_index: 1 nr_of_elem: 1

Property access: Read only Read/Write
Protection Read level - Write level Exception Handling: Value after Power-up: Stored Value Act Value Default Value
None.
Special Features:
None.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 18 f 19

|DP Name:|Col2|Info Move Up Down|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|IMUD|Col22|Col23|Col24|Mandatory|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Shutters and Blinds Sunblind Sensor Basic (SSSB)|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|<br>       <br>   <br>Description|
|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|The input „Info Move Up Down“ shall be used to receive the last moving direction of the sunblind or<br>shutter.<br>This information can be used solely for visualisation purposes, for realising the toggle functionality or<br>other purposes.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTName:|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|1.008|1.008|1.008|1.008|1.008|1.008|1.008|1.008|1.008|1.008|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
|b|b|b|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|Indicates the last moving direction as received<br>from the actuator.|M|M|{0, 1}|{0, 1}|-|-|-|-|-|-|-|-|-|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|N → this|||||1 → this|1 → this|1 → this|1 → this||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|||||||Time-out:|Time-out:|Time-out:||||||||||
||Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:|||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|<br> <br>Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
|||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||<br>Actual value:|<br>Actual value:|<br>Actual value:|<br>Actual value:|<br>Actual value:|<br>Actual value:|<br>Actual value:|||||||||
|||||<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):|<br>Transmit on bus (only for output):||||<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|<br>Read from bus (only for input):|||||
|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|<br> <br>Exception Handling|
|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|<br>If this DP is not received (communication failure or configuration mistake) and the toggle functionality is<br>implemented, then the specification the output MUD willstilltoggle, as specified in 1.2.3.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|

|FB:|Shutters and Blinds<br>Sunblind Sensor Basic<br>(SSSB)|Col3|Col4|Col5|Property Name<br>(Server):|Col7|Col8|Enable Blinds Mode (EBM)|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Mandatory<br>Optional|Col18|Col19|Col20|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|
|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|<br>In case both inputs SSUD and STOP are implemented, then this parameters allows selecting which of<br>these is active. The FBshall not react on any data received on the inactive input.|
|DPT:|DPT:|Name|DPTEnable|DPTEnable|DPTEnable|DPTEnable|DPTID|1.003|1.003|1.003|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|B1|B1|B1|B1|
|Field|Field|_<br>_<br>Description|_<br>_<br>Description|_<br>_<br>Description|_<br>_<br>Description|_<br>_<br>Description|_<br>_<br>Description|_<br>_<br>Description|Sup.|Sup.|Sup.|Sup.|Range|Range|Unit|Unit|Default|Default|Default|
|b|b|See Table 1.|See Table 1.|See Table 1.|See Table 1.|See Table 1.|See Table 1.|See Table 1.|M|M|M|M|{0, 1}|{0, 1}|none|none|none|none|none|
|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|
|DP Address:<br>(inthe server)|DP Address:<br>(inthe server)|DP Address:<br>(inthe server)|DP Address:<br>(inthe server)|objecttype:|objecttype:|objecttype:|801|801|801|PID:|PID:|PID:|PID:|PID:|51|51|51|51|51|
|DP Address:<br>(inthe server)|DP Address:<br>(inthe server)|DP Address:<br>(inthe server)|DP Address:<br>(inthe server)|_<br>start_index:|_<br>start_index:|_<br>start_index:|1|1|1|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|1|1|1|1|1|
|Property access:|Property access:|Property access:|Property access:|Read only|Read only||Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>Protection|<br>Protection|<br>Protection|<br>Protection|<br>Read level|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|Write level|Write level|Write level|Write level|Write level|-|-|-|-|-|
|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|||
|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|
|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### 1.5.3.10 Parameter Up Down Action

FB: Shutters and Blinds Property Name Up Down Action (UDA) Mandatory
Sunblind Sensor Basic (Server): Optional
(SSSB)

Description:
If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the
value of this parameter.
This parameter only makes sense in certain realisation flavours of this FB: see 1.2.2.
DPT: Name DPT_UpDown DPT ID 1.008 Datatype format B1
Field Description Sup. Range Unit Default
b 0 = Up M {0,1} None None

MUD and SSUD shall only send the value 0.
1 = Down

MUD and SSUD shall only send the value 1.

Communication:
DP Address: object_type: 801 PID: 52
(in the server) start_index: 1 nr_of_elem: 1

Property access: Read only Read/Write
Protection Read level - Write level Exception Handling: Value after Power-up: Stored Value Act Value Default Value
None.
Special Features:
None.

###### 1.5.3.11 Parameter Enable Toggle Mode

FB: Shutters and Blinds Property Name Enable Toggle Mode (ETM) Mandatory
Sunblind Sensor Basic (Server): Optional
(SSSB)

Description:
If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is
transmitted; if this parameter has the value “Disable” then the output MUD shall not be toggled. See 1.2.3.
DPT: Name DPT_Enable DPT ID 1.003 Datatype format B1
Field Description Sup. Range Unit Default
b Enables or disables Toggle Mode. M {0,1} None None
Communication:
DP Address: object_type: 801 PID: 53
(in the server) start_index: 1 nr_of_elem: 1

Property access: Read only Read/Write
Protection Read level - Write level Exception Handling: Value after Power-up: Stored Value Act Value Default Value
None.
Special Features:
None.

© C i h 2006 2013 KNX A i i A li i D i i 01 03 02 19 f 19

|FB:|Shutters and Blinds<br>Sunblind Sensor Basic<br>(SSSB)|Col3|Col4|Col5|Property Name<br>(Server):|Col7|Col8|Up Down Action (UDA)|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Mandatory<br>Optional|Col18|Col19|Col20|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|
|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|<br>If this parameter is implemented, then MUD and SSUD shall always send one single value equal to the<br>value of this parameter.<br>This parameter only makes sense incertain realisation flavours of this FB:see 1.2.2.|
|DPT:|DPT:|Name|DPTUpDown|DPTUpDown|DPTUpDown|DPTUpDown|DPT ID|1.008|1.008|1.008|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|B1|B1|B1|B1|
|Field|Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Unit|Unit|Default|Default|Default|
|b|b|0 <br>= Up<br>MUD and SSUD shall only send the value 0.<br>1 <br>= Down<br>MUD and SSUD shallonly send the value 1.|0 <br>= Up<br>MUD and SSUD shall only send the value 0.<br>1 <br>= Down<br>MUD and SSUD shallonly send the value 1.|0 <br>= Up<br>MUD and SSUD shall only send the value 0.<br>1 <br>= Down<br>MUD and SSUD shallonly send the value 1.|0 <br>= Up<br>MUD and SSUD shall only send the value 0.<br>1 <br>= Down<br>MUD and SSUD shallonly send the value 1.|0 <br>= Up<br>MUD and SSUD shall only send the value 0.<br>1 <br>= Down<br>MUD and SSUD shallonly send the value 1.|0 <br>= Up<br>MUD and SSUD shall only send the value 0.<br>1 <br>= Down<br>MUD and SSUD shallonly send the value 1.|0 <br>= Up<br>MUD and SSUD shall only send the value 0.<br>1 <br>= Down<br>MUD and SSUD shallonly send the value 1.|0 <br>= Up<br>MUD and SSUD shall only send the value 0.<br>1 <br>= Down<br>MUD and SSUD shallonly send the value 1.|M|M|M|{0,1}|{0,1}|None|None|None|None|None|
|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|
|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|objecttype:|objecttype:|objecttype:|801|801|801|PID:|PID:|PID:|PID:|PID:|52|52|52|52|52|
|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|_<br>start_index:|_<br>start_index:|_<br>start_index:|1|1|1|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|1|1|1|1|1|
|Property access:|Property access:|Property access:|Property access:|Read only|Read only||Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>Protection|<br>Protection|<br>Protection|<br>Protection|<br>Read level|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|Write level|Write level|Write level|Write level|Write level|-|-|-|-|-|
|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value|Exception Handling: <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|||
|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|<br>     <br>  <br>  <br>None.|
|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|
|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|

|FB:|Shutters and Blinds<br>Sunblind Sensor Basic<br>(SSSB)|Col3|Col4|Col5|Property Name<br>(Server):|Col7|Col8|Enable Toggle Mode (ETM)|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Mandatory<br>Optional|Col18|Col19|Col20|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|Description:|
|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|If this parameter has the value “Enable” then the value of the output MUD shall toggle each time it is<br>transmitted; if this parameter has the value“Disable” then the output MUD shall not be toggled. See 1.2.3.|
|<br>DPT:|<br>DPT:|<br>Name|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPT ID|<br>1.003|<br>1.003|<br>1.003|<br>Datatype format|<br>Datatype format|<br>Datatype format|<br>Datatype format|<br>Datatype format|<br>B1|<br>B1|<br>B1|<br>B1|
|<br>Field|<br>Field|<br>_<br> <br> <br>Description<br>|<br>_<br> <br> <br>Description<br>|<br>_<br> <br> <br>Description<br>|<br>_<br> <br> <br>Description<br>|<br>_<br> <br> <br>Description<br>|<br>_<br> <br> <br>Description<br>|<br>_<br> <br> <br>Description<br>|<br>_<br> <br> <br>Description<br>|<br>Sup.|<br>Sup.|<br>Sup.|<br>Range|<br>Range|<br>Range|<br>Unit|Default|Default|Default|
|<br>b|<br>b|<br> <br>Enables or disables Toggle Mode.<br>|<br> <br>Enables or disables Toggle Mode.<br>|<br> <br>Enables or disables Toggle Mode.<br>|<br> <br>Enables or disables Toggle Mode.<br>|<br> <br>Enables or disables Toggle Mode.<br>|<br> <br>Enables or disables Toggle Mode.<br>|<br> <br>Enables or disables Toggle Mode.<br>|<br> <br>Enables or disables Toggle Mode.<br>|<br>M|<br>M|<br>M|<br>{0,1}|<br>{0,1}|<br>{0,1}|<br>None|<br>None|<br>None|<br>None|
|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|<br> <br> <br> <br> <br> <br>Communication:|
|<br>DP Address:<br>(inthe server)|<br>DP Address:<br>(inthe server)|<br>DP Address:<br>(inthe server)|<br>DP Address:<br>(inthe server)|objecttype:|objecttype:|objecttype:|801|801|801|PID:|PID:|PID:|PID:|PID:|53|53|53|53|53|
|<br>DP Address:<br>(inthe server)|<br>DP Address:<br>(inthe server)|<br>DP Address:<br>(inthe server)|<br>DP Address:<br>(inthe server)|_<br>start_index:|_<br>start_index:|_<br>start_index:|<br>1|<br>1|<br>1|<br>nr_of_elem:|<br>nr_of_elem:|<br>nr_of_elem:|<br>nr_of_elem:|<br>nr_of_elem:|<br>1|<br>1|<br>1|<br>1|<br>1|
|Property access:|Property access:|Property access:|Property access:|<br>Read only|<br>Read only||<br>Read/Write|<br>Read/Write|<br>Read/Write|<br>Read/Write||||||||||
|<br>Protection|<br>Protection|<br>Protection|<br>Protection|<br>Read level|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|Write level|Write level|Write level|Write level|Write level|-|-|-|-|-|
|Exception Handling:<br>Value after Power-up:  Stored Value|Exception Handling:<br>Value after Power-up:  Stored Value|Exception Handling:<br>Value after Power-up:  Stored Value|Exception Handling:<br>Value after Power-up:  Stored Value|Exception Handling:<br>Value after Power-up:  Stored Value|Exception Handling:<br>Value after Power-up:  Stored Value|Exception Handling:<br>Value after Power-up:  Stored Value|Exception Handling:<br>Value after Power-up:  Stored Value|Exception Handling:<br>Value after Power-up:  Stored Value||Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|||
|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|<br>  <br> <br> <br>None.|
|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|<br>Special Features:|
|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|


-----

