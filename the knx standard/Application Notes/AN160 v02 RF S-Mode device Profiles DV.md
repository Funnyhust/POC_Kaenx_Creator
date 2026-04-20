KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

# Application Note 160/13 v02

**Title:** **RF S-Mode Device Profiles**

**Status:** **Date:**

Draft for Voting 2014.11.07

**Transitional period:** Immediate effect after Final Voting.

**Subject:** Specification of Resources and Device Profiles for end devices, interfaces
and Media Couplers of KNX RF devices for S-Mode configuration.
**Documents** **Modified**

[01] Chapter 3/1/2 “Glossary”

[02] Chapter 3/2/5 “Radio Frequency” v1.06.01 of 2012.04.25

[03] Chapter 3/5/1 “Resources”

[04] Chapter 3/5/3 “Configuration Procedures”

[05] Chapter 3/7/3 “Standard Identifier Tables”

[06] Volume 6 “Profiles”
**Referred**

[07] Chapter 3/3/1 “Physical Layer General”

[08] Chapter 3/3/2 “Data Link Layer General”

[09] Chapter 3/3/3 “Network Layer”

[10] Chapter 3/3/4 “Transport Layer”

[11] Chapter 3/3/7 “Application Layer” v1.3.00 AS of 2010.10.22

[12] Chapter 3/4/1 “Application Interface Layer””

[13] Chapter 3/5/2 “Management Procedures”

[14] Chapter 3/6/3 “External Message Interface”

[15] Chapter 8/2/5 “RF Physical and Data Link Layer Tests”

[16] Chapter 8/3/3 “Network Layer Tests”

[17] Chapter 8/3/4 “Transport Layer Tests”

[18] Chapter 8/3/7 “Application (Interface) Layer Testing – Network
Management Server/Client Testing”

[19] Part 8/7 “Interworking and Functionality Tests”

[20] AN134 “Flexible E-Mode Channels”

[21] AN151 “cEMI AddInfo for KNX RF Multi and new Properties”

[22] AN158 “KNX Data Security”

[23] KSG475-01 “Using Domain Address for Group Telegrams on RF”

[24] KSG501 “Coupler Model 2.0”

[25] KSG502 “System aspects of the RF integration in ETS”

[26] KSG528 “System 7 Resources”

[27] AN168 “KNX RF USB Interface Type 1”

**Document updates**

**Version** **Date** **Modifications**

AN160 v01 2013.05.07 - Creation of the Draft Proposal.
KSG495-25 2013.06.10 - Integration of first proposal of resolution of comments
from Release for Voting.

Savedate: Filename: page 1 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Version|Date|Modifications|
|---|---|---|
|AN160 v01|2013.05.07|• <br>Creation of the Draft Proposal.|
|KSG495-25|2013.06.10|• <br>Integration of first proposal of resolution of comments<br>from Release for Voting.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Version** **Date** **Modifications**

KSG495-26 2013.06.26 - Inclusion of KSG resolution of comments from RfV.

                          - PID_RF_BIDIR_TIMEOUT accessible via
A_SystemNetworkParameter_Write.

                          - _Link Budget renamed to Link Quality._
KSG495-27 2013.07.08 - Clarification of range and error handling of
PID_RF_BIDIR_TIMEOUT in 2.4.2.8.
KSG495-28 2014.02.17 - Integration of Route Last flag: 2.2.1.3

              - Provision for use of broadcast for system broadcast
services: 2.3

              - Network Management hop count solution introduced in
Configuration Procedures: 2.6.1.1

              - Profiles updated to foresee communication mode of
system broadcast: 2.8.1.2.2.11 and 2.8.2.2.2.11.
KSG495-29 2014.02.27 - Update according the conclusions of the KSG online
meeting of 2014.02.21.

                        - Accepted all preceding changes.

                        - Review of the specification of the route last flag.

                        - §2.6.1.1.2 “Preparing the field” added.

                        - Corrected access to PID_RF_SBC_CONTROL in
2.6.1.1 to be a Function Property.

                        - Indications on PID_RF_SBC_CONTROL in
“Integration and common tool impact”.

                        - Editorial corrections.
KSG495-30 2014.05.13 - Accepted all preceding document changes.

              - IA in the History List.

                        - For the KNX RF Retransmitter: §2.2.1.4.3.

                        - For end devices: 2.2.1.3.2.2.1.

                        - In the Profiles (2705h, 27B0h and DoA based RF
Retransmitter).
KSG495-31 2014.07.08 - Inclusion of result of online discussion “[KSG00164-00-09]
Interframe Time for semidirectional”.
2014.10.15       - Integration of PID_RF_TYPES_SUPPORTED according
the conclusion of the KSG meeting of 2014.09.24-25.
2014.11.05       - Final review.
AN160 v02 2014.11.07 - Preparation of the Draft for Voting.

**Contents**

###### 1 Purpose, motivation and scope (informative) .................................................. 5
 1.1 Introduction ............................................................................................... 5 1.2 Overview................................................................................................... 5 1.3 Motivation ................................................................................................. 5
 1.3.1 Why shall the support of KNX RF in ETS be based on a new KNX RF Device Profile and why is not any of the existing Device Profiles for KNX RF used? ................................................................. 5 1.3.2 Why are unidirectional RF devices not supported? ............................ 5 1.4 Scope ....................................................................................................... 6

Savedate: Filename: page 2 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Version|Date|Modifications|
|---|---|---|
|KSG495-26|2013.06.26|• <br>Inclusion of KSG resolution of comments from RfV.<br>- <br>PID_RF_BIDIR_TIMEOUT accessible via<br>A_SystemNetworkParameter_Write.<br>- <br>_Link Budget_ renamed to_LinkQuality_.|
|KSG495-27|2013.07.08|• <br>Clarification of range and error handling of<br>PID_RF_BIDIR_TIMEOUT in 2.4.2.8.|
|KSG495-28|2014.02.17|• <br>Integration of Route Last flag: 2.2.1.3<br>• <br>Provision for use of broadcast for system broadcast<br>services: 2.3<br>• <br>Network Management hop count solution introduced in<br>Configuration Procedures: 2.6.1.1<br>• <br>Profiles updated to foresee communication mode of<br>system broadcast: 2.8.1.2.2.11and 2.8.2.2.2.11.|
|KSG495-29|2014.02.27|• <br>Update according the conclusions of the KSG online<br>meeting of 2014.02.21.<br>- <br>Accepted all preceding changes.<br>- <br>Review of the specification of the route last flag.<br>- <br>§2.6.1.1.2 “Preparing the field” added.<br>- <br>Corrected access to PID_RF_SBC_CONTROL in<br>2.6.1.1 to be a Function Property.<br>- <br>Indications on PID_RF_SBC_CONTROL in<br>“Integration and common tool impact”.<br>- <br>Editorial corrections.|
|KSG495-30|2014.05.13|• <br>Accepted all preceding document changes.<br>• <br>IA in the History List.<br>- <br>For the KNX RF Retransmitter: §2.2.1.4.3.<br>- <br>For end devices: 2.2.1.3.2.2.1.<br>- <br>In the Profiles (2705h, 27B0h and DoA based RF<br>Retransmitter).|
|KSG495-31|2014.07.08|• <br>Inclusion of result of online discussion “[KSG00164-00-09]<br>Interframe Time for semidirectional”.|
||2014.10.15|• <br>Integration of PID_RF_TYPES_SUPPORTED according<br>the conclusion of the KSG meeting of 2014.09.24-25.|
||2014.11.05|• <br>Final review.|
|AN160 v02|2014.11.07|• <br>Preparation of the Draft for Voting.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

###### 1.4.1 KNX RF systems ................................................................................ 6 1.4.2 KNX TP1/RF Media Coupler .............................................................. 6 1.4.3 E-Mode Profiles and combinations with KNX RF S-Mode Profiles ..... 6 1.4.4 Existing KNX RF devices ................................................................... 6 1.4.5 Other topics and documents related to KNX RF S-Mode devices ...... 6 1.5 Main principle ........................................................................................... 7
 1.5.1 No longer supported ........................................................................... 7

 2 Specification (normative) ................................................................................... 7
 2.1 Terms and definitions ............................................................................... 7 2.2 Stack and communication......................................................................... 8
 2.2.1 Communication Medium RF ............................................................... 8 2.3 Application Layer .................................................................................... 15 2.4 Resource definition or used Resources .................................................. 16
 2.4.1 DoA Realisation Type 2 – DoA on 6 octets ...................................... 16 2.4.2 RF Medium Object (Object Type 19) ................................................ 16 2.4.3 cEMI Server Object .......................................................................... 26 2.4.4 Programming Mode .......................................................................... 26 2.5 Management Procedures ....................................................................... 27
 2.5.1 Introduction ...................................................................................... 27 2.5.2 NM_SubnetworkDevices_Scan2 ...................................................... 27 2.5.3 NMP_LinkQuality_Measure .............................................................. 29 2.6 Configuration Procedures ....................................................................... 31
 2.6.1 Network Configuration Procedures................................................... 31 2.6.2 Device Configuration Procedures ..................................................... 35 2.7 External Message Interface .................................................................... 37 2.8 Profile definition ...................................................................................... 38
 2.8.1 Profile: mask 2705h.......................................................................... 38 2.8.2 Profile: mask 27B0h ......................................................................... 64 2.8.3 Profile: Domain Address based RF Retransmitter ............................ 91 2.8.4 KNX RF USB Interface 1 .................................................................. 93 2.8.5 Not more supported.......................................................................... 93 2.9 RF Multi device handling by ETS ............................................................ 93
 2.9.1 Switching a KNX RF Multi device to RF Ready mode ...................... 93 2.9.2 Switching a KNX RF Multi device from RF Ready Mode back to RF Multi mode .................................................................................. 93

 3 Impact and dependencies ................................................................................ 94
 3.1 System specification (“Handbook”) dependencies .................................. 94 3.2 On Push-Button and link services ........................................................... 94
 3.2.1 Introduction ...................................................................................... 94 3.2.2 E-Mode Channel Object – PID_OBJECTLINK (PID = 63) ................ 94 3.3 Configuration interworking ...................................................................... 97 3.4 Run-time Interworking ............................................................................ 97 3.5 Registration and certification .................................................................. 97
 3.5.1 Existing KNX RF device Profiles ...................................................... 97 3.5.2 Test specifications ............................................................................ 97 3.6 Integration and common tool impact ....................................................... 98
 3.6.1 Bidirectional mode ............................................................................ 98

Savedate: Filename: page 3 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

###### 3.6.2 Programming Mode .......................................................................... 99 3.6.3 Domain Address management ......................................................... 99 3.6.4 Interfaces ....................................................................................... 101 3.6.5 Domain Address based KNX RF Retransmitter ............................. 102 3.6.6 Configuration Procedures for mask 27B0h ..................................... 102 3.6.7 Common requirements for all KNX RF end device Profiles and – interfaces ........................................................................................ 102 3.6.8 ETS Database ................................................................................ 102 3.6.9 Integration of RF Media Coupler .................................................... 103 3.6.10 Integration of RF interface .............................................................. 103 3.6.11 Integration of RF devices ............................................................... 103 3.6.12 End device or TP1/RF Media Coupler with Retransmitter function 103 3.6.13 Diagnostics ..................................................................................... 104 3.7 Risks and compatibility issues .............................................................. 104 A.1 Preventing loops of system broadcast messages ................................. 105

Savedate: Filename: page 4 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

### 1 Purpose, motivation and scope (informative)

#### 1.1 Introduction
This document specifies KNX device Profiles for S-Mode Configuration of RF devices.

This proposal defines a solution for an easy integration of KNX RF in ETS. It keeps the
threshold low for existing ETS user by not introducing new installer procedures.

#### 1.2 Overview
The KNX RF Communication Medium defines four systems, as specified in Table 1 “Guide for
compliance” in [02].

**Table 1 – KNX RF Systems (informative copy)**

**System** **Physical Layer** **Data Link Layer**

KNX RF Ready clause 5.1 in [02] clause 6.1 and clause 6.2 in [02]

KNX RF Multi clause 5.2 in [02] clause 6.1 and clause 6.6 in [02]

KNX RF BiBat clause 5.1 in [02] clause 6.1, clause 6.2 and clause 6.3 in [02]

KNX RF BiBat 2 clause 5.3 in [02] clause 6.1, clause 6.4 and clause 6.5 in [02]

The configuration of RF devices is until today (March 2013) done by one of the following.

   - E-Mode Push Button Configuration (PB SEC)
   - E-Mode Controller Mode
   - S-Mode configuration via plug-ins in the ETS software based on Ctrl-Mode
Management Procedures.

All these 3 Configuration Modes base on E-Mode Channels and base on Link services
(see clause 3.4.4 in [11]).

#### 1.3 Motivation

##### 1.3.1 Why shall the support of KNX RF in ETS be based on a new KNX RF Device Profile and why is not any of the existing Device Profiles for KNX RF used?
The support of the existing KNX RF devices and the E-Mode Management – and Configuration
Procedures is not seen as an optimal solution: ETS is not able to natively commissioning these
devices. It would require a large effort by ETS to support the following.

   - The modification of one Group Address may require the update of several devices.
   - A new KNX Profiles would need to be established, with Configuration Procedures using
Link Services and – Properties, assignment of the Domain Address.
   - ETS would need to access in some way all involved devices, to obtain their KNX Serial
Numbers, before it would be able to calculate and download any link.

##### 1.3.2 Why are unidirectional RF devices not supported?
State-of-the-art RF solutions are no more unidirectional and thus it is possible to set up some
configuration in the devices. Device can be bidirectional during configuration even if in runtime
they are sending only.

Savedate: Filename: page 5 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|System|Physical Layer|Data Link Layer|
|---|---|---|
|KNX RF Ready|clause 5.1 in [02]|clause 6.1 and clause 6.2 in [02]|
|KNX RF Multi|clause 5.2 in [02]|clause 6.1 and clause 6.6 in [02]|
|KNX RF BiBat|clause 5.1 in [02]|clause 6.1, clause 6.2 and clause 6.3 in [02]|
|KNX RF BiBat 2|clause 5.3 in [02]|clause 6.1, clause 6.4 and clause 6.5 in [02]|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

#### 1.4 Scope

##### 1.4.1 KNX RF systems
The goal of this document is to specify S-Mode Device Profiles for the KNX RF Communication
Medium. This specified in [02] and exhibits four systems, as Table 1. From these, the scope of
this document is limited to the system “KNX RF Ready”.

The system “KNX RF Multi” is not within the scope of this document.

   - It exhibits the feature Fast Acknowledgement of which it is not specified how it shall be
handled by the KNX TP1/RF Media Coupler and how it shall be configured by ETS.

   - It also exhibits the feature of multiple RF Channels, so-called Slow – and Fast
Channels, of which it is not specified how the sending shall be configured by ETS and
how the runtime behaviour shall be by the KNX TP1/RF Media Coupler and by ETS.

KNX RF unidirectional systems are not in the scope of this document either.

The support of KNX RF S-Mode devices will therefore be done in two steps..

1. STEP 1: limited to KNX RF Ready.
If ETS configures a KNX RF Multi device, it will configure it to behave like a KNX RF
Ready device without any user action. (See PID_RF_MULTI_TYPE in 2.4.2.3.)

2. STEP 2: extend to KNX RF Multi.
In this step, all above mentioned features of KNX RF Multi will be supported.

##### 1.4.2 KNX TP1/RF Media Coupler
This document does not specify the standard KNX TP1/RF Media Coupler. This is specified in
the document [24].

##### 1.4.3 E-Mode Profiles and combinations with KNX RF S-Mode Profiles
As the scope of this document is limited to S-Mode, specifications for combined Profile of
S-Mode and Ctrl-Mode that may require additional mechanism to protect or lock during linking
and E-Mode Management Procedures are not part of this document.

##### 1.4.4 Existing KNX RF devices
Existing KNX RF devices, based on other Profiles, not specified in this document, can be
supported through plug-ins in the ETS software.

##### 1.4.5 Other topics and documents related to KNX RF S-Mode devices

**Topic:** **KNX TP1/RF Media Coupler**

**Description:** A standard KNX TP1/RF Media Coupler is specified. This based on the Coupler
Model 2.0.

**Status:** See [24].

**Topic:** **Services adapted and introduced on the occasion of KNX RF S-Mode devices**

**Description:** Mainly for the KNX RF Network Configuration Procedures (discovery), some ALservices need to be modified and need to be introduced.

**Status:** See [25].

Savedate: Filename: page 6 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Topic:** Clarification of AET indication in cEMI

**Description:** Verification of consistent encoding of broadcast/system broadcast flags in RFn
cEMI and PL110.

**Status:** Resolved in KSG meeting of 2012.09.25: no contradictions.

#### 1.5 Main principle
**Domain Address for group communication on KNX RF**

As KNX RF Telegrams are defined to natively carry only a KNX Extended Frame, the principle
is to use the Domain Address to close the RF open medium. Within this domain, all the KNX
system is working like on the KNX TP1 medium. This allows that group communication is used
as on KNX TP1.

As for the KNX RF S-Mode devices the RF DoA and the Group Addresses are configured by
ETS, it is guaranteed the combination is unique.

NOTE 1 This is not the case on PB-Mode, in which each devices uses the same pre-defined Group Addresses.

In this way, there is no need any more of additional association and KNX Serial Number table to
ensure Group Communication on RF.

##### 1.5.1 No longer supported
The following features are not supported by the RF S-Mode devices.

- This document specifies S-Mode Profiles for RF bidirectional devices. As the S-Mode
Configuration Procedures are used, it is not necessary that PID_OBJECTLINK is supported. The reaction to an A_FunctionPropertyCommand-service shall be the standard error
handling: the MaS shall reply with an A_FunctionPropertyState_Response-PDU without the
field return_code (this is, the returned PDU shall not contain the field return_code) and
without the field data (this is, the returned PDU shall not contain the field data).

### 2 Specification (normative)

#### 2.1 Terms and definitions

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce – neither modify any terms or definitions or abbreviations.

Savedate: Filename: page 7 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

#### 2.2 Stack and communication

##### 2.2.1 Communication Medium RF

###### 2.2.1.1 Extended Group Address

 _In Chapter 3/2/5 “Communication Medium RF” ([02]) clause 6.1.1.1, the following original text shall be_
_replaced._

_“The RF frame shall contain the KNX Serial Number of the sender for the following_
_communication modes:_

       - _point-to-multipoint, connectionless (multicast) and_
       - _point-to-system, connectionless (system broadcast)._

_This shall be indicated by the value 0 of the field AddrExtensionType in the second block_
_of the RF frame. Multicast datagrams received with the wrong value of the_
_AddrExtensionType shall be discarded by the receiving Data Link Layer instance.”_

This shall be replaced by the following.

The KNX RF Frame shall contain the KNX Serial Number - or the RF Domain Address
according Table 2. The sender shall indicate the used value (KNX Serial Number or RF Domain
Address) with the value of the field Address Extension Type (AET) as also indicated in Table 2.

**Table 2 – Use of KNX Serial Number or RF Domain Address**

**KNX Serial Number or**

**RF Domain Address**

**communication mode**

**point-to-system, connectionless (system broadcast)** yes no

**point-to-domain, connectionless (broadcast)** no yes

**point-to-multipoint, connectionless (multicast)** yes[ a] yes[ a]

**point-to-point, connectionless** no yes

**point-to-point, connection-oriented** no yes

**Address Extension Type (=AddrExtensionType) (AET)** 0 1

a Please refer to the Profile specifications for which type of KNX RF device shall use KNX Serial
Number or DoA.

###### 2.2.1.2 RF Domain Address

 _In Chapter 3/2/5 “Communication Medium RF” ([02]) clause 6.1.1.4, the following original text shall be_
_replaced._

_“The RF Domain Address shall be a 6 octet number. The RF Domain Address in an RF_
_installation shall always be identical to the KNX Serial Number of one of the devices in the_
_installation. This shall guarantee that the RF Domain Address is a unique number._

Savedate: Filename: page 8 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|communication mode|KNX Serial Number or<br>RF Domain Address|Col3|
|---|---|---|
|**communication mode**|**KNX Serial Number**|**RF Domain Address**|
|**point-to-system, connectionless (system broadcast)**|yes|no|
|**point-to-****_domain_, connectionless (broadcast)**|no|yes|
|**point-to-multipoint, connectionless (multicast)**|yes a|yes a|
|**point-to-point, connectionless**|no|yes|
|**point-to-point, connection-oriented**|no|yes|
|**Address Extension Type (=AddrExtensionType) (AET)**|0|1|
|a Please refer to the Profile specifications for which type of KNX RF device shall use KNX Serial<br>Number or DoA.|a Please refer to the Profile specifications for which type of KNX RF device shall use KNX Serial<br>Number or DoA.|a Please refer to the Profile specifications for which type of KNX RF device shall use KNX Serial<br>Number or DoA.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

_The RF frame shall contain the RF Domain Address for the following communication_
_modes:_
    - _point-to-point, connectionless,_
    - _point-to-point, connection-oriented and_
    - _point-to-all-points, connectionless (broadcast)._

_This shall be indicated by the value 1 of the field AddrExtensionType in the second block_
_of the RF Frame. Point to point connectionless and point to point connection oriented_
_Telegrams received with the wrong value of the AddrExtensionType shall be discarded by_
_the receiving Data Link Layer instance._

_For other communication modes, the KNX Serial Number shall be used._

This shall be replaced by the following.

The RF Domain Address shall be a 6 octet number. It shall be guaranteed during the
Configuration procedures that the RF Domain Address is a unique number.

The sender shall include the RF Domain Address in the RF Frame according Table 2. This shall
be indicated by the value 1 of the field AddrExtensionType in the second block of the RF Frame.

The receiver shall discard the RF Frame if the field AddrExtensionType does not match with the
used communication mode as given in Table 2.

###### 2.2.1.3 Data Link Layer Frame

2.2.1.3.1 First block
 _This figure shall replace Figure 1 in clause 6.1.2.4 in [02]._

octet 1 octet 2 octet 3 octet 4 octet 5 to octet 10 octet 11 and octet 12
Length C Esc RF-info SN/DoA CRC
7 6 5 4 3 2 1 0

44h FFh

**Figure 1 - Structure of the first block**

 _Additionally, in the description of the fields, the specification of “RF-info – bit 7” shall be replaced by the_
_following._

- **RF-info – bit 7 – route last**
Description: This flag may be set by the Router and shall indicate that this Frame shall not be routed
further. This flag shall not be set by other devices. The RF Retransmitter shall not evaluate
this flag. This flag shall be ignored by other devices.

Savedate: Filename: page 9 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|octet 1|octet 2|octet 3|octet 4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|octet 5 to octet 10|octet 11 and octet 12|
|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Length|C|Esc|RF-info|RF-info|RF-info|RF-info|RF-info|RF-info|RF-info|RF-info|SN/DoA|CRC|
||||7|6|5|4|3|2|1|0|||
||||route last||||received signal<br>strength|received signal<br>strength|<br>battery state<br>|<br>unidir|||
||44h|FFh|||||||||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.2.1.3.2 Data Link Layer protocol

2.2.1.3.2.1 Route Last flag

 _Additionally, the use of this flag shall be added to the Data Link Layer protocol specification. This shall be a_
_new clause 6.1.4.1 in [02]; the existing clause 6.1.4.1 “AddrExtensionType” shall be shifted down and_
_become 6.1.4.2_

This flag shall indicate whether this Frame may be routed by a Router (Media Coupler) or not.

0: This Frame may be routed by a Router if the other routing conditions are positive.

1: This Frame shall not be routed by a Router, regardless of any other routing
condition

This flag may exclusively be set by a Router (Media Coupler). Other devices shall not set, clear
or modify this flag.

**RF Router (Media Coupler)**

In function of its configuration or Profile, the Router shall set or clear this flag in transmission
onto RF.

On reception of an RF Frame, the Router shall not route the Frame if this Flag is set.

**RF end device**

The RF end device shall ignore the value of this flag in incoming Frames.

The RF end device shall always clear this flag in any transmission.

2.2.1.3.2.2 Duplication prevention

2.2.1.3.2.2.1 Duplication prevention – Receivers

 _Clause 6.1.4.2 (because of the above now 6.1.4.3) “Duplication prevention” shall additionally be extended to_
_take into account the LFN per IA. Only the contents of the existing clause 6.1.4.2.3 ([02]; to become 6.1.4.3.3)_
_shall be replaced by the following._

The receiver shall discard subsequent Telegrams that contain the identical LFN from the same
sender. In case the LFN differs, the newly received LFN shall be stored.

Every receiver shall have a table to store according to the Address Extension Type of the
received Frame the KNX Serial Number and the LFN and the IA of the sender and its LFN of
previously received Telegrams (no matter from where they are sent). The table length shall be
less or equal to 7, because the LFN counts from 0 to 7. This avoids unintentional discarding of
Telegrams, even if Telegrams from only one device are received.

NOTE 2 If the sender uses its KNX Serial Number, then this uniquely identifies the sender. The IA may not be
unique. In this case, only the KNX Serial Number needs to be stored together with the LFN. If the sender uses a DoA,
then the IA is unique. Only the messages of one single DoA need to be repeated, so, it is sufficient to store the IA.
The implementation may thus exist of a single table that is able to store both KNX Serial Numbers as well as IAs, or
two separate tables, one for KNX Serial Numbers and one for IAs.
This mechanism ensures that repeated Telegrams originating from the same sender up to within
the following 8 Telegrams are discarded.

Savedate: Filename: page 10 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

###### 2.2.1.4 The Layer-2 of an RF Retransmitter

 _Chapter 3/2/5 “Communication Medium RF” has two clauses named “The Layer-2 of an RF Retransmitter”:_
_§6.1.7 and §6.2.2._

**_* Clause 6.2.2 shall be removed; possible references to that clause shall be replaced by references to_**
_clause 6.1.7_

**_* Clause 6.1.7 shall be replaced by the below, which is a merger of the existing 6.1.7 and 6.2.2. Additionally,_**
_the below common RF Retransmitter specification is extended to take into account the Route Last Flag and_
_the update of the filtering of the history List according the IA. Therefore, the full clause 6.1.7 is given here._

2.2.1.4.1 Route Last flag
The RF Retransmitter shall not consider the Route Last flag in the retransmission algorithm. The
RF Retransmitter shall not modify the value of the Route Last flag if retransmitting a Frame.

2.2.1.4.2 Filtering
Filtering not implemented in KNX Ready and BiBat Retransmitters.

2.2.1.4.3 History List

 _Additionally, the specification of the History List has to be modified to take into account the sender IA, next to_
_the KNX SN. The below text shall replace the existing text._

_Senders shall set the LFN in the LPCI of every Frame, as stated in clause 6.1.4.2.2 in [02]._

The RF Retransmitter shall not retransmit a Frame that it has already retransmitted shortly
before. To this, the Data Link Layer of the RF Retransmitter shall maintain and evaluate a
_History List that shall store information about the previously retransmitted Telegrams. Table 3_
shows that there are two Profile Modules defined for the KNX RF Retransmitter, which differ in
the information they store in the History List.

NOTE 3 There is no need to store the DoA in the History List: the Data Link Layer of the RF Retransmitter will
only accept RF Telegrams on one single DoA.

**Table 3 – Overview of types of KNX RF Retransmitters**

**Profile Module** **Information in the History List** **Original use**

KNX SN based Retransmitter The KNX SN and the LFN E-Mode

KNX IA based Retransmitter The KNX SN and the LFN S-Mode
The IA[ 1)] and the LFN

An implementation my implement and evaluate both methods in parallel; the information to be
stored and evaluated shall be concluded according the Address Extension Type of the received
Frame.
The history list shall have

   - a minimal length of 3 entries, and

   - a maximum length of 7 entries or shall provide a deletion mechanism after a timeout
(e.g. 3 s).

   - only one entry per KNX Serial Number or per IA.

If a Retransmitter receives a Frame, its Data Link Layer shall check if the received KNX Serial
Number and LFN in this combination or the IA and LFN in that combination are contained in the
History List. If this is the case, this Frame shall be discarded, otherwise the processing shall
continue.

1) It is not necessary to store the KNX RF Domain Address in the History List: the Data Link Layer will not pass
received RF Frame with a DoA other than its own DoA.

Savedate: Filename: page 11 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Profile Module|Information in the History List|Original use|
|---|---|---|
|KNX SN based Retransmitter|The KNX SN and the LFN|E-Mode|
|KNX IA based Retransmitter|The KNX SN and the LFN<br>The IA 1) and the LFN|S-Mode|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.2.1.4.4 RF Repetition Counter
If the processing continues, then the RF Retransmitter shall compare the RF Repetition counter
of the received Frame with a limit value.

   - If the received value of the RF Repetition counter is larger than the limit value, then the
RF Repetition counter shall be decremented and the Frame shall be repeated.

   - If the received value of the RF Repetition counter equals to or is smaller than the limit
value, then the Frame shall not be repeated and be ignored.

The limit value could optionally be a parameter into the RF Retransmitter to limit the number of
RF Retransmitter levels. If implemented, this parameter shall be set or read using the Property
PID_RF_REPEAT_COUNTER (PID = 74) in the Device Object (Object Type = 0). It shall be
used by the RF Retransmitter in the following way.


**IF rf_repetition_counter(rec_Frame) > 0 and**


rf_repetition_counter(rec_Frame) > rf_repetition_counter_limit(Repeater)
**THEN rf_repetetion_counter(rec_Frame)—**
**ELSE**

discard(rec_Frame)
**ENDIF**

Savedate: Filename: page 12 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

 _The below is inherited from the now removed clause 6.2.2.2 from [02] and additionally extended._

RF Repetition Counter > Decrement RF
Discard buffer No. Yes.
Limit value? Repetition Counter

Insert
KNX Serial Number and LFN
respectively IA + LFN in
History List.

No.

Yes.

KNX Serial Number + LFN
or IA + LFN
in History List?

Data Link Layer Ph_Data.ind Ph_Data.req

NOTE This flowchart only describes the handling of received messages for repeating. The handling of messages to the internal
management of the Retransmitter is not shown.

**Figure 2 - KNX RF Ready and BiBat flowchart of the Data Link Layer and Network Layer of the**
**Retransmitter**

###### 2.2.1.5 Semi-directional devices and bidirectional mode

 _This clause is intended to be added to Chapter 3/2/5 “Communication Medium RF” as new clause 6.7. By_
_having this outside the specification of clause 6.2 “KNX RF Data Link Layer for KNX RF Ready and BiBat_
_systems”, this behaviour becomes in theory also available in the future for KNX RF Multi devices._

Semi-directional KNX RF devices are bidirectional RF devices that however at runtime only
send RF Telegrams and do not receive RF Telegrams.

EXAMPLE 1 Devices that are powered by battery or by solar cells, for example in a window contact

Savedate: Filename: page 13 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|RF Repetition Counter > Decrement RF<br>Discard buffer No. Yes.<br>Limit value? Repetition Counter<br>Insert<br>KNX Serial Number and LFN<br>respectively IA + LFN in<br>History List.<br>No.<br>Yes.<br>KNX Serial Number + LFN<br>or IA + LFN<br>in History List?<br>Data Link Layer Ph Data.ind Ph Data.req<br>_ _|Col2|
|---|---|
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Bidirectional Mode**

Mainly in order to be configurable by the S-Mode MaC, to support the Network – and Device
Management Procedures, semi-directional devices shall have a Bidirectional Mode as specified
in Table 4.

**Table 4 – Definition of Bidirectional Mode**

**Flag Unidir**

**Bidirectional**

**Requirements** **in the RF-**
**Mode**

**Frame**

disabled The semi-directional device does not listen to the KNX RF Medium to 1
receive any KNX RF Telegram.

enabled The semi-directional device shall listen to the KNX RF Medium and shall 0
receive any proper KNX RF Telegram addressed to it, as a full bidirectional
device.

The Bidirectional Mode may be limited in time and shall be started and maintained according
the below indications. The bidirectional model time-out timer shall at least support a time period
of 254 s[ 2)].

Semi-directional devices shall exhibit full bidirectional communication on the default call channel
(F1). In particular, these semi-directional devices shall respect the medium access requirements
(medium free sensing and bus access times) identical as for bidirectional devices, regardless of
the Bidirectional Mode.

The Semi-directional device shall signal that state of its Bidirectional Mode in the flag “Unidir” in
the RF-info field of the RF Frame according Table 4 (see clause 6.1.2.4 “First block” in [02]).

**Starting the bidirectional mode**

The bidirectional mode shall be started and the – time-out timer shall be initiated according the
following.

   - When the Programming Mode is activated in the device.
