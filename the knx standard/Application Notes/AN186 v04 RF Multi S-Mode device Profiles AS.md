KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

# Application Note 186/17 v04

**Title:** **RF Multi S-Mode device Profiles**

**Status:** **Date:**

Approved Standard 2021.08.18

**Transitional period:** Immediate effect after Final Voting.

**Subject:** Specification of Resources and device Profiles for end devices,
interfaces and Media Couplers of KNX RF Multi devices for S-Mode
configuration.
**Documents** **Modified**

[1] Chapter 3/2/5 “Communication Medium RF” v01.06.03 AS

[2] Chapter 3/3/7 “Application Layer” v01.06.05 AS
**Referred**

[3] Chapter 3/5/1 “Resources” v01.09.03 AS

[4] Chapter 3/6/3 “External Message Interface” v01.03.03 AS

[5] AN160 v02 “RF S-Mode device Profiles” DV

[6] AN161 v05 “Coupler Model 2.0” AS

[7] AN190 v01 “Flexible E-Mode Channels extensions” DP

[8] AN192 v04 “Coupler Security extensions” AS

**Document updates**

**Version** **Date** **Modifications**
AN186 v01 2017.08.04 Creation of the Draft Proposal.
AN186 v02 2020.05.08 Preparation of the Draft for Voting.

                - Access Policies streamlined with AN193!
AN186 v03 2021.02.08 - Inclusion of the latest feedback from KSG.
```
                o PID_RF_MULTI_BROADCAST_CONTROL PID changed

```
from 80 to 114.

                  - Preparation of the Draft for Voting.
KSG688-16 2021.05.28 - [CGO] Inclusion of resolution of comments from AN186 v03

DV

                - change to have all A_GroupValue services with Fast Ack to
fit Media-Coupler impossibility to detect APCI type

             - rename PID_RF_MULTI_RX_RECEIVE_READY to
PID_RF_MULTI_RX_READY

              - Harmonise PID_CEMI_RF_MULTI_ACTIVATE PID value to
91

              - 2.3.2. 4.2 Detailed PID_GRP_TX_MULTI_INFO_TABLE
format for AckSlot coding and error case handling added

                - In 2.3.3.4.1 explain that PID_UNICAST_CONTROL is only
used for TP to RF and RF to TP, but for local addressing of
the coupler

Savedate: Filename: page 1 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Version|Date|Modifications|
|---|---|---|
|<br>AN186 v01|<br>2017.08.04|<br>Creation of the Draft Proposal.|
|AN186 v02|2020.05.08|Preparation of the Draft for Voting.<br>• Access Policies streamlined with AN193!|
|AN186 v03|2021.02.08|<br>• Inclusion of the latest feedback from KSG.<br>`o`  PID_RF_MULTI_BROADCAST_CONTROL PID changed<br>from 80 to 114.<br>• Preparation of the Draft for Voting.|
|KSG688-16|2021.05.28|<br>• [CGO] Inclusion of resolution of comments from AN186 v03<br>DV<br>• change to have all A_GroupValue services with Fast Ack to<br>fit Media-Coupler impossibility to detect APCI type<br>• rename PID_RF_MULTI_RX_RECEIVE_READY to<br>PID_RF_MULTI_RX_READY<br>• Harmonise PID_CEMI_RF_MULTI_ACTIVATE PID value to<br>91<br>• 2.3.2. 4.2 Detailed PID_GRP_TX_MULTI_INFO_TABLE<br>format for AckSlot coding and error case handling added<br>• In 2.3.3.4.1 explain that PID_UNICAST_CONTROL is only<br>used for TP to RF and RF to TP, but for local addressing of<br>the coupler|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**Version** **Date** **Modifications**

               - Add 3.1.5 specify behaviour of PID_RECEPTION_MODE in

case PID_RF_MULTI_TYPE.b0 is set to READY.
KSG688-17 2021.06.28 - Removed deprecated sentences in chapter 2.3.2.4.1

                 - Correct Access Policies in detail description
PID_GRP_TX_MULTI_INFO_TABLE
PID_GRP_RX_MULTI_INFO_TABLE
PID_RF_MULTI_FAST_MEDIA_COUPLER_IA
PID_RF_MULTI_SLOW_EXTENDER_IA
PID_LAST_TRANSMISSION_MODE
KSG688-18 2021.07.08 - Change RF Channel to RF Mode when concern Ready, Fast,

Multi

                 - 2.1.1 and 2.3.2.7: Correct
PID_LAST_TRANSMISSION_MODE access policies to
3FF/3FF + update Table 1 with this property.

               - 2.2.2.4: Remove (Same LFN)

                 - 2.2.5: modify chapter from “Data Link Layer Services” to
“Data to Application Layer Services” and define new
parameters

                 - 2.3.2.7: Replace access level from 2/0 to 2/x

                 - 2.4.1 Eliminate (L) and (C) abbreviations

                 - 2.4.1 Step1: Detail the service used to switch the MaS form
Slow to Fast

                 - 2.3.2.4 and 2.3.2.5: Add master reset behavior

                 - 2.3.2.4.2 and 2.3.2.5.1: replace “Group Object Values” by
“multicast telegram”

                - 2.3.2.7.1 Remove sentence “The RF channel to be used is
set by PID_TRANSMISSION_MODE or the AddInfo field in
cEMI.”

                 - 2.4.2.4: Add “The MaC shall take care of modifying the RF
Multi resources and ensure consistency by synchronizing the
update with the load control of the Filter table.”

                 - 2.4.3.1: Add “The MaC shall take care of modifying the RF
Multi resources and ensure consistency by synchronizing the
update with the load control of the Group Address table.”
AN186 v04 2021.07.12 - 2.4.1 Step 1: Remove details about (how to put Slow and

semi bidirectional devices in programming mode)

                 - 2.4.3.1 in the sentence ““The MaC shall take care of
modifying the RF Multi resources and ensure consistency by
synchronizing the update with the load control of the Group
Object or Group Address table.” Remove Group Object or
AN186 v04 2021.08.18 - Creation of the Approved Standard.

Savedate: Filename: page 2 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Version|Date|Modifications|
|---|---|---|
|||<br>• Add 3.1.5 specify behaviour of PID_RECEPTION_MODE in<br>case PIDRFMULTITYPE.b0 is set to READY.|
|KSG688-17|2021.06.28|___<br>• Removed deprecated sentences in chapter 2.3.2.4.1<br>• Correct Access Policies in detail description<br>PID_GRP_TX_MULTI_INFO_TABLE<br>PID_GRP_RX_MULTI_INFO_TABLE<br>PID_RF_MULTI_FAST_MEDIA_COUPLER_IA<br>PID_RF_MULTI_SLOW_EXTENDER_IA<br>PIDLASTTRANSMISSIONMODE|
|KSG688-18|2021.07.08|___<br>• Change RF Channel to RF Mode when concern Ready, Fast,<br>Multi<br>• 2.1.1 and 2.3.2.7: Correct<br>PID_LAST_TRANSMISSION_MODE access policies to<br>3FF/3FF + update Table 1 with this property.<br>• 2.2.2.4: Remove (Same LFN)<br>• 2.2.5: modify chapter from “Data Link Layer Services” to<br>“Data to Application Layer Services” and define new<br>parameters<br>• 2.3.2.7: Replace access level from 2/0 to 2/x<br>• 2.4.1 Eliminate (L) and (C) abbreviations<br>• 2.4.1 Step1: Detail the service used to switch the MaS form<br>Slow to Fast<br>• 2.3.2.4 and 2.3.2.5: Add master reset behavior<br>• 2.3.2.4.2 and 2.3.2.5.1: replace “Group Object Values” by<br>“multicast telegram”<br>• 2.3.2.7.1 Remove sentence “The RF channel to be used is<br>set by PID_TRANSMISSION_MODE or the AddInfo field in<br>cEMI.”<br>• 2.4.2.4: Add “The MaC shall take care of modifying the RF<br>Multi resources and ensure consistency by synchronizing the<br>update with the load control of the Filter table.”<br>• 2.4.3.1: Add “The MaC shall take care of modifying the RF<br>Multi resources and ensure consistency by synchronizing the<br>update with the load control of the Group Address table.”|
|AN186 v04|2021.07.12|• 2.4.1 Step 1: Remove details about (how to put Slow and<br>semi bidirectional devices in programming mode)<br>• 2.4.3.1 in the sentence ““The MaC shall take care of<br>modifying the RF Multi resources and ensure consistency by<br>synchronizing the update with the load control of the Group<br>Object or Group Address table.” Remove Group Object or|
|AN186 v04|2021.08.18|• Creation of the Approved Standard.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**Contents**

###### 1 Purpose, motivation and scope ................................................................................. 4
 1.1 Introduction ....................................................................................................... 4 1.2 Motivation ......................................................................................................... 4 1.3 Scope ............................................................................................................... 5
 1.3.1 KNX RF systems ........................................................................................ 5 1.3.2 KNX RF USB interface ............................................................................... 5 1.3.3 KNX TP1/RF Media Coupler ...................................................................... 6 1.3.4 KNX RF Retransmitter ................................................................................ 6 1.3.5 KNX RF Multi and security ......................................................................... 7 1.4 Main principle ................................................................................................... 7

 2 Specification ................................................................................................................ 7
 2.1 Terms and definitions ....................................................................................... 7
 2.1.1 Access Policies .......................................................................................... 7 2.1.2 Roles .......................................................................................................... 9 2.2 Stack and communication................................................................................. 9
 2.2.1 Combinatory reduction of runtime capabilities ............................................ 9 2.2.2 Use of Fast Ack and RF Channels at runtime .......................................... 10 2.2.3 Use of Fast Ack and RF Modes at configuration ...................................... 13 2.2.4 Error and exception handling ................................................................... 14 2.2.5 Data to Application Layer Services........................................................... 14 2.3 Resource definition or used Resources .......................................................... 15
 2.3.1 Existing Resources for RF Multi ............................................................... 15 2.3.2 New Resources for RF Multi end device .................................................. 17 2.3.3 New Resources for RF Multi Media Coupler ............................................ 26 2.3.4 New Resources for RF Multi USB interface (cEMI) .................................. 45 2.3.5 New Resources for RF Multi Retransmitter .............................................. 55 2.4 Configuration Procedures ............................................................................... 58
 2.4.1 End device detailed Configuration Procedures ........................................ 59 2.4.2 Media Coupler Configuration Procedures ................................................ 61 2.4.3 Device Configuration Procedures ............................................................. 63 2.5 Profile definition .............................................................................................. 64
 2.5.1 cEMI Server Object .................................................................................. 65 2.5.2 Additional Information ............................................................................... 65 2.5.3 RF Medium Object ................................................................................... 66 2.5.4 Router Object ........................................................................................... 66 2.5.5 Editorial Correct in Profile/Resource for a KNX/RF Multi USB Stick (cEMI Server) ..................................................................................................... 66 2.6 Identifiers and discovery ................................................................................. 67

 3 Impact and dependencies ........................................................................................ 68
 3.1 System specification (“Handbook”) dependencies .......................................... 68
 3.1.1 History List handling in KNX devices ........................................................ 68 3.1.2 PID_TRANSMISSION_MODE ................................................................. 68 3.1.3 PID_RF_MULTI_PHYSICAL_FEATURES ............................................... 68 3.1.4 cEMI Additional Information field .............................................................. 69 3.1.5 PID_RECEPTION_MODE ........................................................................ 69

Savedate: Filename: page 3 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 3.2 Configuration Interworking .............................................................................. 70 3.3 Runtime Interworking ...................................................................................... 70 3.4 Registration and certification .......................................................................... 70 3.5 Integration and common tool impact ............................................................... 70 3.6 Security........................................................................................................... 70 3.7 Risks and compatibility issues ........................................................................ 70

 Annex A (informative) Use cases for multicast communication ................................. 71
 A.1 Introduction ..................................................................................................... 71 A.2 Use case with A_GroupValue_Write, with Fast and Slow devices ................. 71 A.3 Use case with A_GroupValue_Write, with Ready, Fast and Slow devices ..... 72

 Annex B (informative) Use cases for smart RF Retransmitter .................................... 73
 B.1 Legend ........................................................................................................... 73 B.2 Use case A : Retransmitter is between sensor and actuator .......................... 73 B.3 Use case B : Retransmitter is between one sensor and two actuators ........... 73 B.4 Use case C : Retransmitter is between two sensors and one actuator ........... 74 B.5 Use case D : Retransmitter is between one sensor and two actuators (bad RF quality) ............................................................................................................ 74

 Annex C (informative) Fast and Slow Media Couplers ................................................. 75
 C.1 Option A – RF Fast and RF Slow in two different Lines .................................. 75 C.2 Option B – Fast Media Coupler and Slow interface in the same line .............. 75
 C.2.1 Option B0 ................................................................................................. 76 C.2.2 Option B1 ................................................................................................. 77 C.3 Multicast: communication use cases .............................................................. 77
 C.3.1 Option A ................................................................................................... 79 C.3.2 Option B ................................................................................................... 81

### 1 Purpose, motivation and scope

 _This clause is not intended for integration in the KNX Specifications._

#### 1.1 Introduction
The purpose of this Application Note is to define one or more KNX device Profiles for S-Mode
configuration of RF Multi devices.

This document also gives some improvements concerning the system and Interworking aspects of
RF Multi, that concern also other Configuration Modes (Ctrl-Mode and PB-Mode).

The goal is to extend the already defined solution (RF S-Mode for Ready devices) for an easy
integration of KNX RF Multi in ETS. One of the main principles of this extension is to keep the usage
and configuration of RF Multi devices as simple as possible, with the same level of knowledge as for
an existing RF (Ready) device.

#### 1.2 Motivation
KNX RF Multi has been defined to ensure robustness in KNX RF, by allowing the use of multiple
RF channels (F1, F2, F3, S1, S2), and the use of Fast Acknowledge.

Moreover, KNX RF Multi allows the communication with battery driven devices, by using the Slow
RF Mode.

Savedate: Filename: page 4 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

#### 1.3 Scope

##### 1.3.1 KNX RF systems
The goal of this document is to specify S-Mode device Profiles for the KNX RF Communication
Medium. This is specified in [1] and exhibits four systems, as Table 1 in [1]. From these, the scope
of this document is limited to the system “KNX RF Multi”.

The support of KNX RF S-Mode devices has been defined in two steps.

1. STEP 1: limited to KNX RF Ready.

If ETS configures a KNX RF Multi device, it will configure it to behave like a KNX RF
Ready device without any user action. (See PID_RF_MULTI_TYPE definition.)

This step is already defined since ETS 5.0 version (released in October 2014).

2. STEP 2: extend to KNX RF Multi.

In this step, the KNX RF Multi features will be supported.

##### 1.3.2 KNX RF USB interface

###### 1.3.2.1 Use of RF Ready USB interface
The use of RF Ready USB interface for configuring RF Multi devices is not possible.

The configuration could not be done using such an interface since it shall be done using RF Multi
channels.

In addition, runtime (bus/group monitoring) could not be possible using such an interface since RF
Frames and Fast Ack cannot be seen.

###### 1.3.2.2 Use of RF Multi USB interface

1.3.2.2.1 Motivation
For the support of RF Multi devices, an RF Multi interface is mandatory.

It allows a full use of RF Multi features.

   - Configuration can be done.

   - Runtime communication (bus/group monitoring) is supported.

The requirements for RF Multi are already defined in [4], except for the acknowledgement of
incoming Frames using Fast Ack.

NOTE 1 In case of an RF USB Interface in an end device, the cEMI Client has to set up all RF Multi Resources
locally.

1.3.2.2.2 Acknowledgement of incoming Frames by sending of Fast Ack
The intended use cases where the interface should be able to acknowledge an incoming RF
Frame, are the following.

   - EITT: check that a sender device retransmits the Frame if an ack slot is missing.

   - Visualisation tool: a visualisation tool with direct access to RF medium may acknowledge
incoming Frames.

   - ETS: at commissioning, the installer may be able to see the retransmission and show
reliability of the RF communication.

Savedate: Filename: page 5 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

The existing specification does not specify how the interface may send Fast Ack on specified ack
slots. This document needs to be extended for acknowledgement in case of RF Frame reception,
so Fast Ack sending.

It will be a feature of the interface, which enables the acknowledge of the incoming frames.

##### 1.3.3 KNX TP1/RF Media Coupler

###### 1.3.3.1 Motivation
For the support of RF Multi devices, the KNX TP1/RF Media Coupler shall support RF Multi.

The requirements for the support of RF Multi are the following.

   - Support of RF Multi Physical Layers (including multiple RF channel and Fast
Acknowledgement).

   - Support of additional Resources for routing TP1 Telegrams to RF, and for Fast Ack and
ack slot configuration.

###### 1.3.3.2 Use of TP1/RF Ready Media Coupler
The use of TP1/RF Ready Media Coupler for configuring RF Multi devices is not possible.

The impact of using TP1/RF Ready Media Coupler (RF Ready) is the following.

   - Configuration cannot be done by RF Ready Media Coupler.

   - No runtime RF Multi communication is supported.

###### 1.3.3.3 Use of TP1/RF Multi Media Coupler
The use of TP1/RF Multi Media Coupler for configuring RF Multi devices is mandatory.

**Technical constraints**

According to today’s technical constraints (2017), RF Multi runtime physical features of a Media
Coupler might be limited to either

   - Rx/Tx Fast
or

   - Rx/Tx Slow

**Remarks**

- This differentiation is a consequence of the following: reception of Fast Frames is not possible
during Slow transmission (if in the same device).

- If slow and fast devices are present in the same RF installation (and linked with TP1 devices),
all devices can be set in the same Subnetwork, but two TP1/RF Multi Media Coupler are
needed: one Media Coupler for Fast Frames and one Slow extender for Slow Frames.

NOTE 2 Each TP1 device could be seen as having the RF Multi physical features of the TP1/RF Multi Media
Coupler.

##### 1.3.4 KNX RF Retransmitter

###### 1.3.4.1 RF Ready Retransmitter
The following Resource is today specified for the RF Retransmitter flag: PID_RF_RETRANSMITTER (PID = 57) in RF Medium Object, type PDT_BINARY_INFORMATION.

Only Domain Address based RF Retransmitter is supported.

Savedate: Filename: page 6 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 1.3.4.2 RF Multi Retransmitter
A Retransmitter can be dedicated to repeat Fast only Frames, or Slow only Frames (depending on
its RF Multi physical features in Rx/Tx).


###### 1.3.4.3 Smart retransmission
There is a need (using an ETS App, using the RF diagnostic properties) to help the installer to
diagnose RF signals in its installation.

There is also a need to define which RF Telegrams must be repeated: which Group Address,
which source Individual Address, which destination Individual Address, BC/SBC Frames…


##### 1.3.5 KNX RF Multi and security
In PB-Mode, KNX RF Multi is already defined today with and without security.

In S-Mode, KNX RF Multi device shall support KNX Data security. At configuration, the device can
be configured with or without security. The RF Multi S-Mode device Profile defines Data Security
as a mandatory Feature (see Profile definition).


#### 1.4 Main principle
**Easy to configure**

   - Nothing to be known by MaC user.

   - Nothing to be done by MaC user.


The ETS database contains the RF Multi device runtime capabilities (also called Features).

The configuration of RF Mode (Ready, Multi Fast, and Multi Slow) for each link is automatically done
by ETS.


The activation of Fast Acknowledgement is automatically done by ETS.

The configuration of ack slot number is automatically done by ETS.


### 2 Specification

#### 2.1 Terms and definitions


##### 2.1.1 Access Policies
This document uses the following Access Policies.

Security Mode: **Off** **On**


Client:

Security: none, A, A+C


**Property Name**

6 79 PID_RF_MULTI_UNICAST_CONTROL W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**

6 114 PID_RF_MULTI_BROADCAST_CONTROL W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**

8 70 PID_RF_MULTI_SENDING_ACK W R WR W R WR W R WR WR W R WR W R **3FF / 3FF**

|Off<br>plain<br>Rx<br>T<br>none<br>A+C A+C<br>A A|Col2|Col3|Col4|Col5|On<br>plain<br>Rx<br>T<br>None<br>A+C A+C<br>A A|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|WR|WR|W R|WR|W R|
|||||||||||


Savedate: Filename: page 7 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

19 76 PID_GRP_TX_MULTI_INFO_TABLE W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**

19 77 PID_GRP_RX_MULTI_INFO_TABLE W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**

19 78 PID_RF_MULTI_MEDIA_COUPLER_TYPE W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**

19 81 PID_RF_SMART_RETRANSMITTER W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**

19 82 PID_GRP_TP_RF_MULTICAST_TABLE W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**

19 83 PID_GRP_RF_TP_MULTICAST_TABLE W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**

19 84 PID_RF_MULTI_FAST_SLOW_COMM W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**


19 85


PID_RF_MULTI_FAST_MEDIA_COUPLER_IA W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**


19 86 PID_RF_MULTI_SLOW_EXTENDER_IA W R WR W R WR W R - - WR - - WR - - **3FF / 0CC**

19 88 PID_RF_MULTI_RX_READY W R WR W R WR W R - R-WR W R WR W R **3FF / 1FF**

19 89 PID_LAST_TRANSMISSION_MODE W R WR W R WR W R WR-WR W R WR W R **3FF / 3FF**

19 91 PID_CEMI_RF_MULTI_ACTIVATE W R WR W R WR W R WR WR W R WR W R **3FF / 3FF**

When using Roles, the requirements for Access Policies (columns Rx) may need additional and
more precise requirements for specific Roles, using the Role identifiers.

In case the Security Mode is set to “Enabled”, and if Roles are used, the Access Policies may
depend on the Role identifier.

EXAMPLE 1 The Role “Reconstruction” may only have Read access to some Properties.

**Table 1 – Accessibility of Properties for cEMI services for Local Device Managment**

**Object** **Security Mode**
**Interface Object**

**Type** **disabled** **enabled**

**Property** **PID** **read** **write** **read** **write**
RF Medium Object
PID_RF_MULTI_TYPE 51 M M M M
PID_RF_MULTI_PHYSICAL_FEATURES 52 M x M x
PID_RF_MULTI_CALL_CHANNEL 53 M M M M
PID_TRANSMISSION_MODE 70 M M M M
PID_RECEPTION_MODE 71 M M M M
PID_TEST_SIGNAL 72 O O O O
PID_LAST_TRANSMISSION_MODE 89 M M M M
cEMI Server Object 8
PID_RF_MULTI_SENDING_ACK 70 M M M M
PID_RF_MULTI_ADDINFO_SELECT 72 M M M M

Savedate: Filename: page 8 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|---|---|---|---|---|---|---|---|---|---|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|- -|WR|- -|WR|- -|
|W R|WR|W R|WR|W R|- R-|WR|W R|WR|W R|
|W R|WR|W R|WR|W R|WR-|WR|W R|WR|W R|
|W R|WR|W R|WR|W R|WR|WR|W R|WR|W R|

|Interface Object|Object<br>Type|Security Mode|Col4|Col5|Col6|
|---|---|---|---|---|---|
|**Interface Object**|**Object**<br>**Type **|**disabled**|**disabled**|**enabled**|**enabled**|
|**Property **|**PID**|**read**|**write**|**read**|**write**|
|RF Medium Object||||||
|PID_RF_MULTI_TYPE|51|M|M|M|M|
|PID_RF_MULTI_PHYSICAL_FEATURES|52|M|x|M|x|
|PID_RF_MULTI_CALL_CHANNEL|53|M|M|M|M|
|PID_TRANSMISSION_MODE|70|M|M|M|M|
|PID_RECEPTION_MODE|71|M|M|M|M|
|PID_TEST_SIGNAL|72|O|O|O|O|
|PID_LAST_TRANSMISSION_MODE|89|M|M|M|M|
|cEMI Server Object|8|||||
|PID_RF_MULTI_SENDING_ACK|70|M|M|M|M|
|PID_RF_MULTI_ADDINFO_SELECT|72|M|M|M|M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### 2.1.2 Roles
In addition to the security Role identifiers specified in [7], the Role “Coupler Extension” is used in
this document:

###### Value of role Role
 identifier

00000003h Coupler extension

#### 2.2 Stack and communication

##### 2.2.1 Combinatory reduction of runtime capabilities

###### 2.2.1.1 Reception

**Table 2 – RF Multi Rx physical features**

**Rx RF Mode** **Allowed or not** **Use case**

None Allowed Battery powered
device (semidirectional devices)
(small battery)

Slow only Allowed Battery powered
device (big battery)

Fast only Allowed Mains powered device

Slow and Fast Not allowed         
An RF Multi device supporting Fast Rx shall also support Ready in Rx. A new Property is defined
to request also the Fast Scan NPRM or PRM Mode. NPRM Mode can be requested in case of no
Ready connection is used in the system.

###### 2.2.1.2 Transmission

**Table 3 – RF Multi Tx physical features**

**Tx RF Mode** **Allowed or not** **Use case**

None Allowed

Slow only Not allowed          
Fast only Allowed Battery powered
device

Slow and Fast Allowed Mains powered device

An RF Multi device supporting Tx shall also support Ready in Tx.

NOTE 3 ETS may exclude the following technically possible but not useful combinations:

  - Rx Ready only, Tx Ready and Fast (or Slow+Fast)

  - Rx Ready and Fast, Tx Ready only

  - Rx Ready and Slow

