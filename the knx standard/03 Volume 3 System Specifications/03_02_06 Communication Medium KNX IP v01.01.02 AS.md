# System Specifications

## Communication Media

 KNX IP

Summary

This document defines specifies how the Internet Protocol (IP) shall
be used as a KNX medium by KNX devices that are connected to an
IP network only.

Version 01.01.02 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

AN117 v02 2010.02.02 Preparation of the Draft for Voting.
3/2/6 v1.0.00 2010.07.23 - Integration of resolution of comments from Final Voting.

                     - Publication of the Approved Standard.
01.00.01 2013.10.28 Editorial updates for the publication of KNX Specifications 2.1.
01.00.02 2014.08.19 Editorial update.
01.01.01 2020.10.26 AN183 “KNXnet/IP System Broadcast” integrated.
01.01.02 2021.09.28 Preparation for inclusion in the KNX Specifications v3.0.

#### References

[01] Chapter 3/1/1 “Architecture”

[02] Chapter 3/3/2 “Data Link Layer General”

[03] Chapter 3/3/7 “Application Layer”

[04] Chapter 3/6/3 “External Message Interface”

[05] Chapter 3/8/1 “KNXnet/IP Overview”

[06] Chapter 3/8/2 “KNXnet/IP Core”

[07] Chapter 3/8/5 “KNXnet/IP Routing”

[08] Chapter 3/8/9 “KNX IP Secure”

Filename: 03_02_06 Communication Medium KNX IP v01.01.02 AS.docx
Version: 01.01.02
Status: Approved Standard
Savedate: 2021.09.28
Number of pages: 13

© C i h 200 2021 A i i S S ifi i 01 01 02 2 f 3

|Version|Date|Modifications|
|---|---|---|
|AN117 v02|2010.02.02|Preparation of the Draft for Voting.|
|3/2/6 v1.0.00|2010.07.23|- <br>Integration of resolution of comments from Final Voting.<br>- <br>Publication of the Approved Standard.|
|01.00.01|2013.10.28|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.00.02|2014.08.19|Editorial update.|
|01.01.01|2020.10.26|AN183 “KNXnet/IPSystem Broadcast” integrated.|
|01.01.02|2021.09.28|Preparation for inclusion in the KNX Specifications v3.0.|


-----

#### Contents

###### 1 Specification of the KNX IP Communication Medium ................................................. 4 1.1 Physical specification of the medium ........................................................................ 4 1.2 Mechanical requirements ........................................................................................... 4 1.3 Supplemental IP protocols ......................................................................................... 4 1.4 Physical topology ....................................................................................................... 4 1.5 Topology constraints ................................................................................................. 4

 2 Datagram service ............................................................................................................... 6 2.1 Transmission method ................................................................................................. 6 2.2 Frame encapsulation .................................................................................................. 7 2.3 Physical Layer service definitions ............................................................................. 7

 3 Power feeding service ........................................................................................................ 7

 4 Data Link Layer type KNX IP ......................................................................................... 7 4.1 Frame format ............................................................................................................. 7 4.1.1 Frame type summary...................................................................................... 7 4.1.2 Variable Length Frame Format ROUTING_INDICATION ......................... 7 4.1.3 IP System Broadcast Frame ........................................................................... 8 4.1.4 Buffer Overflow Warning Indication (ROUTING_BUSY) .......................... 9 4.1.5 Buffer Overflow Indication (ROUTING_LOST_MESSAGE) ................... 10 4.2 Medium Access Control .......................................................................................... 10 4.3 Data Link Layer services and protocol .................................................................... 10 4.3.1 L_Data service ............................................................................................. 10 4.3.2 L_PollData service ....................................................................................... 11 4.3.3 L_Busmon service ....................................................................................... 11 4.3.4 L_Service_Information service .................................................................... 11 4.3.5 L_SystemBroadcast service ......................................................................... 11

© C i h 200 2021 A i i S S ifi i 01 01 02 3 f 4


-----

### 1 Specification of the KNX IP Communication Medium

#### 1.1 Physical specification of the medium
As the KNX IP multicast access for message transportation at Physical Layer does not physically
access the client IP medium but is transporting the KNX Telegram data as Application Layer payload
for the client IP stack, no physical specification for this KNX medium type is necessary.