The bidirectional mode time-out timer shall in this case be initiated with a value of at
least 1 minute.
Inactivation of the Programming Mode shall have no effect on the bidirectional mode.
   - When the device has restarted.
The bidirectional mode time-out timer shall in this case be initiated with a value of at
least 10 seconds.

The above initial values shall be constants and shall not depend on the value possibly last set
through the Property PID_RF_BIDIR_TIMEOUT.

2) This 254 s is the minimal possible value for the timer to which it shall be possible to be set by the MaC. The timer

is however initialised with values of 10 s or 60 s.

Savedate: Filename: page 14 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Bidirectional<br>Mode|Requirements|Flag Unidir<br>in the RF-<br>Frame|
|---|---|---|
|disabled|The semi-directional device does not listen to the KNX RF Medium to<br>receive any KNX RF Telegram.|1|
|enabled|The semi-directional device shall listen to the KNX RF Medium and shall<br>receive any proper KNX RF Telegram addressed to it, as a full bidirectional<br>device.|0|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

Bidirectional Mode may additionally be started according the following.

   - If the MaS transmits a Frame to which it expects a confirmation or a response from the
communication partner.
The semi-directional device shall in this case keep its bidirectional mode enabled for at
least 3 s.

NOTE 4 The MaS does not have to enable bidirectional mode for all of its runtime Frames. This is under the
control of the MaS (application) itself.

   - Bidirectional mode may optionally be activated by implementation specific means.

**Retriggering the bidirectional mode**

The MaS shall retrigger the bidirectional time-out timer on any of the following conditions.

   - If the Property Bidirectional Mode Time-out (PID_RF_BIDIR_TIMEOUT; see 2.4.2.8) is
written. If the value contained in the command differs from 0, then the MaS shall
retrigger the bidirectional mode time-out timer with the given value.

NOTE 5 This applies regardless of the communication mode and service that is used to access PID_RF_BIDIR_TIMEOUT. The Property PID_RF_BIDIR_TIMEOUT can be accessed using point-to-point connectionless -and
point-to-point connection-oriented communication mode, but also using point-to-all-points, connectionless (broadcast) and point-to-system, connectionless (system broadcast) communication mode.

   - If the MaS is addressed by any message in point-to-point connectionless or –
connection-oriented communication mode. The MaS shall in this case retrigger the
bidirectional mode time-out timer with the value with which it has last initialised[ 3)].

NOTE 6 This shall be done regardless of the Source Address of this point-to-point Telegram.

**Inactivating the bidirectional mode**

The MaS shall inactivate the bidirectional mode on any of the following conditions.

   - If the bidirectional mode time-out timer expires.
   - If the Property Bidirectional Mode Time-out (PID_RF_BIDIR_TIMEOUT; see 2.4.2.8) is
written with the value 0.

#### 2.3 Application Layer
The Application Layer PDUs specified in this clause 3.3 may be transmitted on

   - point-to-all-points, connectionless (system broadcast) communication mode
(T_Data_SystemBroadcast), or on

   - point-to-domain, connectionless (broadcast) communication mode
(T_Data_Broadcast).
If transmitted or forwarded on a closed medium (Twisted Pair, KNX IP) then in any case only
point-to-domain, connectionless (broadcast) communication mode (T_Data_Broadcast) can and
shall be used. The below conditions apply for the transmission on an open medium (Powerline,
Radio Frequency).

**For the MaC**

The MaC may use system broadcast communication mode or broadcast communication mode
in function of the situation, according the configuration procedures. See 2.6.1.1.

3) This can thus be 1 minute or 10 s, in case the MaC did not yet access PID_RF_BIDIR_TIMEOUT, or the value
last set by the MaC through PID_RF_BIDIR_TIMEOUT.

Savedate: Filename: page 15 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**For the MaS (end device)**

NOTE 7 The system broadcast services are designed for network configuration, in which the MaC is always the initiator. Hence,
here only the behaviour of the MaS is given if responding to a service.

It depends on the MaS whether the system broadcast services are supported as well on
broadcast communication mode or not.

   - If this is not the case, then the MaS shall always respond using system broadcast
communication mode.

   - If this is the case, then the MaS shall respond with the same communication mode as
the preceding incoming request.
**For the Media Coupler**

The communication mode that shall be used when forwarding the system broadcast messages
onto the open medium may either be fixed to system broadcast, or may depend on Coupler
Parameter settings.

EXAMPLE 2 The KNX TP1/RF Media Coupler can be configured to route TP1 broadcast Frames containing a system
broadcast service-PDU on either broadcast or on system broadcast.

#### 2.4 Resource definition or used Resources

##### 2.4.1 DoA Realisation Type 2 – DoA on 6 octets

 _Default DoA 000000000000h can’t be sent by any RF interface from ETS, because this default value is used_
_on the cEMI to indicate that the interface has to insert his own DoA in the RF Telegram._
_in clause 3.2.4 “DoA Realisation Type 2 – DoA on 6 octets” the following sentence shall be replaced._

_If unconfigured (ex-factory) the Domain Address is void and shall have the default_
_value 000000000000h._

_This shall be replaced by the following._

If unconfigured (ex-factory) the Domain Address is void and shall have the default value
FFFFFFFFFFFFh.

The value 000000000000h is not a valid DoA. The MaC shall not assign this value to any MaS.

##### 2.4.2 RF Medium Object (Object Type 19)

###### 2.4.2.1 Overview

 _This clause only gives an overview and is not intended for integration in the KNX Specifications. The_
_Properties are specified in the below clauses. The indications about the mandatory and optional Properties are_
_given for the Profiles specified further in this paper._
    - _mask 2705h_ _clause 2.8.1.6.7_
    - _mask 27B0h_ _clause 2.8.2.6.8_

    - _RF Retransmitter_ _clause 2.8.3.4_

    - _RF USB Interface 1_ _clause 2.8.4_

The KNX RF Medium Object shall provide access to the following KNX RF features.

Savedate: Filename: page 16 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Table 5 – Overview of Properties in the RF Medium Object**

**Property Identifier**

**Property Data Type** **Value**
**(PID)**

1 PID_OBJECT_TYPE PDT_UNSIGNED_INT KNX RF Medium Object: Object Type = 19

51 PID_RF_MULTI_TYPE PDT_GENERIC_01 RF ready and Multi capabilities

56 PID_RF_DOMAIN_ADDRES PDT_GENERIC_06 RF Domain Address

S

57 PID_RF_RETRANSMITTER PDT_BINARY_INFORM RF Retransmitter Flag
ATION

58 PID_RF_FILTERING_MODE_ PDT_BITSET8 (alt.: RF filtering on KNX Serial Number or RF

SUPPORT PDT_GENERIC_01) DoA

59 PID_RF_FILTERING_MODE_ PDT_ENUM8 (alt: RF Filtering Mode Selection

SELECT PDT_UNSIGNED_CHA

R)

60 PID_RF_BIDIR_TIMEOUT PDT_FUNCTION Time-out for bidirectional communication.

61 PID_RF_DIAG_SA_FILTER_- PDT_GENERIC_03[] Filter Table for Source Addresses for

TABLE[] diagnostics of Link Quality.

62 PID_RF_DIAG_QUALITY_TA PDT_GENERIC_04[] Result of Link Quality diagnostics.

BLE[]

63 PID_RF_DIAG_PROBE PDT_FUNCTION Trigger and response for Link Quality
diagnostic help telegrams.

75 PID_RF_TYPES_- PDT_BITSET8 (alt.: Indication of RF types supported in the MaS

SUPPORTED PDT_GENERIC_01) (KNX RF Ready, KNX RF Multi…).

###### 2.4.2.2 PID_OBJECT_TYPE (PID: 1)

 _This clause is not intended for integration in the KNX Specifications._

**●** **Property name:** Interface Object Type

**●** **Property Datatype:** PDT_UNSIGNED_INT

**●** **Datapoint Type:** DPT_PropDataType (DPT_ID = 7.010)

For the common specification of PID_OBJECT_TYPE, please refer to [03].

The Object Type of the KNX RF Medium Object shall be 19.

###### 2.4.2.3 PID_RF_MULTI_TYPE (PID: 51)

 _This clause shall be added to [03]._

**●** **Property name:** RF Multi type

**●** **Property Datatype:** PDT_GENERIC_01

**●** **Datapoint Type:** none

2.4.2.3.1 Abstract Resource definition
The Property RF Multi Type shall indicate and control whether the device is or operates as a
KNX RF Ready device or as a KNX RF Multi device.

Savedate: Filename: page 17 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Property Identifier<br>(PID)|Property Data Type|Value|
|---|---|---|
|1 PID_OBJECT_TYPE|PDT_UNSIGNED_INT|KNX RF Medium Object: Object Type = 19|
|51 PID_RF_MULTI_TYPE|PDT_GENERIC_01|RF ready and Multi capabilities|
|56 PID_RF_DOMAIN_ADDRES<br>S|PDT_GENERIC_06|RF Domain Address|
|57 PID_RF_RETRANSMITTER|PDT_BINARY_INFORM<br>ATION|RF Retransmitter Flag|
|58 PID_RF_FILTERING_MODE_<br>SUPPORT|PDT_BITSET8 (alt.:<br>PDT_GENERIC_01)|RF filtering on KNX Serial Number or RF<br>DoA|
|59 PID_RF_FILTERING_MODE_<br>SELECT|PDT_ENUM8 (alt:<br>PDT_UNSIGNED_CHA<br>R)|RF Filtering Mode Selection|
|60 PID_RF_BIDIR_TIMEOUT|PDT_FUNCTION|Time-out for bidirectional communication.|
|61 PID_RF_DIAG_SA_FILTER_-<br>TABLE[]|PDT_GENERIC_03[]|Filter Table for Source Addresses for<br>diagnostics of Link Quality.|
|62 PID_RF_DIAG_QUALITY_TA<br>BLE[]|PDT_GENERIC_04[]|Result of Link Quality diagnostics.|
|63 PID_RF_DIAG_PROBE|PDT_FUNCTION|Trigger and response for Link Quality<br>diagnostic help telegrams.|
|75 PID_RF_TYPES_-<br>SUPPORTED|PDT_BITSET8 (alt.:<br>PDT_GENERIC_01)|Indication of RF types supported in the MaS<br>(KNX RF Ready, KNX RF Multi…).|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.4.2.3.2 Format

**Field** **b7** **b6** **b5** **b4** **b3** **b2** **b1** **b0**

**Name** reserved reserved reserved reserved reserved reserved reserved RF-Multi
Type

**Values** 0 0 0 0 0 0 0 0,1

**Bit** **Name** **Description** **Encoding**

0 RF-Multi _RF-Multi Type shall indicate whether the KNX_ 0: KNX RF Multi Device set
Type RF device is configured as “KNX RF Ready” in KNX RF Ready type

type or as “KNX RF Multi” type. 1: KNX RF Multi Device set

in KNX RF Multi type

1 to 7 reserved These bits are reserved and shall always be 0. not applicable

2.4.2.3.3 Usage by the Management Client
The MaC shall use the Property RF Multi Type to set the value of the KNX RF Type in the
device.

The MaC shall only modify this parameter in a MaS that is in ex-factory state. This shall avoid
any inconsistency in the device configuration.

EXAMPLE 3 If this Property is set in an already configured MaS, then this may lead to a mixture of links added in RF Multi
type mode with Fast Ack management and links added in RF Ready type mode without Fast Ack management.

2.4.2.3.4 Usage by the Management Server
Please refer to clause 2.8 “Profile definition” for the mandatory and optional support of the
Property RF Multi Type.

If the MaS is an RF Ready device, not supporting the RF Multi features, and the MaC writes this
Property RF Multi Type, with any value, then the MaS shall always respond with RF-Multi Type
= 0.

###### 2.4.2.4 PID_RF_DOMAIN_ADDRESS (PID: 56)

 _This clause is not intended for integration in the KNX Specifications._

**●** **Property name:** RF Domain Address

**●** **Property Datatype:** PDT_GENERIC_06

**●** **Datapoint Type:** None.

For the common specification of PID_RF_DOMAIN_ADDRESS, please refer to [03].

###### 2.4.2.5 PID_RF_RETRANSMITTER (PID: 57)

**●** **Property name:** RF Retransmitter Flag

**●** **Property Datatype:** PDT_BINARY_INFORMATION

**●** **Datapoint Type:** DPT_Bool (DPT_ID: 1.003)

2.4.2.5.1 Abstract Resource definition
This Property shall control whether the RF Retransmitter function of the device is inactive or
active.

Savedate: Filename: page 18 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Field|b7|b6|b5|b4|b3|b2|b1|b0|
|---|---|---|---|---|---|---|---|---|
|**Name**|reserved|reserved|reserved|reserved|reserved|reserved|reserved|RF-Multi<br>Type|
|**Values**|0|0|0|0|0|0|0|0,1|

|Bit|Name|Description|Encoding|
|---|---|---|---|
|0|RF-Multi<br>Type|_RF-Multi Type_shall indicate whether the KNX<br>RF device is configured as “KNX RF Ready”<br>type or as “KNX RF Multi” type.|0: KNX RF Multi Device set<br>in KNX RF Ready type <br>1: KNX RF Multi Device set<br>in KNX RF Multi type|
|1 to 7|reserved|These bits are reserved and shall always be 0.|not applicable|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.4.2.5.2 Format
This shall be a 1 bit Property that shall be encoded as follows.

0: Disable: The KNX RF Retransmitter function in the MaS shall be disabled.

1: Enable: The KNX RF Retransmitter function in the MaS shall be enabled.

The default value shall be 0: Disable.

2.4.2.5.3 Usage by the Management Server (device)
The MaS shall enable and disable its KNX RF Retransmitter functionality according the setting
of this RF Retransmitter Flag.

If the MaC sets RF Retransmitter Flag to “Enable” respectively “Disable”, then the MaS shall
immediately activate respectively inactivate the retransmission RF Telegrams.

2.4.2.5.4 Usage by the Management Client
The MaC shall set this value according the selection by the installer.

###### 2.4.2.6 PID_RF_FILTERING_MODE_-SUPPORT (PID: 58)

 _This clause is not intended for integration in the KNX Specifications._

**●** **Property name:** Supported RF Filtering Modes

**●** **Property Datatype:** PDT_BITSET8 (alt.: PDT_GENERIC_01)

**●** **Datapoint Type:** None.

For the common specification of PID_RF_FILTERING_MODE_-SUPPORT, please refer to [03].

###### 2.4.2.7 PID_RF_FILTERING_MODE_-SELECT (PID: 59)

 _This clause is not intended for integration in the KNX Specifications._

**●** **Property name:** RF Filtering Mode Selection

**●** **Property Datatype:** PDT_ENUM8 (alt: PDT_UNSIGNED_CHAR)

**●** **Datapoint Type:** None.

For the common specification of PID_RF_FILTERING_MODE_SELECT, please refer to [03].

###### 2.4.2.8 PID_RF_BIDIR_TIMEOUT (PID: 60)

**●** **Property name:** Bidirectional Mode Time-out

**●** **Property Datatype:** PDT_FUNCTION

**●** **Datapoint Type:** None

This Property _Bidirectional Mode Time-out is designed for semi-directional devices. These_
devices shall enable bidirectional mode according 2.2.1.5. This Property shall allow the MaC to
retrigger the time-out for the bidirectional mode and thus keep the bidirectional mode active in
the MaS as long as necessary.

This Property shall not change the default time-out for bidirectional mode as specified in 2.2.1.5;
it shall only retrigger or stop the bidirectional mode.

Savedate: Filename: page 19 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**1) Write (A_FunctionPropertyCommand-PDU)**


Octet 10


RF_Bidir_TimeOut (second)

_RF_Bidir_TimeOut shall be the duration in seconds, from 1 s to 254 s, during which the RF_
bidirectional mode shall be active after reception of this Telegram.

NOTE 8 The value 255 s is not foreseen, as it is used to signal a permanent bidirectional device is the below responses.

- If the MaC writes RF_Bidir_TimeOut to a value different from 0 then the MaS shall activate
RF bidirectional mode and start the RF Bidirectional Mode Time-out timer with the value as
given in the command.

NOTE 9 This command can actually only be received if bidirectional mode is already active in the MaS, by any of the
triggers as specified in 2.2.1.5.

- If the MaC writes the value 0 for the field RF_Bidir_TimeOut then the MaS shall
immediately stop the RF Bidirectional Mode Time-out timer and deactivate RF bidirectional
communication immediately after sending out the below response.

- If the MaC writes a value for the field RF_Bidir_TimeOut that is larger than the maximal RF
Bidir timeout that is supported by the MaS, including the value 255, then the MaS shall do
the following.
   - It shall retrigger the Bidirectional Mode time-out timer with the maximal value that it
supports.
   - It shall respond with both field “Max RF_Bidir_TimeOut” and “Time Left” containing this
value.

**Response (A_FunctionPropertyState_Response-PDU)**

Octet 10 Octet 11 Octet 12

Max

Return Code RF_Bidir_TimeO Time Left

ut

Return Code 00h: SUCCESS

FFh: ERROR

Max RF_Bidir_TimeOut The MaS shall fill this field with the maximum time that it can be in
in RF bidirectional mode, from 0 s to 254 s.

For permanent bidirectional devices, this value shall be 255 s
(FFh) and shall denote an infinite bidirectional mode time.

Time Left For semi-directional devices, this shall be the current value of the
Bidirectional Mode Time-out timer, this is, it shall be the time, in
seconds, until the device will deactivate the RF bidirectional
mode. This shall be a value in the range from 0 s to 254 s.

For permanent bidirectional devices, this value shall be 255 s
(FFh) and shall denote an infinite bidirectional mode time.

Savedate: Filename: page 20 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Octet 10|Octet 11|Octet 12|
|---|---|---|
|Return Code|Max<br>RF_Bidir_TimeO<br>ut|Time Left|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**2) Read (A_FunctionPropertyState-Read-PDU)**

_No Data_

The MaC shall use the function read PID_RF_BIDIR_TIMEOUT to read the value and state of
the RF bidirectional mode and the time-out timer. The MaS shall indicate in the response the
maximum time-out value and the current time left value.

The format, contents and interpretation of the response (A_FunctionPropertyState_Response-PDU) shall be identical as to the above response to the A_FunctionProperty_Command.

**3) A_SystemNetworkParameter_Write**

The encoding and the requirements for the MaS shall be identical as for accessing this Property
through using the A_FunctionPropertyCommand-PDU as specified above. (The MaS does
however not send any response.)

This shall allow the MaC to maintain the bidirectional mode enabled in multiple devices in case
longer lasting (Network) Configuration Procedures are performed and it wants to avoid that any
MaS disables its bidirectional mode.

###### 2.4.2.9 PID_RF_DIAG_SA_FILTER_TABLE[] (PID: 61)

**●** **Property name:** RF Diagnose Source Address Filter Table

**●** **Property Datatype:** PDT_GENERIC_03[]

**●** **Datapoint Type:** none

2.4.2.9.1 Abstract Resource definition
The Property RF Source Address Filter Table shall contain the Individual Addresses of the RF
devices for which the MaS (device) shall measure the link quality.

This table shall be readable and writeable.

Please refer to the Management Procedure NMP_LinkQuality_Measure in 2.5.3 for how the
Properties PID_RF_DIAG_SA_FILTER_TABLE, PID_RF_DIAG_QUALITY_TABLE and
PID_RF_DIAG_PROBE work together.

2.4.2.9.2 Format
This shall be an array Property; the minimal size shall be 1.

**Array Index** **Filter Info** **Value**

1 1[st] Filter Info 1[st] Individual Address (2 octets)

2 2[nd] Filter Info 2[nd] Individual Address (2 octets)

n

**Figure 3 - Structure of RF Source Address Filter Table**

NOTE 10 This table is not sorted.

Savedate: Filename: page 21 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Filter Info|Value|
|---|---|
|1st Filter Info|1st Individual Address (2 octets)|
|2nd Filter Info|2nd Individual Address (2 octets)|
|||
|||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

- Filter Info

**Bit** **7** **6** **5** **4** **3** **2** **1** **0**

Description Reserved Reserved Reserved Reserved 0: don’t Repeat count value

=0 =0 =0 =0 check [0-7]

repeat
count
1: check
repeat
count

2.4.2.9.3 Usage by the MaS (device)
If the MaS (device) receives any RF Telegram with a SA and repeat count value equal to one of
the elements this table, then the MaS shall use the received signal strength of this Telegram to
update the corresponding array element in the RF Diagnose Quality Table (see 2.4.2.10).

A Source Address can be present in more than one element.

The value 0000h shall be an invalid value for the field Individual Address. The MaC may use
this value to denote an unused entry in the array Property. The MaS shall not evaluate entries
with this value for the Individual Address, regardless of the repeat count value.

NOTE 11 This allows that the diagnosis can differentiate between communication directly from the device sending with that
Source Address and communication from that same sender that is repeated by one or more RF Retransmitters.

If the MaC writes any element of this table, the MaS shall reset the associated element in the
_RF Diagnose Quality Table (see 2.4.2.10), even if the element is overwritten with the same_
data.

**Implementation restrictions**

Please refer to the Profile specifications for the mandatory and optional support of PID_RF_DIAG_SA_FILTER_TABLE[], PID_RF_DIAG_QUALITY_TABLE[] and PID_RF_DIAG_PROBE.

If the implementation is mandatory, then it is allowed to limit the number of entries in PID_RF_DIAG_SA_FILTER_TABLE[], PID_RF_DIAG_QUALITY_TABLE[] to only one single entry.

###### 2.4.2.10 PID_RF_DIAG_QUALITY_TABLE[] (PID: 62)

**●** **Property name:** RF Diagnose Quality Table

**●** **Property Datatype:** PDT_GENERIC_04[]

**●** **Datapoint Type:** none

2.4.2.10.1 Abstract Resource definition
The RF Diagnose Quality Table shall for each Source Address contained in the RF Source
Address Filter Table contain the calculated link quality information based on the received and
filtered Telegrams from that Source Address.

Please refer to the Management Procedure NMP_LinkQuality_Measure in 2.5.3 for how the
Properties PID_RF_DIAG_SA_FILTER_TABLE, PID_RF_DIAG_QUALITY_TABLE and
PID_RF_DIAG_PROBE work together.

Savedate: Filename: page 22 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Bit|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|---|
|Description|Reserved<br>=0|Reserved<br>=0|Reserved<br>=0|Reserved<br>=0|0: don’t<br>check<br>repeat<br>count<br>1: check<br>repeat<br>count|Repeat count value<br>[0-7]|Repeat count value<br>[0-7]|Repeat count value<br>[0-7]|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.4.2.10.1.1 Format
The RF Diagnose Quality Table shall be an array Property as shown in Figure 4.

**Nr of** **Link Quality**

**Array** **Telegrams** **Min** **Max** **Average**
**Index** (1 octet) (1 octet) (1 octet) (1 octet)

dB dB dB

1 0 to 255 0 to 255 0 to 255

2

…

n

**Figure 4 - Structure of RF Diagnose Quality Table**

The Link Quality is defined as follows.

Link Quality [dB] = Measured RSSI of received frame [dBm] – RSSI at sensitivity level of
the receiver [dBm]

This shall be a read-only Property. The default value shall be 0 for all fields. The MaC can only
clear the contents of any entry in this Property by writing the corresponding element in the
Property RF Diagnose Source Address Filter Table (see 2.4.2.9).

2.4.2.10.2 Usage by the MaS (device)
Every element of the RF Diagnose Quality Table with array index m shall relate 1-to-1 to the
element of the RF Diagnose Source Address Filter Table with the same array index m.

- Nr of Telegrams

The MaS (device) shall count in this field all received Telegrams with Source Address and
repeat count value as in the corresponding entry in the RF Diagnose Source Address Filter
_Table. If more than 255 matching Telegrams are received then the Nr of Telegrams shall_
stay at 255, but the Link Quality (min, max and average) shall still be updated.

- Link Quality (in dB)

The Link Quality shall be the difference between the RSSI of the received Telegram and the
sensitivity of the MaS. This value will normally be greater than 0. A big value will indicate a
good communication between two products.

   - Min
This shall be the minimal value of the Link Quality calculated for all received Telegrams
for this entry.

   - Max
This shall be the maximal value of the Link Quality calculated for all received Telegrams
for this entry.

   - Average
This shall be the floating average value of the Link Quality calculated for all received
Telegrams for this entry. This shall be updated with each received matching Telegram nr
n as follows.

𝑎𝑎𝑎𝑎𝑎𝑎𝑎𝑛 = [7 𝑥 𝑎𝑎𝑎𝑎𝑎𝑎𝑎][𝑛−1 ]8 [+ 𝑛𝑛𝑛 𝑣𝑣𝑣𝑣𝑣]

For the first received Telegram, there is no averagen-1; the average shall therefore be
initiated with the Link Quality of this first received Telegram.

|Nr of<br>Telegrams|Link Quality|Col3|Col4|
|---|---|---|---|
|**Nr of**<br>**Telegrams**|**Min**|**Max**|**Average**|
|(1 octet)|(1 octet)|(1 octet)|(1 octet)|
|(1 octet)|dB|dB|dB|
||0 to 255|0 to 255|0 to 255|
|||||
|||||
|||||


Savedate: Filename: page 23 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Reset of an element**

The MaS shall manage the RF Diagnose Quality Table and shall make it contain exactly the
same number of elements as the RF Diagnose Source Address Filter Table. The MaS shall
clear (value 0) all fields in an entry in the RF Diagnose Quality Table if the MaC writes the
corresponding element in the RF Diagnose Source Address Filter Table.

   - If the MaC writes a new Property array element in the RF Diagnose Source Address Filter Table
beyond the current nr of elements, then the MaS (device) shall also grow the RF Diagnose Quality
_Table to have the same length and fill the newly created entry or entries with 0._

   - The clearing shall happen on any write event to RF Diagnose Source Address Filter Table, even
with identical data.

**Implementation restrictions**

Please refer to the Profile specifications for the mandatory and optional support of PID_RF_DIAG_SA_FILTER_TABLE[], PID_RF_DIAG_QUALITY_TABLE[] and PID_RF_DIAG_PROBE.

If the implementation is mandatory, then it is allowed to limit the number of entries in PID_RF_DIAG_SA_FILTER_TABLE[], PID_RF_DIAG_QUALITY_TABLE[] to only one single entry.

2.4.2.10.3 Usage by the MaC
The MaC shall read out any entry in this array Property to learn the Link Quality of the RF
communication between this MaS and the KNX RF device with the given IA.

In order to clear any data in this Property, the MaC shall access the corresponding entries in the
Property RF Diagnose Source Address Filter Table.

###### 2.4.2.11 PID_RF_DIAG_PROBE (PID: 63)

**●** **Property name:** RF Diagnose Probe

**●** **Property Datatype:** PDT_FUNCTION

**●** **Datapoint Type:** None

2.4.2.11.1 Abstract Resource definition
The Property RF Diagnose Probe (PID_RF_DIAG_PROBE) shall support the measuring of the
Link Quality between the MaS and another KNX RF device. It shall allow the MaC to trigger the
MaS to transmit this Property State to the network, of which the other KNXRF device can
measure the signal strength and calculate the Link Quality.

Please refer to the Management Procedure NMP_LinkQuality_Measure in 2.5.3 for how the
Properties PID_RF_DIAG_SA_FILTER_TABLE, PID_RF_DIAG_QUALITY_TABLE and
PID_RF_DIAG_PROBE work together.

2.4.2.11.2 Format
PID_RF_DIAG_PROBE shall be a Function Property that shall be formatted as follows.

Savedate: Filename: page 24 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.4.2.11.3 Usage by the MaS (device)
**1) Write (A_FunctionPropertyCommand-PDU)**


Octet 10


Trigger: 00h

The field Trigger shall have the fixed value 00h. Other values are reserved for later extensions
and shall not be used. If the MaS (device) receives a value for this field Trigger that it does not
support, then it shall give a negative Function response.

**Response (A_FunctionPropertyState_Response-PDU)**

Octet 10 Octet 11

test_info test_result

00h 00h

The MaS shall respond to the MaC with this A_FunctionPropertyState_Response-PDU in pointto-point connectionless communication mode.

NOTE 12 The trigger is specified as a constant 00h. Future alternative values may control the information to be sent, like the RF
Channel to use, to what receivers to send it and the communication mode (e.g. point-to-point connectionless).

Additionally, the MaS (device) shall send the state of this function using the service
A_NetworkParameter_InfoReport in broadcast communication mode. The field test_result shall
be 00h.

Octet 6 Octet 7 Octet 8 Octet 9 Octet 10 Octet 11 Octet 12

APCI parameter_type

test_info test_result
object_type property_id

RF Medium Object 63 00 00h

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

1 1 1 1 0 1 1 0 1 1

**Figure 5 – A_NetworkParameter_InfoReport - RF Diagnose Probe message (example)**

**2) Read (A_FunctionPropertyState-Read-PDU)**

If the MaC reads that status of the Function Property PID_RF_DIAG_PROBE, then the MaS
shall respond with the same value as on the write confirmation.

Octet 10 Octet 11

test_info test_result

00h 00h

NOTE 13 The octet 10, test_info, shall in this be seen as an identifier of the type of information that is transmitted. Future values
may indicate additional octets in the field test_info or different information in the field test_resulT;

The MaS shall not transmit any second message like A_NetworkParameter_InfoReport on the
network in this case.

Savedate: Filename: page 25 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Octet 10|Octet 11|
|---|---|
|test_info|test_result|
|<br>00h|<br>00h|

|be 00h.|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|Col49|Col50|Col51|Col52|Col53|Col54|Col55|Col56|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Octet 6|Octet 6|Octet 6|Octet 6|Octet 6|Octet 6|Octet 6|Octet 6|Octet 7|Octet 7|Octet 7|Octet 7|Octet 7|Octet 7|Octet 7|Octet 7|Octet 8|Octet 8|Octet 8|Octet 8|Octet 8|Octet 8|Octet 8|Octet 8|Octet 9|Octet 9|Octet 9|Octet 9|Octet 9|Octet 9|Octet 9|Octet 9|Octet 10|Octet 10|Octet 10|Octet 10|Octet 10|Octet 10|Octet 10|Octet 10|Octet 11|Octet 11|Octet 11|Octet 11|Octet 11|Octet 11|Octet 11|Octet 11|Octet 12|Octet 12|Octet 12|Octet 12|Octet 12|Octet 12|Octet 12|Octet 12|
|||||||APCI|APCI|APCI|APCI|||||||parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|parameter_type|test_info|test_info|test_info|test_info|test_info|test_info|test_info|test_info|test_result|test_result|test_result|test_result|test_result|test_result|test_result|test_result|
|||||||||||||||||<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|<br>object_type|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|property_id|
|||||||||||||||||<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>RF Medium Object|<br>63|<br>63|<br>63|<br>63|<br>63|<br>63|<br>63|<br>63|00|00|00|00|00|00|00|00|00h|00h|00h|00h|00h|00h|00h|00h|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|||||||APCI|<br>APCI|<br>APCI|<br>APCI<br>|APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|<br>APCI|||||||||||||||||||||||||||||||||||||||||
|||||||1|1|1|1|0|1|1|0|1|1|||||||||||||||||||||||||||||||||||||||||

|Octet 10|Octet 11|
|---|---|
|test_info|test_result|
|<br>00h|<br>00h|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Implementation restrictions**

Please refer to the Profile specifications for the mandatory and optional support of PID_RF_DIAG_SA_FILTER_TABLE[], PID_RF_DIAG_QUALITY_TABLE[] and PID_RF_DIAG_PROBE.

If the implementation is mandatory, then it is allowed to limit the number of entries in PID_RF_DIAG_SA_FILTER_TABLE[], PID_RF_DIAG_QUALITY_TABLE[] to only one single entry.

###### 2.4.2.12 PID_RF_TYPES_SUPPORTED (PID: 75)

 _This clause is not intended for inclusion in the KNX Specifications._

**●** **Property name:** RF Types Supported

**●** **Property Datatype:** PDT_BITSET8 (alt.: PDT_GENERIC_01)

**●** **Datapoint Type:** None

For the specification of PID_RF_TYPES_SUPPORTED, please refer to [27].

##### 2.4.3 cEMI Server Object

###### 2.4.3.1 Overview

 _This clause is only an overview and is not intended for integration in the KNX Specifications._

 _For an overview of the mandatory an optional Interface Objects and Properties in the KNX RF Interface Type_
_1, please refer to clause 2.8.2._