Savedate: Filename: page 9 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Value of role<br>identifier|Role|
|---|---|
|00000003h|Coupler extension|

|Rx RF Mode|Allowed or not|Use case|
|---|---|---|
|None|Allowed|Battery powered<br>device (semi-<br>directional devices)<br>(small battery)|
|Slow only|Allowed|Battery powered<br>device(big battery)|
|Fast only|Allowed|Mains powered device|
|Slow and Fast|Not allowed|-|

|Tx RF Mode|Allowed or not|Use case|
|---|---|---|
|None|Allowed||
|Slow only|Not allowed|-|
|Fast only|Allowed|Battery powered<br>device|
|Slow and Fast|Allowed|Mains powered device|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### 2.2.2 Use of Fast Ack and RF Channels at runtime

###### 2.2.2.1 General considerations

2.2.2.1.1 Call Channel definition
The Call Channel shall not be modified by ETS. It is kept on the F1 or S1 channel as default one.

EXAMPLE 2 Device A is configured with Call Channel F1 and device B is configured with Call Channel F2. If both A
and B want to send one Frame, they will be able to send them at the same time, without detecting collision.

2.2.2.1.2 Physical Layer

 _The following is intended to be integrated in [1], in note 1 of the figure 36._
_During inter-Frame time, the device shall also scan. The following sentence shall replace the current note 1 of the_
_figure 36 in [1]:_

“Full reception mode (scanning) shall be enabled in parallel if the device has receiving capabilities”.

**Ack Frame format**

 _The following is intended to be integrated in [1], in the Figure 44._

In [1], there is a mistake in the Figure 44 (“Ack Frame format”), the number of chips in the Synchro
field is 12 chips (instead of 6 chips). The description of the field (encoding) is correct.

2.2.2.1.3 Runtime Ready and Multi Frames with same Group Address
There shall be one LFN for Fast frames, one for Ready frames and one LFN for Slow frames. This
is to avoid that a Slow Frame is rejected because parallel Fast- or Ready Frames from the same
sender are received earlier.

On the receiver side, there are considerations to be taken into account at Physical Layer, concerning
the Fast Ack, and the History List.

The management of Fast Ack shall be done firstly, before the handling of the History List. Moreover,
the _History List shall take into account the type of Frame (Ready, Fast/Slow without Fast Ack,_
Fast/Slow with Fast Ack) by using the KNX Ctrl field, in order to be able to distinguish the Ready and
the Multi Frame.

2.2.2.1.4 RF Retry strategy if Fast Ack are used

 _The following is intended to replace, in [1], the figure 47 “Acknowledge algorithm, handle error”_

The central block “Repeat Frame on another channel” shall be replaced by “Retry transmission of
the Frame on another RF Channel according to the retry sequence”.

The conditional block “Frame repeated on all channels” shall be replaced by “Frame retransmitted
on all RF Channels of the retry sequence”.

 _The following is intended to replace, in [1], the paragraph §6.6.4.6.1 Transmitter side,_

**Fast RF Channel**

If a retransmitter is detected because of the reception of the echo Frame, the device shall set another
timeout for the reception of the Ack Rep Frames. This timeout shall be dependant of the length
Frame and the number of expected Fast Acks. The timeout shall be the following.

   - 1 000 ms if less than 32 Fast Acks are expected.

   - 2 000 ms more than 32 Fast Acks are expected.

These timeouts are not used if all the expected Fast Acks have been received.

Savedate: Filename: page 10 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**Slow RF Channel**

If a retransmitter is detected by the reception of the echo Frame, the sender shall set another timeout
for the reception of the Ack Rep Frames. This timeout shall be dependant of the length Frame and
the number of expected Fast Acks. The timeout is the following:

   - 4 000 ms if less than 32 Fast Acks are expected.

   - 5 000 ms if more than 32 Fast Acks are expected.

These timeouts are not used if all the expected Fast Acks have been received.

**General considerations for retries (Fast and Slow RF channels)**

In the case of group communication, if one or several expected Acks (expected Acks are Acks that
are configured for this Group Address and not present in the black list, see 2.2.2.1.5 for black list
definition) are missing, the device shall send the Frame once or several times on RF Channels
defined according to the retry sequence.

The retry shall stop after the retry sequence has ended or as soon as every expected Fast Ack has
been received. An Ack is considered as being received, if it is received at least once after any
transmission. An Ack does not need to be received after each transmission.

The maximum number of retries for Fast (without counting the original Frame) shall be at least 3 and
maximum 5.

The maximum number of retries for Slow (without counting the original Frame) shall be at least 1
and maximum 2.

The exact retry sequence is not standardised.

The following sequence is recommended for Fast (with 5 retries).

F1 (original transmission on Call RF Channel), then F1 / F1 / F2 / F2 / F3 (if implemented).

The following sequence is recommended for Slow (with 2 retries).

S1 (original transmission on Call RF Channel), then S1 / S2.

At least one retry shall be done on another RF Channel than the original one.

In each retry, the same LFN as the original Frame shall be used.

In the case of transmission from a Media Coupler, the same behaviour as a normal end-device is
recommended.

2.2.2.1.5 Concept of black list for device acknowledgement

 _The following is intended to be integrated in [1]._

If using the Fast Acknowledgment in RF Multi at runtime, there are use cases where a receiver
device that is configured for acknowledging Frames may not be able to ack because it is unpowered
or defect. This use case shall be taken into account by each sender in order to not continuously retry
sending the Frame to this receiver.

The following behaviour is then recommended. The sending device should store the ack information
(at least Group Address, fast/slow information and slot number) where no response is received since
a few transmissions. This should be stored in a dedicated table called blacklist for device
acknowledgment. This table is internally defined in the device, and no Resource is defined to make
it accessible from outside of the device. The implementation is device specific.

Savedate: Filename: page 11 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

If a Fast Ack x is not received after 3 retry sequences (3 different RF original Frames, that may have
led to more RF transmissions, depending on RF retry strategy), then it should be stored in this
blacklist. This will mean that no retry will be made due to the lack of response on this specific Fast
_Ack x (see clause 2.2.2.1.4)._

If a _Fast Ack, present in the blacklist, is received, then it will be removed from the blacklist (e.g._
product is powered again).

There is no standard definition for the implementation of this concept in a device. This concept is
implementation specific.

2.2.2.1.6 Error Handling
It is possible to receive KNX RF Multi frames when the reception mode is RF Ready mode. In this
case the RF Telegram with Fast Ack Request (KnxCtrl=90h) is not foreseen to be handled by the
device (or the stack), and thus shall be rejected.

The device could be set in RF Ready mode by the configuration tools for backward compatibility,
but then no Fast Ack mechanism can be used.

###### 2.2.2.2 RF Modes used for A_GroupValue_Services

**Table 4 – RF Modes used for A_GroupValue_Write,**
**A_GroupValue_Read, A_GroupValue_Response**

**RF Mode associated to Group** **A_GroupValue_Write,** **GroupValue_Response is sent**
**Address (cf. sending association)** **A_GroupValue_Read, is sent in** **by receiver in**
**is defined as (more than one RF**
**Mode is possible for the same**
**Group Address)**

Ready Ready Ready

Multi Fast Fast (with or without Fast Ack) Fast (with or without Fast Ack
identical to corresponding
GroupValueRead )

Multi Slow Slow (with or without Fast Ack) Fast (with or without Fast Ack
identical to corresponding
GroupValueRead )

One or more lines in the above table can be used when a sender is linked with different receivers,
that are receiving on different RF Modes.

###### 2.2.2.3 Special case
Use case of efficient GroupValueRead for battery-driven remote-control device that want to toggle
a value and has therefore to read the value first. In this setup, typically, the AGroupValueRead can
be sent without Fast Ack. It is also recommended to set the Repeat Count to 0, as any
retransmission may also increase the delay to get the AGroupValueResponse. So for this specific
usage, no dedicated resource (Table) has to be set.

###### 2.2.2.4 RF Modes used for A_NetworkParameter_InfoReport
If the device shall send a A_NetworkParameter_InfoReport in Broadcast Communication mode
(case for PID_RF_DIAG_MODE), there shall be one sent on Ready and one send on Fast. The
frames are sent without FastAck.

Savedate: Filename: page 12 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|RF Mode associated to Group<br>Address (cf. sending association)<br>is defined as (more than one RF<br>Mode is possible for the same<br>Group Address)|A GroupValue Write,<br>_ _<br>A GroupValue Read, is sent in<br>_ _|GroupValue Response is sent<br>_<br>by receiver in|
|---|---|---|
|Ready|Ready|Ready|
|Multi Fast|Fast (with or without_Fast Ack_)|Fast (with or without_Fast Ack_ <br>identical to corresponding<br>GroupValueRead)|
|Multi Slow|Slow (with or without_Fast Ack_)|Fast (with or without_Fast Ack_ <br>identical to corresponding<br>GroupValueRead)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

If the device shall send a A_NetworkParameter_InfoReport in point-to-point Communication mode
(connectionless), there shall be one sent on Ready if PID_RF_MULTI_RX_READY is set to
“Ready”. If PID_RF_MULTI_RX_READY is set to “Multi”, one telegram is sent on Ready and one
telegram is sent on Fast. The frames are sent with the first ack slot (number 0).

##### 2.2.3 Use of Fast Ack and RF Modes at configuration

###### 2.2.3.1 General considerations
When configuring an RF Multi device, the Fast RF Mode shall be used (either by the Media Coupler
or by the RF dongle).

In case of RF Ready, the semi-directional devices must be first waken up, by an action of the MaC
user. For Slow devices, either ETS sends a slow Frame or an action is performed on the device to
wake it up and switch to Fast reception RF mode.

**Fast Acknowledgement**

If the RF Multi device support Fast Acknowledgement (in its RF Multi physical features), then ETS
(using a RF dongle) or the Media Coupler shall use the Fast Ack mechanism. In case of point-topoint communication (either connectionless or connection-oriented), ETS or the Media Coupler shall
use the first ack slot (number 0). The Media Coupler shall however have been firstly downloaded
(Media Coupler shall know on which RF Mode sending the Frame and with or without Fast Ack). In
case of broadcast – or system broadcast communication, ETS and the Media Coupler shall not use
Fast Acknowledgement. If a device receives such a broadcast Frame, with Fast Ack requested, the
device shall not acknowledge it and shall ignore it.

In case the RF Multi device does not support Fast Acknowledgement, then ETS and the Media
Coupler shall not use the Fast Ack mechanism.

**Impact on duty cycle**

The configuration time is not taken into account for computing the duty cycle.

###### 2.2.3.2 S-Mode / Ctrl-Mode configuration
In order to know on which RF Mode, ETS or the Media Coupler shall send the configuration
request Frame, the Rx Physical features of the to-be configured device shall be taken into account.

**Point-to-point (connection-oriented – or connectionless mode)**

**Table 5 – RF Modes used for services in point-to point**

**RF Mode associated to request** **Response**

Ready Ready

Multi Fast Fast (with Fast Ack if the destination supports it, or
without Fast Ack if the destination does not support it)

Multi Slow Fast (with or without Fast Ack)

Savedate: Filename: page 13 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|RF Mode associated to request|Response|
|---|---|
|Ready|Ready|
|Multi Fast|Fast (with_Fast Ack_ if the destination supports it, or<br>without_Fast Ack_ if the destination does not support it)|
|Multi Slow|Fast(with or without_Fast Ack_)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**Broadcast and System Broadcast**

**Table 6 – RF Modes used for services in BC and SBC**

**RF Mode associated to request** **Response**

Ready Ready

Multi Fast Fast (no Fast Ack)

Multi Slow Fast (no Fast Ack)

**TL connection oriented**

The RF Mode used for the T_Connect-service shall be kept for the whole Transport Layer
connection by both communication partners. This includes the communication of T_Ack-PDU and
T_Disconnect-PDU. If a different RF Mode is used, the Telegram shall be ignored.

###### 2.2.3.3 PB-Mode configuration

 _This clause is not intended to be integrated in the KNX specification. It is only here for reference and for having an_
_overview of all configuration modes in the current document._

In order to know on which RF Mode the device shall send the configuration request Frame, the Rx
Physical features of the distant device shall be taken into account.

**Point-to-point**

Not used in PB-Mode because devices are not addressed.

**System Broadcast**

**Table 7 – RF Modes used for SBC services in PB Mode**

**RF Mode associated to SysNwParamterWrite**

Initial step : select the sensor and the Ready + Multi Fast + Multi Slow
actuator and function

Linking step : a kind of Point-to-point Ready (in the current version)
communication using SBC Maybe Multi Fast with Fast Ack (in a future version)

Final step : end of configuration Ready + Multi Fast + Multi Slow

##### 2.2.4 Error and exception handling

 _This clause is not intended for inclusion in the KNX Specifications._

Error – and exception handling is included in the next chapter where appropriate.

##### 2.2.5 Data to Application Layer Services
The Upper Layer are not always able to determine the correct RF Mode for sending/receiving.
Therefore, the specification of the Data Link to Application Layer shall be extended by the
parameter rf_mode and rf_ack.

- rf_mode : this parameter shall indicate whether the service is communicated using Ready
and/or Fast and/or Slow RF mode or “None” if the information is not available.

_For the Ind, Lcon and Acon service primitives, the following shall be added._

- rf_ack : this parameter shall indicate whether the service is communicated with FastAck
request or not

Savedate: Filename: page 14 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|RF Mode associated to request|Response|
|---|---|
|Ready|Ready|
|Multi Fast|Fast(no_Fast Ack_)|
|Multi Slow|Fast(no_Fast Ack_)|

|Col1|RF Mode associated to SysNwParamterWrite|
|---|---|
|Initial step : select the sensor and the<br>actuator and function|Ready + Multi Fast + Multi Slow|
|Linking step : a kind of Point-to-point<br>communication using SBC|Ready (in the current version) <br>Maybe Multi Fast with Fast Ack(in a future version)|
|Final step : end of configuration|Ready + Multi Fast + Multi Slow|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

_For the Req and Res service primitives, the following shall be added._

- rf_ack : this parameter shall indicate whether the service is communicated with FastAck
request or not, or be “None” if the information is not available

#### 2.3 Resource definition or used Resources

##### 2.3.1 Existing Resources for RF Multi
In [3] the RF Medium Object (Object Type 19) is defined.

**Table 8 – Properties of the RF Medium Object**

**Property Identifier (PID)** **Description** **Usage**

51 PID_RF_MULTI_TYPE Gets or sets the type of RF The MaC can set a value to
Multi device: RF Ready or this Property.
RF Multi.

52 PID_RF_MULTI_PHYSICAL_- Gets the physical features of The MaC does not use it for
FEATURES the RF Multi device configuration. It may read it

for device information. The
same value is defined in the
MaC database entry.
The Ctrl-Mode configuration
tool uses it.

53 PID_RF_MULTI_CALL_- Sets the Call RF Channel for It is strongly recommended
CHANNEL Fast and for Slow RF not to use this Property. The

channels. default Call RF Channel shall

not be modified (F1 for Fast,
S1 for Slow)

54 PID_RF_MULTI_OBJECT_LINK Adds and deletes Used by Ctrl-Mode
associations in the device configuration tool.

55 PID_RF_MULTI_EXT_GA_- Adds and deletes the This shall not be used
REPEATED extended Group Address in This is replaced by a more

the repetition table generic approach (see

Resources for RF Multi
Retransmitter in §2.3.5.1)

57 PID_RF_RETRANSMITTER Sets or gets the Retransmitter Any MaC may use it.
mode in a device.

70 PID_TRANSMISSION_MODE Set the KNX RF Multi The MaC can set a value to
transmission mode of the RF this Property.
Physical Layer

###### 2.3.1.1 RF Multi Type

 _The Resource PID_RF_MULTI is already defined in [5]. The error handling specification in clause 2.4.2.3.4 is_
_generalized here._

If the MaS does not support the RF Multi type requested, it shall not change the value of the
Resource and respond with the current RF Multi Type.

No change in master reset specification. Only the KNX default value shall be set according the
following.

   - A Ready device shall have PID_RF_MULTI_TYPE = READY by default.

   - A Multi device shall have PID_RF_MULTI_TYPE = MULTI by default.

Savedate: Filename: page 15 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Property Identifier (PID)|Description|Usage|
|---|---|---|
|51 PID_RF_MULTI_TYPE|Gets or sets the type of RF<br>Multi device: RF Ready or<br>RF Multi.|The MaC can set a value to<br>this Property.|
|52 PID_RF_MULTI_PHYSICAL_-<br>FEATURES|Gets the physical features of<br>the RF Multi device|The MaC does not use it for<br>configuration. It may read it<br>for device information. The<br>same value is defined in the<br>MaC database entry.<br>The Ctrl-Mode configuration<br>tool uses it.|
|53 PID_RF_MULTI_CALL_-<br>CHANNEL|Sets the_Call RF Channel_ for<br>Fast and for Slow RF<br>channels.|It is strongly recommended<br>not to use this Property. The<br>default_Call RF Channel_ shall<br>not be modified (F1 for Fast,<br>S1 for Slow)|
|54 PID_RF_MULTI_OBJECT_LINK|Adds and deletes<br>associations in the device|Used by Ctrl-Mode<br>configuration tool.|
|55 PID_RF_MULTI_EXT_GA_-<br>REPEATED|Adds and deletes the<br>extended Group Address in<br>the repetition table|This shall not be used<br>This is replaced by a more<br>generic approach (see<br>Resources for RF Multi<br>Retransmitter in§2.3.5.1)|
|57 PID_RF_RETRANSMITTER|Sets or gets the Retransmitter<br>mode in a device.|Any MaC may use it.|
|70 PID_TRANSMISSION_MODE|Set the KNX RF Multi<br>transmission mode of the RF<br>Physical Layer|The MaC can set a value to<br>this Property.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

EXAMPLE 3 A device supporting only slow reception cannot be set to Ready.
 _Additionally, the following shall be appended to the “Usage by the Management Server” in clause 2.4.2.3.4 in [5]._

If the MaC changes the value of PID_RF_MULTI_TYPE then the MaS shall apply this change
immediately, before any next message is sent out. This means that also the message that confirms
the write message from the MaC shall already be sent according the new setting. The MaC shall
take this into account.

The MaC shall not change this Property during a TL-connection, but, the MaS shall not prevent this
access. See also 2.2.3.2. If the MaS receive this property during a TL-connection, it will execute it
and send a T-Disconnect on the new RF type.

 _As a consequence, the following shall be appended to the “Usage by the Management Client” in clause 2.4.2.3.3_
_in [5]._

As the MaS will apply a change to PID_RF_MULTI_TYPE immediately, the MaC shall not change
this Property during a TL-connection to the MaS; this Property shall be set in point-to-point
connectionless communication Mode instead.

###### 2.3.1.2 Ready/Slow/Fast Retransmitter

 _The Resource PID_RF_RETRANSMITTER is defined in [5], but is not integrated in [3]._

There is no need to modify the existing Resource PID_RF_RETRANSMITTER (PID=57) in RF
Medium Object.

Field b7 b6 b5 b4 b3 b2 b1 b0

Name reserved reserved reserved reserved reserved reserved reserved Retransmission

Values 0 0 0 0 0 0 0 0,1

**Retransmission field**

0: Disable: the KNX RF Retransmitter function in the MaS shall be disabled

1: Enable: the KNX RF Retransmitter function in the MaS shall be enabled

The default value shall be 0: Disable.

The definition of data that will be retransmitted is described in detail in the clause 2.3.5, where new
Resources of a Retransmitter are defined.

The MaC shall use the RF Multi Physical features in reception (Rx) of the device (available in the
database entry of the device), in order to know on which RF Mode the device will be able to
retransmit.

   - Fast: the device receives Ready – and Multi Fast Frames, and so will retransmit Ready
and Multi fast Frames.

   - Slow: the device receives only Slow Frames, and so will retransmit only Slow Frames.

   - Fast and Slow: this is not allowed (see 2.2.1.1), so no device can be set to retransmit
Multi slow and fast Frames.

NOTE 4 A slow Retransmitter will most probably be a dedicated device (mains powered, so able to receive Fast or
Slow), and not a typical slow end device (that is battery powered and may not have enough energy to retransmit every
Slow Frames). The MaC user may use the parameter interface to switch the Rx physical features of such a device, and
ETS may use this information to active the retransmission in the device, which will lead to either Fast or Slow
retransmissions.

Savedate: Filename: page 16 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|Name|reserved|reserved|reserved|reserved|reserved|reserved|reserved|Retransmission|
|Values|0|0|0|0|0|0|0|0,1|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.3.1.3 RF Diagnose Probe

 _The Resource PID_RF_DIAG_PROBE is defined in [5], for RF Ready. The behavior with RF Multi is specified_
_here._

The Property PID_RF_DIAG_PROBE shall be used by the MaC to trigger in the MaS the
transmission of a Frame.

The transmission in a RF Multi device shall be done only once on the Call RF Channel of the Fast
and/or Slow, according to the Tx physical features of the device.

EXAMPLE 4 A device supporting Fast and Slow as Tx physical features will send two Frames, one on F1, one on S1.

##### 2.3.2 New Resources for RF Multi end device
**Storage**

All these Resources shall be stored in the Data Link Layer, in order to be handled easily during
transmission and reception.

The following Resources are defined in the RF Medium Object.

**Table 9 – KNX RF Multi Properties in the RF Medium Object**

**Property identifier** **Description** **Use**

PID_GRP_TX_MULTI_INFO_TABLE Gets or sets the RF Multi The MaC sets the information
sending information for according to the associations
each sending Group done.
Object.

PID_GRP_RX_MULTI_INFO_TABLE Gets or sets the RF Multi The MaC sets the information
receiving information for according to the associations
each receiving Group done.
Object.

PID_RF_MULTI_RX_READY Gets or sets the RF Multi The MaC sets the information
NPRM or NPM scan Mode according to the associations

done.

**Limitations**

Fast Ack is limited to 64 on each Group Address. This means that the acknowledge feature can be
used only with maximum 64 receiving devices. When linking a 65[th] receiving device on a Group
Address already linked with 64 receiving devices, the user of ETS will be warned that this is not
possible. The 65[th] link will be refused.

 _The following options are not supported:_

`o` _Allow the 65[th] link, without Fast Ack (warn the user) (no possibility for the user to choose which_
_receiver have/ have not Fast Ack)  incoherency between links_

`o` _Allow the 65[th] link, and offer the possibility to the user to select which receiver needs Fast Ack.  too_
_complex for the end-user_

`o` _Possibly set the link in Ready, with less reliability on the communication._

`o` _Manufacturer specific: another GO may be proposed to be able to use another GA for the same user_
_interaction.  no standard solution_

`o` _Define two sending Group Addresses on the same GO.  no standard solution_

Savedate: Filename: page 17 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Property identifier|Description|Use|
|---|---|---|
|PID_GRP_TX_MULTI_INFO_TABLE|Gets or sets the RF Multi<br>sending information for<br>each sending Group<br>Object.|The MaC sets the information<br>according to the associations<br>done.|
|PID_GRP_RX_MULTI_INFO_TABLE|Gets or sets the RF Multi<br>receiving information for<br>each receiving Group<br>Object.|The MaC sets the information<br>according to the associations<br>done.|
|PID_RF_MULTI_RX_READY|Gets or sets the RF Multi<br>NPRM or NPM scan Mode|The MaC sets the information<br>according to the associations<br>done.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.3.2.1 Sending only Group Object
Each entry of the additional table (PID_GRP_TX_MULTI_INFO_TABLE) shall store the sending
Group Address, the Ready/Fast/Slow RF Modes, and the list of configured (expected) ack slots.

**Maximum number of entries**

The maximum number of entries depends on the maximum number of Group Addresses supported
by the device Profile

EXAMPLE 5 254 for mask 2705h, specific for mask 27B0h
**Format of an entry**

**Sending Group**

**Sending RF Modes** **List of expected ack slots**

**Address (or GA**

**(bit field)** **for Fast or Slow**

**index)**

0 to FFFFh Ready / Fast / Slow 64 bits bit-field
bit-field

In this table one entry is identified by the sending Group Address. Each Group Address shall be
present maximum twice in this table, once for the Fast and once for the Slow. For optimisation, if a
GA must be sent of both Fast and Slow, with Fast Ack, then two entries of the table will be used.

All GAs shall be present in this Table.

###### 2.3.2.2 Receiving only Group Object
Each entry of this additional table (PID_GRP_RX_MULTI_INFO_TABLE) shall store the ack slot
number associated with the receiving Group Address.

GAs to be received only on Ready are not set in the table.

There is no need to store the Individual Address of the sender. The MaC (ETS) has the knowledge
of the relationship between the ack slot and a physical device. This guarantees that any ack slot is
used maximum once per device and Group Address and RF Mode (Fast or Slow).

**Format of an entry**

Receiving Group Address

Used ack slot
(or GA index)

0000h to FFFFh 0 to 63: slot to be used for ack
Specific value meaning no Fast Ack.

###### 2.3.2.3 Sending and receiving Group Object values
In this case, the information associated to the Group Object is a combination of Resources needed
for sending Group Object values and Resources needed for receiving Group Object values.

These Resources are added in the RF Medium Object (Object type 19).

Savedate: Filename: page 18 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Sending Group<br>Address (or GA<br>index)|Sending RF Modes<br>(bit field)|List of expected ack slots<br>for Fast or Slow|
|---|---|---|
|0 to FFFFh|Ready / Fast / Slow<br>bit-field|64 bits bit-field|

