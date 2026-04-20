# Application Domain specific Standards

## RF metering protocol

Summary

This document specifies the subset of the M-Bus RF metering protocol
(EN 13757-3 and EN13757-4) for KNX. It specifies the requirements
towards the M-Bus Data Link Layer and Application Layer.

Version 01.03.08 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

Part 10/03 “M-Bus interface”
1.0 DP 2006.06.15 Added note about retransmission of frames with long preamble.
Preparation of the Draft Proposal.
1.0 DP 2006.10.06 Update according “Compilation_Comments_KTB0572.doc”
rev1

1.1 DP 2006.10.25 Add explanation for telegrams without Datapoints in clause 3.2
1.1 DP 2007.01.29 Preparation of the Draft for Voting.
1.2 AS 2007.03.20 DPT_MBus_Address (DPT_ID = 230.1000) moved exclusively to
Chapter 3/7/2 “Datapoint Types”.
Publication of the Approved Standard.
1.2 2009.06.26 Update in view of publication in the KNX Specifications v2.0.
1.3.01 2011.06.26 Add C-Field 47h and 48h in 3.1.3; update use of Address fields in 3.1.5
and 3.2.3, Add Radio converter in 3.1.5.3; Add Annex A (T-Mode); Add
new Media Elec.,Gas,Valve,Breaker, and Waste water, Support of
Decryption (with example in Annex B later Annex C)
1.3.02 2011.09.27 Add new reference for prEN13757-3/4;

1.3.03 2012.03.13 Add combinable VIFE, update Generic Device, Reduce C-Fields to C=44
and 46h, Update section Connection Interrupt, Add Reference OMSS
1.3.04 2012.05.25 Final revision
1.3.05 2012.06.13 Add Device type Other, Oil meter and Steam meter.
01.03.06 2012.08.06 Preparation of the Draft Proposal.
01.03.07 2013.10.23 Editorial updates for the publication of KNX Specifications 2.1.
01.03.08 2022.03.25 Preparation for inclusion in the KNX Specifications v3.0.

#### References

The KNX RF Metering Protocol bases on European Standard EN13757-3 and EN13757-4.

[01] M-Bus “Specification EN13757-3(2004)”

[02] M-Bus “Specification EN13757-4(2005)”

[03] “Specification EN 62056-21”

[04] “Specification IEC-60870-5-2”

[05] “ERC REC. 70-03”

[06] Chapter 3/2/5 “Communication Medium RF”

[07] Chapter 7/60/1 “Metering Functional Blocks”

[08] M-Bus “Specification prEN13757-3(2013)”

[09] M-Bus “Specification prEN13757-4(2013)”

[10] OMSS_Vol.2 “Open Metering System Specification - Volume 2: Primary
Communication”

Filename: 10_03 RF Metering protocol v01.03.08 AS.docx
Version: 01.03.08
Status: Approved Standard
Savedate: 2022.03.25
Number of pages: 39

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 2 f 39

|Version|Date|Modifications|
|---|---|---|
|Part 10/03“M-Bus interface”|Part 10/03“M-Bus interface”|Part 10/03“M-Bus interface”|
|1.0 DP|2006.06.15|Added note about retransmission of frames with long preamble.<br>Preparation of the Draft Proposal.|
|1.0 DP<br>rev1|2006.10.06|Update according “Compilation_Comments_KTB0572.doc”|
|1.1 DP|2006.10.25|Add explanation for telegrams without Datapoints in clause 3.2|
|1.1 DP|2007.01.29|Preparation of the Draft for Voting.|
|1.2 AS|2007.03.20|DPT_MBus_Address (DPT_ID = 230.1000) moved exclusively to<br>Chapter 3/7/2 “Datapoint Types”.<br>Publication of the Approved Standard.|
|1.2|2009.06.26|Update in view of publication in the KNX Specifications v2.0.|
|1.3.01|2011.06.26|Add C-Field 47h and 48h in 3.1.3; update use of Address fields in 3.1.5<br>and 3.2.3, Add Radio converter in 3.1.5.3; Add Annex A (T-Mode); Add<br>new Media Elec.,Gas,Valve,Breaker, and Waste water, Support of<br>Decryption (with example in Annex B later Annex C)|
|1.3.02|2011.09.27|Add new reference for prEN13757-3/4;|
|1.3.03|2012.03.13|Add combinable VIFE, update Generic Device, Reduce C-Fields to C=44<br>and 46h, Update section Connection Interrupt, Add Reference OMSS|
|1.3.04|2012.05.25|Final revision|
|1.3.05|2012.06.13|Add Device type Other, Oil meter and Steam meter.|
|01.03.06|2012.08.06|Preparation of the Draft Proposal.|
|01.03.07|2013.10.23|Editorial updates for the publication of KNX Specifications 2.1.|
|01.03.08|2022.03.25|Preparation for inclusion in the KNX Specifications v3.0.|


-----

#### Contents

###### 1 Introduction ............................................................................................................................ 4 1.1 Scope ............................................................................................................................... 4 1.2 Physical Layer and Data Link Layer .............................................................................. 4

 2 Terms and definitions ............................................................................................................ 5

 3 The M-Bus frame ................................................................................................................... 6 3.1 The first block ................................................................................................................. 6 3.1.1 Structure .............................................................................................................. 6 3.1.2 L field .................................................................................................................. 6 3.1.3 C field.................................................................................................................. 6 3.1.4 MID field ............................................................................................................ 7 3.1.5 Address field ....................................................................................................... 7 3.2 The following blocks ...................................................................................................... 9 3.2.1 Number of blocks ................................................................................................ 9 3.2.2 CI field ................................................................................................................ 9 3.2.3 The fixed fields ................................................................................................. 10 3.2.4 The variable fields ............................................................................................. 11

 4 Decryption of an encrypted message .................................................................................. 19

 5 Parse a M-Bus string ............................................................................................................ 20

 6 Relevant data in dependency of the Device type ............................................................... 21

 7 Installation procedure .......................................................................................................... 22 7.1 General .......................................................................................................................... 22 7.2 Installation of the Meter ................................................................................................ 22 7.3 Installation of the Metering Data Collector .................................................................. 22

 8 Connection interrupt ........................................................................................................... 23

 9 Example of object structure of Metering data for Heat (4, A..D) .................................... 24

 10 RF Metering Retransmitter ................................................................................................ 27
 10.1 Introduction ................................................................................................................... 27 10.2 History List ................................................................................................................... 28 10.3 Retransmission mechanism .......................................................................................... 28 10.4 Filtering ......................................................................................................................... 28 10.5 Metering Filter Table Property in the Device Object ................................................... 29
 10.5.1 Specification ..................................................................................................... 29 A.1 Physical Layer .............................................................................................................. 31 A.2 Data encoding ............................................................................................................... 31
 A.2.1 General .............................................................................................................. 31 A.2.2 Order of transmission of the encoded data ....................................................... 32 A.2.3 Preamble chip sequences .................................................................................. 32 B.1 General .......................................................................................................................... 33 B.2 The base value and base parameter .............................................................................. 33 B.3 The base time ................................................................................................................ 33 B.4 Structure of the compact profile ................................................................................... 33 B.5 Types of Compact profile ............................................................................................. 35
 B.5.1 Compact profile with registers (orthogonal VIFE=1Eh) .................................. 35 B.5.2 Compact profile without registers (orthogonal VIFE=1Fh) ............................. 36

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 3 f 39


-----

### 1 Introduction

#### 1.1 Scope 
This document introduces a Radio metering Data Link Layer telegram compliant with EN 13757-4.

A reduced M-Bus Application Layer specification according to EN 13757-3 describes how to interpret
interesting Datapoints and how to ignore or separate non relevant Datapoints, to integrate Metering data
in the KNX system.

#### 1.2 Physical Layer and Data Link Layer
Based on [05], the standards [02] and [06] the parameters of the Physical Layer and Data Link Layer are
harmonised between the KNX RF communication medium and the S-Mode of M-Bus RF metering.
Optionally a KNX-Receiver may additional support the Mode T of RF-Metering. The Physical Layer and
the Data encoding of the Mode T differs from KNX RF-communication and is described in Annex A.

NOTE M-Bus RF metering allows for the use of both a long and a short preamble as specified in [02]. The short preamble is
identical to the preamble as specified for the KNX RF communication medium.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 4 f 39


-----

### 2 Terms and definitions

Meter Metering device that collects metering consumption data and forwards it by
radio.

Metering Data Collector Unit with radio receiver able to store and forward meter data periodically or
by request.

Metering Retransmitter A unit with radio receiver and transmitter used to receive the meter data
and forward it after a short delay. This unit will be useful to expand the
radio range of a meter.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 f 39


-----

### 3 The M-Bus frame

#### 3.1 The first block

##### 3.1.1 Structure

**Header**
**DLL-Header (10 Octets)**
**(48 / 576 Chips)**

L C MID

A Letter 1 Letter 2

**Example of a Header**

|L|C|MID|Address|
|---|---|---|---|

|Header<br>(48 / 576 Chips)|DLL-Header (10 Octets)|CRC|CI|Data (1..15 Octets)|CRC|Data (1..16 Octets)|CRC|Data (1..16 Octets)|CRC|PA|
|---|---|---|---|---|---|---|---|---|---|---|
|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|L<br>C<br>MID<br>Address<br>Letter 1<br>Letter 2<br>Letter 3<br>A<br>L<br>Length of Data<br>C<br>C-Field<br>MID<br>unique Manufacture ID<br>A<br>MSB of MID - Hard-/Softadressing<br>CI<br>CI-Field for detection of Application<br>            layer|

|A|Letter 1|Letter 2|Letter 3|
|---|---|---|---|


PA Postamble for lead out of telegram

|L|C=44|0|CEN|Address = 123456780107|CRC|
|---|---|---|---|---|---|


**Figure 1 - Structure of the protocol at EN 13757-4 [09]**

The block structure complies with [09] and [07]. The content of first block data fields is described in
detail in [09] (S1 or S2 Mode). To distinguish between KNX telegrams and metering telegrams the 3rd
octet (MID) has to be investigated. If it consists of 7Fh or FFh then it is the Escape sequence of a KNX
telegram. Otherwise it is the least significant octet of Manufacture ID of the metering manufacturer. Any
block will be separated by the 2 octet CRC checksum. Data fields with multiple octets will always be
transmitted with the Least Significant Byte (LSB) firstly, but within the byte the most significant bit is
transmitted firstly (MSb).

##### 3.1.2 L field
The L-field describes the length of the telegram. It is described in more detail in [02]. The L-field
contains the number of all telegram octets excluding the L-Field itself and the CRC. (Preamble and
Postamble are excluded as well.) With that, a telegram that only uses the first block, has a length of L = 9.
A telegram should not be longer than 156 octets (without Preamble- and Post amble, but including CRC).
Therefore the L-Field can vary from 9 to 137 only.

##### 3.1.3 C field
The second octet is the C-field, which signals the telegram type. According to [04] and [09], the
following C-Fields are supported as indicated next.

If the meter is not in installation mode, C = 44h is applied to transport meter data without
acknowledgement (data telegram). The content of such a message shall be handled as described in
clause 3.2.

If the meter is in the installation mode, then it uses C = 46h (installation telegram - refer to [09]). This
message can be used to teach in the meter address in the Metering Data Collector.
A meter may support additional C-Fields (e.g. for a stay alive message or if it communicate with a
Metering readout master). All messages with other C-Fields than stated above ones shall be ignored.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 6 f 39


-----

The reception time stamp “RxReceptionTime” of the receiver shall be changed only if a message with
C-field 44h were received (refer to [07])!

##### 3.1.4 MID field
The MID field contains the Manufacture ID encoded as a 2 octet unsigned binary value. This
Manufacture ID is calculated from the ASCII code of manufacture identification (three uppercase letters)
with the following formula [08], [09]:

Manufacture ID = [ASCII(1st letter) – 64] x 32 x 32
+ [ASCII(2nd letter) – 64] x32
+ [ASCII(3rd letter) – 64]

Note that the flag association, UK (www.dlms.com/flag) administers these three letter manufacturers ID

[03].

If the most significant bit of this 2 octet unique user/Manufacturer ID equals zero, the address A is a
unique (hard address) manufacturer meter address of up to 6 octets. Each manufacturer is responsible for
the worldwide uniqueness of these 6 octets. The coding of the address shall conform to [08]. For details
refer to clause 3.1.5.

If the most significant bit of these 2 octet code unique user/Manufacturer ID differs from zero, the 6 octet
address is unique at least within the maximum transmission range of the system (soft address) and is
usually assigned to the device at installation time. If the soft address is enabled then the meter shall
additionally attach the fabrication number in one of following blocks. [02]

EXAMPLE The virtual manufacturer “CEN“ with Ident.no 12345678, version 01 Device type 07 has to create the Manufacture ID of
0CAEh. With LSB first, the transmission (starting with the L-field) has the order:

09 44 AE 0C 78 56 34 12 01 07

##### 3.1.5 Address field
The Address field consist of three parts.

Identification Number Version Device
type

4 octets 1 octet 1 octet

The combination of Identification Number, Version and Device type shall be unique within the
installation.