**Property Identifier**

**Property Data Type** **Value**
**(PID)**

1 PID_OBJECT_TYPE PDT_UNSIGNED_INT cEMI Server Object: Object Type = 8

54 PID_ADD_INFO_TYPES PDT_ENUM8[] Additional Information Types

###### 2.4.3.2 PID_ADD_INFO_TYPES (PID: 54)

**●** **Property name:** Additional Information Types

**●** **Property Datatype:** PDT_ENUM8[]

**●** **Datapoint Type:** DPT_AddInfoTypes (DPT_ID = 20.1001)

For the common definition of PID_ADD_INFO_TYPES, please refer to [03].

For the KNX RF Interface Type 1, the Addinfo-Type 02h “RF Control Octet and Serial Number
or DoA” shall be supported.

##### 2.4.4 Programming Mode

 _The following shall be added to the specification of Programming Mode in clause 4.19 in [03], preceding the_
_existing clause 4.19.2 “Programming Mode – Realisation Type 1”._

###### 2.4.4.1 Abstract Resource definition

 _The “Abstract Resource definition” shall be moved from the clause “Format and encoding” of clause 4.19.3.1_
_to this clause._
_Additionally, the following shall be added._

**Autonomous inactivation of Programming Mode**

This is an optional feature for the MaS. Please refer to [06] for the conditions for the support of
this feature.

Savedate: Filename: page 26 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Property Identifier<br>(PID)|Property Data Type|Value|
|---|---|---|
|1 PID_OBJECT_TYPE|PDT_UNSIGNED_INT|cEMI Server Object: Object Type = 8|
|54 PID_ADD_INFO_TYPES|PDT_ENUM8[]|Additional Information Types|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

If this feature is supported, then, if the Programming Mode becomes enabled, by any means,
the MaS (device) shall start a time-out timer of 4 minutes.

This timer shall count down and it shall not be possible to restart this timer.

If the timer expires, the MaS shall autonomously and automatically disable its Programming
Mode.

A semi-directional KNX RF S-Mode device shall additionally inactivate its Programming Mode if
its bidirectional mode becomes disabled.

#### 2.5 Management Procedures

 _This clause is not intended for integration in the KNX Specifications._

##### 2.5.1 Introduction
The Management Procedures needed for Configuration are identical as to the existing
Management Procedures as used for mask 0705h and 07B0h.

Additionally, new Management Procedures are specified, mainly for Network Discovery,
Configuration and Diagnosis. These are not specified in this paper but are contained in [25].

##### 2.5.2 NM_SubnetworkDevices_Scan2
**Use**

This Network Management Procedure shall be used to determine which devices exist on a
Subnetwork.

The MaC shall to this one after the other address each possible Individual Address in the
Subnetwork by reading the Device Descriptor Type 0 with the service A_DeviceDescriptor_Read, using point-to-point connectionless communication mode. If the MaC does not receive a
response within one second, it shall repeat the request once and wait again for one second for
a possible response.

- If the MaC receives a response then it shall assume that the tested IA is occupied.

- If the MaC receives no response, then it shall assume that the tested IA is not occupied.

For this procedure the Individual Address of the used Routers and the Domain Address have to
be configured.

**Used Application Layer Services for Management**

  - A_DeviceDescriptor_Read

**Parameters of the Management Procedure**

NM_SubnetworkDevices_Scan2(/* [in] */ SNA, /* [out] */ DA[])

SNA: Subnetwork Address of the Subnetwork in which the occupied
Individual Addresses are to be scanned.
DA[]: The collection of all Device Addresses of the devices discovered in
the investigated Subnetwork.

**Variables**

DA_Current: The current Device Address of which it will be checked whether a device
with this Device Address exists on the Subnetwork that is being checked.

Savedate: Filename: page 27 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Sequence**


Management
Client


Network /
Management
Server


remark

If there is a MaS with IA =
SNA.DA then it will respond.

If there is a MaS with IA =
SNA.DA then it will respond.


**FOR (DA_Current = 0; DA_Current = 255; DA_Current = DA_Current+1)**

start time-out timer of 1 s

A_DeviceDescriptor_Read-PDU
(destination_address.SNA =SNA,
destination_address.DA = DA_Current)

A_DeviceDescriptor_Response-PDU

(DD0)

If the MaC receives a response, then it shall add SNA.DA to the list
in DA[].

**IF the timer expires without response THEN the MaC shall repeat the**
request one time.

start time-out timer of 1 s

A_DeviceDescriptor_Read-PDU
(destination_address.SNA =SNA,
destination_address.DA = DA_Current)

A_DeviceDescriptor_Response-PDU

(DD0)

If the MaC receives a response, then it shall add SNA.DA to the
list in DA[].

**ENDFOR**

**Constraints**

|A DeviceDescriptor Read-PDU<br>_ _<br>(destination address.SNA =SNA,<br>_<br>destination address.DA = DA Current)<br>_ _<br>A DeviceDescriptor Response-PDU<br>_ _<br>(DD0)<br>C receives a response, then it shall add SNA.DA to the list<br>er expires without response THEN the MaC shall repeat the<br>ne time.<br>time-out timer of 1 s<br>A DeviceDescriptor Read-PDU<br>_ _<br>(destination address.SNA =SNA,<br>_<br>destination address.DA = DA Current)<br>_ _<br>A DeviceDescriptor Response-PDU<br>_ _<br>(DD0)<br>MaC receives a response, then it shall add SNA.DA to the<br>DA[].|Col2|
|---|---|
|A_DeviceDescriptor_Read-PDU<br>(destination_address.SNA =SNA,<br>destination_address.DA = DA_Current)<br>A_DeviceDescriptor_Response-PDU<br>(DD0)<br>  C receives a response, then it shall add SNA.DA to the list<br>  er expires without response**THEN** the MaC shall repeat the<br> ne time.<br> time-out timer of 1 s<br>A_DeviceDescriptor_Read-PDU<br>(destination_address.SNA =SNA,<br>destination_address.DA = DA_Current)<br>A_DeviceDescriptor_Response-PDU<br>(DD0)<br>  MaC receives a response, then it shall add SNA.DA to the<br>  DA[].||
|A_DeviceDescriptor_Read-PDU<br>(destination_address.SNA =SNA,<br>destination_address.DA = DA_Current)<br>A_DeviceDescriptor_Response-PDU<br>(DD0)<br>  C receives a response, then it shall add SNA.DA to the list<br>  er expires without response**THEN** the MaC shall repeat the<br> ne time.<br> time-out timer of 1 s<br>A_DeviceDescriptor_Read-PDU<br>(destination_address.SNA =SNA,<br>destination_address.DA = DA_Current)<br>A_DeviceDescriptor_Response-PDU<br>(DD0)<br>  MaC receives a response, then it shall add SNA.DA to the<br>  DA[].||


1. This procedure uses the connectionless communication mode for the service A_DeviceDescriptor_Read. This service will therefore give incomplete results if there are KNX
devices in the Subnetwork that do not support this service in connectionless communication
mode.
2. Additionally, this procedure does not use the T_Connect-service. Devices that do not react
to A_DeviceDescriptor_Read but only negatively react to a T_Connect-PDU by sending a
T_Disconnect-PDU, will not be discovered with this procedure.

EXAMPLE 4 Certain KNX Profiles support multiple Individual Addresses in one device, like the KNXnet/IP Tunnelling Server.
These Additional IA may not be discovered.

3. The MaC shall only apply this Management Procedure if the target Subnetwork is of the
KNX RF Communication Medium.

Savedate: Filename: page 28 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

##### 2.5.3 NMP_LinkQuality_Measure
**Use**

This Network Management Procedure shall be used to diagnose the Link Quality of the
communication between one MaS and one or more other devices (probes).

To this, the MaC will firstly set the IAs and possibly the repeat count and test criteria in the MaS.
Then, it will trigger each subsequent probe to send a message. Finally, the MaC will read out
the results from the MaS.

**Extended use: larger number of probe messages**

If step 2 in the below procedure is executed only once then this test will only give a simple
basic result.

The MaC may also repeat step 2 a number of times, so that there is richer information in
the resulting minimal -, maximal - and average values.

**Alternative use: long term recording**

The MaC may also skip part 2 and not actively trigger the probes.

In this case, it will wait a longer period (hours, days) before reading out the result from the
MaS.

**Used Application Layer Services for Management**

  - A_PropertyValue_Write

 - A_PropertyValue_Read

 - A_FunctionProperty_Command

  - A_NetworkParameter_InfoReport

**Parameters of the Management Procedure**

IAProbes[]: The list of Individual Addresses of devices of which the MaC wants to read the Link
Quality of their communication with MaS 1 and the corresponding filter information.

nr_probes: This is the number of probes in IAProbes[], thus the size of IAProbes[].

LinkQuality[] The array of Link Qualities (nr of Telegrams, minimal, average and maximal values)
according Figure 4. The size is nr_probes. this is the result of this Management
Procedure.

**Procedure**

**MaC** **MaS** **Probe(n)**

**1.**

The MaC sets the IAs of the device of
which it wants to measure the Link
Quality in MaS 1. This part is a simple
DMP_InterfaceObjectWrite_R.

A_PropertyValue_Write-PDU
RF Medium Object, PID = PID_RF_DIAG_SA_FILTER_TABLE,
start_index = 0,
element_count = nr_probes,

data = IAProbes[])

Savedate: Filename: page 29 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**MaC** **MaS** **Probe(n)**
The MaS 1 confirms the writing of the filter Property.
A_PropertyValue_Response-PDU

(RF Medium Object, PID = PID_RF_DIAG_SA_FILTER_TABLE,
start_index = 0,
element_count = nr_probes,

data = IAProbes[])

**2.**

The MaC now triggers each Probe to
send a message.

**FOR n = 1 TO nr_probes**

The MaC triggers probe n to send
a message.

A_FunctionProperty_Command-PDU
(RF Medium Object, PID_RF_DIAG_PROBE, trigger = 00h)

probe n confirms the reception of
the Function Property to the MaC.
A_FunctionProperty_Response-PDU
(RF Medium Object, PID_RF_DIAG_PROBE, test_info = 00h,

test_result = 00h) [2)]

Probe n additionally sends a mes
sage on broadcast to the network.
A_NetworkParameter_InfoReport-PDU
(RF Medium Object, PID_RF_DIAG_PROBE, test_info = 00h,

test_result = 00h)[ 3)]

The MaS 1 receives this message. If the SA of probe n is
in its PID_RF_DIAG_SA_FILTER_TABLE, then it will
measure the message’s signal strength and add it to the
average calculation for that SA in PID_RF_DIAG_QUALITY_TABLE.
**NEXT**

**3.**

The MaC now reads the result from
the MaS. This part is a simple
DMP_InterfaceObjectRead_R.

A_PropertyValue_Read-PDU

RF Medium Object,
PID = PID_RF_DIAG_QUALITY_TABLE, start_index = 0,
element_count = nr_probes)

Savedate: Filename: page 30 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**MaC** **MaS** **Probe(n)**
The MaS responds with the Link Quality Table.
A_PropertyValue_Response-PDU

(RF Medium Object, PID = PID_RF_DIAG_QUALITY_TABLE,
start_index = 0, element_count =,

data = LinkQuality[])

NOTES TO THE PROCEDURE

1. This procedure is designed for the MaS and the probe n to be on the same Subnetwork (with the same Subnetwork
Address). If the MaS1 and the probe would be on different Subnetworks, with different DoAs, then the result will not be
the link quality between the MaS and the probe, but between the MaS and the Media Coupler between the MaS and
the rest of the KNX network.

2. This A_FunctionProperty_Response-PDU is in all cases sent to the MaC: this is the default behaviour of Function
Properties and it adds reliability of this procedure to the MaC, as its command is confirmed.

3. The A_NetworkParameter_InfoReport PDU is sent on broadcast communication.

      - Other devices than the involved MaS within the RF Domain will receive this RF Telegram as well and may also
update their RF Diagnose Quality Table. This way, the MaC may run more than one test, to different MaS, in
parallel.

      - Additionally, this broadcast Telegram gives an indication to the MaC that the Probe sends the test Telegram.

**Further notes**

- It is assumed that the RF communication between two RF devices 1 and 2 is symmetrical,
this is, that the link quality with device 1 as MaS and device 2 as probe, will be the same as
the link quality with device 1 as probe and device 2 as MaS.

- If the, while this procedure is running, the IA of any probe device in this procedure changes
or is assigned (by the MaC) to a different KNX RF device, then this procedure will return an
incorrect result for that IA entry. There are not requirements towards the MaS to detect this.
The MaC should only run this procedure in an environment where the IAs are stable during
the execution of this procedure.

#### 2.6 Configuration Procedures

##### 2.6.1 Network Configuration Procedures

###### 2.6.1.1 Configuration Procedures for configuring the RF Domain Address

 _This clause shall be integrated in [04] as new clause 1.3. The existing clause 1.3 shall be moved down._

2.6.1.1.1 Introduction
If the Domain – and Individual Address need to be configured of a RF S-Mode device with
unknown DoA, then the MaC has to use system broadcast communication mode. As the use of
this communication mode will easily cause messages to loop in the installation and additionally
cause messages to duplicate, the following means are foreseen for the MaC to prevent from
this.

Savedate: Filename: page 31 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

   - AL-services designed for system broadcast communication mode may by the MaC or
by the TP1/RF Media Coupler also be used on broadcast communication mode.

   - The KNX TP1/RF Media Coupler will per default not route messages on system
broadcast communication mode. The MaC shall explicitly enable this only in the
TP1/RF Media Couplers that couples to the Subnetwork to which the MaS will later be
assigned.

   - The KNX TP1/RF Media Coupler will set the Route Last flag in the KNX RF Frame.
With this flag set, any other TP1/RF Media Coupler will not route the message back to
TP1.
**Reference topology**

The specification in the below clauses shall apply for any topology situation. In the examples
however, reference is made to the below reference topology.

TP1 TP1 TP1 TP1

1.1.0 1.2.0 1.3.0 . . . 1.15.0

RF RF RF RF

DoA 2 DoA 3

Device 1

↓

Device 2 IANEW = 1.3.10

↓

IANEW
= 1.2.20 MaC

1.3.250

**Figure 6 – Reference topology**

2.6.1.1.2 Preparing the field
Before performing the actual DoA and IA assignment, the MaC has to “prepare the field”. This
shall mean that it shall set PID_RF_SBC_CONTROL in all RF Media Couplers as necessary.

This preparation of the field is included in the Configuration Procedures below.

**Common error handling when preparing the field**

1. The Configuration Procedure shall be aborted.
2. All instances of PID_RF_SBC_CONTROL that have already been set to a value not
equal to “Disable” shall be set back to “Disable” again.
3. The MaC user shall be informed that the preparation of the field failed and point to the
Media Coupler in which this failed, with an understandable interpretation of the error
code. The MaC user shall be signalled that this Media Coupler does not allow completion
of the Configuration Procedure and that the configuration of that Media Coupler needs to
be adjusted firstly.

2.6.1.1.3 MaC is in the same RF Domain as the MaS

EXAMPLE 5 This is the case in the reference topology of Figure 6, if the MaC assigns the DoA and IA of device 1. Device 1
is not assigned an IA yet, but the IANEW that it shall be assigned (1.3.10) will make it belong in the same Subnetwork 1.3 as the MaC.

Savedate: Filename: page 32 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


Device 2

↓

IANEW
= 1.2.20


DoA 2


1.15.0


RF


RF


RF


RF


1.2.0


. . .


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Requirements for the MaC**

- The IA and the DoA of all RF MCs in the installation have to be assigned already and the
MaC shall use a correct IA and DoA according its position in the topology. If this is not the
case, then the MaC should not perform the Network Management procedure.

- The MaC shall use system broadcast communication mode to handle system broadcast
services, and not broadcast communication mode.

- The MaC shall not enable the routing of system broadcast services in any Media Coupler: it
shall make sure that PID_RF_SBC_CONTROL has the value “Disable” in all MCs in the
installation. It can either set this explicitly, or it can assume this after the automatic time-out
for this Parameter has expired and all MCs have assumed the default value “disable” again
for their PID_RF_SBC_CONTROL.
**STEP 1:** **Discovery of the Object Indexes of the Router Objects of the Secondary**
**Sides of the TP1/RF Media Couplers**

The S-Mode MaC should know the value of the PID_RF_SBC_CONTROL in the Media
Couplers. If not, then these have to be set appropriately before. It should also know the Object
Indexes of the Router Objects of the Secondary Side from its product storage. If not, this should
also be discovered before.


**IF MaC does not know the SBC routing in the MCs in the installation THEN {**


/* If the MaC does not know the Object Indexes of the Secondary Sides. */
**FOR EACH TP1/RF Media Coupler n in the installation {**

NM_ObjectIndex_Read(ASAP = N.IA, comm_mode_req = ptp-cl, objct_type = Router Object Type,
PID = PID_OBJECT_INDEX, test_info = (00, 255))
}
This will return the Object indexes of all Router Objects of the TP1/RF Media Couplers in the
installation. The first instance will always be the Router Object of the Primary Side, which is not
needed here. It is assumed here that the Coupler Model 2.0, mask 2920h is installed, in which
the Router Object of the RF Interface will be the second instance.

**STEP 2:** **Disable routing of system broadcast services in all TP1/RF Media Couplers**

/* Then the System Broadcast Routing Parameter can be set to “disable” in each TP1/RF MC. */
**FOR EACH TP1/RF Media Coupler n in the installation {**

DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,
command = Disable, error)
}
}

If this results in no errors, then the Configuration Procedure shall continue.

If there is any error, then the MaC shall abort the Configuration Procedure and the common
error handling for “Preparing the field” (2.6.1.1.2) shall apply.

Now, the routing of system broadcast services is disabled in all TP1/RF Media Couplers.

**STEP 3:** **Assignment of DoA and IA**

The Domain Address and the Individual Address can now be assigned to the MaS. (In the given
example DoA = 3 and IA = 1.3.10).

Savedate: Filename: page 33 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

/* The MaC shall use system broadcast communication mode to initiate this procedure. */
NM_DomainAndIndividualAddressWrite2(NmpDoANew = 3, NmpIANew = 1.3.10, NmpIACurrent)

2.6.1.1.4 MaC and MaS are in a different RF Domain

EXAMPLE 6 This is the case in the reference topology of Figure 6, if the MaC assigns the DoA and IA of device 2. Device 2
is not assigned an IA yet, but the IANEW that it shall be assigned (1.2.20) will make it belong to a different Subnetwork 1.2 than the
MaC.

**Requirements for the MaC**

- The MaC shall use broadcast communication mode to handle system broadcast services,
and not system broadcast communication mode.

- The MaC shall enable routing of system broadcast services in the MC that will couple to the
Subnetwork to which the MaS will later belong and set PID_RF_SBC_CNTROL to route the
system broadcast services on system broadcast communication mode.

EXAMPLE 7 In the reference topology in Figure 6, the MaC shall set PID_RF_SBC_CONTROL in MC 1.2.0 to
“system broadcast”.

- If the MaC is itself connected to a different KNX RF Subnetwork, then it shall enable routing
of system broadcast services in the MC that couples to its own Subnetwork and set
PID_RF_SBC_CONTROL to “broadcast”.

EXAMPLE 8 In the reference topology in Figure 6, the MaC shall set PID_RF_SBC_CONTROL in MC 1.3.0 to
“broadcast”.

The working together of these measures is shown in Annex A.1

**STEP 1:** **Discovery of the Object Indexes of the Router Objects of the Secondary**
**Sides of the TP1/RF Media Couplers**

This is identical to step 1 above.

**STEP 2:** **Set PID_RF_SBC_CONTROL appropriately in all TP1/RF Media Couplers**

If there is any error in the below, then the MaC shall abort the Configuration Procedure and the
common error handling for “Preparing the field” (2.6.1.1.2) shall apply.

**2.1 For all Media Couplers except 1.3.0 and 1.2.0**

This is the same procedure as step 2 above.

/* Then the System Broadcast Routing Parameter can be set to “disable” in each TP1/RF MC. */
**FOR EACH further TP1/RF Media Coupler n in the installation {**

DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,
command = Disable, error)
}
}

**2.2 For the “local” MC 1.3.0**

DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,

command = “broadcast”, error)

Savedate: Filename: page 34 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**2.3 For the “remote” MC 1.2.0**

DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,

command = ““system **broadcast””, error)**

**STEP 3:** **Assignment of DoA and IA**

The Domain Address and the Individual Address can now be assigned to the MaS. (In the given
example DoA = 2 and IA = 1.2.20).

/* The MaC shall use broadcast communication mode to initiate this procedure. */
NM_DomainAndIndividualAddressWrite2(NmpDoANew = 3, NmpIANew = 1.3.10, NmpIACurrent)
/* MC 1.2.0 will according its setting use system broadcast communication mode */
/* when forwarding the messages. */

**STEP 4:** **Disable routing of system broadcast services in MC 1.2.0 and 1.3.0**


**FOR MC 1.2.0 and MC 1.3.0 {**


DM_FunctionProperty_Write_R(OI = Router Object Instance 2, PID = PID_RF_SBC_CONTROL,
command = “disable”, error)

}
}

###### 2.6.1.2 Deep Scan
This procedures searches a Subnetwork on KNX with a given Subnetwork Address for all the
Individual Addresses that are used in it.

/* Search for all the Individual Addresses in the Subnetwork X. */
NM_SubnetworkDevices_Scan2(SNA =X, DA[]);

This returns a list of all Device Addresses DA[] that are occupied in the Subnetwork.

This Network Configuration Procedure shall only be applied on a KNX RF Subnetwork.

###### 2.6.1.3 Other Network Configuration Procedures
These will be specified in a next version of this document.

##### 2.6.2 Device Configuration Procedures

###### 2.6.2.1 Common aspects – bidirectional mode

2.6.2.1.1 Keep the bidirectional mode enabled in more than one KNX RF S-Mode device
In case the MaC is requested to perform the Network – and Device Configuration Procedures of
multiple KNX RF S-Mode devices together, then it may happen that, while the MaC is handling
one device, the bidirectional mode time out in one or more other devices. To prevent from this,
the MaC may keep the bidirectional mode enabled by accessing PID_RF_BIDIR_TIMEOUT
over system broadcast communication.

Savedate: Filename: page 35 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

/* Set the Bidirectional Mode Time-out in all semi-directional devices */
/* in which bidirectional mode is currently enabled. */
A_SystemNetworkParameter_Write(object_type = “RF Medium Object”, PID = PID_RF_BIDIR_TIMEOUT,

value = “new bidirectional mode time-out”)

The MaC shall set the value of the new bidirectional mode time-out to a value that it estimates
to need before it can handle the first next device (in point-to-point communication). This action
may be repeated as long as necessary to keep the bidirectional mode enabled in further
devices.

Savedate: Filename: page 36 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

#### 2.7 External Message Interface

 _In clause 4.1.4.3.2 in [14], it was so far only foreseen that the cEMI Server fills in its own KNX Serial Number,_
_this was written explicitly. It was not foreseen that the cEMI Server would fill in alternatively its own DoA. So,_
_this had to be added._

**Field** **Bit** **Description** **Coding**
RF-‘Info bit 7 (msb) Route Last flag 0: This message is not
The corresponding field in the RF message shall contain yet routed by a
the Route Last flag as set by the transmitter. Coupler.

                 - L_Data.req: the cEMI Server shall set the Rout Last 1: This message is
flag in the KNX RF Frame according the value of this routed by a
field. Coupler.

                 - L_Data.con: the cEMI Server shall set this field to the
same value as in the corresponding preceding
L_Data.req; the cEMI Client shall ignore the value of
this field.

                 - L_Data.ind: the cEMI Server shall set the value of this

field according the value of the Route Last flag in the
received KNX RF Frame.

... ... ... ...
RF-‘SN’ KNX Serial Number or DoA: shall be interpreted as 000000000000h: void
KNX Serial Number or DoA according to ‘SB’ flag in (no valid KNX Serial
cEMI Control Field 1. number or DoA)

                 - L_Data.req:

**SN field = 000000000000h**

**SB –**
**flag** **yes (= void)** **no**

**0** The cEMI Server shall The cEMI Server shall
insert its own KNX insert the value of the
Serial Number in the ‘SN’ field in the RF
RF message to be message to be sent.
sent.

**1** The cEMI Server shall The cEMI Server shall
insert its own DoA in insert the value of the
the RF message to be ‘SN’ field as DoA the
sent. RF message to be

sent.

                 - L_Data.con: shall contain the effective value of SN or
DoA in the sent RF message.

                 - L_Data.ind: shall contain the received value of the SN

or the DoA from RF message

... ... ... ...

Savedate: Filename: page 37 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|_<br>SB –<br>flag|SN field = 000000000000h|Col3|
|---|---|---|
|_<br>**SB –**<br>**flag**|**yes (= void)**|**no**|
|**0 **|The cEMI Server shall<br>insert its own KNX<br>Serial Number in the<br>RF message to be<br>sent.|<br> <br> <br> <br>The cEMI Server shall<br>insert the value of the<br>‘SN’ field in the RF<br>message to be sent.|
|**1 **|The cEMI Server shall<br>insert its own DoA in<br>the RF message to be<br>sent.|<br> <br> <br>The cEMI Server shall<br>insert the value of the<br>‘SN’ field as DoA the<br>RF message to be<br>sent.|

|Field|Bit|Description|Coding|
|---|---|---|---|
|RF-‘Info|bit 7 (msb)|Route Last flag<br>The corresponding field in the RF message shall contain<br>the Route Last flag as set by the transmitter.<br>- L_Data.req: the cEMI Server shall set the Rout Last<br>flag in the KNX RF Frame according the value of this<br>field.<br>- L_Data.con: the cEMI Server shall set this field to the<br>same value as in the corresponding preceding<br>L_Data.req; the cEMI Client shall ignore the value of<br>this field.<br>- L_Data.ind: the cEMI Server shall set the value of this<br>field according the value of the Route Last flag in the<br>received KNX RF Frame.|0: This message is not<br>yet routed by a<br>Coupler.<br>1: This message is<br>routed by a<br>Coupler.|
|...|...|...|...|
|RF-‘SN’||KNX Serial Number or DoA: shall be interpreted as<br>KNX Serial Number or DoA according to ‘SB’ flag in<br>cEMI Control Field 1.<br>- L_Data.req: <br>**SB –**<br>**flag**<br>**SN field = 000000000000h**<br>**yes (= void)**<br>**no**<br>**0 **<br>The cEMI Server shall<br>insert its own KNX<br>Serial Number in the<br>RF message to be<br>sent.<br>The cEMI Server shall<br>insert the value of the<br>‘SN’ field in the RF<br>message to be sent.<br>**1 **<br>The cEMI Server shall<br>insert its own DoA in<br>the RF message to be<br>sent.<br>The cEMI Server shall<br>insert the value of the<br>‘SN’ field as DoA the<br>RF message to be<br>sent.<br>- L_Data.con: shall contain the effective value of SN or<br>DoA in the sent RF message.<br>- L_Data.ind: shall contain the received value of the SN<br>or the DoA from RF message|000000000000h: void<br>(no valid KNX Serial<br>number or DoA)|
|...|...|...|...|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

#### 2.8 Profile definition

##### 2.8.1 Profile: mask 2705h

 _It is the intention in the future that each Profile gets its own document in Volume 6 “Profiles”, so that the own_
_identity, background and motivation of the Profile does not go lost, as has been the case with the System B_
_specifications as these got integrated in the KNX Specifications._
_This clause, and the following clauses for the System B implementation (2.8.2) and the KNX RF USB interface_
_(2.8.2.1) are considered to become such stand-alone papers._

###### 2.8.1.1 Introduction and common requirements
Mask 2705h shall be a realisation of the System 7 model in the KNX RF Communication
Medium.

###### 2.8.1.2 Profile: Operation

2.8.1.2.1 Aims
This Profile describes the features of a device necessary for operation. The aim is to guarantee
runtime Interworking between all devices in the system. The main components for this objective
are the support of group oriented (multicast) communication.

2.8.1.2.2 Common Profile
These Profiles refer to all devices in all Configuration Modes on all media. Medium dependent
features are described in clause 2.8.1.3.

**Feature**

1 Medium dependent Layers KNX RF medium
2 Physical Layer General M
3 Data Link Layer general M
4 Data Link Layer - Router n/a
5 Data Link Layer - Bridge n/a
6 Network Layer general M
7 Network Layer - Router n/a
8 Network Layer – Bridge n/a
9 Network Layer –RF Retransmitter O

Network Layer RF Retransmitter

10 Network Layer RF Media Coupler X
11 Transport Layer – multicast M
12 Transport Layer – connection oriented minimal X
13 AL – Group Object services M
14 AL – Property Value Services M
15 AL – Function Property Services M
16 AL – services on system broadcast communication M

mode

17 AL - services on broadcast communication mode M
18 AIL – GO M
19 AIL – IO M
20 AIL – Function Properties M
21 AIL – GO indirection O
22 Application Interface Layer for unidirectional devices X

Savedate: Filename: page 38 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Feature|mask 2705h|
|---|---|
|<br>1 Medium dependent Layers<br>2 Physical Layer General<br>3 Data Link Layer general<br>4 Data Link Layer - Router<br>5 Data Link Layer - Bridge<br>6 Network Layer general<br>7 Network Layer - Router<br>8 Network Layer – Bridge<br>9 Network Layer –RF Retransmitter<br>~~Network Layer RF Retransmitter~~<br>10 Network Layer RF Media Coupler<br>11 Transport Layer – multicast<br>12 Transport Layer – connection oriented minimal<br>13 AL – Group Object services<br>14 AL – Property Value Services<br>15 AL – Function Property Services<br>16 AL – services on system broadcast communication<br>mode<br>17 AL - services on broadcast communication mode<br>18 AIL – GO<br>19 AIL – IO<br>20 AIL – Function Properties<br>21 AIL – GO indirection<br>22 Application Interface Layer for unidirectional devices|KNX RF medium<br>M <br>M <br>n/a<br>n/a<br>M <br>n/a<br>n/a<br>O <br>X <br>M <br>X <br>M <br>M <br>M <br>M <br>M <br>M <br>M <br>M <br>O <br>X|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.2.2.1 Medium dependent Layers
The Profiles defined in clause 2.8.1.3 “Medium dependent layers” of this document apply.

2.8.1.2.2.2 Physical Layer - general

**Specification** **Test**

   - **General**

[07] (contains no requirement) none.

2.8.1.2.2.3 Data Link Layer - general

**Specification** **Test**

   - **General**

[08] - §1.1 “Functions of the Data Link Layer” tested with medium specific tests

    - §1.2 “Possible Media and their Impact on
Layer-2”

    - §1.3 “Objective”

   - **Individual address /Group Address**

[08] - §1.4 “Definitions” tested with medium specific tests

   - **Data Link Layer Protocol**

[08] - §3 “Data Link Layer Protocols” tested with medium specific tests

   - **Parameters**

[08] - §4 “Parameters of Layer-2” (except TP1 tested with medium specific tests
Fast Polling)

2.8.1.2.2.4 Network Layer - general

**Specification** **Test**

   - **General**

[09] - §1 “Overview” [16]

   - **NPDU**

[09] - §2.1 “NPDU” [16] - §3 (Black Box Tests)

                                                - All end devices

[15]                                 - RF bidirectional end device

   - **Parameters**

[09] - §2.3 “Parameters of Network Layer” - §3(Black Box Tests)

    - hop_count: preferred value: 6.     - All end devices

[15]                                 - RF bidirectional end device

   - **state machine**

[09] - §2.4.1 [16] - §3 (Black Box Tests)

                                                - All end devices

                                           
[15]                               - RF bidirectional end device

2.8.1.2.2.5 Network Layer – SN based RF Retransmitter

**Specification** **Test**

[02] - §6.1.7.2 “History List” [15] - §3

    - §6.1.7.2 “RF Repeat Counter”

Savedate: Filename: page 39 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **General**<br>[07] (contains no requirement)|none.|

|Specification|Test|
|---|---|
|• **General**<br>[08] -<br>§1.1 “Functions of the Data Link Layer”<br>- <br>§1.2 “Possible Media and their Impact on<br>Layer-2”<br>- <br>§1.3 “Objective”|tested with medium specific tests|
|• **Individual address /Group Address**<br>[08] -<br>§1.4 “Definitions”|tested with medium specific tests|
|• **Data Link Layer Protocol**<br>[08] -<br>§3 “Data Link Layer Protocols”|tested with medium specific tests|
|• **Parameters**<br>[08] -<br>§4 “Parameters of Layer-2” (except TP1<br>Fast Polling)|tested with medium specific tests|

