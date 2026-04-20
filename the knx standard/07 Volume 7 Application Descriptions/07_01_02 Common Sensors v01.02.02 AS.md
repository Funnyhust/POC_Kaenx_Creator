# Application Descriptions

## Common Functional Blocks

 Common Sensors

###### Summary

 This document specifies Common Sensor Functional Blocks.

 Version 01.02.02 is a KNX Approved Standard.


-----

###### Document updates

**Version** **Date** **Modifications**

0.1 2005.02.14 Document created
0.2 2005.05.12 APS updated according to TFI inputs
0.3 2005.10.14 Publication of the TFI approved version.
0.4 2006.02.01 Added FB Scene Sensor
2006.05.09 FB Scene Sensor

− added Outputs Scene AB Activate and Scene AB Teach. Combinations
specified in Table 2.
FB Priority Sensor

− First specification proposal.
FB Lock Sensor

− First specification proposal.
2006.09.18 TF Editing:

Inclusion of the feedback from TFI of 2006.05.19. See comment below
Table 2.
FB Timed Sensor added.
0.4 2007.03.02 Publication of the TFI approved version.
0.6 2008.08.09  - **AN106 "Phasing out TP0" integrated.**

               - **AN107 "Phasing out LT-R" integrated.**

               - **AN108 "Phasing out LT-S" integrated.**

               - **AN109 "Phasing out PL132" integrated.**

               - **AN110 "Phasing out A-Mode" integrated.**
1.0 AS 2009.04.27 Publication of the Approved Standard.
01.01.01 2013.09.04  - **AN150 “FB Profiles for existing FBs” integrated.**

                - Minor editorial correction.
01.01.02 2013.10.29  - Editorial updates for the publication of KNX Specifications 2.1.
01.02.00 2013.10.17 - Parameters TimeLongKeypress, EnableBinarySceneControl,
SceneNumberConfig and PBInterfNormalState added to FB SCS

                      - Parameters Heartbeat and MinRepTime added to FB APS

                      - Editorial
01.02.01 2014.06.25 - Integration of WGI feedback
01.02.02 2014.07.07 - Preparation of the Approved Standard.

###### References

[01] Chapter 3/7/1 “Interworking Model”

[02] Chapter 3/7/2 “Datapoint Types”

[03] Chapter 7/10/10 “HVAC Interface Object Type Identifier”

[04] Part 10/1 “Logical Tag Extended”

[05] Chapter 7/1/2 S1 “Supplement 1 LTE-Mode Extensions”

[06] Chapter 7/20/2 “Lighting Actuators”

Filename: 07_01_02 Common Sensors v01.02.02 AS.docx
Version: 01.02.02
Status: Approved Standard
Savedate: 2014.07.07
Number of pages: 38

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 2 f 38

|Version|Date|Modifications|
|---|---|---|
|0.1|2005.02.14|Document created|
|0.2|2005.05.12|APS updated according to TFI inputs|
|0.3|2005.10.14|Publication of the TFIapproved version.|
|0.4|2006.02.01|Added FBScene Sensor|
||2006.05.09|FB Scene Sensor<br>− added Outputs Scene AB Activate and Scene AB Teach. Combinations<br>specified in Table 2.<br>FB Priority Sensor<br>− First specification proposal.<br>FB Lock Sensor<br>− First specification proposal.|
||2006.09.18|TF Editing:<br>Inclusion of the feedback from TFI of 2006.05.19. See comment below<br>Table 2.<br>FB Timed Sensor added.|
|0.4|2007.03.02|Publication of the TFIapproved version.|
|0.6|2008.08.09|• **AN106 "Phasing out TP0"** integrated. <br>• **AN107 "Phasing out LT-R"** integrated. <br>• **AN108 "Phasing out LT-S"** integrated. <br>• **AN109 "Phasing out PL132"** integrated. <br>• **AN110 "Phasing out A-Mode"** integrated.|
|1.0 AS|2009.04.27|Publication of the Approved Standard.|
|01.01.01|2013.09.04|• **AN150 “FB Profiles for existing FBs”** integrated.<br>• Minor editorial correction.|
|01.01.02|2013.10.29|• Editorial updates for the publication of KNXSpecifications 2.1.|
|01.02.00|2013.10.17|-<br>Parameters TimeLongKeypress, EnableBinarySceneControl,<br>SceneNumberConfig and PBInterfNormalState added to FB SCS<br>- <br>Parameters Heartbeat and MinRepTime added to FB APS<br>- <br>Editorial|
|01.02.01|2014.06.25|<br> -<br>Integration of WGI feedback|
|01.02.02|2014.07.07|-<br>Preparation of the Approved Standard.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4 1.2 Objectives ....................................................................................................................... 4 1.3 Dependence on Configuration Modes ............................................................................ 4 1.4 Glossary .......................................................................................................................... 6 1.5 Abbreviations .................................................................................................................. 7

 2 Physical Sensor ....................................................................................................................... 8 2.1 Atmospheric Pressure Sensor (APS) .............................................................................. 8

 3 Logic Functions Blocks ........................................................................................................ 17 3.1 FB Scene Sensor ........................................................................................................... 17 3.2 FB Priority Sensor ........................................................................................................ 25 3.3 FB Lock Sensor ............................................................................................................ 29 3.4 FB Timed Sensor .......................................................................................................... 32

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 3 f 38


-----

### 1 Introduction

#### 1.1 Scope
###### This document is part of the KNX Application Interworking Standard. It contains the specification of Common Sensor Functional Blocks.

#### 1.2 Objectives
###### This document includes the information necessary to build interoperable sensor products with Functional Blocks of common interest, using the KNX system. Runtime Interworking between the sensor Functional Block and a controller, display etc. is the focus. Also data-interfaces for parameter setting, visualisation etc. are specified where appropriate (only state of the art Datapoints generally used in all companies).

 In addition, this document specifies the specific mechanisms for zoning and runtime process data distribution used in HVAC for an ‘easy installation’ system (LTE-Mode [04]).

 This is a technical specification with informative material provided as needed to convey key concepts. The approach taken here is a top-down view of interoperability.

 Every Functional Block may be part of a complex device (e.g. a heating controller) containing more than one Functional Block. Because of this modular approach, there is no attempt in this specification to describe or dictate the internal construction of a Functional Block or to describe specific device types.

 This document only includes details of the transport protocol as needed to specify interoperability and easy installation mechanisms. The document does not specifically cover implementation aspects, but guidelines are included where appropriate.

 Completely protocol dependent parts of the sensor specification such as data encoding and Datapoint Types, object address tables, Group Address tables etc. are not part of this document.

#### 1.3 Dependence on Configuration Modes
###### The main focus of this document is the specification of the Basic Functional Blocks and the LTE specific parts.

 The document provides all necessary information needed

 • for a complete implementation of the Functional Blocks in LTE-Mode,and
 • for the implementation of mandatory objects used for runtime Interworking in Standard Mode (Basic Functional Block).

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 4 f 38


-----

##### 1.3.1 Runtime Interworking
###### Configuration Mode dependent (S-Mode, Ctrl-Mode, PB-Mode) implementation of optional runtime Interworking objects is not specified in this document, e.g. “E-Mode Channel” definitions.

 The following table (example) shows the mode dependencies concerning runtime Interworking.

**STANDARD** **EXTENDED**
**MODE** **MODE**

**Inputs** Inp1 **NA** NA NA M

Inp2 **NA** NA NA O

Inp3 **(GOb)** (GO) O

**Outputs** Outp1 **NA** NA NA M

           - Outp1-1 **GOb** GO GO NA

           - Outp1-2 **GOb** GO GO NA

Outp 2 **GOb** GO GO M

###### Inp1: is mandatory M in LTE-Mode but the information is not available (NA) in the Basic FB and all other modes because the Datapoint Type (DPT) is today not available in Standard Mode and there are no products on the market with this functionality. Inp2: is optional O in LTE-Mode but the information is not available (NA) in the Basic FB and all other modes because the DPT is today not available in Standard Mode and there are no products on the market with this functionality. Inp3: is optional O in LTE-Mode and an optional Group Object in the Basic FB (GOb). The Datapoint is optionally supported as Group Object in the LTE Standard Mode Interface (GO). For all other modes the implementation is not defined. This is indicated by an empty field. Outp1: is mandatory M in LTE-Mode and has a structured DPT or a DPT with extended features which is today not available in Standard Mode. In the Basic FB the information of Outp1 is split up into Outp1-1 and Outp1-2 (separate Datapoints with standard DPT).  Outp1-1 and Outp1-2 are mandatory Group Objects GO in the Basic FB and are therefore mandatory in all modes. Outp2: is mandatory in all modes.

##### 1.3.2 Parameters and Diagnostic Data
###### LTE implementation

 • Parameters and Diagnostic Data of a Functional Block shall be implemented as Properties of the corresponding Interface Object that are accessed using point-to-point addressing.

 • These Properties are addressed via the standard Interface Object Type (IO Type) for this Functional Block. This IO Type is also used for Datapoint addressing in the LTE runtime Interworking model.

 • Standard DPT or HVAC specific DPT with extended features are used where appropriate.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 5 f 38

|Basic FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic FB**|**Basic FB**|**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-MODE**|
|**Inputs**|Inp1|**NA**|NA|NA|M|
|**Inputs**|Inp2|**NA**|NA|NA|O|
|**Inputs**|Inp3|**(GOb) **||(GO)|O|
|**Outputs**|Outp1|**NA**|NA|NA|M|
|**Outputs**|- Outp1-1|**GOb  **|GO|GO|NA|
|**Outputs**|- Outp1-2|**GOb **|GO|GO|NA|
|**Outputs**|Outp 2|**GOb **|GO|GO|M|


-----

###### Other modes

 • Parameters and Diagnostic Data can in principle be implemented as memory mapped Datapoints or Group Objects or Properties of an Interface Object using individual addressing. This document does not lay down how to implement Parameters and Diagnostic Data in S-Mode, Ctrl-Mode and PB-Mode.

 • In case of Memory Mapped Datapoints the DPT may be manufacturer specific

 • In case of Group Objects standard DPT shall be used instead of HVAC specific (extended) DPT. The description of these Group Objects shall be part of the mode-dependent specification (e.g. Channel definition).

 • In case of Properties, the implementation of HVAC specific DPT with extended features may be a problem (depending on the available microcontroller resources). The manufacturer has the choice:

  to use the LTE style Property implementation as specified in this document (with the DPT and IO Type for LTE implementations)   IO Type[used] = IO Type[HVAC-LTE]  to implement these Properties using standard DPT only.  In this case, the same Property ID but a different IO Type shall be used since the DPT of a Property shall be unambiguous for each IO Type. Simple IOT mapping rule: IO Type[used] = IO Type[standardDPT] = IO Type[HVAC-LTE] +  10000d (e.g. BUC[HVAC-LTE] = 128 => BUC[standardDPT] = 10128)  It is allowed to implement in a device both Interface Object Types IO Type[HVAC-LTE] and IO Type[standardDPT]. The implementation of parameters and diagnostic data of one given Functional Block shall however be complete. It is thus not allowed to implement part of the Datapoints of a Functional Block in IO Type[standardDPT] and the remaining in IO Type[HVAC-LTE.]

**Implementation of Parameter and Diagnostic Data**

**Property based** **Group Object** **Memory mapped**
**LTE style** **Standard DPT**

IO Type IO Type[HVAC-LTE] IO Type[HVAC-LTE ]+ 10000

e.g. BUC=128 e.g. BUC=10128

Property ID Property ID x Property ID x

if standard DPT ⇒ same standard DPT ⇒ same standard DPT company specific

DPT if HVAC-LTE ⇒ mapped standard ⇒ mapped standard

specific*) DPT, e.g. 9.001 DPT, e.g. 9.001
e.g. 205.100

###### In this document only the HVAC-LTE style of Parameters and Diagnostic Data is specified for IO Type[HVAC-LTE].
 In the FB Datapoint overview those Parameters and Diagnostic Data with HVAC-LTE specific (extended) DPT are marked “*[)]”

 The mapping of HVAC specific DPT to standard DPT is generic and described in the document [02].

#### 1.4 Glossary
###### No new terms are introduced in this document.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 6 f 38

|Col1|Implementation of Parameter and Diagnostic Data|Col3|Col4|Col5|
|---|---|---|---|---|
||**Property based**<br>**LTEstyle **<br>**Standard DPT**|**Property based**<br>**LTEstyle **<br>**Standard DPT**|**Group Object**|**Memory mapped**|
|IO Type|IO TypeHVAC-LTE <br>e.g. BUC=128|IO TypeHVAC-LTE+ 10000<br>e.g. BUC=10128|||
|Property ID|Property ID x|Property ID x|||
|DPT|if standard DPT|⇒ same standard DPT|⇒ same standard DPT|company specific|
|DPT|if HVAC-LTE<br>specific***)** <br>e.g. 205.100|⇒ mapped standard<br>DPT, e.g. 9.001|⇒ mapped standard<br>DPT, e.g. 9.001||


-----