###### 3.1.5.1 Identification Number
The Identification Number of the first block consists of the non changeable ID of the Radio transmitter
unit. This can be the Meter ID itself (if the Radio unit part of the meter) or the ID of a radio unit which is
the host of the meter. In this case the Meter ID will be transported in the Application layer using the
“fixed data with Address field” (refer to 3.2.2). The Meter ID in the Application layer is changeable and
may be modified during the installation for the pairing of a meter with the hosting radio unit.

The Identification Number is always codes as 8 BCD packed digits (4 octets), with valid values between
00000001 and 99999999.

Note in the old Metering standard [01] the Identification Number in the first block was changeable. The
original Link address of the radio unit could be replaced by the meter address. To avoid address conflicts
the address of the radio unit was added in the application layer as Fabrication number (DIF = 0Ch,
VIF = 78h). The newer metering standard [08] supports only changes of the Meter ID within the
Application layer.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 f 39


-----

###### 3.1.5.2 Version
The Version describes the software version of the meter device. It is a mandatory part of the address and
has a length of 1 octet. The range shall be between 0 and 254. This field is manufacture specific
organised.

###### 3.1.5.3 Device type
The Device type describes the physical dimension that is cumulated with the meter. It has a length of
1 octet. The Device type is defined in [08]. The relevant part for KNX is defined in Table 1.

Media that are not listed here or are marked with “No” are not supported.

Note that the term “device type” has been previously denoted with “medium”.

**Table 1 - Supported physically media**

**Device type** **Description** **Code** **KNX**
**(hex)** **support**

Other used for undefined phys. medium 0 Yes

Oil meter measures volume of oil 1 Yes

Electricity meter measures electric energy 2 Yes

Gas meter measures volume of gaseous energy 3 Yes

Heat meter heat energy measured in outlet pipe 4 Yes

Steam meter measures weight of hot steam 5 Yes

Warm Water meter (30 °C to measured heated water volume 6 Yes
90 °C)

Water meter measured water volume 7 Yes

Heat cost allocator measured relative cumulated heat 8 Yes
consumption

Compressed Air measures weight of comp. air 9 No

Cooling Load meter (inlet) cooling energy measured in inlet pipe A Yes

Cooling Load meter (outlet) cooling energy measured in outlet pipe B Yes

Heat (inlet) heat energy measured in inlet pipe C Yes

Heat and Cool measures both heat and cool D Yes

Bus/System no meter (e.g. communication unit) E No

Unknown Device type used for undefined phys. medium F No

Breaker (electricity) Status of elec. energy supply 20 Yes

Valve (gas or water) Status of supply of Gas or water 21 Yes

Waste water meter measured volume of disposed water 28 Yes

Garbage measured weight of disposed rubbish 29 Yes

Radio converter (meter side) Enables the radio transmission of a 37 No [a)]
meter without a radio interface

Reserved 38..FF No

a) Device type radio converter (code 37h) has to be supported in so far as the relevant Device type of the meter
has to be detected from the second block after the CI-Filed 72h.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 8 f 39

|Device type|Description|Code<br>(hex)|KNX<br>support|
|---|---|---|---|
|Other|used for undefined phys. medium|0|Yes|
|Oil meter|measures volume of oil|1|Yes|
|Electricity meter|measures electric energy|2|Yes|
|Gas meter|measures volume ofgaseous energy|3|Yes|
|Heat meter|heat energy measured in outletpipe|4|Yes|
|Steam meter|measures weight of hot steam|5|Yes|
|Warm Water meter (30 °C to<br>90 °C)|measured heated water volume|6|Yes|
|Water meter|measured water volume|7|Yes|
|Heat cost allocator|measured relative cumulated heat<br>consumption|8|Yes|
|Compressed Air|measures weight of comp. air|9|No|
|Cooling Load meter(inlet)|cooling energy measured in inletpipe|A|Yes|
|Cooling Load meter(outlet)|cooling energy measured in outletpipe|B|Yes|
|Heat(inlet)|heat energy measured in inletpipe|C|Yes|
|Heat and Cool|measures both heat and cool|D|Yes|
|Bus/System|no meter(e.g. communication unit)|E|No|
|Unknown Device type|used for undefinedphys. medium|F|No|
|Breaker(electricity)|Status of elec. energy supply|20|Yes|
|Valve(gas or water)|Status of supply of Gas or water|21|Yes|
|Waste water meter|measured volume of disposed water|28|Yes|
|Garbage|measured weight of disposed rubbish|29|Yes|
|Radio converter (meter side)|Enables the radio transmission of a<br>meter without a radio interface|37|Noa)|
|Reserved||38..FF|No|
|a) <br>Device type radio converter (code 37h) has to be supported in so far as the relevant Device type of the meter<br>has to be detected from the second block after the CI-Filed 72h.|a) <br>Device type radio converter (code 37h) has to be supported in so far as the relevant Device type of the meter<br>has to be detected from the second block after the CI-Filed 72h.|a) <br>Device type radio converter (code 37h) has to be supported in so far as the relevant Device type of the meter<br>has to be detected from the second block after the CI-Filed 72h.|a) <br>Device type radio converter (code 37h) has to be supported in so far as the relevant Device type of the meter<br>has to be detected from the second block after the CI-Filed 72h.|


-----

###### 3.1.5.4 Fabrication number
If the soft address is enabled then the meter shall add the fabrication number in the variable part of the
telegram in the following blocks (VIF = 78h). The Fabrication number shall be part of the address and
consist of a copy of original Identification number. It is used for a unique identification of meter.

Note that the Fabrication number is needed to support old Metering standard [08]. With the revision of
the Metering-standard [08] the Fabrication number is replaced by the usage of the CI-field 72h.

#### 3.2 The following blocks

##### 3.2.1 Number of blocks
The telegram usually consists of more than just the first block. The L-field in first block indicates the
presence of subsequent blocks (see 3.1.2).

##### 3.2.2 CI field
The first octet of second block will be interpreted as the CI field. That CI field describes the structure of
the Application Layer. For M-Bus Data telegrams the CI fields with value 78h, 7Ah and 72h will be
accepted. The Application Layer has always the following structure. The meter can select one of
following formats for data transmission. The metering Data Collector has to support all formats.

CI fixed fields variable fields[ a]
(ID, Status) (DIF/VIF)

a The variable fields may be empty (no DIF/VIF)!

The following values for the CI field are defined for the Application Layer using radio transmission:

- **CI = 78h (no fixed data)**

CI = 78 Data starting with DIF

1 octet

Variable fields

- **CI = 7Ah (fixed data without Address field)**

CI = 7A [Access ] Status Configuration word Data starting with DIF

No

1 octet 1 octet 1 octet 2 octets

Fixed fields (4 octets) Variable fields

Meters apply this CI-Field, if the has an integrated radio unit (radio unit and meter share the same address
in the first block).

- **CI = 72h (fixed data with Address field)**

Access

CI = 72 Ident No Manufacturer Version [Device ] Status Configuration word Data starting with DIF

type No

1 octet 4 octets 2 octets 1 octet 1 octet 1 octet 1 octet 2 octets

Fixed fields (12 octets) Variable fields

Meters apply this CI-Field, if they need an external radio unit. The radio unit and the meter have different
addresses. The radio unit address is located in the first block. The meter address follows in the Address
section after the CI-Field 72h.

The content of fixed fields complies with the requirements of [08].

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 9 f 39

|CI|fixed fields<br>(ID, Status)|variable fields a<br>(DIF/VIF)|
|---|---|---|

|CI = 78|Data starting with DIF|
|---|---|
|1 octet||
||Variable fields|

|CI = 7A|Access<br>No|Status|Configuration word|Data starting with DIF|
|---|---|---|---|---|
|1 octet|1 octet|1 octet|2 octets||
||Fixed fields(4 octets)|Fixed fields(4 octets)|Fixed fields(4 octets)|Variable fields|

|CI = 72|Ident No|Manufacturer|Version|Device<br>type|Access<br>No|Status|Configuration word|Data starting with DIF|
|---|---|---|---|---|---|---|---|---|
|1 octet|4 octets|2 octets|1 octet|1 octet|1 octet|1 octet|2 octets||
||Fixed fields (12 octets)|Fixed fields (12 octets)|Fixed fields (12 octets)|Fixed fields (12 octets)|Fixed fields (12 octets)|Fixed fields (12 octets)|Fixed fields (12 octets)|Variable fields|


-----

##### 3.2.3 The fixed fields
Address: Identification no, Manufacturer, Version and Device type are parts of the address.
Their meaning is as described in the clause 3.1. Be aware that the order of
Identification Number and Manufacturer is exchanged! If this address differs from the
address field of the first block, the address in the second block contains the meter
address.

Access No: is a current telegram number. The value may increase by any telegram for changing
calculated CRC at constant consumption. The mechanism is manufacturer specific.

Status: Describes the device status (e.g. error). The Status field is described in detail in [01].
For the Status field the following bits will accepted. All other bits will be ignored!

**Table 2 - Supported status bits**

**Bit number** **Clear Bit** **Set Bit**

0 (LSb) Status (see [08]). Shall be ignored.

1 Status (see [08]). Shall be ignored.

2 no error power low – battery will discharged soon

3 no error permanent error – hard error / service necessary

4 no error temp. error – device out of condition

5 Manufacturer specific - Shall be ignored.

6 Manufacturer specific - Shall be ignored.

7 (MSb) Manufacturer specific - Shall be ignored.

Configuration word: Defines the encryption method (MMMM) and length of encrypted data
(NNNN).

**Table 3 – Structure of Configuration word**

**MSb** **Bit** **Bit** **Bit** **Bit** **Bit** **Bit** **Bit** **Bit** **Bit** **Bit** **Bit** **Bit** **Bit** **Bit** **LSb**
**15** **14** **13** **12** **11** **10** **9** **8** **7** **6** **5** **4** **3** **2** **1** **0**

B A S R M M M M N N N N C C H H

Beside the control bits for encryption (MMMM and NNNN) the configuration word contains additional
configuration bits. The bits B, A,S,R and HH shall be ignored. If CC contains a 10b or a 11b then the
telegram shall be ignored.
If the bits MMMM contains other values than 0000b (0) or 0101b (5) then the data content can not be
encrypted. The message shall be ignored. If MMMM = 0000b the telegram is not encrypted. The first
octet of the unencrypted part shall be interpreted as DIF. If MMMM=1010b the telegram is encrypted and
shall by decrypted first before the telegram content can be parsed. For the decryption of a meter telegram
refer to clause 4.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 10 f 39

|Bit number|Clear Bit|Set Bit|
|---|---|---|
|0 (LSb)|Status (see[08]). Shall be ignored.|Status (see[08]). Shall be ignored.|
|1|Status (see[08]). Shall be ignored.|Status (see[08]). Shall be ignored.|
|2|no error|power low – battery will discharged soon|
|3|no error|permanent error – hard error / service necessary|
|4|no error|temp. error – device out of condition|
|5|Manufacturer specific - Shall be ignored.|Manufacturer specific - Shall be ignored.|
|6|Manufacturer specific - Shall be ignored.|Manufacturer specific - Shall be ignored.|
|7 (MSb)|Manufacturer specific - Shall be ignored.|Manufacturer specific - Shall be ignored.|

|MSb<br>15|Bit<br>14|Bit<br>13|Bit<br>12|Bit<br>11|Bit<br>10|Bit<br>9|Bit<br>8|Bit<br>7|Bit<br>6|Bit<br>5|Bit<br>4|Bit<br>3|Bit<br>2|Bit<br>1|LSb<br>0|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|bidirectional communication|accessibility|synchronised|reserved|mode bit3|mode bit2|mode bit1|mode bit0|number of encr. blocks|number of encr. blocks|number of encr. blocks|number of encr. blocks|content of telegram|content of telegram|hop counter|hop counter|
|B|A|S|R|M|M|M|M|N|N|N|N|C|C|H|H|


-----

##### 3.2.4 The variable fields

###### 3.2.4.1 Data record structure

DIF DIFE VIF VIFE Data

1 octet 0 to 10 (1 octet each) 1 octet 0 to 10 (1 octet each) 0 to N octet

Data Information Block (DIB) Value Information Block (VIB)

Data Record Header  DRH

**Figure 2 – Complete Data Information Block**

The minimal data record structure shall exist of one Data Information Field (DIF).

###### 3.2.4.2 Data Information Field (DIF)

3.2.4.2.1 Structure
The following information shall be contained in a DIF.

Bit 7 6 5 4 3 2 1 0

Extension LSb of Function Field Data Field:
Bit Storage Length and coding of data

Number

**Figure 3 – Coding of the Data Information Field (DIF)**

3.2.4.2.2 Data field
The Data field shall show how the data from the master shall be interpreted in respect of length and
coding. Table 4 contains the possible coding of the data field:

**Table 4 - Coding of the data field**

**Length (Bit)** **Code** **Meaning** **Code** **Meaning**

0 0000b No data 1000b Selection for Readout

8 0001b 8 Bit integer 1001b 2 digit BCD

16 0010b 16 Bit integer 1010b 4 digit BCD

24 0011b 24 Bit integer 1011b 6 digit BCD

32 0100b 32 Bit integer 1100b 8 digit BCD

32 / N 0101b 32 Bit Real 1101b variable length[ a]