|Specification|Test|
|---|---|
|• **General**<br>[09] -<br>§1 “Overview”|[16]|
|• **NPDU**<br>[09] -<br>§2.1 “NPDU”|[16] -<br>§3 (Black Box Tests)<br>- <br>All end devices<br>[15] <br>- <br>RF bidirectional end device|
|• **Parameters**<br>[09] -<br>§2.3 “Parameters of Network Layer”<br>- <br>hop_count: preferred value: 6.|- <br>§3(Black Box Tests)<br>- <br>All end devices<br>[15] <br>- <br>RF bidirectional end device|
|• **state machine**<br>[09] -<br>§2.4.1|[16] -<br>§3 (Black Box Tests)<br>- <br>All end devices<br>- <br>[15] <br>- <br>RF bidirectional end device|

|Specification|Test|
|---|---|
|[02] -<br>§6.1.7.2 “History List”<br>- <br>§6.1.7.2 “RF Repeat Counter”|[15] -<br>§3|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.2.2.6 Network Layer – DoA based RF Retransmitter
Please refer to clause 2.8.3 “Profile: Domain Address based RF Retransmitter”.

2.8.1.2.2.7 Transport Layer–multicast

**Specification** **Test**

   - **TPDU**

[10] - §1.2 “Point-to-Multipoint, Connectionless [17] - All end devices
(Multicast) Communication Mode”

    - §3.1 “T_Data_Group Service”

**[15]**

                                                - RF bidirectional end device

2.8.1.2.2.8 Application Layer – Group Object Services

**Specification** **Test**

   - **APDU**

[11] - §2 “APDU” [19] - All end devices
```
    o A_GroupValue_Read-PDU
    o A_GroupValue_Response-PDU

```
`o A_GroupValue_Write-PDU` [15]

                                                 - RF bidirectional end device

   - **Data length**

[11] data must be coded as indicated in §3.1 [19] - All end devices

“Application Layer Services on Multicast
Communication Mode”

[15]

                                                 - RF bidirectional end device

2.8.1.2.2.9 Application Layer – Property Value Services

**Specification** **Test**

   - **APDU**

[11] - §2 “APDU”

    - §3.4.3.1 “A_PropertyValue_Readservice”

    - §3.4.3.2 “A_PropertyValue_Writeservice”

2.8.1.2.2.10 Application Layer – Function Property Services

**Specification** **Test**

   - **APDU**

[11] - §2 “APDU”

    - §3.4.5 “Function Property Services”

Savedate: Filename: page 40 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **TPDU**<br>[10] -<br>§1.2 “Point-to-Multipoint, Connectionless<br>(Multicast) Communication Mode”<br>- <br>§3.1 “T_Data_Group Service”|[17]<br>- <br>All end devices<br>**[15]** <br>- <br>RFbidirectional end device|

|Specification|Test|
|---|---|
|• **APDU**<br>[11] -<br>§2 “APDU”<br>`o` A_GroupValue_Read-PDU<br>`o` A_GroupValue_Response-PDU<br>`o` A_GroupValue_Write-PDU|[19]<br>- <br>All end devices<br>[15]<br>- <br>RF bidirectional end device|
|• **Data length**<br>[11] data must be coded as indicated in §3.1<br>“Application Layer Services on Multicast<br>Communication Mode”|[19]<br>- <br>All end devices<br>[15]<br>- <br>RF bidirectional end device|

|Specification|Test|
|---|---|
|• **APDU**<br>[11] -<br>§2 “APDU”<br>- <br>§3.4.3.1 “A_PropertyValue_Read-<br>service”<br>- <br>§3.4.3.2 “A_PropertyValue_Write-<br>service”||

|Specification|Test|
|---|---|
|• **APDU**<br>[11] -<br>§2 “APDU”<br>- <br>§3.4.5 “Function Property Services”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.2.2.11 Application Layer – services on system broadcast communication mode
Unless indicated explicitly, the services shall be supported in full, this means, all service
primitives shall be supported (.req, .Lcon, .ind, .res, .Rcon and .Acon).

**Specification** **Test**

   - **APDU**

[11] - A_DomainAddress_Write

    - A_DomainAddress_Read

    - A_DomainAddressSerialNumber_Read

    - A_DomainAddressSerialNumber_Write

    - A_DomainAddressSelective_Read

[25] - A_SystemNetworkParameter_Read

Mask 5705h implementations shall support these services both in broadcast as well as in
system broadcast communication model. If confirming or responding to a service, the
communication mode of the request shall be used.

2.8.1.2.2.12 Application Layer – AL services on broadcast communication mode
Unless indicated explicitly, the services shall be supported in full, this means, all service
primitives shall be supported (.req, .Lcon, .ind, .res, .Rcon and .Acon).

**Specification** **Test**

   - **APDU**

[11] - A_IndividualAddress_Write

    - A_IndividualAddress_Read

    - A_IndividualAddressSerialNumber_Read

    - A_IndividualAddressSerialNumber_Write

    - A_NetworkParameter_Read

    - A_NetworkParameter_Write

2.8.1.2.2.13 Application Interface Layer – Group Objects

**Specification** **Test**

   - **Group Objects**

[12] - §3 “Group Object Server” [18] - §1.3 “Group Object Tests”

                                                - all end devices

**[15] -**

                                                - RF bidirectional end device

2.8.1.2.2.14 Application Interface Layer – Interface Objects

**Specification** **Test**

   - **Interface Objects**

[12] - §4 “Interface Object Server”

2.8.1.2.2.15 Application Interface Layer – Function Properties

**Specification** **Test**

   - **Function Properties**

[12] - §4.4.2 “Function Properties”

Savedate: Filename: page 41 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **APDU**<br>[11] -<br>A_DomainAddress_Write<br>- <br>A_DomainAddress_Read<br>- <br>A_DomainAddressSerialNumber_Read<br>- <br>A_DomainAddressSerialNumber_Write<br>- <br>A_DomainAddressSelective_Read<br>[25] -<br>A_SystemNetworkParameter_Read||

|Specification|Test|
|---|---|
|• **APDU**<br>[11] -<br>A_IndividualAddress_Write<br>- <br>A_IndividualAddress_Read<br>- <br>A_IndividualAddressSerialNumber_Read<br>- <br>A_IndividualAddressSerialNumber_Write<br>- <br>A_NetworkParameter_Read<br>- <br>A_NetworkParameter_Write|<br>|

|Specification|Test|
|---|---|
|• **Group Objects**<br>[12] -<br>§3 “Group Object Server”|[18] -<br>§1.3 “Group Object Tests”<br>- <br>all end devices<br>**[15]** -<br>- <br>RFbidirectional end device|

|Specification|Test|
|---|---|
|• **Interface Objects**<br>[12] -<br>§4 “Interface Object Server”||

|Specification|Test|
|---|---|
|• **Function Properties**<br>[12] -<br>§4.4.2 “Function Properties”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.2.2.16 Application Layer Interface Layer – Group Objects indirection

**Specification** **Test**

   - **Group Object Indirection**

[12] - §3.4 “Group Object Indirection – Group
Object Handles and PID-OBJECT_VALUE (PID = 62)

[03] - §4.3.13 “PID_OBJECT_VALUE (PID =
62)”

2.8.1.2.3 Specific parts
These Profiles describe runtime mechanisms that are not relevant for all devices.

**Feature**

1 Data Link Layer – polling n/a
2 Detection of Usage of own Individual Address X
3 Extended Group Object Flags M

2.8.1.2.3.1 Extended Group Object Flags

**Specification** **Test**

   - **configuration flags: update on read**

**response (1 bit)**

[12] - §3.3.2 “Reading the Group Object Value [18] - §1.3 (Group Object Tests)
” (Update Enable)

###### 2.8.1.3 Medium dependent layers

2.8.1.3.1 Goal
This Profile describes the requirements on a device in order to guarantee compliance with one
of the standard communication media of the system. Compliance with one of these Profiles is a
prerequisite for both runtime and configuration Interworking.

Savedate: Filename: page 42 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **Group Object Indirection**<br>[12] -<br>§3.4 “Group Object Indirection – Group<br>Object Handles and PID-OBJECT_-<br>VALUE (PID = 62)<br>[03] -<br>§4.3.13 “PID_OBJECT_VALUE (PID =<br>62)”||

|Feature|mask 2705h|
|---|---|
|1 Data Link Layer – polling<br>2 Detection of Usage of own Individual Address<br>3 Extended Group Object Flags|n/a<br>X <br>M|

|Specification|Test|
|---|---|
|• **configuration flags: update on read**<br>**response (1 bit)**<br>[12] -<br>§3.3.2 “Reading the Group Object Value<br>” (Update Enable)|[18] -<br>§1.3 (Group Object Tests)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.3.2 RF medium dependent layers

1. Physical Layer Sender X
2. Physical Layer Transceiver M
3. Data Link Layer M
4. KNX Serial Number for multicast communication O
5. RF Domain Address for multicast communication M
6. LTE frame format O
7. Extended LTE Group Addresses and frame acceptance O
8. Data Link Layer-Retransmitter O
9. Data Link Layer-Media Coupler O
10. Local Services Metering O
11. KNX Serial Number M
12. APDU-length ≥ 15

2.8.1.3.2.1 Physical Layer Sender

**Specification** **Test**

[02] - §5.1 “Physical Layer for KNX RF Ready
and BiBat”

    - §5.2 “Datagram structure for RF Ready
and BiBat”

2.8.1.3.2.2 Physical Layer Transceiver

**Specification** **Test**

[02] - §5.1 “Physical Layer for KNX RF Ready
and BiBat”

    - §5.2 “Datagram structure for RF Ready
and BiBat”

The S-Mode Configuration Procedures may result in a lot of Telegrams on the KNX RF Medium.
For this, it is strongly recommended, both for the MaS as for the S-Mode MaC, to apply Listen
Before Talk (LBT, see [02]), to avoid RF collision. LBT is part of the KNX RF Multi type, but with
S-Mode Configuration Procedures, the Telegram rate is higher than the duty cycle requirements
for the KNX RF Ready type. Therefore, in order not to limit the Telegram rate, LBT is a
recommended solution.

Savedate: Filename: page 43 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Col1|mask 2705h|
|---|---|
|1. Physical Layer Sender<br>2. Physical Layer Transceiver<br>3. Data Link Layer<br>4. KNX Serial Number for multicast communication<br>5. RF Domain Address for multicast communication<br>6. LTE frame format<br>7. Extended LTE Group Addresses and frame acceptance<br>8. Data Link Layer-Retransmitter<br>9. Data Link Layer-Media Coupler<br>10.<br>Local Services Metering<br>11.<br>KNX Serial Number<br>12.<br>APDU-length|X <br>M <br>M <br>O <br>M <br>O <br>O <br>O <br>O <br>O <br>M <br>≥ 15|

|Specification|Test|
|---|---|
|[02] -<br>§5.1 “Physical Layer for KNX RF Ready<br>and BiBat”<br>- <br>§5.2 “Datagram structure for RF Ready<br>and BiBat”||

|Specification|Test|
|---|---|
|[02] -<br>§5.1 “Physical Layer for KNX RF Ready<br>and BiBat”<br>- <br>§5.2 “Datagram structure for RF Ready<br>and BiBat”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.3.2.3 Data Link Layer

**Specification** **Test**

   - **Frame format**

[02] - §5.1.2 “Datagram structure for RF Ready
and BiBat

   - **Medium Access Control**

[02] - §5.1.3 “Medium access”

   - **Addressing**

[02] - §6.1.1.1 “Extended Group Address” –
point-to-multipoint – DoA of sender

    - §6.1.4.2 “Duplication prevention”

 _The reference to clause 6.1.1.1 is actually a forward reference to where this will be specified after integration_
_of this document. For the time being, what is referred to here as clause 6.1.1.1 is actually specified in_
_clause 2.2.1.1 of this document._

2.8.1.3.2.4 KNX Serial Number for multicast communication

**Specification** **Test**

[02] - §6.1.1.1 “Extended Group Address”

 _Please note that the contents of the referred clause will be modified by this document._

2.8.1.3.2.5 RF Domain Address for multicast communication

**Specification** **Test**

[02] - §6.1.1.4 “RF Domain Address”

 _Please note that the contents of the referred clause will be modified by this document._

2.8.1.3.2.6 LTE frame format

**Specification** **Test**

[02] - §6.1.2.4 “First block”

    - §6.1.2.6 “Second block for LTE Extended
Datagrams”

2.8.1.3.2.7 Extended LTE Group Addresses and frame acceptance

**Specification** **Test**

[02] - §6.1.5.3.1 “Additional Frame acceptance
criteria for LTE Extended Datagrams”

2.8.1.3.2.8 Data Link Layer-Retransmitter

**Specification** **Test**

[02] - §6.2.2 “The Layer-2 of an RF
Retransmitter”

Savedate: Filename: page 44 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **Frame format**<br>[02] -<br>§5.1.2 “Datagram structure for RF Ready<br>and BiBat||
|• **Medium Access Control**<br>[02] -<br>§5.1.3 “Medium access”||
|• **Addressing**<br>[02] -<br>§6.1.1.1 “Extended Group Address” –<br>point-to-multipoint – DoA of sender<br>- <br>§6.1.4.2 “Duplicationprevention”||

|Specification|Test|
|---|---|
|[02] -<br>§6.1.1.1 “Extended Group Address”||

|Specification|Test|
|---|---|
|[02] -<br>§6.1.1.4 “RF Domain Address”||

|Specification|Test|
|---|---|
|[02] -<br>§6.1.2.4 “First block”<br>- <br>§6.1.2.6 “Second block for LTE Extended<br>Datagrams”||

|Specification|Test|
|---|---|
|[02] -<br>§6.1.5.3.1 “Additional Frame acceptance<br>criteria for LTE Extended Datagrams”||

|Specification|Test|
|---|---|
|[02] -<br>§6.2.2 “The Layer-2 of an RF<br>Retransmitter”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.3.2.9 Data Link Layer-Media Coupler

**Specification** **Test**

[02] - §6.1.6 “The Layer-2 of an RF-TP Media
Coupler”

2.8.1.3.2.10 Local Services Metering

**Specification** **Test**

[14] - §2 “Message format” – code for
L_Meter.ind

    - §3.3.3.5 “L_Meter.ind”

2.8.1.3.2.11 KNX Serial Number

**Specification** **Test**

[03] - §4.15.1 “Abstract Resource definition”

    - §4.15.2 “KNX Serial Number –
Realisation Type 1”

###### 2.8.1.4 Configuration & Management (S-Mode, Server)
This clause describes the requirements on an S-Mode device, which are relevant for
configuration as a Management Server accessed only via the bus. The objective is to guarantee
Interworking with the configuration tool (ETS).

2.8.1.4.1 Communication

**Feature**

1 TL - broadcast M
2 TL - connection oriented M
3 TL - connection oriented minimal X
4 TL - connectionless M

Savedate: Filename: page 45 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[02] -<br>§6.1.6 “The Layer-2 of an RF-TP Media<br>Coupler”||

|Specification|Test|
|---|---|
|[14] -<br>§2 “Message format” – code for<br>L_Meter.ind<br>- <br>§3.3.3.5 “L_Meter.ind”||

|Specification|Test|
|---|---|
|[03] -<br>§4.15.1 “Abstract Resource definition”<br>- <br>§4.15.2 “KNX Serial Number –<br>Realisation Type 1”||

|Col1|Feature|Mask 2705h|
|---|---|---|
|1<br>2<br>3<br>4|TL - broadcast<br> TL - connection oriented<br> TL - connection oriented minimal<br> TL - connectionless|M <br>M <br>X <br>M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.1.1 TL - broadcast

**Specification** **Test**

[10] All features of the following clauses are

mandatory except for the coding of the
internal service primitives.

    - §1.3 “Point-to-all-Points Connectionless
(Broadcast) Communication Mode”

    - §2 “TPDU”

    - §3.4 “T_Data_Broadcast”

    - §4 “Parameters of Transport Layer”

2.8.1.4.1.2 TL - connection oriented

**Specification** **Test**

[10] All features of the following clauses are [17]
mandatory except for the coding of the internal
service primitives.

      - §1.6 “Point-to-Point, Connection-Oriented
Communication Mode”

      - §2 “TPDU”

      - §3.7 “T_Connect service”

      - §3.8 “T_Disconnect service”

      - §3.9 “T_Data_Connected service”

      - §4 “Parameters of Transport Layer”

      - §5.1 “States”

      - §5.2 “Actions”

      - §5.3.3 “Style 3”

2.8.1.4.1.3 TL - connectionless

**Specification** **Test**

[10] All features of the following clauses are [17]

mandatory except for the coding of the
internal service primitives:

    - §1.5 “Point-to-point connectionless
Communication Mode”

    - §2 “TPDU”

    - §3.6 “T_Data_Individual”

Savedate: Filename: page 46 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[10] All features of the following clauses are<br>mandatory except for the coding of the<br>internal service primitives.<br>- <br>§1.3 “Point-to-all-Points Connectionless<br>(Broadcast) Communication Mode”<br>- <br>§2 “TPDU”<br>- <br>§3.4 “T_Data_Broadcast”<br>- <br>§4 “Parameters of Transport Layer”||

|Specification|Test|
|---|---|
|[10]<br>All features of the following clauses are<br>mandatory except for the coding of the internal<br>service primitives.<br>- <br>§1.6 “Point-to-Point, Connection-Oriented<br>Communication Mode”<br>- <br>§2 “TPDU”<br>- <br>§3.7 “T_Connect service”<br>- <br>§3.8 “T_Disconnect service”<br>- <br>§3.9 “T_Data_Connected service”<br>- <br>§4 “Parameters of Transport Layer”<br>- <br>§5.1 “States”<br>- <br>§5.2 “Actions”<br>- <br>§5.3.3 “Style 3”|[17]|

|Specification|Test|
|---|---|
|[10] All features of the following clauses are<br>mandatory except for the coding of the<br>internal service primitives:<br>- <br>§1.5 “Point-to-point connectionless<br>Communication Mode”<br>- <br>§2 “TPDU”<br>- <br>§3.6 “T_Data_Individual”|[17]|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.2 Device Management
In this clause all general requirements on a device concerning the mechanisms used for access
by the Management Client are described.

**Feature**

1 Direct memory Access M
2 DMA on User Memory M
3 Verify mode[ 4)] M
4 Interface Object Handling[ 5)] M
5 Reduced Interface Objects X
6 Function Properties M

7 Load and Run State Machines

a. Realisation Type 1 M

b. Realisation Type 2 O
8 Hardware Specific Parameters n/a
9 RAM cleared M
10 User EEPROM M
11 Restart
a. connectionless O
b. connection-oriented M
c. Master Reset O
12 Authorization[ 6)] M
nr of access levels 16
13 Memory Control Table O

4) If Verify Mode is not implemented, it shall always be off.
5) Please refer to the specification of mandatory and optional Interface Objects, Properties and Property fields
further in this Profile definition.
6) The support of the A_Authorize- and the A_Keywrite-service does not imply that the device itself has access
protected areas. If this is not the case, a device shall always allow – regardless of the attributed keys – access to
the highest level (0), including when receiving an illegal key (‘illegal’ in this sense meaning another key than any
of the keys entered in the key table).

|Col1|Col2|
|---|---|
|**Feature**|mask<br>2705h|
|1 Direct memory Access<br>2 DMA on User Memory<br>3 Verify mode 4) <br>4 Interface Object Handling 5) <br>5 Reduced Interface Objects<br>6 Function Properties<br>7 Load and Run State Machines<br>a. Realisation Type 1<br>b. Realisation Type 2<br>8 Hardware Specific Parameters<br>9 RAM cleared<br>10 User EEPROM<br>11 Restart<br> a. connectionless<br> b. connection-oriented<br> c. Master Reset<br>12 Authorization 6) <br>nrof access levels|M <br>M <br>M <br>M <br>X <br>M <br>M <br>O <br>    n/a<br>M <br>M <br>O <br>M <br>O <br>M <br>16|
|13 Memory Control Table|O|


Savedate: Filename: page 47 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.2.1 Direct Memory Access

**Specification** **Test**

[13] - §3.2.1 “DMP_Connect_RCo” [18] - §2 “Network Management Server Tests

    - §3.3.2 “DMP_Disconnect_RCo” corresponding tests

    - §3.18.2 “DMP_MemRead_RCo”

    - §3.16.2 “DMP_MemWrite_RCo”

2.8.1.4.2.2 DMA on user memory

**Specification** **Test**

[13] - §3.19 “DM_UserMemWrite” [18] - §2 “Network Management Server Tests”
corresponding tests

2.8.1.4.2.3 Verify Mode (for A_Memory_Write)

**Specification** **Test**

[03] - §4.2.14.7 "Verify Mode Control" [18] - §2 ”Network Management Server Tests”
management server part. Tests 7.1 to 7.7

2.8.1.4.2.4 Interface Object Handling
Please also refer to the specification of mandatory and optional Interface Objects, Properties
and Property fields further in this Profile definition.

**Specification** **Test**

[13] - §3.22.2 “DMP_InterfaceObjectWrite_R” [18] - §2 “Network Management Server Tests”

    - §3.24.2 “DM_InterfaceObjectRead_R” corresponding tests

    - §3.23.2 “DMP_InterfaceObjectVerify_R”

    - §3.25.2 “DM_InterfaceObjectScan_R”

[12] - §4 “Interface Object Server” [18] - §2 “Network Management Server Tests”
corresponding tests

2.8.1.4.2.5 Reduced Interface Objects

**Specification** **Test**

[13] - §3.22.2 “DMP_ReducedInterfaceObject- [18] - §2 “Network Management Server Tests”
Write_R” corresponding tests

    - §3.24.3 “DMP_ReducedInterfaceObjectRead_R”

    - §3.25.3 “DMP_ReducedInterfaceObjectScan_R”

[12] - §4.1 “Common structure” [18] - §2 “Network Management Server Tests”

    - §4.3.2 “Reduced Interface Object” corresponding tests

2.8.1.4.2.6 Function Properties

**Specification** **Test**

[11] - §2 “APDU”

    - §3.4.1 “Introduction”

    - §3.4.5 “Function Property Services”

Savedate: Filename: page 48 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[13] - <br>§3.2.1 “DMP_Connect_RCo”<br>- <br>§3.3.2 “DMP_Disconnect_RCo”<br>- <br>§3.18.2 “DMP_MemRead_RCo”<br>- <br>§3.16.2 “DMP_MemWrite_RCo”|[18] -<br>§2 “Network Management Server Tests<br>corresponding tests|

|Specification|Test|
|---|---|
|[13] - <br>§3.19 “DM_UserMemWrite”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|[03] -<br>§4.2.14.7 "Verify Mode Control"<br>management serverpart.|[18] -<br>§2 ”Network Management Server Tests”<br>Tests 7.1 to 7.7|

|Specification|Test|
|---|---|
|[13] -<br>§3.22.2 “DMP_InterfaceObjectWrite_R”<br>- <br>§3.24.2 “DM_InterfaceObjectRead_R”<br>- <br>§3.23.2 “DMP_InterfaceObjectVerify_R”<br>- <br>§3.25.2 “DMInterfaceObjectScanR”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|
|__<br>[12] -<br>§4 “Interface Object Server”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|[13] -<br>§3.22.2 “DMP_ReducedInterfaceObject-<br>Write_R”<br>- <br>§3.24.3 “DMP_ReducedInterfaceObject-<br>Read_R”<br>- <br>§3.25.3 “DMP_ReducedInterfaceObject-<br>Scan_R”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|
|[12] -<br>§4.1 “Common structure”<br>- <br>§4.3.2 “Reduced Interface Object”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|[11] -<br>§2 “APDU”<br>- <br>§3.4.1 “Introduction”<br>- <br>§3.4.5 “Function Property Services”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Specification** **Test**

[12] - §4.1 “Common structure”

    - §4.2 “Minimal requirements of Interface
Objects”

    - §4.4.2 “Function Properties”

[13] - §3.26 “DM_FunctionProperty_Write_R”

2.8.1.4.2.7 Load - and Run State Machines

**a) Realisation Type 1 - Property based**

**Specification** **Test**

[03] - records

[13] - §3.27.3 “DMP_LoadStateMachineWrite_- [18] - §2 “Network Management Tests”
Rco_IO” corresponding tests

    - §3.28.3 “DM_LoadStateMachineVerify_R_IO”

    - §3.29.3 “DMP_LoadStateMachineRead_R_IO”

    - §3.30.3 “DMP_RunStateMachineWrite_R_IO”

    - §3.31.3 “DMP_RunStateMachineVerify_R_IO”

    - §3.32.3 “DMP_RunStateMachineRead_R_IO”

**b) Realisation Type 2 – Memory mapped**

**Specification** **Test**

[03] records

[13] - §3.27.2 [18] - §2 “Network Management Tests”
“DMP_LoadStateMachineWrite_Rco_Me corresponding tests
m”

    - §3.28.2
“DMP_LoadStateMachineVerify_Rco_Me
m”

    - §3.29.2
“DMP_LoadStateMachineRead_Rco_Me
m”

    - §3.30.2
“DMP_RunStateMachineWrite_Rco_Me
m”

    - §3.31.2
“DMP_RunStateMachineVerify_Rco_Me
m”

    - §3.32.2
“DMP_RunStateMachineRead_Rco_Me
m”

2.8.1.4.2.8 Hardware specific Parameters

**Specification** **Test**

   - **0100h (RW)**

[03] - §4.18 “OptionReg”

Savedate: Filename: page 49 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[12] -<br>§4.1 “Common structure”<br>- <br>§4.2 “Minimal requirements of Interface<br>Objects”<br>- <br>§4.4.2 “Function Properties”||
|[13] -<br>§3.26 “DM_FunctionProperty_Write_R”||

|a) Realisation Type 1 - Property based|Col2|
|---|---|
|**Specification**|**Test**|
|[03] -<br>records||
|[13] -<br>§3.27.3 “DMP_LoadStateMachineWrite_-<br>Rco_IO”<br>- <br>§3.28.3 “DM_LoadStateMachineVerify_-<br>R_IO”<br>- <br>§3.29.3 “DMP_LoadStateMachineRead_-<br>R_IO”<br>- <br>§3.30.3 “DMP_RunStateMachineWrite_-<br>R_IO”<br>- <br>§3.31.3 “DMP_RunStateMachineVerify_-<br>R_IO”<br>- <br>§3.32.3 “DMP_RunStateMachineRead_-<br>RIO”|[18] -<br>§2 “Network Management Tests”<br>corresponding tests|
|_<br>**b) Realisation Type 2 – Memory mapped**|_<br>**b) Realisation Type 2 – Memory mapped**|
|**Specification**|**Test**|
|[03] records||
|[13] -<br>§3.27.2<br>“DMP_LoadStateMachineWrite_Rco_Me<br>m”<br>- <br>§3.28.2<br>“DMP_LoadStateMachineVerify_Rco_Me<br>m”<br>- <br>§3.29.2<br>“DMP_LoadStateMachineRead_Rco_Me<br>m”<br>- <br>§3.30.2<br>“DMP_RunStateMachineWrite_Rco_Me<br>m”<br>- <br>§3.31.2<br>“DMP_RunStateMachineVerify_Rco_Me<br>m”<br>- <br>§3.32.2<br>“DMP_RunStateMachineRead_Rco_Me<br>m”|[18] -<br>§2 “Network Management Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|• **0100h (RW)**<br>[03] -<br>§4.18 “OptionReg”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.2.9 RAM cleared
This is the RAM to be cleared by the Management Client during download of an application
program.

**Specification** **Test**

   - **RAM**

[03] - Resources from 0700h

2.8.1.4.2.10 User EEPROM
This part of the EEPROM can be used by an application program.

**e) System 7**

**Specification** **Test**

[03] - from 4000h to CFFFh

2.8.1.4.2.11 Restart

2.8.1.4.2.11.1 Restart connectionless

**Specification** **Test**

[13] - §3.7.2 DM_Restart_RCl

2.8.1.4.2.11.2 Restart connection-oriented

**Specification** **Test**

[13] - §3.2.1 DMP_Connect_RCo - §2.9.1 “Send Restart”

    - §3.7.3 DM_Restart_RCo

2.8.1.4.2.11.3 Master Reset
Master Reset is optional for the mask 2705h. However, as KNX RF is an open medium, it would
be possible for any hacker to set a KNX RF S-Mode device out of operation by an unprotected
Master Reset. Therefore, it is recommended that if Master Reset is implemented, that it only be
accepted from an authenticated communication partner, using the A_Authorize-service or KNX
Data Security (see [22]).

**Specification** **Test**

[03] - §4.9.1 “Group Address Table” – “default To be completed.
state”

    - §4.10.1 “Group Object Association Table”
– “default state”

[13] - §3.7.2 “DM_Restart_RCl” – master reset To be completed.

    - §3.7.3 “DM_Restart_RCo” – master reset

Savedate: Filename: page 50 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **RAM**<br>[03] -<br>Resources from 0700h||

|e) System 7|Col2|
|---|---|
|**Specification**|**Test**|
|[03] -<br>from 4000h to CFFFh||

|Specification|Test|
|---|---|
|[13] -<br>§3.7.2 DM_Restart_RCl||

|Specification|Test|
|---|---|
|[13] -<br>§3.2.1 DMP_Connect_RCo<br>- <br>§3.7.3 DM_Restart_RCo|- <br>§2.9.1 “Send Restart”|

|Specification|Test|
|---|---|
|[03] -<br>§4.9.1 “Group Address Table” – “default<br>state”<br>- <br>§4.10.1 “Group Object Association Table”<br>– “default state”|To be completed.|
|[13] -<br>§3.7.2 “DM_Restart_RCl” – master reset<br>- <br>§3.7.3 “DM_Restart_RCo” – master reset|To be completed.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.2.12 Authorization

**Specification** **Test**

   - **Management Procedures**

[13] - §3.5.1 “DM_Authorize_RCo”

    - §3.5.2 “DM_Authorize2_RCo”

    - §3.6 “DM_SetKey”

2.8.1.4.2.13 Memory Control Table

**Specification** **Test**

   - **PID_MCB_TABLE**

[03] - §4.2.27 “PID_MCB_TABLE” (PID = 27)
as read-only.

2.8.1.4.3 Device Discovery

**Feature**

1 Management Procedures with A_SystemNetwork
Parameter_Read-PDU

1.1 NM_Read_SerialNumber_By_ProgrammingMode M
1.2 NM_Read_SerialNumber_By_ExFactoryState M
1.3 NM_Read_SerialNumber_By_PowerReset M

2.8.1.4.3.1 NM_Read_SerialNumber_By_ProgrammingMode

**Specification** **Test**

[25] - §2.4.2.4 “NM_Read_SerialNumber_By_ProgrammingMode”

2.8.1.4.3.2 NM_Read_SerialNumber_By_ExFactoryState

**Specification** **Test**

[25] - §2.4.2.5 “NM_Read_SerialNumber_By_ExFactoryState”

2.8.1.4.3.3 NM_Read_SerialNumber_By_PowerReset

**Specification** **Test**

[25] - §2.4.2.6 “NM_Read_SerialNumber_By_PowerReset”

Savedate: Filename: page 51 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **Management Procedures**<br>[13] -<br>§3.5.1 “DM_Authorize_RCo”<br>- <br>§3.5.2 “DM_Authorize2_RCo”<br>- <br>§3.6 “DM_SetKey”||

|Specification|Test|
|---|---|
|• **PID_MCB_TABLE**<br>[03] -<br>§4.2.27 “PID_MCB_TABLE” (PID = 27)<br>as read-only.||

|Feature|Mask 2705h|
|---|---|
|1 Management Procedures with A_SystemNetwork-<br>Parameter_Read-PDU<br> 1.1 NM_Read_SerialNumber_By_ProgrammingMode<br> 1.2 NM_Read_SerialNumber_By_ExFactoryState<br> 1.3 NM_Read_SerialNumber_By_PowerReset|M <br>M <br>M|

|Specification|Test|
|---|---|
|[25] -<br>§2.4.2.4 “NM_Read_SerialNumber_By_-<br>ProgrammingMode”||

|Specification|Test|
|---|---|
|[25] -<br>§2.4.2.5 “NM_Read_SerialNumber_By_-<br>ExFactoryState”||

|Specification|Test|
|---|---|
|[25] -<br>§2.4.2.6 “NM_Read_SerialNumber_By_-<br>PowerReset”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.4 Device Identification

**Feature**