#### 1.5 Abbreviations
###### General

 Abbreviation Description
 (GO) Group Object optional cs Company Specific GO Group Object mandatory M Mandatory NA Not Allowed / Not Applicable O Optional S Has to be implemented in Standard Mode, if implemented in LTE- Mode

 HVAC Heating Ventilation Air Conditioning LTE Logical Tag Extended

 IR LTE-Service InfoReport W LTE-Service Write

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 7 f 38


-----

### 2 Physical Sensor

#### 2.1 Atmospheric Pressure Sensor (APS)

##### 2.1.1 Aims and objectives
###### The Functional Block ‘Atmospheric Pressure Sensor’ shall measure the absolute air pressure and shall deliver the data to the KNX system. The data may be used for barometer functionality, weather station, displaying etc.

##### 2.1.2 Functional specification
###### The distribution of the atmospheric pressure in the KNX system shall be event-driven (COV-condition, change of value) and shall in addition be repeated periodically.

 In the LTE-Mode the ‘Atmospheric Pressure Sensor’ shall support LTE outside sensor zoning, i.e. multiple sensor values may be distributed in the system in parallel for different zones. (e.g. OutsideSensorZone_1= ‘north’, OutsideSensorZone_2= ‘south’ etc.)

 Optional features in LTE-Mode:
 - Faults in the sensor device may be detected and reported.

 - The sensor value may temporary be overridden by means of a tool for service purposes.
 The ‘Overridden’ condition must be reported.

 - Alarm limits may be detected by the sensor and are reported.
 The alarm may be acknowledged.

 - The sensor may be set / reset out of service by means of a tool for service purposes.

 Outputs

 • AtmosphericPressureAbs This output shall deliver the atmospheric pressure value to the bus.

 • StatusGO This output shall only be available in Standard Mode and shall contain the Z8 information of the output sensor value.

 Binding Group (LTE)

 • OutsideSensorZone no special features

 Parameters

 • PressureCOVCondition This parameter shall define the delta pressure value at which the information shall be transmitted spontaneously.

 • PressureHeartbeat This parameter defines the time duration for periodical retransimission of the sensor value if no COV condition occurred before.

 • PressureMinRepTime This parameter defines the time duration for earliest retransmission of the sensor value even if the COV condition occurred before.

##### 2.1.3 Constraints
###### None.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 8 f 38


-----

##### 2.1.4 Functional Block diagram

Atmospheric Pressure Sensor
(APS)

Inputs

Hardwired I/O’s

Mandatory:

              - Pressure Sensor

                   
Optional:

                   
##### 2.1.5 Datapoint Description

###### Overview


M **IR**

StatusGO
**(GO)**

|Datapoints|Description / Remarks|Datapoint Type|Additional Info|
|---|---|---|---|
|**Outputs**||||
|AtmosphericPressure<br>Abs<br>StatusGO|Atmospheric pressure value with:<br>- COV and RepPer<br>- Z8  STATUS and<br>- Z8  COMMAND supported<br>to FB<br>various controller<br>Z8  information as a Group Object|LTE:<br>203.015<br>DPT_AtmPressureAbs_Z<br>U16Z8 <br>S:<br>9.006<br>DPT_Value_Pres<br>F16 <br>LTE:<br>NA<br>S:<br>21.001<br>DPT_StatusGen<br>B8|LTE:<br>M <br>Mbar<br>S:<br>GO<br>Pa<br>LTE:<br>NA<br>S:<br>(GO)<br>Bitset as Z8|
|**Parameters**||||
|Outside<br>Sensor<br>Zone<br>Pressure<br>COV<br>Condition<br>Pressure<br>Heartbeat <br>Pressure<br>MinReptTime|LTE zoning number for outside<br>sensor zone<br>Value for COV condition with:<br>- Z8 not supported<br>Time duration for retransimission of the<br>sensor value if no COV condition<br>occurred before <br>Time duration for earliest retransmission<br>of the sensor value even if the COV<br>condition occurred before|202.002<br>DPT_UcountValue8_Z<br>U8Z8 <br>203.015<br>1)<br>DPT_AtmPressureAbs_Z<br>U16Z8 <br>7.005<br>DPT_TimePeriodSec<br>U16 <br>7.005<br>DPT_TimePeriodSec<br>U16|M <br>1 <br>O <br>cs<br>O <br>900 s <br>O <br>10 s|



[1)] Implementation of Properties using standard DPT see clause 1.3.2.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 9 f 38


-----

###### APS Runtime Interworking - Dependence on Configuration Modes

**STANDARD** **EXTENDED**

**MODE** **MODE**

**Inputs**

**Outputs** AtmosphericPressureAbs **GOb** GO GO **M**
StatusGO **(GOb)** (GO) **NA**

###### APS LTE specific Properties

**Support**

**Parameter** OutsideSensorZone **M**

###### APS Standard Properties of Interface Objects (or memory mapped DP)

**Support**

**Parameter** PressureCOVCondition **O**

PressureHeartbeat **O**

PressureMinRepTime **O**

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 10 f 38

|Basic FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic FB**|**Basic FB**|**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-Mode**|
|**Inputs**||||||
|**Inputs**||||||
|**Outputs**|AtmosphericPressureAbs|**GOb **|GO|GO|**M **|
|**Outputs**|StatusGO|<br>**(GOb) **||(GO)|<br>**NA**|

|Properties|Col2|Col3|
|---|---|---|
|||**Support**|
|**Parameter**|OutsideSensorZone|**M **|
||||

|Col1|Col2|Support|
|---|---|---|
|**Parameter**|PressureCOVCondition|**O **|
||PressureHeartbeat|**O **|
||PressureMinRepTime|**O **|


-----

##### 2.1.6 Detailed specification of the Datapoints

###### 2.1.6.1 Output Atmospheric Pressure Standard Mode

DP Name: AtmosphericPressureAbs Abbr.: --- Mandatory
FB Name: APS Can be internal
**Description**
This output shall contain the value of the the atmospheric pressure
**Datapoint Type**
DPT_Name: DPT_Value_Pres
DPT Format: F16 DPT_ID: 9.006
Field Description Supp. Range Unit Default
FloatValue The atmospheric pressure in F16. Full Pa cs
**Access Type**
♦ Output
this → M this → 1
Spontaneous COV: Delta-Value: cs [1)] MinRepTime: 10 s [2)]
Cyclic Period: 15 min (recommended value) [2)]
Request
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Actual value:
Transmit on bus:
**Exception Handling**
--**Special Features**

[1)] COV see parameter, recommended value 20 Pa (0,2 mbar)

[2) ] MinRepTime, Period (= Heartbeat): see parameter

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 11 f 38

|DP Name:|Col2|AtmosphericPressureAbs|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Abbr.:|Col24|Col25|Col26|Col27|---|Col29|Col30|Col31|Mandatory|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|
|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|This output shall contain the value of the the atmosphericpressure|
|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|
|DPT_Name:|DPT_Name:|DPT_Name:|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|DPT_Value_Pres|
|DPT Format:|DPT Format:|DPT Format:|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|F16|DPT_ID:|DPT_ID:|DPT_ID:|9.006|9.006|9.006|9.006|9.006|9.006|9.006|9.006|9.006|9.006|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Supp.|Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
|FloatValue|FloatValue|FloatValue|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|The atmosphericpressure in F16.|||Full|Full|Pa|Pa|Pa|Pa|cs|cs|cs|cs|cs|
|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M|||||||this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||
||Spontaneous|Spontaneous|Spontaneous|Spontaneous|Spontaneous||||COV:|COV:|COV:|COV:|COV:|||||Delta-Value:|Delta-Value:|Delta-Value:|Delta-Value:|Delta-Value:|Delta-Value:|Delta-Value:|Delta-Value:|cs1)|cs1)|cs1)|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|10 s2)|10 s2)|10 s2)|10 s2)|10 s2)|10 s2)|10 s2)|10 s2)|
||||||||||Cyclic|Cyclic|Cyclic|Cyclic|Cyclic|||||Period:|Period:|Period:|Period:|Period:|Period:|Period:|Period:|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|15 min(recommended value) 2)|
||Request|Request|Request|Request|Request||||||||||||||||||||||||||||||||||||
|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||||
||Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||||
||||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|||||||Actual value:|Actual value:|Actual value:|Actual value:|Actual value:|Actual value:|Actual value:|Actual value:|Actual value:||||||||
||||||Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:||||||||||||||||||||
|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 20 Pa (0,2 mbar)<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|


-----

###### LTE-Mode

**FB:** **APS** **LTE Server Output Name:** **AtmosphericPressureAbs** Mandatory
Optional

**Description:**
This output shall contain the value of the atmospheric pressure as well as a STATUS information. The
output may be overridden by means of the COMMAND.
**DPT:** Name DPT_AtmPressureAbs_Z DPT ID 203.015 Datatype format U16Z8
Field Description Sup. Range Unit COV Default
AtmosphericPressure Actual pressure value M Full Range mbar cs[1) ] cs
STATUS For LTE-Service InfoReport Bitset
and Property-Service
Response only

- OutOfService Sensor out of service O true/false Bit 0 Y false

- Fault Sensor value is corrupted O true/false Bit 1 Y false

- Overridden Sensor is temporarily O true/false Bit 2 Y false
overridden

- InAlarm Sensor is in alarm O true/false Bit 3 Y false

- AlarmUnAck Acknowledgement of alarm O true/false Bit 4 Y false
all other bits reserved NA Bit 5-7 Y false
Sup. Range
COMMAND For Property-Service Write only enum

- Override / Release Temporary override / release of sensor value O 1 / 2

- Set / Reset OSV Set / reset of out of service O 3 / 4

- AlarmAck Acknowledgement of alarm O 5

- all other commands NA

**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific OutsideSensorZone 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 1013 (APS) Property ID: 51
**LTE-Services (event):** COV MinRepTime: 10 [2)] s Heartbeat: 15 [2)] min

InfoReport Output per default communicating Binding Group Wildcard allowed

Tx Prio: High Normal Low

(LTE ReadResponse polling of
the output shall Transm after Power-up: Stored Value Act Value Default Value
always be supported)

**Property-Service**
Read only Read/Write
**(individual access):**

**Exception Handling:** Save at Powerdown
--
**Special Features:**

[1)] COV see parameter, recommended value 0,2 mbar

[2) ] MinRepTime, Period (= Heartbeat): see parameter

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 12 f 38

|FB: APS|Col2|LTE Server Output Name: AtmosphericPressureAbs|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Mandatory<br>Optional|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|This output shall contain the value of the atmospheric pressure as well as a STATUS information. The<br>output may be overridden by means of the COMMAND.|
|**DPT:**|Name|Name|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT ID|DPT ID|DPT ID|203.015|203.015|203.015|203.015|Datatype format|Datatype format|Datatype format|Datatype format|U16Z8|U16Z8|U16Z8|U16Z8|U16Z8|U16Z8|U16Z8|U16Z8|
|Field|Field|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Sup.|Sup.|Range|Range|Range|Unit|Unit|COV|Default|Default|Default|Default|Default|Default|Default|
|AtmosphericPressure|AtmosphericPressure|AtmosphericPressure|AtmosphericPressure|AtmosphericPressure|Actualpressure value|Actualpressure value|Actualpressure value|Actualpressure value|Actualpressure value|Actualpressure value|Actualpressure value|Actualpressure value|Actualpressure value|M|M|M|Full Range|Full Range|Full Range|mbar|mbar|cs1)|cs|cs|cs|cs|cs|cs|cs|
|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck<br>all other bits|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck<br>all other bits|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck<br>all other bits|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck<br>all other bits|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck<br>all other bits|For LTE-Service InfoReport<br>and Property-Service<br>Response only<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily<br>overridden<br>Sensor is in alarm<br>Acknowledgement of alarm<br>reserved|For LTE-Service InfoReport<br>and Property-Service<br>Response only<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily<br>overridden<br>Sensor is in alarm<br>Acknowledgement of alarm<br>reserved|For LTE-Service InfoReport<br>and Property-Service<br>Response only<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily<br>overridden<br>Sensor is in alarm<br>Acknowledgement of alarm<br>reserved|For LTE-Service InfoReport<br>and Property-Service<br>Response only<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily<br>overridden<br>Sensor is in alarm<br>Acknowledgement of alarm<br>reserved|For LTE-Service InfoReport<br>and Property-Service<br>Response only<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily<br>overridden<br>Sensor is in alarm<br>Acknowledgement of alarm<br>reserved|For LTE-Service InfoReport<br>and Property-Service<br>Response only<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily<br>overridden<br>Sensor is in alarm<br>Acknowledgement of alarm<br>reserved|For LTE-Service InfoReport<br>and Property-Service<br>Response only<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily<br>overridden<br>Sensor is in alarm<br>Acknowledgement of alarm<br>reserved|For LTE-Service InfoReport<br>and Property-Service<br>Response only<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily<br>overridden<br>Sensor is in alarm<br>Acknowledgement of alarm<br>reserved|For LTE-Service InfoReport<br>and Property-Service<br>Response only<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily<br>overridden<br>Sensor is in alarm<br>Acknowledgement of alarm<br>reserved|O <br>O <br>O <br>O <br>O <br>NA|O <br>O <br>O <br>O <br>O <br>NA|O <br>O <br>O <br>O <br>O <br>NA|true/false<br>true/false<br>true/false<br>true/false<br>true/false|true/false<br>true/false<br>true/false<br>true/false<br>true/false|true/false<br>true/false<br>true/false<br>true/false<br>true/false|Bitset<br>Bit 0<br>Bit 1<br>Bit 2<br>Bit 3<br>Bit 4<br>Bit 5-7|Bitset<br>Bit 0<br>Bit 1<br>Bit 2<br>Bit 3<br>Bit 4<br>Bit 5-7|Y <br>Y <br>Y <br>Y <br>Y <br>Y|false<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false|
|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|Sup.|Sup.|Range||||||||
|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|COMMAND<br>- Override / Release<br>- Set / Reset OSV<br>- AlarmAck<br>- all other commands|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|For Property-Service Write only<br>Temporary override / release of sensor value<br>Set / reset of out of service<br>Acknowledgement of alarm|O <br>O <br>O <br>NA|O <br>O <br>O <br>NA|enum<br>1 / 2<br>3 / 4<br>5||||||||
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|**Binding Group:**|
|Class|Class|Class|Class|Class|Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical|||||||||||||||||||||||||||
|Application Specific<br>|Application Specific<br>|Application Specific<br>|Application Specific<br>|Application Specific<br>|Application Specific<br>|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|1|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned|||Broadcast|Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable||||||||||||||||
|**DP Address:**|**DP Address:**|**DP Address:**|**DP Address:**|**DP Address:**|**DP Address:**|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|IO Type(ID): <br>1013(APS) <br>Property ID:<br>51|
|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|COV||MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|MinRepTime:<br>102) s<br>Heartbeat: 152) min|
|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|Outputper default communicating|Outputper default communicating|Outputper default communicating|Outputper default communicating|Outputper default communicating|Outputper default communicating|Outputper default communicating|Outputper default communicating|Outputper default communicating|||Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed||||
|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|Tx Prio:<br>High|Tx Prio:<br>High|Tx Prio:<br>High|Tx Prio:<br>High|Tx Prio:<br>High|Tx Prio:<br>High||Normal|Normal|Normal|Normal|Normal|Normal|Normal||Low|Low|Low|||||||
|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|**LTE-Services (event):** <br>InfoReport<br>(LTE Read-<br>Response polling of<br>the output shall<br>always be supported)|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|
|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|||||
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|1) COV see parameter, recommended value 0,2 mbar<br> 2)MinRepTime, Period(= Heartbeat): seeparameter|