48 0110b 48 Bit integer 1110b 12 digit BCD

64 0111b 64 Bit integer 1111b Special Functions [b]

a, b See requirements below.

NOTE This table has been expanded with optional elements from the original standard.

**a** **Variable Length**

With data field = 1101b several data types with variable length can be used.

This DIF shall not be supported in KNX. This Datapoint and all Datapoints following to this DIF
“Variable Length” shall be discarded! Further parts of the telegram shall not be interpreted.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 11 f 39

|DIF|DIFE|VIF|VIFE|Data|
|---|---|---|---|---|
|1 octet|0 to 10(1 octet each)|1 octet|0 to 10(1 octet each)|0 to N octet|
|Data Information Block(DIB)|Data Information Block(DIB)|Value Information Block(VIB)|Value Information Block(VIB)||
|Data Record Header   DRH|Data Record Header   DRH|Data Record Header   DRH|Data Record Header   DRH|Data Record Header   DRH|

|Bit 7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|
|Extension<br>Bit|LSb of<br>Storage<br>Number|Function Field|Function Field|Data Field:<br>Length and coding of data|Data Field:<br>Length and coding of data|Data Field:<br>Length and coding of data|Data Field:<br>Length and coding of data|

|Length (Bit)|Code|Meaning|Code|Meaning|
|---|---|---|---|---|
|0|0000b|No data|1000b|Selection for Readout|
|8|0001b|8 Bit integer|1001b|2 digit BCD|
|16|0010b|16 Bit integer|1010b|4 digit BCD|
|24|0011b|24 Bit integer|1011b|6 digit BCD|
|32|0100b|32 Bit integer|1100b|8 digit BCD|
|32 / N|0101b|32 Bit Real|1101b|variable length a|
|48|0110b|48 Bit integer|1110b|12 digit BCD|
|64|0111b|64 Bit integer|1111b|Special Functionsb|
|a, b See requirements below.|a, b See requirements below.|a, b See requirements below.|a, b See requirements below.|a, b See requirements below.|


-----

**b** **Special Functions (data field = 1111b)**

**Table 5 - DIF-coding for special functions**

**DIF** **Function**

0Fh Start of manufacturer specific data structures to end of user data.

1Fh Same meaning as DIF = 0Fh + More records follow in next telegram.

2Fh Idle Filler (not to be interpreted), following octet = DIF of next record.

3Fh to 6Fh Reserved.

