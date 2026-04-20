# System Specifications

## Communication Media

 Twisted Pair 1

Summary

This document defines the medium specific Physical Layer and Data
Link Layer services for the Twisted Pair 1 (TP1) medium.

Data Link Layer interface and general definitions that are medium
independent are specified in Chapter 3/3/2 “Data Link Layer General”.

Version 01.03.03 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0 2001.04.13 Preparation of Approved Standard.
1.1 2008.12.12 Integration of Supplements and Application Notes.
1.2.00 2011.01.06 - **AN129 “TP1 Completions” integrated.**
01.02.01 2013.10.28 Editorial updates for the publication of KNX Specifications 2.1.
01.02.02 2013.12.10 Final editorial update in view of publication in the KNX Specifications v2.1.
01.03.01 2020.02.27 - **AN164 “Handling of reserved EFF-values” integrated.**
01.03.02 2021.04.22 - **AN187 “TP1 Layer 2 timing correction” integrated.**
01.03.03 2021.09.28 Preparation for inclusion in the KNX Specifications v3.0.

#### References

[01] Chapter 3/3/2 “Data Link Layer – General Requirements”

[02] Chapter 3/4/1 “Application Interface Layer”

[03] Chapter 3/6/3 “External Message Interface”

[04] Part 4/4 “Specific Requirements for Application Products and Basic and System
Components and devices”

[05] Part 8/2 “Medium Dependant Layer Tests”

[06] Chapter 8/2/2“TP1 Physical and Link Layer Tests”

[07] Part 9/1 “Cables and Connectors”

[08] Part 9/2 “Basic Components”

Filename: 03_02_02 Communication Medium TP1 v01.03.03 AS.docx
Version: 01.03.03
Status: Approved Standard
Savedate: 2021.09.28
Number of pages: 50

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.04.13|Preparation of Approved Standard.|
|1.1|2008.12.12|Integration of Supplements and Application Notes.|
|1.2.00|2011.01.06|• **AN129 “TP1Completions”** integrated.|
|01.02.01|2013.10.28|<br>Editorial updates for thepublication of KNX Specifications 2.1.|
|01.02.02|2013.12.10|Final editorial update in view ofpublication in the KNX Specifications v2.1.|
|01.03.01|2020.02.27|• **AN164 “Handling of reserved EFF-values”** integrated.|
|01.03.02|2021.04.22|• **AN187 “TP1 Layer 2 timing correction”** integrated.|
|01.03.03|2021.09.28|Preparation for inclusion in the KNX Specifications v3.0.|


-----

#### Abbreviations

tpd pulse duration

tsd signal duration

tsp signal position

tcp character position

tcs character separation

tts telegram separation

tas acknowledge separation
tpcs1 polling character separation 1

tpcs2 polling character separation 2

###### 1 Physical Layer type Twisted Pair (PhL TP1-64 & TP1-256) ............................................. 5 1.1 General requirements for analog bus signals .................................................................. 7 1.1.1 Definition of logical ´1´ ...................................................................................... 7 1.1.2 Definition of logical ´0´ (single) ......................................................................... 8 1.1.3 Definition of logical ´0´ (overlapping) ............................................................... 9 1.1.4 Analog requirements within a byte ................................................................... 10 1.1.5 Simultaneous sending / collision behavior ....................................................... 11 1.2 Medium Attachment Unit (MAU) ................................................................................ 11 1.2.1 Goal ................................................................................................................... 11 1.2.2 General requirements within a physical Segment ............................................. 11 1.2.3 Remote Powered Devices ................................................................................. 18 1.3 Topology ....................................................................................................................... 19 1.3.1 Physical Segment .............................................................................................. 19 1.3.2 Bridge ................................................................................................................ 20 1.3.3 Router, Line, Main Line and Area .................................................................... 20 1.3.4 Gateways to other networks .............................................................................. 21 1.3.5 Network topology configuration rules summary .............................................. 21 1.4 Services of the Physical Layer type TP1 ...................................................................... 23 1.4.1 Ph_Data Service ................................................................................................ 23 1.4.2 Ph_Reset Service .............................................................................................. 24 1.5 Behavior of the Physical Layer type TP1 entity ........................................................... 24

 2 Data Link Layer type Twisted Pair (DL TP1) ................................................................... 26 2.1 Introduction ................................................................................................................... 26 2.2 Frame formats ............................................................................................................... 26 2.2.1 Overview ........................................................................................................... 26 2.2.2 Control field ...................................................................................................... 26 2.2.3 L_Data Frame formats ...................................................................................... 27 2.2.4 L_Data_Standard Frame ................................................................................... 27 2.2.5 L_Data_Extended Frame .................................................................................. 28 2.2.6 L_Poll_Data Frame ........................................................................................... 31 2.2.7 Acknowledge Frame ......................................................................................... 32 2.3 Medium Access Control ............................................................................................... 32 2.3.1 Definition .......................................................................................................... 32 2.3.2 Overview: priority operation algorithm of the Medium Access Control .......... 36 2.3.3 Priority sequence ............................................................................................... 36 2.3.4 Additional requirement: guarantee of access fairness ...................................... 37 2.4 Data Link Layer services .............................................................................................. 37


-----

###### 2.4.1 Acknowledgement of (unknown) Data Link Layer services ............................ 37 2.4.2 Data Link Layer operation modes and Data Link Layer acknowledge ............ 37 2.4.3 L_Poll_Data service and protocol ..................................................................... 41 2.4.4 L_Busmon service ............................................................................................ 42 2.4.5 L_Service_Information service ......................................................................... 42 2.5 Data Link Layer protocol .............................................................................................. 43 2.5.1 General .............................................................................................................. 43 2.5.2 Assemble and disassemble Frame .................................................................... 43 2.5.3 Checking for correct request Frames ................................................................ 43 2.5.4 Consequences of priority operation and fairness for duplication prevention ... 43 2.6 State machine of Data Link Layer ................................................................................ 44 2.7 Parameters of Data Link Layer ..................................................................................... 45 2.8 Reflections on the system behavior in case of L_Poll_Data configuration faults ........ 45 2.9 The Data Link Layer of a Bridge .................................................................................. 45 2.10 The Data Link Layer of a Router .................................................................................. 45 2.11 Externally accessible Busmonitor and Data Link Layer interface ............................... 46

 TP1 Specification argumentation .............................................................................. 47

 Summary of signals ..................................................................................................... 49


-----

### 1 Physical Layer type Twisted Pair (PhL TP1-64 & TP1-256)
The Physical Layer described in this clause is called Physical Layer type Twisted Pair TP1-64 and
Twisted Pair TP1-256. The main differences are shown in Figure 1. TP1-256 is backward compatible
towards TP1-64. If common features of TP1-64 and TP1-256 are described, only the expression TP1 is
used.

The Twisted Pair medium TP1 characteristics are

   - data and power transmission with one wire pair, and
   - asynchronous character-oriented data transfer, and
   - half duplex bi-directional communication and
   - a specific balanced baseband signal coding under SELV conditions.

All the characteristics given in the following subclauses, like maximum number of devices or possible
cable length per physical Segment are only valid for the standardized bus cable and standard devices[ 1)].
These characteristics may be different if other bus cables (e.g. with other core diameters) or notstandardized devices are used. For information on standardized cables, connectors, power supply and
choke refer to [07] respectively [08]). Figure 1 gives an overview over the characteristics of the Physical
Layer types.

**Characteristics** **Description TP1-64** **Description TP1-256**

Medium shielded Twisted Pair shielded Twisted Pair[2]
Topology linear, star, tree or mixed Linear, star, tree or mixed
Baud rate 9600 bps 9600 bps
device supplying normal: bus powered devices normal: bus powered devices
optional: remote powered optional: remote powered devices
devices

device power consumption 3 mA to-12 mA 3 mA to-12 mA
Power Supply Unit (PSU) DC 30 V DC 30 V
Number of PSU’s per physical Segment max. 2 max. 2
Number of connectable devices per max. 64 max. 256
physical Segment

Number of addressable devices per max. 255[ 3)] max. 255
physical Segment

Total cable length per physical Segment max. 1000 m max. 1000 m
distance between two devices max. 700 m max. 700 m
Total number of devices in a network over 65 000 (with Bridges) over 65 000
Protection against shock SELV (Safety Extra Low SELV (Safety Extra Low Voltage)
Voltage)

Physical signal balanced baseband signal balanced baseband signal
encoding encoding

**Figure 1 - System parameters of Physical Layer Type TP1-64 and TP1-256**

Figure 2 shows the logical structure of the Physical Layer type TP1 entity. Every device includes one;
every Router and Bridge is equipped with two such Physical Layer type TP1 entities.

1) The fan-in model is specified in [04].
2) The shield is not mandatory, shielded cables with earth connection can improve noise immunity.
3) In TP1-64 a physical Segment can be extended with up to 3 extra physical Segments, each connected to it via a
Bridge. Every physical Segment can contain 63 devices.

|Characteristics|Description TP1-64|Description TP1-256|
|---|---|---|
|Medium|shielded Twisted Pair|shielded Twisted Pair2|
|Topology|linear, star, tree or mixed|Linear, star, tree or mixed|
|Baud rate|9600 bps|9600 bps|
|device supplying|normal: bus powered devices<br>optional: remote powered<br>devices|normal: bus powered devices<br>optional: remote powered devices|
|device power consumption|3 mA to-12 mA|3 mA to-12 mA|
|Power Supply Unit (PSU)|DC 30 V|DC 30 V|
|Number of PSU’sperphysical Segment|max. 2|max. 2|
|Number of connectable devices per<br>physical Segment|max. 64|max. 256|
|Number of addressable devices per<br>physical Segment|max. 255 3)|max. 255|
|Total cable lengthperphysical Segment|max. 1000 m|max. 1000 m|
|distance between two devices|max. 700 m|max. 700 m|
|Total number of devices in a network|over 65 000(with Bridges)|over 65 000|
|Protection against shock|SELV (Safety Extra Low<br>Voltage)|SELV (Safety Extra Low Voltage)|
|Physical signal|balanced baseband signal<br>encoding|balanced baseband signal<br>encoding|


-----

The Physical Layer type TP1 entity consists of four blocks:

1. Cable (Medium)
2. Connector: connects a device or a Bridge to the transmission medium.
3. Medium Attachment Unit (MAU) : converts information signals to analog signals and vice
versa. Typically extracts DC power from the medium.
4. Logical Unit: converts the serial bit stream to octets and octets to the serial bit stream, which is
a serial stream of characters.

Figure 3 shows the relationship between the bits of an octet and the UART character data bits.

Data Link Layer

Ph_Data.req Ph_Data.con Ph_Reset.req

Ph_Data.ind Ph_Reset.con

Physical Layer

octets, error signaling

Logical Unit:
Serial asynchronous character encoding/decoding

TxD RxD serial bit stream

Medium Attachment Unit

Bit Bit
Encoding Decoding

serial digital signal at MAU

Transmitter Receiver

Power supplied
from network
(optional)

connector

medium with analog signal and power

**Figure 2 - Logical Structure of Physical Layer Type TP1**

logical
value

|Data Link Layer<br>Ph _Data.req Ph _Data.con Ph _Reset.req<br>Ph Data.ind Ph Reset.con<br>_ _<br>Physical Layer<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD RxD<br>Medium Attachment Unit<br>Bit Bit<br>Encoding Decoding<br>Transmitter Receiver<br>connector|Data Link Layer|Col3|Col4|Col5|
|---|---|---|---|---|
|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD<br>connector<br>Data Link Layer<br>Ph_Data.req<br>Ph_Data.con<br>Ph_Data.ind<br>Ph_Reset.req<br>Ph_Reset.con|Data Link Layer|Data Link Layer|Data Link Layer|Ph_Reset.con|
|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD<br>connector<br>Data Link Layer<br>Ph_Data.req<br>Ph_Data.con<br>Ph_Data.ind<br>Ph_Reset.req<br>Ph_Reset.con|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD|
|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD<br>connector<br>Data Link Layer<br>Ph_Data.req<br>Ph_Data.con<br>Ph_Data.ind<br>Ph_Reset.req<br>Ph_Reset.con|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD||||
|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD<br>connector<br>Data Link Layer<br>Ph_Data.req<br>Ph_Data.con<br>Ph_Data.ind<br>Ph_Reset.req<br>Ph_Reset.con|Physical Layer<br>Medium Attachment Unit<br>Bit<br>Encoding<br>Transmitter<br>Receiver<br>Bit<br>Decoding<br>Logical Unit:<br>Serial asynchronous character encoding/decoding<br>TxD<br>RxD||connector|connector|


_Serial_
_Character_

_Octet_


Parity

Start Stop

bit 0 bit 7 Bit

Bit (even) Bit

|bit 0|Col2|Col3|Col4|Col5|Col6|Col7|bit 7|Parity<br>Bit<br>(even)|
|---|---|---|---|---|---|---|---|---|


MSB


t

|bit 7|Col2|Col3|Col4|Col5|Col6|Col7|bit 0|
|---|---|---|---|---|---|---|---|


MSB LSB

**Figure 3 - Octet mapped to a Serial Character**


-----

#### 1.1 General requirements for analog bus signals
In the underneath description, UREF is an internal reference voltage for the DC part of the bus voltage,
used by the transmitter/receiver for evaluating the sent/received signal levels and sampled before the start
bit of a byte. These UREF may vary with the values as indicated in clause 1.1.4 “Analog requirements
within a byte”.

The underneath specifications classify a 0 and 1 signal on the bus : the requirements for signal generation
and extraction for the transmitter respectively receiver as defined in 1.2.2.5 and 1.2.2.6.

##### 1.1.1 Definition of logical ´1´
A logical ‘1’ can be regarded as the idle state of the bus, that means that the transmitter of a MAU is
disabled during sending a ‘1’. The analogue signal at the bus consists normally only of the DC-Part.
There is no difference between sending a ‘1’ and sending nothing. A decline of voltage during a ‘1’ can
occur, if a ‘0 bit’ was preceding. The graph shall be within the gray shaded areas.


If the bus is in the state “Idle”, the maximum slope of the AC-part, as specified in Figure 4 and Figure 5,
shall not be exceeded, in order to receive a logical ‘1’ correctly.


##### U


##### Bus-Signal
Ref


##### t 0
 0 35µs 104µs

 Bit Time

 Digital Signal "ON" at MAU