-----

###### 2.1.6.2 Output StatusGO LTE-Mode

 Not applicable.

 Standard Mode

DP Name: StatusGO Abbr.: --- Mandatory
FB Name: APS Can be internal
**Description**
This output contains the Z8 status information as a Group Object.
**Datapoint Type**
DPT_Name: DPT_StatusGen
DPT Format: B8 DPT_ID: 21.001
Field Description Supp. Range Unit Default
Status Z8 Status information Bitset cs
Bit 0 OutOfService O t/f
Bit 1 Fault O t/f
Bit 2 Overridden O t/f
Bit 3 InAlarm O t/f
Bit 4 AlarmUnAcknowledged O t/f
Bits 5...7 reserved NA
**Access Type**
♦ Output
this → M this → 1
Spontaneous COV: Delta-Value: --- MinRepTime: 10 s [1)]
Cyclic Period: 15 min (recommended value) [1)]
Request
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value: Actual value:
Transmit on bus:
**Exception Handling**
--**Special Features**

[1)] MinRepTime, Period (= Heartbeat): see parameter

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 13 f 38

|DP Name:|Col2|StatusGO|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Abbr.:|Col24|Col25|Col26|Col27|---|Col29|Col30|Col31|Mandatory|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|APS|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|**Description**|
|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|This output contains the Z8 status information as a Group Object.|
|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|**Datapoint Type **|
|DPT_Name:|DPT_Name:|DPT_Name:|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|DPT_StatusGen|
|DPT Format:|DPT Format:|DPT Format:|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|B8|DPT_ID:|DPT_ID:|21.001|21.001|21.001|21.001|21.001|21.001|21.001|21.001|21.001|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Supp.|Range|Range|Unit|Unit|Unit|Default|Default|Default|Default|Default|
|Status|Status|Status|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information|Z8 Status information||Bitset|Bitset||||cs|cs|cs|cs|cs|
|Bit 0<br>  Bit 1<br>  Bit 2<br>  Bit 3<br>  Bit 4<br>  Bits 5...7|Bit 0<br>  Bit 1<br>  Bit 2<br>  Bit 3<br>  Bit 4<br>  Bits 5...7|Bit 0<br>  Bit 1<br>  Bit 2<br>  Bit 3<br>  Bit 4<br>  Bits 5...7|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|OutOfService<br>Fault<br>Overridden<br>InAlarm<br>AlarmUnAcknowledged<br>reserved|O <br>O <br>O <br>O <br>O <br>NA|||t/f<br>t/f<br>t/f<br>t/f<br>t/f|t/f<br>t/f<br>t/f<br>t/f<br>t/f|t/f<br>t/f<br>t/f<br>t/f<br>t/f||||||
|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|**Access Type **|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M|||||||this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||||||
||Spontaneous|Spontaneous|Spontaneous|Spontaneous|Spontaneous||||COV:|COV:|COV:|COV:|COV:|||||Delta-Value:|Delta-Value:|Delta-Value:|Delta-Value:|Delta-Value:|Delta-Value:|Delta-Value:|---|---|---|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|10 s1)|10 s1)|10 s1)|10 s1)|10 s1)|10 s1)|10 s1)|10 s1)|
||||||||||Cyclic|Cyclic|Cyclic|Cyclic|Cyclic|||||Period:|Period:|Period:|Period:|Period:|Period:|Period:|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|15 min(recommended value) 1)|
||Request|Request|Request|Request|Request|||||||||||||||||||||||||||||||||||
|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|**Communication Type **|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||
||Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||||
||||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||||||Actual value:|Actual value:|Actual value:|Actual value:|Actual value:|Actual value:|Actual value:||||||||
||||||Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|Transmit on bus:|||||||||||||||||||
|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|**Exception Handling **|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|1) MinRepTime, Period(= Heartbeat): seeparameter|


-----

###### 2.1.6.3 Parameter OutsideSensorZone

**FB:** **APS** **Property Name (Server):** **OutsideSensorZone** Mandatory
Optional

**Description:**
Number of the outside sensor zone.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Sensor Zone Number of the sensor zone M 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false Bit 0 false

- all other bits not supported, fixed to '0' NA false
COMMAND enum cs

- NormalWrite M 0

- SetOSV & ResetOSV Set zone inactive / active O 3 / 4

- all other commands not supported NA

**Communication:**

**DP Address:** IO Type(ID): 1013 (APS) Property ID: 101
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
Zone = 0 (wildcard) NOT allowed

**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 14 f 38

|FB: APS|Col2|Property Name (Server): OutsideSensorZone|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Mandatory<br>Optional|Col15|Col16|Col17|Col18|Col19|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|Number of the outside sensor zone.|
|**DPT:**|Name|Name|DPT_UcountValue8_Z|DPT_UcountValue8_Z|DPT_UcountValue8_Z|DPT ID|DPT ID|DPT ID|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|
|Field|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Sup.|Range|Range|Range|Range|Unit|Default|Default|
|Sensor Zone|Sensor Zone|Sensor Zone|Sensor Zone|Number of the sensor zone|Number of the sensor zone|Number of the sensor zone|Number of the sensor zone|Number of the sensor zone|Number of the sensor zone|Number of the sensor zone|M|1...31|1...31|1...31|1...31||1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- all other commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- all other commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- all other commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- all other commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|true/false<br>enum<br>0 <br>3 / 4|true/false<br>enum<br>0 <br>3 / 4|true/false<br>enum<br>0 <br>3 / 4|true/false<br>enum<br>0 <br>3 / 4|Bitset<br>Bit 0|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|**DP Address:**<br>**(in the server)**|**DP Address:**<br>**(in the server)**|**DP Address:**<br>**(in the server)**|**DP Address:**<br>**(in the server)**|**DP Address:**<br>**(in the server)**|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>101<br>Start-Index:<br>1 <br>N° of elements<br>1|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|||||||
|**Protection**|**Protection**|**Protection**|**Protection**|**Protection**|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|
|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value||Act Value|Act Value|Act Value||Default Value|Default Value|||
|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|<br>  <br> <br> <br>Zone = 0(wildcard) NOT allowed|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|The device is not LTE communicating in this zone if zone is 'OutOfService'|


-----

###### 2.1.6.4 Parameter PressureCOVCondition

**FB:** **APS** **Property Name (Server):** **PressureCOVCondition** Mandatory
Optional

**Description:**
Delta pressure value for COV condition
**DPT:** Name DPT_AtmPressureAbs_Z DPT ID 203.015 Datatype format U16Z8
Field Description Sup. Range Unit Default
AtmospericPressure pressure COV value Full mbar 0,2 mbar*)
Range

STATUS Bitset

- all bits not supported, fixed to '0' NA false
COMMAND enum cs

- NormalWrite M 0

- all other commands not supported NA

**Communication:**

**DP Address:** IO Type(ID): 1013 (APS) Property ID: 112
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--
**Special Features:**
--###### *) recommended COV = 0,2 mbar (= 0,2 hPa).

 The resolution of typical sensor elements is 0,1 mbar.

 During exceptional storms like “Lothar” the atmospheric pressure changed 15 mbar within 6 hours.

 This is a change of 0,625 mbar in 15 min (heartbeat). In case of storm „Lothar“ a message would be generated approximately every 5 minutes with a COV of 0,2 mbar. This is sufficient to generate storm warnings or to calculate a tendency.

 DPT_AtmPressureAbs_Z (203.015) is specified in [02]. In Standard Mode, DPT_Value_Pres (9.006) shall be used.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 15 f 38

|FB: APS|Col2|Property Name (Server): PressureCOVCondition|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Mandatory<br>Optional|Col17|Col18|Col19|Col20|Col21|Col22|Col23|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|Deltapressure value for COV condition|
|**DPT:**|Name|Name|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT_AtmPressureAbs_Z|DPT ID|203.015|203.015|203.015|203.015|203.015|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U16Z8|U16Z8|U16Z8|U16Z8|
|Field|Field|Field|Field|Description|Description|Description|Description|Description|Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|
|AtmospericPressure|AtmospericPressure|AtmospericPressure|AtmospericPressure|pressure COV value|pressure COV value|pressure COV value|pressure COV value|pressure COV value|pressure COV value||||Full<br>Range|Full<br>Range|Full<br>Range|Full<br>Range|Full<br>Range|mbar|mbar|0,2 mbar*)|0,2 mbar*)|0,2 mbar*)|
|STATUS<br>- all bits<br>COMMAND<br>- NormalWrite<br>- all other commands|STATUS<br>- all bits<br>COMMAND<br>- NormalWrite<br>- all other commands|STATUS<br>- all bits<br>COMMAND<br>- NormalWrite<br>- all other commands|STATUS<br>- all bits<br>COMMAND<br>- NormalWrite<br>- all other commands|not supported, fixed to '0'<br>not supported|not supported, fixed to '0'<br>not supported|not supported, fixed to '0'<br>not supported|not supported, fixed to '0'<br>not supported|not supported, fixed to '0'<br>not supported|not supported, fixed to '0'<br>not supported|NA<br>M <br>NA|NA<br>M <br>NA|NA<br>M <br>NA|enum<br>0|enum<br>0|enum<br>0|enum<br>0|enum<br>0|Bitset|Bitset|false<br>cs|false<br>cs|false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|**DP Address:**<br>**(in the server)**|**DP Address:**<br>**(in the server)**|**DP Address:**<br>**(in the server)**|**DP Address:**<br>**(in the server)**|**DP Address:**<br>**(in the server)**|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>112<br>Start-Index:<br>1 <br>N° of elements<br>1|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|||||||||
|**Protection**|**Protection**|**Protection**|**Protection**|**Protection**|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|Read level<br>- <br>Write level<br>-|
|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value|**Exception Handling: ** <br>Value after Power-up:  Stored Value||Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value|||
|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|<br>  <br> <br> <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|


-----

###### 2.1.6.5 Parameter PressureHeartbeat

**FB:** **APS** **Property Name (Server):** **PressureHeartbeat** Mandatory
Optional
**Description:**

The time duration for retransimission of the sensor value if no COV condition occurred before.
**DPT:** Name DPT_TimePeriodSec DPT ID 7.005 Datatype format U16
Field Description Sup. Range Unit Default
Time period Period for latest retransmission of [0, MinRepTime ... 65535] [1)] s 900 [2)]
sensor value

**Communication:**

**DP Address:** IO Type(ID): 1013 (APS) Property ID: 115
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**

1) 0 = no heartbeat; heartbeats smaller than MinRepTime not applicable
2) The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different
than the recommended value given here.

###### 2.1.6.6 Parameter PressureMinRepTime

**FB:** **APS** **Property Name (Server):** **PressureMinRepTime** Mandatory
Optional
**Description:**

Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.
**DPT:** Name DPT_TimePeriodSec DPT ID 7.005 Datatype format U16
Field Description Sup. Range Unit Default
Time period Period for earliest retransmission of sensor [0 ... Heartbeat] [1)] s 10 [2)]
value