7Fh Global readout request (all storage#, units, tariffs, function fields).

All special functions except the special function with DIF = 2Fh shall not be handled in KNX. All
Datapoints following these DIFs shall be discarded. Further parts of the telegram shall not be interpreted.

3.2.4.2.3 Function field
The function field shall give the type of data as specified in Table 6.

**Table 6 - Function Field**

**Code** **Description**

00b Instantaneous value

10b Minimum value

01b Maximum value

11b Value during error state

3.2.4.2.4 LSb of Storage Number field
Bit 6 of the DIF shall serve as the LSb of the Storage Number of the concerned data and the slave shall in
this way indicate and transmit various stored metering values or historical values of metering data. This
bit shall be the least significant bit of the Storage Number and shall therefore allow for the Storage
Numbers 0 and 1 to be coded. If Storage Numbers higher than 1 are needed then the following (optional)
DIFEs shall contain the higher bits. The Storage Number 0 shall signal a current value. The Storage
Number 1 shall be applied for consumption data at last set day.

Note that each Storage Number shall be associated with a given time point. All data records with the same
Storage Number shall refer to the timestamp given by the datapoint Date and Time for this Storage
Number. It is recommended, that a time/date record with this Storage Number is included somewhere to
signal this time point.

3.2.4.2.5 Extension Bit field
The extension bit (MSb) shall signal whether or not more detailed or extended description octets (data
field extension = DIFE) shall follow. There are no more than 10 DIFE allowed.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 12 f 39

|DIF|Function|
|---|---|
|0Fh|Start of manufacturer specific data structures to end of user data.|
|1Fh|Same meaning as DIF = 0Fh  +  More records follow in next telegram.|
|2Fh|Idle Filler(not to be interpreted), following octet = DIF of next record.|
|3Fh to 6Fh|Reserved.|
|7Fh|Global readout request (all storage#, units, tariffs, function fields).|

|Code|Description|
|---|---|
|00b|Instantaneous value|
|10b|Minimum value|
|01b|Maximum value|
|11b|Value during error state|


-----

###### 3.2.4.3 Data field extension octet(s) (DIFE)

3.2.4.3.1 Structure
There shall be at maximum 10 DIFE octets. Each DIFE shall again contain an extension bit to show
whether a further DIFE shall be sent. Every DIFE shall give the next most significant bit of the Storage
Number and shall allow the transmission of information about the tariff and the subunit of the device. In
this way, exactly as with the Storage Number, the next most significant bit or bits shall be transmitted.
Figure 4 below shows the structure of a DIFE.

Bit 7 6 5 4 3 2 1 0

Extension (Device) Tariff Storage Number

Bit Unit

**Figure 4 - Coding of the Data Information Field Extension (DIFE)**

With the maximum of ten DIFEs that are provided, there are 41 bit for the Storage Number, 20 bit for the
tariff, and 10 bits for the subunit of the meter. There is no application conceivable in which this immense
number of bits could all be used.

3.2.4.3.2 Tariff field
This field shall give tariff information. For each (unique) value type designation given by the following
Value Information Block (VIB) at each unique time point (given by the Storage Number) of each unique
function (given by the function field) there may still exist various data measured or accumulated under
different conditions. Such conditions may be time of day, various value ranges of the variable (this is,
separate storage of positive accumulated values and negative accumulated values) itself or of other
signals or variables or various averaging durations.

Only Tariff 00b and 01b shall be accepted for KNX.

3.2.4.3.3 Unit field
The Unit field shall give information about the subunit. A slave component may consist of several
functionally and logically independent subunits of the same or of different functionality. Such a device
may either use several different primary and/or secondary addresses. Such it is from a Data Link Layer
and an Application Layer view just several independent devices which share a common Physical Layer
interface. This is recommended for devices that represent a physical collection of several truly
independent (often similar or identical) devices. For devices that share common information and values
and have logical connections an approach with a common Data Link Layer (i.e. a single address) the
subunit is used in M-Bus.

Only subunit 0 shall be accepted by the Metering Data Collector. Datapoints with higher subunit numbers
shall be discarded.

3.2.4.3.4 Extension Bit field
The extension bit (MSb) shall signal that more detailed or extended description octets (data field
extension = DIFE) shall follow. There shall be no more than 10 DIFE.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 13 f 39

|Bit 7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|
|Extension<br>Bit|<br>(Device)<br>Unit|Tariff|Tariff|Storage Number|Storage Number|Storage Number|Storage Number|


-----

###### 3.2.4.4 Value Information Block (VIB)

3.2.4.4.1 Use
After a DIF (with the exception of xF) or a DIFE without a set extension bit the VIB (Value Information
Block) shall follow. This shall consist of at least the VIF (Value Information Field) and may be expanded
with a maximum of 10 extensions (VIFE). The VIF and also the VIFEs shall show through a set MSb that
a VIFE shall follow. In the Value Information Field (VIF) the remaining seven bits shall give the unit and
the multiplier of the transmitted value.

3.2.4.4.2 Value Information Field (VIF)

Bit 7 6 5 4 3 2 1 0

Extension

Unit and multiplier (value)
Bit

**Figure 5 - Coding of the Value Information Field (VIF)**

The value of the VIF shall indicate whether the coding complies with one of the five standard coding or is
manufacturer specific.

###### 1. Primary VIF: E000 0000b to E111 1011b

The unit and multiplier shall be taken from the table for primary VIF as specified in Table 7.

###### 2. Plain-text VIF: E111 1100b (Not interpreted for KNX!)

In case the VIF value equals 7Ch or FCh the true VIF shall be represented by the following ASCII
string of which the length shall be given in the first octet.

Note hat the octet order of the characters after the length octet depends on the used octet sequence.
Since only the „LSB first mode” (M = 1) of multi-octet data transmission is recommended, the
rightmost character shall be transmitted firstly. This plain text VIF shall allow the user to code units
that are not included in the VIF tables.

The Plain Text VIF shall not be supported within KNX. This Datapoint shall be discarded.

###### 3. Linear VIF-Extension: FBh (partially interpreted for KNX)

In case the VIF value equals FBh then the true VIF shall be given by the next octet (i.e. the first
VIFE). The content of this VIFE may vary up to 255 codes, according to table 12 in [01]. From this
code range only a subset as specified in Table 8 in clause “Extension of VIF Codes (VIFE)”shall be
supported in KNX.

###### 4. Linear VIF-Extension: FDh (Not interpreted in KNX!)

In case the VIF value equals FDh then the true VIF shall be given by the next octet (i.e. the first
VIFE) and the coding shall be taken from the tables 11 in [01]. This shall extend the available VIFs
by another 256 codes. This VIF and following VIFE’s are not supported in KNX.

###### 5. Any VIF: 7Eh / FEh (Not interpreted in KNX!)

This VIF code can be used in the direction from master to slave for reading out the selection of all
VIFs. See [01]. This VIF are not supported in KNX.

###### 6. Manufacturer specific: 7Fh / FFh (Not interpreted in KNX!)

In this case the remainder of this data record including VIFEs has manufacturer specific coding. This
VIF are not supported in KNX.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 14 f 39

|Bit 7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|
|Extension<br>Bit|<br>Unit and multiplier (value)|<br>Unit and multiplier (value)|<br>Unit and multiplier (value)|<br>Unit and multiplier (value)|<br>Unit and multiplier (value)|<br>Unit and multiplier (value)|<br>Unit and multiplier (value)|


-----

3.2.4.4.3 Primary VIFs (main table)
The first section of the main table contains integral values, the second typically averaged values, the third
typically instantaneous values and the fourth block contains parameters. (E: extension bit)

**Table 7 - Primary VIF codes**

**Coding** **Description** **Range Coding** **Range**

E000 0nnn Energy 10[(nnn-3)] Wh 0,001 Wh to 10 000 Wh

E000 1nnn Energy 10[(nnn)] J 0,001 kJ to 10 000 kJ

E001 0nnn Volume 10[(nnn-6)] m[3] 0,001 l to 10 000 l

E001 1nnn Mass 10[(nnn-3)] kg 0,001 kg to 10 000 kg

E010 00nn On Time nn = 00b s Duration of Meter power up
nn = 01b min
nn = 10b h
nn = 11b d

E010 01nn Operating Time coded like OnTime Duration of meter accumulation

E010 1nnn Power 10[(nnn-3)] W 0,001 W to 10 000 W

E011 0nnn Power 10[(nnn)] J/h 0,001 kJ/h to 10 000 kJ/h

E011 1nnn Volume Flow 10[(nnn-6)] m[3]/h 0,001 l/h to 10 000 l/h

E100 0nnn Volume Flow ext. 10[(nnn-7)] m[3]/min 0,0001 l/min to 1 000 l/min

E100 1nnn Volume Flow ext. 10[(nnn-9)] m[3]/s 0,001 ml/s to 10 000 ml/s

E101 0nnn Mass flow 10[(nnn-3)] kg/h 0,001 kg/h to 10 000 kg/h

E101 10nn Flow Temperature 10[(nn-3)] °C 0,001°C to 1°C

E101 11nn Return Temperature 10[(nn-3)] °C 0,001°C to 1°C

E110 00nn Temperature Difference 10[(nn-3)] K 1 mK to 1 000 mK

E110 01nn External Temperature 10[(nn-3)] °C 0,001 °C to 1 °C

E110 10nn Pressure 10[(nn-3)] bar 1 mbar to 1 000 mbar

E110 1100 Date (current or associated with a data type G [01]
Storage Number or function)

E110 1101 Date and Time (current or data type F
associated with a Storage Number (other Data types will discarded in
or function) KNX) [01].

E110 1110 Units for H.C.A. Dimensionless

E110 1111 Reserved

E111 00nn Averaging Duration coded like OnTime

E111 01nn Actuality Duration coded like OnTime

E111 1000 Fabrication No

E111 1001 (Enhanced) Identification Not mapped to KNX

E111 1010 Address Not mapped to KNX data field 110b (6 octet HeaderID) [02] or 111b (Full 8 octet
Header) [01]

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 1 f 39

|Coding|Description|Range Coding|Range|
|---|---|---|---|
|E000 0nnn|Energy|10(nnn-3) <br>Wh|0,001 Wh to 10 000 Wh|
|E000 1nnn|Energy|10(nnn) <br>J|0,001 kJ to 10 000 kJ|
|E001 0nnn|Volume|10(nnn-6) <br>m3|0,001 l to 10 000 l|
|E001 1nnn|Mass|10(nnn-3) <br>kg|0,001 kg to 10 000 kg|
|E010 00nn|On Time|nn = 00b<br>s <br>nn = 01b<br>min<br>nn = 10b<br>h <br>nn = 11b<br>d|Duration of Meter power up|
|E010 01nn|Operating Time|coded like OnTime|Duration of meter accumulation|
|E010 1nnn|Power|10(nnn-3) <br>W|0,001 W to 10 000 W|
|E011 0nnn|Power|10(nnn) <br>J/h|0,001 kJ/h to 10 000 kJ/h|
|E011 1nnn|Volume Flow|10(nnn-6) <br>m3/h|0,001 l/h to 10 000 l/h|
|E100 0nnn|Volume Flow ext.|10(nnn-7) <br>m3/min|0,0001 l/min to 1 000 l/min|
|E100 1nnn|Volume Flow ext.|10(nnn-9) <br>m3/s|0,001 ml/s to 10 000 ml/s|
|E101 0nnn|Mass flow|10(nnn-3) <br>kg/h|0,001 kg/h to 10 000 kg/h|
|E101 10nn|Flow Temperature|10(nn-3) <br>°C|0,001°C to 1°C|
|E101 11nn|Return Temperature|10(nn-3) <br>°C|0,001°C to 1°C|
|E110 00nn|Temperature Difference|10(nn-3) <br>K|1 mK to 1 000 mK|
|E110 01nn|External Temperature|10(nn-3) <br>°C|0,001 °C to 1 °C|
|E110 10nn|Pressure|10(nn-3) <br>bar|1 mbar to 1 000 mbar|
|E110 1100|Date (current or associated with a<br>Storage Number or function)||data type G [01]|
|E110 1101|Date and Time (current or<br>associated with a Storage Number<br>or function)||data type F<br>(other Data types will discarded in<br>KNX) [01].|
|E110 1110|Units for H.C.A.||Dimensionless|
|E110 1111|Reserved|||
|E111 00nn|Averaging Duration|coded like OnTime||
|E111 01nn|Actuality Duration|coded like OnTime||
|E111 1000|Fabrication No|||
|E111 1001|(Enhanced) Identification|Not mapped to KNX||
|E111 1010|Address|Not mapped to KNX|data field 110b (6 octet Header-<br>ID) [02] or 111b (Full 8 octet<br>Header) [01]|


-----

3.2.4.4.4 Extension of VIF Codes (VIFE)
The extension bit (MSb) shall signal that one or more detailed or extended description octets (value field
extension = VIFE) shall follow. There shall be no more than 10 VIFE.

Only four extensions of VIF codes (VIFE) shall be supported for KNX. For other extensions the complete
Datapoint shall be discarded. Nevertheless a consideration of length for any Datapoints using VIFE is
necessary to detect precisely the start of next Datapoint. For that reason the interpreter shall to parse any
Datapoint.

This subset of VIFE shall allow Datapoints using energy units MWh or GJ respectively power units MW
or GJ/h. Be aware that the extension bit is set for mapping to DPT_MeteringValue [07].

**Table 8 - Alternate VIFE-Code Extension table (following VIF = 0FBh for primary VIF)**

**Coding** **Description** **Range Coding** **Range**

0000 000n Energy 10[(n-1)] MWh 0,1 MWh to 1 MWh

0000 100n Energy 10[(n-1)] GJ 0,1 GJ to 1 GJ

0010 100n Power 10[(n-1)] MW 0,1 MW to 1 MW

0011 000n Power 10[(n-1)] GJ/h 0,1 GJ/h to 1 GJ/h

3.2.4.4.5 Combinable VIFE Codes
There are 3 types of data points where the meaning of a primary VIF or a VIF-Extension using VIF=FBh
is expanded by a combinable VIFE:

  - Extension of value range

  - Modification of the meaning of a data record

  - Presenting a row of data points in a compact profile

The presence of a combinable VIFE is marked by setting the extension bit (MSb) of the previous VIF or
VIFE. The combinable VIFE follows always after the VIF or the other VIF-Extensions.

_Extension of a value range_

The value range of the previous VIF/VIFE may be expanded by a fix multiplier of 10^3 if this
combinable VIFE = 7Dh is applied.

_Modification of the meaning of a data record_

Exported Energy of a Electricity Meter

An electricity meter applies a combinable VIFE=3Ch to signal that data record consist values of
exported (produced) energy instead of imported (consumed) energy.

Cooling Energy of a combined Heat and Cool meter

A heat and cool meter applies the combinable VIFE=3Ch to separate the cooling energy from the
energy for heating (without this combinable VIFE). Alternatively the tariff1 register is applied!

Measuring condition of a Gas meter

The measured volume of a Gas meter has to be converted to an energy value. This conversion
needs to consider temperature and pressure of the measured Gas volume. The metering condition
may be considered from the Gas meter itself or later one in the billing system. For details of
metering conditions for a Gas meter refer to Annex H of [10]. There are 3 metering conditions
which may provided by a Gas meter.

For a Gas meter which applies no additional combinable VIFE shall be assumed that the
consumption values are temperature converted (Vtc).

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 16 f 39

|Coding|Description|Range Coding|Range|
|---|---|---|---|
|0000 000n|Energy|10(n-1) <br>MWh|0,1 MWh to 1 MWh|
|0000 100n|Energy|10(n-1) <br>GJ|0,1 GJ to 1 GJ|
|0010 100n|Power|10(n-1) <br>MW|0,1 MW to 1 MW|
|0011 000n|Power|10(n-1) <br>GJ/h|0,1 GJ/h to 1 GJ/h|


-----

A Gas meter which provider consumption values without any conversion (value at measurement
condition Vm) applies an combinable VIFE=3Ah for each consumption value.

A Gas meter which provider compensated consumption values (value at base condition Vb) applies
a combinable VIFE=3Eh for each consumption value.

A Gas meter will provide only one type of these 3 possible metering conditions on the radio
interface. The KNX-Receiver has to store the consumption value and the metering condition in
separate data points (refer to [07]).

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 1 f 39


-----

_Presenting a row of data points in a compact profile_

This combinable VIFE declares an array of data points in one data record. This data record is called
compact profile and marked with the combinable VIFE = 1Eh or 1Fh. Details of the compact profile are
described in Annex B.

Note that several combinable VIFE may be applied in the same data record. All VIFE except the last one
applies additional a set MSb! Example: VIF/VIFE = FBh 10h FDh 3Ch (with multiplier and modification
of the data record).

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 18 f 39


-----

### 4 Decryption of an encrypted message 

The encryption method and the length of encrypted data depends on the configuration word (refer to
3.2.3). When the nibble MMMM consists of a value different from 0000b the following data are
encrypted. Within this standard the encryption method 5 (1001b) in MMMM is only supported. This
encryption method 5 requires:

  - A 16 Byte Block encryption by AES128.

  - A chaining of all blocks using Cipher Block Chaining (CBC)

  - An Initialisation vector conforming to Table 9

  - An Encryption key which shall be provided conform to FIPS 197 with Least Significant Byte
first.

**Table 9 - Initialisation vector for the CBC-AES-128**

LSB 1 2 3 4 5 6 7 8 9 10 11 12 13 14 MSB

Manuf. Manuf. ID ID ID ID Ver- Dev.- Acc. Acc. Acc. Acc. Acc. Acc. Acc. Acc.
(LSB) (MSB) (LSB) (MSB) sion type no. no. no. no. no. no. no. no.

The length of encrypted data is given by the nibble NNNN in the Configuration word (refer to 3.2.3).
NNNN declares the number of encrypted 16 octet blocks. Therefore the NNNN has to be multiplied with
16 to get the number of encrypted octets. When the number of encrypted octets is shorter then the
remaining length of the telegram calculated by the L-Field, then the remaining octets are transmitted
plain. This is called partial encryption. The unencrypted section shall always start with a DIF and may be
interpreted even if the encrypted section is not decrypted yet.

An example of a partial encrypted telegram is presented in Annex C.

To check the encrypted part for a correct decryption the encryption method 5 provides an Encryption
verification containing the dummy DIF’s “2Fh 2Fh” in the first two octets of the encrypted part. If a
decrypted message contains different values than the “2Fh 2Fh” in the first two octets of the decrypted
message than the content of the encrypted part shall be ignored. At the end of the last block may
additional dummy DIF’s 2Fh applied to fill up the last block up to 16 bytes.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 19 f 39

|LSB|1|2|3|4|5|6|7|8|9|10|11|12|13|14|MSB|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Manuf.<br>(LSB)|Manuf.<br>(MSB)|ID<br>(LSB)|ID|ID|ID<br>(MSB)|Ver-<br>sion|Dev.-<br>type|Acc.<br>no.|Acc.<br>no.|Acc.<br>no.|Acc.<br>no.|Acc.<br>no.|Acc.<br>no.|Acc.<br>no.|Acc.<br>no.|


-----

### 5 Parse a M-Bus string

The variable part of the M-Bus string shall always start with a DIF. The DIF describes the format and
length of the contained data. If a Datapoint cannot be interpreted then next Datapoint shall be detected. To
find next Datapoint the length of these Datapoint shall be calculated.
```
  Length = Length of Data + Sum of all DIF/DIFE + Sum of all VIF/VIFE

```
The Length of data shall be calculated by the predefined length as given in Table 4.

Usually only one DIF or VIF per Datapoint is used. If this is not the case then the Extension bit of the
DIF/DIFE or VIF/VIFE shall be set.

The Number of DIF/DIFE or VIF/VIFE-fields shall be calculated by cumulating all octets until the
Extension Bit is clear.

If special DIFs or DIFs with variable Length are used that shall not be supported for mapping to KNX,
then the further parts of the telegram shall not be interpreted.. All following Datapoints up to the end of
telegram shall be discarded (see clause3.2.4.2.2).

EXAMPLE

This example shows a volume in gallons at the storage number 33 (e.g. month value). Thus gallons are not part of Main
VIF-Table. The interpreter can ignore this Datapoint and parse to next Datapoint.

CCh, 80h, 01h, FBh, 23h, 78h, 56h, 34h, 12h, 2Fh, 2Fh

DIF, .DIFE, VIF, VIFE, example 12345678

Length = 8 Digits BCD for Data (Type 1100b in Table 4) = 4 octets

+ DIF (set extension bit) and DIFE (set ext. bit) and DIFE (cleared ext. bit) = 3 octets

+ VIF (set extension bit) and VIFE (cleared extension bit) = 2 octets

Thus the next DIF (2Fh) follows after 9 octets!

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 20 f 39


-----

### 6 Relevant data in dependency of the Device type

**Table 10 - combination of possible Datapoints in dependency of Device type**

**Device type**

**HCA** **Water** **Heat or** **Gas** **Elec-** **Breaker** **Valve** **Generic**

**Description** **{8}** **{6,7,28}** **Cool** **{3}** **tricity** **{20}** **{21}** **{ }[ a)]**

**{4,A..D}** **{2}**

Energy   -   - x   - x   -   - x

Volume   - x   - x   -   -   - x

Mass    -    -    -    -    -    -    - x

On time x x x x x x x x

Operating Time x x x x x x x x

Power    -    - x    - x    -    -    
Volume Flow  - x x x  -  -  -  
Mass flow   -   -   -   -   -   -   -   
Flow x x x x    -    -    -    Temperature

Return    -    - x    -    -    -    -    Temperature

Temperature  -  - x  -  -  -  -  Difference

External x    -    -    -    -    -    -    Temperature

Pressure   -   -   - x   -   -   -   
Date and Time x x x x x x x x

Units for H.C.A. x  -  -  -  -  -  -  
Reserved   -   -   -   -   -   -   -   
Averaging x x x x x   -   - x
Duration

Actuality x x x x x x x x
Duration

Fabrication No x x x x  - x x x

Breaker/ Valve  -  -  - x x x x  state

Legend
{n} n is hexadecimal number of relevant Device type concerning reference [08]
x The Datapoint that shall be mapped as KNX-Datapoint.
      - The Datapoint shall be discarded by Metering Data Collector.
a) Following device types are supported as generic device 00h, 01h, 02h, 03h, 05h, 29h.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 21 f 39