|Col1|Col2|
|---|---|


##### "OFF" t

**Figure 4 - “1”-Bit Frame**

|Col1|Bit Time|
|---|---|
|||
|||

|Parameter|Value|
|---|---|
|bit-time|1/9 600 s|
|voltage (DC-Part)|21 VDC to 32 VDC|
|voltage Up|max 0,3 V|
|voltage Un|max - 2 V|
|slopes (AC-Part)|max. 400 mV/ms|


**Figure 5 - Analog and Digital Signal of a Logical ´1´**


-----

##### 1.1.2 Definition of logical ´0´ (single)
A logical ´0´ is a defined voltage drop (Ua) of the analog bus signal with a duration of tactive (see Figure 6).
During the following equalization time the voltage can be higher than the DC-Part to enable recharging of
energy consumed during the active part. The graph shall be within the grey shaded areas.

### U

###### D E

Analog Signal


###### F


### Uend

###### C

Ref

###### A B
### ts
 Ua

 t 0 0 35µs
 104µs


"OFF"

|U|Col2|Col3|Col4|
|---|---|---|---|
|U|U|U|U|
|0 <br>DC-Part<br>"OFF"<br>"ON"||ts<br>A<br>B|Ua|
|0 <br>DC-Part<br>"OFF"<br>"ON"||||
|0 <br>DC-Part<br>"OFF"<br>"ON"|||35µs<br>bit time|
|0 <br>DC-Part<br>"OFF"<br>"ON"||active<br>t|equalisation<br>t|
|0 <br>DC-Part<br>"OFF"<br>"ON"|||Digital Signal at MAU|
|0 <br>DC-Part<br>"OFF"<br>"ON"||||


**Figure 6 - “0”-Bit Frame**

**Parameter / Point** **min**

1/9 600 s (typ)

35 µs (typ)

( time between Ua > A and Ua > B ) 25 µs

50 µs

21 V

voltage Ua (Point A ) concerning Ref -0,7 V

voltage Ua (Point B ) concerning Ref -0,5 V

voltage Ue (Point C - D) concerning Ref 0 V

voltage Uend (Point F) concerning Ref -0,35 V

**Figure 7 - Analog and Digital Signal of Logical ´0´**

|Parameter / Point|min|max|
|---|---|---|
|bit-time|1/9 600 s (typ)|1/9 600 s (typ)|
|tactive|35 µs (typ)|35 µs (typ)|
|ts ( time between Ua > A  and Ua > B )|25 µs|70 µs<br>(see also 1.1.3)|
|time (Point D - E)|50 µs|50 µs|
|voltage (DC-Part)|21 V|32 V|
|voltage Ua (Point A ) concerning Ref|-0,7 V|-10,5 V|
|voltage Ua (Point B ) concerning Ref|-0,5 V|-10,5 V|
|voltage Ue (Point C - D) concerning Ref|0 V|+13 V|
|voltage Uend (Point F) concerning Ref|-0,35 V|+1,8 V|


-----

##### 1.1.3 Definition of logical ´0´ (overlapping)
Overlapping means, that a logical ´0´ is transmitted at the same time from several devices (e.g. common
ACK). Due to the propagation delay of the bus cable (PhL-Medium) a time shift of logical zeros can
occur, if sending devices are far away located. The MAU and the MDS shall be able to handle these
signals. Figure 8 shows an example of two mixed logical ´0´ that have a delay (td) of about 10 µs.
Assuming that the point of measuring is at device A, the signal of device B appears after 10 µs with a
lower signal amplitude than device A, because it is damped along the bus cable.

##### Device A Device B

point of
measuring

##### maximum segment length

**Figure 8 - Delayed Logical ‘0’**


-----

###### DC-Level

 t 0 0  t active(A) 104µs

|Col1|Col2|
|---|---|


###### Digital Signal at MAU


###### "OFF"

|U|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|U|Analog Signal<br>D|Analog Signal<br>D|Analog Signal<br>D|Analog Signal<br>D|Analog Signal<br>D|Analog Signal<br>D|Analog Signal<br>D|
|0<br>0<br><br>"ON"<br>DC-Part||||||||
|0<br>0<br><br>"ON"<br>DC-Part||||||||
|0<br>0<br><br>"ON"<br>DC-Part||<br>t ac|tive(A)|(B)<br> ve|(B)<br> ve|equalisation<br>t|Di<br>104|
|0<br>0<br><br>"ON"<br>DC-Part||td|t acti|t acti|t acti|t acti|t acti|
|0<br>0<br><br>"ON"<br>DC-Part||||bit time|bit time|bit time|bit time|
|0<br>0<br><br>"ON"<br>DC-Part||||||||
|0<br>0<br><br>"ON"<br>DC-Part||||||||


**Figure 9 - Overlapping of Logical ´0´ (Example)**

The receiver of MAU converts this mixed analog signal to a digital signal. This digital signal differs from
that of a normal ‘0’, because the width of the receiver’s output pulse is the sum of tactive + td. However, it
is possible, that the receiver’s output delivers a gap at the end of tactive. (See grey shaded area in Figure 9.)
This behaviour requires dedicated decoding software that is able to decode such effects.


##### 1.1.4 Analog requirements within a byte
Clauses 1.1.1 and 1.1.2 describe the voltage shape and timing within a logical bit. Within a byte, which
consists of a series of bits, additional requirements have to be met. The values Ua* and Ue* are referred
to Uref at the beginning of the active part of the first bit of the transmitted byte.

**Parameter** **Value**

Ua* max. –10,5 V

Ue* max. 13 V

Uref (any bit) max. –1 V / +3 V

**Figure 10 - Limits within a Byte**

|Parameter|Value|
|---|---|
|Ua*|max. –10,5 V|
|Ue*|max. 13 V|
|Uref (any bit)|max. –1 V / +3 V|


-----

##### 1.1.5 Simultaneous sending / collision behavior
Although devices shall investigate the bus before they begin sending it can occur that two or more devices
are sending simultaneously. Simultaneous sending of a byte is intended in case of transmitting
acknowledgement frames (ACK, NACK or BUSY).

Sending of logical ‘0’ and logical ‘1’ at the same time result in a logical ‘0’.

Simultaneous sending of logical ‘0’ from several devices results in a signal that is nearly the same as that
of a single transmitting device, because signal is coded in baseband.

This common signal has also to comply with Figure 7.

If a sending device detects that an own logical ‘1’ is overwritten by another logical ‘0’, transmission has
to be disabled after this bit, however the receivers of both devices are still in progress.

This behaviour of Physical Layer allows a CSMA/CA medium access in Data Link Layer (see clause 2
"Data Link Layer type Twisted Pair (DL TP1)").

#### 1.2 Medium Attachment Unit (MAU)

##### 1.2.1 Goal
The MAU shall split the analog signal of the medium into the DC part and the serial bit stream. Vice
versa the serial bit stream is converted to the analog bus signal.

The DC-Part is used internally to supply the device with power by using a DC/DC converter or voltage
regulator. A wrongly connected MAU shall neither damage the device nor influence the bus
communication.

##### 1.2.2 General requirements within a physical Segment
Within a physical Segment the following principal requirements have to be met.

  - In an installed system the DC voltage at every device shall be at least 21 V [4), 5)]

  - The propagation delay of the serial bit stream at the MAU shall be short enough to allow
bit-wise CSMA/CA arbitration during a bit time. The total delay (MAU - Cable - MAU) shall
not exceed 12 µs. Refer also to clause 2 "Data Link Layer type Twisted Pair (DL TP1)" and
clause 2.3 "Medium Access Control".

  - The PSU(s) connected to a physical Segment shall provide the necessary effective current
required by the devices connected to the physical Segment.

  - SELV requirements have to be met.

**1.2.2.1** **Switch on behaviour**
Bus devices have to meet certain criteria for powering up. Powering up means, that a single bus device is
either connected to a ‘running’ bus segment or that a complete bus segment is switched to a Power
Supply Unit (PSU). The difference is that the rising of bus voltage is different. "Switch On" procedure
can be divided into two parts:

   - _Start-up:_ The internal capacitors are being charged with a current limitation.

   - _Operation:_ The capacitors are charged, voltages are constant.

4) Devices have to work with a DC voltage down to 20 V! 21 V are mandatory for the installer to get a reserve.
5) A voltage drop below 18 VDC in bus-powered devices with critical parameters/values in a volatile memory
/RAM) may generate a call to a save routine that stores data in a non-volatile memory.


-----

Switch on behaviour requires the following.

   - Bus devices shall run up properly at any permitted topology if the associated segment is
powered on by the PSU (slow ramp).
   - A single bus device shall run up properly if connected to an operating bus segment. Other bus
devices at this segment shall not suffer a ‘reset’ due to this connection (steep ramp).
   - A possible signal disturbance, caused by the connection of a single bus device to an operating
segment, takes not more than 20 ms to avoid telegram losses.

**1.2.2.2** **Switch off behaviour**
The Switch-off behaviour occurs when the input to the power converter of the device breaks down. This
input can either be the DC Part of the bus voltage or a remote power source (see 1.2.3).

The switching off behaviour can also be divided into three parts.

  - _Operation:_ The capacitors are charged, voltages are constant.

  - _hold-up:_ Capacitors are discharged.

  - _Idle:_ The power converter draws only a leakage current.

When switching from operation to hold-up, the Physical Layer may optionally generate signal Usave, to

  - allow devices to back-up data before power breaks down

  - disable further transmission of telegrams by the bus device

For bus powered devices, this Usave signal shall be generated when the bus voltage drops below 20 V
max., thereby taking into account a hysteresis of at least 1 V.

The Physical Layer shall generate a Reset Signal when the correct functioning of the power converter can
no longer be ensured, i.e. before the end of the hold-up time. This may be manufacturer specific. For a
bus powered device the Ureset signal may not be generated for input voltages higher than for Usave.

**1.2.2.3** **DC behaviour**
Bus devices may not draw more than the specified DC current from the bus to comply with the maximum
number of connectable devices per segment which are defined in the system parameters (Figure 1). This
current shall not be exceeded at worst case (20 V bus voltage and max. application consumption). The
manufacturer has to specify the DC current in the product database.

Load changes within a device shall not disturb the signal voltage from the bus in any way. Fast current
changes inside a device shall be transformed (smoothened) to slow slopes at bus side.

**Parameter** **TP1-64/TP1-256**

Bus current (at 20V - 32V) max. 12 mA

slope of input current max. 0,5 mA/ms

slope of input current for max. 2,5 mA/ms
manually operated devices
(e.g. push buttons)

**Figure 11 - Unit currents for Standard Devices**

**1.2.2.4** **Impedance behaviour**
The impedance of a device is not only a property of the receiver. It is moreover valid for the complete
device. Impedance behaviour means, which current is drawn from the bus by a device when the bus
voltage has the shape of a square pulse (pulse duration of 35 µs and period of 1/9 600 s). The impedance
value within a pulse (T = 1/9 600 s) is not constant. The value during active part (t < 35 µs) is different to
this of equalization part. A special test method is provided to check the input impedance of devices (see

[05]). Impedance matching is important to ensure that both signal damping is not too high and following
bits are not disturbed by equalization event of preceding bits.

|Parameter|TP1-64/TP1-256|
|---|---|
|Bus current (at 20V - 32V)|max. 12 mA|
|slope of input current|max. 0,5 mA/ms|
|slope of input current for<br>manually operated devices<br>(e.g. push buttons)|max. 2,5 mA/ms|


-----

**1.2.2.5** **Transmission behaviour**
If no Frame is transmitted, the voltage between Bus (+) and Bus (-) is about 21 V DC to 32 V DC, caused
by the Power Supply Unit (PSU) and the voltage drop along the bus cable and the consumption of the
devices. This state of the medium over a bit time of 1/9 600 s corresponds to a logical ´1´. The logical ´1´
also indicates the idle state when no Frame is being transmitted. The related output signal to the PhL
MDS of the MAU is „OFF“ during the whole bit time.

In order to transmit a logical ´0´, the MAU shall draw an adapted current (Isend) to cause a defined voltage
drop Ua of the analog signal with a duration of tactive (see also Figure 7).

During the following equalization time the energy consumed during the active time may be partly charged
back to the bus cable and the connected devices. Thus bus-powered devices do not suffer a relevant
power drop during transmission of a logical ´0´. The AC part of the analog signal is mainly generated by
the transmitter of the MAU and the choke(s).

U I

Busvoltage

Ua

Transmitter Current

Isend

t

**Figure 12 - Method of Transmitting**

The value of send current of one device depends on:

  - the number of connected bus devices,

  - the number of bus devices that are sending simultaneously (e.g. in case of an acknowledgement
frame),

  - the busvoltage and

  - the segment cable length.

**Parameter** **Value min.** **Value max.**

Isend ~ 0 mA[ 6)] 400 mA[ 7)]

UA [8] 3 V 9 V

**Figure 13 - Dynamic Requirements of a TP1-64 Transmitter**

**Parameter** **Value min.** **Value max.**

Isend ~0 mA 400 mA

UA 3 V 10 V

**Figure 14 - Dynamic Requirements of a TP1-256 Transmitter**

6) Valid for one device if the maximum number of devices are sending simultaneously.
7) Valid if only one device is sending and the segment is equipped with maximum number of devices.
8) Measured at the device.

|Parameter|Value min.|Value max.|
|---|---|---|
|Isend|~ 0 mA 6)|400 mA 7)|
|UA8|3 V|9 V|

|Parameter|Value min.|Value max.|
|---|---|---|
|Isend|~0 mA|400 mA|
|UA|3 V|10 V|


-----

Isend

###### TP64 TP256

**Figure 15 - Example of Transmitter Characteristics**

Figure 16 shows an example of a principle diagram of a TP1-64 transmitter:

Isend

A+

S1

L1

RVP
BUS

CONNECTION C1 L3

L2

B- S2


Isend

transmit

|Col1|Col2|
|---|---|
|L3||


L1 + L2 = 45mH ± 5mH

(at I rated current)

DC

L3 = 400mH±10%


Only during the active Part (35µs) of "Logical 0" S1 and S2
have to be closed. At any other time they are both open.


Ri (L1+L2) 6< Ω

Ri (L3) 50< Ω

W1 : W2 : W3 = 1 : 1 : 6
C1 > 100uF