**Communication:**

**DP Address:** IO Type(ID): 1013 (APS) Property ID: 116
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**

1) 0 = no minimum repetition time (not recommended when using small COV condition); minimum
repetition time greater than Heartbeat not applicable.
2) The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different
than the recommended value given here.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 16 f 38

|FB: APS|Col2|Property Name (Server): PressureHeartbeat|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Mandatory<br>Optional|Col13|Col14|Col15|Col16|Col17|Col18|Col19|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**APS**|**FB:**<br>**APS**|**Property Name (Server): **<br>**PressureHeartbeat**|**Property Name (Server): **<br>**PressureHeartbeat**|**Property Name (Server): **<br>**PressureHeartbeat**|**Property Name (Server): **<br>**PressureHeartbeat**|**Property Name (Server): **<br>**PressureHeartbeat**|**Property Name (Server): **<br>**PressureHeartbeat**|**Property Name (Server): **<br>**PressureHeartbeat**|**Property Name (Server): **<br>**PressureHeartbeat**|**Property Name (Server): **<br>**PressureHeartbeat**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|<br>The time duration for retransimission of the sensor value if no COV condition occurred before.|
|**DPT:**|Name|Name|DPTTimePeriodSec|DPTTimePeriodSec|DPT ID|DPT ID|7.005|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U16|U16|U16|U16|U16|
|<br><br>Field|<br><br>Field|<br><br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Range <br>|Range <br>|Range <br>|Range <br>|Range <br>|Range <br>|Unit|Default <br>|Default <br>|Default <br>|Default <br>|
|Time period|Time period|Time period|Period for latest retransmission of<br>sensor value|Period for latest retransmission of<br>sensor value|Period for latest retransmission of<br>sensor value|Period for latest retransmission of<br>sensor value||[0, MinRepTime ... 65535]~~1)~~|[0, MinRepTime ... 65535]~~1)~~|[0, MinRepTime ... 65535]~~1)~~|[0, MinRepTime ... 65535]~~1)~~|[0, MinRepTime ... 65535]~~1)~~|[0, MinRepTime ... 65535]~~1)~~|s|900~~2)~~|900~~2)~~|900~~2)~~|900~~2)~~|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server) **|<br>**DP Address:**<br>**(in the server) **|<br>**DP Address:**<br>**(in the server) **|<br>**DP Address:**<br>**(in the server) **|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|IO Type(ID):<br>1013 (APS)<br>Property ID:<br>115<br>Start-Index:<br>1 <br>N° of elements<br>1|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|<br> <br>Read level<br>- <br>Write level<br>-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value||Default Value|Default Value|||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|
|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no heartbeat; heartbeats smaller than MinRepTime not applicable<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|

|FB: APS|Col2|Property Name (Server): PressureMinRepTime|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Mandatory<br>Optional|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**APS**|**FB:**<br>**APS**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|**Property Name (Server): **<br>**PressureMinRepTime**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|<br>Time duration for earliest retransmission of the sensor value even if the COV condition occurred before.|
|**DPT:**|Name|Name|DPTTimePeriodSec|DPTTimePeriodSec|DPTTimePeriodSec|DPTTimePeriodSec|DPTTimePeriodSec|DPT ID|7.005|7.005|7.005|7.005|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U16|U16|U16|U16|U16|U16|
|<br><br>Field|<br><br>Field|<br><br>Field|<br><br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Sup.|Range <br>|Range <br>|Range <br>|Range <br>|Unit|Default <br>|Default <br>|Default <br>|Default <br>|Default <br>|
|Time period|Time period|Time period|Time period|Period for earliest retransmission of sensor<br>value|Period for earliest retransmission of sensor<br>value|Period for earliest retransmission of sensor<br>value|Period for earliest retransmission of sensor<br>value|Period for earliest retransmission of sensor<br>value|Period for earliest retransmission of sensor<br>value|||||[0 ... Heartbeat]~~1)~~|[0 ... Heartbeat]~~1)~~|[0 ... Heartbeat]~~1)~~|[0 ... Heartbeat]~~1)~~|s|10~~2)~~|10~~2)~~|10~~2)~~|10~~2)~~|10~~2)~~|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server) **|<br>**DP Address:**<br>**(in the server) **|<br>**DP Address:**<br>**(in the server) **|<br>**DP Address:**<br>**(in the server) **|<br>**DP Address:**<br>**(in the server) **|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|IO Type(ID): <br>1013 (APS)<br>Property ID:<br>116<br>Start-Index:<br>1 <br>N°of elements <br>1|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|<br> <br>Read level <br>- <br>Write level <br>-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|**Special Features: **|
|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|<br>1) <br>0 = no minimum repetition time (not recommended when using small COV condition); minimum<br>repetition time greater than Heartbeat not applicable.<br>2) <br>The guidelines given under clause 2.3 “Busload” in [01] shall be considered for a value different<br>than the recommended value given here.|


-----

### 3 Logic Functions Blocks

#### 3.1 FB Scene Sensor

##### 3.1.1 Aims and objectives
###### The FB Scene Sensor shall be used to call and teach scenes in other FBs.

 The implementation of this functionality is not restricted to push buttons only. It may for instance be implemented in a larger controller, scheduler, gateway, weather station …

##### 3.1.2 Functional specification

###### 3.1.2.1 Scene Control without learning The output DP Scene Control shall allow for teaching scenes in the receivers. It is optionally allowed to support this DP limiting the functionality to solely calling scenes without teaching, under the condition that the parameter Scene Teaching Enable is implemented.

 If no scene teaching is supported or can be activated, than the DP Scene Number shall be used.

 3.1.2.2 Scene number range The number of scene numbers that can be supported is manufacturer specific.

 This range of supported scene numbers does not have to start at 0 and does not have to be continuous.

##### 3.1.3 Constraints
###### None.

##### 3.1.4 Functional Block diagram

**FB Scene Sensor**
**Inputs** **Outputs**
Scene Control (SC)
Scene Number (SN)
Scene AB Activate (SABA)
Scene AB Teach (SABT)

**additional I/Os** **Parameters**
Scene Teaching Enable (STE)
TimeLongKeypress
PBInterfNormalState
EnableBinarySceneControl
SceneNumberConfig

mandatory optional

*) _Either numbered scene control or binary scene control shall be activated. If optional binary scene_
_control function is implemented, the parameter EnableBinarySceneControl is mandatory to activate_
_binary scene control and deactivate numbered scene control and vice versa._

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 17 f 38

|1.4 Functional Block diagram|Col2|
|---|---|
|**FB Scene Sensor**|**FB Scene Sensor**|
|**Inputs**<br>**Outputs**<br>Scene Control<br>(SC) <br>Scene Number<br>(SN) <br>Scene AB Activate<br>(SABA) <br>Scene AB Teach <br>(SABT)|**Inputs**<br>**Outputs**<br>Scene Control<br>(SC) <br>Scene Number<br>(SN) <br>Scene AB Activate<br>(SABA) <br>Scene AB Teach <br>(SABT)|
|**additional I/Os**<br> <br><br><br><br>|**Parameters**|
|**additional I/Os**<br> <br><br><br><br>|Scene Teaching Enable<br>(STE)|
|**additional I/Os**<br> <br><br><br><br>|TimeLongKeypress|
|**additional I/Os**<br> <br><br><br><br>|PBInterfNormalState|
|**additional I/Os**<br> <br><br><br><br>|EnableBinarySceneControl|
|**additional I/Os**<br> <br><br><br><br>|SceneNumberConfig|
|**additional I/Os**<br> <br><br><br><br>||


-----

##### 3.1.5 Datapoint description

###### Table 1 – Datapoint overview

**Datapoint** **Description/Remarks** **Datapoint Type**

**Outputs**

Scene Control To call or teach a scene identified by the DPT_SceneControl (18.001)
contained scene number in the receiver.

Scene Number To call a scene identified by the contained DPT_SceneNumber (17.001)
scene number in the receiver.

Scene AB Activate To call one out of two scenes. DPT_Scene_AB (1.022)
Scene AB Teach To teach one out of two scenes. DPT_Scene_AB (1.022)

**Inputs**

None.

**Parameters**

Scene Teaching Enable Allows for limiting the output Scene Control DPT_Enable (1.003)
to calling scenes without learning possibility.

TimeLongKeypress Time to detect long key press to trigger the DPT_TimePeriod100Msec

(7.004)

teach-in command

                       - range: 0,3 s to 7 s

                       - resolution: 100 ms

EnableBinarySceneControl If optional binary scene control function is DPT_Enable (1.003)
implemented, this parameter is mandatory to
activate binary scene control and deactivate
numbered scene control and vice versa

                       - 0: numbered scene control

                       - 1: binary scene control

SceneNumberConfig[n] List of Scene Numbers that are supported by DPT_SceneConfig (238.001)
FB SCS.
SceneNumberConfig is a single parameter Implementation of this
or parameter set (array Property) to confi- Property (single parameter or
gure the features (scene active/inactive and array Property) depends on
teach-in feature enabled/disabled) and the the functionality of the SCS
scene number to be transmitted for each and the number of scenes to
scene: be supported by the user

                       - 1 scene number in case of single interface
push-button interface.

                       - 2 scene numbers in case of a dual
push-button interface.
n scene numbers in case of a more flexible
HMI.

PBInterfNormalState Defines normally open/closed behaviour of DPT_OpenClose (1.009)
push button interface

                       -                       - 0: open

                       -                       - 1: closed

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 18 f 38

|Datapoint|Description/Remarks|Datapoint Type|
|---|---|---|
|**Outputs**|**Outputs**|**Outputs**|
|Scene Control|To call or teach a scene identified by the<br>contained scene number inthe receiver.|DPT_SceneControl (18.001)|
|Scene Number|To call a scene identified by the contained<br>scene number inthe receiver.|DPT_SceneNumber (17.001)|
|Scene AB Activate|To callone out of two scenes.|DPT_Scene_AB(1.022)|
|Scene AB Teach|To teach one out of two scenes.|DPT_Scene_AB(1.022)|
|**Inputs**|**Inputs**|**Inputs**|
|None.|||
|**Parameters**|**Parameters**|**Parameters**|
|Scene Teaching Enable|Allows for limiting the output Scene Control<br>to calling scenes without learning possibility.|DPT_Enable (1.003)|
|TimeLongKeypress|Time to detect long key press to trigger the<br>teach-in command<br>- <br>range: 0,3 s to 7 s<br>- <br>resolution: 100 ms|DPT_TimePeriod100Msec<br>(7.004)|
|EnableBinarySceneControl|If optional binary scene control function is<br>implemented, this parameter is mandatory to<br>activate binary scene control and deactivate<br>numbered scene control and vice versa<br>- <br>0: numbered scene control<br>- <br>1:binary scene control|DPT_Enable (1.003)|
|SceneNumberConfig[n]|List of Scene Numbers that are supported by<br>FB SCS.<br>SceneNumberConfig is a single parameter<br>or parameter set (array Property) to confi-<br>gure the features (scene active/inactive and<br>teach-in feature enabled/disabled) and the<br>scene number to be transmitted for each<br>scene:<br>- <br>1 scene number in case of single<br>push-button interface.<br>- <br>2 scene numbers in case of a dual<br>push-button interface.<br>n scene numbers in case of a more flexible<br>HMI.|DPT_SceneConfig (238.001)<br>Implementation of this<br>Property (single parameter or<br>array Property) depends on<br>the functionality of the SCS<br>and the number of scenes to<br>be supported by the user<br>interface|
|PBInterfNormalState|Defines normally open/closed behaviour of<br>push button interface<br>- <br>- 0: open<br>- <br>- 1:closed|DPT_OpenClose (1.009)|


-----

##### FB Profiles

**Standard Mode**

**Features and options**

SABA _O_ _GO_ _GO_ _(GO) (GO)_
SABT _O_ _(GO) GO_ _(GO) (GO)_
SN _O_ _(GO) (GO) GO_ _(GO)_
_// Full Scene Control_
SC _O_ _(GO) (GO) (GO) GO_
IF Scene Teaching can be disabled
STE _O_ _O_ _O_ _O_ _M_
TimeLongKeypress _O_ _O_ _O_ _O_ _M_
EnableBinarySceneControl _C *)_ _C_ _C_ _C_ _C_
SceneNumberConfig _O_ _O_ _O_ _M_ _M_
PBInterfNormalState _O_ _O_ _O_ _O_ _O_

_*) If numbered scene control and binary scene controlar implemented in same FB, either of the 2 modes shall be_
_activated, the other deactivated by use of this parameter._

###### Figure 1 – FB Profiles for the FB Scene Sensor

 The FB Profiles 1 and 2 use DPT_Scene_AB for activating and teaching scenes in the receivers. The number of scenes is by this limited to two. These Outputs are mainly modelled for compatibility with E-Mode channel specifications. For S-Mode realisations, these flavours are not recommended.

 This FB Scene Sensor features a DP Scene Control, that shall allow teaching scenes in the receiver and a DP Scene Number that only supports calling scenes without teaching.

 Table 2 - Combination of mandatory Datapoints

 Combination

 Without teaching With teaching

 Datapoints 1a 1b 2a 2b

 SN M O O O

 SABA O M O M

 SC O O M O

 SABT O O O M

 The flavours 1b and 2b use DPT_Scene_AB for activating and teaching scenes in the receivers. The number of scenes is by this limited to two. These Outputs are mainly modelled for compatibility with E-Mode channel specifications. For S-Mode realisations, these flavours are not recommended.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 19 f 38

