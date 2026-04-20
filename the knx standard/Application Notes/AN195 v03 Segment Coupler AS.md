KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

# Application Note 195/19 v03

**Title:** **Segment Coupler**

**Status:** Approved Standard

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2021.09.14

**Subject:** Coupler extensions to allow a Coupler within a Line.

**Documents** **Modified**

[01] Chapter 3/1/2 “Glossary” v01.04.00 AS of 2013.10.23

[02] Chapter 3/3/2 “Data Link Layer General” v01.02.02 AS of
2013.10.28

[03] Chapter 3/3/3 “Network Layer” v01.01.02 AS of 2013.10.28.

[04] Chapter 3/3/4 “Transport Layer”

[05] Chapter 3/5/1 “Resources” v01.09.03 AS of 2013.12.10

[06] Chapter 3/3/7 “Application Layer” v1.3.00 AS of 2010.10.22

[07] Volume 6 “Profiles” v01.13.02 AS of 2013.10.28
**Referred**

[08] AN158 “KNX Data Security” v04 AS of 2018.01.05

[09] AN161 “Coupler Model 2.0” v05 AS of 2015.11.05

[10] AN167 “Mask 091Ah Property based Configuration”

[11] AN189 “New routing algorithm for hc 7” v03 AS of 2018.03.27.

[12] AN192 “Coupler security extensions” v02 DV of 2018.07.29

[13] AN136 “A_NetworkParameter_Read for PID_OBJECT_TYPE in
Coupler” v02 DV of 2014.05.02

[14] AN201 “Coupler NL state machine modifications”

[15] Chapter 3/5/3 “Configuration Procedures” v01.05.02 AS

[16] Chapter 3/5/2 “Management Procedures” v01.09.02 AS

**Document updates**

**Version** **Date** **Modifications**
AN195 v01 2019.07.30 - Creation of the Draft Proposal.
KSG799-10 2019.11.25 - Inclusion of the KSG resolution of comments to v01 DP.
KSG799-11 2019.12.16 - Minor update after the KSG Core meeting of 2019.12.16.
KSG799-12 2020.02.27 - Proposal for the clarification of the specification for the

handling of broadcast and system broadcast messages.
KSG799-13 2020.03.31 - Update according the conclusions of the KSG Core online

meeting of 2020.03.25.
KSG799-13 2020.05.13 - Update according the e-mail of Dr Gütter or 2020.03.25.

Savedate: Filename: page 1 of 2
2021 09 14 AN195 v03 Segment Coupler AS docx

|Version|Date|Modifications|
|---|---|---|
|AN195 v01|2019.07.30|• Creation of the Draft Proposal.|
|KSG799-10|2019.11.25|<br>• Inclusion of the KSG resolution of comments to v01 DP.|
|KSG799-11|2019.12.16|<br>• Minor update after the KSG Core meeting of 2019.12.16.|
|KSG799-12|2020.02.27|<br>• Proposal for the clarification of the specification for the<br>handling of broadcast and system broadcast messages.|
|KSG799-13|2020.03.31|• Update according the conclusions of the KSG Core online<br>meeting of 2020.03.25.|
|KSG799-13|2020.05.13|<br>• Update according the e-mail of Dr Gütter or 2020.03.25.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**Version** **Date** **Modifications**
KSG799-14 2020.05.20 - Inclusion of the conclusions of the KSG Class “System

Extensions” online meeting of 2020.05.19.
```
               o PID_DA_FILTER_TABLE and PID_TEMP_DA_
```
FILTER_CONTROL in second Router Object.
```
               o Location of PID_COUPLER_TYPE.

```
KSG799-15 2020.06.15 - Notes and direct modifications (Table 2) from the KSG

Class “System Extensions” online meeting of 2020.06.15.
KSG799-16 2020.07.13 - Update according to the conclusions of the KSG Class

“System Extensions” online meeting of 2020.06.30.
```
               o Transformation of PID_COUPLER_TYPE into a

```
Function Property.
This version has not been distributed. The changes to convert
PID_COUPLER_TYPE into a new Property, as Function Property, are rolled
back according to the conclusion of the KSG Core meeting of 2020.09.07.
KSG799-17 2020.09.10 - Inclusion of the conclusions of the KSG Core meeting of

2020.09.07.
```
               o PID_COUPLER_TYPE remains a Data Property.
               o PID_MEDIUM_CONNECTION introduced.

```
KSG799-18 2020.10.01 - Inclusion of the conclusions of the KSG Core meeting of

2020.09.21.
```
               o PDT of PID_COUPLER_TYPE changed to N8.
               o Modification of

```
PID_MEDIUM_COMMUNICATION_ENABLE and
Master Reset Code 7
KSG799-19 2020.11.24 - Inclusion of the conclusions of the KSG Core meeting of

2020.11.16.
```
               o PID_MEDIUM_COMMUNICATION_ENABLE removed

```
again.
```
               o Inclusion of the resolution of the remaining comments of

```
Mr Winnewisser.
KSG799-20 2021.01.11 - Update according to the conclusions of the KSG Core

meeting of 2020.11.30.
KSG799-21 2021.01.27 - Inclusion of the conclusions of the KSG Core online

meeting of 2021.01.25.
KSG799-22 2021.02.02 - Inclusion of the conclusions of the KSG Core online

meeting of 2021.02.01.
```
               o Pseudo code in 2.3.3.1: braces and break.
               o Precise specification of “implementation specific”

```
reaction on unsupported values of
PID_COUPLER_TYPE in 3.4.
```
               o Added the A_NetworkParameter_Read-PDU in

```
2.5.1.3.1.
KSG799-23 2021.02.10 - Inclusion of the conclusions of the KSG Core meeting of

2021.02.08.
```
               o NM_Coupler_Scan_Directed hop_count_type_req

```
changed to either 0 or Network Parameter.
```
               o PID_MEDIUM_STATUS replaced by the new

```
PID_SEGMENT_STATUS.
```
               o Default values of PID_COUPLER_TYPE fixed.

```
Savedate: Filename: page 2 of 3
2021 09 14 AN195 v03 Segment Coupler AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG799-14|2020.05.20|• Inclusion of the conclusions of the KSG Class “System<br>Extensions” online meeting of 2020.05.19.<br>`o` PID_DA_FILTER_TABLE and PID_TEMP_DA_-<br>FILTER_CONTROL in second Router Object.<br>`o` Location of PIDCOUPLERTYPE.|
|KSG799-15|2020.06.15|__<br>• Notes and direct modifications (Table 2) from the KSG<br>Class“System Extensions” online meeting of 2020.06.15.|
|KSG799-16|2020.07.13|<br>• Update according to the conclusions of the KSG Class<br>“System Extensions” online meeting of 2020.06.30.<br>`o` Transformation of PID_COUPLER_TYPE into a<br>Function Property.<br>This version has not been distributed. The changes to convert<br>PID_COUPLER_TYPE into a new Property, as Function Property, are rolled<br>back according to the conclusion of the KSG Core meeting of 2020.09.07.|
|KSG799-17|2020.09.10|<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2020.09.07.<br>`o` PID_COUPLER_TYPE remains a Data Property.<br>`o` PIDMEDIUMCONNECTION introduced.|
|KSG799-18|2020.10.01|__<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2020.09.21.<br>`o` PDT of PID_COUPLER_TYPE changed to N8. <br>`o` Modification of<br>PID_MEDIUM_COMMUNICATION_ENABLE and<br>Master Reset Code 7|
|KSG799-19|2020.11.24|• Inclusion of the conclusions of the KSG Core meeting of<br>2020.11.16.<br>`o` PID_MEDIUM_COMMUNICATION_ENABLE removed<br>again.<br>`o` Inclusion of the resolution of the remaining comments of<br>Mr Winnewisser.|
|KSG799-20|2021.01.11|<br>• Update according to the conclusions of the KSG Core<br>meeting of 2020.11.30.|
|KSG799-21|2021.01.27|• Inclusion of the conclusions of the KSG Core online<br>meeting of 2021.01.25.|
|KSG799-22|2021.02.02|• Inclusion of the conclusions of the KSG Core online<br>meeting of 2021.02.01.<br>`o` Pseudo code in 2.3.3.1: braces and break.<br>`o` Precise specification of “implementation specific”<br>reaction on unsupported values of<br>PID_COUPLER_TYPE in 3.4.<br>`o` Added the A_NetworkParameter_Read-PDU in<br>2.5.1.3.1.|
|KSG799-23|2021.02.10|<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2021.02.08.<br>`o` NM_Coupler_Scan_Directed hop_count_type_req<br>changed to either 0 or Network Parameter.<br>`o` PID_MEDIUM_STATUS replaced by the new<br>PID_SEGMENT_STATUS.<br>`o` Default values of PIDCOUPLERTYPE fixed.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**Version** **Date** **Modifications**
KSG799-24 2021.02.17 - Inclusion of feedback from Mr Winnewisser, mail of

2021.02.16 16.41.
KSG799-25 2021.02.23 - Inclusion of the conclusions of the KSG Core meeting of

2021.02.22.
```
               o Device verification prior to configuration done with

```
PID_MANUFACTURER_ID and PID_HARDWARE_TYPE instead of with PID_PROGRAM_VERSION.
```
               o Redefinition of hop_count_type.

```
KSG799-26 2021.03.19 - Inclusion of the conclusions of the KSG Core meeting of

2021.03.08.
```
               o Inclusion of Master Reset Erase Codes to be supported

```
in the Profiles: see 2.8.3.3.1.
```
               o Immediate effect on change of PID_COUPLER_TYPE.

```
AN195 v02 2021.04.29 - Creation of the Draft for Voting.
KSG799-27 2021.06.08 - Accepted all preceding changes.

                - First proposal of resolution of comments from Final Voting.
KSG799-29 2021.07.05 - Inclusion of the conclusions of the KSG Core meeting of

2021.06.28.
```
               o Indications for the test specifications: 3.4.1.

```
`o` Handling of not supported values of

PID_COUPLER_TYPE and in the Management
Procedures.
```
               o Legend of the Profiles: 2.8.1.

```
KSG799-30 2021.08.19 - Inclusion of the feedback of the review phase in KSG.
```
               o 2.5.1.3 “NM_Coupler_Scan_Directed” removed the

```
parameter hop_count_type_res,
KSG799-31 2021.08.26 - Inclusion of the conclusions of the KSG Core meeting of

2021.08.23.
```
               o PID_DA_FILTER_TABLE: handling of request to write

```
array length (element 0). See here. Dedicated
indications in 3.4.1.2.
KSG799-32 2021.09.07 - Inclusion of the conclusions of the KSG Core meeting of

2021.09.06.
```
               o E_WRITE_ACCESS_DENIED in PID_DA_FILTER_
```
TABLE, integration indications and testing indications.
```
               o Minor updates in 2.4.2.3.4 and 3.4.

```
AN195 v03 2021.09.14 - Editorial correction in 2.5.1.3.

               - Creation of the Approved Standard.

**Contents**

###### 1 Purpose, motivation and scope ........................................................................ 5
 1.1 Purpose ................................................................................................... 5 1.2 Motivation ................................................................................................ 5
 1.2.1 Use cases ......................................................................................... 5 1.3 Scope ...................................................................................................... 6
 1.3.1 Proposed requirements ..................................................................... 6

Savedate: Filename: page 3 of 4
2021 09 14 AN195 v03 Segment Coupler AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG799-24|2021.02.17|• Inclusion of feedback from Mr Winnewisser, mail of<br>2021.02.16 16.41.|
|KSG799-25|2021.02.23|• Inclusion of the conclusions of the KSG Core meeting of<br>2021.02.22.<br>`o` Device verification prior to configuration done with<br>PID_MANUFACTURER_ID and PID_HARDWARE_-<br>TYPE instead of with PID_PROGRAM_VERSION.<br>`o` Redefinition of hopcounttype.|
|KSG799-26|2021.03.19|__<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2021.03.08.<br>`o` Inclusion of Master Reset Erase Codes to be supported<br>in the Profiles: see 2.8.3.3.1.<br>`o` Immediate effect on change of PIDCOUPLERTYPE.|
|AN195 v02|2021.04.29|__<br>• Creation of the Draft for Voting.|
|KSG799-27|2021.06.08|<br>• Accepted all preceding changes.<br>• First proposal of resolution of comments from Final Voting.|
|KSG799-29|2021.07.05|<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2021.06.28.<br>`o` Indications for the test specifications: 3.4.1.<br>`o` Handling of not supported values of<br>PID_COUPLER_TYPE andin the Management<br>Procedures. <br>`o` Legend of the Profiles: 2.8.1.|
|KSG799-30|2021.08.19|<br>• Inclusion of the feedback of the review phase in KSG.<br>`o` 2.5.1.3 “NM_Coupler_Scan_Directed” removed the<br>parameter hopcounttyperes,|
|KSG799-31|2021.08.26|___<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2021.08.23.<br>`o` PID_DA_FILTER_TABLE: handling of request to write<br>array length (element 0). Seehere. Dedicated<br>indications in 3.4.1.2.|
|KSG799-32|2021.09.07|<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2021.09.06.<br>`o` E_WRITE_ACCESS_DENIED inPID_DA_FILTER_-<br>TABLE, integration indications and testing indications. <br>`o` Minor updates in2.4.2.3.4 and 3.4.|
|AN195 v03|2021.09.14|<br>• Editorial correction in 2.5.1.3.<br>• Creation of the Approved Standard.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