|Receiving Group Address<br>(or GA index)|Used ack slot|
|---|---|
|0000h to FFFFh|0 to 63:<br>slot to be used for ack<br>Specific value meaning no Fast Ack.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.3.2.4 PID_GRP_TX_MULTI_INFO_TABLE (PID: 76)

**●** **Property name:** Group Tx Multi information Table

**●** **Property Datatype:** PDT_GENERIC_11[]

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/0CC (see 2.1.1)

**●** **Access level** 2/2

2.3.2.4.1 Abstract Resource definition
The Group Tx Multi Info Table shall contain the RF Multi information that the MaS shall use for
sending multicast telegrams using RF Multi communication (A_GroupValue_Write-PDU,
A_GroupValue_Read-PDU and A_GroupValue_Response-PDU in transmission).

2.3.2.4.2 Format

**Array** **GA_Index** **RF** **Fast Ack 0 to 7** **…** **Fast Ack 56 to 63**
**index** **Mode**

(2 octets) (1 octet)

1 octet ... 1 octet

Fast Ack slot 0 to 7 ... Fast Ack slot 56 to 63

1

2

…

m

**Figure 1 – Group Tx Multi Info Table,**
**for sending Standard Mode group communication**

The table shall be sorted according to the numerical value of GA_Index from smallest to largest and
according RF Modes order Fast/Ready/Slow

  - _GA_Index_
The GA_Index shall refer to the Group Address by its TSAP value in the Group Address Table.

  - _RF Mode_
This shall be the 3 bits (Ready, Fast, _Slow) that shall be used for Standard Mode group_
sending communication (use of A_GroupValue_Write.req, A_Group_Value_Read.req or
A_Group_Value_Response.res) from the device with the GA as referred through the
GA_Index.

 _The following encoding is taken from the definition of PID_RF_MULTI_OBJECT_LINK (PID = 54) in [3], octet 22_
_Physical Features._

Field b7 b6 b5 b4 b3 b2 b1 b0

Name reserved reserved reserved reserved reserved Ready Multi Slow Multi Fast

Values 0 0 0 0 0 0,1 0,1 0,1

Savedate: Filename: page 19 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|GA Index<br>_|RF<br>Mode|Fast Ack 0 to 7|Col4|Col5|Col6|Col7|Col8|Col9|Col10|…|Fast Ack 56 to 63|Col13|Col14|Col15|Col16|Col17|Col18|Col19|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|(2 octets)|(1 octet)|Fast Ack 7|Fast Ack 6|Fast Ack 5|Fast Ack 4|Fast Ack 3|Fast Ack 2|Fast Ack 1|Fast Ack 0||Fast Ack 63|Fast Ack 62|Fast Ack 61|Fast Ack 60|Fast Ack 59|Fast Ack 58|Fast Ack 57|Fast Ack 56|
|(2 octets)|(1 octet)|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|...|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|
|||Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|...|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|
||||||||||||||||||||
||||||||||||||||||||
||||||||||||||||||||
||||||||||||||||||||

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|Name|reserved|reserved|reserved|reserved|reserved|Ready|Multi Slow|Multi Fast|
|Values|0|0|0|0|0|0,1|0,1|0,1|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

   - Bit b0:

0: a multicast Frame shall not be transmitted on a Fast Fx frequency RF Mode in
runtime.
1: a multicast Frame shall be transmitted on a Fast Fx frequency RF Mode in
runtime.

   - Bit b1:

0: a multicast Frame shall not be transmitted on a Slow Sx frequency RF Mode in
runtime.
1: a multicast Frame shall be transmitted on a Slow Sx frequency RF Mode in
runtime.

   - Bit b2:

0: a multicast Frame (KNX RF Ready) shall not be transmitted on the Fast F1
frequency RF Channel in runtime.
1: a multicast Frame (KNX RF Ready) shall be transmitted on the Fast F1 frequency
RF Channel in runtime.

- _List of expected ack slots for Fast or Slow_
This shall be the 64 bits that shall be used to know which ack slot numbers are really used for
Fast or Slow, depending on which bit (Fast or Slow) is set in the RF Mode field.

The list shall be organized as bit fields. If an ack slot is used, the corresponding bit shall be set
to ‘1’. The method of numbering within an octet shall be from the lowest value to the highest
value bit (from D0 to D7).

For A_GroupValueResponse.req, this list of expected Fack has to be ignored in case the
corresponding A_GroupValueRead.Ind was without Fast Ack.

EXAMPLE 6 If only Ack slot #8 is used, the second octet of the fast ack list shall have the value 00000001b.
If a GA must be sent both in Fast and Slow, with acknowledgement at least in fast or in slow
(all 8 octets are not equal to 00h), then two entries shall be defined with the same GA_Index,
one with bit Fast set in RF Mode (and not with Slow bit set), one with bit Slow set in RF Mode
(and not with Fast bit set).

In case of one element with Fast/Ready/Slow bit set or in case of multiple elements in the
table for the same GA_Index, (for sending on Fast and/or Slow and/or Ready for example) the
order for sending A_GroupValue_Write/Read/Response shall be Fast/Ready/Slow.

In this case, there shall be only one L_Data.req for the
A_GroupValue_Write/Read/Response.req even if sent on 3 RF Modes. Thus, there shall also
be only one positive L_Data.conf in case all Fast Ack received for the 2/3 frames. In case of
_Fast Acks missing on one frame, they shall be indicated as negative in L_Data.conf._

Savedate: Filename: page 20 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

In case there is no Fast Ack required for the RF Multi link (in Fast or in Slow), then all 64 bits
shall have value 0b.

If no Fast Ack is used (so the 8 octets are set to 00h) in Fast and Slow, then the same entry
can be defined with both bits b1 and b2 set. In case the entry is with both bits b1 and b2 set, and
the Fast Ack is used, the entry is ignored.

The use of Fast Acks is also reflected in the KNX Ctrl field of the RF Multi runtime Frame (if
the most significant quartet of KNX Ctrl field is 1001b, this indicates that Fast Ack is
requested).

In case of sending GO values of GOs that are linked in Ready, Multi Fast and Multi Slow (both
with Fast Ack), then the bit Ready shall be present and active (value 1b) in both entries. In
case the Ready is only present in one entry, both entries are ignored.

2.3.2.4.3 Usage by the MaC (ETS)
The MaC shall sort the table according to the numerical value of GA_Index from smallest to
largest.

The MaC shall ensure that on any change to the Group Address Table, the Group Tx Multi
information Table is updated so that the GA_Index always refers to a valid index in the Group
Address Table by using the device management procedures specified in clause 2.4.3.

2.3.2.4.4 Usage by the MaS
The MaS (device) shall use this information to send any Standard Mode group communication
using the concerned GA.

If the MaS wants to send a frame with a GA that is not present in this table, then it shall send it in
Ready only.

2.3.2.4.5 Master Reset

**Resource** **-** **02h** **07h** **01h** **None**
**Local** **Reset to** **Reset to** **Confirme** **Basic** **Power**
**Reset to** **default** **default** **d Restart** **Restart** **Cycle**

**default** **state** **without IA**

**state**

88 PID_GRP_TX_MULTI_INFO implemen- Implemen- Implemen- Not Not Not
_TABLE tation tation tation influenced influenced influenced

default default default

Savedate: Filename: page 21 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Col1|Resource|Col3|-<br>Local<br>Reset to<br>default<br>state|02h<br>Reset to<br>default<br>state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirme<br>d Restart|None<br>Basic<br>Restart|Power<br>Cycle|
|---|---|---|---|---|---|---|---|---|
|88|PID_GRP_TX_MULTI_INFO<br>_TABLE||implemen-<br>tation<br>default|Implemen-<br>tation<br>default|Implemen-<br>tation<br>default|Not<br>influenced|Not<br>influenced|Not<br>influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.3.2.5 PID_GRP_RX_MULTI_INFO_TABLE (PID: 77)

**●** **Property name:** Group Rx Multi Information Table

**●** **Property Datatype:** PDT_GENERIC_3 []

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/0CC (see 2.1.1)

**●** **Access level** 2/2

2.3.2.5.1 Abstract Resource definition
The Group Rx Multi Information Table shall contain the RF Multi information that the MaS shall use
for receiving multicast telegram using RF Multi communication (A_GroupValue_Write.ind,
A_GroupValue_Read.ind, A_GroupValue_Response.ind, service in reception).

2.3.2.5.2 Format

**Array index** **GA_Index** **Used ack slot**

(2 octets) (1 octet)

1

2

…

m

**Figure 2 – Group Rx Multi Info Table,**
**for receiving Standard Mode group communication**

The table shall be sorted according to the numerical value of GA_Index from smallest to largest.

- _GA_Index_
The GA_Index shall refer to the Group Address by its TSAP value in the Group Address Table.

- _Used ack slot_

**Field** **b7** **b6** **b5** **b4** **b3** **b2** **b1** **b0**

**Name** Physical
Reserved Physical ack slot number
acknowledge

**Values** 0 0,1 00 to 63

   - Bits b5 – b0: Physical ack slot number
This shall be the ack slot number that shall be used for Standard Mode group receiving
communication to the device with the GA as referred through the GA_Index.

If the device supports Fast only, this value is the ack slot to be used for Fast reception
acknowledgement.

If the device supports Slow only, this value is the ack slot to be used for Slow reception
acknowledgement.

The case where a device does support Fast and Slow in reception is not allowed (see
2.2.1 “Combinatory reduction of runtime capabilities”).

Savedate: Filename: page 22 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|GA Index<br>_|Used ack slot|
|---|---|
|<br>(2 octets)|(1 octet)|
|||
|||
|||
|||

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|**Name**|Reserved|Physical<br>acknowledge|Physical ack slot number|Physical ack slot number|Physical ack slot number|Physical ack slot number|Physical ack slot number|Physical ack slot number|
|**Values**|0|0,1|00 to 63|00 to 63|00 to 63|00 to 63|00 to 63|00 to 63|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

   - Bit b6: Physical acknowledge
This shall define if the received Frame using this GA shall be acknowledged or not. If the
Frame shall be acknowledged, the ack slot number to be used is defined in the field
“Physical ack slot number”. If the Frame shall not be acknowledged, the field Physical ack
slot number is not taken into account and shall have value 00.

0: The Frame received with this Group Address shall not be acknowledged.
1: The Frame received with this Group Address shall be acknowledged (slot number
is defined in bits b5-b0).

NOTE 5 If a GA shall be received in RF Ready only, then no entry shall be defined with this
GA in the current table.

   - Bit b7: 0 reserved

2.3.2.5.3 Usage by the MaC (ETS)
The MaC shall sort the table according to the numerical value of GA_Index from smallest to
largest.

The MaC shall only write an entry in this table if the GA is used for
A_GroupValueWrite/Read/Response, according GO flags and associations.

NOTE 6 Another implementation could have used the GA value as entry instead of the GA index. If the GA value would have been
used, then if no ack slot would be needed for this GA, the value 255 should have been written.

The MaC shall ensure that on any change to the Group Address Table, the Group Tx Multi
information Table is updated so that the GA_Index always refers to a valid index in the Group
Address Table by using the device management procedures specified in clause 2.4.3.

2.3.2.5.4 Usage by the MaS
The MaS (device) shall use this information to send Fast Ack when receiving any Standard Mode
group communication using the concerned GA.

2.3.2.5.5 Master Reset

**Resource** **-** **02h** **07h** **01h** **None**
**Local** **Reset to** **Reset to** **Confirme** **Basic** **Power**
**Reset to** **default** **default** **d Restart** **Restart** **Cycle**

**default** **state** **without IA**

**state**

88 PID_GRP_RX_MULTI_INFO Implemen- Implemen- Implemen- Not Not Not
_TABLE tation tation tation influenced influenced influenced

default default default

Savedate: Filename: page 23 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Col1|Resource|Col3|-<br>Local<br>Reset to<br>default<br>state|02h<br>Reset to<br>default<br>state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirme<br>d Restart|None<br>Basic<br>Restart|Power<br>Cycle|
|---|---|---|---|---|---|---|---|---|
|88|PID_GRP_RX_MULTI_INFO<br>_TABLE||Implemen-<br>tation<br>default|Implemen-<br>tation<br>default|Implemen-<br>tation<br>default|Not<br>influenced|Not<br>influenced|Not<br>influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.3.2.6 PID_RF_MULTI_RX_ READY (PID:88)

**●** **Property name:** PID_RF_MULTI_RX_READY

**●** **Property Datatype: PDT_BINARY_INFORMATION**

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/1FF

**●** **Access level** 2/2

2.3.2.6.1 Format
The value of the Property PID_RF_MULTI_RX_READY shall be formatted as an 8-bit datatype and
shall be interpreted as specified in the following table.

Field b7 b6 b5 b4 b3 b2 b1 b0

Name 0: Device receive RF

Ready (PRM Mode)
1: Device can ignore
RF Ready (can use
NPRM mode)

Values 0 0 0 0 0 0 0 0 (default),1

2.3.2.6.2 Usage by the MaC (ETS)
The MaC shall use the RF Multi Rx Fast Only of the device in order to inform the device that it
doesn’t need to scan RF Ready because it has no links with a RF Ready device. This is the result
of evaluating all links for this device and if no RF Ready links are requested, the device can be set
as RX Fast Only (NPRM) scanning mode.

2.3.2.6.3 Usage by the MaS

- If the device supports Non-Permanent Receive Mode, receiving a request to NRPM mode
shall indicate to it that it does not request to scan RF Ready, because no RF Ready device is
linked with it.
While Programming Mode is enabled in the device, it shall always assume PRM Mode,
regardless of the value of this Property.

- If the device does not support NPRM, the device can stay in Permanent Receive Mode. In this
case the Property remains with the requested value and is not changed to PRM Mode (0) by
the device.
If the device is set in Ready RF Mode by PID_MULTI_TYPE.b0 = 0, this Property shall not be
taken in account. The device shall remain Ready RF Mode.

2.3.2.6.4 Master Reset

**Resource** **-** **02h** **07h** **01h** **None**
**Local** **Reset to** **Reset to** **Confirme** **Basic** **Power**
**Reset to** **default** **default** **d Restart** **Restart** **Cycle**

**default** **state** **without IA**

**state**

88 PID_RF_MULTI_RX_- KNX KNX KNX Not Not Not
READY default Default Default influenced influenced influenced

Savedate: Filename: page 24 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|●|Property name:|PID RF MULTI RX READY<br>_ _ _ _|
|---|---|---|
|**●**|**Property Datatype:**|PDT_BINARY_INFORMATION|
|**●**|**Datapoint Type:**|None|
|**●**|**Access Policies:**|3FF/1FF|
|**●**|**Access level**|2/2|

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|Name|reserved|reserved|reserved|reserved|reserved|reserved|reserved|0:<br>Device receive RF<br>Ready (PRM Mode)<br>1:<br>Device can ignore<br>RF Ready (can use<br>NPRM mode)|
|Values|0|0|0|0|0|0|0|0 (default),1|

|Col1|Resource|Col3|-<br>Local<br>Reset to<br>default<br>state|02h<br>Reset to<br>default<br>state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirme<br>d Restart|None<br>Basic<br>Restart|Power<br>Cycle|
|---|---|---|---|---|---|---|---|---|
|88|PID_RF_MULTI_RX_-<br>READY||KNX<br>default|KNX<br>Default|KNX<br>Default|Not<br>influenced|Not<br>influenced|Not<br>influenced|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.3.2.7 PID_LAST_TRANSMISSION_MODE (PID:89)

**●** **Property name:** PID_LAST_TRANSMISSION_MODE

**●** **Property Datatype:** PDT_ENUM8

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/3FF

**●** **Access level** 2/x

2.3.2.7.1 Abstract Resource definition
This shall be a read-only Property.

The Property PID_LAST_TRANSMISSION_MODE shall reflect the last RF channel used in the RF
Physical Layer.

After restart, cEMI AddInfo sets the transmission RF channel or if PID_TRANSMISSION_MODE
has been set, until no transmission has been done, the Property shall remain to default value 0.

The value of the Property PID_LAST_TRANSMISSION_MODE shall be formatted as an 8-bit
enumeration data type and shall be interpreted as specified in the following Table.

**Value** **Description**
00h (Default) No transmission done
01h Transmission on the single F1 frequency (RF1.R)
02h Transmission on the single F1 frequency (RF1.M)
03h Transmission on the single F2 frequency (RF1.M)
04h Transmission on the single F3 frequency (RF1.M)
05h Transmission on the single S1 frequency (RF1.M)
06h Transmission on the single S2 frequency (RF1.M)
07h Reserved for future use of the KNX system
08h Reserved for future use of the KNX system
09h Reserved for future use of the KNX system
0Ah Transmission on the single F1 frequency (RF2.R)
0Bh Transmission on the single F1 frequency (RF2.M)
0Ch Transmission on the single F2 frequency (RF2.M)
0Dh Transmission on the single F3 frequency (RF2.M)
0Eh Transmission on the single S1 frequency (RF2.M)
0Fh Transmission on the single S2 frequency (RF2.M)
10h Reserved for future use of the KNX system
11h Reserved for future use of the KNX system
12h Reserved for future use of the KNX system
13h Transmission on the single F1 frequency (RF5.M)
14h Transmission on the single F2 frequency (RF5.M)
15h Transmission on the single F3 frequency (RF5.M)
16h Transmission on the single S1 frequency (RF5.M)
17h Transmission on the single S2 frequency (RF5.M)
18h Reserved for future use of the KNX system
19h Reserved for future use of the KNX system
1Ah Reserved for future use of the KNX system
1Bh to FFh Reserved for future use of the KNX system

Savedate: Filename: page 25 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|●|Property name:|PID LAST TRANSMISSION MODE<br>_ _ _|
|---|---|---|
|**●**|**Property Datatype:**|PDT_ENUM8|
|**●**|**Datapoint Type:**|None|
|**●**|**Access Policies:**|3FF/3FF|
|**●**|**Access level**|2/x|

|Value|Description|
|---|---|
|00h (Default)|No transmission done|
|<br>01h|Transmission on the single F1 frequency (RF1.R)|
|02h|Transmission on the single F1 frequency (RF1.M)|
|<br>03h|Transmission on the single F2 frequency (RF1.M)|
|04h|Transmission on the single F3 frequency (RF1.M)|
|<br>05h|Transmission on the single S1 frequency (RF1.M)|
|<br>06h|Transmission on the single S2 frequency (RF1.M)|
|07h|Reserved for future use of the KNX system|
|<br>08h|Reserved for future use of the KNX system|
|09h|Reserved for future use of the KNX system|
|<br>0Ah|Transmission on the single F1 frequency (RF2.R)|
|0Bh|Transmission on the single F1 frequency (RF2.M)|
|<br>0Ch|Transmission on the single F2 frequency (RF2.M)|
|<br>0Dh|Transmission on the single F3 frequency (RF2.M)|
|0Eh|Transmission on the single S1 frequency (RF2.M)|
|<br>0Fh|Transmission on the single S2 frequency (RF2.M)|
|10h|Reserved for future use of the KNX system|
|<br>11h|Reserved for future use of the KNX system|
|12h|Reserved for future use of the KNX system|
|<br>13h|Transmission on the single F1 frequency (RF5.M)|
|<br>14h|Transmission on the single F2 frequency (RF5.M)|
|15h|Transmission on the single F3 frequency (RF5.M)|
|<br>16h|Transmission on the single S1 frequency (RF5.M)|
|17h|Transmission on the single S2 frequency (RF5.M)|
|<br>18h|Reserved for future use of the KNX system|
|19h|Reserved for future use of the KNX system|
|<br>1Ah|<br>Reserved for future use of the KNX system|
|<br>1Bh to FFh|<br>Reserved for future use of the KNX system|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.2.7.2 Master Reset

**Resource** **-** **02h** **07h** **01h** **None**
**Local Reset** **Reset to** **Reset to** **Confirmed** **Basic** **Power**

**to default** **default state** **default** **Restart** **Restart** **Cycle**

**state** **without IA**

89 PID_LAST_TRANSMISSION KNX default KNX Default KNX Default KNX KNX KNX
_MODE Default Default Default

##### 2.3.3 New Resources for RF Multi Media Coupler

###### 2.3.3.1 Motivation

 _This clause is not intended for integration in the KNX Specifications._

It is today not seen as possible to develop a TP1/RF Media Coupler supporting Fast and Slow and
being capable of receiving simultaneous Telegrams on Fast and on Slow. (This might be possible in
the future.)

Some experience has shown that – in order to receive most Fast and Slow Telegrams, the antennas
need to be separated by 50 cm up to 3 m. This is because the RF channel frequencies are too close
to each other. (S1 and F3 even have the same frequency of 869,850 MHz). If the Media Coupler
emits on S1, it will meanwhile not be able to receive anything on F1, if the antennas are near to each
other.

This technical constraint should at least be taken into account by the specification and the
configuration tools.

For the detail of discussions about the different options and the final decision, please refer to Annex
C – Fast and slow Media Couplers.

###### 2.3.3.2 Media Coupler types

2.3.3.2.1 Introduction
Depending on the architecture and topology that will be chosen, there may be several types of Media
Couplers.

**Table 10 - Overview of all possible types of runtime Media Coupler**

**Nr.** **Type of Media Coupler** **Multicast Resources**

1 Fast master Media Coupler Fast and slow multicast Resources.
Support of remote access to slow
interface using dedicated Frames on TP1.

2 Slow extender (slave interface) No Resource. Support dedicated
interface with Fast master Media Coupler.

3 Fast + Slow Media Coupler (for Fast and slow multicast Resources.
future) No remote slow interface on TP1.

The RF Multi Media Coupler shall also support RF Ready communication.

The type of Media Coupler may be a parameter set by the MaC, which fixes the behaviour in a
generic Media Coupler, supporting all types.

The types that are supported by a Media Coupler are described in the database entry of the
device. The default type is also described in the database entry.

Savedate: Filename: page 26 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Col1|Resource|-<br>Local Reset<br>to default<br>state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|None<br>Basic<br>Restart|Power<br>Cycle|
|---|---|---|---|---|---|---|---|
|89|PID_LAST_TRANSMISSION<br>_MODE|KNX default|KNX Default|KNX Default|KNX<br>Default|KNX<br>Default|KNX<br>Default|

|Nr.|Type of Media Coupler|Multicast Resources|
|---|---|---|
|1|Fast master Media Coupler|Fast and slow multicast Resources.<br>Support of remote access to slow<br>interface using dedicated Frames on TP1.|
|2|Slow extender (slave interface)|No Resource. Support dedicated<br>interface with Fast master Media Coupler.|
|3|Fast + Slow Media Coupler (for<br>future)|Fast and slow multicast Resources.<br>No remote slow interface on TP1.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

In case a device supports several types, then ETS is able to change the type by using a new
Property PID_RF_MULTI_MEDIA_COUPLER_TYPE, hereunder defined.

If both interfaces for Slow and Fast are in the same device, then it is type 3. If they are separated
in two devices, then it is option type 1 + type 2.

There is no “Slow only” Media Coupler. Because the configuration is done in Fast, the Media
Coupler must support at least Fast.

One legacy type of Media Coupler (type 0) is defined for legacy RF Ready Media Coupler.

1) If PID_RF_MULTI_TYPE is set to 0 (Ready RF Mode)
the PID_RF_MULTI_MEDIA_COUPLER_TYPE shall be set to 0 (Ready RF only).

This is for compatibility reason with the ETS5. ETS5 configures the PID_RF_MULTI_TYPE of KNX
RF Multi devices to 0 (Ready RF Mode) per default (See AN186 1.3.1 KNX RF systems).

2) If PID_RF_MULTI_TYPE is set to 1 (Multi RF Mode)
the PID_RF_MULTI_MEDIA_COUPLER_TYPE shall be set to 1 (Fast master Media Coupler).

The MaC has to take care of further configuration of types 2 and 3
of PID_RF_MULTI_MEDIA_COUPLER_TYPE.

The Resource PID_RF_MULTI_MEDIA_COUPLER_TYPE is defined in the RF Medium Object
type.

2.3.3.2.2 PID_RF_MULTI_MEDIA_COUPLER_TYPE (PID: 78)

**●** **Property name:** RF Multi Media Coupler Type

**●** **Property Datatype:** PDT_GENERIC_01

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/0CC (see 2.1.1)

**●** **Access level** 2/2

2.3.3.2.2.1 Abstract Resource definition
The RF Multi Media Coupler Type Resource shall contain the current type of RF Multi Media Coupler.

2.3.3.2.2.2 Format

**Field** **b7** **b6** **b5** **b4** **b3** **b2** **b1** **b0**

**Name** reserved reserved reserved reserved reserved reserved Media Coupler type

**Values** 0 0 0 0 0 0 0 to 3

Savedate: Filename: page 27 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|**Name**|reserved|reserved|reserved|reserved|reserved|reserved|Media Coupler type|Media Coupler type|
|**Values**|0|0|0|0|0|0|0 to 3|0 to 3|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

- _Media Coupler type:_

0: RF Ready only

1: RF Multi Fast only Media Coupler

2: RF Multi Slow extender

3: RF Multi Fast and Slow Media Coupler