#### 1.2 Mechanical requirements
The equipment used to connect to the IP network shall conform to the specific requirements for the IP
medium access (e.g. 802.3 for Ethernet LANs or 802.11 for Wireless LANs etc.) and all national
regulations for electric installations.

#### 1.3 Supplemental IP protocols
The KNX IP medium requires the implementation of a minimal set of supplemental IP protocols for
interworking. Required IP protocols for the KNX IP medium access are ARP, BootP/DHCP, UDP,
ICMP and IGMP.

Additional IP protocols may be required for the implementation of optional, device specific KNX IP
services.

#### 1.4 Physical topology
The physical topology of the KNX IP medium depends on the installation of the underlying IP
network (LAN, WLAN or WAN), which must ensure that IP multicast telegrams are transported
correctly across different IP topology segments.

#### 1.5 Topology constraints
The proposal assumes that IP defines the transmission mechanism as well as the physical
specifications (e.g. Ethernet). KNXnet/IP Routing is defined as the standard protocol for
communication.

KNX IP Routers assigned to the same Project-Installation-ID SHALL use the same
ROUTING_MULTICAST_ADDRESS.

This adds some restrictions to where inside the topology KNX IP Subnetworks can be used and where
not. If a KNX IP device is assigned to a Subnetwork, then that Subnetwork and any Subnetwork
higher in the logical topology shall contain KNX IP devices only. This leads to additional rules for the
logical topology (compare first three rules with [07]).
Only one KNXnet/IP Routing multicast address shall be used by KNXnet/IP Routers[ 1)].

KNX IP devices have to implement Core Services, Device Management and KNXnet/IP Routing (see

[05] clause 3.5 KNXnet/IP device classes) except those parts that are specific to the function of a
KNXnet/IP Router.

1) Flow control affects all devices and all communication between KNX IP devices.

© C i h 200 2021 A i i S S ifi i 01 01 02 4 f


-----

The following four rules apply to KNX IP devices. The first three rules already apply to KNXnet/IP
Routers.

Rule 1

In general a KNXnet/IP Router may be used as a Line Coupler or a Backbone Coupler. The
Individual Address has the format x.y.0, with x = 1 to 15 and y = 0 to 15.

Rule 2:

If a KNXnet/IP Router is applied as a Backbone Coupler with the Individual Address x.0.0 then
no other KNXnet/IP Router with the Line Coupler Individual Address x.y.0 (y = 1 to 15) shall be
placed topologically „below“ this KNXnet/IP Router.

Rule 3:

If a KNXnet/IP Router is applied as a Line Coupler (e.g. with Individual Address 1.2.0) then no
other KNXnet/IP Router shall be used with a superior Backbone Coupler Individual Address (e.g.
1.0.0) in this installation.

Rule 4:

If a KNX IP device is assigned to a Subnetwork as a simple device (e.g. with Individual Address
1.0.1) then that Subnetwork and any Subnetwork higher in the system structure shall contain
KNX IP devices only.

© C i h 200 2021 A i i S S ifi i 01 01 02 f 6


-----

### 2 Datagram service

#### 2.1 Transmission method
This clause defines the transportation levels of the KNX IP communication system complying with
Chapter 3/8/5 “KNXnet/IP Routing” ([07]).

**IP Datagram**

The KNX IP medium uses IP UDP Datagram transfer on the fixed port 3671. The multicast address
may vary for separate distinct installations on the same IP infrastructure. Usually the IP multicast
address used for the KNXnet/IP Routing traffic is the same as the registered “System Setup” address
224.0.23.12.

**Transmission Speed**

The physical transmission speed on the KNX IP medium depends on the underlying IP network. This
speed may vary across different segments of the IP topology.

Usually the effective transmission speed of the IP network is a lot faster than on KNX Twisted Pair 1
or KNX Powerline Subnetworks. Therefore a limitation of the “penetration” speed (Telegrams per
second) is necessary to prevent buffer overflows in Media Couplers. This is achieved by the flow
control implemented with the ROUTING_BUSY Frame (see [07]).