|Col1|Col2|Standard Mode|Col4|Col5|Col6|
|---|---|---|---|---|---|
|**Features and options**|**Basic FB**|**FB profile 1**|**FB profile 2**|**FB profile 3**|**FB profile 4**|
|SABA|_O _|_GO _|_GO _|_(GO) _|_(GO) _|
|<br>SABT|_O _|_(GO)_|_ GO_|_(GO) _|_(GO) _|
|SN|_O _|_(GO) _|_(GO)_|_ GO_|_(GO) _|
|_// FullScene Control _||||||
|SC|_O _|_(GO) _|_(GO) _|_(GO) _|_GO _|
|IFScene Teaching can be disabled||||||
|STE|_O _|_O _|_O _|_O _|_M _|
|TimeLongKeypress|_O _|_O _|_O _|_O _|_M _|
|EnableBinarySceneControl|_C *) _|_C _|_C _|_C _|_C _|
|SceneNumberConfig|_O _|_O _|_O _|_M _|_M _|
|PBInterfNormalState|_O _|_O _|_O _|_O _|_O _|

|Datapoints|Combination|Col3|Col4|Col5|
|---|---|---|---|---|
|**Datapoints**|**Without teaching**|**Without teaching**|**With teaching**|**With teaching**|
|**Datapoints**|**1a**|**1b**|**2a**|**2b**|
|**SN**|M|O|O|O|
|**SABA**|O|M|O|M|
|**SC**|O|O|M|O|
|**SABT**|O|O|O|M|


-----

##### 3.1.6 Detailed specification of Datapoints

###### 3.1.6.1 Output Scene Control (SC)

DP Name: Scene Control Abbr.: SC Mandatory
FB Name: FB Scene Sensor Can be internal
Description
This output shall be used to call or teach a scene identified by the contained scene number in the
receivers.
The maximal scene number that is supported is company specific.
Datapoint Type
DPT_Name: DPT_SceneControl
DPT Format: B1r1U6 DPT_ID: 18.001
Field Supp. Range Unit Default
C Shall indicate whether the contained scene M {0, 1} none None
number shall be taught or called.

SceneNumber Scene number. M cs none None
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

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 20 f 38

|DP Name:|Col2|Scene Control|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|SC|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|<br>FB Name:|<br>FB Name:|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br> <br> <br>FB Scene Sensor|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|||||
|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|
|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|<br>This output shall be used to call or teach a scene identified by the contained scene number in the<br>receivers.<br>The maximal scene number that is supported is company specific.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|DPTSceneControl|
|_<br>DPT Format:|_<br>DPT Format:|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|_<br>B1r1U6|DPTID:|DPTID:|DPTID:|DPTID:|18.001|18.001|18.001|18.001|18.001|18.001|18.001|18.001|18.001|18.001|18.001|
|Field|Field|Field|||||||||||||||||||Supp.|Supp.|Supp.|Range|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|C|C|C|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|Shall indicate whether the contained scene<br>number shallbe taught or called.|M|M|M|{0, 1}|{0, 1}|{0, 1}|none|none|none|none|None|None|None|None|None|None|
|SceneNumber|SceneNumber|SceneNumber|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|Scene number.|M|M|M|cs|cs|cs|none|none|none|none|None|None|None|None|None|None|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### 3.1.6.2 Output Scene Number (SN)

DP Name: Scene Number Abbr.: SN Mandatory
FB Name: FB Scene Sensor Can be internal
Description
This output shall be used to call a scene identified by the contained scene number in the receivers.
The maximal scene number that is supported is company specific.
Datapoint Type
DPT_Name: DPT_SceneNumber
DPT Format: r2U6 DPT_ID: 17.001
Field Supp. Range Unit Default
SceneNumber Scene number to be called cs none None
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

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 21 f 38

|DP Name:|Col2|Scene Number|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|SN|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|
|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|This output shall be used to call a scene identified by the contained scene number in the receivers.<br>The maximal scene number that is supported is company specific.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|DPTSceneNumber|
|_<br>DPT Format:|_<br>DPT Format:|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|_<br>r2U6|DPTID:|DPTID:|DPTID:|DPTID:|17.001|17.001|17.001|17.001|17.001|17.001|17.001|17.001|17.001|17.001|17.001|
|Field|Field|Field|||||||||||||||||||Supp.|Supp.|Supp.|Range|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|SceneNumber|SceneNumber|SceneNumber|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called|Scene number to be called||||cs|cs|cs|none|none|none|none|None|None|None|None|None|None|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||||
||Request|Request|Request|||<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### 3.1.6.3 Output Scene AB Activate (SABA)

DP Name: Scene AB Activate Abbr.: SABA Mandatory
FB Name: FB Scene Sensor Can be internal
Description
This Output shall be used to activate one out of two possible scenes in the receivers.
The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used
instead.
Datapoint Type
DPT_Name: DPT_Scene_AB
DPT Format: B1 DPT_ID: 1.022
Field Supp. Range Unit Default
b Shall indicate which of the scenes A or B {0, 1} none None
shall be called.

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

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 22 f 38

|DP Name:|Col2|Scene AB Activate|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|SABA|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|
|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|This Output shall be used to activate one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Number should be used<br>instead.|
|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|
|<br>DPTName:|<br>DPTName:|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|
|_<br>DPT Format:|_<br>DPT Format:|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.022|1.022|1.022|1.022|1.022|1.022|1.022|1.022|1.022|1.022|
|<br><br>Field|<br><br>Field|<br><br>Field|||||||||||||||||||<br>Supp.|<br>Supp.|<br>Supp.|<br> <br>Range|<br> <br>Range|<br> <br>Range|<br>Unit|<br>Unit|<br>Unit|Default|Default|Default|Default|Default|Default|
|<br>b|<br>b|<br>b|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.|Shall indicate which of the scenes A or B<br>shallbe called.||||<br>{0, 1}|<br>{0, 1}|<br>{0, 1}|<br>none|<br>none|<br>none|<br>None|<br>None|<br>None|<br>None|<br>None|<br>None|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:||||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:||||||||||||||||||||||
||Request|Request|Request|||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### 3.1.6.4 Output Scene AB Teach (SABT)

DP Name: Scene AB Teach Abbr.: SABT Mandatory
FB Name: FB Scene Sensor Can be internal
Description
This Output shall be used to teach one out of two possible scenes in the receivers.
The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used
instead.
Datapoint Type
DPT_Name: DPT_Scene_AB
DPT Format: B1 DPT_ID: 1.022
Field Supp. Range Unit Default
b Shall indicate which of the scenes A or B {0, 1} none none
shall be teached.

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

###### 3.1.6.5 Parameter Scene Teaching Enable (STE)

FB: Scene Sensor Property Name (Server): Scene Teaching Enable Mandatory
Optional
Description:
This parameter allows limiting the functionality of the output Scene Control to only calling scenes without
the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall
be implemented without limitation.
DPT: Name DPT_Enable DPT ID 1.003 Datatype format B1
Field Description Sup. Range Unit Default
b Setting whether teaching of scenes shall be enabled or {0, 1} none Enabled
not.

Communication:
DP Address: object_type: 403 PID: 51
(in the server) start_index: 1 nr_of_elem: 1

Property access: Read only Read/Write
Protection Read level - Write level Exception Handling: Value after Power-up: Stored Value Act Value Default Value

None.
Special Features:
None.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 23 f 38

|DP Name:|Col2|Scene AB Teach|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|SABT|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|FBScene Sensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|
|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|This Output shall be used to teach one out of two possible scenes in the receivers.<br>The use of this DP is not recommended for S-Mode applications. DP Scene Control should be used<br>instead.|
|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|
|<br>DPTName:|<br>DPTName:|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|<br>DPTSceneAB|
|_<br>DPT Format:|_<br>DPT Format:|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|__<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.022|1.022|1.022|1.022|1.022|1.022|1.022|1.022|1.022|1.022|
|<br><br>Field|<br><br>Field|<br><br>Field|||||||||||||||||||<br>Supp.|<br>Supp.|<br>Supp.|<br> <br>Range|<br> <br>Range|<br> <br>Range|<br>Unit|<br>Unit|<br>Unit|Default|Default|Default|Default|Default|Default|
|<br>b|<br>b|<br>b|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.|Shall indicate which of the scenes A or B<br>shallbe teached.||||<br>{0, 1}|<br>{0, 1}|<br>{0, 1}|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:||||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:||||||||||||||||||||||
||Request|Request|Request|||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|

|FB:|Scene Sensor|Col3|Col4|Col5|Property Name (Server):|Col7|Col8|Scene Teaching Enable|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Mandatory<br>Optional|Col18|Col19|Col20|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB:|Scene Sensor|Scene Sensor|Scene Sensor|Scene Sensor|Property Name (Server):|Property Name (Server):|Property Name (Server):|Scene Teaching Enable|Scene Teaching Enable|Scene Teaching Enable|Scene Teaching Enable|Scene Teaching Enable|Scene Teaching Enable|Scene Teaching Enable|Scene Teaching Enable|Mandatory<br>Optional|Mandatory<br>Optional|||
|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|
|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|This parameter allows limiting the functionality of the output Scene Control to only calling scenes without<br>the functionality to teach scenes. If this parameter is not implemented then the output Scene Control shall<br>be implemented without limitation.|
|DPT:|DPT:|Name|DPTEnable|DPTEnable|DPTEnable|DPTEnable|DPT ID|1.003|1.003|1.003|1.003|Datatype format|Datatype format|Datatype format|Datatype format|B1|B1|B1|B1|
|Field|Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Unit|Unit|Default|Default|Default|
|b|b|Setting whether teaching of scenes shall be enabled or<br>not.|Setting whether teaching of scenes shall be enabled or<br>not.|Setting whether teaching of scenes shall be enabled or<br>not.|Setting whether teaching of scenes shall be enabled or<br>not.|Setting whether teaching of scenes shall be enabled or<br>not.|Setting whether teaching of scenes shall be enabled or<br>not.|Setting whether teaching of scenes shall be enabled or<br>not.|Setting whether teaching of scenes shall be enabled or<br>not.|Setting whether teaching of scenes shall be enabled or<br>not.||||{0, 1}|none|none|Enabled|Enabled|Enabled|
|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|<br>Communication:|
|<br>DP Address:<br>(in the server)|<br>DP Address:<br>(in the server)|<br>DP Address:<br>(in the server)|<br>DP Address:<br>(in the server)|objecttype:|objecttype:|objecttype:|403|403|403|PID:|PID:|PID:|PID:|PID:|51|51|51|51|51|
|<br>DP Address:<br>(in the server)|<br>DP Address:<br>(in the server)|<br>DP Address:<br>(in the server)|<br>DP Address:<br>(in the server)|_<br>start_index:|_<br>start_index:|_<br>start_index:|<br>1|<br>1|<br>1|<br>nr_of_elem:|<br>nr_of_elem:|<br>nr_of_elem:|<br>nr_of_elem:|<br>nr_of_elem:|<br>1|<br>1|<br>1|<br>1|<br>1|
|Property access:|Property access:|Property access:|Property access:|<br>Read only|<br>Read only||<br>Read/Write|<br>Read/Write|<br>Read/Write|<br>Read/Write|<br>Read/Write|||||||||
|<br>Protection|<br>Protection|<br>Protection|<br>Protection|<br>Read level|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|Write level|Write level|Write level|Write level|Write level|-|-|-|-|-|
|Exception Handling:<br>Value after Power-up:  Stored Value<br>Act Value<br>Default Value|Exception Handling:<br>Value after Power-up:  Stored Value<br>Act Value<br>Default Value|Exception Handling:<br>Value after Power-up:  Stored Value<br>Act Value<br>Default Value|Exception Handling:<br>Value after Power-up:  Stored Value<br>Act Value<br>Default Value|Exception Handling:<br>Value after Power-up:  Stored Value<br>Act Value<br>Default Value|Exception Handling:<br>Value after Power-up:  Stored Value<br>Act Value<br>Default Value|Exception Handling:<br>Value after Power-up:  Stored Value<br>Act Value<br>Default Value|Exception Handling:<br>Value after Power-up:  Stored Value<br>Act Value<br>Default Value|Exception Handling:<br>Value after Power-up:  Stored Value<br>Act Value<br>Default Value||||||||||||
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### 3.1.6.6 Parameter TimeLongKeyPress The detailed parameter description is available in [05]

 3.1.6.7 Parameter EnableBinarySceneControl The detailed parameter description is available in [05]

 3.1.6.8 Parameter SceneNumberConfig[n] The detailed parameter description is available in [05]

 3.1.6.9 Parameter PBInterfNormalState The detailed parameter description is available in [05]

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 24 f 38


-----

#### 3.2 FB Priority Sensor