2.3.3.2.2.3 Usage by the MaC (ETS)
The MaC shall set (or get) the current type of Media Coupler in case the Media Coupler supports
several different types. The supported types are indicated in the database entry corresponding to
the Media Coupler device.

2.3.3.2.2.4 Usage by the MaS
The MaS (device) shall use this information to define its behaviour.

EXAMPLE 7 In case a device supported Fast Media Coupler and Slow extender, then the values set by the MaC defines
if the device sends and scans on Slow frequencies or on Fast frequencies.
In case the type set by the MaC is not supported by the Media Coupler, the response from MaS shall
contain the current active RF Multi Media Coupler type.

###### 2.3.3.3 Standard communication between Fast Media Coupler and Slow extender
The communication between Fast Media Coupler and Slow extender is here defined to be
standardised.

ETS need to configure the network parameters in each device (IA, DoA).

The interface between Master Fast - and Slave Slow interface is similar to the cEMI interface,
transported over a TP1 medium.

It is defined as a point-to-point connectionless communication using an Extended Function Property
(PID_RF_MULTI_FAST_SLOW_COMM (PID=84) that encapsulates the cEMI RF Frame. The slow
interface takes the cEMI encapsulated Frame and sends it on RF.

The cEMI Client role is played by the Fast Media Coupler: L_Data.req is sent from Fast to Slow.

The cEMI Server role is played by the Slow extender: L_Data.ind is sent from Slow to Fast.

Concerning the Fast Ack configuration, no Resource is defined in the Slow extender. In the Frame
request, an Additional Info is used (0Bh) in order to give the expected ack slots. The decision for
possible transmission retries (in case where some ack are missing) is taken by the Slow extender
on its own.

Savedate: Filename: page 28 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**Additional Information needed**

**Object** **cEMI**
**PID** **Message Code** **RF** **RF Multi** **RF Fast Ack short**
**type** **Frame**

**medium** **information** **information**

L_Data.req Yes Yes Yes (0Bh) (Expected See in the

(To Slow) (02h) (08h) Fast Ack for Frame) following

table

RF L_Data.con Yes Yes Yes (0Bh) (Fast Ack See in the
Mediu 84 (From Slow) (02h) (08h) seen in Frame) following
m table

L_Data.ind Yes Yes Yes (0Bh) (Fast Ack See in the
(From Slow) (02h) (08h) seen in Frame) following

table

cEMI Frame format

Control Control Src. Src. Dest. Dest.

NPDU

field 1 field 2 High Low High Low

**Ctrl1** **Ctrl2** **SAH** **SAL DAH DAL** **L** TPCI/APCI & data

1 octet 1 octet 2 octets 2 octets 1 octet 1octet + var. length

**Constraint concerning the maximum supported APDU length**

Only the following Additional Info should be supported.

   - 02h: RF Medium (10 octets)

   - 08h: RF Multi information (6 octets)

   - 0Bh: RF Fast Ack short information (between 3 octets and 10 octets)

Length of encapsulated cEMI Frame: 8 + APDU length of RF Frame.

Additional header of proprietary Frame using Extended Function Property:

APCI (2 octets) + Object Type (2 octets) + Object Instance (1,5 octets) + Property Identifier
(1,5 octets) = 7 octet

Maximum APDU length of the TP1 Frame: possibly 254.

 Possibly max supported APDU of RF original Frame: 254-7-10-6-10-8 = 213 octets.

**Synchronisation between Resources in Fast Media Coupler and Slow extender**

When some Resources are used in the Slow extender (for example the expected ack slots in case
of retry strategy done in Slow extender – option 1 in the list of three options that are defined in
2.3.4.5.2), the synchronisation (read and possibly write) of data need between Client and Server
shall be done after an ETS download of the Fast Media Coupler, or more generally after each
modification of the Resource in the Fast Media Coupler.

**Consideration for communication between Fast Media Coupler (Client) and Slow extender**
**(Server)**

On the Client side, when sending a request to the Server, a timer shall be started with a dedicated
time, in order to cover the case where the Server would never receive the RF Frame from the
device and thus never respond to the Client request. The value of the timer may be chosen
sufficiently large in order to cover the cases where several Retransmitters might be present in the
installation. A typical value of such timer could be 2 s or 3 s.

Savedate: Filename: page 29 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Object<br>type|PID|Message Code|Additional Information needed|Col5|Col6|cEMI<br>Frame|
|---|---|---|---|---|---|---|
|**Object**<br>**type**|**PID**|**Message Code**|**RF**<br>**medium**|**RF Multi**<br>**information**|**RF Fast Ack short**<br>**information**|**RF Fast Ack short**<br>**information**|
|RF<br>Mediu<br>m|84|L_Data.req <br>(To Slow)|Yes<br>(02h)|Yes<br>(08h)|Yes (0Bh) (Expected<br>Fast Ack for Frame)|See in the<br>following<br>table|
|RF<br>Mediu<br>m|84|L_Data.con <br>(From Slow)|Yes<br>(02h)|Yes<br>(08h)|Yes (0Bh) (Fast Ack<br>seen in Frame)|See in the<br>following<br>table|
|RF<br>Mediu<br>m|84|L_Data.ind <br>(From Slow)|Yes<br>(02h)|Yes<br>(08h)|Yes (0Bh) (Fast Ack<br>seen in Frame)|See in the<br>following<br>table|

|Control<br>field 1|Control<br>field 2|Src.<br>High|Src.<br>Low|Dest.<br>High|Dest.<br>Low|NPDU|Col8|
|---|---|---|---|---|---|---|---|
|**Ctrl1**|**Ctrl2**|**SAH**|**SAL**|** DAH**|**  DAL**|**L **|TPCI/APCI & data|
|1 octet|1 octet|2 octets|2 octets|2 octets|2 octets|1 octet|1octet + var. length|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.3.3.1 PID_RF_MULTI_FAST_SLOW_COMM (PID: 84)

**●** **Property name:** RF Multi Fast Slow communication

**●** **Property Datatype:** PDT_FUNCTION

**●** **Datapoint Type:** None.

**●** **Access Policies:** 3FF/0CC (see 2.1.1).
In secure mode, role access shall be limited to the standard role
“Coupler Extension”

**●** **Access level** 2/2

2.3.3.3.1.1 Write (A_FunctionPropertyCommand-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

WriteServiceID

00h See below. See below.

**Overview Write ServiceIDs**

**Table 11 – Overview PID_RF_MULTI_FAST_SLOW_COMM WriteServiceIDs**

**WriteServiceID** **Description**

00h Write the cEMI Frame

**WriteServiceID 00h: Write the cEMI Frame**

octet 10 octet 11 octet 12…

ServiceID ServiceInfo

reserved Write L_Data cEMI Frame
cEMI Frame

00h 00h

**Figure 3 - A_FunctionProperty_Write-PDU for Write ServiceID 00h for**
**PID_RF_MULTI_FAST_SLOW_COMM**

The MaC (Fast Media Coupler) and the MaS (Slow extender) shall use this command to
exchange cEMI Frames for sending and receiving Slow Frames.

ServiceID: 00h Write L_Data cEMI Frame

ServiceInfo: cEMI Frame Any cEMI Frame of type L_Data.req, L_Data.con,
L_Data.ind, including Additional Information Type 02h,
08h, 0Bh.

If the MaS (Slow extender) can successfully handle the command, then it shall try to send the cEMI
Frame on RF using Slow RF Mode and respond with an A_FunctionPropertyState_Response-PDU
as in Figure 4.

If the MaS has any problem, then it shall respond as specified in 2.3.3.4.2.4.

Savedate: Filename: page 30 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||WriteServiceID||
|00h|See below.|See below.|

|WriteServiceID|Description|
|---|---|
|00h|Write the cEMI Frame|

|octet 10|octet 11|octet 12…|
|---|---|---|
||ServiceID|ServiceInfo|
|reserved|Write L_Data<br>cEMI Frame|cEMI Frame|
|00h|00h||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

The MaS shall respond with an A_FunctionPropertyState_Response-PDU with the appropriate
positive or negative Return Code.

octet 10 octet 11

Return Code ServiceID

Write RF Multi
unicast
communication

mode

00h

**Figure 4 - A_FunctionPropertyState_Response-PDU for WriteServiceID 00h for**
**PID_RF_MULTI_FAST_SLOW_COMM**

2.3.3.3.1.1.1 Read (A_FunctionPropertyState_Read-PDU)
This is not allowed on this Resource.

If an A_FunctionPropertyState_Read-PDU is received for this Function Property, then the MaS
shall respond with an A_FunctionPropertyState_Response-PDU with the Return Code E_ERROR
(FFh) without any further additional information.

2.3.3.3.1.2 Common error and exception handling for PID_RF_MULTI_FAST_SLOW_COMM
In case of any error or exception, the MaS shall return the specified A_FunctionPropertyState_Response-PDU, but with the field Return Code as listed in Table 12 and repeating the
ServiceID – ReadServiceID or WriteServiceID - as appropriate.

Response (A_FunctionPropertyState_Response-PDU)

octet 10 octet 11

Return Code ServiceID

     - 7Fh

Next to the Basic (FFh) – and Generic Negative Return Codes (FEh and F8h), the following
Function Property specific Return Codes may be returned as appropriate.

**Table 12 – PID_RF_MULTI_FAST_SLOW_COMM Return Codes**

**Return Code ErrorName** **ErrorType**

F2h E_COMMAND_INVALID Invalid command

An invalid value is requested in the field ServiceID (ReadServiceID or
WriteSericeID).

Savedate: Filename: page 31 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
||Write RF Multi<br>unicast<br>communication<br>mode|
||00h|

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
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.3.3.2 PID_RF_MULTI_FAST_MEDIA_COUPLER_IA (PID: 85)

**●** **Property name:** RF Multi Fast Media Coupler Individual Address

**●** **Property Datatype:** PDT_UNSIGNED_INT

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/0CC (see 2.1.1)

**●** **Access level** 2/2

2.3.3.3.2.1 Abstract Resource definition
This shall contain the Individual Address of the Fast Media Coupler.

This Resource is mandatory for a Media Coupler of type Slow extender.

2.3.3.3.2.2 Usage by the MaC (ETS)
This Resource shall be used by the MaC in order to set the Individual Address of the Fast Media
Coupler to which the Slow extender is associated.

If there is no Fast Media Coupler, the value shall be set to zero (0).

If security mode is enabled, the MaC shall include the Individual Address of the Fast Media
Coupler in the Point-to-point Key Table of the Slow Extender and assign role “Coupler Extension”
(see 2.1.2).

2.3.3.3.2.3 Usage by the MaS
The MaS shall use this Resource to set the destination Individual Address for all Slow RF Mode
communications, using the PID_RF_MULTI_FAST_SLOW_COMM in point-to-point connectionless
mode.

2.3.3.3.3 PID_RF_MULTI_SLOW_EXTENDER_IA (PID: 85)

**●** **Property name:** RF Multi Slow Extender Individual Address

**●** **Property Datatype:** PDT_UNSIGNED_INT

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/0CC (see 2.1.1)

**●** **Access level** 2/2

2.3.3.3.3.1 Abstract Resource definition
This shall contain the Individual Address of the Slow extender.

This Resource is mandatory for a Media Coupler of type Fast only Media Coupler.

2.3.3.3.3.2 Usage by the MaC (ETS)
The MaC shall use Resource to set the Individual Address of the Slow extender to which the Fast
only Media Coupler is associated.

If there is no Slow extender, the value shall be set to zero (0).

If security mode is enabled, the MaC shall include the Individual Address of the Slow extender in
the Point-to-point Key Table of the RF Multi Media Coupler and assign role “Coupler Extension”
(see 2.1.2).

Savedate: Filename: page 32 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.3.3.3.3 Usage by the MaS
The MaS shall use this Resource to set the destination Individual Address for all Slow RF Mode
communications, using the PID_RF_MULTI_FAST_SLOW_COMM in point-to-point connectionless
mode.

###### 2.3.3.4 Resource for individual communication from TP1 to RF and from RF to TP1

2.3.3.4.1 Introduction
The ack slot 0 shall be used for individual communication between any RF Multi device and the
Media Coupler.

For individual communication, the Media Coupler must know on which RF Mode
(Ready/Fast/Slow) the RF Frame shall be sent. This could be done similarly to the system
broadcast flag today in Media Coupler.

There is no need to define, per Individual Address, the RF Mode that shall be used. Instead, a
Function Property is defined in order to get/set the current RF Mode used for any point-to-point
communication (either connection-oriented or connectionless).

The possible values of the RF Mode are the following: “Ready”, “Multi Fast with Fast Ack”, “Multi
Slow with Fast Ack”.

The Resource PID_RF_MULTI_UNICAST_CONTROL is defined in the Router Object.

The PID_RF_MULTI_UNICAST_CONTROL is only used for communication from TP1 to RF and
RF to TP1. If the media-coupler is addressed directly for management in individual communication
from RF side, it uses the device unicast behaviour defined in Table 5

2.3.3.4.2 PID_RF_MULTI_UNICAST_CONTROL (PID: 79)

**●** **Property name:** RF Multi unicast communication control

**●** **Property Datatype:** PDT_FUNCTION

**●** **Datapoint Type:** This Property is a Function Property. The coding of the data depends on
whether data is written to the function or responded by the function. No
single DPT can be given.

**●** **Access Policies:** 3FF/0CC (see 2.1.1)

**●** **Access level** 2/2

2.3.3.4.2.1 Abstract Resource definition
This Function Property shall be used to define the behaviour of the Media Coupler concerning the
RF Mode to be used (Ready, Fast, Slow) for unicast communication.

For more details on the Configuration Procedure, see 2.4 Configuration Procedures.

2.3.3.4.2.2 Write (A_FunctionPropertyCommand-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

WriteServiceID

00h See below. See below.

Savedate: Filename: page 33 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||WriteServiceID||
|00h|See below.|See below.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**Overview Write ServiceIDs**

**Table 13 – Overview PID_RF_MULTI_UNICAST_CONTROL WriteServiceIDs**

**WriteServiceID** **Description**

00h Write the RF Multi unicast
communication control

**WriteServiceID 00h: Write the RF Multi unicast communication Mode**

octet 10 octet 11 octet 12

ServiceID ServiceInfo

reserved Write RF Multi RF Mode
unicast
communication

mode

00h 00h

**Figure 5 - A_FunctionProperty_Write-PDU for Write ServiceID 00h for**
**PID_RF_MULTI_UNICAST_CONTROL**

The MaC shall use this command to configure the RF Mode for unicast communication. This is
done permanently. No modification is done automatically after a timeout.

ServiceID: 00h Command “RF Multi unicast communication mode”

ServiceInfo: RF Mode

RF b7 b6 b5 b4 b3 b2 b1 b0
Mode

**Name** reserved reserved RX on Rx on Rx on TX on Tx on Tx on
Ready Multi Multi Ready Multi Multi

Slow Fast Slow Fast

**Values** 0 0 0,1 0,1 0,1 0,1 0,1 0,1

Savedate: Filename: page 34 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|WriteServiceID|Description|
|---|---|
|00h|Write the RF Multi unicast<br>communication control|

|octet 10|octet 11|octet 12|
|---|---|---|
||ServiceID|ServiceInfo|
|reserved|Write RF Multi<br>unicast<br>communication<br>mode|RF Mode|
|00h|00h||

|RF<br>Mode|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|**Name**|reserved|reserved|RX on<br>Ready|Rx on<br>Multi<br>Slow|Rx on<br>Multi<br>Fast|TX on<br>Ready|Tx on<br>Multi<br>Slow|Tx on<br>Multi<br>Fast|
|**Values**|0|0|0,1|0,1|0,1|0,1|0,1|0,1|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

- Bit b0:

0: a unicast Frame shall not be transmitted on a Fast Fx frequency RF Channel in
runtime.
1: a unicast Frame shall be transmitted on a Fast Fx frequency RF Channel in runtime.

- Bit b1:

0: a unicast Frame shall not be transmitted on a Slow Sx frequency RF Channel in
runtime.
1: a unicast Frame shall be transmitted on a Slow Sx frequency RF Channel in runtime.

- Bit b2:

0: a unicast Frame (KNX RF Ready) shall not be transmitted on the Fast F1 frequency
RF Channel in runtime.
1: a unicast Frame (KNX RF Ready) shall be transmitted on the Fast F1 frequency RF
Channel in runtime.

- Bit b3:

0: a unicast Frame received on a Fast Fx frequency RF Channel in runtime shall not be
routed to TP.
1: a unicast Frame received on a Fast Fx frequency RF Channel in runtime is routed to
TP

- Bit b4:

0: a unicast Frame received on a Slow Sx frequency RF Channel in runtime shall not be
routes on TP.
1: a unicast Frame received on a Slow Sx frequency RF Channel in runtime is routed on
TP

- Bit b5:

0: a unicast Frame (KNX RF Ready) received on the Fast F1 frequency RF Channel in
runtime shall not be routed to TP.
1: a unicast Frame (KNX RF Ready) received on the Fast F1 frequency RF Channel in
runtime is routed to TP.

If the MaS can successfully handle the command, then it shall set the RF Multi Unicast
Communication Mode as requested and respond with an A_FunctionPropertyState_Response-PDU
as in Figure 6.

Default RF Mode is Ready.

If the MaS has any problem, then it shall respond as specified in 2.3.3.4.2.4.

The MaS shall respond with an A_FunctionPropertyState_Response-PDU with the appropriate
positive or negative Return Code as listed 2.3.3.4.2.4.

NOTE 7 This Response-PDU repeats the WriteServiceID but does not indicate the current resulting RF Multi
unicast communication Mode. This shall be clear from the Return Code.

Savedate: Filename: page 35 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

octet 10 octet 11

Return Code ServiceID

Write RF Multi
unicast
communication

mode

00h

**Figure 6 - A_FunctionPropertyState_Response-PDU for WriteServiceID 00h for**
**PID_RF_MULTI_UNICAST_CONTROL**

2.3.3.4.2.3 Read (A_FunctionPropertyState_Read-PDU)
**Basic format and common handling**

octet 12 …
octet 10 octet 11

octet n

Reserved ReadServiceID ServiceInfo

00h See below. See below.

If the MaS can respond to the command then it shall respond with an A_FunctionPropertyState_Response-PDU with a positive Return Code, the ReadServiceID and the ServiceInfo as from
the request (if available) and the command result as specified below.

**Overview ReadServiceIDs**

**Table 14 – Overview PID_RF_MULTI_UNICAST_CONTROL ReadServiceIDs**

**ReadServiceID** **Description**

00h Read the current RF Multi
unicast communication Mode

**ReadServiceID 00h: Read PID_RF_MULTI_UNICAST_CONTROL**

This command shall be used to read PID_RF_MULTI_UNICAST_CONTROL information.

octet 10 octet 11

Reserved ReadServiceID

00h 00h

If the MaS has any problem, then it shall respond as specified in 2.3.3.4.2.4.

If the MaS can successfully respond to the request, then it shall respond with an
A_FunctionPropertyState_Response-PDU as in Figure 7.

octet 10 octet 11 octet 12

Return Code ReadServiceID ServiceInfo

00h 00h RF Multi unicast

communication

Mode

**Figure 7 - A_FunctionPropertyState_Response-PDU for ReadServiceID 00h for**
**PID_RF_MULTI_UNICAST_CONTROL**

Savedate: Filename: page 36 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
||Write RF Multi<br>unicast<br>communication<br>mode|
||00h|

|octet 10|octet 11|octet 12 …<br>octet n|
|---|---|---|
|Reserved|ReadServiceID|ServiceInfo|
|00h|See below.|See below.|

|ReadServiceID|Description|
|---|---|
|00h|Read the current RF Multi<br>unicast communication Mode|

|octet 10|octet 11|
|---|---|
|Reserved|ReadServiceID|
|00h|00h|

|octet 10|octet 11|octet 12|
|---|---|---|
|Return Code|ReadServiceID|ServiceInfo|
|00h|00h|RF Multi unicast<br>communication<br>Mode|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**


ServiceInfo: RF Multi unicast
communication Mode


The encoding values shall be the same as for writing
the RF Multi unicast communication mode.


2.3.3.4.2.4 Common error – and exception handling for PID_RF_MULTI_UNICAST_CONTROL
In case of any error or exception, the MaS shall return the specified A_FunctionPropertyState_Response-PDU, but with the field Return Code as listed in Table 15 and repeating the
ServiceID – ReadServiceID or WriteServiceID - as appropriate.

Response (A_FunctionPropertyState_Response-PDU)

octet 10 octet 11

Return Code ServiceID

     - 7Fh

Next to the Basic (FFh) – and Generic Negative Return Codes (FEh and F8h), the following
Function Property specific Return Codes may be returned as appropriate.

**Table 15 – PID_RF_MULTI_UNICAST_CONTROL Return Codes**

**Return Code ErrorName** **ErrorType**

F2h E_COMMAND_INVALID Invalid command

An invalid value is requested in the field ServiceID (ReadServiceID or
WriteSericeID).

The return code E_DATA_VOID may also be used.

###### 2.3.3.5 Resource for broadcast and system broadcast communication from TP1 to RF and from RF to TP1
There is a need to define a Function Property for the control of the RF Mode to be used by the Media
Coupler for broadcast or system broadcast communication.

The Resource PID_RF_MULTI_BROADCAST_CONTROL is defined in the Router Object.

2.3.3.5.1 PID_RF_MULTI_BROADCAST_CONTROL (PID: 114)

**●** **Property name:** RF Multi broadcast communication control

**●** **Property Datatype:** PDT_FUNCTION

**●** **Datapoint Type:** This Property is a Function Property. The coding of the data depends on
whether data is written to the function or responded by the function. No
single DPT can be given.

**●** **Access Policies:** 3FF/0CC (see 2.1.1)

**●** **Access level** 2/2

2.3.3.5.1.1 Abstract Resource definition
This Function Property shall be used to define the behaviour of the Media Coupler concerning
which RF Mode to be used (Ready, Fast, Slow) for broadcast communication.

For more detail on the Configuration Procedure, see 2.4 “Configuration Procedures”.

There is no need to define a timeout, mainly because there is no broadcast communication at
runtime.

Savedate: Filename: page 37 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

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
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.3.5.1.2 Write (A_FunctionPropertyCommand-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

WriteServiceID

00h See below. See below.

**Overview Write ServiceIDs**

**Table 16 – Overview PID_RF_MULTI_BROADCAST_CONTROL WriteServiceIDs**

**WriteServiceID** **Description**

00h Write the RF Multi broadcast
communication control

**WriteServiceID 00h: Write the RF Multi broadcast communication Mode**

octet 10 octet 11 octet 12

ServiceID ServiceInfo

reserved Write RF Multi RF Mode
broadcast
communication

mode

00h 00h

**Figure 8 - A_FunctionProperty_Write-PDU for Write ServiceID 00h for**
**PID_RF_MULTI_BROADCAST_CONTROL**

The MaC shall use this command to configure the RF Mode for broadcast communication. This is
done permanently. No modification is done automatically after a timeout.

ServiceID: 00h Command “RF Multi broadcast communication mode”

ServiceInfo: RF Mode

RF b7 b6 b5 b4 b3 b2 b1 b0
Mode

**Name** reserve reserved RX on Rx on Rx on TX on Tx on Tx on
d Ready Multi Multi Ready Multi Multi

Slow Fast Slow Fast

**Values** 0 0 0,1 0,1 0,1 0,1 0,1 0,1

Savedate: Filename: page 38 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||WriteServiceID||
|00h|See below.|See below.|

|WriteServiceID|Description|
|---|---|
|00h|Write the RF Multi broadcast<br>communication control|

|octet 10|octet 11|octet 12|
|---|---|---|
||ServiceID|ServiceInfo|
|reserved|Write RF Multi<br>broadcast<br>communication<br>mode|RF Mode|
|00h|00h||

|RF<br>Mode|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|**Name**|reserve<br>d|reserved|RX on<br>Ready|Rx on<br>Multi<br>Slow|Rx on<br>Multi<br>Fast|TX on<br>Ready|Tx on<br>Multi<br>Slow|Tx on<br>Multi<br>Fast|
|**Values**|0|0|0,1|0,1|0,1|0,1|0,1|0,1|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

- Bit b0:

0: a broadcast Frame shall not be transmitted on a Fast Fx frequency RF Channel in
runtime.
1: a broadcast Frame shall be transmitted on a Fast Fx frequency RF Channel in
runtime.

- Bit b1:

0: a broadcast Frame shall not be transmitted on a Slow Sx frequency RF Channel in
runtime.
1: a broadcast Frame shall be transmitted on a Slow Sx frequency RF Channel in
runtime.

- Bit b2:

0: a broadcast Frame (KNX RF Ready) shall not be transmitted on the Fast F1
frequency RF Channel in runtime.
1: a broadcast Frame (KNX RF Ready) shall be transmitted on the Fast F1 frequency
RF Channel in runtime.

- Bit b3:

0: a broadcast Frame received on a Fast Fx frequency RF Channel in runtime shall not
be routed to TP.
1: a broadcast Frame received on a Fast Fx frequency RF Channel in runtime is routed
to TP

- Bit b4:

0: a broadcast Frame received on a Slow Sx frequency RF Channel in runtime shall not
be routes on TP.
1: a broadcast Frame received on a Slow Sx frequency RF Channel in runtime is routed
on TP

- Bit b5:

0: a broadcast Frame (KNX RF Ready) received on the Fast F1 frequency RF Channel
in runtime shall not be routed to TP.
1: a broadcast Frame (KNX RF Ready) received on the Fast F1 frequency RF Channel
in runtime is routed to TP.

If the MaS can successfully handle the command, then it shall set the RF Multi Broadcast
communication Mode as requested and respond with an A_FunctionPropertyState_Response-PDU
as in Figure 9.

The default value of the RF Mode shall be Ready only.

If the MaS has any problem, then it shall respond as specified in 2.3.3.5.1.4.

The MaS shall respond with an A_FunctionPropertyState_Response-PDU with the appropriate
positive or negative Return Code as listed 2.3.3.5.1.4.

NOTE 8 This Response-PDU repeats the WriteServiceID but does not indicate the current resulting RF Multi
broadcast communication Mode. This shall be clear from the Return Code.

Savedate: Filename: page 39 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

octet 10 octet 11

Return Code ServiceID

Write RF Multi
broadcast
communication

mode

00h

**Figure 9 - A_FunctionPropertyState_Response-PDU for WriteServiceID 00h for**
**PID_RF_MULTI_BROADCAST_CONTROL**

2.3.3.5.1.3 Read (A_FunctionPropertyState_Read-PDU)
**Basic format and common handling**

octet 10 octet 11 octet 12 …

octet n

Reserved ReadServiceID ServiceInfo

00h See below. See below.

If the MaS can respond to the command then it shall respond with an A_FunctionPropertyState_Response-PDU with a positive Return Code, the ReadServiceID and the ServiceInfo as from
the request (if available) and the command result as specified below.

**Overview ReadServiceIDs**

**Table 17 – Overview PID_RF_MULTI_BROADCAST_CONTROL ReadServiceIDs**

**ReadServiceID** **Description**

00h Read the current RF Multi
broadcast communication Mode

**ReadServiceID 00h: Read PID_RF_MULTI_BROADCAST_CONTROL**

This command shall be used to read PID_RF_MULTI_BROADCAST_CONTROL information.

octet 10 octet 11

Reserved ReadServiceID

00h 00h

If the MaS has any problem, then it shall respond as specified in 2.3.3.5.1.4.

If the MaS can successfully respond to the request, then it shall respond with an A_FunctionPropertyState_Response-PDU as in Figure 10.

Savedate: Filename: page 40 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
||Write RF Multi<br>broadcast<br>communication<br>mode|
||00h|

|octet 10|octet 11|octet 12 …<br>octet n|
|---|---|---|
|Reserved|ReadServiceID|ServiceInfo|
|00h|See below.|See below.|

|ReadServiceID|Description|
|---|---|
|00h|Read the current RF Multi<br>broadcast communication Mode|

|octet 10|octet 11|
|---|---|
|Reserved|ReadServiceID|
|00h|00h|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

octet 10 octet 11 octet 12

Return Code ReadServiceID ServiceInfo

00h 00h RF Multi
broadcast
communication

Mode

**Figure 10 - A_FunctionPropertyState_Response-PDU for ReadServiceID 00h for**
**PID_RF_MULTI_BROADCAST_CONTROL**

|octet 10|octet 11|octet 12|
|---|---|---|
|Return Code|ReadServiceID|ServiceInfo|
|00h|00h|RF Multi<br>broadcast<br>communication<br>Mode|


ServiceInfo: RF Multi broadcast
communication Mode


The encoding values shall be the same as for writing the RF
Multi broadcast communication Mode.


2.3.3.5.1.4 Common error – and exception handling for PID_RF_MULTI_BROADCAST_CONTROL
In case of any error or exception, the MaS shall return the specified A_FunctionPropertyState_Response-PDU, but with the field Return Code as listed in Table 18 and repeating the
ServiceID – ReadServiceID or WriteServiceID - as appropriate.

Response (A_FunctionPropertyState_Response-PDU)

octet 10 octet 11

Return Code ServiceID

     - 7Fh

Next to the Basic (FFh) – and Generic Negative Return Codes (FEh and F8h), the following
Function Property specific Return Codes may be returned as appropriate.

**Table 18 – PID_RF_MULTI_BROADCAST_CONTROL Return Codes**

**Return Code ErrorName** **ErrorType**

F2h E_COMMAND_INVALID Invalid command

An invalid value is requested in the field ServiceID (ReadServiceID or
WriteSericeID).

###### 2.3.3.6 Resource for multicast communication from TP1 to RF

2.3.3.6.1 Introduction
For each Group Address, the Media Coupler must know the following.

   - The RF Modes on which to send the Frame on RF.

   - The ack slots that are expected.

PID_GRP_TP_RF_MULTICAST_TABLE and PID_GRP_RF_TP_MULTICAST_TABLE are defined
in the RF Medium Object type.

Savedate: Filename: page 41 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

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
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.3.6.2 PID_GRP_TP_RF_MULTICAST_TABLE (PID: 82)

**●** **Property name:** Group TP1 RF Multicast Table

**●** **Property Datatype:** PDT_GENERIC_11[]

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/0CC (see 2.1.1)

**●** **Access level** 2/2

2.3.3.6.2.1 Abstract Resource definition
The Group TP1 RF Multicast Table shall contain the RF Multi / RF Ready information that the MaS
shall use for sending Group Objects from TP1 to RF using RF Multi communication.

It is similar to the Resource PID_GRP_TX_MULTI_INFO_TABLE as defined for an end-device (for
sending Group Objects). The GA_Index is replaced by the Group Address value because no TSAP
is defined in the Media Coupler Resources.

If all required Fast Ack are not received by the Media Coupler, the Frame shall be retransmitted on
RF side. The strategy of retransmission (number of retries, RF frequencies to be used) is defined
in 2.2.2.1.4.

2.3.3.6.2.2 Format

**Array index** **GA Value** **RF Mode** **Fast Ack list for Fast or Slow**

(2 octets) (1 octet) (8 octets)

1

2

…

m

The table shall be sorted according to the numerical value of GA_Value from smallest to largest.

- GA_Value
The GA_Value shall refer to the Group Address to be sent on RF.

- RF Mode
This shall be the 3 bits bit-field (Ready, Fast, Slow) that shall be used for Standard Mode
group sending communication (use of A_GroupValue_Write, A_GroupValue_Read or
A_Group_Value_Response) from TP1 to RF with the GA referred in the same entry.

 _The following encoding is taken from the definition of PID_RF_MULTI_OBJECT_LINK (PID = 54) in 3/5/1_
_Resources, octet 22 Physical Features._

**Field** **b7** **b6** **b5** **b4** **b3** **b2** **b1** **b0**

**Name** reserved reserved reserved reserved reserved Ready Multi Multi
Slow Fast

**Values** 0 0 0 0 0 0,1 0,1 0,1

Savedate: Filename: page 42 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|GA Value|RF Mode|Fast Ack list for Fast or Slow|
|---|---|---|
|(2 octets)|(1 octet)|(8 octets)|
||||
||||
||||
||||

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|**Name**|reserved|reserved|reserved|reserved|reserved|Ready|Multi<br>Slow|Multi<br>Fast|
|**Values**|0|0|0|0|0|0,1|0,1|0,1|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

   - Bit b0:
0: The multicast Frame shall not be transmitted on a fast Fx frequency RF Channel at
runtime.
1: The multicast Frame shall be transmitted on a fast Fx frequency RF Channel at
runtime.

   - Bit b1:
0: The multicast Frame shall not be transmitted on a slow Sx frequency RF Channel in
runtime.
1: The multicast Frame shall be transmitted on a slow Sx frequency RF Channel in
runtime.

   - Bit b2:
0: The multicast Frame (KNX RF Ready) shall not be transmitted on the fast F1 Ready
frequency RF Channel in runtime.
1: The multicast Frame (KNX RF Ready) shall be transmitted on the fast F1 Ready
frequency RF Channel in runtime.

- List of expected ack slots for Fast or Slow
This shall be the 64 bits bit-field that shall be used to know which ack slot numbers are really used
for Fast or Slow, depending on which bit (Fast or Slow) is set in the RF Mode field.

If a Group Address must be sent both in Fast and Slow, with acknowledgement at least in fast or in
slow (all 8 bytes are not equal to 00h), then two entries shall be defined with the same GA_Value,
one with bit Fast set in RF Mode (and not Slow bit set), one with bit Slow set in RF Mode (and not
with Fast bit set).

In case there is no Fast Ack required for the RF Multi link (in Fast or in Slow), then all 64 bits shall
have value 0b.

If no Fast Ack is used (so the 8 bytes are set to 00h) in fast and slow, then the same entry can be
defined with both bits b1 and b2 set.

The use of Fast Acks is also reflected in the KNX Ctrl field of the RF Multi runtime Frame (if the
most significant quartet of KNX Ctrl field is 1001b, this indicates that Fast Ack is requested).

In case of sending Group Objects that are linked in Ready, Multi Fast and Multi Slow (both with
_Fast Ack), then the bit Ready shall be present and active (value 1b) in both entries, in order to_
have coherent values for both entries. One entry is used for the Fast Ack configuration on Fast, the
other entry is used for the Fast Ack configuration on Slow.

2.3.3.6.2.3 Usage by the MaC (ETS)
The MaC shall sort the table according to the numerical value of GA_Value from smallest to largest.

2.3.3.6.2.4 Usage by the MaS

The MaS (device) shall use this information to send any Standard Mode group communication using
the concerned GA.

Savedate: Filename: page 43 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.3.3.7 Resource for multicast communication from RF to TP1 
If Fast Ack are used, the ack slot 0 shall be used for group communication between any RF Multi
device and the Media Coupler, for acknowledgement of an incoming RF Frame.

2.3.3.7.1 PID_GRP_RF_TP_MULTICAST_TABLE (PID: 83)

**●** **Property name:** Group RF TP1 Multicast Table

**●** **Property Datatype:** PDT_GENERIC_3[]

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/0CC (see 2.1.1)

**●** **Access level** 2/2

2.3.3.7.1.1 Abstract Resource definition
The Group RF TP1 Multicast Table shall contain the RF Multi information (use of Fast Ack) that the
MaS shall use when receiving Group Objects from RF using RF Multi communication.

2.3.3.7.1.2 Format

**Array index** **GA value** **Use of Fast Ack**

(2 octets) (1 octet)

1

2

…

m

The table shall be sorted according to the numerical value of GA_Value from smallest to largest.

  - _GA_Value_
The GA_Value shall refer to the Group Address to be acknowledged on RF.

  - _Use of Fast Ack_
Field b7 b6 b5 b4 b3 b2 b1 b0

Name reserved reserved reserved reserved reserved reserved Multi Slow Multi Fast

Values 0 0 0 0 0 0 0,1 0,1

`o` _Bit b0: Multi Fast_
This shall define if the received RF Multi Fast RF Frame using this Group Address shall be
acknowledged or not. If the Frame shall be acknowledged, the ack slot number to be used is fixed
to 0 (requirement for the Media Coupler).

0: the RF Multi Fast multicast Frame with this Group Address shall not be acknowledged.

1: the RF Multi Fast multicast Frame with this Group Address shall be acknowledged.

Savedate: Filename: page 44 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|GA value|Use of Fast Ack|
|---|---|
|(2 octets)|(1 octet)|
|||
|||
|||
|||

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|Name|reserved|reserved|reserved|reserved|reserved|reserved|Multi Slow|Multi Fast|
|Values|0|0|0|0|0|0|0,1|0,1|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

`o` _Bit b1: Multi Slow_
This shall define if the received RF Multi Slow RF Frame using this Group Address shall be
acknowledged or not. If the Frame shall be acknowledged, the ack slot number to be used is fixed
to 0 (requirement for the Media Coupler).

0: the RF Multi Slow multicast Frame with this Group Address shall not be acknowledged.

1: the RF Multi Slow multicast Frame with this Group Address shall be acknowledged.

2.3.3.7.1.3 Usage by the MaC (ETS)
The MaC shall sort the table according to the numerical value of GA_Value from smallest to
largest.

The MaC shall only write an entry in this table if the GA used in RF shall be acknowledged with Fast
_Ack._

2.3.3.7.1.4 Usage by the MaS

The MaS (device) shall use this information to acknowledge any Standard Mode group
communication using the concerned GA, on RF

##### 2.3.4 New Resources for RF Multi USB interface (cEMI)
See cEMI Resources for RF Multi (Requirements defined in 03_06_03 EMI_IMI v01.03.03 AS)

###### 2.3.4.1 Use cases to be supported by cEMI for RF Multi
The following use cases shall be supported when using a cEMI interface supporting RF Multi:

A. ETS group monitor sending (“playing sender”);
B. ETS group monitor receiving;
C. Visualisation connected via USB (sending and receiving Frames);
D. Communication between Fast Media Coupler and slow interface (sending and receiving
Frames).

###### 2.3.4.2 PID_CEMI_RF_MULTI_ACTIVATE (PID = 91)

 - Property name: cEmi_RF_Multi_Server_Activate

 - Property Datatype: PDT_BINARY_INFORMATION

 - Datapoint Type: None

 - Access Policies: 3FF/3FF (see 2.1.1)

 - Access level 2/2

2.3.4.2.1 Abstract Resource definition
The Property cEmi_RF_Multi_Activate shall control the activation and deactivation of the cEMI
interface from the bus. The Property is meant to enable the transmission mode, reception mode,
test signal, etc. but should not be used at runtime in an end device. When activated, it is possible
to use PID_TRANSMISSION_MODE, PID_RECEPTION_MODE and PID_TEST_SIGNAL
properties from the bus.

The MaC shall write the Property cEmi_RF_Multi_Activate with value 1 to activate the
management of the cEMI Server.

The value of the Property RF shall be formatted as an 8 bit field datatype and shall be interpreted
as specified in Table 19.

Savedate: Filename: page 45 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

The cEMI Client shall read the Property cEmi_RF_Multi_Activate to get the current state, activated
or deactivated, of the cEMI Server.

**Table 19 - Interpretation of the data in PID_CEMI_RF_MULTI_ACTIVATE**

Field b7 b6 b5 b4 b3 b2 b1 b0

Name 0: Deactivated,

1 Activated

Values 0 0 0 0 0 0 0 0 (default),1

2.3.4.2.2 Master Reset

**Resource** **-** **02h** **07h** **01h** **None**
**Local Reset** **Reset to** **Reset to** **Confirmed** **Basic** **Power**

**to default** **default state** **default** **Restart** **Restart** **Cycle**

**state** **without IA**

91 PID_CEMI_RF_MULTI_ACTI KNX default KNX Default KNX Default KNX KNX KNX
VATE Default Default Default

###### 2.3.4.3 PID_RF_MULTI_ADDINFO_SELECT (PID = 72)

 - **Property name:** PID_RF_MULTI_ADDINFO_SELECT

 - **Property Datatype:** PDT_BINARY_INFORMATION

 - **Datapoint Type:** None

 - **Access Policies:** 3FF/3FF

 - **Access level** 2/2

2.3.4.3.1 Abstract Resource definition
The Property PID_RF_MULTI_ADDINFO_SELECT shall select AddAdditional Information Type
0Ah or 0Bh to be used for RF Multi Telegram received by the cEMI Server.

If an RF Multi Telegram is received, the cEMI Server shall use the AddInfo corresponding to this
Property to pass the message to upper layers.

This Property is used in case of received RF Telegrams. For transmission, the cEMI Client can still
use 0Ah or 0Bh Addinfo to request sending frames to the cEMI Server.

This Property can be used by multiple clients (ETS, Visualisation…)

**Field** b7 b6 b5 b4 b3 b2 b1 b0

**Name** 0: use AddAdditional

Information Type
0Ah
1: use AddAdditional
Information Type
0Bh

**Values** 0 0 0 0 0 0 0 0,1 (default)

Savedate: Filename: page 46 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|Name|reserved|reserved|reserved|reserved|reserved|reserved|reserved|0:<br>Deactivated,<br>1 <br> Activated|
|Values|0|0|0|0|0|0|0|0 (default),1|

|Col1|Resource|-<br>Local Reset<br>to default<br>state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|None<br>Basic<br>Restart|Power<br>Cycle|
|---|---|---|---|---|---|---|---|
|91|PID_CEMI_RF_MULTI_ACTI<br>VATE|KNX default|KNX Default|KNX Default|KNX<br>Default|KNX<br>Default|KNX<br>Default|

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|**Name**|reserved|reserved|reserved|reserved|reserved|reserved|reserved|0: use AddAdditional<br>Information Type<br>0Ah<br>1: use AddAdditional<br>Information Type<br>0Bh|
|**Values**|0|0|0|0|0|0|0|0,1(default)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.4.3.2 Master Reset

**Resource** **-** **02h** **07h** **01h** **None**
**Local Reset** **Reset to** **Reset to** **Confirmed** **Basic** **Power**

**to default** **default state** **default** **Restart** **Restart** **Cycle**

**state** **without IA**

72 PID_RF_MULTI_ADDINFO_ KNX default KNX Default KNX Default Not Not Not
SELECT influenced influenced influenced

###### 2.3.4.4 Receiving Frames: sending Fast Acks
The current specification does not allow the interface to send Fast Ack on specified ack slots. This
document needs to be extended in order to configure the acknowledgment in case of RF Frame
reception, so Fast Ack sending.

This only concerns the USB interface configured in Data Link Layer, and not as raw mode or
Busmonitor mode. In case of raw mode or Busmonitor mode, the Fast Ack shall not be sent when
receiving a Frame.

This is a configuration of the cEMI Server and cannot be done per Telegram because the server
can receive any Group Address at any time.

The following dedicated Resource must be defined in the local cEMI Management Server,
accessible using M_Prop-services.

The Resource PID_RF_MULTI_SENDING_ACK is defined in the cEMI Server Object (Object Type
8).

2.3.4.4.1 PID_RF_MULTI_SENDING_ACK (PID: 70)

**●** **Property name:** Rx Multi Sending Ack

**●** **Property Datatype:** PDT_GENERIC_3 []

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/3FF (see 2.1.1)

**●** **Access level** 2/2

2.3.4.4.1.1 Abstract Resource definition
With this data array Property, the cEMI Client is able to configure in the cEMI Server the sending of
Fast Acknowledgement for each received Group Address.

This Property shall be used with M_PropRead.req and M_PropWrite.req services.

2.3.4.4.1.2 Format

**Array index** **GA_Value** **Used ack slot**
(2 octet) (1 octet)

1

2

…

m

The table shall be sorted according to the numerical value of GA_Value from smallest to largest.
Maximum one entry shall exist per Group Address.

Savedate: Filename: page 47 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Col1|Resource|-<br>Local Reset<br>to default<br>state|02h<br>Reset to<br>default state|07h<br>Reset to<br>default<br>without IA|01h<br>Confirmed<br>Restart|None<br>Basic<br>Restart|Power<br>Cycle|
|---|---|---|---|---|---|---|---|
|72|PID_RF_MULTI_ADDINFO_<br>SELECT|KNX default|KNX Default|KNX Default|Not<br>influenced|Not<br>influenced|Not<br>influenced|

|GA Value<br>_|Used ack slot|
|---|---|
|<br>(2 octet)|(1 octet)|
|||
|||
|||
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

- **GA_Value**
Group Address for which the device shall send a Fast Acknowledge.

- **Used ack slot**
Physical ack slot number used by the device when receiving a multicast Frame containing the
Group Address.

One bit is used in order to know in which RF Mode the acknowledgement is done (this is only
needed in case the cEMI Server supports Fast or Slow communication. This is only possible in
case of USB interface).

Field b7 b6 b5 b4 b3 b2 b1 b0

Name reserved Fast/Slow Physical ack slot number

Values 0 0/1 [00..63]

2.3.4.4.1.3 Usage by the MaC (ETS)
In case several cEMI Servers are used in the same installation, or one cEMI Server and a Media
Coupler, then the cEMI Client shall configure different ack slot number for each physical device.

A table size attribute is defined in the profile (in MT) to be used by ETS to limit the number of
elements in the table.

For sending the same Telegram on multiple frequencies Fast/ready/Slow, always request it in two
steps Fast/Ready and then Slow.

2.3.4.4.1.4 Usage by the MaS
It is required that the configuration of the acknowledgment is stored permanently in the MaS.

This covers several use cases: ETS, visualisation tool …

In case the table is empty, the cEMI Server does not acknowledge any group message.

Savedate: Filename: page 48 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|Name|reserved|Fast/Slow|Physical ack slot number|Physical ack slot number|Physical ack slot number|Physical ack slot number|Physical ack slot number|Physical ack slot number|
|Values|0|0/1|[00..63]|[00..63]|[00..63]|[00..63]|[00..63]|[00..63]|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.3.4.5 Sending Frames

2.3.4.5.1 AddInfoType 0Bh: RF Multi Fast Ack short information
The Additional Information Type 0Ah (RF Fast Ack information) is defined in a generic manner and
with the complete info byte that is in the ack slot. The main drawback is that its length is variable
and can reach 130 octets in case of 64 ack slots are used. In some case, there is a need to use a
shorter and optimised version of this information. Therefore, the following Additional Information
Type 0Bh has been defined.

This Additional Information Type 0Bh has a variable length between 1 octet and 8 octets long and
only contains the 1-bit acknowledgement information for each slot so its length is between 1 octet
and 8 octets.

It is important to note that the info byte of each slot is no more transferred with this Additional
Information Type. If the info byte is used and so necessary, the Additional Information Type 0Bh
cannot be used. 0Ah shall be used instead.

**Table 20 - RF Multi Fast Ack short information description cEMI Additional Information**

**Type ID** **Len** **Fast Ack 0 to 7** **…** **Fast Ack 56 to 63**

Fast Fast Fast Fast Fast Fast Fast Fast ... Fast Fast Fast Fast Fast Fast Fast Fast

Ack Ack Ack Ack Ack Ack Ack Ack Ack Ack Ack Ack Ack Ack Ack Ack

7 6 5 4 3 2 1 0 63 62 61 60 59 58 57 56

1 octet 1 octet 1 octet ... 1 octet

0Bh [01h..08h] Fast Ack slot 0 to 7 ... Fast Ack slot 56 to 63

The variable length of the ‘Fast Ack short information’ shall depend on the number of expected
Fast Ack as specified in the RF message. If the expected number of Fast Ack is less or equal to 8,
then the length of the cEMI Additional Information shall be 1 octet. If the expected number of Fast
Ack is less or equal to 16, then the length of the cEMI Additional Information shall be 2 octets. The
maximal number of Fast Ack that can be processed in a RF message is 64, thus the total length for
the cEMI Additional Information is 8 octets.

Savedate: Filename: page 49 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Type ID|Len|Fast Ack 0 to 7|Col4|Col5|Col6|Col7|Col8|Col9|Col10|…|Fast Ack 56 to 63|Col13|Col14|Col15|Col16|Col17|Col18|Col19|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||Fast<br>Ack<br>7|<br>Fast<br>Ack<br>6|<br>Fast<br>Ack<br>5|<br>Fast<br>Ack<br>4|<br>Fast<br>Ack<br>3|<br>Fast<br>Ack<br>2|<br>Fast<br>Ack<br>1|<br>Fast<br>Ack<br>0|<br>...|Fast<br>Ack<br>63|Fast<br>Ack<br>62|Fast<br>Ack<br>61|Fast<br>Ack<br>60|Fast<br>Ack<br>59|Fast<br>Ack<br>58|Fast<br>Ack<br>57|Fast<br>Ack<br>56|
|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|...|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|1 octet|
|0Bh|[01h..08h]|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|Fast Ack slot 0 to 7|...|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|Fast Ack slot 56 to 63|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

Each bit Fast Ack x (x: 0 to 63) shall indicate if the Fast Ack N°x is received or not (resp. is
expected or not) by the cEMI Server (e.g. the synchro pattern of the Fast Ack has been received or
not (resp. is expected or not)).

   - L_Data.req: shall contain the expected Fast Ack

    - Fast Ack x = 0: the Fast Ack x is not expected in the Frame to be transmitted.

    - Fast Ack x = 1: the Fast Ack x is expected in the Frame to be transmitted.

   - L_Data.con: shall indicate if the Fast Ack has been received by the cEMI Server (case of
emitted Frame).

    - Fast Ack x = 0: the Fast Ack x is not received in the Frame that has just been
transmitted.

    - Fast Ack x = 1: the Fast Ack x is received in the Frame that has just been transmitted.

   - L_Data.ind: shall indicate if the Fast Ack has been received or not by the cEMI Server
(case of received Frame).

    - Fast Ack x = 0: the Fast Ack x is not received in the received Frame.

    - Fast Ack x = 1: the Fast Ack x is received in the received Frame or the Fast Ack Slot
has been sent for the received frame.

**Relation between L_Data.req and L_Data.con**

The Additional Information for Fast Ack in the L_Data.con is related to the Additional Information
for Fast Ack in the L_Data.req.

The cEMI Server shall not mask the received Fast Acks, by using the expected ones from the
request. The cEMI Server shall send back every received Fast Ack, even the ones that would not
be expected. The cEMI Client may detect unexpected Fast Ack, which could mean incoherence of
configuration. The behavior of the cEMI Client is application specific.

There is no bit error indication in the confirmation if an unexpected ack slot is received.

2.3.4.5.2 Different modes for the retry strategy
Here are the two modes for the retry strategy.

   - Mode 1

It is handled in the cEMI Client. In this case, there is no need to add Resource; the
Additional Information 0Ah is needed in the L_Data.con for the cEMI Client to handle the
possible retries. This is the default mode

   - Mode 2

It is handled by the cEMI Server: in this case, there is no extra Resource, but only an
Additional Information 0Bh is needed in the L_Data.req in order to give the information by
the cEMI Client to the cEMI Server concerning the expected ack slots.

Savedate: Filename: page 50 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**Criteria** **Mode 1** **Mode 2**

Retry decision done in cEMI Client cEMI Server

Use cases MaC Visualisation tool
Communication between Fast Media
Coupler and slow interface

Resources in server for No Resources No Resources.
transmission List of expected ack is passed by client

to Server in each request.

Resources in server for PID_RF_MULTI_SENDING_ACK PID_RF_MULTI_SENDING_ACK
reception

Additional Information 02h, 0h8,0Bh 02h, 08h, 0Bh
used in L_Data.req Insert conditional

Additional Information 02h, 08h, 0Bh or 0Ah 02h, 08h, 0Bh or 0Ah
used in L_Data.con

Additional Information 0Ah or 0Bh According value of 0Ah or 0Bh According value of
used in L_Data.ind PID_RF_MULTI_ADDINFO_SELECT PID_RF_MULTI_ADDINFO_SELECT

Ack result (Conf bit in Ctrl Boolean: success/error Boolean: success/error
byte of L_Data.con)

Number of L_Data.req for Several (one per retry from client) 1
one applicative request

L_Data.req of Telegram n+1 shall by the Client not be sent before the L_Data.con of the Telegram
n has been received. If the Client would do this anyhow, the Server shall refuse this, by sending a
negative confirmation.

Remark on mode 2

The Conf bit in Ctrl byte of L_Data.con shall indicate success (if the Frame is sent) or error (if
the Frame could not be sent). The C-Flag shall only be set to No Error if all expected Fast Ack
slots have been received. This allows the client to have the status of the last request.

Discovery of the supported options by the client is done by reading
PID_COMM_MODES_SUPPORTED

Selection of the option by the client Is done by using PID_COMM_MODE.

Savedate: Filename: page 51 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Criteria|Mode 1|Mode 2|
|---|---|---|
|Retry decision done in|cEMI Client|cEMI Server|
|Use cases|MaC|Visualisation tool<br>Communication between Fast Media<br>Coupler and slow interface|
|Resources in server for<br>transmission|No Resources|No Resources.<br>List of expected ack is passed by client<br>to Server in each request.|
|Resources in server for<br>reception|PID_RF_MULTI_SENDING_ACK|PID_RF_MULTI_SENDING_ACK|
|Additional Information<br>used in L_Data.req|02h, 0h8,0Bh<br>Insert conditional|02h, 08h, 0Bh|
|Additional Information<br>used in L_Data.con|02h, 08h, 0Bh or 0Ah|02h, 08h, 0Bh or 0Ah|
|<br>Additional Information<br>used in L_Data.ind|0Ah or 0Bh According value of<br>PID_RF_MULTI_ADDINFO_SELECT|0Ah or 0Bh According value of<br>PID_RF_MULTI_ADDINFO_SELECT|
|Ack result (Conf bit in Ctrl<br>byte of L_Data.con)|<br>Boolean: success/error|<br>Boolean: success/error|
|<br>Number of L_Data.req for<br>one applicative request|Several (one per retry from client)|1|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

 _In AN168, PID_COMM_MODES_SUPPORTED (PID = 64) is defined in the cEMI Server interface object. It is_
_extended as follows._

**Field** **b15** **b14** **b13** **b12** **b11** **b10** **b9** **b8** **b7** **b6** **b5** **b4** **b3** **b2** **b1** **b0**

**Name**

KNX RF

Medium dependent
zone

**Value** 0 0 0 0 0 0 0 0 0 0

The medium dependent zone shall group the bits that shall be interpreted together with the media
type(s) supported by the cEMI Server.

In case several media are supported by the cEMI Server, several cEMI Server interface objects will
be implemented, one for each medium. The interpretation of the medium dependant zone is done
based on the value of PID_MEDIUM_TYPE (today, only one bit is active at a time) which gives the
medium type used by the selected interface object.

**b0** **DLL: Data Link Layer normal operation**
This shall indicate whether or not the cEMI Server supports access to the Data
Link Layer, this is, whether this cEMI Server can be used for sending and
receiving Frames to and from the KNX bus using L_Data.req and L_Data.ind.

Concerning RF Multi, and the retry mechanism, this indicates also that the retry
strategy shall be done by the Client, and not by the Server.

0: Data Link Layer is not supported.

1: Data Link Layer is supported.

**b1** **BM: Data Link Layer Busmonitor Mode**
This shall indicate whether or not the cEMI Server supports access to the Data
Link Layer, this is, whether this cEMI Server can be used for receiving Frames
from the KNX bus using L_Busmon.ind.

0: Busmonitor Mode is not supported.

1: Busmonitor Mode is supported.

**b2** **RAW: Data Link Layer Raw mode**
This shall indicate whether or not the cEMI Server supports access to the Data
Link Layer Raw Mode, this is, whether this cEMI Server can be used for receiving
Frames from the KNX bus using L_Raw.req and L_Raw.ind.

0: Raw Mode is not supported.

1: Raw Mode is supported.

Savedate: Filename: page 52 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Field|b15|b14|b13|b12|b11|b10|b9|b8|b7|b6|b5|b4|b3|b2|b1|b0|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**Name**|DLLM2|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|reserved|TLL|RAW|BM|DLL|
||KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|KNX RF|
||Medium dependent<br>zone|Medium dependent<br>zone|Medium dependent<br>zone|Medium dependent<br>zone|||||||||||||
|**Value**|||0|0|0|0|0|0|0|0|0|0|||||

|b<br>0|DLL: Data Link Layer normal operation<br>This shall indicate whether or not the cEMI Server supports access to the Data<br>Link Layer, this is, whether this cEMI Server can be used for sending and<br>receiving Frames to and from the KNX bus using L Data.req and L Data.ind.<br>_ _<br>Concerning RF Multi, and the retry mechanism, this indicates also that the retry<br>strategy shall be done by the Client, and not by the Server.|Col3|
|---|---|---|
|**b0 **|0:|Data Link Layer is not supported.|
|**b0 **|1:|Data Link Layer is supported.|
|**b1 **|**BM: Data Link Layer Busmonitor Mode** <br>This shall indicate whether or not the cEMI Server supports access to the Data<br>Link Layer, this is, whether this cEMI Server can be used for receiving Frames<br>from the KNX bus using L_Busmon.ind.|**BM: Data Link Layer Busmonitor Mode** <br>This shall indicate whether or not the cEMI Server supports access to the Data<br>Link Layer, this is, whether this cEMI Server can be used for receiving Frames<br>from the KNX bus using L_Busmon.ind.|
|**b1 **|0:|Busmonitor Mode is not supported.|
|**b1 **|1:|Busmonitor Mode is supported.|
|**b2 **|**RAW: Data Link Layer Raw mode** <br>This shall indicate whether or not the cEMI Server supports access to the Data<br>Link Layer Raw Mode, this is, whether this cEMI Server can be used for receiving<br>Frames from the KNX bus using L_Raw.req and L_Raw.ind.|**RAW: Data Link Layer Raw mode** <br>This shall indicate whether or not the cEMI Server supports access to the Data<br>Link Layer Raw Mode, this is, whether this cEMI Server can be used for receiving<br>Frames from the KNX bus using L_Raw.req and L_Raw.ind.|
|**b2 **|0:|Raw Mode is not supported.|
|**b2 **|1:|Raw Mode is supported.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**b3** **TLL: Transport Layer Local**
This shall indicate whether or not the cEMI Server supports the cEMI Local
Transport Layer, thus allowing Local Device Management over the cEMI interface.

0: cEMI Local Transport Layer is not supported.

1: cEMI Local Transport Layer is supported.

**b15** **DLLM2: Data Link Layer normal operation with retry mechanism in Server**
**(Mode 2)**
This bit is only interpreted if the KNX RF is supported in the PID_MEDIUM_TYPE.
This shall indicate whether or not the cEMI Server supports access to the Data
Link Layer, this is, whether this cEMI Server can be used for sending and
receiving Frames to and from the KNX bus using L_Data.req and L_Data.ind.

Concerning RF Multi, and the retry mechanism, this indicates also that the retry
strategy is done by the Server, using the Additional Information 0Ah or 0Bh.

0: Data Link Layer Mode 2 is not supported.

1: Data Link Layer Mode 2 is supported.

 _In AN168, PID_COMM_MODE (PID = 52) is defined in the cEMI Server interface object. It is extended as follows._

**Value** **Communication Mode** **RF**
**(informative)** **Multi**

00h Data Link Layer (Mode 2 not activated, Mode 1 by default) M
01h Data Link Layer Busmonitor O
02h Data Link Layer Raw Frames O

03h not used n/a
04h not used n/a
05h not used n/a
06h cEMI Transport Layer C a
07h to DFh not used n/a
E0h to EFh Medium dependent range of values.

This range has to be interpreted depending on the medium of the
cEMI Server.

For RF :

Value Communication mode
E0h Data Link Layer (retry mechanism in server - Mode 2)

F0h to FEh reserved n/a
FFh “no layer” O
a The cEMI Transport Layer communication mode is mandatory if local device management is

supported

Savedate: Filename: page 53 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|b<br>3|TLL: Transport Layer Local<br>This shall indicate whether or not the cEMI Server supports the cEMI Local<br>Transport Layer, thus allowing Local Device Management over the cEMI interface.|Col3|
|---|---|---|
|**b3 **|0:|cEMI Local Transport Layer is not supported.|
|**b3 **|1:|cEMI Local Transport Layer is supported.|
|**b15**|**DLLM2: Data Link Layer normal operation with retry mechanism in Server**<br>**(Mode 2)** <br>This bit is only interpreted if the KNX RF is supported in the PID_MEDIUM_TYPE.<br>This shall indicate whether or not the cEMI Server supports access to the Data<br>Link Layer, this is, whether this cEMI Server can be used for sending and<br>receiving Frames to and from the KNX bus using L_Data.req and L_Data.ind.<br>Concerning RF Multi, and the retry mechanism, this indicates also that the retry<br>strategy is done by the Server, using the Additional Information 0Ah or 0Bh.|**DLLM2: Data Link Layer normal operation with retry mechanism in Server**<br>**(Mode 2)** <br>This bit is only interpreted if the KNX RF is supported in the PID_MEDIUM_TYPE.<br>This shall indicate whether or not the cEMI Server supports access to the Data<br>Link Layer, this is, whether this cEMI Server can be used for sending and<br>receiving Frames to and from the KNX bus using L_Data.req and L_Data.ind.<br>Concerning RF Multi, and the retry mechanism, this indicates also that the retry<br>strategy is done by the Server, using the Additional Information 0Ah or 0Bh.|
|**b15**|0:|Data Link Layer Mode 2 is not supported.|
|**b15**|1:|Data Link Layer Mode 2 is supported.|

|For RF :|Col2|
|---|---|
|Value|Communication mode|
|E0h|Data Link Layer (retry mechanism in server - Mode 2)|

|Value<br>(informative)|Communication Mode|RF<br>Multi|
|---|---|---|
|<br>00h|Data Link Layer (Mode 2 not activated, Mode 1 by default)|M|
|01h|Data Link Layer Busmonitor|O|
|02h|Data Link Layer Raw Frames|O|
|03h|not used|n/a|
|04h|not used|n/a|
|05h|not used|n/a|
|06h|cEMI Transport Layer|C a|
|07h to DFh|not used|n/a|
|E0h to EFh|Medium dependent range of values.<br>This range has to be interpreted depending on the medium of the<br>cEMI Server.<br>For RF :<br>Value<br>Communication mode<br>E0h<br>Data Link Layer (retry mechanism in server - Mode 2)||
|F0h to FEh|reserved|n/a|
|FFh|“no layer”|O|
|aThe cEMI Transport Layer communication mode is mandatory if local device management is<br>supported|aThe cEMI Transport Layer communication mode is mandatory if local device management is<br>supported|aThe cEMI Transport Layer communication mode is mandatory if local device management is<br>supported|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.4.5.3 Sequence diagrams when sending multicast Frame with Fast Ack

Savedate: Filename: page 54 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.3.4.6 Busmon

 _Add in [7] / at the end of clause 4.1.5.7.6 the following sentence._

If Busmonitor Mode is enabled, then the cEMI Server shall map any received RF KNX Frame to
the L_Busmon.ind service primitive.

This shall include all of the following.

   - any correctly received KNX RF Frame

   - any correctly received KNX RF Multi Frame, by joining addinfo (08h, 0Ah, 0Bh) following
the L_Data rules.

This may additionally include any of the following.

   - any RF Frame with any incorrect CRC, or

   - any RF Frame with incorrect preamble or postamble, or

   - any RF Frame that is not received completely, or

   - any RF Frame with incorrect length information, or

   - any RF Frame with incorrect value for any received field (“C”, “Esc”, ‘reserved’ in “RFinfo”,

   - any RF Frame with incorrect End of Ack or Fast Ack, or

   - and other.
In all these additional cases, joining Additional Information (08h, 0Ah, 0Bh) is also optional.

##### 2.3.5 New Resources for RF Multi Retransmitter

###### 2.3.5.1 Smart Retransmitter

2.3.5.1.1 General
There is a need to define new Resources in order to specify smart Retransmitter that retransmits
only Frames with dedicated criteria, such as containing a specific Group Address, or a specific
Individual Address.

An ETS App may be used to configure that, using a signal strength analyser, and the expertise of
the installer.

The point-to-point, broadcast and system broadcast communication are not considered in this
smart Retransmitter feature. Only multicast communication is considered here. This means that, if
the Retransmitter function is activated, every Point-to-point, broadcast and system broadcast
Frames is repeated, because there is no use case to filter the Frames used for configuration.

For a list of main use cases, please refer to Annex B.

The Retransmitter does not retransmit the GA from its GA table, but the one specified in the heredefined specific Resources (PID_RF_SMART_RETRANSMITTER).

Savedate: Filename: page 55 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.5.1.2 PID_RF_SMART_RETRANSMITTER (PID: 81)
The Resource PID_RF_SMART_RETRANSMITTER is defined in the RF Medium Object (Object
Type 19).

**●** **Property name:** RF Smart Retransmitter

**●** **Property Datatype:** PDT_GENERIC_11[]

**●** **Datapoint Type:** None

**●** **Access Policies:** 3FF/0FC (see 2.1.1)

**●** **Access level** 2/2

2.3.5.1.2.1 Abstract Resource definition
The following Resource is defined in order to configure the behaviour of the Retransmitter using
rules that use range of IA, GA, RF link quality and an associated action.

With this Data Property array, the MaC can configure the rules for the retransmission.

NOTE 9 The behaviour is similar to the rules in a Filter Table of a KNXnet/IP Router.
Each entry in the table shall be seen as a rule. Each rule shall define the behaviour for one or
several Frames, by using range on IAs, GAs and RF link quality.

The rules shall be evaluated in ascending order of the index in the table.

The order of entries is very important, because the evaluation of the rules is done in the ascending
order of the index in the table.

There may be conflicting rules inside the table. This is the responsibility of the MaC to define the
sorting of entries for the wanted behaviour. The evaluation of the Frame shall be done depending
on the order of entries in the table.

2.3.5.1.2.2 Format

**Array**
**Range of IA** **Range of GA** **RF Link Quality** **Action**
**index**

**Start** **End** **Start** **End** **Start** **End**

2 octets 2 octets 2 octets 2 octets 1 octet 1 octet 1 octet

1

2

…

m

Range of IA:

- Start and End shall both be 2 octet unsigned values; they shall define the range of Individual
Address of the entry (rule). The minimum value shall be 0; the maximum value shall be
65 535.
There is no required error handling for the Range of IA. Implementation specific exception
handling or restrictions may apply. (The MaS may send a negative response, possibly with an
appropriate Return Code, or may restrict the interpretation of the Property Value.)

EXAMPLE 08 An implementation may ignore the value 0000h for an Individual Address and only evaluate
IAs as from 0001h.

Savedate: Filename: page 56 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Range of IA|Col2|Range of GA|Col4|RF Link Quality|Col6|Action|
|---|---|---|---|---|---|---|
|**Start**|**End**|**Start**|**End**|**Start**|**End**||
|2 octets|2 octets|2 octets|2 octets|1 octet|1 octet|1 octet|
||||||||
||||||||
||||||||
||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

Range of GA:

- Start and End shall both be 2 octet unsigned values; they shall define the range of Group
Address of the entry (rule). The minimum value shall be 1; the maximum value shall be
65 535.

This is the minimal range that shall be supported. The value 0 shall not be set by the MaC;
there is no standard error handling for the MaS. (The MaS may send a negative response, if
possible, with an appropriate Return Code; it may ignore the value or interpret it as any other
GA value).

RF Link quality:

- Start and End shall both be 1 octet unsigned values; they shall define the range of RF link
quality of the entry (rule). The minimum value shall be 0; the maximum value shall be 255.

Action:

**Field** **b7** **b6** **b5** **b4** **b3** **b2** **b1** **b0**

**Name** reserved reserved reserved reserved reserved reserved reserved Action

**Values** 0 0 0 0 0 0 0 0,1

- Action (bit b0):
0: if the Frame satisfies all the conditions (IA, GA, RF link quality) then it shall not be
retransmitted.
1: the Frame satisfies all the conditions (IA, GA, RF link quality) then it shall be
retransmitted.

2.3.5.1.2.3 Examples

1) A Retransmitter shall retransmit every Frame containing an Individual Address between
1.0.0 and 1.15.255, and with a Group Address between 0/0/1 and 0/1/255 with RF link
quality between 00h and 50h, except range from 0/1/0 to 0/1/15.

**Array**
**Range of IA** **Range of GA** **RF Link Quality** **Action**
**index**

**Start** **End** **Start** **End** **Start** **End**

2 octets 2 octets 2 octets 2 octets 1 octet 1 octet 1 octet

1 1 000h 1FFFh 0100h 010Fh 00h FFh 00h

2 1 000h 1FFFh 0001h 01FFh 00h 50h 01h

2) A Retransmitter shall retransmit every Frame containing any Individual Address, any link
quality, with Group Address 1/1/1.

**Array**
**Range of IA** **Range of GA** **RF Link Quality** **Action**
**index**

**Start** **End** **Start** **End** **Start** **End**

2 octets 2 octets 2 octets 2 octets 1 octet 1 octet 1 octet

1 0000h FFFFh 0901h 0901h 00h FFh 01h

Savedate: Filename: page 57 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Field|b<br>7|b<br>6|b<br>5|b<br>4|b<br>3|b<br>2|b<br>1|b<br>0|
|---|---|---|---|---|---|---|---|---|
|**Name**|reserved|reserved|reserved|reserved|reserved|reserved|reserved|Action|
|**Values**|0|0|0|0|0|0|0|0,1|

|Range of IA|Col2|Range of GA|Col4|RF Link Quality|Col6|Action|
|---|---|---|---|---|---|---|
|**Start**|**End**|**Start**|**End**|**Start**|**End**||
|2 octets|2 octets|2 octets|2 octets|1 octet|1 octet|1 octet|
|1 000h|1FFFh|0100h|010Fh|00h|FFh|00h|
|1 000h|1FFFh|0001h|01FFh|00h|50h|01h|

|Range of IA|Col2|Range of GA|Col4|RF Link Quality|Col6|Action|
|---|---|---|---|---|---|---|
|**Start**|**End**|**Start**|**End**|**Start**|**End**||
|2 octets|2 octets|2 octets|2 octets|1 octet|1 octet|1 octet|
|0000h|FFFFh|0901h|0901h|00h|FFh|01h|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

2.3.5.1.2.4 Usage by the MaS
The MaS shall evaluate the RF Smart Retransmitter according to the following algorithm.

   - The first entry (rule) of the table shall be evaluated firstly.

    - If the incoming RF Frame matches with that rule, then the corresponding action shall
be executed, and no further evaluation shall be done.

    - If the incoming RF Frame does not match the rule, then the next rule shall be
evaluated.

   - If no entry matches the RF incoming Frame, then the following action shall be executed:
there shall be no retransmission.

If the table is empty, then the default action shall be executed: all Frames shall be retransmitted (as
in RF Ready) according to the value of PID_RETRANSMITTER.

The MaS shall not sort or resort the entries.

2.3.5.1.2.5 Usage by the MaC (ETS)
There is no requirement on the sorting of the table.

The MaC shall define the desired order of rules for the behaviour of retransmissions. The MaC shall
fill the settings of the Retransmitter according to the MaC user’s indications.

#### 2.4 Configuration Procedures
This clause lists Configuration Procedures using KNX RF Multi.

These are the different major steps in order to configure RF Multi devices.

1. Consider the features of the RF devices present in the Line.

a. RF Ready devices
b. RF Multi devices:
i. Physical features for each RF Multi device

c. RF Ready Media Coupler(s)
d. RF Multi Media Coupler(s)
i. Type of Media Coupler (Fast Media Coupler, slow extender, Fast and Slow Media
Coupler)

2. Consider the associations between devices and their characteristics (Ready/Fast/Slow)
and check the need and availability of Media Couplers

a. Associations TP1  Fast or Ready
i. Need of Fast Media Coupler (if not present and if a KNX RF Ready Media
Coupler is present, then the associations can be done in Ready).

b. Associations TP1  Slow
i. Need of Fast Media Coupler + slow extender, or Fast and slow Media Coupler.

c. Associations Fast  Slow
i. Pure RF: no need of any Media Coupler
ii. Else consider case a or case b.

d. Associations Ready  Slow
i. Need of Fast Media Coupler and slow extender

Savedate: Filename: page 58 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

3. Network addressing

a. Media Coupler
i. Domain address
ii. Individual Address
iii. IA of Slow extender in Fast Media Coupler
(PID_RF_MULTI_SLOW_EXTENDER_IA)
iv. IA of Fast Media Coupler in Slow extender (to whom the RF received Frames
have to be sent) (PID_RF_MULTI_FAST_MEDIA_COUPLER_IA)

b. End device
i. Domain address
ii. Individual Address

4. Download the Media Couplers and interfaces

a. Security aspects
b. RF Ready S-mode Media Coupler Resources
i. Filter table

c. RF Multi specific Resources for Media Coupler
i. TP1 to RF: PID_GRP_TP_RF_MULTICAST_TABLE
ii. RF to TP1: PID_GRP_RF_TP_MULTICAST_TABLE

d. cEMI interfaces (USB RF)
i. PID_RF_MULTI_SENDING_ACK

5. Download the end-devices

a. Security Resources
b. RF Ready S-Mode Resources
i. Group Object table
ii. Group Address Table
iii. Association table

c. RF Multi specific Resources
i. PID_RF_MULTI_TYPE
ii. PID_GRP_TX_MULTI_INFO_TABLE
iii. PID_GRP_RX_MULTI_INFO_TABLE
iv. PID_RF_RETRANSMITTER

##### 2.4.1 End device detailed Configuration Procedures
Initial configuration of an RF Multi Fast device. The aim of this sequence is to set the DoA, the IA;
the Multi/Ready RF mode before starting the security configuration if needed, and the download of
the linking/parameters and specific RF Multi Resources.

The initial state of the target device to be loaded may be:



- in Ready RF Mode



- in Multi PRM RF mode



  - in Multi NPRM RF mode

Savedate: Filename: page 59 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

The connection from ETS to the RF medium may be



- locally via an RF USB stick on the target domain



  - via an RF Media Coupler (can be assumed to be correctly configured)

Step 1: Query for the device with enabled Programming Mode.

This is necessary in the following cases.

    - The KNX Serial Number is not yet known to the MaC.

    - If the MaS is a KNX RF Slow device

    - If the MaS is a semi-directional device

   - via an RF Media Coupler : configure the Coupler for SBC
This includes the following Properties: PID_RF_SBC_CONTROL,
PID_BROADCAST_ROUTING_CONTROL, PID_RF_MULTI_BROADCAST_CONTROL.

Refer to 2.4.2.2.

   - Send A_SystemNetwork_Parameter_Read-PDU on both Ready and Fast to allow for all
initial states, i.e., Ready RF Mode, Multi PRM RF Mode and Multi Non PRM RF Mode.
An RF device configured as Ready shall answer to the Ready request on Ready, and a
RF Multi device configured in Multi PRM RF Mode or Multi Non PRM shall answer to the
Fast request on Fast so the MaC by this also knows the initial state of the target device
(see 2.2.3.2).

Step 2: Load the DoA and IA

   - via an RF Media Coupler : configure the coupler for SBC (if not yet done in step 1)

   - Send DomainAddressSerialNumber_Write-PDU on Ready or Fast, according the initial
state + verify (see 2.2.3.2)

   - Send IndividualAddressSerialNumber_Write-PDU on Ready or Fast according the initial
state + verify

   - via an RF Media Coupler: close the coupler for SBC

Step 3: Set PID_MULTI_TYPE and PID_RF_MULTI_RX_READY

  - Set PID_RF_MULTI_TYPE to Multi (if not yet in Multi RF mode)

This shall be done connectionless to avoid problems with TL connection Ready/Multi RF
mode affinity.

At the end of the Configuration Procedure, a final step shall be executed.

Final step:

   - Set PID_RF_MULTI_TYPE to the value as configured in the MaC.

   - Set PID_RF_MULTI_RX_ READY according to the links present.

   - Restart the MaS.

Savedate: Filename: page 60 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### 2.4.2 Media Coupler Configuration Procedures

###### 2.4.2.1 Network configuration of RF Multi slow extender
If the MaC is on the Primary Side (TP1) then the procedure can be executed without any specific
handling.

In case of MaC is on the RF side, all unicast communication has to be done connectionless. There
will be duplicated Telegrams coming from the fact that a RF Telegram is received from the Fast
part of the Media Coupler and then transmitted to the Slow Extender via TP1 Telegram, is also
received by the Slow Extender, because the Slow Extender is in Fast reception due to its enabled
Programming Mode.

The MaC shall configure the following in the Slow extender.

1) Individual Address
2) Domain Address
3) Individual Address of the RF Multi Fast Media Coupler

