# Application Descriptions

## Terminal Unit Functional Blocks

 Energy Demand Transformer Functional Blocks

###### Summary:

 This document is part of the HVAC Application Interworking Standard for HVAC applications. This Chapter describes the Terminal Unit Energy Demand Transformer Functional Blocks.

 Version 02.04.02 is a KNX Approved Standard.

 This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

001.18 2001.xx.xx Excerpt from former document TU_FB_17B
Adapted to the Template

001.19-20 --- Stepwise completion
001.21 2002.04.19 Document completed and ready for TFI presentation
001.22 2002.07.17 all FB’s Property access in Diagnostic Data corrected
3.2.6.5, 3.3.6.5, 3.4.6.5, 3.5.6.5
attribute “demand from room control” corrected
3.5.5 Description of DistrSegm corrected
3.6.6.2, 3.6.6.6
DP Address corrected
2.00 2002.11.29 Header and footer adapted
Version adapted
3.4.6.5, 3.5.6.5
Default attributes 6 and 7 corrected
3.2.6.6, 3.3.6.6, 3.4.6.6, 3.5.6.6
Zone range corrected
2.01 2003.08.15 --2.02 2004.01.15 --2.03 2006.01.09 BKY: inclusion of new attribute EmergDem and DHWLegioReq in
DPT_TempFlowWaterDemAbs (210.100)
2.3 2009.06.18 Update in view of publication in the KNX Specifications v2.0.
2.4.00 2010.11.24  - VDTTU: added Parameters TempSupplyAirSetpMin and
TempSupplyAirSetpMax.
2.4.01 2010.11.29  - VDTTU: Update of PID-values for Parameters
TempSupplyAirSetpMin and TempSupplyAirSetpMax.
02.04.02 2013.10.29 Editorial updates for the publication of KNX Specifications 2.1.

#### References

[01] Chapter 3/7/2 “Datapoint Types”

[02] Chapter 7/10/1 “HVAC Sensor Functional Blocks”

[03] Chapter 7/10/2 “HVAC HMI Functional Blocks”

[04] Chapter 7/10/3 “HVAC Actuator Functional Blocks”

[05] Chapter 7/10/4 “HVAC Common Functional Blocks”

[06] Chapter 7/10/5 “HVAC Scheduler Functional Blocks”

[07] Part 7/11 “Hot Water Heating - Introduction”

[08] Part 7/12 “Direct Electric Heating”

[09] Part 7/13 “Terminal Unit Functional Blocks”

[10] Chapter 7/13/1 “Terminal Unit Controller”

[11] Part 7/14 “Ventilation & Air Conditioning and Cold Water”

[12] Part 10/1 “Logical Tag Extended”

Filename: 07_13_02 TU FB Transformer v02.04.02 AS.docx
Version: 02.04.02
Status: Approved Standard
Savedate: 2013.10.29
Number of pages: 82

|Version|Date|Modifications|
|---|---|---|
|001.18|2001.xx.xx|Excerpt from former document TU_FB_17B<br>Adapted to the Template|
|001.19-20|---|Stepwise completion|
|001.21|2002.04.19|Document completed and ready for TFIpresentation|
|001.22|2002.07.17|all FB’s Property access in Diagnostic Data corrected<br>3.2.6.5, 3.3.6.5, 3.4.6.5, 3.5.6.5<br>attribute “demand from room control” corrected<br>3.5.5<br>Description of DistrSegm corrected<br>3.6.6.2, 3.6.6.6<br>DP Address corrected|
|2.00|2002.11.29|Header and footer adapted<br>Version adapted<br>3.4.6.5, 3.5.6.5<br>Default attributes 6 and 7 corrected<br>3.2.6.6, 3.3.6.6, 3.4.6.6, 3.5.6.6<br>Zone range corrected|
|2.01|2003.08.15|---|
|2.02|2004.01.15|---|
|2.03|2006.01.09|BKY: inclusion of new attribute EmergDem and DHWLegioReq in<br>DPT_TempFlowWaterDemAbs (210.100)|
|2.3|2009.06.18|<br>Update in view of publication inthe KNXSpecifications v2.0.|
|2.4.00|2010.11.24|• <br>VDTTU: added Parameters TempSupplyAirSetpMin and<br>TempSupplyAirSetpMax.|
|2.4.01|2010.11.29|• <br>VDTTU: Update of PID-values for Parameters<br>TempSupplyAirSetpMinand TempSupplyAirSetpMax.|
|02.04.02|2013.10.29|Editorial updates for the publication of KNXSpecifications 2.1.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4 1.2 Objectives ....................................................................................................................... 4 1.3 Dependence on Configuration Modes ............................................................................ 5 1.4 Glossary .......................................................................................................................... 7 1.5 Abbreviations .................................................................................................................. 7

 2 Formal matters ....................................................................................................................... 9 2.1 Introduction to Functional Blocks .................................................................................. 9 2.2 Description of Functional Blocks ................................................................................... 9

 3 Terminal Unit Energy Demand Transformer Functional Blocks ................................... 13 3.1 Introduction to TU Energy Demand Transformer Functional Blocks .......................... 13 3.2 Radiator Heating Energy Demand Transformer TU (RHDTTU) ................................. 13 3.3 Chilled Ceiling Energy Demand Transformer TU (CCDTTU) .................................... 25 3.4 Air Heater Energy Demand Transformer TU (AHDTTU) ........................................... 37 3.5 Air Cooler Energy Demand Transformer TU (ACDTTU) ........................................... 49 3.6 Ventilation Demand Transformer TU (VDTTU) ......................................................... 61 3.7 Collection and Processing of Demand Information in LTE-HEE ................................ 81


-----

### 1 Introduction

#### 1.1 Scope
###### This document is part of the KNX HVAC Application Interworking Standard. It contains the specification of the Terminal Unit Energy Demand Transformer Functional Blocks used for HVAC applications.

 Other general purpose Functional Blocks used for HVAC applications such as 'HVAC Sensors' [02], 'HVAC HMI' [03], 'HVAC Actuators' [04], 'HVAC Common Functions' [05] and 'HVAC Schedulers'
 [06] are described in separate documents.

 The Functional Blocks of the 'TU Controllers' [10] are described in a separate document.

 Functional Block specification for the applications 'Hot Water Heating' (HWH) [07], 'Direct Electric Heating' (DEH) [08] and 'Ventilation & Air Conditioning' (VAC) [11] are described in separate documents.

#### 1.2 Objectives
###### This document includes the information necessary to build interoperable HVAC products using the KNX system. Runtime process interworking between HVAC control devices at the application level is the focus. Also data-interfaces for parameter setting, visualisation etc. are specified where appropriate (only state of the art datapoints generally used in all companies).

 In addition, this document specifies the specific mechanisms for zoning and runtime process data distribution used in HVAC for an ‘easy installation’ system (LTE-HEE Mode [12] ).

 This is a technical specification with informative material provided as needed to convey key concepts. The approach taken here is a top-down view of interoperability. The HVAC system model is based on the decomposition of the distributed HVAC application by means of Functional Blocks, i.e. black-box description of Functional Blocks including data-interface and relationship to other Functional Blocks.

 Every Functional Block may be part of a complex device (e.g. a heating controller) containing more than one Functional Block. Because of this modular approach, apart of some examples, there is no attempt in this specification to describe or dictate the internal construction of a Functional Block or to describe specific device types.

 This document only includes details of the transport protocol as needed to specify interoperability and easy installation mechanisms. The document does not specifically cover implementation aspects, but guidelines are included where appropriate.

 This part of the KNX HVAC specification is mainly but not completely independent of the underlying protocol since specific mechanisms for “easy configuration” and runtime data distribution must be available on the network.

 Completely protocol dependent parts of the HVAC Specification such as data encoding and datapoint- types, object address tables, group address tables etc. are not part of this document. 


-----

#### 1.3 Dependence on Configuration Modes
###### The main focus of this document is the specification of the Basic Functional Blocks and the LTE specific parts. 

 The document provides all necessary information needed:
 • for a complete implementation of the Functional Blocks in LTE mode
 • for the implementation of mandatory objects used for runtime interworking in standard mode (Basic Functional Block)

##### 1.3.1 Runtime Interworking
###### Mode dependent (S, LT-R, LT-S, Ctrl, PB, A) implementation of optional runtime interworking objects is not specified in this document, e.g. “easy channel” definitions.
 The following table (example) shows the mode dependencies concerning runtime interworking

**STANDARD EXTENDED**

**MODE** **MODE**

**Inputs** Inp1 **NA** NA NA M

Inp2 **NA** NA NA O

Inp3 **(GOb)** (GO) O

**Outputs** Outp1 **NA** NA NA M

      - Outp1-1 **GOb** GO GO NA

      - Outp1-2 **GOb** GO GO NA

Outp 2 **GOb** GO GO M

###### Inp1: is mandatory M in LTE Mode but the information is not available NA in the Basic FB and all other modes because the datapoint type (DPT) is today not available in standard mode and there are no products on the market with this functionality. Inp2: is optional O in LTE Mode but the information is not available NA in the Basic FB and all other modes because the DPT is today not available in standard mode and there are no products on the market with this functionality. Inp3: is optional O in LTE Mode and an optional Group Object in the Basic FB (GOb). The datapoint is optionally supported as Group Object in the LTE Standard Mode Interface (GO). For all other modes the implementation is not defined. This is indicated by an empty field. Outp1: is mandatory M in LTE Mode and has a structured DPT or a DPT with extended features which is today not available in standard mode. In the Basic FB the information of Outp1 is split up into Outp1-1 and Outp1-2 (separate datapoints with standard DPT).  Outp1-1 and Outp1-2 are mandatory Group Objects GO in the Basic FB and are therefore mandatory in all modes. Outp2: is mandatory in all modes.

|Basic FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic FB**|**Basic FB**|**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-MODE**|
|**Inputs**|Inp1|**NA**|NA|NA|M|
||Inp2|**NA**|NA|NA|O|
||Inp3|**(GOb) **||(GO)|O|
|**Outputs**|Outp1|**NA**|NA|NA|M|
||- Outp1-1|**GOb  **|GO|GO|NA|
||- Outp1-2|**GOb **|GO|GO|NA|
||Outp 2|**GOb **|GO|GO|M|


-----

##### 1.3.2 Parameters and Diagnostic Data
###### LTE implementation:
 • Parameters and Diagnostic Data of a Functional Block shall be implemented as Properties of the corresponding Interface Object which are accessed using individual addressing.
 • These Properties are addressed via the standard Interface Object Type (IO Type) for this Functional Block. This IO Type is also used for datapoint addressing in the LTE runtime interworking model
 • Standard DPT or HVAC specific DPT with extended features are used where appropriate.
 Other modes:
 • Parameters and Diagnostic Data can in principle be implemented as memory mapped datapoints or Group Objects or Properties of an Interface Object using individual addressing. This document does not lay down how to implement Parameters and Diagnostic Data in S, LT-R, LT-S, Ctrl, PB and A- Mode.
 • In case of Memory Mapped datapoints the DPT may be manufacturer specific
 • In case of Group Objects standard DPT shall be used instead of HVAC specific (extended) DPT. The description of these Group Objects shall be part of the mode-dependent specification (e.g. Channel definition).
 • In case of Properties, the implementation of HVAC specific DPT with extended features may be a problem (depending on the available microcontroller ressources). The manufacturer has the choice:  to use the LTE style Property implementation as specified in this document (with the DPT and IO Type for LTE implementations)   IO Type[used] = IO Type[HVAC-LTE]  to implement these Properties using standard DPT only.  In this case, the same Property ID but a different IO Type shall be used since the DPT of a Property shall be unambiguous for each IO Type.
**Simple IOT mapping rule:** **IO Type[used] = IO Type[standardDPT] = IO Type[HVAC-LTE] + 10000d**
###### (e.g. BUC[HVAC-LTE] = 128 => BUC[standardDPT] = 10128)  It is allowed to implement in a device both Interface Object Types IO Type[HVAC-LTE] and IO Type[standardDPT]. The implementation of parameters and diagnostic data of one given Functional Block shall however be complete. It is thus not allowed to implement part of the datapoints of a Functional Block in IO Type[standardDPT] and the remaining in IO Type[HVAC-LTE.]

**Implementation of Parameter and Diagnostic Data**

**Property based** **Group Object** **Memory mapped**
**LTE style** **Standard DPT**
IO Type IO Type[HVAC-LTE] IO Type[HVAC-LTE ]+ 10000

e.g. BUC=128 e.g. BUC=10128

Property ID Property ID x Property ID x

if standard DPT => same standard DPT => same standard DPT company specific

DPT if HVAC-LTE => mapped standard => mapped standard

specific*) DPT, e.g. 9.001 DPT, e.g. 9.001
e.g. 205.100

###### In this document only the HVAC-LTE style of Parameters and Diagnostic Data is specified for IO Type[HVAC-LTE].
 In the FB datapoint overview those Parameters and Diagnostic Data with HVAC-LTE specific (extended) DPT are marked “ *) ”  The mapping of HVAC specific DPT to standard DPT is generic and described in the document [01] – HVAC Datapoint Types

|Col1|Implementation of Parameter and Diagnostic Data|Col3|Col4|Col5|
|---|---|---|---|---|
||**Property based**<br>**LTE style**<br>**Standard DPT**|**Property based**<br>**LTE style**<br>**Standard DPT**|**Group Object**|**Memory mapped**|
|IO Type|IO TypeHVAC-LTE <br>e.g. BUC=128|IO TypeHVAC-LTE+ 10000<br>e.g. BUC=10128|||
|Property ID|Property ID x|Property ID x|||
|DPT|if standard DPT|=> same standard DPT|=> same standard DPT|company specific|
|DPT|if HVAC-LTE<br>specific***)** <br>e.g. 205.100|=> mapped standard<br>DPT, e.g. 9.001|=> mapped standard<br>DPT, e.g. 9.001||


-----

#### 1.4 Glossary
###### This glossary only contains a few positions, which might be misunderstood.

 Term Description

 Supervisor Supervisor stands for building management station, programme unit or similar installations, which normally are computer based. xx xx

#### 1.5 Abbreviations

###### Functional Blocks:
 Sensors [02], HMI [03], Actuators [04], Common Controller Functions [05]
 Abbreviation [Doc] Description

 OTS 1 Outside Temperature Sensor
 Terminal Units (TU) [09] as far as relevant in this document Abbreviation Description

 ACDTTU Air Cooler Energy Demand Transformer Terminal Unit AHDTTU Air Heater Energy Demand Transformer Terminal Unit CCDTTU Chilled Ceiling Energy Demand Transformer Terminal Unit FCC Fan Coil Unit Controller RCCTU Radiator and Chilled Ceiling Room Control RHDTTU Radiator Heating Energy Demand Transformer Terminal Unit RRCTU Radiator Room Control TU SPUC Split Unit Control VAVCEA Variable Air Volume Control Extract Air VAVCSA Variable Air Volume Control Supply Air VDTTU Ventilation Demand Transformer Terminal Unit WHPC Water Heat Pump Control


-----

###### General

 Abbreviation Description

 cs Company Specific GO Group Object mandatory (GO) Group Object optional M Mandatory NA Not Allowed / Not Applicable O Optional S Has to be implemented in Standard Mode,  if implemented in LTE-HEE Mode

 HEE HVAC Easy Extension HVAC Heating Ventilation Air Conditioning LTE Logical Tag Extended

 IR LTE-Service InfoReport W LTE-Service Write


-----

### 2 Formal matters

#### 2.1 Introduction to Functional Blocks
###### The Functional Blocks are described in a standard way as described below.

 Every Functional Block may be part of a complex device (e.g. a controller) containing more than one Functional Block.

 A Functional Block never can be split. Although not all inputs, outputs etc. are mandatory. The optional inputs, outputs do not have to be realised.

#### 2.2 Description of Functional Blocks

##### 2.2.1 Aims and objectives
###### This clause shall give a overview of the functionality of the Functional Block, as well as eventually information about interworking with other Functional Blocks.

##### 2.2.2 Functional specification
###### This chapter gives detailed information about the Inputs, the Outputs, the Parameters, the Diagnostic Data, the Alarms and the Hardwired I/O’s.

##### 2.2.3 Constraints
###### Constraints for the use of the Functional Block as well as for the use of Inputs, Outputs, Parameters, Diagnostic Data, Alarms etc. are described here.

##### 2.2.4 Functional Block
###### On top of the Functional Block the name and it's abbreviation is marked.

 Then the Inputs / Outputs are following.

 The Inputs / Outputs are grouped in Binding Groups, according to LTE (Logical Tag Extended).

 Mandatory Inputs / Outputs have a grey arrow with the letter M. They also have to be available in the System Mode. Optional Inputs / Outputs have a white arrow. Some of these Inputs / Outputs, in case of being implemented, also have to be available in the System Mode. These Inputs / Outputs have a white arrow with the letter S.

 Some of the Inputs / Outputs only make sense in combination, others may be used either / or. Such Inputs / Outputs are grouped with numbers.

 At the bottom there are three fields:

 On the left-hand side we find the Hardwired Inputs / Outputs, the mandatory ones in a grey field, the optional ones in a white field. On the right-hand side there is a field for the Parameters and the Diagnostic Data used in the Functional Block (mandatory in grey, optional in white). On the right-hand side at the bottom there is the field for the Alarms, generated in the Functional Block (for use in the Functional Block Alarm Source).


-----

**IR**

**IR**

**IR**

**IR**

**IR**

**W**

|Name of the Datapoint|Col2|Col3|Col4|
|---|---|---|---|
|Name of the Datapoint<br>||||
|Name of the Datapoint<br>||||
|Name of the Datapoint<br>||||


**IR**

**W**

**IR**

**W**


-----

##### 2.2.5 Datapoints / Formats

**Datapoints** **Description / Remarks** **Datapoint Type**

**Inputs**

Name of the Data- Descriptions, remarks if necessary Name of the Datapoint Type
Point and/or coding

LTE:
DPT_TempHVACAbs_Z
V16Z8

S:
DPT_Value_Temp
F16

**Outputs**

Name of the Data- see above see above
Point

**Parameters**

Name of the see above see above
Parameter

**Diagnostic Data**

Name of the see above see above
Diagnostic Data

**Alarm** **Description / Remarks** **Error**
**Code** **Prio**

Name of the Alarm Descriptions, remarks if necessary Code of the Priority of
Alarm the Alarm

###### Detailed specification of the Datapoints

 Detailed description of the Datapoints is given in a separate document [01].

|Datapoints|Description / Remarks|Datapoint Type|Additional Information|
|---|---|---|---|
|**Inputs**||||
|Name of the Data-<br>Point|Descriptions, remarks if necessary|Name of the Datapoint Type<br>and/or coding<br>LTE:<br>DPT_TempHVACAbs_Z <br>V16Z8 <br>S: <br>DPT_Value_Temp<br>F16||
||||M = mandatory, with<br>system mode<br>M1/M2 = alternative<br>mandatory<br>O = optional, system mode<br>optional<br>S =<br>optional, but if<br>implemented, then  with<br>system mode<br>1,2<br>the numbers represent<br>alternative<br>packages|
||||Unit of the Datapoint Value<br>Default Value|
||||Range indications|
|**Outputs**||||
|Name of the Data-<br>Point|see above|see above|see above|
|**Parameters**||||
|Name of the<br>Parameter|see above|see above|see above|
|**Diagnostic Data**||||
|Name of the<br>Diagnostic Data|see above|see above|see above|

|Alarm|Description / Remarks|Error<br>Code Prio|Col4|Additional Information|
|---|---|---|---|---|
|Name of the Alarm|Descriptions, remarks if necessary|Code of the<br>Alarm|Priority of<br>the Alarm|Additional Information|


-----