##### 3.2.1 Aims and objectives
###### The FB Priority Sensor shall be used for high priority control of any single bit state of a receiver.

 This priority control is modelled in many receiving FBs as dedicated Input.

EXAMPLE 1 FB Dimming Actuator (see [06]) features the Input Forced to allow overriding the data from lower priority Inputs
and impose the binary output state to assume the value as imposed by this DP.

##### 3.2.2 Functional specification

###### 3.2.2.1 General This FB Priority Sensor allows imposing the state of actuators that have a single bit state[ 1)] and other receivers to assume another value than the one that is given by its normal Inputs. This Input allows to override the output state of the receiver with a value that may differ from the values that would result from the Inputs that are controlled by automatic or manual control.

 This requires that the receiver differentiates between its Inputs and introduces a priority concept between them.

 3.2.2.2 Realisation The implementation of this functionality is not restricted to push buttons only. It may for instance be implemented in a larger controller, scheduler, gateway, weather station …

 In combination with the other FBs, this FB Priority Sensor will only result in the availability of the Output Force.

EXAMPLE 2 This FB can be implemented in combination with the FBs Switching Sensor Basic, Dimming Sensor Basic,
Sunblind Sensor Basic…

###### 3.2.2.3 Output Force This Output is not fixed to one single Datapoint Type; several DPTs with coding B2, as specified in clause 3.2 in [02] may make sense. Most meaningful however are the Datapoint Types as listed in Table 3.

 Table 3 – Typical use of priority control

**Datapoint Type** **Use**

2.001 DPT_Switch_Control Priority setting of lighting actuators (on/off).

2.008 DPT_Direction1_Control Priority setting of of shutters and blinds actuators
(fully up or fully down).

###### 3.2.2.4 Value of the high priority state If the priority control becomes active, then the value field of the DP Force shall have the value acccording the Parameter Control Activation Value. If this Parameter is not implemented, then the value is implementation specific.

 If the priority control is released, then the value field of the DP Force shall have the value acccording the Parameter Control Release Value. If this Parameter is not implemented, then the value is implementation specific.

1) EXAMPLE Error! Main Document Only. Off/On, Up/Down, Open/Close…

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 25 f 38

|Datapoint Type|Use|
|---|---|
|2.001<br>DPT_Switch_Control|Priority setting of lighting actuators (on/off).|
|<br>2.008<br>DPT_Direction1_Control|Priority setting of of shutters and blinds actuators<br>(fully up or fully down).|


-----

##### 3.2.3 Constraints
###### None.

##### 3.2.4 Functional Block diagram

**FB Priority Sensor**
**Inputs** **Outputs**
Force (FO)

**additional I/Os** **Parameters**
(CAV) Control Activation Value
(CRV) Control Release Value

##### 3.2.5 Datapoint description

###### Table 4 – Datapoint overview

**Datapoint** **Description/Remarks** **Datapoint Type**

**Outputs**

Force Priority control active or inactive and priority 2.nnn
value.

**Inputs**

None.

**Parameters**

Control Activation Value Defines the value of the v-field of the Output 1.nnn
Force when the priority becomes active.

Control Release Value Defines the value of the v-field of the Output 1.nnn
Force when the priority is released.

##### 3.2.6 Runtime Interworking – Dependence on Configuration Mode

**STANDARD** **EXTENDED**
**MODE** **MODE**

**Basic**

**FB**

**Inputs**

**Outputs** FO **GOb** **GOb** **GOb** NA

###### Figure 2 - Runtime Interworking – Dependence on Configuration Mode

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 26 f 38

|2.4 Functional Block diagram|Col2|
|---|---|
|**FB Priority Sensor**|**FB Priority Sensor**|
|**Inputs**<br>**Outputs**<br>Force<br>(FO)|**Inputs**<br>**Outputs**<br>Force<br>(FO)|
|**additional I/Os**|**Parameters**|
|**additional I/Os**|(CAV) <br>Control Activation Value|
|**additional I/Os**|(CRV) <br>Control Release Value|
|**additional I/Os**||

|Datapoint|Description/Remarks|Datapoint Type|
|---|---|---|
|**Outputs**|**Outputs**|**Outputs**|
|Force|Priority control active or inactive and priority<br>value.|2.nnn|
|**Inputs**|**Inputs**|**Inputs**|
|None.|||
|**Parameters**|**Parameters**|**Parameters**|
|Control Activation Value|Defines the value of the v-field of the Output<br>Force when the priority becomes active.|1.nnn|
|Control Release Value|Defines the value of the v-field of the Output<br>Force when the priority is released.|1.nnn|

|Basic<br>FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic**<br>**FB**|**Basic**<br>**FB**|**Basic**<br>**FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-Mode**|
|**Inputs**||||||
|**Outputs**|FO|**GOb **|**GOb **|**GOb **|NA|


-----

###### Table 5 - Parameters

**Parameters**
CAV **O** **O**
CRV **O** **O**

##### 3.2.7 Detailed specification of Datapoints

###### 3.2.7.1 Output Force (FO)

DP Name: Force Abbr.: FO Mandatory
FB Name: FB Priority Sensor Can be internal
Description
This Output shall be used to lock or release the binary output state in one or more receivers. In case the
output state is locked, this Output also specifies the outputs state that shall be assumed by the
receivers.
The value of the field
Datapoint Type
DPT_Name: <all DPTs of 2.nnn>
DPT Format: B2 DPT_ID: 2.nnn
Field Supp. Range Unit Default
c 0: the priority control is released M {0, 1} none none
1: the priority control is activated

v The coding of this field depends on the used M {0, 1} none none
DPT. Please refer to [02] clause 3.2.
The value can be given by the parameters
CAV and CRV.

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

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 27 f 38

|Col1|Col2|Basic FB|S-Mode|
|---|---|---|---|
|**Parameters **||||
||CAV|**O **|**O **|
||CRV|<br>**O **|<br>**O **|

|DP Name:|Col2|Force|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|FO|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|<br>   <br>   <br>Description|
|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|This Output shall be used to lock or release the binary output state in one or more receivers. In case the<br>output state is locked, this Output also specifies the outputs state that shall be assumed by the<br>receivers.<br>The value of the field|
|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|
|<br>DPTName:|<br>DPTName:|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|<br><all DPTs of 2.nnn>|
|_<br>DPT Format:|_<br>DPT Format:|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|<br>B2|DPTID:|DPTID:|DPTID:|DPTID:|2.nnn|2.nnn|2.nnn|2.nnn|2.nnn|2.nnn|2.nnn|2.nnn|2.nnn|2.nnn|
|<br><br>Field|<br><br>Field|<br><br>Field|||||||||||||||||||<br>Supp.|<br>Supp.|<br>Supp.|<br> <br>Range|<br> <br>Range|<br> <br>Range|<br>Unit|<br>Unit|<br>Unit|Default|Default|Default|Default|Default|Default|
|<br>c|<br>c|<br>c|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|0:<br>the priority control is released<br>1:<br>the priority control is activated|<br>M|<br>M|<br>M|<br>{0, 1}|<br>{0, 1}|<br>{0, 1}|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|
|v|v|v|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|The coding of this field depends on the used<br>DPT. Please refer to [02] clause 3.2.<br>The value can be given by the parameters<br>CAVand CRV.|M|M|M|{0, 1}|{0, 1}|{0, 1}|none|none|none|none|none|none|none|none|none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this → M|this → M|this → M||||this → 1|this → 1|this → 1|this → 1||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:||||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:||||||||||||||||||||||
||Request|Request|Request|||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### 3.2.7.2 Parameter Control Activation Value (CAV)

FB: FB Priority Sensor Property Name (Server): Control Activation Value Mandatory
Optional
Description:
This Parameter shall specify the value for the v-field of the Output Force in case the priority control
becomes active (c-field = 1).
Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as
used for DP Force.
EXAMPLE 3 If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be
encoded according DPT_Switch.
DPT: Name <all DPTs of 1.nnn> DPT ID 1.nnn Datatype format B1
Field Description Sup. Range Unit Default
b Value of v-field in DP Force if c-field is 1. M {0, 1} none none
Communication
DP Address: object_type: 1020 PID: 51
(in the server) start_index: 1 nr_of_elem: 1

Property access: Read only Read/Write
Protection Read level - Write level Exception Handling: Value after Power-up: Stored Value Act Value Default Value
None.
Special Features:
None.

###### 3.2.7.3 Parameter Control Release Value (CRV)

FB: FB Priority Sensor Property Name (Server): Control Release Value Mandatory
Optional
Description:
This Parameter shall specify the value for the v-field of the Output Force in case the priority control
becomes released (c-field = 0).
Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as
used for DP Force.
EXAMPLE 4 If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall
be encoded according DPT_Switch.
DPT: Name <all DPTs of 1.nnn> DPT ID 1.nnn Datatype format B1
Field Description Sup. Range Unit Default
b Value of v-field in DP Force if c-field is 0. M {0, 1} none none
Communication:
DP Address: object_type: 1020 PID: 52
(in the server) start_index: 1 nr_of_elem: 1

Property access: Read only Read/Write
Protection Read level - Write level Exception Handling:Value after Power-up: Stored Value Act Value Default Value
None.
Special Features:
None.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 28 f 38

|FB:|FB Priority Sensor|Col3|Col4|Col5|Property Name (Server):|Col7|Col8|Col9|Col10|Control Activation Value|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB:|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|Property Name (Server):|Property Name (Server):|Property Name (Server):|Property Name (Server):|Property Name (Server):|Control Activation Value|Control Activation Value|Control Activation Value|Control Activation Value|Control Activation Value|Control Activation Value|Control Activation Value|Control Activation Value|Control Activation Value|Mandatory<br>Optional|Mandatory<br>Optional|||
|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|
|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes active (c-field = 1).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 3<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall be<br>encoded according DPTSwitch.|
|DPT:|DPT:|Name|_ <br><all DPTs of 1.nnn>|_ <br><all DPTs of 1.nnn>|_ <br><all DPTs of 1.nnn>|_ <br><all DPTs of 1.nnn>|DPT ID|1.nnn|1.nnn|1.nnn|1.nnn|1.nnn|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|B1|B1|B1|B1|
|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Sup.|Sup.|Range|Range|Range|Unit|Unit|Default|Default|Default|
|b|b|Value of v-field in DP Force ifc-field is 1.|Value of v-field in DP Force ifc-field is 1.|Value of v-field in DP Force ifc-field is 1.|Value of v-field in DP Force ifc-field is 1.|Value of v-field in DP Force ifc-field is 1.|Value of v-field in DP Force ifc-field is 1.|Value of v-field in DP Force ifc-field is 1.|Value of v-field in DP Force ifc-field is 1.|Value of v-field in DP Force ifc-field is 1.|Value of v-field in DP Force ifc-field is 1.|M|M|M|{0, 1}|{0, 1}|{0, 1}|none|none|none|none|none|
|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|Communication|
|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|objecttype:|objecttype:|objecttype:|1020|1020|1020|1020|PID:|PID:|PID:|PID:|PID:|PID:|PID:|51|51|51|51|51|
|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|_<br>start_index:|_<br>start_index:|_<br>start_index:|1|1|1|1|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|1|1|1|1|1|
|Property access:|Property access:|Property access:|Property access:|Read only|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|||||||||||
|<br>Protection|<br>Protection|<br>Protection|<br>Protection|<br>Read level|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|Write level|Write level|Write level|Write level|Write level|Write level|Write level|-|-|-|-|-|
|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value|||
|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|
|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|
|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|<br>None.|

|FB:|FB Priority Sensor|Col3|Col4|Col5|Property Name (Server):|Col7|Col8|Control Release Value|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Mandatory<br>Optional|Col20|Col21|Col22|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB:|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|FB Priority Sensor|Property Name (Server):|Property Name (Server):|Property Name (Server):|Control Release Value|Control Release Value|Control Release Value|Control Release Value|Control Release Value|Control Release Value|Control Release Value|Control Release Value|Control Release Value|Control Release Value|Mandatory<br>Optional|Mandatory<br>Optional|||
|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|
|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|This Parameter shall specify the value for the v-field of the Output Force in case the priority control<br>becomes released (c-field = 0).<br>Multiple DPTs of the type B1 (see [02] clause 3.1) may apply. The precise DPT shall match the DPT as<br>used for DP Force.<br>EXAMPLE 4<br>If the Output Force is encoded according DPT_Switch_Control, then this Parameter shall<br>be encoded according DPTSwitch.|
|DPT:|DPT:|Name|_<br><all DPTs of 1.nnn>|_<br><all DPTs of 1.nnn>|_<br><all DPTs of 1.nnn>|_<br><all DPTs of 1.nnn>|DPT ID|1.nnn|1.nnn|1.nnn|1.nnn|1.nnn|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|B1|B1|B1|B1|
|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Sup.|Sup.|Range|Range|Unit|Unit|Default|Default|Default|
|b|b|Value of v-field in DP Force ifc-field is 0.|Value of v-field in DP Force ifc-field is 0.|Value of v-field in DP Force ifc-field is 0.|Value of v-field in DP Force ifc-field is 0.|Value of v-field in DP Force ifc-field is 0.|Value of v-field in DP Force ifc-field is 0.|Value of v-field in DP Force ifc-field is 0.|Value of v-field in DP Force ifc-field is 0.|Value of v-field in DP Force ifc-field is 0.|Value of v-field in DP Force ifc-field is 0.|M|M|M|{0, 1}|{0, 1}|none|none|none|none|none|
|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|
|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|objecttype:|objecttype:|objecttype:|1020|1020|1020|1020|PID:|PID:|PID:|PID:|PID:|PID:|52|52|52|52|52|
|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|_<br>start_index:|_<br>start_index:|_<br>start_index:|1|1|1|1|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|1|1|1|1|1|
|Property access:|Property access:|Property access:|Property access:|Read only|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>Protection|<br>Protection|<br>Protection|<br>Protection|<br>Read level|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|Write level|Write level|Write level|Write level|Write level|Write level|-|-|-|-|-|
|Exception Handling:Value after Power-up: Stored Value|Exception Handling:Value after Power-up: Stored Value|Exception Handling:Value after Power-up: Stored Value|Exception Handling:Value after Power-up: Stored Value|Exception Handling:Value after Power-up: Stored Value|Exception Handling:Value after Power-up: Stored Value|Exception Handling:Value after Power-up: Stored Value|Exception Handling:Value after Power-up: Stored Value|Exception Handling:Value after Power-up: Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|||
|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|<br>  <br>  <br>None.|
|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