|Description|Device type|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|**Description**|**HCA**<br>**{8}**|**Water**<br>**{6,7,28}**|**Heat or**<br>**Cool**<br>**{4,A..D}**|**Gas**<br>** {3}**|**Elec-**<br>**tricity**<br>** {2}**|**Breaker**<br>**{20}**|<br>**Valve**<br>**{21}**|**Generic**<br>**{ }  a) **|
|Energy|-|-|x|-|x|-|-|x|
|Volume|-|x|-|x|-|-|-|x|
|Mass|-|-|-|-|-|-|-|x|
|On time|x|x|x|x|x|x|x|x|
|Operating Time|x|x|x|x|x|x|x|x|
|Power|-|-|x|-|x|-|-|-|
|Volume Flow|-|x|x|x|-|-|-|-|
|Mass flow|-|-|-|-|-|-|-|-|
|Flow<br>Temperature|x|x|x|x|-|-|-|-|
|Return<br>Temperature|-|-|x|-|-|-|-|-|
|Temperature<br>Difference|-|-|x|-|-|-|-|-|
|External<br>Temperature|x|-|-|-|-|-|-|-|
|Pressure|-|-|-|x|-|-|-|-|
|Date and Time|x|x|x|x|x|x|x|x|
|Units for H.C.A.|x|-|-|-|-|-|-|-|
|Reserved|-|-|-|-|-|-|-|-|
|Averaging<br>Duration|x|x|x|x|x|-|-|x|
|Actuality<br>Duration|x|x|x|x|x|x|x|x|
|Fabrication No|x|x|x|x|-|x|x|x|
|Breaker/ Valve<br>state|-|-|-|x|x|x|x|-|
|Legend<br>{n} n is hexadecimal number of relevant Device type concerning reference [08]<br> x<br>The Datapoint that shall be mapped as KNX-Datapoint.<br> - <br>The Datapoint shall be discarded by Metering Data Collector.|Legend<br>{n} n is hexadecimal number of relevant Device type concerning reference [08]<br> x<br>The Datapoint that shall be mapped as KNX-Datapoint.<br> - <br>The Datapoint shall be discarded by Metering Data Collector.|Legend<br>{n} n is hexadecimal number of relevant Device type concerning reference [08]<br> x<br>The Datapoint that shall be mapped as KNX-Datapoint.<br> - <br>The Datapoint shall be discarded by Metering Data Collector.|Legend<br>{n} n is hexadecimal number of relevant Device type concerning reference [08]<br> x<br>The Datapoint that shall be mapped as KNX-Datapoint.<br> - <br>The Datapoint shall be discarded by Metering Data Collector.|Legend<br>{n} n is hexadecimal number of relevant Device type concerning reference [08]<br> x<br>The Datapoint that shall be mapped as KNX-Datapoint.<br> - <br>The Datapoint shall be discarded by Metering Data Collector.|Legend<br>{n} n is hexadecimal number of relevant Device type concerning reference [08]<br> x<br>The Datapoint that shall be mapped as KNX-Datapoint.<br> - <br>The Datapoint shall be discarded by Metering Data Collector.|Legend<br>{n} n is hexadecimal number of relevant Device type concerning reference [08]<br> x<br>The Datapoint that shall be mapped as KNX-Datapoint.<br> - <br>The Datapoint shall be discarded by Metering Data Collector.|Legend<br>{n} n is hexadecimal number of relevant Device type concerning reference [08]<br> x<br>The Datapoint that shall be mapped as KNX-Datapoint.<br> - <br>The Datapoint shall be discarded by Metering Data Collector.|Legend<br>{n} n is hexadecimal number of relevant Device type concerning reference [08]<br> x<br>The Datapoint that shall be mapped as KNX-Datapoint.<br> - <br>The Datapoint shall be discarded by Metering Data Collector.|
|a) <br>Following device types are supported asgeneric device 00h, 01h, 02h, 03h, 05h, 29h.|a) <br>Following device types are supported asgeneric device 00h, 01h, 02h, 03h, 05h, 29h.|a) <br>Following device types are supported asgeneric device 00h, 01h, 02h, 03h, 05h, 29h.|a) <br>Following device types are supported asgeneric device 00h, 01h, 02h, 03h, 05h, 29h.|a) <br>Following device types are supported asgeneric device 00h, 01h, 02h, 03h, 05h, 29h.|a) <br>Following device types are supported asgeneric device 00h, 01h, 02h, 03h, 05h, 29h.|a) <br>Following device types are supported asgeneric device 00h, 01h, 02h, 03h, 05h, 29h.|a) <br>Following device types are supported asgeneric device 00h, 01h, 02h, 03h, 05h, 29h.|a) <br>Following device types are supported asgeneric device 00h, 01h, 02h, 03h, 05h, 29h.|


-----

### 7 Installation procedure

#### 7.1 General
The installation of the metering application shall be executed with the push button method. This means a
simple press of a button for both meter and Metering Data Collector will start an assignment of meter to
metering Data Collector. The start of the installation can also initiated by other unique events, like the
programming of the device.

#### 7.2 Installation of the Meter
If the installation mode of a meter is initiated (e.g. by press a button) it shall change to installation mode.
During installation mode at least one installation telegram shall be transmitted. An installation telegram
differs from other telegrams by using special C-Field with value 46h (see clause 3.1.3). Inside the
Installation telegram at least current date and time and a valid status of meter shall be transmitted. All
other Datapoints can be transmitted optionally. It is recommended to transmit at least 6 installation
telegrams during Installation mode for safe assignment. In order to avoid unwanted assignment to other
Metering Data Collectors it is recommended to finish the transmission of Installation telegrams of meter
automatically after a time out of 5 minutes.

#### 7.3 Installation of the Metering Data Collector
If the metering Data Collector is in installation mode and it receives a telegram with a C-Field with value
equal to 46h then it shall register the address of received meter for later reception (see example in
clause 8). Usually the Installation mode of Metering Data Collector is finished manually. To avoid
unwanted assignments of meter it is recommended that the Metering Data Collector leaves installation
mode also automatically after an adequate timeout. A timeout of 1 hour is recommended.

Outside installation mode the metering Data Collector will accept meter telegrams only from devices
listed in memory. The non volatile memory consist of all parts of address (Identification no,
Manufacturer, Version, Device type and Fabrication number (if available)).

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 22 f 39


-----

### 8 Connection interrupt

The transmission interval of the meter differs from meter to meter. There is also a dependency between
transmission interval and device type of the meter. An electricity meter transmits typically the
consumption data more frequently than a water meter. However there are general rules for the meter
types. The meter has to transmit the consumption values several times a day. With it if the receiver
receives no new data from meter for certain period it shall mark the obsolete data of this meter by setting
the data point “ReliabilityOfMeteringData”. This Datapoint should be set 24 hours after the last received
data telegram. If it receives a new data telegram (C=44) of the missed meter, the bit
“ReliabilityOfMeteringData” shall be cleared. The check can be simple done, by comparing current time
with last reception time stamp “RxReceptionTime”.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 23 f 39


-----

### 9 Example of object structure of Metering data for Heat (4, A..D)

The Main object contains all information from meter like ID, Error status or current consumption values.
But consumption data are not only used for billing. Several consumption values from the past (Storage
Number >0) will be saved in a history array. Through the Storage Number any date can be related with
the concerned consumption value or peak value. This array has to be sorted by Storage Number and then
by consumption date. If the array is completely filled, the oldest history data will be replaced by newest
history value. It is recommended that minimum 10 objects can be stored in a metering Data Collector.

**EXAMPLE Reception of an M-Bus telegram from a Heat meter (without line split).**

The M-Bus telegram starts with block 2 with CI field value = 72h.

/* Fixed part with CI = 72
72h 78h 56h 34h 12h AEh 0Ch 01h 04h 09h 08h 00h 00h
/* Fabrication number
0Ch 78h 32h 54h 76h 98h
/* Current values
04h 6Dh 0Ch 00h 96h 09h 0Bh 06h 87h 01h 00h 0Bh 15h 75h 18h 00h
/* Max. values / Avg. duration
12h 6Ch 8Fh 06h 1Ah 2Bh 12h 01h 19h 72h 01h
/* Error date
32h 6Ch 81h 07h
/* Values for Storage no #1
42h 6Ch 7Fh 0Ch 4Bh 06h 00h 01h 00h
/* Values for Storage no #3
C2h 01h 6Ch 9Fh 08h CBh 01h 06h 80h 01h 00h DAh 01h 3Dh 18h 00h DAh 01h 2Ch 20h 00h

**Table 11 - Object structure of Heat/Cool meter (current values)**

**Field** **Value from** **Data Type** **Memory type**
**example**

RX-Sequence counter [1] 02 (by receiver) Octet volatile
RX-Reception Time [1] 22.09.04 12:03 DPT_DateTime volatile
(by receiver)

Manufacturer [2] CEN 2 octets (See 3.1.4.) non volatile
identification number [2] 12345678 8 digits BCD non volatile
Version [2] 01 octet non volatile
Device type [2] 04 octet non volatile
Fabrication number [2] 98765432 8 digits BCD (like ident. no) non volatile
access number 09 octet volatile
Status 08 octet volatile
operating time -- DPT_LongDeltaTimeSec volatile
on time -- DPT_LongDeltaTimeSec volatile
current date 22.09.04 12:00 DPT_DateTime volatile
current consumption 187 kWh DPT_MeteringValue volatile
current consumption (Tarif1) 1875 x 0,1 m[3] DPT_MeteringValue volatile
current power DPT_MeteringValue volatile
max. date 15.06.04 DPT_DateTime volatile
max. power 112 W DPT_MeteringValue volatile
min. date DPT_DateTime volatile
min. power DPT_MeteringValue volatile
error date 01.07.04 DPT_DateTime volatile
error consumption DPT_MeteringValue volatile
averaging duration 1 h DPT_LongDeltaTimeSec volatile
raw data of telegram (starting 72 78 56 34 12 String of octet (min.. 127 volatile
from CI)[3] AE 0C 01 04… octets)

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 24 f 39

|Field|Value from<br>example|Data Type|Memory type|
|---|---|---|---|
|RX-Sequence counter1|02 (by receiver)|Octet|volatile|
|RX-Reception Time1|22.09.04 12:03<br>(by receiver)|DPT_DateTime|volatile|
|Manufacturer2|CEN|2 octets (See 3.1.4.)|non volatile|
|identification number2|12345678|8 digits BCD|non volatile|
|Version2|01|octet|non volatile|
|Device type2|04|octet|non volatile|
|Fabrication number2|98765432|8 digits BCD (like ident. no)|non volatile|
|access number|09|octet|volatile|
|Status|08|octet|volatile|
|operating time|--|DPTLongDeltaTimeSec|volatile|
|on time|--|_<br>DPTLongDeltaTimeSec|volatile|
|current date|22.09.04 12:00|_<br>DPTDateTime|volatile|
|current consumption|187 kWh|_<br>DPTMeteringValue|volatile|
|current consumption (Tarif1)|1875 x 0,1 m3|_<br>DPTMeteringValue|volatile|
|current power||_<br>DPTMeteringValue|volatile|
|max. date|15.06.04|_<br>DPTDateTime|volatile|
|max. power|112 W|_<br>DPTMeteringValue|volatile|
|min. date||_<br>DPTDateTime|volatile|
|min. power||_<br>DPTMeteringValue|volatile|
|error date|01.07.04|_<br>DPTDateTime|volatile|
|error consumption||_<br>DPTMeteringValue|volatile|
|averaging duration|1 h|_<br>DPTLongDeltaTimeSec|volatile|
|raw data of telegram (starting<br>from CI)3|72 78 56 34 12<br>AE 0C 01 04…|_<br>String of octet (min.. 127<br>octets)|volatile|


-----

… … … … … … … … …
n[4] void void void void void void void void

1 The RX-Sequence counter and RX-Reception time shall be not transmitted by the heat meter but shall
be generated by receiver itself. If the Meter Data Collector receives and stores a telegram of a meter
with a registered ID it shall save the reception time and increase the RX-Sequence counter.
It is recommended for a client before reading the contents of this Interface Object to read
RX-Sequence counter firstly. After the data transfer the client should read the RX-Sequence counter
again. If the sequence counter has changed, it may be that data set is not consistent anymore. In that
rare case the client should to request all data again.

2 The five parts of the addresses have to be saved in non-volatile memory (e.g. flash). All other values
may be saved in volatile (e.g. RAM) or non-volatile memory. After power failure, the metering Data
Collector shall be able to receive data again from the assigned meters and refuse not assigned meters
to refill all lost values after next transmission.

3 Not all Datapoints are converted to KNX. The Datapoint “raw data of telegram” allows an M-Bus
Master to translate all information of a Meter. Raw data of telegram shall be a copy of the M-Bus
telegram starting from and including the CI field until the end of the M-Bus telegram except the CRC.
The radio specific CRC should not be saved in the Raw data of the M-Bus telegram. If the remaining
telegram is longer than available memory then the end of the “raw data of telegram” should be cut
off. The minimum memory space for “Raw data of telegram” should be 127 octets or more.

4 The History array shall have a minimum length of 8 history entries.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 2 f 39

|Col1|Table 12 - Object structure of Heat/Cool meter (history values)|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|**Property**<br>**Array**<br>**index**|**Property**|**Property**|**Property**|**Property**|**Property**|**Property**|**Property**|**Property**|
|**Property**<br>**Array**<br>**index**|**Storage Number (>0)**<br>DPT_Value_1_Ucount|**HistoryDate**<br>DPT_DateTime|**HistoryEnergyConsumption**<br>DPT_MeteringValue|**HistoryEnergyConsumption_T1**<br>DPT_MeteringValue|**HistoryVolumeMaxFlow**<br>DPT_MeteringValue|**HistoryVolumeMinFlow**<br>DPT_MeteringValue|**HistoryMaxPower**<br>DPT_MeteringValue|**HistoryMinPower**<br>DPT_MeteringValue|
|1|1 (fixed)<br>(billing<br>period)|31.12.2003|100 kWh|void|void|void|void|void|
|2|3 <br>(monthly<br>value)|30.06.2004|160 kWh|void|16 x<br>0,1 m3/h|void|350 W|void|
|3|3 <br>(monthly<br>value)|31.07.2004|170 kWh|void|17 x<br>0,1 m3/h|void|180 W|void|
|4|3 <br>(monthly<br>value)|31.08.2004|180 kWh|void|18 x<br>0,1 m3/h|void|200 W|void|
|…|<br>…|…|…|…|…|…|…|…|
|n4|void|void|void|void|void|void|void|void|


-----

**Memory calculation**

Calculation of additionally needed memory to store Meter in a Metering Data Collector

no of datapoints

memory space

length in octets [no of datapoints ] (for 8 history

(current values) (octets)

values)

8 digits BCD
4 2 0 8
(in non volatile Memory)

Octet (in non volatile Memory) 1 4 0 4

Octet (in volatile Memory) 1 3 8 11

DPT_DateTime 8 5 8 104

DPT_LongDeltaTimeSec 4 3 0 12

DPT_MeteringValue 6 6 48 324

String of octets
128 1 0 128
(min.. 127 octets)

Non-volatile memory space **12**

Volatile memory space **579**

A Metering Data Collector that supports 16 Meters needs a memory space of 9 264 octets RAM and
192 octets flash to store all data.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 26 f 39

|Col1|length in octets|no of datapoints<br>(current values)|no of datapoints<br>(for 8 history<br>values)|memory space<br>(octets)|
|---|---|---|---|---|
|8 digits BCD<br>(in non volatile Memory)|4|2|0|8|
|Octet(in non volatile Memory)|1|4|0|4|
|Octet(in volatile Memory)|1|3|8|11|
|DPT_DateTime|8|5|8|104|
|DPT_LongDeltaTimeSec|4|3|0|12|
|DPT_MeteringValue|6|6|48|324|
|String of octets<br>(min.. 127 octets)|128|1|0|128|
|Non-volatile memory space||||**12**|
|Volatile memory space||||**579**|


-----

### 10 RF Metering Retransmitter

#### 10.1 Introduction
If the RF communication between a sending metering device and the receiving central unit is blocked due
to attenuation of the RF signal, one or more RF retransmitters can be inserted in between these devices.
These retransmitters shall receive all frames originating from a sender and resend them.

In order to avoid an avalanche of frames sent by various retransmitters, which would block the
communication channel, the following mechanism shall help avoiding multiple resending of a single
frame by a retransmitter.

- Opposite to the standard KNX RF protocol the RF metering protocol does not foresee a hop count,
repeated flag or other mechanisms in the RF frame to support easy detection of repeated frames and
other criteria to suppress endless re-repetition by retransmitters. Therefore other mechanisms (history
list and filtering) are introduced.

- Up to 3 retransmitters in sequence are possible.
   - each retransmitter resends a frame only once
   - it is possible that a retransmitter resends frame that has been repeated by another retransmitter

- **History list**

Detection of repeated frames and suppression of re-repetitions shall be handled by the retransmitter itself. This shall be done using a temporary history list (message cache) in the
retransmitter.

- **Filtering**

The history list is necessary to avoid endless repetitions within one metering system but because
of its limited buffer size it is not sufficient to avoid never ending loops between multiple
independent metering systems. Therefore teach-in of metering devices to the corresponding
retransmitter and filtering according to the 8 octet M-Bus address information is mandatory.

EXAMPLE Never ending message loop without filtering


Metering System 1

R 2)

R

1)

2)

R

4)

R

Metering Device

R Retransmitter


Metering System 2

R 2)

R

3)

1) original Message from Metering Device
2) repeated message within Metering System
3) repeated message received from neighboring Metering System
4) re-repeated message received after a undetermined
delay by the originating Metering System => endless loop
Metering System


**Figure 6 – Message loop across neighbouring systems**

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 2 f 39


-----

#### 10.2 History List
The Data Link Layer of every retransmitter shall have a history list that shall store information about the
previously received and retransmitted frames.

The history list shall contain an unambiguous identifier for each received and retransmitted message.

EXAMPLE 1

Store the address information (manufacturer and serial number: 8 octet) of the sender and the CRC of the last RF block
(2 octets). This requires storing 10 octets per telegram.

EXAMPLE 2

Save the array index of the metering filter table together with the CRC of the last RF block.

The history list shall be organized as a ring buffer (the oldest entry is overwritten by a new entry if the
buffer size is exceeded). It shall have a minimum length of 8 entries.

There shall be a self-clearing mechanism. This means that all entries in the list shall be deleted after a
minimum of time-out of 3 seconds during which no valid telegram is received (within 3 seconds all
repetitions by up to 3 retransmitters in the same system are normally terminated).

Calculation example for the history buffer size:

   - size of the history list: ≥8 entries
(i.e. ≅ 1 s RF metering peak traffic at 30 % channel capacity, worst case).

   - 10 octets per entry

⇒ total size >80 octets

If a retransmitter receives a frame, its Data Link Layer shall check if the received frame is contained in
the history list (e.g. address information+CRC in this combination). If this is the case, this frame shall be
discarded, otherwise the processing of retransmission shall continue.

#### 10.3 Retransmission mechanism
A retransmitter shall sense whether the medium is free before it transmits. The interframe time shall be
the time interval during which a bidirectional device shall wait for the medium to be free (regardless of
whether it is addressed by the previous frame or not). If no preamble is detected during this interframe
time the device may start sending.

For retransmission of RF metering frames the interframe time in the retransmitter shall be the same as for
standard KNX RF frames (this is: fixed delay 5 ms+ random delay 0 ms to 10 ms).

The retransmitter shall be able to buffer at least 3 received RF metering frames in case of RF metering
peak traffic. This requires about 300 octets of RAM for the receive buffer.

NOTE M-Bus RF metering allows for the use of both a long and a short preamble as specified in [02]. Messages with long
preamble are generally retransmitted with short preamble.

#### 10.4 Filtering
A constellation with multiple retransmitters in nearby Metering Systems – see Figure 6 – may result in
long distance retransmission loops, because

- there is no hop count in the RF frame, and

- the size of the history list in the retransmitter is limited and may not be sufficient in case of long
distance retransmission loops.

To avoid such loops, Filtering is mandatory in the retransmitter.

Filtering is also useful to reduce the duty cycle of the retransmitter. Duty cycle limitations according to

[05] ERC REC. 70-03 shall be considered also for retransmitters.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 28 f 39


-----

#### 10.5 Metering Filter Table Property in the Device Object

##### 10.5.1 Specification
The Metering Filter Table shall be an array property of the Device Object.

**Table 13 - Metering Filter Table property in the Device Object**

**Property Name** **PID** **PDT/DPT** **M/O** **Read** **Description**
**/**
**Write**