RVP: Revers Voltage Protection Switch (Voltage drop < 0,5V)

**Figure 16 - Example of a diagram of a TP1-64 Transmitter**


-----

Figure 17 shows an example of a principal diagram of a TP1-256 transmitter:


A +


Isend


Bus connection UDC

B 

ILIMIT 0,4 A

UDC – 7 V

transmit


**Figure 17 - Example of a diagram of a TP1-256 Transmitter (Ilimit 0,4 A)**

**1.2.2.6** **Receiving behavior**
The MAU has to convert an analog signal to a digital signal by using a receiver function (see Figure 2).
The required threshold voltages for the receiver are shown in Figure 18. The relation of ON/OFF and the
bus voltage are explained in Figure 7. (See also test-specification in [05].)

**Threshold Voltage TP1-64** **Threshold Voltage TP1-256**

**(relative to DC part)** **(relative to DC part)**

**State at MAU** min typ max min typ max

ON 0,45 V 0,5 V 0,7 V 0,45 V 0,6 V 0,7 V

OFF 0,09 V 0,2 V 0,45 V 0,09 V 0,3 V 0,45 V

Hysteresis 0,05 V (min)

**Figure 18 - Requirements for the Receiver**

|State at MAU|Threshold Voltage TP1-64<br>(relative to DC part)|Col3|Col4|Threshold Voltage TP1-256<br>(relative to DC part)|Col6|Col7|
|---|---|---|---|---|---|---|
|**State at MAU**|min|typ|max|min|typ|max|
|ON|0,45 V|0,5 V|0,7 V|0,45 V|0,6 V|0,7 V|
|OFF|0,09 V|0,2 V|0,45 V|0,09 V|0,3 V|0,45 V|
|Hysteresis|0,05 V (min)|0,05 V (min)|0,05 V (min)|0,05 V (min)|0,05 V (min)|0,05 V (min)|


-----

###### 1.2.2.7 Signal coding
The MDS of MAU has to convert framed data bits into an asynchronous timed serial signal. This signal is
used to drive the transmitter of MAU. Figure 19 shows an example for a digital signal and the resulting
serial bit stream.

Analog
Bussignal

Digital

Slope for

Signal

time reference
(Ref. Point)

ON

OFF

Start D0 D1 D2 D3 D4 D5 D6 D7 Parity Stop Start D0

Serial Bit Pulse Duration
Stream

´1´

´0´

Start D0 D1 D2 D3 D4 D5 D6 D7 Parity Stop Start D0

n: 0 1 2 3 4 5 6 7 8 9 10

**Figure 19 - Relation between Framed data and asynchronous signal**

**Parameter** **min.** **typ.** **max.**

Bit Time 1/9 600 s

Pulse duration 34 µs 35 µs 36 µs

time from start-bit to following bits (n bit times) – 2 µs n bit times (n bit times) + 2 µs
(within a byte)

**Figure 20 - Requirements for bit coding**

Additional timing information concerning structure of telegrams is given in clause 1.4 "Services of the
Physical Layer type TP1" and clause 2 "Data Link Layer type Twisted Pair (DL TP1)".

|Col1|Analog Bussignal|
|---|---|
||Bussignal|
|||

|Col1|Digital<br>Slope for<br>Signal<br>time reference<br>(Ref. Point)|
|---|---|
|Start<br>D0<br>D1<br>D2<br>D3<br>D4<br>D5<br>D6<br>Stop<br>Parity<br>D7<br> D0<br>Start<br>Serial Bit<br>Stream<br>´<br>´<br>Start<br>D0<br>D1<br>D2<br>D3<br>D4<br>D5<br>D6<br>D7<br>Stop<br>Parity<br>Pulse Duration<br> D0<br>Start|Start<br>D0<br>D1<br>D2<br>D3<br>D4<br>D5<br>D6<br>Stop<br>Parity<br>D7<br> D0<br>Start<br>Serial Bit<br>Stream<br>´<br>´<br>Start<br>D0<br>D1<br>D2<br>D3<br>D4<br>D5<br>D6<br>D7<br>Stop<br>Parity<br>Pulse Duration<br> D0<br>Start|

|Parameter|min.|typ.|max.|
|---|---|---|---|
|Bit Time||1/9 600 s||
|Pulse duration|34 µs|35 µs|36 µs|
|time from start-bit to following bits<br>(within a byte)|(n bit times) – 2 µs|n bit times|(n bit times) + 2 µs|


-----

###### 1.2.2.8 Signal decoding
The output signal of the receiver, regarded as a digital signal, shall be decoded to the serial bit stream by
the bit decoding unit of the MAU (see also Figure 2). The following Figure 21 shows an example for a
digital signal and the resulting serial bit stream.

Analog
Bussignal

Digital
Signal

Slope for general Acceptance window for
synchronisation rising slope
(Ref. Point)

ON

OFF

Start D0 D1 D2 D3 D4 D5 D6 D7 Parity Stop Start D0

Serial Bit

Pulse Duration

Stream

´1´

´0´

|Col1|Analog Bussignal|
|---|---|
||Bussignal|
|||

|Col1|Digital Signal Slope for general|
|---|---|
||Slope for general<br>synchronisation<br>(Ref. Point)<br>Acceptance window for<br>rising slope|
|Start<br>D0<br>D1<br>D2<br>D3<br>D4<br>D5<br>D6<br>Serial Bit<br>Stream<br>´<br>´<br>Stop<br>Parity<br>D7<br>Pulse Duration<br>D0<br>Start|Start<br>D0<br>D1<br>D2<br>D3<br>D4<br>D5<br>D6<br>Serial Bit<br>Stream<br>´<br>´<br>Stop<br>Parity<br>D7<br>Pulse Duration<br>D0<br>Start|
|Start<br>D0<br>D1<br>D2<br>D3<br>D4<br>D5<br>D6<br>Stop<br>Parity<br>D7<br>D0<br>Start|Start<br>D0<br>D1<br>D2<br>D3<br>D4<br>D5<br>D6<br>Stop<br>Parity<br>D7<br>D0<br>Start|


n: 0 1


2 3 4 5 6 7 8 9 10


**Figure 21 - Relation between digital signal and serial bit stream**

The bit-decoding unit of the MAU uses an acceptance time window. The beginning of the acceptance
time window is defined in relation to the start bit. In addition minimum and maximum pulse duration is
required. The corresponding values are listed in the following table (Figure 22).


-----

rising slope of a bit n, referred (n bit times ) - 7 µs n bit times (n bit times) + 33 µs
to rising edge of start bit (=Ref.
point)

**Figure 22 - Requirements for the Bit Decoding Unit**

The Physical Layer guarantees that the transmission of a logical ´0´ is dominant versus the simultaneous
transmission of a logical ´1´. It is also guaranteed that during the simultaneous transmission of bits of
equal value from a number of devices, the resulting physical signal corresponds to the same logical value
of the bit being sent. This behaviour of the Physical Layer allows a CSMA/CA medium access in Data
Link Layer (See clause 2 "Data Link Layer type Twisted Pair (DL TP1)" clause 2.3 “Medium Access
Control”).

##### 1.2.3 Remote Powered Devices

###### 1.2.3.1 General
Remote powered bus devices (RPD) do not extract their energy for the application circuit and the bus
controller from the bus but from another independent source of energy, e.g. mains. They only draw a
minimal DC current from the bus line (segment). The AC load is similar to a standard device. Due to the
reduced DC power consumption of RPD, a bus segment equipped with such devices requires less power
from the installed Power Supply Unit(s).

The connection of bus-controller and application to the same electrical potential reduces the effort of
galvanic separation in dedicated devices.

Galvanic separation can be implemented by using e.g. optocouplers or transformer. Only the transceiver
is supplied from the bus segment.

Figure 23 shows an example of a remote powered device. Thus using remote powering it is possible to
design a compact device for this dedicated application.

Vcc

TX

2 Trans- Signal- 2

RX

conver- µC Voltage Supply

ceiver

sion UBus

Vcc

galvanic separation

n

Application
Circuit

**Figure 23 - Example of a light dimmer**

9) See also Figure 10.

|Parameter|minimum|typical|maximum|
|---|---|---|---|
|Bit Time||1/9 600 s||
|Pulse Duration|25 µs|35 µs|70 µs 9)|
|Acceptance window for the<br>rising slope of a bit n, referred<br>to rising edge of start bit (=Ref.<br>point)|(n bit times ) - 7 µs|<br>n bit times|(n bit times) + 33 µs|


-----

###### 1.2.3.2 Reset and save behavior of RPD
RPD’s have access to two independent power sources, bus voltage and remote voltage.

The device supplying voltage is regarded as master voltage. That means, that ramp up or breaking down
of this source causes reset, save and init. Save and init are the routines that can be defined in the user
program. They are executed if the device detects either voltage ramps up or breaks down. The missing of
master voltage shall not disturb the operating bus segment in any way.

Bus voltage is regarded as slave voltage. When the bus power breaks down, the RPD shall refrain from
further transmission attempts. When the bus power is restored, the RPD shall continue normal
operation[ 10)].

The behaviour of the device if either master or slave voltage is missing, shall be described in the
manufacturers data sheet.

The manufacturer has to define how to reset a RPD. The device can also be forced to a reset from bus
side, through sending a special reset service message.

#### 1.3 Topology

##### 1.3.1 Physical Segment[ 11)]
Devices are connected to a physical Segment. The topology of a physical Segment can be a linear, star or
tree or mixed topology (see Figure 24). To make the figures easier to read, they always depict one bus
topology as a representative for a physical Segment.

Up to 64 (TP1-64) or 256 (TP1-256) devices can be connected to a physical Segment if the recommended
bus cable is used. This corresponds to the logical address space of a Subnetwork. The maximum distance
between two devices in a physical Segment is 700 m. The maximum cable length in a tree or star
topology may be longer than the maximum distance between two devices. Therefore the maximum cable
length of a physical Segment is 1000 m for the recommended cables.

Loops within a physical Segment are allowed but not recommended.

No terminating resistors are required.


Legend:

|0/0/<br>1|Col2|0/0/<br>2|
|---|---|---|
||||


0/0/

1


Physical Segment, Bus Topology:

Tree and Star Topology:


0/0/ 0/0/ 0/0/
...

1 2 64

0/0/ 0/0/ 0/0/
...

1 2 64


_KNX end device with Individual Address:_

_Area=0 / Line=0 / Device=1_

|0/0/<br>1|0/0/<br>2|
|---|---|


...


_Bus Topology_

|Col1|Col2|...|Col4|
|---|---|---|---|


7

**Figure 24 - Physical Segments**

10) This is general requirement, also valid for purely bus-powered devices. This is part of the properly running up, as
specified in clause 1.2.2.1 “Switch on behaviour”.
11) The calculations in the subsequent text are based on a maximum of 64 devices in a Segment, i.e. 3 x 64 = 192
devices per Segment. Of course in respect to the available logical address space 256 devices per Subnetwork are
used for computations.
Instead, the figures show an example system, in which only two Segments (i.e. one Bridge) are used per
Subnetwork. Therefore in the figures there are in the maximum 128 devices shown.


-----

##### 1.3.2 Bridge
Bridges are used to combine physical Segments to a Line in order to achieve longer distances and to
allow up to 255 devices (Figure 25) on a Line with TP1-64 devices. The Bridge also guarantees a
galvanic separation of the physical Segments connected to improve noise immunity. Bridges can be used
to connect up to four physical Segments and achieve a total length of 3000 m. The maximum distance
between two devices in a Line is therefore 700 m x 3 = 2 100 m for the standard cables. Bridges do not
have an Individual Address, but they acknowledge the Frames they receive on Data Link Layer and
transmit the received Frame on the other side of the Bridge.

Line with two physical Segments: 0/0/ 0/0/ 0/0/ 0/0/ 0/0/ 0/0/ Legend:

... ...

1 2 64 128 129 128

B

|0/0/<br>1|0/0/<br>2|
|---|---|

|0/0/<br>64|0/0/<br>128|0/0/<br>129|
|---|---|---|


Line with one physical Segment
(Only TP256 Devices):

Line with four physical Segments:


0/0/

1


_device with individual address:_

_Area=0 / Line=0 / Device=1_


...


_Bus Topology_

|0/0/<br>64|0/0/<br>65|0/0/<br>66|
|---|---|---|

|0/0/<br>1|Col2|0/0/<br>2|
|---|---|---|
||||

|Col1|Col2|...|Col4|
|---|---|---|---|


B 0/0/ ... B B B _Bridge_

1

... ...

0/0/ 0/0/ 0/0/

m n 255

**Figure 25 - Physical Segments combined to a Line**

To simplify the following figures, a Line is always shown as two physical Segments having 128 devices.

##### 1.3.3 Router, Line, Main Line and Area
A Router shall have an Individual Address and shall acknowledgement frames on Data Link Layer and
transmit the received Frame on the other side of the Router, if the device associated with the Destination
Address of the Frame is located on the other side. For larger networks, up to 16 Lines can be combined to
an Area using 15 Routers (Figure 27). Not more than two Routers shall be in the path between any of two
devices of an Area. The inner Line of an Area is also called Main Line; the outer Lines of an Area are
called Lines.

The Router also guarantees the galvanic separation of the connected Lines.

Routers that combine Lines to an Area are called Line Couplers (LC).


-----

Legend:

|0/0/<br>1|0/0/<br>2|
|---|---|


B
_Main Line_

Router (LC) Router (LC)

0/2/0 ... 0/15/0

0/1/ 0/2/ 0/15/

1 1 1

0/1/ 0/2/ 0/15/

2 2 2

... ... ...

0/1/ 0/2/ 0/15/

63 63 63

0/2/ B _Lines_

0/1/ 64 0/15/

64 64

0/2/

0/1/ 65 0/15/

65 129

... ... ...

0/1/ 0/2/ 0/15/
127 256 127

TP64 TP256

|0/0/<br>62|Col2|0/0/<br>63|0/0/<br>64|
|---|---|---|---|
|0/0/<br>62|B|B|B|


0/0/

1


_device with Individual Address:_

_Area = 0 / Line = 0 / Device=1_


...


_Bus Topology_

|Col1|Col2|...|Col4|
|---|---|---|---|


B _Bridge_

|Col1|Col2|...|
|---|---|---|
|||0/1/<br>63|
||||