For KNXnet/IP Routers ROUTING_BUSY shall be a means of preventing the loss of ROUTING_INDICATION Datagrams due to an overflow of the buffer to the KNX Subnetwork.

KNX IP devices receive Datagrams via the network transceiver (“Ethernet chip”), which forwards
them to the microprocessor. Depending on the hardware and software design of the interface between
the network transceiver and the microprocessor the effective data transmission rate between these two
parts inside a KNX IP device may be lower than the actual transmission rate on the communication
network. This internal receiving transmission rate limitation may cause the loss of Datagrams between
network transceiver and microprocessor.

The transmission rate of the ROUTING_INDICATION Datagrams to the network shall be limited and
at the same time KNX IP devices and KNXnet/IP Routers shall receive and process incoming
ROUTING_INDICATION Datagrams at a minimum transmission rate.

Any KNX IP device or KNXnet/IP Router SHALL limit the transmission of KNX IP ROUTING_INDICATION Datagrams to a maximum of 50 Datagrams per second within one second.

For simplicity reasons a KNX IP device MAY choose to always pause 20 ms after it transmits a
ROUTING_INDICATION Datagram. A KNX IP device or KNXnet/IP Router SHALL always pause
its transmission on an assigned multicast address for at least 5 ms after it transmit a ROUTING_INDICATION Datagram.

To ensure a minimum system performance any KNX IP device or KNXnet/IP Router SHALL be
capable of receiving and processing a minimum number of ROUTING_INDICATION Datagrams per
second on an assigned multicast address.

Ideally, any KNX IP device or KNXnet/IP Router SHOULD be capable of receiving and processing at
least 12 750 ROUTING_INDICATION Datagrams[ 2)] per second on an assigned multicast address.
This number enables KNX IP devices or KNXnet/IP Routers to receive and process Datagrams sent by
up to 255 KNX IP devices or KNXnet/IP Routers transmitting at a rate of 50
ROUTING_INDICATION Datagrams per second.

A KNXnet/IP Router or KNX IP device SHALL be able to receive and process up to the KNX
Network - respectively Application Layer at least 1 000 ROUTING_INDICATION Frames per
second.

2) IP Datagram length: 64 octets. Testing SHOULD be done with evenly distanced Datagrams.

© C i h 200 2021 A i i S S ifi i 01 01 02 6 f


-----

#### 2.2 Frame encapsulation
The KNX IP medium uses cEMI encoded Data Link Layer Indication (L_Data.ind) Frames for the
UDP transport on the Multicast address (see above). No changes or additions to the telegram payload
will be performed on KNXnet/IP Routing layer.

The KNX IP medium uses only unconfirmed services and because of the asynchronous nature of IP
networks no flow control mechanisms are defined on the IP medium.

#### 2.3 Physical Layer service definitions
Not applicable as the Internet Protocol Frame is used as transport “medium” and thus the Physical
Layer is defined by whatever medium is used as LAN or WAN.

### 3 Power feeding service
As the KNX IP medium is only a logical Physical Layer without capabilities to provide power feeding
service for KNX devices connected to the KNX IP medium, power feeding for such devices is not in
the scope of this document.

### 4 Data Link Layer type KNX IP

#### 4.1 Frame format

##### 4.1.1 Frame type summary
Each Frame shall be a sequence of octets.

Three Frame formats shall be provided:

1. a variable length Frame format ROUTING_INDICATION (Figure 1), and

2. a variable length IP System Broadcast Frame format ROUTING_SYSTEM_BROADCAST

3. a buffer overflow warning indication (ROUTING_BUSY) (Figure 4)

4. a buffer overflow indication (ROUTING_LOST_MESSAGE) (Figure 5).

In the following representation of Frames, the octet situated on the left hand side shall always be
transmitted firstly.