###### 2 Specification ....................................................................................................... 6
 2.1 Terms and definitions .............................................................................. 6 2.2 Topology ................................................................................................. 7 2.3 Stack and communication ....................................................................... 7
 2.3.1 Physical Layer ................................................................................... 7 2.3.2 Data Link Layer - General ................................................................. 8 2.3.3 Network Layer ................................................................................... 8 2.3.4 Transport Layer ............................................................................... 14 2.3.5 Secure Application Layer ................................................................ 14 2.3.6 Application Layer ............................................................................ 14 2.4 Resource definition or used Resources................................................. 15
 2.4.1 Introduction ..................................................................................... 15 2.4.2 Router Object .................................................................................. 15 2.5 Management Procedures ...................................................................... 27
 2.5.1 Network Management Procedures .................................................. 27 2.5.2 Property based configuration .......................................................... 31 2.6 Configuration Procedures ...................................................................... 32
 2.6.1 SNA Procedures ............................................................................. 32 2.6.2 Device Identification ........................................................................ 32 2.7 Usage and context ................................................................................ 32 2.8 Profile definition ..................................................................................... 33
 2.8.1 General ........................................................................................... 33 2.8.2 Common Profile .............................................................................. 33 2.8.3 Configuration and Management – S-Mode – Couplers ................... 34 2.8.4 Interface Object and Properties ...................................................... 37

 3 Impact and dependencies ............................................................................... 39
 3.1 System specification (“Handbook”) dependencies ................................ 39 3.2 Configuration interworking ..................................................................... 39 3.3 Run-time Interworking ........................................................................... 40 3.4 Registration and certification ................................................................. 40
 3.4.1 Test specifications .......................................................................... 40 3.5 Integration and common tool impact ..................................................... 41
 3.5.1 ETS Product data extension ........................................................... 41 3.5.2 SupportsCouplerSecurityExtensionsCommunication path .............. 41 3.5.3 PID_COUPLER_TYPE ................................................................... 41 3.5.4 PID_TEMP_DA_FILTER_CONTROL and roaming interfaces ........ 41 3.6 Security ................................................................................................. 41 3.7 Risks and compatibility issues ............................................................... 42
 3.7.1 Individual Address scan .................................................................. 42 3.7.2 Tunneling Client changing Tunnelling Address ............................... 42

Savedate: Filename: page 4 of 5
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

### 1 Purpose, motivation and scope

 _This entire clause 1 is not intended for integration in the KNX Specifications._

#### 1.1 Purpose
This document specifies the “Segment Coupler”, to allow positioning a Router within a
Subnetwork.

#### 1.2 Motivation

##### 1.2.1 Use cases

###### 1.2.1.1 Use case 1 – extend an existing KNX TP1 installation with some RF devices
If an installation is extended, it may not be possible or wanted to draw additional TP1 cables.
In this case, using the KNX RF Communication Medium calls. Yet, KNX RF is defined at the
level of a Line. If the TP1 medium is used at the Line level already, then no KNX TP1/RF
Media Coupler can be installed in that Line.

- If a TP1 Main Line is available, then the TP1/RF Media Coupler can be connected to the
Main Line.
This may geographically not be the best possible position for the TP1/RF Media
Coupler, to permit the best possible RF communication.

EXAMPLE 1 The TP1/RF Media Coupler may have to be mounted in a further separated distribution
cabinet.

- If no TP1 Main Line is available, then the TP1 Line has to be promoted to Main Line.
This however requires that the IAs of all TP1 devices are re-assigned.

For these reasons, it is more convenient if the TP1/RF Media Coupler can be installed within
a Line, use an IA within that Line and all RF devices use still free Device Addresses within
that Line.

This should allow filtering of point-to-point - and group communication, as no unnecessary
Telegrams should be sent on the RF medium.

###### 1.2.1.2 Use case 2 – extend an existing KNX TP1 installation with TP1 devices but allow filtering
An existing TP1 installation is extended with further TP1 components that are mounted
outside the house or building. For ease of integration, the IAs of the before installed TP1
devices should not change, but for security, it would be best if between the outside part and
the existing inside part, traffic filtering is possible. None of the existing Coupler types
(Table 12 in [02]: “KNX TP1 Bridge” or “KNX TP1 Repeater”) however allows filtering.

Therefore, the proposed Segment Coupler is an allowed extension also for a TP1/TP1
Coupler.

###### 1.2.1.3 Use case 3 – connect lots of small TP1 islands to KNXnet/IP with filtering
With a traditional topology, it is possible to connect 15*15 = 225 TP1 lines to an IP backbone
via KNXnet/IP Routers. If this is not sufficient, KNXnet/IP Routers could be used as Segment
Couplers. In this case, the Primary Segment of the Line has medium type “IP” and each of
the KNXnet/IP Segment Couplers connects a TP1 Segment to it.

Savedate: Filename: page 5 of 6
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

Therefore, the proposed Segment Coupler is an allowed extension also for a KNXnet/IP
Router.

#### 1.3 Scope

##### 1.3.1 Proposed requirements
This document specifies the requirements of a KNX Coupler for usability and use as a
“Segment Coupler”. The proposed specification is a Profile Extension to the functionality of
any Coupler Model, both Coupler Model 1.x as well as Coupler Model 2.0 (ref. Table 1 in

[09]). The proposed functionality is not reserved for the TP1/RF Media Coupler 2920h or to
Coupler Model 2.0. No new Profile is defined.

### 2 Specification

#### 2.1 Terms and definitions

 _The grey formatted terms are repeated from [01] for proper understanding._
_Only the blue formatted entry has to be integrated in [01]._

**Term** **Definition**

Device Address Part of the Individual Address identifying a device in one
_Subnetwork. Depending on the Configuration Mode, the Device_
Address shall be unique within a Subnetwork. It is a one octet
value.

Coupler System Device interconnecting two Subnetworks or two
_Segments of the same Subnetwork._
A Coupler can be a Router, a TP1 Repeater or a TP1 Bridge.

Router A Router is a Coupler that can filter the Frames that it forwards in
either direction will forward a Frame from one Subnetwork to
another depending on the Destination Address and position of
devices in the network.
A Router can be either a Line Coupler, Backbone Coupler or a
Segment Coupler.
See also: _Transparent Media Coupler_

Segment Physical elementary subdivision of a Physical Line.

Segment Coupler Router for connecting two Segments of the same Subnetwork of
the same or of different Physical Layer Types.

Primary Segment The single Segment of a Line where (a) any Coupler to the next
higher topology level is connected and (b) the Primary Sides of
any Segment Couplers are connected.

Secondary Segment A Segment that is not the Primary Segment.

Savedate: Filename: page 6 of 7
2021 09 14 AN195 v03 Segment Coupler AS docx

|Term|Definition|
|---|---|
|Device Address|Part of the_Individual Address_ identifying a device in one<br>_Subnetwork_. Depending on the_Configuration Mode_, the Device<br>Address shall be unique within a_Subnetwork_. It is a one octet<br>value.|
|Coupler|System Device interconnecting two_Subnetworks_ or two<br>_Segments_ of the same_Subnetwork_. <br>A Coupler can be a_Router,_a TP1 Repeater or a TP1_Bridge_.|
|Router|A Router is a Coupler that can filter the Frames that it forwards in<br>either direction~~will forward a~~~~_Frame_ from one~~~~_Subnetwork_ to~~<br>~~another d~~epending on the_Destination Address_ and position of<br>devices in the network.<br>A Router can be either a Line Coupler, Backbone Coupler ora <br>Segment Coupler. <br>See also:<br>_Transparent Media Coupler_|
|Segment|Physical elementary subdivision of a_Physical Line_.|
|Segment Coupler|Router for connecting two Segments of the same Subnetwork of<br>the same or of different Physical Layer Types.|
|Primary Segment|The single Segment of a Line where (a) any Coupler to the next<br>higher topology level is connected and (b) the Primary Sides of<br>any Segment Couplers are connected.|
|Secondary Segment|A Segment that is not the Primary Segment.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

#### 2.2 Topology
The Segment Coupler can be connected at any part of the installation. It can thus also be
installed in a Main Line or in a Backbone Line. It shall however not be connected to a
Secondary Segment that is already connected to the Secondary Side of another Segment
Coupler, TP1 Bridge or TP1 Repeater.

#### 2.3 Stack and communication

##### 2.3.1 Physical Layer

 _This clause it NOT intended for inclusion in the KNX Specifications._

There are no limitations towards the used communication media, other than in the existing
Coupler Profiles. This means that the Segment Coupler can be used in the

   - TP1/TP1 Coupler

   - TP1/RF Media Coupler

   - KNXnet/IP Router

   - …

Savedate: Filename: page 7 of 8
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

##### 2.3.2 Data Link Layer - General

 _To keep the overview, Table 12 in [02] shall be adapted as follows._
_This table shall replace the existing table._

**Table 1 – Overview of KNX Coupler models**

**Coupler type**

**KNX Router**
**KNX** **KNX**

**Line Coupler**

**Segment** **TP1** **TP1**

**or Backbone**

**Coupler** **Bridge** **Repeater**

**Feature** **Coupler**

Positioned between

     - Subnetworks Yes No No No

     - physical seg- No Yes Yes Yes
ments of the
same
Subnetwork

Filtering

     - Group Yes Yes No No[ a].
Telegrams

     - Point-to-point Subnetwork Subnetwork No No
Telegrams Address Address +

Device
Address

hop count

     - Frames with blocked blocked forwarded blocked
hop_count 0

     - hop count in Decremented Decremented unchanged Decremented
forwarded
Frames

a A device that can be configured as Router and as TP1 Repeater or TP1 Bridge
holds a Filter Table. Filtering shall however be disabled to comply with this
requirement.

##### 2.3.3 Network Layer

 _Chapter 3/3/3 “Network Layer” ([03]) shall be updated by adding the following clause as new clause_
_2.4.2.5 at the end of the paper. (This has the advantage that existing references in other papers to [03]_
_can be kept unchanged and that the below clause can re-use the definition of the abbreviations, events_
_and actions._

###### 2.3.3.1 Detection of the Coupler type

 _In [03] clause 2.4.2.4, the following part shall be removed._

A Router shall be a Line Coupler or a Backbone Coupler. This shall depend on its position in
the topology. This shall be reflected in the value of the Individual Address of the device. (The
Individual Address is specified in [02].)

Savedate: Filename: page 8 of 9
2021 09 14 AN195 v03 Segment Coupler AS docx

|Col1|Coupler type|Col3|Col4|Col5|
|---|---|---|---|---|
||**KNX Router**|**KNX Router**|**KNX**<br>**TP1**<br>**Bridge**|**KNX**<br>**TP1**<br>**Repeater**|
|**Feature**|**Line Coupler**<br>**or Backbone**<br>**Coupler**|**Segment**<br>**Coupler**|**Segment**<br>**Coupler**|**Segment**<br>**Coupler**|
|Positioned between|||||
|• <br>Subnetworks|Yes|No|No|No|
|• <br>physical seg-<br>ments of the<br>same<br>Subnetwork|No|Yes|Yes|Yes|
|Filtering|||||
|• <br>Group<br>Telegrams|Yes|Yes|No|No a.|
|• <br>Point-to-point<br>Telegrams|Subnetwork<br>Address|Subnetwork<br>Address +<br>Device<br>Address|No|No|
|hop count|||||
|• <br>Frames with<br>hop_count 0|blocked|blocked|forwarded|blocked|
|• <br>hop count in<br>forwarded<br>Frames|Decremented|Decremented|unchanged|Decremented|
|a <br>A device that can be configured as Router and as TP1 Repeater or TP1 Bridge<br>holds a Filter Table. Filtering shall however be disabled to comply with this<br>requirement.|a <br>A device that can be configured as Router and as TP1 Repeater or TP1 Bridge<br>holds a Filter Table. Filtering shall however be disabled to comply with this<br>requirement.|a <br>A device that can be configured as Router and as TP1 Repeater or TP1 Bridge<br>holds a Filter Table. Filtering shall however be disabled to comply with this<br>requirement.|a <br>A device that can be configured as Router and as TP1 Repeater or TP1 Bridge<br>holds a Filter Table. Filtering shall however be disabled to comply with this<br>requirement.|a <br>A device that can be configured as Router and as TP1 Repeater or TP1 Bridge<br>holds a Filter Table. Filtering shall however be disabled to comply with this<br>requirement.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

♦ If used as Backbone Coupler

− Device Address: shall be 0
− Line Address: shall be 0
− Area Address: shall differ from 0

The Backbone Coupler shall separate the Backbone Line from the Main Line.

♦ If used as Line Coupler

− Device Address: shall be 0
− Line Address: shall differ from 0
− Area Address: shall differ from 0

The following clauses specify the routing algorithm for a Router, which can either be a Line
Coupler or a Backbone Coupler, depending on his position in the topology.

 _This shall be replaced by the following._

The Coupler Type shall be detected by evaluation of the Area Address, the Line Address,
the Device Address and the value of PID_COUPLER_TYPE of the Coupler.

The Coupler shall route messages according the Coupler Type that results from this
evaluation and as specified for each Coupler Type further in this document.

 _This is intended for integration in [03], which already specified the routing algortihm for all existing Coupler_
_types. This Application Note only specifies the routing algorithm for the Segment Coupler._

IF Device Address != 0 THEN // Also if mounted in the Backbone Line.
switch (PID_COUPLER_TYPE)
case 0:
Coupler Type = TP1 Bridge; // clause 2.4.2.2 in [03] applies
break;
case 1:
Coupler Type = TP1 Repeater; // clause 2.4.2.3 in [03] applies
break;
case 2:
Coupler Type = Segment Coupler // clause 2.3.3.2 below applies
break;
default:
Coupler Type = TP1 Bridge or TP1 Repeater or Segment Coupler
// The implementation shall behave as either one of these.
ELSEIF Line Address != 0 THEN Coupler Type = Line Coupler
ELSEIF Area Address != 0 THEN Coupler Type = Backbone Coupler
ELSE exit // IA 0.0.0 is not foreseen.

Savedate: Filename: page 9 of 10
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

###### 2.3.3.2 State Machine of Network Layer for Segment Coupler

 _This is largely copied from AN189 “NL routing algorithm for hc 7” ([06]) and thus already takes into_
_account the current handling of hc 7._

 _Broadcast communication_

If an L_Data.ind with destination_address = 0 and address_type = multicast is received then
the Segment Coupler shall do the following.

- It shall pass the message as an N_Data_Broadcast.ind to the Network Layer user.

- If the hop_count is in the range [1...7] and the filter condition for Broadcast frames is
true, then the Segment Coupler shall decrement the hop_count and shall transmit the
service parameters of the L_Data.ind with the corresponding service parameters of a
L_Data.req to the other side. If the hop_count is 0 then the message shall not be routed.

 _Group communication_

_If the Coupler hosts an application, then, also group messages may be passed to the Network Layer user. This is_
_not in the scope of this paper and is discussed in the KSG discussion topic [KSG00251-00] “Application in a_
_Coupler”._

If an L_Data.ind with destination_address ≠ 0 and address_type = ´multicast´ and hop_count
in [1...7] is received and the filter condition for the Destination Address is true, then the
Segment Coupler shall decrement the hop_count and shall transmit the service parameters
of the L_Data.ind with the corresponding service parameters of a L_Data.req to the other
side.

 _Point-to-point communication_

If an L_Data.ind with address_type = ´individual´ and Destination Address equal to the
Individual Address of the Segment Coupler is received, then the Segment Coupler shall
process the L_Data.ind identical to a normal device, see clause 2.2.1 of [03].

If an L_Data.ind with address_type = ‘individual’ and Destination Address not equal to the
Individual Address of the Segment Coupler and hop_count in [1...7] is received, and the
Destination Address matches the conditions for routing, then the Segment Coupler shall
decrement the hop_count and shall transmit the service parameters of the L_Data.ind with
the corresponding service parameters of an L_Data.req to the other side. If the hop_count is
0 then the message shall not be routed.

 _System broadcast communication_

If an L_SystemBroadcast.ind and hop_count in [1 … 7] is received and the filter condition for
System Broadcast frames is true, then the Segment Coupler shall decrement the hop_count
and shall transmit the service parameters with the corresponding service parameters of
either L_SystemBroadcast.ind or L_Data.req to the other side., according its current
configuration of routing of system broadcast services.

 _All other cases_

Otherwise the Network layer of the Router shall discard the L_Data.ind.

An N_Data_Individual.req service invoked by the Network Layer user at the Router shall be
processed as described in clause 2.2.1 of [03].

Savedate: Filename: page 10 of 11
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**Notes**

If a Coupler receives a message with hop count = 0 on any side, then it will not route that
message to any other side, but it may, depending on its configuration (IA, GA, broadcast or
other) pass the message in the internal stack to the Network Layer user and above. If the
Coupler responds to that message, then the response may however be sent on these sides.
An external observer may thus record a response message without apparent preceding
request message.

**More detailed Routing Algorithm**

 _For the definition of the actions and abbreviations in the below, please refer to clause 2.2.1.1.2.4 “State_
_Machine of Network Layer for Routers” of [11]._

2.3.3.2.1 Routing in case of a Group Destination Address
Depending on parameter setting of the Filter Table in the Segment Coupler, Telegrams on
point-to-multipoint connectionless communication mode with standard Group Addresses,
shall be routed or blocked from the Primary Side to the Secondary Side and vice versa. The
routing can be summarized as follows.

**if routing condition = TRUE then**
**if 0h < C ≤ 7h then ROUTE_DECREMENTED**
**else** IGNORE_ACKED [1)]
**else IGNORE_TOTALLY**
For these Telegrams on point-to-multipoint connectionless communication mode with
standard Group Addresses it shall via parameterization of the Segment Coupler be possible
to:

   - generally block routing,

   - generally route or

   - route according to the Filter Table.