The MaC shall also configure the Individual Address of the Slow extender in the Fast Media
Coupler.

It is not foreseen that more than one Slow extender is supported.

###### 2.4.2.2 Media Coupler temporary setup to configure RF Multi devices (already in fast reception RF mode)
Here, the RF Multi end device is supposed to be in Fast reception scanning mode (Fast
bidirectional device, Fast semi-directional device in bidirectional mode, Slow device in bidirectional
mode). In case of Slow devices in Slow scanning mode, please refer to clause 2.4.2.3.

Prior to any broadcast/ system broadcast communication (for example the discovery of RF device
in programming mode) with any RF Multi Fast device, the following configuration has to be done in
the Media Coupler supporting Fast communication:

/* Set the RF Mode to “Fast” for any broadcast communication in the Fast Media Coupler */
DM_FunctionProperty_Write_R(OI = Router Object, PID = PID_RF_MULTI_BROADCAST_CONTROL, command = Fast

RF Mode)

Prior to any point-to-point communication with any RF Multi device (Fast device or Slow device
already in Fast reception mode), the following configuration has to be done:

/* Set the RF Mode to “Fast” for any unicast communication in the Fast Media Coupler */
DM_FunctionProperty_Write_R(OI = Router Object, PID = PID_RF_MULTI_UNICAST_CONTROL, command = “Write

communication mode with value Fast RF Mode”)