#### 3.3 FB Lock Sensor

##### 3.3.1 Aims and objectives
###### The FB Lock Sensor shall be used to enable and disable functionality in the receivers.

 Many FBs feature an Input that allows their functionality to be enabled and disabled by this FB Lock Sensor.

EXAMPLE 5 FB Dimming Actuator (see [06]) features the Input Lock Device to freeze its output state under the control of
this FB Lock Sensor.

EXAMPLE 6 FB Dimming Actuator (see [06]) features the Parameter Scene Learning Mode Enable (accessible as Group
Object) to disable the scene learning functionality. This Parameter can be set by this FB Lock Sensor.

##### 3.3.2 Functional specification

###### 3.3.2.1 General This FB Lock Sensor shall allow making the receiver ignore accesses to its Inputs that are controlled by automatic or manual control.

NOTE Compared to the FB Priority Sensor, this FB Lock Sensors does not impose a certain value of the receiver’s Output
state.

###### This requires that the receiver differentiates between its Inputs and introduces a priority concept between them.

 3.3.2.2 Realisation The implementation of this functionality is not restricted to push buttons only. It may for instance be implemented in a larger controller, scheduler, gateway, weather station …

 In combination with the other FBs, this FB Lock Sensor will only result in the availability of the Output Lock.

EXAMPLE 7 This FB can be implemented in combination with the FBs Switching Sensor Basic, Dimming Sensor Basic,
Sunblind Sensor Basic…

###### 3.3.2.3 Output Lock This Output shall control whether the receiver is locked or not.

 3.3.2.4 Interpretation by the receiver There exists no complementary FB that specifies the communication partner for this FB Lock Sensor: this is typically realised through optional Inputs in many FBs.

 The specifications of various FBs, the reaction of the FB when the Lock state becomes enabled and the reaction when the lock state becomes disabled can be controlled through optional Parameters.

##### 3.3.3 Constraints
###### None.

##### 3.3.4 Functional Block diagram

**FB Lock Sensor**
**Inputs** **Outputs**
Lock (LO)

**additional I/Os** **Parameters**
None.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 29 f 38

|3.4 Functional Block diagram|Col2|
|---|---|
|**FB Lock Sensor**|**FB Lock Sensor**|
|**Inputs**<br>**Outputs**<br>Lock<br>(LO)|**Inputs**<br>**Outputs**<br>Lock<br>(LO)|
|**additional I/Os**<br>|**Parameters**|
|**additional I/Os**<br>|None.|
|**additional I/Os**<br>||


-----

##### 3.3.5 Datapoint description

###### Table 6 – Datapoint overview

**Datapoint** **Description/Remarks** **Datapoint Type**

**Outputs**

Lock Enables or disables the lock state of the receiver. 1.003

**Inputs**

None.

**Parameters**

None.

##### 3.3.6 Runtime Interworking – Dependence on Configuration Mode

**STANDARD** **EXTENDED**
**MODE** **MODE**

**Basic**

**FB**

**Inputs**

**Outputs** LO **GOb** **GOb** **GOb** NA

###### Figure 3 - Runtime Interworking – Dependence on Configuration Mode

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 30 f 38

|Datapoint|Description/Remarks|Datapoint Type|
|---|---|---|
|**Outputs**|**Outputs**|**Outputs**|
|Lock|Enables or disables the lock state of the receiver.|1.003|
|**Inputs**|**Inputs**|**Inputs**|
|None.|||
|**Parameters**|**Parameters**|**Parameters**|
|None.|||

|Basic<br>FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic**<br>**FB**|**Basic**<br>**FB**|**Basic**<br>**FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-Mode**|
|**Inputs**||||||
|**Outputs**|LO|**GOb **|**GOb **|**GOb **|NA|


-----

##### 3.3.7 Detailed specification of Datapoints

###### 3.3.7.1 Output Lock (LO)

DP Name: Lock Abbr.: LO Mandatory
FB Name: FB Lock Sensor Can be internal
Description
This Output shall be used to enable or disable the lock state in the receiver.
Datapoint Type
DPT_Name: DPT_Enable
DPT Format: B1 DPT_ID: 1.003
Field Supp. Range Unit Default
b 0: disables the lock state {0, 1} none none
1: enables the lock state

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

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 31 f 38

|DP Name:|Col2|Lock|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|LO|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|<br>FB Name:|<br>FB Name:|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br> <br> <br>FB Lock Sensor|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|||||
|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|
|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|<br>This Output shall be used to enable or disable the lock state in the receiver.|
|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|
|<br>DPTName:|<br>DPTName:|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|
|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.003|1.003|1.003|1.003|1.003|1.003|1.003|1.003|1.003|1.003|1.003|
|<br><br>Field|<br><br>Field|<br><br>Field|||||||||||||||||||<br>Supp.|<br>Supp.|<br>Supp.|<br> <br>Range|<br> <br>Range|<br> <br>Range|<br>Unit|<br>Unit|<br>Unit|<br>Unit|Default|Default|Default|Default|Default|Default|
|<br>b|<br>b|<br>b|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state|0:<br>disables the lock state<br>1:<br>enables the lock state||||<br>{0, 1}|<br>{0, 1}|<br>{0, 1}|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

#### 3.4 FB Timed Sensor

##### 3.4.1 Aims and objectives
###### The FB Timed Sensor shall be used to trigger a timer in the receiver. Optionally, it can also be used to stop this timer.

EXAMPLE 8 The lighting actuators (see [06]) features an Input Timed Start Stop that can be accessed to switch on the light,
after which the actuator switches off the light autonomously after a timer has expired.

###### The use of this FB Timed Sensor is not limited to the application domain of lighting.

EXAMPLE 9 In a rest room, a light switch may incorporate this FB Timed Sensor. By this, when switching the light, it can
trigger the operation of a ventilator for a certain period.

##### 3.4.2 Functional specification

###### 3.4.2.1 General This FB Timed Sensor shall allow triggering a timer in the receiver. This FB TSS models the communication partner for many FBs featuring an Input “Timed Start Stop” (or similar).

 Furthermore, it allows redirecting data received from a sender that does not support timing, via the Input On Off In (OOI) either unchanged to the Output On Off Out (OOO) or the Output Timed Start Stop (TSS) under the control of the Input Timed Mode (TM). In this, the value received on OOI shall not be modified.

 If the realisation of this FB features a HMI, then this HMI and the Input OOI shall not influence each other in either way. The value of OOI shall be passed unchanged to either Output OOI or TSS regardless of the last operation to the HMI. In the same way, the operation of the HMI is not changed (e.g. not inverted) in function of any reception of the Input OOI.

 3.4.2.2 Timed Mode The Input Timed Mode allows selecting either one of the Outputs TSS or OOO to be used. If one Output is activated the other Output shall be deactivated.

**Timed Mode** **Outputs**

Active The Output Timed Start Stop shall be used.
The Output On Off Out shall not be used.

Inactive The Output Timed Start Stop shall not be used.
The Output On Off Out shall be used.

###### It shall thus not be possible to use the Outputs TSS and OOO at the same time.

 3.4.2.3 Realisation The implementation of this functionality is not restricted to push buttons only. It may for instance be implemented in a larger controller, scheduler, gateway, weather station …

 In combination with other FBs, this FB Timed Sensor will only result in the availability of the Output Timed Start Stop.

EXAMPLE 10 This FB can be implemented in combination with the FBs Switching Sensor Basic, Dimming Sensor Basic.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 32 f 38

|Timed Mode|Outputs|
|---|---|
|Active|The Output Timed Start Stop shall be used.<br>The Output On Off Out shall not be used.|
|Inactive|The Output Timed Start Stop shall not be used.<br>The Output On Off Out shall be used.|


-----

###### 3.4.2.4 Interpretation by the receiver There exists no complementary FB that specifies the communication partner for this FB Timed Sensor: this is typically realised through optional Inputs in many FBs.

 The functionality depends on the receiver. In general, the receiver performs a certain action when the timer starts and again takes some action, e.g. an action complementary to the first one, when the timer expires.

 In the specifications of various FBs, the reaction of the FB on reception of an access to the corresponding Input may be controlled through parameters.

EXAMPLE 11 The Parameter Timed On Retrigger Function in the Light Switching Actuator Basic (see [06]) may control
whether or not the timer in the receiver can be retriggered by a subsequent access to the Input Timed Start Stop or not.

###### The reaction of the receiver on reception of the value “Stop” on its Input may or may not be identical to the reaction when the timer simply expires. This can again be influenced by parameters.

##### 3.4.3 Constraints
###### This FB Timed Sensor only uses a single bit DPT_Start that does not contain any information concerning the timer period in the receiver. This may only be controlled through a parameter in the receiver.

 The Datapoints OOI and TM are optional. They can however only be implemented if the DP OOO is implemented.

##### 3.4.4 Functional Block diagram

**FB Timed Sensor**
**Inputs** **Outputs**
OnOffIn (OOI) Timed Start Stop (TSS)
TimedMode (TM) OnOffOut (OOO)

**additional I/Os** **Parameters**
Enable Sending Stop (ESS)

##### 3.4.5 Datapoint description

###### Table 7 – Datapoint overview

**Datapoint** **Description/Remarks** **Datapoint Type**

**Outputs**

Timed Start Stop This Output shall be used to trigger the timing 1.010 DPT_Start
function in the receiver.

On Off Out This Output shall be used to directly control the 1.001 DPT_Switch
output of the receiver, without timer.

**Inputs**

On Off In Commands to be directly sent on the OOO or to 1.001 DPT_Switch
be transformed as a TSS in timed mode.

Timed Mode To set the timed mode or normal mode. 1.011 DPT_State

**Parameters**

Enable Sending Stop Shall allow extending the values of the Output 1.003 DPT_Enable
Timed Start Stop from only 1 to both 0 and 1.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 33 f 38

|4.4 Functional Block diagram|Col2|
|---|---|
|**FB Timed Sensor**|**FB Timed Sensor**|
|**Inputs **<br>**Outputs**<br>OnOffIn<br>(OOI)<br>Timed Start Stop <br>(TSS)|**Inputs **<br>**Outputs**<br>OnOffIn<br>(OOI)<br>Timed Start Stop <br>(TSS)|
|OnOffIn<br>(OOI)|Timed Start Stop <br>(TSS)|
|TimedMode <br>(TM)|OnOffOut<br>(OOO)|

|additional I/Os|Parameters|
|---|---|
|**additional I/Os**<br>|Enable Sending Stop <br>(ESS)|
|**additional I/Os**<br>||

|Datapoint|Description/Remarks|Datapoint Type|
|---|---|---|
|**Outputs**|**Outputs**|**Outputs**|
|Timed Start Stop|This Output shall be used to trigger the timing<br>function inthe receiver.|1.010 DPT_Start|
|On Off Out|This Output shall be used to directly control the<br>output of the receiver, without timer.|1.001 DPT_Switch|
|**Inputs**|**Inputs**|**Inputs**|
|On Off In|Commands to be directly sent on the OOO or to<br>be transformed as a TSS intimed mode.|1.001 DPT_Switch|
|Timed Mode|To set the timed mode or normal mode.|1.011 DPT_State|
|**Parameters**|**Parameters**|**Parameters**|
|Enable Sending Stop|Shall allow extending the values of the Output<br>Timed Start Stop from only 1to both 0 and 1.|1.003 DPT_Enable|


-----

##### 3.4.6 Runtime Interworking – Dependence on Configuration Mode

**STANDARD** **EXTENDED**

**MODE** **MODE**

**Basic**

**FB**

**Inputs** OOI **(GOb)** **(GOb)** **(GOb)** NA

TM **(GOb)** **(GOb)** **(GOb)** NA

**Outputs** TSS **GOb** **GOb** **GOb** NA

OOO **(GOb)** **(GOb)** **(GOb)** NA

###### Figure 4 - Runtime Interworking – Dependence on Configuration Mode

 Table 8 - Parameters