###### Notations:

 Symbol Field A Character A[n] Character String with Length n B Boolean / Bit set C Control E Exponent F Float (with ME) M Mantisse N eNumeration S Sign U Unsigned value V 2's Complement signed value Z8 Standardised Status/Command B8

 Example:

Format: 3 octet; V16Z8

###### 3 MSB 2 LSB 1 Temperature Temperature  Standard
 Status/Comm.

 VVVVVVVV VVVVVVVV ZZZZZZZZ 

 V16 Z8

Encoding: See below

Octets are transmitted from left to right, i.e. octet 1 is transmitted last.

###### Standard Status/Command Information

 Some of the Datapoints are combined with Standard Status/Command Information. For further information see [01].

|Symbol|Field|
|---|---|
|A|Character|
|A[n]|Character String with Length n|
|B|Boolean / Bit set|
|C|Control|
|E|Exponent|
|F|Float(with ME)|
|M|Mantisse|
|N|eNumeration|
|S|Sign|
|U|Unsigned value|
|V|2's Complement signed value|
|Z8|Standardised Status/Command B8|

|Format:<br>Encoding:|3 octet; V Z<br>16 8<br>3 MSB 2 LSB 1<br>Temperature Temperature Standard<br>Status/Comm.<br>VVVVVVVV VVVVVVVV ZZZZZZZZ<br>V Z<br>16 8<br>See below|
|---|---|


-----

### 3 Terminal Unit Energy Demand Transformer Functional Blocks

#### 3.1 Introduction to TU Energy Demand Transformer Functional Blocks
###### This document contains the Terminal Unit Energy Demand Transformer Functional Blocks.

 It is possible to combine more than one Functional Block in a device.

#### 3.2 Radiator Heating Energy Demand Transformer TU (RHDTTU)

##### 3.2.1 Aims and objectives
###### The Functional Block ‘Radiator Heating Energy Demand Transformer TU’ transforms the heating energy demand information out of the terminal units (e.g. radiator control or floor heating control) into a flow water temperature value.

 In plants with floor heating and radiator heating this Functional Block may be applied twice (with different max temperatures and different distribution segments)

 There are corresponding Functional Blocks for chilled ceiling cooling and for air re-heater / cooler and for ventilation.

##### 3.2.2 Functional specification
###### To transform the energy demand values to a flow temperature there are different possibilities: e.g.

 • demand % to °C by means of a curve
 • demand (yes/no) plus a heating curve (based on outside temperature)
 • a combination of the above
 • demand (yes/no) to a fix temperature

 Detailed realisation is manufacturer specific. (see also 3.7 'Collection and Processing of Demand Information in LTE-HEE)

 Inputs

 • TempOutside This information contains the outside temperature, delivered from another device with this functionality.
 • EnergyDemRD This information is delivered by the TU controllers  (n times) which need hot water. (100 % = full heating) The LTE information is completed with an attribute containing information from the ContrMode.
 • ValueEnergyDemRD This information is delivered by the TU controllers  (n times) which need hot water. (100 % = full heating) (only in S-Mode separate, see EnergyDemRD)
 • ContrModeAct The controlling mode delivered by the TU controllers. (n-times) (only in S-Mode separate, see EnergyDemRD)
 Outputs

 • TempFlowWaterDemRHDTTU This value represents the demanded flow water temperature for heating plus attributes.


-----

###### Binding Groups (LTE)

 The Functional Block shows 2 different binding groups.

 • DistrSegmH_a This binding group defines the distribution segment heating.
 • OutsideSensorZone_o This binding group defines the outside sensor zone, from which the outside temperature will be taken.
 Parameters

 • cs
 Diagnostic Data

 • ValueEnergyDemAct This value represents a theoretical average value of the input demands. The calculation is company specific.

 Alarms

 • cs

##### 3.2.3 Constraints
###### None.

##### 3.2.4 Functional Block Diagram

Radiator Heating Energy Demand Transformer TU 153
(RHDTTU)

Inputs Outputs

Binding Grp.: OutsideSensorZone_o

**IR** TempOutside

Binding Grp.: DistrSegmH_a

EnergyDemRD

**IR**            - ValueEnergyDemRD- ContrModeAct TempFlowWaterDemRHDTTU

M **IR**

|Col1|Col2|EnergyDemRD<br>- ValueEnergyDemRD<br>- ContrModeAct|Col4|
|---|---|---|---|
|||EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct|EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct|
|EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct|EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct|EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct|EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct|
|EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct|EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct|EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct||

|Block Diagram|Col2|
|---|---|
|Radiator Heating Energy Demand Transformer TU<br>153<br>(RHDTTU)|Radiator Heating Energy Demand Transformer TU<br>153<br>(RHDTTU)|
|Inputs<br>Outputs<br>Binding Grp.: OutsideSensorZone_o<br>TempOutside<br>Binding Grp.: DistrSegmH_a<br>EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct<br>TempFlowWaterDemRHDTTU<br>M|Inputs<br>Outputs<br>Binding Grp.: OutsideSensorZone_o<br>TempOutside<br>Binding Grp.: DistrSegmH_a<br>EnergyDemRD<br>-  ValueEnergyDemRD<br>-  ContrModeAct<br>TempFlowWaterDemRHDTTU<br>M|
|Additional I/O’s<br>Optional:<br>- Heating Curve<br>- Curve etc.<br>-<br>Mandatory:<br>-<br>-|Parameters & Diagnostic Data<br>Optional:<br>- OutsideSensorZone_o  (LTE)<br>- ValueEnergyDemAct<br>-<br>Mandatory:<br>- DistrSegmH_a  (LTE)|
|Additional I/O’s<br>Optional:<br>- Heating Curve<br>- Curve etc.<br>-<br>Mandatory:<br>-<br>-|-<br>Alarms|


-----

##### 3.2.5 Datapoint description
###### Overview

**Datapoints** **Description / Remarks** **Datapoint Type**

**Inputs**

Temp Outside temperature actual value LTE: 205.100
Outside with: DPT_TempHVACAbs_Z

           - COV and RepPer V16Z8

           - Z8 STATUS supported S: 9.001
from FB

DPT_Value_Temp

'Outside Temperature Sensor' F16

n times

Energy Energy demand value for Heat Flow LTE:211.100
Dem Demand manager (water) DPT_EnergyDemWater
RD (100 % = full heating) U8N8

plus ContrMode with:

S:

           - COV and RepPer

NA

from FB
various TU controller

Value Energy demand value for Heat Flow LTE:
Energy Demand manager (water) NA
Dem (100 % = full heating) with:

S: 5.004

RD - COV and RepPer

DPT_Percent_U8

from FB
various TU controller U8

Contr Active Controlling Mode with: LTE:
Mode - COV and RepPer NA
Act from FB

S: 20.105

various TU controller

DPT_HVACContrMode
N8

**Outputs**

Temp Demanded flow water temperature LTE: 210.100
Flow with: DPT_TempFlowWaterDemAbs
Water - COV and RepPer V16B16
Dem to FB

S:

RHDTTU 'Heat Flow Demand Manager'

NA

**Parameter**

Distr LTE zoning number for 202.002
SegmH_a Distribution Segment Heating DPT_UcountValue8_Z

U8Z8

Outside LTE zoning number for 202.002
Sensor Outside Sensor Zone DPT_UcountValue8_Z
Zone_o U8Z8

**Diagnostic Data**

Value Theoretical, calculated value for the 5.004
Energy energy demand DPT_Percent_U8
Dem U8
Act

[1)] Implementation of Properties using standard DPT see chapter 1.3.2

|Datapoints|Description / Remarks|Datapoint Type|Additional Info|
|---|---|---|---|
|**Inputs**||||
|Temp<br>Outside|Outside temperature actual value<br>with:<br>- COV and RepPer<br>- Z8 STATUS supported<br>from FB<br>'Outside Temperature Sensor'|LTE:  205.100<br>DPT_TempHVACAbs_Z<br>V16Z8 <br>S:  9.001<br>DPT_Value_Temp<br>F16|LTE: O<br>S:<br>(GO)<br>°C|
|n times||||
|Energy<br>Dem<br>RD|Energy demand value for Heat Flow<br>Demand manager (water)<br>(100 % = full heating)<br>plus ContrMode with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:211.100<br>DPT_EnergyDemWater<br>U8N8 <br>S:<br>NA|LTE: M<br>S:<br>NA<br>0% ... 100 %<br>plus Attribute|
|Value<br>Energy<br>Dem<br>RD|Energy demand value for Heat Flow<br>Demand manager (water)<br>(100 % = full heating) with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:  5.004<br>DPT_Percent_U8<br>U8|LTE: NA<br>S:<br>(GO)<br>0% ... 100 %|
|Contr<br>Mode<br>Act|Active Controlling Mode with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:  20.105<br>DPT_HVACContrMode<br>N8|LTE: NA<br>S:<br>(GO)<br>enum.|
|**Outputs**||||
|Temp<br>Flow<br>Water<br>Dem<br>RHDTTU|Demanded flow water temperature<br>with:<br>- COV and RepPer<br>to FB<br>'Heat Flow Demand Manager'|LTE:  210.100<br>DPT_TempFlowWaterDemAbs<br>V16B16<br>S:<br>NA|LTE: M<br>S:<br>NA<br>°C<br>plus attributes|
|**Parameter**||||
|Distr<br>SegmH_a|LTE zoning number for<br>Distribution Segment Heating|202.002<br>DPT_UcountValue8_Z<br>U8Z8|M <br>1|
|Outside<br>Sensor<br>Zone_o|LTE zoning number for<br>Outside Sensor Zone|202.002<br>DPT_UcountValue8_Z<br>U8Z8|O <br>1|
|<br>**Diagnostic Data**||||
|Value<br>Energy<br>Dem<br>Act|Theoretical, calculated value for the<br>energy demand|5.004<br>1)<br>DPT_Percent_U8<br>U8|O <br>0% ... 100 %|


-----

###### RHDTTU Runtime Interworking - Dependence on Configuration Modes

**STANDARD EXTENDED**

**MODE** **MODE**

**Inputs** TempOutside **(GOb)** (GO) **O**

EnergyDemRD 1) **NAb** NA NA **M**

ValueEnergyDemRD 2) **(GOb)** (GO) **NA**

ContrModeAct 2) **(GOb)** (GO) **NA**

**Outputs** TempFlowWaterDemRHDTTU **NAb** NA NA **M**

[1)] combined information not available in S-Mode (see also [2)])

[2)] single information of 1) (only in S-Mode available, see also [1)])

###### RHDTTU LTE specific Properties

**Support**

**Parameter** DistrSegmH_a **M**

OutsideSensorZone_o **O**

###### RHDTTU Standard Properties of Interface Objects (or memory mapped DP)

|Basic FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic FB**|**Basic FB**|**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-MODE**|
|**Inputs**|TempOutside|**(GOb) **||(GO)|**O **|
||EnergyDemRD<br>1)|**NAb **|NA|NA|**M **|
||ValueEnergyDemRD<br>2)|**(GOb) **||(GO)|**NA**|
||ContrModeAct<br>2)|**(GOb) **||(GO)|**NA**|
|||||||
|**Outputs**|TempFlowWaterDemRHDTTU|**NAb **|NA|NA|**M **|
|||||||

|cific Properties|Col2|Col3|
|---|---|---|
|||**Support**|
|**Parameter**<br>|DistrSegmH_a|**M **|
|<br>|<br>OutsideSensorZone_o|**O **|

|Col1|Col2|Support|
|---|---|---|
|**Parameter**|---||
||||
|**DiagnosticData**|ValueEnergyDemAct|**O **|
||||


-----

##### 3.2.6 Detailed specification of the Datapoints

###### 3.2.6.1 Input TempOutside Standard Mode

DP Name: TempOutside Abbr.: --- Mandatory
FB Name: RHDTTU Can be internal
**Description**
This information is provided by the Functional Block 'Outside Temperature Sensor'.
**Datapoint Type**
DPT_Name: DPT_Value_Temp
DPT Format: F16 DPT_ID: 9.001
Field Description Supp. Range Unit Default
O full °C cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|TempOutside|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|DPTID:|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||O|O|full|full|°C|°C|°C|°C|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|
||<br>Request|<br>Request|<br>Request|<br>Request|||||||<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:||||||||<br>Period:|<br>Period:|<br>Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

**FB:** **RHDTTU** **LTE Client** **TempOutside** Mandatory
**Input Name:** Optional

**Description:**
This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the
STATUS of the information.
**DPT:** Name DPT_TempHVACAbs_Z DPT ID 205.100 Datatype format V16Z8
Field Description Sup. Unit Default
Temperature Outside temperature value M °C. cs
STATUS Bitset M

- OutOfService Sensor out of service M t/f false

- Fault Sensor value is corrupted O t/f false

- Overridden Sensor is temporarily overridden O t/f false

- InAlarm Sensor is in alarm O t/f false

- AlarmUnAck Acknowledgement of alarm O t/f false
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific OutsideSensorZone 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 320 (OTS) Property ID: 51
**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**RHDTTU**|**FB:**<br>**RHDTTU**|**FB:**<br>**RHDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|
|**DPT:**|Name|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPT ID|DPT ID|DPT ID|205.100|205.100|205.100|205.100|205.100|Datatype format|Datatype format|Datatype format|Datatype format|V16Z8|V16Z8|V16Z8|V16Z8|V16Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|Sup.|Unit|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature|Temperature|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|M|°C.|cs|cs|cs|cs|
|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck|STATUS<br>- OutOfService<br>- Fault<br>- Overridden<br>- InAlarm<br>- AlarmUnAck|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|M <br>M <br>O <br>O <br>O <br>O|t/f<br>t/f<br>t/f<br>t/f<br>t/f|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|1|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|51|51|51|51|51|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.2.6.2 Input EnergyDemRD Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **RHDTTU** **LTE Client** **EnergyDemRD** Mandatory
**Input Name:** Optional

**Description:**
This input is provided by the TU controllers and contains the value for the energy demand.
**DPT:** Name DPT_EnergyDemWater DPT ID 211.100 Datatype format U8N8
Field Description Sup. Unit Default
Value Energy demand value M % cs
Mode M enum. 0
0  = Auto M
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmH 1
Unassigned Broadcast Configurable
**DP Address:** 256 (RRCTU)

IO Type(ID): 257 (RCCRC) Property ID: 71

261 (VAVCSA)

**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**RHDTTU**|**FB:**<br>**RHDTTU**|**FB:**<br>**RHDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|**EnergyDemRD**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|
|**DPT:**|Name|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPT ID|DPT ID|DPT ID|211.100|211.100|211.100|211.100|Datatype format|Datatype format|Datatype format|Datatype format|U8N8|U8N8|U8N8|U8N8|U8N8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|M|%|cs|cs|cs|cs|
|Mode|Mode|Mode|Mode|Mode|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|enum.|0|0|0|0|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical|||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|<br> <br>IO Type(ID):<br>256 (RRCTU)<br>257 (RCCRC)<br>261 (VAVCSA) <br>Property ID:<br>71|
|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.2.6.3 Input ValueEnergyDemRD LTE-HEE Mode

 Not applicable.

 Standard Mode

DP Name: ValueEnergyDemRD Abbr.: --- Mandatory
FB Name: RHDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the value for the energy demand.
**Datapoint Type**
DPT_Name: DPT_Percent_U8
DPT Format: U8 DPT_ID: 5.004
Field Description Supp. Range Unit Default
M full % cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ValueEnergyDemRD|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|DPTID:|DPTID:|DPTID:|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||M|M|full|full|%|%|%|%|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.2.6.4 Input ContrModeAct LTE-HEE Mode NA:

 Standard Mode

DP Name: ContrModeAct Abbr.: --- Mandatory
FB Name: RHDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the active ContrMode.
**Datapoint Type**
DPT_Name: DPT_HVACContrMode
DPT Format: N8 DPT_ID: 20.105
Field Description Supp. Range Unit Default
0  = Auto M 0
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ContrModeAct|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|RHDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|DPTID:|DPTID:|DPTID:|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|||||||0|0|0|0|0|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.2.6.5 Output TempFlowWaterDemRHDTTU Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **RHDTTU** **LTE Server** **TempFlowWaterDemRHDTTU** Mandatory
**Output Name:** Optional

**Description:**
This output contains the setpoint value for the flow water temperature controller.
**DPT:** Name DPT_TempFlowWaterDemAb DPT ID 210.100 Datatype format V16B16

s

Field Description Sup. Range Unit COV Default
Temperature Temperature setpoint value M full °C 2 cs
for flow water

Attributes Bit Bitset B16

- DemValid 0 Validity of FlowTempDem M true/false bool Y false

- AbsLoadPrio 1 Absolute load priority O true/false bool Y false

- ShiftLoadPrio 2 Shift load priority O true/false bool Y false

- MaxTempLimit 3 TempFlowDem with max limit O true/false bool Y false

- MinTempLimit 4 TempFlowDem with min limit O true/false bool Y false

- DHWReq 5 Demand from DHW, for DHW NA false bool --- false
only

- RoomCtrlReq 6 Demand from room control O true/false bool Y true

- VentReq 7 Demand from ventilation NA false bool --- false

- AuxAllSeasonR 8 Demand from auxiliary O true/false bool Y false
consum.

- SystPumpReq 9 Request for water circulation O true/false bool Y false

- EmergDem 10 resulting emergency heat O true/false bool Y false
demand for frost protection

- DHWLegioReq 11 for DHW only NA false bool --- false

- reserved 12-15 NA --- false
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmH 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 153 (RHDTTU) Property ID: 51
**LTE-Services (event):** COV MinRepTime: 10 sec Heartbeat: 15 min

InfoReport Output per default communicating Binding Group Wildcard allowed

Tx Prio: High Normal Low

(LTE Read-Response
polling of the output

Transm after Power-up: Stored Value Act Value Default Value

shall always be
supported)

**Property-Service**
Read only Read/Write
**(individual access):**

**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**RHDTTU**|**FB:**<br>**RHDTTU**|**FB:**<br>**RHDTTU**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|**TempFlowWaterDemRHDTTU**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|
|**DPT:**|Name|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT ID|DPT ID|210.100|210.100|210.100|210.100|210.100|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|V16B16|V16B16|V16B16|V16B16|V16B16|V16B16|V16B16|
|Field|Field|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Unit|COV <br>|COV <br>|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature|Temperature|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|M|M|M|full|full|full|full|°C|°C|°C|2|2|cs|cs|cs|cs|
|Attributes|Attributes|Attributes|Bit|Bit||||||||||||Bitset B16|Bitset B16|Bitset B16|Bitset B16||||||||||
|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWReq<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWReq<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWReq<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>10<br>11|0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>10<br>11|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|Y <br>Y <br>Y <br>Y <br>Y <br>---<br>Y <br>---<br>Y <br>Y <br>Y <br>---|Y <br>Y <br>Y <br>Y <br>Y <br>---<br>Y <br>---<br>Y <br>Y <br>Y <br>---|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|
|- reserved|- reserved|- reserved|12-15|12-15|||||||||NA|NA|NA||||||||---|---|false|false|false|false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>153 (RHDTTU)|<br>153 (RHDTTU)|<br>153 (RHDTTU)|<br>153 (RHDTTU)|<br>153 (RHDTTU)|<br>153 (RHDTTU)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|51|51|51|51|51|51|51|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|COV||MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|10|10|10|10|sec|sec|sec|Heartbeat:|Heartbeat:|Heartbeat:|15|15|min|min|min|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|<br>|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High||<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal||<br>Low|<br>Low|<br>Low|<br>Low|<br>||||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|
|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.2.6.6 Parameter DistrSegmH

**FB:** **RHDTTU** **Property Name (Server):** **DistrSegmH** Mandatory
Optional
**Description:**
Number of the heating distribution segment.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Heating Segment M (0) 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA bool false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 153 (RHDTTU) Property ID: 101
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