|Col1|...|
|---|---|
||0/15/<br>63|
|B|B|


_Router_
_Area/Line/Device_


**Figure 26 - Lines combined to an Area**

Using the recommended cables and Bridges an Area may therefore have 256 x 16 = 4 096 devices and an
extension of 4000 m x 16 = 64 km.

The maximum distance between two devices in an Area is then 700 m x 6 = 4,2 km[ 12)].

Routers can also be used to connect multiple Areas to a maximum size network (Figure 27). These
Routers are called Backbone Couplers (BbC). Up to 16 Areas can be connected using 15 Backbone
Couplers. Not more than two Backbone Couplers shall be in the path between any of two Areas. The
Main Line of the inner Area is called Backbone Line.

A maximum size network may therefore have up to 4096 x 16 = 65 536 devices and a total network
extension of 64 km x 16 = 1 024 km.

Not more than 6 Couplers (i.e. Bridges or Routers) shall be between any of two devices. The maximum
distance between two devices in a maximum size Network using the recommended cables is then
700 m x 7 = 4,90 km.

##### 1.3.4 Gateways to other networks
Gateways connect KNX systems to networks with communication layers different from the
corresponding KNX layers. Gateways may be included at any Subnetwork. Gateway connections shall
additionally be in conformance with the relevant national regulations.

NOTE 1 Areas may be linked together not only by using the Backbone Line but also by using higher level bus systems like ISDN
or PROFIBUS, then requiring dedicated gateways.

##### 1.3.5 Network topology configuration rules summary
Recommendation: A new installation normally should not contain a Bridge. The Bridges should be used
for later extensions only.

A maximum of 6 Couplers is allowed in one transmission path; a Coupler is either a Bridge, a Line
Coupler or a Backbone Coupler.

The connection of non-SELV lines to a TP1 network is not allowed.

There shall be no terminating resistors for matching purposes at the ends of the wires.

12) True on the supposition that in the maximum there is only one Bridge between any two devices.


-----

|Col1|Col2|0/0/<br>62|0/0/<br>63|
|---|---|---|---|
||B|B|B|

|Col1|...|
|---|---|
||0/2/<br>63|
|B|B|

|Col1|...|
|---|---|
||0/15/<br>63|
|B|B|

|Router<br>1/0|(BbC)<br>/0|
|---|---|

|Router<br>15/|(BbC)<br>0/0|
|---|---|

|1/0/<br>1|1/0/<br>2|
|---|---|

|BbC) 0|Col2|Col3|Col4|
|---|---|---|---|
|1/0/<br>61|1/0/<br>61|1/0/<br>61|1/0/<br>62|
|1/0/<br>61||B|B|

|Col1|...|
|---|---|
||1/1/<br>63|
|B|B|

|Col1|...|
|---|---|
||1/2/<br>63|
|B|B|

|Col1|Col2|...|
|---|---|---|
|||15/1/<br>63|
||||

|Col1|...|
|---|---|
||15/2/<br>63|
|B|B|


**Figure 27 - Network Topology**


-----

#### 1.4 Services of the Physical Layer type TP1
At the interface to the Physical Layer user the Physical Layer type TP1 offers the Ph_Data service and the
Ph_Reset service.

##### 1.4.1 Ph_Data Service
The Ph_Data service consists of three primitives Ph_Data.req, Ph_Data.ind and Ph_Data.con.

Ph_Data.req(p_class, p_data)

p_class: start_of_Frame: transmit first character of a Frame with bus free detection at the start bit.
For bus free time and delay see clause 2.3 “Medium Access Control”.

inner_Frame_char: transmit character after two bit times without bus free detection at the start
bit

ack_char: transmit character 15 bit times after the preceding character received
**without bus free detection at the start bit**

poll_data_char: transmit character 5 bit times after the preceding character received without
bus free detection at the start bit

fill_char: transmit character 6 bit times after previous character received with bus free
detection at the start bit

p_data: octet: the octet to be converted to a UART character and to be transmitted.

The Ph_Data.req primitive is applied by the Physical Layer user to pass user data consisting of an octet
via the p_data parameter to the Physical Layer type TP1. The p_class parameter describes the
transmission task to be executed by the Physical Layer type TP1 entity.

See clause 1.5 for a more detailed description of Bus free detection at the start bit.

Ph_Data.con(p_status)

p_status: OK: character transmission succeeded

bus_not_free: no transmission, another device is transmitting

collision_detected: a collision was detected (logical ‘1’ transmitted, but logical ´0´ received)

transceiver_fault: transceiver fault detected

The Ph_Data.con primitive passes status information via the parameter p_status back to the Physical
Layer user. The value of p_status indicates whether the transmission of the contents of the p_data
parameter previously passed to the Physical Layer type TP1 entity via the Ph_Data.req primitive
succeeded.

P_status shall be ‘collision_detected’ if a logical ‘1’ was transmitted as one of the UART character bits,
but at the same time a logical ‘0’ was read at the Segment by the Physical Layer type TP1 entity. P_status
shall be ‘transceiver_fault’ if a logical ‘0’ was transmitted as one of the UART character bits, but at the
same time a logical ‘1’ was read at the Segment.

See clause 1.5 for a more detailed description of the conditions for p_status values ‘bus_not_free’,
‘collision_detected’ and ‘transceiver_fault’.


-----

Ph_Data.ind(p_class, p_data)

p_class: start_of_Frame: first character of request Frame received. For timing see clause 2.3
“Medium Access Control”.

inner_Frame_char: character received at 2 bit times after the preceding one

ack_char: character received 15 bit times after the preceding one

poll_data_char: character received at five or six bit times after the preceding one

parity_error: wrong parity bit detected in the character received

framing_error: wrong stop bit detected in the character received

bit_error: wrong data bit detected in the character. Data bit did not meet the bit
decoding rules.

p_data: octet: the data octet extracted from the received character

The Ph_Data.ind primitive passes timing information via the parameter p_class and user data via the
parameter p_data from the Physical Layer type TP1 entity to the Physical Layer user. See clause 1.5 for
more details.

##### 1.4.2 Ph_Reset Service
The Ph_Reset service shall be applied by the user of Physical Layer during start up, in order to
synchronize to possibly existing network traffic.

Ph_Reset.req(); start synchronisation activity

Ph_Reset.con(p_status);

p_status: OK: a bus free time of 50 bit times was detected

transceiver_fault: undefined physical signal detected

The Ph_Reset.con primitive indicates either with value ‘OK’ of parameter p_status an idle time of 50 bit
times or with ‘transceiver_fault’ a malfunctioning transceiver.

#### 1.5 Behavior of the Physical Layer type TP1 entity
In addition to the rules listed in the description of each physical service (see 1.4) the following rules also
apply for the Physical Layer type TP1 entity.

**_Bus free detection means that immediately before the transmission of the start bit of a character, the_**
Physical Layer type TP1 entity shall check if another Physical Layer type TP1 entity is already
transmitting at the same physical Segment.

According to clause 1.4.1 Bus free detection is on for the p_class values ‘start_of_Frame’,
‘inner_Frame_char’ and ‘fill_char’ of the Ph_Data.req primitive. In these cases the Ph_Data.req primitive
may result in no transmission and in a Ph_Data.con primitive with p_status = bus_not_free.

On the other hand the p_class values ‘ack_char’ and ‘poll_data_char’ will result in the transmission of the
start bit and subsequent data bit transmission with bus free detection off. In that case a Ph_Data.con
primitive with p_status = bus_not_free cannot occur.


-----

**Collision avoidance shall be active during the transmission (i.e. during the execution of the Ph_Data.req**
primitive) of any character of p_class of value

   - start_of_frame, or
   - inner_frame_char, or
   - poll_data_char, or
   - fill_char
If a collision is detected, then the transmitter shall immediately stop its transmission. Collision detection
shall be indicated by a Ph_Data.con primitive with p_status = ‘collision_detected’. The following
Ph_Data.ind primitive (p_class either of value ‘start_of_frame’,‘inner_frame_char’, ‘poll_data_char’ or
‘fill_char’) shall pass the p_data value with the complete octet received to the Physical Layer user.

It is recommended that collision avoidance is active during the transmission (i.e. during the execution of
the Ph_Data.req primitive) of any character of p_class of value (see A.4)

   - ack_char.
The overview of the above requirements is given in Table 1.

**Table 1 – Overview of use of bus free detection and collision avoidance (informative)**

**BEFORE transmission** **DURING transmission**

**p_class** **bus free detection** **collision avoidance**

start_of_frame on enabled
(see A.1)

inner_frame_char off enabled

ack_char off      - (disabled)

                          - enabled (recommended)

poll_data_char off enabled
(see A.2) (see A.3)

fill_char on enabled

|p class<br>_|BEFORE transmission<br>bus free detection|DURING transmission<br>collision avoidance|
|---|---|---|
|<br>start_of_frame|on|enabled<br>(see A.1)|
|inner_frame_char|off|enabled|
|<br>ack_char|off|• (disabled)<br>• enabled (recommended)|
|poll_data_char|off<br>(see A.2)|enabled<br>(see A.3)|
|fill_char|on|enabled|


-----

### 2 Data Link Layer type Twisted Pair (DL TP1)

#### 2.1 Introduction
The Data Link Layer described in this clause is called Data Link Layer type Twisted Pair (TP1). Its
medium access shall correspond to a CSMA/CA mechanism, Carrier Sense Multiple Access with
Collision Avoidance.

#### 2.2 Frame formats

##### 2.2.1 Overview
The Data Link Layer shall have exactly the three Frame formats shown in the subsequent figures. Other
Frame formats shall not be received. Each Frame shall be sent as a sequence of characters. The
subsequent figures show octets instead of UART characters, i.e. the LPDU, to make it easier to read. The
UART character that corresponds to octet 0 shall be sent firstly, the octet with the highest number shall be
the last character being sent. The individual bits of an octet shall be sent in ascending order, i.e. the lowest
significant bit (bit 1) shall be sent firstly. The different Frame formats shall be differentiated in the
Control field.

The Data Link Layer Type Twisted Pair 1 shall support the 3 following Frame formats.

1. L_Data Frame Format
2. L_Poll_Data Frame Format
3. Acknowledgement frame Format

##### 2.2.2 Control field
The first character of each Frame shall be the Control field CTRL. The Control field shall contain the
information about the Data Link Layer service. It shall include the Frame type flag, the Frame priority
and a flag containing the information whether the LPDU is a repeated one, see Figure 28.

Control field
7 6 5 4 3 2 1 0

FT = 0 : L_Data_Extended Frame
FT = 1 : L_Data_Standard Frame

r = 0 : repeated L_Data-Frame
r = 1 : not repeated L_Data-Frame

FT 0 r 1 p1 p0 0 0 L_Data-Frame

1 1 1 1 0 0 0 0 L_Poll_Data-Frame
x x 0 0 x x 0 0 Acknowledgement Frame

p1 p0
0 0 system priority
1 0 urgent priority
0 1 normal priority
1 1 low priority

**Figure 28 - Control field**

The Control field shall indicate the type of the request Frame: L_Data_Standard Frame L_Data_Extended
Frame, L_Poll_Data request Frame or Acknowledgment Frame.

|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|
|Frame type||repeat flag||priority|priority|||
|FT|0|r|1|p1|p0|0|0|
|1|1|1|1|0|0|0|<br>       0|
|x|x|0|0|x|x|0|0|

|p1|p0|
|---|---|
|0|0|
|1|0|
|0|1|
|1|1|


-----

The Frame Type flag shall be mapped to the Frame Type Parameter of the L_Data-service. (Please refer
to the specification of the L_Data-service in [01] clause “Usage of Frame Format”.)

**FTP parameter** **FT flag**
**in L_Data-service** **in L_Data-Frame**

0 1 The L_Data Frame shall be an L_Data_Standard Frame.

1 0 The L_Data Frame shall be an L_Data_Extended Frame.

If Frame Type flag FT = 0 in CTRL field, an Extended Control field CTRLE shall follow on octet 1.

|FTP parameter<br>in L Data-service<br>_|FT flag<br>in L Data-Frame<br>_|Col3|
|---|---|---|
|<br>0|<br>1|<br>The L_Data Frame shall be an L_Data_Standard Frame.|
|1|0|<br>The L_Data Frame shall be an L_Data_Extended Frame.|


The two priority bits of the Control field shall control the priority of the Frame, if two devices start
transmission simultaneously.

Repeated L_Data Frames shall have the repeat_flag set to zero, non-repeated ones shall have it set to one.


NOTE 2 The Control field encoding '01r0p1p000' shall not be used for future extensions of the Data Link Layer Twisted Pair 1
protocol.

##### 2.2.3 L_Data Frame formats
Two L_Data Frame formats shall be available on the TP1 Medium. The usage of the different formats
shall depend on the value of the Frame format parameter to the Data Link Layer (see [01]). The
L_Data_Standard Frame format shall be used if the Frame format parameter is 0, otherwise the
L_Data_Extended Frame format shall be used.


##### 2.2.4 L_Data_Standard Frame

###### 2.2.4.1 Frame format
The structure of the variable length L_Data_Standard Frame shall comply with Figure 29 below.

|CTRL|SA|DA|AT,<br>NPCI,<br>LG|TPDU (L Data)<br>_|FCS|
|---|---|---|---|---|---|


8 16 16 8 8

**Figure 29 - Frame fields with standard fieldname abbreviations**

|Octet 0|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 1|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Octet 2|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Octet 3|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Octet 4|Col34|Col35|Col36|Col37|Col38|Col39|Octet 5|Col41|Col42|Col43|Col44|Octet 6|Col46|Col47|Col48|Col49|Col50|Col51|Col52|Octet 7|Col54|Col55|Col56|Col57|Col58|Col59|Col60|Octet 8|Col62|Col63|Col64|Col65|Col66|Col67|Col68|...|Octet 21|Col71|Col72|Col73|Col74|Col75|Col76|Col77|Octet 22 (max.)|Col79|Col80|Col81|Col82|Col83|Col84|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (h)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|||||||||||||||||||||||||||||||||||||||Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|
|1|0||1|||0|0|||||||||||||||||||||||||||||||||LSDU||||||||||||||||||||||||LS|D|U||||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|||||||||length|length|length|length|length|length|length|length||||||||||NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI|||||||applic|applic|applic|applic|applic|applic|applic|applic|ation user data||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI|||||||data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data<br>|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|data<br>data<br>data<br>data<br>data<br>data<br>data<br>data|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|ap|ap|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|plication control field|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / physical address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>length (0 to 15; start with Octet 7)<br>"<br>"<br>"|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>ap|ap|ap|||||||||||||||||||||||||||||||||
|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-3**|**L-2**|**L-2**|**L-2**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-4**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-7**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|


