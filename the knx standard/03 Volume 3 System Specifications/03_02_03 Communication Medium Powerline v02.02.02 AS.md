# System Specifications

## Communication Media

 Powerline 

Summary

This document specifies the medium specific Physical Layer and Data
Link Layer services for the Powerline medium.

Version 02.02.02 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0 AS 2001.07.02 Finalisation of Approved Standard.
1.1 AS 2008.12.16 Finalisation of Approved Standard v1.1.
1.1.01 AS 2009.10.08 Editorial update.
1.2.00 WD 2011.01.18 Preparation for update.
2.00.00 DP 2011.10.21 Extension to PL110+.
Preparation of the Draft Proposal.
2.01.00.DV 2011.11.02 Preparation of the Draft for Voting.
02.02.01 2013.10.23 Editorial update.
02.02.02 2013.10.29 Editorial update.
Preparation for the inclusion in the KNX Specifications v2.1.

#### References

[01] Chapter 3/1/2 “Glossary”

[02] Chapter 3/3/2 “Data Link Layer General”

[03] Chapter 8/2/3 “PL110 Physical – and Data Link Layer tests”

Filename: 03_02_03 Communication Medium Powerline v02.02.02 AS.docx
Version: 02.02.02
Status: Approved Standard
Save date: 2013.10.29
Number of pages: 74

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 2 f 74

|Version|Date|Modifications|
|---|---|---|
|1.0 AS|2001.07.02|Finalisation of Approved Standard.|
|1.1 AS|2008.12.16|Finalisation of Approved Standard v1.1.|
|1.1.01 AS|2009.10.08|Editorial update.|
|1.2.00 WD|2011.01.18|Preparation for update.|
|2.00.00 DP|2011.10.21|Extension to PL110+.<br>Preparation of the Draft Proposal.|
|2.01.00.DV|2011.11.02|Preparation of the Draft for Voting.|
|02.02.01|2013.10.23|Editorial update.|
|02.02.02|2013.10.29|Editorial update.<br>Preparation for the inclusion inthe KNXSpecifications v2.1.|


-----

#### Contents

###### 1 Scope ........................................................................................................................................ 5

 2 Normative references ............................................................................................................. 6

 3 Definitions and abbreviations ............................................................................................... 7 3.1 Definitions ...................................................................................................................... 7 3.1.1 Definition Home and Building Electronic Systems classes ................................ 7 3.1.2 Definition Differential mode ............................................................................... 7 3.1.3 Definition Coupler .............................................................................................. 7 3.1.4 Definition PL110 ................................................................................................ 7 3.1.5 Definition PL110+ .............................................................................................. 7 3.2 Abbreviations .................................................................................................................. 7

 4 Requirements for HBES Class 1, Powerline PL110 ............................................................ 8 4.1 Physical Layer type Powerline PL110 ............................................................................ 8 4.1.1 Transmission medium ......................................................................................... 9 4.1.2 Medium Attachment Unit (MAU) .................................................................... 10 4.1.3 Installation topology ......................................................................................... 12 4.1.4 Installation requirements ................................................................................... 12 4.1.5 Surge protection ................................................................................................ 13 4.1.6 PL Physical Layer services and protocol .......................................................... 13 4.1.7 Features of Powerline PL110 Physical Layer ................................................... 14 4.2 Data Link Layer type Powerline 110 ............................................................................ 17 4.2.1 Name ................................................................................................................. 17 4.2.2 Domain Address/Individual Address/Group Address ...................................... 17 4.2.3 Frame formats ................................................................................................... 18 4.2.4 Data Link Layer protocol .................................................................................. 23 4.2.5 Data Link Layer Services.................................................................................. 27 4.2.6 Parameters of Layer-2 ....................................................................................... 29 4.2.7 The Layer-2 of a Repeater ................................................................................ 29 4.2.8 The Layer-2 of a Media Coupler ...................................................................... 29 4.2.9 State Machine of Layer-2.................................................................................. 29

 5 Requirements for HBES Class 1, Powerline PL110+ ....................................................... 30 5.1 Physical Layer type Powerline PL110+ ....................................................................... 30 5.1.1 General .............................................................................................................. 30 5.1.2 Transmission medium ....................................................................................... 32 5.1.3 Medium Attachment Unit (MAU) .................................................................... 32 5.1.4 Installation topology ......................................................................................... 43 5.1.5 Installation requirements ................................................................................... 43 5.1.6 Surge protection ................................................................................................ 43 5.1.7 PL Physical Layer services and protocol .......................................................... 43 5.1.8 Features of Powerline PL110+ Physical Layer ................................................. 44 5.2 Data Link Layer type Powerline 110+ .......................................................................... 64 5.2.1 Domain Address/Individual Address/Group Address ...................................... 64 5.2.2 Frame formats ................................................................................................... 64 5.2.3 Data Link Layer protocol .................................................................................. 66 5.2.4 Data Link Layer services .................................................................................. 70 5.2.5 Parameters of Layer-2 ....................................................................................... 72 5.2.6 The Layer-2 of a Repeater ................................................................................ 72 5.2.7 The Layer-2 of a Media Coupler ...................................................................... 72

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 3 f 74


-----

###### 5.2.8 State Machine of Layer-2.................................................................................. 72 5.3 OFDM Properties .......................................................................................................... 73

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 4 f 74


-----

### 1 Scope
This KNX specification defines the mandatory and optional requirements for the medium specific
Physical and Data Link Layer of power line Class 1 in its variations of PL110 and PL110+.

PL110+ defines a compatible extension to PL110.

Data Link Layer interface and general definitions, which are medium independent, are given in [02].

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 5 f 74


-----

### 2 Normative references
The following referenced documents are indispensable for the application of this document. For dated
references, only the edition cited applies. For undated references, the latest edition of the referenced
document (including any amendments) applies.

EN 50090-1 - [1)] _Home and Building Electronic Systems (HBES)_
_Part 1: Standardization structure_

EN 50090-2-2 1996 _Home and Building Electronic Systems (HBES)_
_Part 2-2: System overview - General technical requirements_

EN 50090-4-1 2004 _Home and Building Electronic Systems (HBES)_
_Part 4-1: Media independent layers - Application layer for HBES Class 1_

EN 50090-4-2 2004 _Home and Building Electronic Systems (HBES)_
_Part 4-2: Media independent layers - Transport layer, network layer and_
_general parts of Data Link Layer for HBES Class 1_

EN 50090-5-1 2005 _Home and Building Electronic Systems (HBES)_
_Part 5-1: Media and media dependent layers - Power line for HBES Class 1_

EN 50090-5-2 2004 _Home and Building Electronic Systems (HBES)_
_Part 5-2: Media and media dependent layers - Network based on HBES_
_Class 1, Twisted Pair_

EN 50065-1 2001 _Signalling on low-voltage electrical installations in the frequency range 3 kHz_
_to 148,5 kHz_
_Part 1: General requirements, frequency bands and electromagnetic_
_Disturbances_

EN 50065-4-6 2004 _Signalling on low-voltage electrical installations in the frequency range 3 kHz_
_to 148,5 kHz_
_Part 4-6: Low voltage decoupling filters - Phase coupler_

EN 50065-7 2001 _Signalling on low-voltage electrical installations in the frequency range_
_3 kHz to 148,5 kHz_
_Part 7: Equipment impedance_

EN 50160 1999 _Voltage characteristics of electricity supplied by public distribution systems_

EN 55016-1-2 2004 _Specification for radio disturbance and immunity measuring apparatus and_
_methods_
_Part 1-2: Radio disturbance and immunity measuring apparatus - Ancillary_
_equipment - Conducted disturbances (CISPR 16-1-2:2003)_

EN 61643-11 2002 _Low-voltage surge protective devices. Part 11: Surge protective devices_
_connected to low-voltage power systems - Requirements and tests_
_(IEC 61643-1:1998 + corrigendum Dec. 1998, modified)_

1) At draft stage.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 6 f 74


-----

### 3 Definitions and abbreviations

#### 3.1 Definitions
For the purposes of this part the terms and definitions given in EN 50090-1 (some of which are repeated
below for convenience) and the following apply.

##### 3.1.1 Definition Home and Building Electronic Systems classes
Home and Building Electronic Systems (HBES) specification Class 1 refers to simple control and
command. Class 2 refers to Class 1 plus simple voice and stable picture transmission. Class 3 refers to
Class 2 plus complex video transfers.

##### 3.1.2 Definition Differential mode
Power line signals are injected between phase and neutral [EN 50065-1].

##### 3.1.3 Definition Coupler
A Coupler connects one Subnetwork with another Subnetwork.

##### 3.1.4 Definition PL110
PL110 is a power line signalling using Spread Frequency Shift Keying modulation which is operating in
the frequency band 95 kHz - 125 kHz according to EN 50065-1.

##### 3.1.5 Definition PL110+
PL110+ is a power line signalling using PL110 to realize a first transmission channel and using
Orthogonal Frequency Division Multiplex modulation to realize a second transmission channel. Both
interoperable transmission channels are operating in the frequency band 95 kHz - 125 kHz according to
EN 50065-1.

#### 3.2 Abbreviations

Please refer to [01] for the common, communication medium independent abbreviations and acronyms.

CS Check Sequence
CTRL Control field
DPSK Differential Phase Shift Keying
D2PSK Differential 2 Phase Shift Keying (also called DBPSK)
D4PSK Differential 4 Phase Shift Keying (also called DQPSK)
D8PSK Differential 8 Phase Shift Keying
DBPSK Differential Binary Phase Shift Keying
DQPSK Differential Quadrature Phase Shift Keying
FEC Forward Error Correction
FSK Frequency Shift Keying
MAU Medium Attachment Unit
MSK Minimum Shift Keying
NAK Not acknowledge
NPCI Network Protocol Control Information
OFDM Orthogonal Frequency Division Multiplex
SFSK Spread Frequency Shift Keying
SPD Surge Protection Devices

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 7 f 74


-----

### 4 Requirements for HBES Class 1, Powerline PL110

#### 4.1 Physical Layer type Powerline PL110
In this clause the Physical Layer characteristics of the medium powerline are specified. According to the
used frequency range this Physical Layer shall be called PL110. The main characteristics of the PL110
Physical Layer shall be:

   - a spread frequency shift keying signalling, and
   - asynchronous transmission of data packets, and
   - symbols globally synchronised to the mains frequency, and
   - half duplex bidirectional communication.

The installation of the powerline depends on its initial use as an electrical power distribution network.
Physical properties of the medium powerline are influenced significantly by the topology of the network,
the connected loads and the cabling.

Electrical wiring in the house shall be in compliance with the current national regulations. Powerline
communication is described in EN 50065-1 / Class122 (general requirements, frequency allocation and
electromagnetic disturbances).

The physical topology of the powerline network is normally fixed by the electric power distribution
network. The structure of this network can be 1- or 3-phase. The rated voltage between one phase and the
neutral is 230 V. Signals are injected between phase and neutral. According to EN 50065-1 this kind of
coupling is called “differential mode“.

General characteristics of the Physical Layer type PL110 are given in Figure 1.

**Characteristic** **Description**

Medium electrical power distribution network
Topology installation dependant (e.g. linear, star, tree)
bit rate 1 200 bps
mains frequency 50 Hz (acc. EN 50160)
number of PL110 Domain Addresses 255
number of Individual Addresses 32 767
modulation type spread frequency shift keying (SFSK)
frequency for logical “0“ 105,6 kHz ± 100 ppm
frequency for logical “1“ 115,2 kHz ± 100 ppm
Bit duration 833,33 µs
Maximum output level 122 dBµV[ a]
Input sensitivity ≤ 60 dBµV[ b]
Device class class 122[ c]
Compliance to standards EN 50065-1
a Measurement according EN 50065-1.
b With artificial network according EN 55016 1-2 [(50 µH + 5 Ω) / 50 Ω].
c Equipment manufactured to class 116 according to EN 50065-1 will now meet the
requirements of class 122 and may be marked class 116 provided that its output complies with
the previous standard.

**Figure 1 - Features of Physical Layer Type PL110**

The logical structure of the Physical Layer PL110 entity is shown in Figure 2. Each PL110 device
includes one.

The PL110 entity consists of three blocks:

1. Connector
2. Medium Attachment Unit (MAU)
3. Error correction.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 8 f 74

|Characteristic|Description|
|---|---|
|Medium|electricalpower distribution network|
|Topology|installation dependant(e.g. linear, star, tree)|
|bit rate|1 200 bps|
|mains frequency|50 Hz(acc. EN 50160)|
|number of PL110 Domain Addresses|255|
|number of Individual Addresses|32 767|
|modulation type|spread frequency shift keying (SFSK)|
|frequency for logical “0“|105,6 kHz± 100 ppm|
|frequency for logical “1“|115,2 kHz± 100ppm|
|Bit duration|833,33µs <br>|
|Maximum output level|122 dBµV~~ a~~|
|Input sensitivity|≤ 60 dBµV b <br>|
|Device class|class 122~~ c~~|
|Compliance to standards|EN 50065-1|
|a Measurement according EN 50065-1.<br>b With artificial network according EN 55016 1-2 [(50 µH + 5Ω) / 50Ω].<br>c <br>Equipment manufactured to class 116 according to EN 50065-1 will now meet the<br>requirements of class 122 and may be marked class 116 provided that its output complies with<br>theprevious standard.|a Measurement according EN 50065-1.<br>b With artificial network according EN 55016 1-2 [(50 µH + 5Ω) / 50Ω].<br>c <br>Equipment manufactured to class 116 according to EN 50065-1 will now meet the<br>requirements of class 122 and may be marked class 116 provided that its output complies with<br>theprevious standard.|


-----

Local Layer -1 User

Ph_Data.req Ph_Data.ind

Error correction

Synchroni

-sation

character character
encoding evaluation

Txd Dump SCLK C_Data

Bit to signal Correlator Optional

encoding power
supply

Transmitter Receiver

Connector

**Figure 2 - Structure of the MAU (Example)**

##### 4.1.1 Transmission medium


octets

octets + error
correction

bit stream

signal at
MAU

medium with
analog signal

|Ph_Data.req|Col2|Ph_Data.ind|
|---|---|---|
|Ph_Data.req|Ph_Data.req|Ph_Data.ind|
|Optional<br>power-<br>supply<br>Synchroni<br>-sation<br>Transmitter<br>Receiver<br>Connector<br>Correlator<br>Bit to signal<br>encoding<br>Txd<br>Dump<br>SCLK<br>C_Data<br>Error correction<br>character<br>encoding<br>character<br>evaluation|Optional<br>power-<br>supply<br>Synchroni<br>-sation<br>Transmitter<br>Receiver<br>Connector<br>Correlator<br>Bit to signal<br>encoding<br>Txd<br>Dump<br>SCLK<br>C_Data<br>Error correction<br>character<br>encoding<br>character<br>evaluation|Optional<br>power-<br>supply<br>Synchroni<br>-sation<br>Transmitter<br>Receiver<br>Connector<br>Correlator<br>Bit to signal<br>encoding<br>Txd<br>Dump<br>SCLK<br>C_Data<br>Error correction<br>character<br>encoding<br>character<br>evaluation|
||||


###### 4.1.1.1 Requirements for protection against electrical shocks and connectors
The PL110 devices are connected to the 230 V installation network. The requirements for protection
against electrical shocks for human beings (and animals) and connectors must be considered within the
complete device and are not subject to the Physical Layer description.

These requirements are fixed in the installation and equipment standards (safety standards).

###### 4.1.1.2 Powerline cables
The requirements for powerline cables are defined by the use as installation wires according to national
regulations. Normally the type of cable, the connected loads and the topology of the network is not
known. Some widespread cables are listed in Figure 3. In contrast to the theoretical values, the impedance
at one network access point is determined more by the load than by the cabling.

Typical cables for fixed electrical installation are „thermoplastic-insulated and sheathed cable“ (NYM,
VDE 0250 part 204) or „PC-insulated flat cable, overall covering vulcanised rubber“ (NYIF VDE 0250 /
01.51), sheathed metal-clad wiring cable with PVC-insulated cores sheet-zinc cover with additional PVCjacket (NYRUZY, VDE 0250 / 01.51).

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 9 f 74


-----

|Feature|Description|
|---|---|
|Cable type|NYM, NYIF, NYRUZY|
|Cross-section|1,5 mm² up to 4 mm²|
|Used wires|Phase and neutral|
|Resistance|25 µΩ/m to 50 mΩ/m|
|Capacity|15 pF/m to 100 pF/m|
|Inductance|1,2 µH/m to 1,5 µH/m|


**Figure 3 - Example of typical Cable Characteristics**

NOTE 1 The use of shielded cables and cables with cross sections greater than 35 mm[2] can influence powerline signalling
significantly!


##### 4.1.2 Medium Attachment Unit (MAU)

###### 4.1.2.1 Definition and power supply
The Medium Attachment Unit shall convert the frequency-coded signals into values representing logical
ones and zeros and vice versa. In parallel, a power supply circuit may be connected to the medium. Signal
converter and power supply shall be independent from each other. The requirements of the power supply
are as follows:


Nominal values: RxD: 5 V @ 30 mA / 24 V @  1 mA

TxD: 5 V @ 30 mA / 24 V @ 10 mA – 50 mA (dependent on impedance)


The power supply of the MAU may be internal or external.

Connection to the mains may be insulated or not.


###### 4.1.2.2 Signal encoding

A signal of 105,6 kHz for a period of 8333, µs corresponds to a logical „0“, a signal of 115,2 kHz for a


period of 8333, µs corresponds to logical „1“. See Figure 4 for illustration.

###### symbolic: 105,6 kHz symbolic: 115,2 kHz
 1.8 V


###### 0

 - 1.8 V


###### time


###### 833 µs


###### 833 µs

|symbolic: 105,6 kHz|symbolic: 115,2 kHz|
|---|---|
|||
|||
|||

|833 µs|833 µs|
|---|---|


###### logical "0" logical "1"


**Figure 4 - Signal encoding**

These NRZ-signals are superimposed to the 230 V/50 Hz mains AC-voltage. The maximum amplitude of
the signal must be limited to 122 dBµV, measured with CISPR 16-1 artificial mains network according
EN 50065-1. The sensitivity of the receiver shall be better than 60 dBµV, measurements according [03].


© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 10 f 74


-----

For lowest disturbances, the change between adjacent symbols shall be phase continuous.

###### 4.1.2.3 Overlapping of logical "0" or "1"
Overlapping of logical "0" or "1"-symbols, e.g. the simultaneous transmission of equal information at the
same time from several MAUs (e.g. common ACK), will result in fade-in / fade-out effects. Due to slight
frequency deviations between several MAUs the signal will fade periodically with the difference of the
MAU-frequencies. In PL110 Powerline communication this case is avoided by setting a unique Group
Response Flag to each assigned Group Address.


###### 4.1.2.4 Overlapping of logical "0" and "1"
Overlapping of logical "0" and "1"-symbols, e.g. the simultaneous transmission of different information at
the same time from several MAU's, will result in a collision. While there is no indication of collision for
any MAU, the probability of this state is minimised by special bus access mechanism.

2,0


1,5

1,0


0,5

0,0


-0,5

-1,0

|Col1|Col2|
|---|---|
||-<br><br>|


-1,5

-2,0


**t [µs]**


**Figure 5 - Idealised overlapping of 105,4 kHz and 115,2 kHz**

###### 4.1.2.5 Impedance of the MAU
To limit the influence of connected MAUs on the characteristic of the Powerline bus the impedance in
receiving mode must be high. For signal injection with minimum losses, the impedance in transmitting
mode must be low. The limits for PL110 are:


RxD: Zin ≥ 80 Ω @ 100 kHz to 125 kHz

TxD: Zout ≤ 20 Ω @ 100 kHz to 125 kHz

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 11 f 74


-----

###### 4.1.2.6 PL bus coupling


fuse


###### CK


phase


neutral

|T<br>1<br>R<br>1<br>D<br>1|t<br>r<br>a<br>n<br>s<br>c<br>e<br>I<br>v<br>e<br>r|
|---|---|


CK: coupling capacitor, X2-type
T1: coupling transformer
D1: transient voltage protection diode
R1: resistor for discharging CK (optional)


**Figure 6 - Example of a PL inductive coupling circuit**

Electrical coupling of signals to the Powerline has to be done by special circuits. In general, capacitive or
inductive coupling can be used. Inductive coupling may be combined with electrical insulation or not.

##### 4.1.3 Installation topology
The structure of an electrical installation can be linear, star, ring, tree or any combination. Referring to the
electrical distribution board as the centre, the topology normally has a star structure. Each branch of the
electrical distribution network can have its own different structure.

distribution panel

circuit
breaker

optional
leakage **..** branches

meter fuse circuit **.** of free

protector topology

|meter|distribution panel<br>circuit<br>breaker<br>optional<br>leakage .<br>fuse .<br>circuit .<br>protector<br>circuit<br>breaker|Col3|
|---|---|---|
|meter|fuse<br>circuit<br>breaker<br>circuit<br>breaker<br>distribution panel<br>**.**<br>**.**<br>**.**<br>optional<br>leakage<br>circuit<br>protector|bran<br>of<br>topo|
|meter|fuse<br>circuit<br>breaker<br>circuit<br>breaker<br>distribution panel<br>**.**<br>**.**<br>**.**<br>optional<br>leakage<br>circuit<br>protector||


**Figure 7 - Example of a typical PL topology**

If voltage interruptions in one branch occur, the behaviour of the devices shall be as follows:

< 200 ms: continuous operation

≥ 200 ms: Power-On-Reset (POR), no idle

##### 4.1.4 Installation requirements
The installation of the powerline network is subject to national and international regulations and
standards. Additional instructions about the communication aspects of the network shall be given in the
manufacturers instruction sheet.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 12 f 74


-----

##### 4.1.5 Surge protection
Primary or secondary protection can be used. SPD´s of class B (for primary protection) or of class C (for
secondary protection) according to draft DIN VDE 0675-6 have to be provided.

##### 4.1.6 PL Physical Layer services and protocol

###### 4.1.6.1 Physical Layer services at the Data Link Layer / Physical Layer interface
There are two services at the data link / Physical Layer interface:

Ph_Data.req (p_class, p_data)

Ph_Data.ind (p_class, p_data)

Ph_Data.req shall be called by the Data Link Layer. Each Ph_Data.req() service primitive shall transfer a
single octet to the Physical Layer. class parameter -_Class shall contain timing information.

p_class: start_of_sys.prio_frame: transmit Training Seq, Preamble I, Preamble II and
character after at least 58 bit times idle line since the last
bit of the proceeding Data Link Layer message cycle.
start_of_of_prio_frame: transmit Training Seq, Preamble I, Preamble II and
character after at least 74 + (n*16)  0 ≤ n ≤ 6 bit times
idle line since the last bit of proceeding data link message
cycle.
start_of_repeated_frame: transmit Training Seq, Preamble I, Preamble II and
character after exactly 40 bit times since the last bit of the
proceeding L_Data request.
inner_frame_char: transmit character without any time gap after the last bit of
the proceeding character.
ack_char: transmit Training Seq, Preamble I, Preamble II and
character after exactly 4 bit times after the last bit of the
proceeding L_Data request.
nak_char: transmit Training Seq, Preamble I, Preamble II and
character after exactly 22 bit times after the last bit of the
proceeding L_Data request.
p_data: octet: the octet to be expanded for 4 error correction to a
character and to be transmitted.[1]

Ph_Data.ind shall be called by the Physical Layer. Each Ph_Data.ind() service primitive shall transfer a
single octet to the Data Link Layer.

Ph_Data.ind (p_class, p_data)

p_class: start_of_frame: after detection of preamble I + preamble II a character is
received
inner_frame_char: Character received immediately after the proceeding bit
ack_char: after detection of preamble I + preamble II a character is
received
bit_error: uncorrectable bit error detected in received character.
Receiving terminated.
p_data: octet: the data octet error corrected and extracted from the
received character

———————

1 Due to the fact that there is no collision-detection during transmission the return value of a
Ph_Data.con will always be "Ok".

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 13 f 74


-----

##### 4.1.7 Features of Powerline PL110 Physical Layer

###### 4.1.7.1 PL110 character overview
Each PL110 frame shall start with a training sequence and a preamble. Training sequence and preamble
shall not be coded. Each Data Link Layer octet shall be coded to a 12 bit character (8 bits data + 4 bits
error correction).

Transmission direction

7 6 5 4 3 2 1 0 E 3 E 2 E 1 E 0

Octet Error Correction

**Figure 8 - Character**

During transmission and reception no time gaps are allowed between the bits of a character.

###### 4.1.7.2 Frame structure
The datagram shall consist of training sequence, preamble I / II, LPDU+CS and the Domain Address.
Frame Check Sequence CS shall only be calculated with respect to TP LPDU, which is identical to the
Twisted Pair LPDU. This shall lead to identical CS for Physical Layer Twisted Pair 1 and Powerline 110.

Training Domain
Preamble I Preamble II LPDU CS
sequence Address

4 bit 2 x 8 the checksum CS is calculated only with this range 8 + 4 bit
bi

**Figure 9 - Structure of a Datagram**

Training ACK / NACK
Preamble I Preamble II
sequence character

4 bit 2 x 8 bit 8 + 4 bit

**Figure 10 - Structure of an Acknowledge Frame**

###### 4.1.7.3 The Training Sequence
After switching into the status start_of_pdu the Physical Layer shall transmit a training sequence of 4 bit
duration. The bit sequence is [0 1 0 1].

###### 4.1.7.4 The Preamble Transmission start
The next 16 bit shall be the preamble I and II. This preamble shall allow the receiver to start. The
sequence of each preamble shall be B0h.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 14 f 74

|7|6|5|4|3|2|1|0|E 3|E 2|E 1|E 0|
|---|---|---|---|---|---|---|---|---|---|---|---|
|Octet|Octet|Octet|Octet|Octet|Octet|Octet|Octet|Error Correction|Error Correction|Error Correction|Error Correction|

|Preamble I|Preamble II|
|---|---|

|LPDU|CS|
|---|---|
|the checksum CS is calculated only with this range||

|Preamble I|Preamble II|
|---|---|


-----

###### 4.1.7.5 Faulty transmission detection
The error correction of the PL110 Physical Layer shall be done by Powerline (12,8) block - coding.
Generation is calculated with the following matrix:

1 0 0 0 0 0 0 0

 
0 1 0 0 0 0 0 0
 
0 0 1 0 0 0 0 0
 

###### 0 0 0 1 0 0 0 0

 
0 0 0 0 1 0 0 0
 
0 0 0 0 0 1 0 0 E

###### G =   =  

0 0 0 0 0 0 1 0 T 
 
0 0 0 0 0 0 0 1
 
0 0 0 0 1 1 1 1
 

###### 0 1 1 1 0 0 0 1

 
1 0 1 1 0 1 1 0
 
1 1 0 1 1 0 1 0

**Figure 11 - Generation Matrix of PL110**


Coding shall result in an overhead of 4 bit referring to one octet. The hamming - distance of this coding
shall be 3 (min). With this (12,8) - coding it shall be possible to correct every single bit error in a 12 bit
character and to recognise some multiple errors.

The code shall be calculated by determining redundancy r as the function of the transformation matrix T
and the octet x:

#### r = T x⋅