###### 3.2.6.7 Parameter OutsideSensorZone

**FB:** **RHDTTU** **Property Name (Server):** **OutsideSensorZone** Mandatory
Optional
**Description:**
Number of the outside sensor zone.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Outside Sensor Zone M (0) 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA bool false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 153 (RHDTTU) Property ID: 102
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

|FB: RHDTTU|Col2|Col3|Property Name (Server): DistrSegmH|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|M|M|M|(0)  1...31|(0)  1...31|(0)  1...31|(0)  1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset<br>bool|Bitset<br>bool|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|

|FB: RHDTTU|Col2|Col3|Property Name (Server): OutsideSensorZone|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|M|M|M|(0)  1...31|(0)  1...31|(0)  1...31|(0)  1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset<br>bool|Bitset<br>bool|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|


-----

###### 3.2.6.8 Diagnostic Data ValueEnergyDemAct

**FB:** **RHDTTU** **Property Name (Server):** **ValueEnergyDemAct** Mandatory
Optional
**Description:**
Calculated value of energy demand.
**DPT:** Name DPT_Percent_U8 DPT ID 5.004 Datatype format U8
Field Description Sup. Range Unit Default
Value Calculated energy demand value M full % cs
**Communication:**

**DP Address:** IO Type(ID): 153 (RHDTTU) Property ID: 111
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
--
|FB: RHDTTU|Col2|Col3|Property Name (Server): ValueEnergyDemAct|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|
|**DPT:**|Name|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPT ID|5.004|5.004|5.004|5.004|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8|U8|U8|U8|U8|U8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|M|M|M|full|full|full|full|%|%|cs|cs|cs|cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|153 (RHDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|-|-|-|-|-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

#### 3.3 Chilled Ceiling Energy Demand Transformer TU (CCDTTU)

##### 3.3.1 Aims and objectives
###### The Functional Block ‘Chilled Ceiling Energy Demand Transformer TU’ transforms the cooling energy demand information out of the terminal units (e.g. chilled ceiling control) into a flow water temperature value.

 There are corresponding Functional Blocks for radiator heating and for air re-heater / cooler and for ventilation.

##### 3.3.2 Functional specification
###### To transform the energy demand values to a flow temperature there are different possibilities: e.g.

 • demand % to °C by means of a curve
 • demand (yes/no) plus a cooling curve (based on outside temperature)
 • a combination of the above
 • demand (yes/no) to a fix temperature

 Detailed realisation is manufacturer specific.

 Inputs

 • TempOutside This information contains the outside temperature, delivered from another device with this functionality.
 • EnergyDemCC This information is delivered by the TU controllers  (n times) which need cold water. (100 % = full cooling) The LTE information is completed with an attribute containing information from the ContrMode.
 • ValueEnergyDemCC This information is delivered by the TU controllers  (n times) which need cold water. (100 % = full cooling) (only in S-Mode separate, see EnergyDemCC)
 • ContrModeAct The controlling mode delivered by the TU controllers. (n-times) (only in S-Mode separate, see EnergyDemCC)
 Outputs

 • TempFlowWaterDemCCDTTU This value represents the demanded flow water temperature for cooling plus attributes.
 Binding Groups (LTE)

 The Functional Block shows 2 different binding groups.
 • DistrSegmC_b This binding group defines the distribution segment cooling.
 • OutsideSensorZone_o This binding group defines the outside sensor zone, from which the outside temperature will be taken.
 Parameters

 • cs


-----

###### Diagnostic Data

 • ValueEnergyDemAct This value represents a theoretical average value of the input demands. The calculation is company specific.
 Alarms

 • cs

##### 3.3.3 Constraints
###### None.

##### 3.3.4 Functional Block Diagram

Chilled Ceiling Energy Demand Transformer TU 216
(CCDTTU)

Inputs Outputs

Binding Grp.: OutsideSensorZone_o

**IR** TempOutside

Binding Grp.: DistrSegmC_b

EnergyDemCC

**IR**            - ValueEnergyDemCC- ContrModeAct TempFlowWaterDemCCDTTU

M **IR**

|Col1|Col2|Binding Grp.: D|Col4|
|---|---|---|---|
|||EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|
|||EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|
|EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|
|EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct|EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct||

|Block Diagram|Col2|
|---|---|
|Chilled Ceiling Energy Demand Transformer TU<br>216<br>(CCDTTU)|Chilled Ceiling Energy Demand Transformer TU<br>216<br>(CCDTTU)|
|Inputs<br>Outputs<br>Binding Grp.: OutsideSensorZone_o<br>TempOutside<br>Binding Grp.: DistrSegmC_b<br>EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct<br>TempFlowWaterDemCCDTTU<br>M|Inputs<br>Outputs<br>Binding Grp.: OutsideSensorZone_o<br>TempOutside<br>Binding Grp.: DistrSegmC_b<br>EnergyDemCC<br>-  ValueEnergyDemCC<br>-  ContrModeAct<br>TempFlowWaterDemCCDTTU<br>M|
|Additional I/O’s<br>Optional:<br>- Cooling Curve<br>- Curve etc.<br>-<br>Mandatory:<br>-<br>-|Parameters & Diagnostic Data<br>Optional:<br>- OutsideSensorZone_o  (LTE)<br>- ValueEnergyDemAct<br>-<br>Mandatory:<br>- DistrSegmC_b  (LTE)|
|Additional I/O’s<br>Optional:<br>- Cooling Curve<br>- Curve etc.<br>-<br>Mandatory:<br>-<br>-|-<br>Alarms|


-----

##### 3.3.5 Datapoint description
###### Overview

**Datapoints** **Description / Remarks** **Datapoint Type**

**Inputs**

Temp Outside temperature actual value LTE:  205.100
Outside with: DPT_TempHVACAbs_Z

           - COV and RepPer V16Z8

           - Z8 STATUS supported S:  9.001
from FB

DPT_Value_Temp

'Outside Temperature Sensor' F16

n times

Energy Energy demand value for Cold Flow LTE:  211.100
Dem Demand manager (water) DPT_EnergyDemWater
CC (100 % = full cooling) U8N8

plus ContrMode with:

S:

           - COV and RepPer

NA

from FB
various TU controller

Value Energy demand value for Cold Flow LTE:
Energy Demand manager (water) NA
Dem (100 % = full cooling) with:

S:  5.004

CC - COV and RepPer

DPT_Percent_U8

from FB
various TU controller U8

Contr Active Controlling Mode with: LTE:
Mode - COV and RepPer NA
Act from FB

S:  20.105

various TU controller

DPT_HVACContrMode
N8

**Outputs**

Temp Value for demanded flow water LTE:  210.100
Flow temperature with: DPT_TempFlowWaterDemAbs
Water - COV and RepPer V16B16
Dem to FB

S:

CCDTTU 'Cold Flow Demand Manager'

NA

**Parameter**

Distr LTE zoning number for 202.002
SegmC_b Distribution Segment Heating DPT_UcountValue8_Z

U8Z8

Outside LTE zoning number for 202.002
Sensor Outside Sensor Zone DPT_UcountValue8_Z
Zone_o U8Z8

**Diagnostic Data**

Value Theoretical, calculated value for the 5.004
Energy energy demand DPT_Percent_U8
Dem U8
Act

[1)] Implementation of Properties using standard DPT see chapter 1.3.2

|Datapoints|Description / Remarks|Datapoint Type|Additional Info|
|---|---|---|---|
|**Inputs**||||
|Temp<br>Outside|Outside temperature actual value<br>with:<br>- COV and RepPer<br>- Z8  STATUS supported<br>from FB<br>'Outside Temperature Sensor'|LTE:   205.100<br>DPT_TempHVACAbs_Z<br>V16Z8 <br>S:   9.001<br>DPT_Value_Temp<br>F16|LTE: O<br>S:<br>(GO)<br>°C|
|n times||||
|Energy<br>Dem<br>CC|Energy demand value for Cold Flow<br>Demand manager (water)<br>(100 % = full cooling)<br>plus ContrMode with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:   211.100<br>DPT_EnergyDemWater<br>U8N8 <br>S:<br>NA|LTE: M<br>S:<br>NA<br>0% ... 100 %<br>plus Attribute|
|Value<br>Energy<br>Dem<br>CC|Energy demand value for Cold Flow<br>Demand manager (water)<br>(100 % = full cooling) with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:   5.004<br>DPT_Percent_U8<br>U8|LTE: NA<br>S:<br>(GO)<br>0% ... 100 %|
|Contr<br>Mode<br>Act|Active Controlling Mode with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:    20.105<br>DPT_HVACContrMode<br>N8|LTE: NA<br>S:<br>(GO)<br>enum.|
|**Outputs**||||
|Temp<br>Flow<br>Water<br>Dem<br>CCDTTU|Value for demanded flow water<br>temperature with:<br>- COV and RepPer<br>to FB<br>'Cold Flow Demand Manager'|LTE:   210.100<br>DPT_TempFlowWaterDemAbs<br>V16B16<br>S:<br>NA|LTE: M<br>S:<br>NA<br>°C<br>plus attributes|
|**Parameter**||||
|Distr<br>SegmC_b|LTE zoning number for<br>Distribution Segment Heating|202.002<br>DPT_UcountValue8_Z<br>U8Z8|M <br>1|
|Outside<br>Sensor<br>Zone_o|LTE zoning number for<br>Outside Sensor Zone|202.002<br>DPT_UcountValue8_Z<br>U8Z8|O <br>1|
|<br>**Diagnostic Data**||||
|Value<br>Energy<br>Dem<br>Act|Theoretical, calculated value for the<br>energy demand|5.004<br>1)<br>DPT_Percent_U8<br>U8|O <br>0% ... 100 %|


-----

###### CCDTTU Runtime Interworking - Dependence on Configuration Modes

**STANDARD EXTENDED**

**MODE** **MODE**

**Inputs** TempOutside **(GOb)** (GO) **O**

EnergyDemCC **NAb** NA NA **M**

ValueEnergyDemCC **(GOb)** (GO) **NA**

ContrModeAct **(GOb)** (GO) **NA**

**Outputs** TempFlowWaterDemCCDTTU **NAb** NA NA **M**

[1)] combined information not available in S-Mode (see also [2)])

[2)] single information of 1) (only in S-Mode available, see also [1)])

###### CCDTTU LTE specific Properties

**Support**

**Parameter** DistrSegmC_b **M**

OutsideSensorZone_o **O**

###### CCDTTU Standard Properties of Interface Objects (or memory mapped DP)

|Basic FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic FB**|**Basic FB**|**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-MODE**|
|**Inputs**|TempOutside|**(GOb) **||(GO)|**O **|
||EnergyDemCC|**NAb **|NA|NA|**M **|
||ValueEnergyDemCC|**(GOb) **||(GO)|**NA**|
||ContrModeAct|**(GOb) **||(GO)|**NA**|
|||||||
|**Outputs**|TempFlowWaterDemCCDTTU|**NAb **|NA|NA|**M **|
|||||||

|cific Properties|Col2|Col3|
|---|---|---|
|||**Support**|
|**Parameter**<br>|DistrSegmC_b|**M **|
|<br>|<br>OutsideSensorZone_o|**O **|

|Col1|Col2|Support|
|---|---|---|
|**Parameter**|---||
||||
|**DiagnosticData**|ValueEnergyDemAct|**O **|
||||


-----

##### 3.3.6 Detailed specification of the Datapoints

###### 3.3.6.1 Input TempOutside Standard Mode

DP Name: TempOutside Abbr.: --- Mandatory
FB Name: CCDTTU Can be internal
**Description**
This information is provided by the Functional Block 'Outside Temperature Sensor'.
**Datapoint Type**
DPT_Name: DPT_Value_Temp
DPT Format: F16 DPT_ID: 9.001
Field Description Supp. Range Unit Default
O full °C cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|TempOutside|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|DPTID:|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||O|O|full|full|°C|°C|°C|°C|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|
||<br>Request|<br>Request|<br>Request|<br>Request|||||||<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:||||||||<br>Period:|<br>Period:|<br>Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

**FB:** **CCDTTU** **LTE Client** **TempOutside** Mandatory
**Input Name:** Optional

**Description:**
This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the
STATUS of the information.
**DPT:** Name DPT_TempHVACAbs_Z DPT ID 205.100 Datatype format V16Z8
Field Description Sup. Unit Default
Temperature Outside temperature value M °C. cs
STATUS Bitset M

- OutOfService Sensor out of service M t/f false

- Fault Sensor value is corrupted O t/f false

- Overridden Sensor is temporarily overridden O t/f false

- InAlarm Sensor is in alarm O t/f false

- AlarmUnAck Acknowledgement of alarm O t/f false
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific OutsideSensorZone 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 320 (OTS) Property ID: 51
**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**CCDTTU**|**FB:**<br>**CCDTTU**|**FB:**<br>**CCDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|
|**DPT:**|Name|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPT ID|DPT ID|DPT ID|205.100|205.100|205.100|205.100|205.100|Datatype format|Datatype format|Datatype format|Datatype format|V16Z8|V16Z8|V16Z8|V16Z8|V16Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|Sup.|Unit|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature|Temperature|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|M|°C.|cs|cs|cs|cs|
|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|M <br>M <br>O <br>O <br>O <br>O|t/f<br>t/f<br>t/f<br>t/f<br>t/f|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|1|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|51|51|51|51|51|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.3.6.2 Input EnergyDemCC Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **CCDTTU** **LTE Client** **EnergyDemCC** Mandatory
**Input Name:** Optional

**Description:**
This input is provided by the TU controllers and contains the value for the energy demand.
**DPT:** Name DPT_EnergyDemWater DPT ID 211.100 Datatype format U8N8
Field Description Sup. Unit Default
Value Energy demand value M % cs
Mode M enum. 0
0  = Auto M
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmC 1
Unassigned Broadcast Configurable
**DP Address:** 257 (RCCRC)
IO Type(ID): Property ID: 72
261 (VAVCSA)

**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**CCDTTU**|**FB:**<br>**CCDTTU**|**FB:**<br>**CCDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|**EnergyDemCC**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|
|**DPT:**|Name|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPT ID|DPT ID|DPT ID|211.100|211.100|211.100|211.100|Datatype format|Datatype format|Datatype format|Datatype format|U8N8|U8N8|U8N8|U8N8|U8N8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|M|%|cs|cs|cs|cs|
|Mode|Mode|Mode|Mode|Mode|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|enum.|0|0|0|0|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical|||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|<br> <br>IO Type(ID):<br>257 (RCCRC)<br>261 (VAVCSA)<br>Property ID:<br>72|
|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.3.6.3 Input ValueEnergyDemCC LTE-HEE Mode

 Not applicable.

 Standard Mode

DP Name: ValueEnergyDemCC Abbr.: --- Mandatory
FB Name: CCDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the value for the energy demand.
**Datapoint Type**
DPT_Name: DPT_Percent_U8
DPT Format: U8 DPT_ID: 5.004
Field Description Supp. Range Unit Default
M full % cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ValueEnergyDemCC|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|DPTID:|DPTID:|DPTID:|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||M|M|full|full|%|%|%|%|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.3.6.4 Input ContrModeAct LTE-HEE Mode

 Not applicable.

 Standard Mode

DP Name: ContrModeAct Abbr.: --- Mandatory
FB Name: CCDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the active ContrMode.
**Datapoint Type**
DPT_Name: DPT_HVACContrMode
DPT Format: N8 DPT_ID: 20.105
Field Description Supp. Range Unit Default
0  = Auto M 0
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ContrModeAct|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|CCDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|DPTID:|DPTID:|DPTID:|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|||||||0|0|0|0|0|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.3.6.5 Output TempFlowWaterDemCCDTTU Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **CCDTTU** **LTE Server** **TempFlowWaterDemCCDTTU** Mandatory
**Output Name:** Optional

**Description:**
This output contains the setpoint value for the flow water temperature controller.
**DPT:** Name DPT_TempFlowWaterDemAb DPT ID 210.100 Datatype format V16B16

s

Field Description Sup. Range Unit COV Default
Temperature Temperature setpoint value M full °C 0.5 cs
for flow water

Attributes Bit Bitset B16

- DemValid 0 Validity of FlowTempDem M true/false bool Y false

- AbsLoadPrio 1 Absolute load priority O true/false bool Y false

- ShiftLoadPrio 2 Shift load priority O true/false bool Y false

- MaxTempLimit 3 TempFlowDem with max limit O true/false bool Y false

- MinTempLimit 4 TempFlowDem with min limit O true/false bool Y false

- DHWRequest 5 Demand from DHW, for DHW NA false bool --- false
only

- RoomCtrlReq 6 Demand from room control O true/false bool Y true

- VentReq 7 Demand from ventilation NA false bool --- false

- AuxAllSeasonR 8 Demand from auxiliary O true/false bool Y false
consum.

- SystPumpReq 9 Request for water circulation O true/false bool Y false

- EmergDem 10 resulting emergency heat O true/false bool Y false
demand for frost protection

- DHWLegioReq 11 for DHW only NA false bool --- false

- reserved 12-15 NA --- false
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmC 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 216 (CCDTTU) Property ID: 51
**LTE-Services (event):** COV MinRepTime: 10 sec Heartbeat: 15 min

InfoReport Output per default communicating Binding Group Wildcard allowed

Tx Prio: High Normal Low

(LTE Read-Response
polling of the output

Transm after Power-up: Stored Value Act Value Default Value

shall always be
supported)

**Property-Service**
Read only Read/Write
**(individual access):**

**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**CCDTTU**|**FB:**<br>**CCDTTU**|**FB:**<br>**CCDTTU**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|**TempFlowWaterDemCCDTTU**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|
|**DPT:**|Name|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT ID|DPT ID|210.100|210.100|210.100|210.100|210.100|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|V16B16|V16B16|V16B16|V16B16|V16B16|V16B16|V16B16|
|Field|Field|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Unit|COV <br>|COV <br>|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature|Temperature|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|M|M|M|full|full|full|full|°C|°C|°C|0.5|0.5|cs|cs|cs|cs|
|Attributes|Attributes|Attributes|Bit|Bit||||||||||||Bitset B16|Bitset B16|Bitset B16|Bitset B16||||||||||
|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWRequest<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWRequest<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWRequest<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>10<br>11|0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>10<br>11|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|Y <br>Y <br>Y <br>Y <br>Y <br>---<br>Y <br>---<br>Y <br>Y <br>Y <br>---|Y <br>Y <br>Y <br>Y <br>Y <br>---<br>Y <br>---<br>Y <br>Y <br>Y <br>---|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|
|- reserved|- reserved|- reserved|12-15|12-15|||||||||NA|NA|NA||||||||---|---|false|false|false|false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>216 (CCDTTU)|<br>216 (CCDTTU)|<br>216 (CCDTTU)|<br>216 (CCDTTU)|<br>216 (CCDTTU)|<br>216 (CCDTTU)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|51|51|51|51|51|51|51|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|COV||MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|10|10|10|10|sec|sec|sec|Heartbeat:|Heartbeat:|Heartbeat:|15|15|min|min|min|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|<br>|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High||<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal||<br>Low|<br>Low|<br>Low|<br>Low|<br>||||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|
|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.3.6.6 Parameter DistrSegmC

**FB:** **CCDTTU** **Property Name (Server):** **DistrSegmC** Mandatory
Optional
**Description:**
Number of the cooling distribution segment.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Cooling Segment M (0) 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA bool false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 216 (CCDTTU) Property ID: 101
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

###### 3.3.6.7 Parameter OutsideSensorZone

**FB:** **CCDTTU** **Property Name (Server):** **OutsideSensorZone** Mandatory
Optional
**Description:**
Number of the outside sensor zone.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Outside Sensor Zone M (0) 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA bool false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 216 (CCDTTU) Property ID: 102
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