2.3.3.2.2 Routing in case of an Individual Destination Address

2.3.3.2.2.1 Introduction
Depending on parameterization of the Segment Coupler, Telegrams on point-to-point
connectionless - or connection-oriented communication mode shall be routed or blocked
from the Primary Side to the Secondary Side and vice versa.

The routing decision depends on the Destination Address of the Telegram and the following
resources of the Segment Coupler.

   - Coupler model specific Resources controlling the routing of point-to-point
messages:

    - For 0912h and 091Ah, these are the bits PHYS_ROUTE of the Properties
PID_MAIN_LCCONFIG (PID = 52) and PID_SUB_LCCONFIG (PID = 53)[ 2)].

    - No such Resource is standardized for the TP1/RF Media Coupler according to
Coupler Model 2.0, but there may be implementation specific Resources with
the same effect.

1) The Acknowledgement Frame is sent by the Data Link Layer.
2) The other bits of these Properties are not considered here, their interpretation is not modified.

Savedate: Filename: page 11 of 12
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

These resources are designated by the term “Control” in the following.

   - The Individual Address of the Coupler.

   - The “Coupler type” as defined in 2.4.2.3.

   - The Resource “Device Address Filter Table” containing information about the
Device Addresses located at the Secondary Side of the Segment Coupler, as
defined in 2.4.2.1.

   - The Resource “Temporary Device Filter” as defined in 2.4.2.2

   - If the Coupler supports the Coupler Security Extensions according to [12], the
Unicast White List.

The routing can be summarized as follows.

2.3.3.2.2.2 Routing from the Primary Side to the Secondary Side
The condition for routing of point-to-point connectionless or connection-oriented Telegrams
from the Primary Segment to the Secondary Segment shall be evaluated as follows.

**if DA = own IA then FORWARD_LOCALLY**
**elseif Control evaluates to PHYS_LOCK then IGNORE_TOTALLY**
**elseif Control evaluates to PHYS_UNLOCK then**

**if (Coupler Security Extensions are supported)**
**and (“Unicast Mode” associated with Secondary Side ≠ “Enabled”)**
**and (Evaluate Unicast White List = Block) then IGNORE_ACKED**
**elseif 0h < C ≤ 7h then ROUTE_DECREMENTED**
**else IGNORE_ACKED**
**else**

**if ZS ≠ own Subnetwork Address then IGNORE_TOTALLY**
**elseif (Evaluate DA Filter Table primary-to-secondary = Pass)**
**or (Evaluate Temporary IA Filter[Primary-to-Secondary] = Pass) then**

/* Note: This part is identical to the part below the
“Control evaluates to PHYS_UNLOCK” condition above */
**if (Coupler Security Extensions are supported)**
**and (“Unicast Mode” associated with Secondary Side ≠ “Enabled”)**
**and (Evaluate Unicast White List = Block) then IGNORE_ACKED**
**elseif 0h < C ≤ 7h then ROUTE_DECREMENTED**
**else IGNORE_ACKED**
**else IGNORE_TOTALLY**
**else IGNORE_TOTALLY**

If no “Control” Resource exists in an implementation then the algorithm shall be performed
as if the Control resource evaluates to PHYS_ROUT.

The actual evaluation steps in an implementation may be done in any order as long as the
result is the same for any given input.

NOTE 1 If the Coupler contains additional Individual Addresses (e.g. for KNXnet/IP Tunnelling), these need to be added to
the Device Address Filter Table by the MaC during configuration of the Coupler.

Savedate: Filename: page 12 of 13
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

2.3.3.2.2.3 Routing from the Secondary Side to the Primary Side
The condition for routing of point-to-point connectionless Telegrams or connection-oriented
Telegrams from the Secondary Segment to the Primary Segment shall be evaluated as
follows.

**if DA = own IA then FORWARD_LOCALLY**
**elseif Control evaluates to PHYS_LOCK then IGNORE_TOTALLY**
**elseif Control evaluates to PHYS_UNLOCK then**

**if (Coupler Security Extensions are supported)**
**and (“Unicast Mode” associated with Secondary Side ≠ “Enabled”)**
**and (Evaluate Unicast White List = Block) then IGNORE_ACKED**
**elseif 0h < C ≤ 7h then ROUTE_DECREMENTED**
**else IGNORE_ACKED**
**else**

**if (ZS ≠ own Subnetwork Address)**
**or ((Evaluate DA Filter Table secondary-to-primary = Pass)**
and (Evaluate Temporary IA Filter[secondary-to-primary] = Pass)) then

/* Note: This part is identical to the part below the
“Control evaluates to PHYS_UNLOCK” condition above */
**if (Coupler Security Extensions are supported)**
**and (“Unicast Mode” associated with Secondary Side ≠ “Enabled”)**
**and (Evaluate Unicast White List = Block) then IGNORE_ACKED**
**elseif 0h < C ≤ 7h then ROUTE_DECREMENTED**
**else IGNORE_ACKED**
**else IGNORE_TOTALLY**
**else IGNORE_TOTALLY**

The actual evaluation steps in an implementation may be done in any order as long as the
result is the same for any given input.

If no “Control” Resource exists in an implementation, the algorithm shall be performed as if
the Control resource evaluates to PHYS_ROUT.

This rule applies also to Telegrams originating from additional Individual Addresses of the
Segment Coupler itself.

2.3.3.2.3 Routing in case of broadcast services

 _This clause is not intended for integration in the KNX Specifications._

This is not different compared to existing Router Models. Please refer to 2.3.3.6 “Routing in
case of broadcast services” in [09]. (This is itself already an update of the existing Network
Layer specification in [03]).

2.3.3.2.4 Routing in case of System Broadcast Destination Address
This is not different compared to existing Coupler Models.

NOTE 2 This also means that the SBC control Properties like PID_RF_SBC_CONTROL and PID_IP_SBC_CONTROL are
used in the same way as for RF media Couplers and KNXnet/IP Routers configured with a Device Address 0.

Savedate: Filename: page 13 of 14
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

2.3.3.2.4.1 Ad-hoc routing

 _This clause it NOT intended for inclusion in the KNX Specifications._

**Use case**

A programming interface (e.g. USB interface) is temporarily connected to the Secondary
Side of a Segment Coupler. The MaC shall have the means to discover this situation and
temporarily enable point-to-point communication across the Segment Coupler.

If not already known to the MaC, the MaC queries the Coupler located immediately above
the Segment to which it is connected using an A_NetworkParameter_Read-service as
specified in 2.5.1.3, using hop_count = 0. If this Coupler is found and the Device Address
part of the Individual Address of the Coupler is not 0 then the MaC shall query the Coupler
Type as specified in 2.4.2.3 to determine if it is configured as Segment Coupler.

The MaC may enable routing of Telegrams addressed to itself using the
PID_TEMP_DA_FILTER_CONTROL as specified in 2.4.2.2.

NOTE 3 If the Coupler implements the optional “Coupler Security Extensions” Profile according to [12] and the “Unicast
_Mode” is not “Enabled”, the MaC has to create a whitelist entry in addition._

##### 2.3.4 Transport Layer

 _This clause is not intended for integration in the KNX Specifications._

This is not different compared to existing Coupler Models.

**hop_count_type**

 _This clause is intended for integration in the KNX Specifications._

In the specification of the Transport Layer services, the service parameter hop_count_type is
specified as follows, in all TL-services.

hop_count_type hop count 7 or Network Layer Parameter

AN189 ([11]) “New routing algorithm for hc 7” abandons the special meaning of the value 7
of the hop count and only allows the Network Layer parameter. This however does not allow
to send and respond with hop count value 0, as needed further in 2.5.1.3
NM_Coupler_Scan_Directed. Therefore, the service parameter hop_count_type in the TLservice primitives shall be redefined as follows.

hop_count_type hop count value [0 to 7] or Network Layer Parameter

##### 2.3.5 Secure Application Layer

 _This clause is not intended for integration in the KNX Specifications._

The support of Data Security and the support of the “Coupler Security Extensions” (Security
Proxy [12]) is not mandatory, for none of the implemented Communication Media.

EXAMPLE 2 Though this is required for the TP1/KNX RF Multi Media Coupler, this is not required for the
Segment Coupler in general.
EXAMPLE 3 For a TP1/TP1 Segment Coupler this is not required.

##### 2.3.6 Application Layer

 _This clause is not intended for integration in the KNX Specifications._

This is not different compared to existing Coupler Models.

Savedate: Filename: page 14 of 15
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**hop_count_type**

 _This clause is intended for integration in the KNX Specifications._

In the specification of the Application Layer services, the service parameter hop_count_type
is specified as follows, in all AL-services.

hop_count_type hop count 7 or standard

or

hop_count_type hop count 0, 7 or Network Layer Parameter

AN189 ([11]) “New routing algorithm for hc 7” abandons the special meaning of the value 7
of the hop count and only allows the Network Layer parameter. This however does not allow
to send and respond with hop count value 0, as needed further in 2.5.1.3
NM_Coupler_Scan_Directed. Therefore, the service parameter hop_count_type in the ALservice primitives shall be redefined as follows.

hop_count_type hop count value [0 to 7] or Network Layer Parameter

#### 2.4 Resource definition or used Resources

##### 2.4.1 Introduction

 _This clause is NOT intended for integration in the KNX Specifications._

As the Segment Coupler is an optional extension to any existing Coupler Model, already the
following Resources are foreseen.

   - **Filter Table (for Group Addresses)**

   - **“Property based configuration”**
This is required for mask 0912h already in V06 “Profiles” ([07]) clause A.3.13
(originating from AN153 “Mask 0912h Property based configuration”, already
integrated in the KNX Specifications) and for mask 091Ah in AN167 ([10]). This is
mandatory for new implementations.

##### 2.4.2 Router Object

###### 2.4.2.1 PID_DA_FILTER_TABLE (PID = 68)

 _This clause shall be added to [05] in clause 5 “Resources for Couplers”._

**●** **Property name:** Device Address Filter Table