Metering Filter Table 84 = PDT_GENERIC_08[n] M R/W Table containing the
PID_METERING_FILTER DPT_MBus_Address[n] address information
_TABLE n≥16 of associated devices

NOTE DPT_MBus_Address (DPT_ID = 230.1000) is specified in Chapter 3/7/2 “Datapoint Types”.

The property Metering Filter Table shall contain the 8 octet M-Bus address information (2 octet
manufactured identification and 6 octet address information) of the associated metering devices. This
property shall thus have the following structure:

Manufacturer identification Identification number Version Device
type

2 octets 4 octets 1 octet 1 octet

The identification number can be a hard address or a soft address, according to the most significant bit of
the manufacturer identification, as specified in 3.1.4.

The array shall contain at least 16 elements.

The filter table can be generated in two ways.

1. It shall be possible to download the Metering Filter Table (n x 8 octets) by Management Client.

This Management Client may be a service tool.

2. The Filter Table may additionally be generated locally by the Retransmitter itself.

In this case each metering device shall be linked to the Retransmitter using teach in mechanism
via the “push-button procedure”. The Retransmitter shall store the 8 octet address information
of the RF metering device.

It shall be possible for a Management Client, like ETS[®], to read out, set and overwrite the Metering Filter
Table.

The entries of the Metering Filter Table shall contain either the M-Bus address information of the linked
M-Bus devices or void table elements as specified below.

   - For each additional partner device, the Metering Filter Table shall be extended at the array
element with index “last element + 1” with that device’s corresponding 8 octet address
information. The table elements need not to be sorted.

   - The maximum size of the Metering Filter Table shall be fixed and is product specific. The
number of devices that can be associated is therefore limited.

   - Ex-factory, the Metering Filter Table shall be empty and void table elements shall contain the
address information 00000000000000h.

   - There may be “gaps” in the Metering Filter Table with void table elements.

   - Read and Write access to the table shall be mandatory (e.g. by ETS)

   - Individual table elements can be written. There is no table load state machine.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 29 f 39

|Property Name|PID|PDT/DPT|M/O|Read<br>/<br>Write|Description|
|---|---|---|---|---|---|
|Metering Filter Table|84 =<br>PID_METERING_FILTER<br>_TABLE|PDT_GENERIC_08[n]<br>DPT_MBus_Address[n]<br>n≥16|<br>M|R/W|Table containing the<br>address information<br>of associated devices|

|Manufacturer identification|Identification number|Version|Device<br>type|
|---|---|---|---|
|2 octets|4 octets|1 octet|1 octet|


-----

EXAMPLE

**Array** **Value**
**Index**

1 1[st] M-Bus address (8 octets)

2 2[nd] M Bus address (8 octets)

3 0000000000000000h (void)

4 3[rd] M Bus address (8 octets)

… …

N …

**Figure 7 – Example of the Metering Filter Table**

**Special considerations for the Management Client (tool, property client …)**

   - The available size of the table can be checked via standard property mechanisms
(A_PropertyDescription_Read-service).

   - Individual elements of the Metering Filter Table can be written by the client. The client shall
ensure the integrity of the Metering Filter Table.

**Special considerations for the teach in procedure**

1. Handling of a full Metering Filter Table

In case the size of the Metering Filter Table is insufficient the handling can be manufacturer
specific; it is recommended to generate an error indication and not to overwrite existing table
elements.

2. Deletion of individual table elements

The deletion of individual links is not foreseen in this standard but it shall be possible to reset
the whole table by manufacturer specific means.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 30 f 39

|Array<br>Index|Value|
|---|---|
|1|1st M-Bus address (8 octets)|
|2|2nd M Bus address (8 octets)|
|3|0000000000000000h (void)|
|4|3rd M Bus address (8 octets)|
|…|…|
|N|…|


-----

###### (informative)

## Support of Mode T

Normative reference: EN 13757-4:2011

#### A.1 Physical Layer

**Table 14 – Physical Layer of Mode T**

**Characteristic** **Value or** **Notes**
**applicable**
**standard**

TX centre frequency 868,95 MHz

Bandwidth 500 kHz

Max. Tx frequency tolerance ± 50 kHz This frequency tolerance includes tolerances
due to temperature variations within the
operating temperature range and tolerances
due to crystal aging.

Tx duty cycle max 0,1%

Tx modulation type FSK

FSK deviation nom. ± 50 kHz
min. ± 40 kHz
max. ± 80 kHz,

Tx chip rate 100 kcps

Maximum Tx chip rate tolerance ±10 kcps within header + frame

Maximum Tx jitter per transition ± 3 µs The bit jitter shall be measured at the output of
the microprocessor or encoder circuit.

Tx ERP Typical : 0 dBm
Min : -3 dBm
Max: +14 dBm

Minimal operating temperature 0°C to 45°C KNX Physical Layer parameters shall be met
range on the entire product temperature range

declared by the manufacturer. (e.g. : -10°C to
+70°C for outdoor usage)

Postamble (trailer) length 2 to 8 chips The postamble (trailer) shall consists of at
least of at least two alternating chips. If the last
chip of the CRC was a zero, then the minimum
postamble shall be "10", otherwise it’s shall be
"01".

#### A.2 Data encoding

##### A.2.1 General

"3 out of 6" encoding shall be used for the T1 and T2 mode to achieve an improved efficiency compared
to Manchester encoding. Unique codes shall be used for specific control functions such as preamble,
message start, etc. The encoding shall be performed as specified in Table 11.
Each 4-bit nibble of data shall be encoded as a 6-bit word. Only those words, out of the 64 combinations,
with an equal number of zero’s and one’s and with a minimum of 2 transitions, have been selected.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 31 f 39

|Characteristic|Value or<br>applicable<br>standard|Notes|
|---|---|---|
|TX centre frequency|868,95 MHz||
|Bandwidth|500 kHz||
|Max. Tx frequency tolerance|± 50 kHz|This frequency tolerance includes tolerances<br>due to temperature variations within the<br>operating temperature range and tolerances<br>due to crystal aging.|
|Tx duty cycle max|0,1%||
|Tx modulation type|FSK||
|FSK deviation|nom. ± 50 kHz<br>min. ± 40 kHz<br>max. ± 80 kHz,||
|Tx chip rate|100 kcps||
|Maximum Tx chip rate tolerance|±10 kcps|within header + frame|
|Maximum Tx jitter per transition|± 3 µs|The bit jitter shall be measured at the output of<br>the microprocessor or encoder circuit.|
|Tx ERP|Typical : 0 dBm<br>Min : -3 dBm<br>Max: +14 dBm||
|Minimal operating temperature<br>range|0°C to 45°C|KNX Physical Layer parameters shall be met<br>on the entire product temperature range<br>declared by the manufacturer. (e.g. : -10°C to<br>+70°C for outdoor usage)|
|Postamble (trailer) length|2 to 8 chips|The postamble (trailer) shall consists of at<br>least of at least two alternating chips. If the last<br>chip of the CRC was a zero, then the minimum<br>postamble shall be "10", otherwise it’s shall be<br>"01".|


-----

The lower frequency shall correspond to a chip value of "0".

**Table 15 – Data encoding of Mode T**

**NRZ-Code** **Decimal** **6 chip code** **Decimal** **N° of transitions**
**(binary)** **(binary]**