|FB: CCDTTU|Col2|Col3|Property Name (Server): DistrSegmC|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|M|M|M|(0)  1...31|(0)  1...31|(0)  1...31|(0)  1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset<br>bool|Bitset<br>bool|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|

|FB: CCDTTU|Col2|Col3|Property Name (Server): OutsideSensorZone|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|M|M|M|(0)  1...31|(0)  1...31|(0)  1...31|(0)  1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset<br>bool|Bitset<br>bool|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|


-----

###### 3.3.6.8 Diagnostic Data ValueEnergyDemAct

**FB:** **CCDTTU** **Property Name (Server):** **ValueEnergyDemAct** Mandatory
Optional
**Description:**
Calculated value of energy demand.
**DPT:** Name DPT_Percent_U8 DPT ID 5.004 Datatype format U8
Field Description Sup. Range Unit Default
Value Calculated energy demand value M full % cs
**Communication:**

**DP Address:** IO Type(ID): 216 (CCDTTU) Property ID: 111
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
--
|FB: CCDTTU|Col2|Col3|Property Name (Server): ValueEnergyDemAct|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|
|**DPT:**|Name|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPT ID|5.004|5.004|5.004|5.004|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8|U8|U8|U8|U8|U8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|M|M|M|full|full|full|full|%|%|cs|cs|cs|cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|216 (CCDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|-|-|-|-|-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

#### 3.4 Air Heater Energy Demand Transformer TU (AHDTTU)

##### 3.4.1 Aims and objectives
###### The Functional Block ‘Air Heater Energy Demand Transformer TU’ transforms the heating energy demand information out of the terminal units (e.g. re-heater of VAV control) into a flow water temperature value.

 There are corresponding Functional Blocks for radiator heating, chilled ceiling cooling and for air re-cooler and for ventilation.

##### 3.4.2 Functional specification
###### To transform the energy demand values to a flow temperature there are different possibilities: e.g.

 • demand % to °C by means of a curve
 • demand (yes/no) plus a heating curve (based on outside temperature)
 • a combination of the above
 • demand (yes/no) to a fix temperature

 Detailed realisation is manufacturer specific.

 Inputs

 • TempOutside This information contains the outside temperature, delivered from another device with this functionality.
 • EnergyDemAH This information is delivered by the TU controllers  (n times) which need hot water. (100 % = full heating) The LTE information is completed with an attribute containing information from the ContrMode.
 • ValueEnergyDemAH This information is delivered by the TU controllers  (n times) which need hot water. (100 % = full heating) (only in S-Mode separate, see EnergyDemAH)
 • ContrModeAct The controlling mode delivered by the TU controllers. (n-times) (only in S-Mode separate, see EnergyDemAH)
 Outputs

 • TempFlowWaterDemAHDTTU This value represents the demanded flow water temperature for heating plus attributes.
 Binding Groups (LTE)

 The Functional Block shows 2 different binding groups.
 • DistrSegmH_c This binding group defines the distribution segment heating.
 • OutsideSensorZone_o This binding group defines the outside sensor zone, from which the outside temperature will be taken.
 Parameters

 • cs


-----

###### Diagnostic Data

 • ValueEnergyDemAct This value represents a theoretical average value of the input demands. The calculation is company specific.
 Alarms

 • cs

##### 3.4.3 Constraints
###### None.

##### 3.4.4 Functional Block Diagram

Air Heater Energy Demand Transformer TU 154
(AHDTTU)

Inputs Outputs

Binding Grp.: OutsideSensorZone_o

**IR** TempOutside

Binding Grp.: DistrSegmH_c

EnergyDemAH

**IR**            - ValueEnergyDemAH- ContrModeAct TempFlowWaterDemAHDTTU

M **IR**

|Col1|Col2|EnergyDemAH<br>- ValueEnergyDemAH<br>- ContrModeAct|Col4|
|---|---|---|---|
|||EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct|EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct|
|EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct|EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct|EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct|EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct|
|EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct|EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct|EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct||

|Block Diagram|Col2|
|---|---|
|Air Heater Energy Demand Transformer TU<br>154<br>(AHDTTU)|Air Heater Energy Demand Transformer TU<br>154<br>(AHDTTU)|
|Inputs<br>Outputs<br>Binding Grp.: OutsideSensorZone_o<br>TempOutside<br>Binding Grp.: DistrSegmH_c<br>EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct<br>TempFlowWaterDemAHDTTU<br>M|Inputs<br>Outputs<br>Binding Grp.: OutsideSensorZone_o<br>TempOutside<br>Binding Grp.: DistrSegmH_c<br>EnergyDemAH<br>-  ValueEnergyDemAH<br>-  ContrModeAct<br>TempFlowWaterDemAHDTTU<br>M|
|Additional I/O’s<br>Optional:<br>- Heating Curve<br>- Curve etc.<br>-<br>Mandatory:<br>-<br>-|Parameters & Diagnostic Data<br>Optional:<br>- OutsideSensorZone_o  (LTE)<br>- ValueEnergyDemAct<br>-<br>Mandatory:<br>- DistrSegmH_c  (LTE)|
|Additional I/O’s<br>Optional:<br>- Heating Curve<br>- Curve etc.<br>-<br>Mandatory:<br>-<br>-|-<br>Alarms|


-----

##### 3.4.5 Datapoint description
###### Overview

**Datapoints** **Description / Remarks** **Datapoint Type**

**Inputs**

Temp Outside temperature actual value LTE:  205.100
Outside with: DPT_TempHVACAbs_Z

           - COV and RepPer V16Z8

           - Z8 STATUS supported S:  9.001
from FB

DPT_Value_Temp

'Outside Temperature Sensor' F16

n times

Energy Energy demand value for Heat Flow LTE:  211.100
Dem Demand manager (water) DPT_EnergyDemWater
AH (100 % = full heating) U8N8

plus ContrMode with:

S:

           - COV and RepPer

NA

from FB
various TU controller

Value Energy demand value for Heat Flow LTE:
Energy Demand manager (water) NA
Dem (100 % = full heating) with:

S:  5.004

AH - COV and RepPer

DPT_Percent_U8

from FB
various TU controller U8

Contr Active Controlling Mode with: LTE:
Mode - COV and RepPer NA
Act from FB

S:  20.105

various TU controller

DPT_HVACContrMode
N8

**Outputs**

Temp Demanded flow water temperature LTE:  210.100
Flow with: DPT_TempFlowWaterDemAbs
Water - COV and RepPer V16B16
Dem to FB

S:

AHDTTU 'Heat Flow Demand Manager'

NA

**Parameter**

Distr LTE zoning number for 202.002
SegmH_c Distribution Segment Heating DPT_UcountValue8_Z

U8Z8

Outside LTE zoning number for 202.002
Sensor Outside Sensor Zone DPT_UcountValue8_Z
Zone_o U8Z8

**Diagnostic Data**

Value Theoretical, calculated value for the 5.004
Energy energy demand DPT_Percent_U8
Dem U8
Act

###### 1) Implementation of Properties using standard DPT see chapter 1.3.2

|Datapoints|Description / Remarks|Datapoint Type|Additional Info|
|---|---|---|---|
|**Inputs**||||
|Temp<br>Outside|Outside temperature actual value<br>with:<br>- COV and RepPer<br>- Z8  STATUS supported<br>from FB<br>'Outside Temperature Sensor'|LTE:   205.100<br>DPT_TempHVACAbs_Z<br>V16Z8 <br>S:   9.001<br>DPT_Value_Temp<br>F16|LTE: O<br>S:<br>(GO)<br>°C|
|n times||||
|Energy<br>Dem<br>AH|Energy demand value for Heat Flow<br>Demand manager (water)<br>(100 % = full heating)<br>plus ContrMode with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:   211.100<br>DPT_EnergyDemWater<br>U8N8 <br>S:<br>NA|LTE: M<br>S:<br>NA<br>0% ... 100 %<br>plus Attribute|
|Value<br>Energy<br>Dem<br>AH|Energy demand value for Heat Flow<br>Demand manager (water)<br>(100 % = full heating) with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:   5.004<br>DPT_Percent_U8<br>U8|LTE: NA<br>S:<br>(GO)<br>0% ... 100 %|
|Contr<br>Mode<br>Act|Active Controlling Mode with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:    20.105<br>DPT_HVACContrMode<br>N8|LTE: NA<br>S:<br>(GO)<br>enum.|
|**Outputs**||||
|Temp<br>Flow<br>Water<br>Dem<br>AHDTTU|Demanded flow water temperature<br>with:<br>- COV and RepPer<br>to FB<br>'Heat Flow Demand Manager'|LTE:   210.100<br>DPT_TempFlowWaterDemAbs<br>V16B16<br>S:<br>NA|LTE: M<br>S:<br>NA<br>°C<br>plus attributes|
|**Parameter**||||
|Distr<br>SegmH_c|LTE zoning number for<br>Distribution Segment Heating|202.002<br>DPT_UcountValue8_Z<br>U8Z8|M <br>1|
|Outside<br>Sensor<br>Zone_o|LTE zoning number for<br>Outside Sensor Zone|202.002<br>DPT_UcountValue8_Z<br>U8Z8|O <br>1|
|<br>**Diagnostic Data**||||
|Value<br>Energy<br>Dem<br>Act|Theoretical, calculated value for the<br>energy demand|5.004<br>1)<br>DPT_Percent_U8<br>U8|O <br>0% ... 100 %|


-----

###### AHDTTU Runtime Interworking - Dependence on Configuration Modes

**STANDARD EXTENDED**

**MODE** **MODE**

**Inputs** TempOutside **(GOb)** (GO) **O**

EnergyDemAH 1) **NAb** NA NA **M**

ValueEnergyDemAH 2) **(GOb)** (GO) **NA**

ContrModeAct 2) **(GOb)** (GO) **NA**

**Outputs** TempFlowWaterDemAHDTTU **NAb** NA NA **M**

[1)] combined information not available in S-Mode (see also [2)])

[2)] single information of 1) (only in S-Mode available, see also [1)])

###### AHDTTU LTE specific Properties

**Support**

**Parameter** DistrSegmH_c **M**

OutsideSensorZone_o **O**

###### AHDTTU Standard Properties of Interface Objects (or memory mapped DP)

|Basic FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic FB**|**Basic FB**|**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-MODE**|
|**Inputs**|TempOutside|**(GOb) **||(GO)|**O **|
||EnergyDemAH<br>1)|**NAb **|NA|NA|**M **|
||ValueEnergyDemAH<br>2)|**(GOb) **||(GO)|**NA**|
||ContrModeAct<br>2)|**(GOb) **||(GO)|**NA**|
|||||||
|**Outputs**|TempFlowWaterDemAHDTTU|**NAb **|NA|NA|**M **|
|||||||

|cific Properties|Col2|Col3|
|---|---|---|
|||**Support**|
|**Parameter**<br>|DistrSegmH_c|**M **|
|<br>|<br>OutsideSensorZone_o|**O **|

|Col1|Col2|Support|
|---|---|---|
|**Parameter**|---||
||||
|**DiagnosticData**|ValueEnergyDemAct|**O **|
||||


-----

##### 3.4.6 Detailed specification of the Datapoints

###### 3.4.6.1 Input TempOutside Standard Mode

DP Name: TempOutside Abbr.: --- Mandatory
FB Name: AHDTTU Can be internal
**Description**
This information is provided by the Functional Block 'Outside Temperature Sensor'.
**Datapoint Type**
DPT_Name: DPT_Value_Temp
DPT Format: F16 DPT_ID: 9.001
Field Description Supp. Range Unit Default
O full °C cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|TempOutside|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|DPTID:|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||O|O|full|full|°C|°C|°C|°C|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|
||<br>Request|<br>Request|<br>Request|<br>Request|||||||<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:||||||||<br>Period:|<br>Period:|<br>Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

**FB:** **AHDTTU** **LTE Client** **TempOutside** Mandatory
**Input Name:** Optional

**Description:**
This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the
STATUS of the information.
**DPT:** Name DPT_TempHVACAbs_Z DPT ID 205.100 Datatype format V16Z8
Field Description Sup. Unit Default
Temperature Outside temperature value M °C. cs
STATUS Bitset M

- OutOfService Sensor out of service M t/f false

- Fault Sensor value is corrupted O t/f false

- Overridden Sensor is temporarily overridden O t/f false

- InAlarm Sensor is in alarm O t/f false

- AlarmUnAck Acknowledgement of alarm O t/f false
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific OutsideSensorZone 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 320 (OTS) Property ID: 51
**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**AHDTTU**|**FB:**<br>**AHDTTU**|**FB:**<br>**AHDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|
|**DPT:**|Name|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPT ID|DPT ID|DPT ID|205.100|205.100|205.100|205.100|205.100|Datatype format|Datatype format|Datatype format|Datatype format|V16Z8|V16Z8|V16Z8|V16Z8|V16Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|Sup.|Unit|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature|Temperature|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|M|°C.|cs|cs|cs|cs|
|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|M <br>M <br>O <br>O <br>O <br>O|t/f<br>t/f<br>t/f<br>t/f<br>t/f|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|1|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|51|51|51|51|51|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.4.6.2 Input EnergyDemAH Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **AHDTTU** **LTE Client** **EnergyDemAH** Mandatory
**Input Name:** Optional

**Description:**
This input is provided by the TU controllers and contains the value for the energy demand.
**DPT:** Name DPT_EnergyDemWater DPT ID 211.100 Datatype format U8N8
Field Description Sup. Unit Default
Value Energy demand value M % cs
Mode M enum. 0
0  = Auto M
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmH 1
Unassigned Broadcast Configurable
**DP Address:** 258 (FCC)

259 (WHPC)

IO Type(ID): Property ID: 73

260 (SPUC)
261 (VAVCSA)

**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**AHDTTU**|**FB:**<br>**AHDTTU**|**FB:**<br>**AHDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|**EnergyDemAH**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|
|**DPT:**|Name|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPT ID|DPT ID|DPT ID|211.100|211.100|211.100|211.100|Datatype format|Datatype format|Datatype format|Datatype format|U8N8|U8N8|U8N8|U8N8|U8N8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|M|%|cs|cs|cs|cs|
|Mode|Mode|Mode|Mode|Mode|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|enum.|0|0|0|0|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical|||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|<br> <br>IO Type(ID):<br>258 (FCC)<br>259 (WHPC)<br>260 (SPUC)<br>261 (VAVCSA) <br>Property ID:<br>73|
|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.4.6.3 Input ValueEnergyDemAH LTE-HEE Mode

 Not applicable.

 Standard Mode

DP Name: ValueEnergyDemAH Abbr.: --- Mandatory
FB Name: AHDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the value for the energy demand.
**Datapoint Type**
DPT_Name: DPT_Percent_U8
DPT Format: U8 DPT_ID: 5.004
Field Description Supp. Range Unit Default
M full % cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ValueEnergyDemAH|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|DPTID:|DPTID:|DPTID:|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||M|M|full|full|%|%|%|%|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.4.6.4 Input ContrModeAct LTE-HEE Mode NA:

 Standard Mode

DP Name: ContrModeAct Abbr.: --- Mandatory
FB Name: AHDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the active ContrMode.
**Datapoint Type**
DPT_Name: DPT_HVACContrMode
DPT Format: N8 DPT_ID: 20.105
Field Description Supp. Range Unit Default
0  = Auto M 0
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ContrModeAct|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|AHDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|DPTID:|DPTID:|DPTID:|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|||||||0|0|0|0|0|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.4.6.5 Output TempFlowWaterDemAHDTTU Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **AHDTTU** **LTE Server** **TempFlowWaterDemAHDTTU** Mandatory
**Output Name:** Optional

**Description:**
This output contains the setpoint value for the flow water temperature controller.
**DPT:** Name DPT_TempFlowWaterDemAb DPT ID 210.100 Datatype format V16B16

s

Field Description Sup. Range Unit COV Default
Temperature Temperature setpoint value M full °C 2 cs
for flow water

Attributes Bit Bitset B16

- DemValid 0 Validity of FlowTempDem M true/false bool Y false

- AbsLoadPrio 1 Absolute load priority O true/false bool Y false

- ShiftLoadPrio 2 Shift load priority O true/false bool Y false

- MaxTempLimit 3 TempFlowDem with max O true/false bool Y false
limit

- MinTempLimit 4 TempFlowDem with min O true/false bool Y false
limit

- DHWReq 5 Demand from DHW, for NA false bool --- false
DHW only

- RoomCtrlReq 6 Demand from room control O true/false bool Y true

- VentReq 7 Demand from ventilation NA false bool --- false

- AuxAllSeasonR 8 Demand from auxiliary O true/false bool Y false
consum.

- SystPumpReq 9 Request for water O true/false bool Y false
circulation

- EmergDem 10 resulting emergency heat O true/false bool Y false
demand for frost protection

- DHWLegioReq 11 for DHW only NA false bool --- false

- reserved 12-15 NA --- false
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmH 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 154 (AHDTTU) Property ID: 51
**LTE-Services (event):** COV MinRepTime: 10 sec Heartbeat: 15 min

InfoReport Output per default communicating Binding Group Wildcard allowed

Tx Prio: High Normal Low

(LTE Read-Response
polling of the output

Transm after Power-up: Stored Value Act Value Default Value

shall always be
supported)

**Property-Service**
Read only Read/Write
**(individual access):**

**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**AHDTTU**|**FB:**<br>**AHDTTU**|**FB:**<br>**AHDTTU**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|**TempFlowWaterDemAHDTTU**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|
|**DPT:**|Name|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT ID|DPT ID|210.100|210.100|210.100|210.100|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|V16B16|V16B16|V16B16|V16B16|V16B16|V16B16|V16B16|
|Field|Field|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Sup.|Sup.|Range|Range|Range|Range|Range|Unit|Unit|COV <br>|COV <br>|Default|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature|Temperature|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|M|M|full|full|full|full|full|°C|°C|2|2|cs|cs|cs|cs|cs|
|Attributes|Attributes|Attributes|Bit|Bit||||||||||Bitset B16|Bitset B16|Bitset B16|Bitset B16|Bitset B16||||||||||
|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWReq<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWReq<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWReq<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>10<br>11|0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>10<br>11|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max<br>limit<br>TempFlowDem with min<br>limit<br>Demand from DHW, for<br>DHW only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water<br>circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max<br>limit<br>TempFlowDem with min<br>limit<br>Demand from DHW, for<br>DHW only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water<br>circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max<br>limit<br>TempFlowDem with min<br>limit<br>Demand from DHW, for<br>DHW only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water<br>circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max<br>limit<br>TempFlowDem with min<br>limit<br>Demand from DHW, for<br>DHW only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water<br>circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max<br>limit<br>TempFlowDem with min<br>limit<br>Demand from DHW, for<br>DHW only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water<br>circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max<br>limit<br>TempFlowDem with min<br>limit<br>Demand from DHW, for<br>DHW only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water<br>circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max<br>limit<br>TempFlowDem with min<br>limit<br>Demand from DHW, for<br>DHW only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water<br>circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|Y <br>Y <br>Y <br>Y <br>Y <br>---<br>Y <br>---<br>Y <br>Y <br>Y <br>---|Y <br>Y <br>Y <br>Y <br>Y <br>---<br>Y <br>---<br>Y <br>Y <br>Y <br>---|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|
|- reserved|- reserved|- reserved|12-15|12-15||||||||NA|NA||||||||---|---|false|false|false|false|false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical|||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|DistrSegmH|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>154 (AHDTTU)|<br>154 (AHDTTU)|<br>154 (AHDTTU)|<br>154 (AHDTTU)|<br>154 (AHDTTU)|Property ID:<br>|Property ID:<br>|Property ID:<br>|Property ID:<br>|Property ID:<br>|Property ID:<br>|51|51|51|51|51|51|51|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|COV||MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|10|10|10|10|sec|sec|sec|Heartbeat:|Heartbeat:|15|15|15|min|min|min|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating||Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High||<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal||<br>Low|<br>Low|<br>Low|<br>Low|||||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|
|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.4.6.6 Parameter DistrSegmH