**●** **Property Datatype:** PDT_BITSET8[32] (alt.: PDT_GENERIC_01[32])

**●** **Datapoint Type:** None.

**●** **Access Policy:** 3FF/00C

**●** **Access Level:** 3/2

2.4.2.1.1 Abstract Resource definition
The Device Address Filter Table shall contain the Device Addresses of the devices that are
located in the Subnetwork connected to the Secondary Side of the Segment Coupler.

Savedate: Filename: page 15 of 16
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

2.4.2.1.2 Location
The Device Address Filter Table shall be a Property based Resource that shall be located in
a second or further instance of Router Object that represents a Secondary Side of the
Coupler; it shall not be located in the first instance of the Router Object.

2.4.2.1.3 Format and encoding
The Device Address Filter Table shall be an array Property of 32 elements of one octet. This
size is mandatory and constant. Every bit in this array shall identify for exactly one Device
Address in the Subnetwork connected to the Secondary Side of the Segment Coupler.

**Relation between Device Addresses and PID_DA_FILTER_TABLE**

Every Device Address shall be related to exactly one bit in PID_DA_FILTER_TABLE as
follows.

_Device Address = (array index -1) x 8 + bit position_

**PID_DA_FILTER_TABLE**
bit position (7 to 0)
Array Index **b7** **b6** **b5** **b4** **b3** **b2** **b1** **b0**
1 DA 7 DA 6 DA 5 DA 4 DA 3 DA 2 DA 1 DA 0
2 DA 15 DA 14 DA 13 DA 12 DA 11 DA 10 DA 9 DA 8
… … … … … … … … …
31 DA 247 DA 246 DA 245 DA 244 DA 243 DA 242 DA 241 DA 240
32 DA 255 DA 254 DA 253 DA 252 DA 251 DA 250 DA 249 DA 248

NOTE Array index 0 contains the current number of elements of the array Property and is not shown.

**Figure 1 - PID_DA_FILTER_TABLE**

**Encoding**

Every bit shall be encoded as follows.

**Value** **Primary to** **Secondary to** **Remark**
**secondary** **primary**

0 Block Pass The Device Address is not located on the Secondary Side
of the Segment Coupler.

1 Pass Block The Device Address is located on the Secondary Side of
the Segment Coupler.

**Figure 2 – Encoding of a Device Address flag in PID_DA_FILTER_TABLE**

**KNX Default value**

The KNX Default value of all bits shall be 0.

**Special bits**

The format of PID_DA_FILTER_TABLE allows also to address the Device Address of the
Segment Coupler itself. Point-to-point messages addressed to the IA of the Segment
Coupler shall however always be handled as specified in 2.3.3.2.2, regardless of the value of
this Device Address flag; the MaC may set any value at that position and the MaS shall
ignore the value of that flag: regardless of the value of this flag, these messages shall not be
routed and shall be passed up in the local stack.

Savedate: Filename: page 16 of 17
2021 09 14 AN195 v03 Segment Coupler AS docx

|PID DA FILTER TABLE<br>_ _ _|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>bitposition(7 to 0)|<br>bitposition(7 to 0)|<br>bitposition(7 to 0)|<br>bitposition(7 to 0)|<br>bitposition(7 to 0)|<br>bitposition(7 to 0)|<br>bitposition(7 to 0)|<br>bitposition(7 to 0)|
|**b7 **|**b6 **|**b5 **|**b4 **|**b3 **|**b2 **|**b1 **|**b0 **|
|DA 7|DA 6|DA 5|DA 4|DA 3|DA 2|DA 1|DA 0|
|DA 15|DA 14|DA 13|DA 12|DA 11|DA 10|DA 9|DA 8|
|…|…|…|…|…|…|…|…|
|DA 247|DA 246|DA  245|DA 244|DA 243|DA 242|DA 241|DA 240|
|DA 255|DA 254|DA 253|DA 252|DA 251|DA 250|DA 249|DA 248|

|Value|Primary to<br>secondary|Secondary to<br>primary|Remark|
|---|---|---|---|
|0|Block|Pass|The Device Address is not located on the Secondary Side<br>of the Segment Coupler.|
|1|Pass|Block|The Device Address is located on the Secondary Side of<br>the Segment Coupler.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

The format of PID_DA_FILTER_TABLE allows encoding the Device Address 00h, which is
reserved for the Line Coupler or Backbone Coupler. It is however not allowed that these
Couplers are positioned at the Secondary Side of the Segment Coupler. The value 1 at this
position thus points to an unwanted, faulty configuration. The MaC shall not set this bit to 1.
For the MaS, it is implementation specific whether or not point-to-point messages addressed
to that Device Address 00h are passed or blocked.

2.4.2.1.4 Usage by the Management Server (Coupler)
**Evaluation for the direction Primary Side to Secondary Side**

In the routing algorithm specified in 2.3.3.2.2.2, the “Device Address Filter Table” shall be
evaluated to “Pass” if the load state of the Router Object in which the Property is hosted, is
“Loaded” and the bit corresponding to the destination Device Address is 1, otherwise as
“Block”.

**Evaluation for the direction Secondary Side to Primary Side**

In the routing algorithm specified in 2.3.3.2.2.3, the “Device Address Filter Table” shall be
evaluated to “Pass” if the load state of the Router Object is “Loaded” and the bit
corresponding to the destination Device Address is 0, otherwise as “Block”.

This results in the following table.

**Table 2 – Evaluation of the Load State and the Device Address Filter Table**

**Evaluation of the Device**

**Address Filter Table**

**Primary** **Secondary**

**Load State** **Bit** **to Secondary** **to Primary**

= Loaded cleared Block Pass

= Loaded set Pass Block

≠ Loaded cleared Block Block

≠ Loaded set Block Block

The Device Address Filter Table and the Temporary IA (2.4.2.2) are independent functions
of the Segment Coupler. The Load State Machine and the Load State dependency shall be
independent of whether a Temporary IA is set or not and of its possible value.

**Error and exception handling**

This Array Property shall have a fixed number of elements. If the MaS receives a request to
write this number (element 0), then the default error handling as specified for the requesting
service shall apply, regardless of whether the requested value equals the current value or
not.

 _For an A_PropertyValue_Write-PDU this means that an A_PropertyValue_Response-PDU shall be sent_
_with the nr_of_elem zero and no data._

 _The following is normative and shall be complied with. The common specification of the exception_
_handling of writing start_index will be subject to a different Application Note._

For an A_PropertyExtValue_WriteCon this means that an A_PropertyExtValue_WriteConRes-PDU will be sent with nr_of_elem set to zero and the start_index set to same value as
received with the request. The return_code field shall be E_WRITE_ACCESS_DENIED.
For an A_PropertyExtValue_WriteUnCon-service this means that the service request will be
ignored.

Savedate: Filename: page 17 of 18
2021 09 14 AN195 v03 Segment Coupler AS docx

|Load State|Bit|Evaluation of the Device<br>Address Filter Table|Col4|
|---|---|---|---|
|**Load State**|**Bit**|**Primary**<br>**to Secondary **|**Secondary**<br>**to Primary **|
|= Loaded|cleared|Block|Pass|
|= Loaded|set|Pass|Block|
|≠ Loaded|cleared|Block|Block|
|≠ Loaded|set|Block|Block|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**Device Address Filter Table and Master Reset**

**Erase Code** **Effect**

01h Confirmed Restart not influenced

02h Reset to default state KNX default

05h ResetParam not influenced

06h ResetLinks not influenced

07h Reset to default without IA KNX default

08h Erase persistently stored application data not influenced

n.a. Local Reset to default state KNX default

n.a. Power Cycle not influenced

2.4.2.1.5 Usage by the Management Client
A MaC having the information which Device Addresses are used on the Subnetwork
connected to the Secondary Side of the Segment Coupler shall write this table during device
commissioning. The table shall also include any additional Individual Address of the Coupler
itself.

NOTE 4 If the MaC does not have this information, it may still configure the Coupler as TP1 Repeater or TP1 Bridge, if both
sides have medium type TP1.

###### 2.4.2.2 PID_TEMP_DA_FILTER_CONTROL (PID = 69)

 _This clause shall be added to [05] in clause 5 “Resources for Couplers”._

**●** **Property name:** Temporary Device Address Filter Control

**●** **Property Datatype:** PDT_FUNCTION

**●** **Datapoint Type:** None.

**●** **Access Policy:** 3FF/00C

**●** **Access Level:** 3/2

2.4.2.2.1 Abstract Resource definition
To allow communication to a MaC temporarily located in the Secondary Segment, the
Segment Coupler shall have a Resource “Temporary IA”. The value of this Resource is
either “not set”, or an Individual Address valid for a device in the Secondary Segment. The
Resource may be stored in volatile memory.

NOTE 5 It is sufficient to store the Device Address part, as the Subnetwork Address part is already determined by the
Segment Coupler IA. As 0 is no valid Device Address for a device on a Secondary Segment this value can be conveniently
used in an implementation to represent “not set”.

The Function Property PID_TEMP_DA_FILTER_CONTROL shall serve to control the
current value of the Resource.

2.4.2.2.2 Location
The Temporary Device Address Filter Control shall be a Function Property located in a
second or further instance of the Router Object that represents the Secondary Side of the
Coupler; it shall not be located in the first instance of the Router Object.

Savedate: Filename: page 18 of 19
2021 09 14 AN195 v03 Segment Coupler AS docx

|Erase Code|Effect|
|---|---|
|01h Confirmed Restart|not influenced|
|02h Reset to default state|KNX default|
|05h ResetParam|not influenced|
|06h ResetLinks|not influenced|
|07h Reset to default without IA|KNX default|
|08h Erase persistently stored application data|not influenced|
|n.a. Local Reset to default state|KNX default|
|n.a. Power Cycle|not influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