0000 0 010110 22 4

0001 1 001101 13 3

0010 2 001110 14 2

0011 3 001011 11 3

0100 4 011100 28 2

0101 5 011001 25 3

0110 6 011010 26 4

0111 7 010011 19 3

1000 8 101100 44 3

1001 9 100101 37 4

1010 10 100110 38 3

1011 11 100011 35 2

1100 12 110100 52 3

1101 13 110001 49 2

1110 14 110010 50 3

1111 15 101001 41 4

##### A.2.2 Order of transmission of the encoded data

The data coded as ”3 out of 6” shall be transmitted with most significant bit (MSb = Left bit of the 6-bit
code) first and with the most significant nibble (MSN) first.
Each data byte shall be transmitted with the most significant bit first.

##### A.2.3 Preamble chip sequences 

The total preamble (header + synchronisation) chips sequence for this mode shall be
“n×(01) 0000111101” with n ≥ 19. After this preamble a frame of the format A shall follow.
The chip sequence “0101010101” has been reserved for the transmission preamble so that a receiver
can start sampling at the maximum chip rate and then determine the actual chip rate from these patterns.
Also, the high number of transitions ensures the best detection of the actual chip rate. Within the frame,
the maximum number of contiguous zeroes or ones is four, but neither the pattern "00001111" nor the
pattern "11110000" will ever occur inside a “3 out of 6” encoded chip sequence. The pattern can therefore
be used for synchronisation.
The chip sequence 0101010101 will never occur during a normal chip sequence. The decoder may use
this to detect that the receiver has captured another transmission. In that case, the receiver shall stop the
analysis of the current frame and start detecting a new frame. This “capture detect” feature increases the
communication capacity of the system in presence of many users.

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 32 f 39

|NRZ-Code<br>(binary)|Decimal|6 chip code<br>(binary]|Decimal|N° of transitions|
|---|---|---|---|---|
|0000|0|010110|22|4|
|0001|1|001101|13|3|
|0010|2|001110|14|2|
|0011|3|001011|11|3|
|0100|4|011100|28|2|
|0101|5|011001|25|3|
|0110|6|011010|26|4|
|0111|7|010011|19|3|
|1000|8|101100|44|3|
|1001|9|100101|37|4|
|1010|10|100110|38|3|
|1011|11|100011|35|2|
|1100|12|110100|52|3|
|1101|13|110001|49|2|
|1110|14|110010|50|3|
|1111|15|101001|41|4|


-----

###### (informative)

## The M-Bus compact profile

#### B.1 General
The M-Bus compact profiles are used to transport a series of values with a fix space between each value.
In addition to the compact profile a base value and a base time is required to declare a start time and the
value of the profile. Additional base parameters like the OBIS-declaration may be added as well. The
base time is chained with the compact profile by using the same Storage number in the DIF/DIFE. The
base value and the base parameters are chained with the compact profile by using the same Storage-,
Tariff- and Subunit numbers in the DIF/DIFE of the data record. If one of this numbers differs from the
compact profile, it has to be assumed that the base value or base parameters are missed.

#### B.2 The base value and base parameter
The data point base value is the eldest value of the data series. It shall always exist unless the increment
mode “Absolute value” (00b) is used. In the absence of the base value, the first entry in the profile is used
as the first value of the data series instead. The base value and the base parameters may be used with any
DIF/DIFE and VIF/VIFE.

**Table I.3 — Base value record (connected via Storage-, Tariff-, Subunit number and VIF/ VIFEx)**

DIF/DIFE VIF/VIFEx Base value

#### B.3 The base time
The base time shall be encoded with one of the Types F to J (refer to Annex A in [08]). It corresponds to
the base value, even if it does not exist. Therefore the first entry in the compact profile is always related
to the base time added by one space interval.

**Table I.4 — Base time record (connected via the storage number)**

DIF/DIFE VIF (time/date Type F to J) Time/date value

#### B.4 Structure of the compact profile
The compact profile record itself starts (like each M-bus data point) with a DIF (DIFE) and a VIF (VIFE)
but with an additional (new) orthogonal VIFE signalling a “compact profile”.

The profile record uses a data structure with variable length (DIF= xDh) followed by a length byte with
values between 3 and 191 (0BFh). The whole length is accumulated by two control bytes plus N*(element
length), where N is the number of elements of the profile. In consequence the length of “2” signals an
empty profile.

**Table I.5 — Profile record (connected via Storage-, Tariff-, Subunit number and VIF/VIFEx)**

DIF/DIFE with VIF/VIFEx LVAR Spacing Spacing Oldest …
variable length VIFE = 1Eh/1Fh # bytes control byte value byte Profile
DIF=xDh (03h to BFh) Value

NOTE 1 For the binary integers (low nibble of the DIF=1 to 4, 6 or 7) the incremental modes 01b and 10b use unsigned integers
(data type C), whereas the increment modes 00b and 11b use signed integers (data type B). Refer to Annex A in [08].

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 33 f 39

|DIF/DIFE|VIF/VIFEx|Base value|
|---|---|---|

|DIF/DIFE|VIF (time/date Type F to J)|Time/date value|
|---|---|---|

|DIF/DIFE with<br>variable length<br>DIF=xDh|VIF/VIFEx<br>VIFE = 1Eh/1Fh|LVAR<br># bytes<br>(03h to BFh)|Spacing<br>control byte|Spacing<br>value byte|Oldest<br>Profile<br>Value|…|
|---|---|---|---|---|---|---|


-----

The first byte (Spacing control byte) of this variable length record structure contains the data size of each
individual element in the lower four bits (as in the lower nibble of the DIF definitions, but excluding
variable length elements). The next higher two bits signal the time spacing units (00b = sec, 01b = min,
10b = hours and 11b = days). The highest two bits signal the increment mode of the profile (00b =
absolute value (signed), 01b = positive (unsigned) increments, 10b = negative (unsigned) increments, 11b
= signed difference (deviation of last value – next value)). All values of the profile are initially preset
with the coding for “illegal”, e.g. -128 for signed byte, 255 for unsigned byte, -32768 for signed word etc
(refer to Annex A in [08], type B and C). Invalid values shall also be used in case of an overflow of an
incremental value.

**Table I.6 — Spacing control byte**

bit 7 bit 6 bit 5 bit 4 bit 3 bit 2 bit 1 bit 0

2 [7] 2 [6] 2 [5] 2 [4] 2 [3] 2 [2] 2 [1] 2 [0]

**Table I.7 — Structure of Spacing control byte**

bit 6..7: Increment mode bit 4..5: Spacing unit bit 0..3: Element size

00b= Absolute value 00b= seconds Profile DIF,
low nibble only, but except
01b= Increments 01b= minutes
0Dh and except 0Fh

10b= Decrements 10b= hours

11b= Signed difference 11b= days/month

After the Space control byte follows the Space value byte (single byte) giving the number of the time spacing units between the profile values. It allows between 1 and 250 time units (s,m,h,d) as time spacing.
The values 251, 252 and 255 are reserved. To be able to additionally code monthly and half-monthly
profile spacing, the value 253 is used for half-monthly spacing and the value 254 is used for monthly
spacing. Both are used together with the spacing unit “days/month”. Spacing unit 0 is used to code a list
of values which are not spaced in time. This could be any type of table with up to 4 columns.

**Table I.8 — Spacing value byte**

**Spacing** **Spacing** **Meaning**
**value** **unit**

0 00b-11b[ a] Elements of an array, not spacing in time.

1-250 all Number of days, hours, minutes or seconds between values

251 all Reserved

252 all Reserved

253 00b-10b Reserved;
11b a half month between values

254 00b Reserved
01b Six full months between values
10b Three full months between values
11b a full month between values

255 all Reserved

a The spacing unit is used to address up to 4 columns. If one column needed only the spacing unit 00b shall be used. When several columns
are needed the spacing unit describes the concerned column number by formular spacing unit +1 (e.g. spacing unit 01b indicates colomn 2).

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 34 f 39

|bit 7|bit 6|bit 5|bit 4|bit 3|bit 2|bit 1|bit 0|
|---|---|---|---|---|---|---|---|
|2 7|2 6|2 5|2 4|2 3|2 2|2 1|2 0|

|bit 6..7: Increment mode|bit 4..5: Spacing unit|bit 0..3: Element size|
|---|---|---|
|00b= Absolute value|00b= seconds|Profile DIF,<br>low nibble only, but except<br>0Dh and except 0Fh|
|01b= Increments|01b= minutes|01b= minutes|
|10b= Decrements|10b= hours|10b= hours|
|11b= Signed difference|11b= days/month|11b= days/month|

|Spacing<br>value|Spacing<br>unit|Meaning|
|---|---|---|
|0|00b-11b a|Elements of an array, not spacing in time.|
|1-250|all|Number of days, hours, minutes or seconds between values|
|251|all|Reserved|
|252|all|Reserved|
|253|00b-10b<br>11b|Reserved;<br>a half month between values|
|254|00b<br>01b<br>10b<br>11b|Reserved<br>Six full months between values<br>Three full months between values<br>a full month between values|
|255|all|Reserved|
|a <br>The spacing unit is used to address up to 4 columns. If one column needed only the spacing unit 00b shall be used. When several columns<br>are needed the spacing unit describes the concerned column number by formular spacing unit +1 (e.g. spacing unit 01b indicates colomn 2).|a <br>The spacing unit is used to address up to 4 columns. If one column needed only the spacing unit 00b shall be used. When several columns<br>are needed the spacing unit describes the concerned column number by formular spacing unit +1 (e.g. spacing unit 01b indicates colomn 2).|a <br>The spacing unit is used to address up to 4 columns. If one column needed only the spacing unit 00b shall be used. When several columns<br>are needed the spacing unit describes the concerned column number by formular spacing unit +1 (e.g. spacing unit 01b indicates colomn 2).|


-----

These first two fixed bytes are followed by the oldest value of the profile, the next oldest value etc. until
the end of the variable length structure is reached. Note that if each profile value uses a DIF- data format
with a length of more than one byte, each individual profile value is in the “least significant byte first”
order.

#### B.5 Types of Compact profile
The M-Bus supports two types of compact profiles.

   - “Compact profile with registers” for the transport of a limited number of values with an
assigned register number (e.g. recent value)

   - “Compact profile without registers” for the transport of an unlimited number of values as a
series with no assignment to a register (e.g. load profile)

The definition of both compact profile types is identical with an exception in the use of the Storage
number. The transmission of several profiles (e.g. for two tariffs) in parallel is possible, but it requires a
different coding in the DIF/DIFE or the VIF/VIFE e.g. by the use of different Tariff numbers. As long as
the Storage numbers are identical, all compact profiles are related to the same base time.

##### B.5.1 Compact profile with registers (orthogonal VIFE=1Eh)
This compact profile has to be selected if the assignment of a historical value to a cumulation register is
required.

The first requested register number is coded by the storage number which is used for the base time, the
base value and the compact profile. The first value inside the compact profile is related to the second
requested register number, the second value to the third register and so on. To support up to 125 registers,
a fix coding with a DIF and two DIFE’s shall always be used.

A data series may also contain non periodic entries e.g. in the case of a changed device status. Such a case
can be transmitted by chaining several profiles (see in example).

EXAMPLE 01 absolute profile of monthly consumption values (Tariff 1) of an electricity meter

**Table I.9 — Example of compact profile with registers: Plain data**

**Event** **OBIS-Code** **Date/Time** **Value**

periodic value 1.8.1*32 01.01.2010 00:00 150 kWh

periodic value 1.8.1*33 01.02.2010 00:00 100 kWh

periodic value 1.8.1*34 01.03.2010 00:00 130 kWh

non periodic value 1.8.1*35 25.03.2010 13:12 90 kWh

periodic value 1.8.1*36 01.04.2010 00:00 50 kWh

periodic value 1.8.1*37 01.05.2010 00:00 160 kWh

**Table I.10 — Example of compact profile with registers: M-Bus data records**

**Data point type** **Stor.** **Tariff** **M-Bus data record**

Base Time #32 T0 86h 80h 01h 6Dh 00h 00h A0h 41h 11h 35h

Base value #32 T1 84h 90h 01h 03h F0h 49h 02h 00h