**FB:** **AHDTTU** **Property Name (Server):** **DistrSegmH** Mandatory
Optional
**Description:**
Number of the heating distribution segment.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Heating Segment M (0) 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA bool false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 154 (AHDTTU) Property ID: 101
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

###### 3.4.6.7 Parameter OutsideSensorZone

**FB:** **AHDTTU** **Property Name (Server):** **OutsideSensorZone** Mandatory
Optional
**Description:**
Number of the outside sensor zone.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Outside Sensor Zone M (0) 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA bool false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 154 (AHDTTU) Property ID: 102
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

|FB: AHDTTU|Col2|Col3|Property Name (Server): DistrSegmH|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|<br>Number of the heating distribution segment.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|Number of the Heating Segment|M|M|M|(0)  1...31|(0)  1...31|(0)  1...31|(0)  1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset<br>bool|Bitset<br>bool|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|

|FB: AHDTTU|Col2|Col3|Property Name (Server): OutsideSensorZone|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|M|M|M|(0)  1...31|(0)  1...31|(0)  1...31|(0)  1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset<br>bool|Bitset<br>bool|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|


-----

###### 3.4.6.8 Diagnostic Data ValueEnergyDemAct

**FB:** **AHDTTU** **Property Name (Server):** **ValueEnergyDemAct** Mandatory
Optional
**Description:**
Calculated value of energy demand.
**DPT:** Name DPT_Percent_U8 DPT ID 5.004 Datatype format U8
Field Description Sup. Range Unit Default
Value Calculated energy demand value M full % cs
**Communication:**

**DP Address:** IO Type(ID): 154 (AHDTTU) Property ID: 111
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
--
|FB: AHDTTU|Col2|Col3|Property Name (Server): ValueEnergyDemAct|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|
|**DPT:**|Name|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPT ID|5.004|5.004|5.004|5.004|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8|U8|U8|U8|U8|U8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|M|M|M|full|full|full|full|%|%|cs|cs|cs|cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|154 (AHDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|-|-|-|-|-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

#### 3.5 Air Cooler Energy Demand Transformer TU (ACDTTU)

##### 3.5.1 Aims and objectives
###### The Functional Block ‘Air Cooler Energy Demand Transformer TU’ transforms the cooling energy demand information out of the terminal units (e.g. re-cooler of a VAV control) into a flow water temperature value.

 There are corresponding Functional Blocks for radiator heating, chilled ceiling cooling and for air  re-heater and for ventilation.

##### 3.5.2 Functional specification
###### To transform the energy demand values to a flow temperature there are different possibilities: e.g.

 • demand % to °C by means of a curve
 • demand (yes/no) plus a cooling curve (based on outside temperature)
 • a combination of the above
 • demand (yes/no) to a fix temperature

 Detailed realisation is manufacturer specific.

 Inputs

 • TempOutside This information contains the outside temperature, delivered from another device with this functionality.
 • EnergyDemAC This information is delivered by the TU controllers  (n times) which need cold water. (100 % = full cooling) The LTE information is completed with an attribute containing information from the ContrMode.
 • ValueEnergyDemAC This information is delivered by the TU controllers  (n times) which need cold water. (100 % = full cooling) (only in S-Mode separate, see EnergyDemAC)
 • ContrModeAct The controlling mode delivered by the TU controllers. (n-times) (only in S-Mode separate, see EnergyDemAC)
 Outputs

 • TempFlowWaterDemACDTTU This value represents the demanded flow water temperature for cooling plus attributes.
 Binding Groups (LTE)

 The Functional Block shows 2 different binding groups.
 • DistrSegmC_d This binding group defines the distribution segment cooling.
 • OutsideSensorZone_o This binding group defines the outside sensor zone, from which the outside temperature will be taken.


-----

###### Parameters

 • cs Diagnostic Data

 • ValueEnergyDemAct This value represents a theoretical average value of the input demands. The calculation is company specific.
 Alarms

 • cs

##### 3.5.3 Constraints
###### None.

##### 3.5.4 Functional Block Diagram

Air Cooler Energy Demand Transformer TU 217
(ACDTTU)

Inputs Outputs

Binding Grp.: OutsideSensorZone_o

**IR** TempOutside

Binding Grp.: DistrSegmC_d

EnergyDemAC

**IR**            - ValueEnergyDemAC- ContrModeAct TempFlowWaterDemACDTTU

M **IR**

|Col1|Col2|EnergyDemAC<br>- ValueEnergyDemAC<br>- ContrModeAct|Col4|
|---|---|---|---|
|||EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct|EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct|
|EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct|EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct|EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct|EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct|
|EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct|EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct|EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct||

|Block Diagram|Col2|
|---|---|
|Air Cooler Energy Demand Transformer TU<br>217<br>(ACDTTU)|Air Cooler Energy Demand Transformer TU<br>217<br>(ACDTTU)|
|Inputs<br>Outputs<br>Binding Grp.: OutsideSensorZone_o<br>TempOutside<br>Binding Grp.: DistrSegmC_d<br>EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct<br>TempFlowWaterDemACDTTU<br>M|Inputs<br>Outputs<br>Binding Grp.: OutsideSensorZone_o<br>TempOutside<br>Binding Grp.: DistrSegmC_d<br>EnergyDemAC<br>-  ValueEnergyDemAC<br>-  ContrModeAct<br>TempFlowWaterDemACDTTU<br>M|
|Additional I/O’s<br>Optional:<br>- Cooling Curve<br>- Curve etc.<br>-<br>Mandatory:<br>-<br>-|Parameters & Diagnostic Data<br>Optional:<br>- OutsideSensorZone_o  (LTE)<br>- ValueEnergyDemAct<br>-<br>Mandatory:<br>- DistrSegmC_d  (LTE)|
|Additional I/O’s<br>Optional:<br>- Cooling Curve<br>- Curve etc.<br>-<br>Mandatory:<br>-<br>-|-<br>Alarms|


-----

##### 3.5.5 Datapoint description
###### Overview

**Datapoints** **Description / Remarks** **Datapoint Type**

**Inputs**

Temp Outside temperature actual value LTE:  205.100
Outside with: DPT_TempHVACAbs_Z

           - COV and RepPer V16Z8

           - Z8 STATUS supported S:  9.001
from FB

DPT_Value_Temp

'Outside Temperature Sensor' F16

n times

Energy Energy demand value for Cold Flow LTE:  211.100
Dem Demand manager (water) DPT_EnergyDemWater
AC (100 % = full cooling) U8N8

plus ContrMode with:

S:

           - COV and RepPer

NA

from FB
various TU controller

Value Energy demand value for Cold Flow LTE:
Energy Demand manager (water) NA
Dem (100 % = full cooling) with:

S:  5.004

AC - COV and RepPer

DPT_Percent_U8

from FB
various TU controller U8

Contr Active Controlling Mode with: LTE:
Mode - COV and RepPer NA
Act from FB

S:  20.105

various TU controller

DPT_HVACContrMode
N8

**Outputs**

Temp Value for demanded flow water LTE:  210.100
Flow temperature with: DPT_TempFlowWaterDemAbs
Water - COV and RepPer V16B16
Dem to FB

S:

ACDTTU 'Cold Flow Demand Manager'

NA

**Parameter**

Distr LTE zoning number for 202.002
SegmC_d Distribution Segment Cooling DPT_UcountValue8_Z

U8Z8

Outside LTE zoning number for 202.002
Sensor Outside Sensor Zone DPT_UcountValue8_Z
Zone_o U8Z8

**Diagnostic Data**

Value Theoretical, calculated value for the 5.004
Energy energy demand DPT_Percent_U8
Dem U8
Act

[1)] Implementation of Properties using standard DPT see chapter 1.3.2

|Datapoints|Description / Remarks|Datapoint Type|Additional Info|
|---|---|---|---|
|**Inputs**||||
|Temp<br>Outside|Outside temperature actual value<br>with:<br>- COV and RepPer<br>- Z8  STATUS supported<br>from FB<br>'Outside Temperature Sensor'|LTE:   205.100<br>DPT_TempHVACAbs_Z<br>V16Z8 <br>S:   9.001<br>DPT_Value_Temp<br>F16|LTE: O<br>S:<br>(GO)<br>°C|
|n times||||
|Energy<br>Dem<br>AC|Energy demand value for Cold Flow<br>Demand manager (water)<br>(100 % = full cooling)<br>plus ContrMode with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:   211.100<br>DPT_EnergyDemWater<br>U8N8 <br>S:<br>NA|LTE: M<br>S:<br>NA<br>0% ... 100 %<br>plus Attribute|
|Value<br>Energy<br>Dem<br>AC|Energy demand value for Cold Flow<br>Demand manager (water)<br>(100 % = full cooling) with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:   5.004<br>DPT_Percent_U8<br>U8|LTE: NA<br>S:<br>(GO)<br>0% ... 100 %|
|Contr<br>Mode<br>Act|Active Controlling Mode with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:    20.105<br>DPT_HVACContrMode<br>N8|LTE: NA<br>S:<br>(GO)<br>enum.|
|**Outputs**||||
|Temp<br>Flow<br>Water<br>Dem<br>ACDTTU|Value for demanded flow water<br>temperature with:<br>- COV and RepPer<br>to FB<br>'Cold Flow Demand Manager'|LTE:   210.100<br>DPT_TempFlowWaterDemAbs<br>V16B16<br>S:<br>NA|LTE: M<br>S:<br>NA<br>°C<br>plus attributes|
|**Parameter**||||
|Distr<br>SegmC_d|LTE zoning number for<br>Distribution Segment Cooling|202.002<br>DPT_UcountValue8_Z<br>U8Z8|M <br>1|
|Outside<br>Sensor<br>Zone_o|LTE zoning number for<br>Outside Sensor Zone|202.002<br>DPT_UcountValue8_Z<br>U8Z8|O <br>1|
|<br>**Diagnostic Data**||||
|Value<br>Energy<br>Dem<br>Act|Theoretical, calculated value for the<br>energy demand|5.004<br>1)<br>DPT_Percent_U8<br>U8|O <br>0% ... 100 %|


-----

###### ACDTTU Runtime Interworking - Dependence on Configuration Modes

**STANDARD EXTENDED**

**MODE** **MODE**

**Inputs** TempOutside **(GOb)** (GO) **O**

EnergyDemAC **NAb** NA NA **M**

ValueEnergyDemAC **(GOb)** (GO) **NA**

ContrModeAct **(GOb)** (GO) **NA**

**Outputs** TempFlowWaterDemACDTTU **NAb** NA NA **M**

[1)] combined information not available in S-Mode (see also [2)])

[2)] single information of 1) (only in S-Mode available, see also [1)])

###### ACDTTU LTE specific Properties

**Support**

**Parameter** DistrSegmC_d **M**

OutsideSensorZone_o **O**

###### ACDTTU Standard Properties of Interface Objects (or memory mapped DP)

|Basic FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic FB**|**Basic FB**|**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-MODE**|
|**Inputs**|TempOutside|**(GOb) **||(GO)|**O **|
||EnergyDemAC|**NAb **|NA|NA|**M **|
||ValueEnergyDemAC|**(GOb) **||(GO)|**NA**|
||ContrModeAct|**(GOb) **||(GO)|**NA**|
|||||||
|**Outputs**|TempFlowWaterDemACDTTU|**NAb **|NA|NA|**M **|
|||||||

|cific Properties|Col2|Col3|
|---|---|---|
|||**Support**|
|**Parameter**<br>|DistrSegmC_d|**M **|
|<br>|<br>OutsideSensorZone_o|**O **|

|Col1|Col2|Support|
|---|---|---|
|**Parameter**|---||
||||
|**DiagnosticData**|ValueEnergyDemAct|**O **|
||||


-----

##### 3.5.6 Detailed specification of the Datapoints

###### 3.5.6.1 Input TempOutside Standard Mode

DP Name: TempOutside Abbr.: --- Mandatory
FB Name: ACDTTU Can be internal
**Description**
This information is provided by the Functional Block 'Outside Temperature Sensor'.
**Datapoint Type**
DPT_Name: DPT_Value_Temp
DPT Format: F16 DPT_ID: 9.001
Field Description Supp. Range Unit Default
O full °C cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|TempOutside|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|DPTID:|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||O|O|full|full|°C|°C|°C|°C|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|
||<br>Request|<br>Request|<br>Request|<br>Request|||||||<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:||||||||<br>Period:|<br>Period:|<br>Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

**FB:** **ACDTTU** **LTE Client** **TempOutside** Mandatory
**Input Name:** Optional

**Description:**
This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the
STATUS of the information.
**DPT:** Name DPT_TempHVACAbs_Z DPT ID 205.100 Datatype format V16Z8
Field Description Sup. Unit Default
Temperature Outside temperature value M °C. cs
STATUS Bitset M

- OutOfService Sensor out of service M t/f false

- Fault Sensor value is corrupted O t/f false

- Overridden Sensor is temporarily overridden O t/f false

- InAlarm Sensor is in alarm O t/f false

- AlarmUnAck Acknowledgement of alarm O t/f false
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific OutsideSensorZone 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 320 (OTS) Property ID: 51
**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**ACDTTU**|**FB:**<br>**ACDTTU**|**FB:**<br>**ACDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|
|**DPT:**|Name|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPT ID|DPT ID|DPT ID|205.100|205.100|205.100|205.100|205.100|Datatype format|Datatype format|Datatype format|Datatype format|V16Z8|V16Z8|V16Z8|V16Z8|V16Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|Sup.|Unit|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature|Temperature|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|M|°C.|cs|cs|cs|cs|
|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|M <br>M <br>O <br>O <br>O <br>O|t/f<br>t/f<br>t/f<br>t/f<br>t/f|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|1|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|51|51|51|51|51|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.5.6.2 Input EnergyDemAC Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **ACDTTU** **LTE Client** **EnergyDemAC** Mandatory
**Input Name:** Optional

**Description:**
This input is provided by the TU controllers and contains the value for the energy demand.
**DPT:** Name DPT_EnergyDemWater DPT ID 211.100 Datatype format U8N8
Field Description Sup. Unit Default
Value Energy demand value M % cs
Mode M enum. 0
0  = Auto M
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmC 1
Unassigned Broadcast Configurable
**DP Address:** 258 (FCC)
IO Type(ID): Property ID: 74
261 (VAVCSA)

**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**ACDTTU**|**FB:**<br>**ACDTTU**|**FB:**<br>**ACDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|**EnergyDemAC**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|<br>This input is provided by the TU controllers and contains the value for the energy demand.|
|**DPT:**|Name|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPTEnergyDemWater|DPT ID|DPT ID|DPT ID|211.100|211.100|211.100|211.100|Datatype format|Datatype format|Datatype format|Datatype format|U8N8|U8N8|U8N8|U8N8|U8N8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|M|%|cs|cs|cs|cs|
|Mode|Mode|Mode|Mode|Mode|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|enum.|0|0|0|0|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical|||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|<br> <br>IO Type(ID):<br>258 (FCC)<br>261 (VAVCSA)<br>Property ID:<br>74|
|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.5.6.3 Input ValueEnergyDemAC LTE-HEE Mode

 Not applicable.

 Standard Mode

DP Name: ValueEnergyDemAC Abbr.: --- Mandatory
FB Name: ACDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the value for the energy demand.
**Datapoint Type**
DPT_Name: DPT_Percent_U8
DPT Format: U8 DPT_ID: 5.004
Field Description Supp. Range Unit Default
M full % cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ValueEnergyDemAC|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|DPTID:|DPTID:|DPTID:|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||M|M|full|full|%|%|%|%|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.5.6.4 Input ContrModeAct LTE-HEE Mode

 Not applicable.

 Standard Mode

DP Name: ContrModeAct Abbr.: --- Mandatory
FB Name: ACDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the active ContrMode.
**Datapoint Type**
DPT_Name: DPT_HVACContrMode
DPT Format: N8 DPT_ID: 20.105
Field Description Supp. Range Unit Default
0  = Auto M 0
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ContrModeAct|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|ACDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|DPTID:|DPTID:|DPTID:|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|||||||0|0|0|0|0|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.5.6.5 Output TempFlowWaterDemACDTTU Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **ACDTTU** **LTE Server** **TempFlowWaterDemACDTTU** Mandatory
**Output Name:** Optional

**Description:**
This output contains the setpoint value for the flow water temperature controller.
**DPT:** Name DPT_TempFlowWaterDemAb DPT ID 210.100 Datatype format V16B16

s

Field Description Sup. Range Unit COV Default
Temperature Temperature setpoint value M full °C 0.5 cs
for flow water

Attributes Bit Bitset B16

- DemValid 0 Validity of FlowTempDem M true/false bool Y false

- AbsLoadPrio 1 Absolute load priority O true/false bool Y false

- ShiftLoadPrio 2 Shift load priority O true/false bool Y false

- MaxTempLimit 3 TempFlowDem with max limit O true/false bool Y false

- MinTempLimit 4 TempFlowDem with min limit O true/false bool Y false

- DHWReq 5 Demand from DHW, for DHW NA false bool --- false
only

- RoomCtrlReq 6 Demand from room control O true/false bool Y true

- VentReq 7 Demand from ventilation NA false bool --- false

- AuxAllSeasonR 8 Demand from auxiliary O true/false bool Y false
consum.

- SystPumpReq 9 Request for water circulation O true/false bool Y false

- EmergDem 10 resulting emergency heat O true/false bool Y false
demand for frost protection

- DHWLegioReq 11 for DHW only NA false bool --- false

- reserved 12-15 NA --- false
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmC 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 217 (ACDTTU) Property ID: 51
**LTE-Services (event):** COV MinRepTime: 10 sec Heartbeat: 15 min

InfoReport Output per default communicating Binding Group Wildcard allowed

Tx Prio: High Normal Low

(LTE Read-Response
polling of the output

Transm after Power-up: Stored Value Act Value Default Value

shall always be
supported)

**Property-Service**
Read only Read/Write
**(individual access):**

**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**ACDTTU**|**FB:**<br>**ACDTTU**|**FB:**<br>**ACDTTU**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|**TempFlowWaterDemACDTTU**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|<br>This output contains the setpoint value for the flow water temperature controller.|
|**DPT:**|Name|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT_TempFlowWaterDemAb<br>s|DPT ID|DPT ID|210.100|210.100|210.100|210.100|210.100|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|V16B16|V16B16|V16B16|V16B16|V16B16|V16B16|V16B16|
|Field|Field|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Unit|COV <br>|COV <br>|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature|Temperature|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|Temperature setpoint value<br>for flow water|M|M|M|full|full|full|full|°C|°C|°C|0.5|0.5|cs|cs|cs|cs|
|Attributes|Attributes|Attributes|Bit|Bit||||||||||||Bitset B16|Bitset B16|Bitset B16|Bitset B16||||||||||
|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWReq<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWReq<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|- DemValid<br>- AbsLoadPrio<br>- ShiftLoadPrio<br>- MaxTempLimit<br>- MinTempLimit<br>- DHWReq<br>- RoomCtrlReq<br>- VentReq<br>- AuxAllSeasonR<br>- SystPumpReq<br>- EmergDem<br>- DHWLegioReq|0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>10<br>11|0 <br>1 <br>2 <br>3 <br>4 <br>5 <br>6 <br>7 <br>8 <br>9 <br>10<br>11|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|Validity of FlowTempDem<br>Absolute load priority<br>Shift load priority<br>TempFlowDem with max limit<br>TempFlowDem with min limit<br>Demand from DHW, for DHW<br>only<br>Demand from room control<br>Demand from ventilation<br>Demand from auxiliary<br>consum.<br>Request for water circulation<br>resulting emergency heat<br>demand for frost protection<br>for DHW only|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|M <br>O <br>O <br>O <br>O <br>NA<br>O <br>NA<br>O <br>O <br>O <br>NA|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|true/false<br>true/false<br>true/false<br>true/false<br>true/false<br>false<br>true/false<br>false<br>true/false<br>true/false<br>true/false<br>false|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool<br>bool|Y <br>Y <br>Y <br>Y <br>Y <br>---<br>Y <br>---<br>Y <br>Y <br>Y <br>---|Y <br>Y <br>Y <br>Y <br>Y <br>---<br>Y <br>---<br>Y <br>Y <br>Y <br>---|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false<br>false<br>true<br>false<br>false<br>false<br>false<br>false|
|- reserved|- reserved|- reserved|12-15|12-15|||||||||NA|NA|NA||||||||---|---|false|false|false|false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|DistrSegmC|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>217(ACDTTU)|<br>217(ACDTTU)|<br>217(ACDTTU)|<br>217(ACDTTU)|<br>217(ACDTTU)|<br>217(ACDTTU)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|51|51|51|51|51|51|51|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|COV||MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|10|10|10|10|sec|sec|sec|Heartbeat:|Heartbeat:|Heartbeat:|15|15|min|min|min|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|<br>|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High||<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal|<br>  <br>Normal||<br>Low|<br>Low|<br>Low|<br>Low|<br>||||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|
|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.5.6.6 Parameter DistrSegmC