###### 2.4.2.3 Media Coupler temporary setup to configure with Slow devices (in slow reception mode)
If slow devices are present in the Line and are already addressed (and so are in Slow reception
scanning mode), they need to be configured for scanning Fast, by setting the RF Multi (Fast)
Media Coupler in the Slow RF Mode and sending a Frame to the slow device(s), by using Fast
Media Coupler and Slow extender.

Savedate: Filename: page 61 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

NOTE 10 If the Group Addresses used for the Slow communication are only used in the considered RF Domain,
then, there may not be a Slow Extender. This then has to be added.
The MaC may keep the bidirectional mode enabled in the (resp. each) slow device, by accessing
PID_RF_BIDIR_TIMEOUT over point-to-point (resp. system broadcast communication).

NOTE 11 The name of the Property PID_RF_BIDIR_TIMEOUT has to be interpreted as fast bidirectional; slow
devices in runtime are only scanning slow frequencies, and so are not considered as being in (fast) bidirectional mode,
even if they are able to receive Frames (only slow Frames).
**Point-to-point communication:**

IF there is a Slow device already programmed in the installation and there a Slow extender THEN
/* Set the RF Mode to “Slow” for any unicast communication in the Fast Media Coupler */
DM_FunctionProperty_Write_R(OI = Router Object, PID = PID_RF_MULTI_UNICAST_CONTROL, command =
“Write communication mode with value RF Multi Slow”)
FOR each slow device {
/* Wake up the slow device, by setting it in bidirectional mode */
DM_FunctionProperty_Write_R (OI = RF Medium Object, PID = PID_RF_BIDIR_TIMEOUT, value = “new
bidirectional mode time-out”)
}
ENDIF