##### 4.1.2 Variable Length Frame Format ROUTING_INDICATION
The structure of the variable length Frame is shown in Figure 1.
```
KNXnet/IP header
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  HEADER_SIZE_10       |  KNXNETIP_VERSION      |
|  (06h)            |  (10h)            |
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  ROUTING_INDICATION                     |
|  (0530h)                           |
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  HEADER_SIZE_10 + sizeof(cEMI Frame)             |
|                                |
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
KNXnet/IP body
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  cEMI Frame                         |
|  (variable length)                      |
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 1 - Complete Frame encapsulation (Datagram)**

© C i h 200 2021 A i i S S ifi i 01 01 02 f 8


-----

The encoding of the fields of the Frame shall be done as specified in the clauses below.

**KNXnet/IP header**

For a detailed specification of the fields in the KNXnet/IP header see [06].

**KNXnet/IP body**

The KNXnet/IP body of the Routing Indication Frame shall consist only of a cEMI encoded Data Link
Layer Indication message.

Message Additional Additional Control Control Src. Src. Dest. Dest.

NPDU

Code Info Length Information field 1 field 2 High Low High Low

**MC** **AddIL** **…** **Ctrl1** **Ctrl2** **SAH** **SAL** **DAH DAL** **L** TPCI/APCI & data

29h … … x0r0ppxx … … … … …

**Figure 2 - cEMI Data Link Layer Indication message format**

The encoding of the fields of the cEMI L_Data.ind message in the context of KNXnet/IP shall be done
as specified in the clauses below.

**Additional Information**

Medium specific “Additional Information” headers (see [04]) are allowed on the KNX IP medium if
the originator of the Frame is a KNXnet/IP Router or Media Coupler connected to a KNX medium
that provides this medium specific additional information.

**Control Fields**

See [04].

**Source Address**

The Source Address shall be the Individual Address of the device that requests the transmission of the
Frame.

**Destination Address**

The Destination Address defines the device(s) that shall receive the Frame. The Destination Address
can either be an Individual Address or a Group Address, depending on the Address Type flag in the
Control Fields (see above).

##### 4.1.3 IP System Broadcast Frame
An IP System Broadcast Frame shall be identified by KNXnet/IP service type ROUTING_SYSTEM_BROADCAST (0533h). ROUTING_SYSTEM_BROADCAST Frames shall always be
sent on the system setup multicast address. Even if secure routing is enabled, a
ROUTING_SYSTEM_BROADCAST shall not be wrapped in a SECURE_WRAPPER.

For the cEMI message inside the IP System Broadcast Frame, the following shall hold the following.

   - The message code shall be L_Data.ind.

   - The SB bit (bit 4) in the cEMI control field 1 as specified in [04] shall be set to 0. This value
already designates system broadcasts on open media.

   - The Destination Address Type bit (bit 7) in the cEMI control field 2 shall be 1, and the
Destination Address shall be 0 (broadcast).

   - If the cEMI message is an S-A_Data-PDU, S-A_Sync_Request-PDU or S-A_Sync_Response-PDU, the SBC bit in the Security Control Field (SCF) as specified in [03] shall be
set to 1.

A receiver shall ignore ROUTING_SYSTEM_BROADCAST Frames not received on the system
setup multicast address or containing a cEMI message not fulfilling these conditions.

A sender shall not set these fields to values not fulfilling these conditions.

© C i h 200 2021 A i i S S ifi i 01 01 02 8 f 9

|Message<br>Code|Additional<br>Info Length|Additional<br>Information<br>…|Control<br>field 1|Control<br>field 2|Src.<br>High|Src.<br>Low|Dest.<br>High|Dest.<br>Low|NPDU|Col11|
|---|---|---|---|---|---|---|---|---|---|---|
|**MC**|**AddIL**|**AddIL**|**Ctrl1**|**Ctrl2**|**SAH**|**SAL**|**DAH**|** DAL**|**L **|TPCI/APCI & data|
|29h|…|…|x0r0ppxx|…|…|…|…|…|…|…|


-----

**Binary format**
```
KNXnet/IP header
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+ 
|  HEADER_SIZE_10      |   KNXNETIP_VERSION      | 
|  (06h)           |   (10h)            | 
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+ 
|  ROUTING_SYSTEM_BROADCAST                  | 
|  (0533h)                           | 
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+ 
|  HEADER_SIZE_10 + sizeof(cEMI message)             | 
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+ 
             KNXnet/IP body
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+ 
|  cEMI message                         | 
|  (variable length)                      | 
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 3 – Binary format of the KNXnet/IP System Broadcast Frame**