2.4.2.2.3 Write (A_FunctionPropertyCommand-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

WriteServiceID

00h See below. See below.

**Overview Write ServiceIDs**

**Table 3 – Overview PID_TEMP_DA_FILTER_CONTROL WriteServiceIDs**

**WriteServiceID** **Description**

00h Set Temporary IA

01h Clear all Temporary IAs

2.4.2.2.3.1 WriteServiceID 00h: Set temporary IA

octet 10 octet 11 octet 12

ServiceID ServiceInfo

reserved Set temporary Device
IA Address

00h 00h

**Figure 3 - A_FunctionProperty_Write-PDU for Write ServiceID 00h for**
**PID_TEMP_DA_FILTER_CONTROL**

The MaC shall use this command to temporarily add its Individual Address to the list of
Individual Addresses located in the Secondary Segment.

NOTE 6 The MaC does not explicitly set its full Individual Address, but only the Device Address part. The
MaS (Coupler) completes this to a full IA by adding its own Subnetwork Address.
Only one current temporary address shall be supported. If the “Set temporary IA”
command is received while another Individual Address is currently the Temporary IA,
the existing Temporary IA shall be overwritten.

**Success**

If the MaS can successfully handle the command then it shall use the Device Address
given in the service and prefix it with its own Subnetwork Address to build the new value
of the Temporary IA and respond with an A_FunctionPropertyState_Response-PDU as
in Figure 4 and Return Code E_SUCCESS, which shall mean that the MaS has
successfully set the requested temporary IA.

Savedate: Filename: page 19 of 20
2021 09 14 AN195 v03 Segment Coupler AS docx

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||WriteServiceID||
|00h|See below.|See below.|

|WriteServiceID|Description|
|---|---|
|00h|Set Temporary IA|
|01h|Clear all Temporary IAs|

|octet 10|octet 11|octet 12|
|---|---|---|
||ServiceID|ServiceInfo|
|reserved|Set temporary<br>IA|Device<br>Address|
|00h|00h||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

octet 10 octet 11

Return Code ServiceID

E_SUCCESS Set Temporary
IA

00h 00h

**Figure 4 - A_FunctionPropertyState_Response-PDU for WriteServiceID 00h for**
**PID_TEMP_DA_FILTER_CONTROL**

The MaS shall revoke the current temporary IA if within 60 seconds no
PID_TEMP_DA_FILTER_CONTROL command is received from the MaC. The MaC may
extend this period by sending another “Set Temporary IA“ command before this timeout is
reached. This shall be the only way how the timeout period shall be extended.

EXAMPLE 4 The MaS shall not extend the timeout triggered by messages that use the Temporary IA.
**Error and exception handling**

   - **Exception: Requested Temporary IA is in the Device Address Filter Table**
This command shall be interpreted independently of the Device Address Filter
_Table (PID_DA_FILTER_TABLE) and of the Load State of the hosting Router_
Object and any change of value or state of either of these, also while a Temporary
_IA is set. That situation shall not lead to an error of this Function Property or the_
further handling of the Temporary IA. The requested Temporary IA shall be
accepted, and the request shall be responded positively with E_SUCCESS.

   - **Exception: The Device Address part of the Individual Address contained in**
**the field Individual Address (ServiceInfo) is 0.**
This is an error and the MaS shall not accept the Function request. The MaS shall
not change the current temporary IA. The MaS shall respond negatively with
E_DATA_VOID.

   - **Further errors and exceptions**
If the MaS experiences any other error or exception then it shall respond with the
appropriate positive or negative Return Code and further indications in 2.4.2.2.4.

2.4.2.2.3.2 WriteServiceID 01h: Clear all Temporary IAs

octet 10 octet 11

ServiceID

reserved Clear all Temporary

IAs

00h 01h

**Figure 5 - A_FunctionProperty_Write-PDU for Write ServiceID 01h for**
**PID_TEMP_DA_FILTER_CONTROL**

The MaC shall use this command to the current Temporary Addresses.

ServiceID: 01h Command “Clear all temporary IAs”

Savedate: Filename: page 20 of 21
2021 09 14 AN195 v03 Segment Coupler AS docx

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|E_SUCCESS|Set Temporary<br>IA|
|00h|00h|

|octet 10|octet 11|
|---|---|
||ServiceID|
|reserved|Clear all Temporary<br>IAs|
|00h|01h|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

NOTE 7 This service is named “Clear all temporary IAs” as it is usable also in case the definition of the temporary IA filter is
some day extended to allow several IAs.

If the MaS can successfully handle the command then it shall clear the current
temporary IA and respond with an A_FunctionPropertyState_Response-PDU as
in Figure 4 with the E_SUCCESS. In case of any error or exception the conditions as
listed in 2.4.2.2.4 apply.

octet 10 octet 11

Return Code ServiceID

Clear all
Temporary IAs

01h

**Figure 6 - A_FunctionPropertyState_Response-PDU for WriteServiceID 01h for**
**PID_TEMP_DA_FILTER_CONTROL**

2.4.2.2.4 Common error – and exception handling for PID_TEMP_DA_FILTER_CONTROL
In case of any error or exception, the MaS shall return an A_FunctionPropertyState_Response-PDU with a Return Code as appropriate and repeating the ServiceID.

Response (A_FunctionPropertyState_Response-PDU)

octet 10 octet 11

Return Code ServiceID

     - 7Fh

The standard errors and exceptions are specified as part of the WriteServiceIDs.

Next to the Basic (FFh) – and Generic Negative Return Codes (FEh and F8h), the following
Function Property specific Return Codes may be returned as appropriate.

**Return Code ErrorName** **ErrorType**

F2h E_COMMAND_INVALID Invalid command

An invalid value is requested in the field ServiceID (ReadServiceID or
WriteSericeID).

For errors and exceptions that are not foreseen in this specification, the chosen Return Code
is implementation specific and may be any Return Code in the Range from 80h to FFh.

2.4.2.2.5 Usage by the Management Server (Coupler)
Opposite to the “Device Address Filter Table”, the “Temporary IA” shall be evaluated
independently of the Load State Machine.

**Evaluation for the direction primary to secondary**

In the routing algorithm specified in 2.3.3.2.2.2, the “Temporary IA Filter primary-tosecondary” shall be evaluated to “Pass” if the temporary IA is set and equals the Destination
Address, otherwise as “Block”.

**Evaluation for the direction secondary to primary**

In the routing algorithm specified in 2.3.3.2.2.2, the “Temporary IA Filter secondary-toprimary” shall be evaluated to “Block” if the temporary IA is set and equals the Destination
Address, otherwise as “Pass”.

Savedate: Filename: page 21 of 22
2021 09 14 AN195 v03 Segment Coupler AS docx

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
||Clear all<br>Temporary IAs|
||01h|

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|> 7Fh||

|Return Code|ErrorName|ErrorType|
|---|---|---|
|F2h|E_COMMAND_INVALID|Invalid command|
|F2h|<br>An invalid value is requested in the field_ServiceID_ (ReadServiceID or<br>WriteSericeID).|<br>An invalid value is requested in the field_ServiceID_ (ReadServiceID or<br>WriteSericeID).|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**KNX Default value**

The KNX Default value shall be “not set”.

**Temporary Device Address Filter Control and Master Reset**

**Erase Code** **Effect**

01h Confirmed Restart KNX default

02h Reset to default state KNX default

05h ResetParam KNX default

06h ResetLinks KNX default

07h Reset to default without IA KNX default

08h Erase persistently stored application data KNX default

n.a. Local Reset to default state KNX default

n.a. Power Cycle KNX default

2.4.2.2.6 Usage by the Management Client
A MaC temporarily connected to the Secondary Segment of a Segment Coupler shall use
the “Set temporary IA” command before communicating point-to-point to a MaS, regardless
of whether it is inside the same Segment or outside of it. The MaC shall renew the temporary
IA before the timeout of 60 seconds elapses.

When not needed any more, the MaC shall actively clear the temporary IA using the “Clear
all Temporary IA” command.

###### 2.4.2.3 PID_COUPLER_TYPE (PID = 59)

 _The existing specification of PID_COUPLER_TYPE in [05] has to be adapted to indicate that the existing_
_procedure concerns NM_Coupler_Scan_LocalSubnetwork._
_Additionally, it shall be indicated that, in Function of the Profile, NM_Coupler_Scan_Directed has to be_
_supported. See also 2.8.4.1.3._

 _This clause shall replace the clause 4.4.9 “PID_L2_COUPLER_TYPE in [05]._
_This Property is currently named “PID_L2_COUPLER_TYPE._

**●** **Property name:** Coupler Type

**●** **Property Datatype:** PDT_ENUM8

**●** **Datapoint Type:** None

**●** **Access policy:** 3FF/0CC

**●** **Access level:** 2/2

Savedate: Filename: page 22 of 23
2021 09 14 AN195 v03 Segment Coupler AS docx

|Erase Code|Effect|
|---|---|
|01h Confirmed Restart|KNX default|
|02h Reset to default state|KNX default|
|05h ResetParam|KNX default|
|06h ResetLinks|KNX default|
|07h Reset to default without IA|KNX default|
|08h Erase persistently stored application data|KNX default|
|n.a. Local Reset to default state|KNX default|
|n.a. Power Cycle|KNX default|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

2.4.2.3.1 Abstract Resource definition
The Property PID_COUPLER_TYPE shall be a Data Property that shall control a variable
named COUPLER_TYPE in the Coupler. COUPLER_TYPE shall control the behaviour of
the Coupler according one of the following types.

   - Device is a TP1 Bridge

   - Device is a TP1 Repeater

   - Device is a Segment Coupler
COUPLER_TYPE is used in the specification of the routing by the Coupler in the Network
Layer.

**General rules (informative)**

NOTE 8 These are general rules that are taken into account already in the specification of the routing
algorithm and that are repeated here for clarity. In case of doubt, the routing algorithm shall apply.
COUPLER_TYPE shall not be evaluated if the device is a Router, this is, if the Device
Address equals 0.

2.4.2.3.2 Location
PID_COUPLER_TYPE shall be located in the first instance of the Router Object, this is, the
one corresponding with the Primary Side. It shall not be implemented in any further possible
instance of that Object Type.

2.4.2.3.3 Format
PID_COUPLER_TYPE shall be a Data Property.

 _This Property is currently named “PID_L2_COUPLER_TYPE in [05] in clause 5 “Resources for Couplers”._
_This is currently specified as follows (for reference; this is not to be included in the Specifications)._

**Bit** **Name** **Value** **Meaning**

0 IS_REPEATER 0 Device is a TP1 Bridge

1 Device is a TP1 Repeater

1 to 7 Reserved 0 These bits are reserved for future extensions.

 _This is redefined as follows._

**Table 4 – Encoding of PID_COUPLER_TYPE**

**Value** **Meaning**

0 Device is a TP1 Bridge

1 Device is a TP1 Repeater

2 Device is a Segment Coupler

3 to 255 These values are reserved for future standard
system extensions and shall not be used.

Savedate: Filename: page 23 of 24
2021 09 14 AN195 v03 Segment Coupler AS docx

|Bit|Name|Value|Meaning|
|---|---|---|---|
|0|IS_REPEATER|0|Device is a TP1 Bridge|
|0|IS_REPEATER|1|Device is a TP1 Repeater|
|1 to 7|Reserved|0|These bits are reserved for future extensions.|

|Value|Meaning|
|---|---|
|0|Device is a TP1 Bridge|
|1|Device is a TP1 Repeater|
|2|Device is a Segment Coupler|
|3 to 255|These values are reserved for future standard<br>system extensions and shall not be used.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

NOTE 9 (INFORMATIVE)
The KNXnet/IP Router (mask 091Ah) and the TP1/RF Media Coupler (mask 2920h) cannot be
used as TP1 Bridge, neither as TP1 Repeater. This leads to the possible meaningful values.

**Value** **Description**

0 Device is a TP1 Bridge O n/a n/a
1 Device is a TP1 Repeater O n/a n/a
2 Device is a Segment Coupler O O O

For the reaction of the device (MaS) in case a not applicable (n/a) value is set, please refer to
clause 2.4.2.3.4 below.

2.4.2.3.4 Usage by the Management Server (Coupler)
Please refer to the abstract Resource definition in 2.4.2.3.1 and the “Detection of the
Coupler type” 2.3.3.1.

The Property Coupler Type shall not be evaluated if the device is configured as a Line
Coupler or a Backbone Coupler, this is, if the Device Address equals 0.

If the Device Address differs from 0 and Property Coupler Type is implemented then the
Coupler Type shall be as in Table 4

This is summarized in the pseudo-code in 2.3.3.1.

A change of value of PID_COUPLER_TYPE by the MaC shall have immediate effect; this is,
the next message received to be routed shall be routed according to the new set Coupler
Type.

**KNX Default Value**

The KNX Default value shall be as follows.

**Mask** **KNX Default**

**value**

                - 0912h 0

                - 091Ah 2

                - 2920h

Savedate: Filename: page 24 of 25
2021 09 14 AN195 v03 Segment Coupler AS docx

|Value|Description|mask 0912h|mask 2920h|mask 091Ah|
|---|---|---|---|---|
|0|Device is a TP1 Bridge|O|n/a|n/a|
|1|Device is a TP1 Repeater|O|n/a|n/a|
|2|Device is a Segment Coupler|O|O|O|

|Mask|KNX Default<br>value|
|---|---|
|• <br>0912h|0|
|• <br>091Ah<br>• <br>2920h|2|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**Not supported values**

As indicated in note 9 above, the meaningful values for PID_COUPLER_TYPE are Profile
dependent (see 2.8.4.1.3.1). If the MaC sets PID_COUPLER_TYPE to a value that is not
supported, then the MaS shall do the following.

1. The MaS shall accept the setting of the Property. The Property Value shall be set
according to the requested value.
2. The MaS shall confirm the requesting service positively, including the requested
not-supported value.
3. The MaS should however behave according any standard Coupler Type, this is,
either as TP1 Bridge, TP1 Repeater or Segment Coupler. The choice is
implementation specific. The MaS may alternatively also have a non-standard
Coupler behaviour.
This shall not be tested.

4. If the Property Value is read, the MaS shall respond with the written Property Value.

5. The behaviour of the Coupler in the procedure NM_Coupler_Scan_Directed () is
implementation specific. Please refer to the error – and exception behaviour in
2.5.1.3.

**Coupler Type and Master Reset**

**Erase Code** **Effect**

01h Confirmed Restart not influenced

02h Reset to default state KNX Default

05h ResetParam not influenced

06h ResetLinks not influenced

07h Reset to default without IA not influenced

08h Erase persistently stored not influenced
application data

n.a. Local Reset to default state KNX Default

n.a. Power Cycle not influenced

2.4.2.3.5 Usage by the Management Client

2.4.2.3.5.1 General
If the Device Address differs from 0 and Property Coupler Type is not implemented, then the
MaC shall assume that the Coupler acts as a TP1 Repeater.

2.4.2.3.5.2 Read access
The Management Client shall interpret this Property Value, in combination with the Device
Address of the Management Server, identically as the Management Server, as specified in
2.4.2.3.4 above. In case the Device Address is 00h then this shall allow the Management
Client to determine whether the device is a TP1 Repeater, a TP1 Bridge or a Segment
Coupler; if this Property is not present, then the device shall be considered to be a TP1
Repeater.

Savedate: Filename: page 25 of 26
2021 09 14 AN195 v03 Segment Coupler AS docx

|Erase Code|Effect|
|---|---|
|01h Confirmed Restart|not influenced|
|02h Reset to default state|KNX Default|
|05h ResetParam|not influenced|
|06h ResetLinks|not influenced|
|07h Reset to default without IA|not influenced|
|08h Erase persistently stored<br>application data|not influenced|
|n.a. Local Reset to default state|KNX Default|
|n.a. Power Cycle|not influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

If the MaC reads a not defined value for this Property then the MaC shall not interpret this
value (e.g. for diagnostic purposes). This Property should not be read during configuration of
the MaS and shall be overwritten by the projected setting, regardless of its current value.

2.4.2.3.5.3 Write access
The MaC shall not set values in the MaS that the MaS does not support. (See 2.6.2 “Device
Identification”).

**Inputs**

   - Constants
None.

   - Application specific
None

   - From user
The value of PID_COUPLER_TYPE shall be derived from information provided by
the user of the Management Client.

    - If the MaC has the information which Device Addresses are used on the
Secondary Side of the Segment Coupler, it shall configure the device as
Segment Coupler

    - If this information is not available, and both sides are TP1, it shall configure the
device as TP1 Repeater or TP1 Bridge.

   - From the Management Server (device)
None.

**Access**

The Management Client shall set the value of Property PID_COUPLER_TYPE using the
Procedure DMP_InterfaceObject_Write_R.

###### 2.4.2.4 PID_SEGMENT_STATUS (PID = 70)

**●** **Property name:** Segment Status

**●** **Property Datatype:** PDT_GENERIC_01

**●** **Datapoint Type:** None.

**●** **Access Policy:** 3FF/1FF

**●** **Access Level:** 3/X

2.4.2.4.1 Abstract Resource definition
The Property Segment Status shall include the status of the communication medium that is
represented by the Router Object in which it is hosted. The instance located in the Primary
Router Object shall represent the state of the communication medium connected to the
Primary Side of the Coupler; the instance located in a Secondary Router Object shall
represent the state of the communication medium connected to that Secondary Side of the
Coupler.

Savedate: Filename: page 26 of 27
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

2.4.2.4.2 Location
_Segment Status shall be located in the Router Object. The instances in which it is mandatory_
are Profile dependent.

 _This is a generic specification that allows this Property to be used with less restrictions in the future. For_
_the Segment Coupler, it is mandatory in the Primary as well as in the Secondary Router Object;_
_see 2.8.4.1.3._

2.4.2.4.3 Format and encoding

**Bit** **Name** **Description** **Coding**

0 COMMUNICATION_- Indicates whether or not communi- 0: FALSE:
IMPOSSIBLE cation is possible using the medium communication is possible

connection represented by this Router 1: TRUE:
Object. This may be due to a power communication is impossible
down on that medium connection or
any other cause.

1 to 7 reserved Shall be 0.

2.4.2.4.4 Usage by the Management Server (Coupler)

2.4.2.4.4.1 General
The Coupler shall represent the state of the connected Segment in this Property.

This shall be done as real time as possible, but there are no requirements as to how fast
after a change of the state of the Segment this Property Value shall be up-to-date.

Opposite to PID_MEDIUM_STATUS the value of PID_SEGMENT_STATUS shall not be
reported via A_NetworkParameter_InfoReport.

2.4.2.4.4.2 KNX Default value
No KNX Default value is specified. The Property shall report the current Segment state as
soon as possible.

2.4.2.4.4.3 Behaviour at Reset
After reset, the Property shall assume the current state of the Segment as soon as possible.

2.4.2.4.5 Usage by the Management Client
The MaC may read Segment Status for diagnostic purposes.

#### 2.5 Management Procedures

##### 2.5.1 Network Management Procedures

###### 2.5.1.1 NM_Router_Scan

 _This clause it NOT intended for inclusion in the KNX Specifications._

The NM_Router_Scan procedure as specified in clause 2.13 of [16] is not modified.

NOTE 10 The procedure does not recognize Segment Couplers.

Savedate: Filename: page 27 of 28
2021 09 14 AN195 v03 Segment Coupler AS docx

|Bit|Name|Description|Coding|
|---|---|---|---|
|0|COMMUNICATION_-<br>IMPOSSIBLE|Indicates whether or not communi-<br>cation is possible using the medium<br>connection represented by this Router<br>Object. This may be due to a power<br>down on that medium connection or<br>any other cause.|0:<br>FALSE:<br>communication is possible<br>1:<br>TRUE:<br>communication is impossible|
|1 to 7||reserved|Shall be 0.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

###### 2.5.1.2 NM_IndividualAddress_Check_LocalSubNetwork

 _This clause it NOT intended for inclusion in the KNX Specifications._

The NM_IndividualAddress_Check_LocalSubNetwork procedure as specified in clause
2.19.2 of [16] is not modified.

NOTE 11 This procedure will continue to work (though hop_count is 0) if the Device Address Filter Table is properly filled. If
the IA to be checked is on the other side of the Segment Coupler, the Layer-2 Acknowledge will be provided by the Segment
Coupler. Note however that when the procedure is executed in the Secondary Segment, all IA not in the Device Address Filter
Table will be recognized as occupied whether or not they are actually present in other segments.

###### 2.5.1.3 NM_Coupler_Scan_Directed

2.5.1.3.1 Procedure
This Network Management Procedure shall allow detecting the Couplers directly connected
to the local Segment. The response shall indicate on which side of the Coupler the request is
received. This allows to determine the Coupler connecting the local Segment to the next
higher topology level. In case the local Segment is a Secondary Segment, this will detect the
Segment Coupler. The service request and the service response shall be handled via pointto-all-points, connectionless (broadcast) communication mode.

NOTE 12 The below procedure bases on NM_Coupler_Scan_LocalSubnetwork ([13] clause 2.4.3) with
test_info 01h instead of test_info 00h and only adds the direction in the test_result;.

 _The repetition of the Object Type is maintained at least until there is experience from the first_
_implementations and the ETS integration. If this procedure would need to be heavily reworked, then this_
_situation can be reviewed._

NM_Coupler_Scan_Directed (/* [in] */ ASAP, /* [in] */ comm_mode_req, /* [in] */
hop_count_type_req, /* [in] */ object_type, /* [in] */ PID, /* [in] */ test_info, /* [in] */
comm_mode_res, /* [in] */ hop_count_type_res, /* [out] */ test_result)

ASAP: not applicable: the communication mode of the request is
broadcast

comm_mode_req: point-to-all-points, connectionless (broadcast)

hop_count_type_req:  _Note that the hop_count_type_req is no longer restricted to 0._

Value of the hop_count that shall be used by the Management
Client for the transmission of the A_NetworkParameter_ReadPDU.

object_type 6 = Router Object

PID: 01 = PID_OBJECT_TYPE

test_info: octet 11: 01h

octet 12: random wait time

If the MaS concludes on responding to this service request,
then it shall delay its response until a random time in the
period from 0 s to the number of seconds as indicated in the
random wait_time in the request.

octet 13: hop_count_response (hcr)

position b7 b6 b5 b4 b3 b2 b1 b0
msb lsb

field r r r r r r r hcr
value 0 0 0 0 0 0 0

Savedate: Filename: page 28 of 29
2021 09 14 AN195 v03 Segment Coupler AS docx

|position|b7<br>msb|b6|b5|b4|b3|b2|b1|b0<br>lsb|
|---|---|---|---|---|---|---|---|---|
|field|r|r|r|r|r|r|r|hcr|
|value|0|0|0|0|0|0|<br>0||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

hop_count_response (hcr) shall be the hop count type that
the Coupler shall use if responding to the service. This shall
allow the MaC to control if the response PDU can pass
Routers.
0: hop_count 0 shall be used
1: the value of the Network Layer for the hop count shall be
used


comm_mode_res: point-to-all-points, connectionless (broadcast).

test_result: octet 14: Object Index of the Primary Router Object
octet 15: Object Index of the Secondary Router Object
octet 16: value of PID_COUPLER_TYPE
octet 17:


b3 to b0: Rx side: Reception side: side on which the
request is received.
1h if the request is received on the Primary Side
2h if the request is received on a Secondary Side
Other values are reserved and shall not be used.
b7 to b4: reserved. Shall be 0.
The A_NetworkParameter_Read_PDU shall thus be as follows.

octet 6 octet 7 octet 8 octet 9 octet 10
APCI parameter_type
object_type PID
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

1 1 1 1 0 1 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0 1

octet 11 octet 12 octet 13
test_info

random_wait_time

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

r r r r r r r

0 0 0 0 0 0 0 1 0 0 0 0 0 0 0

**Figure 7- A_NetworkParameter_Read-PDU in NM_Coupler_Scan_Directed (EXAMPLE)**

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|||||||parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br>                        7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||
|||||||1|1|1|1|0|1|1|0|1|0|0|0|0|0|0|0|0|0|0|0|0|0|0|1|1|0|0|0|0|0|0|0|0|1|

|octet 11|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 12|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 13|Col18|Col19|Col20|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|||||||||_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time||||||||hcr|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||r|r|r|r|r|r|r||
|0|0|0|0|0|0|0|1|||||||||0|0|0|0|0|0|0||


The resulting A_NetworkParameter_Response_PDU shall thus be as follows.

octet 6 octet 7 octet 8 octet 9 octet 10
APCI parameter_type
object_type PID
7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

1 1 1 1 0 1 1 0 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0 1

|octet 6|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 7|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 8|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 9|Col26|Col27|Col28|Col29|Col30|Col31|Col32|octet 10|Col34|Col35|Col36|Col37|Col38|Col39|Col40|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||APCI|APCI|APCI|APCI|||||||parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|parametertype|
|||||||||||||||||_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|_<br>objecttype|PID|PID|PID|PID|PID|PID|PID|PID|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|_<br> 7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|APCI|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||
|||||||1|1|1|1|0|1|1|0|1|1|0|0|0|0|0|0|0|0|0|0|0|0|0|1|1|0|0|0|0|0|0|0|0|1|


Savedate: Filename: page 29 of 30
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

octet 11 octet 12 octet 13
test_info

random_wait_time

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

r r r r r r r

0 0 0 0 0 0 0 1 0 0 0 0 0 0 0

octet 14 octet 15 octet 16 octet 17
test_result
object_index- object_index_ PID_COUPLER_
Rx side

primary secondary TYPE

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0

**Figure 8- A_NetworkParameter_Response-PDU in NM_Coupler_Scan_Directed (EXAMPLE)**

**Sequence**

|octet 11|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 12|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 13|Col18|Col19|Col20|Col21|Col22|Col23|Col24|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|testinfo|
|||||||||_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time|_<br>random_wait_time||||||||hcr|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||r|r|r|r|r|r|r||
|0|0|0|0|0|0|0|1|||||||||0|0|0|0|0|0|0||

|octet 14|Col2|Col3|Col4|Col5|Col6|Col7|Col8|octet 15|Col10|Col11|Col12|Col13|Col14|Col15|Col16|octet 16|Col18|Col19|Col20|Col21|Col22|Col23|Col24|octet 17|Col26|Col27|Col28|Col29|Col30|Col31|Col32|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|testresult|
|object_index-<br>primary|object_index-<br>primary|object_index-<br>primary|object_index-<br>primary|object_index-<br>primary|object_index-<br>primary|object_index-<br>primary|object_index-<br>primary|_<br>object_index_<br>secondary|_<br>object_index_<br>secondary|_<br>object_index_<br>secondary|_<br>object_index_<br>secondary|_<br>object_index_<br>secondary|_<br>object_index_<br>secondary|_<br>object_index_<br>secondary|_<br>object_index_<br>secondary|PID_COUPLER_-<br>TYPE|PID_COUPLER_-<br>TYPE|PID_COUPLER_-<br>TYPE|PID_COUPLER_-<br>TYPE|PID_COUPLER_-<br>TYPE|PID_COUPLER_-<br>TYPE|PID_COUPLER_-<br>TYPE|PID_COUPLER_-<br>TYPE|||||Rx side|Rx side|Rx side|Rx side|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||||||||||||||||||||r|r|<br>r|<br>r|||||
|||||||||||||||||||||||||0|0|0|0|||||


Management
Client


Management
Server


Remark


A_NetworkParameter_Read-PDU
(object_type = 6, PID = PID_OBJECT_TYPE, test_info = 01h +
random wait time + hop_count_response)

A_NetworkParameter_Response-PDU
(object_type = 6, PID = PID_OBJECT_TYPE, test_info = 01h +
random wait time + hop_count_response
test_result = 06h, 07h, 02h, 01h)


A_NetworkParameter_Response-PDU
(object_type = 6, PID = PID_OBJECT_TYPE, test_info = 01h +
random wait time + hop_count_response
test_result = 03h, 04h, 00h, 02h)


Response from a Coupler with Router
Objects on Index 6 and 7, as a
Segment Coupler, receiving the
request on its Primary Side.

Response from a Coupler with Router
Objects on Index 3 and 4, as a KNX
TP1 Bridge, receiving the request on
its Secondary Side.


2.5.1.3.2 Management Server support
On reception of an A_NetworkParameter_Read-PDU with Object Type = Router Object and
PID = PID_OBJECT_TYPE and the first octet of test_info = 01h, the Coupler shall respond
with an A_NetworkParameter_Response-PDU with the same service parameter values and
with test_result containing the indexes of the Primary and the Secondary Router Object in
octets 14 and 15, the value of its PID_COUPLER_TYPE in octet 16 and a direction value
indicating the side on which the request is received in octet 17. The direction value shall be
01h if the request is received on the Primary Side and 02h if the request is received on a
Secondary Side. The Coupler shall delay its response until a random time in the period from
0 s to the number of seconds as indicated in the random_wait_time in the request. The
response shall be transmitted with a hop count value, either 0 or the value of its Network
Layer parameter, as indicated in the field hop_count_response in the request.

The Coupler shall in any case respond to the request, regardless of its current Device
Address (zero or not) or its value of PID_COUPLER_TYPE.


Savedate: Filename: page 30 of 31
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**Error and exception handling**

- If the Coupler functionality is however disabled in the device, e.g. by implementation
specific means, then the device shall not respond to this request.

- If PID_COUPLER_TYPE is set to an unsupported value then the Coupler may either not
react at all to this service or respond with the written value or respond with a value that
reflects its current behaviour.

- If any of the reserved field in the request differs from 0, then the MaS shall ignore the
request and shall not respond.

- If the MaS is delaying a response until its chosen random time and meanwhile receives
a new request, then the handling of the responses is implementation specific.

EXAMPLE 05 It may drop the first response and schedule the response to the second request; it
may keep its first response and schedule the second response; it may ignore the second request; or more.

2.5.1.3.3 Management Client support
The MaC shall collect all responses during the random wait time and an additional delay
time.

The test_result contains the value of PID_COUPLER_TYPE, but in order to conclude on the
Coupler Type of a responding Coupler, the MaS shall also check if the Device Address of
the response equals 0 or not.

If the Device Address part of the Source Address of the response is not 0, the MaC shall
conclude that the MaS (Coupler) is not used as a Line Coupler or Backbone Coupler. In this
case, the MaC shall determine the configured Coupler type by evaluating the field
PID_COUPLER_TYPE in the response.

To determine if the local segment is a Primary - or Secondary Segment, the responses shall
be evaluated as follows.

   - If for all responses, the Direction octet is “Primary Side” or the Device Address part
of the Source Address of the response is 0, this indicates that the local Segment is
a Primary Segment.

   - If there is only a single response and it has Direction octet “Secondary Side” and
the Device Address part of the Source Address of the response is not 0, this
indicates that the local Segment is a Secondary Segment

   - If no response is received, there is no Segment Coupler directly connected and
therefore the local Segment is a Primary Segment.

   - All other cases indicate configuration errors

NOTE 13 The first response would be sufficient, but collecting all responses allows to detect some common configuration and
wiring problems easily, e.g.

       - Receiving multiple responses with Direction= “Secondary Side” indicate that the Secondary Sides of
multiple Segment Couplers are connected.

##### 2.5.2 Property based configuration

 _This clause is not intended for integration in the KNX Specifications._

Implementation of the Segment Coupler shall be based on the “Property Based Coupler
Configuration”. This is given by simply referring to the existing Profiles. This AN does not
need any further special indications for this.

Savedate: Filename: page 31 of 32
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

#### 2.6 Configuration Procedures

##### 2.6.1 SNA Procedures

 _This clause it NOT intended for inclusion in the KNX Specifications._

The SNA Read procedure as specified in clause 1.3.3 of [15] is not modified.

NOTE 14 SNA configuration procedures do not work in Secondary Segments (whether they are connected via a Repeater, a
Bridge, or a Segment Coupler).

##### 2.6.2 Device Identification
**Motivation**

The MaC shall set PID_COUPLER_TYPE according to the use of the Coupler device in the
installation. The MaS may however not implement all possible values of PID_COUPLER_TYPE, so, it has to be avoided that the MaC sets an unsupported value. For the use with
standard Property Services, there is however at service level no error handling that allows
the MaS to return a negative response to the MaC. The MaC should at first have the
possibility to verify the supported values. This shall be done by verifying the mounted device
with an entry in the MaC’s product database. To this, PID_MANUFACTURER_ID in the
Device Object and PID_HARDWARE_TYPE in the Device Object shall be used.

**Procedure**

The MaS shall read out PID_MANUFACTURER_ID and PID_HARDWARE_TYPE from the
Device Object.

/* Read PID_MANUFACTURER_ID of the Device Object */
DMP_InterfaceObject_Read_RCl( /* [IN] */ object_index = 0; /* [IN] */ PID = PID_MANUFACTURER_ID,

/* [OUT] */ Device.ManufacturerID = data)
/* Read PID_HARDWARE_TYPE of the Device Object */
DMP_InterfaceObject_Read_RCl( /* [IN] */ object_index = 0; /* [IN] */ PID = PID_HARDWARE_TYPE,

/* [OUT] */ Device.HardwareType = data)

NOTE 15 PID_PROGRAM_VERSION is also required. This is specified in [09] and contains the Manufacturer Identification,
Device Type and Version. This will be used for Device Information in the MaC (displaying only) and for reverse engineering.

#### 2.7 Usage and context

 _This clause is not intended for inclusion in the KNX Specifications._

Please refer to the motivation.

The Segment Coupler allows the KNX installer to extend an existing KNX project with KNX
Segments, without the need of creating additional Lines or re-arrange parts of the existing
topology and having to reprogram all involved devices, at a spatial best fit location in the
building.

The provided solution allows covering further use cases, which are depicted in clause 1.2
“Motivation”.

Savedate: Filename: page 32 of 33
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

#### 2.8 Profile definition

##### 2.8.1 General

 _This is motivation and it not intended for integration in the KNX Specifications._

The Segment Coupler, just like many recent KNX extensions, is not a full device Profile, but
Profile Module, this is, it is an extension to a Base Profile. The same layout and style are
used as for a Base Profile. However, if the Profile Module does not add or change the
requirements of a Feature compared to a Base Profile, then the cell in the Profile
specification will be left empty.

 _Therefore, clause 1.4 “Conventions and abbreviations” in [07] shall be extended with the following._

**Symbol** **Definition**

empty cell: No additional requirements.

##### 2.8.2 Common Profile

 _This clause is intended to be integrated in clause 2.2 “Common Profiles” of [07]._

**Feature**

1 Medium dependent Layers Primary: M[ b]
Secondary: M[ b]
2 Physical Layer General M
3 Link Layer general M
4 Link Layer - Router O [a]
5 Link Layer - Bridge O [a]
6 Network Layer general M
7 Network Layer - Router O [a]
8 Network Layer – Bridge O [a]
9 Network Layer – Segment Coupler M [a]
10 Network Layer RF Retransmitter O
11 Network Layer RF Media Coupler O
12 Transport Layer – multicast O
13 Transport Layer – connection oriented minimal M
14 Secure Application Layer O
15 AL – Group Object services O
16 AL – Property Value Services M
17 AL – Function Property Services M
18 AIL – GO O
19 AIL – IO M
20 AIL – Function Properties M
21 AIL – GO indirection O
22 Application Interface Layer for unidirectional devices n/a
a The operation as either “Router”, “Bridge” or “Segment Coupler” exclude each

other. If more than one operation mode is implemented, it is necessary that one
can be selected. For this, PID_COUPLER_TYPE shall be used.

Savedate: Filename: page 33 of 34
2021 09 14 AN195 v03 Segment Coupler AS docx

|Symbol|Definition|
|---|---|
||empty cell: No additional requirements.|

|Feature|Col2|Segment Coupler|
|---|---|---|
|<br>1 Medium dependent Layers<br>2 Physical Layer General<br>3 Link Layer general<br>4 Link Layer - Router<br>5 Link Layer - Bridge<br>6 Network Layer general<br>7 Network Layer - Router<br>8 Network Layer – Bridge<br>9 Network Layer – Segment Coupler<br>10 Network Layer RF Retransmitter<br>11 Network Layer RF Media Coupler<br>12 Transport Layer – multicast<br>13 Transport Layer – connection oriented minimal<br>14 Secure Application Layer<br>15 AL – Group Object services<br>16 AL – Property Value Services<br>17 AL– Function Property Services <br>18 AIL – GO<br>19 AIL – IO<br>20 AIL– Function Properties <br>21 AIL – GO indirection<br>22 Application Interface Layer for unidirectional devices|<br>1 Medium dependent Layers<br>2 Physical Layer General<br>3 Link Layer general<br>4 Link Layer - Router<br>5 Link Layer - Bridge<br>6 Network Layer general<br>7 Network Layer - Router<br>8 Network Layer – Bridge<br>9 Network Layer – Segment Coupler<br>10 Network Layer RF Retransmitter<br>11 Network Layer RF Media Coupler<br>12 Transport Layer – multicast<br>13 Transport Layer – connection oriented minimal<br>14 Secure Application Layer<br>15 AL – Group Object services<br>16 AL – Property Value Services<br>17 AL– Function Property Services <br>18 AIL – GO<br>19 AIL – IO<br>20 AIL– Function Properties <br>21 AIL – GO indirection<br>22 Application Interface Layer for unidirectional devices|Primary: M b <br>Secondary: M b <br>M <br>M <br>O a <br>O a <br>M <br>O a <br>O a <br>M a <br>O <br>O <br>O <br>M <br>O <br>O <br>M <br>M <br>O <br>M <br>M <br>O <br>n/a|
|a|The operation as either “Router”, “Bridge” or “Segment Coupler” exclude each<br>other. If more than one operation mode is implemented, it is necessary that one<br>can be selected. For this, PIDCOUPLERTYPE shall be used.|The operation as either “Router”, “Bridge” or “Segment Coupler” exclude each<br>other. If more than one operation mode is implemented, it is necessary that one<br>can be selected. For this, PIDCOUPLERTYPE shall be used.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**Feature**

b There shall be a Profile of a Communication Medium for the Primary Side and a

Profile for the Communication Medium on the Secondary Side.
EXAMPLE 6 KNX TP1-256 on the Primary Side and KNX RF Ready on the
Secondary Side.

 _The referred Features are unchanged compared to [07] and are not repeated here._

##### 2.8.3 Configuration and Management – S-Mode – Couplers

###### 2.8.3.1 General requirements

 _There are no changes compared to [07],clause 5.1._

###### 2.8.3.2 Communication

2.8.3.2.1 Overview
 _It is proposed that clause 5.2.1 “Overview” in [07] be modified as follows. (New text in blue font.)_

**Feature**

1 TL - broadcast M M M M M M

2 TL - connection oriented M M M M M M

3 TL - connection oriented minimal X X X X X X

4 TL - connectionless M M M M M M

5 Segment Coupler O X[ a] X[ a] O O O

a Clause 5.1.2 in [07] requires that 0910h and 0911h are not allowed “for new

developments”.

 _The referred Features, other than the “Segment Coupler” are unchanged compared to [07] and are not_
_repeated here._

2.8.3.2.1.1 Segment Coupler
The “Segment Coupler” feature set is an optional extension of the existing Coupler Profiles.

Savedate: Filename: page 34 of 35
2021 09 14 AN195 v03 Segment Coupler AS docx

|Feature|Col2|Segment Coupler|
|---|---|---|
|b|<br> There shall be a Profile of a Communication Medium for the Primary Side and a<br>Profile for the Communication Medium on the Secondary Side.<br>EXAMPLE 6<br>KNX TP1-256 on the Primary Side and KNX RF Ready on the<br>Secondary Side.|<br> There shall be a Profile of a Communication Medium for the Primary Side and a<br>Profile for the Communication Medium on the Secondary Side.<br>EXAMPLE 6<br>KNX TP1-256 on the Primary Side and KNX RF Ready on the<br>Secondary Side.|

|Feature|Coupler|mask 0910h|mask 0911h|mask 0912h|KNXnet/IP Router|mask 091Ah|
|---|---|---|---|---|---|---|
|1 TL - broadcast|M|M|M|M|M|M|
|2 TL - connection oriented|M|M|M|M|M|M|
|3 TL - connection oriented minimal|X|X|X|X|X|X|
|4 TL - connectionless|M|M|M|M|M|M|
|5 Segment Coupler|O|X a|X a|O|O|O|
|a Clause 5.1.2 in [07] requires that 0910h and 0911h are not allowed “for new<br>developments”.|a Clause 5.1.2 in [07] requires that 0910h and 0911h are not allowed “for new<br>developments”.|a Clause 5.1.2 in [07] requires that 0910h and 0911h are not allowed “for new<br>developments”.|a Clause 5.1.2 in [07] requires that 0910h and 0911h are not allowed “for new<br>developments”.|a Clause 5.1.2 in [07] requires that 0910h and 0911h are not allowed “for new<br>developments”.|a Clause 5.1.2 in [07] requires that 0910h and 0911h are not allowed “for new<br>developments”.|a Clause 5.1.2 in [07] requires that 0910h and 0911h are not allowed “for new<br>developments”.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**Feature**

1. State Machine of Network Layer for Segment Coupler 2.3.3.2 M

2.8.3.2.1.2 State Machine of Network Layer for Segment Coupler

**Specification** **Test**

     - 2.3.3.2 “State Machine of Network Layer
for Segment Coupler”

###### 2.8.3.3 Master Reset

2.8.3.3.1 DM_Restart

**Feature**

1. Basic Restart M
2. Master Reset M
**Erase Code**
01h Confirmed Restart M
02h Reset to default state M
03h ResetIA O
04h ResetAP O
05h ResetParam O
06h ResetLinks O
07h Reset to default without IA M
n.a. Local Reset to default state M

Savedate: Filename: page 35 of 36
2021 09 14 AN195 v03 Segment Coupler AS docx

|Col1|Feature|Col3|Segment Coupler|
|---|---|---|---|
|1.|State Machine of Network Layer for Segment Coupler|2.3.3.2|M|

|Specification|Test|
|---|---|
|- <br>2.3.3.2 “State Machine of Network Layer<br>for Segment Coupler”||

|Col1|Feature|Segment Coupler|
|---|---|---|
|1.|Basic Restart|M|
|2.|Master Reset|M|
||**Erase Code**||
||01h<br>Confirmed Restart|M|
||02h<br>Reset to default state|M|
||03h<br>ResetIA|O|
||04h<br>ResetAP|O|
||05h<br>ResetParam|O|
||06h<br>ResetLinks|O|
||07h<br>Reset to default without IA|M|
||n.a.<br>Local Reset to default state|M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

###### 2.8.3.4 Discovery

 _It is proposed that a new clause is added after 5.3 “Device Management” titled “Discovery”._

**Feature**

1. NM_Coupler_Scan_Directed 2.5.1.3 M

 _The following clauses in [07] are not modified in any way by this Application Note._

     - _clause 5.3 “Device Management”_

     - _clause 5.4 “Device Identification”_

     - _clause 5.5 “Device Individualisation”_

     - _clause 5.6 “Device Linking”_

     - _clause 5.7 “Application Handling”_

     - _clause 5.8 “KNXnet/IP”_

Savedate: Filename: page 36 of 37
2021 09 14 AN195 v03 Segment Coupler AS docx

||Feature|Col3|Segment Coupler|
|---|---|---|---|
|1.|NM_Coupler_Scan_Directed|2.5.1.3|M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

##### 2.8.4 Interface Object and Properties

###### 2.8.4.1 S-Mode Profiles – Interfaces and Couplers

2.8.4.1.1 Interface Objects
 _S-Mode Profiles  Interface and Couplers  Interface Objects_

Interface Object

0 Device Object M
1 Addresstable Object O
2 Associationtable Object O
3 Applicationprogram Object O
4 Interfaceprogram Object O
6 Router Object M
7 LTE Address Routing Table Object O
8 cEMI Server Object O
9 Group Object Table Object O
10 Polling Master O
11 KNXnet/IP Parameter Object 3 O

2.8.4.1.2 Device Object (Object Type = 0)

 S-Mode Profiles  Interface and Couplers  Device Object

**Property**

1 PID_OBJECT_TYPE Data 3/x
12 PID_MANUFACTURER_ID Data 3/1
13 PID_PROGRAM_VERSION Data 3/3
78 PID_HARDWARE_TYPE Data 3/1

3) The KNXnet/IP Parameter Object is mandatory if there is a KNXnet/IP interface.