/* Set the RF Mode to “Fast” for any unicast communication in the Fast Media Coupler */
DM_FunctionProperty_Write_R(OI = Router Object, PID = PID_RF_MULTI_UNICAST_CONTROL, command = “Write

communication mode with value Fast RF Mode”)

/* Download the Slow device */
…

**Broadcast communication**

IF there is Slow device, all already programmed in the installation (and so a Slow Media Coupler) THEN
/* Set the RF Multi Slow Mode for unicast communication in the Fast Media Coupler */
DM_FunctionProperty_Write_R(OI = Router Object, PID = PID_RF_MULTI_BROADCAST_CONTROL, command
= “Write communication mode with value Slow RF Mode”)
/* Set the Bidirectional Mode Time-out in all slow devices */
A_SystemNetworkParameter_Write(object_type = “RF Medium Object”, PID = PID_RF_BIDIR_TIMEOUT, value =
“new bidirectional mode time-out”)
ENDIF

/* Set the RF Mode to “Fast” for any unicast communication in the Fast Media Coupler */
DM_FunctionProperty_Write_R(OI = Router Object, PID = PID_RF_MULTI_UNICAST_CONTROL, command = “Write

communication mode with value Fast RF Mode”)

/* Download the Slow device */
…

Savedate: Filename: page 62 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

###### 2.4.2.4 Media Coupler configuration 
Download the Filter Table and other Resources for multicast communication in the RF Multi Fast
Media Coupler:


DMP_LCRouteTableStateWrite_RCo


/* Set the RF->TP1 Multicast table for any multicast communication in the Fast Media Coupler */
DMP_InterfaceObject_Write_R(OI = RF Medium Object, PID = PID_GRP_RF_TP_MULTICAST_TABLE, start index = ?,

element count = ?, data = RF Multi information)

/* Set the TP1->RF Multicast table for any multicast communication in the Fast Media Coupler */
DMP_InterfaceObject_Write_R(OI = RF Medium Object, PID = PID_GRP_TP_RF_MULTICAST_TABLE, start index = ?,

element count = ?, data = RF Multi information)

The MaC shall take care of modifying the RF Multi resources and ensure consistency by
synchronizing the update with the load control of the Filter table.

##### 2.4.3 Device Configuration Procedures

###### 2.4.3.1 RF Multi End device
The MaC shall take care of modifying the RF Multi resources and ensure consistency by
synchronizing the update with the load control of the Group Address table.

###### 2.4.3.2 Complete download
In addition to the download of the Group Address, Group Object - and Association Tables, the
Resources PID_GRP_TX_MULTI_INFO_TABLE and PID_GRP_RX_MULTI_INFO_TABLE need
to be downloaded for RF Multi device.

/* After setting the Group Address Table Load State Machine to ‘Unloaded’, also unload the Group Address TX/RX

Resources */
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_TX_MULTI_INFO_TABLE, start index = 0, element

count = 1, data = 00)
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_RX_MULTI_INFO_TABLE, start index = 0, element

count = 1, data = 00)
/* Before setting the Group Address Table Load State Machine to ‘Loaded’, Set the Group Address TX/RX Resources for

RF Multi in the end device */
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_TX_MULTI_INFO_TABLE, start index = 1, element

count = ?, data = ?)
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_RX_MULTI_INFO_TABLE, start index = 1, element

count = ?, data = ?)

2.4.3.2.1 Partial download – Group Addresses
In addition to the partial download of the Group Address -, Group Object- and Association tables,
the Resources PID_GRP_TX_MULTI_INFO_TABLE and PID_GRP_RX_MULTI_INFO_TABLE
need to be partially downloaded for RF Multi device.

/* After setting the Group Address Table Load State Machine to ‘Unloaded’, also unload the Group Address TX/RX

Resources */
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_TX_MULTI_INFO_TABLE, start index = 0, element

count = 1, data = 00)
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_RX_MULTI_INFO_TABLE, start index = 0, element

count = 1, data = 00)


Savedate: Filename: page 63 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

/* Before setting the Group Address Table Load State Machine to ‘Loaded’, Set the Group Address TX/RX Resources for

RF Multi in the end device */
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_TX_MULTI_INFO_TABLE, start index = 1, element

count = ?, data = ?)
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_RX_MULTI_INFO_TABLE, start index = 1, element

count = ?, data = ?)

2.4.3.2.2 Unload
In addition to unloading the Group Address Table, the Resources
PID_GRP_TX_MULTI_INFO_TABLE and PID_GRP_RX_MULTI_INFO_TABLE need to be re-set
for RF Multi device.

/* After setting the Group Address Table Load State Machine to ‘Unloaded’, also unload the Group Address TX/RX

Resources */
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_TX_MULTI_INFO_TABLE, start index = 0, element

count = 1, data = 00)
DMP_InterfaceObject_Write_R(OI = ??? Object, PID = PID_GRP_RX_MULTI_INFO_TABLE, start index = 0, element

count = 1, data = 00)


#### 2.5 Profile definition

**Feature**

1. Data Security M M M
2. Security Proxy ([8]) X M X

a If the RF Multi Slow Extender is physically the same device as a RF Multi Media
Coupler this of course means only that when configured as Slow Extender there
must not be a Security Proxy functionality.

Savedate: Filename: page 64 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Col1|Feature|Col3|RF Multi S-Mode device Profile|RF Multi Media Coupler|RF Multi Slow Extender|
|---|---|---|---|---|---|
|1.|Data Security||M|M|M|
|2.|Security Proxy ([8])||X|M|X|
|a If the RF Multi Slow Extender is physically the same device as a RF Multi Media<br>Coupler this of course means only that when configured as Slow Extender there<br>must not be a Security Proxy functionality.|a If the RF Multi Slow Extender is physically the same device as a RF Multi Media<br>Coupler this of course means only that when configured as Slow Extender there<br>must not be a Security Proxy functionality.|a If the RF Multi Slow Extender is physically the same device as a RF Multi Media<br>Coupler this of course means only that when configured as Slow Extender there<br>must not be a Security Proxy functionality.|a If the RF Multi Slow Extender is physically the same device as a RF Multi Media<br>Coupler this of course means only that when configured as Slow Extender there<br>must not be a Security Proxy functionality.|a If the RF Multi Slow Extender is physically the same device as a RF Multi Media<br>Coupler this of course means only that when configured as Slow Extender there<br>must not be a Security Proxy functionality.|a If the RF Multi Slow Extender is physically the same device as a RF Multi Media<br>Coupler this of course means only that when configured as Slow Extender there<br>must not be a Security Proxy functionality.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### 2.5.1 cEMI Server Object

**Property Identifier**

52 PID_COMM_MODE M
64 PID_COMM_MODES_SUPPORTED M
70 PID_RF_MULTI_SENDING_ACK M
72 PID_RF_MULTI_ADDINFO_SELECT M

##### 2.5.2 Additional Information

**Feature**

1. Additional Informationrmation type
02h: RF Medium M
08h: RF Multi information M
09h: Preamble and Postamble O
0Ah: RF Fast Ack information M
0Bh: RF Fast Ack short information M

a This optional cEMI Additional Information shall be used for debugging and manufacturer specific purposes.
The possible value range and the possibility to modify the preamble and postamble lengths are closely
linked to the Physical Layer implementation in the USB RF interface.
L_Data.ind, L_Busmon.ind: shall contain the effective value of the number of “01” chip sequences detected
in the RF message.
The possible value range depends on the capacity of the Physical Layer of the cEMI Server and the RF chip
used for the USB interface. If the preamble cannot be detected by the Physical Layer, the value 0000h shall
be set.

Savedate: Filename: page 65 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Col1|Property Identifier|RF Multi interface|
|---|---|---|
|52|PID_COMM_MODE|M|
|64|PID_COMM_MODES_SUPPORTED|M|
|70|PID_RF_MULTI_SENDING_ACK|M|
|72|PID_RF_MULTI_ADDINFO_SELECT|M|

|Col1|Feature|RF Multi interface|
|---|---|---|
|1.|Additional Informationrmation type||
||02h: RF Medium|M|
||08h: RF Multi information|M|
||09h: Preamble and Postamble|O|
||0Ah: RF Fast Ack information|M|
||0Bh: RF Fast Ack short information|M|
|a|This optional cEMI Additional Information shall be used for debugging and manufacturer specific purposes.<br>The possible value range and the possibility to modify the preamble and postamble lengths are closely<br>linked to the Physical Layer implementation in the USB RF interface.<br>L_Data.ind, L_Busmon.ind: shall contain the effective value of the number of “01” chip sequences detected<br>in the RF message.<br>The possible value range depends on the capacity of the Physical Layer of the cEMI Server and the RF chip<br>used for the USB interface. If the preamble cannot be detected by the Physical Layer, the value 0000h shall<br>be set.|This optional cEMI Additional Information shall be used for debugging and manufacturer specific purposes.<br>The possible value range and the possibility to modify the preamble and postamble lengths are closely<br>linked to the Physical Layer implementation in the USB RF interface.<br>L_Data.ind, L_Busmon.ind: shall contain the effective value of the number of “01” chip sequences detected<br>in the RF message.<br>The possible value range depends on the capacity of the Physical Layer of the cEMI Server and the RF chip<br>used for the USB interface. If the preamble cannot be detected by the Physical Layer, the value 0000h shall<br>be set.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### 2.5.3 RF Medium Object

**Property Identifier**

76 PID_GRP_TX_MULTI_INFO_TABLE M X X
77 PID_GRP_RX_MULTI_INFO_TABLE M X X
78 PID_RF_MULTI_MEDIA_COUPLER_TYPE X M M
81 PID_RF_SMART_RETRANSMITTER C[(1) ] X X
82 PID_GRP_TP_RF_MULTICAST_TABLE X M X
83 PID_GRP_RF_TP_MULTICAST_TABLE X M X
84 PID_RF_MULTI_FAST_SLOW_COMM X M M
85 PID_RF_MULTI_FAST_MEDIA_COULPLER_IA X X M
86 PID_RF_MULTI_SLOW_EXTENDER_IA X M X
88 PID_RF_MULTI_RX_READY M M X
89 PID_LAST_TRANSMISSION_MODE M M X
91 PID_CEMI_RF_MULTI_ACTIVATE For Cert. Test
(1) Optional in case of Retransmitter. If implemented, at least one entry shall be defined in the
Resource.

##### 2.5.4 Router Object

Property Identifier

79 PID_RF_MULTI_UNICAST_CONTROL M X
114 PID_RF_MULTI_BROADCAST_CONTROL M X

##### 2.5.5 Editorial Correct in Profile/Resource for a KNX/RF Multi USB Stick (cEMI Server)

 _The following has to be adjusted in Volume 6 “Profiles” clause “A 3.17 RF Medium Object”._

Replace RF READY device by RF_MULTI_DEVICE

Savedate: Filename: page 66 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Col1|Property Identifier|RF Multi S-Mode device Profile|RF Multi Media Coupler (Fast only of Fast/Slow)|Slow extender|
|---|---|---|---|---|
|76|PID_GRP_TX_MULTI_INFO_TABLE|M|X|X|
|77|PID_GRP_RX_MULTI_INFO_TABLE|M|X|X|
|78|PID_RF_MULTI_MEDIA_COUPLER_TYPE|X|M|M|
|81|PID_RF_SMART_RETRANSMITTER|C(1)|X|X|
|82|PID_GRP_TP_RF_MULTICAST_TABLE|X|M|X|
|83|PID_GRP_RF_TP_MULTICAST_TABLE|X|M|X|
|84|PID_RF_MULTI_FAST_SLOW_COMM|X|M|M|
|85|PID_RF_MULTI_FAST_MEDIA_COULPLER_IA|X|X|M|
|86|PID_RF_MULTI_SLOW_EXTENDER_IA|X|M|X|
|88|PID_RF_MULTI_RX_READY|M|M|X|
|89|PID_LAST_TRANSMISSION_MODE|M|M|X|
|91|PID_CEMI_RF_MULTI_ACTIVATE|For Cert. Test|For Cert. Test|For Cert. Test|
|(1)<br>Optional in case of Retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|(1)<br>Optional in case of Retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|(1)<br>Optional in case of Retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|(1)<br>Optional in case of Retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|(1)<br>Optional in case of Retransmitter. If implemented, at least one entry shall be defined in the<br>Resource.|

|Col1|Property Identifier|RF Multi Media Coupler (Fast only of Fast/Slow)|Slow extender|
|---|---|---|---|
|79|PID_RF_MULTI_UNICAST_CONTROL|M|X|
|114|PID_RF_MULTI_BROADCAST_CONTROL|M|X|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**cEMI Server**

**RF async**

**PID** **Property**

1 PID_OBJECT_TYPE M M
70 PID_TRANSMISSION_MODE X M
71 PID_RECEPTION_MODE X M
72 PID_TEST_SIGNAL X O
73 PID_FAST_ACK X O
74 PID_FAST_ACK_ACTIVATE X O

PID_TRANSMISSION_MODE and PID_RECEPTION_MODE are Mandatory (for test) for RF Multi
device Profile.

#### 2.6 Identifiers and discovery

 _This clause is not intended for integration in the KNX Specifications._

None.

Savedate: Filename: page 67 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Col1|Col2|cEMI Server<br>RF async|Col4|
|---|---|---|---|
|**PID**|**Property**|**RF Ready device**|**RF Multi device**|
|1|PID_OBJECT_TYPE|M|M|
|70|PID_TRANSMISSION_MODE|X|M|
|71|PID_RECEPTION_MODE|X|M|
|72|PID_TEST_SIGNAL|X|O|
|73|PID_FAST_ACK|X|O|
|74|PID_FAST_ACK_ACTIVATE|X|O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

### 3 Impact and dependencies

#### 3.1 System specification (“Handbook”) dependencies

##### 3.1.1 History List handling in KNX devices
In clause 6.1.7.1 of Chapter 3/2/5 “Communication Medium RF” add the new requirement on the
History List.

The following problem is observed.

   - An RF sender sends out a group Telegram.

   - A nearby retransmitter retransmits this Telegram.

   - The original RF sender receives back this retransmitted group Telegram (with only the
repetition counter in the LPCI decremented).

   - In the original RF sender, the Telegram will pass the Data Link Layer Destination Address
filter, because it is of multicast type.

   - In the original RF sender, the Telegram will pass the Data Link Layer LFN filter, because
sent Telegrams are not stored in the History List, i.e. the Telegram will be passed to the
higher layers.
To avoid the observed problem, the sent Multicast messages are added to the History List.

##### 3.1.2 PID_TRANSMISSION_MODE

 _In [3] clause 4.9.8.1_

The PID_TRANSMISSION_MODE shall control the transmission RF Channel of the RF Physical
Layer, with the possible value Fx or value Sx. And if a message is transmitted between the last
setting of the transmission frequency to Sx or Fx (setting the Property or using AddInfo) and
reading the Property, then the returned value shall not return value neither Fx nor Sx.

In case Fx value is set by the Management Client, on the next transmission the Property will be set
with F1 or F2 or F3. The next transmission will not be any more on Fx.

Replace

“If a message is transmitted between the last setting of the transmission frequency to Sx or Fx
(using writing the Property or AddInfo) and reading the Property, then the returned value shall
not return value neither Fx nor Sx.”

by

“The stack does not alter PID_TRANSMISSION_MODE. To get the last used sending
frequency use PID_LAST_TRANSMISSION_MODE”.

##### 3.1.3 PID_RF_MULTI_PHYSICAL_FEATURES

 _The following shall be added to the specification of PID_RF_MULTI_PHYSICAL_FEATURES in [3]._

There are no requirements concerning valid or invalid bit values in this Property.

EXAMPLE 09 It is possible that Scan Fx and Scan Sx are not set at the same time.

Savedate: Filename: page 68 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### 3.1.4 cEMI Additional Information field

- The AddInfo-type 8 is in the cEMI specs [9].

   - In chapter 4.1.4.3.5.3 Correct mismatch in description and coding

**Field** **Bit** **Description** **Coding**
Fast Call bits These bits shall be set in cEMI L_Data.req to indicate 0: set F1 as the current Fast Call
RF 7...4 the Fast Call RF Channel that shall be used by the RF channel
Channel cEMI sever to transmit the RF message. 1: set F2 as the current Fast Call

RF channel

        - L_Data.req:

2: set F3 as the current Fast Call

           - 15: the cEMI Server shall use the current

RF channel

Fast Call RF Channel, defined in the Property

3 to 14: Reserved for future use of

PID_RF_MULTI_CALL_CHANNEL.

the KNX system

            - 0/1/2: the cEMI Server sets the current Fast
Call RF Channel to F1/F2/F3.

15: use current Fast Call RF

        - L_Data.con: shall contain the actual value of the Channel

Fast Call RF Channel (except the “Current Fast Call
RF Channel”).

        - L_Data.ind: shall contain the actual value of the Fast

Call RF Channel (except the “Current Fast Call RF
Channel”).

Slow Call bits These bits shall be set in cEMI L_Data.req to indicate 0: set S1 as the current Slow Call
RF 3...0 the Slow Call RF Channel that shall be used by the RF channel
Channel cEMI sever to transmit the RF message. 1: set S2 as the current Slow Call

RF channel

        - L_Data.req:

2 to 14: Reserved for future use of

           - 15: the cEMI Server shall use the current

the KNX system

Slow Call RF Channel, defined in the Property
PID_RF_MULTI_CALL_CHANNEL.

15: use current Slow Call RF

           - 0/1: the cEMI Server sets the current Slow

Channel

Call RF Channel to S1/S2.

        - L_Data.con: shall contain the actual value of the

Slow Call RF Channel (except the “Current Slow Call
RF Channel”).

        - L_Data.ind: shall contain the actual value of the

Slow Call RF Channel (except the “Current Slow Call
RF Channel”).

- Table 1 in clause 2.2.1.1 Fx and Sx forbids the combination, so, this value should be removed
from chapter 4.1.4.3.5.5 Table 6:

   - Change value 9 from ‘Fx ans Sx (RF1.M)’ to ‘reserved’

   - Change value 18 form ‘Fx and Sx (RF2.M)’ to ‘reserved’

   - Change value 26 form ‘Fx and Sx (RF5.M)’ to ‘reserved’

##### 3.1.5 PID_RECEPTION_MODE

 _In [3] clause 4.9.9_

In case of write on this property is done when PID_RF_MULTI_TYPE.b0 is set to 0, the nr_of_elem
of A_PropertyValue_Response shall be zero and shall contains no data.

Savedate: Filename: page 69 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Field|Bit|Description|Coding|
|---|---|---|---|
|Fast Call<br>RF<br>Channel|bits<br>7...4|These bits shall be set in cEMI L_Data.req to indicate<br>the Fast Call RF Channel that shall be used by the<br>cEMI sever to transmit the RF message. <br>-  L_Data.req: <br>-  15: the cEMI Server shall use the current<br>Fast Call RF Channel, defined in the Property<br>PID_RF_MULTI_CALL_CHANNEL. <br>-  0/1/2: the cEMI Server sets the current Fast<br>Call RF Channel to F1/F2/F3. <br>-  L_Data.con: shall contain the actual value of the<br>Fast Call RF Channel (except the “Current Fast Call<br>RF Channel”). <br>-  L_Data.ind: shall contain the actual value of the Fast<br>Call RF Channel (except the “Current Fast Call RF<br>Channel”).|0: set F1 as the current Fast Call<br>RF channel<br>1: set F2 as the current Fast Call<br>RF channel<br>2: set F3 as the current Fast Call<br>RF channel<br>3 to 14: Reserved for future use of<br>the KNX system <br>15: use current Fast Call RF<br>Channel|
|Slow Call<br>RF<br>Channel|bits<br>3...0|These bits shall be set in cEMI L_Data.req to indicate<br>the Slow Call RF Channel that shall be used by the<br>cEMI sever to transmit the RF message. <br>-  L_Data.req: <br>-  15: the cEMI Server shall use the current<br>Slow Call RF Channel, defined in the Property<br>PID_RF_MULTI_CALL_CHANNEL. <br>-  0/1: the cEMI Server sets the current Slow<br>Call RF Channel to S1/S2. <br>-  L_Data.con: shall contain the actual value of the<br>Slow Call RF Channel (except the “Current Slow Call<br>RF Channel”). <br>-  L_Data.ind: shall contain the actual value of the<br>Slow Call RF Channel (except the “Current Slow Call<br>RFChannel”).|<br> <br>0: set S1 as the current Slow Call<br>RF channel<br>1: set S2 as the current Slow Call<br>RF channel<br>2 to 14: Reserved for future use of<br>the KNX system <br>15: use current Slow Call RF<br>Channel|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

#### 3.2 Configuration Interworking

 _This clause is not intended for integration in the KNX Specifications._

There are no indications on issues with Configuration Interworking.

#### 3.3 Runtime Interworking

 _This clause is not intended for integration in the KNX Specifications._

There are no indications on issues with Runtime Interworking.

#### 3.4 Registration and certification

 _This clause is not intended for integration in the KNX Specifications._

There are no indications on issues with Registration and Certification.

#### 3.5 Integration and common tool impact

 _This clause is not intended for integration in the KNX Specifications._

There are no indications on issues with the tool.

#### 3.6 Security

 _This clause is not intended for integration in the KNX Specifications._

There are no indications on issues with Security.

#### 3.7 Risks and compatibility issues

 _This clause is not intended for integration in the KNX Specifications._

There are no indications on issues with risks and compatibility.

Savedate: Filename: page 70 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