**Figure 30 – Format 1s, L_Data_Standard Frame format**

###### 2.2.4.2 Control field (CTRL)
The common encoding of the Control field is specified in clause 2.2.2 “Control field” above.


###### 2.2.4.3 Source Address (SA)
The octets one and two of the L_Data_Standard Frame shall be the high and lower octet of the Source
Address. This shall be the Individual Address of the device that causes the transmission of the Frame.


-----

###### 2.2.4.4 Destination Address and Address Type (AT)
The Destination Address (octets three and four) shall define the devices that shall receive the Frame. For
an L_Data_Standard Frame, the Destination Address can be either an Individual Address (AT = 0) or a
Group Address (AT = 1), depending on the Destination Address Type (AT) in octet five.

###### 2.2.4.5 Length
The L_Data_Standard Frame shall have a variable length. The length information shall indicate the
number of characters (0…14) transported by the L_Data_Standard Frame starting with octet 7. This
means that a L_Data_Standard request Frame with length 0 shall end after the sixth octet.

###### 2.2.4.6 Check octet
The last octet of the L_Data_Standard Frame shall be the check octet (Figure 31) that shall make an odd
parity over the set of corresponding bits belonging to the preceding octets of the Frame. This represents a
logical NOT XOR function (F in Figure 31) over the individual bits of the preceding octets of the Frame.

Bit 7 6 5 4 3 2 1 0
Octet 0 b0,7 b0,6 b0,5 b0,4 b0,3 b0,2 b0,1 b0,0
Octet 1 b1,7 b1,6 b1,5 b1,4 b1,3 b1,2 b1,1 b1,0
Octet 2 b2,7 b2,6 b2,5 b2,4 b2,3 b2,2 b2,1 b2,0

…

Octet N bN,7 bN,6 bN,5 bN,4 bN,3 bN,2 bN,1 bN,0
F 1 1 1 1 1 1 1 1

Check octet p7 p6 p5 p4 p3 p2 p1 p0

**Figure 31 - Check octet**

##### 2.2.5 L_Data_Extended Frame

###### 2.2.5.1 Use and Frame format
The L_Data_Extended Frame format shall be used for:

  - messages with APDU > 15 octets (long messages) that do not fit into L_Data_Standard Frame
because of its limited length, and

  - messages with extended addressing capabilities used in LTE-HEE mode.

The L_Data_Extended Frame shall not be used instead of the L_Data_Standard Frame if the encoding
capabilities of L_Data_Standard Frame are sufficient (e.g. for short Frames).

The structure of the variable length L_Data_Extended Frame shall comply with Figure 32 below.

CTRL CTRLE SA DA LG TPDU (L_Data) FCS

8 8 16 16 8 8

**Figure 32 - Frame fields with standard fieldname abbreviations**

|7|6|5|4|3|2|1|0|
|---|---|---|---|---|---|---|---|
|b0,7|b0,6|b0,5|b0,4|b0,3|b0,2|b0,1|b0,0|
|b1,7|b1,6|b1,5|b1,4|b1,3|b1,2|b1,1|b1,0|
|b2,7|b2,6|b2,5|b2,4|b2,3|b2,2|b2,1|b2,0|

|b<br>N,7|b<br>N,6|b<br>N,5|b<br>N,4|b<br>N,3|b<br>N,2|b<br>N,1|b<br>N,0|
|---|---|---|---|---|---|---|---|
|1|1|1|1|1|1|1|1|

|p<br>7|p<br>6|p<br>5|p<br>4|p<br>3|p<br>2|p<br>1|p<br>0|
|---|---|---|---|---|---|---|---|

|CTRL|CTRLE|SA|DA|LG|TPDU (L Data)<br>_|FCS|
|---|---|---|---|---|---|---|


-----

|Octet 0|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Octet 1|Col10|Col11|Col12|Col13|Octet 2|Col15|Col16|Col17|Col18|Col19|Col20|Octet 3|Col22|Col23|Col24|Col25|Col26|Col27|Octet 4|Col29|Col30|Col31|Col32|Col33|Col34|Col35|Octet 5|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Octet 6|Col45|Col46|Col47|Col48|Col49|Col50|Col51|Octet 7|Col53|Col54|Col55|Col56|Col57|Col58|Col59|Octet 8|Col61|Col62|Col63|Col64|Col65|Col66|Octet 9|Col68|Col69|Col70|Col71|Col72|Col73|Col74|...|Octet N|Col77|Col78|Col79|Col80|Col81|Col82|Col83|Octet N+1|Col85|Col86|Col87|Col88|Col89|Col90|Col91|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Control Field|Ext.Ctrl Field|Ext.Ctrl Field|Ext.Ctrl Field|Ext.Ctrl Field|Ext.Ctrl Field|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Source Addr. (l)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (h)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Dest. Addr. (l)|Length|Length|Length|Length|Length|Length|Length|Length|TPCI|TPCI|TPCI|TPCI|TPCI|TPCI|TPCI|TPCI||||||||||||||||...|||||||||Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|Check Octet|
|0|0||1|||0|0||LSDU|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||L|SD|U|||||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app||||||||length|length|length|length|length|length|length|length||||||||||NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>||||||application u|application u|application u|application u|application u|application u|application u|application u|ser data|||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>|"<br>"<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>data/APCI<br>||||||data/APCI<br>|data/APCI<br>|data/APCI<br>|data/APCI<br>|data/APCI<br>|data/APCI<br>|data/APCI<br>|data/APCI<br>|...<br>|||||||||||||||||
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|app|app|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|lication control field|
|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|frame type<br>repeat flag<br>priority<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|address type g/i<br>hop count<br>"<br>"<br>extended frame format (EFF)<br>"<br>"<br>"|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|area address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"<br>|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|device address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|dest. group / individual address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|length (0 to 254; start with Octet 8)|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|TPCI<br>"<br>"<br>"<br>"<br>"<br>APCI<br>"<br>app|app|app|||||||||||||||||||||||||||||||||
|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-3|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-4|L-4|L-4|L-4|L-4|L-4|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-7|L-2|L-2|L-2|L-2|L-2|L-2|L-2|L-2|


**Figure 33 – Format 1e, L_Data_Extended Frame format**

The encoding of the fields in the Frame is specified in the next clauses.


###### 2.2.5.2 Control field (CTRL)
The common encoding of the Control field is specified in clause 2.2.2 “Control field” above.

###### 2.2.5.3 Extended Control field (CTRLE)
If the Frame Type flag FT = 1 in the CTRL field, an Extended Control field CTRLE shall follow on
octet 1.


The CTRLE shall contain the Extended Frame format parameter EFF and the Hop Count parameter.
Bit 7 shall contain the Destination Address Type (AT) flag g/i. The AT shall only indicate the Address
Type and shall not point to a difference in the Frame Format.

_Extended Control field_
_7 6 5 4 3 2 1_ _0_


_AT_ _t_ _t_ _t_ _t_
_0_ _0 0 0 0 Point-to-point Addressed L_Data_Extended Frame_
_0_ _0 0 0 1 Reserved_
_0_ _0 0 1 0 Reserved_
_0_ _0 0 1 1 Reserved_
_0_ _0 1 x x Reserved_
_0_ _1 0 0 0 Reserved_
_0_ _1 0 0 1 Reserved_
_0_ _1 0 1 0 Reserved_
_0_ _1 0 1 1 Reserved_
_0_ _1 1 0 0 Reserved_
_0_ _1 1 0 1 Reserved_
_0_ _1 1 1 0 Reserved_
_0_ _1 1 1 1 Reserved_

|7|6|5|4|3|2|1|Col8|0|Col10|
|---|---|---|---|---|---|---|---|---|---|
|<br>_Address Type_|<br>_Hop Count_|<br>_Hop Count_|<br>_Hop Count_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|
|_AT_||||_t _|_t _|_t _|_t _|_t _|_t  _|
|_0 _||||_0_|_ 0_|_ 0_|_  0_|_  0_|_   0_|
|<br>_0_||||<br>_0 _|<br>_0 _|<br>_0 _|<br>_0_|<br>_0_|<br>_ 1_|
|<br>_0_||||_0_|_ 0_|_ 0_|_  1_|_  1_|_   0_|
|<br>_0_||||<br>_0_|<br>_ 0_|<br>_ 0_|<br>_  1_|<br>_  1_|<br>_   1_|
|<br>_0_||||<br>_0_|<br>_ 1_|<br>_ 1_|<br>_  x_|<br>_  x_|<br>_   x_|
|<br>_0_||||<br>_1_|<br>_ 0_|<br>_ 0_|<br>_  0_|<br>_  0_|<br>_   0_|
|<br>_0_||||<br>_1 _|<br>_0 _|<br>_0 _|<br>_0_|<br>_0_|<br>_ 1_|
|<br>_0_||||_1_|_ 0_|_ 0_|_  1_|_  1_|_   0_|
|<br>_0_||||<br>_1_|<br>_ 0_|<br>_ 0_|<br>_  1_|<br>_  1_|<br>_   1_|
|<br>_0_||||<br>_1_|<br>_ 1_|<br>_ 1_|<br>_  0_|<br>_  0_|<br>_   0_|
|<br>_0_||||<br>_1_|<br>_ 1_|<br>_ 1_|<br>_  0_|<br>_  0_|<br>_   1_|
|<br>_0_||||<br>_1_|<br>_ 1_|<br>_ 1_|<br>_  1_|<br>_  1_|<br>_0_|
|<br>_0_||||_1_|_ 1_|_ 1_|_  1_|_  1_|_   1_|


-----

_Extended Control field_
_7 6 5 4 3 2 1_ _0_

_AT_ _t_ _t_ _t_ _t_
_1_ _0 0 0 0 Standard Group addressed L_Data_Extended Frame_
_1_ _0 0 0 1 Reserved_
_1_ _0 0 1 0 Reserved_
_1_ _0 0 1 1 Reserved_
_1_ _0 1 x x multicast zone addressed_
_1_ _1 0 0 0 Reserved_
_1_ _1 0 0 1 Reserved_
_1_ _1 0 1 0 Reserved_
_1_ _1 0 1 1 Reserved_
_1_ _1 1 0 0 Reserved_
_1_ _1 1 0 1 Reserved_
_1_ _1 1 1 0 Reserved_
_1_ _1 1 1 1 Reserved_

**Figure 34 – Extended Control field**

###### 2.2.5.4 Source Address (SA)
The octets one and two of the L_Data_Extended Frame shall be the high and lower octet of the Source
Address. This shall be the Individual Address of the device that causes the transmission of the Frame.

###### 2.2.5.5 Destination Address (DA)
In L_Data_Extended Frame the type of the Destination Address shall, besides the Address Type (g/i flag),
also depend on the Extended Frame format parameter EFF of the Extended Control field CTRLE. With
EFF = 0000b the same address type shall be used as in L_Data_Standard format. With EFF ≠ 0000b
special address formats and tables shall be used.

###### 2.2.5.6 Length (LG)
The L_Data_Extended Frame shall have a variable length. The length information shall indicate the
number of characters (0 to 254, 255 = escape-code) that shall be transported by the L_Data_Extended
Frame starting after the TPCI octet. This means that an L_Data_Extended Frame with length 0 shall end
after the TPCI octet.

The length information shall be encoded by the combination of the Frame type-bit in the Control field and
the length field, as specified in [01].

|7|6|5|4|3|2|1|Col8|0|Col10|
|---|---|---|---|---|---|---|---|---|---|
|<br>_Address Type_|<br>_Hop Count_|<br>_Hop Count_|<br>_Hop Count_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|<br> <br>_Extended_<br>_Frame format_<br>_(EFF)_|
|_AT_||||_t _|_t _|_t _|_t _|_t _|_t _|
|<br>_1 _||||<br>_0 _|<br>_0 _|<br>_0 _|<br>_0 _|<br>_0 _|<br>_0_|
|_1 _||||_0_|_ 0_|_ 0_|_  0_|_  0_|<br>_   1_|
|<br>_1 _||||<br>_0_|<br>_ 0_|<br>_ 0_|<br>_  1_|<br>_  1_|<br>_   0_|
|<br>_1 _||||<br>_0_|<br>_ 0_|<br>_ 0_|<br>_  1_|<br>_  1_|<br>_   1_|
|<br>_1 _||||<br>_0_|<br>_ 1_|<br>_ 1_|<br>_  x_|<br>_  x_|<br>_   x_|
|<br>_1 _||||<br>_1 _|<br>_0 _|<br>_0 _|<br>_0 _|<br>_0 _|<br>_0_|
|_1 _||||_1_|_ 0_|_ 0_|_  0_|_  0_|_   1_|
|<br>_1 _||||<br>_1_|<br>_ 0_|<br>_ 0_|<br>_  1_|<br>_  1_|<br>_   0_|
|<br>_1 _||||<br>_1_|<br>_ 0_|<br>_ 0_|<br>_  1_|<br>_  1_|<br>_   1_|
|<br>_1 _||||<br>_1_|<br>_ 1_|<br>_ 1_|<br>_  0_|<br>_  0_|<br>_   0_|
|<br>_1 _||||<br>_1_|<br>_ 1_|<br>_ 1_|<br>_0_|<br>_0_|<br>_ 1_|
|_1 _||||_1_|_ 1_|_ 1_|_  1_|_  1_|_   0_|
|<br>_1 _||||<br>_1_|<br>_ 1_|<br>_ 1_|<br>_  1_|<br>_  1_|<br>_   1_|


-----

##### 2.2.6 L_Poll_Data Frame

###### 2.2.6.1 Frame format