Savedate: Filename: page 37 of 38
2021 09 14 AN195 v03 Segment Coupler AS docx

|Interface Object|Segment Coupler|
|---|---|
|0 Device Object|M|
|1 Addresstable Object|O|
|2 Associationtable Object|O|
|3 Applicationprogram Object|O|
|4 Interfaceprogram Object|O|
|6 Router Object|M|
|7 LTE Address Routing Table Object|O|
|8 cEMI Server Object|O|
|9 Group Object Table Object|O|
|10 Polling Master|O|
|11 KNXnet/IP Parameter Object 3|O|

|Property|Col2|Segment Coupler|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|
|12 PID_MANUFACTURER_ID|Data|3/1|
|13 PID_PROGRAM_VERSION|Data|3/3|
|78 PID_HARDWARE_TYPE|Data|3/1|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

2.8.4.1.3 Router Object (Object Type = 6)

 _S-Mode Profiles  Interface and Couplers  Router Object_

 _This table is intended to replace the existing table in [07]._

**Instance of the Object Type**

**Property**

1 PID_OBJECT_TYPE Data 3/x 3/x 3/1 3/1 M M
NwPar R R R R R R
5 PID_LOAD_STATE_CONTROL Data 3/0 3/0 X 3/2 M
7 PID_TABLE_REFERENCE Data X 3/x
27 PID_MCB_TABLE Data X 3/x
28 PID_ERROR_CODE Data X (3/X)
29 PID_OBJECT_INDEX Data 3/0 3/0
Data R R
51 PID_MEDIUM_STATUS Data 3/x 3/x 3/x 3/x O O
NwPar R R RT RT O O
52 PID_MAIN_LCCONFIG Data 3/2 3/0 O X
53 PID_SUB_LCCONFIG Data 3/2 3/0 O X
54 PID_MAIN_LCGRPCONFIG Data 3/2 3/0 O X
55 PID_SUB_LCGRPCONFIG Data 3/2 3/0 O X
56 PID_ROUTETABLE_CONTROL Data 3/2 3/0 X 3/2 O O
57 PID_COUPL_SERV_CONTROL Data 3/0 3/0 X 3/2 O O
O O
58 PID_MAX_APDU_LENGTH 4) Data 3/x 3/x 3/0 3/0