##### 4.1.4 Buffer Overflow Warning Indication (ROUTING_BUSY)
The buffer overflow warning indication shall consist of a fixed length data field of six octets. It shall
be used to indicate that the IP receive buffer has filled up to a point where the buffered incoming
messages may take at least 100 ms to be sent to the KNX Subnetwork. The structure of the buffer
overflow warning indication Frame is shown in Figure 4.
```
KNXnet/IP header
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  HEADER_SIZE_10       |  KNXNETIP_VERSION      |
|  (06h)            |  (10h)            |
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  ROUTING_BUSY                        |
|  (0532h)                           |
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  HEADER_SIZE_10 + 4                     |
|                                |
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
BusyInfo
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  Structure Length      |  DeviceState         |
|  (1 octet)          |  (1 octet)          |
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  ROUTING_BUSY_WAIT_TIME (in milliseconds)          |
|  (2 octets)                         |
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
|  ROUTING_BUSY_CONTROL_FIELD                 |
|  (2 octets)                         |
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+

```
**Figure 4 - ROUTING_BUSY Frame binary format**

Details on handling of buffer overflow warnings and the Routing Busy Message Frame can be found
in [07]. The encoding of the fields of the Frame shall be done as specified in the clauses below.

**KNXnet/IP header**

For a detailed specification of the fields in the KNXnet/IP header see [06].

**KNXnet/IP body**

For the encoding of the KNXnet/IP body of the Routing Lost Telegram Frame see [07].

© C i h 200 2021 A i i S S ifi i 01 01 02 9 f 10


-----

##### 4.1.5 Buffer Overflow Indication (ROUTING_LOST_MESSAGE)
The buffer overflow indication shall consist of a fixed length data field of four octets. It shall be used
to indicate that the IP receive buffer is full and incoming new messages got lost. The structure of the
buffer overflow indication Frame is shown in Figure 5.
```
KNXnet/IP header
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  HEADER_SIZE_10       |  KNXNETIP_VERSION      |
|  (06h)            |  (10h)            |
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  ROUTING_LOST_MESSAGE                    |
|  (0531h)                           |
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  HEADER_SIZE_10 + 4                     |
|                                |
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
LostMessageInfo
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  Structure Length      |  DeviceState         |
|  (1 octet)          |  (1 octet)          |
+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
|  NumberOfLostMessages                    |
|  (2 octets)                         |
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+

```
**Figure 5 – ROUTING_LOST_MESSAGE Frame binary format**

Details on handling of buffer overflows and the Routing Lost Message Frame can be found in the [07].
The encoding of the fields of the Frame shall be done as specified in the clauses below.

**KNXnet/IP header**

For a detailed description of the fields in the KNXnet/IP header see [06].

**KNXnet/IP body**

For the encoding of the KNXnet/IP body of the Routing Lost Telegram Frame see [07].

#### 4.2 Medium Access Control
KNX IP uses an asynchronous access to IP multicast medium. Medium access control on the IP
network shall be handled by the underlying IP infrastructure.

Medium access is restricted by the ROUTING_BUSY scheme (see [07]).

Further, a KNX IP device or KNXnet/IP Router shall limit the number of KNX IP
ROUTING_INDICATION Datagrams to a maximum of 50 Datagrams per second.

#### 4.3 Data Link Layer services and protocol

##### 4.3.1 L_Data service
See [02] for the description of the service interface. The actions performed by Data Link Layer are
listed in [01].

Frames shall be transported as cEMI (Data Link Layer, L_Data.ind = cEMI message code 29h)
messages.

**Frame Acceptance**

A Frame shall be considered valid if the number of characters received without error is consistent with
the content of the "Frame length'' subfield.

Any reserved fields shall have the expected value.

Any invalid Frame shall be ignored.

© C i h 200 2021 A i i S S ifi i 01 01 02 10 f 11


-----

Frames exceeding the reception capabilities of the device shall be ignored.

**Address Check**

The Frame is intended for the receiving device if the Destination Address (Individual Address or
Group Address according to CTRL field) is recognised.

**Data Link Layer acknowledgement sending and retransmissions**

The KNX IP medium does not support Data Link Layer acknowledging of Frames on the medium and
hence does not define any retransmission rules on this layer.