**FB:** **ACDTTU** **Property Name (Server):** **DistrSegmC** Mandatory
Optional
**Description:**
Number of the cooling distribution segment.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Cooling Segment M (0) 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA bool false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 217 (ACDTTU) Property ID: 101
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

###### 3.5.6.7 Parameter OutsideSensorZone

**FB:** **ACDTTU** **Property Name (Server):** **OutsideSensorZone** Mandatory
Optional
**Description:**
Number of the outside sensor zone.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Outside Sensor Zone M (0) 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA bool false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 217 (ACDTTU) Property ID: 102
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

|FB: ACDTTU|Col2|Col3|Property Name (Server): DistrSegmC|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|<br>Number of the cooling distribution segment.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|Number of the Cooling Segment|M|M|M|(0)  1...31|(0)  1...31|(0)  1...31|(0)  1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset<br>bool|Bitset<br>bool|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|

|FB: ACDTTU|Col2|Col3|Property Name (Server): OutsideSensorZone|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|M|M|M|(0)  1...31|(0)  1...31|(0)  1...31|(0)  1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset<br>bool|Bitset<br>bool|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|


-----

###### 3.5.6.8 Diagnostic Data ValueEnergyDemAct

**FB:** **ACDTTU** **Property Name (Server):** **ValueEnergyDemAct** Mandatory
Optional
**Description:**
Calculated value of energy demand.
**DPT:** Name DPT_Percent_U8 DPT ID 5.004 Datatype format U8
Field Description Sup. Range Unit Default
Value Calculated energy demand value M full % cs
**Communication:**

**DP Address:** IO Type(ID): 217 (ACDTTU) Property ID: 111
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
--
|FB: ACDTTU|Col2|Col3|Property Name (Server): ValueEnergyDemAct|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|<br>Calculated value of energy demand.|
|**DPT:**|Name|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPTPercentU8|DPT ID|5.004|5.004|5.004|5.004|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8|U8|U8|U8|U8|U8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|Calculated energy demand value|M|M|M|full|full|full|full|%|%|cs|cs|cs|cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|217 (ACDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|-|-|-|-|-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

#### 3.6 Ventilation Demand Transformer TU (VDTTU)

##### 3.6.1 Aims and objectives
###### The Functional Block ‘Ventilation Demand Transformer TU’ transforms the energy demand and the fresh air demand information out of the terminal units into a supply air temperature value set (heat and cool) and a fresh air demand value.

 The determination of the temperature values as well as the fresh air demand value is manufacturer specific.

 The limitation of the supply air temperature setpoint shall be set via the Parameter TempSupplyAirSetpMin and TempSupplyAirSetpMax.

 Example:

##### 3.6.2 Functional specification
###### Inputs

 • TempOutside This information contains the outside temperature, delivered from another device.



###### • EnergyDemAir
 (n times)

 • ValueEnergyDemAir
 (n times)

 • ContrModeAct
 (n times)

 • EmergMode
 (n times)

 • ValueFreshAirDem
 (n times)

 Outputs


###### This information is delivered by the TU controllers that need preconditioned air. (-100 % = full heating, +100 % = full cooling) The LTE information is completed with attributes containing information from the ContrMode and the EmergencyMode.

 This information is delivered by the controllers that need preconditioned air. (-100 % = full heating, +100 % = full cooling) (only in S-Mode separate, see EnergyDemAir)

 The controlling mode delivered by the TU controllers. (only in S-Mode separate, see EnergyDemAir)

 The emergency mode delivered by the supervisor. (only in S-Mode separate, see EnergyDemAir)

 This information is delivered by the TU controllers that need fresh air. (0% = minimum fresh air, 100 % = maximum fresh air)



###### • TempSupplyAirSetpSet This information contains the setpoints for the supply air temperature control (2 values, one for heating, one for cooling) as well as the information about the ContrMode and the EmergencyMode.

 • ValueFreshAirSetp This value represents the setpoint for fresh air demand from the supply air temperature control.


-----

###### Binding Groups (LTE)

 The Functional Block shows 2 different binding groups.

 • DistrSegmV This binding group defines the distribution segment ventilation.

 • OutsideSensorZone This binding group defines the outside sensor zone, from which the outside temperature will be taken.

 Parameters

 • TempSupplyAirSetpMin Minimum supply air temperature setting to ensure no condensation.

 • TempSupplyAirSetpMax Maximum supply air temperature setting to ensure no heat dumping or smell.

 Diagnostic Data

 • ValueEnergyDemAirActMin This value represents the minimum value of the energy demand inputs.

 • ValueEnergyDemAirActMax This value represents the maximum value of the energy demand inputs.

 • ValueFreshAirDemAct This value represents a theoretical average value for the fresh air demand. The calculation is company specific.

 Alarms

 • cs

##### 3.6.3 Constraints
###### None.


-----

##### 3.6.4 Functional Block Diagram


**IR**

**IR**


**IR**

**IR**


Ventilation Demand Transformer TU 248
(VDTTU)

Inputs Outputs

Binding Grp.: OutsideSensorZone_o

TempOutside

Binding Grp.: DistrSegmV_e

EnergyDemAir

  - ValueEnergyDemAir

  - ContrModeAct
TempSupplAirSetpSet

  - EmergMode M
(2)

|Col1|Col2|EnergyDemAir<br>- ValueEnergyDemAir<br>- ContrModeAct|Col4|
|---|---|---|---|
|||EnergyDemAir<br>-  ValueEnergyDemAir<br>-  ContrModeAct<br>|EnergyDemAir<br>-  ValueEnergyDemAir<br>-  ContrModeAct<br>|
|EnergyDemAir<br>-  ValueEnergyDemAir<br>-  ContrModeAct<br>-  EmergMode<br>|EnergyDemAir<br>-  ValueEnergyDemAir<br>-  ContrModeAct<br>-  EmergMode|EnergyDemAir<br>-  ValueEnergyDemAir<br>-  ContrModeAct<br>|EnergyDemAir<br>-  ValueEnergyDemAir<br>-  ContrModeAct<br>|
|EnergyDemAir<br>-  ValueEnergyDemAir<br>-  ContrModeAct<br>-  EmergMode<br>|EnergyDemAir<br>-  ValueEnergyDemAir<br>-  ContrModeAct<br>-  EmergMode|EnergyDemAir<br>-  ValueEnergyDemAir<br>-  ContrModeAct<br>||


**IR** ValueFreshAirDem

|Col1|Col2|ValueFreshAirDem|Col4|
|---|---|---|---|
|||ValueFreshAirDem|ValueFreshAirDem|
|<br>ValueFreshAirDem|ValueFreshAirDem|ValueFreshAirDem|ValueFreshAirDem|
|<br>ValueFreshAirDem|ValueFreshAirDem|ValueFreshAirDem||


-----

##### 3.6.5 Datapoint description
###### Overview

|Datapoints|Description / Remarks|Datapoint Type|Additional Info|
|---|---|---|---|
|**Inputs**||||
|Temp<br>Outside|Outside temperature actual value<br>with:<br>- COV and RepPer<br>- Z8  STATUS supported<br>from FB<br>'Outside Temperature Sensor'|LTE:   205.100<br>DPT_TempHVACAbs_Z<br>V16Z8 <br>S:   9.001<br>DPT_Value_Temp<br>F16|LTE: O<br>S:<br>(GO)<br>°C|
|n times||||
|Energy<br>Dem<br>Air|Energy demand value for Air<br>Handling Unit (Air)<br>-100 % = full heating<br>+100 % = full cooling<br>plus modes with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:    223.100<br>DPT_EnergyDemAir<br>V8N8N8 <br>S:<br>NA|LTE: M<br>S:<br>NA<br>-100° ... +100 %<br>plus modes|
|Value<br>Energy<br>Dem<br>Air|Energy demand value for Air<br>Handling Unit (Air)<br>-100 % = full heating<br>+100 % = full cooling with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:   6.001<br>DPT_Percent_V8<br>V8|LTE: NA<br>S:<br>(GO)<br>-100° ... +100 %|
|Contr<br>Mode<br>Act|Active Controlling Mode with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:<br>NA<br>S:    20.105<br>DPT_HVACContrMode<br>N8|LTE: NA<br>S:<br>(GO)<br>enum|
|Emerg<br>Mode|EmergencyMode with:<br>- COV and RepPer<br>from FB<br>HVAC Emergency Source|LTE:<br>NA<br>S:   20.106<br>DPT_HVACEmergMode<br>N8|LTE: NA<br>S:<br>(GO)<br>enum|
|Value<br>Fresh<br>Air<br>Demand|Value for primary fresh air demand<br>with:<br>- COV and RepPer<br>from FB<br>various TU controller|LTE:   202.001<br>DPT_RelValue_Z<br>U8Z8 <br>S:   5.004<br>DPT_Percent_U8<br>U8|LTE: O<br>S:<br>(GO)<br>%|
|**Outputs**||||
|Temp<br>Supply<br>Air<br>Setp<br>Set|Pair of temperature setpoints (for<br>heating and for cooling)<br>plus modes with<br>- COV and RepPer<br>to FB<br>'Supply Air Temperature Control'|LTE:   224.100<br>DPT_TempSupplyAirSetpSet<br>V16V16N8N8 <br>S:<br>NA|LTE: M<br>S:<br>NA<br>°C (2 values)<br>plus modes|
|Value<br>Fresh<br>Air<br>Setp|Value for fresh air demand with:<br>- COV and RepPer<br>to FB<br>'Supply Air Temperature Control'|LTE:   202.001<br>DPT_RelValue_Z<br>U8Z8 <br>S:<br>NA|LTE: M<br>S:<br>NA<br>%|


-----

|Datapoints|Description / Remarks|Datapoint Type|Additional Info|
|---|---|---|---|
|**Parameter**||||
|Distr<br>SegmV|LTE zoning number for<br>Distribution Segment Ventilation|202.002<br>DPT_UcountValue8_Z<br>U8Z8|M <br>1|
|Outside<br>Sensor<br>Zone|LTE zoning number for<br>Outside Sensor Zone|202.002<br>DPT_UcountValue8_Z<br>U8Z8|O <br>1|
|TempSupplyAirSetp<br>Min|Minimum supply air temperature<br>setting to ensure no condensation.|205.100<br>DPT_TempHVACAbs_Z|O|
|TempSupplyAirSetp<br>Max|Maximum supply air temperature<br>setting to ensure no heat dumping or<br>smell.|205.100<br>DPT_TempHVACAbs_Z|O|
|**Diagnostic Data**||||
|Value<br>Energy<br>Dem<br>Air<br>Act<br>Min|Minimum value of the energy<br>demand inputs|6.001<br>1)<br>DPT_Percent_V8<br>V8|O <br>-100° ... +100 %|
|Value<br>Energy<br>Dem<br>Air<br>Act<br>Max|Maximum value of the energy<br>demand inputs|6.001<br>1)<br>DPT_Percent_V8<br>V8|O <br>-100° ... +100 %|
|Value<br>Fresh<br>Air<br>Dem<br>Act|Theoretical, calculated value for the<br>fresh air demand|202.001<br>1)<br>DPT_RelValue_Z<br>U8Z8|O <br>%|



[1)] Implementation of Properties using standard DPT see chapter 1.3.2


-----

###### VDTTU Runtime Interworking - Dependence on Configuration Modes

**STANDARD EXTENDED**

**MODE** **MODE**

**Inputs** TempOutside **(GOb)** (GO) **O**

EnergyDemAir 1) **NAb** NA NA **M**

ValueEnergyDemAir 2) **(GOb)** (GO) **NA**

ContrModeActive 2) **(GOb)** (GO) **NA**

EmergMode 2) **(GOb)** (GO) **NA**

ValueFreshAirDem **(GOb)** (GO) **O**

**Outputs** TempSupplyAirSetpSet **NAb** NA NA **M**

ValueFreshAirSetp **NAb** NA NA **O**

[1)] combined information not available in S-Mode (see also [2)])�

[2)] single information of 1) (only in S-Mode available, see also [1)])

###### VDTTU LTE specific Properties

**Support**

**Parameter** DistrSegmV **M**

OutsideSensorZone **O**

###### VDTTU Standard Properties of Interface Objects (or memory mapped DP)

|Basic FB|Col2|Col3|STANDARD<br>MODE|EXTENDED<br>MODE|Col6|
|---|---|---|---|---|---|
|**Basic FB**|**Basic FB**|**Basic FB**|**S-Mode**|**Standard Mode**<br>**Interface**|**LTE-MODE**|
|**Inputs**|TempOutside|**(GOb) **||(GO)|**O **|
||EnergyDemAir<br>1)|**NAb **|NA|NA|**M **|
||ValueEnergyDemAir<br>2)|**(GOb) **||(GO)|**NA**|
||ContrModeActive<br>2)|**(GOb) **||(GO)|**NA**|
||EmergMode<br>2)|**(GOb) **||(GO)|**NA**|
||ValueFreshAirDem|**(GOb) **||(GO)|**O **|
|**Outputs**|TempSupplyAirSetpSet|**NAb **|NA|NA|**M **|
||ValueFreshAirSetp|**NAb **|NA|NA|**O **|

|ic Properties|Col2|Col3|
|---|---|---|
|||**Support**|
|**Parameter**|DistrSegmV|**M **|
||OutsideSensorZone|**O **|

|Col1|Col2|Support|
|---|---|---|
|**Parameter**|TempSupplyAirSetpMin|**O **|
||TempSupplyAirSetpMax|**O **|
|**DiagnosticData**|ValueEnergyDemAirEff|**O **|
||ValueFreshAirDemEff|**O **|


-----

##### 3.6.6 Detailed specification of the Datapoints

###### 3.6.6.1 Input TempOutside Standard Mode

DP Name: TempOutside Abbr.: --- Mandatory
FB Name: VDTTU Can be internal
**Description**
This information is provided by the Functional Block 'Outside Temperature Sensor'.
**Datapoint Type**
DPT_Name: DPT_Value_Temp
DPT Format: F16 DPT_ID: 9.001
Field Description Supp. Range Unit Default
O full °C cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|TempOutside|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor'.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|<br>DPTValueTemp|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|__<br>F16|DPTID:|DPTID:|DPTID:|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|9.001|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||O|O|full|full|°C|°C|°C|°C|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|31 min (rec.)|
||<br>Request|<br>Request|<br>Request|<br>Request|||||||<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:|<br>Polling:||||||||<br>Period:|<br>Period:|<br>Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

**FB:** **VDTTU** **LTE Client** **TempOutside** Mandatory
**Input Name:** Optional

**Description:**
This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the
STATUS of the information.
**DPT:** Name DPT_TempHVACAbs_Z DPT ID 205.100 Datatype format V16Z8
Field Description Sup. Unit Default
Temperature Outside temperature value M °C. cs
STATUS Bitset M

- OutOfService Sensor out of service M t/f false

- Fault Sensor value is corrupted O t/f false

- Overridden Sensor is temporarily overridden O t/f false

- InAlarm Sensor is in alarm O t/f false

- AlarmUnAck Acknowledgement of alarm O t/f false
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific OutsideSensorZone 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 320 (OTS) Property ID: 51
**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|**TempOutside**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|<br>This information is provided by the Functional Block 'Outside Temperature Sensor' and includes the<br>STATUS of the information.|
|**DPT:**|Name|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPT ID|DPT ID|DPT ID|205.100|205.100|205.100|205.100|205.100|Datatype format|Datatype format|Datatype format|Datatype format|V16Z8|V16Z8|V16Z8|V16Z8|V16Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|_<br><br>Description|Sup.|Unit|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature|Temperature|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|Outside temperature value|M|°C.|cs|cs|cs|cs|
|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|STATUS<br>-  OutOfService<br>-  Fault<br>-  Overridden<br>-  InAlarm<br>-  AlarmUnAck|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|Bitset<br>Sensor out of service<br>Sensor value is corrupted<br>Sensor is temporarily overridden<br>Sensor is in alarm<br>Acknowledgement of alarm|M <br>M <br>O <br>O <br>O <br>O|t/f<br>t/f<br>t/f<br>t/f<br>t/f|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|false<br>false<br>false<br>false<br>false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|OutsideSensorZone|1|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|<br>320 (OTS)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|51|51|51|51|51|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|**LTE-Service (polling):** <br>Read– Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.6.6.2 Input EnergyDemAir Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **VDTTU** **LTE Client** **EnergyDemAir** Mandatory
**Input Name:** Optional

**Description:**
This Information is provided by the TU controllers and contains the value for the energy demand as well
as the attributes
ContrModeAct and EmergencyMode.
**DPT:** Name DPT_EnergyDemAir DPT ID 223.100 Datatype format V8N8N8
Field Description Sup. Unit Default
Value Energy demand value M % cs
Mode M Enum 0
0  = Auto M
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
EmergMode M Enum 0
0  = Normal M
1  = EmergPressure 2  = EmergDepressure O
3  = EmergPurge 4  = EmergShutdown O
5  = EmergFire O
other enums. NA
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmV 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 261 (VAVCDA) Property ID: 75
**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|**EnergyDemAir**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|<br>This Information is provided by the TU controllers and contains the value for the energy demand as well<br>as the attributes<br>ContrModeAct and EmergencyMode.|
|**DPT:**|Name|DPTEnergyDemAir|DPTEnergyDemAir|DPTEnergyDemAir|DPTEnergyDemAir|DPTEnergyDemAir|DPTEnergyDemAir|DPTEnergyDemAir|DPTEnergyDemAir|DPT ID|DPT ID|DPT ID|223.100|223.100|223.100|223.100|223.100|Datatype format|Datatype format|Datatype format|Datatype format|V8N8N8|V8N8N8|V8N8N8|V8N8N8|V8N8N8|
|<br> _<br>Field|<br> _<br>Field|<br> _<br>Field|<br> _<br>Field|<br> _<br>Field|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|<br><br>Description|Sup.|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|Energy demand value|M|%|cs|cs|cs|cs|
|Mode|Mode|Mode|Mode|Mode|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|Enum|0|0|0|0|
|EmergMode|EmergMode|EmergMode|EmergMode|EmergMode|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|M <br>M <br>O <br>O <br>O <br>NA|Enum|0|0|0|0|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|1|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>261 (VAVCDA)|<br>261 (VAVCDA)|<br>261 (VAVCDA)|<br>261 (VAVCDA)|<br>261 (VAVCDA)|<br>261 (VAVCDA)|<br>261 (VAVCDA)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|75|75|75|75|75|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value|**Value after Power-up: ** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown||||
|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.6.6.3 Input ValueEnergyDemAir LTE-HEE Mode

 Not applicable.

 Standard Mode