59 PID_COUPLER_TYPE 5). See 2.4.2.3 Data 3/3 x (3/2) X M X
61 PID_HOP_COUNT Data X X
63 PID_MEDIUM Data
67 PID_FILTER_TABLE_USE Data
68 PID_DA_FILTER_TABLE (PID = 68) Data X M
69 PID_TEMP_DA_FILTER_CONTROL. X M

See 2.4.2.3 Function

70 PID_SEGMENT_STATUS Data O O O O M M
104 PID_PL110_SBC_CONTROL 6) Data n/a n/a

4) This Property is mandatory for implementations provided after December 2006.
5) The Property PID_COUPLER_TYPE is mandatory for new implementations starting from October 2008.
6) PID_PL110_SBC_CONTROL and PID_PL110_DOA are only mandatory in Medium Interfaces to
the PL110 medium.
6) PID_PL110_SBC_CONTROL and PID_PL110_DOA are only mandatory in Medium Interfaces to
the PL110 medium.

Savedate: Filename: page 38 of 39
2021 09 14 AN195 v03 Segment Coupler AS docx

|Col1|Col2|Instance of the Object Type|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|||mask 0912h|mask 091Ah|mask 2920h|mask 2920h|Segment<br> Coupler|Segment<br> Coupler|
|**Property **|**Property **|Single common<br>instance|Single common<br>instance|Insitance 1:<br>Primary Side|Instance 2:<br>Secondary Side|Insitance 1:<br>Primary Side|Instance 2:<br>Secondary Side|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|3/1|3/1|M|M|
|1 PID_OBJECT_TYPE|NwPar|R|R|R|R|R|R|
|5 PID_LOAD_STATE_CONTROL|Data|3/0|3/0|X|3/2||M|
|7 PID_TABLE_REFERENCE|Data|||X|3/x|||
|27 PID_MCB_TABLE|Data|||X|3/x|||
|28 PID_ERROR_CODE|Data|||X|(3/X)|||
|29 PID_OBJECT_INDEX|Data|||3/0|3/0|||
||Data|||R|R|||
|51 PID_MEDIUM_STATUS|Data|3/x|3/x|3/x|3/x|O|O|
|51 PID_MEDIUM_STATUS|NwPar|R|R|RT|RT|O|O|
|52 PID_MAIN_LCCONFIG|Data|3/2|3/0|||O|X|
|53 PID_SUB_LCCONFIG|Data|3/2|3/0|||O|X|
|54 PID_MAIN_LCGRPCONFIG|Data|3/2|3/0|||O|X|
|55 PID_SUB_LCGRPCONFIG|Data|3/2|3/0|||O|X|
|56 PID_ROUTETABLE_CONTROL|Data|3/2|3/0|X|3/2|O|O|
|57 PID_COUPL_SERV_CONTROL|Data|3/0|3/0|X|3/2|O|O|
|58 PID_MAX_APDU_LENGTH 4)|Data|3/x|3/x|3/0|3/0|O|O|
|59 PID_COUPLER_TYPE 5). See 2.4.2.3|Data|3/3|x|(3/2)|X|M|X|
|61 PID_HOP_COUNT|Data|||X|X|||
|63 PID_MEDIUM|Data|||||||
|67 PID_FILTER_TABLE_USE|Data|||||||
|68 PID_DA_FILTER_TABLE(PID = 68)|Data|||||X|M|
|69 PID_TEMP_DA_FILTER_CONTROL.<br>See 2.4.2.3|Function|||||X|M|
|70 PID_SEGMENT_STATUS|Data|O|O|O|O|M|M|
|104 PID_PL110_SBC_CONTROL 6)|Data|||n/a|n/a|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