1 Device Descriptor Service - connection oriented M
2 Device Descriptor Service - connectionless M
3 Device Descriptor Type 0 M
4 Device Descriptor Type 2 O
5 Device Descriptor InfoReport O
6 Management Descriptor 1 O
7 Identification of hardware M
8 Identification of Application O

2.8.1.4.4.1 Device Descriptor Service - connection oriented

**Specification** **Test**

[11] - §3.4.2.1 “A_DeviceDescriptor_Read- [18] - §2.5.1 “Read Mask-version”
service” (Network Management Tests)

2.8.1.4.4.2 Device Descriptor Service - connectionless

**Specification** **Test**

[11] - §3.4.2.1 “A_DeviceDescriptor_Read- [18] - §2.5.1 “Read Mask-version”
service” (Network Management Tests)

[13] - §3.2.2 “DMP_Connect_RCl”

2.8.1.4.4.3 Device Descriptor Type 0

**Specification** **Test**

[03] - §4.1.2 “Device Descriptor Type 0” [18] - §2.5.1 “Read Mask-version”
(Network Management Tests)

2.8.1.4.4.4 Management Descriptor 1

**Specification** **Test**

   - **Management Descriptor 1**

[03] - §4.3.23 “PID_MGT_DESCRIPTOR
(PID = 72)”

[13] - §3.4.2 “DM_Identify_R”

Savedate: Filename: page 52 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Feature|Mask 2705h|
|---|---|
|1 Device Descriptor Service - connection oriented|M|
|2 Device Descriptor Service - connectionless|M|
|3 Device Descriptor Type 0|M|
|4 Device Descriptor Type 2|O|
|5 Device Descriptor InfoReport|O|
|6 Management Descriptor 1|O|
|7 Identification of hardware|M|
|8 Identification of Application|O|

|Specification|Test|
|---|---|
|[11] -<br>§3.4.2.1 “A_DeviceDescriptor_Read-<br>service”|[18] - <br>§2.5.1 “Read Mask-version”<br>(Network Management Tests)|

|Specification|Test|
|---|---|
|[11] -<br>§3.4.2.1 “A_DeviceDescriptor_Read-<br>service”|[18] -<br>§2.5.1 “Read Mask-version”<br>(Network Management Tests)|
|[13] -<br>§3.2.2 “DMP_Connect_RCl”|[13] -<br>§3.2.2 “DMP_Connect_RCl”|

|Specification|Test|
|---|---|
|[03] -<br>§4.1.2 “Device Descriptor Type 0”|[18] -<br>§2.5.1 “Read Mask-version”<br>(Network Management Tests)|

|Specification|Test|
|---|---|
|• **Management Descriptor 1**<br>[03] -<br>§4.3.23 “PID_MGT_DESCRIPTOR<br>(PID = 72)”<br>[13] -<br>§3.4.2 “DM_Identify_R”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.4.5 Identification of the hardware

**Specification** **Test**

[13] - §3.4.3 “DM_Identify_RCo2”

2.8.1.4.4.6 Identification of Application

**Specification** **Test**

[11] - §3.5.6.5 "A_UserManufacturerInfo_Read_service"

2.8.1.4.5 Device Individualisation
In this clause all requirements on a device for device individualisation and assignment of the
Individual Address are described.

**Feature**

1 Programming Mode
1.a Connection oriented M
1.b Connectionless O
Autonomous Inactivation M

2 KNX Serial Number
a client initiated M
b server initiated O

3 Domain Address Assignment M

4 Default Individual Address O

Savedate: Filename: page 53 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[13] -<br>§3.4.3 “DM_Identify_RCo2”||

|Specification|Test|
|---|---|
|[11] -<br>§3.5.6.5 "A_UserManufacturerInfo_-<br>Read_service"||

|Feature|Mask 2705h|
|---|---|
|1 Programming Mode<br> 1.a Connection oriented<br> 1.b Connectionless|M <br>O|
|Autonomous Inactivation|M|
|2 KNX Serial Number<br> a client initiated<br> b server initiated|M <br>O|
|3 Domain Address Assignment|M|
|4 Default Individual Address|O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.5.1 Programming Mode

2.8.1.4.5.1.1 connection oriented

**a) Realisation Type 1 - Property based**

**Specification** **Test**

[13] - §2.2 “NM_IndividualAddress_Read”

    - §2.3 “NM_IndividualAddress_Write”[ 7)]

**Programming Mode Control**

   - via HMI: device selection and indication of
Programming Mode

   - via bus:

[03] - §4.3.5 “PID_PROGMODE”

[13] - §3.22.2 “DMP_InterfaceObjectWrite_R”

      - §3.23.2 “DMP_InterfaceObjectVerify_R”

      - §3.24.2 “DMP_InterfaceObjectRead_R”

2.8.1.4.5.1.2 Programming Mode – connectionless

**Specification** **Test**

[13] - §2.10 “NM_DomainAnd- [18] - §2.3 “Testing of A_IndividualAddressIndividualAddress_Write2” _Read-service – Server Test”

    - §2.2 “NM_IndividualAddress_Read”

**Programming Mode Control** [18] - §2.3 “Testing of A_IndividualAddress
   - via HMI: device selection and indication of _Read-service – Server Test”

Programming Mode

[13] - §3.13.2 “DMP_ProgModeSwitch_RCo”

[03] - §4.19.3 “Programming Mode –
Realisation Type 2”

2.8.1.4.5.1.3 Programming Mode – Autonomous Inactivation

**Specification** **Test**

[03] - §4.19.1 “Autonomous inactivation of Programming Mode”

2.8.1.4.5.2 KNX Serial Number

2.8.1.4.5.2.1 Client initiated

**Specification** **Test**

[13] - §2.4 “NM_IndividualAddress_Serial- [18] - §2.16 “Testing of A_IndividualAddressNumber_Read” SerialNumber_Write-Service : Server

    - §2.5 “NM_IndividualAddress_Serial- Test”
Number_Write”     - §2.17 “Testing of A_IndividualAddress
SerialNumber_Read-Service : Server
Test”

7) Implies connection-oriented TL and Application Layer services for accessing the Device Descriptor.

Savedate: Filename: page 54 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|a) Realisation Type 1 - Property based|Col2|
|---|---|
|**Specification**|**Test**|
|[13] -<br>§2.2 “NM_IndividualAddress_Read”<br>- <br>§2.3 “NM_IndividualAddress_Write” 7)||
|**Programming Mode Control**<br>• via HMI: device selection and indication of<br>Programming Mode<br>• via bus:<br>[03]<br>- <br>§4.3.5 “PID_PROGMODE” <br>[13]<br>- <br>§3.22.2 “DMP_InterfaceObjectWrite_R”<br>- <br>§3.23.2 “DMP_InterfaceObjectVerify_R”<br>- <br>§3.24.2 “DMP_InterfaceObjectRead_R”||

|Specification|Test|
|---|---|
|[13] -<br>§2.10 “NM_DomainAnd-<br>IndividualAddress_Write2”<br>- <br>§2.2 “NM_IndividualAddress_Read”|[18] -<br>§2.3 “Testing of A_IndividualAddress-<br>_Read-service – Server Test”|
|**Programming Mode Control**<br>• via HMI: device selection and indication of<br>Programming Mode<br>[13] -<br>§3.13.2 “DMP_ProgModeSwitch_RCo”<br>[03] -<br>§4.19.3 “Programming Mode –<br>Realisation Type 2”|[18] -<br>§2.3 “Testing of A_IndividualAddress-<br>_Read-service – Server Test”|

|Specification|Test|
|---|---|
|[03] -<br>§4.19.1 “Autonomous inactivation of<br>Programming Mode”|-|

|Specification|Test|
|---|---|
|[13] -<br>§2.4 “NM_IndividualAddress_Serial-<br>Number_Read”<br>- <br>§2.5 “NM_IndividualAddress_Serial-<br>Number_Write”|[18] -<br>§2.16 “Testing of A_IndividualAddress-<br>SerialNumber_Write-Service : Server<br>Test”<br>- <br>§2.17 “Testing of A_IndividualAddress-<br>SerialNumber_Read-Service : Server<br>Test”|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.5.2.2 Server initiated

**Specification** **Test**

[13] - §2.6 “NM_IndividualAddress_Serial- [18] - §2.16 “Testing of A_IndividualAddressNumber_Write2 SerialNumber_Write-Service : Server

Test”

2.8.1.4.5.3 Domain Address Assignment

**Specification** **Test**

[13] - §2.7 “NM_DomainAddress_Read” [18]

    - §2.12 “NM_DomainAddress_Scan”

2.8.1.4.5.4 Default Individual Address

**Specification** **Test**

[03] - §3.3 “Individual Address”

         - Subnetwork Address, value
according to the medium.

         - Device Address, fixed value FFh

2.8.1.4.6 Device Linking
In this clause all requirements on a device for linking of Group Objects are described. This
includes the configuration of Address - and Association Tables.

**Feature**

1 Group Address Table M

2 Group Object Association Table M

3 Linking via Properties O

4 Direct Link O

2.8.1.4.6.1 Group Address Table

**a) Group Address Table – Realisation Type 8**

   - Mask 2705h

**Specification** **Test**

[03] - §4.9.8 “Group Address Table –
Realisation Type 8”

Savedate: Filename: page 55 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[13] -<br>§2.6 “NM_IndividualAddress_Serial-<br>Number_Write2|[18] -<br>§2.16 “Testing of A_IndividualAddress-<br>SerialNumber_Write-Service : Server<br>Test”|

|Specification|Test|
|---|---|
|[13] -<br>§2.7 “NM_DomainAddress_Read”<br>- <br>§2.12 “NM_DomainAddress_Scan”|[18]|

|Specification|Test|
|---|---|
|[03] -<br>§3.3 “Individual Address”<br>- <br>Subnetwork Address, value<br>according to the medium.<br>- <br>Device Address, fixed value FFh||

|Feature|Mask 2705h|
|---|---|
|1 Group Address Table|M|
|2 Group Object Association Table|M|
|3 Linking via Properties|O|
|4 Direct Link|O|

|a) Group Address Table – Realisation Type 8<br>• Mask 2705h|Col2|
|---|---|
|**Specification**<br>[03] -<br>§4.9.8 “Group Address Table –<br>Realisation Type 8”|**Test**|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.6.2 Group Object Association Table

**a) Group Address Table – Realisation Type 8**

**Specification** **Test**

[03] - §4.10.5 “Group Object Association Table
– Realisation Type 8”

2.8.1.4.7 Application Handling
In this clause all requirements necessary for an application program to be able to run on a
target device are listed.

1 Group Object Table M
2 Application Program & Parameters M
3 Application Specific Parameters O
4 Application Programming Interface (API) O
5 Functional Parameters O

  - unidirectional n/a

  - bidirectional O

2.8.1.4.7.1 Group Object Table

 _The specification of the Group Object Table format for BIM M112 is currently under work in KSG. Please refer_
_to the Working Document [26]._
_The Realisation Type number is not yet assigned._

**a) Group Object Table – Realisation Type ?**

   - System 7

**Specification** **Test**

[26] - §2.3.2 “Group Object Association Table Realisation Type x”

2.8.1.4.7.2 Application Program and Parameters

**Feature** **Specification** **Test**

- **pointer to user program** [03]

- **user program**

2.8.1.4.7.3 Application specific system parameters

**Specification** **Test**

- user software version [03]

Savedate: Filename: page 56 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|a) Group Address Table – Realisation Type 8|Col2|
|---|---|
|**Specification**<br>[03] -<br>§4.10.5 “Group Object Association Table<br>– Realisation Type 8”|**Test**|

|Col1|Mask 2705h|
|---|---|
|1 Group Object Table|M|
|2 Application Program & Parameters|M|
|3 Application Specific Parameters|O|
|4 Application Programming Interface(API)|O|
|5 Functional Parameters|O|
|• unidirectional|n/a|
|• bidirectional|O|

|a) Group Object Table – Realisation Type ?<br>• System 7|Col2|
|---|---|
|**Specification**<br>[26] -<br>§2.3.2 “Group Object Association Table -<br>Realisation Type x”|**Test**|

|Feature|Specification|Test|
|---|---|---|
|• **pointer to userprogram**|[03]||
|• **userprogram**|||

|Col1|Specification|Test|
|---|---|---|
|- <br>user software version|[03]||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.4.7.4 Application Programming Interface (API)
It is not required that mask 2705h complies with a standard API. An API is optional for
mask 2705h.

###### 2.8.1.5 Local device access

2.8.1.5.1 Introduction and general requirements
Local device access is optional for the mask 2705h.

Local devices access is only specified using cEMI, not for EMI1 or EMI2.

The below clauses concern the local devices access via the cEMI Transport Layer to the device.
For the usability of the device as bus interface, the “Profile: Domain Address based RF
Retransmitter” as specified in 2.8.3 has to be implemented additionally.

2.8.1.5.2 cEMI Profiles

2.8.1.5.2.1 Overview

1. Transport Layer Interface M
1. T_Data_Individual M
2. T_Data_Connected M
2. Local Device Management Services: M
1. M_PropRead M
2. M_PropWrite M
3. M_PropInd M
4. M_Reset.req M
5. M_Reset.ind M
6. M_FuncPropCommand.req M
7. M_FuncPropCommand.con M
8. M_FuncPropStateRead.req M
9. M_FuncPropStateRead.res M
10. M_Reset.req M
11. M_Reset.ind M

2.8.1.5.2.2 Transport Layer interface

**Specification** **Test**

[14] - §4.1.6 “Transport Layer messages”

2.8.1.5.3 Local device management services

**Specification** **Test**

[14] - §4.1.7 “Services for local device
management”

Savedate: Filename: page 57 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Col1|Mask 2705h|
|---|---|
|1. Transport Layer Interface|M|
|1.<br>T_Data_Individual|M|
|2.<br>T_Data_Connected|M|
|2. Local Device Management Services:|M|
|1.<br>MPropRead|M|
|_<br> 2.<br>MPropWrite|M|
|_<br> 3. <br>M_PropInd|M|
|4.<br>M_Reset.req|M|
|5. <br>M_Reset.ind|M|
|6. <br>M_FuncPropCommand.req|M|
|7.<br>M_FuncPropCommand.con|M|
|8. <br>M_FuncPropStateRead.req|M|
|9. <br>M_FuncPropStateRead.res|M|
|10. M_Reset.req|M|
|11. M_Reset.ind|M|

|Specification|Test|
|---|---|
|[14] -<br>§4.1.6 “Transport Layer messages”||

|Specification|Test|
|---|---|
|[14] -<br>§4.1.7 “Services for local device<br>management”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.5.4 Interface Objects and Properties


2.8.1.5.4.1 Overview

Interface Object

0 Device Object M
8 cEMI Server Object O

|Interface Object|mask 2705h|
|---|---|
|0 Device Object|M|
|8 cEMI Server Object|O|


2.8.1.5.4.2 Device Object

**Property**

1 PID_OBJECT_TYPE
71 PID_IO_LIST

2.8.1.5.4.3 cEMI Server Object

|Property|Col2|mask 2705h|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|
|71 PID_IO_LIST|Data|3/1|


1 PID_OBJECT_TYPE Data 3/1
52 PID_COMM_MODE Data (3/2) a

a PID_COMM_MODE is mandatory if the cEMI Server can also be used for allowing the cEMI Client to communicate to the bus,
e.g. in a KNX RF USB interface. In this case, the cEMI Server does not automatically switch to cEMI Transport Layer if the cEMI
Client connects.

|Property|Col2|mask 2705h|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|
|52 PID_COMM_MODE|Data|(3/2) a|


###### 2.8.1.6 Interface Objects and Properties

2.8.1.6.1 Overview


 _S-Mode Profiles  End devices  Interface Objects_

Mask 2705h requires the following Interface Objects. Additionally, form most Interface Objects,
mandatory fix Object Indexes are required as specified below.


Savedate: Filename: page 58 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

 _The Interface Object “Application Program 2” is the new name what was named “Interfaceprogram Object”_
_before._

**Interface Object**

0 Device Object M 0
1 Addresstable Object M 1
2 Association Table Object M 2
3 Applicationprogram Object M 3
4 Application Program 2 M 4
8 cEMI Server Object O -[ a]
9 Group Object Table Object O -[ a]
19 RF Medium Object M 5
a No fix Object Index is required.

2.8.1.6.2 Device Object

 _S-Mode Profiles  End-devices  Device Object_

**Property**

1 PID_OBJECT_TYPE Data 3/x 3/1
2 PID_OBJECT_NAME Data (3/3) (3/3)
8 PID_SERVICE_CONTROL 8) Data (3/3) (3/3)
9 PID_FIRMWARE_REVISION Data (3/x) (3/1)
11 PID_SERIAL_NUMBER Data (3/x) 3/1
12 PID_MANUFACTURER_ID Data 3/x 3/1
14 PID_DEVICE_CONTROL Data 3/3 3/3
15 PID_ORDER_INFO Data (3/3) 3/1
16 PID_PEI_TYPE 9) Data (3/3) 3/1
17 PID_PORT_CONFIGURATION Data (3/3) (3/3)

8) PID_SERVICE_CONTROL is a bitfield of which not all fields have to be supported. For the specification of which
Profile shall support which field, please refer to 2.7.1.6.2.1.
9) PID_PEI_TYPE is mandatory for devices with PEI and supporting Properties.
10) PID_PEI_TYPE is only mandatory if a PEI is implemented.

Savedate: Filename: page 59 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Interface Object|mask 2705h|Col3|
|---|---|---|
|**Interface Object**|**M/O**|**Object Index**|
|0 Device Object|M|0|
|1 Addresstable Object|M|1|
|2 Association Table Object|M|2|
|3 Applicationprogram Object|M|3|
|4 Application Program 2|M|4 <br>|
|8 cEMI Server Object|O|-~~ a~~ <br>|
|9 Group Object Table Object|O|-~~ a~~|
|19 RF Medium Object|M|5|
|a No fix Object Index is required.|a No fix Object Index is required.|a No fix Object Index is required.|

|Property|Col2|System 7|mask 2705h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/1|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|8 PID_SERVICE_CONTROL 8)|Data|(3/3)|(3/3)|
|9 PID_FIRMWARE_REVISION|Data|(3/x)|(3/1)|
|11 PID_SERIAL_NUMBER|Data|(3/x)|3/1|
|12 PID_MANUFACTURER_ID|Data|3/x|3/1|
|14 PID_DEVICE_CONTROL|Data|3/3|3/3|
|15 PID_ORDER_INFO|Data|(3/3)|3/1|
|16 PID_PEI_TYPE 9)|Data|(3/3)|3/1|
|17 PID_PORT_CONFIGURATION|Data|(3/3)|(3/3)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Property**

19 PID_MANUFACTURER_DATA Data (3/3) (3/1)
21 PID_DESCRIPTION Data (3/3) (3/3)
25 PID_VERSION Data (3/3) 3/1
51 PID_ROUTING_COUNT Data (3/3) **n/a**

2.8.1.6.2.1 PID_SERVICE_CONTROL (PID = 8)

 _S-Mode Profiles  End-devices  Device Object  PID_SERVICE_CONTROL_

Bit# Bit function

00 User Stopped_ServiceInfo Enable O
01 OwnIndividual AddressReceived_ServiceInfo Enable O
02 IndividualAddress_Write Enable O
03 Reserved O
04 Reserved O
05 Reserved O
06 Reserved O
07 Reserved O
08 Application Interface Layer Services on EMI Disable O
09 Data Link Layer Services on EMI Disable O
10 Network Layer Services on EMI Disable O
11 Transport Layer Group Services on EMI Disable O
12 Switch Service-Services on EMI Disable O
13 Transport Layer Connection Oriented Services on EMI Disable O
14 Application Layer Services on EMI Disable O
15 Management Services on EMI Disable O

Savedate: Filename: page 60 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Property|Col2|System 7|mask 2705h|
|---|---|---|---|
|19 PID_MANUFACTURER_DATA|Data|(3/3)|(3/1)|
|21 PID_DESCRIPTION|Data|(3/3)|(3/3)|
|25 PID_VERSION|Data|(3/3)|3/1|
|51 PID_ROUTING_COUNT|Data|(3/3)|**n/a**|

|Bit#|Bit function|mask 2705hh|
|---|---|---|
|00|User Stopped_ServiceInfo Enable|O|
|01|OwnIndividual AddressReceived_ServiceInfo Enable|O|
|02|IndividualAddress_Write Enable|O|
|03|Reserved|O|
|04|Reserved|O|
|05|Reserved|O|
|06|Reserved|O|
|07|Reserved|O|
|08|Application Interface Layer Services on EMI Disable|O|
|09|Data Link Layer Services on EMI Disable|O|
|10|Network Layer Services on EMI Disable|O|
|11|Transport Layer Group Services on EMI Disable|O|
|12|Switch Service-Services on EMI Disable|O|
|13|Transport Layer Connection Oriented Services on EMI Disable|O|
|14|Application Layer Services on EMI Disable|O|
|15|Management Services on EMI Disable|O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.6.3 Group Address Table Object (Object Type = 1)


 _S-Mode Profiles  End-devices  Group Address Table Object_

**Property**

1 PID_OBJECT_TYPE Data 3/x 3/x
2 PID_OBJECT_NAME Data (3/3) (3/3)
5 PID_LOAD_STATE_CONTROL Data 3/3 3/3
7 PID_TABLE_REFERENCE Data 3/3 3/3
23 PID_TABLE Data (3/3) (3/3)
27 PID_MCB_TABLE Data (3/3) (3/x)
28 PID_ERROR_CODE Data (3/x) (3/x)
53 PID_GROUP_RESPONDER_TABLE Data (3/3) n/a

2.8.1.6.3.1 PID_LOAD_STATE_CONTROL (PID = 5)

|Property|Col2|System 7|mask 2705h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|5 PID_LOAD_STATE_CONTROL|Data|3/3|3/3|
|7 PID_TABLE_REFERENCE|Data|3/3|3/3|
|23 PID_TABLE|Data|(3/3)|(3/3)|
|27 PID_MCB_TABLE|Data|(3/3)|(3/x)|
|28 PID_ERROR_CODE|Data|(3/x)|(3/x)|
|53 PID_GROUP_RESPONDER_TABLE|Data|(3/3)|n/a|


**Table 6 – Required Load Controls**

**Load** **Sub-**
**Control** **type Description**

00h No operation M
01h Start Loading M
02h Load Completed M
03h Additional Load Controls M

Absolute Code/Data
M

00h Allocation

01h Absolute Stack Allocation
02h Segment Control Record M
03h Task Pointer Record M
04h Task Control Record-1 M
05h Task Control Record-2 M
0Ah Relative Allocation n/a
0Bh Data Relative Allocation n/a
04h Unload M

NOTE Table 5 specifies globally for the device which Load Controls shall be supported. Which Load Controls shall be
supported for the management of a specific Resource is specified in the (Realisation Type of) the Resource in [03].

|Col1|Col2|Col3|System 7|
|---|---|---|---|
|**Load**<br>**Control**|**Sub-**<br>**type**|** Description**|mask 2705h|
|00h||No operation|M|
|01h||Start Loading|M|
|02h||Load Completed|M|
|03h||Additional Load Controls|M|
||00h|<br>Absolute Code/Data<br>Allocation|M|
||01h|Absolute Stack Allocation||
||02h|Segment Control Record|M|
||03h|Task Pointer Record|M|
||04h|Task Control Record-1|M|
||05h|Task Control Record-2|M|
||0Ah|Relative Allocation|n/a|
||0Bh|Data Relative Allocation|n/a|
|04h||Unload|M|


Savedate: Filename: page 61 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.6.4 Association Table Object (Object Type = 2)


 _S-Mode Profiles  End-devices  Association Table Object_

Property

1 PID_OBJECT_TYPE Data 3/x 3/x
2 PID_OBJECT_NAME Data (3/3) (3/3)
5 PID_LOAD_STATE_CONTROL Data 3/3 3/3
7 PID_TABLE_REFERENCE Data 3/3 3/3
23 PID_TABLE Data (3/3) (3/3)
27 PID_MCB_TABLE Data (3/3) (3/3)
28 PID_ERROR_CODE Data (3/3) (3/3)

2.8.1.6.4.1 PID_LOAD_STATE_CONTROL (PID = 5)
Please refer to 2.8.1.6.3.1.

|Property|Col2|System 7|mask 2705h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|5 PID_LOAD_STATE_CONTROL|Data|3/3|3/3|
|7 PID_TABLE_REFERENCE|Data|3/3|3/3|
|23 PID_TABLE|Data|(3/3)|(3/3)|
|27 PID_MCB_TABLE|Data|(3/3)|(3/3)|
|28 PID_ERROR_CODE|Data|(3/3)|(3/3)|


2.8.1.6.5 Applicationprogram Object (Object Type = 3)

 _S-Mode Profiles  End-devices  Application Object_


1 PID_OBJECT_TYPE Data 3/x 3/x
2 PID_OBJECT_NAME Data (3/3) (3/3)
5 PID_LOAD_STATE_CONTROL Data 3/3 3/3
6 PID_RUN_STATE_CONTROL Data 3/3 3/3
7 PID_TABLE_REFERENCE Data 3/x 3/x
13 PID_PROGRAM_VERSION Data 3/(3) 3/(3)
16 PID_PEI_TYPE Data (3/(3)[ 10)] (3/(3))[ 10)]
27 PID_MCB_TABLE Data (3/3) (3/3)
28 PID_ERROR_CODE Data (3/x) (3/x)
51 PID_PARAM_REFERENCE Data (3/x) (3/x)

2.8.1.6.5.1 PID_LOAD_STATE_CONTROL (PID = 5)
Please refer to 2.8.1.6.3.1.

|Property|Col2|System 7|mask 2705h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|5 PID_LOAD_STATE_CONTROL|Data|3/3|3/3|
|6 PID_RUN_STATE_CONTROL|Data|3/3|3/3|
|7 PID_TABLE_REFERENCE|Data|3/x|3/x|
|13 PID_PROGRAM_VERSION|Data|3/(3)|3/(3)|
|16 PID_PEI_TYPE|Data|(3/(3) 10)|(3/(3)) 10)|
|27 PID_MCB_TABLE|Data|(3/3)|(3/3)|
|28 PID_ERROR_CODE|Data|(3/x)|(3/x)|
|51 PID_PARAM_REFERENCE|Data|(3/x)|(3/x)|


10) PID_PEI_TYPE is only mandatory if a PEI is implemented.

Savedate: Filename: page 62 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.6.6 Application Program 2 Object (Object Type = 4)


 _S-Mode Profiles  End-devices  Application Program 2 Object_

Property

1 PID_OBJECT_TYPE Data 3/x 3/x
2 PID_OBJECT_NAME Data (3/3) (3/3)
5 PID_LOAD_STATE_CONTROL Data 3/3 3/3
6 PID_RUN_STATE_CONTROL Data 3/3 3/3
7 PID_TABLE_REFERENCE Data 3/x 3/x
13 PID_PROGRAM_VERSION Data 3/(3) 3/(3)
16 PID_PEI_TYPE Data (3/(3)[ 11)] (3/(3))[ 10)]
27 PID_MCB_TABLE Data (3/3) (3/3)
28 PID_ERROR_CODE Data (3/x) (3/x)
51 PID_PARAM_REFERENCE Data (3/x) (3/x)

2.8.1.6.6.1 PID_LOAD_STATE_CONTROL (PID = 5)
Please refer to 2.8.1.6.3.1.

|Property|Col2|System 7|mask 2705h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|5 PID_LOAD_STATE_CONTROL|Data|3/3|3/3|
|6 PID_RUN_STATE_CONTROL|Data|3/3|3/3|
|7 PID_TABLE_REFERENCE|Data|3/x|3/x|
|13 PID_PROGRAM_VERSION|Data|3/(3)|3/(3)|
|16 PID_PEI_TYPE|Data|(3/(3) 11)|(3/(3)) 10)|
|27 PID_MCB_TABLE|Data|(3/3)|(3/3)|
|28 PID_ERROR_CODE|Data|(3/x)|(3/x)|
|51 PID_PARAM_REFERENCE|Data|(3/x)|(3/x)|


11) PID_PEI_TYPE is only mandatory if a PEI is implemented.

Savedate: Filename: page 63 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.1.6.7 RF Medium Object


 _S-Mode Profiles  Interfaces  RF Medium Object_

Property

1 PID_OBJECT_TYPE Data 3/1
51 PID_RF_MULTI_TYPE Data 3/2
56 PID_RF_DOMAIN_ADDRESS Data 3/2
58 PID_RF_FILTERING_MODE_SUPPORT Data (3/2)
59 PID_RF_FILTERING_MODE_SELECT Data (3/2)
60 PID_RF_BIDIR_TIMEOUT Function M
SNwPar W
61 PID_RF_DIAG_SA_FILTER_TABLE Data 3/3
62 PID_RF_DIAG_QUALITY_TABLE Data 3/X
63 PID_RF_DIAG_PROBE Function M
75 PID_RF_TYPES_SUPPORTED Data O

##### 2.8.2 Profile: mask 27B0h

|Property|Col2|mask 2705h|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|
|51 PID_RF_MULTI_TYPE|Data|3/2|
|56 PID_RF_DOMAIN_ADDRESS|Data|3/2|
|58 PID_RF_FILTERING_MODE_SUPPORT|Data|(3/2)|
|59 PID_RF_FILTERING_MODE_SELECT|Data|(3/2)|
|60 PID_RF_BIDIR_TIMEOUT|Function|M|
|60 PID_RF_BIDIR_TIMEOUT|SNwPar|W|
|61 PID_RF_DIAG_SA_FILTER_TABLE|Data|3/3|
|62 PID_RF_DIAG_QUALITY_TABLE|Data|3/X|
|63 PID_RF_DIAG_PROBE|Function|M|
|75 PID_RF_TYPES_SUPPORTED|Data|O|


###### 2.8.2.1 Introduction and common requirements
The mask 27B0h shall be an implementation of the System B Profile class on the KNX RF
Communication Medium.

###### 2.8.2.2 Profile: Operation


2.8.2.2.1 Aims
This Profile describes the features of a device necessary for operation. The aim is to guarantee
runtime Interworking between all devices in the system. The main components for this objective
are the support of group oriented (multicast) communication.

2.8.2.2.2 Common Profile
These Profiles refer to all devices in all Configuration Modes on all media. Medium dependent
features are described in clause 2.8.2.3.


01 Medium dependent Layers KNX RF medium
02 Physical Layer General M
03 Data Link Layer general M
04 Data Link Layer - Router n/a

Savedate: Filename: page 64 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Feature|mask 27B0h|
|---|---|
|<br>01 Medium dependent Layers<br>02 Physical Layer General<br>03 Data Link Layer general<br>04 Data Link Layer - Router|KNX RF medium<br>M <br>M <br>n/a|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Feature**

05 Data Link Layer - Bridge n/a
06 Network Layer general M
07 Network Layer - Router n/a
08 Network Layer – Bridge n/a
09 Network Layer – SN based RF Retransmitter O
10 Network Layer – DoA based RF Retransmitter O
11 Network Layer RF Media Coupler X
12 Transport Layer – multicast M
13 Transport Layer – connection oriented minimal X
14 AL – Group Object services M
15 AL – Property Value Services M
16 AL – Function Property Services M
17 AL – services on system broadcast communication M

mode

18 AL - services on broadcast communication mode M
19 AIL – GO M
20 AIL – IO M
21 AIL – Function Properties M
22 AIL – GO indirection O
23 Application Interface Layer for unidirectional devices X

2.8.2.2.2.1 Medium dependent Layers
The Profiles defined in clause 2.8.2.3 “Medium dependent layers” of this document apply.

2.8.2.2.2.2 Physical Layer - general

**Specification** **Test**

   - **General**

[07] (contains no requirement) none.

2.8.2.2.2.3 Data Link Layer - general

**Specification** **Test**

   - **General**

[08] - §1.1 “Functions of the Data Link Layer” tested with medium specific tests

    - §1.2 “Possible Media and their Impact on
Layer-2”

    - §1.3 “Objective”

   - **Individual address /Group Address**

[08] - §1.4 “Definitions” tested with medium specific tests

   - **Data Link Layer Protocol**

[08] - §3 “Data Link Layer Protocols” tested with medium specific tests

   - **Parameters**

[08] - §4 “Parameters of Layer-2” (except TP1 tested with medium specific tests
Fast Polling)