DP Name: ValueEnergyDemAir Abbr.: --- Mandatory
FB Name: VDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the value for the energy demand.
**Datapoint Type**
DPT_Name: DPT_Percent_V8
DPT Format: V8 DPT_ID: 6.001
Field Description Supp. Range Unit Default
M full % cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ValueEnergyDemAir|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|<br>This Information is provided by the TU controllers and contains the value for the energy demand.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|<br>DPTPercentV8|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|__<br>V8|DPTID:|DPTID:|DPTID:|6.001|6.001|6.001|6.001|6.001|6.001|6.001|6.001|6.001|6.001|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||M|M|full|full|%|%|%|%|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.6.6.4 Input ContrModeAct LTE-HEE Mode

 Not applicable.

 Standard Mode

DP Name: ContrModeAct Abbr.: --- Mandatory
FB Name: VDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the active ContrMode.
**Datapoint Type**
DPT_Name: DPT_HVACContrMode
DPT Format: N8 DPT_ID: 20.105
Field Description Supp. Range Unit Default
Mode M 0...20 enum 0
0  = Auto M
1  = Heat 2  = MrningWarmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums. NA
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ContrModeAct|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|<br>This Information is provided by the TU controllers and contains the active ContrMode.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|<br>DPTHVACContrMode|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|DPTID:|DPTID:|DPTID:|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|20.105|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
|Mode|Mode|Mode|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|0   = Auto<br>1   = Heat<br>2   = MrningWarmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums.|M <br>M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|M <br>M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|0...20|0...20|enum|enum|enum|enum|0|0|0|0|0|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.6.6.5 Input EmergencyMode LTE-HEE Mode

 Not applicable.

 Standard Mode

DP Name: EmergMode Abbr.: --- Mandatory
FB Name: VDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the active EmergencyMode.
**Datapoint Type**
DPT_Name: DPT_HVAVEmergMode
DPT Format: N8 DPT_ID: 20.106
Field Description Supp. Range Unit Default
Mode M 0...5 Enum 0
0  = Normal M
1  = EmergPressure 2  = EmergDepressure O
3  = EmergPurge 4  = EmergShutdown O
5  = EmergFire O
other enums. NA
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|EmergMode|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|<br> <br>   <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|<br>This Information is provided by the TU controllers and contains the active EmergencyMode.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|<br>DPTHVAVEmergMode|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|_<br>N8|DPTID:|DPTID:|DPTID:|20.106|20.106|20.106|20.106|20.106|20.106|20.106|20.106|20.106|20.106|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|Range|Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
|Mode|Mode|Mode|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|0   = Normal<br>1   = EmergPressure<br>2   = EmergDepressure<br>3   = EmergPurge<br>4   = EmergShutdown<br>5   = EmergFire<br>other enums.|M <br>M <br>O <br>O <br>O <br>NA|M <br>M <br>O <br>O <br>O <br>NA|0...5|0...5|Enum|Enum|Enum|Enum|0|0|0|0|0|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||Power down:|Power down:|Power down:|Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.6.6.6 Input ValueFreshAirDem Standard Mode

DP Name: ValueFreshAirDem Abbr.: --- Mandatory
FB Name: VDTTU Can be internal
**Description**
This Information is provided by the TU controllers and contains the demand for fresh air.
**Datapoint Type**
DPT_Name: DPT_Percent_U8
DPT Format: U8 DPT_ID: 5.004
Field Description Supp. Range Unit Default
O full % cs
**Access Type**
♦ Input
N → this 1 → this
Spontaneous Cyclically: Time-out: 31 min (rec.)
Request Polling: Period:
**Communication Type**
♦ Group Object Datapoint Mandatory:
Default Group Address: --**Dynamics**
Power down: Save:
Power up: Value: No initialisation: Default value:
Saved value:
Read from bus:
**Exception Handling**
--**Special Features**
--
|DP Name:|Col2|ValueFreshAirDem|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Abbr.:|Col19|Col20|Col21|Col22|---|Col24|Col25|Col26|Mandatory|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|FB Name:|FB Name:|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|VDTTU|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal|Can be internal||||
|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|<br> <br> <br>**Description**|
|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|<br>This Information is provided by the TU controllers and contains the demand for fresh air.|
|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|**Datapoint Type**|
|<br>DPTName:|<br>DPTName:|<br>DPTName:|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|<br>DPTPercentU8|
|_<br>DPT Format:|_<br>DPT Format:|_<br>DPT Format:|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|__<br>U8|DPTID:|DPTID:|DPTID:|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|5.004|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|Description|_<br>Supp.|_<br>Supp.|<br>Range|<br>Range|Unit|Unit|Unit|Unit|Default|Default|Default|Default|Default|
||||||||||||||||||||||||O|O|full|full|%|%|%|%|cs|cs|cs|cs|cs|
|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|**Access Type**|
|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|<br>♦ Input|
||N → this|N → this||||||1 → this|1 → this|1 → this|1 → this|||||||||||||||||||||||||
||<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|<br>Spontaneous|||||||<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:|<br>Cyclically:||||||||Time-out:|Time-out:|Time-out:|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|31 min(rec.)|
||Request|Request|Request|Request|||||||Polling:|Polling:|Polling:|Polling:|Polling:|Polling:||||||||Period:|Period:|Period:||||||||||
|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|<br> <br> <br>**Communication Type**|
|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|♦ Group Object Datapoint|Mandatory:|Mandatory:|Mandatory:|||||||||
||<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|<br>Default Group Address:|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|**Dynamics**|
||<br>Power down:|<br>Power down:|<br>Power down:|<br>Power down:|Save:|Save:|Save:|Save:||||||||||||||||||||||||||||
||Power up:|Power up:|Power up:|Power up:|Value:|Value:|Value:|Value:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|No initialisation:|||||||Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|Default value:|||||||||
||||||||||<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:|<br>Saved value:||||||||||||||||||||||
||||||||||||||||||||||Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|Read from bus:|||||
|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|<br>**Exception Handling**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|
|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|**Special Features**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

**FB:** **VDTTU** **LTE Client** **ValueFreshAirDem** Mandatory
**Input Name:** Optional

**Description:**
This input is provided by the TU controllers and contains the value for the fresh air demand.
**DPT:** Name DPT_RelValue_Z DPT ID 202.001 Datatype format U8Z8
Field Description Sup. Unit Default
Value Fresh air demand value M % cs
STATUS M bitset

- OutOfService (OSV) OSV = value is not valid M true/false false

- all other bits not supported NA
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmV 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 261 (VAVCDA) Property ID: 76
**LTE-Service (event):** InfoReport Sniffer on Binding Group: -
InfoReport Timeout: 31 Min

**LTE-Service (polling):**

Read Wildcard / Resp Sniffer on Binding Group: -Read – Response

**Value after Power-up:** Default Value Stored Value
**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**LTE Client**<br>**Input Name:**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|**ValueFreshAirDem**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|<br>This input is provided by the TU controllers and contains the value for the fresh airdemand.|
|**DPT:**|Name|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPT ID|DPT ID|DPT ID|DPT ID|202.001|202.001|202.001|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br> _<br>Field|<br> _<br>Field|<br> _<br>Field|<br> _<br>Field|<br> _<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Unit|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Value|Fresh air demand value|Fresh air demand value|Fresh air demand value|Fresh air demand value|Fresh air demand value|Fresh air demand value|Fresh air demand value|Fresh air demand value|Fresh air demand value|Fresh air demand value|Fresh air demand value|Fresh air demand value|M|M|%|%|cs|cs|cs|cs|
|STATUS<br>-  OutOfService (OSV)<br>-allother bits|STATUS<br>-  OutOfService (OSV)<br>-allother bits|STATUS<br>-  OutOfService (OSV)<br>-allother bits|STATUS<br>-  OutOfService (OSV)<br>-allother bits|STATUS<br>-  OutOfService (OSV)<br>-allother bits|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|M <br>M <br>NA|M <br>M <br>NA|bitset<br>true/false|bitset<br>true/false|false|false|false|false|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|Configurable||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>261 (VAVCDA)|<br>261 (VAVCDA)|<br>261 (VAVCDA)|<br>261 (VAVCDA)|<br>261 (VAVCDA)|<br>261 (VAVCDA)|Property ID:|Property ID:|Property ID:|76|76|76|76|76|76|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|InfoReport Sniffer on Binding Group:|--|--|--|--|--|--|--|
|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|<br>**LTE-Service (event):** <br>InfoReport|Timeout:|Timeout:|Timeout:|Timeout:|31|31|31|31|31|31|31|Min|Min|Min|Min|Min|Min|Min|Min|Min|
|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|**LTE-Service (polling):** <br>Read – Response|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|<br> <br>Read Wildcard / Resp Sniffer on Binding Group: --|
|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value|**Value after Power-up:** <br>Default Value||Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value|Stored Value||||
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|||
|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|<br>   <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.6.6.7 Output TempSupplyAirSetpSet Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **VDTTU** **LTE Server** **TempSupplyAirSetpSet** Mandatory
**Output Name:** Optional

**Description:**
This output contains the setpoint values for heating and for cooling and attributes for the supply air
temperature controller.
**DPT:** Name DPT_ DPT ID 224.100 Datatype format V16V16N8N8

TempSupplAirSetpSet[2]

Field Description Sup. Range Unit COV Default
Temperature Temperature setpoint value for M full °C 0.2 cs
cooling

Temperature Temperature setpoint value for M full °C 0.2 cs
heating

Mode M 0...20 enum. Y 0
0  = Auto M
1  = Heat 2  = MrnngWmup O
3  = Cool 4  = Night Purge O
5  = Precool 6  = Off O
7  = Test 8  = EmergHeat O
9  = Fan only 10 = Free Cool O
11 = Ice 20 = NoDem O
other enums NA
EmergMode M 0...5 enum. Y 0
0  = Normal M
1  = EmrgPress 2  = EmrgDepress O
3  = EmrgPurge 4  = O
EmrgShutdown

5  = EmrgFire O
other enums NA
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmV 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 248 (VDTTU) Property ID: 51
**LTE-Services (event):** COV MinRepTime: 10 sec Heartbeat: 15 min

InfoReport Output per default communicating Binding Group Wildcard allowed

Tx Prio: High Normal Low

(LTE Read-Response
polling of the output

Transm after Power-up: Stored Value Act Value Default Value

shall always be
supported)

**Property-Service**
Read only Read/Write
**(individual access):**

**Exception Handling:** Save at Powerdown
--**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|**TempSupplyAirSetpSet**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|<br>This output contains the setpoint values for heating and for cooling and attributes for the supply air<br>temperature controller.|
|**DPT:**|Name|DPT_<br>TempSupplAirSetpSet[2]|DPT_<br>TempSupplAirSetpSet[2]|DPT_<br>TempSupplAirSetpSet[2]|DPT_<br>TempSupplAirSetpSet[2]|DPT_<br>TempSupplAirSetpSet[2]|DPT_<br>TempSupplAirSetpSet[2]|DPT_<br>TempSupplAirSetpSet[2]|DPT_<br>TempSupplAirSetpSet[2]|DPT ID|DPT ID|224.100|224.100|224.100|224.100|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|V16V16N8N8|V16V16N8N8|V16V16N8N8|V16V16N8N8|V16V16N8N8|V16V16N8N8|V16V16N8N8|
|Field|Field|Field|Description|Description|Description|Description|Description|Description|Description|Description|Description|Sup.|Sup.|Range|Range|Range|Range|Range|Unit|Unit|COV<br>|COV<br>|Default|Default|Default|Default|Default|
|Temperature|Temperature|Temperature|Temperature setpoint value for<br>cooling|Temperature setpoint value for<br>cooling|Temperature setpoint value for<br>cooling|Temperature setpoint value for<br>cooling|Temperature setpoint value for<br>cooling|Temperature setpoint value for<br>cooling|Temperature setpoint value for<br>cooling|Temperature setpoint value for<br>cooling|Temperature setpoint value for<br>cooling|M|M|full|full|full|full|full|°C|°C|0.2 <br>|0.2 <br>|cs|cs|cs|cs|cs|
|Temperature|Temperature|Temperature|Temperature setpoint value for<br>heating|Temperature setpoint value for<br>heating|Temperature setpoint value for<br>heating|Temperature setpoint value for<br>heating|Temperature setpoint value for<br>heating|Temperature setpoint value for<br>heating|Temperature setpoint value for<br>heating|Temperature setpoint value for<br>heating|Temperature setpoint value for<br>heating|M|M|full|full|full|full|full|°C|°C|0.2|0.2|cs|cs|cs|cs|cs|
|Mode|Mode|Mode|0   = Auto<br>1   = Heat<br>2   = MrnngWmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums|0   = Auto<br>1   = Heat<br>2   = MrnngWmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums|0   = Auto<br>1   = Heat<br>2   = MrnngWmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums|0   = Auto<br>1   = Heat<br>2   = MrnngWmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums|0   = Auto<br>1   = Heat<br>2   = MrnngWmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums|0   = Auto<br>1   = Heat<br>2   = MrnngWmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums|0   = Auto<br>1   = Heat<br>2   = MrnngWmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums|0   = Auto<br>1   = Heat<br>2   = MrnngWmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums|0   = Auto<br>1   = Heat<br>2   = MrnngWmup<br>3   = Cool<br>4   = Night Purge<br>5   = Precool<br>6   = Off<br>7   = Test<br>8   = EmergHeat<br>9   = Fan only<br>10 = Free Cool<br>11 = Ice<br>20 = NoDem<br>other enums|M <br>M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|M <br>M <br>O <br>O <br>O <br>O <br>O <br>O <br>NA|0...20|0...20|0...20|0...20|0...20|enum.|enum.|Y|Y|0|0|0|0|0|
|EmergMode|EmergMode|EmergMode|0   = Normal<br>1   = EmrgPress 2   = EmrgDepress<br>3   = EmrgPurge<br>4   =<br>EmrgShutdown<br>5   = EmrgFire<br>other enums|0   = Normal<br>1   = EmrgPress 2   = EmrgDepress<br>3   = EmrgPurge<br>4   =<br>EmrgShutdown<br>5   = EmrgFire<br>other enums|0   = Normal<br>1   = EmrgPress 2   = EmrgDepress<br>3   = EmrgPurge<br>4   =<br>EmrgShutdown<br>5   = EmrgFire<br>other enums|0   = Normal<br>1   = EmrgPress 2   = EmrgDepress<br>3   = EmrgPurge<br>4   =<br>EmrgShutdown<br>5   = EmrgFire<br>other enums|0   = Normal<br>1   = EmrgPress 2   = EmrgDepress<br>3   = EmrgPurge<br>4   =<br>EmrgShutdown<br>5   = EmrgFire<br>other enums|0   = Normal<br>1   = EmrgPress 2   = EmrgDepress<br>3   = EmrgPurge<br>4   =<br>EmrgShutdown<br>5   = EmrgFire<br>other enums|0   = Normal<br>1   = EmrgPress 2   = EmrgDepress<br>3   = EmrgPurge<br>4   =<br>EmrgShutdown<br>5   = EmrgFire<br>other enums|0   = Normal<br>1   = EmrgPress 2   = EmrgDepress<br>3   = EmrgPurge<br>4   =<br>EmrgShutdown<br>5   = EmrgFire<br>other enums|0   = Normal<br>1   = EmrgPress 2   = EmrgDepress<br>3   = EmrgPurge<br>4   =<br>EmrgShutdown<br>5   = EmrgFire<br>other enums|M <br>M <br>O <br>O <br>O <br>NA|M <br>M <br>O <br>O <br>O <br>NA|0...5|0...5|0...5|0...5|0...5|enum.|enum.|Y|Y|0|0|0|0|0|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical|||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>248 (VDTTU)|<br>248 (VDTTU)|<br>248 (VDTTU)|<br>248 (VDTTU)|<br>248 (VDTTU)|Property ID:<br>|Property ID:<br>|Property ID:<br>|Property ID:<br>|Property ID:<br>|Property ID:<br>|51|51|51|51|51|51|51|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|COV||MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|10|10|10|10|sec|sec|sec|Heartbeat:|Heartbeat:|15|15|15|min|min|min|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating||Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High||<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br>|<br>Low|<br>Low|<br>Low|<br>Low|||||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|
|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|||
|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|<br> <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.6.6.8 Output ValueFreshAirSetp Standard Mode

 Not applicable.

 LTE-HEE Mode

**FB:** **VDTTU** **LTE Server** **ValueFreshAirSetp** Mandatory
**Output Name:** Optional

**Description:**
This output contains the fresh air setpoint value for the supply air temperature controller.
**DPT:** Name DPT_RelValue_Z DPT ID 202.001 Datatype format U8Z8
Field Description Sup. Range Unit COV Default
Value Fresh air demand setpoint M full % 10 cs
value

STATUS M bitset.

- OutOfService (OSV) OSV = value is not valid O true/false Y false

- all other bits not supported NA
COMMAND not supported NA
**Communication:**

**Binding Group:**
Class Type Default
Geographical
Application Specific DistrSegmV 1
Unassigned Broadcast Configurable
**DP Address:** IO Type(ID): 248 (VDTTU) Property ID: 52
**LTE-Services (event):** COV MinRepTime: 10 sec Heartbeat: 15 min

InfoReport Output per default communicating Binding Group Wildcard allowed

Tx Prio: High Normal Low

(LTE Read-Response
polling of the output

Transm after Power-up: Stored Value Act Value Default Value

shall always be
supported)

**Property-Service**
Read only Read/Write
**(individual access):**

**Exception Handling:** Save at Powerdown
---**Special Features:**
--
|LTE-HEE Mode|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**FB:**<br>**VDTTU**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**LTE Server**<br>**Output Name:**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|**ValueFreshAirSetp**|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional|Mandatory<br>Optional||
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|<br>This output contains the fresh air setpoint value for the supply air temperature controller.|
|**DPT:**|Name|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPT ID|DPT ID|202.001|202.001|202.001|202.001|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Range|Range|Range|Range|Range|Unit|Unit|COV <br>|COV <br>|Default|Default|Default|Default|Default|
|Value|Value|Value|Value|Fresh air demand setpoint<br>value|Fresh air demand setpoint<br>value|Fresh air demand setpoint<br>value|Fresh air demand setpoint<br>value|Fresh air demand setpoint<br>value|Fresh air demand setpoint<br>value|Fresh air demand setpoint<br>value|Fresh air demand setpoint<br>value|M|M|full|full|full|full|full|%|%|10|10|cs|cs|cs|cs|cs|
|STATUS<br>-  OutOfService (OSV)<br>-allother bits|STATUS<br>-  OutOfService (OSV)<br>-allother bits|STATUS<br>-  OutOfService (OSV)<br>-allother bits|STATUS<br>-  OutOfService (OSV)<br>-allother bits|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|OSV = value is not valid<br>not supported|M <br>O <br>NA|M <br>O <br>NA|true/false|true/false|true/false|true/false|true/false|bitset.|bitset.|Y|Y|false|false|false|false|false|
|COMMAND|COMMAND|COMMAND|COMMAND|not supported|not supported|not supported|not supported|not supported|not supported|not supported|not supported|NA|NA|||||||||||||||
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|<br>**Binding Group:**|
|<br>Class|<br>Class|<br>Class|<br>Class|<br>Class|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Type|Default|Default|Default|Default|Default|Default|Default|Default|Default|Default|
|Geographical|Geographical|Geographical|Geographical|||||||||||||||||||||||||
|Application Specific|Application Specific|Application Specific|Application Specific||DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|DistrSegmV|1|1|1|1|1|1|1|1|1|1|
|Unassigned|Unassigned|Unassigned|Unassigned||Broadcast|Broadcast|Broadcast||Configurable|Configurable|Configurable|Configurable|Configurable|||||||||||||||
|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br> <br>**DP Address:**|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>IO Type(ID):|<br>248 (VDTTU)|<br>248 (VDTTU)|<br>248 (VDTTU)|<br>248 (VDTTU)|<br>248 (VDTTU)|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|52|52|52|52|52|52|52|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|COV||MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|MinRepTime:|10|10|10|10|sec|sec|sec|Heartbeat:|Heartbeat:|15|15|15|min|min|min|
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating|Output per default communicating||Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|Binding Group Wildcard allowed|||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High|<br>Tx Prio:<br>High||<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br> <br>Normal|<br>|<br>Low|<br>Low|<br>Low|<br>Low|||||
|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br>**LTE-Services (event):** <br>InfoReport<br>(LTE Read-Response<br>polling of the output<br>shall always be<br>supported)|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|<br> <br> <br> <br>Transm after Power-up: Stored Value<br>Act Value<br> Default Value|
|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|**Property-Service**<br>**(individual access):**|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|Read only<br>Read/Write|
|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|**Exception Handling:**|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|Save at Powerdown|||
|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|<br>   <br>----|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.6.6.9 Parameter DistrSegmV