|Control Field|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Source Addr. (h)|Col10|Col11|Col12|Col13|Col14|Col15|Col16|Source Addr. (l)|Col18|Col19|Col20|Col21|Col22|Col23|Col24|Dest. Addr. (h)|Col26|Col27|Col28|Col29|Col30|Col31|Col32|Dest. Addr. (l)|Col34|Col35|Col36|Col37|Col38|Col39|Col40|Col41|Col42|Col43|Col44|Col45|Col46|Col47|Col48|Check Octet|Col50|Col51|Col52|Col53|Col54|Col55|Col56|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|8|7|6|5|4|3|2|1|
|1|1|1|1|0|0|0|0|||||||||||||||||||||||||||||||||0|0|0|0|||||||||||||
|||||||||zone address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|zone address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|zone address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|zone address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|zone address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|zone address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|zone address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|zone address<br>"<br>"<br>"<br>line address<br>"<br>"<br>"|node address<br>"<br>"<br>"<br>"<br>"<br>"|node address<br>"<br>"<br>"<br>"<br>"<br>"|node address<br>"<br>"<br>"<br>"<br>"<br>"|node address<br>"<br>"<br>"<br>"<br>"<br>"|node address<br>"<br>"<br>"<br>"<br>"<br>"|node address<br>"<br>"<br>"<br>"<br>"<br>"|node address<br>"<br>"<br>"<br>"<br>"<br>"|node address<br>"<br>"<br>"<br>"<br>"<br>"|poll_group_address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|poll_group_address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|poll_group_address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|poll_group_address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|poll_group_address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|poll_group_address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|poll_group_address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|poll_group_address<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|"<br>"<br>"<br>"<br>"<br>"<br>"<br>"|||||no_of_exp._poll_data<br>"<br>"<br>"|no_of_exp._poll_data<br>"<br>"<br>"|no_of_exp._poll_data<br>"<br>"<br>"|no_of_exp._poll_data<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|NOT XOR<br>"<br>"<br>"<br>"<br>"<br>"<br>"|
|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|**L-2**|


**Figure 35 - Format 3, L_Poll_Data Request Frame Format**

The Poll_Data request Frame is shown in Figure 31. The device that transmits the Poll_Data Frame is
called Poll_Data master.


The Poll_Data response Frame is shown in Figure 36, consisting of a variable number of Poll_Data or
FILL (FEh) characters. In Figure 36 each gray box symbolizes a character. There is five bit times idle
time before a Poll_Data character is transmitted by a slave and 6 bit times idle time before a FILL
character is transmitted by the master. A Poll_Data character transmitter is called Poll Data Slave. Each
Poll Data Slave shall know his Poll Group and his response slot number.


End of L_Poll_Data
Request Frame


Start of Poll_Data
Response Frame


_Legend:_


UART Character

5 Poll-Data 6 FILL 5 Poll-Data 5 a number in bit times

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|5|Col9|6|Col11|5|Col13|Col14|Col15|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|


**Figure 36 - Format 4, L_Poll_Data Response Frame Format**

###### 2.2.6.2 Source Address
The octets one and two of a request Frame are the high and lower octet of the Source Address. This shall
be the Individual Address of the device that caused the transmission of the Frame.


###### 2.2.6.3 Destination Address / Poll Group Address
The Destination Address (octets three and four) shall define the device(s) that shall receive the Frame. For
L_Poll_Data request Frames the Destination Address shall always be a Poll Group Address. The Poll
Group Address shall be unique in the physical Segment in which the Poll_Data request Frame is
transmitted. The Poll Group Address addresses up to 15 Poll Data Slaves (slot 0 to slot 14) belonging to
the same Poll Group.

###### 2.2.6.4 Number of Expected Poll Data
The Number of Expected Poll Data shall be contained in the Poll_Data request Frame. It shall be a
number from 1 to 15 and shall tell how many Poll Data characters are expected in the subsequent
Poll_Data response Frame.


-----

###### 2.2.6.5 Check Octet
The last octet of the poll data request Frame shall be the check octet (Figure 31) that shall make an odd
parity over the set of corresponding bits belonging to the preceding Poll_Data request Frame sent by the
Poll_Data master. The Poll_Data or FILL character in the Poll_Data response Frame shall not be secured
by the Check Octet. This represents a logical NOT XOR function (F in Figure 31) over the individual bits
of the preceding octets of the Poll_Data request Frame.

###### 2.2.6.6 Poll Data Slaves and Poll Data Octet
The poll data octet shall represent the information that shall be transmitted by the Poll Data Slave in its
response slot (slot 0 to slot 14) in case its Poll Group is contained in a Poll_Data request Frame. The Data
Link Layer user may choose any value of {00h to FFh} \ {FEh} for the poll data octet. FEh is reserved by
the Data Link Layer protocol.

##### 2.2.7 Acknowledge Frame
The short acknowledgment Frame format shall consist of 15 bit times idle time followed by a single
character that shall be used to acknowledge an L_Data.req Frame (see also Figure 38). The following
figure shows the corresponding codes of the short acknowledgment.

Octet 0
Short
acknwoledgement

7 6 5 4 3 2 1 0
1 1 0 0 1 1 0 0 ACK
0 0 0 0 1 1 0 0 NAK
1 1 0 0 0 0 0 0 BUSY
0 0 0 0 0 0 0 0 NAK + BUSY [13][)]

**Figure 37 - Format 2, Short Acknowledgment Frame Format**

#### 2.3 Medium Access Control

##### 2.3.1 Definition
The Twisted Pair 1 medium access control shall be CSMA/CA, Carrier Sense Multiple Access with
Collision Avoidance. CSMA/CA means that collisions shall be resolved within a bit time. CSMA/CA
relies on the bit-wise collision avoidance mechanism described in clause 1.4.1 “Ph_Data Service” above.

Figure 38 shows the character timings during the Data Link Layer message cycle. Each gray box
symbolizes a UART character.

Before a device may start the transmission of a request Frame it has to wait for at least 50 bit times line
idle since the last bit of the preceding Data Link Layer message cycle. A Data Link Layer message cycle
shall always consist of a Data Link Layer request Frame and the subsequent Data Link Layer
acknowledgment - or a subsequent Data Link Layer response Frame.

It may occur that devices start transmitting at the same time. Due to the CSMA/CA algorithm, which
avoids Frames being disturbed by a collision, a transmitting device shall check for each individual bit, if
the bit value that has been sent equals to the bit value that is received at the same time. If the Physical
Layer indicates line busy or a collision, then the transmission of a Frame with higher priority sent by
another device is in progress. To avoid further collisions, transmission shall be stopped immediately
within that bit time. All Frame parts that have already been sent shall be interpreted as being part of the
higher priority Frame of which the transmission is in progress.

13) This coding is received, when BUSY an NAK are sent simultaneously without collision mechanism. This coding
shall be handled as BUSY.

|Octet 0<br>Short<br>acknwoledgement|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|7|6|5|4|3|2|1|0|
|1|1|0|0|1|1|0|0|
|0|0|0|0|1|1|0|0|
|1|1|0|0|0|0|0|0|
|0|0|0|0|0|0|0|0|


-----

The following diagram shows the typical timing.

Start of Request Frame ⇓

Start of repeated L_Request Frame or
frame with high priority⇓

End of L_Data Request Frame

End of L_Poll_Data Request Frame ⇓

End of L_Poll_Data Request Frame ⇓
Requester transmits a FILL character


2,0 (t2) 2,0 2,0

|⇓ 2,|,0 (|(t2)|2,0|0|2,0|Col7|Col8|
|---|---|---|---|---|---|---|---|
|>53<br>||||||||
|>53<br>||||||||

|Col1|Col2|Col3|⇓ >50 (t1)|Col5|Col6|
|---|---|---|---|---|---|
||||>50 (t1)|>50 (t1)||
|||||||


ACK, NAK, BUSY

⇓

15 (t3) ≥ 50 (t1)

⇓

Poll-Data Poll-Data

5(t4)Poll-Data 5 5

|Col1|Col2|Col3|Col4|15 (t3)|Col6|≥ 50 (t1)|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|||||15 (t3)|15 (t3)|≥ 50 (t1)|≥ 50 (t1)||
||||||||||

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|5(t4|)|5|Col11|5|Col13|Col14|Col15|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|


⇓


Poll-Data FILL Poll-Data

5 6(t5) 5

|Col1|Col2|Col3|Col4|Col5|Col6|Col7|5|Col9|6(t5)|Col11|5|Col13|Col14|Col15|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|


**Figure 38 - Character timing**


-----

|Parameter|time|minimum|typical|maximum|
|---|---|---|---|---|
|• p_class = start_of_frame:<br>minimal time between the<br>end of a possible preceding<br>telegram and the start-bit of<br>the telegram starting with<br>the transmission of this<br>character|tts||||
|• priority = low or normal,<br>no repetition|• priority = low or normal,<br>no repetition|(53 bit times) - 50 µs|53 bit times|- 14)|
|• priority = urgent or<br>system<br>• repetition|• priority = urgent or<br>system<br>• repetition|(50 bit times) - 50 µs|50 bit times|-|
|• p_class = inner_frame_char:<br>time from start-bit to start-bit<br>of consecutive character|tcp|(13 bit times) – 2 µs|13 bit times|(13 bit times) + 5 µs<br>(see A.5)|
|• p_class = ack_char:<br>time between the end of the<br>last character of the prece-<br>ding telegram and the start-<br>bit of the acknowledge<br>character|tas|(15 bit times) – 5 µs|15 bit times|(15 bit times) + 20 µs|
|• p_class = poll_data_char:<br>time from the end of the stop<br>bit of the preceding<br>character to the start bit of<br>the polling character|tpcs1|(5 bit times) – 30 µs|5 bit times|(5 bit times) + 30 µs|
|• p_class = fill_char:<br>time from the end of the stop<br>bit of the preceding<br>character to the start bit of<br>the polling fill character|tpcs2|(6 bit times) – 30 µs|6 bit times|(6 bit times) + 30 µs|


**Figure 39 - Requirements for Character coding**

14) There is no maximum time distance between telegrams.


-----

|Parameter|time|minimum|typical|maximum|
|---|---|---|---|---|
|• p_class = start_of_frame:<br>minimal time between the<br>end of a possible preceding<br>telegram and the start-bit of<br>the telegram starting with the<br>transmission of this<br>character|<br>tts|(40 bit times)|50 bit times|-|
|• p_class = inner_frame_char:<br>time from start-bit to start-bit<br>of consecutive character|tcp|(13 bit times) – 30 µs|13 bit times|(13 bit times) + 30 µs|
|• p_class = ack_char:<br>time between the end of the<br>last character of the prece-<br>ding telegram and the start-<br>bit of the acknowledge<br>character|tas|(15 bit times) – 10 µs<br>(see A.6)|15 bit times|(15 bit times) + 30 µs<br>(see A.7)|
|Time before polling character<br>• p_class = poll_data_char:<br>time from the end of the stop<br>bit of the preceding<br>character to the start bit of<br>the polling character<br>• p_class = fill_char:<br>time from the end of the stop<br>bit of the preceding<br>character to the start bit of<br>the polling fill character|tpcs1 <br>tpcs2|(5 bit times) – 50 µs||(6 bit times) + 50 µs|


**Figure 40 - Requirements for Character decoding**

Due to the fact that a logical ´0´ value is dominant, Frames having more leading zeros obtain a higher
priority versus Frames with less leading zeros, if their transmission starts at the same time. CSMA/CA
means that a Frame with higher priority will not be disturbed by transmission attempts of lower priority.

After detection that the bus is not free and after a collision, the device shall wait until the end of the
message cycle in progress and shall make another attempt to transmit the data link request PDU after 50
bit times or more line idle time.


-----

##### 2.3.2 Overview: priority operation algorithm of the Medium Access Control
Figure 28 shows the priority parameter and the repeat flag contained in the Control field of the L_Data
request Frame. The priority parameter has an impact on the priority of a request Frame especially in
Networks with a lot of traffic. System priority is reserved for the Data Link Layer. Urgent, normal and
low priority may be chosen by the Data Link Layer user; see the Group Objects and the objects described
in [02] for more details how to do that. Semantic definitions about the occasions when urgent, normal and
low priorities should be used are left to a profile.


50 bit times
line idle


L_Poll_Data Frame or
L_Data Frame with system or urgent priority or
repeated L_Data request Frame

WP non-repeated L_Data Frame of high or low priority


Time

WP = 3 bit times (waiting period)

**Figure 41 - Priority Operation**

The repeat flag is reserved for the Data Link Layer.

Repeated and non-repeated L_Data request Frames having system or urgent priority and repeated L_Data
request Frames with normal and low priority may be sent immediately after 50 bit times line idle time.
Non-repeated L_Data request Frames of normal and low priority shall wait additionally for at least three
further bit times.

L_Poll_Data request Frames exist only in a non-repeated version.

##### 2.3.3 Priority sequence
If two Data Link Layer instances detect 50 bit-times line idle at exactly the same time then in case of
colliding data link request Frames the following priority sequence holds true (in descending order of
priority):

**Control** **repeat** **priority available to**
**data link Frame type** **priority**
**field** **flag** **Data Link Layer user**

1001 0000 L_DATA system priority repeated no

1011 0000 L_DATA system priority not rep. no

1111 0000 L_POLLDATA system priority not rep. no

1001 1000 L_DATA urgent priority repeated yes

1011 1000 L_DATA urgent priority not rep. yes

1001 0100 L_DATA normal priority repeated yes

1011 0100 L_DATA normal priority not rep. yes

1001 1100 L_DATA low priority repeated yes

1011 1100 L_DATA low priority not rep. yes

**Figure 42 - Priority Sequence, in Descending Order of Importance**

|Control<br>field|data link Frame type|priority|repeat<br>flag|priority available to<br>Data Link Layer user|
|---|---|---|---|---|
|1001 0000|L_DATA|system priority|repeated|no|
|1011 0000|<br>L_DATA|system priority|not rep.|no|
|1111 0000|<br>L_POLLDATA|system priority|not rep.|no|
|1001 1000|<br>L_DATA|urgent priority|repeated|yes|
|1011 1000|<br>L_DATA|urgent priority|not rep.|yes|
|1001 0100|<br>L_DATA|normal priority|repeated|yes|
|1011 0100|<br>L_DATA|normal priority|not rep.|yes|
|1001 1100|<br>L_DATA|low priority|repeated|yes|
|1011 1100|<br>L_DATA|low priority|not rep.|yes|


-----