Savedate: Filename: page 65 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Feature|mask 27B0h|
|---|---|
|<br>05 Data Link Layer - Bridge<br>06 Network Layer general<br>07 Network Layer - Router<br>08 Network Layer – Bridge<br>09 Network Layer – SN based RF Retransmitter<br>10 Network Layer – DoA based RF Retransmitter<br>11 Network Layer RF Media Coupler<br>12 Transport Layer – multicast<br>13 Transport Layer – connection oriented minimal<br>14 AL – Group Object services<br>15 AL – Property Value Services<br>16 AL – Function Property Services<br>17 AL – services on system broadcast communication<br>mode<br>18 AL - services on broadcast communication mode<br>19 AIL – GO<br>20 AIL – IO<br>21 AIL – Function Properties<br>22 AIL – GO indirection<br>23 Application Interface Layer for unidirectional devices|n/a<br>M <br>n/a<br>n/a<br>O <br>O <br>X <br>M <br>X <br>M <br>M <br>M <br>M <br>M <br>M <br>M <br>M <br>O <br>X|

|Specification|Test|
|---|---|
|• **General**<br>[07] (contains no requirement)|none.|

|Specification|Test|
|---|---|
|• **General**<br>[08] -<br>§1.1 “Functions of the Data Link Layer”<br>- <br>§1.2 “Possible Media and their Impact on<br>Layer-2”<br>- <br>§1.3 “Objective”|tested with medium specific tests|
|• **Individual address /Group Address**<br>[08] -<br>§1.4 “Definitions”|tested with medium specific tests|
|• **Data Link Layer Protocol**<br>[08] -<br>§3 “Data Link Layer Protocols”|tested with medium specific tests|
|• **Parameters**<br>[08] -<br>§4 “Parameters of Layer-2” (except TP1<br>Fast Polling)|tested with medium specific tests|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.2.2.4 Network Layer - general

**Specification** **Test**

   - **General**

[09] - §1 “Overview” [16]

   - **NPDU**

[09] - §2.1 “NPDU” [16] - §3 (Black Box Tests)

                                                - All end devices

[15]                                 - RF bidirectional end device

   - **Parameters**

[09] - §2.3 “Parameters of Network Layer” - §3(Black Box Tests)

    - hop_count: preferred value: 6.     - All end devices

[15]                                 - RF bidirectional end device

   - **state machine**

[09] - §2.4.1 [16] - §3 (Black Box Tests)

                                                - All end devices

                                           
[15]                               - RF bidirectional end device

2.8.2.2.2.5 Network Layer – SN based RF Retransmitter

**Specification** **Test**

[02] - §6.1.7.2 “History List” [15] - §3

    - §6.1.7.2 “RF Repeat Counter”

2.8.2.2.2.6 Network Layer – DoA based RF Retransmitter
Please refer to clause 2.8.3 “Profile: Domain Address based RF Retransmitter”.

2.8.2.2.2.7 Transport Layer–multicast

**Specification** **Test**

   - **TPDU**

[10] - §1.2 “Point-to-Multipoint, Connectionless [17] - All end devices
(Multicast) Communication Mode”

    - §3.1 “T_Data_Group Service”

**[15]**

                                                - RF bidirectional end device

Savedate: Filename: page 66 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **General**<br>[09] -<br>§1 “Overview”|[16]|
|• **NPDU**<br>[09] -<br>§2.1 “NPDU”|[16] -<br>§3 (Black Box Tests)<br>- <br>All end devices<br>[15] <br>- <br>RF bidirectional end device|
|• **Parameters**<br>[09] -<br>§2.3 “Parameters of Network Layer”<br>- <br>hop_count: preferred value: 6.|- <br>§3(Black Box Tests)<br>- <br>All end devices<br>[15] <br>- <br>RF bidirectional end device|
|• **state machine**<br>[09] -<br>§2.4.1|[16] -<br>§3 (Black Box Tests)<br>- <br>All end devices<br>- <br>[15] <br>- <br>RF bidirectional end device|

|Specification|Test|
|---|---|
|[02] -<br>§6.1.7.2 “History List”<br>- <br>§6.1.7.2 “RF Repeat Counter”|[15] -<br>§3|

|Specification|Test|
|---|---|
|• **TPDU**<br>[10] -<br>§1.2 “Point-to-Multipoint, Connectionless<br>(Multicast) Communication Mode”<br>- <br>§3.1 “T_Data_Group Service”|[17]<br>- <br>All end devices<br>**[15]** <br>- <br>RFbidirectional end device|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.2.2.8 Application Layer – Group Oriented

**Specification** **Test**

   - **APDU**

[11] - §2 “APDU” [19] - All end devices
```
    o A_GroupValue_Read-PDU
    o A_GroupValue_Response-PDU

```
`o A_GroupValue_Write-PDU` [15]

                                                 - RF bidirectional end device

   - **Data length**

[11] data must be coded as indicated in §3.1 [19] - All end devices

“Application Layer Services on Multicast
Communication Mode”

[15]

                                                 - RF bidirectional end device

2.8.2.2.2.9 Application Layer – Property Value Services

**Specification** **Test**

   - **APDU**

[11] - §2 “APDU”

    - §3.4.3.1 “A_PropertyValue_Readservice”

    - §3.4.3.2 “A_PropertyValue_Writeservice”

2.8.2.2.2.10 Application Layer – Function Services

   - **APDU**

[11] - §2 “APDU”

    - §3.4.5 “Function Property Services”

2.8.2.2.2.11 Application Layer – AL services on system broadcast communication mode
Unless indicated explicitly, the services shall be supported in full, this means, all service
primitives shall be supported (.req, .Lcon, .ind, .res, .Rcon and .Acon).

**Specification** **Test**

   - **APDU**

[11] - A_DomainAddress_Write

    - A_DomainAddress_Read

    - A_IndividualAddressSerialNumber_Write

    - A_DomainAddressSerialNumber_Read

    - A_DomainAddressSerialNumber_Write

    - A_DomainAddressSelective_Read

[25] - A_SystemNetworkParameter_Read

Mask 5705h implementations shall support these services both in broadcast as well as in
system broadcast communication model. If confirming or responding to a service, the
communication mode of the request shall be used.

Savedate: Filename: page 67 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **APDU**<br>[11] -<br>§2 “APDU”<br>`o` A_GroupValue_Read-PDU<br>`o` A_GroupValue_Response-PDU<br>`o` A_GroupValue_Write-PDU|[19]<br>- <br>All end devices<br>[15]<br>- <br>RF bidirectional end device|
|• **Data length**<br>[11] data must be coded as indicated in §3.1<br>“Application Layer Services on Multicast<br>Communication Mode”|[19]<br>- <br>All end devices<br>[15]<br>- <br>RF bidirectional end device|

|Specification|Test|
|---|---|
|• **APDU**<br>[11] -<br>§2 “APDU”<br>- <br>§3.4.3.1 “A_PropertyValue_Read-<br>service”<br>- <br>§3.4.3.2 “A_PropertyValue_Write-<br>service”||

|• APDU<br>[11] - §2 “APDU”<br>- §3.4.5 “Function Property Services”|Col2|
|---|---|

|Specification|Test|
|---|---|
|• **APDU**<br>[11] -<br>A_DomainAddress_Write<br>- <br>A_DomainAddress_Read<br>- <br>A_IndividualAddressSerialNumber_Write<br>- <br>A_DomainAddressSerialNumber_Read<br>- <br>A_DomainAddressSerialNumber_Write<br>- <br>A_DomainAddressSelective_Read<br>[25] -<br>A_SystemNetworkParameter_Read||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.2.2.12 Application Layer – AL services on broadcast communication mode
Unless indicated explicitly, the services shall be supported in full, this means, all service
primitives shall be supported (.req, .Lcon, .ind, .res, .Rcon and .Acon).

**Specification** **Test**

   - **APDU**

[11] - A_IndividualAddress_Write

    - A_IndividualAddress_Read

    - A_IndividualAddressSerialNumber_Read

    - A_IndividualAddressSerialNumber_Write

    - A_NetworkParameter_Read

    - A_NetworkParameter_Write

2.8.2.2.2.13 Application Interface Layer – Group Objects

**Specification** **Test**

   - **Group Objects**

[12] - §3 “Group Object Server” [18] - §1.3 “Group Object Tests”

                                                - all end devices

[15] 
                                                - RF bidirectional end device

2.8.2.2.2.14 Application Interface Layer – Interface Objects

**Specification** **Test**

   - **Interface Objects**

[12] - §4 “Interface Object Server”

2.8.2.2.2.15 Application Interface Layer – Function Properties

**Specification** **Test**

   - **Function Properties**

[12] - §4.4.2 “Function Properties”

2.8.2.2.2.16 Application Layer Interface Layer – Group Objects indirection

**Specification** **Test**

   - **Group Object Indirection**

[12] - §3.4 “Group Object Indirection – Group
Object Handles and PID-OBJECT_VALUE (PID = 62)

[03] - §4.3.13 “PID_OBJECT_VALUE (PID =
62)”

Savedate: Filename: page 68 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|• **APDU**<br>[11] -<br>A_IndividualAddress_Write<br>- <br>A_IndividualAddress_Read<br>- <br>A_IndividualAddressSerialNumber_Read<br>- <br>A_IndividualAddressSerialNumber_Write<br>- <br>A_NetworkParameter_Read<br>- <br>A_NetworkParameter_Write|<br>|

|Specification|Test|
|---|---|
|• **Group Objects**<br>[12] -<br>§3 “Group Object Server”|[18] -<br>§1.3 “Group Object Tests”<br>- <br>all end devices<br>[15] -<br>- <br>RFbidirectional end device|

|Specification|Test|
|---|---|
|• **Interface Objects**<br>[12] -<br>§4 “Interface Object Server”||

|Specification|Test|
|---|---|
|• **Function Properties**<br>[12] -<br>§4.4.2 “Function Properties”||

|Specification|Test|
|---|---|
|• **Group Object Indirection**<br>[12] -<br>§3.4 “Group Object Indirection – Group<br>Object Handles and PID-OBJECT_-<br>VALUE (PID = 62)<br>[03] -<br>§4.3.13 “PID_OBJECT_VALUE (PID =<br>62)”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.2.3 Specific parts
These Profiles describe runtime mechanisms that are not relevant for all devices.

**Feature**

01 Data Link Layer – polling n/a
02 Detection of Usage of own Individual Address X
03 Extended Group Object Flags M

2.8.2.2.3.1 Extended Group Object Flags

**Specification** **Test**

   - **configuration flags: update on read**

**response (1 bit)**

[12] - §3.3.2 “Reading the Group Object Value [18] - §1.3 (Group Object Tests)
” (Update Enable)

###### 2.8.2.3 Medium dependent layers

2.8.2.3.1 Goal
This Profile describes the requirements on a device in order to guarantee compliance with one
of the standard communication media of the system. Compliance with one of these Profiles is a
prerequisite for both runtime and configuration Interworking.

2.8.2.3.2 RF medium dependent layers

1. Physical Layer Sender X
2. Physical Layer Transceiver M
3. Data Link Layer M
4. KNX Serial Number for multicast communication O
5. RF Domain Address for multicast communication M
6. LTE frame format O
7. Extended LTE Group Addresses and frame acceptance O
8. Data Link Layer-Retransmitter O
9. Data Link Layer-Media Coupler O
10. Local Services Metering O

Savedate: Filename: page 69 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Feature|mask 27B0h|
|---|---|
|01 Data Link Layer – polling<br>02 Detection of Usage of own Individual Address<br>03 Extended Group Object Flags|n/a<br>X <br>M|

|Specification|Test|
|---|---|
|• **configuration flags: update on read**<br>**response (1 bit)**<br>[12] -<br>§3.3.2 “Reading the Group Object Value<br>” (Update Enable)|[18] -<br>§1.3 (Group Object Tests)|

|Col1|mask 27B0h|
|---|---|
|1. Physical Layer Sender<br>2. Physical Layer Transceiver<br>3. Data Link Layer<br>4. KNX Serial Number for multicast communication<br>5. RF Domain Address for multicast communication<br>6. LTE frame format<br>7. Extended LTE Group Addresses and frame acceptance<br>8. Data Link Layer-Retransmitter<br>9. Data Link Layer-Media Coupler<br>10.<br>Local Services Metering|X <br>M <br>M <br>O <br>M <br>O <br>O <br>O <br>O <br>O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

11. KNX Serial Number M
12. APDU-length ≥ 15

2.8.2.3.2.1 Physical Layer Sender

**Specification** **Test**

[02] - §5.1 “Physical Layer for KNX RF Ready
and BiBat”

    - §5.2 “Datagram structure for RF Ready
and BiBat”

2.8.2.3.2.2 Physical Layer Transceiver

**Specification** **Test**

[02] - §5.1 “Physical Layer for KNX RF Ready
and BiBat”

    - §5.2 “Datagram structure for RF Ready
and BiBat”

The S-Mode Configuration Procedures may result in a lot of Telegrams on the KNX RF Medium.
For this, it is strongly recommended, both for the MaS as for the S-Mode MaC, to apply Listen
Before Talk (LBT, see [02]), to avoid RF collision. LBT is part of the KNX RF Multi type, but with
S-Mode Configuration Procedures, the Telegram rate is higher than the duty cycle requirements
for the KNX RF Ready type. Therefore, in order not to limit the Telegram rate, LBT is a
recommended solution.

2.8.2.3.2.3 Data Link Layer

**Specification** **Test**

   - **Frame format**

[02] - §5.1.2 “Datagram structure for RF Ready
and BiBat

   - **Medium Access Control**

[02] - §5.1.3 “Medium access”

   - **Addressing**

[02] - §6.1.1.1 “Extended Group Address” –
point-to-multipoint – DoA of sender

    - §6.1.4.2 “Duplication prevention”

Savedate: Filename: page 70 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Col1|mask 27B0h|
|---|---|
|11.<br>KNX Serial Number<br>12.<br>APDU-length|M <br>≥ 15|

|Specification|Test|
|---|---|
|[02] -<br>§5.1 “Physical Layer for KNX RF Ready<br>and BiBat”<br>- <br>§5.2 “Datagram structure for RF Ready<br>and BiBat”||

|Specification|Test|
|---|---|
|[02] -<br>§5.1 “Physical Layer for KNX RF Ready<br>and BiBat”<br>- <br>§5.2 “Datagram structure for RF Ready<br>and BiBat”||

|Specification|Test|
|---|---|
|• **Frame format**<br>[02] -<br>§5.1.2 “Datagram structure for RF Ready<br>and BiBat||
|• **Medium Access Control**<br>[02] -<br>§5.1.3 “Medium access”||
|• **Addressing**<br>[02] -<br>§6.1.1.1 “Extended Group Address” –<br>point-to-multipoint – DoA of sender<br>- <br>§6.1.4.2 “Duplicationprevention”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

 _The reference to clause 6.1.1.1 is actually a forward reference to where this will be specified after integration_
_of this document. For the time being, what is referred to here as clause 6.1.1.1 is actually specified in_
_clause 2.2.1.1 of this document._

2.8.2.3.2.4 KNX Serial Number for multicast communication

**Specification** **Test**

[02] - §6.1.1.1 “Extended Group Address”

 _Please note that the contents of the referred clause will be modified by this document._

2.8.2.3.2.5 RF Domain Address for multicast communication

**Specification** **Test**

[02] - §6.1.1.4 “RF Domain Address”

 _Please note that the contents of the referred clause will be modified by this document._

2.8.2.3.2.6 LTE frame format

**Specification** **Test**

[02] - §6.1.2.4 “First block”

    - §6.1.2.6 “Second block for LTE Extended
Datagrams”

2.8.2.3.2.7 Extended LTE Group Addresses and frame acceptance

**Specification** **Test**

[02] - §6.1.5.3.1 “Additional Frame acceptance
criteria for LTE Extended Datagrams”

2.8.2.3.2.8 Data Link Layer-Retransmitter

**Specification** **Test**

[02] - §6.2.2 “The Layer-2 of an RF
Retransmitter”

2.8.2.3.2.9 Data Link Layer-Media Coupler

**Specification** **Test**

[02] - §6.1.6 “The Layer-2 of an RF-TP Media
Coupler”

2.8.2.3.2.10 Local Services Metering

**Specification** **Test**

[14] - §2 “Message format” – code for
L_Meter.ind

    - §3.3.3.5 “L_Meter.ind”

Savedate: Filename: page 71 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[02] -<br>§6.1.1.1 “Extended Group Address”||

|Specification|Test|
|---|---|
|[02] -<br>§6.1.1.4 “RF Domain Address”||

|Specification|Test|
|---|---|
|[02] -<br>§6.1.2.4 “First block”<br>- <br>§6.1.2.6 “Second block for LTE Extended<br>Datagrams”||

|Specification|Test|
|---|---|
|[02] -<br>§6.1.5.3.1 “Additional Frame acceptance<br>criteria for LTE Extended Datagrams”||

|Specification|Test|
|---|---|
|[02] -<br>§6.2.2 “The Layer-2 of an RF<br>Retransmitter”||

|Specification|Test|
|---|---|
|[02] -<br>§6.1.6 “The Layer-2 of an RF-TP Media<br>Coupler”||

|Specification|Test|
|---|---|
|[14] -<br>§2 “Message format” – code for<br>L_Meter.ind<br>- <br>§3.3.3.5 “L_Meter.ind”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.3.2.11 KNX Serial Number

**Specification** **Test**

[03] - §4.15.1 “Abstract Resource definition”

    - §4.15.2 “KNX Serial Number –
Realisation Type 1”

###### 2.8.2.4 Configuration & Management (S-Mode, Server)
This clause describes the requirements on an S-Mode device, which are relevant for
configuration as a Management Server accessed only via the bus. The objective is to guarantee
Interworking with the configuration tool (ETS).

2.8.2.4.1 Communication

**Feature**

01 TL - broadcast M
02 TL - connection oriented M
03 TL - connection oriented minimal X
04 TL - connectionless M

2.8.2.4.1.1 TL - broadcast

**Specification** **Test**

[10] All features of the following clauses are

mandatory except for the coding of the
internal service primitives.

    - §1.3 “Point-to-all-Points Connectionless
(Broadcast) Communication Mode”

    - §2 “TPDU”

    - §3.4 “T_Data_Broadcast”

    - §4 “Parameters of Transport Layer”

Savedate: Filename: page 72 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[03] -<br>§4.15.1 “Abstract Resource definition”<br>- <br>§4.15.2 “KNX Serial Number –<br>Realisation Type 1”||

|Col1|Feature|Mask 27B0h|
|---|---|---|
|01<br>02<br>03<br>04|TL - broadcast<br> TL - connection oriented<br> TL - connection oriented minimal<br> TL - connectionless|M <br>M <br>X <br>M|

|Specification|Test|
|---|---|
|[10] All features of the following clauses are<br>mandatory except for the coding of the<br>internal service primitives.<br>- <br>§1.3 “Point-to-all-Points Connectionless<br>(Broadcast) Communication Mode”<br>- <br>§2 “TPDU”<br>- <br>§3.4 “T_Data_Broadcast”<br>- <br>§4 “Parameters of Transport Layer”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.1.2 TL - connection oriented

**Specification** **Test**

[10] All features of the following clauses are [17]
mandatory except for the coding of the internal
service primitives.

      - §1.6 “Point-to-Point, Connection-Oriented
Communication Mode”

      - §2 “TPDU”

      - §3.7 “T_Connect service”

      - §3.8 “T_Disconnect service”

      - §3.9 “T_Data_Connected service”

      - §4 “Parameters of Transport Layer”

      - §5.1 “States”

      - §5.2 “Actions”

      - §5.3.3 “Style 3”

2.8.2.4.1.3 TL - connectionless

**Specification** **Test**

[10] All features of the following clauses are [17]

mandatory except for the coding of the
internal service primitives:

    - §1.5 “Point-to-point connectionless
Communication Mode”

    - §2 “TPDU”

    - §3.6 “T_Data_Individual”

Savedate: Filename: page 73 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[10]<br>All features of the following clauses are<br>mandatory except for the coding of the internal<br>service primitives.<br>- <br>§1.6 “Point-to-Point, Connection-Oriented<br>Communication Mode”<br>- <br>§2 “TPDU”<br>- <br>§3.7 “T_Connect service”<br>- <br>§3.8 “T_Disconnect service”<br>- <br>§3.9 “T_Data_Connected service”<br>- <br>§4 “Parameters of Transport Layer”<br>- <br>§5.1 “States”<br>- <br>§5.2 “Actions”<br>- <br>§5.3.3 “Style 3”|[17]|

|Specification|Test|
|---|---|
|[10] All features of the following clauses are<br>mandatory except for the coding of the<br>internal service primitives:<br>- <br>§1.5 “Point-to-point connectionless<br>Communication Mode”<br>- <br>§2 “TPDU”<br>- <br>§3.6 “T_Data_Individual”|[17]|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.2 Device Management
In this clause all general requirements on a device concerning the mechanisms used for access
by the Management Client are described.

**Feature**

01 Direct memory Access M
02 DMA on User Memory M
03 Verify mode[ 12)] M
04 Interface Object Handling[ 13)] M
05 Reduced Interface Objects X
06 Function Properties M

07 Load and Run State Machines

08 a. Realisation Type 1 M

09 b. Realisation Type 2 O
10 Hardware Specific Parameters n/a
11 RAM cleared n/a
12 User EEPROM n/a
13 Restart
14 a. connectionless O
15 b. connection-oriented M
16 c. Master Reset O
17 Authorization[ 14)] M
18 nr of access levels 4
19 Memory Control Table O

12) If Verify Mode is not implemented, it shall always be off.
13) Please refer to the specification of mandatory and optional Interface Objects, Properties and Property fields
further in this Profile definition.
14) The support of the A_Authorize- and the A_Keywrite-service does not imply that the device itself has access
protected areas. If this is not the case, a device shall always allow – regardless of the attributed keys – access to
the highest level (0), including when receiving an illegal key (‘illegal’ in this sense meaning another key than any
of the keys entered in the key table).

Savedate: Filename: page 74 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Col1|Col2|
|---|---|
|**Feature**|mask 27B0h|
|01 Direct memory Access<br>02 DMA on User Memory<br>03 Verify mode 12) <br>04 Interface Object Handling 13) <br>05 Reduced Interface Objects<br>06 Function Properties<br>07 Load and Run State Machines<br>08 a. Realisation Type 1<br>09 b. Realisation Type 2<br>10 Hardware Specific Parameters<br>11 RAM cleared<br>12 User EEPROM<br>13 Restart<br>14 a. connectionless<br>15 b. connection-oriented<br>16 c. Master Reset<br>17 Authorization 14) <br>18 <br>nrof access levels|M <br>M <br>M <br>M <br>X <br>M <br>M <br>O <br>    n/a<br>n/a<br>n/a<br>O <br>M <br>O <br>M <br>4|
|19 Memory Control Table|O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.2.1 Direct Memory Access

**Specification** **Test**

[13] - §3.2.1 “DMP_Connect_RCo” [18] - §2 “Network Management Server Tests”

    - §3.3.2 “DMP_Disconnect_RCo” corresponding tests

    - §3.18.2 “DMP_MemRead_RCo”

    - §3.16.2 “DMP_MemWrite_RCo”

2.8.2.4.2.2 DMA on user memory

**Specification** **Test**

[13] - §3.19 “DM_UserMemWrite” [18] - §2 “Network Management Server Tests
corresponding tests

2.8.2.4.2.3 Verify Mode (for A_Memory_Write)

**Specification** **Test**

[03] - §4.2.14.7 "Verify Mode Control" [18] - §2 ”Network Management Server Tests”
management server part. Tests 7.1 to 7.7

2.8.2.4.2.4 Interface Object Handling
Please also refer to the specification of mandatory and optional Interface Objects, Properties
and Property fields further in this Profile definition.

**Specification** **Test**

[13] - §3.22.2 “DMP_InterfaceObjectWrite_R” [18] - §2 “Network Management Server Tests”

    - §3.24.2 “DM_InterfaceObjectRead_R” corresponding tests

    - §3.23.2 “DMP_InterfaceObjectVerify_R”

    - §3.25.2 “DM_InterfaceObjectScan_R”

[12] - §4 “Interface Object Server” [18] - §2 “Network Management Server Tests”
corresponding tests

2.8.2.4.2.5 Reduced Interface Objects

**Specification** **Test**

[13] - §3.22.2 “DMP_ReducedInterfaceObject- [18] - §2 “Network Management Server Tests”
Write_R” corresponding tests

    - §3.24.3 “DMP_ReducedInterfaceObjectRead_R”

    - §3.25.3 “DMP_ReducedInterfaceObjectScan_R”

[12] - §4.1 “Common structure” [18] - §2 “Network Management Server Tests”

    - §4.3.2 “Reduced Interface Object” corresponding tests

2.8.2.4.2.6 Function Properties

**Specification** **Test**

[11] - §2 “APDU”

    - §3.4.1 “Introduction”

    - §3.4.5 “Function Property Services”

Savedate: Filename: page 75 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[13] - <br>§3.2.1 “DMP_Connect_RCo”<br>- <br>§3.3.2 “DMP_Disconnect_RCo”<br>- <br>§3.18.2 “DMP_MemRead_RCo”<br>- <br>§3.16.2 “DMP_MemWrite_RCo”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|[13] - <br>§3.19 “DM_UserMemWrite”|[18] -<br>§2 “Network Management Server Tests<br>corresponding tests|

|Specification|Test|
|---|---|
|[03] -<br>§4.2.14.7 "Verify Mode Control"<br>management serverpart.|[18] -<br>§2 ”Network Management Server Tests”<br>Tests 7.1 to 7.7|

|Specification|Test|
|---|---|
|[13] -<br>§3.22.2 “DMP_InterfaceObjectWrite_R”<br>- <br>§3.24.2 “DM_InterfaceObjectRead_R”<br>- <br>§3.23.2 “DMP_InterfaceObjectVerify_R”<br>- <br>§3.25.2 “DMInterfaceObjectScanR”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|
|__<br>[12] -<br>§4 “Interface Object Server”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|[13] -<br>§3.22.2 “DMP_ReducedInterfaceObject-<br>Write_R”<br>- <br>§3.24.3 “DMP_ReducedInterfaceObject-<br>Read_R”<br>- <br>§3.25.3 “DMP_ReducedInterfaceObject-<br>Scan_R”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|
|[12] -<br>§4.1 “Common structure”<br>- <br>§4.3.2 “Reduced Interface Object”|[18] -<br>§2 “Network Management Server Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|[11] -<br>§2 “APDU”<br>- <br>§3.4.1 “Introduction”<br>- <br>§3.4.5 “Function Property Services”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Specification** **Test**

[12] - §4.1 “Common structure”

    - §4.2 “Minimal requirements of Interface
Objects”

    - §4.4.2 “Function Properties”

[13] - §3.26 “DM_FunctionProperty_Write_R”

2.8.2.4.2.7 Load - and Run State Machines

**a) Realisation Type 1 - Property based**

**Specification** **Test**

[03] - records

[13] - §3.27.3 “DMP_LoadStateMachineWrite_- [18] - §2 “Network Management Tests”
Rco_IO” corresponding tests

    - §3.28.3 “DM_LoadStateMachineVerify_R_IO”

    - §3.29.3 “DMP_LoadStateMachineRead_R_IO”

    - §3.30.3 “DMP_RunStateMachineWrite_R_IO”

    - §3.31.3 “DMP_RunStateMachineVerify_R_IO”

    - §3.32.3 “DMP_RunStateMachineRead_R_IO”

**b) Realisation Type 2 – Memory mapped**

**Specification** **Test**

[03] records

[13] - §3.27.2 [18] - §2 “Network Management Tests”
“DMP_LoadStateMachineWrite_Rco_Me corresponding tests
m”

    - §3.28.2
“DMP_LoadStateMachineVerify_Rco_Me
m”

    - §3.29.2
“DMP_LoadStateMachineRead_Rco_Me
m”

    - §3.30.2
“DMP_RunStateMachineWrite_Rco_Me
m”

    - §3.31.2
“DMP_RunStateMachineVerify_Rco_Me
m”

    - §3.32.2
“DMP_RunStateMachineRead_Rco_Me
m”

2.8.2.4.2.8 Hardware specific Parameters

**Specification** **Test**

   - **0100h (RW)**

[03] - §4.18 “OptionReg”

Savedate: Filename: page 76 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[12] -<br>§4.1 “Common structure”<br>- <br>§4.2 “Minimal requirements of Interface<br>Objects”<br>- <br>§4.4.2 “Function Properties”||
|[13] -<br>§3.26 “DM_FunctionProperty_Write_R”||

|a) Realisation Type 1 - Property based|Col2|
|---|---|
|**Specification**|**Test**|
|[03] -<br>records||
|[13] -<br>§3.27.3 “DMP_LoadStateMachineWrite_-<br>Rco_IO”<br>- <br>§3.28.3 “DM_LoadStateMachineVerify_-<br>R_IO”<br>- <br>§3.29.3 “DMP_LoadStateMachineRead_-<br>R_IO”<br>- <br>§3.30.3 “DMP_RunStateMachineWrite_-<br>R_IO”<br>- <br>§3.31.3 “DMP_RunStateMachineVerify_-<br>R_IO”<br>- <br>§3.32.3 “DMP_RunStateMachineRead_-<br>RIO”|[18] -<br>§2 “Network Management Tests”<br>corresponding tests|
|_<br>**b) Realisation Type 2 – Memory mapped**|_<br>**b) Realisation Type 2 – Memory mapped**|
|**Specification**|**Test**|
|[03] records||
|[13] -<br>§3.27.2<br>“DMP_LoadStateMachineWrite_Rco_Me<br>m”<br>- <br>§3.28.2<br>“DMP_LoadStateMachineVerify_Rco_Me<br>m”<br>- <br>§3.29.2<br>“DMP_LoadStateMachineRead_Rco_Me<br>m”<br>- <br>§3.30.2<br>“DMP_RunStateMachineWrite_Rco_Me<br>m”<br>- <br>§3.31.2<br>“DMP_RunStateMachineVerify_Rco_Me<br>m”<br>- <br>§3.32.2<br>“DMP_RunStateMachineRead_Rco_Me<br>m”|[18] -<br>§2 “Network Management Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|• **0100h (RW)**<br>[03] -<br>§4.18 “OptionReg”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.2.9 RAM cleared
System B does not have any standard memory organisation or standard memory locations, so
this feature is optional.

2.8.2.4.2.10 User EEPROM
System B does not have any standard memory organisation or standard memory locations, so
this feature is optional.

2.8.2.4.2.11 Restart

2.8.2.4.2.11.1 Restart connectionless

**Specification** **Test**

[13] - §3.7.2 DM_Restart_RCl

2.8.2.4.2.11.2 Restart connection-oriented

**Specification** **Test**

[13] - §3.2.1 DMP_Connect_RCo - §2.9.1 “Send Restart”

    - §3.7.3 DM_Restart_RCo

2.8.2.4.2.11.3 Master Reset
Master Reset is optional for the mask 2705h. However, as KNX RF is an open medium, it would
be possible for any hacker to set a KNX RF S-Mode device out of operation by an unprotected
Master Reset. Therefore, it is recommended that if Master Reset is implemented, that it only be
accepted from an authenticated communication partner, using the A_Authorize-service or KNX
Data Security (see [22]).

**Specification** **Test**

[03] - §4.9.1 “Group Address Table” – “default To be completed.
state”

    - §4.10.1 “Group Object Association Table”
– “default state”

[13] - §3.7.2 “DM_Restart_RCl” – master reset To be completed.

    - §3.7.3 “DM_Restart_RCo” – master reset

2.8.2.4.2.12 Authorization

**Specification** **Test**

   - **Management Procedures**

[13] - §3.5.1 “DM_Authorize_RCo”

    - §3.5.2 “DM_Authorize2_RCo”

    - §3.6 “DM_SetKey”

2.8.2.4.2.13 Memory Control Table

**Specification** **Test**

   - **PID_MCB_TABLE**

[03] - §4.2.27 “PID_MCB_TABLE” (PID = 27)
as read-only.

Savedate: Filename: page 77 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[13] -<br>§3.7.2 DM_Restart_RCl||

|Specification|Test|
|---|---|
|[13] -<br>§3.2.1 DMP_Connect_RCo<br>- <br>§3.7.3 DM_Restart_RCo|- <br>§2.9.1 “Send Restart”|

|Specification|Test|
|---|---|
|[03] -<br>§4.9.1 “Group Address Table” – “default<br>state”<br>- <br>§4.10.1 “Group Object Association Table”<br>– “default state”|To be completed.|
|[13] -<br>§3.7.2 “DM_Restart_RCl” – master reset<br>- <br>§3.7.3 “DM_Restart_RCo” – master reset|To be completed.|