**Frame Fragmentation**

Fragmentation on the physical medium is handled by the underlying IP infrastructure.

##### 4.3.2 L_PollData service
This service is specific to KNX TP1 medium and cannot be supported on KNX IP.

NOTE 1 Periodic circular polling of devices may be achieved at application level using management supervision
mechanisms (based on time slot assignment at applicative level).

##### 4.3.3 L_Busmon service
See [02].

##### 4.3.4 L_Service_Information service
See [02].

##### 4.3.5 L_SystemBroadcast service

###### 4.3.5.1 General
This clause shall apply for KNX IP End devices as well as for the management aspect of KNXnet/IP
Routers.

###### 4.3.5.2 Handling in Data Link Layer
If the KNXnet/IP Server receives an IP System Broadcast Frame, the Frame shall be passed as
L_SystemBroadcast.ind to the local Network Layer independently of the configured KNXnet/IP
Routing Multicast Address, even if secure routing is enabled.

© C i h 200 2021 A i i S S ifi i 01 01 02 11 f 12


-----

###### 4.3.5.3 Handling in Management

4.3.5.3.1 Communication Mode
Regarding the reaction to the Frames specified in the following clauses, the MaS shall handle IP
_System Broadcast Frames as defined in 4.1.3 and broadcast Frames in a uniform way. In this clause,_
“broadcast frame” shall mean:

   - if routing security is not enabled in the MaS: a ROUTING_INDICATION, or

   - if routing security is enabled in the MaS: a SECURE_WRAPPER encapsulating a
ROUTING_INDICATION
and sent on the routing multicast address[ 3)] and containing a broadcast cEMI message; i.e. a cEMI
message with all of the following properties:

   - the message code is L_Data.ind;

   - the SB bit (bit 4) in the cEMI control field 1 as specified in [04] is 1;

   - the Destination Address Type bit (bit 7) in the cEMI control field 2 is 1, and the Destination
Address shall be 0 (broadcast).

   - If the cEMI message is an S-A_Data-PDU, S-A_Sync_Request-PDU or S-A_Sync_Response-PDU, the SBC bit in the Security Control Field (SCF) as specified in [03] is 0.

Any response shall be sent in the same communication mode as the request.

NOTE 2 ROUTING_INDICATION (or SECURE_WRAPPER encapsulating a ROUTING_INDICATION)
Frames containing a system broadcast cEMI message may occur on the medium (they might be targeted to RF
devices behind an IP Router) but shall be ignored by the MaS.

4.3.5.3.2 A_SystemNetworkParameter_Read / A_NetworkParameter_Read
If the cEMI message contained in an IP System Broadcast Frame is an A_SystemNetworkParameter_Read-PDU with object_type = 0 (Device Object), PID = 11 (PID_SERIAL_NUMBER) and
operand = 01h, the MaS shall respond with its KNX Serial Number if its Programming Mode is
“enabled”. The response shall be sent as IP system broadcast.

If the cEMI message contained in a broadcast Frame is an A_NetworkParameter_Read-PDU with
object_type = 0 (Device Object), PID = 11 (PID_SERIAL_NUMBER) and operand = 01h, the MaS
shall respond with its KNX Serial Number if its Programming Mode is “enabled”. The response shall
be sent as broadcast.

4.3.5.3.3 S-A_Sync_Request
If the cEMI message contained in an IP System Broadcast Frame or broadcast Frame is an
S-A_Sync_Request-PDU, the MaS shall respond with an S-A_Sync_Response-PDU. The response
shall be sent in the same communication mode as the request.

4.3.5.3.4 A_DomainAddressSerialNumber_Write
If Security Mode in the MaS is not enabled and the cEMI message contained in an IP System
_Broadcast Frame or a broadcast Frame is an A_DomainAddressSerialNumber_Write-PDU with 4_
octet Domain Address, the MaS shall set its KNXnet/IP Routing Multicast Address
(PID_ROUTING_MULTICAST_ADDRESS) to the 4 octet Domain Address. The MaC shall wait
1 second before assuming that the MaS started the process of accepting the new value. Only after
1 second the MaC may try to access the MaS on the new KNXnet/IP Routing Multicast Address and
repeat every second until successful or a timeout of 60 seconds is reached.