##### 2.3.4 Additional requirement: guarantee of access fairness
The Twisted Pair 1 medium access control algorithm is designed to reduce the number of Frame
collisions sent by partner devices connected to the same line. Therefore the overall priority sequence
behaviour described above shall be readjusted in that way that from system point of view no burst
behaviour shall occur exactly after the end of the 50 bit times line idle time. Therefore in the
implementation provisions shall be made to prevent from devices accessing the medium always exactly
after 50 resp. 53 bit times. The main intention shall be laid upon fairness between all devices accessing
the medium: an equal distribution of medium accesses shall be guaranteed.

NOTE 3 Provided that there is no configuration error in the Network (i.e. the Individual Addresses shall be unique), once the
Source Address of a data link request Frame is transmitted all collisions shall be resolved.


earliest point for a
high priority paket

point of
synchronisation
is startbit of last byte 50 bit times

Byte

busfree-timeout + 11 bit times

tolerance for start
transmitting of a high
priority paket < 3 bit times

#### 2.4 Data Link Layer services


tolerance < 3 bit times

tolerance for start
transmitting of a low priority
paket < 3 bit times

earliest point for a
low priority paket
3 bit times later as a
high priority paket

|high priority paket|Col2|Col3|Col4|tolerance < 3 bit times|Col6|
|---|---|---|---|---|---|
|50 bit times<br>high priority paket|50 bit times<br>high priority paket|50 bit times<br>high priority paket|50 bit times<br>high priority paket|||
|Byte||||||
|busfree-timeout + 11 bit times<br>earliest point for a<br>tolerance for start<br>transmitting of a high<br>priority paket  < 3 bit times<br>tolerance for start<br>transmitting of a lo<br>paket  < 3 bit times|busfree-timeout + 11 bit times<br>earliest point for a<br>tolerance for start<br>transmitting of a high<br>priority paket  < 3 bit times<br>tolerance for start<br>transmitting of a lo<br>paket  < 3 bit times|busfree-timeout + 11 bit times<br>earliest point for a<br>tolerance for start<br>transmitting of a high<br>priority paket  < 3 bit times<br>tolerance for start<br>transmitting of a lo<br>paket  < 3 bit times|busfree-timeout + 11 bit times<br>earliest point for a<br>tolerance for start<br>transmitting of a high<br>priority paket  < 3 bit times<br>tolerance for start<br>transmitting of a lo<br>paket  < 3 bit times|busfree-timeout + 11 bit times<br>earliest point for a<br>tolerance for start<br>transmitting of a high<br>priority paket  < 3 bit times<br>tolerance for start<br>transmitting of a lo<br>paket  < 3 bit times|busfree-timeout + 11 bit times<br>earliest point for a<br>tolerance for start<br>transmitting of a high<br>priority paket  < 3 bit times<br>tolerance for start<br>transmitting of a lo<br>paket  < 3 bit times|


##### 2.4.1 Acknowledgement of (unknown) Data Link Layer services
Reserved fields shall not be used.

NOTE 4 This concerns the Data Link Layer for end devices and Couplers. Requirements for the externally
accessible Data Link Layer are specified in clause 2.11.
In reception direction, if the Data Link Layer receives a Frame with an unknown Frame Format, then it
shall do the following.

- It shall not pass the Frame to the Data Link Layer user.

- In case of a Coupler the Frame shall neither be routed.

- The Frame shall not be checked for “Frame Correctness” as specified in clause 2.5.3.

- It shall do either one of the following.

   - If receiving Data Link Layer supports the non-selective Layer-2 acknowledge, then a Layer-2
acknowledge may be sent.

   - Alternatively, or if the non-selective Layer-2 acknowledge is not implemented, no Layer-2
acknowledge shall be sent (no ACK, no NAK and no BUSY).
This is the recommended behaviour.

##### 2.4.2 Data Link Layer operation modes and Data Link Layer acknowledge
The L_Data service shall be an acknowledged datagram service.


-----

If the local user of Data Link Layer prepares an LSDU for the remote user it shall apply the L_Data.req
primitive to pass the LSDU to the local Data Link Layer.

The local Data Link Layer shall accept the service request and shall try to send the LSDU to the remote
Data Link Layer with Frame format 1. The Destination Address may be an Individual Address or a Group
Address (multicast or broadcast).

**Error and exception handling**

  - If the length of the LSDU requires an L_Data-Frame with value of the field Length ≥ 255
characters, then no L_Data-Frame shall be transmitted on the bus; the L_Data.req shall be
confirmed by an L_Data.con with l_status = not_ok.

If the remote Data Link Layer instance receives an L_Data-Frame, it shall check the Frame correctness.
An L_Data-Frame shall be considered correct if all of the following requirements are fulfilled.

1. The L_Data-Frame is correct according the general KNX TP1 Frame check conditions as
specified in clause 2.5.3 Checking for correct request Frames.
2. The length of the Frame is between 8 and 23 characters for an L_Data_Standard-Frame or
between 9 and 263 for an L_Data_Extended-Frame. (The character counting includes the Check
octet.)

There shall at Data Link Layer level be no further checks concerning the Frame length.

EXAMPLE 1 For acknowledging the Frame, it shall not be checked whether the value of the field Length matches
the real Frame length.

EXAMPLE 2 For acknowledging the Frame, it shall not be checked whether the Frame length exceeds the devices
reception capabilities.

If the received Frame is not correct then it shall not be passed to the Data Link Layer user.

The remote Data Link Layer shall check whether it is addressed or not. The remote Data Link Layer is
addressed in any of the following cases.

1. The Destination Address is an Individual Address

1.1 that corresponds to the own Individual Address of the remote Data Link Layer, or

1.2 that is topologically located on the other side of a Coupler, or

1.3 that is one of the Tunnelling Individual Addresses of a KNXnet/IP Tunnelling Server

2. The Destination Address is

     - a Standard Mode Group Address or

     - an LTE-HEE Group Address,
and the remote Data Link Layer supports the non-selective Data Link Layer acknowledge.
3. The Destination Address

3.1 is a Standard Mode Group Address that is contained in the Group Address Table of the
receiver or

3.2 is an LTE-HEE Group Address addressing an Area that is assigned to the remote Data Link
Layer.

4. The Destination Address is the broadcast address.


-----

**If the remote Data Link Layer is addressed then it shall confirm the Frame with an acknowledge-**
Frame.

- If the request Frame received is correct, the remote Data Link Layer shall send an ACK-Frame.

- If the request Frame received is correct but the remote Data Link Layer does not have resources to
process it, the remote Data Link Layer shall react as follows:
  - If the Destination Address in the received Frame is a Group Address or the Broadcast Address or
an Individual Address that is identical to the Individual Address of the device and if the device will
again be able to process Frames that starts 100 ms after the reception of the original Frame [15)], the
remote Data Link Layer may send a BUSY character.
  - If the Destination Address in the received Frame is a Group Address or the Broadcast Address or
an Individual Address that is identical to the Individual Address of the device and if the device will
not be able to process Frames that starts 100 ms after the reception of the original Frame, the
remote Data Link Layer shall not send a BUSY character.

- If the received Frame is correct but exceeds that reception capabilities of the remote Data Link Layer
(buffer size) then the Frame may be acknowledged by an ACK-Frame or may not be acknowledged
(recommended); the Frame shall not be acknowledged by a NAK-Frame or a BUSY-Frame; the Frame
shall not be passed to the Data Link Layer user.

- If the received Frame is not correct (see above) then the remote Data Link Layer shall send NAKacknowledge.
**If the remote Data Link Layer is not addressed then it shall ignore the received Frame (independently**
of whether the Frame is correct or not): it shall neither acknowledge (ACK, NACK or BUSY) the Frame
nor pass it to the remote Data Link Layer user.
Furthermore, in case of a correctly received Frame, the remote Data Link Layer shall send an L_Data.ind
primitive to the Data Link Layer user only if the Frame received is not a repetition of a directly preceding
correctly received L_Data-Frame and if one of the following conditions applies:

  - if the Destination Address is an Individual Address and if it corresponds to the own Individual
Address of the receiver, or
  - if the Destination Address is a Standard Mode Group Address and if the acceptance condition
according to the respective Group Address Table Realisation Type is fulfilled, or is an LTE-HEE
Group Address addressing an Area that is assigned to the device or
  - if the Destination Address is the Broadcast Address.
In any other case, the received Frame shall be discarded.

If the remote Data Link Layer accepts the received Frame, it shall map the repeat flag of the Control field
to the service parameter Repetition of the L_Data.ind.

The local Data Link Layer shall pass an L_Data.con primitive to the local user that shall indicate either a
correct or erroneous data transfer.

15) This time has been chosen so that the device will be able to process the third repetition of the Frame.


-----

Prior to passing the confirmation to the local user, the local Data Link Layer shall need an
acknowledgment from the remote Data Link Layer (Frame format 2).

- If the acknowledgment is a positive acknowledgment (ACK), the local Data Link Layer shall pass an
L_Data.con with l_status = OK to the local user.

- If the acknowledgment is BUSY, and if the L_Data.req service parameter repetition requires L2repetition then the local Data Link Layer shall try to repeat after at least 150 bit times wait time
(see A.8) for up to busy_retry times. If BUSY is received for more than busy_retry times, the local
Data Link Layer shall pass an L_Data.con with l_status = not_ok to the local user.

- In all other cases, this is if

  - the acknowledgment is NAK or
  - the the acknowledgement is invalid or corrupted, or
  - after an acknowledgement time-out of 15 bit times + 30 µs (30 µs max. positive tolerance for
p_class = ack_char, time tas, see A.7) no Acknowledge is received,
**then local Data Link Layer shall repeat after 50 bit times up to nak_retry times. If for more than**
nak_retry times either a NAK or a corrupted acknowledgment is received or an acknowledge timeout
occurs, the local Data Link Layer shall pass an L_Data.con with l_status = not_ok to the local user.
The parameters nak_retry and busy_retry shall be parameters of Data Link Layer. In the maximum, the
same request LPDU is transmitted (nak_retry + busy_retry + 1) times, before the Data Link Layer shall
stop retransmission.

L_Data.req(repetition, destination_address, AT, priority, lsdu)

repetition: this shall specify whether the local Data Link Layer shall repeat the Frame on
the medium in case of transmission errors (NAK, BUSY or acknowledge
time-out)
destination_address: either an Individual Address or a group address
AT: destination address type indicates whether destination_address is an
individual or a group address
priority: system, urgent, normal or low priority
lsdu: this is the user data to be transferred by Data Link Layer

L_Data.con(repetition, destination_address, AT, priority, lsdu, l_status)

repetition: don’t care. This flag has the same value as in the
L_Data.req
destination_address: either an Individual Address or a group address
AT: destination address type indicates whether
destination_address is an individual or a group address
priority: system, urgent, normal or low priority
lsdu: this is the user data to be transferred by Data Link Layer
l_status: ok: request Frame sent successfully
not_ok: transmission of the request Frame didn’t succeed

L_Data.ind(repetition, source_address, destination_address, AT, priority, lsdu)

repetition: This shall indicate that the Frame is a repeated Frame.
source_address: Individual Address of the device that requested the L_Data service
destination_address: the Individual Address of this device or a group address of this device
AT: destination address type indicates whether destination_address is a physical
or a group address
priority: system, urgent, normal or low priority
lsdu: this is the user data that has been transferred by Data Link Layer


-----

NOTE 5 For the Transport Layer a negative L_DATA.con means either a connection-oriented or a connection-less message. In
case of an untransmitted connectionless message it is left to the user application how to handle that. In case of an untransmitted
communication-oriented message the Transport Layer attempts further three times to transmit the corresponding T_DATA request
PDU. A fourth negative L_DATA.con leads to an abort of the Transport Layer connection.

##### 2.4.3 L_Poll_Data service and protocol
The L_Poll_Data service is a confirmed multicast service. The local user of Data Link Layer is applying
the L_Poll_Data.req primitive to request data from one or more remote users. The local Data Link Layer
accepts the service request and tries to send the L_Poll_Data.req to the remote Data Link Layer with
Frame format 3. The destination address is always a Poll Group Address. The Poll Group Address is a
parameter of Data Link Layer.

L_Poll_Data request Frames that are not correctly received (see 2.5.3) shall be discarded.

After receiving a correct L_Poll_Data request Frame with a poll_group_address equal to its own Poll
Group Address, the remote Data Link Layer responds with a single Poll_Data character, see 2.2, Frame
format 4. The remote Data Link Layer gets the Poll_Data octet from its user with the L_Poll_Update.req
primitive. The Poll_Data character shall be transmitted in the response slot associated with this device.
The device’s response slot is a defined time slot in which the Poll Data Slave device shall transmit the
Poll_Data character. The duration of a response slot is an idle time of 5 times followed by a single UART
character. If e.g. a device has the third response slot then the device has to wait for two Poll_Data
characters transmitted by other devices, until the device is transmitting its Poll_Data character in the third
response slot (see also Figure 38). The response slot number is a parameter of Data Link Layer.

A device shall not respond if its response slot number is larger than the number of expected poll data
(no_of_expected_poll_data) in the request Frame.

The local Data Link Layer expects a number of Poll_Data characters from the Poll Group. If an expected
Poll_Data character has not started after five bit times the local Data Link Layer is sending a FILL (FEh)
after six bit times. The remote Data Link Layer can therefore still count Poll_Data characters even if a
member of the Poll Group doesn’t respond.

The local Data Link Layer passes a L_Poll_Data.con primitive to the local user that contains the received
Poll_Data and FILL octets or an information that the service failed.

The L_Poll_Data Service can only be applied between devices on a single physical Segment. The number
of expected Poll_Data characters is limited to 16.

L_Poll_Data.req(destination, no_of_expected_poll_data)

destination: a Poll Group Address

no_of_expected_poll_data: number of expected poll data cycles

L_Poll_Data.con(l_status, poll_data_sequence)

l_status: OK; valid poll_data_sequence

not_ok; invalid poll_data_sequence, i.e. collision occurred during transmission of a
FILL, or at least one Poll_Data not correct

poll_data_sequence: sequence of Poll_Data octets and FILL octets

L_Poll_Update.req(Poll_Data)

Poll_Data: The value of the Poll_Data octet to be transmitted in the L_Poll_Data_Response
Frame.

L_Poll_Update.con() Indicates that the L_Poll_Update.req has been accepted by the local Data Link
Layer.


-----