|Specification|Test|
|---|---|
|• **Management Procedures**<br>[13] -<br>§3.5.1 “DM_Authorize_RCo”<br>- <br>§3.5.2 “DM_Authorize2_RCo”<br>- <br>§3.6 “DM_SetKey”||

|Specification|Test|
|---|---|
|• **PID_MCB_TABLE**<br>[03] -<br>§4.2.27 “PID_MCB_TABLE” (PID = 27)<br>as read-only.||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.3 Device Discovery

**Feature**

1 Management Procedures with A_SystemNetwork
Parameter_Read-PDU

1.1 NM_Read_SerialNumber_By_ProgrammingMode M
1.2 NM_Read_SerialNumber_By_ExFactoryState M
1.3 NM_Read_SerialNumber_By_PowerReset M

2.8.2.4.3.1 NM_Read_SerialNumber_By_ProgrammingMode

**Specification** **Test**

[25] - §2.4.2.4 “NM_Read_SerialNumber_By_ProgrammingMode”

2.8.2.4.3.2 NM_Read_SerialNumber_By_ExFactoryState

**Specification** **Test**

[25] - §2.4.2.5 “NM_Read_SerialNumber_By_ExFactoryState”

2.8.2.4.3.3 NM_Read_SerialNumber_By_PowerReset

**Specification** **Test**

[25] - §2.4.2.6 “NM_Read_SerialNumber_By_PowerReset”

Savedate: Filename: page 78 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Feature|Mask 2705h|
|---|---|
|1 Management Procedures with A_SystemNetwork-<br>Parameter_Read-PDU<br> 1.1 NM_Read_SerialNumber_By_ProgrammingMode<br> 1.2 NM_Read_SerialNumber_By_ExFactoryState<br> 1.3 NM_Read_SerialNumber_By_PowerReset|M <br>M <br>M|

|Specification|Test|
|---|---|
|[25] -<br>§2.4.2.4 “NM_Read_SerialNumber_By_-<br>ProgrammingMode”||

|Specification|Test|
|---|---|
|[25] -<br>§2.4.2.5 “NM_Read_SerialNumber_By_-<br>ExFactoryState”||

|Specification|Test|
|---|---|
|[25] -<br>§2.4.2.6 “NM_Read_SerialNumber_By_-<br>PowerReset”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.4 Device Identification

**Feature**

01 Device Descriptor Service - connection oriented M
02 Device Descriptor Service - connectionless M
03 Device Descriptor Type 0 M
04 Device Descriptor Type 2 O
05 Device Descriptor InfoReport O
06 Management Descriptor 1 O
07 Identification of hardware M
08 Identification of Application M

2.8.2.4.4.1 Device Descriptor Service - connection oriented

**Specification** **Test**

[11] - §3.4.2.1 “A_DeviceDescriptor_Read- [18] - §2.5.1 “Read Mask-version”
service” (Network Management Tests)

2.8.2.4.4.2 Device Descriptor Service - connectionless

**Specification** **Test**

[11] - §3.4.2.1 “A_DeviceDescriptor_Read- [18] - §2.5.1 “Read Mask-version”
service” (Network Management Tests)

[13] - §3.2.2 “DMP_Connect_RCl”

2.8.2.4.4.3 Device Descriptor Type 0

**Specification** **Test**

[03] - §4.1.2 “Device Descriptor Type 0” [18] - §2.5.1 “Read Mask-version”
(Network Management Tests)

2.8.2.4.4.4 Management Descriptor 1

**Specification** **Test**

   - **Management Descriptor 1**

[03] - §4.3.23 “PID_MGT_DESCRIPTOR
(PID = 72)”

[13] - §3.4.2 “DM_Identify_R”

Savedate: Filename: page 79 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Feature|Mask 27B0h|
|---|---|
|01 Device Descriptor Service - connection oriented|M|
|02 Device Descriptor Service - connectionless|M|
|03 Device Descriptor Type 0|M|
|04 Device Descriptor Type 2|O|
|05 Device Descriptor InfoReport|O|
|06 Management Descriptor 1|O|
|<br>07 Identification of hardware|<br>M|
|08 Identification of Application|M|

|Specification|Test|
|---|---|
|[11] -<br>§3.4.2.1 “A_DeviceDescriptor_Read-<br>service”|[18] - <br>§2.5.1 “Read Mask-version”<br>(Network Management Tests)|

|Specification|Test|
|---|---|
|[11] -<br>§3.4.2.1 “A_DeviceDescriptor_Read-<br>service”|[18] -<br>§2.5.1 “Read Mask-version”<br>(Network Management Tests)|
|[13] -<br>§3.2.2 “DMP_Connect_RCl”|[13] -<br>§3.2.2 “DMP_Connect_RCl”|

|Specification|Test|
|---|---|
|[03] -<br>§4.1.2 “Device Descriptor Type 0”|[18] -<br>§2.5.1 “Read Mask-version”<br>(Network Management Tests)|

|Specification|Test|
|---|---|
|• **Management Descriptor 1**<br>[03] -<br>§4.3.23 “PID_MGT_DESCRIPTOR<br>(PID = 72)”<br>[13] -<br>§3.4.2 “DM_Identify_R”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.4.5 Identification of the hardware

**Specification** **Test**

[13] - §3.4.3 “DM_Identify_RCo2”

2.8.2.4.4.6 Identification of Application

**Specification** **Test**

[11] - §3.5.6.5 "A_UserManufacturerInfo_Read_service"

2.8.2.4.5 Device Individualisation
In this clause all requirements on a device for device individualisation and assignment of the
Individual Address are described.

**Feature**

01 Programming Mode
1.a Connection oriented M
1.b Connectionless O
Autonomous Inactivation M

02 KNX Serial Number
a client initiated M
b server initiated O

03 Domain Address Assignment M

04 Default Individual Address O

Savedate: Filename: page 80 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[13] -<br>§3.4.3 “DM_Identify_RCo2”||

|Specification|Test|
|---|---|
|[11] -<br>§3.5.6.5 "A_UserManufacturerInfo_-<br>Read_service"||

|Feature|Mask 27B0h|
|---|---|
|01 Programming Mode<br> 1.a Connection oriented<br> 1.b Connectionless|M <br>O|
|Autonomous Inactivation|M|
|02 KNX Serial Number<br> a client initiated<br> b server initiated|M <br>O|
|03 Domain Address Assignment|M|
|04 Default Individual Address|O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.5.1 Programming Mode

2.8.2.4.5.1.1 connection oriented

**a) Realisation Type 1 - Property based**

**Specification** **Test**

[13] - §2.2 “NM_IndividualAddress_Read”

    - §2.3 “NM_IndividualAddress_Write”[ 15)]

**Programming Mode Control**

   - via HMI: device selection and indication of
Programming Mode

   - via bus:

[03] - §4.3.5 “PID_PROGMODE”

[13] - §3.22.2 “DMP_InterfaceObjectWrite_R”

      - §3.23.2 “DMP_InterfaceObjectVerify_R”

      - §3.24.2 “DMP_InterfaceObjectRead_R”

2.8.2.4.5.1.2 Programming Mode – connectionless

**Specification** **Test**

[13] - §2.10 “NM_DomainAnd- [18] - §2.3 “Testing of A_IndividualAddressIndividualAddress_Write2” _Read-service – Server Test”

    - §2.2 “NM_IndividualAddress_Read”

**Programming Mode Control** [18] - §2.3 “Testing of A_IndividualAddress
   - via HMI: device selection and indication of _Read-service – Server Test”

Programming Mode

[13] - §3.13.2 “DMP_ProgModeSwitch_RCo”

[03] - §4.19.3 “Programming Mode –
Realisation Type 2”

2.8.2.4.5.1.3 Programming Mode – Autonomous Inactivation

**Specification** **Test**

[03] - §4.19.1 “Autonomous inactivation of Programming Mode”

2.8.2.4.5.2 KNX Serial Number

2.8.2.4.5.2.1 Client initiated

**Specification** **Test**

[13] - §2.4 “NM_IndividualAddress_Serial- [18] - §2.16 “Testing of A_IndividualAddressNumber_Read” SerialNumber_Write-Service : Server

    - §2.5 “NM_IndividualAddress_Serial- Test”
Number_Write”     - §2.17 “Testing of A_IndividualAddress
SerialNumber_Read-Service : Server
Test”

15) Implies connection-oriented TL and Application Layer services for accessing the Device Descriptor.

Savedate: Filename: page 81 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|a) Realisation Type 1 - Property based|Col2|
|---|---|
|**Specification**|**Test**|
|[13] -<br>§2.2 “NM_IndividualAddress_Read”<br>- <br>§2.3 “NM_IndividualAddress_Write” 15)||
|**Programming Mode Control**<br>• via HMI: device selection and indication of<br>Programming Mode<br>• via bus:<br>[03]<br>- <br>§4.3.5 “PID_PROGMODE” <br>[13]<br>- <br>§3.22.2 “DMP_InterfaceObjectWrite_R”<br>- <br>§3.23.2 “DMP_InterfaceObjectVerify_R”<br>- <br>§3.24.2 “DMP_InterfaceObjectRead_R”||

|Specification|Test|
|---|---|
|[13] -<br>§2.10 “NM_DomainAnd-<br>IndividualAddress_Write2”<br>- <br>§2.2 “NM_IndividualAddress_Read”|[18] -<br>§2.3 “Testing of A_IndividualAddress-<br>_Read-service – Server Test”|
|**Programming Mode Control**<br>• via HMI: device selection and indication of<br>Programming Mode<br>[13] -<br>§3.13.2 “DMP_ProgModeSwitch_RCo”<br>[03] -<br>§4.19.3 “Programming Mode –<br>Realisation Type 2”|[18] -<br>§2.3 “Testing of A_IndividualAddress-<br>_Read-service – Server Test”|

|Specification|Test|
|---|---|
|[03] -<br>§4.19.1 “Autonomous inactivation of<br>Programming Mode”|-|

|Specification|Test|
|---|---|
|[13] -<br>§2.4 “NM_IndividualAddress_Serial-<br>Number_Read”<br>- <br>§2.5 “NM_IndividualAddress_Serial-<br>Number_Write”|[18] -<br>§2.16 “Testing of A_IndividualAddress-<br>SerialNumber_Write-Service : Server<br>Test”<br>- <br>§2.17 “Testing of A_IndividualAddress-<br>SerialNumber_Read-Service : Server<br>Test”|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.5.2.2 Server initiated

**Specification** **Test**

[13] - §2.6 “NM_IndividualAddress_Serial- [18] - §2.16 “Testing of A_IndividualAddressNumber_Write2 SerialNumber_Write-Service : Server

Test”

2.8.2.4.5.3 Domain Address Assignment

**Specification** **Test**

[13] - §2.7 “NM_DomainAddress_Read” [18]

    - §2.12 “NM_DomainAddress_Scan”

2.8.2.4.5.4 Default Individual Address

**Specification** **Test**

[03] - §3.3 “Individual Address”

         - Subnetwork Address, value
according to the medium.

         - Device Address, fixed value FFh

2.8.2.4.6 Device Linking
In this clause all requirements on a device for linking of Group Objects are described. This
includes the configuration of Address - and Association Tables.

**Feature**

01 Group Address Table M

02 Group Object Association Table M

03 Linking via Properties O

04 Direct Link O

2.8.2.4.6.1 Group Address Table

**b) Group Address Table – Realisation Type 8**

   - Mask 5705h

**Specification** **Test**

[03] - §4.9.7 “Group Address Table –
Realisation Type 7”

Savedate: Filename: page 82 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Specification|Test|
|---|---|
|[13] -<br>§2.6 “NM_IndividualAddress_Serial-<br>Number_Write2|[18] -<br>§2.16 “Testing of A_IndividualAddress-<br>SerialNumber_Write-Service : Server<br>Test”|

|Specification|Test|
|---|---|
|[13] -<br>§2.7 “NM_DomainAddress_Read”<br>- <br>§2.12 “NM_DomainAddress_Scan”|[18]|

|Specification|Test|
|---|---|
|[03] -<br>§3.3 “Individual Address”<br>- <br>Subnetwork Address, value<br>according to the medium.<br>- <br>Device Address, fixed value FFh||

|Feature|Mask 27B0h|
|---|---|
|01 Group Address Table|M|
|02 Group Object Association Table|M|
|03 Linking via Properties|O|
|04 Direct Link|O|

|b) Group Address Table – Realisation Type 8<br>• Mask 5705h|Col2|
|---|---|
|**Specification**<br>[03] -<br>§4.9.7 “Group Address Table –<br>Realisation Type 7”|**Test**|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.4.6.2 Group Object Association Table

**b) Group Object Association Table – Realisation Type 6**

**Specification** **Test**

[03] - §4.10.4 “Group Object Association Table
– Realisation Type 6”

2.8.2.4.7 Application Handling
In this clause all requirements necessary for an application program to be able to run on a
target device are listed.

01 Group Object Table M
02 Application Program & Parameters M
03 Application Specific Parameters M
04 Application Programming Interface (API) O
05 Functional Parameters O

  - unidirectional n/a

  - bidirectional O

2.8.2.4.7.1 Group Object Table

**b) Group Object Table – Realisation Type 7**

   - System B

**Specification** **Test**

[03] - §4.15.5 “Group Object Table –
Realisation Type 7”

2.8.2.4.7.2 Application Program and Parameters

**Feature** **Specification** **Test**

   - pointer to user program [03]

  - user program

2.8.2.4.7.3 Application specific system parameters

**Feature** **Specification** **Test**

- user software version [03] Application Layer Tests,
System B Test specification

2.8.2.4.7.4 Application Programming Interface (API)

  - System B: No standard API is specified.

Savedate: Filename: page 83 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|b) Group Object Association Table – Realisation Type 6|Col2|
|---|---|
|**Specification**<br>[03] -<br>§4.10.4 “Group Object Association Table<br>– Realisation Type 6”|**Test**|

|Col1|Mask 27B0h|
|---|---|
|01 Group Object Table|M|
|02 Application Program & Parameters|M|
|03 Application Specific Parameters|M|
|04 Application Programming Interface(API)|O|
|05 Functional Parameters|O|
|• unidirectional|n/a|
|• bidirectional|O|

|b) Group Object Table – Realisation Type 7<br>• System B|Col2|
|---|---|
|**Specification**<br>[03] -<br>§4.15.5 “Group Object Table –<br>Realisation Type 7”|**Test**|

|Feature|Specification|Test|
|---|---|---|
|- <br>pointer to user program<br>- <br>userprogram|[03]||

|Feature|Specification|Test|
|---|---|---|
|- <br>user software version|[03]|Application Layer Tests,<br>System B Test specification|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

###### 2.8.2.5 Local device access

2.8.2.5.1 Introduction and general requirements
Local device access is optional for the mask 27B0h.

Local devices access is only specified using cEMI, not for EMI1 or EMI2.

The below clauses concern the local devices access via the cEMI Transport Layer to the device.
For the usability of the device as bus interface, the “Profile: Domain Address based RF
Retransmitter” as specified in 2.8.3 has to be implemented additionally.

2.8.2.5.2 cEMI Profiles

2.8.2.5.2.1 Overview

1. Transport Layer Interface M
1. T_Data_Individual M
2. T_Data_Connected M
2. Local Device Management Services: M
1. M_PropRead M
2. M_PropWrite M
3. M_PropInd M
4. M_Reset.req M
5. M_Reset.ind M
6. M_FuncPropCommand.req M
7. M_FuncPropCommand.con M
8. M_FuncPropStateRead.req M
9. M_FuncPropStateRead.res M
10. M_Reset.req M
11. M_Reset.ind M

2.8.2.5.2.2 Transport Layer interface

**Specification** **Test**

[14] - §4.1.6 “Transport Layer messages”

2.8.2.5.3 Local device management services

**Specification** **Test**

[14] - §4.1.7 “Services for local device
management”

Savedate: Filename: page 84 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Col1|Mask 27B0h|
|---|---|
|1. Transport Layer Interface|M|
|1.<br>TDataIndividual|M|
|__<br> 2.<br>T_Data_Connected|M|
|2. Local Device Management Services:|M|
|1.<br>M_PropRead|M|
|2.<br>M_PropWrite|M|
|3. <br>M_PropInd|M|
|4.<br>M_Reset.req|M|
|5. <br>M_Reset.ind|M|
|6. <br>M_FuncPropCommand.req|M|
|7.<br>M_FuncPropCommand.con|M|
|8. <br>M_FuncPropStateRead.req|M|
|9. <br>M_FuncPropStateRead.res|M|
|10. MReset.req|M|
|_<br> 11. M_Reset.ind|M|

|Specification|Test|
|---|---|
|[14] -<br>§4.1.6 “Transport Layer messages”||

|Specification|Test|
|---|---|
|[14] -<br>§4.1.7 “Services for local device<br>management”||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.5.4 Interface Objects and Properties


2.8.2.5.4.1 Overview

Interface Object

0 Device Object M
8 cEMI Server Object O

|Interface Object|mask 27B0h|
|---|---|
|0 Device Object|M|
|8 cEMI Server Object|O|


2.8.2.5.4.2 Device Object

**Property**

1 PID_OBJECT_TYPE
71 PID_IO_LIST

2.8.2.5.4.3 cEMI Server Object

|Property|Col2|mask 27B0h|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|
|71 PID_IO_LIST|Data|3/1|


1 PID_OBJECT_TYPE Data 3/1
52 PID_COMM_MODE Data (3/2) a

a PID_COMM_MODE is mandatory if the cEMI Server can also be used for allowing the cEMI Client to communicate to the bus,
e.g. in a KNX RF USB interface. In this case, the cEMI Server does not automatically switch to cEMI Transport Layer if the cEMI
Client connects.

|Property|Col2|mask 27B0h|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|
|52 PID_COMM_MODE|Data|(3/2) a|


###### 2.8.2.6 Interface Objects and Properties

2.8.2.6.1 Overview


 _S-Mode Profiles  End devices  Interface Objects_

Mask 27B0h requires the following Interface Objects. Additionally, form most Interface Objects,
mandatory fix Object Indexes are required as specified below.


Savedate: Filename: page 85 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Interface Object**

0 Device Object M 0
1 Addresstable Object M 1
2 Association Table Object M 2
3 Applicationprogram Object M 4
4 Application Program 2 Object M 5
8 cEMI Server Object O -[ a]
9 Group Object Table Object M 3
19 RF Medium Object M 6
a No fix Object Index is required.

2.8.2.6.2 Device Object

 _S-Mode Profiles  End-devices  Device Object_

**Property**

1 PID_OBJECT_TYPE Data 3/x 3/1
2 PID_OBJECT_NAME Data (3/3) (3/3)
8 PID_SERVICE_CONTROL 16) Data (3/3) (3/3)
9 PID_FIRMWARE_REVISION Data (3/x) (3/1)
11 PID_SERIAL_NUMBER Data 3/x 3/1
12 PID_MANUFACTURER_ID Data 3/x 3/1
14 PID_DEVICE_CONTROL Data 3/3 3/3
15 PID_ORDER_INFO Data 3/x 3/1
16 PID_PEI_TYPE 17) Data 3/x 3/1
17 PID_PORT_CONFIGURATION Data (3/3) (3/3)
19 PID_MANUFACTURER_DATA Data (3/x) (3/1)
21 PID_DESCRIPTION Data (3/3) (3/3)
25 PID_VERSION Data 3/x 3/1

16) PID_SERVICE_CONTROL is a bitfield of which not all fields have to be supported. For the specification of which
Profile shall support which field, please refer to 2.7.1.6.2.1.
17) PID_PEI_TYPE is mandatory for devices with PEI and supporting Properties.

Savedate: Filename: page 86 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Interface Object|mask 27B0h|Col3|
|---|---|---|
|**Interface Object**|**M/O**|**Object Index**|
|0 Device Object|M|0|
|1 Addresstable Object|M|1|
|2 Association Table Object|M|2|
|3 Applicationprogram Object|M|4|
|4 Application Program 2 Object|M|5 <br>|
|8 cEMIServer Object|O|-~~ a~~|
|9 Group Object Table Object|M|3|
|19 RF Medium Object|M|6|
|a No fix Object Index is required.|a No fix Object Index is required.|a No fix Object Index is required.|

|Property|Col2|System B|mask 27B0h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/1|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|8 PID_SERVICE_CONTROL 16)|Data|(3/3)|(3/3)|
|9 PID_FIRMWARE_REVISION|Data|(3/x)|(3/1)|
|11 PID_SERIAL_NUMBER|Data|3/x|3/1|
|12 PID_MANUFACTURER_ID|Data|3/x|3/1|
|14 PID_DEVICE_CONTROL|Data|3/3|3/3|
|15 PID_ORDER_INFO|Data|3/x|3/1|
|16 PID_PEI_TYPE 17)|Data|3/x|3/1|
|17 PID_PORT_CONFIGURATION|Data|(3/3)|(3/3)|
|19 PID_MANUFACTURER_DATA|Data|(3/x)|(3/1)|
|21 PID_DESCRIPTION|Data|(3/3)|(3/3)|
|25 PID_VERSION|Data|3/x|3/1|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**Property**

51 PID_ROUTING_COUNT Data 3/3 **n/a**

2.8.2.6.2.1 PID_SERVICE_CONTROL (PID = 8)

 _S-Mode Profiles  End-devices  Device Object  PID_SERVICE_CONTROL_

Bit# Bit function

00 User Stopped_ServiceInfo Enable O
01 OwnIndividual AddressReceived_ServiceInfo Enable O
02 IndividualAddress_Write Enable M
03 Reserved O
04 Reserved O
05 Reserved O
06 Reserved O
07 Reserved O
08 Application Interface Layer Services on EMI Disable O
09 Data Link Layer Services on EMI Disable O
10 Network Layer Services on EMI Disable O
11 Transport Layer Group Services on EMI Disable O
12 Switch Service-Services on EMI Disable O
13 Transport Layer Connection Oriented Services on EMI Disable O
14 Application Layer Services on EMI Disable O
15 Management Services on EMI Disable O

Savedate: Filename: page 87 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Property|Col2|System B|mask 27B0h|
|---|---|---|---|
|51 PID_ROUTING_COUNT|Data|3/3|**n/a **|

|Col1|Col2|System B|
|---|---|---|
||||
|Bit#|Bit function|mask 27B0h|
|00|User Stopped_ServiceInfo Enable|O|
|01|OwnIndividual AddressReceived_ServiceInfo Enable|O|
|02|IndividualAddress_Write Enable|M|
|03|Reserved|O|
|04|Reserved|O|
|05|Reserved|O|
|06|Reserved|O|
|07|Reserved|O|
|08|Application Interface Layer Services on EMI Disable|O|
|09|Data Link Layer Services on EMI Disable|O|
|10|Network Layer Services on EMI Disable|O|
|11|Transport Layer Group Services on EMI Disable|O|
|12|Switch Service-Services on EMI Disable|O|
|13|Transport Layer Connection Oriented Services on EMI Disable|O|
|14|Application Layer Services on EMI Disable|O|
|15|Management Services on EMI Disable|O|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.6.3 Group Address Table Object (Object Type = 1)


 _S-Mode Profiles  End-devices  Group Address Table Object_

**Property**

1 PID_OBJECT_TYPE Data 3/x 3/x
2 PID_OBJECT_NAME Data (3/3) (3/3)
5 PID_LOAD_STATE_CONTROL Data 3/(3) 3/(3)
7 PID_TABLE_REFERENCE Data 3/x 3/x
23 PID_TABLE Data 3/(3) 3/(3)
27 PID_MCB_TABLE Data (3/3) (3/3)
28 PID_ERROR_CODE Data (3/x) (3/x)
53 PID_GROUP_RESPONDER_TABLE Data 3/3[18] X

2.8.2.6.3.1 PID_LOAD_STATE_CONTROL (PID = 5)

|Property|Col2|System B|mask 27B0h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|5 PID_LOAD_STATE_CONTROL|Data|3/(3)|3/(3)|
|7 PID_TABLE_REFERENCE|Data|3/x|3/x|
|23 PID_TABLE|Data|3/(3)|3/(3)|
|27 PID_MCB_TABLE|Data|(3/3)|(3/3)|
|28 PID_ERROR_CODE|Data|(3/x)|(3/x)|
|53 PID_GROUP_RESPONDER_TABLE|Data|3/318|<br>X|


**Table 7 – Required Load Controls**

**Load** **Sub-**
**Control** **type Description**

00h No operation O
01h Start Loading M
02h Load Completed M
03h Additional Load Controls M

Absolute Code/Data
O

00h Allocation

01h Absolute Stack Allocation O
02h Segment Control Record O
03h Task Pointer Record O
04h Task Control Record-1 O
05h Task Control Record-2 O
0Ah Relative Allocation 0
0Bh Data Relative Allocation M
04h Unload M

NOTE Table 6 specifies globally for the device which Load Controls shall be supported. Which Load Controls shall be
supported for the management of a specific Resource is specified in the (Realisation Type of) the Resource in [03].

18) This Property is mandatory for PL110 devices. For all other media, this Property shall not be implemented.

|Col1|Col2|Col3|System B|
|---|---|---|---|
|**Load**<br>**Control**|**Sub-**<br>**type**|** Description**|mask 27B0h|
|00h||No operation|O|
|01h||Start Loading|M|
|02h||Load Completed|M|
|03h||Additional Load Controls|M|
||00h|<br>Absolute Code/Data<br>Allocation|O|
||<br>01h|<br> <br> Absolute Stack Allocation|O|
||<br>02h|<br> Segment Control Record|O|
||03h|Task Pointer Record|O|
||04h|Task Control Record-1|O|
||05h|Task Control Record-2|O|
||0Ah|Relative Allocation|0|
||0Bh|Data Relative Allocation|M|
|04h||Unload|M|


Savedate: Filename: page 88 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.6.4 Association Table Object (Object Type = 2)


 _S-Mode Profiles  End-devices  Association Table Object_

Property

1 PID_OBJECT_TYPE Data 3/x 3/x
2 PID_OBJECT°NAME Data (3/3) (3/3)
5 PID_LOAD_STATE_CONTROL Data 3/(3) 3/(3)
7 PID_TABLE_REFERENCE Data 3/x 3/x
23 PID_TABLE Data 3/(3) 3/(3)
27 PID_MCB_TABLE Data (3/3) (3/3)
28 PID_ERROR_CODE Data (3/x) (3/x)

2.8.2.6.4.1 PID_LOAD_STATE_CONTROL (PID = 5)
Please refer to 2.8.2.6.3.1.

|Property|Col2|System B|mask 27B0h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|
|2 PID_OBJECT°NAME|Data|(3/3)|(3/3)|
|5 PID_LOAD_STATE_CONTROL|Data|3/(3)|3/(3)|
|7 PID_TABLE_REFERENCE|Data|3/x|3/x|
|23 PID_TABLE|Data|3/(3)|3/(3)|
|27 PID_MCB_TABLE|Data|(3/3)|(3/3)|
|28 PID_ERROR_CODE|Data|(3/x)|(3/x)|


2.8.2.6.5 Applicationprogram Object (Object Type = 3)

 _S-Mode Profiles  End-devices  Application Object_


1 PID_OBJECT_TYPE Data 3/x 3/x
2 PID_OBJECT_NAME Data (3/3) (3/3)
5 PID_LOAD_STATE_CONTROL Data 3/3 3/3
6 PID_RUN_STATE_CONTROL Data (3/3) (3/3)
7 PID_TABLE_REFERENCE Data 3/x 3/x
13 PID_PROGRAM_VERSION Data 3/3 3/3
16 PID_PEI_TYPE Data 3/3 3/3
27 PID_MCB_TABLE Data (3/3) (3/3)
28 PID_ERROR_CODE Data (3/x) (3/x)
51 PID_PARAM_REFERENCE Data (3/x) (3/x)

2.8.2.6.5.1 PID_LOAD_STATE_CONTROL (PID = 5)
Please refer to 2.8.2.6.3.1.

|Property|Col2|System B|mask 27B0h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|5 PID_LOAD_STATE_CONTROL|Data|3/3|3/3|
|6 PID_RUN_STATE_CONTROL|Data|(3/3)|(3/3)|
|7 PID_TABLE_REFERENCE|Data|3/x|3/x|
|13 PID_PROGRAM_VERSION|Data|3/3|3/3|
|16 PID_PEI_TYPE|Data|3/3|3/3|
|27 PID_MCB_TABLE|Data|(3/3)|(3/3)|
|28 PID_ERROR_CODE|Data|(3/x)|(3/x)|
|51 PID_PARAM_REFERENCE|Data|(3/x)|(3/x)|


Savedate: Filename: page 89 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.6.6 Applicationprogram Object (Object Type = 4)


 _S-Mode Profiles  End-devices  Application Program 2 Object_

Property

1 PID_OBJECT_TYPE Data 3/x 3/x
2 PID_OBJECT_NAME Data (3/3) (3/3)
5 PID_LOAD_STATE_CONTROL Data 3/3 3/3
6 PID_RUN_STATE_CONTROL Data (3/3) (3/3)
7 PID_TABLE_REFERENCE Data 3/x 3/x
13 PID_PROGRAM_VERSION Data 3/3 3/3
16 PID_PEI_TYPE Data 3/3 3/3
27 PID_MCB_TABLE Data (3/3) (3/3)
28 PID_ERROR_CODE Data (3/x) (3/x)
51 PID_PARAM_REFERENCE Data (3/x) (3/x)

2.8.2.6.6.1 PID_LOAD_STATE_CONTROL (PID = 5)
Please refer to 2.8.2.6.3.1.

|Property|Col2|System B|mask 27B0h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|5 PID_LOAD_STATE_CONTROL|Data|3/3|3/3|
|6 PID_RUN_STATE_CONTROL|Data|(3/3)|(3/3)|
|7 PID_TABLE_REFERENCE|Data|3/x|3/x|
|13 PID_PROGRAM_VERSION|Data|3/3|3/3|
|16 PID_PEI_TYPE|Data|3/3|3/3|
|27 PID_MCB_TABLE|Data|(3/3)|(3/3)|
|28 PID_ERROR_CODE|Data|(3/x)|(3/x)|
|51 PID_PARAM_REFERENCE|Data|(3/x)|(3/x)|


2.8.2.6.7 Group Object Table Object (Object Type = 9)

 _S-Mode Profiles  End-devices  Group Object Table Object_


1 PID_OBJECT_TYPE Data 3/x 3/x
2 PID_OBJECT_NAME Data (3/3) (3/3)
5 PID_LOAD_STATE_CONTROL Data 3/(3) 3/(3)
7 PID_TABLE_REFERENCE Data 3/x 3/x
23 PID_TABLE Data 3/(3) 3/(3)
27 PID_MCB_TABLE Data (3/3) (3/3)
28 PID_ERROR_CODE Data (3/x) (3/x)
51 PID_GRP_OBJTABLE Data (3/3) (3/3)
52 PID_EXT_GRPOBJREFERENCE Data (3/3) (3/3)

Savedate: Filename: page 90 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Property|Col2|System B|mask 27B0h|
|---|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/x|3/x|
|2 PID_OBJECT_NAME|Data|(3/3)|(3/3)|
|5 PID_LOAD_STATE_CONTROL|Data|3/(3)|3/(3)|
|7 PID_TABLE_REFERENCE|Data|3/x|3/x|
|23 PID_TABLE|Data|3/(3)|3/(3)|
|27 PID_MCB_TABLE|Data|(3/3)|(3/3)|
|28 PID_ERROR_CODE|Data|(3/x)|(3/x)|
|51 PID_GRP_OBJTABLE|Data|(3/3)|(3/3)|
|52 PID_EXT_GRPOBJREFERENCE|Data|(3/3)|(3/3)|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.2.6.8 RF Medium Object


 _S-Mode Profiles  Interfaces  RF Medium Object_

Property

1 PID_OBJECT_TYPE Data 3/1
51 PID_RF_MULTI_TYPE Data 3/2
56 PID_RF_DOMAIN_ADDRESS Data 3/2
58 PID_RF_FILTERING_MODE_SUPPORT Data (3/2)
59 PID_RF_FILTERING_MODE_SELECT Data (3/2)
60 PID_RF_BIDIR_TIMEOUT Function M
SNwPar W
61 PID_RF_DIAG_SA_FILTER_TABLE Data 3/3
62 PID_RF_DIAG_QUALITY_TABLE Data 3/X
63 PID_RF_DIAG_PROBE Function M
75 PID_RF_TYPES_SUPPORTED Data O