If the Security Mode in the MaS is enabled or if the size of the Domain Address is not 4 octets, this
Frame shall be ignored.

3) The Routing Multicast Address and the System Setup Multicast Address are two different variables, but may
have the same value.

© C i h 200 2021 A i i S S ifi i 01 01 02 12 f 13


-----

4.3.5.3.5 S-A_Data containing an A_DomainAddressSerialNumber_Write-PDU
The Access Policies for writing any Property shall also be applied if written via
A_DomainAddressSerialNumber_Write-PDUs.

4.3.5.3.5.1 4 octet Domain Address
If the cEMI message contained in an IP System Broadcast Frame or a broadcast Frame is an SA_Data-PDU with authentication and confidentiality containing an A_DomainAddressSerialNumber_Write-PDU with 4 octet Domain Address, the MaS shall set its KNXnet/IP Routing Multicast
Address (PID_ROUTING_MULTICAST_ADDRESS) to the 4 octet Domain Address and the Routing
security version (PID_SECURED_SERVICES Property array index 5) to 0. The MaS shall disable
sending and receiving of encrypted Frames on the IP Backbone. The MaS shall not change its Security
_Mode._

The MaC shall wait 1 second before assuming that the MaS has started the process of accepting the
new values. Only after 1 second, the MaC may try to access the MaS on the new KNXnet/IP Routing
Multicast Address with plain Frames and repeat every second until successful or a timeout of
60 seconds is reached.

4.3.5.3.5.2 21 octet Domain Address
If the cEMI message contained in an IP System Broadcast Frame or a broadcast Frame is an SA_Data-PDU with authentication and confidentiality containing an A_DomainAddressSerialNumber_Write-PDU with 21 octet Domain Address, and the MaS supports the Routing security
version indicated in the message, then the MaS shall set its KNXnet/IP Routing Multicast Address
(PID_ROUTING_MULTICAST_ADDRESS) to the 4 octet Domain Address, the Routing security
version (PID_SECURED_SERVICES Property array index 5) to the value of the 1 octet Routing
Security version field, and its Backbone Key (PID_BACKBONE_KEY) to the 16 octet Backbone Key.
In addition, device Security Mode shall be enabled (see Data Security in [03]) . The Access Policy for
writing these Properties shall be evaluated.

The MaC shall wait 1 second before assuming that the MaS started the process of accepting the new
value. Only after 1 second the MaC may try to access the MaS on the new KNXnet/IP Routing
Multicast Address and repeat every second until successful or a timeout of 60 seconds is reached. The
MaC shall use the 21 octet version in case of secure backbone, even if the desired Backbone Key is
already loaded into PID_BACKBONE_KEY.

NOTE 3 The timer sync procedure is the same as for the power-up scenario specified in [08],
clause 2.2.2.3 “Timer synchronizing”, except that there is no need for the random wait time of 0 seconds to 10
seconds.
If the MaS does not support the Routing security version indicated in the message, it shall ignore the
Frame.

NOTE 4 Any other Resources influencing the routing protocol (as e.g. PID_MULTICAST_LATENCY_TOLERANCE or PID_SYNC_LATENCY_FRACTION) are not affected and keep their values. Reason: If this is the
initial DoA assignment (ex-factory or after a factory reset), the parameters will have their default value already.
Otherwise the DoAWrite is done because either the multicast address or the Backbone Key or both changed; if
the device is still in the same physical network it is better to leave the parameters, if not the user can still apply a
factory reset if the parameters do not work.

4.3.5.3.6 Other IP System Broadcast Frames
All other IP System Broadcast Frames shall be ignored.

###### 4.3.5.4 Error and exception handling
If an incoming system broadcast Frame cannot be handled by the KNXnet/IP Router or IP end device
e.g. due to resource limitations, it shall be ignored. Specifically, the ROUTING_BUSY mechanism
shall not be applied. In the opposite direction, received ROUTING_BUSY Frames shall not influence
the sending of IP System Broadcast Frames.

NOTE 5 These error conditions can be detected and resolved in the context of the Management
Procedures.

© C i h 200 2021 A i i S S ifi i 01 01 02 13 f 13


-----