##### 2.4.4 L_Busmon service
The L_Busmon service is a local data link service available only in data link bus monitor mode. It
consists of the L_Busmon.ind primitive that transfers each received Frame from the local Data Link
Layer to the local Data Link Layer user.

L_Busmon.ind(l_status, time_stamp, lpdu)

l_status: information whether a Frame error, bit error or a parity error was detected in the
received Frame. Additional information about the number of already received
Frames may also be contained.

time_stamp: timing information, when the start bit of the Frame was received

lpdu: all octets of the received Frame

##### 2.4.5 L_Service_Information service
The L_Service_Information service is a local data link service available in data link normal mode. It
consists of the L_Service_Information.ind primitive.

L_Service_Information.ind() a Frame was received which contained the Individual Address of the local
Data Link Layer as Source Address.


-----

#### 2.5 Data Link Layer protocol

##### 2.5.1 General
The Data Link Layer's task is to offer a reliable datagram service between devices at the same line. This
means that corrupted Frames shall be retransmitted (i.e. repeated) for a sensible number of times, that
only information of correctly received Frames is presented to the Data Link Layer user and that this
information is not presented several times to the data link user (duplication prevention).

Clauses 2.2.7, 2.4 and 2.6 contain certain aspects of the Data Link Layer protocol. The following
subclauses explain additional protocol requirements to be fulfilled by each Data Link Layer protocol
instance.

##### 2.5.2 Assemble and disassemble Frame
Before transmitting a Frame on the line, the Data Link Layer shall assemble service parameters into an
LPDU.

It shall also ensure the following mapping.

   - The Frame Type shall be calculated from the Frame Format parameter as defined in [01] and
put into FT flag in the CTRL field.
   - For the Extended Frame format the EFF field shall be taken from the Frame Format parameter
as defined in [01] and put into EFF field in CTRLE.
   - The length information shall be calculated from the parameter octet_count and put into LG field
on octet 6.
   - The parameters priority and repeat flag shall be put into CTRL field.
   - The parameters Destination Address and LSDU shall be inserted in the Frame.
   - The Address Type AT shall be put into CTRLE field (group address flag g/i).
   - The Network Layer information shall be put into CTRLE field.
   - The Source Address and Check octet shall be inserted.

When receiving a PDU, the Data Link Layer shall do the reverse operation.

   - It shall disassemble the Frame into parameters to be transmitted in an L_Data.ind Frame.
   - It shall regenerate the Address Type from the value of the CTRLE.g/i flag.
   - It shall generate the octet_count parameter from the value of CTRL and LG fields.

##### 2.5.3 Checking for correct request Frames
As specified in clause 2.4.2 the Data Link Layer receiving a request Frame shall check whether the Frame
is correct. A Frame is correct if:

− every UART character has a correct start/stop bit (otherwise: framing error) and parity bit
(otherwise: parity error), and
− every bit of a UART character has a correct signal timing (otherwise: bit error), and
− the check octet has the correct value, and
− the Control field has a correct value.

##### 2.5.4 Consequences of priority operation and fairness for duplication prevention
Figure 42 shows that a repeated low priority L_Data request Frame is less prior as e.g. a non-repeated
urgent priority L_Data request, provided that Data Link Layer line idle detection occurs at the same time.

This implies that if an acknowledge to a non-repeated low or normal priority request Frame is corrupted
and another device at the same physical segment at the same time has to transmit an urgent priority
L_Data request to the acknowledging device, then the acknowledging device might lose the knowledge,
that the subsequent repeated low or normal priority Frame is a duplicate.


-----

Informal rules to remedy that:

   - Reduce noise at the medium as much as necessary to avoid corrupted acknowledgements.

   - Otherwise: Do not use many urgent priority Frames and

   - Be aware during internal or external user application programming of the possibility that in
rare cases a duplicated L_Data service may occur.

#### 2.6 State machine of Data Link Layer
After power on, a device doesn’t receive or transmit Frames. The Data Link Layer state machine
(Figure 43) is using the Ph_Reset to synchronize with the start of request Frames of a possibly existing
network. With the positive confirmation Ph_Reset.con(+) the Data Link Layer state machine is in the idle
state where Data Link Layer shall work as described in the clauses above, i.e. receive Frames and
transmit Frames. However if the Physical Layer indicates a transceiver error either with a Ph_Reset.con(-)
or with a Ph_Data.con(-), the Data Link Layer shall perform the transition into the Off_Bus state, where
no Frames shall be transmitted any more. Only a power on can make the Data Link Layer state machine
leave the Off_Bus state. In Off_Bus state every data link request shall be negatively confirmed.
Additionally the transmitter shall be switched off.

The Data Link Layer shall store in non-volatile memory when a transition to Off_Bus state did occur. The
location for this information shall be the 'stuck flag', see Volume Three, Part One, Layer-8. The stuck flag
may be reset by a configuration tool.


_Legend:_


Ph_Data.ind /
assemble LPDU


**Figure 43 - State Machine of Data Link Layer**


-----

#### 2.7 Parameters of Data Link Layer
The following parameters influence the behaviour of Data Link Layer and are required inside Data Link
Layer in order to operate correctly:

Individual Address unique Individual Address of this device

address table address table with the group address(es) of this device

nak_retry defines the number of retries in case of a NAK response or a acknowledgment
timeout

busy_retry defines the number of retries in case of a BUSY response

Poll Group Address the Poll Group Address of this device

response slot number the response slot number of this device

Data Link Layer mode either the normal or the bus monitor mode of the Data Link Layer.

#### 2.8 Reflections on the system behavior in case of L_Poll_Data configuration faults
The following L_Poll_Data misconfigurations potentially can be done:

- _Two L_Poll_Data masters belong to the same polling group:_

Misconfiguration remains hidden unless someone at the bus monitor detects that the same polling
group is used in two L_Poll_Data service requests with different Source Addresses.

- _Two Poll Data Slaves of the same polling group have the same Poll_Data response slot number:_

In case both slaves transmit the same Poll_Data character value nothing irregular happens. If the
values differ, the Poll_Data response with an earlier dominant bit will force collision avoidance at
the other Poll Data Slave, so that the latter Poll Data Slave will not be able to transmit its response.
Indirectly this kind of misconfiguration is detectable because at another slot an expected
L_Poll_Data character will never appear.

- _Poll Data Slave illegally transmits a FILL character:_

At the master side this will be interpreted as a missing Poll Data Slave and is therefore detectable
easily.

#### 2.9 The Data Link Layer of a Bridge
A bridge doesn’t need an Individual Address. An Individual Address of a bridge may be used to set
manufacturer specific parameters in the bridge.

A bridge has a Data Link Layer that responds to all L_Data request Frames independent from the value of
the destination address and transmits the L_Data request to the other side. All other Data Link Layer
services are ignored.

#### 2.10 The Data Link Layer of a Router
A router has a Data Link Layer that responds to a L_Data request Frame if the value of the destination
address

− is listed in the routing_table

− or if the destination address is an Individual Address that indicates that the destination is on
the other side of the router

− or is equal to the Individual Address of the router.

In these cases, the L_Data.ind is indicated to the Network Layer. All other Data Link Layer services are
ignored.


-----

A Router may send a Data Link Layer acknowledgement Frame to Standard Mode Group Address
Frames and/or LTE-HEE Group Address Frames if the Router supports non-selective Data Link Layer
acknowledge. In case the Router supports non-selective Data Link Layer acknowledge the Router sends a
Data Link Layer acknowledge regardless of whether the Group Address is in the Filter Table or not.

#### 2.11 Externally accessible Busmonitor and Data Link Layer interface
The Data Link Layer services can be made available to an external user application. See [03] clause "Bus
Monitor EMI" for the L_Busmon external message format, clause "Data Link Layer EMI" for the normal
mode Data Link Layer external message formats and clause "Layer Access Management" how to switch
between bus monitor and Data Link Layer mode.

It is the responsibility of the external user application, like the cEMI Client, to set the correct values of the
Data Link Layer protocol fields, like the values of the field EFF. It is not required that the Data Link
Layer corrects or refuses any service.


-----

## TP1 Specification argumentation

###### (informative)

#### A.1
This is a consequence of the general requirement in clause 1.5 of the specifications: “During transmission
(i.e. during Ph_Data.req primitive execution) collision detection shall never be disabled.

#### A.2
This is in the specification of poll_data_char in clause 1.4.1.

#### A.3
If two slaves were assigned the same time polling slot, then there will still be collision avoidance.

#### A.4
Implementations exist that do not have collision avoidance during the transmission of the ack_char class.
It is recommended however to have collision avoidance active also for this p_class as well.

#### A.5
This allows with these tolerances that the collision avoidance still works within the first 4 characters
(EFF-Frame) with max. distance of 700 m and current decoding tolerances: 30 µs / 4 (average spreading
of tolerances) = 7,5 µs  5 µs with a reserve of 2 µs.

#### A.6
All senders stick to the most early transmission tolerance of -10 µs. There are no senders that send the
acknowledge Frame more early. Also, any small transmission time will cause additional delays
(signalling speed), so it is meaningful to have the decoding tolerance the same as the coding tolerance.

It is allowed to have a negative decoding tolerance larger than -10 µs, to also accept acknowledge Frames
that start even more than 10 µs too early, but this is not required.

#### A.7
If a sender and a receiver are separated by 700 m and the acknowledge character sent by the receiver is
sent with the maximal delay of 20 µs, it will at the sender (on its bus connection) be seen with a delay of
2 x 3,5 µs + 20 µs = 27 µs after it has completed its own initial transmission.
(3,5 µs = 700 m maximal distance between any two devices /2 x 10[8] ms[-1] signalling speed on copper wire.
This is shown in Figure 44:

1. The original telegram takes 3,5 µs from sender to receiver.

2. The receiver takes the full maximal allowed 20 µs to start emitting the acknowledge character.

3. Also this acknowledge character takes 3,5 µs from receiver back to the sender.

One should additionally note that if signals are used (Layer-2 code) or measured (testing) on the
processor side of a transceiver, that the transceiver delay times should be taken into account as well.

With a reserve of 3 µs, this leads to a time-out for waiting for the Acknowledge of 15 bit times + 30 µs.


-----

tas, MAX = 15 bit times + 20 µs


acknowledge


sender


Frame


3,5 µs


**Figure 44 – Sender time-out waiting for the Acknowledge**

#### A.8
The device shall wait for at least 150 bit times, regardless of whether the bus is free or not. After this wait
time has elapsed, it may repeat the L_Data.req-Frame, with p_class = “repetition”, this is, there shall be a
bus free period of at least 50 bit times. This also means that if the bus is free during the last 50 bit times
of the wait time, that then the original sender may retransmit the L_Data.req-Frame immediately.

#### A.9
Here, it shall only be tested that the BDUT indeed transmits or starts transmitting its acknowledge Frame
even if the line is discovered to be not free up to 35 µs before it would transmit itself. Side effects, e.g.
caused by different contents of the Frame of the WG and the BDUT should be excluded. Therefore in the
test specifications WG and BDUT send the same type of acknowledge Frame.

#### A.10
In the following, it is assumed that the timings 16 µs and 35 µs have to do with the fact that a device may
not be able in due time after the reception of a Frame, to conclude that it is addressed by the Frame and
should acknowledge the Frame and should thus inhibit its bus free detection. It is assumed that older
implementations cannot inhibit bus free detection 16 µs before the own transmission; whereas newer
implementations would be able to inhibit bus free detections already 35 µs on beforehand.
The ideal value would obviously be 50 µs (td3 = -50 µs in [06]).


15 bit times + 27 µs


receiver


3,5 µs


-----

## Summary of signals

###### (informative)

NOTE 6 The timings about “position” (where a signal starts) are counted from the start of the active phase of 0-signal to the start
of the signal or character that is defined. The timings about “separation” (how far are signals separated in time) are counted from the
**end of the preceding 0-signal or 1-signal to the start of the signal or character that is defined.**

**Typical**
**Abbr.** **Name** **Definition**
**duration**

tpd pulse duration 35 µs Duration of the active pulse of the 0-signal.

tsd signal duration 1 bit time Total duration of the 0-signal or 1-signal.

tsp signal position n bit times Position of any bit n (1 ≤n ≤11) of a Character in
relation to the start bit of that Character.
tcp character position 13 bit times Position of the Character in relation to the start

of the preceding Character.
tcs character separation 2 bit times Time between a Character and the subsequent
Character in the same telegram.
tts telegram separation Time between a telegram and the subsequent
Telegram.

     - priority low or normal and no 53 bit times

repetition

     - priority urgent or system or 50 bit times

repetition

tas acknowledge separation 15 bit times Time between a Telegram and the

Acknowledge Telegram for that Telegram.
tpcs1 polling character separation 1 5 bit times

tpcs2 polling character separation 2 6 bit times

tsp

tpd

tsd

**Figure 45 – Timings within the 0-signal** **Figure 46 – Timing within the character**

character n character n+1 character n+2

tcs

tcp

**Figure 47 – Character timing**

|Abbr.|Name|Typical<br>duration|Definition|
|---|---|---|---|
|tpd|pulse duration|35 µs|Duration of the active pulse of the 0-signal.|
|tsd|signal duration|1 bit time|Total duration of the 0-signal or 1-signal.|
|tsp|signal position|n bit times|Position of any bit n (1≤n ≤11) of a Character in<br>relation to the start bit of that Character.|
|tcp|character position|13 bit times|Position of the Character in relation to the start<br>of thepreceding Character.|
|tcs|character separation|2 bit times|Time between a Character and the subsequent<br>Character in the same telegram.|
|tts|telegram separation||Time between a telegram and the subsequent<br>Telegram.|
||• priority low or normal and no<br>repetition|53 bit times|53 bit times|
||• priority urgent or system or<br>repetition|50 bit times|50 bit times|
|tas|acknowledge separation|15 bit times|Time between a Telegram and the<br>Acknowledge Telegram for that Telegram.|
|tpcs1|polling character separation 1|5 bit times||
|tpcs2|polling character separation 2|6 bit times||


character n


character n+2


tsd


tcs


-----

acknowledge n Frame
Frame n

n+1

tts

tas

**Figure 48 – Frame timing**


n+1

|Col1|Frame n ack|know|wl|ledge n|Col6|Frame n+1 ack|
|---|---|---|---|---|---|---|
|||||tts|||
||||||||
|||tas|||||


acknowledge n


Frame

n+1


tas


-----