##### 2.8.3 Profile: Domain Address based RF Retransmitter

|Property|Col2|mask 27B0h|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|
|51 PID_RF_MULTI_TYPE|Data|3/2|
|56 PID_RF_DOMAIN_ADDRESS|Data|3/2|
|58 PID_RF_FILTERING_MODE_SUPPORT|Data|(3/2)|
|59 PID_RF_FILTERING_MODE_SELECT|Data|(3/2)|
|60 PID_RF_BIDIR_TIMEOUT|Function|M|
|60 PID_RF_BIDIR_TIMEOUT|SNwPar|W|
|61 PID_RF_DIAG_SA_FILTER_TABLE|Data|3/3|
|62 PID_RF_DIAG_QUALITY_TABLE|Data|3/X|
|63 PID_RF_DIAG_PROBE|Function|M|
|75 PID_RF_TYPES_SUPPORTED|Data|O|


###### 2.8.3.1 Introduction and common requirements
The Domain Address based RF Retransmitter is not a device Profile, but is a Profile for
functionality that can be added to any KNX RF S-Mode Profile. The below clauses do therefore
not specify a full Profile, but only indicate the features that are required for this Module Profile.

###### 2.8.3.2 Common Profile


2.8.3.2.1.1 Overview

**Feature**

1 Network Layer – Domain Address based RF Retransmitter M

|Col1|Feature|DoA Based RF Retransmitter|
|---|---|---|
|1|Network Layer – Domain Address based RF Retransmitter|M|


2.8.3.2.1.2 Physical Layer - general

**Specification** **Test**

    - 2.2.1.4 “RF Domain Address based RF     - to be defined
Retransmitter”

Savedate: Filename: page 91 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Col1|Specification|Col3|Test|
|---|---|---|---|
||- <br>2.2.1.4 “RF Domain Address based RF<br>Retransmitter”||- <br>to be defined|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

###### 2.8.3.3 Medium dependent layers

2.8.3.3.1 Goal
This Profile describes the requirements on a device in order to guarantee compliance with one
of the standard communication media of the system. Compliance with one of these Profiles is a
prerequisite for both runtime and configuration Interworking.

2.8.3.3.2 RF medium dependent layers

1. Data Link Layer-Retransmitter M
2. APDU-length ≥ 55

NOTE 14 The Profile “Domain Address based RF Retransmitter” is not a full device Profile but a Profile Module, this is, it is only
an extension to a full device Profile. The APDU-length that is indicated here shall be the minimal APDU-length that the
implementation shall be able to retransmit. For the specification of the APDU-length that the device shall support for its own runtime
communication and management, please refer to the respective RF device Profiles.

2.8.3.3.2.1 Data Link Layer-Retransmitter

**Specification** **Test**

[02] - §6.1.7 “The Layer-2 of an RF
Retransmitter”

         - Route Last flag

         - History List

         - RF Repetition Counter

For the “Domain Address based RF Retransmitter”, the History List shall at least support the
KNX RF DoA; the support of the KNX SN is optional.

###### 2.8.3.4 Interface Objects

2.8.3.4.1 Overview

Interface Object

0 Device Object M
19 RF Medium Object M

Savedate: Filename: page 92 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Col1|DoA Based RF Retransmitter|
|---|---|
|1. Data Link Layer-Retransmitter<br>2. APDU-length|M <br>≥ 55|

|Specification|Test|
|---|---|
|[02] -<br>§6.1.7 “The Layer-2 of an RF<br>Retransmitter”<br>- <br>Route Last flag<br>- <br>History List<br>- <br>RF Repetition Counter||

|Interface Object|DoA Based RF Retransmitter|
|---|---|
|0 Device Object|M|
|19 RF Medium Object|M|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

2.8.3.4.2 Device Object


1 PID_OBJECT_TYPE Data 3/1

2.8.3.4.3 RF Medium Object

**Property**

1 PID_OBJECT_TYPE Data 3/1
57 PID_RF_RETRANSMITTER Data 3/2

|Property|Col2|DoA Based RF Retransmitter|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|

|Property|Col2|DoA Based RF Retransmitter|
|---|---|---|
|1 PID_OBJECT_TYPE|Data|3/1|
|57 PID_RF_RETRANSMITTER|Data|3/2|


##### 2.8.4 KNX RF USB Interface 1

 _This clause is not intended for integration in the KNX Specifications._


The specification of the standard KNX RF USB interface is not contained in this paper. Please
instead consult the paper [27].

##### 2.8.5 Not more supported



  - Address 60h is not used anymore to switch programming mode OFF. => Update test for
adding that no reaction of device is done when writing this address.
PID_PROGRAMMING_MODE is now used for this Profile.
There will be no negative tests on this.

#### 2.9 RF Multi device handling by ETS


##### 2.9.1 Switching a KNX RF Multi device to RF Ready mode
In the first version ETS will only handle RF ready Devices. ETS shall switch all RF devices
TP/RF Multi Media Coupler to RF ready by writing PID_MULTI_TYPE to 0.

##### 2.9.2 Switching a KNX RF Multi device from RF Ready Mode back to RF Multi mode
Switching back a KNX RF Multi device from RF Ready Mode to RF Multi mode is not yet
considered. It is possible, but not required, that this may happen through a Master Reset.



- The existing links of the device may no longer fully work, as the device may start using
other frequencies than F1.

- Additionally, the RF Multi mode will require different Resources and Parameter settings,
which are not yet defined and set in the device.

Savedate: Filename: page 93 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

Hence, the switching back to RF Multi mode will be more than a simple Boolean setting and is
not yet defined (state: November 14).

### 3 Impact and dependencies

#### 3.1 System specification (“Handbook”) dependencies

 _This clause is itself not considered for integration in the KNX Specifications._

Indications about the modification of the existing KNX Specifications and the integration of new
features are marked through appropriate editor notes in the various clauses in this document.

Additionally, the following shall be done.

**Doc.** **Modification**

[06] **Feature “Autonomous Inactivation of Programming Mode”**
This feature shall be added as “optional” to all other Profiles.

[03], **Interface Object Type “Interfaceprogram”**

[05],

This will for all Profiles be renamed to “Application Program 2”.

[06]

In the specification in [03], a note shall be added that this Interface Object type was named
“Interfaceprogram” before.

#### 3.2 On Push-Button and link services

 _This clause is not intended for integration in the KNX Specifications._

##### 3.2.1 Introduction
This clause gives considerations for a future definition of a Ctrl-Mode flavour that may support
Domain Addresses on KNX RF. This clause may serve as possible input for a next definition of
FEC Profiles.

For Ctrl-Mode or PB-Mode, it is also possible to configure extended Group Addresses based on
an RF Domain Address.

To assign a link based on a Domain Address and a Group Address, the Function Property
PID_OBJECTLINK (PID = 63) can be used. The usage of the DoA can be indicated via a coding
of the flags that already exist in the telegram format.

 _The below is an extract from AN134 “Flexible E-Mode Channels” ([20]) and is a proposal of how_
_PID_OBJECTLINK may be modified to support Domain Addresses for group communication on KNX RF._

##### 3.2.2 E-Mode Channel Object – PID_OBJECTLINK (PID = 63)

  - Property name:  Object Link

  - Property Datatype: PDT_FUNCTION

  - Datapoint Type: None.

###### •

Used by: Ctrl FEC PB FEC

Savedate: Filename: page 94 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|Doc.|Modification|
|---|---|
|[06]|**Feature “Autonomous Inactivation of Programming Mode”**<br>This feature shall be added as “optional” to all other Profiles.|
|[03],<br>[05],<br>[06]|**Interface Object Type “Interfaceprogram**” <br>This will for all Profiles be renamed to “Application Program 2”.<br>In the specification in [03], a note shall be added that this Interface Object type was named<br>“Interfaceprogram” before.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

###### 3.2.2.1 Function Write Object Link

3.2.2.1.1 Format

octet 10 octet 11 octet 12 octet 13 octet 14 octet 15 octet 16 octet 17 octet 18 octet 19 octet 20 octet 21

SN (high) SN SN SN SN SN (low) GA (high) GA (low)

Flags 00h handle (hi) handle (lo)

Extended Group Address

###### Figure 7 – Function Write Object Link A_FunctionPropertyCommand-PDU (example)

3.2.2.1.2 Usage by the Management Client
The Management Client shall use the Function Write Object Link to establish and to break a
single link between a Group Object and a Group Address or an Extended Group Address.

**1. Flags**
Description: This field shall indicate whether a link to the referred Group Object shall be established or
shall be broken. In case the link shall be added, it shall also indicate whether the link
shall be a sending Group Address or not.
Encoding:

bit nr 7 6 5 4 3 2 1 0
name: r r r r r aet d s

       - **Sending (s)**
position: bit 0
description: In case the contained (Extended) GA is added, then this field
_Sending (s) shall indicate whether it shall be the sending GA_
for the referred GO or not.
The flag s shall only be interpreted in case the flag d equals 0;
in case the flag d equals 1, the value of the flag s shall be don’t
care.
format, encoding: 0: not sending: The contained GA shall not be the sending
GA for the referred GO.
1: sending: The contained GA shall be the sending GA
for the referred GO.
**Error and exception handling**

                   - If a link is Added using PID_OBJECTLINK to a GO to which
the contained GA is already linked, bit different value of the
field S, then this new value of the flag s shall be used.

                    - A GA set as "sending" shall take precedence on other

previous sending GA for that GO.

       - **Add/Delete (d)**
position: bit 1
description: The field Add/Delete (d) shall indicate whether the contained
(Extended) GA shall be added to or removed from the list of
GA assigned to the referred GO.
format, encoding: 0: add: Add the contained GA to the list of GAs
assigned to the referred GO.
1: delete: Remove the contained GA from the list of
GAs assigned to the referred GO.

Savedate: Filename: page 95 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|octet 10|octet 11|octet 12|octet 13|octet 14|octet 15|octet 16|octet 17|octet 18|octet 19|octet 20|octet 21|
|---|---|---|---|---|---|---|---|---|---|---|---|
|Flags|00h|SN (high)|SN|SN|SN|SN|SN (low)|GA (high)|GA (low)|handle (hi)|handle (lo)|
|Flags|00h|Extended Group Address|Extended Group Address|Extended Group Address|Extended Group Address|Extended Group Address|Extended Group Address|Extended Group Address|Extended Group Address|Extended Group Address|Extended Group Address|

|bit nr|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|---|
|<br>name:|<br> r|<br>r|<br>r|<br>r|<br>r|<br>aet|<br>d|<br>s|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

       - **Address extension type (aet)**
position: bits 2: Address Extension Type
description: DOA or SN.
format, encoding: 0 : SN
1: DoA

       - **reserved (r)**
position: bits 7 to 3
description: These bits are reserved.
format, encoding: The E-Mode Management Client shall clear (0) these bits.
The E-Mode Management Server (device) shall ignore the
value of these bits.
**2. KNX Serial Number (SN) or RF Domain Address (DoA)**
Description: This shall be the KNX Serial Number or 000000000000 for DoA part of the Extended GA.
If this Function request does not contain an Extended GA but only a basic GA, then this
field shall be 000000000000h.
Encoding: DPT_SerNum (DPT_ID = 221.001) or 000000000000
**3. Group Address (GA)**
Description: This field shall be the basic GA or the GA part of the Extended GA, to which the Link
shall be established or from which the Link shall be broken.
Encoding: U16 value
**4. Handle**
Description: This shall be a local handle that shall identify the GO.
This shall be the GO number of the GO within the E-Mode Channel.
Encoding: U16 value

###### 3.2.2.2 Function Read Object LinkObject

**5. Flags**
Description: This field shall indicate whether a the contained GA is the sending GA for the referred
GO or not.
Encoding:

bit nr 7 6 5 4 3 2 1 0
name: r r r r r aet r s

       - **Sending (s)**
position: bit 0
description: This field Sending(s) shall indicate whether the contained
(extended) GA is the sending GA for the referred GO pr not. It
shall also indication the extended address type.

format, encoding: 0: not sending: The contained GA shall not be the sending
GA for the referred GO.
1: sending: The contained GA shall be the sending GA
for the referred GO.

       - **Address extension type (aet)**
position: bits 2: Address Extension Type
description: DOA or SN.
format, encoding: 0 : SN
1: DoA

Savedate: Filename: page 96 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx

|bit nr|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|---|
|<br>name:|<br> r|<br>r|<br>r|<br>r|<br>r|<br>aet|<br>r|<br>s|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

       - **reserved (r)**
position: bits 7 to 3
description: These bits are reserved.
format, encoding: The E-Mode Management Client shall clear (0) these bits.
The E-Mode Management Server (device) shall ignore the
value of these bits.

#### 3.3 Configuration interworking

 _This clause is not intended for integration in the KNX Specifications._

The Configuration of KNX RF S-Mode devices does not conflict with the Management – or
Configuration Procedures of other S-Mode Profiles.

In order to separate communication from neighbouring installation or – Subnetworks, the
Domain Address is introduced.

For the assignment of the DoAs, forwarding of system broadcast messages is controlled in the
KNX TP1/RF Media Couplers through the Property “RF System Broadcast routing control”
(PID_RF_SBC_CONTROL; see [24]).

Additionally, the Programming Mode shall time-out automatically and in case of multiple devices
with enabled Programming Mode, the ETS user shall select the device with which to continue
(see 3.6.2).

#### 3.4 Run-time Interworking

 _This clause is not intended for integration in the KNX Specifications._

Runtime Interworking is not affected by this specification.

The KNX RF S-Mode devices use the same group communication and DPTs as existing TP1
S-Mode devices.

The Telegrams are routed transparently for the Interworking by the standard KNX TP1/RF
Media Coupler, without the need for mapping or translation.

#### 3.5 Registration and certification
Marking is done by combination of existing logos: RF1.R (for RF ready) and S-Mode

##### 3.5.1 Existing KNX RF device Profiles
This document does not phase out any existing Profile for KNX RF devices. It is still possible to
register KNX RF devices for

   - Ctrl-Mode
   - PB-Mode
   - S-Mode using mask 2010h (supported in ETS through a plug-in)

##### 3.5.2 Test specifications
Attention shall be paid that KNX RF end devices and KNX RF Retransmitters do no evaluate
the route last flag as introduced in 2.2.1.3.1. This flag is of crucial importance in the preventing
of loops and is ignored by existing implementations, but it should through testing be guaranteed
that also new implementations explicitly ignore the value of this field.

Savedate: Filename: page 97 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

#### 3.6 Integration and common tool impact

##### 3.6.1 Bidirectional mode

###### 3.6.1.1 Full Device Configuration
The bidirectional mode of the semi-directional devices is specified so that the Configuration
Procedures do not have to take explicit care[ 19)]. There is no need for the MaC to explicitly keep
alive the bidirectional mode. The MaC may also restart the MaS without losing the communication to the MaS.

###### 3.6.1.2 Partial download
One exception is Partial Download. That Configuration Procedure does not use the Programming Mode, so the MaC user has to activate the bidirectional mode locally on the device.

The necessary messages in the ETS UI have to be foreseen for this.

###### 3.6.1.3 Overlapping Network – and Device Management Procedures

USE CASE The ETS user selects multiple KNX RF devices to download the DoA, IA and device
configuration.

ETS may either firstly assign all DoAs and IAs and only then download the Application
Programs, or it may download the DoA, IA and Application Program of one device after another.

In both cases, it may happen that the bidirectional mode time-out timer expires in one or more of
the selected devices before they have been configured completely. To prevent from this, ETS
may periodically re-initialise the bidirectional mode time-out timer over broadcast
communication accessing PID_RF_BIDIR_TIMEOUT using the A_SystemNetworkParameter_Write-service.

###### 3.6.1.4 Halt or continue bidirectional mode after device configuration

USE CASE After the ETS user has downloaded a KNX RF semi-directional device, he
immediately wants to do some tests.

The ETS user may use the normal ETS functions to send group Telegrams to the device, or
read out GO-values from the device.

In such cases, it is needed that the bidirectional mode is kept enabled after the Device
Configuration has finished.

ETS should thus offer the ETS user the possibility to keep enabled or disable the bidirectional
mode in the device.

###### 3.6.1.5 Reconfiguration of an inaccessible semi-directional device

USE CASE A semi-directional device is mounted in an inaccessible location, e.g. in the ceiling,
and needs to be reprogrammed.

The installer procedures for semi-directional devices do not differ from full bidirectional devices.
The ETS user has to open the ceiling and activate the Programming Mode (and by this the
bidirectional mode) in the device.

19) The bidirectional-mode time-out timer is reset with every Frame in point-to-point connection-oriented or –
connectionless communication mode. This makes that, if the MaC can access a semi-directional device at the
beginning of the Device Configuration, that the bidirectional mode will remain enabled for the rest of the Device
Configuration Mode.

Savedate: Filename: page 98 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

Alternatively, the ETS user may simply indicate this situation to ETS and ETS may simply wait
until the device spontaneously transmits a Frame in which it has cleared the Unidir-flag
(meaning bidirectional mode is enabled). As specified in 2.2.1.5, the semi-directional device will
in this case keep its bidirectional mode enabled for at least 3 s. ETS can use this opportunity to
reconfigure the device.

NOTE 15 This Unidir-flag is only contained in the Ctrl-field of the KNX RF Frame. It is not transferred if the Frame is transferred to
another KNX Communication Medium, like TP1. This solution thus requires that ETS uses a local interface that connects directly to
KNX RF.

##### 3.6.2 Programming Mode
Any KNX RF S-Mode device will automatically disable its Programming Mode after 4 minutes.
This period cannot be retriggered.

If ETS scans for devices in which Programming Mode is active, for the assignment of DoA
and/or IA, then ETS shall if more than one response is received show the KNX Serial Numbers
contained in the responses and allow the ETS user to select the device with which to continue.

This shall allow that, if during these 4 minutes, Programming Mode is active in more than one
device, typically in a neighbouring installation, the ETS user can still continue the DoA and/or IA
assignment, without having to wait until the conflicting device(s) exits Programming Mode
automatically.

NOTE 16 This information does not show the Manufacturer Code or Device Type of the responding devices, as this is not part of
the responses sent by these devices. ETS does neither read out this information (neither through some system broadcast search
nor through point-to-point communication). The ETS user thus either has to know the KNX Serial Number of the device he wants to
configure. Alternatively, he may enable and disable programming Mode in the device that he wants to configure and observe the
change in the list of responding devices to filter out the KNX Serial Number of his envisaged device. Other solutions can be
envisaged as well.

##### 3.6.3 Domain Address management

###### 3.6.3.1 General
This clause contains two parts.

1. New DoA: DoA creation and assignment: see clause 3.6.3.2
2. Accessing an unknown installation with an unknown DoA: see clause 3.6.3.3

ETS shall respect the Configuration Procedures for the assignment of the RF DoA as stipulated
in 2.6.1.1. For this to function correctly or to function at all, it is very important that ETS uses the
correct DoA and IA in its interface. The ETS user should where possible be pointed to this and
this should be stressed in the training and documentation when introducing KNX RF S-Mode.

EXAMPLE 9 ETS should verify whether the DoA that it uses in its local interface equals the DoA given to the Subnetwork
according its local Individual Address according the project configuration. If this is not the case, the ETS user should be warned.

###### 3.6.3.2 New DoA: DoA creation and assignment

3.6.3.2.1 DoA creation
Under no condition, ETS shall assign the numerical value 0000:00000000h to any KNX RF SMode device.

To “create” a new DoA, ETS shall let user choose between the following options (really a radio
button list), in the ETS UI.

1. Use an existing DoA (that can be entered by the ETS user. E.g. when an Interface or
Media Coupler is replaced by a new device)
2. Create a new DoA (with KNXA ManufID as upper 2 octets in the KNX Serial Number) +
ETS random created part + additional check if the DoA is free

Savedate: Filename: page 99 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

For the creation of a new DoA, ETS shall use a DoA in which the Manufacturer Code part is
"KNX Association" (00FAh). That leaves 2^32 possible different DoAs (more than
4 000 000 000), which would be sufficient for some random chosen value. This effectively gives
the ETS user the "look and feel" of a TP1 installation and prevent from RF specific user actions
before being able to assign addresses.

3.6.3.2.2 Check if the created DoA is free
In addition to the DoA creation by ETS, ETS can check if the DoA address is free by using the
service A_DomainAddressSelective_Read (see [25]).

3.6.3.2.3 DoA assigment

3.6.3.2.3.1 Media Coupler
This procedure sets the RF DoA and the Media Coupler’s Individual Address; the media
Coupler is identified by the user by activating the Programming Mode in the device.

/* The Domain Address “Device.DoA” is assigned to the device. In the same go, the Individual */
/* Address Device.IAnew is assigned to the device. */
NM_DomainAndIndividualAddress_Write(NmpDoANew = Device.DoA, NmpIANew = Device.IAnew)

3.6.3.2.4 Extension of an existing RF installation with TP1
If an installation is initially configured without Media Coupler and later on extended with TP1,
then it would be far more easy to make the Media Coupler use the DoA already used in the
installation, than to use the Media Coupler's DoA and reprogram all installed RF devices.

3.6.3.2.4.1 Interface
The DoA shall be set in the local interface by writing the Property PID_RF_DOMAIN_ADDRESS
in the RF Medium Object of the interface.

3.6.3.2.4.2 RF end device
DoA assignment of any end device shall only be performed if the DoA and IA of all projected RF
Media Couplers has already been completed. If this would not be done, loops cannot be
avoided.

For setting the DoA of RF end devices, ETS has to know the medium to which it is connected
and use normal broadcast when on TP1 for those services where system broadcast could be
used on RF. If using a Media Coupler, ETS has set the Coupler Parameter
PID_RF_SBC_CONTROL either to “broadcast” or to “system broadcast” according to its relative
position towards the target end device, before starting the procedure with the end device.

DoA setting can be associated with the IA assignment procedure. This has not to be repeated
for application parameter download.

This procedure sets the RF DoA and the device’s Individual Address; the device is identified by
the user by activating the Programming Mode in the device.

/* The Domain Address “Device.DoA” is assigned to the device. In the same go, the Individual */
/* Address Device.IAnew is assigned to the device. */
NM_DomainAndIndividualAddress_Write(NmpDoANew = Device.DoA, NmpIANew = Device.IAnew)

Savedate: Filename: page 100 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

If using one or more Media Couplers, ETS has to set PID_RF_SBC_CONTROL back to
“disable” after the procedure with the end device.

###### 3.6.3.3 Accessing an unknown installation with an unknown DoA

3.6.3.3.1 Description
If ETS needs to access an already configured and running installation and does not know the
DoA(s) that is (are) used in the installation, then it shall retrieve the DoA through one of the
below possibilities.

3.6.3.3.2 Using the DoA of the interface
This shall be applicable if the interface is a fixed part of the installation. (RS232 -, USB – or
KNXnet/IP Tunnelling Interface).

ETS shall read the DoA from the interface and display the DoA in the dialog of the Connection
Manager.

3.6.3.3.3 Read the DoA from an installed device
ETS shall read the RF DoA via the diagnostic function “Read Individual Address”.

The device shall be identified by the user by activating the Programming Mode in the device.

/* The Domain Address “Device.DoA” is read out from the device.*/
NM_DomainAndIndividualAddress_Read()

##### 3.6.4 Interfaces

###### 3.6.4.1 General
For the Network – and Device Configuration Procedures of RF S-Mode devices, it is possible to
have the local interface of the MaC anywhere in the installation, either in the RF Subnetwork or
in any other Subnetwork of a different medium.

- The used services are specified for use on system broadcast communication, which should
allow for discovery and assignment during network configuration.

- The Media Couplers are specified to map broadcast services from the closed medium to
either system broadcast services or broadcast services on RF, and vice versa, so that
always the right communication mode is used on KNX RF.

###### 3.6.4.2 Domain Address
There are two types of KNX RF interfaces.

1. KNX RF USB Interfaces that remain permanently in the installation.
2. KNX RF USB “dongles” that are only used to access more than one installation and do
not remain permanently in the installation.

The procedure will be the same on the two types of RF interfaces.

The difference will be the retention of the DoA by the interface. As the USB RF dongle will be
used for different installations, it may not keep any RF DoA in permanent memory and need to
be initialized each time from ETS.

Savedate: Filename: page 101 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

Recommendation from TFRF is not to use too long RF telegrams. Probability to be collided is
bigger than for small telegram. In case of disturbed RF, long telegram will frequently be
corrupted. (telegram size : 100 ms max => preamble 4,8 ms overhead = 19 octets (1octet = 0,5
ms ) max APDU length = 85 ms = 190 octets). Recommended frame length : 64

For download procedure, ETS should use a adaptive algorithm to start with the longest frame
(after checking the longest frame it can use) and the according to numbers of errors, can reduce
the frame length).

###### 3.6.4.3 Local and – Remote Configuration Procedures
Download of a KNX RF S-Mode device locally via USB or IP can be meaningful

   - for semi-directional devices, or
   - if a lot of information need to be downloaded to the device.

Using USB interface is also a solution for battery powered devices. For this additional support
the cEMI Local Transport Layer has to be used. ETS firstly has to connected to the interface,
discover it and select it as a local interface. ETS then downloads locally the parameters. The IA
of the device must the same as the local IA of ETS.

##### 3.6.5 Domain Address based KNX RF Retransmitter
Each KNX RF S-Mode end device can be used as RF Retransmitter through the Property RF
_Retransmitter Flag (PID_RF_RETRANSMITTER; see 2.4.2.4)._

Each KNX RF S-Mode device can be used as RF Retransmitter.

The existing KNX Serial Number based RF Retransmitter can be used in installations without
restriction, but it will not be visible as device in ETS project. There is no requirement for ETS to
support this RF Retransmitter type.

##### 3.6.6 Configuration Procedures for mask 27B0h

###### 3.6.6.1 Introduction and general requirements

3.6.6.1.1 Management Procedures
The Configuration Procedures of the KNX RF S-Mode device Profiles base on the same
Management Procedures as KNX TP1 devices.

##### 3.6.7 Common requirements for all KNX RF end device Profiles and – interfaces

###### 3.6.7.1 Device Descriptor Type 0 – RF medium indication
The medium type 2h indication in the Device Descriptor Type 0 shall indicate the KNX RF
Communication Medium. This shall be indicated like that in ETS.

###### 3.6.7.2 Group Object Config flags
ETS can use the standard Group Object flags known from KNX TP1 devices.

##### 3.6.8 ETS Database
The KNX RF S-Mode devices will need an ETS database that will be certified and supported by
ETS4.5 Manufacturer Tool. There is no need to inherit E-Mode functionality or newly introduced
FEC features.

Savedate: Filename: page 102 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

This is limited to ETS4.5 new versions and will not be supported for ETS3.

##### 3.6.9 Integration of RF Media Coupler
The Main Line can be RF. In this, also the Line shall be KNX RF and shall inherit the DoA from
the Main Line and no “Line Coupler’s” (RF/RF) are possible.

The Backbone of “RF-only” projects will be TP1 or IP (=default).

##### 3.6.10 Integration of RF interface
ETS shall check PID_MEDIUM_TYPE (PID = 51) of cEMI Server Object.

ETS may also use the cEMI additional information of RF medium type to send information.

If no additional info field then the cEMI Server will use its local values for DoA and KNX Serial
number. ETS will by default use DoA = 00000000000h for all RF telegram to use local cEMI
DoA.

Additionally, ETS can interpret the Route Last flag in received L_Data.ind message; in the
transmission of L_Data_req messages, ETS should clear the Route Last flag. No use case is
defined for which ETS should set this flag.

In the future, if the DOA is part of project database, ETS may use the RF-‘SN’ and other RF
fields of the additional information to send frame to RF. These additional infos (currently used by
EITT) could also be displayed with RF infos on BusMonitor.

Diagnostic data that ETS could offer to the installer.

   - Signal strength of received frame,

Future extensions:

   - (Support RF multi as optional)
   - RF multi channel usage
   - (RF interface filtering on DoA via a property AN : cEMI extension for RF)

##### 3.6.11 Integration of RF devices
RF device : integration of new mask version but fully compliant with TP devices.

For non permanent bidirectional devices, the device may not be reachable and ETS needs to
warn the user. For this a information “not always present on the bus” must included in the
product data. Indication could be the ETS indicates that AP must be downloaded immediately
after addressing the device.

If ETS knows the procedure will take some time, it can use the PID_RF_BIDIR_TIMEOUT to
retrigger the bidirectional mode.

##### 3.6.12 End device or TP1/RF Media Coupler with Retransmitter function
RF S-Mode End Device may also integrate a Retransmitter function.

To this, the Profile Module “Domain Address based RF Retransmitter” is defined: see 2.8.3.

If the function is embedded (declared in the database with the ETS MT) then it can be activated
and deactivated on the ETS UI. This parameter is managed by PID_RF_RETRANSMITTER
(see 2.4.2.5) in the RF Medium Object.

Retransmission shall be restricted to Telegrams in the RF Domain of the device, as specified
in 2.2.1.3.

Savedate: Filename: page 103 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

##### 3.6.13 Diagnostics

  - Scan Line

Define a new DomainAddressSelectiveRead to get DoA, IA and SN in the response.

  - Check IA

Use existing procedure or Scan Line with dedicated IA.

  - Scan device in prog mode

using IARead, DoARead, SNRead (as in program IA procedure).

###### 3.6.13.1 Investigating the Link Quality
Please refer to the specification of PID_RF_DIAG_QUALITY_TABLE[] in 2.4.2.10.

It is recommended that ETS however does not show the read out numerical values for the Link
Qualities.

1. These values, expressed in dB, may be difficult to interpret for the ETS user.

2. Differences in calculation of the Link Quality between different devices and between
different manufacturers do not allow for a very precise comparison.

EXAMPLE 10 This may or may not take into account the antenna gain of the transmitter or of the receiver, the
transmitted power etc.

EXAMPLE 11 Additionally it is not required that the RF transceiver should be calibrated at production. The above
characteristics may thus be set at production commonly for entire product series and not precisely for
each individual device.

Therefore, it is rather recommend that ETS interprets and shows the read out Link Quality in a
classification as “Bad”, “Sufficient”, “Good” or similar. (Like the reception quality signal on a
mobile phone.)

#### 3.7 Risks and compatibility issues
Unidirectional devices cannot fit to this new specification, because no RF DoA can be assigned.

For existing RF devices, if the history list (filtering with LinkFrame Number) is based only on the
serial number and not the source address, they may reject the Multicast telegram coming from
extended addresses based on DoA. As they can’t be configured today for such links it is a
problem only if the tool wants to access them with this DoA.

Savedate: Filename: page 104 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

## Annex A
###### (informative)

## Design considerations

#### A.1 Preventing loops of system broadcast messages

EXAMPLE 12 This example bases on the reference topology in Figure 6 and shows that there are no loops and no message
duplication.

**MaC** **1.3.0** **1.2.0** **target**

MaC sends the request
on normal broadcast
(DoA 3)


MC 1.2.0 does not
accept the request: it
does not contain its own
DoA (DoA 2).

MC 1.2.0 accepts the
message.

MC 1.2.0 is
preconfigured to route
system broadcast
services effectively on
system broadcast.

MC 1.2.0 accepts the
request, as it is
configured to accept
system broadcast

MC 1.2.0 passes the
message to TP1, as the
same parameters says
to pass it.


the target does
not accept the
request: it is not
on SBC.
If the target would
“coincidentially” have
DoA 3, then it will
receive the response
and react.

the target
accepts the
system
broadcast.

the target
responds on
system
broadcast.


The MaC may receive
this echo, but should
ignore it.

The MaC may receive
this response. It should
actually ignore it.


MC 1.3.0 accepts the
request: it contains its
own DoA (DoA 3).

MC 1.3.0 forwards the
message on TP1.

MC 1.3.0 does not
accept the message: it
is not configured to
route system
broadcast messages

MC 1.3.0 may receive
this message, but will
not pass it, as it is
configured not to pass
system broadcast
messages.

MC 1.3.0 receives the
message from the TP1
side.


Savedate: Filename: page 105 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN160** **RF S-Mode Device Profiles**

**MaC** **1.3.0** **1.2.0** **target**
MC 1.3.0 passes the
message on RF, using
normal broadcast on
its “own” DoA (DoA 3),
because that one
single parameter was
not set differently by
ETS.


The MaC receives the
response, as it
contains DoA 3


The target may
hear the echo,
but will not
listen to it,
because it does
not use its DoA.


Savedate: Filename: page 106 of 106
2014 11 07 AN160 v02 RF S-Mode device Profiles DV docx


-----