**Instance of the Object Type**

**Property**

105 PID_PL110_DOA Data n/a n/a
112 PID_RF_SBC_CONTROL 7) Data n/a 3/2

2.8.4.1.3.1 PID_COUPLER_TYPE

**Value of** **Segment Coupler**
**PID_COUPLER_TYPE**

**TP1 Bridge** O
**TP1 Repeater** O
**Segment Coupler** M

2.8.4.1.3.2 Identifiers and discovery
Support of the Segment Coupler features shall be declared in the product data, together with
the supported values of PID_COUPLER_TYPE;

### 3 Impact and dependencies

#### 3.1 System specification (“Handbook”) dependencies

 _This clause is not intended for integration in the KNX Specifications._

Indications about the integration of the normative parts of this Application Note are given at
the appropriate locations.

**E_ACCESS_READ_ONLY becomes E_WRITE_ACCESS_DENIED**

This document renames the Return Code E_ACCESS_READ_ONLY to
E_WRITE_ACCESS_DENIED. The use and numerical value remain unchanged. This will be
managed in the further KSG discussion topics. However, in KNX Specifications where
E_ACCESS_READ_ONLY is specified this has to be modified.

#### 3.2 Configuration interworking

 _This clause is not intended for integration in the KNX Specifications._

The proposed specification does not break any existing Configuration Interworking.

7) PID_RF_SBC_CONTROL is only mandatory in Medium Interfaces to the RF medium.

Savedate: Filename: page 39 of 40
2021 09 14 AN195 v03 Segment Coupler AS docx

|Col1|Col2|Instance of the Object Type|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|||mask 0912h|mask 091Ah|mask 2920h|mask 2920h|Segment<br> Coupler|Segment<br> Coupler|
|**Property **|**Property **|Single common<br>instance|Single common<br>instance|Insitance 1:<br>Primary Side|Instance 2:<br>Secondary Side|Insitance 1:<br>Primary Side|Instance 2:<br>Secondary Side|
|105 PID_PL110_DOA|Data|||n/a|n/a|||
|112 PID_RF_SBC_CONTROL 7)|Data|||n/a|3/2|||

|Value of<br>PID COUPLER TYPE<br>_ _|Segment Coupler|
|---|---|
|**TP1 Bridge **|O|
|**TP1 Repeater**|O|
|**Segment Coupler**|M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

A Coupler implementing the Segment Coupler functionality can still be configured as Line
Coupler, TP1 Repeater or TP1 Bridge by a MaC not supporting Segment Couplers if it is in
default state.

A Coupler already configured as Segment Coupler may block Configuration procedures for
MaC not aware of this functionality. This can be resolved by a Master Reset.

#### 3.3 Run-time Interworking

 _This clause is not intended for integration in the KNX Specifications._

The pure runtime Interworking is not affected by the proposed specification.

#### 3.4 Registration and certification

 _This clause is not intended for integration in the KNX Specifications._

The functionality specified in this AN can be implemented as soon as the proposal is
accepted in Release for Voting.

Appropriate test specifications have to be established.

- PID_COUPLER_TYPE
If the MaC sets an unsupported value to PID_COUPLER_TYPE, then the Coupler
(MaS) shall behave as specified under “Not supported values” in 2.4.2.3.4. The reaction
of the device and the further behaviour of the device should in this case not be tested.

##### 3.4.1 Test specifications

 _This clause is not intended for integration in the KNX Specifications._

###### 3.4.1.1 Router Object and Load State Machine
There are dependencies on the Load State and the behaviour of the Coupler. Yet, there is
no dependency between the Load State Machine and Master Reset. This has to be
considered in the testing, for instance of the requirements of clauses 2.4.2.1.4, 2.4.2.2.3.1
and 2.4.2.2.5. The test suite shall not require a dedicated Load State after a Master Reset is
executed.

###### 3.4.1.2 Testing of write requests to Property array element 0
As specified here for PID_DA_FILTER_TABLE a request to write element 0 of the Property
array value (= current length) shall lead to the standard Property array handling and to
E_WRITE_ACCESS_DENIED in case of Extended Property services. This shall be tested.

This will be specified in general in a further Application Note.

NOTE 16 This concerns write request for array element 0 only. The Working Document on the topic [KSG00246-00] “Property
array element 0 handling” proposes that if element 0 and further elements (1, 2 …) are requested that then
E_DATA_TYPE_CONFLICT be responded.

Savedate: Filename: page 40 of 41
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

#### 3.5 Integration and common tool impact

 _This clause is not intended for integration in the KNX Specifications._

##### 3.5.1 ETS Product data extension
The information whether or not a Coupler supports the Segment Coupler functionality shall
be included in the ETS product data.

##### 3.5.2 SupportsCouplerSecurityExtensionsCommunication path
As already today, ETS has to know the communication path between its used interface and
the assumed topological position of the target device and the possible Couplers on that
communication path. ETS now also has to consider the presence of Segment Couplers in
that communication path.

This information is necessary for the following.

a. To determine the maximum APDU length usable for communication
b. To properly enable the forwarding of system broadcast messages in Couplers.
c. To possibly set the IA of the used interface in PID_TEMP_DA_FILTER_CONTROL.

##### 3.5.3 PID_COUPLER_TYPE
This is a standard Coupler Parameter, so, ETS can show it in the side bar.

ETS should however not show this if the Device Address is 0.

ETS should not show this is if not necessary.

ETS should not offer options that are not applicable.

EXAMPLE 7 For a KNX TP1/RF Media Coupler and for a KNXnet/IP Router, the values “TP1 Repeater” and
“TP1 Bridge” should not be shown.
NOTE 17 The above considerations are already taken into account in the current ETS6 version
(January 2021).

##### 3.5.4 PID_TEMP_DA_FILTER_CONTROL and roaming interfaces
In case of using a roaming interface and the local IA does not fit the topology, ETS today
suggests adjusting the local IA.

In case however this is done at the Segment at the Secondary Side of a Segment Coupler
and the Subnetwork Address part of the local IA does not match, then, ETS shall not try to
set the value of the local IA in PID_TEMP_DA_FILTER_CONTROL. This only contains the
Device Address part and because of the wrong Network Address part of the IA, the routing
will anyhow not work.

- If the ETS user in this case intends to configure a device on that same side, it is
recommended that ETS does not issue this warning, does not set PID_TEMP_DA_FILTER_CONTROL and proceeds with the configuration.

- If the ETS user intends to configure a device on the other side of the Segment Coupler,
then ETS should issue a warning to change the local IA.

#### 3.6 Security

 _This clause is not intended for integration in the KNX Specifications._

Security is provided by the optional KNX Data Security ([08]) and Coupler Security
Extensions ([12]) Profile extensions.

Savedate: Filename: page 41 of 42
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

#### 3.7 Risks and compatibility issues

 _This clause is not intended for integration in the KNX Specifications._

##### 3.7.1 Individual Address scan
As indicated in clause 2.5.1.2 the procedure
NM_IndividualAddress_Check_LocalSubNetwork will not properly detect Individual
Addresses on the Primary Side of the Segment Coupler if called from the Secondary Side.
This procedure is however not used by ETS.

##### 3.7.2 Tunneling Client changing Tunnelling Address
As already noted in NOTE 1, Additional Individual Addresses for the Tunnelling Server
should at configuration time be added to the Device Address Filter Table. Yet, the Tunnelling
Client may also change these Additional Individual Addresses after the device has been
configured. If the new Tunnelling Address does not belong or is not registered in the
Segment of the Secondary Side, communication from and to that Tunnelling Address will fail.

- If the Tunnelling Client is ETS, then ETS should detect this situation and give an
appropriate warning to the ETS user.

- For any other Tunnelling Client, this is left to the responsibility of the user.

Savedate: Filename: page 42 of 43
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

## Annex A
###### (informative)

## Flow charts

The following flow chart illustrates the routing of point-to-point messages from the primary to
the Secondary Side as specified in 2.3.3.2.2.2

**Figure 9 - Point-to-point routing from Primary - to Secondary Side**

Savedate: Filename: page 43 of 44
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN195** **Segment Coupler**

The following flow chart illustrates the routing of point-to-point messages from the Secondary

- to the Primary Side as specified in 2.3.3.2.2.3.

**Figure 10 - Point-to-point routing from secondary to Primary Side**

Savedate: Filename: page 44 of 44
2021 09 14 AN195 v03 Segment Coupler AS docx


-----