Profile 1 #32 T1 8Dh 90h 01h 83h 1Eh 0Ah 04h FEh A0h 86h 01h 00h
(2 values: #33;#34) D0h FBh 01h 00h

Base Time #35 T0 C6h 81h 01h 6Dh 0Bh 0Ch 8Dh 59h 13h 0Ch

Base value #35 T1 C4h 91h 01h 03h 90h 5Fh 01h 00h

Base Time #36 T0 86h 82h 01h 6Dh 00h 00h 80h 41h 14h 0Dh

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 3 f 39

|Event|OBIS-Code|Date/Time|Value|
|---|---|---|---|
|periodic value|1.8.1*32|01.01.2010 00:00|150 kWh|
|periodic value|1.8.1*33|01.02.2010 00:00|100 kWh|
|periodic value|1.8.1*34|01.03.2010 00:00|130 kWh|
|non periodic value|1.8.1*35|25.03.2010 13:12|90 kWh|
|periodic value|1.8.1*36|01.04.2010 00:00|50 kWh|
|periodic value|1.8.1*37|01.05.2010 00:00|160 kWh|

|Data point type|Stor.|Tariff|M-Bus data record|
|---|---|---|---|
|Base Time|#32|T0|86h 80h 01h 6Dh 00h 00h A0h 41h 11h 35h|
|Base value|#32|T1|84h 90h 01h 03h F0h 49h 02h 00h|
|Profile 1<br>(2 values: #33;#34)|#32|T1|8Dh 90h 01h 83h 1Eh 0Ah 04h FEh A0h 86h 01h 00h<br>D0h FBh 01h 00h|
|Base Time|#35|T0|C6h 81h 01h 6Dh 0Bh 0Ch 8Dh 59h 13h 0Ch|
|Base value|#35|T1|C4h 91h 01h 03h 90h 5Fh 01h 00h|
|Base Time|#36|T0|86h 82h 01h 6Dh 00h 00h 80h 41h 14h 0Dh|


-----

Profile 2 (1 value: #37) #36 T1 8Dh 92h 00h 83h 1Eh 06h 04h FEh 00h 71h 02h 00h

##### B.5.2 Compact profile without registers (orthogonal VIFE=1Fh)
The compact profiles without registers shall start with the Storage number #8. They may use a flexible
number of DIF’s and DIFE’s. Chained compact profiles without registers use (unlike the compact profiles
with registers) the next higher Storage number. The use of the Storage number #0 is not permitted for
compact profiles without registers.

EXAMPLE 02 incremental load profile; 3 hourly volume values after midnight coded with BCD.

**Table I.11 — Example of compact profile without registers: Plain data**

Base value 01.01.2010 00:00 12300,0 m[3]

Oldest profile value 01.01.2010 01:00 12300,3 m[3]

Second oldest value 01.01.2010 02:00 12300,5 m[3]

Third oldest value 01.01.2010 03:00 12301,6 m[3]

**Table I.12 — Example of compact profile without registers: M-Bus data records**

**Data point type** **Stor.** **Tariff M-Bus data record**

Base Time #8 T0 84h 04h 6Dh 00h 20h 41h 11h

Base value #8 T0 8Bh 04h 15h 00h 30h 12h

Profile #8 T0 8Dh 04h 95h 1Fh 05h 69h 01h 03h 02h 11h

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 36 f 39

|Data point type|Stor.|Tariff|M-Bus data record|
|---|---|---|---|
|Base value|#36|T1|84h 92h 01h 03h 50h C3h 00h 00h|
|Profile 2 (1 value: #37)|#36|T1|8Dh 92h 00h 83h 1Eh 06h 04h FEh 00h 71h 02h 00h|

|Base value|01.01.2010 00:00|12300,0 m3|
|---|---|---|
|Oldest profile value|01.01.2010 01:00|12300,3 m3|
|Second oldest value|01.01.2010 02:00|12300,5 m3|
|Third oldest value|01.01.2010 03:00|12301,6 m3|

|Data point type|Stor.|Tariff|M-Bus data record|
|---|---|---|---|
|Base Time|#8|T0|84h 04h 6Dh 00h 20h 41h 11h|
|Base value|#8|T0|8Bh 04h 15h 00h 30h 12h|
|Profile|#8|T0|8Dh 04h 95h 1Fh 05h 69h 01h 03h 02h 11h|


-----

(informative)

## Example of a partial encrypted telegram

**Example for heat cost allocator with RF-Adapter**
Device type Heat cost allocation
Manufacturer QDS (4493h)
Serial number of Radio unit (BCD) 11223344
Serial number of Meter (BCD) 55667788
Version 85
Status (Low Power/Battery low) 4
current consumption value 1234 HCA units
set date 30.04.2007
consumption at set date 23456 HCA units
current temperature at sensor 25 °C

**AES key according to FIPS 197 (LSB first):**
= manu. spec. at least 8 bytes unique for each meter
= 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F

**AES CBC initial vector according to FIPS 197 (LSB**
**first):**
= M Field + A Field + 8 bytes Acces No
= 93 44 88 77 66 55 55 08 00 00 00 00 00 00 00 00

**Table 16 – Telegram of a Heat cost allocator (wireless M-Bus)**

**SND_NR (wM-Bus)**

**wM-Bus frame** **Heat cost allocator example**

**Bytes** **[hex]** **Bytes** **[hex]**
**Byte No** **Field name Content**
**plain** **AES coded**

**1** L Field Length of data (46 bytes) 29h 29h

**2** C Field 44h (means Send - No Reply) 44h 44h

**3** M Field Manufacturer code 93h 93h

**4** M Field Manufacturer code 44h 44h

**5** A Field Serial No LSB (BCD) 44h 44h

**6** A Field Serial No (BCD) 33h 33h

**7** A Field Serial No (BCD) (= 11223344) 22h 22h

**8** A Field Serial No MSB (BCD) 11h 11h

**9** A Field Version (or Generation number) 55h 55h

**10** A Field Device type (Medium=HCA) 08h 08h

**11** CRC 1 6Ch 6Ch

**12** CRC 1 B1h B1h

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 3 f 39

|Table 16 – Telegram of a Heat cost allocator (wireless M-Bus)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|**SND_NR (wM-Bus)**|**SND_NR (wM-Bus)**|**SND_NR (wM-Bus)**|**SND_NR (wM-Bus)**|**SND_NR (wM-Bus)**|**SND_NR (wM-Bus)**|
|||**wM-Bus frame**|**Heat cost allocator example**|**Heat cost allocator example**||
|**Byte No**|**Field name**|**  Content**|**Bytes**<br>**[hex]**<br>**plain**|**Bytes**<br>**[hex]**<br>**AES coded**||
|**1 **|L Field|Length of data (46 bytes)|29h|29h|Linklayer (DLL)|
|**2 **|C Field|44h (means Send - No Reply)|44h|44h|44h|
|**3 **|M Field|Manufacturer code|93h|93h|93h|
|**4 **|M Field|Manufacturer code|44h|44h|44h|
|**5 **|A Field|Serial No LSB (BCD)|44h|44h|44h|
|**6 **|A Field|Serial No (BCD)|33h|33h|33h|
|**7 **|A Field|Serial No (BCD) (= 11223344)|22h|22h|22h|
|**8 **|A Field|Serial No MSB (BCD)|11h|11h|11h|
|**9 **|A Field|Version (or Generation number)|55h|55h|55h|
|**10**|A Field|Device type (Medium=HCA)|08h|08h|08h|
|**11**|CRC 1||6Ch|6Ch|6Ch|
|**12**|CRC 1||B1h|B1h|B1h|


-----

Table 16 (continued)

**SND_NR (wM-Bus)**

**wM-Bus frame** **Heat cost allocator example**

**Bytes** **[hex]** **Bytes** **[hex]**
**Byte No** **Field name Content**
**plain** **AES coded**

**13** CI Field 72h means 12 bytes header 72h 72h

**14** Meter-ID Serial No LSB (BCD) 88h 88h

**15** Meter-ID Serial No (BCD) 77h 77h

**16** Meter-ID Serial No (BCD) (= 55667788) 66h 66h

**17** Meter-ID Serial No MSB (BCD) 55h 55h

**18** Meter-Man. Meter Manufacturer code 93h 93h

**19** Meter-Man. Meter Manufacturer code 44h 44h

**20** Meter-Vers. Version (or Generation number) 55h 55h

**21** Meter-Dev. Device type (Medium=HCA) 08h 08h

**22** Access No. Transmission counter 00h 00h

**23** Status M-Bus state contents errors and alerts 04h 04h

**24** Conf.word NNNNCCHHb (1 encr. block) 00h 10h

**25** Conf.word BAS0MMMMb (unidir., AES) 00h 05h

**26** AES-Verify Encryption verification 2Fh 00h

**27** AES-Verify Encryption verification 2Fh DFh

**28** DR1 DIF (6 digit BCD) 0Bh E2h

**29** CRC 2 25h 27h

**30** CRC 2 CCh F9h

**31** DR1 VIF (HCA-units) 6Eh A7h

**32** DR1 Value LSB 34h 82h

**33** DR1 Value ( = 001234 HCA-Units) 12h 14h

**34** DR1 Value MSB 00h 6Dh

**35** DR2 DIF (Data type G, StorageNo 1) 42h 15h

**36** DR2 VIF (Date) 6Ch 13h

**37** DR2 Value LSB FEh 58h

**38** DR2 Value MSB ( = 30.04.2007) 04h 1Ch

**39** DR3 DIF (6 digit BCD, StorageNo 1) 4Bh D2h

**40** DR3 VIF (HCA-units) 6Eh F8h

**41** DR3 Value LSB 56h 3Fh

**42** DR3 Value ( = 023456 HCA-Units) 34h 39h

**43** DR3 Value MSB 02h 04h

**44** DR4 DIF (1 Byte integer) 01h 01h

**45** DR4 VIF (Temperature at Heating) 5Bh 5Bh

**46** DR4 Value ( = 25 Grad Celsius) 19h 19h

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 38 f 39

|SND NR (wM-Bus)<br>_|Col2|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|
|||**wM-Bus frame**|**Heat cost allocator example**|**Heat cost allocator example**|||
|**Byte No**|**Field name**|**  Content**|**Bytes**<br>**[hex]**<br>**plain**|**Bytes**<br>**[hex]**<br>**AES coded**|||
|**13**|CI Field|72h means 12 bytes header|72h|72h|Application layer (APL)|Application layer (APL)|
|**14**|Meter-ID|Serial No LSB (BCD)|88h|88h|88h|88h|
|**15**|Meter-ID|Serial No (BCD)|77h|77h|77h|77h|
|**16**|Meter-ID|Serial No (BCD) (= 55667788)|66h|66h|66h|66h|
|**17**|Meter-ID|Serial No MSB (BCD)|55h|55h|55h|55h|
|**18**|Meter-Man.|Meter Manufacturer code|93h|93h|93h|93h|
|**19**|Meter-Man.|Meter Manufacturer code|44h|44h|44h|44h|
|**20**|Meter-Vers.|Version (or Generation number)|55h|55h|55h|55h|
|**21**|Meter-Dev.|Device type (Medium=HCA)|08h|08h|08h|08h|
|**22**|Access No.|Transmission counter|00h|00h|00h|00h|
|**23**|Status|M-Bus state contents errors and alerts|04h|04h|04h|04h|
|**24**|Conf.word|NNNNCCHHb (1 encr. block)|00h|10h|10h|10h|
|**25**|Conf.word|BAS0MMMMb (unidir., AES)|00h|05h|05h|05h|
|**26**|AES-Verify|Encryption verification|2Fh|00h|||
|**27**|AES-Verify|Encryption verification|2Fh|DFh|DFh|DFh|
|**28**|DR1|DIF  (6 digit BCD)|0Bh|E2h|E2h|E2h|
|**29**|CRC 2||25h|27h|DLL|DLL|
|**30**|CRC 2||CCh|F9h|F9h|F9h|
|**31**|DR1|VIF (HCA-units)|6Eh|A7h|AES-Encrypted Block 1|Application layer (APL)|
|**32**|DR1|Value  LSB|34h|82h|82h|82h|
|**33**|DR1|Value ( = 001234 HCA-Units)|12h|14h|14h|14h|
|**34**|DR1|Value MSB|00h|6Dh|6Dh|6Dh|
|**35**|DR2|DIF  (Data type G, StorageNo 1)|42h|15h|15h|15h|
|**36**|DR2|VIF  (Date)|6Ch|13h|13h|13h|
|**37**|DR2|Value LSB|FEh|58h|58h|58h|
|**38**|DR2|Value MSB  ( = 30.04.2007)|04h|1Ch|1Ch|1Ch|
|**39**|DR3|DIF  (6 digit BCD, StorageNo 1)|4Bh|D2h|D2h|D2h|
|**40**|DR3|VIF (HCA-units)|6Eh|F8h|F8h|F8h|
|**41**|DR3|Value  LSB|56h|3Fh|3Fh|3Fh|
|**42**|DR3|Value ( = 023456 HCA-Units)|34h|39h|39h|39h|
|**43**|DR3|Value MSB|02h|04h|04h|04h|
|**44**|DR4|DIF  (1 Byte integer)|01h|01h|Plain|Plain|
|**45**|DR4|VIF (Temperature at Heating)|5Bh|5Bh|5Bh|5Bh|
|**46**|DR4|Value ( = 25 Grad Celsius)|19h|19h|19h|19h|


-----

Table 16 _(continued)_

**SND_NR (wM-Bus)**

**wM-Bus frame** **Heat cost allocator example**

**Bytes** **[hex]** **Bytes** **[hex]**
**Byte No** **Field name Content**
**plain** **AES coded**

**47** CRC 3 11h 61h

**48** CRC 3 9Ah 09h

©C i h 2006 2022 A i i A li i i ifi S d d 01 03 08 39 f 39

|SND NR (wM-Bus)<br>_|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|||**wM-Bus frame**|**Heat cost allocator example**|**Heat cost allocator example**||
|**Byte No**|**Field name**|**  Content**|**Bytes**<br>**[hex]**<br>**plain**|**Bytes**<br>**[hex]**<br>**AES coded**||
|**47**|CRC 3||11h|61h|DLL|
|**48**|CRC 3||9Ah|09h|09h|


-----