## Annex A
(informative)

## Use cases for multicast communication

#### A.1 Introduction
The following figure gives an overview of a representative use case of configuration of RF Multi
devices, between sensors and actuators, in Ready, Fast and Slow RF mode.

The figures show use cases of sending data using A_GroupValue_Write.

Device 1.1.4 receives only in Slow RF mode.

### A.2 Use case with A_GroupValue_Write, with Fast and Slow devices

Savedate: Filename: page 71 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

#### A.3 Use case with A_GroupValue_Write, with Ready, Fast and Slow devices

Savedate: Filename: page 72 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

## Annex B
(informative)

## Use cases for smart RF Retransmitter

#### B.1 Legend

Good RF quality Medium RF quality

RF device RF Retransmitter

#### B.2 Use case A : Retransmitter is between sensor and actuator

RF sensor A Retransmitter RF actuator B

**Figure 11 – Retransmitter use case A: one distant actuator/sensor**

In this use case A, following options could be interesting.

1) Group Address
2) Individual Address

#### B.3 Use case B : Retransmitter is between one sensor and two actuators

RF actuator C

Retransmitter

RF sensor A RF actuator B

**Figure 12 – Retransmitter use case B: several distant actuators**

Savedate: Filename: page 73 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


Medium RF quality


Good RF quality


Retransmitter


RF actuator B


RF sensor A


RF sensor A


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

In this use case B, following options could be interesting.

1) Group Address
2) Individual Address

#### B.4 Use case C : Retransmitter is between two sensors and one actuator

RF sensor C

Retransmitter

RF actuator A RF sensor B

**Figure 13 – Retransmitter use case C: several distant sensors**

In this use case C, following options could be interesting.

1) Group Address (if same Group Address used by RF sensor B and C)

#### B.5 Use case D : Retransmitter is between one sensor and two actuators (bad RF quality)

RF sensor C

Retransmitter

RF actuator A RF sensor B

**Figure 14 – Retransmitter use case D: everybody hears each other**

In this use case D, following options could be interesting.

1) Group Address + RSSI: in case the same Group Address is used by device B and C, and
link between device A and C has a changing quality.
2) Individual Address (for device B) (with RSSI?): in case the same Group Address is used
by device B and C, and link between device A and C is considered as enough quality.

Savedate: Filename: page 74 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


Retransmitter


RF actuator A


RF sensor B


RF sensor C


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

## Annex C
(informative)

## Fast and Slow Media Couplers

#### C.1 Option A – RF Fast and RF Slow in two different Lines 
The Slow and Fast Media Couplers are in two different Nines.

An end device may receive in Slow and send in Fast. Such device would then need two DoAs. A
single DoA is easier. It is not seen as a problem that the Fast Media Coupler and the Slow Media
Coupler may thus use the same DoA.

**Benefits**

   - Standard communication between Slow and Fast Media Couplers using
A_GroupValue_Write-service.

**Drawbacks**

   - Slow devices receive in Slow but send in Fast: they should appear in both Lines, which is
not possible. At least the algorithm inside the MaC has to be adapted.

   - The MaC user needs to know the differentiation between Fast and Slow, which is against
the principle of hiding RF Multi specific things.

Slow device

MC1 (Slow) Runtime slow

SD1

1.1.0 1.1.1

Fast device

MC2 (Fast)

FD1

1.2.0 1.2.1

**Figure 15 – Topology view (version A) of devices and RF Multi Media Couplers**

#### C.2 Option B – Fast Media Coupler and Slow interface in the same line
The Slow and Fast Media Couplers are in the same Line, with the same Domain Address.

The MaC user configures only the Fast Media Coupler, which occupies a single IA with Device
Address 0. This Fast Media Coupler would automatically detect the presence of a Slow Media
Coupler, which then occupies a second IA (like an Additional Tunnelling IA) and is controlled fully
by the Fast Media Coupler.

Savedate: Filename: page 75 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


MC2 (Fast)

1.2.0


MC1 (Slow)

1.1.0


Runtime slow


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**Benefits**

   - MaC user is not aware of the distinction between Fast and Slow devices, which is in line
with the principle of hiding technical details.

   - There could be an automatic discovery of the Slow device, and only the MaC sees the
Fast Media Coupler (concerning all Media Coupler configuration).

**Drawbacks**

   - The communication between Fast and Slow devices uses dedicated Frames (for example
encapsulating cEMI Frame in broadcast with A_NetworkParameter_Write or in point-topoint with A_PropertyValue_Write or A_FunctionProperty_Command) on TP1 but not
using the standard multicast services. Moreover, a Frame for a Slow device will appear
two times on the TP1 communication medium, once using A_GroupValue_Write, and
once using dedicated communication between Fast and Slow Media Coupler: so, there is
a redundancy in communication.

##### C.2.1 Option B0

Interface (Slow) runtime Slow device SD1

1.1.5 1.1.2

MC2 (Fast) Fast device

FD1

1.1.0 1.1.3

**Figure 16 – Topology view (version B0) of devices and RF Multi Media Couplers**

**Topology view**

1.0 TP1 Line

|____ 1.0.1 TP1 device

|

1.1 RF Line (RF Multi)

|____ 1.1.0 RF Multi Fast Media Coupler (Media Coupler 2)

|____ 1.1.1 Fast device (FD1)

|____ 1.1.2 Slow device (SD1)

|____ 1.1.5 RF Multi Slow interface (extender)

Savedate: Filename: page 76 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


Slow device SD1

1.1.2


Interface (Slow)

1.1.5


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### C.2.2 Option B1

The Slow interface is not hidden behind the Fast Media Coupler. ETS uses standard
communication with Slow interface.

Interface (Slow) runtime Slow device SD1

1.0.1 1.1.2

MC2 (Fast) Fast device FD1

1.1.3

1.1.0

**Figure 17 – Topology view (version B1) of devices and RF Multi Media Couplers**

**Topology view**

1.0 TP1 Line

|____ 1.0.1 RF Multi Slow interface (extender)

|

1.1 RF Line (RF Multi)

|____ 1.1.0 RF Multi Fast Media Coupler (Media Coupler 2)

|____ 1.1.1 Fast device (FD1)

|____ 1.1.2 Slow device (SD1)

The option B0 is seen as most interesting and is specified hereafter.

#### C.3 Multicast: communication use cases
**Introduction**

The mandatory use case is to support the A_GroupValue_Write, in both directions.

The following use case shall also be supported: visualisation tool on TP1 that needs to read the
info status Datapoint in a RF Multi device. In this case, the A_GroupValue_Read-service is used.

Savedate: Filename: page 77 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx


Fast device FD1

1.1.3


MC2 (Fast)

1.1.0


runtime


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

**Summary of all the multicast use cases**

What to do in tables (in case of link in Multi) Consequently behaviour
GA present on

(for the main use case with GrpValueWrite) of GrpValueRead sent from

Filter table TP1RF RFTP1
TP1 RF TP1 RF

(ready) (multi) (multi)

No No Do not add Do not add Do not add Not passed to RF Not passed to TP1

No Yes Do not add Do not add Do not add Not passed to RF Not passed to TP1

Yes No Do not add Do not add Do not add Not passed to RF Not passed to TP1

Yes Yes See hereunder

Passed to RF in Multi Passed to TP1, but
Tx Rx Add an entry Add an entry Do not add
(possibly with Fast Ack) not acked

Passed to TP1,
Rx Tx Add an entry Do not add Add an entry Passed to RF in Ready
possibly acked

Passed to RF in Multi Passed to TP1,
Tx Tx Add an entry Add an entry Add an entry
(possibly with Fast Ack) possibly acked

Passed to RF in Multi Passed to TP1,
Rx Rx Add an entry Add an entry Add an entry
(possibly with Fast Ack) possibly acked

NOTE 12 If a Group Object is defined as Tx and Rx on TP1 (or RF), then several lines of this table might be
supported.
**Pseudo code of the algorithm to be used in the Media Coupler**

TP1 to RF

**IF Group Address is present in Filter Table THEN**
**IF the Group Address is present in GRP_TP1_RF_MULTICAST_TABLE THEN**
Send the Frame according to the characteristics from this table entry

(including RF Mode and Fast Acks)
**ELSE**
Send the Frame in RF Ready

**ENDIF**
**ELSE**
Do not route the Frame to RF
ENDIF

RF to TP1

**IF Group Address is present in Filter Table THEN**
**IF the Group Address is present in GRP_RF_TP1_MULTICAST_TABLE THEN**
If Fast Ack is needed, ack the Frame in RF
**ENDIF**
Route the Frame to TP1

**ELSE**
Do not route the Frame to TP1
ENDIF

Conclusion: no mechanism is needed for the specific use case of A_GroupValue_Read.

Savedate: Filename: page 78 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|GA present on|Col2|What to do in tables (in case of link in Multi)<br>(for the main use case with GrpValueWrite)|Col4|Col5|Consequently behaviour<br>of GrpValueRead sent from|Col7|
|---|---|---|---|---|---|---|
|TP1|RF|Filter table <br> (ready)|TP1RF <br>(multi)|RFTP1<br>(multi)|TP1|RF|
|No|No|Do not add|Do not add|Do not add|Not passed to RF|Not passed to TP1|
|No|Yes|Do not add|Do not add|Do not add|Not passed to RF|Not passed to TP1|
|Yes|No|Do not add|Do not add|Do not add|Not passed to RF|Not passed to TP1|
|Yes|Yes|See hereunder|See hereunder|See hereunder|See hereunder|See hereunder|
|Tx|Rx|Add an entry|Add an entry|Do not add|Passed to RF in Multi<br>(possibly with Fast Ack)|Passed to TP1, but<br>not acked|
|Rx|Tx|Add an entry|Do not add|Add an entry|Passed to RF in Ready|Passed to TP1,<br>possibly acked|
|Tx|Tx|Add an entry|Add an entry|Add an entry|Passed to RF in Multi<br>(possibly with Fast Ack)|Passed to TP1,<br>possibly acked|
|Rx|Rx|Add an entry|Add an entry|Add an entry|Passed to RF in Multi<br>(possibly with Fast Ack)|Passed to TP1,<br>possibly acked|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### C.3.1 Option A

 C.3.1.1 Introduction

In the following figures, the GA GA2 is linked to the info status Datapoint in a RF Multi Slow
actuator device. Fast and slow interfaces show their configured Resources for TP1 to RF and RF
to TP1 communication.

Frame exchange is also shown with lines on the figures.

##### C.3.1.2 Case A1: two autonomous separated Media Coupler and one RF actuator.

Two main interactions:

   - A_GroupValue_Read-PDU is sent from TP1 on GA2, then to the slow device that
responds on Fast.

   - A_GroupValue_Write-PDU is sent from slow device on RF.

TP1 Slow Fast

MC1 (Slow)

GroupValueRead/Write/Response TP1 to RF

GroupValueRead / Write / Response

GA2

Slow device

SD1

OnOff InfoOnOff – GA2

MC2 (Fast)

Rx : Slow

RF to TP1 Tx : Fast

GA2

GroupValueWrite / Response

GroupValueWrite / Response

**Figure 18 – Two Media Couplers and one actuator**

**Drawback**

   - Possible echo of RF Frame

    - A_GroupValue_Write/-_Response-PDU (GA2) in Fast is sent on TP1 by Media
Coupler 2, and again on RF in Slow by Slow interface (Media Coupler 1).

Savedate: Filename: page 79 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Fast|Col2|
|---|---|
|||
|||

|Col1|Slow<br>SD1|device|Col4|
|---|---|---|---|
|OnOf|f|InfoOnOf|f – GA2|
|OnOf|Rx : Slow|Tx : Fast|Tx : Fast|

|Fast TP1|Col2|Col3|Col4|Fast|
|---|---|---|---|---|
|MC2 (Fast)<br>RF to TP1 <br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br> GA2<br> GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2|MC2 (Fast)<br>RF to TP1 <br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br> GA2<br> GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2|MC2 (Fast)<br>RF to TP1 <br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br> GA2<br> GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2|MC1 (Slow)<br>TP1 to RF<br> GA2|GroupValueRead / Write / Response<br>Slow<br>Fast|
|MC2 (Fast)<br>RF to TP1 <br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br> GA2<br> GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2|MC2 (Fast)<br>RF to TP1 <br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br> GA2<br> GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2|MC2 (Fast)<br>RF to TP1 <br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br> GA2<br> GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2|MC2 (Fast)<br>RF to TP1 <br> GA2|MC2 (Fast)<br>RF to TP1 <br> GA2|
|MC2 (Fast)<br>RF to TP1 <br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br> GA2<br> GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2|MC2 (Fast)<br>RF to TP1 <br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br> GA2<br> GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2||||
|MC2 (Fast)<br>RF to TP1 <br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br> GA2<br> GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2||||GroupValueWrite / Response|


MC2 (Fast)

RF to TP1

GA2


device

InfoOnOff – GA2

Tx : Fast


GroupValueRead / Write / Response


GroupValueRead/Write/Response


GroupValueWrite / Response


Slow


TP1


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### C.3.1.3 Case A2: two autonomous separated Media Couplers, an RF actuator and an RF sensor

In addition to case A1, a RF sensor may send an A_GroupValue_Read-PDU on GA2, on Slow (to
get info status from slow device SD1, and from TP1), and on Fast (to get info status from TP1 or
fast devices). GA2 must then be present in the Filter Table in Media Coupler 1 and Media
Coupler 2 (RF to TP1 direction).

TP1 Slow Fast device

Fast

MC1 (Slow) FD1

InfoOnOff – GA2 OnOff

TP1 to RF

GroupValueRead/Write/Response Tx : Fast

GA2 +Slow

GroupValueRead / Write / Rx : Fast
Response

GroupValueRead RF to TP1

GA2 GroupValueWrite / Response

TP1
device
OnOf

GroupValueRead

InfoOnOff – GA2

Slow device

SD1

OnOff InfoOnOff – GA2

MC2 (Fast)

Rx : Slow

RF to TP1 Tx : Fast

GA2

GroupValueWrite / Response

GroupValueWrite / Response

**Figure 19 – Two Media Couplers, one actuator and one sensor**

Savedate: Filename: page 80 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|Col1|MC1 (Slow)<br>TP1 to RF<br>GA2<br>RF to TP1<br>GA2|
|---|---|
|||
|||
|||

|OnOf|Col2|
|---|---|

|InfoOnO|ff – GA2|
|---|---|

|OnOff|Col2|
|---|---|

|Slow<br>SD1<br>Rx : Slow|dev|ice|Col4|
|---|---|---|---|
|Slow<br>SD1<br>Rx : Slow <br>|InfoOnOf|InfoOnOf|f – GA2|
|Slow<br>SD1<br>Rx : Slow <br>|Tx : Fast|Tx : Fast|Tx : Fast|

|TP1 Slow Fast device<br>Fast<br>MC1 (Slow) FD1<br>InfoOnOff – GA2 OnOff<br>TP1 to RF<br>GroupValueRead/Write/Response Tx : Fast<br>GA2 +Slow<br>GroupValueRead / Write / Rx : Fast<br>Response<br>RF to TP1<br>GroupValueRead<br>GA2 GroupValueWrite<br>/ Response<br>TP1<br>device<br>OnOf<br>GroupValueRead<br>Response<br>InfoOnOff – GA2 Possible of GroupValue / Response on GroupValueRead<br>Slow device echo Write RF<br>/<br>SD1 GroupValueWrite<br>OnOff InfoOnOff – GA2 GroupValueRead<br>MC2 (Fast)<br>Rx : Slow<br>RF to TP1 Tx : Fast<br>GA2<br>GroupValueWrite / Response|Col2|Col3|Col4|Col5|Fast<br>FD1|device|Col8|
|---|---|---|---|---|---|---|---|
|MC2 (Fast)<br>RF to TP1<br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br>RF to TP1<br> GA2<br> GA2<br>GroupValueRead / Write /<br>Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2<br>Fast<br>FD1<br>Rx : Fast <br>InfoOnOff – GA2<br>device<br>Tx : Fast<br>+Slow<br>OnOff<br>GroupValueWrite<br>/ Response<br>GroupValueRead<br>TP1 <br>device <br>OnOf<br>InfoOnOff – GA2<br>GA2<br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|InfoOnO|InfoOnO|InfoOnO|InfoOnO|InfoOnO|InfoOnO|InfoOnO|
|MC2 (Fast)<br>RF to TP1<br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br>RF to TP1<br> GA2<br> GA2<br>GroupValueRead / Write /<br>Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2<br>Fast<br>FD1<br>Rx : Fast <br>InfoOnOff – GA2<br>device<br>Tx : Fast<br>+Slow<br>OnOff<br>GroupValueWrite<br>/ Response<br>GroupValueRead<br>TP1 <br>device <br>OnOf<br>InfoOnOff – GA2<br>GA2<br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|InfoOnO|InfoOnO|InfoOnO|InfoOnO|<br>ff – GA2|OnOff||
|MC2 (Fast)<br>RF to TP1<br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br>RF to TP1<br> GA2<br> GA2<br>GroupValueRead / Write /<br>Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2<br>Fast<br>FD1<br>Rx : Fast <br>InfoOnOff – GA2<br>device<br>Tx : Fast<br>+Slow<br>OnOff<br>GroupValueWrite<br>/ Response<br>GroupValueRead<br>TP1 <br>device <br>OnOf<br>InfoOnOff – GA2<br>GA2<br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|InfoOnO|InfoOnO|InfoOnO||Rx : Fast|Tx : Fast<br>+Slow|Tx : Fast<br>+Slow|
|MC2 (Fast)<br>RF to TP1<br>Slow<br>SD1<br>Rx : Slow <br>OnOff<br>MC1 (Slow)<br>TP1 to RF<br>RF to TP1<br> GA2<br> GA2<br>GroupValueRead / Write /<br>Response<br>GroupValueWrite / Response<br>GroupValueWrite / Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>TP1 <br>Possible<br>echo of<br>GroupValue<br>Write /<br>Response on<br>RF<br>device<br>Tx : Fast<br>InfoOnOff – GA2<br>Fast<br>FD1<br>Rx : Fast <br>InfoOnOff – GA2<br>device<br>Tx : Fast<br>+Slow<br>OnOff<br>GroupValueWrite<br>/ Response<br>GroupValueRead<br>TP1 <br>device <br>OnOf<br>InfoOnOff – GA2<br>GA2<br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|GroupValueRead / Write /<br>Response|Read / Write /|Read / Write /|Rx : Fast|Rx : Fast|Rx : Fast|Rx : Fast|

|Col1|Col2|Col3|
|---|---|---|
||||
||||


MC2 (Fast)

RF to TP1

GA2


device

OnOff

Tx : Fast
+Slow


Slow

SD1

Rx : Slow


GroupValueRead / Write /
Response


InfoOnOff – GA2


GroupValueWrite / Response


GroupValueRead/Write/Response


OnOff


GroupValueWrite / Response


Slow


TP1


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### C.3.2 Option B

 C.3.2.1 Case B1: one master (Fast) Media Coupler, and one slow slave interface, a RF actuator

Two main interactions:

   - A_GroupValue_Read-PDU is sent from TP1 on GA2, then to the slow device that
responds on Fast.

   - A_GroupValue_Write-PDU is sent from slow device on RF.

TP1 Slow Fast

Slow interface

(no coupler)

GroupValueRead / Write / Response

Slow device

DedicatedFrame SD1

OnOff InfoOnOff – GA2

MC2 (Fast)

Rx : Slow

TP1 to RF Tx : Fast

GroupValueRead/Write/Response

GA2

GA2

GroupValueWrite / Response

GroupValueWrite / Response

**Figure 20 – One Media Coupler, one slow interface and one actuator**

**Benefit**

   - no echo of RF Frame

    - A_GroupValue_Write/Response-PDU (GA2) in Fast are sent on TP1 by Media
Coupler 2, and not again on RF in Slow by Slow interface, because Media Coupler 2
is able to differentiate between Multicast Frame coming from RF (to be sent to TP1,
and not to slow interface)) and from TP1 (to be sent on RF, either in Fast directly or in
Slow via dedicated TP1 Frame to the slow interface)

   - One central entity that controls all RF to TP1 Frames

   - Future proof: in case one device in the future may send and receive at the same time slow
and fast (with 100 % guarantee of reception), this architecture is still valid.

Savedate: Filename: page 81 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|OnOff|Col2|
|---|---|

|Slow<br>SD1<br>Rx : Slow|device|Col3|
|---|---|---|
|Slow<br>SD1<br>Rx : Slow<br>|InfoOnOf|f – GA2|
|Slow<br>SD1<br>Rx : Slow<br>|Tx : Fast|Tx : Fast|

|Fast TP1|Col2|Fast|
|---|---|---|
|device<br>Tx : Fast<br>MC2 (Fast)<br>TP1 to RF<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br>GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>roupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueWrite / Response<br>TP1 <br>No<br>echo<br>DedicatedFrame<br>GA2|Slow interface<br>(no coupler)|GroupValueRead / Write / Response<br>Slow<br>Fast|
|device<br>Tx : Fast<br>MC2 (Fast)<br>TP1 to RF<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br>GA2<br>GroupValueRead / Write / Response<br>GroupValueWrite / Response<br>roupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueWrite / Response<br>TP1 <br>No<br>echo<br>DedicatedFrame<br>GA2|MC2 (Fast)<br>TP1 to RF<br>GA2<br>GA2|MC2 (Fast)<br>TP1 to RF<br>GA2<br>GA2|
||||
|GroupValueWrite / Response|GroupValueWrite / Response|GroupValueWrite / Response|


Slow interface

(no coupler)


Slow

SD1

Rx : Slow


InfoOnOff – GA2


GroupValueWrite / Response


OnOff


GroupValueWrite / Response


DedicatedFrame


Fast


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN186** **RF Multi S-Mode device Profiles**

##### C.3.2.2 Case B2: one master (Fast) Media Coupler, and one slow slave interface, a RF actuator and one RF sensor

In addition to case B1, a RF sensor may send an AgroupValue_Read-PDU on GA2, on Slow (to
get info status from slow device SD1, and from TP1), and on Fast (to get info status from TP1 or
fast devices). GA2 must then be present in the Filter Table in Media Coupler 2 (RF to TP1
direction).

Fast device

TP

FD1

Fast InfoOnOff – GA2 OnOff

Slow interface Tx : Slow

Slow (no coupler) + Fast

Rx :Fast

GroupValueRead

TP device GroupValueRead / Write

/ Response

InfoOnOff – GA2

GroupValueRead

Slow device

Dedicated Frames SD1

OnOff InfoOnOff – GA2

MC2 (Fast)

TP to RF Rx : Slow

Tx : Fast

GroupValueRead/Write/Response GA2

RF to TP

GA2

GroupValueRead / Write / Response

GroupValueWrite / Response

**Figure 21 – One Media Coupler, one slow interface, one actuator and one sensor**

Savedate: Filename: page 82 of 82
2021 08 18 AN186 v04 RF Multi S-Mode device Profiles AS docx

|OnOff|Col2|
|---|---|

|InfoOnO|ff – GA2|
|---|---|

|OnOff|Col2|
|---|---|

|Slow<br>SD1<br>Rx : Slow|device|Col3|
|---|---|---|
|Slow<br>SD1<br>Rx : Slow<br>|InfoOnOf|f – GA2|
|Slow<br>SD1<br>Rx : Slow<br>|Tx : Fast|Tx : Fast|

|direction).|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|Fast<br>FD1|Fast<br>FD1|device||
|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|InfoOnO|InfoOnO|<br>ff – GA2|<br>ff – GA2|OnOff||
|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|
|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|Slow interface<br>(no coupler)|||:Fast|Tx : Slow<br>+ Fast|Tx : Slow<br>+ Fast|
|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|Slow interface<br>(no coupler)|GroupValueRead|||Rx|Rx|Rx|Rx|Rx|
|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead||||||||||
|device<br>Tx : Fast<br>MC2 (Fast)<br>TP to RF<br>RF to TP<br>Slow<br>SD1<br>Rx : Slow<br>OnOff<br>InfoOnOff – GA2<br>Slow interface<br>(no coupler)<br> GA2<br>GroupValueRead / Write<br>/ Response<br>GroupValueRead/Write/Response<br>Slow<br>Fast<br>GroupValueRead / Write / Response<br>TP <br>No<br>echo<br>Dedicated Frames<br> GA2<br>Fast<br>FD1 <br>Rx :Fast <br>InfoOnOff – GA2 <br>device <br>Tx : Slow<br>+ Fast <br>OnOff <br>TP device <br>OnOff <br>InfoOnOff – GA2 <br>GroupValueRead<br>GroupValueRead<br>GroupValueRead|||||||GroupValueRead|GroupValueRead|GroupValueRead|

|Col1|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
||MC2 (F<br>TP to RF<br> GA2|MC2 (F<br>TP to RF<br> GA2|F|F|
|ead/Write/Response|ead/Write/Response|ead/Write/Response|ead/Write/Response|ead/Write/Response|
|ead/Write/Response|ead/Write/Response|GA2|GA2||
||||||
||GA2|GA2|GA2|GA2|


Slow interface

(no coupler)


device

InfoOnOff – GA2

Tx : Fast


Fast

FD1

Rx :Fast


OnOff


InfoOnOff – GA2


InfoOnOff – GA2


GroupValueRead/Write/Response


OnOff


GroupValueRead


Fast


-----