**FB:** **VDTTU** **Property Name (Server):** **DistrSegmV** Mandatory
Optional
**Description:**
Number of the ventilation distribution segment.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Ventilation Segment M 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 248 (VDTTU) Property ID: 101
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value

**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

###### 3.6.6.10 Parameter OutsideSensorZone

**FB:** **VDTTU** **Property Name (Server):** **OutsideSensorZone** Mandatory
Optional
**Description:**
Number of the outside sensor zone.
**DPT:** Name DPT_UcountValue8_Z DPT ID 202.002 Datatype format U8Z8
Field Description Sup. Range Unit Default
Zone Number of the Outside Sensor Zone M (0) 1...31 1
STATUS Bitset

- OutofService zone active / inactive O true/false false

- all other bits not supported, fixed to '0' NA false
COMMAND enum cs

- NormalWrite M

- SetOSV & ResetOSV Set zone inactive / active O

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 248 (VDTTU) Property ID: 102
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value

**Special Features:**
The device is not LTE communicating in this zone if zone is 'OutOfService'.

|FB: VDTTU|Col2|Col3|Property Name (Server): DistrSegmV|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|<br>Number of the ventilation distribution segment.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Ventilation Segment|Number of the Ventilation Segment|Number of the Ventilation Segment|Number of the Ventilation Segment|Number of the Ventilation Segment|Number of the Ventilation Segment|Number of the Ventilation Segment|M|M|M|1...31|1...31|1...31|1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset|Bitset|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|101<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|

|FB: VDTTU|Col2|Col3|Property Name (Server): OutsideSensorZone|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|<br>Number of the outside sensor zone.|
|**DPT:**|Name|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPTUcountValue8Z|DPT ID|202.002|202.002|202.002|202.002|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Zone|Zone|Zone|Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|Number of the Outside Sensor Zone|M|M|M|(0)  1...31|(0)  1...31|(0)  1...31|(0)  1...31|||1|1|1|1|
|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|STATUS<br>- OutofService<br>- all other bits<br>COMMAND<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|zone active / inactive<br>not supported, fixed to '0'<br>Set zone inactive / active<br>not supported|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|O <br>NA<br>M <br>O <br>NA|true/false<br>enum|true/false<br>enum|true/false<br>enum|true/false<br>enum|Bitset|Bitset|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|false<br>false<br>cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|102<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|N° of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|<br>-|<br>-|<br>-|<br>-|<br>-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|<br>     <br>   <br>|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|<br>The device is not LTEcommunicating inthis zone if zone is 'OutOfService'.|


-----

###### 3.6.6.11 Parameter: TempSupplyAirSetpMin

**FB:** **VDTTU** **Property Name (Server): TempSupplyAirSetpMin** Mandatory
Optional
**Description:**
Min supply air temperature limitation for the supply air temperature controller. Supply air temperature
setpoint shall not be below this limit.
**DPT:** Name DPT_TempHVACAbs_Z DPT ID 205.100 Datatype format V16Z8
Field Description Sup. Range Unit Default
Temp Temperature value M full range ° C cs
Status bitset

- OutOfService Limitation active /inactive O true/false false

- all other flags not supported, fixed to ‘0’ NA
Command enum

- NormalWrite M

- SetOSV & ResetOSV Set limitation parameter inactive / O
active

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 248 (VDTTU) Property ID: 114
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level -- Write level -**Exception Handling:** Value after Powerup: Stored Value Act Value Default Value
-**Special Features:**
Limitation function is activated or deactivated by the ‘OutOfService’ Status

###### 3.6.6.12 Parameter: TempSupplyAirSetpMax

**FB:** **VDTTU** **Property Name (Server): TempSupplyAirSetpMax** Mandatory
Optional
**Description:**
Max supply air temperature limitation for the supply air temperature controller. Supply air temperature
setpoint shall not be above this limit.
**DPT:** Name DPT_TempHVACAbs_Z DPT ID 205.100 Datatype format V16Z8
Field Description Sup. Range Unit Default
Temp Temperature value M full range ° C cs
Status bitset

- OutOfService Limitation active /inactive O true/false false

- all other flags not supported, fixed to ‘0’ NA
Command enum

- NormalWrite M

- SetOSV & ResetOSV Set limitation parameter inactive / O
active

- all other commands not supported NA
**Communication:**

**DP Address:** IO Type(ID): 248 (VDTTU) Property ID: 115
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level -- Write level -**Exception Handling:** Value after Powerup: Stored Value Act Value Default Value
-**Special Features:**
Limitation function is activated or deactivated by the ‘OutOfService’ Status

|FB: VDTTU|Col2|Property Name (Server): TempSupplyAirSetpMin|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Mandatory<br>Optional|Col19|Col20|Col21|Col22|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|<br>Min supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be below this limit.|
|**DPT:**|Name|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPT ID|205.100|205.100|205.100|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|V16Z8|V16Z8|V16Z8|V16Z8|V16Z8|V16Z8|
|<br> _<br>Field|<br> _<br>Field|<br> _<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Temp|Temp|Temp|Temperature value|Temperature value|Temperature value|Temperature value|Temperature value|Temperature value|Temperature value|M|M|full range|full range|full range|full range|° C|° C|cs|cs|cs|cs|
|Status<br>- OutOfService<br>- all other flags|Status<br>- OutOfService<br>- all other flags|Status<br>- OutOfService<br>- all other flags|Limitation active /inactive<br>not supported, fixed to‘0’|Limitation active /inactive<br>not supported, fixed to‘0’|Limitation active /inactive<br>not supported, fixed to‘0’|Limitation active /inactive<br>not supported, fixed to‘0’|Limitation active /inactive<br>not supported, fixed to‘0’|Limitation active /inactive<br>not supported, fixed to‘0’|Limitation active /inactive<br>not supported, fixed to‘0’|O <br>NA|O <br>NA|true/false|true/false|true/false|true/false|bitset|bitset|false|false|false|false|
|Command<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|Command<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|Command<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- allother commands|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|M <br>O <br>NA|M <br>O <br>NA|||||enum|enum|||||
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|114<br>1|114<br>1|114<br>1|114<br>1|114<br>1|114<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|--|--|--|--|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|--|--|--|--|--|--|
|**Exception Handling:** <br>Value after Powerup:  Stored Value|**Exception Handling:** <br>Value after Powerup:  Stored Value|**Exception Handling:** <br>Value after Powerup:  Stored Value|**Exception Handling:** <br>Value after Powerup:  Stored Value|**Exception Handling:** <br>Value after Powerup:  Stored Value|**Exception Handling:** <br>Value after Powerup:  Stored Value|**Exception Handling:** <br>Value after Powerup:  Stored Value|**Exception Handling:** <br>Value after Powerup:  Stored Value|**Exception Handling:** <br>Value after Powerup:  Stored Value||Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|<br> <br> <br> <br>--|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|

|FB: VDTTU|Col2|Property Name (Server): TempSupplyAirSetpMax|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Mandatory<br>Optional|Col19|Col20|Col21|Col22|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|<br>Max supply air temperature limitation for the supply air temperature controller. Supply air temperature<br>setpoint shall not be above this limit.|
|**DPT:**|Name|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPTTempHVACAbsZ|DPT ID|205.100|205.100|205.100|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|V16Z8|V16Z8|V16Z8|V16Z8|V16Z8|V16Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Temp|Temp|Temp|Temperature value|Temperature value|Temperature value|Temperature value|Temperature value|Temperature value|Temperature value|M|M|full range|full range|full range|full range|° C|° C|cs|cs|cs|cs|
|Status<br>- OutOfService<br>- allother flags|Status<br>- OutOfService<br>- allother flags|Status<br>- OutOfService<br>- allother flags|Limitation active /inactive<br>not supported, fixed to ‘0’|Limitation active /inactive<br>not supported, fixed to ‘0’|Limitation active /inactive<br>not supported, fixed to ‘0’|Limitation active /inactive<br>not supported, fixed to ‘0’|Limitation active /inactive<br>not supported, fixed to ‘0’|Limitation active /inactive<br>not supported, fixed to ‘0’|Limitation active /inactive<br>not supported, fixed to ‘0’|O <br>NA|O <br>NA|true/false|true/false|true/false|true/false|bitset|bitset|false|false|false|false|
|Command<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- all other commands|Command<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- all other commands|Command<br>- NormalWrite<br>- SetOSV & ResetOSV<br>- all other commands|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|Set limitation parameter inactive /<br>active<br>not supported|M <br>O <br>NA|M <br>O <br>NA|||||enum|enum|||||
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|115<br>1|115<br>1|115<br>1|115<br>1|115<br>1|115<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|--|--|--|--|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|--|--|--|--|--|--|
|**Exception Handling: ** <br>Value after Powerup:Stored Value|**Exception Handling: ** <br>Value after Powerup:Stored Value|**Exception Handling: ** <br>Value after Powerup:Stored Value|**Exception Handling: ** <br>Value after Powerup:Stored Value|**Exception Handling: ** <br>Value after Powerup:Stored Value|**Exception Handling: ** <br>Value after Powerup:Stored Value|**Exception Handling: ** <br>Value after Powerup:Stored Value|**Exception Handling: ** <br>Value after Powerup:Stored Value|**Exception Handling: ** <br>Value after Powerup:Stored Value||Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|<br>     <br>   <br>  <br>--|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|<br>Limitation function is activated or deactivated by the ‘OutOfService’ Status|


-----

###### 3.6.6.13 Diagnostic Data ValueEnergyDemAirActMin

**FB:** **VDTTU** **Property Name (Server): ValueEnergyDemAirActMin** Mandatory
Optional
**Description:**
Calculated minimum value of energy demands.
**DPT:** Name DPT_Percent_V8 DPT ID 6.001 Datatype format V8
Field Description Sup. Range Unit Default
Value Calculated min energy demand value M full % cs
**Communication:**

**DP Address:** IO Type(ID): 248 (VDTTU) Property ID: 111
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
--
###### 3.6.6.14 Diagnostic Data ValueEnergyDemAirActMax

**FB:** **VDTTU** **Property Name (Server): ValueEnergyDemAirActMax** Mandatory
Optional
**Description:**
Calculated maximum value of energy demands.
**DPT:** Name DPT_Percent_V8 DPT ID 6.001 Datatype format V8
Field Description Sup. Range Unit Default
Value Calculated max energy demand value M full % cs
**Communication:**

**DP Address:** IO Type(ID): 248 (VDTTU) Property ID: 112
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
--
|FB: VDTTU|Col2|Property Name (Server): ValueEnergyDemAirActMin|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Mandatory<br>Optional|Col20|Col21|Col22|Col23|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|<br>Calculated minimum value of energy demands.|
|**DPT:**|Name|DPTPercentV8|DPTPercentV8|DPTPercentV8|DPTPercentV8|DPTPercentV8|DPT ID|6.001|6.001|6.001|6.001|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|V8|V8|V8|V8|V8|V8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Value|Value|Value|Calculated minenergy demand value|Calculated minenergy demand value|Calculated minenergy demand value|Calculated minenergy demand value|Calculated minenergy demand value|Calculated minenergy demand value|Calculated minenergy demand value|M|M|M|full|full|full|full|%|%|cs|cs|cs|cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|111<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|-|-|-|-|-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|

|FB: VDTTU|Col2|Property Name (Server): ValueEnergyDemAirActMax|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Mandatory<br>Optional|Col20|Col21|Col22|Col23|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|<br>Calculated maximum value of energy demands.|
|**DPT:**|Name|DPTPercentV8|DPTPercentV8|DPTPercentV8|DPTPercentV8|DPTPercentV8|DPT ID|6.001|6.001|6.001|6.001|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|V8|V8|V8|V8|V8|V8|
|<br> _<br>Field|<br> _<br>Field|<br> _<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Value|Value|Value|Calculated max energy demand value|Calculated max energy demand value|Calculated max energy demand value|Calculated max energy demand value|Calculated max energy demand value|Calculated max energy demand value|Calculated max energy demand value|M|M|M|full|full|full|full|%|%|cs|cs|cs|cs|
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|112<br>1|112<br>1|112<br>1|112<br>1|112<br>1|112<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|-|-|-|-|-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

###### 3.6.6.15 Diagnostic Data ValueFreshAirDemAct

**FB:** **VDTTU** **Property Name (Server):** **ValueFreshAirDemAct** Mandatory
Optional
**Description:**
Calculated value for fresh air demand.
**DPT:** Name DPT_RelValue_Z DPT ID 202.001 Datatype format U8Z8
Field Description Sup. Range Unit Default
Value Calculated value for fresh air demand M full % cs
STATUS not supported NA
COMMAND not supported NA
**Communication:**

**DP Address:** IO Type(ID): 248 (VDTTU) Property ID: 113
**(in the server)** Start-Index: 1 N° of elements 1

**Property access:** Read only Read/Write
**Protection** Read level  - Write level  **Exception Handling:** Value after Power-up: Stored Value Act Value Default Value
--**Special Features:**
--
|FB: VDTTU|Col2|Col3|Property Name (Server): ValueFreshAirDemAct|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Mandatory<br>Optional|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|**Description:**|
|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|<br>Calculated value for fresh airdemand.|
|**DPT:**|Name|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPTRelValueZ|DPT ID|202.001|202.001|202.001|202.001|Datatype format|Datatype format|Datatype format|Datatype format|Datatype format|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|U8Z8|
|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|<br>_<br>Field|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|_<br>Description|Sup.|Sup.|Sup.|Range|Range|Range|Range|Unit|Unit|Default|Default|Default|Default|
|Value|Value|Value|Value|Calculated value for fresh airdemand|Calculated value for fresh airdemand|Calculated value for fresh airdemand|Calculated value for fresh airdemand|Calculated value for fresh airdemand|Calculated value for fresh airdemand|Calculated value for fresh airdemand|M|M|M|full|full|full|full|%|%|cs|cs|cs|cs|
|STATUS|STATUS|STATUS|STATUS|not supported|not supported|not supported|not supported|not supported|not supported|not supported|NA|NA|NA|||||||||||
|COMMAND|COMMAND|COMMAND|COMMAND|not supported|not supported|not supported|not supported|not supported|not supported|not supported|NA|NA|NA|||||||||||
|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|**Communication:**|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|IO Type(ID):|IO Type(ID):|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|248 (VDTTU)<br>1|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|Property ID:|113<br>1|113<br>1|113<br>1|113<br>1|113<br>1|113<br>1|
|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|<br>**DP Address:**<br>**(in the server)**|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|Start-Index:|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|N°of elements|
|**Property access:**|**Property access:**|**Property access:**|**Property access:**|**Property access:**|Read only||Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write|Read/Write||||||||||
|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>**Protection**|<br>Read level|<br>Read level|-|-|-|-|-|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|<br>Write level|-|-|-|-|-|-|
|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value|**Exception Handling: ** <br>Value after Power-up:Stored Value||Act Value|Act Value|Act Value|Act Value|Act Value||Default Value|Default Value|Default Value|Default Value||||
|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|<br>     <br>   <br>  <br>---|
|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|**Special Features:**|
|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|<br>---|


-----

#### 3.7 Collection and Processing of Demand Information in LTE-HEE

##### 3.7.1 General remark to this chapter
###### The following description is only thought as example how the collection and processing of the demands may be realised.

 Final realisation is company specific!

##### 3.7.2 Plug & Play mechanism in the LTE-HEE implementation:
###### Remark: This mechanism is only possible in LTE-HEE implementations. 
 In the shared variable model (e.g. S-mode) implementation all “partners” of the demand transformers have to be linked and separate Group Addresses must be assigned for each Demand input signal. The number of “partners” has to be defined at design time of the product.

##### 3.7.3 Processing of the demand information
###### In LTE the demand transformers do not need to know which and how many consumers are allocated in the corresponding Distribution Segment. The demand transformer has no complete list of all controllers connected to it (no directory). Therefore adding or removing of “partners” is simple. 

 It is not necessary to store the demand information (data image) from all connected controller FB’s in the demand transformer in order to calculate the resulting demand e.g. the setpoint of the corresponding medium. Due to the “heartbeat” repetition of the demand information, it is sufficient to have a dynamic process image of the N temporary “most relevant” demands. 

 Out of this dynamic data image the entries with the highest priority (demand value and attributes) are taken for the calculation of the setpoint signals for the corresponding medium.

 3.7.3.1 Structure of the Main List: (proposal / example)

 Main List

 Entry N° EnergyDem Demand-attribute:  Source FB Source Timeout
 - ContrModeAct Type and Individual
 - EmergMode [*)] Instance Addr

 1

 2

 ...

 N > 8

 *) Ventilation demand transformer only

 3.7.3.2 Criteria for a new entry in the Main List: (proposal / example) Each received signal in the same Distribution Segment is checked whether it is relevant enough to become an entry of the list. The steps are as follows:

 1. First check if there is already an entry in the list with the same sender  (source individual address). If Yes: delete the entry in the list (in the next step the new data will be entered instead)
 2. Check demand attribute (ContrModeAct & EmergMode [*)]): 

|Main List|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|Entry N°|EnergyDem|Demand-attribute:<br>- ContrModeAct<br>- EmergMode*)|Source FB<br>Type and<br>Instance|Source<br>Individual<br>Addr|Timeout|
|1||||||
|2||||||
|...||||||
|N > 8||||||


-----

*) Example for Ventilation demand transformer

###### Information with: No Demand are ignored and not further processed Demand: If there is still free space in the list (void entries) the information is inserted in the list.

 3. The following rules apply if the new information has Demand but all positions in the list are already occupied with valid data.

 Signals with EmergMode ≠ 0 are prioritized to any “Normal” signals (ventilation demand transformer only). For the attributes a priority list has to be defined too. For signals with the same priority the following applies:  Check if the new demand information is higher than any other signals in the list:  If Yes: replace the lowest value in the list. (In the ventilation demand transformer positive and negative values have to be treated separate.)

 4. If one of the entries in the main list has a timeout, the entry shall be deleted.

 Out of the Main List the "highest" signal is used for transformation into the temperature setpoint. A void entry in the list is marked as:   ContrMode = NoDem   EmergMode = Normal

|Col1|EmergMode *)<br>E = 0|EmergMode *)<br>E = 1,2,3,4,5|
|---|---|---|
|ContrModeAct<br>C =  0,1,2,3,4,5,7<br>        8,9,10,12,|**Demand**|**Demand**|
|ContrModeAct<br>C =  6,11,20<br>and all others<br>|**No Demand**<br>|**Demand**<br>|


-----