For decoding an estimation r` of the redundancy dependant on the incoming data d must be performed.
The estimated redundancy shall be subtracted by the received redundancy du. The result shall be a
syndrome with the value of s indicating the column of the error. Correction can be done by inverting this
bit. For an error - free transmission the difference of r´ and du is 0.


#### d = d d

##### 0 u


##### T


#### r ′ = T d⋅


##### 0


#### s = d −′r
##### u

value of the
3 5 6 7 9 10 11 12 8 4 2 1 13 14 15 0
syndrome

Errorerror location 1 2 3 4 5 6 7 8 9 10 11 12 error

free

**Figure 12 - Table of Syndromes related to errors**

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 15 f 74

|value of the<br>syndrome|3|5|6|7|9|10|11|12|8|4|2|1|13|14|15|0|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|error location|1|2|3|4|5|6|7|8|9|10|11|12|error|error|error|Error-<br>free|


-----

For all calculations, GF2 arithmetic shall to be used:

###### a a b a + b a × b a − b b

 1 1 0 1 0 1

 0 1 1 0 1 0

 1 0 1 0 1 −

 0 0 0 0 0 −

**Figure 13 - Operations of Galois-Field GF2**

**Example**

###### x := [1 0 1 0 1 0 1 0]T octet to be transmitted

 0 0 0 0 1 1 1 1 0
    
 0 1 1 1 0 0 0 1 1
 r = T x⋅ =   ⋅ x =                              redundancy
 1 0 1 1 0 1 1 0 1    
 1 1 0 1 1 0 1 0 1


###### c = [ x,r ]T = [1 0 1 0 1 0 1 0 0 1 1 1] character to be transmitted

↓ Transmission ↓ error

###### d = [ d o, d u ]T = [1 0 0 0 1 0 1 0 0 1 1 1] received character
 r = T do = ... = 0′ ⋅ [ 0 0 1                            estimated redundancy]T
 s = d u −′ =r [0 1 1 0] T = 610

Referring to Figure 12 a syndrome value of 6 corresponds to an error in column 3. Inverting bit number 3
leads to the corrected frame.

###### 4.1.7.6 Synchronisation

The mains zero-crossing period is 10 ms in single phase systems and 3 3. ms in triple phase systems (for
nominal mains frequency). Dividing the 3 3. ms time base by an integer leads to the set of possible bit
widths (and bit rates respectively) in triple phase systems:

#### bit rate = n ⋅ 300 bps n ∈Ν

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 16 f 74


-----

350,000

250,000

150,000

50,000

**Volt** -50,000


-150,000

-250,000

-350,000


0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

delay Td _Tbit_

**time [msec]**

|000<br>000<br>000<br>000<br>000<br>000<br>000|0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 2<br>delay T T<br>d bit|
|---|---|

|Col1|Col2|
|---|---|


delay Td


**Figure 14 - Three Phase System**

The start of a Transmission cannot be placed exactly at the mains zero-crossing due to internal delays of
the coupling circuit. The delay must not exceed the value shown below.

Td ≤ 40 µs

In order to compensate deviations of mains frequencies PL110 MAUs shall detect the zero crossing of the
mains voltage and measure the current mains frequency. If the mains frequency (received by the
described way) is placed within the permissible tolerance the bit width shall be calculated by the
following formula:


_Tbit_


###### actual bit width


###### 1 actual mains frequency = 1 nominal mains frequency [*1200]


With the help of the first transmitted bit the transmitter shall fix its bit width to the nominal bit width of

###### 833 3. µsec. Receiving the first preamble the receiver shall also fix its bit width to the nominal bit width
of 833 3. µsec and shall correct the beginning of the following bit by:

12 * (actual bit width - nominal bit width)

#### 4.2 Data Link Layer type Powerline 110

##### 4.2.1 Name
The Data Link Layer described in this clause is called Data Link Layer type Powerline 110.

##### 4.2.2 Domain Address/Individual Address/Group Address
Every PL110 BAU shall have a PL110 Domain Address. PL110 BAUs sharing the same PL110 Domain
Address will belong to the same installation. The PL110 Domain Address shall be a two octet number.
The most significant octet shall be set to zero, the lower significant octet shall contain the number of the
PL110 Domain Address.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 17 f 74


-----

Every PL110 BAU shall belong to Domain Address zero, i.e. request frames with Domain Address zero
shall be system-broadcasts.

**PL110 Domain Address**

Octet 0 Octet 1

7 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

0 0 0 0 0 0 0 0 number

**Figure 15 – PL110 Domain Address**

Every PL110 BAU, i.e. a Coupler or an end device shall have a unique Individual Address in a network.
Please refer to [02] for the specification of the Individual Address. The Device Address shall be unique
within a Subnetwork. PL110 Media Couplers shall have the Device Address zero, i.e. PL110 end devices
may have the Device Address 1 to 255. The Subnetwork Address shall be unique within a network.

Please refer to [02] for the specification of the Group Address.

**Group Address**

Dest Addr. (high) Dest Addr. (low)

Octet 0 Octet 1

7[2] 6 5 4 3 2 1 0 7 6 5 4 3 2 1 0

Main Group Sub Group

**Figure 16 - Group Address**

The Group Address shall be a 15 bit value that doesn’t need to be unique. An end device may have more
than one Group Address.

Every end device shall belong to group zero, i.e. request frames with Group Address zero as Destination
Address shall be broadcasts.

##### 4.2.3 Frame formats

###### 4.2.3.1 General
There shall be two frame formats: the L_Data frame and the Acknowledge frame. Other frame formats
shall not be received.

Each frame shall be sent as a sequence of characters. The character that corresponds to octet 0 shall be
sent firstly, the octet with the highest number shall be the last character sent. The individual bits of an
octet shall be sent in descending order, i.e. the most significant bit (bit 7) shall be sent firstly. The
different frame formats shall differ in the control field.

###### 4.2.3.2 L_Data frame
Two L_Data frame formats shall be available on the PL110 medium:

1. the L_Data_Standard frame format, and
2. the L_Data_Extended frame format.

The usage of the different formats shall depend on the value of the frame format parameter to the Data
Link Layer (see [02]). The L_Data_Standard frame format shall be used if the frame format parameter is
0, otherwise the L_Data_Extended frame format shall be used.

———————

2 The most significant bit is the group-responder-flag. If this bit is set all incoming messages with this destination
Group Address are acknowledged. There shall be at least one end device within one network with this bit set.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 18 f 74

|PL110 Domain Address|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 1|Octet 1|Octet 1|Octet 1|Octet 1|Octet 1|Octet 1|Octet 1|
|7|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|0|0|0|0|0|0|0|0|number|number|number|number|number|number|number|number|

|Group Address|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Dest Addr. (high)|Dest Addr. (high)|Dest Addr. (high)|Dest Addr. (high)|Dest Addr. (high)|Dest Addr. (high)|Dest Addr. (high)|Dest Addr. (high)|Dest Addr. (low)|Dest Addr. (low)|Dest Addr. (low)|Dest Addr. (low)|Dest Addr. (low)|Dest Addr. (low)|Dest Addr. (low)|Dest Addr. (low)|
|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 1|Octet 1|Octet 1|Octet 1|Octet 1|Octet 1|Octet 1|Octet 1|
|72|6|5|4|3|2|1|0|7|6|5|4|3|2|1|0|
|Main Group|Main Group|Main Group|Main Group|Main Group|Sub Group|Sub Group|Sub Group|Sub Group|Sub Group|Sub Group|Sub Group|Sub Group|Sub Group|Sub Group|Sub Group|


-----

###### 4.2.3.3 L_Data_Standard frame format

**4.2.3.3.1 Structure**
The structure of the variable length L_Data_Standard frame shall comply with Figure 17 below.

|CTRL|SA|DA|AT,<br>NPCI,<br>LG|TPDU (L Data)<br>_|FCS|DOA|
|---|---|---|---|---|---|---|


8 16 16 8 8 8

**Figure 17 - Frame fields with standard fieldname abbreviations**

|Octet 0|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 1|Col10|Col11|Col12|Col13|Col14|Col15|Octet 2|Col17|Col18|Col19|Col20|Octet 3|Col22|Col23|Col24|Octet 4|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Octet 5|Col34|Col35|Col36|Col37|Col38|Col39|Octet 6|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Octet 7|Col49|Col50|Col51|Col52|Col53|Col54|Col55|Octet 8|Col57|Col58|Col59|Col60|Col61|Col62|Col63|...|Octet 21|Col66|Col67|Col68|Col69|Col70|Col71|Octet 22|Col73|Col74|Col75|Col76|Col77|Col78|Col79|Octet 23 (max.)|Col81|Col82|Col83|Col84|Col85|Col86|Col87|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)||||||||||||||||||||||||||||||||||||||||Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Domain Address|Domain Address|Domain Address|Domain Address|Domain Address|Domain Address|Domain Address|Domain Address|
|1|0|r|1|p1|p0|0|0||||||||||||||||||||||||||L|SDU|||||||||||||||||||||||||LS|D|U||||||||||||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|||||||||length|length|length|length|length|length|length|length|||||||||data<br>NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|data<br>NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|data<br>NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|data<br>NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|data<br>NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|data<br>NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|data<br>NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|data<br>NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI|||||||applic|applic|applic|applic|applic|applic|applic|applic|ation user data||||||||||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI|||||||data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|ap|ap|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>device address|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|<br>"<br>"<br>"<br>"<br>"<br>"<br>"<br>|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|ap|ap|||||||||||||||||||||||||||||||||||||||||
|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-3**|**L-3**|**L-2**|**L-2**|**L-2**|**L-2**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|


**Figure 18 - L_Data_Standard frame format**

**4.2.3.3.2 Control field**
The first character of each frame shall be the Control field (CTRL). The Control field shall contain the
information about the Data Link Layer service, its priority, the Repeat Flag containing the information
whether the LPDU is a repeated one or not and the Frame Type flag, as specified in Figure 19.


Control field
7 6 5 4 3 2 1 0

FT 0 r 1 p1 p0 0 0 L_Data frame

x x 0 0 x x 0 0 Acknowledge frame


FT = 0 : L_Data_Extended frame
FT = 1 : L_Data_Standard frame

r = 0 : repeated L_Data frame
r = 1 : not repeated L_Data frame

|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|
|<br>Frame type||<br>repeat flag||<br>priority|<br> <br>priority|||
|FT|0|r|1|p1|p0|0|0|
|<br>x|<br> x|<br>  0|<br>   0|<br>    x|<br>     x|<br>      0|<br>       0|


p1 p0
0 0 system priority
1 0 urgent priority
0 1 normal priority
1 1 low priority

|1|p0|
|---|---|
|<br>0|<br>0|
|1|0|
|<br>0|<br> 1|
|<br>1|<br> 1|


**Figure 19 - Control field**

The Control field shall indicate the type of the request frame: L_Data_Standard frame, L_Data_Extended
frame, or Acknowledgment frame.


The Frame Type flag shall be mapped to the Frame Type Parameter of the L_Data-service. (Please refer
to the specification of the L_Data-service in [02] clause “Usage of Frame Format”.)

**FTP parameter** **FT flag**
**in L_Data-service** **in L_Data-frame**

0 1 The L_Data frame shall be an L_Data_Standard frame.

1 0 The L_Data frame shall be an L_Data_Extended frame.

|FTP parameter<br>in L Data-service<br>_|FT flag<br>in L Data-frame<br>_|Col3|
|---|---|---|
|<br>0|<br>1|The L_Data frame shall be an L_Data_Standard frame.|
|1|0|<br>The L_Data frame shall be an L_Data_Extended frame.|


© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 19 f 74


-----

If Frame Type flag FT = 0 in CTRL field, an Extended Control Field CTRLE shall follow on octet 1.

The two priority bits of the Control field shall control the priority of the frame.

Repeated L_Data frames shall have the Repeat flag set to zero, non-repeated ones shall have it set to one.

**4.2.3.3.3 Source Address**
The octets one and two of an L_Data_Standard frame shall be the high and low octet of the Source
Address. This shall be the Individual Address of the end device that causes the transmission of the frame.

**4.2.3.3.4 Destination Address and Address Type (AT)**
The Destination Address (octets three and four) shall define the end device(s) that shall receive the
L_Data_Standard frame. For L_Data_Standard frames, the Destination Address can either be an
Individual Address (AT = 0) or a Group Address (AT = 1), depending on the Address Type flag (AT) of
octet five.

**4.2.3.3.5 Length**
The L_Data_Standard frame shall have a variable length; the maximum length shall be 24 characters. The
Length field shall indicate the number of characters (0 characters to 15 characters) transported by the
L_Data_Standard frame starting with the seventh octet. That means that an L_Data_Standard frame with
length 0 shall end after the sixth octet.

**4.2.3.3.6 Check Octet**
The last but one octet of an L_Data_Standard frame shall be the Check Octet. This octet shall make an
odd parity over the set of corresponding bits belonging to the preceding octets of the frame. This shall
represent a logical NOT XOR function over the individual bits of the preceding octets of the frame.

Bit 7 6 5 4 3 2 1 0
Octet 0 b0,7 b0,6 b0,5 b0,4 b0,3 b0,2 b0,1 b0,0
Octet 1 b1,7 b1,6 b1,5 b1,4 b1,3 b1,2 b1,1 b1,0
Octet 2 b2,7 b2,6 b2,5 b2,4 b2,3 b2,2 b2,1 b2,0

…

Octet N bN,7 bN,6 bN,5 bN,4 bN,3 bN,2 bN,1 bN,0
F 1 1 1 1 1 1 1 1

Check octet p7 p6 p5 p4 p3 p2 p1 p0

**Figure 20 - Check Octet**

**4.2.3.3.7 Domain Address**
The last octet of an L_Data_Standard request frame shall represent the lower significant octet of the
Domain Address. It shall determine the devices that shall receive the frame.

###### 4.2.3.4 L_Data_Extended frame format

**4.2.3.4.1 Use and frame format**
The L_Data_Extended frame format shall be used for:

- messages with APDU > 15 octets (long messages) that do not fit into L_Data_Standard frame
because of its limited length, and

- messages with extended addressing capabilities used in LTE-Mode.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 20 f 74

|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|
|b0,7|b0,6|b0,5|b0,4|b0,3|b0,2|b0,1|b0,0|
|b1,7|b1,6|b1,5|b1,4|b1,3|b1,2|b1,1|b1,0|
|b2,7|b2,6|b2,5|b2,4|b2,3|b2,2|b2,1|b2,0|
|||||||||

|b<br>N,7|Col2|b<br>N,6|Col4|b<br>N,5|Col6|b<br>N,4|Col8|b<br>N,3|Col10|b<br>N,2|Col12|b<br>N,1|Col14|b<br>N,0|Col16|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|1|1|1|1|1|1|1|1|1|1|1|1|1|1|1|1|
|||||||||||||||||

|p<br>7|p<br>6|p<br>5|p<br>4|p<br>3|p<br>2|p<br>1|p<br>0|
|---|---|---|---|---|---|---|---|


-----

The L_Data_Extended frame shall not be used instead of the L_Data_Standard frame if the encoding
capabilities of L_Data_Standard frame are sufficient (e.g. for short frames).

The structure of the variable length L_Data_Extended frame shall comply with Figure 21 below.

|CTRL|CTRLE|SA|DA|LG|TPDU (L Data)<br>_|FCS|DOA|
|---|---|---|---|---|---|---|---|


8 8 16 16 8 8 8

**Figure 21 - Frame fields with standard fieldname abbreviations**

|Octet 0|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 1|Col10|Col11|Col12|Col13|Octet 2|Col15|Col16|Col17|Col18|Col19|Col20|Octet 3|Col22|Col23|Col24|Col25|Col26|Col27|Octet 4|Col29|Col30|Col31|Col32|Col33|Col34|Octet 5|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Octet 6|Col44|Col45|Col46|Col47|Col48|Col49|Col50|Octet 7|Col52|Col53|Col54|Col55|Col56|Col57|Col58|Octet 8|Col60|Col61|Col62|Col63|Col64|Col65|Octet 9|Col67|Col68|Col69|Col70|Col71|Col72|...|Octet N|Col75|Col76|Col77|Col78|Col79|Col80|Col81|Octet N+1|Col83|Col84|Col85|Col86|Col87|Col88|Col89|Octet N+2 (max.73)|Col91|Col92|Col93|Col94|Col95|Col96|Col97|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Ext.Ctrl Field|Ext.Ctrl Field|Ext.Ctrl Field|Ext.Ctrl Field|Ext.Ctrl Field|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Length|Length|Length|Length|Length|Length|Length|Length|TPCI|TPCI|TPCI|TPCI|TPCI|TPCI|TPCI|TPCI|||||||||||||||...|||||||||Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Domain Address|Domain Address|Domain Address|Domain Address|Domain Address|Domain Address|Domain Address|Domain Address|
|0|0|r|1|p1|p0|0|0||LSDU||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||LS|DU|||||||||||||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl||||||||length|length|length|length|length|length|length||||||||||NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|Domain Address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>||||||application u|application u|application u|application u|application u|application u|application u|ser data|||||||||||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>||||||data/APCI<br>|data/APCI<br>|data/APCI<br>|data/APCI<br>|data/APCI<br>|data/APCI<br>|data/APCI<br>|...<br>|||||||||||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|appl|appl|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|ication control field|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 64; start with Octet 8)<br>"<br>"<br>"<br>"<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>appl|appl|appl||||||||||||||||||||||||||||||||||||||||
|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-3|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-4|L-4|L-4|L-4|L-4|L-4|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|


**Figure 22 - L_Data_Extended frame format**

**4.2.3.4.2 Control field (CTRL)**
The common encoding of the Control field is specified in clause 4.2.3.3.2 above.


**4.2.3.4.3 Extended Control field (CTRLE)**
If the Frame Type flag FT = 1 in the CTRL field, the extended control field CTRLE shall follow octet 1.

The Extended Control fields shall contain the Extended Frame Format parameter EFF and the Hop Count
parameter. Bit 7 shall contain the Destination Address Type (AT) flag g/i.


Details are specified in [02].

Extended Control Field
7 6 5 4 3 2 1 0


AT r r r t t t t

0 r r r 0 0 0 0 Point-to-point addressed L_Data_Extended frame
1 r r r 0 0 0 0 Standard Group Addressed L-Data_Extended frame
1 r r r 0 1 x x LTE-Mode extended address type
All other codes are reserved for future use

|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|
|<br>Address Type|<br>Hop Count|<br>Hop Count|<br>Hop Count|<br>Extended<br>Frame Format<br>(EFF)|<br>Extended<br>Frame Format<br>(EFF)|<br>Extended<br>Frame Format<br>(EFF)|<br>Extended<br>Frame Format<br>(EFF)|
|AT|r|r|r|t|t|t|t|
|<br>0|<br> r|<br>  r|<br>   r|<br>    0|<br>     0|<br>      0|<br>       0|
|<br>1|<br> r|<br>  r|<br>   r|<br>0|<br>0|<br>0|<br>0|
|1|r|r|r|0|1|x|x|
|||||||||


**Figure 23 - Extended Control Field**

**4.2.3.4.4 Source Address (SA)**
The octets one and two of an L_Data_Extended frame shall be the high and lower octet of the Source
Address. This shall be the Individual Address of the device that causes the initial transmission of the
frame.


**4.2.3.4.5 Destination Address (DA)**
In the L_Data_Extended frame, the type of the Destination Address shall depend next to the Address
Type (AT) also on the Extended Frame Format parameter (EFF) of the Extended Control field (CTRLE).
With EFF = 0000b the same Address Type shall be used as in the L_Data_Standard frame format. With
EFF ≠ 0000b dedicated address formats and tables shall be used.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 21 f 74


-----

**4.2.3.4.6 Length (LG)**
The L_Data_Extended frame shall have a variable length. The length information shall indicate the
number of characters (0 characters to 64 characters) transported by the L_Data_Extended frame starting
after the TPCI octet (octet 8). This means that a L_Data_Extended frame with length 0 shall end after the
TPCI octet.

The length information shall be encoded by the combination of the Frame Type field (FT) in the Control
Field and the Length field, as specified in [02].

NOTE 2 The possible encoding space (0 to 255) of the Length field is larger than the allowed usable range of 0 to 64. This
limitation of the APDU to 64 octets results from limitations of the Physical Layer (probability for collisions, acceptable response time
for all devices).

**4.2.3.4.7 Check Octet**
This shall be the same as in the L_Data_Standard frame format (see 4.2.3.3.6).

**4.2.3.4.8 Domain Address**
This shall be the same as in the L_Data_Standard frame format (see 4.2.3.3.7).

###### 4.2.3.5 Acknowledge frame

Octet 0

Acknowledge

7 6 5 4 3 2 1 0

1 1 0 0 1 1 0 0 ACK

0 0 0 0 1 1 0 0 NAK

**Figure 24 - Acknowledge frame format**

The Acknowledge frame format shall consist of a single character that shall be used to acknowledge an
L_Data frame.

The Acknowledgement frame shall comply with the coding is specified in Figure 24.Any other than the
shown figures shall be treated as NAK. Figure 24 shows the corresponding codes of the acknowledgment.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 22 f 74

|ame|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|Octet 0|
|Acknowledge|Acknowledge|Acknowledge|Acknowledge|Acknowledge|Acknowledge|Acknowledge|Acknowledge|
|7|6|5|4|3|2|1|0|
|1|1|0|0|1|1|0|0|
|0|0|0|0|1|1|0|0|


-----

##### 4.2.4 Data Link Layer protocol

###### 4.2.4.1 Assemble/Disassemble Frame
Before transmitting a frame on the line, the Data Link Layer shall assemble service parameters into an
LPDU.

It shall also ensure the following mapping.

   - The Frame Type shall be calculated from the Frame Format parameter as defined in [02] and put
into FT flag in the CTRL field.

   - For the Extended Frame Format the EFF field shall be taken from the Frame Format parameter
as defined in [02] and put into EFF field in CTRLE.

   - The length information shall be calculated from octet_count parameter and put into Length field
(LG) in octet 5 of the L_Data_Standard frame format or in octet 6 of the L_Data_Extended
frame format.

   - The fields Priority and Repeat flag shall be set in the CTRL field.

   - The Destination Address and LSDU parameters shall be introduced in the frame.

   - The Address Type flag (AT) shall be set in the AT field in octet 5 of the L_Data_Standard
frame format or in the CTRLE field of the L_Data_Extended frame format.

   - The Network Layer information shall be set in octet 5 of the L_Data_Standard frame format or
in the CTRLE field of the L_Data_Extended frame format.

   - Source Address, Domain Address and Check octet shall be introduced.

When receiving a PDU, the Data Link Layer does the reverse operation:

   - It shall disassemble the frame into parameters to be transmitted in an L_Data.ind.

   - It shall regenerate the Address Type from the AT field in octet 5 in case of an L_Data_Standard
formatted frame or in the AT field of the CTRLE field in case of an L_Data_Extended
formatted frame.

   - It shall regenerate the octet_count parameter from the Length field in octet 5 in case of an
L_Data_Standard formatted frame or from the CTRL field and the LG field in case of an
L_Data_Extended formatted frame.

###### 4.2.4.2 Medium Access Control
There is no absolutely collision free multiple access control in a frequency modulated medium. Therefore
PL-BAUs shall use a slotted access technique as described below.

Before a device may start a transmission it shall wait for at least 58 bit times idle line since the last bit of
the preceding Data Link Layer message cycle. The structure of a Data Link Layer message cycle depends
on the architecture of the installation (installation with or without Repeater). In general a Data Link Layer
message cycle consists of a Data Link Layer request frame and a subsequent Data Link Layer
acknowledgment or a subsequent Data Link Layer response frame.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 23 f 74


-----

If several devices want to start a transmission simultaneously, then there is an access conflict. To solve
this conflict a priority dependent time slot system is used:

1. Repetitions shall have the highest priority and shall gain access to the bus before any other
device with a pending transmission request.

2. If the bus is not locked by a repetition, an acknowledgment- or a not acknowledgment-frame,
then a system- or urgent L_Data-request frame shall gain access to the bus.

3. If the bus is not locked by a repetition, system- or urgent L_Data-request frames normal/ low
operational priority request frames shall gain access to the bus. Supposed that most of all
L_Data-request frames are operational priority frames there are 7 time slots chosen at random to
start the transmission.

If a device once gained control of the bus it will continue transmission until the last bit is transmitted.

During reception the Data Link Layer of the receiving device checks if the device is addressed and
controls the immediate acknowledgment mechanism. If a transmission error occurs, the transmitting Data
Link Layer shall repeat the L_Data-request frame. Errors can occur in either direction, i.e. an L_Datarequest frame or an acknowledgment frame can be destroyed.

###### 4.2.4.3 L_Data-request Message Cycle without Repeater
After a specified idle time a PL-BAU shall initiate a message cycle transmitting an L_Data-request frame.
If this L_Data-request is received by another PL-BAU it shall check the consistency of the frame and
whether it is addressed.

After a time gap of 4 bit after the last bit of the L_Data-request frame it shall start the transmission of an
acknowledgment frame. The acknowledgment frame shall have a duration of 32 bit times. By now the
message cycle shall be terminated and the next L_Data-request message cycle may gain access to the bus
after at least 58 bit times after the last L_Data-request frame.

If either the L_Data-request frame or the acknowledgment frame has been destroyed and thus an
acknowledgment frame has not been received within 39 bit times after the last bit of the L_Data-request
frame, the PL-BAU that initiated the message cycle shall start a retransmission with the next bit slot. If
the addressed PL-BAU received the repeated L_Data-request frame properly it shall start the transmission
of its acknowledgment frame after a time gap of 4 bit after the last bit of the repeated L_Data-request
frame. Even if either the repeated L_Data-request frame or the acknowledgment frame has been destroyed
the message cycle shall be terminated. There are no further repetitions. The next L_Data-request message
cycle (system priority) shall not be started after at least 58 bit times after the last bit of the repeated
L_Data-request cycle.

###### 4.2.4.4 L_Data-request Message Cycle with Repeater
After a specified idle time a PL-BAU shall initiate a message cycle transmitting an L_Data-request frame.
If this L_Data-request is received by another PL-BAU it shall check the consistency of the frame and
whether it is addressed. After a time gap of 4 bit after the last bit of the L_Data-request frame it shall start
the transmission of an acknowledgment frame. The acknowledgment frame shall have a duration of 32 bit
times.

If the repeater receives an acknowledgment frame within 39 bit times after the last bit of the L_Datarequest frame it shall not start a repetition of the L_Data-request frame. By now the message cycle shall
be terminated and the next L_Data-request message cycle may gain access to the bus after at least 58 bit
times after the last L_Data-request frame.

If the acknowledgment frame has been destroyed and thus the repeater has not received an
acknowledgment frame within 39 bit times after the last bit of the L_Data-request frame the repeater shall
start a retransmission with the next bit slot. If the addressed PL-BAU received the repeated L_Datarequest frame properly it shall start the transmission of its acknowledgment frame after a time gap of 4 bit
after the last bit of the repeated L_Data-request frame.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 24 f 74


-----

If the repeater does not detect bus access (receiving of at least preamble 1) within 22 bit times after the
last bit of the repeated L_Data-request frame it shall start the transmission of a not acknowledgment
frame to inform the source device that the message cycle is not successful. Even if either the repeated
L_Data-request frame or the acknowledgment frame is destroyed the message cycle shall be terminated.
There shall be no further repetitions. The next L_Data-request message cycle (system priority) shall not
be started after at least 58 bit times after the last bit of the repeated L_Data-request cycle.

###### 4.2.4.5 L_Data-request access Priorities
There are 8 different priority dependent time slots to start the transmission of L_Data-request frames. The
first slot is reserved for system priority L_Data-requests only. The slots 2 to 8 are reserved for operational
priority L_Data-request frames. Each device with a pending operational priority L_Data-request will
choose one slot (2 ≤ selection ≤ 8) by random.

**Start**
(bit times after the

**Slot number** **Priority** last bit of the last

L_Data-request

frame)

0 repeated L_Data-request frame 40

1 system priority 58

operational priority
2 74

Slot I

operational priority
3 90

Slot II

operational priority
4 106

Slot III

operational priority
5 122

Slot IV

operational priority
6 138

Slot V

operational priority
7 154

Slot VI

operational priority
8 170

Slot VII

**Figure 25 - L_Data frame priorities**

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 25 f 74

|Slot number|Priority|Start<br>(bit times after the<br>last bit of the last<br>L Data-request<br>_<br>frame)|
|---|---|---|
|0|repeated L_Data-request frame|40|
|1|<br>system priority|58|
|2|operational priority<br>Slot I|74|
|3|operational priority<br>Slot II|90|
|4|operational priority<br>Slot III|106|
|5|operational priority<br>Slot IV|122|
|6|operational priority<br>Slot V|138|
|7|operational priority<br>Slot VI|154|
|8|operational priority<br>Slot VII|170|


-----

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|Col49|Col50|Col51|Col52|Col53|Col54|Col55|Col56|Col57|Col58|Col59|Col60|Col61|Col62|Col63|Col64|Col65|Col66|Col67|Col68|Col69|Col70|Col71|Col72|Col73|Col74|Col75|Col76|Col77|Col78|Col79|Col80|Col81|Col82|Col83|Col84|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device1|L.Data.req.frame|||||||||||Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||ACK|ACK|ACK|ACK|ACK|ACK|ACK|ACK||||||||||||ACK|ACK|ACK|ACK|ACK|ACK|ACK|ACK|||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Repeater|Repeater|||||||||||Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|Repeated L.Data requ.|||||||NACK|NACK|NACK|NACK|NACK|NACK|NACK|NACK||||||||||||||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device2|Device2||||||||||||||||L.Data r<br>|L.Data r<br>|L.Data r<br>|L.Data r<br>|equest frame<br>sys Prio.|equest frame<br>sys Prio.|equest frame<br>sys Prio.|equest frame<br>sys Prio.|equest frame<br>sys Prio.|||||||||||L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device3|Device3||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device4|Device4|||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device5|Device5||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device6|Device6|||||||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device7|Device7||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device8|Device8|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|L.Data.req.frame<br>low Prio. VI|||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device9|Device9||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|L.Data.req.frame<br>low Prio. VII|||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||0|8||1|6|2|4|3|2|4|0|4|8|5|6||6|4||0|8||1|6||24|3|2|4|0|4|8|5|6||64||72|||8|0|88|||96||104||1|12||120||1|28|1|36||1|44|1|52||1|60|1|68||17|6|1|84|1|9|2|2|00|20|8|||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


**Figure 26 - Timing Diagram of an L_Data-request Frame**

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 26 f 74


-----

###### 4.2.4.6 Checking for correct Request Frames
If the received Domain Address matches the own Domain Address and the Destination Address of a
request frame corresponds to the Individual Address or one of the Group Addresses of a PL-BAU, the
receiver of the frame shall check if the frame is correct. A frame is correct if:

   - every character is correct or at least correctable
   - the Check Octet has the correct value
   - the Control Field has the correct value

The receiver of a frame shall acknowledge a repeated frame. The receiver shall discard it, if it has been
received correctly before. A repeated frame shall have the same Source Address as the preceding frame
(that applies to the repeater, too) with the repeat_flag set to 0.

##### 4.2.5 Data Link Layer Services

###### 4.2.5.1 L_Data Services
The L_Data service is a service, in case of a single destination in the same physical segment it is even an
acknowledged datagram service. The local user of Layer-2 shall prepare an LSDU for the remote user by
filling in the local Individual Address as Source Address and the local Domain Address as source Domain
Address. The local user of Layer-2 shall apply the L_Data.req primitive to pass the LSDU to the local
Layer-2. The local Layer-2 shall accept the service request and shall try to send the LSDU to the remote
Layer-2 with frame format 1. The Destination Address may be an Individual Address or a Group Address
(multicast or broadcast). The local Layer-2 shall pass an L_Data.con primitive to the local user that shall
indicate either a correct or an erroneous data transfer.

Prior to passing the confirmation to the local user, the local Layer-2 shall need an acknowledgment from
the remote Layer-2 (frame format 2). If the acknowledgment is a positive acknowledgment (ACK), the
local Layer-2 shall pass an L_Data.con with l_status = ACK to the local user. If the acknowledge fails the
local Layer-2 shall pass an L_Data.con with l_status = not_ok to the local user. In all other cases, i.e.
acknowledgment is NAK or invalid or time-out after 36 bit times the local Layer-2 shall repeat once after
40 bit times. If it fails, the local Layer-2 shall pass an L_Data.con with l_status = not_ok to the local user.

If the request frame received is correct (see 4.2.4.6 ”Checking for correct Request Frames”), the remote
Layer-2 shall send an acknowledge and shall pass the LSDU with an L_Data.ind primitive to the remote
user. If the request frame received is not correct the remote Layer-2 shall not send an acknowledge.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 27 f 74


-----

L_Data.req( domain_address, destination_address, DAF, priority, lsdu )

domain_address: Source and Destination Domain Address
Destination Address: either an Individual Address or a Group Address
DAF: destination_address flag indicates whether destination_address is an
Individual Address or Group Address
priority: system, urgent, normal or low operational priority
lsdu: this is the user data to be transferred by Layer-2

L_Data.con(l_status)


l_status: ok,
not_ok


requested frame sent successfully
transmission of the frame did not succeed.


L_Data.ind( domain_address, source_address, destination_address, DAF, priority, lsdu )

domain_address: Source and Destination Domain Address
source_address: Individual Address of the end device that requested the L_Data
service
Destination Address: Individual Address of this device or a Group Address of this device
DAF: destination_address flag indicates whether destination_address is an
Individual (0) or Group Address (1)
priority: system, urgent, normal or low operational priority
lsdu: this is the user data that has been transferred by Layer-2

A Coupler (e.g.: a Media Coupler) connects one Subnetwork with another Subnetwork. It has a unique
Individual Address. A Coupler shall acknowledge Layer-2 services and transmits the Layer-2 request
frames to the other side, if the end device associated with the Destination Address of the frame is located
on the other side. Thus receiving an acknowledge does not guarantee that the destination (the end device)
has received the L_Data-request, but it indicates that at least one destination or a Coupler did receive it.

###### 4.2.5.2 L_Sys_Data service
The L_Sys_Data service shall be an unacknowledged datagram service. The local user of Layer-2 shall
prepare a LSDU for the remote user by filling in the local Individual Address as Source Address and the
system-broadcast Domain Address (0000h) as source Domain Address. The local user of Layer-2 shall
apply the L_Sys_Data.req primitive to pass the LSDU to the local Layer-2. The local Layer-2 shall accept
the service request and shall try to send the LSDU to the remote Layer-2 with frame format 1. The
Destination Address shall be a broadcast Group Address. The local Layer-2 shall pass an L_Sys_Data.con
primitive to the local user that shall indicate a correct data transfer. The local Layer-2 shall always repeat
the L_Sys_Data.req once before passing a positive confirmation to the local user.

If the request frame received is correct (see 4.2.4.6 “Checking for correct Request Frames”), the remote
Layer-2 shall pass the LSDU with an L_Sys_Data.ind primitive to the remote user. If the request frame
received is not correct the remote Layer-2 shall not send an acknowledge.

L_Sys_Data.req( system_broadcast, source_address, destination_address, DAF, priority, lsdu )

domain_address: system broadcast Domain Address 0000h
source_address: Individual Address of the end device that requests the L_Data service
destination_address: broadcast Group Address 0000h
DAF: destination_address flag indicates always a Group Address (1)
priority: system, urgent, normal or low operational priority
lsdu: this is the user data to be transferred by Layer-2

L_Data.con(l_status)

l_status: ok: requested frame sent successfully

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 28 f 74


-----

L_Data.ind( system_broadcast, source_address, destination_address, DAF, priority, lsdu )

domain_address: system broadcast domain_address 0000h
source_address: Individual Address of the end device that requested the L_Data
service
destination_address: broadcast Group Address
DAF: destination_address flag indicates a Group Address (1)
priority: system, urgent, normal or low operational priority
lsdu: this is the user data that has been transferred by Layer-2

##### 4.2.6 Parameters of Layer-2
The following parameters influence the behavior of Layer-2 and are required inside Layer-2 in order to
operate correctly:

Domain Address address shared by all devices belonging to the same installation
Individual Address: unique Individual Address of this device
Group Address Table Address Table with Group Address(es) of this end device

##### 4.2.7 The Layer-2 of a Repeater
There are three different modes in Data Link Layer:

1. Data Link Layer without Repeater
2. Data Link Layer with a Repeater
3. Data Link Layer of a Repeater

The Data Link Layer differs in the timing and in the structure of a Data Link Layer message cycle. A
message cycle shall consist of at least an L_Data.request frame followed by an acknowledgement frame.
If the acknowledgement frame fails to come within its timeslot the L_Data.request frame shall be
repeated (depending on the Data Link Layer mode by the PL-BAU itself or by the Repeater) in a
specified timeslot. If the acknowledgement frame fails to come again within its timeslot the repeater shall
transmit a not-acknowledgement frame to signal the loss of the L_Data.request frame.

If a repeater has to repeat a received L_Data.request frame the repeat flag in the control field (transmitted
Octet 0) shall be set to zero.

The Source Address shall not be modified by the Repeater. I.e. the Source Address of the transmitting
PL-BAU shall remain unchanged.

The Repeater is assigned to its Domain Address, i.e. it shall repeat only L_Data.request frames within its
own Domain Address[ 3)].

##### 4.2.8 The Layer-2 of a Media Coupler
To be defined.

##### 4.2.9 State Machine of Layer-2
After power on, a device does not receive or transmit frames. The Layer-2 state machine shall
synchronize to the mains frequency by measuring the time between two zero crossings. After that the
Layer-2 state machine shall be in the idle state where Layer-2 shall work as described in the above
clauses, i.e. receive frames and transmit frames.

———————

3) In addition the Repeater shall consider itself as member of the Domain Address 0000h. Though not
recommended, several Repeaters of adjacent Domain Addresses may be installed within receiving range.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 29 f 74


-----

### 5 Requirements for HBES Class 1, Powerline PL110+
This clause defines the mandatory and optional requirements for the medium specific Physical - and Data
Link Layer of power line Class 1 in its variation of PL110+.

PL110+ defines a compatible extension to PL110 for transmitting higher data rates on a separate
communication channel within the same frequency band.

It shall be noted that a PL110+ device shall fulfil the specification of a PL110 device for FSK signalling
according to clause 4 and additionally shall fulfil the specification according to this clause for OFDM
signalling.

PL110+ devices can communicate with PL110 devices using FSK signalling (see clause 4) and can
communicate with PL110+ devices using PL110 FSK (see clause 4) or OFDM signalling (see clause 5).

The following subclauses specify only the OFDM extension and presuppose that the PL110 specification
is considered for PL110+. These clauses point out the significant differences compared with PL110.
Identical clauses of PL110+ and PL110 are referenced to the corresponding parts of clause 4.

#### 5.1 Physical Layer type Powerline PL110+

##### 5.1.1 General
This clause specifies the Physical Layer characteristics of the PL110+ power line signalling that shall
operate in the frequency band 95 kHz to 125 kHz band as specified in EN 50065-1 and having a nominal
centre frequency of 110 kHz.

The main characteristics of the PL110+Physical Layer shall be the following:

   - up to 9 active OFDM carriers, and
   - differential phase shift keying signalling (DBSK, DQPSK, D8PSK), and
   - asynchronous transmission of data packets, and
   - OFDM symbol raw synchronization to the mains frequency and fine synchronization using an
orthogonal synchronization signal, and
   - half duplex bidirectional communication, and
   - interoperability and full backward compatibility with PL110 (refer to clause 4).

Electrical wiring in the building/home shall be in compliance with the current national regulations. Power
line communication is described in EN 50065-1 / Class122 (general requirements, frequency allocation
and electromagnetic disturbances).

The electric power distribution network normally determines the physical topology of the power line
network. The structure of this network may be 1- or 3-phase. The rated voltage between one phase and
the neutral shall be 230 V. PL110+ signals shall be injected between phase and neutral. According to
EN 50065-1 this kind of coupling is called “differential mode“.

General requirements for the Physical Layer type PL110+ are given in Figure 27.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 30 f 74


-----

|Characteristic|Description|
|---|---|
|Medium|electricalpower distribution network|
|Topology|installation dependant(e.g. linear, star, tree)|
|FSK bit rate|1 200 bps|
|OFDM bit rate|10 800 bps (DBPSK) d <br>21 600 bps (DQPSK) d <br>32 400 bps (D8PSK) d|
|Mains frequency|50 Hz(acc. EN 50160)|
|Number of Domain Addresses|255|
|Number of Individual Addresses|32 767|
|FSK modulation type|spread frequency shift keying (SFSK)|
|OFDM modulation type|DBPSK, DQPSK or D8PSK subcarrier<br>modulation|
|FSK frequency for logical “0“|105,6 kHz± 100ppm|
|FSK frequency for logical “1“|115,2 kHz± 100ppm|
|OFDM frequency f1OFDM|98,4 kHz± 50ppm|
|OFDM frequency f2OFDM|<br>100,8 kHz± 50ppm|
|OFDM frequency f3OFDM|103,2 kHz± 50ppm|
|OFDM frequency f4OFDM|<br>108,0 kHz± 50ppm|
|OFDM frequency f5OFDM|110,4 kHz± 50ppm|
|OFDM frequency f6OFDM|<br>112,8 kHz± 50ppm|
|OFDM frequency f7OFDM|<br>117,6 kHz± 50ppm|
|OFDM frequency f8OFDM|<br>120,0 kHz± 50ppm|
|OFDM frequency f9OFDM|<br>122,4 kHz± 50ppm|
|OFDM preamble frequency fPre|106,8 kHz± 50ppm|
|OFDM synchronization frequency fSync1|<br>109,2 kHz± 50ppm|
|OFDM synchronization frequency fSync2|111,6 kHz± 50ppm|
|FSK Bit duration / OFDM symbol duration|<br>µs<br> 3<br>833,|
|<br>Maximum output level|122 dBµV a|
|Input sensitivity|≤ 60 dBµV b|
|Device class|class 122c|
|Compliance with standards|EN 50065-1|
|a Measurement according to EN 50065-1.<br>b With artificial network according to EN 55016-1-2 [(50 µH + 5Ω) / 50Ω].<br>c Equipment manufactured to Class 116 according to EN 50065-1 will now meet the<br>requirements of class 122 and may be marked class 116 provided that its output complies<br>with the previous standard.<br>d With 9 OFDM carriers active.|a Measurement according to EN 50065-1.<br>b With artificial network according to EN 55016-1-2 [(50 µH + 5Ω) / 50Ω].<br>c Equipment manufactured to Class 116 according to EN 50065-1 will now meet the<br>requirements of class 122 and may be marked class 116 provided that its output complies<br>with the previous standard.<br>d With 9 OFDM carriers active.|


**Figure 27 - General requirements for Physical Layer PL110+**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 31 f 74


-----

The logical structure of the Physical Layer PL110+ entity is shown in Figure 28. Each PL110+ device
includes one.

The PL110+ entity shall consist of three blocks:

1. Connector
2. Medium Attachment Unit (MAU)
3. Error correction.

**Figure 28 - Structure of the MAU PL110+ (example)**

##### 5.1.2 Transmission medium
The PL110+ and PL110 devices shall use the same transmission medium.

The requirements for protection against electrical shocks, connectors and power line cables are identical
to the requirements of PL110. Please refer to clause 4.1.1 with subclauses 4.1.1.1 and 4.1.1.2.

##### 5.1.3 Medium Attachment Unit (MAU)

###### 5.1.3.1 General requirements
The Medium Attachment Unit shall convert the PL110 frequency - coded signals and the OFDM DPSK coded signals into values representing logical ones and zeros and vice versa. The FSK-part shall comply
with the PL110 MAU structure (refer to clause 4.1). In parallel, a power supply circuit may be connected
to the medium. Signal converter and power supply shall be independent from each other. Compliance is
checked by measurement.

The power supply of the MAU may be internal or external.

Connection to the mains may be insulated or not.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 32 f 74


-----

###### 5.1.3.2 Signal encoding

5.1.3.2.1 PL110 FSK
Referring to clause 4.1.2.2, the PL110 FSK signals shall be defined as sine tones for a period of 8333, µs
with the following frequencies:

f1fsk 105,6 kHz

f2fsk 115,2 kHz

**Figure 29 - PL110 FSK frequencies**

The sine tones shall be SFSK modulated. Regarding the signal period, these frequencies shall also be
orthogonal to each other. See Figure 30.

|f1<br>fsk|105,6 kHz|
|---|---|
|f2fsk|115,2 kHz|


„1“ 115,2 kHz

„0“ 105,6 kHz

|Col1|„0“ „0“ „1“|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|||||||
|||||||
|||||||
|||||||


**Figure 30 - Orthogonal SFSK modulation**

The raw data rate with SFSK modulation shall be: Rbit = 1 bit / 833,33 µs = 1200 bit/s

These NRZ-signals shall be superimposed to the 230 V/50 Hz mains AC-voltage. The maximum
amplitude of the signal shall be limited to 122 dBµV, measured with CISPR 16-1 artificial mains network
according EN 50065-1. The sensitivity of the receiver shall be better than 60 dBµV, measurements
according [03].

For lowest disturbances, the change between adjacent symbols shall be phase continuous.

5.1.3.2.2 OFDM

An OFDM signal shall consist of the sum from up to 9 orthogonal sine tones for a period of 833 3. µs that
shall be orthogonal to the PL110 FSK signals (refer to 4.1.2.2). This OFDM signal shall be time limited
and defined as an OFDM symbol. A transmission frame shall consist of several OFDM symbols that shall
be transmitted serially without gaps between adjacent symbols. The OFDM sine tones – so called OFDM
carriers – shall be defined with the frequencies as specified in Figure 31.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 33 f 74


-----

|f1<br>OFDM|98,4 kHz|
|---|---|
|f2OFDM|100,8kHz|
|f3OFDM|103,2 kHz|
|f4OFDM|108,0 kHz|
|f5OFDM|110,4 kHz|
|f6OFDM|112,8 kHz|
|f7OFDM|117,6 kHz|
|f8OFDM|120,0 kHz|
|f9OFDM|122,4 kHz|


**Figure 31 - OFDM carrier frequencies**

Each ODFM carrier shall be submodulated by BPSK, QPSK or 8PSK modulation. Depending on the
modulation the number of bits per subcarrier varies, so that the data rate depends on the modulation.
Refer to Figure 32.

**Modulation** **Bits per subcarrier**

DBPSK 1

DQPSK 2

D8PSK 3

**Figure 32 - OFDM bits per subcarrier**

The BPSK, QPSK and 8PSK modulation encoding as well as the corresponding phase state diagrams
shall be defined by Figure 33 to Figure 38.

|Modulation|Bits per subcarrier|
|---|---|
|DBPSK|1|
|DQPSK|2|
|D8PSK|3|


110,4 kHz

|„0“ „0“ „1“<br>Phase Shift 0° Phase Shift 180°|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|„0“ <br>„0“ <br>„1“ <br>Phase Shift 180° <br>Phase Shift 0°|„0“|„0“|„1“|„1“|
|„0“ <br>„0“ <br>„1“ <br>Phase Shift 180° <br>Phase Shift 0°|<br>Phase Shift|<br>Phase Shif<br>  0°|<br> t 180°|<br> t 180°|
||Tsymb = 833,33µs||||


**Figure 33 - Orthogonal BPSK modulation encoding at 110,4kHz**

“1” “0” cos(2πf t)

**Figure 34 - BPSK Phase State Diagram**

The raw data rate per active OFDM carrier with BPSK modulation shall be:

Rbit = 1 bit / 833,33 µs = 1200 bit/s

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 34 f 74


cos(2πf t)


“0”


-----

110,4 kHz

|„00“ „01“ „10“<br>Phase Shift 90° Phase Shift 180°|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|„01“ <br>„00“ <br>„10“ <br>Phase Shift 90° <br>Phase Shift 180°|„00“|„01“|„10“|„10“|
|„01“ <br>„00“ <br>„10“ <br>Phase Shift 90° <br>Phase Shift 180°|<br>Phase Sh|<br> ift 90° <br>Phase Shif|<br> t 180°|<br> t 180°|
||Tsymb = 833,33µs||||


**Figure 35 - Orthogonal QPSK modulation encoding at 110,4kHz**

###### -sin(2πf t)

 „01
 d
 “

|„01<br>“|d|
|---|---|


###### „11“


###### „00“


**Figure 36 - QPSK Phase State Diagram**

The raw data rate per active OFDM carrier with QPSK modulation shall be:

Rbit = 2 bit / 833,33 µs = 2400 bit/s

f

„000 „001 „010“

110,4 kHz

“ “

Phase Shift 45° Phase Shift 135°

t

Tsymb = 833,33 µs

**Figure 37 - Orthogonal 8PSK modulation encoding at 110,4 kHz**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 35 f 74

|„000 „001 „010“<br>“ “<br>Phase Shift 45° Phase Shift 135°|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|Phase Shift 45° <br>„001<br>“<br>„000<br>“<br>„010“ <br>Phase Shift 135°|„000|„001|„010“|„010“|
|Phase Shift 45° <br>„001<br>“<br>„000<br>“<br>„010“ <br>Phase Shift 135°|Phase Sh<br><br>“|ift 45° <br><br>“<br>Phase Shif|<br> t 135°|<br> t 135°|
||~~T~~symb~~ = 833,33µs~~||||


-----

**Figure 38 - 8PSK Phase State Diagram**

The raw data rate per active OFDM carrier with 8-PSK modulation shall be:

Rbit = 3 bit / 833,33 µs = 3 600 bit/s

Figure 39 illustrates the unmodulated frequency carrier configuration in the frequency domain of the 9
OFDM carriers and of the embedded PL110 FSK carriers in dashed lines.

|A|

||A||Col2|Col3|Col4|
|---|---|---|---|


95    98,4   100,8  103,2   105,6   108   110,4   112,8  115,2   117,6   120   122,4    125

Cenelec B-Band

**Figure 39 - Unmodulated ODFM carriers and PL110 FSK carriers**


f/kHz


Each ODFM carrier modulation shall be done differentially by DBPSK, DQPAK and D8PSK modulation.
In detail the data bits to be transmitted shall be assigned to a carrier phase offset ∆𝜑𝑚 that shall be added
to the carrier phase of the last transmitted OFDM carrier.

The definition for differential phase TX calculation shall be:

𝝋𝒎(𝑻) = 𝝋𝒎(𝑻−𝟏) + ∆𝝋𝒎

Where 𝑇 shall represent the symbol count, 𝜑𝑚(𝑇−1) shall be the last transmitted absolute phase of
carrier 𝑚, 𝜑𝑚(𝑇) shall be the modulation specific data assigned phase offset for carrier 𝑚 and 𝜑𝑚(𝑇)
shall be the absolute carrier phase for transmission of OFDM symbol 𝑇. Refer to Figure 40.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 36 f 74


-----

|DBPSK|Col2|
|---|---|
|Data Input|TX Angle<br>∆𝜑𝑚|
|"0b"<br>"1b"|0°<br>180°|

|DQPSK|Col2|
|---|---|
|Data Input|TX Angle<br>∆𝜑𝑚|
|"00b"<br>"01b"<br>"10b"<br>"11b"|0°<br>90°<br>270°<br>180°|

|D8PSK|Col2|
|---|---|
|<br>Data Input|<br>TX Angle<br>∆𝜑𝑚|
|<br>"000b"<br>"001b"<br>"010b"<br>"011b"<br>"100b"<br>"101b"<br>"110b"<br>"111b"|0°<br>45°<br>135°<br>90°<br>315°<br>270°<br>180°<br>225°|


**Figure 40 - OFDM differential subcarrier modulation coding**

EXAMPLE 1 For a transmission, in the case that the last carrier phase of a D8PSK modulated subcarrier was 45° and the new
data bits for transmission are “110b”, then new carrier phase offset will be 180° resulting in an absolute transmitting carrier phase of
45°+180°= 225°.

Each OFDM carrier shall be controlled individually, so that it is possible to setup variable OFDM carrier
configuration. The following individual OFDM carrier configuration shall be possible for each
transmission symbol:

   - Carrier On/Off, and
   - Differential carrier phase.

All OFDM carriers shall be pre-configured with an absolute start phase of 0°, when switching form
receive mode to transmit mode.

Each OFDM carrier shall hold its actual absolute phase if it is temporarily switched off until it is switched
on again, so that it is possible to allow differential phase modulation and carrier frequency hopping for
each transmitted OFDM symbol.

These NRZ-signals shall be superimposed on the 230 V/50 Hz mains AC-voltage. The OFDM time signal
shall be limited to 122 dBµV, measured with EN 5506-1-2 artificial mains network according EN 500651. The sensitivity of the receiver shall be better than 60 dBµV.

For lowest disturbances and compliance with EN 50065-1, each OFDM symbol shall be multiplied with a
window filter function, which is an efficient way to realize a digital filter. The chosen window function
realizes a very strong attenuation for the sideband frequencies that are generated during the OFDM
modulation. It reduces the output power by approx. 6 dB.

The following window function shall be used:

𝒘𝒊𝒏𝒅𝒐𝒘𝑶𝑭𝑫𝑴(𝒏) = 𝟎, 𝟓+ 𝟎, 𝟓∙𝒄𝒐𝒔(𝟐𝝅𝒇𝑺𝒚𝒎𝒃𝒐𝒍𝒏𝝉+ 𝝅)

Definitions: 𝑘𝑆𝑦𝑚𝑏𝑜𝑙 = 1,2𝑘𝐻𝑁 is the OFDM symbol frequency, 𝑛= 1/𝑘𝑆𝑎𝑚𝑝𝑙𝑒 is the sample time with
the sample frequency 𝑘𝑆𝑎𝑚𝑝𝑙𝑒 and 𝑛 is the sample position within the OFDM symbol.

The OFDM output signal shall be scalable for each transmitted symbol since the summation of 𝑚 OFDM
carriers may result in high RMS values and amplitude peaks of the time domain signal that can be up to
𝑚-times higher than the amplitude of single carrier. A typical scaling factor is 1/𝑚 in case of 𝑚 active
carriers.

OFDM output signal clipping is recommended for digital OFDM modulators to avoid register overflow
due to high signal peaks.

Figure 41 shows a typical realization of a digital OFDM modulator including carrier phase modulation,
signal summation, scaling, clipping, window filtering and digital to analog conversion. Alternatively, the
signal scaling may be done with each carrier signal before signal summation to avoid digital clipping.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 37 f 74


-----

𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶 𝐷𝐷𝐷

sin(𝑤1𝑛𝑛 + 𝜑1(𝑇))

sin(𝑤2𝑛𝑛 + 𝜑2(𝑇))

𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆

𝑤𝑤𝑤𝑤𝑤𝑤(𝑛)

sin(𝑤𝑛𝑛𝑛 + 𝜑𝑚(𝑇))

**Figure 41 - OFDM modulator (Example)**

Definitions: 𝑇 shall be the symbol count, 𝜑𝑚(𝑇) shall be the carrier phase and 𝑤1 = 2𝜋𝑘1 shall be the
carrier angular frequency

Compliance shall be checked by measurement.

5.1.3.2.3 OFDM synchronisation signal
The OFDM signal reception requires a very good synchronisation to the signal of an OFDM PL110+
device, because the information shall be coded in the phase of each OFDM carrier. A “raw”
synchronisation of transmitter and receiver shall be realized by synchronisation to the mains phase zerocrossing according to clause 5.1.8.12. This shall ensure also the synchronisation to PL110 devices
according to clause 4.1.7.6.

An OFDM preamble signal shall be defined by sine tone for a period of 833 3. µs that shall be orthogonal
to the OFDM carriers and orthogonal to the PL110 FSK carriers:

𝒑𝒓𝒆(𝒕) = 𝒔𝒄𝒂𝒍𝒆𝑷𝒓𝒆 ∙𝐬𝐢𝐧 (𝟐𝝅𝒇𝑷𝒓𝒆𝒕+ 𝝋𝑷𝒓𝒆)

Where 𝑠𝑆𝑆𝑆𝑠𝑃𝑟𝑒 shall be the scaling factor of the amplitude and 𝑘𝑃𝑟𝑒 = 106,8 𝑘𝐻𝑁 shall be the preamble
signal frequency starting with a phase 𝜑𝑃𝑟𝑒 = 90°.

An OFDM sync signal shall be defined by the sum of two orthogonal sine tones for a period of 833 3. µs
that shall be orthogonal to the other OFDM carriers and PL110 FSK carriers:

𝒔𝒚𝒏𝒄(𝒕) = 𝒔𝒚𝒏𝒄𝟏(𝒕) + 𝒔𝒚𝒏𝒄𝟐(𝒕)
= 𝒔𝒄𝒂𝒍𝒆𝒔𝒚𝒏𝒄 ∙[𝐬𝐢𝐧�𝟐𝝅𝒇𝒔𝒚𝒏𝒄𝟏𝒕+ 𝝋𝒔𝒚𝒏𝒄�+ 𝐬𝐢𝐧�𝟐𝝅𝒇𝒔𝒚𝒏𝒄𝟐𝒕+ 𝝋𝒔𝒚𝒏𝒄�]

The two frequencies of the sync signal shall be 𝑘𝑠𝑦𝑛𝑐1 = 109,2 𝑘𝐻𝑁 and 𝑘𝑠𝑦𝑛𝑐2 = 111,6 𝑘𝐻𝑁 with a
starting phase of 𝜑𝑠𝑦𝑛𝑐 = −90° and 𝑆𝑆𝑆𝑆𝑠𝑠𝑦𝑛𝑐 shall be the scaling factor of the amplitude. Compared to
the preamble phase, the sine wave of the sync signal shall be shifted by 180°.

For OFDM transmission a more precise additional symbol synchronisation signal sequence shall be
defined as:

𝐒𝐲𝐧𝐜𝐡𝐫𝐨𝐧𝐢𝐬𝐚𝐭𝐢𝐨𝐧 𝐬𝐞𝐪𝐮𝐞𝐧𝐜𝐞: 𝒑𝒓𝒆− 𝒑𝒓𝒆−𝒔𝒚𝒏𝒄−𝒑𝒓𝒆−𝒑𝒓𝒆−𝒔𝒚𝒏𝒄−𝒑𝒓𝒆

To reach the same 𝑉𝑅𝑀𝑆 value for preamble and sync signals the following equation shall be used:

𝒔𝒄𝒂𝒍𝒆𝒔𝒚𝒏𝒄 = 𝒔𝒄𝒂𝒍𝒆𝑷𝒓𝒆 / √𝟐

The symbols of the synchronization sequence shall not be filtered by the OFDM window function as
defined in 5.1.3.2.2.

The first preamble symbol within the OFDM synchronization sequence may be multiplied by a soft rampup function within the first quarter of the symbol to reduce spurious emissions and allow a good tune-in
phase at receiver input stage. Using a ramp-up function is not mandatory.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 38 f 74

|sin(𝑤 1𝑛𝑛+ 𝜑 1(𝑇))|Col2|
|---|---|

|sin(𝑤 2𝑛𝑛+ 𝜑 2(𝑇))|Col2|
|---|---|

|𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶<br>𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆<br>𝑤𝑤𝑤𝑤𝑤𝑤(𝑛)|Col2|Col3|
|---|---|---|
|𝑤𝑤𝑤𝑤𝑤𝑤(𝑛) <br>𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆 <br>𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶|𝑤𝑤𝑤𝑤𝑤𝑤(𝑛)|𝑤𝑤𝑤𝑤𝑤𝑤(𝑛)|
|𝑤𝑤𝑤𝑤𝑤𝑤(𝑛) <br>𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆 <br>𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶|𝑤𝑤𝑤𝑤𝑤𝑤(𝑛)||

|sin(𝑤 𝑛𝑛𝑛+ 𝜑 𝑚(𝑇))|Col2|
|---|---|


sin(𝑤2𝑛𝑛 + 𝜑2(𝑇))


sin(𝑤1𝑛𝑛 + 𝜑1(𝑇))


𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆𝑆


𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶


-----

All symbols within an OFDM transmission frame - except the first preamble symbol - should have
approx. the same 𝑉𝑅𝑀𝑆 values to avoid problems with receiver AGC (Automatic Gain Control) circuits
e.g. gain tuning within the transmission frame.

The following scaling factors can be used for 𝑠𝑆𝑆𝑆𝑠𝑃𝑟𝑒 and 𝑠𝑆𝑆𝑆𝑠𝑠𝑦𝑛𝑐 depending on the active carrier
count of the Data block:

**Scaling factor**

**Active OFDM**

**data carriers** 𝒔𝒄𝒂𝒍𝒆𝑷𝒓𝒆 𝒔𝒄𝒂𝒍𝒆𝒔𝒚𝒏𝒄

1                   -                   
2 0,433 0,306

3 0,354 0,250

4 0,306 0,217

5 0,274 0,194

6 0,250 0,177

7 0,231 0,164

8 0,217 0,153

9 0,204 0,144

**Figure 42 - Synchronization sequence scaling factors**

Figure 43 shows the resulting synchronization signal sequence:

1

0.8

0.6

0.4

0.2

0

-0.2

-0.4

-0.6

-0.8

-1

0 1000 2000 3000 4000 5000 6000

**Figure 43 - OFDM synchronisation sequence (without ramp-up)**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 39 f 74

|Active OFDM<br>data carriers|Scaling factor|Col3|
|---|---|---|
|**Active OFDM**<br>**data carriers**|𝒔𝒄𝒂𝒍𝒆𝑷𝒓𝒆|𝒔𝒄𝒂𝒍𝒆𝒔𝒚𝒏𝒄|
|1|-|-|
|2|0,433|0,306|
|3|0,354|0,250|
|4|0,306|0,217|
|5|0,274|0,194|
|6|0,250|0,177|
|7|0,231|0,164|
|8|0,217|0,153|
|9|0,204|0,144|


-----

###### 5.1.3.3 Signal decoding

5.1.3.3.1 General
A PL110+ device shall receive FSK and OFDM in parallel. So it shall be possible to synchronize and
receive a power line device frame according to clause 4 during a PL110+ OFDM frame reception and
vice versa.

5.1.3.3.2 PL110 FSK
Please refer to clause 4 for PL110 FSK signal decoding specification.

5.1.3.3.3 OFDM
The PL110+ OFDM demodulator shall detect the differential carrier phase of each OFDM carrier and
shall assign modulation specific data bits to it.

Figure 44 shows a typical realization of a digital OFDM demodulator including analog to digital
conversion, complex signal correlation, signal normalization, delta phase calculation and delta phase
demodulation. The correlation may be realized by complex Fast Fourier Transformation (FFT) or
matched filter techniques. The normalization is recommended to increase the following delta calculation.

𝐴𝐴𝐴 𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶 𝑁𝑁𝑁𝑁𝑁𝑁𝑁𝑁𝑁𝑁𝑁 𝐷𝐷𝐷𝐷𝐷 𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷
𝑠𝑠𝑠𝑠𝑠𝑠= 𝑠(𝑡) 𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐

**Figure 44 - OFDM demodulator (example)**

After signal is analog to digital converted, the next part of the demodulation shall be the IQ-correlation,
where the sine- and cosine-waves of the used frequencies shall be multiplied and accumulated over a
period of 1 OFDM symbol ( 833 3. µs) to calculate the real and imaginary part for all m carriers.

Figure 45 shows an IQ correlator based on matched filter techniques:

𝑘𝑘𝑘1𝑖(𝑛) = 𝑘𝑘𝑘1𝑖(𝑛−1) + 𝑠(𝑛) ∙sin(𝑤1𝑛𝑛)

𝑘𝑘𝑘1𝑞(𝑛) = 𝑘𝑘𝑘1𝑞(𝑛−1) + 𝑠(𝑛) ∙cos(𝑤1𝑛𝑛)

𝑘𝑘𝑘2𝑖(𝑛) = 𝑘𝑘𝑘2𝑖(𝑛−1) + 𝑠(𝑛) ∙sin(𝑤2𝑛𝑛)

𝐴𝐴𝐴  𝑠𝑠𝑠𝑠𝑠𝑠= 𝑠(𝑛) 𝑘𝑘𝑘2𝑞(𝑛) = 𝑘𝑘𝑘2𝑞(𝑛−1) + 𝑠(𝑛) ∙cos(𝑤2𝑛𝑛)

𝑘𝑘𝑘𝑛𝑖(𝑛) = 𝑘𝑘𝑘𝑛𝑖(𝑛−1) + 𝑠(𝑛) ∙sin(𝑤𝑚𝑛𝑛)

𝑘𝑘𝑘𝑛𝑞(𝑛) = 𝑘𝑘𝑘𝑛𝑞(𝑛−1) + 𝑠(𝑛) ∙cos(𝑤𝑚𝑛𝑛)

**Figure 45 - OFDM correlator (example)**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 40 f 74

|𝐴𝐴𝐴<br>𝑠𝑠𝑠𝑠𝑠𝑠= 𝑠(𝑡)|Col2|
|---|---|

|𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶𝐶|Col2|
|---|---|

|𝑁𝑁𝑁𝑁𝑁𝑁𝑁𝑁𝑁𝑁𝑁|Col2|
|---|---|

|𝐷𝐷𝐷𝐷𝐷<br>𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐|Col2|
|---|---|

|𝑘𝑘𝑘 (𝑛) = 𝑘𝑘𝑘 (𝑛−1) + 𝑠(𝑛) ∙sin(𝑤 𝑛𝑛)<br>1𝑖 1𝑖 1|Col2|
|---|---|

|𝑘𝑘𝑘 (𝑛) = 𝑘𝑘𝑘 (𝑛−1) + 𝑠(𝑛) ∙cos(𝑤 𝑛𝑛)<br>1𝑞 1𝑞 1|Col2|
|---|---|

|𝑘𝑘𝑘 (𝑛) = 𝑘𝑘𝑘 (𝑛−1) + 𝑠(𝑛) ∙sin(𝑤 𝑛𝑛)<br>2𝑖 2𝑖 2|Col2|
|---|---|

|𝑘𝑘𝑘 (𝑛) = 𝑘𝑘𝑘 (𝑛−1) + 𝑠(𝑛) ∙cos(𝑤 𝑛𝑛)<br>2𝑞 2𝑞 2|Col2|
|---|---|

|𝑘𝑘𝑘 (𝑛) = 𝑘𝑘𝑘 (𝑛−1) + 𝑠(𝑛) ∙sin(𝑤 𝑛𝑛)<br>𝑛𝑖 𝑛𝑖 𝑚|Col2|
|---|---|

|𝐴𝐴𝐴 𝑠𝑠𝑠𝑠𝑠𝑠= 𝑠(𝑛)|Col2|
|---|---|
|𝐴𝐴𝐴    𝑠𝑠𝑠𝑠𝑠𝑠=  𝑠(𝑛)||
|𝐴𝐴𝐴    𝑠𝑠𝑠𝑠𝑠𝑠=  𝑠(𝑛)||
|𝐴𝐴𝐴    𝑠𝑠𝑠𝑠𝑠𝑠=  𝑠(𝑛)||
|𝐴𝐴𝐴    𝑠𝑠𝑠𝑠𝑠𝑠=  𝑠(𝑛)||

|𝑘𝑘𝑘 (𝑛) = 𝑘𝑘𝑘 (𝑛−1) + 𝑠(𝑛) ∙cos(𝑤 𝑛𝑛)<br>𝑛𝑞 𝑛𝑞 𝑚|Col2|
|---|---|


𝑘𝑘𝑘1𝑖(𝑛) = 𝑘𝑘𝑘1𝑖(𝑛−1) + 𝑠(𝑛) ∙sin(𝑤1𝑛𝑛)


𝑘𝑘𝑘1𝑞(𝑛) = 𝑘𝑘𝑘1𝑞(𝑛−1) + 𝑠(𝑛) ∙cos(𝑤1𝑛𝑛)


𝑘𝑘𝑘𝑛𝑖(𝑛) = 𝑘𝑘𝑘𝑛𝑖(𝑛−1) + 𝑠(𝑛) ∙sin(𝑤𝑚𝑛𝑛)


𝐴𝐴𝐴  𝑠𝑠𝑠𝑠𝑠𝑠= 𝑠(𝑛)


𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷𝐷


𝐷𝐷𝐷𝐷𝐷
𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐𝑐


-----

During the demodulation calculation the lower bits of the correlation sums get lost, due to multiplications
and shifting processes. For high receiver sensitivity a normalization is recommended but not mandatory.
It may be realized by the following operations: real and imaginary parts of the correlation sums are
compared with each other as absolute values and the signed bits of the bigger one are counted. Finally the
imaginary and real parts are multiplied with the normalizing factor 2[𝑠𝑖𝑔𝑛𝑒𝑑 𝑏𝑖𝑡 𝑐𝑜𝑢𝑛𝑡].

The absolute OFDM carrier phase shall be calculated by:

###### 𝝋𝒎(𝑻) = [180]π [∗𝐚𝐫𝐜𝐭𝐚𝐧 (]𝒌𝒌𝒇𝒌𝒌𝒇𝒎𝒎𝒒𝒊(𝑻)(𝑻)[)]

The differential carrier phase (delta phase) shall be calculated by subtracting the previous phase angle
from the actual phase angel of each OFDM carrier:

###### ∆𝝋𝒎 = 𝝋𝒎(𝑻) −𝝋𝒎(𝑻−𝟏)

Where 𝑇 shall represent the symbol count, 𝜑𝑚(𝑇−1) shall be the last received absolute phase of carrier
𝑚, 𝜑𝑚(𝑇) shall be the received absolute carrier phase of OFDM symbol 𝑇 and ∆𝜑𝑚 shall be the received
differential phase for carrier 𝑚.

If applicable, alternative calculations of the differential carrier phase may be used.

The modulation specific RX data bits shall be assigned to ∆𝜑𝑚. Refer to Figure 46.

**Data Output**

**RX Angle ∆𝝋𝒎**

**DBPSK DQPSK D8PSK**

0,00° - 22.50° "0b" "00b" "000b"

22.50°- 45.00° "0b" "00b" "001b"

45.00° - 67.50° "0b" "01b" "001b"

67.50° - 90.00° "0b" "01b" "011b"

90.00° - 112.50° "1b" "01b" "011b"

112.50° - 135.00° "1b" "01b" "010b"

135.00° - 157.50° "1b" "11b" "010b"

157.50° - 180.00° "1b" "11b" "110b"

180.00° - 202.50° "1b" "11b" "110b"

202.50° - 225.00° "1b" "11b" "111b"

225.00° - 247.50° "1b" "10b" "111b"

247.50° - 270.00° "1b" "10b" "101b"

270.00° - 292.50° "0b" "10b" "101b"

292.50° - 315.00° "0b" "10b" "100b"

315.00° - 337.50° "0b" "00b" "100b"

337.50° - 360.00° "0b" "00b" "000b"

**Figure 46 - OFDM differential subcarrier demodulation decoding**

EXAMPLE 2 For reception, at receiver side the absolute carrier phase of the last OFDM signal was e.g. 67° and the absolute
carrier phase of the new OFDM signal was 250°. The resulting phase difference ∆𝜑𝑚 is then 250°-67°=183°. This differential phase
angle falls in the angel segment 180°+/- 22,5° for D8PSK modulation and shall be decoded to "110b" for the received data bits.
(Refer to Figure 46).

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 41 f 74

|RX Angle ∆𝝋<br>𝒎|Data Output|Col3|Col4|
|---|---|---|---|
|**    RX Angle**∆𝝋𝒎|**DBPSK**|** DQPSK**|**  D8PSK**|
|0,00° - 22.50°|"0b"|"00b"|"000b"|
|22.50°- 45.00°|"0b"|"00b"|"001b"|
|45.00° - 67.50°|"0b"|"01b"|"001b"|
|67.50° - 90.00°|"0b"|"01b"|"011b"|
|90.00° - 112.50°|"1b"|"01b"|"011b"|
|112.50° - 135.00°|"1b"|"01b"|"010b"|
|135.00° - 157.50°|"1b"|"11b"|"010b"|
|157.50° - 180.00°|"1b"|"11b"|"110b"|
|180.00° - 202.50°|"1b"|"11b"|"110b"|
|202.50° - 225.00°|"1b"|"11b"|"111b"|
|225.00° - 247.50°|"1b"|"10b"|"111b"|
|247.50° -  270.00°|"1b"|"10b"|"101b"|
|270.00° - 292.50°|"0b"|"10b"|"101b"|
|292.50° - 315.00°|"0b"|"10b"|"100b"|
|315.00° - 337.50°|"0b"|"00b"|"100b"|
|337.50° - 360.00°|"0b"|"00b"|"000b"|


-----

Each OFDM reception carrier shall be controlled individually, so that it is possible to setup variable
OFDM carrier configuration. The following individual OFDM carrier configuration shall be possible for
each reception symbol:

   - carrier On/Off, and
   - type of modulation (DBPSK, DQPSK, D8PSK).

All OFDM carriers shall be pre-configured with an absolute start phase of 0°, when switching from
transmit to receive mode.

Each OFDM reception carrier shall hold its actual absolute received phase if it is temporary switched off
until it is switched on again, so that it is possible to allow differential phase demodulation and carrier
frequency hopping for each received OFDM symbol.

###### 5.1.3.4 Overlapping of equal logical information
Overlapping of equal logical symbols, e.g. the simultaneous transmission of equal information at the same
time from several MAUs (e.g. common ACK), results in fade-in / fade-out effects. Due to slight
frequency deviations between several MAUs the signal fades periodically with the difference of the
MAU-frequencies. In PL110+ power line communication this case can be avoided by setting a unique
group response flag to each assigned Group Address.

###### 5.1.3.5 Overlapping of different logical information
Overlapping of different logical symbols, e.g. the simultaneous transmission of different information at
the same time from several MAUs, results in a collision. While there is no indication of collision for any
MAU, the probability of this state is minimized by special bus access mechanism (refer to 5.2.3.2).

###### 5.1.3.6 Impedance of the MAU
To limit the influence of connected MAUs on the characteristic of the power line bus the impedance in
receiving mode shall be high. For signal injection with minimum losses, the impedance in transmitting
mode shall be low. When tested according to EN 50065-7, the limits for PL110+ shall be:

**Impedance on** **Requirements**

Receiving mode Zin ≥ 80 Ω at 95 kHz to 125 kHz

Transmitting mode Zout ≤ 20 Ω at 95 kHz to 125 kHz

**Figure 47 - Requirements for the impedance of the MAU**

###### 5.1.3.7 PL bus coupling
The PL bus coupling is identical for PL110+ and PL110 (see clause 4.1.2.6).

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 42 f 74

|Impedance on|Requirements|
|---|---|
|Receiving mode|Zin ≥ 80Ω at 95 kHz to 125 kHz|
|Transmitting mode|Zout ≤ 20Ω at 95 kHz to 125 kHz|


-----

##### 5.1.4 Installation topology
The installation topology is identical for PL110+ and PL110 (see clause 4.1.3).

##### 5.1.5 Installation requirements
The installation requirements are identical for PL110+ and PL110 (see clause 4.1.4).

##### 5.1.6 Surge protection
The surge protection specification is identical for PL110+ and PL110 (see clause 4.1.5).

##### 5.1.7 PL Physical Layer services and protocol

###### 5.1.7.1 Physical Layer services at the Data Link Layer / Physical Layer interface
There shall be two services at the Data Link Layer / Physical Layer interface for PL110+ OFDM
transmission:

Ph_Data.req (p_class, p_data)

Ph_Data.ind (p_class, p_data)

Ph_Data.req shall be called by the Data Link Layer. Each Ph_Data.req() service primitive shall transfer a
single octet to the Physical Layer. Class parameter p_class shall contain timing information.

length preamble 7 symbols for preamble
1 symbol carrier 0-phase-init
3 symbols application logical sync

 11 symbols
length ACK frame (CONV) 11 symbols preamble (see above)
(1 byte (CTRL) + 8bit CRC)*2 + 10bit tailing (with K=6) on
3ch*2bit/ch = 7 symbols, expanded to interleaving block size= 9
symbols.

 20 symbols
Assuming CONV coder results in a length of 20 symbols for an
ACK frame.
min gap between frames 4 symbols.
The gap length can vary depending on the phase situation (OFDM
can only start at phase crossing on one of the 3 phases (50Hz
system, every 4 symbols) or on one of the 2 phases (60Hz system,
every 5 symbols)).
To start the next transmission frame, the gap can be between 4 and
9 symbols.
 4 to 9 symbols

p_class: start_of_sys.prio_frame: This parameter value shall be used to start transmitting after at
least 65 bit times (-0/+5) idle line since the last bit of the
proceeding data link message cycle.
start_of_of_prio_frame: This parameter value shall be used to start transmitting after at
least 81 + (n*16)  0 ≤ n ≤ 7 bit times (-0/+5) idle line since the
last bit of proceeding data link message cycle.
start_of_repeated_frame: This parameter value shall be used to start transmitting after
exactly 49 bit times (-0/+5) since the last bit of the proceeding
L_Data request.
inner_frame_char: This parameter value shall be used to start transmitting without any
time gap after the last bit of the proceeding character.
ack_char: This parameter value shall be used to start transmitting after 4 bit
times (-0/+5) after the last bit of the proceeding L_Data request.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 43 f 74


-----

p_data: octet: This parameter value shall contain the octet to be expanded by four
error corrections to a character and to be transmitted. Due to the
fact that no collision-detection is carried out during transmission
the return value of a Ph_Data.con shall always be "Ok".

Ph_Data.ind shall be called by the Physical Layer. Each Ph_Data.ind() service primitive shall transfer a
single octet to the Data Link Layer.

Ph_Data.ind (p_class, p_data)

p_class: sync_1_detected: This parameter value shall indicate the synchronisation on the
preamble sequence was successful
start_of_frame: This parameter value shall indicate that a valid application sync
word set (3 symbols) has been received
bit_error: This parameter value shall be used to indicate that an
uncorrectable bit error was detected in the received character
and that reception was terminated.
p_data: octet: This parameter value shall be used to indicate that the data octet
error was corrected and extracted from the received character[ 4).]

##### 5.1.8 Features of Powerline PL110+ Physical Layer

###### 5.1.8.1 Introduction
This clause describes the frame format, error correction and synchronization of PL110+ medium using
OFDM modulation. Compliance with the requirements of this clause is subject to transient and logical
measurement equipment.

###### 5.1.8.2 PL110+ character overview
Each PL110+ frame shall start with an OFDM synchronization sequence. The synchronization sequence
shall not be coded.

Two error correction codings shall be possible for PL110+ OFDM transmission:

   - Convolutional coding

   - Power line (12,8) block coding according to clause 4.1.7.5

This shall result in 2 character definitions for convolutional and (12,8) block coding:

1. Each Data Link Layer octet that has to be convolutional coded, shall be encoded to a 16 bit
character (16 bit convolutional coded data).
Hint: Each data octet bit is coded into two convolutional bits with index a and b. Additional tail
bits are transmitted at the end of each data block.

Transmission direction

E7a E7b E6a E6b E5a E5b E4a E4b E3a E3b E2a E2b E1a E1b E0a E0b

Error Correction including coded Data

**Figure 48 - Convolutional coded character**

2. Each Data Link Layer octet that has to be (12,8) block coded, shall be coded to a 12 bit character
(8 bits data + 4 bits error correction).

———————

4) Due to the fact that there is no collision-detection during transmission the return value of a Ph_Data.con will
always be "Ok".

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 44 f 74

|E7a|E7b|E6a|E6b|E5a|E5b|E4a|E4b|E3a|E3b|E2a|E2b|E1a|E1b|E0a|E0b|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|Error Correction including coded Data|


-----

Transmission direction

7 6 5 4 3 2 1 0 E 3 E 2 E 1 E 0

Octet Error Correction

**Figure 49 - (12,8) Block coded character**

During transmission and reception no time gaps are allowed between the bits of a character.

###### 5.1.8.3 OFDM frame structure
The OFDM Frame shall consist of physical OFDM synchronization sequence, carrier 0-phase init, logical
sync data, CTRL block, HDR block and a variable Data block.

**2 Pre-** **Physical** **2 Pre-** **Physical** **1 Pre-** **0-Phase** **Logical** **Logical** **Logical** **CTRL** **0-Phase** **0-Phase** **HDR** **Data**
**amble** **sync** **amble** **sync** **amble** **init 1** **sync 1** **sync 2** **sync 3** **block** **init 2** **init 3** **block** **block**
**symbols** **symbols** **symbol**

OFDM synchronisation sequence 3 fixed carrier DQPSK modulation 2 - 9 carrier
DBPSK, DQPSK
or D8PSK
modulation

**Figure 50 - OFDM frame structure**

**5.1.8.3.1 Block structure**
The OFDM frame blocks CTRL, HDR and DATA are part of the original PL110 structure according to
clause 4. Detailed information can be found in clauses 4.2.3.3 and 4.2.3.4.

For PL110+ OFDM transmission these three blocks shall be extended by additional PL110+ specific
information:

**Data**
**Block** **data contained** **OFDM Coding**
**Octets**

KNX Frame: CTRL, CTRL+ DQPSK (fixed), 3 fixed 2
active carriers

CTRL

ACK Frame: ACK DQPSK (fixed), 1
3 fixed active carriers

extended CTRLE, SA, DA, LG DBPSK,DQPSK,D8PSK, 6
HDR
frame: 2 – 9 active carriers

extended TPCI + n * DATA + CRC + DBPSK,DQPSK,D8PSK,
DATA LEN + 3
frame: DOA (n > 15 && n < 255) 2-9 active carriers

**Figure 51 - OFDM frame blocks**

Each block shall be protected by the FEC algorithm defined by the selected logical sync words. For the
CTRL/ACK block the OFDM modulation shall be fixed to DQPSK using 3 active carries, meaning 6
bits/symbol for very robust transmission.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 45 f 74

|7|6|5|4|3|2|1|0|E 3|E 2|E 1|E 0|
|---|---|---|---|---|---|---|---|---|---|---|---|
|Octet|Octet|Octet|Octet|Octet|Octet|Octet|Octet|Error Correction|Error Correction|Error Correction|Error Correction|

|2 Pre-<br>amble<br>symbols|Physical<br>sync|2 Pre-<br>amble<br>symbols|Physical<br>sync|1 Pre-<br>amble<br>symbol|0-Phase<br>init 1|Logical<br>sync 1|Logical<br>sync 2|Logical<br>sync 3|CTRL<br>block|0-Phase<br>init 2|0-Phase<br>init 3|HDR<br>block|Data<br>block|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|Block|data contained|Col3|OFDM Coding|Data<br>Octets|
|---|---|---|---|---|
|CTRL|KNX Frame:|CTRL, CTRL+|DQPSK (fixed), 3 fixed<br>active carriers|2|
|CTRL|ACK Frame:|ACK|DQPSK (fixed),<br>3 fixed active carriers|1|
|HDR|extended<br>frame:|CTRLE, SA, DA, LG|DBPSK,DQPSK,D8PSK,<br>2 – 9 active carriers|6|
|DATA|extended<br>frame:|TPCI + n * DATA + CRC +<br>DOA (n > 15 && n < 255)|DBPSK,DQPSK,D8PSK,<br>2-9 active carriers|LEN + 3|


2 - 9 carrier
DBPSK, DQPSK
or D8PSK
modulation


3 fixed carrier DQPSK modulation


**1 Pre-**
**amble**
**symbol**


**0-Phase**
**init 3**


**1 Pre-**
**amble**
**symbol**


**Logical**
**sync 1**


**0-Phase**
**init 2**


**Data**
**block**


**Physical**
**sync**


**Logical**
**sync 2**


**0-Phase**
**init 3**


**2 Pre-**
**amble**
**symbols**


**0-Phase**
**init 1**


**Logical**
**sync 3**


**0-Phase**
**init 2**


**Data**
**block**


-----

Within the CTRL block an additional CTRL+ octet shall be transmitted that shall include OFDM
modulation information as well as the active carrier count for the following packets. So it shall be
possible to transmit the HDR/DATA blocks with another OFDM modulation and different active OFDM
carriers (e.g. D8PSK with 9 active carriers).

The ACK CTRL block shall have no additional data, since there is no need for the additional modulation
information.

**5.1.8.3.2 OFDM transmission scaling factors**
All symbols within an OFDM transmission frame should have approx. the same 𝑉𝑅𝑀𝑆 values to avoid
problems with receiver AGC (Automatic Gain Control) circuits e.g. gain tuning within the transmission
frame.

The following scaling factors can be used for the OFDM frame symbols depending on the active carrier
count of the Data block:

**Scaling factor**

**Active OFDM**

**Physical** **0-Phase** **Logical** **CTRL,**

**Data Carriers** **Preamble**

**sync** **init1-3** **sync 1-3** **HDR, Data**

1          -          -          -          -          2 0,433 0,306 0,408 0,408 0,500
3 0,354 0,250 0,333 0,333 0,333
4 0,306 0,217 0,289 0,289 0,250
5 0,274 0,194 0,258 0,258 0,200
6 0,250 0,177 0,236 0,236 0,167
7 0,231 0,164 0,218 0,218 0,143
8 0,217 0,153 0,204 0,204 0,125
9 0,204 0,144 0,192 0,192 0,111

**Figure 52 - Scaling factors for OFDM frame symbols (Example)**

###### 5.1.8.4 The OFDM synchronization sequence
After switching into the status start_of_pdu the Physical Layer shall transmit an OFDM synchronization
sequence of 7 symbols duration. The sequence is fixed to “preamble-preamble-sync-preamble-preamblesync-preamble”.

###### 5.1.8.5 The OFDM init 1 and logical sync sequence
The following symbol shall initialize the absolute starting phase of carrier 3, 5 and 7 (f3OFDM, f5OFDM,
f7OFDM) at transmitter and receiver side.

**Modulation** **DQPSK**

Active Carrier 3

Bit Alignment to Carriers bit 5,4 : Carrier 3

bit 3,2 : Carrier 5

bit 1,0 : Carrier 7

Window On

**Figure 53 - Carrier selection and modulation: Init 1 symbol and logical sync symbols**

**Bin Data**

0-Phase Init 1 101001

**Figure 54 - 0-Phase init 1 data**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 46 f 74

|Active OFDM<br>Data Carriers|Scaling factor|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|**Active OFDM**<br>**Data Carriers**|**Preamble**|**Physical**<br>**sync **|**0-Phase**<br>**init1-3 **|**Logical**<br>**sync 1-3 **|**CTRL,**<br>**HDR, Data **|
|1|-|-|-|-|-|
|2|0,433|0,306|0,408|0,408|0,500|
|3|0,354|0,250|0,333|0,333|0,333|
|4|0,306|0,217|0,289|0,289|0,250|
|5|0,274|0,194|0,258|0,258|0,200|
|6|0,250|0,177|0,236|0,236|0,167|
|7|0,231|0,164|0,218|0,218|0,143|
|8|0,217|0,153|0,204|0,204|0,125|
|9|0,204|0,144|0,192|0,192|0,111|

|Modulation|DQPSK|
|---|---|
|Active Carrier|3|
|Bit Alignment to Carriers|bit 5,4 : Carrier 3|
||bit 3,2 : Carrier 5|
||bit 1,0 : Carrier 7|
|Window|On|

|Col1|Bin Data|
|---|---|
|0-Phase Init 1|101001|


-----

The next 18 bit shall consist of the 3 logical sync symbols (sync 1, sync 2 and sync 3) that shall use
carrier 3, 5 and 7 with DQPSK modulation and active window filtering.

There shall be defined 2 sets of logical sync data. Depending on the transmitted logical sync set data, two
different Forward Error Correction (FEC) algorithms shall be used for the next data symbols within the
actual transmission frame. So the receiver can auto-detect which FEC is used by checking the received
SYNC set of an incoming PL110+ OFDM signal. The transmitter shall select the FEC and the
corresponding SYNC set for the transmission. The receiver then shall decode the received SYNC set and
shall assign the corresponding FEC variant for further decoding of incoming data symbols.

**Sync Set A (Convolutional Coder) Bin Data**

Logical sync 1 010101

Logical sync 2 010101

Logical sync 3 100110

**Figure 55 - Logical sync set A data for convolutional coder / Viterbi decoder**

**Sync Set B (8to12 Coder)** **Bin Data**

Logical sync 1 101010

Logical sync 2 101010

Logical sync 3 011001

**Figure 56 - Logical sync set B data for 8to12 coder / 12to8 decoder**

Additionally, a valid reception of logical sync data shall ensure correct synchronization to the OFDM
signal. Up to 6 bit errors shall be corrected within the 18 bit logical sync data using a simple error
correction method. If logical sync data is received, the algorithm shall check for a perfect match under the
two sync sets. If there is a perfect match the sync set shall be taken. If there is no perfect match the
number of bit errors of every possible sync set shall be calculated. The sync set with the lowest bit error
count shall be taken, but the number shall not exceed six bit errors.

This init and logical sync sequence shall be fixed to 4 OFDM symbols.

###### 5.1.8.6 CTRL block
The control block shall contain the coded PL110 CTRL and PL110+ CTRL+ octet that shall include the
modulation information and the active OFDM carrier count for the following blocks. The CTRL data
shall be extended with 8 bit CRC, convolutional coded and channel coded. For transmission the 3 fixed
carrier frequencies f3OFDM, f5OFDM, and f7OFDM with DQPSK modulation shall be used. Figure 57
illustrates the CTRL block structure.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 47 f 74

|Sync Set A (Convolutional Coder)|Bin Data|
|---|---|
|Logical sync 1|010101|
|Logical sync 2|010101|
|Logical sync 3|100110|

|Sync Set B (8to12 Coder)|Bin Data|
|---|---|
|Logical sync 1|101010|
|Logical sync 2|101010|
|Logical sync 3|011001|


-----

|2 Pre-<br>amble<br>symbols|Physica<br>l sync|2 Pre-<br>amble<br>symbols|Physical<br>sync|1 Pre-<br>amble<br>symbol|0-Phase<br>init 1|Logical<br>sync 1|Logical<br>sync 2|Logical<br>sync 3|CTRL<br>block|0-Phase<br>init 2|0-Phase<br>init 3|HDR<br>block|Data<br>block|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|Col1|Col2|
|---|---|
|Channel Coder|Channel Coder|

|Col1|Col2|Col3|
|---|---|---|
|data + CRC<br>Convolutional coded|conv. coder<br>tail-bits|fill bits|

|Col1|Col2|
|---|---|
|Convolutional Coder|Convolutional Coder|


data + CRC
Convolutional coded


Convolutional Coder


Channel Coder


conv. coder

tail-bits


fill bits


**Physical**
**sync**


**HDR**
**block**


**Physica**
**l sync**


**1 Pre-**
**amble**
**symbol**


**Logical**
**sync 1**


**CTRL**
**block**


**0-Phase**
**init 3**


**Data**
**block**


**2 Pre-**
**amble**
**symbols**


**Logical**
**sync 1**


**Logical**
**sync 3**


**0-Phase**
**init 2**


**Physica**
**l sync**


**HDR**
**block**


Original PL110 PL110+

8 bit 8 bit 8 bit

**Figure 57 - CTRL block (convolutional coded)**

Figure 58 - CTRL+ octet definition defines the CTRL+ octet:

CTRL+
Identifier bit Remark
MOD [1,0] 0: DBPSK modulation
1: DQPSK modulation
2: D8PSK modulation
3: Reserved

[4..2] 0: 9 active OFDM carriers
1: 8 active OFDM carriers
2: 7 active OFDM carriers
3: 6 active OFDM carriers
4: 5 active OFDM carriers
5: 4 active OFDM carriers
6: 3 active OFDM carriers

ACC 7: 2 active OFDM carriers

                      - [7..5] Reserved (bits set to zero)

**Figure 58 - CTRL+ octet definition**

###### 5.1.8.7 ACK
For the OFDM ACK message, no data shall follow the CTRL octet and no additional coding information
shall be added. This shall result in a reduced OFDM control block structure. The control block shall only
contain the coded PL110 CTRL octet. The ACK data shall be extended with 8 bit CRC, convolutional
coded and channel coded for OFDM transmission. For transmission the 3 fixed carrier frequencies f3OFDM,
f5OFDM, and f7OFDM with DQPSK modulation shall be used.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 48 f 74

|Col1|Col2|Col3|
|---|---|---|
|CTRL|CTRL+|CRC|

|8 bit|8 bit|Col3|8 bit|
|---|---|---|---|

|CTRL+|Col2|Col3|
|---|---|---|
|Identifier|bit|Remark|
|MOD|[1,0]|0: DBPSK modulation<br>1: DQPSK modulation<br>2: D8PSK modulation<br>3: Reserved|
|ACC|[4..2]|0: 9 active OFDM carriers<br>1: 8 active OFDM carriers<br>2: 7 active OFDM carriers<br>3: 6 active OFDM carriers<br>4: 5 active OFDM carriers<br>5: 4 active OFDM carriers<br>6: 3 active OFDM carriers<br>7: 2 active OFDM carriers|
|-|[7..5]|Reserved(bits set to zero)|


data + CRC
Convolutional coded


Channel Coder


CTRL+


CRC


CTRL


fill bits


Original PL110


**2 Pre-**
**amble**
**symbols**


**0-Phase**
**init 1**


**0-Phase**
**init 2**


**2 Pre-**
**amble**
**symbols**


**Logical**
**sync 2**


**0-Phase**
**init 3**


**1 Pre-**
**amble**
**symbol**


PL110+


8 bit


-----

Figure 59 illustrates the ACK block structure:

**2 Pre-** **Physical** **2 Pre-** **Physical** **1 Pre-** **0-Phase** **Logical** **Logical** **Logical** **CTRL block**
**amble** **sync** **amble** **sync** **amble** **init 1** **sync 1** **sync 2** **sync 3** **(reduced)**
**symbols** **symbols** **symbol**

Channel Coder

data + CRC conv. coder fill bits
Convolutional coded tail-bits

Convolutional Coder

CTRL (ACK) CRC

Original PL110 PL110+

8 bit 8 bit

**Figure 59 - ACK (convolutional coded)**

###### 5.1.8.8 The OFDM init 2 and init 3 sequence
The following init 2 symbol shall initialize the absolute starting phase of carrier 1, 4 and 8 (f1OFDM, f4OFDM,
f8OFDM) at transmitter and receiver side:

**Modulation** **DQPSK**

Active Carrier 3

Bit Alignment to Carriers bit 5,4 : Carrier 1

bit 3,2 : Carrier 4

bit 1,0 : Carrier 8

Window On

**Figure 60 - Carrier selection and modulation for init 2 symbol**

**Bin Data**

0-Phase Init 2 000011

**Figure 61 - 0-Phase init 2 data**

The following init 3 symbol shall initialize the absolute starting phase of carrier 2, 6 and 9 (f2OFDM, f6OFDM,
f9OFDM) at transmitter and receiver side.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 49 f 74

|2 Pre-<br>amble<br>symbols|Physical<br>sync|2 Pre-<br>amble<br>symbols|Physical<br>sync|1 Pre-<br>amble<br>symbol|0-Phase<br>init 1|Logical<br>sync 1|Logical<br>sync 2|Logical<br>sync 3|CTRL block<br>(reduced)|
|---|---|---|---|---|---|---|---|---|---|
|||||||||||

|Channel Coder|Col2|
|---|---|
|Channel Coder|Channel Coder|
|Channel Coder||

|Col1|Col2|Col3|
|---|---|---|
|data + CRC<br>Convolutional coded|conv. coder<br>tail-bits<br>|fill bits|

|Col1|Col2|
|---|---|
|Convolutional Coder|Convolutional Coder|

|Col1|Col2|
|---|---|
|CTRL (ACK)|CRC|

|Modulation|DQPSK|
|---|---|
|Active Carrier|3|
|Bit Alignment to Carriers|bit 5,4 : Carrier 1|
||bit 3,2 : Carrier 4|
||bit 1,0 : Carrier 8|
|Window|On|

|Col1|Bin Data|
|---|---|
|0-Phase Init 2|000011|


data + CRC
Convolutional coded


Convolutional Coder


Channel Coder


conv. coder

tail-bits


conv. coder

tail-bits


CTRL (ACK)


fill bits


Original PL110


**2 Pre-**
**amble**
**symbols**


**Physical**
**sync**


**Logical**
**sync 1**


**Logical**
**sync 3**


**1 Pre-**
**amble**
**symbol**


**2 Pre-**
**amble**
**symbols**


**2 Pre-**
**amble**
**symbols**


**Logical**
**sync 1**


**Logical**
**sync 3**


**0-Phase**
**init 1**


PL110+


8 bit


-----

|Modulation|DQPSK|
|---|---|
|Active Carrier|3|
|Bit Alignment to Carriers|bit 5,4 : Carrier 2|
||bit 3,2 : Carrier 6|
||bit 1,0 : Carrier 9|
|Window|On|


**Figure 62 - Carrier selection and modulation for init 3 symbol**

**Bin Data**

0-Phase Init 3 110000

**Figure 63 - 0-Phase init 3 data**

###### 5.1.8.9 HDR block
The HDR block shall contain the coded PL110 CTRLE, SA, DA and LG information. Depending on the
selected FEC, two different HDR block codings shall be defined:

**5.1.8.9.1 HDR block (convolutional coded)**
In case of convolutional FEC selection at transmitter side, the HDR data shall be extended with 16 bit
CRC, convolutional coded and channel coded for OFDM transmission. For transmission 2 - 9 carrier
frequencies with DBPSK, DQPSK or D8PSK modulation can be used.

Figure 64 shows the HDR block structure:

**2 Pre-** **2 Pre-**
**amble** **Physica** **amble** **Physica** **1 Pre-** **0-Phase** **Logical** **Logical** **Logical** **CTRL** **0-Phase** **0-Phase** **HDR** **Data**
**symbol** **l sync** **symbol** **l sync** **amble** **init 1** **sync 1** **sync 2** **sync 3** **block** **init 2** **init 3** **block** **block**

**symbol**

**s** **s**

**Channel Coder**

**data + CRC** **conv. coder**
**fill bits**
**Convolutional coded** **tail-bits**

**Convolutional Coder**

**CTRLE** **SA** **DA** **LG** **CRC**

**Original PL110** **PL110+**

8 bit 16 bit 16 bit 8 bit 16 bit

**Figure 64 - HDR block (convolutional coded)**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 50 f 74

|Col1|Bin Data|
|---|---|
|0-Phase Init 3<br>1|10000|

|2 Pre-<br>amble<br>symbol<br>s|Physica<br>l sync|2 Pre-<br>amble<br>symbol<br>s|Physica<br>l sync|1 Pre-<br>amble<br>symbol|0-Phase<br>init 1|Logical<br>sync 1|Logical<br>sync 2|Logical<br>sync 3|CTRL<br>block|0-Phase<br>init 2|0-Phase<br>init 3|HDR<br>block|Data<br>block|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|Channel Coder|Col2|
|---|---|
|**Channel Coder**|**Channel Coder**|
|**Channel Coder**||

|Col1|Col2|Col3|
|---|---|---|
|**data + CRC**<br>**Convolutional coded**|**conv. coder**<br>**tail-bits**|**fill bits**|

|Col1|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**CTRLE**|**SA**|**DA**|**LG**|**CRC**|

|8 bit|16 bit|16 bit|8 bit|16 bit|
|---|---|---|---|---|


**data + CRC**
**Convolutional coded**


**Convolutional Coder**


**Convolutional Coder**


**Channel Coder**


**conv. coder**
**tail-bits**


**fill bits**


**LG**


**SA**


**LG**


**SA**


**Original PL110**


**Physica**
**l sync**


**HDR**
**block**


**Physica**
**l sync**


**1 Pre-**
**amble**
**symbol**


**Logical**
**sync 1**


**Logical**
**sync 3**


**0-Phase**
**init 3**


**2 Pre-**
**amble**
**symbol**

**s**


**Data**
**block**


**2 Pre-**
**amble**
**symbol**

**s**


**1 Pre-**
**amble**
**symbol**


**Logical**
**sync 2**


**CTRL**
**block**


**0-Phase**
**init 3**


16 bit


**PL110+**


16 bit


8 bit


-----

**5.1.8.9.2 HDR block ((12,8) block coded)**
In case of (12,8) block FEC selection at transmitter side, the HDR data shall be (12,8) block coded and
channel coded for OFDM transmission. For transmission 2 - 9 carrier frequencies with DBPSK, DQPSK
or D8PSK modulation can be used.

Figure 65 shows the HDR block structure:

**2 Pre-** **2 Pre-** **1 Pre-**

**Physical** **Physical** **0-Phase** **Logical** **Logical** **Logical** **CTRL** **0-Phase** **0-Phase**

**amble** **amble** **amble** **HDR block Data block**

**sync** **sync** **init 1** **sync 1** **sync 2** **sync 3** **block** **init 2** **init 3**

**symbols** **symbols** **symbol**

**Channel Coder**

**Data**
**fill bits**
**(12,8) block coded**

**(12,8) Block Coder**

**CTRLE** **SA** **DA** **LG**

**Original PL110** **PL110+**

8 bit 16 bit 16 bit 8 bit

**Figure 65 - HDR block ((12,8) block coded)**

###### 5.1.8.10 Data block

5.1.8.10.1 Contents
The Data block shall contain the coded PL110 TPCI, Data, CRC and DOA information. The net data
payload shall be variable in the range 16 byte to 254 byte. Depending on the selected FEC, two different
Data block codings shall be defined.

5.1.8.10.2 Data block (convolutional coded)
In case of convolutional FEC selection at transmitter side, the Data shall be extended with 16 bit CRC,
convolutional coded and channel coded. For transmission 2 - 9 carrier frequencies with DBPSK, DQPSK
or D8PSK modulation can be used.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 51 f 74

|2 Pre-<br>amble<br>symbols|Physical<br>sync|2 Pre-<br>amble<br>symbols|Physical<br>sync|1 Pre-<br>amble<br>symbol|0-Phase<br>init 1|Logical<br>sync 1|Logical<br>sync 2|Logical<br>sync 3|CTRL<br>block|0-Phase<br>init 2|0-Phase<br>init 3|HDR block|Data block|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|Channel Coder|Col2|
|---|---|
|**Channel Coder**|**Channel Coder**|
|**Channel Coder**||

|Col1|Col2|
|---|---|
|**Data**<br>** (12,8) block coded**|**fill bits**|

|Col1|Col2|
|---|---|
|**(12,8) Block Coder**|**(12,8) Block Coder**|

|Col1|Col2|Col3|Col4|
|---|---|---|---|
|**CTRLE**|**SA**|**DA**|**LG**|

|16 bit|16 bit|8 bit|
|---|---|---|


**Data**
**(12,8) block coded**


**(12,8) Block Coder**


**Channel Coder**


**fill bits**


**LG**


**CTRLE**


**DA**


**CTRLE**


**Original PL110**


**Physical**
**sync**


**HDR block Data block**


**Physical**
**sync**


**Logical**
**sync 1**


**Logical**
**sync 3**


**0-Phase**
**init 3**


**0-Phase**
**init 1**


**2 Pre-**
**amble**
**symbols**


**HDR block Data block**


**2 Pre-**
**amble**
**symbols**


**1 Pre-**
**amble**
**symbol**


**Logical**
**sync 2**


**CTRL**
**block**


**0-Phase**
**init 3**


**PL110+**


16 bit


8 bit


-----

Figure 66 shows the Data block structure:

**2 Pre-**
**amble** **Physical** **2 Pre-** **Physical** **1 Pre-** **0-Phase** **Logical** **Logical** **Logical** **CTRL** **0-Phase** **0-Phase**
**symbol** **sync** **amble** **sync** **amble** **init 1** **sync 1** **sync 2** **sync 3** **block** **init 2** **init 3** **HDR block Data block**
**s** **symbols** **symbol**

**Channel Coder**

**data + CRC**
**conv. coder tail-bits** **fill bits**
**Convolutional coded**

**Convolutional Coder**

**TPCI** **n*Data** **FCS** **DOA** **CRC**

**Original PL110** **PL110+**

8 bit n*8 bit 8 bit 8 bit 16 bit

**Figure 66 - Data block (convolutional coded)**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 52 f 74

|2 Pre-<br>amble<br>symbol<br>s|Physical<br>sync|2 Pre-<br>amble<br>symbols|Physical<br>sync|1 Pre-<br>amble<br>symbol|0-Phase<br>init 1|Logical<br>sync 1|Logical<br>sync 2|Logical<br>sync 3|CTRL<br>block|0-Phase<br>init 2|0-Phase<br>init 3|HDR block|Data block|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|Channel Coder|Col2|
|---|---|
|**Channel Coder**|**Channel Coder**|
|**Channel Coder**||

|Col1|Col2|Col3|
|---|---|---|
|**data + CRC**<br>**Convolutional coded**|**conv. coder tail-bits**|**fill bits**|

|Col1|Col2|
|---|---|
|**Convolutional Coder**|**Convolutional Coder**|

|Col1|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**TPCI**|**n*Data**|**FCS**|**DOA**|**CRC**|

|n*8 bit|Col2|8 bit|8 bit|16 bit|
|---|---|---|---|---|


**data + CRC**
**Convolutional coded**


**Convolutional Coder**


**CRC**


**conv. coder tail-bits**


**Channel Coder**


**DOA**


**n*Data**


**DOA**


**TPCI**


**Original PL110**


**fill bits**


**Physical**
**sync**


**HDR block Data block**


**Physical**
**sync**


**0-Phase**
**init 1**


**Logical**
**sync 2**


**CTRL**
**block**


**Physical**
**sync**


**2 Pre-**
**amble**
**symbols**


**HDR block Data block**


**2 Pre-**
**amble**
**symbols**


**1 Pre-**
**amble**
**symbol**


**Logical**
**sync 2**


**CTRL**
**block**


**0-Phase**
**init 3**


16 bit


**PL110+**


8 bit


8 bit


-----

5.1.8.10.3 Data block ((12,8) block coded)
In case of (12,8) block FEC selection at transmitter side, the Data shall be (12,8) block coded and channel
coded for OFDM transmission. For transmission 2 - 9 carrier frequencies with DBPSK, DQPSK or
D8PSK modulation can be used.

Figure 67 shows the Data block structure:

**2 Pre-** **2 Pre-** **1 Pre-**

**Physical** **Physical** **0-Phase** **Logical** **Logical** **Logical** **CTRL** **0-Phase** **0-Phase**

**amble** **amble** **amble** **HDR block Data block**

**sync** **sync** **init 1** **sync 1** **sync 2** **sync 3** **block** **init 2** **init 3**

**symbols** **symbols** **symbol**

**Channel Code**

**Data**
**fill bits**
**(12,8) block coded**

**(12,8) Block Coder**

**TPCI** **n*Data** **FCS** **DOA**

**Original PL110** **PL110+**

8 bit n*8 bit 8 bit 8 bit

**Figure 67 - Data block ((12,8) block coded)**

###### 5.1.8.11 Faulty transmission detection

5.1.8.11.1 Definition
The Forward Error Correction (FEC) of the PL110+ Physical Layer shall be done by convolutional
coding or power line (12,8) block – coding, depending on the selected logical sync set data at transmitter
side.

The faulty transmission detection shall be done by Viterbi decoding or power line (12,8) block decoding,
depending on the transmitted logical sync set data.

Additionally further channel coding shall be done to improve the OFDM transmission robustness against
interferers. Therefore an interframe bit interleaving, a bit scrambling and a frequency hopping shall be
realized.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 53 f 74

|2 Pre-<br>amble<br>symbols|Physical<br>sync|2 Pre-<br>amble<br>symbols|Physical<br>sync|1 Pre-<br>amble<br>symbol|0-Phase<br>init 1|Logical<br>sync 1|Logical<br>sync 2|Logical<br>sync 3|CTRL<br>block|0-Phase<br>init 2|0-Phase<br>init 3|HDR block|Data block|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|

|Channel Code|Col2|
|---|---|
|**Channel Code**|**Channel Code**|
|**Channel Code**||

|Col1|Col2|
|---|---|
|**Data**<br>**(12,8) block  coded**|**fill bits**|

|Col1|Col2|
|---|---|
|**(12,8) Block Coder**|**(12,8) Block Coder**|

|Col1|Col2|Col3|Col4|
|---|---|---|---|
|**TPCI**|**n*Data**|**FCS**|**DOA**|

|n*8 bit|Col2|8 bit|8 bit|
|---|---|---|---|


**Data**
**(12,8) block coded**


**(12,8) Block Coder**


**Channel Code**


**fill bits**


**DOA**


**n*Data**


**DOA**


**TPCI**


**Original PL110**


**Physical**
**sync**


**0-Phase**
**init 3**


**2 Pre-**
**amble**
**symbols**


**1 Pre-**
**amble**
**symbol**


**Logical**
**sync 2**


**CTRL**
**block**


**HDR block Data block**


**2 Pre-**
**amble**
**symbols**


**Physical**
**sync**


**0-Phase**
**init 1**


**Logical**
**sync 2**


**CTRL**
**block**


**HDR block Data block**


**0-Phase**
**init 2**


**PL110+**


n*8 bit


8 bit


-----

Figure 68 visualizes the complete coding path for a PL110+ transmitter and receiver:

Data
**FEC** **Hopping**

**CRC** **Interleaver** **Scrambler** **Modulator**

**(Convolutional / 8to12)** **Allocation**

OFDM TX

Data

**Hopping** **Error Correction** **CRC**
**Demodulator** **Descrambler** **Deinterleaver**
**Deallocation** **(Viterbi / 12to8)** **Check**

OFDM RX

**Figure 68 - PL110+ coding path**

5.1.8.11.2 Convolutional coding
The convolutional coder shall have a code rate of 50 % and a constraint length of k = 6. The
convolutional code shall be non-systematic and non-recursive. The following polynomials shall be used:

𝑮𝑨 = 𝟏+ 𝑫𝟏 + 𝑫𝟑 + 𝑫𝟒 + 𝑫𝟓

𝑮𝑩 = 𝟏+ 𝑫𝟐 + 𝑫𝟒 + 𝑫𝟓

Figure 69 shows the convolutional coder structure:

Polynomial A

Output 1

Input
𝑍[−1] 𝑍[−1] 𝑍[−1] 𝑍[−1] 𝑍[−1]

Output 2

Polynomial B

**Figure 69 - Convolutional coder structure**

Data octets shall be shifted bit-wise into the convolutional coder with MSB first. Data shall be shifted out
of the coder with the order {Output 1, Output 2}. Output 1 shall represent the MSB and Output 2 shall
represent the LSB.

The convolutional coder produces tail-bits that shall be transmitted additionally at the end of every
convolutional coded data block. The number of tail-bits shall be calculated with (K-1)*2. The number
depends on the code rate and the constraint length of the convolutional coder. Additionally fill bits
(typically 0) shall be added to fill up the current 833µs symbol and/or fill up the actual interleaving block
size. This is especially necessary after the CTRL block since the coding can be changed at this point.

data block conv. coder fill bits
convolutional coded (data*2) tail-bits

**Figure 70 - Convolutional coded data block, tail- and fill- bits**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 54 f 74

|Data<br>FEC Hopping<br>CRC Interleaver Scrambler Modulator<br>(Convolutional / 8to12) Allocation<br>OFDM TX|Data<br>FEC Hopping<br>CRC Interleaver Scrambler Modulator<br>(Convolutional / 8to12) Allocation<br>OFDM TX|Col3|
|---|---|---|
|**Demodulator**<br>**Hopping**<br>**Deallocation**<br>**Descrambler**<br>**Deinterleaver**<br>**Error Correction**<br>**(Viterbi / 12to8) **<br>**CRC**<br>**Check**<br>Data<br>OFDM RX|**Demodulator**<br>**Hopping**<br>**Deallocation**<br>**Descrambler**<br>**Deinterleaver**<br>**Error Correction**<br>**(Viterbi / 12to8) **<br>**CRC**<br>**Check**<br>Data<br>OFDM RX|**Demodulator**<br>**Hopping**<br>**Deallocation**<br>**Descrambler**<br>**Deinterleaver**<br>**Error Correction**<br>**(Viterbi / 12to8) **<br>**CRC**<br>**Check**<br>Data<br>OFDM RX|
|**Demodulator**<br>**Hopping**<br>**Deallocation**<br>**Descrambler**<br>**Deinterleaver**<br>**Error Correction**<br>**(Viterbi / 12to8) **<br>**CRC**<br>**Check**<br>Data<br>OFDM RX|**Demodulator**<br>**Hopping**<br>**Deallocation**<br>**Descrambler**<br>**Deinterleaver**<br>**Error Correction**<br>**(Viterbi / 12to8) **<br>**CRC**<br>**Check**<br>Data<br>OFDM RX|**Demodulator**<br>**Hopping**<br>**Deallocation**<br>**Descrambler**<br>**Deinterleaver**<br>**Error Correction**<br>**(Viterbi / 12to8) **<br>**CRC**<br>**Check**<br>Data<br>OFDM RX|
||||

|Polynomial A|Col2|Col3|
|---|---|---|
||||
||𝑍−1 <br>𝑍−1 <br>𝑍−1 <br>𝑍−1|𝑍−1|

|Col1|Col2|
|---|---|
|𝑍−1 <br>𝑍−1 <br>𝑍−1 <br>𝑍−1 <br>𝑍−1 <br>Input<br>Output 1<br>Output 2<br>Polynomial B<br>Polynomial A|𝑍−1 <br>𝑍−1 <br>𝑍−1 <br>𝑍−1 <br>𝑍−1 <br>Input<br>Output 1<br>Output 2<br>Polynomial B<br>Polynomial A|

|data block<br>convolutional coded (data*2)|conv. coder<br>tail-bits|fill bits|
|---|---|---|


data block
convolutional coded (data*2)


conv. coder

tail-bits


**Error Correction**

**(Viterbi / 12to8)**


**FEC**
**(Convolutional / 8to12)**


fill bits


**Hopping**
**Deallocation**


**Demodulator**


**Demodulator**


**Deinterleaver**


**Deinterleaver**


**Scrambler**


**Hopping**
**Allocation**


**Scrambler**


Polynomial A


**CRC**
**Check**


𝑍[−1]


𝑍[−1]


𝑍[−1]


**CRC**


𝑍[−1]


𝑍[−1]


Output 2


OFDM RX


Input


Data


-----

Every data block that will be convolutional coded, shall first be protected by a CRC to ensure the data
validity after decoding. The CRC shall always be the last information in a data block and shall cover the
whole block except the CRC itself. The CTRL block (refer to clause 5.1.8.3.1) shall be protected by an
8 bit CRC. All other data blocks shall be protected by a 16 bit CRC. It shall be transmitted high byte first
and then low byte. The following CRC-CCITT polynomials and initial values shall be used:

Polynomial 𝑥[8] + 𝑥[2] + 𝑥+ 1

CRC order 8

Initial value FFh

**Figure 71 – CRC-8 polynomial and initial value for convolutional coded data block**

EXAMPLE 3 For CRC-8: The CRC calculation of the data sequence {3Ch, E0h, FFh, FFh, 17h, D0h, 20h} shall have the CRC-8
result 0Eh.

Polynomial 𝑥[16] + 𝑥[12] + 𝑥[5] + 1

CRC order 16

Initial value FFFFh

**Figure 72 – CRC-16 polynomial and initial value for convolutional coded data block**

EXAMPLE 4 For CRC-16: The CRC calculation of the data sequence {3Ch, E0h, FFh, FFh, 17h, D0h, 20h} shall have the CRC16 result 97AAh.

The typical block structure for convolutional coded data with16 bit CRC is shown in Figure 73.

**DATA**
**block**

**DATA + CRC** **conv. coder** **fill bits**
**Convolutional coded** **tail-bits**

(n*16+32) bit 10 bit

**Convolutional Coder**

**DATA** **CRC**

16 bit

**DATA**

n*8 bit

**Figure 73 - Block structure for convolutional coded data (16 bit CRC)**

Any block (CTRL, HDR, DATA) shall be adapted into this block structure.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 55 f 74

|Polynomial|𝑥8 + 𝑥2 + 𝑥+ 1|
|---|---|
|CRC order|8|
|Initial value|FFh|

|Polynomial|𝑥16 + 𝑥12 + 𝑥5 + 1|
|---|---|
|CRC order|16|
|Initial value|FFFFh|

|DATA + CRC<br>Convolutional coded|conv. coder<br>tail-bits|fill bits|
|---|---|---|

|Col1|Col2|
|---|---|
|**Convolutional Coder**|**Convolutional Coder**|

|Col1|Col2|
|---|---|
|**DATA**|**CRC**|

|Col1|Col2|16 bit|
|---|---|---|
|**DATA**|**DATA**|**DATA**|
|n*8 bit|n*8 bit|n*8 bit|


**DATA + CRC**
**Convolutional coded**


**CRC**


**Convolutional Coder**


**DATA**


**DATA**


**DATA**


**fill bits**


**fill bits**


16 bit


n*8 bit


-----

The convolutional coder shall work together with a Viterbi decoder at receiver side and shall be able to
correct different kinds of error patterns. It is more flexible than the 8to12 block FEC of the PL110
standard and is recommended for OFDM long-frame data transmission.

The Viterbi decoder shall be the implementation of a trellis diagram construction with traceback
functionality. The trellis diagram shall represent a linear time sequencing of events, while the x-axis is
discrete, the y-axis shows all states.

**Sta**
**te**

**Figure 74 - Trellis diagram (example)**

Figure 74 demonstrates just a small trellis as an example for decoding a convolutional code with the
constraint length k = 3. For PL110+ devices a constraint length k = 6 shall be used and the trellis shall
have 32 states on the y-axis. The x-axis shall depend on the block length. The start situation and the end
situation shall be known, because of the used tail-bits in the convolutional encoder. There shall only be
two possible next states from every point in the trellis. Using the mentioned two facts, the Viterbi
algorithm shall find the most likely sequence of states through the trellis. More information about the
Viterbi algorithm and its way of finding the right bit sequence through the trellis will follow in the next
clauses.

The Viterbi algorithm shall consist of three main parts that shall calculate the branch metric: the path
metric and finally the traceback.

In every received tuple of bits the distance between the tuple and every possible symbol in the code
alphabet shall be calculated. This is called the branch metric. In case of the shown trellis (see Figure 74),
2 times 4 branch metrics shall be calculated. The branch metric shall be compared and the one with the
smallest value shall be taken (survivor).

The path metrics shall be the accumulated branch metrics for all 2[𝑘−1] paths, while one path can be
selected as the perfect path through the trellis.

The traceback shall start at the end of the trellis and shall follow the path with the minimum path metric
and so the bit sequence that is most likely sent shall be found.

**5.1.8.11.3 (8,12) block coding**
This coding complies fully with PL110 EN (12,8) block coding definitions. Please refer to clause 4.1.7.5.

The typical block structure for (12,8) block coded data shows Figure 75:

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 56 f 74


**Sta**
**te**


-----

|data<br>(12,8) block coded (data*1,5)|fill bits|
|---|---|

|Col1|Col2|
|---|---|
|**(12,8) Block Code**|**(12,8) Block Code**|

|Col1|Col2|Col3|
|---|---|---|
|**DATA**|**DATA**|**DATA**|
||n*8 bit|n*8 bit|


**data**
**(12,8) block coded (data*1,5)**


**(12,8) Block Code**


**DATA**


**fill bits**


**fill bits**


n*12 bit


**Figure 75 - Block structure for (12,8) block coded data**

Additionally fill bits (typically 0) shall be added to fill up the current 833 µs symbol and/or fill up the
actual interleaving block size. This is especially necessary after the CTRL block since the coding can be
changed at this point.

**5.1.8.11.4 Interframe bit interleaving and frequency hopping**
The main purpose of the interframe interleaver together with the frequency hopping bit allocation is to
avoid burst errors in the received data stream. This is an additional OFDM feature to have a better
probability to fix occurred errors with the convolutional encoder and the Viterbi decoder. Typical
problems in the power line channel are interferences in the spectrum that may cause groups of subcarriers
to be disturbed. To reduce the appearance of having many bit errors in row that cannot be fixed especially
for the higher modulations like the D8PSK, interframe interleaving shall be performed.

The interleaver shall work using interleaving tables that shall describe the assignment of individual TX
data bits to OFDM modulation bits and OFDM symbols. The interleaver shall interleave the data within
up to 9 OFDM symbols. Additionally the interleaver shall use fill bits (typically 0 bits) if there is no more
incoming data and the interleaving symbols are not completely assigned.

The frequency hopping bit allocation shall assign the interleaved bits to active OFDM carriers. Depending
on the hopping scheme in the tables, the active carrier selection of an OFDM symbol shall change from
transmitted symbol to symbol. If a carrier is not assigned, it shall be switched off.

The following tables will define the interleaving patterns and frequency hopping schemes for the used
modulations and in detail which bit number / numbers are assigned to the symbols and related active
OFDM carriers:

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 57 f 74


**data**
**(12,8) block coded (data*1,5)**


**DATA**


**DATA block**


-----

|Carriers|Modulation|bits/<br>Carrier|Inter-<br>leaved<br>bits|Symbol<br>No.|Assigned<br>bits Carrier<br>1|Assigned<br>bits Carrier<br>2|Assigned<br>bits Carrier<br>3|Assigned<br>bits Carrier<br>4|Assigned<br>bits Carrier<br>5|Assigned<br>bits Carrier<br>6|Assigned<br>bits Carrier<br>7|Assigned<br>bits Carrier<br>8|Assigned<br>bits Carrier<br>9|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**2 **|**DBPSK**|**1 **|**16**|**1 **|0||||9||||-|
|**2 **|**DBPSK**|**1 **|**16**|**2 **||10||||3|||-|
|**2 **|**DBPSK**|**1 **|**16**|**3 **|||4||||13||-|
|**2 **|**DBPSK**|**1 **|**16**|**4 **||||14||||7|-|
|**2 **|**DBPSK**|**1 **|**16**|**5 **|8||||1||||-|
|**2 **|**DBPSK**|**1 **|**16**|**6 **||2||||11|||-|
|**2 **|**DBPSK**|**1 **|**16**|**7 **|||12||||5||-|
|**2 **|**DBPSK**|**1 **|**16**|**8 **||||6||||15|-|
|||||||||||||||
|**2 **|**DQPSK**|**2 **|**32**|**1 **|0,  8||||17, 25||||-|
|**2 **|**DQPSK**|**2 **|**32**|**2 **||18, 26||||3, 11|||-|
|**2 **|**DQPSK**|**2 **|**32**|**3 **|||4, 12||||21, 29||-|
|**2 **|**DQPSK**|**2 **|**32**|**4 **||||22, 30||||7, 15|-|
|**2 **|**DQPSK**|**2 **|**32**|**5 **|16, 24||||1,  9||||-|
|**2 **|**DQPSK**|**2 **|**32**|**6 **||2, 10||||19, 27|||-|
|**2 **|**DQPSK**|**2 **|**32**|**7 **|||20, 28||||5, 13||-|
|**2 **|**DQPSK**|**2 **|**32**|**8 **||||6, 14||||23, 31|-|
|||||||||||||||
|**2 **|**D8PSK**|**3 **|**48**|**1 **|0,  8, 16||||25, 33, 41||||-|
|**2 **|**D8PSK**|**3 **|**48**|**2 **||26, 34, 42||||3, 11, 19|||-|
|**2 **|**D8PSK**|**3 **|**48**|**3 **|||4, 12, 20||||29, 37, 45||-|
|**2 **|**D8PSK**|**3 **|**48**|**4 **||||30, 38, 46||||7, 15, 23|-|
|**2 **|**D8PSK**|**3 **|**48**|**5 **|24, 32, 40||||1,  9, 17||||-|
|**2 **|**D8PSK**|**3 **|**48**|**6 **||2, 10, 18||||27, 35, 43|||-|
|**2 **|**D8PSK**|**3 **|**48**|**7 **|||28, 36, 44||||5, 13, 21||-|
|**2 **|**D8PSK**|**3 **|**48**|**8 **||||6, 14, 22||||31, 39, 47|-|


**Figure 76 - 2 Carrier bit interleaving and frequency hopping for BPSK, QPSK and 8PSK**

**Inter-** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned**

**bits/** **leaved** **Symbol** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier**

**Carriers** **Modulation** **Carrier** **bits** **No.** **1** **2** **3** **4** **5** **6** **7** **8** **9**

**3** **DBPSK** **1** **27** **1** 0 19 11
**2** 12 4 23
**3** 24 16 8
**4** 9 1 20
**5** 21 13 5
**6** 6 25 17
**7** 18 10 2
**8** 3 22 14
**9** 15 7 26

**3** **DQPSK** **2** **54** **1** 0, 9 37, 46 20, 29
**2** 21, 30 4, 13 41, 50
**3** 42, 51 25, 34 8, 17
**4** 18, 27 1, 10 38, 47
**5** 39, 48 22, 31 5, 14
**6** 6, 15 43, 52 26, 35
**7** 36, 45 19, 28 2, 11
**8** 3, 12 40, 49 23, 32
**9** 24, 33 7, 16 44, 53

**3** **D8PSK** **3** **81** **1** 0, 9, 18 55, 64, 73 29, 38, 47
**2** 30, 39, 48 4, 13, 22 59, 68, 77
**3** 60, 69, 78 34, 43, 52 8, 17, 26
**4** 27, 36, 45 1, 10, 19 56, 65, 74
**5** 57, 66, 75 31, 40, 49 5, 14, 23
**6** 6, 15, 24 61, 70, 79 35, 44, 53
**7** 54, 63, 72 28, 37, 46 2, 11, 20
**8** 3, 12, 21 58, 67, 76 32, 41, 50
**9** 33, 42, 51 7, 16, 25 62, 71, 80

**Figure 77 - 3 Carrier bit interleaving and frequency hopping for BPSK, QPSK and 8PSK**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 58 f 74

|Carriers|Modulation|bits/<br>Carrier|Inter-<br>leaved<br>bits|Symbol<br>No.|Assigned<br>bits Carrier<br>1|Assigned<br>bits Carrier<br>2|Assigned<br>bits Carrier<br>3|Assigned<br>bits Carrier<br>4|Assigned<br>bits Carrier<br>5|Assigned<br>bits Carrier<br>6|Assigned<br>bits Carrier<br>7|Assigned<br>bits Carrier<br>8|Assigned<br>bits Carrier<br>9|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**3 **|**DBPSK**|**1 **|**27**|**1 **|0|||||19|11|||
|**3 **|**DBPSK**|**1 **|**27**|**2 **||12|||4|||23||
|**3 **|**DBPSK**|**1 **|**27**|**3 **|||24|16|||||8|
|**3 **|**DBPSK**|**1 **|**27**|**4 **|9|||||1|20|||
|**3 **|**DBPSK**|**1 **|**27**|**5 **||21|||13|||5||
|**3 **|**DBPSK**|**1 **|**27**|**6 **|||6|25|||||17|
|**3 **|**DBPSK**|**1 **|**27**|**7 **|18|||||10|2|||
|**3 **|**DBPSK**|**1 **|**27**|**8 **||3|||22|||14||
|**3 **|**DBPSK**|**1 **|**27**|**9 **|||15|7|||||26|
|||||||||||||||
|**3 **|**DQPSK**|**2 **|**54**|**1 **|0,  9|||||37, 46|20, 29|||
|**3 **|**DQPSK**|**2 **|**54**|**2 **||21, 30|||4, 13|||41, 50||
|**3 **|**DQPSK**|**2 **|**54**|**3 **|||42, 51|25, 34|||||8, 17|
|**3 **|**DQPSK**|**2 **|**54**|**4 **|18, 27|||||1, 10|38, 47|||
|**3 **|**DQPSK**|**2 **|**54**|**5 **||39, 48|||22, 31|||5, 14||
|**3 **|**DQPSK**|**2 **|**54**|**6 **|||6, 15|43, 52|||||26, 35|
|**3 **|**DQPSK**|**2 **|**54**|**7 **|36, 45|||||19, 28|2, 11|||
|**3 **|**DQPSK**|**2 **|**54**|**8 **||3, 12|||40, 49|||23, 32||
|**3 **|**DQPSK**|**2 **|**54**|**9 **|||24, 33|7, 16|||||44, 53|
|||||||||||||||
|**3 **|**D8PSK**|**3 **|**81**|**1 **|0,  9, 18|||||55, 64, 73|29, 38, 47|||
|**3 **|**D8PSK**|**3 **|**81**|**2 **||30, 39, 48|||4, 13, 22|||59, 68, 77||
|**3 **|**D8PSK**|**3 **|**81**|**3 **|||60, 69, 78|34, 43, 52|||||8, 17, 26|
|**3 **|**D8PSK**|**3 **|**81**|**4 **|27, 36, 45|||||1, 10, 19|56, 65, 74|||
|**3 **|**D8PSK**|**3 **|**81**|**5 **||57, 66, 75|||31, 40, 49|||5, 14, 23||
|**3 **|**D8PSK**|**3 **|**81**|**6 **|||6, 15, 24|61, 70, 79|||||35, 44, 53|
|**3 **|**D8PSK**|**3 **|**81**|**7 **|54, 63, 72|||||28, 37, 46|2, 11, 20|||
|**3 **|**D8PSK**|**3 **|**81**|**8 **||3, 12, 21|||58, 67, 76|||32, 41, 50||
|**3 **|**D8PSK**|**3 **|**81**|**9 **|||33, 42, 51|7, 16, 25|||||62, 71, 80|


-----

|Carriers|Modulation|bits/<br>Carrier|Inter-<br>leaved<br>bits|Symbol<br>No.|Assigned<br>bits Carrier<br>1|Assigned<br>bits Carrier<br>2|Assigned<br>bits Carrier<br>3|Assigned<br>bits Carrier<br>4|Assigned<br>bits Carrier<br>5|Assigned<br>bits Carrier<br>6|Assigned<br>bits Carrier<br>7|Assigned<br>bits Carrier<br>8|Assigned<br>bits Carrier<br>9|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**4 **|**DBPSK**|**1 **|**32**|**1 **|||0|25||18|11|||
|**4 **|**DBPSK**|**1 **|**32**|**2 **||12|||5|||30|23|
|**4 **|**DBPSK**|**1 **|**32**|**3 **|||16|9||2|27|||
|**4 **|**DBPSK**|**1 **|**32**|**4 **||28|||21|||14|7|
|**4 **|**DBPSK**|**1 **|**32**|**5 **|||8|1||26|19|||
|**4 **|**DBPSK**|**1 **|**32**|**6 **|31|20|||13|||6||
|**4 **|**DBPSK**|**1 **|**32**|**7 **|||24|17||10|3|||
|**4 **|**DBPSK**|**1 **|**32**|**8 **|15|4|||29|||22||
|||||||||||||||
|**4 **|**DQPSK**|**2 **|**64**|**1 **|||0,  8|49, 57||34, 42|19, 27|||
|**4 **|**DQPSK**|**2 **|**64**|**2 **||20, 28|||5, 13|||54, 62|39, 47|
|**4 **|**DQPSK**|**2 **|**64**|**3 **|||32, 40|17, 25||2, 10|51, 59|||
|**4 **|**DQPSK**|**2 **|**64**|**4 **||52, 60|||37, 45|||22, 30|7, 15|
|**4 **|**DQPSK**|**2 **|**64**|**5 **|||16, 24|1,  9||50, 58|35, 43|||
|**4 **|**DQPSK**|**2 **|**64**|**6 **|55, 63|36, 44|||21, 29|||6, 14||
|**4 **|**DQPSK**|**2 **|**64**|**7 **|||48, 56|33, 41||18, 26|3, 11|||
|**4 **|**DQPSK**|**2 **|**64**|**8 **|23, 31|4, 12|||53, 61|||38, 46||
|||||||||||||||
|**4 **|**D8PSK**|**3 **|**96**|**1 **|||0,  8, 16|73, 81, 89||50, 58, 66|27, 35, 43|||
|**4 **|**D8PSK**|**3 **|**96**|**2 **||28, 36, 44|||5, 13, 21|||78, 86, 94|55, 63, 71|
|**4 **|**D8PSK**|**3 **|**96**|**3 **|||48, 56, 64|25, 33, 41||2, 10, 18|75, 83, 91|||
|**4 **|**D8PSK**|**3 **|**96**|**4 **||76, 84, 92|||53, 61, 69|||30, 38, 46|7, 15, 23|
|**4 **|**D8PSK**|**3 **|**96**|**5 **|||24, 32, 40|1,  9, 17||74, 82, 90|51, 59, 67|||
|**4 **|**D8PSK**|**3 **|**96**|**6 **|79, 87, 95|52, 60, 68|||29, 37, 45|||6, 14, 22||
|**4 **|**D8PSK**|**3 **|**96**|**7 **|||72, 80, 88|49, 57, 65||26, 34, 42|3, 11, 19|||
|**4 **|**D8PSK**|**3 **|**96**|**8 **|31, 39, 47|4, 12, 20|||77, 85, 93|||54, 62, 70||


**Figure 78 - 4 Carrier bit interleaving and frequency hopping for BPSK, QPSK and 8PSK**

**Inter-** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned**

**bits/** **leaved** **Symbol** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier**

**Carriers** **Modulation** **Carrier** **bits** **No.** **1** **2** **3** **4** **5** **6** **7** **8** **9**

**5** **DBPSK** **1** **45** **1** 20 12 4 36 28
**2** 9 1 42 34 26
**3** 29 21 13 5 37
**4** 0 41 33 25 17
**5** 30 22 14 6 38
**6** 19 11 3 44 27
**7** 39 31 23 15 7
**8** 10 2 43 35 18
**9** 40 32 24 16 8

**5** **DQPSK** **2** **90** **1** 38, 47 21, 30 4, 13 72, 81 55, 64
**2** 18, 27 1, 10 78, 87 61, 70 44, 53
**3** 56, 65 39, 48 22, 31 5, 14 73, 82
**4** 0, 9 77, 86 60, 69 43, 52 26, 35
**5** 57, 66 40, 49 23, 32 6, 15 74, 83
**6** 37, 46 20, 29 3, 12 80, 89 54, 63
**7** 75, 84 58, 67 41, 50 24, 33 7, 16
**8** 19, 28 2, 11 79, 88 62, 71 36, 45
**9** 76, 85 59, 68 42, 51 25, 34 8, 17

**5** **D8PSK** **3** **135** **1** 56, 65, 74 30, 39, 48 4, 13, 22 108,117,126 82, 91,100
**2** 27, 36, 45 1, 10, 19 114,123,132 88, 97,106 62, 71, 80
**3** 83, 92,101 57, 66, 75 31, 40, 49 5, 14, 23 109,118,127
**4** 0, 9, 18 113,122,131 87, 96,105 61, 70, 79 35, 44, 53
**5** 84, 93,102 58, 67, 76 32, 41, 50 6, 15, 24 110,119,128
**6** 55, 64, 73 29, 38, 47 116,125,134 81, 90, 99
**7** 111,120,129 85, 94,103 59, 68, 77 33, 42, 51 7, 16, 25
**8** 28, 37, 46 2, 11, 20 115,124,133 89, 98,107 54, 63, 72
**9** 112,121,130 86, 95,104 60, 69, 78 34, 43, 52 8, 17, 26

**Figure 79 - 5 Carrier bit interleaving and frequency hopping for BPSK, QPSK and 8PSK**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 59 f 74

|Carriers|Modulation|bits/<br>Carrier|Inter-<br>leaved<br>bits|Symbol<br>No.|Assigned<br>bits Carrier<br>1|Assigned<br>bits Carrier<br>2|Assigned<br>bits Carrier<br>3|Assigned<br>bits Carrier<br>4|Assigned<br>bits Carrier<br>5|Assigned<br>bits Carrier<br>6|Assigned<br>bits Carrier<br>7|Assigned<br>bits Carrier<br>8|Assigned<br>bits Carrier<br>9|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**5 **|**DBPSK**|**1 **|**45**|**1 **||20||12|4||36||28|
|**5 **|**DBPSK**|**1 **|**45**|**2 **|9|1||42||34||26||
|**5 **|**DBPSK**|**1 **|**45**|**3 **|29||21||13|5||37||
|**5 **|**DBPSK**|**1 **|**45**|**4 **|0||41||33||25||17|
|**5 **|**DBPSK**|**1 **|**45**|**5 **||30||22||14|6||38|
|**5 **|**DBPSK**|**1 **|**45**|**6 **|19||11|3||44||27||
|**5 **|**DBPSK**|**1 **|**45**|**7 **|39||31||23||15|7||
|**5 **|**DBPSK**|**1 **|**45**|**8 **||10|2||43||35||18|
|**5 **|**DBPSK**|**1 **|**45**|**9 **||40||32||24||16|8|
|||||||||||||||
|**5 **|**DQPSK**|**2 **|**90**|**1 **||38, 47||21, 30|4, 13||72, 81||55, 64|
|**5 **|**DQPSK**|**2 **|**90**|**2 **|18, 27|1, 10||78, 87||61, 70||44, 53||
|**5 **|**DQPSK**|**2 **|**90**|**3 **|56, 65||39, 48||22, 31|5, 14||73, 82||
|**5 **|**DQPSK**|**2 **|**90**|**4 **|0,  9||77, 86||60, 69||43, 52||26, 35|
|**5 **|**DQPSK**|**2 **|**90**|**5 **||57, 66||40, 49||23, 32|6, 15||74, 83|
|**5 **|**DQPSK**|**2 **|**90**|**6 **|37, 46||20, 29|3, 12||80, 89||54, 63||
|**5 **|**DQPSK**|**2 **|**90**|**7 **|75, 84||58, 67||41, 50||24, 33|7, 16||
|**5 **|**DQPSK**|**2 **|**90**|**8 **||19, 28|2, 11||79, 88||62, 71||36, 45|
|**5 **|**DQPSK**|**2 **|**90**|**9 **||76, 85||59, 68||42, 51||25, 34|8, 17|
|||||||||||||||
|**5 **|**D8PSK**|**3 **|**135**|**1 **||56, 65, 74||30, 39, 48|4, 13, 22||108,117,126||82, 91,100|
|**5 **|**D8PSK**|**3 **|**135**|**2 **|27, 36, 45|1, 10, 19||114,123,132||88, 97,106||62, 71, 80||
|**5 **|**D8PSK**|**3 **|**135**|**3 **|83, 92,101||57, 66, 75||31, 40, 49|5, 14, 23||109,118,127||
|**5 **|**D8PSK**|**3 **|**135**|**4 **|0,  9, 18||113,122,131||87, 96,105||61, 70, 79||35, 44, 53|
|**5 **|**D8PSK**|**3 **|**135**|**5 **||84, 93,102||58, 67, 76||32, 41, 50|6, 15, 24||110,119,128|
|**5 **|**D8PSK**|**3 **|**135**|**6 **|55, 64, 73||29, 38, 47|||116,125,134||81, 90, 99||
|**5 **|**D8PSK**|**3 **|**135**|**7 **|111,120,129||85, 94,103||59, 68, 77||33, 42, 51|7, 16, 25||
|**5 **|**D8PSK**|**3 **|**135**|**8 **||28, 37, 46|2, 11, 20||115,124,133||89, 98,107||54, 63, 72|
|**5 **|**D8PSK**|**3 **|**135**|**9 **||112,121,130||86, 95,104||60, 69, 78||34, 43, 52|8, 17, 26|


-----

|Carriers|Modulation|bits/<br>Carrier|Inter-<br>leaved<br>bits|Symbol<br>No.|Assigned<br>bits Carrier<br>1|Assigned<br>bits Carrier<br>2|Assigned<br>bits Carrier<br>3|Assigned<br>bits Carrier<br>4|Assigned<br>bits Carrier<br>5|Assigned<br>bits Carrier<br>6|Assigned<br>bits Carrier<br>7|Assigned<br>bits Carrier<br>8|Assigned<br>bits Carrier<br>9|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**6 **|**DBPSK**|**1 **|**54**|**1 **|0||||49|41|33|16|8|
|**6 **|**DBPSK**|**1 **|**54**|**2 **||46|38|30|22|14|6|||
|**6 **|**DBPSK**|**1 **|**54**|**3 **|27|19|11|3||||43|35|
|**6 **|**DBPSK**|**1 **|**54**|**4 **|36||||31|23|15|52|44|
|**6 **|**DBPSK**|**1 **|**54**|**5 **|9|1|47|39||||25|17|
|**6 **|**DBPSK**|**1 **|**54**|**6 **||28|20|12|4|50|42|||
|**6 **|**DBPSK**|**1 **|**54**|**7 **|18||||13|5|51|34|26|
|**6 **|**DBPSK**|**1 **|**54**|**8 **||10|2|48|40|32|24|||
|**6 **|**DBPSK**|**1 **|**54**|**9 **|45|37|29|21||||7|53|
|||||||||||||||
|**6 **|**DQPSK**|**2 **|**108**|**1 **|0,  9||||94,103|77, 86|60, 69|25, 34|17, 44|
|**6 **|**DQPSK**|**2 **|**108**|**2 **||91,100|74, 83|57, 66|40, 49|23, 32|6, 15|||
|**6 **|**DQPSK**|**2 **|**108**|**3 **|54, 63|37, 46|20, 29|3, 12||||79, 88|71, 98|
|**6 **|**DQPSK**|**2 **|**108**|**4 **|72, 81||||58, 67|41, 50|24, 33|97,106|8, 89|
|**6 **|**DQPSK**|**2 **|**108**|**5 **|18, 27|1, 10|92,101|75, 84||||43, 52|35, 62|
|**6 **|**DQPSK**|**2 **|**108**|**6 **||55, 64|38, 47|21, 30|4, 13|95,104|78, 87|||
|**6 **|**DQPSK**|**2 **|**108**|**7 **|36, 45||||22, 31|5, 14|96,105|61, 70|53, 80|
|**6 **|**DQPSK**|**2 **|**108**|**8 **||19, 28|2, 11|93,102|76, 85|59, 68|42, 51|||
|**6 **|**DQPSK**|**2 **|**108**|**9 **|90, 99|73, 82|56, 65|39, 48||||7, 16|26,107|
|||||||||||||||
|**6 **|**D8PSK**|**3 **|**162**|**1 **|0,  9, 18||||139,148,157|113,122,131|87, 96,105|34, 43, 52|26, 62, 71|
|**6 **|**D8PSK**|**3 **|**162**|**2 **||136,145,154|110,119,128|84, 93,102|58, 67, 76|32, 41, 50|6, 15, 24|||
|**6 **|**D8PSK**|**3 **|**162**|**3 **|81, 90, 99|55, 64, 73|29, 38, 47|3, 12, 21||||115,124,133|107,143,152|
|**6 **|**D8PSK**|**3 **|**162**|**4 **|108,117,126||||85, 94,103|59, 68, 77|33, 42, 51|142,151,160|8, 17,134|
|**6 **|**D8PSK**|**3 **|**162**|**5 **|27, 36, 45|1, 10, 19|137,146,155|111,120,129||||61, 70, 79|53, 89, 98|
|**6 **|**D8PSK**|**3 **|**162**|**6 **||82, 91,100|56, 65, 74|30, 39, 48|4, 13, 22|140,149,158|114,123,132|||
|**6 **|**D8PSK**|**3 **|**162**|**7 **|54, 63, 72||||31, 40, 49|5, 14, 23|141,150,159|88, 97,106|80,116,125|
|**6 **|**D8PSK**|**3 **|**162**|**8 **||28, 37, 46|2, 11, 20|138,147,156|112,121,130|86, 95,104|60, 69, 78|||
|**6 **|**D8PSK**|**3 **|**162**|**9 **|135,144,153|109,118,127|83, 92,101|57, 66, 75||||7, 16, 25|35, 44,161|


**Figure 80 - 6 Carrier bit interleaving and frequency hopping for BPSK, QPSK and 8PSK**

**Inter-** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned**

**bits/** **leaved** **Symbol** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier**

**Carriers** **Modulation** **Carrier** **bits** **No.** **1** **2** **3** **4** **5** **6** **7** **8** **9**

**7** **DBPSK** **1** **63** **1** 0 57 49 41 33 25 17
**2** 37 29 21 13 5 62 54
**3** 9 1 58 50 42 34 26
**4** 46 38 30 22 14 6 60
**5** 18 10 2 59 51 43 35
**6** 55 47 39 31 23 15 7
**7** 19 11 3 27 52 44 36
**8** 56 48 40 32 24 16 8
**9** 28 20 12 4 61 53 45

**7** **DQPSK** **2** **126** **1** 0, 9 111,120 94,103 77, 86 60, 69 43, 52 26, 35
**2** 73, 82 56, 65 39, 48 22, 31 5, 14 116,124 99,108
**3** 18, 27 1, 10 112,121 95,104 78, 87 61, 70 44, 53
**4** 91,100 74, 83 57, 66 40, 49 23, 32 6, 15 117,125
**5** 36, 45 19, 28 2, 11 113,122 96,105 79, 88 62, 71
**6** 109,118 92,101 75, 84 58, 67 41, 50 24, 33 7, 16
**7** 37, 46 20, 29 3, 12 54,114 97,106 80, 89 63, 72
**8** 110,119 93,102 76, 85 59, 68 42, 51 25, 34 8, 17
**9** 55, 64 38, 47 21, 30 4, 13 115,123 98,107 81, 90

**7** **D8PSK** **3** **189** **1** 0, 9, 18 165,174,183 139,148,157 113,122,131 87, 96,105 61, 70, 79 35, 44, 53
**2** 109,118,127 83, 92,101 57, 66, 75 31, 40, 49 5, 14, 23 170,179,187 144,153,162
**3** 27, 36, 45 1, 10, 19 166,175,184 140,149,158 114,123,132 88, 97,106 62, 71, 80
**4** 136,145,154 110,119,128 84, 93,102 58, 67, 76 32, 41, 50 6, 15, 24 171,180,188
**5** 54, 63, 72 28, 37, 46 2, 11, 20 167,176,185 141,150,159 115,124,133 89, 98,107
**6** 163,172,181 137,146,155 111,120,129 85, 94,103 59, 68, 77 33, 42, 51 7, 16, 25
**7** 55, 64, 73 29, 38, 47 3, 12, 21 81,168,177 142,151,160 116,125,134 90, 99,108
**8** 164,173,182 138,147,156 112,121,130 86, 95,104 60, 69, 78 34, 43, 52 8, 17, 26
**9** 82, 91,100 56, 65, 74 30, 39, 48 4, 13, 22 169,178,186 143,152,161 117,126,135

**Figure 81 - 7 Carrier bit interleaving and frequency hopping for BPSK, QPSK and 8PSK**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 60 f 74

|Carriers|Modulation|bits/<br>Carrier|Inter-<br>leaved<br>bits|Symbol<br>No.|Assigned<br>bits Carrier<br>1|Assigned<br>bits Carrier<br>2|Assigned<br>bits Carrier<br>3|Assigned<br>bits Carrier<br>4|Assigned<br>bits Carrier<br>5|Assigned<br>bits Carrier<br>6|Assigned<br>bits Carrier<br>7|Assigned<br>bits Carrier<br>8|Assigned<br>bits Carrier<br>9|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**7 **|**DBPSK**|**1 **|**63**|**1 **|0||57|49|41|33||25|17|
|**7 **|**DBPSK**|**1 **|**63**|**2 **|37|29||21|13|5||62|54|
|**7 **|**DBPSK**|**1 **|**63**|**3 **|9|1||58|50|42|34||26|
|**7 **|**DBPSK**|**1 **|**63**|**4 **|46|38|30||22|14|6||60|
|**7 **|**DBPSK**|**1 **|**63**|**5 **|18|10|2||59|51|43|35||
|**7 **|**DBPSK**|**1 **|**63**|**6 **|55|47|39|31||23|15|7||
|**7 **|**DBPSK**|**1 **|**63**|**7 **||19|11|3||27|52|44|36|
|**7 **|**DBPSK**|**1 **|**63**|**8 **||56|48|40|32||24|16|8|
|**7 **|**DBPSK**|**1 **|**63**|**9 **|28||20|12|4||61|53|45|
|||||||||||||||
|**7 **|**DQPSK**|**2 **|**126**|**1 **|0,  9||111,120|94,103|77, 86|60, 69||43, 52|26, 35|
|**7 **|**DQPSK**|**2 **|**126**|**2 **|73, 82|56, 65||39, 48|22, 31|5, 14||116,124|99,108|
|**7 **|**DQPSK**|**2 **|**126**|**3 **|18, 27|1, 10||112,121|95,104|78, 87|61, 70||44, 53|
|**7 **|**DQPSK**|**2 **|**126**|**4 **|91,100|74, 83|57, 66||40, 49|23, 32|6, 15||117,125|
|**7 **|**DQPSK**|**2 **|**126**|**5 **|36, 45|19, 28|2, 11||113,122|96,105|79, 88|62, 71||
|**7 **|**DQPSK**|**2 **|**126**|**6 **|109,118|92,101|75, 84|58, 67||41, 50|24, 33|7, 16||
|**7 **|**DQPSK**|**2 **|**126**|**7 **||37, 46|20, 29|3, 12||54,114|97,106|80, 89|63, 72|
|**7 **|**DQPSK**|**2 **|**126**|**8 **||110,119|93,102|76, 85|59, 68||42, 51|25, 34|8, 17|
|**7 **|**DQPSK**|**2 **|**126**|**9 **|55, 64||38, 47|21, 30|4, 13||115,123|98,107|81, 90|
|||||||||||||||
|**7 **|**D8PSK**|**3 **|**189**|**1 **|0,  9, 18||165,174,183|139,148,157|113,122,131|87, 96,105||61, 70, 79|35, 44, 53|
|**7 **|**D8PSK**|**3 **|**189**|**2 **|109,118,127|83, 92,101||57, 66, 75|31, 40, 49|5, 14, 23||170,179,187|144,153,162|
|**7 **|**D8PSK**|**3 **|**189**|**3 **|27, 36, 45|1, 10, 19||166,175,184|140,149,158|114,123,132|88, 97,106||62, 71, 80|
|**7 **|**D8PSK**|**3 **|**189**|**4 **|136,145,154|110,119,128|84, 93,102||58, 67, 76|32, 41, 50|6, 15, 24||171,180,188|
|**7 **|**D8PSK**|**3 **|**189**|**5 **|54, 63, 72|28, 37, 46|2, 11, 20||167,176,185|141,150,159|115,124,133|89, 98,107||
|**7 **|**D8PSK**|**3 **|**189**|**6 **|163,172,181|137,146,155|111,120,129|85, 94,103||59, 68, 77|33, 42, 51|7, 16, 25||
|**7 **|**D8PSK**|**3 **|**189**|**7 **||55, 64, 73|29, 38, 47|3, 12, 21||81,168,177|142,151,160|116,125,134|90, 99,108|
|**7 **|**D8PSK**|**3 **|**189**|**8 **||164,173,182|138,147,156|112,121,130|86, 95,104||60, 69, 78|34, 43, 52|8, 17, 26|
|**7 **|**D8PSK**|**3 **|**189**|**9 **|82, 91,100||56, 65, 74|30, 39, 48|4, 13, 22||169,178,186|143,152,161|117,126,135|


-----

|Carriers|Modulation|bits/<br>Carrier|Inter-<br>leaved<br>bits|Symbol<br>No.|Assigned<br>bits Carrier<br>1|Assigned<br>bits Carrier<br>2|Assigned<br>bits Carrier<br>3|Assigned<br>bits Carrier<br>4|Assigned<br>bits Carrier<br>5|Assigned<br>bits Carrier<br>6|Assigned<br>bits Carrier<br>7|Assigned<br>bits Carrier<br>8|Assigned<br>bits Carrier<br>9|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**8 **|**DBPSK**|**1 **|**72**|**1 **|0||65|57|49|41|33|25|17|
|**8 **|**DBPSK**|**1 **|**72**|**2 **|45|37|29|21|13|5||70|62|
|**8 **|**DBPSK**|**1 **|**72**|**3 **|9|1||66|58|50|42|34|26|
|**8 **|**DBPSK**|**1 **|**72**|**4 **|54|46|38|30|22|14|6||71|
|**8 **|**DBPSK**|**1 **|**72**|**5 **|18|10|2||67|59|51|43|35|
|**8 **|**DBPSK**|**1 **|**72**|**6 **|63|55|47|39|31|23|15|7||
|**8 **|**DBPSK**|**1 **|**72**|**7 **|27|19|11|3||68|60|52|44|
|**8 **|**DBPSK**|**1 **|**72**|**8 **||64|56|48|40|32|24|16|8|
|**8 **|**DBPSK**|**1 **|**72**|**9 **|36|28|20|12|4||69|61|53|
|||||||||||||||
|**8 **|**DQPSK**|**2 **|**144**|**1 **|0,  9||128,137|111,120|94,103|77, 86|60, 69|43, 52|26, 35|
|**8 **|**DQPSK**|**2 **|**144**|**2 **|90, 99|73, 82|56, 65|39, 48|22, 31|5, 14||133,142|116,125|
|**8 **|**DQPSK**|**2 **|**144**|**3 **|18, 27|1, 10||129,138|112,121|95,104|78, 87|61, 70|44, 53|
|**8 **|**DQPSK**|**2 **|**144**|**4 **|108,117|91,100|74, 83|57, 66|40, 49|23, 32|6, 15||134,143|
|**8 **|**DQPSK**|**2 **|**144**|**5 **|36, 45|19, 28|2, 11||130,139|113,122|96,105|79, 88|62, 71|
|**8 **|**DQPSK**|**2 **|**144**|**6 **|126,135|109,118|92,101|75, 84|58, 67|41, 50|24, 33|7, 16||
|**8 **|**DQPSK**|**2 **|**144**|**7 **|54, 63|37, 46|20, 29|3, 12||131,140|114,123|97,106|80, 89|
|**8 **|**DQPSK**|**2 **|**144**|**8 **||127,136|110,119|93,102|76, 85|59, 68|42, 51|25, 34|8, 17|
|**8 **|**DQPSK**|**2 **|**144**|**9 **|72, 81|55, 64|38, 47|21, 30|4, 13||132,141|115,124|98,107|
|||||||||||||||
|**8 **|**D8PSK**|**3 **|**216**|**1 **|0,  9, 18||191,200,209|165,174,183|139,148,157|113,122,131|87, 96,105|61, 70, 79|35, 44, 53|
|**8 **|**D8PSK**|**3 **|**216**|**2 **|135,144,153|109,118,127|83, 92,101|57, 66, 75|31, 40, 49|5, 14, 23||196,205,214|170,179,188|
|**8 **|**D8PSK**|**3 **|**216**|**3 **|27, 36, 45|1, 10, 19||192,201,210|166,175,184|140,149,158|114,123,132|88, 97,106|62, 71, 80|
|**8 **|**D8PSK**|**3 **|**216**|**4 **|162,171,180|136,145,154|110,119,128|84, 93,102|58, 67, 76|32, 41, 50|6, 15, 24||197,206,215|
|**8 **|**D8PSK**|**3 **|**216**|**5 **|54, 63, 72|28, 37, 46|2, 11, 20||193,202,211|167,176,185|141,150,159|115,124,133|89, 98,107|
|**8 **|**D8PSK**|**3 **|**216**|**6 **|189,198,207|163,172,181|137,146,155|111,120,129|85, 94,103|59, 68, 77|33, 42, 51|7, 16, 25||
|**8 **|**D8PSK**|**3 **|**216**|**7 **|81, 90, 99|55, 64, 73|29, 38, 47|3, 12, 21||194,203,212|168,177,186|142,151,160|116,125,134|
|**8 **|**D8PSK**|**3 **|**216**|**8 **||190,199,208|164,173,182|138,147,156|112,121,130|86, 95,104|60, 69, 78|34, 43, 52|8, 17, 26|
|**8 **|**D8PSK**|**3 **|**216**|**9 **|108,117,126|82, 91,100|56, 65, 74|30, 39, 48|4, 13, 22||195,204,213|169,178,187|143,152,161|


**Figure 82 - 8 Carrier bit interleaving and frequency hopping for BPSK, QPSK and 8PSK**

**Inter-** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned** **Assigned**

**bits/** **leaved** **Symbol** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier** **bits Carrier**

**Carriers** **Modulation** **Carrier** **bits** **No.** **1** **2** **3** **4** **5** **6** **7** **8** **9**

**9** **DBPSK** **1** **81** **1** 0 73 65 57 49 41 33 25 17
**2** 45 37 29 21 13 5 78 70 62
**3** 9 1 74 66 58 50 42 34 26
**4** 54 46 38 30 22 14 6 79 71
**5** 18 10 2 75 67 59 51 43 35
**6** 63 55 47 39 31 23 15 7 80
**7** 27 19 11 3 76 68 60 52 44
**8** 72 64 56 48 40 32 24 16 8
**9** 36 28 20 12 4 77 69 61 53

**9** **DQPSK** **2** **162** **1** 0, 9 145,154 128,137 111,120 94,103 77, 86 60, 69 43, 52 26, 35
**2** 90, 99 73, 82 56, 65 39, 48 22, 31 5, 14 150,159 133,142 116,125
**3** 18, 27 1, 10 146,155 129,138 112,121 95,104 78, 87 61, 70 44, 53
**4** 108,117 91,100 74, 83 57, 66 40, 49 23, 32 6, 15 151,160 134,143
**5** 36, 45 19, 28 2, 11 147,156 130,139 113,122 96,105 79, 88 62, 71
**6** 126,135 109,118 92,101 75, 84 58, 67 41, 50 24, 33 7, 16 152,161
**7** 54, 63 37, 46 20, 29 3, 12 148,157 131,140 114,123 97,106 80, 89
**8** 144,153 127,136 110,119 93,102 76, 85 59, 68 42, 51 25, 34 8, 17
**9** 72, 81 55, 64 38, 47 21, 30 4, 13 149,158 132,141 115,124 98,107

**9** **D8PSK** **3** **243** **1** 0, 9, 18 217,226,235 191,200,209 165,174,183 139,148,157 113,122,131 87, 96,105 61, 70, 79 35, 44, 53
**2** 135,144,153 109,118,127 83, 92,101 57, 66, 75 31, 40, 49 5, 14, 23 222,231,240 196,205,214 170,179,188
**3** 27, 36, 45 1, 10, 19 218,227,236 192,201,210 166,175,184 140,149,158 114,123,132 88, 97,106 62, 71, 80
**4** 162,171,180 136,145,154 110,119,128 84, 93,102 58, 67, 76 32, 41, 50 6, 15, 24 223,232,241 197,206,215
**5** 54, 63, 72 28, 37, 46 2, 11, 20 219,228,237 193,202,211 167,176,185 141,150,159 115,124,133 89, 98,107
**6** 189,198,207 163,172,181 137,146,155 111,120,129 85, 94,103 59, 68, 77 33, 42, 51 7, 16, 25 224,233,242
**7** 81, 90, 99 55, 64, 73 29, 38, 47 3, 12, 21 220,229,238 194,203,212 168,177,186 142,151,160 116,125,134
**8** 216,225,234 190,199,208 164,173,182 138,147,156 112,121,130 86, 95,104 60, 69, 78 34, 43, 52 8, 17, 26
**9** 108,117,126 82, 91,100 56, 65, 74 30, 39, 48 4, 13, 22 221,230,239 195,204,213 169,178,187 143,152,161

**Figure 83 - 9 Carrier bit interleaving and frequency hopping for BPSK, QPSK and 8PSK**

The deinterleaver shall work using the same interleaving tables as the interleaver. These shall describe the
assignment of OFDM modulation bits and OFDM symbols to individual TX data bits. The deinterleaver
shall interleave the data within up to 9 OFDM symbols.

The frequency hopping bit deallocation shall assign the active OFDM carriers to interleaved bits.
Depending on the hopping scheme in the tables, the active reception carrier selection of an OFDM
symbol shall change from received symbol to symbol. If a carrier is not assigned, it shall not receive and
hold the carrier absolute phase of last active carrier reception.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 61 f 74

|Carriers|Modulation|bits/<br>Carrier|Inter-<br>leaved<br>bits|Symbol<br>No.|Assigned<br>bits Carrier<br>1|Assigned<br>bits Carrier<br>2|Assigned<br>bits Carrier<br>3|Assigned<br>bits Carrier<br>4|Assigned<br>bits Carrier<br>5|Assigned<br>bits Carrier<br>6|Assigned<br>bits Carrier<br>7|Assigned<br>bits Carrier<br>8|Assigned<br>bits Carrier<br>9|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|**9 **|**DBPSK**|**1 **|**81**|**1 **|0|73|65|57|49|41|33|25|17|
|**9 **|**DBPSK**|**1 **|**81**|**2 **|45|37|29|21|13|5|78|70|62|
|**9 **|**DBPSK**|**1 **|**81**|**3 **|9|1|74|66|58|50|42|34|26|
|**9 **|**DBPSK**|**1 **|**81**|**4 **|54|46|38|30|22|14|6|79|71|
|**9 **|**DBPSK**|**1 **|**81**|**5 **|18|10|2|75|67|59|51|43|35|
|**9 **|**DBPSK**|**1 **|**81**|**6 **|63|55|47|39|31|23|15|7|80|
|**9 **|**DBPSK**|**1 **|**81**|**7 **|27|19|11|3|76|68|60|52|44|
|**9 **|**DBPSK**|**1 **|**81**|**8 **|72|64|56|48|40|32|24|16|8|
|**9 **|**DBPSK**|**1 **|**81**|**9 **|36|28|20|12|4|77|69|61|53|
|||||||||||||||
|**9 **|**DQPSK**|**2 **|**162**|**1 **|0,  9|145,154|128,137|111,120|94,103|77, 86|60, 69|43, 52|26, 35|
|**9 **|**DQPSK**|**2 **|**162**|**2 **|90, 99|73, 82|56, 65|39, 48|22, 31|5, 14|150,159|133,142|116,125|
|**9 **|**DQPSK**|**2 **|**162**|**3 **|18, 27|1, 10|146,155|129,138|112,121|95,104|78, 87|61, 70|44, 53|
|**9 **|**DQPSK**|**2 **|**162**|**4 **|108,117|91,100|74, 83|57, 66|40, 49|23, 32|6, 15|151,160|134,143|
|**9 **|**DQPSK**|**2 **|**162**|**5 **|36, 45|19, 28|2, 11|147,156|130,139|113,122|96,105|79, 88|62, 71|
|**9 **|**DQPSK**|**2 **|**162**|**6 **|126,135|109,118|92,101|75, 84|58, 67|41, 50|24, 33|7, 16|152,161|
|**9 **|**DQPSK**|**2 **|**162**|**7 **|54, 63|37, 46|20, 29|3, 12|148,157|131,140|114,123|97,106|80, 89|
|**9 **|**DQPSK**|**2 **|**162**|**8 **|144,153|127,136|110,119|93,102|76, 85|59, 68|42, 51|25, 34|8, 17|
|**9 **|**DQPSK**|**2 **|**162**|**9 **|72, 81|55, 64|38, 47|21, 30|4, 13|149,158|132,141|115,124|98,107|
|||||||||||||||
|**9 **|**D8PSK**|**3 **|**243**|**1 **|0,  9, 18|217,226,235|191,200,209|165,174,183|139,148,157|113,122,131|87, 96,105|61, 70, 79|35, 44, 53|
|**9 **|**D8PSK**|**3 **|**243**|**2 **|135,144,153|109,118,127|83, 92,101|57, 66, 75|31, 40, 49|5, 14, 23|222,231,240|196,205,214|170,179,188|
|**9 **|**D8PSK**|**3 **|**243**|**3 **|27, 36, 45|1, 10, 19|218,227,236|192,201,210|166,175,184|140,149,158|114,123,132|88, 97,106|62, 71, 80|
|**9 **|**D8PSK**|**3 **|**243**|**4 **|162,171,180|136,145,154|110,119,128|84, 93,102|58, 67, 76|32, 41, 50|6, 15, 24|223,232,241|197,206,215|
|**9 **|**D8PSK**|**3 **|**243**|**5 **|54, 63, 72|28, 37, 46|2, 11, 20|219,228,237|193,202,211|167,176,185|141,150,159|115,124,133|89, 98,107|
|**9 **|**D8PSK**|**3 **|**243**|**6 **|189,198,207|163,172,181|137,146,155|111,120,129|85, 94,103|59, 68, 77|33, 42, 51|7, 16, 25|224,233,242|
|**9 **|**D8PSK**|**3 **|**243**|**7 **|81, 90, 99|55, 64, 73|29, 38, 47|3, 12, 21|220,229,238|194,203,212|168,177,186|142,151,160|116,125,134|
|**9 **|**D8PSK**|**3 **|**243**|**8 **|216,225,234|190,199,208|164,173,182|138,147,156|112,121,130|86, 95,104|60, 69, 78|34, 43, 52|8, 17, 26|
|**9 **|**D8PSK**|**3 **|**243**|**9 **|108,117,126|82, 91,100|56, 65, 74|30, 39, 48|4, 13, 22|221,230,239|195,204,213|169,178,187|143,152,161|


-----

**5.1.8.11.5 Bit scrambler**
The purpose of data bit scrambling is to reduce the probability of symbols consisting of carriers that all
have the same phase and/or multiple identical symbols in case of identical data (e.g. zero data patterns).

The scrambler shall be realized with a Fibonacci LFSR (Linear Feedback Shift Register). Its random
output shall be XOR’d with the input data. The LFSR shall be implemented with an order of 7, which will
generate a pseudo random sequence with the period of 127. The LFSR shall be initialized with the value
4Dh

The characteristic polynomial shall be: ×[7]+×[6]+ 1

Figure 84 shows the structure of the bit scrambler:

Input Data
(Shift in MSB first)

MSB LSB

Output

1 2 3 4 5 6 7 Data

**Figure 84 - Structure of the Scrambler**

The descrambler shall be identical to the scrambler.

###### 5.1.8.12 Synchronization to mains phase
This synchronization to the mains phase shall comply mostly with PL110 synchronization definitions (see
clause 4.1.7.6), but with the following additions.

   - The start of a transmission shall be placed at the mains zero-crossing of one of the 3 phases.
   - The actual symbol width shall be averaged and aligned to the mains zero-crossing.

This synchronisation is still valid for PL110 devices since the resulting timing signal has a higher
accuracy than required according clause 4.1.7.6. For PL110+ devices it shall also be used for a raw
synchronisation to the starting time of the OFDM synchronisation sequence as well as the starting time of
a reception search time-window. The search time-window length shall be defined by 2 OFDM symbol
times and shall start 4 875 OFDM symbol times after mains zero-crossing of each mains phase is
detected. An OFDM signal reception shall only be expected during this time-window. The OFDM
synchronization sequence transmission shall start at the moment of mains zero-crossings. Regarding all 3
mains phases in a 50 Hz system, the OFDM transmission and reception shall be allowed on each phase in
a grid of 4 symbol times ( 3.3 ms period). This raw synchronisation to the mains zero-crossing shall ensure
interoperability and backwards compatibility of PL110+ signalling to PL110 signalling.

###### 5.1.8.13 OFDM symbol synchronization
For OFDM symbol synchronization digital matched filter techniques shall be used. The analog to digital
converted incoming signal shall be correlated with the expected sine waves of the sync signal (109,2 kHz
and 111,6 kHz) over a time window of 833 3. µs. This correlation time window of the OFDM
synchronization shall be then shifted over the incoming signal for the next 833 3. µs (= 1 OFDM symbol
time). In case of a present synchronization signal, both correlation summation values (109,2 kHz and
_111,6 kHz) will show a maximum when the sync window is located directly above the sync signal. For a_
protection of the sync signal and for improving accuracy and sensibility, the preamble sine wave
(106,8 kHz) and a second sine wave (114,0 kHz) shall be correlated additionally in parallel and then
subtracted from the sync correlation.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 62 f 74


Input Data
(Shift in MSB first)


1


7


5


1


7


3


5


MSB


-----

The following equations illustrate the synchronization calculations.


𝒍+𝒑𝒐𝒔−𝟏


𝒍+𝒑𝒐𝒔−𝟏


|𝒌𝒌𝒇𝒔𝒚𝒏𝒄𝟏(𝒑𝒐𝒔)|[𝟐] = ( � 𝒔(𝒏) ∙𝐬𝐢𝐧�𝒘𝒔𝒚𝒏𝒄𝟏𝒏𝝉�)² + ( � 𝒔(𝒏) ∙𝐜𝐨𝐬�𝒘𝒔𝒚𝒏𝒄𝟏𝒏𝝉�)²

𝒏=𝒑𝒐𝒔 𝒏=𝒑𝒐𝒔


𝒍+𝒑𝒐𝒔−𝟏


𝒍+𝒑𝒐𝒔−𝟏


|𝒌𝒌𝒇𝒔𝒚𝒏𝒄𝟐(𝒑𝒐𝒔)|[𝟐] = ( � 𝒔(𝒏) ∙𝐬𝐢𝐧�𝒘𝒔𝒚𝒏𝒄𝟐𝒏𝝉�)² + ( � 𝒔(𝒏) ∙𝐜𝐨𝐬�𝒘𝒔𝒚𝒏𝒄𝟐𝒏𝝉�)²

𝒏=𝒑𝒐𝒔 𝒏=𝒑𝒐𝒔


𝒍+𝒑𝒐𝒔−𝟏


𝒍+𝒑𝒐𝒔−𝟏


𝒑𝒓𝒆𝟏(𝒑𝒐𝒔) = |𝒌𝒌𝒇𝒑𝒓𝒆𝟏(𝒑𝒐𝒔)|[𝟐] = ( � 𝒔(𝒏) ∙𝐬𝐢𝐧�𝒘𝒑𝒓𝒆𝟏𝒏𝝉�)² + ( � 𝒔(𝒏) ∙𝐜𝐨𝐬�𝒘𝒑𝒓𝒆𝟏𝒏𝝉�)²

𝒏=𝒑𝒐𝒔 𝒏=𝒑𝒐𝒔


𝒍+𝒑𝒐𝒔−𝟏


𝒍+𝒑𝒐𝒔−𝟏


𝒑𝒓𝒆𝟐(𝒑𝒐𝒔) = |𝒌𝒌𝒇𝒑𝒓𝒆𝟐(𝒑𝒐𝒔)|[𝟐] = ( � 𝒔(𝒏) ∙𝐬𝐢𝐧�𝒘𝒑𝒓𝒆𝟐𝒏𝝉�)² + ( � 𝒔(𝒏) ∙𝐜𝐨𝐬�𝒘𝒑𝒓𝒆𝟐𝒏𝝉�)²

𝒏=𝒑𝒐𝒔 𝒏=𝒑𝒐𝒔

𝑠(𝑛) shall be the sample value, 𝐶𝑤𝑠 shall be the position in the synchronization window, 𝑛 shall be the
sample count, 𝑛= 1/𝑘𝑆𝑎𝑚𝑝𝑙𝑒 shall be the sample rate and 𝑆= 𝑘𝑆𝑎𝑚𝑝𝑙𝑒 ∗ 833 3. µs shall be the number of
samples per OFDM symbol. The peak of the two sync signals shall be based on these correlation square
sums and shall be calculated with the following equations:

𝒔𝒚𝒏𝒄𝟏(𝒑𝒐𝒔) = |𝒌𝒌𝒇𝒔𝒚𝒏𝒄𝟏(𝒑𝒐𝒔)|[𝟐] −|𝒌𝒌𝒇𝒑𝒓𝒆𝟏(𝒑𝒐𝒔)|[𝟐] −|𝒌𝒌𝒇𝒑𝒓𝒆𝟐(𝒑𝒐𝒔)|[𝟐]

𝒔𝒚𝒏𝒄𝟐(𝒑𝒐𝒔) = |𝒌𝒌𝒇𝒔𝒚𝒏𝒄𝟐(𝒑𝒐𝒔)|[𝟐] −|𝒌𝒌𝒇𝒑𝒓𝒆𝟏(𝒑𝒐𝒔)|[𝟐] −|𝒌𝒌𝒇𝒑𝒓𝒆𝟐(𝒑𝒐𝒔)|[𝟐]

The maximum peak value of 𝑠𝑦𝑛𝑆1(𝐶𝑤𝑠) and 𝑠𝑦𝑛𝑆2(𝐶𝑤𝑠) shall define the symbol synchronization
position.

𝐦𝐚𝐱�𝒔𝒚𝒏𝒄𝟏(𝒑𝒐𝒔)� ⇒ 𝒑𝒐𝒔𝒔𝒚𝒏𝒄𝟏

𝐦𝐚𝐱�𝒔𝒚𝒏𝒄𝟐(𝒑𝒐𝒔)� ⇒ 𝒑𝒐𝒔𝒔𝒚𝒏𝒄𝟐

𝒑𝒐𝒔𝒔𝒚𝒏𝒄𝟏 + 𝒑𝒐𝒔𝒔𝒚𝒏𝒄𝟐
𝒑𝒐𝒔𝒔𝒚𝒏𝒄 = 𝟐

A valid OFDM synchronization shall be found if:

𝒇𝑺𝒂𝒎𝒑𝒍𝒆 ∗ 8333, µs ≤𝒑𝒐𝒔𝒔𝒚𝒏𝒄 ≤ 𝟏, 𝟐𝟓∗ 𝒇𝑺𝒂𝒎𝒑𝒍𝒆 ∗ 833,3 µs

Since the number of samples per OFDM symbol have a direct relation to the symbol synchronization
precision and at least have influence to the receiver sensitivity, the minimum number of samples per
OFDM symbol shall be 250 which results in a minimum required sample rate of 300 kHz.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 63 f 74


-----

Figure 85 shows the correlation values and resulting peak value during the symbol synchronization
(example).

**Figure 85 - Peak detection at sample position at 𝒑𝒐𝒔𝒔𝒚𝒏𝒄** = 514 (example)

Figure 86 shows the synchronization sequence alignment to the mains phase zero-crossing.

**Figure 86 - Synchronization sequence alignment to mains phase zero-crossing**

#### 5.2 Data Link Layer type Powerline 110+
This clause describes the addressing, frame formats and access control of PL110+ medium. Compliance
to the requirements of this sub clause is subject to transient and logical measurement equipment.

##### 5.2.1 Domain Address/Individual Address/Group Address
Domain Address, Individual Address and Group Address are identical for PL110+ and PL110 (see clause
4.2.2).

##### 5.2.2 Frame formats

###### 5.2.2.1 General
General specifications of Frame formats are identical for PL110+ and PL110 (see clause 4.2.3.1).

###### 5.2.2.2 L_Data frame
Two L_Data frame formats shall be available on the PL110+ medium:

1. the L_Data_Standard frame format, and

2. the L_Data_Extended frame format.

The usage of the different formats shall depend on the value of the frame format parameter to the Data
Link Layer (see [02]). The L_Data_Standard frame format shall be used with PL110 signalling if the
frame format parameter is 0 and the message APDU is less than 16 octets (short messages), otherwise the
L_Data_Extended frame format shall be used with PL110+ OFDM signalling (long messages).

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 64 f 74


-----

###### 5.2.2.3 L_Data_Standard frame format
For PL110+ there shall be a L_Data_Standard frame available for PL110 FSK signalling. Please refer to
clause 4.2.3.3.

###### 5.2.2.4 L_Data_Extended-frame

5.2.2.4.1 Use and frame format
The use and the frame format shall be identical for PL110+ and PL110 (see clause 4.2.3.4.1).

The encoding of the fields in the frame is specified in the next clauses.

5.2.2.4.2 Control field (CTRL)
The Control field (CTRL) shall be identical for PL110+ and PL110 (see clause 4.2.3.4.2).

5.2.2.4.3 Extended Control field (CTRLE)
The Extended Control field (CTRLE) shall be identical for PL110+ and PL110 (see clause 4.2.3.4.3).

5.2.2.4.4 Source Address (SA)
The Source Address (SA) shall be identical for PL110+ and PL110 (see clause 4.2.3.4.4).

5.2.2.4.5 Destination Address (DA)
The Destination Address (DA) shall be identical for PL110+ and PL110 (see clause 4.2.3.4.5).

5.2.2.4.6 Length
The L_Data_Extended frame shall have a variable length. The length information shall indicate the
number of characters (0 characters to 254 characters) transported by the L_Data_Extended frame starting
after the TPCI octet (octet 8). This means that an L_Data_Extended frame with length 0 shall end after
the TPCI octet.

The length information shall be encoded by the combination of the Frame Type field (FT) in the Control
Field and the Length field, as specified in [02].

5.2.2.4.7 Check Octet
The Check Octet shall be identical for PL110+ and PL110 (see clause 4.2.3.4.7).

5.2.2.4.8 Domain Address
The Domain Address shall be identical for PL110+ and PL110 (see clause 4.2.3.4.8).

###### 5.2.2.5 Acknowledge-frame

Octet 0

Short Ack

b7 b6 b5 b4 b3 b2 b1 b0

1 1 0 0 1 1 0 0 ACK

**Figure 87 - Format 2, short acknowledgement frame format**

The Acknowledge frame format for OFDM transmission shall consist of a single character that shall be
used to acknowledge an L_Data frame.

This Acknowledgement frame shall comply with the coding is specified in Figure 87. Any other than the
shown figures shall be treated as not acknowledged.

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 65 f 74

|Octet 0|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|Short Ack|Short Ack|Short Ack|Short Ack|Short Ack|Short Ack|Short Ack|Short Ack|
|b7|b6|b5|b4|b3|b2|b1|b0|
|1|1|0|0|1|1|0|0|


-----

##### 5.2.3 Data Link Layer protocol

###### 5.2.3.1 Assemble/Disassemble Frame
The Assemble/Disassemble Frame Specification shall be identical for PL110+ and PL110 (see clause
4.2.4.1).

###### 5.2.3.2 Medium Access Control
There is no absolutely collision free multiple access control in a frequency modulated medium. Therefore
PL-BAUs shall use a slotted access technique as described below.

Before a device may start a transmission it shall wait for at least 65 bit times idle line since the last bit of
the preceding Data Link Layer message cycle. The structure of a Data Link Layer message cycle depends
on the architecture of the installation (installation with or without repeater). In general a data link message
cycle consists of a Data Link Layer request frame and a subsequent Data Link Layer acknowledgement or
a subsequent Data Link Layer response frame.

If several devices want to start a transmission simultaneously, then an access conflict arises. To solve this
conflict a priority dependent time slot system shall be used:

1. Repetitions shall have the highest priority and shall gain access to the bus, before any other
device with a pending transmission request;
2. If the bus is not locked by a repetition or an acknowledgment frame, then the repeater L_Datarequest frame shall gain access to the bus;
3. if the bus is not locked by a repetition, an acknowledgment or a repeater frame, then a systemor urgent L_Data-request frame shall gain access to the bus;
4. if the bus is not locked by a repetition, system- or urgent L_Data-request frames normal / low
operational priority, request frames shall gain access to the bus. Supposed that most of all
L_Data-request frames are operational priority frames there are 7 time slots chosen at random to
start the transmission.

If a device once gained control of the bus it shall continue transmission until the last bit is transmitted.

During reception the Data Link Layer of the receiving device shall check if the device is addressed and
control the immediate acknowledgement mechanism. If a transmission error occurs, the transmitting Data
Link Layer shall repeat the L_Data-request frame. Errors may occur in either direction, i.e. an L_Datarequest frame or an acknowledgement frame may be destroyed.

###### 5.2.3.3 L_Data-request Message Cycle without Repeater
After a specified idle time a PL-BAU shall initiate a message cycle transmitting an L_Data-request frame.
If this L_Data-request is received by another PL-BAU it shall check the consistency of the frame and
whether it is addressed.

After a time gap of 4 bit (-0/+5) after the last bit of the L_Data-request frame it shall start the transmission of the acknowledgement frame. The acknowledgement frame shall have a duration of 20 bit times
(3ch, QPSK, Convolutional coding). By now the message cycle shall be terminated and the next L_Datarequest message cycle may gain access to the bus after at least 65 bit times (-0/+5) after the last L_Datarequest frame.

If either the L_Data-request frame or the acknowledgement frame has been destroyed and thus an acknowledgement frame has not been received within 33 bit times after the last bit of the L_Data-request
frame, the PL-BAU that initiated the message cycle shall start a retransmission with the next bit slot. If
the addressed PL-device received the repeated L_Data-request frame properly it shall start the transmission of its acknowledgement frame after a time gap of 4 bits (-0/+5) after the last bit of the repeated
L_Data-request frame. Even if either the repeated L_Data-request frame or the acknowledgement frame is
destroyed the message cycle shall be terminated. There shall be no further repetitions. The next L_Datarequest message cycle (system priority) shall not be started after at least 65 bit times after the last bit of
the repeated L_Data-request cycle (see Figure 88 and Figure 89).

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 66 f 74


-----

###### 5.2.3.4 L_Data-request Message Cycle with Repeater
After a specified idle time a PL-BAU shall initiate a message cycle transmitting an L_Data-request frame
including the configured number of repetitions (see 5.2.3.3) the repeater shall gain access to the bus after
at least 49 bit times (-0/+5). If this repeated L_Data-request is received by another PL-BAU it shall check
the consistency of the frame and whether it is addressed. After a time gap of 4 bits (-0/+5) after the last bit
of the L_Data-request frame it shall start the transmission of an acknowledgement frame. The acknowledgement frame shall have a duration of 20 bit times. If the repeater does not receive the acknowledgement frame within 29 bit times it may repeat additional times depending on the repeater resend
configuration. This is the normal resend timing as specified in clause 5.2.3.3.

If the repeater receives an acknowledgement frame within 29 bit times it shall repeat the acknowledgement frame 4 bit times (-0/+5) after the last bit of the received acknowledgement frame.

The initial transmitting PL-BAU shall detect the repeated frame and the repeated acknowledgement frame
in order to decide whether the transmission is overall successful or not.

The repeater configures itself automatically because it gains access to the bus before a frame with system
priority can start its transmission (see Figure 88 and Figure 90).

###### 5.2.3.5 L_Data-request access Priorities
There shall be 9 different priority dependent time slots to start the transmission of L_Data-request frames.
The first slot shall be reserved for repeater priority Repeated L_Data-requests only. The second slot shall
be reserved for system priority L_Data-requests only. The slots 3 to 9 are reserved for operational priority
L_Data-request frames. Each device with a pending operational priority L_Data-request shall choose one
slot (3 ≤ selection ≤ 9) by random.

**Slot number** **Priority** **Start[a]**

repeated L_Data-request
0 33 (-0/+5)
frame

1 repeater priority 49 (-0/+5)

2 system priority 65 (-0/+5)

operational priority
3 81 (-0/+5)

Slot I

operational priority
4 97 (-0/+5)

Slot II

operational priority
5 113 (-0/+5)

Slot III

operational priority
6 129 (-0/+5)

Slot IV

operational priority
7 145 (-0/+5)

Slot V

operational priority
8 161 (-0/+5)

Slot VI

operational priority
9 177 (-0/+5)

Slot VII

a  Bit times after the last bit of the last L_Data-request frame.

**Figure 88 - L_Data-request priorities**

© C i h 1999 2013 KNX A i i S S ifi i AS 02 02 02 67 f 74

|Slot number|Priority|Starta|
|---|---|---|
|0|repeated L_Data-request<br>frame|33 (-0/+5)|
|1|repeater priority|49 (-0/+5)|
|2|system priority|65 (-0/+5)|
|3|operational priority<br>Slot I|81 (-0/+5)|
|4|operational priority<br>Slot II|97 (-0/+5)|
|5|operational priority<br>Slot III|113 (-0/+5)|
|6|operational priority<br>Slot IV|129 (-0/+5)|
|7|operational priority<br>Slot V|145 (-0/+5)|
|8|operational priority<br>Slot VI|161 (-0/+5)|
|9|operational priority<br>Slot VII|177 (-0/+5)|
|a   Bit times after the last bit of the last L_Data-request frame.|a   Bit times after the last bit of the last L_Data-request frame.|a   Bit times after the last bit of the last L_Data-request frame.|


-----

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|Col49|Col50|Col51|Col52|Col53|Col54|Col55|Col56|Col57|Col58|Col59|Col60|Col61|Col62|Col63|Col64|Col65|Col66|Col67|Col68|Col69|Col70|Col71|Col72|Col73|Col74|Col75|Col76|Col77|Col78|Col79|Col80|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device1|L.Data.req.frame|||||||||Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|||||||||Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req||||||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||ACK|ACK|ACK|ACK|ACK|ACK||||||||||ACK|ACK|ACK|ACK|ACK|ACK|ACK|ACK|||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Repeater|Repeater||||||||||||||||||||||||||||||Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device2||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|L.Data.req.frame<br>sys Prio|||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device3|||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device4||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device5|||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device6||||||||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device7|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||0||8||1|6|2|4|32|||4|0|4|8|5|6   0||8||1|6|2|4|3|2||4|0|48|||5|6|6|4||7|2|8|0||8|8|9|6||1|04|1|12||1|20|12|8||1|36|14|4||1|52|16|0|1|68|1|76|1|84||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


**Figure 89 - Timing diagram of an L_Data-request frame without repeater**

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 68 f 74


-----

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Col17|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Col25|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|Col49|Col50|Col51|Col52|Col53|Col54|Col55|Col56|Col57|Col58|Col59|Col60|Col61|Col62|Col63|Col64|Col65|Col66|Col67|Col68|Col69|Col70|Col71|Col72|Col73|Col74|Col75|Col76|Col77|Col78|Col79|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device1|Repeated L.Data req|||||||||Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|||ACK|ACK|ACK|ACK|ACK|ACK|ACK|ACK||||||||||||||||||ACK|ACK|ACK|ACK|ACK|ACK|||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Repeater|Repeater||||||||||||||Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|Repeated L.Data req|||||||||ACK|ACK|ACK|ACK|ACK|ACK|ACK|||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device2||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|L.Data.req.frame<br>sys Prio.|||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device3||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|L.Data.req.frame<br>low Prio. I|||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device4||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|L.Data.req.frame<br>low Prio. II|||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device5||||||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|L.Data.req.frame<br>low Prio. III|||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device6||||||||||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|L.Data.req.frame<br>low Prio. IV|||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Device7||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|L.Data.req.frame<br>low Prio. V|||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||0||8||1|6|2|4|3|2||4|0|48|||5|6|6|4||7|2|8|0 0||8||1|6|2|4|3|2||4|0|4|8||0|8||1|6|24||3|2|40||48||56||6|4|7|2|8|0|88||9|6|10|4|11|2|12|0||||||||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


**Figure 90 - Timing diagram of an L_Data-request frame with repeater**

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 69 f 74


-----

###### 5.2.3.6 Checking for correct Request Frames
If the received Domain Address matches the own Domain Address and the Destination Address of a
request frame corresponds to the Individual Address or one of the Group Addresses of a PL-BAU, the
receiver of the frame shall check if the frame is correct. A frame shall be accepted as correct if:

   - every Character is correct or at least correctable, and
   - the Check Octet has the correct value, and
   - the Control Field has the correct value, and
   - an extended frame was detected, and
   - the length of the data field is between 16 and 254 characters within the frame

The receiver of a frame shall acknowledge a repeated frame. The receiver shall discard it, if it has been
received correctly before. A repeated frame shall have the same Source Address as the preceding frame
(that applies to the repeater, too) with the repeat_flag set to 0.

##### 5.2.4 Data Link Layer services

###### 5.2.4.1 L_Data services
The L_Data service shall be a datagram service; in case of a single destination in the same physical
segment it is even an acknowledged datagram service. The local user of Layer-2 shall prepare an LSDU
for the remote user by filling in the local Individual Address as Source Address and the local Domain
Address as source Domain Address. The local user of Layer-2 shall apply the L_Data.req primitive to
pass the LSDU to the local Layer-2. The local Layer-2 shall accept the service request and try to send the
LSDU to the remote Layer-2 with frame format 1. The Destination Address may be an Individual Address
or a Group Address (multicast or broadcast). The local Layer-2 shall pass an L_Data.con primitive to the
local user indicating either a correct or an erroneous data transfer.

Prior to passing the confirmation to the local user, the local Layer-2 shall wait for an acknowledgement
from the remote Layer-2 (frame format 2). If the acknowledgement is a positive acknowledgement
(ACK), the local Layer-2 shall pass an L_Data.con with l_status = ACK to the local user. If the
acknowledge is missing the local Layer-2 shall pass an L_Data.con with l_status = not_ok to the local
user. In all other cases, i.e. invalid or time-out after 29 bit times the local Layer-2 shall repeat once after
33 bit times. If it fails, the local Layer-2 shall pass an L_Data.con with l_status = not_ok to the local user.

If the request frame received is correct (see 5.2.3.6), the remote Layer-2 shall send an acknowledge and
shall pass the LSDU with an L_Data.ind primitive to the remote user. If the request frame received is not
correct, the remote Layer-2 shall not send an acknowledge.

L_Data.req( domain_address, destination_address, DAF, priority, lsdu)

domain_address: Source and Destination Domain Address
destination_address: either an Individual Address or a Group Address
DAF: destination_address flag indicates whether destination_address is an
Individual Address or Group Address
priority: system, urgent, normal or low operational priority
lsdu: this is the user data to be transferred by Layer-2

L_Data.con(l_status)


l_status: ok,
not_ok


requested frame sent successfully
transmission of the frame did not succeed.


© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 70 f 74


-----

L_Data.ind( domain_address, source_address, destination_address, DAF, priority, lsdu)

domain_address: Source and Destination Domain Address
source_address: Individual Address of the end device that requested the L_Data
service
destination_address: Individual Address of this device or a Group Address of this device
DAF: destination_address flag indicates whether destination_address is an
Individual (0) or Group Address (1)
priority: system, urgent, normal or low operational priority
lsdu: this is the user data that has been transferred by Layer-2

A Coupler (e.g.: a Media Coupler) shall connect one Subnetwork with another Subnetwork. It shall have a
unique Individual Address. A Coupler shall acknowledge Layer-2 services and transmits the Layer-2
request frames to the other side, if the end device associated with the Destination Address of the frame is
located on the other side. Thus receiving an acknowledge Frame does not guarantee that the destination
(the end device) has received the L_Data-request, but it indicates that at least one destination or a Coupler
did receive it.

###### 5.2.4.2 L_Sys_Data service
The L_Sys_Data service shall be implemented as an unacknowledged datagram service. The local user of
Layer-2 shall prepare a LSDU for the remote user by filling in the local Individual Address as Source
Address and the system-broadcast Domain Address (0000h) as source Domain Address. The local user of
Layer-2 shall apply the L_Sys_Data.req primitive to pass the LSDU to the local Layer-2. The local Layer2 shall accept the service request and shall try to send the LSDU to the remote Layer-2 with frame format
1. The Destination Address shall be a broadcast Group Address. The local Layer-2 shall pass an
L_Sys_Data.con primitive to the local user that shall indicate a correct data transfer. The local Layer-2
shall always repeat the L_Sys_Data.req once before passing a positive confirmation to the local user.

If the request frame received is correct (see 5.2.3.6), the remote Layer-2 shall pass the LSDU with an
L_Sys_Data.ind primitive to the remote user. If the request frame received is not correct the remote
Layer-2 shall not send an acknowledge.

L_Sys_Data.req( system_broadcast, source_address, destination_address, DAF, priority, lsdu )

domain_address: system broadcast Domain Address 0000h
source_address: Individual Address of the end device that requests the L_Data service
destination_address: broadcast Group Address 0000h
DAF: destination_address flag indicates always a Group Address (1)
priority: system, urgent, normal or low operational priority
lsdu: this is the user data to be transferred by Layer-2

L_Data.con(l_status)

l_status: ok: requested frame sent successfully

L_Data.ind( system_broadcast, source_address, destination_address, DAF, priority, lsdu )

domain_address: system broadcast domain_address 0000h
source_address: Individual Address of the end device that requested the L_Data
service
destination_address: broadcast Group Address
DAF: destination_address flag indicates a Group Address (1)
priority: system, urgent, normal or low operational priority
lsdu: this is the user data that has been transferred by Layer-2

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 71 f 74


-----

##### 5.2.5 Parameters of Layer-2
This part is identical to PL110. Please refer to clause 4.2.6.

##### 5.2.6 The Layer-2 of a Repeater
There are three different modes in Data Link Layer:

1. Data Link Layer without Repeater detected
2. Data Link Layer with a Repeater detected
3. Data Link Layer of a Repeater

The Data Link Layer differs in the timing and in the structure of a Data Link Layer message cycle,
depending on whether or not a repeater is detected in the network. A message cycle shall consist of at
least an L_Data.request frame followed by an acknowledgement frame. If the acknowledgement frame
fails to come within its timeslot the L_Data.request frame shall be repeated as often as configured.

The repeater listens for L_Data frames and acknowledgement frames. If no acknowledgement frame is
detected after the L_Data frame the repeater shall itself repeat the L_Data frame in the repeater time slot
and then listen for the acknowledgement frame. If the repeater receives the acknowledgement frame in
the corresponding time slot it will repeat the acknowledgement frame again to signal the reception of
L_Data frame to the original transmitter.

The original transmitter has to detect the repeated frame and shall wait for the end of reception /
acknowledgement slots before a new frame can be transmitted.

If a repeater has to repeat a received L_Data.request frame the repeat flag in the control field (transmitted
Octet 0) shall be set to zero.

The Source Address shall not be modified by the Repeater. I.e. the Source Address of the transmitting
PL-BAU shall remain unchanged.

The Repeater is assigned to its Domain Address, i.e. it shall repeat only L_Data.request frames within its
own Domain Address[ 5)].

##### 5.2.7 The Layer-2 of a Media Coupler
This part is identical to PL110 specification. Please refer to clause 4.2.8.

##### 5.2.8 State Machine of Layer-2
This part is identical to PL110 specification. Please refer to clause 4.2.9.

———————

5) In addition the Repeater shall consider itself as member of the Domain Address 0000h. Though not
recommended, several Repeaters of adjacent Domain Addresses may be installed within receiving range.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 72 f 74


-----

#### 5.3 OFDM Properties
In order to optimize the OFDM performance in a given environment, the following set of settings shall be
accessible via the property read/write mechanism (PID_OBJECT_TYPE = 50001).

**Property** **ID** **Access Range** **Default** **Description**

PID_OFDM_BROADCAST_USED_ 0x10 r/w 0 to 7 0 0: 9 active carriers
CARRIERS

1: 8 active carriers

2: 7 active carriers

…

PID_OFDM_BROADCAST_FEC 0x11 r/w 0 to 1 1 FEC for sent broadcast

frames.

(Conv.)

0: 8 to 12 coder

1: Convolutional coder

PID_OFDM_BROADCAST_- 0x12 r/w 0 to 2 1 Carrier modulation for sent
MODULATION broadcast frames.

(DQPSK)

0: DBPSK,

1: DQPSK,

2: D8PSK

PID_OFDM_BROADCAST_- 0x18 r/w -7 to 7 -3 0: 9 active carriers
REPETITION_USED_ CARRIERS

(decrem.) 1: 8 active carriers

2: 7 active carriers

…

Or

-1: decrement by 1,

-2: decrement by 2,

…

PID_OFDM_BROADCAST_- 0x19 r/w 0 to 1 1 FEC for repeated broadcast
REPETITION_FEC frames.

(Conv.)

PID_OFDM_BROADCAST_- 0x1A r/w -1 to 2 0 Carrier modulation for
REPETITION_MODULATION (DBPSK) repeated broadcast frames.

-1 means starting from the
1[st] modulation settings
reduce modulation the next
repetition, so e.g. D8PSKDQPSK-DBPSK or DQPSKDBPSK-DBPSK

PID_OFDM_BROADCAST_- 0x1B r/w 0 to 7 1 Number of repetitions for
REPETITION_COUNT broadcast frames

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 73 f 74

|Property|ID|Access|Range|Default|Description|
|---|---|---|---|---|---|
|PID_OFDM_BROADCAST_USED_<br>CARRIERS|0x10|r/w|0 to 7|0|0: 9 active carriers<br>1: 8 active carriers<br>2: 7 active carriers<br>…|
|PID_OFDM_BROADCAST_FEC|0x11|r/w|0 to 1|1 <br>(Conv.)|FEC for sent broadcast<br>frames.<br>0: 8 to 12 coder<br>1: Convolutional coder|
|PID_OFDM_BROADCAST_-<br>MODULATION|0x12|r/w|0 to 2|1 <br>(DQPSK)|Carrier modulation for sent<br>broadcast frames.<br>0: DBPSK,<br>1: DQPSK,<br>2: D8PSK|
|PID_OFDM_BROADCAST_-<br>REPETITION_USED_ CARRIERS|0x18|r/w|-7 to 7|-3<br>(decrem.)|0: 9 active carriers<br>1: 8 active carriers<br>2: 7 active carriers<br>… <br>Or<br>-1: decrement by 1,<br>-2: decrement by 2,<br>…|
|PID_OFDM_BROADCAST_-<br>REPETITION_FEC|0x19|r/w|0 to 1|1 <br>(Conv.)|FEC for repeated broadcast<br>frames.|
|PID_OFDM_BROADCAST_-<br>REPETITION_MODULATION|0x1A|r/w|-1 to 2|0 <br>(DBPSK)|Carrier modulation for<br>repeated broadcast frames.<br>-1 means starting from the<br>1st modulation settings<br>reduce modulation the next<br>repetition, so e.g. D8PSK-<br>DQPSK-DBPSK or DQPSK-<br>DBPSK-DBPSK|
|PID_OFDM_BROADCAST_-<br>REPETITION_COUNT|0x1B|r/w|0 to 7|1|Number of repetitions for<br>broadcast frames|


-----

|Property|ID|Access|Range|Default|Description|
|---|---|---|---|---|---|
|PID_OFDM_UNICAST_USED_<br>CARRIERS|0x20|r/w|0 to 7|0|0: 9 active carriers<br>1: 8 active carriers<br>2: 7 active carriers<br>…|
|PID_OFDM_UNICAST_FEC|0x21|r/w|0 to 1|1 <br>(Conv.)|FEC for sent unicast frames.|
|PID_OFDM_UNICAST_-<br>MODULATION|0x22|r/w|0 to 2|2 <br>(D8PSK)|Carrier modulation for sent<br>broadcast frames.|
|PID_OFDM_UNICAST_-<br>REPETITION_USED_CARRIERS|0x28|r/w|-7 to 7|-3<br>(decrem.)|0: 9 active carriers<br>1: 8 active carriers<br>2: 7 active carriers<br>… <br>Or<br>-1: decrement by 1,<br>-2: decrement by 2,<br>…|
|PID_OFDM_UNICAST_-<br>REPETITION_FEC|0x29|r/w|0 to 1|1 <br>(Conv.)|FEC for repeated unicast<br>frames.|
|PID_OFDM_UNICAST_-<br>REPETITION_MODULATION|0x2A|r/w|-1 to 2|1 <br>(DQPSK)|Carrier modulation for<br>repeated unicast frames.<br>-1 means starting from the<br>1st modulation settings<br>reduce modulation the next<br>repetition, so e.g. D8PSK-<br>DQPSK-DBPSK or DQPSK-<br>DBPSK-DBPSK|
|PID_OFDM_UNICAST_-<br>REPETITION_COUNT|0x2B|r/w|0 to 7|2|Number of repetitions for<br>unicast frames|


**Figure 91 - OFDM properties**

Additionally an intelligent algorithm may use these Properties as transmission default values and may
adapt these values dynamically using variable copies of these Properties.

© C i h 1999 2013 KNX A i i S S ifi i 02 02 02 74 f 74


-----