**Parameters**
ESS **O** **O**

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 34 f 38

|Basic<br>FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic**<br>**FB**|**Basic**<br>**FB**|**Basic**<br>**FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-Mode**|
|**Inputs**|OOI|**(GOb) **|**(GOb)**|**(GOb) **|NA|
|**Inputs**|TM|**(GOb) **|**(GOb) **|**(GOb) **|NA|
|**Outputs**|TSS|**GOb **|**GOb **|**GOb **|NA|
|**Outputs**|OOO|**(GOb) **|**(GOb) **|**(GOb) **|NA|

|Col1|Col2|Basic FB|S-Mode|
|---|---|---|---|
|**Parameters **||||
||ESS|**O **|**O **|


-----

##### 3.4.7 Detailed specification of Datapoints

###### 3.4.7.1 Output Timed Start Stop (TSS)

DP Name: Timed Start Stop Abbr.: TSS Mandatory
FB Name: Timed Sensor Can be internal
Description
This Output shall be used to trigger the timing function in the receiver.
If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is
implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1
(= “Start”).
If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may
transmit both values 0 (= “Stop”) and 1 (= “Start”).
Datapoint Type
DPT_Name: DPT_Start
DPT Format: B1 DPT_ID: 1.010
Field Supp. Range Unit Default
b 0: shall be used to request to stop the timer {0, 1} none none
in the receiver
1: shall be used to request to start the timer
in the receiver

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

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 35 f 38

|DP Name:|Col2|Timed Start Stop|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|TSS|Col23|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|<br>FB Name:|<br>FB Name:|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br> <br> <br>Timed Sensor|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|<br>Can be internal|||||
|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|<br> <br> <br>Description|
|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|<br>This Output shall be used to trigger the timing function in the receiver.<br>If the parameter Enable Sending Stop is not implemented or the parameter Enable Sending Stop is<br>implemented and has the value “Disable”, then this Output shall only be transmitted with the value 1<br>(= “Start”).<br>If the parameter Enable Sending Stop is implemented and has the value “Enable” then this Output may<br>transmit both values 0 (= “Stop”) and 1 (= “Start”).|
|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|<br>Datapoint Type|
|<br>DPTName:|<br>DPTName:|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|<br>DPTStart|
|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|DPTID:|1.010|1.010|1.010|1.010|1.010|1.010|1.010|1.010|1.010|1.010|1.010|
|<br><br>Field|<br><br>Field|<br><br>Field|||||||||||||||||||<br>Supp.|<br>Supp.|<br>Supp.|<br> <br>Range|<br> <br>Range|<br> <br>Range|<br>Unit|<br>Unit|<br>Unit|<br>Unit|Default|Default|Default|Default|Default|Default|
|<br>b|<br>b|<br>b|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver|0:<br>shall be used to request to stop the timer<br>in the receiver<br>1:<br>shall be used to request to start the timer<br>inthe receiver||||<br>{0, 1}|<br>{0, 1}|<br>{0, 1}|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|<br>none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1|||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
||||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:|||||||||||||||||||||||
||Request|Request|Request||||||||||||||||||||||||||||||||||
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:||||||||||||||||||||||||||||||
|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|<br>Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:|||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### 3.4.7.2 Output On Off Out (OOO)

DP Name: On Off Out Abbr.: OOO Mandatory
FB Name: Timed Sensor Can be internal
Description
This Output will be used by the FB Timed Sensor if the timed mode is inactive.
Datapoint Type
DPT_Name: DPT_Switch
DPT Format: B1 DPT_ID: 1.001
Field Supp. Range Unit Default
b This field shall indicate whether the switching {0, 1} none none
actuator will switch on (1) or off (0).

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

Special Features

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 36 f 38

|DP Name:|Col2|On Off Out|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Abbr.:|Col17|Col18|Col19|Col20|OOO|Col22|Col23|Col24|Mandatory|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|
|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|This Output willbe used by the FB Timed Sensor ifthe timed mode is inactive.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|
|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|
|Field|Field||||||||||||||||||||_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|b|b|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|This field shall indicate whether the switching<br>actuator willswitch on (1) or off(0).|||{0, 1}|{0, 1}|none|none|none|none|none|none|none|none|none|none|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|♦ Output|
||this→ M|this→ M||||this→ 1|this→ 1|this→ 1|this→ 1||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous||||<br>COV:|<br>COV:|<br>COV:|<br>COV:||||Δ-Value:|||||||||Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|Min repetition time:|||||||||
|||||||<br>Cyclic|<br>Cyclic|<br>Cyclic|<br>Cyclic|||<br>|<br> Period:||||||||||||||||||||||
||Request|Request|||<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|<br>|
|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|<br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
|||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
||||||||||||||||||||||||||||||||||||
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
||||||||||||||||||||||||||||||||||||


-----

###### 3.4.7.3 Input On Off In (OOI)

DP Name: On Off In Abbr.: OOI Mandatory
FB Name: Timed Sensor Can be internal
Description
This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the
value of the Input Timed Mode.
Datapoint Type
DPT_Name: DPT_Switch
DPT Format: B1 DPT_ID: 1.001
Field Supp. Range Unit Default
b Contains the value to be forwarded to the Output {0, 1} none none
Timed Start Stop or the Output On Off Out.

Access Type
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out:
Request Polling: Period:
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

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 37 f 38

|DP Name:|Col2|On Off In|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|Col22|OOI|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|
|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|This is the value that shall be sent on the Output Timed Start Stop or Output On Off Out, according the<br>value of the Input Timed Mode.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|DPTSwitch|
|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|1.001|
|Field|Field||||||||||||||||||||||_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|b|b|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|Contains the value to be forwarded to the Output<br>Timed Start Stop or the Output On Off Out.|||{0, 1}|{0, 1}|none|none|none|none|none|none|none|none|none|none|none|
|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|<br>Access Type|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|||||||1 → this|1 → this|1 → this|1 → this|1 → this||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|||||||||Time-out:|Time-out:|Time-out:|Time-out:|||||||||||
||Request|Request|Request|Request||||||||Polling:|Polling:|Polling:|Polling:|||||||||Period:|Period:|Period:|Period:|||||||||||
|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

###### 3.4.7.4 Input Timed Mode (TM)

DP Name: Timed Mode Abbr.: TM Mandatory
FB Name: Timed Sensor Can be internal
Description
This Input activates or inactivates the Timed Mode of the Timed Sensor.
Datapoint Type
DPT_Name: DPT_State
DPT Format: B1 DPT_ID: 1.011
Field Supp. Range Unit Default

b 0 Timed Mode is inactive. The Output On Off {0, 1} none 1
Out is used.
1 Timed Mode is active. The Output Timed
Start Stop is used.

Access Type
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out:
Request Polling: Period:
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

###### 3.4.7.5 Parameter Enable Sending Stop

FB: Timed Sensor Property Name (Server): Enable Sending Stop Mandatory
Optional
Description:
This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or
both 1 (= “Start”) as well as 0 (= “Stop”).
DPT: Name DPT_Enable DPT ID 1.003 Datatype format B1
Field Description Sup. Range Unit Default
b 0: the Output Timed Start Stop shall only have the M {0, 1} none none
value 1 (= “Start”)
1: the Output Timed Start Stop may have both the
values 1 (= “Start”) as well as 0 (= “Stop”)

Communication:
DP Address: object_type: 406 PID: 51
(in the server) start_index: 1 nr_of_elem: 1

Property access: Read only Read/Write
Protection Read level - Write level Exception Handling: Value after Power-up: Stored Value Act Value Default Value
None.
Special Features:
None.

© C i h 2006 2014 KNX A i i A li i D i i AS 01 02 02 38 f 38

|DP Name:|Col2|Timed Mode|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Abbr.:|Col18|Col19|Col20|Col21|Col22|TM|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|||||
|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|<br>  <br>   <br>Description|
|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|This Input activates or inactivates the Timed Mode of the Timed Sensor.|
|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|Datapoint Type|
|DPTName:|DPTName:|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|DPTState|
|_<br>DPT Format:|_<br>DPT Format:|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|_<br>B1|DPTID:|DPTID:|DPTID:|1.011|1.011|1.011|1.011|1.011|1.011|1.011|1.011|1.011|1.011|1.011|1.011|
|Field|Field||||||||||||||||||||||_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|Default|
|b|b|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|0 <br>Timed Mode is inactive. The Output On Off<br>Out is used.<br>1 <br>Timed Mode is active. The Output Timed<br>Start Stop is used.|||{0, 1}|{0, 1}|none|none|none|none|none|1|1|1|1|1|1|
|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|Access Type|
|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|♦ Input|
||N → this|||||||1 → this|1 → this|1 → this|1 → this|1 → this||||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous||||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|||||||||Time-out:|Time-out:|Time-out:|Time-out:|||||||||||
||Request|Request|Request|Request||||||||Polling:|Polling:|Polling:|Polling:|||||||||Period:|Period:|Period:|Period:|||||||||||
|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|<br> <br> <br>Communication Type|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|Mandatory:||||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|||||||||||||||||||||||||||||||
|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|Dynamics|
||Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:||||||
||||||||||Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|Saved value:|||||Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):|Current value (not for input):||||||
|||||Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|Transmit on bus (only for output):|||||Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):|Read from bus (only for input):||||||
|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|<br>      <br>Exception Handling|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|
|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|Special Features|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|

|FB:|Timed Sensor|Col3|Col4|Col5|Property Name (Server):|Col7|Col8|Enable Sending Stop|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Mandatory<br>Optional|Col19|Col20|Col21|Col22|Col23|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB:|Timed Sensor|Timed Sensor|Timed Sensor|Timed Sensor|Property Name (Server):|Property Name (Server):|Property Name (Server):|Enable Sending Stop|Enable Sending Stop|Enable Sending Stop|Enable Sending Stop|Enable Sending Stop|Enable Sending Stop|Enable Sending Stop|Enable Sending Stop|Enable Sending Stop|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|||
|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|<br>Description:|
|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|This parameter shall allow limiting the values of the output Timed Start Stop to either only 1 (= “Start”) or<br>both 1(= “Start”) as wellas 0 (= “Stop”).|
|DPT:|DPT:|Name|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|<br>DPTEnable|DPT ID|1.003|1.003|1.003|1.003|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|B1|B1|B1|B1|B1|B1|
|Field|Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Unit|Unit|Default|Default|Default|Default|Default|
|b|b|0:<br>the Output Timed Start Stop shall only have the<br>value 1 (= “Start”)<br>1:<br>the Output Timed Start Stop may have both the<br>values 1(= “Start”) as wellas 0 (= “Stop”)|0:<br>the Output Timed Start Stop shall only have the<br>value 1 (= “Start”)<br>1:<br>the Output Timed Start Stop may have both the<br>values 1(= “Start”) as wellas 0 (= “Stop”)|0:<br>the Output Timed Start Stop shall only have the<br>value 1 (= “Start”)<br>1:<br>the Output Timed Start Stop may have both the<br>values 1(= “Start”) as wellas 0 (= “Stop”)|0:<br>the Output Timed Start Stop shall only have the<br>value 1 (= “Start”)<br>1:<br>the Output Timed Start Stop may have both the<br>values 1(= “Start”) as wellas 0 (= “Stop”)|0:<br>the Output Timed Start Stop shall only have the<br>value 1 (= “Start”)<br>1:<br>the Output Timed Start Stop may have both the<br>values 1(= “Start”) as wellas 0 (= “Stop”)|0:<br>the Output Timed Start Stop shall only have the<br>value 1 (= “Start”)<br>1:<br>the Output Timed Start Stop may have both the<br>values 1(= “Start”) as wellas 0 (= “Stop”)|0:<br>the Output Timed Start Stop shall only have the<br>value 1 (= “Start”)<br>1:<br>the Output Timed Start Stop may have both the<br>values 1(= “Start”) as wellas 0 (= “Stop”)|0:<br>the Output Timed Start Stop shall only have the<br>value 1 (= “Start”)<br>1:<br>the Output Timed Start Stop may have both the<br>values 1(= “Start”) as wellas 0 (= “Stop”)|0:<br>the Output Timed Start Stop shall only have the<br>value 1 (= “Start”)<br>1:<br>the Output Timed Start Stop may have both the<br>values 1(= “Start”) as wellas 0 (= “Stop”)|M|M|M|{0, 1}|{0, 1}|none|none|none|none|none|none|none|
|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|Communication:|
|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|objecttype:|objecttype:|objecttype:|406|406|406|406|PID:|PID:|PID:|PID:|PID:|51|51|51|51|51|51|51|
|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|DP Address:<br>(in the server)|_<br>start_index:|_<br>start_index:|_<br>start_index:|1|1|1|1|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|nr_of_elem:|1|1|1|1|1|1|1|
|Property access:|Property access:|Property access:|Property access:|Read only|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||||
|<br>Protection|<br>Protection|<br>Protection|<br>Protection|<br>Read level|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|Write level|Write level|Write level|Write level|Write level|-|-|-|-|-|-|-|
|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value|Exception Handling: Value after Power-up: Stored Value||Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value|||||
|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|<br>   <br>  <br>None.|
|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|Special Features:|
|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|None.|


-----

