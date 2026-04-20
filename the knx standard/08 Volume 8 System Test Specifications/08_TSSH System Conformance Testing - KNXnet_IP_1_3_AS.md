## System Conformance Testing 8

### Test Suite Supplement H HH

 KNXnet/IP

Summary

This document contains test specifications for conformity testing of
KNXnet/IP compliant devices.


-----

###### Document Updates

**Version** **Date** **Modifications**
0.1 31.05.2005 Document creation
0.2 24.04.2007
Department and reaction of ise
0.3 9.10.2007 Update document with additional test cases
0.4 27.11.2008
0.5 19.02.2009
Voting
0.6 29.04.2009
1.0 June 2009
V2.0 of the KNX specifications
1.1WD August 2011
1.1WD2 September Integration of comments from KonCert meeting
2012

1.2WD 16.11.12

IP/implementation in Validation Tool).
1.2DP 01.02.13
1.2DV 04.04.13
1.2AS 2013.09
1.3AS 2021.09 Reinserting “disappeared” clause 8

Filename: 8_TSS_H_KNXnet_IP_1_3_AS
Version: 1.2AS
Status: Approved Standard
Savedate: 2021.09.16
Number of pages: 164

|Version|Date|Modifications|
|---|---|---|
|0.1|31.05.2005|Document creation|
|0.2|24.04.2007|Update of document following commenting from KNX Certification<br>Department and reaction of ise|
|0.3|9.10.2007|Update document with additional test cases|
|0.4|27.11.2008|Total review of the document as regards test conditions and test results|
|0.5|19.02.2009|Resolution of comments from KNX IP TF - Preparation for Release for<br>Voting|
|0.6|29.04.2009|Resolution of comments from RfV - Preparation for Final Voting|
|1.0|June 2009|Resolution of comments from FV – Readying document for publication in<br>V2.0 of the KNXspecifications|
|1.1WD|August 2011|Adding clause 7 remote diagnostics and configuration|
|1.1WD2|September<br>2012|Integration of comments from KonCert meeting|
|1.2WD|16.11.12|Added clause 4.3 cEMI Transport Layer – added 5.3.4 to 5.3.6 – not yet<br>included routing busy and knx/ip performance (still under discussion in TF<br>IP/implementation in Validation Tool).|
|1.2DP|01.02.13|Last minute changes in KonCert Telco 0113 –preparation for RfV|
|1.2DV|04.04.13|Resolution of comments from release for voting – reading for FV|
|1.2AS|2013.09|No comments in Final voting –publication as Approved Standard|
|1.3AS|2021.09|Reinserting “disappeared” clause 8|


-----

##### Contents

###### 1 Test Set-up ......................................................................................................................... 7
 1.1 Requirements ........................................................................................................ 7 1.2 Layout ................................................................................................................... 7 1.2.1 Overview ........................................................................................................ 7 1.2.2 Load switch .................................................................................................... 7 1.3 KNX access of test application ............................................................................. 8 1.4 Test prerequisites .................................................................................................. 8 1.5 Important remarks to test case “Hard Reset” ........................................................ 9

 2 Definitions ........................................................................................................................ 10
 2.1 Variables ............................................................................................................. 10 2.1.1 Depending on BDUT ................................................................................... 10 2.1.2 Depending on Test client ............................................................................. 10 2.2 Frames ................................................................................................................. 10 2.2.1 Standard UDP-Frame ................................................................................... 10 2.2.2 Standard ICMP-Frame ................................................................................. 11

 3 Core .................................................................................................................................. 13
 3.1 Unspecific ........................................................................................................... 13 3.1.1 Undefined Discovery Code .......................................................................... 13 3.1.2 Undefined Control Code .............................................................................. 13 3.2 Search Request .................................................................................................... 15 3.2.1 Standard Case ............................................................................................... 15 3.2.2 Invalid Version ............................................................................................. 15 3.2.3 Invalid Header Size ...................................................................................... 16 3.2.4 Incomplete Message ..................................................................................... 16 3.2.5 Oversized Message ...................................................................................... 17 3.3 Description Request ............................................................................................ 17 3.3.1 Standard Case ............................................................................................... 17 3.4 Connect Request ................................................................................................. 18 3.4.1 Standard Case ............................................................................................... 18 3.4.2 Invalid Connection Type .............................................................................. 19 3.5 Connectionstate Request ..................................................................................... 19 3.5.1 Standard Case ............................................................................................... 19 3.5.2 Invalid Channel ............................................................................................ 20 3.5.3 Time Out ...................................................................................................... 21 3.5.4 Bus connection interrupted .......................................................................... 21 3.6 Disconnect Request ............................................................................................. 22 3.6.1 Standard Case ............................................................................................... 22 3.6.2 Invalid Channel ............................................................................................ 23

 4 Device Management ........................................................................................................ 24
 4.1 Connection Handling .......................................................................................... 24 4.1.1 Multiplicity .................................................................................................. 24 4.2 Device Configuration Request ............................................................................ 25 4.2.1 Standard Case ............................................................................................... 25 4.2.2 Read mandatory device properties ............................................................... 27 4.2.3 Write to read-only device property .............................................................. 30 4.2.4 Read nonexisting device property ................................................................ 31 4.2.5 Get/set programming mode of device .......................................................... 33 4.2.6 Get/set programming mode of device by memory access ........................... 35


-----

###### 4.2.7 Change individual address ........................................................................... 36 4.2.8 Change individual address by IP property ................................................... 37 4.2.9 Invalid Endpoint ........................................................................................... 37 4.2.10 Unconnected Endpoint ................................................................................. 38 4.2.11 Repeat and timeout after missing ACK ....................................................... 39 4.2.12 Bus connection interrupted .......................................................................... 40 4.3 cEMI Transport Layer ......................................................................................... 42 4.3.1 T_Data_Individual.req to unconnected BDUT ............................................ 42 4.3.2 T_Data_Individual.ind to unconnected BDUT ............................................ 43 4.3.3 T_Data_Connected.req to unconnected BDUT ........................................... 44 4.3.4 T_Data_Connected.ind to unconnected BDUT ........................................... 45 4.3.5 T_Data_Individual.req to BDUT ................................................................. 46 4.3.6 T_Data_Individual.ind to BDUT ................................................................. 48 4.3.7 T_Data_Connected.req to BDUT ................................................................ 49 4.3.8 T_Data_Connected.ind to BDUT ................................................................ 51 4.3.9 M_PropRead.req after T_Data_Individual.req ............................................ 52 4.3.10 M_PropRead.req after T_Data_Individual.ind ............................................ 55 4.3.11 M_PropRead.req after T_Data_Connected.req ............................................ 57 4.3.12 M_PropRead.req after T_Data_Connected.ind ............................................ 60

 5 Tunnelling ........................................................................................................................ 62
 5.1 Connection Handling .......................................................................................... 62 5.1.1 Standard Case ............................................................................................... 62 5.1.2 Multiplicity .................................................................................................. 63 5.1.3 cEMI Raw Mode .......................................................................................... 64 5.1.4 KNX Busmonitor Mode ............................................................................... 65 5.1.5 Invalid KNX layer code ............................................................................... 66 5.2 Tunnelling Request ............................................................................................. 67 5.2.1 Standard Case Tunnelling to KNX .............................................................. 67 5.2.2 Standard Case Tunnelling from KNX .......................................................... 68 5.2.3 Not increased Sequence Counter ................................................................. 69 5.2.4 Sequence Counter increased by two ............................................................ 71 5.2.5 Standard Case Busmonitor Tunneled from KNX ........................................ 73 5.2.6 Standard Case Raw Mode Tunneled from KNX ......................................... 74 5.2.7 Repeat and timeout after missing ACK ....................................................... 75 5.2.8 Broadcast telegram tunneled to KNX .......................................................... 76 5.2.9 Broadcast telegram tunneled from KNX ..................................................... 77 5.2.10 Point-to-point telegram tunneled to KNX and back .................................... 78 5.2.11 Group address telegram tunneled to KNX ................................................... 81 5.2.12 Group address telegram tunneled from KNX .............................................. 82 5.3 Tunnel Addresses ................................................................................................ 83 5.3.1 Tunnel Addresses Standard Case ................................................................. 83 5.3.2 Tunnel Addresses Uniqueness ..................................................................... 84 5.3.3 Tunnel Addresses Assignment Method ....................................................... 85 5.3.4 Tunnel E_NO_MORE_CONNECTIONS ................................................... 85 5.3.5 Tunnel E_NO_MORE_UNIQUE_CONNECTIONS Case 1 ...................... 88 5.3.6 Tunnel E_NO_MORE_UNIQUE_CONNECTIONS Case 2 ...................... 90 5.4 NAT Compatibility ............................................................................................. 91 5.4.1 Standard Case NAT Compatible Tunnelling to KNX ................................. 91 5.4.2 NAT compatible Tunneling to KNX with IP address set ............................ 95 5.4.3 NAT compatible Tunneling to KNX with port number set ......................... 96 5.4.4 Standard Case NAT Compatible Tunnelling from KNX ............................. 98


-----

###### 5.4.5 NAT compatible Tunneling from KNX with IP address set ........................ 99 5.4.6 NAT compatible Tunneling from KNX with port number set .................. 100

 6 Routing ........................................................................................................................... 102
 6.1 Routing Indication............................................................................................. 102 6.1.1 Standard Case 1 .......................................................................................... 102 6.1.2 Standard Case 2 .......................................................................................... 102 6.1.3 Changed multicast address, Case 1 ............................................................ 103 6.1.4 Changed multicast address, Case 2 ............................................................ 104 6.1.5 Property PID_MSG_TRANSMIT_TO_KNX ........................................... 105 6.1.6 Property PID_MSG_TRANSMIT_TO_IP ................................................ 107 6.1.7 Mixed Case 1 ............................................................................................. 109 6.1.8 Mixed Case 2 ............................................................................................. 110 6.1.9 Mixed Case 3 ............................................................................................. 111 6.2 Routing Lost Message ....................................................................................... 111 6.2.1 Standard Case ............................................................................................. 111 6.2.2 Continuous overflow .................................................................................. 112

 7 Remote Diagnosis and Configuration .......................................................................... 115
 7.1 General .............................................................................................................. 115 7.1.1 Supported Service Family .......................................................................... 115 7.1.2 Illegal Service Code ................................................................................... 116 7.1.3 Illegal Header Length ................................................................................ 117 7.1.4 Illegal Protocol Version ............................................................................. 118 7.2 REMOTE_DIAGNOSTIC_REQUEST ............................................................ 119 7.2.1 Illegal Total Length .................................................................................... 119 7.2.2 Missing HPAI ............................................................................................ 120 7.2.3 Missing Selector ......................................................................................... 120 7.2.4 Illegal Selector ........................................................................................... 121 7.2.5 Selection by Programming Mode .............................................................. 122 7.2.6 Selection by MAC Address ....................................................................... 124 7.2.7 Request via Broadcast ................................................................................ 126 7.3 REMOTE_DIAGNOSTIC_RESPONSE .......................................................... 127 7.3.1 Spontaneous REMOTE_DIAGNOSTIC_RESPONSE ............................. 127 7.3.2 Supported DIBs .......................................................................................... 128 7.4 REMOTE_BASIC_CONFIGURATION_REQUEST...................................... 129 7.4.1 Illegal Total Length .................................................................................... 129 7.4.2 Missing HPAI ............................................................................................ 130 7.4.3 Missing Selector ......................................................................................... 131 7.4.4 Illegal Selector ........................................................................................... 132 7.4.5 Selection by Programming Mode .............................................................. 133 7.4.6 Selection by MAC Address ....................................................................... 135 7.4.7 Missing DIB ............................................................................................... 137 7.4.8 Unknown DIB ............................................................................................ 138 7.4.9 Device Information DIB ............................................................................ 139 7.4.10 Supported Service Families DIB ............................................................... 140 7.4.11 IP Configuration DIB ................................................................................. 141 7.4.12 IP Current Configuration DIB ................................................................... 142 7.4.13 KNX Addresses DIB .................................................................................. 143 7.4.14 Request via Broadcast ................................................................................ 144 7.5 REMOTE_RESET_REQUEST ........................................................................ 145 7.5.1 Illegal Total Length .................................................................................... 145


-----

###### 7.5.2 Missing Selector ......................................................................................... 146 7.5.3 Illegal Selector ........................................................................................... 147 7.5.4 Selection by Programming Mode .............................................................. 148 7.5.5 Selection by MAC Address ....................................................................... 149 7.5.6 Missing Reset Mode .................................................................................. 150 7.5.7 Unknown Reset Mode ................................................................................ 151 7.5.8 Soft Reset ................................................................................................... 152 7.5.9 Hard Reset .................................................................................................. 153 7.5.10 Request via Broadcast ................................................................................ 154

 8 IP as KNX Medium ....................................................................................................... 155
 8.1 General .............................................................................................................. 155 8.2 KNX-IP device detection .................................................................................. 155 8.2.1 Detection of KNX IP end devices .............................................................. 155 8.2.2 Detection of Mask Version (57B0h or 5705h) .......................................... 156 8.3 cEMI Transport Layer ....................................................................................... 157 8.3.1 Device Management Version 2 .................................................................. 157 8.3.2 T_Connect/T_Disconnect .......................................................................... 158 8.3.3 T_Data_Broadcast ...................................................................................... 159 8.3.4 T_Data_Group ........................................................................................... 160 8.3.5 T_Data_Connected .................................................................................... 161 8.3.6 T_Data_Individual ..................................................................................... 163


-----

#### 1 Test Set-up

##### 1.1 Requirements
The following hard- and software is required for the automated KNX/IP device tests.

1. KNX/IP Test device, BDUT

2. PC with as required installed components: KNXnet/IP validation tool[1], .NET Framework 1.1,
Falcon Runtime/Developer Version 1.23 (File version 1.0.2177.0, latest Falcon release) or
higher.

3. 10/100 MBit HUB/Switch

4. KNX Installation:

    - KNX DIN rail (in case of DIN rail mounting of BDUT)

    - RS232, EIBlib/IP, KNXnet/IP tunnelling server or USB access

    - Power supply

    - KNX load switch

5. Ethernet TP and KNX TP cables

6. DHCP-Server for automatic assignment of IP addresses.

7. Optional: PC with Wireshark or equivalent with KNX/IP extensions. This PC can be used to
monitor KNXnet/IP traffic, but is not required for the tests.

##### 1.2 Layout

###### 1.2.1 Overview
The BDUT shall be connected to the bus and - if required - to an external power supply. It shall also
be connected to the ethernet installation. A KNX load switch can be used to interrupt bus connection
of the BDUT.

The ethernet installation shall not be connected to other network segments to avoid interference with
ethernet traffic created by other devices than those required for the tests. It is therefore recommended
to use a non-switching HUB, if available (especially, if PC running Wireshark or equivalent is
connected to the ethernet). This is however not a requirement for the tests to succeed.

See Figure 1: KNX/IP Validation - Test Layout for a topological view of the test layout.

###### 1.2.2 Load switch
The KNX load switch shall have two channels allowing the complete disconnection of the BDUT
from the KNX installation, this means disconnecting both wires of the TP cable in use. Both channels
shall use the same group address (1 bit) for switching on (value = 1) and off (value = 0): 1/1/50. The
individual address of the load switch shall be set to 1.1.50.

If the BDUT supports KNXnet/IP tunnelling, the load switch will also be used during one of the tests
(point to point communication over a tunnelling connection). It is therefore important that the
individual address of the load switch is set to the above-mentioned value.

1 Available free of charge from KNX Association for every EITT licensee


-----

##### 1.3 KNX access of test application
The KNXnet/IP validation tool can be configured to access KNX in the following ways:

1. via serial connection using the PEI16/PEI10 protocol and an RS232

2. via USB connection using the USB protocol and a USB-interface

3. via an EIBlib/IP connection using the EIBlib/IP protocol and an arbitrary (this includes a PC
running EIBlib/IP server software) EIBlib/IP server.

4. via KNXnet/IP Tunneling .

**Figure 1: KNX/IP Validation - Test Layout**

##### 1.4 Test prerequisites

1. The BDUT shall have the following individual address:

     - 1.1.0 if it does support routing,

    - 1.1.1 otherwise

2. The KNX load switch shall have the individual address 1.1.50

3. The KNX load switch shall be in the “on” position, that is, the BDUT shall be connected to
the KNX installation

The bus interface shall have the individual address 1.1.2.


-----

##### 1.5 Important remarks to test case “Hard Reset”
Unlike all other test cases, test case “7.5.9 Hard Reset” is special, and should be executed separately
from all other tests.

After a Hard Reset (which forces the BDUT into factory configuration), the test client cannot
satisfactorily automatically restore the old BDUT configuration:

  - It can happen that after Hard Reset, the Test Client has no longer access to the BDUT due to
IP address conflicts (particularly if there is no DHCP server connected to the BDUT). In this
case, the Test Client reports necessarily “Fatal Error”, although paradoxically the Hard Reset
has succeeded.

  - Even when the Test Client regains access to the BDUT after Hard Reset, it cannot completely
restore its old configuration. In particular, it cannot restore IP-router filtering options
(determining which telegrams are routed or not), so that certain Routing tests which
previously succeeded may fail after executing the Hard Reset test:

In order to restore the old BDUT configuration after the Hard Reset test, the BDUT must be manually
configured, typically by ETS download via KNX bus.


-----

#### 2 Definitions

##### 2.1 Variables
**X: Don't care**

###### 2.1.1 Depending on BDUT
**IP_BDUT: IP-address of BDUT**

**CPORT_BDUT: control port of BDUT**

**DPORT_BDUT: data port of BDUT**

**KNXADDR_BDUT: individual address of BDUT**

**MAC_BDUT: MAC address of BDUT**

**IP_ROUTING: IP routing multicast address**

###### 2.1.2 Depending on Test client
**IP_TC: IP-address of Test Client**

**CPORT_TC: control port of Test Client**

**DPORT_TC: data port of Test Client**

**KNXADDR_TC: individual address of Test Client**

**MAC_TC: MAC address of Test Client**

##### 2.2 Frames

###### 2.2.1 Standard UDP-Frame
```
Destination MAC (6)

```
_… Source MAC (6)_
```
Total IP Length Identification
(2) (2)
IP-Header Source IP Address (4)
checksum 
(2)
… Destination IP Source UDP Port
Address (4) (2)
Correct UDP
checksum (2)

```
The size of a field in bytes is written in brackets.

```
TTL (1) Protocol
      (1)

```
|2.2.1 Standard UDP-Frame|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`Destination MAC (6)`|`Destination MAC (6)`|`Destination MAC (6)`|`Source MAC (6)`|`Source MAC (6)`|
|_…_` Source MAC (6)`|_…_` Source MAC (6)`|`Ethertype (2)`|`V/IHL(1)`|`TOS(1)`|
|`Total IP Length`<br>`(2)`|`Identification`<br>`(2)`|`Flags / Fragment`<br>`Offset (2)`|`TTL (1)`|`Protocol`<br>`(1)`|
|`IP-Header`<br>`checksum`<br>`(2)`|`Source IP Address (4)`|`Source IP Address (4)`|`Destination IP`<br>`Address (4)`|`Destination IP`<br>`Address (4)`|
|`… Destination IP`<br>`Address (4)`|`Source UDP Port`<br>`(2)`|`Destination UDP`<br>`Port (2)`|`UDP Length (2)`|`UDP Length (2)`|
|`Correct UDP`<br>`checksum (2)`|||||


###### 2.2.1.1 Representation in Test Sequences:
```
UDP-frame (Source IP Address, Source UDP Port, Destination IP Address,
Destination UDP Port)

```
Data transported over the UDP-frame

|Example:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|0x06|`0x10`|`0x207`<br>|`0x0010`|`CID`|`0x00`|
|`0x08`|`0x01`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|


-----

###### 2.2.1.2 Fields defined in IEEE 802.3
**Destination MAC: Must be the Ethernet MAC address of the receiver (compare RFC 826) or a**
Multicast MAC (RFC 1112 – 6.4) (no criterion for acceptance)

**Source MAC: Must be the Ethernet MAC address of the sender (compare RFC 826) (no criterion for**
acceptance)

**Ethertype: is always 0x800 (Internet Protocol, Version 4)**

###### 2.2.1.3 Fields defined in RFC 791
**V/IHL: is always 0x4L (0x4 = Version, L = IP Header Length / 4)**

**TOS: should be set to 0 (no criterion for acceptance)**

**Total IP Length: see RFC**

**Identification: see RFC** (no criterion for acceptance)

**Flags / Fragment Offset: should be set to 0x4000, as devices are not required to support**
fragmentation (no criterion for acceptance)

**TTL: see RFC (no criterion for acceptance)**

**Protocol: should be 0x11 (UDP)**

**IP-Header checksum: see RFC.**

**Source IP Address: The IP Address of the sender or a multicast IP Address. It is specified as**
parameter of the UDP frame.

**Destination IP Address: The IP Address of the receiver or a multicast IP Address. It is specified as**
parameter of the UDP frame.

Optional options and padding are ignored and no criteria for acceptance.

###### 2.2.1.4 Fields defined in RFC 768
**Source UDP Port: The UDP Port of the sender. It is specified as parameter of the UDP frame.**

**Destination UDP Port: The UDP Port of the receiver. It is specified as parameter of the UDP frame.**

**UDP Length: see RFC**

**Correct UDP checksum: see RFC**

###### 2.2.2 Standard ICMP-Frame
```
Destination MAC (6) Source MAC (6)

```
_… Source MAC (6)_ `Ethertype (2)` `V/IHL(1)` `TOS(1)`
```
Total IP Length Identification Flags / Fragment TTL (1) Protocol
(2) (2) Offset (2) (1)
IP-Header Source IP Address (4) Destination IP
checksum  Address (4)
(2)
… Destination IP ICMP ICMP ICMP Checksum (2) ICMP type depended
Address (4) Type Code header (4)
            (1) (1)
… ICMP type
depended header
(4)

```
Size of a field in bytes is written in brackets.

|2.2.2 Standard ICMP-Frame|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`Destination MAC (6)`|`Destination MAC (6)`|`Destination MAC (6)`|`Destination MAC (6)`|`Source MAC (6)`|`Source MAC (6)`|
|_…_` Source MAC (6)`|_…_` Source MAC (6)`|_…_` Source MAC (6)`|`Ethertype (2)`|`V/IHL(1)`|`TOS(1)`|
|`Total IP Length`<br>`(2)`|`Identification`<br>`(2)`|`Identification`<br>`(2)`|`Flags / Fragment`<br>`Offset (2)`|`TTL (1)`|`Protocol`<br>`(1)`|
|`IP-Header`<br>`checksum`<br>`(2)`|`Source IP Address (4)`|`Source IP Address (4)`|`Source IP Address (4)`|`Destination IP`<br>`Address (4)`|`Destination IP`<br>`Address (4)`|
|`… Destination IP`<br>`Address (4)`|`ICMP`<br>`Type`<br>`(1)`|`ICMP`<br>`Code`<br>`(1)`|`ICMP Checksum (2)`|`   ICMP type depended`<br>`header (4)`|`   ICMP type depended`<br>`header (4)`|
|`… ICMP type`<br>`depended header`<br>`(4)`||||||


-----

###### 2.2.2.1 Representation in Test Sequences:
```
ICMP-frame (Source IP Address, Destination IP Address, ICMP Type, ICMP
Code [,ICMP type depended header])

```
Data transported over the ICMP-frame

**Example:**
```
ICMP-frame (Source IP Address, Destination IP Address, 3 (Destination
Unreachable), 3 (Port unreachable))

```
Internet Header + 64 bits of Original Data Datagram (don’t care)

###### 2.2.2.2 Fields defined in IEEE 802.3
**Destination MAC: Must be the Ethernet MAC address of the receiver (compare RFC 826) or a**
Multicast MAC (RFC 1112 – 6.4) (no criterion for acceptance)

**Source MAC: Must be the Ethernet MAC address of the sender (compare RFC 826) (no criterion for**
acceptance)

**Ethertype: is always 0x800 (Internet Protocol, Version 4)**

###### 2.2.2.3 Fields define in RFC 791
**V/IHL: is always 0x4L (0x4 = Version, L = IP Header Length / 4)**

**TOS: should be set to 0 (no criteria for acceptance)**

**Total IP Length: see RFC**

**Identification: see RFC** (no criterion for acceptance)

**Flags / Fragment Offset: should be set to 0x4000, as devices are not required to support**
fragmentation (no criteria for acceptance)

**TTL: see RFC (no criterion for acceptance)**

**Protocol: should be 0x01 (ICMP)**

**IP-Header checksum: see RFC.**

**Source IP Address: The IP Address of the sender or a multicast IP Address. It is specified as**
parameter of the UDP frame.

**Destination IP Address: The IP Address of the receiver or a multicast IP Address. It is specified as**
parameter of the UDP frame.

Optional options and padding are ignored and no criteria for acceptance.

###### 2.2.2.4 Fields defined in RFC 792
**ICMP Type: The type of the ICMP Message. It is specified as parameter of the ICMP frame.**

**ICMP Code: The Code of the ICMP Message. It is specified as parameter of the ICMP frame.**

**ICMP Checksum: The correct checksum. See RFC.**

**ICMP type depended header: Should be set to 0x0. It is specified if needed.**


-----

#### 3 Core

##### 3.1 Unspecific

###### 3.1.1 Undefined Discovery Code
**Function ID: 10101**

**Description: This test repeatedly sends random undefined service codes to the discovery endpoint of**
the test device.

**Expectation: The test device shall ignore these services and not send any answers.**

**Parameters: Repeats (Type = Integer, Default = 3)**

**Preparation: None**

**Test sequence:**

TC sends undefined service:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 Service code (2) 0x000E 0x08 0x01
(Header- (Ver.) (Total Length) (Struct (IPV4_
Length) Length) UDP)
IP_TC CPORT_TC
Service code shall be set to some undefined values, e.g. 0x4910, 0xb5f1, 0x22d3.

```
**Cleanup: None**

###### 3.1.2 Undefined Control Code
**Function ID: 10204**

[RNA: Added illegal messages to data endpoint, fixed and modified implementation.]

**Description: This test opens a device management connection and then repeatedly sends random**
undefined service codes to the control endpoint and data endpoint of the test device. Between these
illegal messages, it sends legal device management requests to the test device.

**Expectation: The test device should ignore all illegal messages and not send any answers, whereas it**
should correctly respond to the interspersed legal request messages by sending back corresponding
response messages.

**Parameters: Repeats (Type = Integer, Default = 3), Service Code= 0xabab**

**Preparation:**

Open connection (see 3.4.1)

Used results: Channel ID (CID)

**Test sequence:**

Send several undefined services amongst several Device Configuration Request / Device
Configuration Response services.

|TC sends undefined service:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`Service code (2)`|`0x000E`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|||


-----

|TC sends undefined service:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`Service code (2)`|`0x0010`<br>`(Total Length)`|`CID`|`0x00`<br>`(res.)`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|

```
Service code shall be set to some undefined values, e.g. 0xabab.

```
TC sends DEVICE_CONFIGURATION_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0310 0x0011
(Header- (Ver.) (DEVICE_ (Total Length)
Length) CONFIGURATION_
            REQUEST)
Sequence 0x00 0xFC cEMI frame (6)
counter (res.) (message code)

```
BDUT sends DEVICE_CONFIGURATION_ACK:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0311 0x000A
(Header- (Ver.) (DEVICE_ (Total Length)
Length) CONFIGURATION_
            ACK)
Sequence 0x00
counter (Status)

```
BDUT sends DEVICE_CONFIGURATION_REQUEST:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0310 0x0012
(Header- (Ver.) (DEVICE_ (Total Length)
Length) CONFIGURATION_
            REQUEST)
Sequence 0x00 0xFB cEMI frame (7)
counter (res.)

```
TC sends DEVICE_CONFIGURATION_ACK:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0311 0x000A
(Header- (Ver.) (DEVICE_ (Total Length)
Length) CONFIGURATION_
            ACK)
Sequence 0x00
counter (Status)

```
**Cleanup:**

Close Connection

|TC sends DEVICE_CONFIGURATION_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_`<br>`CONFIGURATION_`<br>`REQUEST)`|`0x0011`<br>`(Total Length)`|`0x04`<br>`(struct.`<br>`length)`|<br>`CID`|
|`Sequence`<br>`counter`|<br>`0x00`<br>`(res.)`|`0xFC`<br>`(message code)`|`cEMI frame (6)`|`cEMI frame (6)`|`cEMI frame (6)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0311`<br>`(DEVICE_`<br>`CONFIGURATION_`<br>`ACK)`|`0x000A`<br>`(Total Length)`|`0x04`<br>`(struct.`<br>`length)`|<br>`CID`|
|`Sequence`<br>`counter`|<br>`0x00`<br>`(Status)`|||||

|BDUT sends DEVICE_CONFIGURATION_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT,  CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_`<br>`CONFIGURATION_`<br>`REQUEST)`|`0x0012`<br>`(Total Length)`|`0x04`<br>`(struct.`<br>`length)`|<br>`CID`|
|`Sequence`<br>`counter`|<br>`0x00`<br>`(res.)`|`0xFB`|`cEMI frame (7)`|`cEMI frame (7)`|`cEMI frame (7)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0311`<br>`(DEVICE_`<br>`CONFIGURATION_`<br>`ACK)`|`0x000A`<br>`(Total Length)`|`0x04`<br>`(struct.`<br>`length)`|<br>`CID`|
|`Sequence`<br>`counter`|<br>`0x00`<br>`(Status)`|||||


-----

##### 3.2 Search Request

###### 3.2.1 Standard Case
**Function ID: 10201**

**Description This test verifies the standard behaviour by sending valid search request message to the**
discovery endpoint.

**Expectation: The test device must send a search response message to the requested answer address**
including its own control endpoint address information, a valid device description block and a list of
supported service families.

**Parameters: None**

**Out Parameters: None**

**Preparation: None**

**Test sequence:**

TC sends SEARCH_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0201 0x000E 0x08 0x01
(Header- (Ver.) (SEARCH_REQUEST) (Total length) (Struct (IPV4_
Length) length) UDP)
IP_TC CPORT_TC

```
BDUT sends SEARCH_RESPONSE:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0202 Total Length 0x08 0x01
(Header- (Ver.) (SEARCH_ (1) (Struct (IPV4_
Length) RESPONSE) length) UDP)
IP_TC CPORT_TC 0x36 0x01 
                                 (Struct. (descr
                                 length) type:
                                       DEVICE_
                                       INFO)
KNX Device Individual Project ID (2) Serial number (6)
medium status address (2)
(1) (1)
                       Multicast address (4)
MAC address (6) Device friendly name
                                 (30d)
...
Struct. 0x02 Service Service
length (descr family family
                       ... ...
(1) type: ID (1) version
      SUPP_SVC (1)
      _FAMIL) 

```
**Cleanup: None**

###### 3.2.2 Invalid Version
**Function ID: 10202**

**Description: This test sends a syntactically correct search request, but the header contains a version**
field other than 1.0.

|TC sends SEARCH_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0201`<br>`(SEARCH_REQUEST)`|`0x000E`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|||

|BDUT sends SEARCH_RESPONSE:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0202`<br>`(SEARCH_`<br>`RESPONSE)`|`0x0202`<br>`(SEARCH_`<br>`RESPONSE)`|`Total Length`<br>`(1)`|`Total Length`<br>`(1)`|`0x08`<br>`(Struct`<br>`length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|`0x36`<br>`(Struct.`<br>`length)`|`0x36`<br>`(Struct.`<br>`length)`|<br>`0x01`<br>`(descr`<br>`type:`<br>`DEVICE_`<br>`INFO)`|
|`KNX`<br>`medium`<br>`(1)`|`Device`<br>`status`<br>`(1)`|`Individual`<br>`address (2)`|`Individual`<br>`address (2)`|`Project ID (2)`|`Project ID (2)`|`Serial number (6)`|`Serial number (6)`|`Serial number (6)`|
|||||`Multicast address (4)`|`Multicast address (4)`|`Multicast address (4)`|`Multicast address (4)`|`Multicast address (4)`|
|`MAC address (6)`|`MAC address (6)`|`MAC address (6)`|`MAC address (6)`|`MAC address (6)`|`MAC address (6)`|`Device friendly name`<br>`(30d)`|`Device friendly name`<br>`(30d)`|`Device friendly name`<br>`(30d)`|
|`...`|`...`|`...`|`...`|`...`|`...`|`...`|`...`|`...`|
|`Struct.`<br>`length`<br>`(1)`|`0x02`<br>`(descr`<br>`type:`<br>`SUPP_SVC`<br>`_FAMIL)`|<br> <br>`Service`<br>`family`<br>`ID (1)`|`Service`<br>`family`<br>`version`<br>`(1)`|<br> <br>`...`|`...`|`...`|||


-----

**Expectation: The test device shall ignore this invalid message and not send a search response.**

**Parameters: Version (Type = Byte, Default = 0x11)**

**Out Parameters: None**

**Preparation: None**

**Test sequence:**

TC sends SEARCH_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 Version 0x0201 0x000E 0x08 0x01
(Header- (1) (SEARCH_REQUEST) (Total length) (Struct (IPV4_
Length) length) UDP)
IP_TC CPORT_TC

```
**Cleanup: None**

###### 3.2.3 Invalid Header Size
**Function ID: 10203**

**Description: This test sends a syntactically correct search request, but the header size is other than 6**
bytes.

**Expectation: The test device should ignore this invalid message and not send a search response.**

**Parameters: Header Size (Type = Byte, Default = 0x01)**

**Out Parameters: None**

**Preparation: None**

**Resulting telegrams:**

TC sends SEARCH_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
Header 0x10 0x0201 0x000E 0x08 0x01
length (Ver.) (SEARCH_REQUEST) (Total length) (Struct (IPV4_
(1) length) UDP)
IP_TC CPORT_TC

```
**Cleanup: None**

###### 3.2.4 Incomplete Message
**Function ID: 10205**

**Description: This test sends a syntactically correct search request message, but the total size field in**
the header indicates a longer message.

[RNA: Replaced “shorter” by “longer” in text above, and changed implementation accordingly, to
conform with title and other texts]

**Expectation: The test device should ignore this invalid message and not send a search response.**

[RNA: Violation of this rule is reported as error.]

**Parameters: Bytes Missing (Type = Integer, Default = 1)**

**Preparation: None**

**Resulting telegrams:**

TC sends SEARCH_REQUEST:

|TC sends SEARCH_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`Version`<br>`(1)`|`0x0201`<br>`(SEARCH_REQUEST)`|`0x000E`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|||

|TC sends SEARCH_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`Header`<br>`length`<br>`(1)`|`0x10`<br>`(Ver.)`|`0x0201`<br>`(SEARCH_REQUEST)`|`0x000E`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|||


-----

|UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0201`<br>`(SEARCH_REQUEST)`|`0x000E+bytes`<br>`missing`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|||


**Cleanup: None**

###### 3.2.5 Oversized Message
**Function ID: 10206**

**Description: This test sends a syntactically correct search request message, but the total size field in**
the header indicates a shorter message.

[RNA: Replaced “larger” by “shorter” in text above, and changed implementation accordingly, to
conform with title and other texts]

**Expectation: The test device should ignore this oversized message and not send a search response.**

[RNA: Violation of this rule is reported as error.]

**Parameters: Padding Bytes (Type = Integer, Default = 1)**

**Preparation: None**

**Resulting telegrams:**

TC sends SEARCH_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0201 0x000E-padding 0x08 0x01
(Header- (Ver.) (SEARCH_REQUEST) bytes (Struct (IPV4_
Length) (Total length) length) UDP)
IP_TC CPORT_TC

```
**Cleanup: None**

##### 3.3 Description Request

###### 3.3.1 Standard Case
**Function ID: 10301**

**Description: This test verifies the standard behaviour by sending valid description request message to**
the control endpoint that the test device returned in response to a previously sent search request.

**Expectation: The test device must send a description response message to the requested answer**
address including a valid device description block, the list of supported service families and an
optional manufacturer specific data block.

**Parameters: None.**

**Preparation: None**

**Resulting telegrams:**

|TC sends SEARCH_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0201`<br>`(SEARCH_REQUEST)`|`0x000E-padding`<br>`bytes`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|||

|TC sends DESCRIPTION_REQUEST|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0203`<br>`(DESCRIPTION_`<br>`REQUEST)`|`0x000E`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|||


-----

|BDUT sends DESCRIPTION_RESPONSE|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0204`<br>`(DESCRIPTION_`<br>`RESPONSE)`|`0x0204`<br>`(DESCRIPTION_`<br>`RESPONSE)`|`Total Length`<br>`(1)`|`Total Length`<br>`(1)`|`0x08`<br>`(Struct`<br>`length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|`0x36`<br>`(Struct.`<br>`length)`|`0x36`<br>`(Struct.`<br>`length)`|<br>`0x01`<br>`(descr`<br>`type:`<br>`DEVICE_`<br>`INFO)`|
|`KNX`<br>`medium`<br>`(1)`|`Device`<br>`status`<br>`(1)`|`Individual`<br>`address (2)`|`Individual`<br>`address (2)`|`Project ID (2)`|`Project ID (2)`|`Serial number (6)`|`Serial number (6)`|`Serial number (6)`|
|||||`Multicast address (4)`|`Multicast address (4)`|`Multicast address (4)`|`Multicast address (4)`|`Multicast address (4)`|
|`MAC address (6)`|`MAC address (6)`|`MAC address (6)`|`MAC address (6)`|`MAC address (6)`|`MAC address (6)`|`Device friendly name`<br>`(30d)`|`Device friendly name`<br>`(30d)`|`Device friendly name`<br>`(30d)`|
|`...`|`...`|`...`|`...`|`...`|`...`|`...`|`...`|`...`|
|`Length`<br>`(1)`|`0x02`<br>`(descr`<br>`type:`<br>`SUPP_SVC_`<br>`FAMILIES)`|<br> <br>`Service`<br>`family`<br>`ID (1)`|`Service`<br>`family`<br>`version`<br>`(1)`|<br> <br>`...`|`...`|`...`|||


**Cleanup: None**

##### 3.4 Connect Request

###### 3.4.1 Standard Case
**Function ID: 10401**

**Description: This test verifies the standard behaviour by sending a valid connect request message for**
an arbitrary mandatory connection type.

**Expectation: The test device must send a connect response message to the requested answer address**
indicating E_NO_ERROR and containing a currently unused communication channel ID.

**Parameters: None.**

**Preparation: None**

**Resulting telegrams:**

|TC sends CONNECT_REQUEST|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|`0x0018`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|`CRI (2)`|`CRI (2)`|


-----

```
(Header- (Ver.) (CONNECT_RESPONSE) (Total length) Status=
Length) E_NO_ERROR
0x08 0x01 IP_TC DPORT_TC
(Struct (IPV4_
length) UDP)
CRD (2)

```
**Cleanup: Close connection (see 3.6.1)**

###### 3.4.2 Invalid Connection Type
**Function ID: 10402**

**Description: This test sends a connect request message for an undefined connection type.**

**Expectation: The test device must send a connect response message to the requested answer address**
indicating E_CONNECTION_TYPE.

**Parameters: Connection Type (Type = Byte, Default = 0x42)**

**Preparation: None**

**Resulting telegrams:**

TC sends CONNECT_REQUEST
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A 0x08 0x01
(Header- (Ver.) (CONNECT_REQUEST) (Total length) (Struct (IPV4_
Length) length) UDP)
IP_TC CPORT_TC 0x08 0x01
                                  (Struct (IPV4_
                                  length) UDP)
IP_TC FPORT_TC 0x04 Connection
                                  length Type
0xFF00 (data)

```
BDUT sends CONNECT_RESPONSE
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0206 0x0008 0x00 0x22
(Header- (Ver.) (CONNECT_RESPONSE) (Total Length) (CID) E_CONNECTION
Length) _TYPE

```
**Cleanup: None**

##### 3.5 Connectionstate Request

###### 3.5.1 Standard Case
**Function ID: 10501**

**Description: This test verifies the standard behaviour by sending a valid connectionstate request**
message for an active communication channel ID.

**Expectation: The test device must send a connectionstate response message to the requested answer**
address indicating E_NO_ERROR and containing the communication channel ID from the request.

**Parameters: None.**

|BDUT sends CONNECT_RESPONSE|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|<br>`0x0012`<br>`(Total length)`|`CID (1)`|`  0x00`<br>`Status=`<br>`E_NO_ERROR`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`DPORT_TC`|`DPORT_TC`|
|`CRD (2)`|`CRD (2)`|||||

|TC sends CONNECT_REQUEST|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|<br>`0x001A`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`FPORT_TC`|`0x04`<br>`length`|`Connection`<br>`Type`|
|`0xFF00 (data)`|`0xFF00 (data)`|||||

|BDUT sends CONNECT_RESPONSE|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|`0x0008`<br>`(Total Length)`|`0x00`<br>`(CID)`|`0x22`<br>`E_CONNECTION`<br>`_TYPE`|


-----

**Preparation:**

Open connection (see 3.4.1):

Used results: Channel ID (CID)

**Test sequence:**

TC sends CONNECTIONSTATE_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x207 0x0010 CID 0x00
(Header (Ver.) (CONNECTIONSTATE_ (Total length) (reserv
- REQUEST) ed)
Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_U
Length) DP)

```
BDUT sends CONNECTIONSTATE_RESPONSE:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x208 0x0008 CID 0x00
(Header (Ver.) (CONNECTIONSTATE_ (Total length) (E_NO_E
- RESPONSE) RROR)
Length)

```
**Cleanup:**

Close Connection (see 3.6.1)

###### 3.5.2 Invalid Channel
**Function ID: 10502**

**Description: This test sends a connectionstate request message for a currently invalid communication**
channel ID.

**Expectation: The test device must send a connectionstate response message to the requested answer**
address indicating E_CONNECTION_ID.

**Parameters: ID Offset (Type = Byte, Default = 1)**

**Preparation:**

Open connection (see 3.4.1):

Used results: Channel ID (CID)

**Test sequence:**

TC sends CONNECTIONSTATE_REQUEST:

|TC sends CONNECTIONSTATE_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x207`<br>`(CONNECTIONSTATE_`<br>`REQUEST)`|`0x0010`<br>`(Total length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|

|BDUT sends CONNECTIONSTATE_RESPONSE:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x208`<br>`(CONNECTIONSTATE_`<br>`RESPONSE)`|`0x0008`<br>`(Total length)`|`CID`|`0x00`<br>`(E_NO_E`<br>`RROR)`|

|TC sends CONNECTIONSTATE_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x207`<br>`(CONNECTIONSTATE`<br>`_REQUEST)`|`0x0010`<br>`(Total length)`|`CID +ID`<br>`Offset`|`0x00`<br>`(res.)`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|


-----

BDUT sends CONNECTIONSTATE_RESPONSE:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x208 0x0008 CID + 0x21
(Header (Ver.) (CONNECTIONSTATE (Total length) ID (E_CONN
- _RESPONSE) Offset ECTION_
Length) ID)

```
**Cleanup:**

Close Connection (see 3.6.1)

###### 3.5.3 Time Out
**Function ID: 10802**

**Description: This test verifies the standard behaviour by letting a device management connection time**
out by not sending connectionstate requests.

**Expectation: The test device must send a disconnect request message to the local communication**
endpoint after its internal time out period. This period is defined as 120 seconds; nevertheless, a range
of 110...130 seconds is accepted as success.

**Parameters: None**

**Out Parameters: Measured time out value in seconds**

**Preparation:**

Open connection (see 3.4.1):

Used results: Channel ID (CID),

**Test sequence:**

Test Application begins measurement of time immediately after receiving the correct connect
response.

Expected Answer 120 s after begin of measurement. (Tolerance ± 10 s)

TC sends DISCONNECT_REQUEST
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x209 0x00010 CID 0x00
(Header (Ver.) (DISCONNECT (Total length) Offset (reserv
- _REQUEST) ed)
Length)
0x08 0x01 IP_BDUT CPORT_BDUT
(Struct (IPV4_U
length) DP)

```
**Cleanup: none**

###### 3.5.4 Bus connection interrupted
**Function ID: 10503**

**Description: This test interrupts the bus connection by means of a load switch and checks the**
response of a subsequent connectionstate request.

**Expectation: The returned status code should be E_KNX_CONNECTION.**

**Parameters: Group address for load switch (Type = String, Default = 1/1/50)**

**Out Parameters: None**

|BDUT sends CONNECTIONSTATE_RESPONSE:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x208`<br>`(CONNECTIONSTATE`<br>`_RESPONSE)`|`0x0008`<br>`(Total length)`|`CID +`<br>`ID`<br>`Offset`|`0x21`<br>`(E_CONN`<br>`ECTION_`<br>`ID)`|

|TC sends DISCONNECT_REQUEST|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x209`<br>`(DISCONNECT`<br>`_REQUEST)`|`0x00010`<br>`(Total length)`|`CID`<br>`Offset`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`IP_BDUT`|`IP_BDUT`|`CPORT_BDUT`|`CPORT_BDUT`|


-----

**Preparation:**

Open connection (see 3.4.1):

Used results: Channel ID (CID),

Interrupt bus connection

**Resulting telegrams:**

TC sends CONNECTIONSTATE_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x207 0x0010 CID 0x00
(Header (Ver.) (CONNECTIONSTATE_ (Total length) (reserv
- REQUEST) ed)
Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_U
length) DP)

```
BDUT sends CONNECTIONSTATE_RESPONSE:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x208 0x0008 CID 0x27
(Header (Ver.) (CONNECTIONSTATE_ (Total length) (E_KNX_
- RESPONSE) CONNECT
Length) ION)

```
**Cleanup:**

Re-establish bus connection

##### 3.6 Disconnect Request

###### 3.6.1 Standard Case
**Function ID: 10601**

**Description: This test verifies the standard behaviour by sending a valid disconnect request message**
for an active communication channel ID.

**Expectation: The test device must send a disconnect response message to the requested answer**
address indicating E_NO_ERROR and containing the communication channel ID from the request.

**Parameters: None.**

**Preparation:**

Open connection (see 3.4.1):

Used results: Channel ID (CID),

**Resulting telegrams:**

TC sends DISCONNECT_REQUEST:

|TC sends CONNECTIONSTATE_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x207`<br>`(CONNECTIONSTATE_`<br>`REQUEST)`|`0x0010`<br>`(Total length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|

|BDUT sends CONNECTIONSTATE_RESPONSE:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x208`<br>`(CONNECTIONSTATE_`<br>`RESPONSE)`|`0x0008`<br>`(Total length)`|`CID`|`0x27`<br>`(E_KNX_`<br>`CONNECT`<br>`ION)`|

|TC sends DISCONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x209`<br>`(DISCONNECT_REQUE`<br>`ST)`|`0x0010`<br>`(Total length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|


-----

BDUT sends DISCONNECT_RESPONSE:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x20A 0x0008 CID 0x00
(Header (Ver.) (DISCONNECT_RESPO (Total length)
- NSE)
Length)

```
**Cleanup: none**

###### 3.6.2 Invalid Channel
**Function ID: 10602**

**Description: This test sends a disconnect request message for a currently invalid communication**
channel ID.

**Expectation: The test device must send a disconnect response message to the requested answer**
address indicating E_CONNECTION_ID.

**Parameters: ID Offset (Type = Byte, Default = 1)**

**Preparation:**

Open connection (see 3.4.1):

Used results: Channel ID (CID),

**Resulting telegrams:**

TC sends DISCONNECT_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x209 0x0010 CID+ ID 0x00
(Header (Ver.) (DISCONNECT_REQUE (Total length) offset (reserv
- ST) ed)
Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_U
Length) DP)

```
BDUT sends DISCONNECT_RESPONSE:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x20A 0x0008 CID+ID 0x21
(Header (Ver.) (DISCONNECT_RESPO (Total length) offset E_CONNE
- NSE) CTION_I
Length) D

```
**Cleanup: Close connection (see 3.6.1)**

|BDUT sends DISCONNECT_RESPONSE:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x20A`<br>`(DISCONNECT_RESPO`<br>`NSE)`|`0x0008`<br>`(Total length)`|`CID`|`0x00`|

|TC sends DISCONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x209`<br>`(DISCONNECT_REQUE`<br>`ST)`|`0x0010`<br>`(Total length)`|`CID+ ID`<br>`offset`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|

|BDUT sends DISCONNECT_RESPONSE:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x20A`<br>`(DISCONNECT_RESPO`<br>`NSE)`|`0x0008`<br>`(Total length)`|`CID+ID`<br>`offset`|`0x21`<br>`E_CONNE`<br>`CTION_I`<br>`D `|


-----

#### 4 Device Management

##### 4.1 Connection Handling

###### 4.1.1 Multiplicity
**Description: This test verifies the standard behaviour by sending valid connect request message for a**
device management connection until the device cannot take any more connections.

**Expectation: When the maximum number of connections has been reached, the test device must send**
a connect response to the requested answer address indicating E_NO_MORE_CONNECTIONS.

**Parameters: None**

**Preparation:**

Open device management connection:

TC sends Connection Request:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x205 0x0018 0x08 0x01
(Header (Ver.) (CONNECTION_REQUE (Total Length) (Struct (IPV4_U
- ST) Length) DP)
Length)
IP_TC CPORT_TC 0x08 0x01
                                   (Struct (IPV4_U
                                   Length) DP)
IP_TC DPORT_TC 0x02(St 0x03
                                   ruct (DEVICE
                                   Length) _MGMT_C
                                        ONNECTI
                                        ON)

```
BDUT sends Connection Response:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x208 0x0008 CID 0x00
(Header (Ver.) (CONNECTION_RESPO (Total Length) (Channe (E_NO_E
- NSE) l ID) RROR)
Length)
0x08 0x01 IP_TC DPORT_TC
(Struct (IPV4_
length) UDP)
0x02(St 0x03
ruct (DEVICE
Length) _MGMT_C
      ONNECTI
      ON)

```
Result: CID

|TC sends Connection Request:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x205`<br>`(CONNECTION_REQUE`<br>`ST)`|`0x0018`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|`0x02(St`<br>`ruct`<br>`Length)`|`0x03`<br>`(DEVICE`<br>`_MGMT_C`<br>`ONNECTI`<br>`ON)`|

|BDUT sends Connection Response:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x208`<br>`(CONNECTION_RESPO`<br>`NSE)`|`0x0008`<br>`(Total Length)`|**`CID`** <br>`(Channe`<br>`l ID)`|`0x00`<br>`(E_NO_E`<br>`RROR)`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`DPORT_TC`|`DPORT_TC`|
|`0x02(St`<br>`ruct`<br>`Length)`|`0x03`<br>`(DEVICE`<br>`_MGMT_C`<br>`ONNECTI`<br>`ON)`|||||


-----

**Test sequence:**

TC sends Connection Request:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x205 0x0018 0x08 0x01
(Header (Ver.) (CONNECTION_REQUE (Total Length) (Struct (IPV4_U
- ST) Length) DP)
Length)
IP_TC CPORT_TC 0x08 0x01
                                   (Struct (IPV4_U
                                   Length) DP)
IP_TC DPORT_TC 0x02(St 0x03
                                   ruct (DEVICE
                                   Length) _MGMT_C
                                        ONNECTI
                                        ON)

```
BDUT sends a Connection Response:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x208 0x0008 X 0x24
(Header (Ver.) (CONNECTION_RESPO (Total Length) (Channe (E_NO_M
- NSE) l ID) ORE_CON
Length) NECTION
                                        S)

```
**Cleanup:**

Close opened connection (see 3.6.1)

##### 4.2 Device Configuration Request

###### 4.2.1 Standard Case
**Description: This test verifies the standard behaviour by sending a device configuration request over a**
valid device management connection. The request contains a property read request for the
KNX_INDIVIDUAL_ADDRESS property.

**Expectation: The test device must send a device configuration ACK followed by a device**
configuration request containing the requested data.

**Parameters: None**

**Preparation:**

Open a device management connection (see 4.1.1)

Used results: Channel ID (CID),

|TC sends Connection Request:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x205`<br>`(CONNECTION_REQUE`<br>`ST)`|`0x0018`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|`0x02(St`<br>`ruct`<br>`Length)`|`0x03`<br>`(DEVICE`<br>`_MGMT_C`<br>`ONNECTI`<br>`ON)`|

|BDUT sends a Connection Response:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x208`<br>`(CONNECTION_RESPO`<br>`NSE)`|`0x0008`<br>`(Total Length)`|`X `<br>`(Channe`<br>`l ID)`|`0x24`<br>`(E_NO_M`<br>`ORE_CON`<br>`NECTION`<br>`S)`|


-----

**Test sequence:**

TC sends Device Configuration Request:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x310
(Header (Ver.) (DEVICE_CONFIGURA
- TION_REQUEST)
Length)
0x00 0x00 0xfc 0x000b
(Sequen (reserv (M_Prop
ce ed) Read.re
Counter q)
)
…

```
BDUT sends a Device Configuration Ack:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x311
(Header (Ver.) (DEVICE_CONFIGURA
- TION_ACK)
Length)
0x00 0x00
(Sequen (Status
ce )
Counter
)

```
BDUT sends Device Configuration Request:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x310
(Header (Ver.) (DEVICE_CONFIGURA
- TION_REQUEST)
Length)
0x00 0x00 0xfb 0x000b
(Sequen (reserv (M_Prop
ce ed) Read.co
Counter n)
)
… KNXADDR_BDUT

```
TC sends Device Configuration Ack:

|TC sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfc`<br>`(M_Prop`<br>`Read.re`<br>`q)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter )`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter )`|`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x34`<br>`(PID =`<br>`KNX_IND`<br>`IVIDUAL`<br>`_ADDRES`<br>`S)`|`0x1001`<br>`(NoE=0x`<br>`1,`<br>`Six=0x0`<br>`01)`|
|`… `||||||||

|BDUT sends a Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|BDUT sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0013`<br>`(Total Length)`|`0x0013`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfb`<br>`(M_Prop`<br>`Read.co`<br>`n)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter )`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter )`|`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x34`<br>`(PID =`<br>`KNX_IND`<br>`IVIDUAL`<br>`_ADDRES`<br>`S)`|`0x1001`<br>`(NoE=0x`<br>`1,`<br>`Six=0x0`<br>`01)`|
|`… `|**`KNXADDR_BDUT`**|**`KNXADDR_BDUT`**||||||

|TC sends Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||


-----

**Cleanup:**

Close opened connection (see 3.6.1)

###### 4.2.2 Read mandatory device properties
**Description: This test reads all mandatory properties from the KNXnet/IP parameter object. The**
results for KNX_INDIVIDUAL_ADDRESS, ROUTING_MULTICAST_ADDRESS,
MAC_ADDRESS, and FRIENDLY_NAME are compared with corresponding info from DIB. The
test reads also the mandatory property SERIAL_NUMBER from the device interface object and
compares it with info from DIB.

**Expectation: The test device must implement all properties and return values consistent with info**
from DIB.

**Parameters: None**

**Out parameters: None**

**Preparation:**

Open a device management connection (see 4.1.1)

Used results: Channel ID (CID),

**Test sequence:**

This sequence should run with following values:

|Seq|IOT|PID|Property Name|Resultlen|resultdata|NoESi<br>x|
|---|---|---|---|---|---|---|
|0|0x0000 (Device<br>Object)|0x0b|PID_SERIAL_NUMBE<br>R|0x0017|XX XX XX<br>XX XX XX<br>(6 bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x33|PID_PROJECT_INSTA<br>LLATION_ID|0x0013|XX XX (2<br>bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x34|PID_KNX_INDIVIDU<br>AL_ADDRESS|0x0013|KNXADDR_<br>BDUT (2<br>bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x35|PID_ADDITIONAL_IN<br>DIVIDUAL_ADDRES<br>SES|0x0013|CNT_ADD_<br>ADDR (2<br>bytes)|0x1000|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x35|PID_ADDITIONAL_IN<br>DIVIDUAL_ADDRES<br>SES|0x0013|XX XX (2<br>bytes)|0x1<br>0x001|
|…|…|…|…|…|…|…|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x35|PID_ADDITIONAL_IN<br>DIVIDUAL_ADDRES<br>SES|0x0013|XX XX<br>(2bytes)|0x1000<br>+ <br>CNT_<br>ADD_<br>ADDR|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x37|PID_IP_ASSIGNMEN<br>T_METHOD|0x0012|XX (1 byte)|0x1<br>0x001|


-----

|pre<br>v<br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x39|PID CURRENT IP A<br>_ _ _<br>DDRESS|0x0015|XX XX XX<br>XX (4bytes)|0x1<br>0x001|
|---|---|---|---|---|---|---|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x3A|PID_CURRENT_SUB<br>NET_MASK|0x0015|XX XX XX<br>XX (4bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x3B|PID_CURRENT_DEFA<br>ULT_GATEWAY|0x0015|XX XX XX<br>XX (4bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x3C|<br>PID_IP_ADDRESS|0x0015|XX XX XX<br>XX (4bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x3D|<br>PID_SUBNET_MASK|0x0015|XX XX XX<br>XX (4bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x3E|PID_DEFAULT_GATE<br>WAY|0x0015|XX XX XX<br>XX (4bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x40|PID_MAC_ADDRESS|0x0017|MAC of<br>BDUT (6<br>bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x41|PID_SYSTEM_SETUP<br>_MULTICAST_ADDR<br>ESS|0x0015|E0 00 17 0C<br>(4 bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x42|PID_ROUTING_MUL<br>TICAST_ADDRESS|0x0015|XX XX XX<br>XX (4bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x43|<br>PID_TTL|0x0012|XX (1 byte)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x44|PID_KNXNETIP_DEV<br>ICE_CAPABILITIES|0x0013|XX XX (2<br>bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x45|<br>PID_KNXNETIP_DEV<br>ICE_STATE|0x0012|XX (1 byte)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x4C|PID_FRIENDLY_NAM<br>E|0x0012|XX (1 byte)|0x1<br>0x001|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x4C|PID_FRIENDLY_NAM<br>E|0x0012|XX (1 byte)|0x1<br>0x002|
|…|…|…|…|…|…|…|
|pre<br>v <br>+1|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x4C|PID_FRIENDLY_NAM<br>E|0x0012|XX (1 byte)|0x1<br>0x01E|


-----

|TC sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|**`seq`** <br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfc`<br>`(M_Prop`<br>`Read.re`<br>`q)`|**`IOT`** <br>`(Interface Object`<br>`Type)`|**`IOT`** <br>`(Interface Object`<br>`Type)`|`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|**`PID`** <br>`(PID)`|`NoESix`<br>`(NoE,`<br>`Six)`|
|`… `||||||||


BDUT sends a Device Configuration Ack:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x311
(Header (Ver.) (DEVICE_CONFIGURA
- TION_ACK)
Length)
seq 0x00
(Sequen (Status
ce )
Counter
)

```
BDUT sends Device Configuration Request:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x310
(Header (Ver.) (DEVICE_CONFIGURA
- TION_REQUEST)
Length)
Seq 0x00 0xfb IOT
(Sequen (reserv (M_Prop
ce ed) Read.co
Counter n)
)
… resultdata

```
TC sends Device Configuration Ack:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x311
(Header (Ver.) (DEVICE_CONFIGURA
- TION_ACK)
Length)
seq 0x00
(Sequen (Status
ce )
Counter
)

```
**Cleanup:**

Close opened connection (see 3.6.1)

|BDUT sends a Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|**`seq`** <br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|BDUT sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|**`resultlen`** <br>`(Total Length)`|**`resultlen`** <br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|**`Seq`** <br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfb`<br>`(M_Prop`<br>`Read.co`<br>`n)`|**`IOT`** <br>`(Interface Object`<br>`Type)`|**`IOT`** <br>`(Interface Object`<br>`Type)`|`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|**`PID`** <br>`(PID)`|`NoESix`<br>`(NoE,`<br>`Six)`|
|`… `|**`resultdata`**|**`resultdata`**||||||

|TC sends Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|**`seq`** <br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||


-----

###### 4.2.3 Write to read-only device property
**Function ID: 20205**

**Description: This test attempts to write to the read-only property PID_CURRENT_IP_ADDRESS**

**Expectation: Confirmation with error code “Read-only” or "Unspecified Error".**

**Parameters: None**

**Out parameters: None**

**Preparation:**

Open a device management connection (see 4.1.1)

Used results: Channel ID (CID),

**Test sequence:**

TC sends Device Configuration Request:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x310 0x0015 0x04(St CID
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct
- TION_REQUEST) Length)
Length)
0 0x00 0xf6 0x000b 0x01 0x39 0x1001
(Sequen (reserv (M_Prop (Interface Object (Object (PID = (NoE =
ce ed) Write.r Type = KNXnet/IP Instanc PID_CUR 0x1,
Counter eq) Parameter Object) e) RENT_IP Six =
) _ADDRES 0x001)
                                   S)
… 0x12345678 (Data)

```
BDUT sends a Device Configuration Ack:

|TC sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xf6`<br>`(M_Prop`<br>`Write.r`<br>`eq)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x39`<br>`(PID =`<br>`PID_CUR`<br>`RENT_IP`<br>`_ADDRES`<br>`S)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `|`0x12345678 (Data)`|`0x12345678 (Data)`|`0x12345678 (Data)`|`0x12345678 (Data)`||||

|BDUT sends a Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||


-----

BDUT sends Device Configuration Request:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x310 0x0012 0x04(St
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct
- TION_REQUEST) Length)
Length)
0 0x00 0xf5 0x000b 0x01 0x39
(Sequen (reserv (M_Prop (Interface Object (Object (PID =
ce ed) Write.c Type = KNXnet/IP Instanc PID_CUR
Counter on) Parameter Object) e) RENT_IP
) _ADDRES
                                   S)
… 0x00
      (unspec
      ified
      Error)
      or 0x05
      (Read
      only)

```
TC sends Device Configuration Ack:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x311 0x000a 0x04(St
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct
- TION_ACK) Length)
Length)
0 0x00
(Sequen (Status
ce )
Counter
)

```
**Cleanup:**

Close opened connection (see 3.6.1)

###### 4.2.4 Read nonexisting device property
**Function ID: 20206**

**Description: This test attempts to read a nonexisting property of the test device.**

**Expectation: Response with NoE = 0 and error code “Void DP” or "Unspecified Error".**

**Parameters:** **PID = ID of nonexisting property (Type = Byte, Default = 0xF0)**

**Out parameters: None**

**Preparation:**

Open a device management connection (see 4.1.1)

Used results: Channel ID (CID),

|BDUT sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0012`<br>`(Total Length)`|`0x0012`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xf5`<br>`(M_Prop`<br>`Write.c`<br>`on)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x39`<br>`(PID =`<br>`PID_CUR`<br>`RENT_IP`<br>`_ADDRES`<br>`S)`|**`0x0001`** <br>`(NoE =`<br>**`0x0`**`, `<br>`Six =`<br>`0x001)`|
|`… `|**`0x00`**<br>**`(unspec`**<br>**`ified`**<br>**`Error)`**<br>**`or 0x05`**<br>**`(Read`**<br>**`only)`**|||||||

|TC sends Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||


-----

**Test sequence:**

TC sends Device Configuration Request:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x310
(Header (Ver.) (DEVICE_CONFIGURA
- TION_REQUEST)
Length)
0 0x00 0xfc 0x000b
(Sequen (reserv (M_Prop
ce ed) Read.re
Counter q)
)
…

```
BDUT sends a Device Configuration Ack:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x311
(Header (Ver.) (DEVICE_CONFIGURA
- TION_ACK)
Length)
0 0x00
(Sequen (Status
ce )
Counter
)

```
BDUT sends Device Configuration Request:

|TC sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfc`<br>`(M_Prop`<br>`Read.re`<br>`q)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|**`PID`** <br>`(PID)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `||||||||

|BDUT sends a Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|BDUT sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0012`<br>`(Total Length)`|`0x0012`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfb`<br>`(M_Prop`<br>`Read.co`<br>`n)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|**`PID`** <br>`(PID)`|**`0x0001`** <br>`(NoE =`<br>**`0x0`**`, `<br>`Six =`<br>`0x001)`|
|`… `|**`0x00`**<br>**`(unspec`**<br>**`ified`**<br>**`Error)`**<br>**`or 0x07`**<br>**`(Viod`**<br>**`DP)`**|||||||


-----

TC sends Device Configuration Ack:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x311 0x000a 0x04(St CID
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct
- TION_ACK) Length)
Length)
0 0x00
(Sequen (Status
ce )
Counter
)

```
**Cleanup:**

Close opened connection (see 3.6.1)

###### 4.2.5 Get/set programming mode of device
**Function ID: 20207**

**Description: This test accesses the device's programming mode by device property, and checks the**
written property value against info from freshly requested DIB.

**Expectation: Device's programming LED should react correspondingly.**

**Parameters: New programming mode state, 0=LED on, 1=LED off, 2=toggle (Type = Byte, Default**
= 0x02)

**Out parameters: None**

**Preparation:**

Open a device management connection (see 4.1.1)

Used results: Channel ID (CID),

**Test sequence:**

TC sends Device Configuration Request:

|TC sends Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|TC sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfc`<br>`(M_Prop`<br>`Read.re`<br>`q)`|`0x0000`<br>`(Interface Object`<br>`Type = Device`<br>`Object)`|`0x0000`<br>`(Interface Object`<br>`Type = Device`<br>`Object)`|`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x36`<br>`(PID =`<br>`PID_PRO`<br>`GMODE)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `||||||||


-----

BDUT sends a Device Configuration Ack:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x311
(Header (Ver.) (DEVICE_CONFIGURA
- TION_ACK)
Length)
0 0x00
(Sequen (Status
ce )
Counter
)

```
BDUT sends Device Configuration Request:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x310
(Header (Ver.) (DEVICE_CONFIGURA
- TION_REQUEST)
Length)
0 0x00 0xfb 0x000b
(Sequen (reserv (M_Prop
ce ed) Read.co
Counter n)
)
… PRG_MOD

```
TC sends Device Configuration Ack:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x311
(Header (Ver.) (DEVICE_CONFIGURA
- TION_ACK)
Length)
0 0x00
(Sequen (Status
ce )
Counter
)

```
TC sends Device Configuration Request:

|BDUT sends a Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|BDUT sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0012`<br>`(Total Length)`|`0x0012`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfb`<br>`(M_Prop`<br>`Read.co`<br>`n)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x36`<br>`(PID =`<br>`PID_PRO`<br>`GMODE)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `|**`PRG_MOD`**|||||||

|TC sends Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|TC sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0012`<br>`(Total Length)`|`0x0012`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xf6`<br>`(M_Prop`<br>`Write.r`<br>`eq)`|`0x0000`<br>`(Interface Object`<br>`Type = Device`<br>`Object)`|`0x0000`<br>`(Interface Object`<br>`Type = Device`<br>`Object)`|`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x36`<br>`(PID =`<br>`PID_PRO`<br>`GMODE)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `|**`(PRG_MO`**<br>**`D `**<br>**`^0x01)`**|||||||


-----

BDUT sends a Device Configuration Ack:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x311 0x000a 0x04(St CID
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct
- TION_ACK) Length)
Length)
0 0x00
(Sequen (Status
ce )
Counter
)

```
BDUT sends Device Configuration Request:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x310 0x0012 0x04(St CID
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct
- TION_REQUEST) Length)
Length)
0 0x00 0xf5 0x000b 0x01 0x36 0x1001
(Sequen (reserv (M_Prop (Interface Object (Object (PID = (NoE =
ce ed) Write.c Type = KNXnet/IP Instanc PID_PRO 0x1,
Counter on) Parameter Object) e) GMODE) Six =
) 0x001)
…

```
TC sends Device Configuration Ack:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x311 0x000a 0x04(St CID
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct
- TION_ACK) Length)
Length)
0 0x00
(Sequen (Status
ce )
Counter
)

```
Read Device Description (see 3.3.1): Field Device status must be PRG_MOD ^0x01.

**Cleanup:**

Close opened connection (see 3.6.1)

###### 4.2.6 Get/set programming mode of device by memory access
**Function ID: 20208**

**Description: This test accesses the device's programming mode by device memory cell 0x60, and**
checks the written value against info from freshly requested DIB.

**Expectation: Device's programming LED should react correspondingly.**

**Parameters: New programming mode state, 0=LED on, 1=LED off, 2=toggle (Type = Byte, Default**
= 0x02)

**Out parameters: None**

**Preparation: none**

**Test sequence:**

|BDUT sends a Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|BDUT sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0012`<br>`(Total Length)`|`0x0012`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xf5`<br>`(M_Prop`<br>`Write.c`<br>`on)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x36`<br>`(PID =`<br>`PID_PRO`<br>`GMODE)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `||||||||

|TC sends Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||


-----

```
KNX: TC -> BDUT: B0 11 FD 11 00 60 80 :52  T_Connect
KNX: TC -> BDUT: B0 11 FD 11 00 61 43 00 :90 MaskVersionRead
KNX: BDUT -> TC: B0 11 00 11 FD 60 C2 :10  T_Ack
KNX: BDUT -> TC: B0 11 00 11 FD 63 43 40 09 1A :C1 MaskVersionResponse
KNX: TC -> BDUT: B0 11 FD 11 00 60 C2 :10  T_Ack
KNX: TC -> BDUT: B0 11 FD 11 00 63 46 01 00 60 :F6 MemoryRead
KNX: BDUT -> TC: B0 11 00 11 FD 60 C6 :14  T_Ack
KNX: BDUT -> TC: B0 11 00 11 FD 64 46 41 00 60 81 :30 MemoryResponse
KNX: TC -> BDUT: B0 11 FD 11 00 60 C6 :14  T_Ack
KNX: TC -> BDUT: B0 11 FD 11 00 64 4A 81 00 60 00 :7D MemoryWrite
KNX: BDUT -> TC: B0 11 00 11 FD 60 CA :18  T_Ack
KNX: TC -> BDUT: B0 11 FD 11 00 63 4E 01 00 60 :FE MemoryRead
KNX: BDUT -> TC: B0 11 00 11 FD 60 CE :1C  T_Ack
KNX: BDUT -> TC: B0 11 00 11 FD 64 4A 41 00 60 00 :BD MemoryWrite
KNX: TC -> BDUT: B0 11 FD 11 00 60 CA :18  T_Ack
KNX: TC -> BDUT: B0 11 FD 11 00 60 81 :53  Disconnect

```
Read Device Description (see 1.2.2): Field Device status must be PRG_MOD ^0x01.

**Cleanup: None**

###### 4.2.7 Change individual address
**Function ID: 20209**

**Description: This test changes the device's individual address and checks the corresponding device**
and KNXnet/IP properties.

**Expectation: Both properties must reflect the change, and must agree with info from DIB.**

**Parameters: None**

**Out parameters: None**

**Preparation:**

Set Progmode on BDUT (DMP_ProgModeSwitch_RCo)

Set Individual address of BDUT to 0x1200 (NM_IndividualAddress_Write)

**Test sequence:**

Read Device Description (see 3.3.1): Field Individual address must be 0x1200.

Read the following properties (see 4.2.2)

|Seq|IOT|PID|Property Name|Resultlen|resultdata|NoESi<br>x|
|---|---|---|---|---|---|---|
|0|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x34|PID_KNX_INDIVIDU<br>AL_ADDRESS|0x0013|0x1200 (2<br>bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x0000 (Device<br>Object)|0x39|PID_SUBNET_ADDR|0x0012|0x12 (1 byte)|0x1<br>0x001|
|pre<br>v|0x0000 (Device<br>Object)|0x3A|PID_DEVICE_ADDR|0x0012|0x00 (1 byte)|0x1<br>0x001|


-----

|+1|Col2|Col3|Col4|Col5|Col6|Col7|
|---|---|---|---|---|---|---|


**Cleanup:**

Write KNX Ind Addr back to 0x1100 and restart device

###### 4.2.8 Change individual address by IP property
**Function ID: 20210**

**Description: This test changes the device's individual address by writing to KNXnet/IP property**
KNX_INDIVIDUAL_ADDRESS and checks the corresponding device and KNXnet/IP properties.

**Expectation: Both properties must reflect the change, and must agree with info from DIB.**

**Parameters: None**

**Out parameters: None**

**Preparation:**

IP DevMan Write KNX Ind Addr (KNXnetIP) to 0x1200, Restart

**Test sequence:**

Read Device Description (see 3.3.1): Field Individual address must be 0x1200.

Read the following properties (see 4.2.2)

**Seq** **IOT** **PID** **Property Name** **Resultlen** **resultdata** **NoESi**
**x**

0 0x000b 0x34 PID_KNX_INDIVIDU 0x0013 0x1200 (2 0x1
(KNXnet/IP AL_ADDRESS bytes) 0x001
Parameter Object)

pre 0x0000 (Device 0x39 PID_SUBNET_ADDR 0x0012 0x12 (1 byte) 0x1
v Object) 0x001
+1

pre 0x0000 (Device 0x3A PID_DEVICE_ADDR 0x0012 0x00 (1 byte) 0x1
v Object) 0x001
+1

**Cleanup:**

Write KNX Ind Addr back to 0x1100 and restart device

###### 4.2.9 Invalid Endpoint
**Function ID: 20201**

**Description: This test sends a device configuration request to an invalid endpoint (UDP/IP port) of**
the test device.

**Expectation: The test device should ignore this request and not send any answer**

**Parameters:** **IEP = Port number (Type = Integer, Default = 1)**

**Out Parameters: None**

**Preparation: None**

|Seq|IOT|PID|Property Name|Resultlen|resultdata|NoESi<br>x|
|---|---|---|---|---|---|---|
|0|0x000b<br>(KNXnet/IP<br>Parameter Object)|0x34|PID_KNX_INDIVIDU<br>AL_ADDRESS|0x0013|0x1200 (2<br>bytes)|0x1<br>0x001|
|pre<br>v <br>+1|0x0000 (Device<br>Object)|0x39|PID_SUBNET_ADDR|0x0012|0x12 (1 byte)|0x1<br>0x001|
|pre<br>v <br>+1|0x0000 (Device<br>Object)|0x3A|PID_DEVICE_ADDR|0x0012|0x00 (1 byte)|0x1<br>0x001|


-----

**Test sequence:**

TC sends KNXnet/IP Packet to wrong UDP Port:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, IEP)
0x06 0x10 0x310 0x0011 0x04(St 0x0
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct (CID)
- TION_REQUEST) Length)
Length)
0 0x00 0xfc 0x000b 0x01 0x34 0x1001
(Sequen (reserv (M_Prop (Interface Object (Object (PID = (NoE =
ce ed) Read.re Type = KNXnet/IP Instanc PID_KNX 0x1,
Counter q) Parameter Object) e) _INDIVI Six =
) DUAL_AD 0x001)
                                   DRESS)
…

```
BDUT sends ICMP Packet:
```
ICMP-frame (IP_BDUT, IP_TC, 3 (Destination Unreachable), 3 (Port
unreachable))

```
Internet Header + 64 bits of Original Data Datagram (don’t care)

**Cleanup: None**

###### 4.2.10 Unconnected Endpoint
**Function ID: 20202**

**Description: This test sends a device configuration request to the control endpoint of the test device,**
without connecting to it.

**Expectation: The test device should ignore this request and not send any answer**

**Parameters: None**

**Out Parameters: None**

**Preparation: None**

**Test sequence:**

TC sends KNXnet/IP Packet:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)
0x06 0x10 0x310 0x0011 0x04(St 0x0
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct (CID)
- TION_REQUEST) Length)
Length)
0 0x00 0xfc 0x000b 0x01 0x34 0x1001
(Sequen (reserv (M_Prop (Interface Object (Object (PID = (NoE =
ce ed) Read.re Type = KNXnet/IP Instanc PID_KNX 0x1,
Counter q) Parameter Object) e) _INDIVI Six =
) DUAL_AD 0x001)
                                   DRESS)
…

```
No answer from BDUT is allowed for 10 seconds.

**Cleanup: None**

|UDP-frame (IP_TC, CPORT_TC, IP_BDUT, IEP)|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`0x0`<br>`(CID)`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfc`<br>`(M_Prop`<br>`Read.re`<br>`q)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x34`<br>`(PID =`<br>`PID_KNX`<br>`_INDIVI`<br>`DUAL_AD`<br>`DRESS)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `||||||||

|TC sends KNXnet/IP Packet:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`0x0`<br>`(CID)`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfc`<br>`(M_Prop`<br>`Read.re`<br>`q)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x34`<br>`(PID =`<br>`PID_KNX`<br>`_INDIVI`<br>`DUAL_AD`<br>`DRESS)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `||||||||


-----

###### 4.2.11 Repeat and timeout after missing ACK
**Function ID: 20211**

**Description: This test sends a property read request to the test device without sending ACK after**
receiving the response, and checks how often and how long the server repeats its response before
disconnecting.

**Expectation: The test device should repeat its message 3 times every 10 seconds and then disconnect.**

**Parameters: None**

**Out Parameters: Observed number of repetitions and total duration of repetitions**

**Preparation:**

Open a device management connection (see 4.1.1)

Used results: Channel ID (CID),

**Test sequence:**
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)
0x06 0x10 0x310 0x0011 0x04(St CID
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct
- TION_REQUEST) Length)
Length)
0 0x00 0xfc 0x000b 0x01 0x34 0x1001
(Sequen (reserv (M_Prop (Interface Object (Object (PID = (NoE =
ce ed) Read.re Type = KNXnet/IP Instanc PID_KNX 0x1,
Counter q) Parameter Object) e) _INDIVI Six =
) DUAL_AD 0x001)
                                   DRESS)
…

```
BDUT sends a Device Configuration Ack:

|Test sequence:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_DTU)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfc`<br>`(M_Prop`<br>`Read.re`<br>`q)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x34`<br>`(PID =`<br>`PID_KNX`<br>`_INDIVI`<br>`DUAL_AD`<br>`DRESS)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `||||||||

|BDUT sends a Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|BDUT sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0013`<br>`(Total Length)`|`0x0013`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0x2`<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfb`<br>`(M_Prop`<br>`Read.co`<br>`n)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x34`<br>`(PID =`<br>`PID_KNX`<br>`_INDIVI`<br>`DUAL_AD`<br>`DRESS)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `|`KNXADDR_BDUT`|`KNXADDR_BDUT`||||||


-----

|No Device Configuration Ack form test client. BDUT must resend the Device Configuration Request 10 second+-10% after its first Device Configuration Request. (3 times)|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0013`<br>`(Total Length)`|`0x0013`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0x2`<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xfb`<br>`(M_Prop`<br>`Read.co`<br>`n)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x34`<br>`(PID =`<br>`PID_KNX`<br>`_INDIVI`<br>`DUAL_AD`<br>`DRESS)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `|`KNXADDR_BDUT`|`KNXADDR_BDUT`||||||


No Device Configuration Ack form test client. BDUT must not resend the Device Configuration
**Request. Wait 20 seconds.**

**Cleanup:**

Close opened connection (see 3.6.1)

###### 4.2.12 Bus connection interrupted
**Function ID: 20212**

**Description: This test interrupts and then re-establishes the bus connection by means of a load switch**
and checks for corresponding KNXNETIP_DEVICE_STATE property info indications received on a
device management connection.

**Expectation: These property info indications should occur after disconnecting from bus and after re-**
connecting to bus.

**Parameters: Group address for load switch (Type = String, Default = 1/1/50)**

**Out Parameters: None**

**Preparation:**

Open a device management connection (see 4.1.1)

Used results: Channel ID (CID),

**Test sequence:**

Interrupt bus connection


-----

|BDUT sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0012`<br>`(Total Length)`|`0x0012`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xf7`<br>`(M_Prop`<br>`Info.in`<br>`d)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x45`<br>`(PID =`<br>`PID_KNX`<br>`NETIP_D`<br>`EVICE_S`<br>`TATE)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `|**`0x01`**<br>**`(KNX`**<br>**`Fault)`**|||||||


TC sends Device Configuration Ack:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x311
(Header (Ver.) (DEVICE_CONFIGURA
- TION_ACK)
Length)
0 0x00
(Sequen (Status
ce )
Counter
)

```
Reconnect bus connection

|TC sends Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`0 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|BDUT sends Device Configuration Request:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0012`<br>`(Total Length)`|`0x0012`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`1 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0xf7`<br>`(M_Prop`<br>`Info.in`<br>`d)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|`0x000b`<br>`(Interface Object`<br>`Type = KNXnet/IP`<br>`Parameter Object)`|<br>`0x01`<br>`(Object`<br>`Instanc`<br>`e)`|`0x45`<br>`(PID =`<br>`PID_KNX`<br>`NETIP_D`<br>`EVICE_S`<br>`TATE)`|`0x1001`<br>`(NoE =`<br>`0x1,`<br>`Six =`<br>`0x001)`|
|`… `|**`0x00`**<br>**`(No`**<br>**`Fault)`**|||||||


-----

TC sends Device Configuration Ack:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x311 0x000a 0x04(St CID
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) ruct
- TION_ACK) Length)
Length)
1 0x00
(Sequen (Status
ce )
Counter
)

```
**Cleanup:**

Close opened connection (see 3.6.1)

##### 4.3 cEMI Transport Layer
These tests check KNXnet/IP Device Management via DEVICE_CONFIGURATION_REQUEST
using cEMI Transport Layer services (T_Data_Individual, T_Data_Connected) according to AN118.

###### 4.3.1 T_Data_Individual.req to unconnected BDUT
**Function ID: 20301**

**Description: This test sends KNXnet/IP DEVICE_CONFIGURATION_REQUEST with cEMI**
T_Data_Individual.req A_PropertyValue_Read to the Control Endpoint of the BDUT without
KNXnet/IP connection.

**Expectation:**

The BDUT ignores this request in unconnected context, and sends no
DEVICE_CONFIGURATION_ACK, and no responding DEVICE_CONFIGURATION_REQUEST
with cEMI T_Data_Individual.ind A_PropertyValue_Response.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.req
A_PropertyValue_Read to the Control Endpoint of the BDUT:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0310 0x0019
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0x00 0x00 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05
0x03 0xD5 0x00 0x01 0x10 0x01
(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)

```
BDUT does not respond.

**Cleanup: None.**

|TC sends Device Configuration Ack:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x311`<br>`(DEVICE_CONFIGURA`<br>`TION_ACK)`|`0x000a`<br>`(Total Length)`|`0x04(St`<br>`ruct`<br>`Length)`|`CID`|
|`1 `<br>`(Sequen`<br>`ce`<br>`Counter`<br>`) `|`0x00`<br>`(Status`<br>`) `|||||

|A_PropertyValue_Read to the Control Endpoint of the BDUT:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0019`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0x00`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|


-----

###### 4.3.2 T_Data_Individual.ind to unconnected BDUT
**Function ID: 20302**

**Description: This test sends KNXnet/IP DEVICE_CONFIGURATION_REQUEST with cEMI**
T_Data_Individual.ind A_PropertyValue_Response to the Control Endpoint of the BDUT without
KNXnet/IP connection.

**Expectation:**

The BDUT ignores this request in unconnected context, and sends no
DEVICE_CONFIGURATION_ACK.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind
A_PropertyValue_Response to the Control Endpoint of the BDUT:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0310 0x001B
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0x00 0x00 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07
0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00
(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)

```
BDUT does not respond.

**Cleanup: None.**

|TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind A_PropertyValue_Response to the Control Endpoint of the BDUT:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0x00`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|


-----

###### 4.3.3 T_Data_Connected.req to unconnected BDUT
**Function ID: 20303**

**Description: This test sends KNXnet/IP DEVICE_CONFIGURATION_REQUEST with cEMI**
T_Data_Connected.req A_PropertyValue_Read to the Control Endpoint of the BDUT without
KNXnet/IP connection.

**Expectation:**

The BDUT ignores this request in unconnected context, and sends no
DEVICE_CONFIGURATION_ACK, and no responding DEVICE_CONFIGURATION_REQUEST
with cEMI T_Data_Connected.ind A_PropertyValue_Response.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.req
A_PropertyValue_Read to the Control Endpoint of the BDUT:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0310 0x0019
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0x00 0x00 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05
0x03 0xD5 0x00 0x01 0x10 0x01
(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)

```
BDUT does not respond.

**Cleanup: None.**

|A_PropertyValue_Read to the Control Endpoint of the BDUT:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0019`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0x00`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|


-----

###### 4.3.4 T_Data_Connected.ind to unconnected BDUT
**Function ID: 20304**

**Description: This test sends KNXnet/IP DEVICE_CONFIGURATION_REQUEST with cEMI**
T_Data_Connected.ind A_PropertyValue_Response to the Control Endpoint of the BDUT without
KNXnet/IP connection.

**Expectation:**

The BDUT ignores this request in unconnected context, and sends no
DEVICE_CONFIGURATION_ACK.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind
A_PropertyValue_Response to the Control Endpoint of the BDUT:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0310 0x001B
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0x00 0x00 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07
0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00
(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)

```
BDUT does not respond.

**Cleanup: None.**

|TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind A_PropertyValue_Response to the Control Endpoint of the BDUT:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0x00`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|


-----

###### 4.3.5 T_Data_Individual.req to BDUT
**Function ID: 20305**

**Description: This test opens a KNXnet/IP Device Management connection, and sends**
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.req
A_PropertyValue_Read.

**Expectation:**

The BDUT sends DEVICE_CONFIGURATION_ACK, and then a responding
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind
A_PropertyValue_Response.

**Parameters: None.**

**Preparation:**

TC opens Device Management connection (see 4.1.1).

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.req
A_PropertyValue_Read:

|A_PropertyValue_Read:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0019`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

|BDUT sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


**Cleanup:**

TC closes Device Management connection (see 3.6.1).


-----

###### 4.3.6 T_Data_Individual.ind to BDUT
**Function ID: 20306**

**Description: This test opens a KNXnet/IP Device Management connection, and sends**
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind
A_PropertyValue_Response.

**Expectation:**

The BDUT sends only DEVICE_CONFIGURATION_ACK.

**Parameters: None.**

**Preparation:**

TC opens Device Management connection (see 4.1.1).

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind
A_PropertyValue_Response:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0310 0x001B
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0xXX 0x00 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07
0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00
(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)

```
BDUT sends DEVICE_CONFIGURATION_ACK:
```
UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)
0x06 0x10 0x0311 0x000A
(Header (Ver.) (CONFIG_ACK) (Total Length)
Length)
0x04 0xXX 0x00 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)

```
**Cleanup:**

TC closes Device Management connection (see 3.6.1).

|TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

###### 4.3.7 T_Data_Connected.req to BDUT
**Function ID: 20307**

**Description: This test opens a KNXnet/IP Device Management connection, and sends**
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.req
A_PropertyValue_Read.

**Expectation:**

The BDUT sends DEVICE_CONFIGURATION_ACK, and then a responding
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind
A_PropertyValue_Response.

**Parameters: None.**

**Preparation:**

TC opens Device Management connection (see 4.1.1).

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.req
A_PropertyValue_Read:

|A_PropertyValue_Read:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0019`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

|BDUT sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


**Cleanup:**

TC closes Device Management connection (see 3.6.1).


-----

###### 4.3.8 T_Data_Connected.ind to BDUT
**Function ID: 20308**

**Description: This test opens a KNXnet/IP Device Management connection, and sends**
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind
A_PropertyValue_Response.

**Expectation:**

The BDUT sends only DEVICE_CONFIGURATION_ACK.

**Parameters: None.**

**Preparation:**

TC opens Device Management connection (see 4.1.1).

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind
A_PropertyValue_Response:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0310 0x001B
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0xXX 0x00 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07
0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00
(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)

```
BDUT sends DEVICE_CONFIGURATION_ACK:
```
UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)
0x06 0x10 0x0311 0x000A
(Header (Ver.) (CONFIG_ACK) (Total Length)
Length)
0x04 0xXX 0x00 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)

```
**Cleanup:**

TC closes Device Management connection (see 3.6.1).

|TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

###### 4.3.9 M_PropRead.req after T_Data_Individual.req
**Function ID: 20309**

**Description: This test opens a KNXnet/IP Device Management connection, then sends**
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.req
A_PropertyValue_Read, then reads and acknowledges the response, and then sends
DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.req.

**Expectation:**

The BDUT sends DEVICE_CONFIGURATION_ACK, and then a responding
DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.conf.

**Parameters: None.**

**Preparation:**

TC opens Device Management connection (see 4.1.1).

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.req
A_PropertyValue_Read:

|A_PropertyValue_Read:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0019`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Individual.req PropValueRead OX=0 PID=1 N=1 X=1)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

|BDUT sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


TC sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.req:

|TC sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRea|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0011`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||
|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

BDUT sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.conf:
```
UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)
0x06 0x10 0x0310 0x0013
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00
(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)

```
TC sends DEVICE_CONFIGURATION_ACK:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0311 0x000A
(Header (Ver.) (CONFIG_ACK) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)

```
**Cleanup:**

TC closes Device Management connection (see 3.6.1).

|UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0013`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||
|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

###### 4.3.10 M_PropRead.req after T_Data_Individual.ind
**Function ID: 20310**

**Description: This test opens a KNXnet/IP Device Management connection, then sends**
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind
A_PropertyValue_Response, and then sends DEVICE_CONFIGURATION_REQUEST with cEMI
M_PropRead.req.

**Expectation:**

The BDUT sends DEVICE_CONFIGURATION_ACK, and then a responding
DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.conf.

**Parameters: None.**

**Preparation:**

TC opens Device Management connection (see 4.1.1).

**Test sequence:**

|TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Individual.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.req:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0310 0x0011
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0xFC 0x00 0x00 0x01 0x01 0x10 0x01
(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)

```
BDUT sends DEVICE_CONFIGURATION_ACK:
```
UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)
0x06 0x10 0x0311 0x000A
(Header (Ver.) (CONFIG_ACK) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)

```
BDUT sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.conf:
```
UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)
0x06 0x10 0x0310 0x0013
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00
(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)

```
TC sends DEVICE_CONFIGURATION_ACK:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0311 0x000A
(Header (Ver.) (CONFIG_ACK) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)

```
**Cleanup:**

TC closes Device Management connection (see 3.6.1).

|UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0011`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||
|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||

|UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0013`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||
|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

###### 4.3.11 M_PropRead.req after T_Data_Connected.req
**Function ID: 20311**

**Description: This test opens a KNXnet/IP Device Management connection, then sends**
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.req
A_PropertyValue_Read, then reads and acknowledges the response, and then sends
DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.req.

**Expectation:**

The BDUT sends DEVICE_CONFIGURATION_ACK, and then a responding
DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.conf.

**Parameters: None.**

**Preparation:**

TC opens Device Management connection (see 4.1.1).

**Test sequence:**

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.req
A_PropertyValue_Read:

|A_PropertyValue_Read:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0019`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x01 0x10 0x01`<br>`(cEMI: T_Data_Connected.req PropValueRead OX=0 PID=1 N=1 X=1)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

|BDUT sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


TC sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.req:

|TC sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRea|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0011`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||
|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

BDUT sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.conf:
```
UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)
0x06 0x10 0x0310 0x0013
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00
(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)

```
TC sends DEVICE_CONFIGURATION_ACK:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0311 0x000A
(Header (Ver.) (CONFIG_ACK) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)

```
**Cleanup:**

TC closes Device Management connection (see 3.6.1).

|UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0013`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||
|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

###### 4.3.12 M_PropRead.req after T_Data_Connected.ind
**Function ID: 20312**

**Description: This test opens a KNXnet/IP Device Management connection, then sends**
DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind
A_PropertyValue_Response, and then sends DEVICE_CONFIGURATION_REQUEST with cEMI
M_PropRead.req.

**Expectation:**

The BDUT sends DEVICE_CONFIGURATION_ACK, and then a responding
DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.conf.

**Parameters: None.**

**Preparation:**

TC opens Device Management connection (see 4.1.1).

**Test sequence:**

|TC sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07`<br>`0x03 0xD6 0x00 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: T_Data_Connected.ind PropValueResponse OX=0 PID=1 N=1 X=1 $0000)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

TC sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.req:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0310 0x0011
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0xFC 0x00 0x00 0x01 0x01 0x10 0x01
(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)

```
BDUT sends DEVICE_CONFIGURATION_ACK:
```
UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)
0x06 0x10 0x0311 0x000A
(Header (Ver.) (CONFIG_ACK) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)

```
BDUT sends DEVICE_CONFIGURATION_REQUEST with cEMI M_PropRead.conf:
```
UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)
0x06 0x10 0x0310 0x0013
(Header (Ver.) (CONFIG_REQUEST) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)
0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00
(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)

```
TC sends DEVICE_CONFIGURATION_ACK:
```
UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)
0x06 0x10 0x0311 0x000A
(Header (Ver.) (CONFIG_ACK) (Total Length)
Length)
0x04 0xXX 0x01 0x00
(Struct (Channel (Sequence (Reserved)
Length) ID) Counter)

```
**Cleanup:**

TC closes Device Management connection (see 3.6.1).

|UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0011`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||
|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|`0xFC 0x00 0x00 0x01 0x01 0x10 0x01`<br>`(cEMI: M_PropRead.req OT=0 OI=1 PID=1 N=1 X=1)`|

|BDUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||

|UDP frame (IP_BDUT : CPORT_BDUT -> IP_TC : CPORT_TC)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0013`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||
|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|`0xFB 0x00 0x00 0x01 0x01 0x10 0x01 0x00 0x00`<br>`(cEMI: M_PropRead.con OT=0 OI=1 PID=1 N=1 X=1 $0000)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_BDUT : CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x01`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

#### 5 Tunnelling

##### 5.1 Connection Handling

###### 5.1.1 Standard Case
**Function ID: 30101**

**Description: This test verifies the standard behaviour by sending a connection request message (KNX**
Link Layer) for a tunnelling connection to the test device.

**Expectation: If the device supports tunnelling, the connection should succeed (test result: true),**
otherwise the connection should fail (test result is also: true).

**Parameters: None**

**Out Parameters: None**

**Preparation:**

Read the possible KNX tunnel addresses from the Property
"PID_ADDITIONAL_INDIVIDUAL_ADDRESSES" (object type 0x000B, instance: 0x01, property
id 0x35).

Used results: KNX tunnel address table (KTAT)

**Test sequence:**

Send CONNECT_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A 0x08 0x01
(Header- (Ver.) (CONNECT_REQUEST) (Total length) (Struct (IPV4_
Length) length) UDP)
IP_TC CPORT_TC 0x08 0x01
                                  (Struct (IPV4_
                                  length) UDP)
IP_TC DPORT_TC 0x04 0x04
                                  length TUNNEL_
                                        CONNECTION
0x02 0x00
TUNNEL_
LINKLAYER

```
BDUT sends CONNECT_RESPONSE
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)

```
`0x06` `0x10` `0x0206` `0x0014` CID `0x00`
```
(Header- (Ver.) (CONNECT_RESPONSE) (Total length) Status=
Length) E_NO_ERROR
0x08 0x01 IP_TC DPORT_TC
(Struct (IPV4_
length) UDP)
0x04 0x04 KNX Individual
(Struct Address
length)

```
The returned KNX additional individual address shall be an element of the KNX tunnel address table
(KTAT).

Used Results: CID

|Send CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|<br>`0x001A`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|`0x04`<br>`length`|`0x04`<br>`TUNNEL_`<br>`CONNECTION`|
|`0x02`<br>`TUNNEL_`<br>`LINKLAYER`|<br>`0x00`|||||

|BDUT sends CONNECT_RESPONSE|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|<br>`0x0014`<br>`(Total length)`|CID|`0x00`<br>`Status=`<br>`E_NO_ERROR`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`DPORT_TC`|`DPORT_TC`|
|`0x04`<br>`(Struct`<br>`length)`|`0x04`|`KNX Individual`<br>`Address`||||


-----

|Send DISCONNECT_REQUEST|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x209`<br>`(DISCONNECT_REQUE`<br>`ST)`|`0x0010`<br>`(Total length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|

|BDUT sends DISCONNECT_RESPONSE:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x20A`<br>`(DISCONNECT_RESPO`<br>`NSE)`|`0x0008`<br>`(Total length)`|`CID`|`0x00`|


###### 5.1.2 Multiplicity
**Function ID: 30102**

**Description: This test verifies the standard behaviour by sending a valid connect request message for**
a tunnelling connection (KNX Link Layer) until the device cannot take any more connections.

**Expectation: When the maximum number of connections has been reached, the test device must send**
a connect response to the requested answer address indicating E_NO_MORE_CONNECTIONS.

**Parameters: Minimum number of connections (Type = Integer, Default = 1), Maximum number of**
connections (Type = Integer, Default = 10).

**Out Parameters: Measured maximum number of concurrent device tunnel connections**

**Preparation:**

Read the possible KNX tunnel addresses from the Property
"PID_ADDITIONAL_INDIVIDUAL_ADDRESSES" (object type 0x000B, instance: 0x01, property
id 0x35).

Used results: Length of KNX tunnel address table = N

**Test sequence:**

Send CONNECT_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A 0x08 0x01
(Header- (Ver.) (CONNECT_REQUEST) (Total length) (Struct (IPV4_
Length) length) UDP)
IP_TC CPORT_TC 0x08 0x01
                                  (Struct (IPV4_
                                  length) UDP)
IP_TC DPORT_TC 0x04 0x04
                                  length TUNNEL_
                                        CONNECTION
0x02 0x00
TUNNEL_
LINKLAYER

```
BDUT sends CONNECT_RESPONSE

|Send CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|<br>`0x001A`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|`0x04`<br>`length`|`0x04`<br>`TUNNEL_`<br>`CONNECTION`|
|`0x02`<br>`TUNNEL_`<br>`LINKLAYER`|`0x00`|||||


-----

`0x06` `0x10` `0x0206` `0x0014` CID `0x00`
```
(Header- (Ver.) (CONNECT_RESPONSE) (Total length) Status=
Length) E_NO_ERROR
0x08 0x01 IP_TC DPORT_TC
(Struct (IPV4_
length) UDP)
0x04 0x04 KNX Individual
(Struct Address
length)

```
The returned KNX additional individual address shall be an element of the KNX additional individual
address table (KTAT).

Save CID

Repeat this sequence until the response of the BDUT is:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0206 0x0008 X 0x24
(Header- (Ver.) (CONNECT_RESPONSE) (Total length) (CID) Status=
Length) E_NO_MORE_
                                       CONNECTIONS

```
The repeat count shall be higher or equal than minimum number of connections and lower or equal
than maximum number of connections.

**Clean up:**

Close all connections.

###### 5.1.3 cEMI Raw Mode
**Function ID: 30105**

**Description: This test verifies the standard behaviour by sending a valid connect request message for**
a tunnelling connection (cEMI Raw Mode) to the test device.

**Expectation: If the device supports cEMI Raw Mode Tunnelling, the connection should succeed,**
otherwise the device should response to the requested answer address indicating
E_CONNECTION_OPTION.

**Parameters: cEMI Raw Mode Supported (Type = Boolean, Default = true)**

**Out Parameters: None**

Reaction to valid connect request message for a tunnelling connection when supporting cEMI Raw
Mode tunnelling still to be added

**Preparation: None**

**Test sequence:**

|UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|<br>`0x0014`<br>`(Total length)`|CID|`0x00`<br>`Status=`<br>`E_NO_ERROR`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`DPORT_TC`|`DPORT_TC`|
|`0x04`<br>`(Struct`<br>`length)`|`0x04`|`KNX Individual`<br>`Address`||||

|Repeat this sequence until the response of the BDUT is:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|<br>`0x0008`<br>`(Total length)`|`X `<br>`(CID)`|`0x24`<br>`Status=`<br>`E_NO_MORE_`<br>`CONNECTIONS`|


-----

Send CONNECT_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A 0x08
(Header- (Ver.) (CONNECT_REQUEST) (Total length) (Struct
Length) length)
IP_TC CPORT_TC 0x08
                                  (Struct
                                  length)
IP_TC DPORT_TC 0x04
                                  length
0x04 0x00
TUNNEL_
RAW

```
BDUT sends CONNECT_RESPONSE if "cEMI Raw Mode Supported" = FALSE
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0206 0x0008 X
(Header- (Ver.) (CONNECT_RESPONSE) (Total length) (CID)
Length)

```
Sequence ends

BDUT sends CONNECT_RESPONSE if "cEMI Raw Mode Supported" = TRUE

```
0x04
TUNNEL_
CONNECTION
0x23
E_
CONNECTION
_OPTION

```
|Send CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|<br>`0x001A`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|`0x04`<br>`length`|`0x04`<br>`TUNNEL_`<br>`CONNECTION`|
|`0x04`<br>`TUNNEL_`<br>`RAW`|`0x00`|||||

|BDUT sends CONNECT_RESPONSE if "cEMI Raw Mode Supported" = FALSE|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|<br>`0x0008`<br>`(Total length)`|`X `<br>`(CID)`|`0x23`<br>`E_`<br>`CONNECTION`<br>`_OPTION`|


`0x06` `0x10` `0x0206` `0x0014` CID `0x00`
```
(Header- (Ver.) (CONNECT_RESPONSE) (Total length) Status=
Length) E_NO_ERROR
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
length) UDP)
0x04 0x04 KNX Individual
(Struct Address
length)

```
**Cleanup:**

Close the connection

###### 5.1.4 KNX Busmonitor Mode
**Function ID: 30107**

**Description: This test verifies the standard behaviour by sending a valid connect request message for**
a tunnelling connection (KNX Busmonitor Mode) to the test device.

**Expectation: If the device supports KNX Busmonitor Mode Tunnelling, the connection should**
succeed, otherwise the device should response to the requested answer address indicating
E_CONNECTION_OPTION.

**Parameters: KNX Busmonitor Mode Supported (Type = Boolean, Default = true)**

**Out Parameters: None**

**Preparation: None**

|(Constructed in analogy to 4.1.1, FuncID 30101) / TBD|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|<br>`0x0014`<br>`(Total length)`|CID|`0x00`<br>`Status=`<br>`E_NO_ERROR`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|
|`0x04`<br>`(Struct`<br>`length)`|`0x04`|`KNX Individual`<br>`Address`||||


-----

**Test sequence:**

Send CONNECT_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205
(Header- (Ver.) (CONNECT_REQUEST)
Length)
IP_TC
IP_TC
0x80 0x00
TUNNEL_
BUSMONITOR

```
BDUT sends CONNECT_RESPONSE
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0206
(Header- (Ver.)
Length)

```
Sequence ends

BDUT sends CONNECT_RESPONSE
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0206
(Header- (Ver.)
Length)
0x08 0x01 IP_TC
(Struct (IPV4_
length) UDP)
0x04 0x04 KNX Individual
(Struct Address
length)

```
**Cleanup:**

Close the connection

###### 5.1.5 Invalid KNX layer code
**Function ID: 30108**

```
0x04 0x04
length TUNNEL_
     CONNECTION
X 0x23
(CID) E_
     CONNECTION
     _OPTION

```
CID `0x00`
```
     Status=
     E_NO_ERROR

```
|Send CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|<br>`0x001A`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|`0x04`<br>`length`|`0x04`<br>`TUNNEL_`<br>`CONNECTION`|
|`0x80`<br>`TUNNEL_`<br>`BUS-`<br>`MONITOR`|`0x00`|||||

|BDUT sends CONNECT_RESPONSE if "KNX Busmonitor Mode Supported " = FALSE|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|<br>`0x0008`<br>`(Total length)`|`X `<br>`(CID)`|`0x23`<br>`E_`<br>`CONNECTION`<br>`_OPTION`|

|BDUT sends CONNECT_RESPONSE if "KNX Busmonitor Mode Supported" = TRUE|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|<br>`0x0014`<br>`(Total length)`|CID|`0x00`<br>`Status=`<br>`E_NO_ERROR`|
|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|
|`0x04`<br>`(Struct`<br>`length)`|`0x04`|`KNX Individual`<br>`Address`||||


**Description: This test verifies the standard behaviour by sending a tunnelling connect request**
containing a random invalid KNX layer code to the test device.

**Expectation: The test device should respond indicating a “connection option not supported” error**
(E_CONNECTION_OPTION).

**Parameters: Number of retries with random layer codes (Type = Integer, Default = 3)**

**Out Parameters: None**

**Preparation: None**


-----

**Test sequence:**

Repeat this sequence for 3 different not defined tunnel layer codes (TLC != 0x02, 0x04, 0x80)

Send CONNECT_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A 0x08 0x01
(Header- (Ver.) (CONNECT_REQUEST) (Total length) (Struct (IPV4_
Length) length) UDP)
IP_TC CPORT_TC 0x08 0x01
                                  (Struct (IPV4_
                                  length) UDP)
IP_TC DPORT_TC 0x04 0x04
                                  length TUNNEL_
                                        CONNECTION
TLC 0x00

```
BDUT sends CONNECT_RESPONSE
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0206 0x0008 X 0x23
(Header- (Ver.) (CONNECT_RESPONSE) (Total length) (CID) E_
Length) CONNECTION
                                        _OPTION

##### 5.2 Tunnelling Request

###### 5.2.1 Standard Case Tunnelling to KNX
```
**Function ID: 30204**

**Description: This test verifies the standard behaviour by sending a tunnelling request message on a**
KNX Link Layer Tunnelling Connection. The tunnelling message contains an L_Data.req service with
fixed data.

**Expectation: The telegram must be received over an open Falcon KNX connection.**

**Parameters: Falcon connection parameters**

**Out parameters: None**

**Preparation: Open a tunnelling connection**

Used Results: CID, KNX individual address

**Test sequence:**

TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message
(CEMI_TEST)
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)

```
`0x06` `0x10` `0x0420` `0x0018` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
0x00 0x00 Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:
(Sequence (reserved) 11 00 bc c0 00 00 12 34 04 00 80 56 78 9A
counter)
…

```
Sequence mark 5.2.1/1

|Send CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|<br>`0x001A`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|`0x04`<br>`length`|`0x04`<br>`TUNNEL_`<br>`CONNECTION`|
|**`TLC`**|`0x00`|||||

|BDUT sends CONNECT_RESPONSE|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE)`|<br>`0x0008`<br>`(Total length)`|`X `<br>`(CID)`|`0x23`<br>`E_`<br>`CONNECTION`<br>`_OPTION`|

|TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message (CEMI_TEST)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0018`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 04 00 80 56 78 9A`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 04 00 80 56 78 9A`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 04 00 80 56 78 9A`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 04 00 80 56 78 9A`|
|`… `|`… `|`… `|`… `|`… `|`… `|


-----

|BDUT sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||

|BDUT sends TUNNELLING_REQUEST with valid L_DATA_CONFIRM for the :CEMI_TEST telegram and inserted KNX Individual Address|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0018`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX Individual Address` `(2) 12 34 04 00`<br>`80 56 78 9A`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX Individual Address` `(2) 12 34 04 00`<br>`80 56 78 9A`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX Individual Address` `(2) 12 34 04 00`<br>`80 56 78 9A`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX Individual Address` `(2) 12 34 04 00`<br>`80 56 78 9A`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|TC sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||


BDUT sends on KNX line (received over Falcon) telegram according to send CEMI_TEST telegram.
Telegram may be received from sequence mark 5.2.1/1 onward. e.g.:
```
BC KNX Individual 1234 C4 00 80
(Control Address (Destination (APDUByte) (Source address) Length
      address) =4)
56 78 9A 6C
                  (Check                  sum)

```
**Cleanup**

Close connection

###### 5.2.2 Standard Case Tunnelling from KNX
**Function ID: 30205**

**Description: This test verifies the standard behaviour by sending a group data message over a Falcon**
KNX connection.

**Expectation: The telegram must be received over an open Tunnelling connection.**

**Parameters: Falcon connection parameters**

|BC<br>(Control<br>Byte)|KNX Individual<br>Address<br>(Source<br>address)|Col3|1234<br>(Destination<br>address)|Col5|C4<br>(APDU-<br>Length<br>=4)|00|80|
|---|---|---|---|---|---|---|---|
|`56`|`78`|`9A`|`6C`<br>`(Check-`<br>`sum)`|||||


-----

**Out parameters: None**

**Preparation: Open tunnelling connection**

Used Results: CID

**Test sequence:**

TC sends telegram on KNX line. This telegram shall be a valid KNX group telegram (GRP_TEST).
E.g.:
```
BC 11 FD 1234 E4 00 80
(Control (Source (Destination (APDUByte) address) address) Length
                             =4)
56 78 9A Check                  sum

```
BDUT sends TUNNELLING_REQUEST with valid cEMI L_DATA_INDICATION for the
GRP_TEST telegram (the cEMI message may have additional information's).
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)

```
`0x06` `0x10` `0x0420` `0x0018` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
0x00 0x00 Valid L_DATA_CONFIRM cEMI message for CEMI_TEST
(Sequence (reserved) e.g.:
counter) 29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a
…

```
TC sends TUNNELLING_ACK:
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)

```
`0x06` `0x10` `0x0421` `0x000A` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) ACK)
                                  length)
0x00 0x00
(Sequence Status=
counter) E_NO_ERROR

```
**Cleanup**

Close connection

###### 5.2.3 Not increased Sequence Counter
**Function ID: 30206**

**Description: This test verifies the error case behaviour by sending a number of tunnelling requests to**
the test device; after that, a tunnelling request with the same sequence counter as before (not
increased) is transmitted.

**Expectation: The last tunnelling request must be responded with a tunnelling ACK, but not**
transmitted on the KNX installation.

**Parameters: Falcon connection parameters**

**Out parameters: None**

**Preparation: Open connection**

Used Results: CID, KNX individual address

|E.g.:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`BC`<br>`(Control`<br>`Byte)`|`11 FD`<br>`(Source`<br>`address)`|`11 FD`<br>`(Source`<br>`address)`|`1234`<br>`(Destination`<br>`address)`|`1234`<br>`(Destination`<br>`address)`|`E4`<br>`(APDU-`<br>`Length`<br>`=4)`|`00`|`80`|
|`56`|`78`|`9A`|`Check-`<br>`sum`|||||

|BDUT sends TUNNELLING_REQUEST with valid cEMI L_DATA_INDICATION for the GRP_TEST telegram (the cEMI message may have additional information's).|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0018`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|TC sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||


-----

Repeat following sequence for 10 times. SC is the sequence counter from 0 to 9 incremented every
cycle:

TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message
(CEMI_TEST)
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)

```
`0x06` `0x10` `0x0420` `0x0019` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
SC 0x00 Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:
(Sequence (reserved) 11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)
counter)
…

```
Sequence mark 5.2.3/1

|TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message (CEMI_TEST)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0019`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`SC`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|BDUT sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`SC`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||

|BDUT sends TUNNELLING_REQUEST with valid L_DATA_CONFIRM for the :CEMI_TEST telegram and inserted KNX Individual Address|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0019`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`SC`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX`**` Individual Address (2)`**` 12 34 05 00`<br>`80 00 00 00 (SC+1)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX`**` Individual Address (2)`**` 12 34 05 00`<br>`80 00 00 00 (SC+1)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX`**` Individual Address (2)`**` 12 34 05 00`<br>`80 00 00 00 (SC+1)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX`**` Individual Address (2)`**` 12 34 05 00`<br>`80 00 00 00 (SC+1)`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|TC sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`SC`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||


-----

BDUT sends on KNX line (received over Falcon) telegram according to send CEMI_TEST telegram.
Telegram may be received from sequence mark 5.2.3/1 onward. e.g.:
```
BC KNX Individual 1234 C5 00 80
(Control Address (Destination (APDUByte) (Source address) Length
      address) =4)
00 00 00 (SC+1) Valid
                       check
                       sum

```
End of repeated sequence

**Test sequence:**

TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message
(CEMI_TEST) and wrong sequence number (sequence number of last transaction).
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)

```
`0x06` `0x10` `0x0420` `0x0019` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
09 0x00 Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:
(Sequence (reserved) 11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b
counter)
…

```
BDUT sends TUNNELLING_ACK:
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)

```
`0x06` `0x10` `0x0421` `0x000A` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) ACK)
                                  length)
09 0x00
(Sequence Status=
counter) E_NO_ERROR

```
Wait for more than 10 seconds (The wait time depends on the cEMI server maximal reaction time of
the BDUT)

The BDUT shall not send a TUNNELLING_REQUEST with a cEMI L_DATA_CONFIRM message.

The BDUT shall not send a telegram on the KNX line.

**Cleanup**

Close the connection

###### 5.2.4 Sequence Counter increased by two
**Function ID: 30207**

**Description: This test verifies the error case behaviour by sending a number of tunnelling requests to**
the test device; after that, a tunnelling request with a sequence counter of one too large is transmitted.

**Expectation: The last tunnelling request must not be responded with a tunnelling ACK, and not be**
transmitted on the KNX installation.

**Parameters: Falcon connection parameters**

**Out parameters: None**

|BC<br>(Control<br>Byte)|KNX Individual<br>Address<br>(Source<br>address)|Col3|1234<br>(Destination<br>address)|Col5|C5<br>(APDU-<br>Length<br>=4)|00|80|
|---|---|---|---|---|---|---|---|
|`00`|`00`|`00`|`(SC+1)`|`Valid`<br>`check`<br>`sum`||||

|TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message (CEMI_TEST) and wrong sequence number (sequence number of last transaction).|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0019`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`09`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|BDUT sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`09`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||


-----

**Preparation: Open tunnelling connection**

Used Results: CID, KNX individual address

Repeat following sequence for 10 times. SC is the sequence counter from 0 to 9 incremented every
cycle:

TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message
(CEMI_TEST)
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)

```
`0x06` `0x10` `0x0420` `0x0019` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
SC 0x00 Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:
(Sequence (reserved) 11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)
counter)
…

```
Sequence mark 5.2.4/1

|TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message (CEMI_TEST)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0019`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`SC`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 (SC+1)`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|BDUT sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`SC`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||

|BDUT sends TUNNELLING_REQUEST with valid L_DATA_CONFIRM for the :CEMI_TEST telegram and inserted KNX Individual Address|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0019`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`SC`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX`**` Individual Address (2)`**` 12 34 05 00`<br>`80 00 00 00 (SC+1)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX`**` Individual Address (2)`**` 12 34 05 00`<br>`80 00 00 00 (SC+1)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX`**` Individual Address (2)`**` 12 34 05 00`<br>`80 00 00 00 (SC+1)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`2E 00 bc c0 KNX`**` Individual Address (2)`**` 12 34 05 00`<br>`80 00 00 00 (SC+1)`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|TC sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`SC`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||


-----

BDUT sends on KNX line (received over Falcon) telegram according to send CEMI_TEST telegram.
Telegram may be received from sequence mark 5.2.4/1 onward. e.g.:
```
BC KNX Individual 1234 C5 00 80
(Control Address (Destination (APDUByte) (Source address) Length
      address) =4)
00 00 00 (SC+1) Valid
                       check
                       sum

```
End of repeated sequence

**Test sequence:**

TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message
(CEMI_TEST) and wrong sequence number (sequence number of last transaction plus two).
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)

```
`0x06` `0x10` `0x0420` `0x0019` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
0B 0x00 Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:
(Sequence (reserved) 11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b
counter)
…

```
Wait for more than 10 seconds (The wait time depends on the cEMI server maximal reaction time of
the BDUT)

The BDUT shall not send a TUNNELLING_ACK

The BDUT shall not send a TUNNELLING_REQUEST with a cEMI L_DATA_CONFIRM message.

The BDUT shall not send a telegram on the KNX line.

**Cleanup**

Close the connection

###### 5.2.5 Standard Case Busmonitor Tunneled from KNX
**Function ID: 30208**

**Description: This test verifies the standard behaviour by sending a busmonitor indication message**
from KNX by busmonitor tunnelling connection.

**Expectation: The telegram must be received over an open busmonitor tunnelling connection.**

**Parameters: Falcon connection parameters**

**Out parameters: None**

**Preparation: Open tunnelling busmonitor connection (if supported)**

Used Result: CID

|BC<br>(Control<br>Byte)|KNX Individual<br>Address<br>(Source<br>address)|Col3|1234<br>(Destination<br>address)|Col5|C5<br>(APDU-<br>Length<br>=4)|00|80|
|---|---|---|---|---|---|---|---|
|`00`|`00`|`00`|`(SC+1)`|`Valid`<br>`check`<br>`sum`||||

|TC sends TUNNELLING_REQUEST with a valid L_DATA_REQUEST cEMI message (CEMI_TEST) and wrong sequence number (sequence number of last transaction plus two).|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0019`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0B`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b`|<br>`Valid L_DATA_REQUEST cEMI message (CEMI_TEST) e.g.:`<br>`11 00 bc c0 00 00 12 34 05 00 80 00 00 00 0b`|
|`… `|`… `|`… `|`… `|`… `|`… `|


-----

**Test sequence:**

TC sends telegram on KNX line. This telegram shall be a valid KNX group telegram (GRP_TEST).
E.g.:
```
BC 11 FD 1234 E4 00 80
(Control (Source (Destination (APDUByte) address) address) Length
                             =4)
56 78 9A Check                  sum

```
BDUT sends TUNNELLING_REQUEST with valid cEMI L_Busmon.ind for the GRP_TEST
telegram (the cEMI message may have additional information).
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)

```
`0x06` `0x10` `0x0420` `0x0018` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
0x00 0x00 Valid L_Busmon.ind cEMI message for CEMI_TEST e.g.:
(Sequence (reserved) 2b 00 bc e0 11 fd 12 34 04 00 80 56 78 9a
counter)
…

```
TC sends TUNNELLING_ACK:
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)

```
`0x06` `0x10` `0x0421` `0x000A` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) ACK)
                                  length)
0x00 0x00
(Sequence Status=
counter) E_NO_ERROR

```
**Cleanup: Close connection**

###### 5.2.6 Standard Case Raw Mode Tunneled from KNX
**Function ID: 30209**

**Description: This test verifies the standard behaviour by sending a raw data indication message from**
KNX by raw tunnelling connection.

**Expectation: The telegram must be received over an open raw tunnelling connection.**

**Parameters: Falcon connection parameters**

**Out parameters: None**

**Preparation: Open tunnelling raw connection (if supported) - Used Result: CID**

|E.g.:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`BC`<br>`(Control`<br>`Byte)`|`11 FD`<br>`(Source`<br>`address)`|`11 FD`<br>`(Source`<br>`address)`|`1234`<br>`(Destination`<br>`address)`|`1234`<br>`(Destination`<br>`address)`|`E4`<br>`(APDU-`<br>`Length`<br>`=4)`|`00`|`80`|
|`56`|`78`|`9A`|`Check-`<br>`sum`|||||

|BDUT sends TUNNELLING_REQUEST with valid cEMI L_Busmon.ind for the GRP_TEST telegram (the cEMI message may have additional information).|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0018`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_Busmon.ind cEMI message for CEMI_TEST e.g.:`<br>`2b 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_Busmon.ind cEMI message for CEMI_TEST e.g.:`<br>`2b 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_Busmon.ind cEMI message for CEMI_TEST e.g.:`<br>`2b 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_Busmon.ind cEMI message for CEMI_TEST e.g.:`<br>`2b 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|TC sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||


-----

**Test sequence:**

TC sends telegram on KNX line. This telegram shall be a valid KNX group telegram (GRP_TEST),
e.g.:
```
BC 11 FD 1234 E4 00 80
(Control (Source (Destination (APDUByte) address) address) Length
                             =4)
56 78 9A Check                  sum

```
BDUT sends TUNNELLING_REQUEST with valid cEMI L_Raw.ind for the GRP_TEST telegram
(the cEMI message may have additional information).
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)

```
`0x06` `0x10` `0x0420` `0x0018` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
0x00 0x00 Valid L_Raw.ind cEMI message for CEMI_TEST e.g.:
(Sequence (reserved) 2d 00 bc e0 11 fd 12 34 04 00 80 56 78 9a
counter)
…

```
TC sends TUNNELLING_ACK:
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)

```
`0x06` `0x10` `0x0421` `0x000A` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) ACK)
                                  length)
0x00 0x00
(Sequence Status=
counter) E_NO_ERROR

```
**Cleanup: Close connection**

###### 5.2.7 Repeat and timeout after missing ACK
**Function ID: 30210**

**Description: This test sends a KNX read request to the test device by tunnelling, without sending**
ACK after receiving the telegram on the tunnelling connection and checks how often and how long the
server repeats it before giving up.

**Expectation: The test device should repeat the telegram once after 1 second.**

**Parameters: None**

**Out Parameters: Observed number of repetitions and total duration of repetitions**

**Preparation: Open tunnelling link layer connection**

Used Result: CID

|e.g.:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`BC`<br>`(Control`<br>`Byte)`|`11 FD`<br>`(Source`<br>`address)`|`11 FD`<br>`(Source`<br>`address)`|`1234`<br>`(Destination`<br>`address)`|`1234`<br>`(Destination`<br>`address)`|`E4`<br>`(APDU-`<br>`Length`<br>`=4)`|`00`|`80`|
|`56`|`78`|`9A`|`Check-`<br>`sum`|||||

|BDUT sends TUNNELLING_REQUEST with valid cEMI L_Raw.ind for the GRP_TEST telegram (the cEMI message may have additional information).|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0018`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_Raw.ind cEMI message for CEMI_TEST e.g.:`<br>`2d 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_Raw.ind cEMI message for CEMI_TEST e.g.:`<br>`2d 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_Raw.ind cEMI message for CEMI_TEST e.g.:`<br>`2d 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_Raw.ind cEMI message for CEMI_TEST e.g.:`<br>`2d 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|TC sends TUNNELLING_ACK:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|<br>`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0421`<br>`(TUNNELLING_`<br>`ACK)`|`0x000A`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`Status=`<br>`E_NO_ERROR`|||||


-----

**Test Sequence**

Send telegram on KNX line. This telegram shall be a valid KNX group telegram (GRP_TEST). E.g.:
```
BC 11 FD 1234 E4 00 80
(Control (Source (Destination (APDUByte) address) address) Length
                             =4)
56 78 9A Check                  sum

```
BDUT sends TUNNELLING_REQUEST with valid cEMI L_DATA_INDICATION for the
GRP_TEST telegram (the cEMI message may have additional information's).
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)

```
`0x06` `0x10` `0x0420` `0x0018` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
0x00 0x00 Valid L_DATA_CONFIRM cEMI message for CEMI_TEST
(Sequence (reserved) e.g.:
counter) 29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a
…

```
BDUT sends TUNNELLING_REQUEST with valid cEMI L_DATA_INDICATION for the
GRP_TEST telegram (the cEMI message may have additional information's). The Telegram shall be
transmitted one second ±10% after the first TUNNELLING_REQUEST
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)

```
`0x06` `0x10` `0x0420` `0x0018` 0x04 `CID`
`(Header-` `(Ver.)` `(TUNNELLING_` `(Total length)` (Struct
```
Length) REQUEST)
                                  length)
0x00 0x00 Valid L_DATA_CONFIRM cEMI message for CEMI_TEST
(Sequence (reserved) e.g.:
counter) 29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a
…

```
**Cleanup: Close connection**

###### 5.2.8 Broadcast telegram tunneled to KNX
**Function ID: 30211**

**Description: This test checks tunnelling of a broadcast telegram to KNX subnet.**

**Expectation: The test telegram should appear on the KNX connection, and the test device should send**
a confirmation telegram back to the tunnelling connection.

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: Test application sends a valid CONNECT_REQUEST (tunnelling, link layer, see 2.4.1)**

BDUT sends a valid CONNECT_RESPONSE

Used results: Channel ID (CID), Individual Address (IA)

|BC<br>(Control<br>Byte)|11 FD<br>(Source<br>address)|Col3|1234<br>(Destination<br>address)|Col5|E4<br>(APDU-<br>Length<br>=4)|00|80|
|---|---|---|---|---|---|---|---|
|`56`|`78`|`9A`|`Check-`<br>`sum`|||||

|BDUT sends TUNNELLING_REQUEST with valid cEMI L_DATA_INDICATION for the GRP_TEST telegram (the cEMI message may have additional information's).|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0018`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|
|`… `|`… `|`… `|`… `|`… `|`… `|

|BDUT sends TUNNELLING_REQUEST with valid cEMI L_DATA_INDICATION for the GRP_TEST telegram (the cEMI message may have additional information's). The Telegram shall be transmitted one second ±10% after the first TUNNELLING_REQUEST|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|<br>`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_`<br>`REQUEST)`|`0x0018`<br>`(Total length)`|0x04<br>(`Struct`<br>`length)`|`CID`|
|`0x00`<br>`(Sequence`<br>`counter)`|<br>`0x00`<br>`(reserved)`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|<br>`Valid L_DATA_CONFIRM cEMI message for CEMI_TEST`<br>`e.g.:`<br>`29 00 bc e0 11 fd 12 34 04 00 80 56 78 9a`|
|`… `|`… `|`… `|`… `|`… `|`… `|


-----

**Test sequence:**

Test application sends:
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)
0x06 0x10 0x0420 0x0015 0x04 CID
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x00 0x00 0x11 0x00 0xA0 0xE0 0x0000
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2) (Source Address)
ce ed) Service onal
counter Code) info
) length)
0x0000 0x01 0x01 0x00
(Destination
Address)

```
BDUT sends a valid TUNNELLING_ACK

BDUT sends:
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)
0x06 0x10 0x0420 0x0015 0x04 CID
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x00 0x00 0x2E 0x00 0xB0 0xE0 IA
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2) (Source Address)
ce ed) Service onal
counter Code) info
) length)
0x0000 0x01 0x01 0x00
(Destination
Address)

```
Test Application sends a valid TUNNELLING_ACK

Test Application checks if the telegram is received via KNX bus connection:
```
B0 [ I A ] 00 00 E1 01 00

```
**Cleanup: Close connection**

###### 5.2.9 Broadcast telegram tunneled from KNX
**Function ID: 30212**

**Description: This test checks tunnelling of a broadcast telegram from KNX subnet by calling Falcon**
IndividualAddressRead.

**Expectation: A corresponding data indication telegram should arrive on the tunnelling connection.**

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: Test application sends a valid CONNECT_REQUEST (tunnelling, link layer, see 2.4.1)**

BDUT sends a valid CONNECT_RESPONSE

Used results: Channel ID (CID), Individual Address (IA)

|Test application sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x11`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xA0`<br>`(Ctrl1)`|`0xE0`<br>`(Ctrl2)`|`0x0000`<br>`(Source Address)`|`0x0000`<br>`(Source Address)`|
|`0x0000`<br>`(Destination`<br>`Address)`|`0x0000`<br>`(Destination`<br>`Address)`|`0x01`|`0x01`|`0x00`||||

|BDUT sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x2E`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xB0`<br>`(Ctrl1)`|`0xE0`<br>`(Ctrl2)`|`IA`<br>`(Source Address)`|`IA`<br>`(Source Address)`|
|`0x0000`<br>`(Destination`<br>`Address)`|`0x0000`<br>`(Destination`<br>`Address)`|`0x01`|`0x01`|`0x00`||||


-----

**Test sequence:**

Test application calls Falcon function 'IndividualAddressRead'

BDUT sends:
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)
0x06 0x10 0x0420 0x0015 0x04 CID
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x00 0x00 0x29 0x00 0xB0 0xE0 IA
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2) (Source Address)
ce ed) Service onal
counter Code) info
) length)
0x0000 0x01 0x01 0x00
(Destination
Address)

```
Test Application sends a valid TUNNELLING_ACK

**Cleanup: Close connection**

###### 5.2.10 Point-to-point telegram tunneled to KNX and back
**Function ID: 30213**

**Description: This test checks tunnelling of a point-to-point telegram to KNX subnet and back by**
sending a tunneled MaskVersionRead request to the load switch and reading the tunneled response of
this device..

**Expectation: The response telegram must contain the load switch address as source address.**

**Parameters: Device address of load switch (Type = String, Default = 1.1.50)**

**Out Parameters: None**

**Preparation: Test application sends a valid CONNECT_REQUEST (tunnelling, link layer, see 2.4.1)**

BDUT sends a valid CONNECT_RESPONSE

Used results: Channel ID (CID), Individual Address (IA)

**Test sequence:**

Test application sends:
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)
0x06 0x10 0x0420 0x0014 0x04 CID
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x00 0x00 0x11 0x00 0xBC 0x50 0x0000
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2) (Source Address)
ce ed) Service onal
counter Code) info
) length)
0x1132 0x00 0x80
(Destination
Address)

```
BDUT sends a valid TUNNELLING_ACK

BDUT sends:

|BDUT sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x29`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xB0`<br>`(Ctrl1)`|`0xE0`<br>`(Ctrl2)`|`IA`<br>`(Source Address)`|`IA`<br>`(Source Address)`|
|`0x0000`<br>`(Destination`<br>`Address)`|`0x0000`<br>`(Destination`<br>`Address)`|`0x01`|`0x01`|`0x00`||||

|Test application sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0014`<br>`(Total Length)`|`0x0014`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x11`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0x50`<br>`(Ctrl2)`|`0x0000`<br>`(Source Address)`|`0x0000`<br>`(Source Address)`|
|`0x1132`<br>`(Destination`<br>`Address)`|`0x1132`<br>`(Destination`<br>`Address)`|`0x00`|`0x80`|||||


-----

|UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0014`<br>`(Total Length)`|`0x0014`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x2E`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0x50`<br>`(Ctrl2)`|`IA`<br>`(Source Address)`|`IA`<br>`(Source Address)`|
|`0x1132`<br>`(Destination`<br>`Address)`|`0x1132`<br>`(Destination`<br>`Address)`|`0x00`|`0x80`|||||


Test Application sends a valid TUNNELLING_ACK

Test Application checks if the telegram is received via KNX bus connection:
```
BC [ I A ] 11 32 50 80

```
Test application sends:
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)
0x06 0x10 0x0420 0x0015 0x04
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x01 0x00 0x11 0x00 0xBC 0x50 0x0000
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2) (Source Address)
ce ed) Service onal
counter Code) info
) length)
0x1132 0x01 0x43 0x00
(Destination
Address)

```
BDUT sends a valid TUNNELLING_ACK

BDUT sends:
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)
0x06 0x10 0x0420 0x0015 0x04
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x01 0x00 0x2E 0x00 0xBC 0x50 IA
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2) (Source Address)
ce ed) Service onal
counter Code) info
) length)
0x1132 0x01 0x43 0x00
(Destination
Address)

```
Test Application sends a valid TUNNELLING_ACK

Test Application checks if the following telegrams are received via KNX bus connection:
```
BC [ I A ] 11 32 51 43 00
B0 11 32 [ I A ] 60 C2

```
|Test application sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x01`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x11`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0x50`<br>`(Ctrl2)`|`0x0000`<br>`(Source Address)`|`0x0000`<br>`(Source Address)`|
|`0x1132`<br>`(Destination`<br>`Address)`|`0x1132`<br>`(Destination`<br>`Address)`|`0x01`|`0x43`|`0x00`||||

|BDUT sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x01`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x2E`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0x50`<br>`(Ctrl2)`|`IA`<br>`(Source Address)`|`IA`<br>`(Source Address)`|
|`0x1132`<br>`(Destination`<br>`Address)`|`0x1132`<br>`(Destination`<br>`Address)`|`0x01`|`0x43`|`0x00`||||


-----

|BDUT sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0014`<br>`(Total Length)`|`0x0014`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x02`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x29`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xB0`<br>`(Ctrl1)`|`0x60`<br>`(Ctrl2)`|`0x1132`<br>`(Source Address)`|`0x1132`<br>`(Source Address)`|
|`IA`<br>`(Destination`<br>`Address)`|`IA`<br>`(Destination`<br>`Address)`|`0x00`|`0xC2`|||||


Test Application sends a valid TUNNELLING_ACK

Test Application checks if the following telegram is received via KNX bus connection:
```
BC 11 32 [ I A ] 63 43 40 00 12

```
BDUT sends:
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)
0x06 0x10 0x0420 0x0017 0x04
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x03 0x00 0x29 0x00 0xBC 0x60 0x1132
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2)
ce ed) Service onal
counter Code) info
) length)
IA 0x03 0x43 0x40 0x00 0x12
(Destination
Address)

```
Test Application sends a valid TUNNELLING_ACK

Test application sends:
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)
0x06 0x10 0x0420 0x0014 0x04
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x02 0x00 0x11 0x00 0xBC 0x50 0x0000
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2)
ce ed) Service onal
counter Code) info
) length)
0x1132 0x00 0x81
(Destination
Address)

```
BDUT sends a valid TUNNELLING_ACK

|BDUT sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0017`<br>`(Total Length)`|`0x0017`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x03`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x29`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0x60`<br>`(Ctrl2)`|`0x1132`<br>`(Source Address)`|`0x1132`<br>`(Source Address)`|
|`IA`<br>`(Destination`<br>`Address)`|`IA`<br>`(Destination`<br>`Address)`|`0x03`|`0x43`|`0x40`|`0x00`|`0x12`||

|Test application sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0014`<br>`(Total Length)`|`0x0014`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x02`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x11`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0x50`<br>`(Ctrl2)`|`0x0000`<br>`(Source Address)`|`0x0000`<br>`(Source Address)`|
|`0x1132`<br>`(Destination`<br>`Address)`|`0x1132`<br>`(Destination`<br>`Address)`|`0x00`|`0x81`|||||


-----

|BDUT sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0014`<br>`(Total Length)`|`0x0014`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x04`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x2E`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0x50`<br>`(Ctrl2)`|`IA`<br>`(Source Address)`|`IA`<br>`(Source Address)`|
|`0x1132`<br>`(Destination`<br>`Address)`|`0x1132`<br>`(Destination`<br>`Address)`|`0x00`|`0x81`|||||


Test Application sends a valid TUNNELLING_ACK

Test Application checks if the following telegram is received via KNX bus connection:
```
BC [ I A ] 11 32 50 81

```
**Cleanup: Close connection**

###### 5.2.11 Group address telegram tunneled to KNX
**Function ID: 30215**

**Description: This test checks tunnelling of a group address telegram to KNX subnet.**

**Expectation: The test telegram should appear on the KNX connection, and the test device should send**
a confirmation telegram back to the tunnelling connection.

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: Test application sends a valid CONNECT_REQUEST (tunnelling, link layer, see 2.4.1)**

BDUT sends a valid CONNECT_RESPONSE

Used results: Channel ID (CID), Individual Address (IA)

**Test sequence:**

Test application sends:
```
UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)
0x06 0x10 0x0420 0x0018 0x04 CID
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x00 0x00 0x11 0x00 0xBC 0xC0 0x0000
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2) (Source Address)
ce ed) Service onal
counter Code) info
) length)
0x1234 0x04 0x00 0x80 0x56 0x78 0x9A
(Destination
Address)

```
BDUT sends a valid TUNNELLING_ACK

BDUT sends:

|Test application sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|`UDP-frame (IP_TC, DPORT_TC, IP_BDUT, DPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0018`<br>`(Total Length)`|`0x0018`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x11`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0xC0`<br>`(Ctrl2)`|`0x0000`<br>`(Source Address)`|`0x0000`<br>`(Source Address)`|
|`0x1234`<br>`(Destination`<br>`Address)`|`0x1234`<br>`(Destination`<br>`Address)`|`0x04`|`0x00`|`0x80`|`0x56`|`0x78`|`0x9A`|


-----

|UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0018`<br>`(Total Length)`|`0x0018`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x2E`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0xC0`<br>`(Ctrl2)`|`IA`<br>`(Source Address)`|`IA`<br>`(Source Address)`|
|`0x1234`<br>`(Destination`<br>`Address)`|`0x1234`<br>`(Destination`<br>`Address)`|`0x04`|`0x00`|`0x80`|`0x56`|`0x78`|`0x9A`|


Test Application sends a valid TUNNELLING_ACK

Test Application checks if the telegram is received via KNX bus connection:
```
BC [ I A ] 12 34 C4 00 80 56 78 9A

```
**Cleanup: Close connection**

###### 5.2.12 Group address telegram tunneled from KNX
**Function ID: 30216**

**Description: This test checks tunnelling of a group address telegram from KNX subnet.**

**Expectation: The test telegram should appear on the tunnelling connection.**

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: Test application sends a valid CONNECT_REQUEST (tunnelling, link layer, see 2.4.1)**

BDUT sends a valid CONNECT_RESPONSE

Used results: Channel ID (CID)

**Test sequence:**

Test application sends a telegram (with SA = Source Address) via KNX bus connection:
```
BC [ S A ] 12 34 C4 00 80 56 78 9A

```
BDUT sends:
```
UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)
0x06 0x10 0x0420 0x0018 0x04 CID
(Header (Ver.) (TUNNELLING_REQUE (Total Length) (Struct
- ST) Length) Length)
0x00 0x00 0x29 0x00 0xBC 0xC0 SA
(Sequen (reserv (cEMI (additi (Ctrl1) (Ctrl2) (Source Address)
ce ed) Service onal
counter Code) info
) length)
0x1234 0x04 0x00 0x80 0x56 0x78 0x9A
(Destination
Address)

```
Test Application sends a valid TUNNELLING_ACK

**Cleanup: Close connection**

|BDUT sends:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|`UDP-frame (IP_BDUT, DPORT_BDUT, IP_TC, DPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0420`<br>`(TUNNELLING_REQUE`<br>`ST)`|`0x0018`<br>`(Total Length)`|`0x0018`<br>`(Total Length)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`CID`|
|`0x00`<br>`(Sequen`<br>`ce`<br>`counter`<br>`) `|`0x00`<br>`(reserv`<br>`ed)`|`0x29`<br>`(cEMI`<br>`Service`<br>`Code)`|`0x00`<br>`(additi`<br>`onal`<br>`info`<br>`length)`|`0xBC`<br>`(Ctrl1)`|`0xC0`<br>`(Ctrl2)`|`SA`<br>`(Source Address)`|`SA`<br>`(Source Address)`|
|`0x1234`<br>`(Destination`<br>`Address)`|`0x1234`<br>`(Destination`<br>`Address)`|`0x04`|`0x00`|`0x80`|`0x56`|`0x78`|`0x9A`|


-----

##### 5.3 Tunnel Addresses

###### 5.3.1 Tunnel Addresses Standard Case
**Function ID: 30110**

**Description: This test sets device property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES (list**
of tunnel addresses) to (FA, FA+1,..., FA+NA-1), where the first address FA is a parameter. Then as
many as possible simultaneous tunnel connections are opened, and the returned tunnel addresses
(KNX individual addresses in the tunnel connect response message) are checked.

**Expectation: The returned tunnel addresses should be from the list defined by properties**
PID_KNX_INDIVIDUAL_ADDRESS and PID_ADDITIONAL_INDIVIDUAL_ADDRESSES,
where PID_KNX_INDIVIDUAL_ADDRESS should not be used for tunnelling if the device is a
router. Also, returned tunnel addresses must not be of the form x.y.0, even if specified so by device
properties.

**Parameters: First Tunnel Address (Type = String, Default = 1.1.111)**

**Out Parameters: None**

**Preparation:**

Open Device Management Connection

Read number of elements of property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES = NA

Set NA additional individual addresses to FA, FA+1,..., FA+NA-1

Close Device Management Connection

**Test sequence:**

Open NA + 1 simultaneous tunnel connections (link layer) (see 2.4.1)

Used results: Channel ID (CID), Individual Address (IA)

BDUT sends NA responses for NA connect requests:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0206 0x0014 CID 0x00
(Header (Ver.) (CONNECT_RESPONSE (Total Length) (NO_ERR
- ) OR)
Length)
0x08 0x01 IP_BDUT DPORT_BDUT
(Struct (IPV4_U
Length) DP)
0x04 0x04 IA
(Struct (TUNNEL
Length) LING_CO
      NNECTIO
      N)

```
Test Application checks each returned IA in structure CRD in CONNECT_RESPONSE if it is
contained in the list defined by properties PID_KNX_INDIVIDUAL_ADDRESS and
PID_ADDITIONAL_INDIVIDUAL_ADDRESSES.

|BDUT sends NA responses for NA connect requests:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0014`<br>`(Total Length)`|`CID`|`0x00`<br>`(NO_ERR`<br>`OR)`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`IP_BDUT`|`IP_BDUT`|`DPORT_BDUT`|`DPORT_BDUT`|
|`0x04`<br>`(Struct`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`LING_CO`<br>`NNECTIO`<br>`N)`|**`IA`**||||

|After the NA + 1 connect request BDUT sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0008`<br>`(Total Length)`|`0x00`|`0x24`<br>`(NO_MOR`<br>`E_CONNE`<br>`CTIONS)`|


-----

**Cleanup:**

Close all opened tunnel connections.

###### 5.3.2 Tunnel Addresses Uniqueness
**Function ID: 30111**

**Description: This test sets device property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES (list**
of tunnel addresses) to (TA, TA,..., TA), where the tunnel address TA is a parameter. Then as many as
possible simultaneous tunnel connections are opened, and the returned tunnel addresses (KNX
individual addresses in the tunnel connect response message) are checked.

**Expectation: No more than one tunnel connection with address TA should open, even when specified**
multiply in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES. If TA is of the form x.y.0, then the
device should refuse to open a tunnel connection with address TA.

**Parameters: Tunnel Address (Type = String, Default = 1.1.111)**

**Out Parameters: None**

**Preparation:**

Open Device Management Connection

Read number of elements of property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES = NA

Set NA additional individual addresses to TA

Close Device Management Connection

**Test sequence:**

Open more than one simultaneous tunnel connections (link layer) (see 2.4.1)

Used results: Channel ID (CID)

BDUT sends response for the first connect request:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0206 0x0014 CID 0x00
(Header (Ver.) (CONNECT_RESPONSE (Total Length) (NO_ERR
- ) OR)
Length)
0x08 0x01 IP_BDUT DPORT_BDUT
(Struct (IPV4_U
Length) DP)
0x04 0x04 TA
(Struct (TUNNEL
Length) LING_CO
      NNECTIO
      N)

```
BDUT sends response for the second connect request:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0206 0x0008 0x00 0x24
(Header (Ver.) (CONNECT_RESPONSE (Total Length) (NO_MOR
- ) E_CONNE
Length) CTIONS)

```
**Cleanup:**

Close all opened tunnel connections.

|BDUT sends response for the first connect request:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0014`<br>`(Total Length)`|`CID`|`0x00`<br>`(NO_ERR`<br>`OR)`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`IP_BDUT`|`IP_BDUT`|`DPORT_BDUT`|`DPORT_BDUT`|
|`0x04`<br>`(Struct`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`LING_CO`<br>`NNECTIO`<br>`N)`|**`TA`**||||

|BDUT sends response for the second connect request:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0008`<br>`(Total Length)`|`0x00`|`0x24`<br>`(NO_MOR`<br>`E_CONNE`<br>`CTIONS)`|


-----

###### 5.3.3 Tunnel Addresses Assignment Method
**Function ID: 30112**

**Description: This test opens a tunnel connection and checks the returned tunnel address (RA1). Then**
it opens a second tunnel connection and checks the returned address (RA2) if possible. Then it closes
the first tunnel connection. Then it opens a further tunnel connection and checks the returned address
(RA3) if possible.

**Expectation: RA3 should always equal RA1, as the device should always return the first free tunnel**
address value from its internal list.

**Parameters: None**

**Out Parameters: None**

**Preparation: None**

**Test sequence:**

Open first tunnel connection (link layer) (see 2.4.1)

Used results: RA1 (returned tunnel address)

Open second tunnel connection (link layer) (see 2.4.1)

Close first tunnel connection

Open tunnel connection (link layer) (see 2.4.1)

Used results: RA3 (returned tunnel address)

Test o.k. if RA1 == RA3

**Cleanup:**

Close all opened tunnel connections

###### 5.3.4 Tunnel E_NO_MORE_CONNECTIONS
**Function ID: 30113**

**Description: This test sets device property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES (list**
of tunnel addresses) to (FA, FA+1,..., FA+NA-1), where the first address FA is a parameter. Then as
many as possible simultaneous tunnel connections are opened, and the returned tunnel addresses
(KNX individual addresses in the Tunnel CONNECT_RESPONSE messages) and error code (in the
last, negative Tunnel CONNECT_RESPONSE message) are checked.

**Expectation: The Tunnel CONNECT_RESPONSE error code should be 0x24 =**
E_NO_MORE_CONNECTIONS, after having exhausted all specified tunnel addresses.

**Parameters: First Tunnel Address (Type = String, Default = FA)**

**Out Parameters: None**

**Preparation:**

Open Device Management Connection.

Read NA = number of elements of property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES.

Set the NA additional individual addresses to FA, FA+1,..., FA+NA-1.

Close Device Management Connection.


-----

**Test sequence:**
```
0x06 0x10
(Header
Length)
0x08 0x01
(Struct
Length) UDP)
0x08 0x01
(Struct
Length) UDP)
0x08 0x04
(Struct
Length)
0x06 0x10
(Header
Length)
0x08 0x01
(Struct
Length) UDP)
0x08 0x04
(Struct
Length)

```
…

```
IP_TC CPORT_TC
IP_TC DPORT_TC

```
|TC sends Tunnel CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|`0x001A`<br>`(Total`<br>`Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x04`<br>`(Tunnel)`|`0x02`<br>`(Link`<br>`Layer)`|<br>`0x00`|||

|BDUT sends Tunnel CONNECT_RESPONSE:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|<br>`0x0206`<br>`(CONNECT_`<br>`RESPONSE)`|`0x0014`<br>`(Total`<br>`Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_BDUT`|`IP_BDUT`|`DPORT_BDUT`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x04`<br>`(Tunnel)`|`FA`|||


-----

```
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x01 IP_TC DPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x04 0x02 0x00
(Struct (Tunnel) (Link
Length) Layer)

```
BDUT sends negative Tunnel CONNECT_RESPONSE:
```
UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)
0x06 0x10 0x0206 0x0008
(Header (Version) (CONNECT_ (Total
Length) RESPONSE) Length)
0x00 0x24
     (E_NO_MORE_CONNECTIONS)

```
**Cleanup:**

Close all opened tunnel connections.

|TC sends Tunnel CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|<br>`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|<br>`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|`0x001A`<br>`(Total`<br>`Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x04`<br>`(Tunnel)`|`0x02`<br>`(Link`<br>`Layer)`|<br>`0x00`|||

|BDUT sends negative Tunnel CONNECT_RESPONSE:|Col2|Col3|Col4|
|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|`0x0206`<br>`(CONNECT_`<br>`RESPONSE)`|<br> <br>`0x0008`<br>`(Total`<br>`Length)`|
|`0x00`|`0x24`<br>`(E_NO_MORE_CONNECTIONS)`|||


-----

###### 5.3.5 Tunnel E_NO_MORE_UNIQUE_CONNECTIONS Case 1
**Function ID: 30114**

**Description: This test sets via device property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES all**
tunnel addresses to the same value TA, which is a parameter. Then as many as possible simultaneous
tunnel connections are opened, and the returned tunnel addresses (KNX individual addresses in the
Tunnel CONNECT_RESPONSE messages) and error code (in the last, negative Tunnel
CONNECT_RESPONSE message) are checked.

**Expectation: The Tunnel CONNECT_RESPONSE error code should be**

  - 0x24 = E_NO_MORE_CONNECTIONS, if NA <= 1 and TA <> DA,

  - 0x25 = E_NO_MORE_UNIQUE_CONNECTIONS, if NA > 1, or NA = 1 and TA = DA and
DA can be tunnel address,

where NA = number of Additional Individual Addresses, and DA = KNX address of the BDUT.

Note that DA cannot be tunnel address if the BDUT supports KNXnet/IP Routing.

**Parameters: Tunnel Address (Type = String, Default = TA)**

**Out Parameters: None**

**Preparation:**

Open Device Management Connection.

Read NA = number of elements of property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES.

Set the NA additional individual addresses to TA, TA,...

Close Device Management Connection.

**Test sequence:**

TC sends Tunnel CONNECT_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A
(Header (Version) (CONNECT_ (Total
Length) REQUEST) Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x01 IP_TC DPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x04 0x02 0x00
(Struct (Tunnel) (Link
Length) Layer)

```
BDUT sends Tunnel CONNECT_RESPONSE:

|TC sends Tunnel CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|<br>`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|<br>`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|`0x001A`<br>`(Total`<br>`Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x04`<br>`(Tunnel)`|`0x02`<br>`(Link`<br>`Layer)`|<br>`0x00`|||


-----

|UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|<br>`0x0206`<br>`(CONNECT_`<br>`RESPONSE)`|`0x0014`<br>`(Total`<br>`Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_BDUT`|`IP_BDUT`|`DPORT_BDUT`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x04`<br>`(Tunnel)`|`TA`|||


…
```
0x06
(Header
Length)
0x08
(Struct
Length)
0x08
(Struct
Length)
0x08
(Struct
Length)
0x06
(Header
Length)
0x00

```
**Cleanup:**

```
IP_TC CPORT_TC
IP_TC DPORT_TC

```
|TC sends Tunnel CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|`0x001A`<br>`(Total`<br>`Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x04`<br>`(Tunnel)`|`0x02`<br>`(Link`<br>`Layer)`|<br>`0x00`|||

```
0x0008
(Total
Length)

```
|BDUT sends negative Tunnel CONNECT_RESPONSE:|Col2|Col3|Col4|
|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|`0x0206`<br>`(CONNECT_`<br>`RESPONSE)`|`0x0008`<br>`(Total`<br>`Length)`|
|`0x00`|`0x25`<br>`(E_NO_MORE_UNIQUE_CONNECTIONS)`|||


Close all opened tunnel connections.


-----

###### 5.3.6 Tunnel E_NO_MORE_UNIQUE_CONNECTIONS Case 2
**Function ID: 30115**

**Description: This test sets via device property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES all**
tunnel addresses to the same value DA, which is the regular KNX Individual Address of the BDUT.
Then as many as possible simultaneous tunnel connections are opened, and the returned tunnel
addresses (KNX individual addresses in the Tunnel CONNECT_RESPONSE messages) and error
code (in the last, negative Tunnel CONNECT_RESPONSE message) are checked.

**Expectation: The Tunnel CONNECT_RESPONSE error code should be**

  - 0x24 = E_NO_MORE_CONNECTIONS, if NA = 0 and DA can be tunnel address,

  - 0x25 = E_NO_MORE_UNIQUE_CONNECTIONS, otherwise,

where NA = number of Additional Individual Addresses, and DA = KNX address of the BDUT.

Note that DA cannot be tunnel address if the BDUT supports KNXnet/IP Routing.

**Parameters: None.**

**Out Parameters: None.**

**Preparation:**

Open Device Management Connection.

Read NA = number of elements of property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES.

Set the NA additional individual addresses to DA, DA,...

Close Device Management Connection.

**Test sequence:**

TC sends Tunnel CONNECT_REQUEST:
```
UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A
(Header (Version) (CONNECT_ (Total
Length) REQUEST) Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x01 IP_TC DPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x04 0x02 0x00
(Struct (Tunnel) (Link
Length) Layer)

```
BDUT sends Tunnel CONNECT_RESPONSE:

|TC sends Tunnel CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|<br>`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|<br>`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|`0x001A`<br>`(Total`<br>`Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x04`<br>`(Tunnel)`|`0x02`<br>`(Link`<br>`Layer)`|<br>`0x00`|||


-----

|UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|<br>`0x0206`<br>`(CONNECT_`<br>`RESPONSE)`|`0x0014`<br>`(Total`<br>`Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_BDUT`|`IP_BDUT`|`DPORT_BDUT`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x04`<br>`(Tunnel)`|`TA`|||


…
```
0x06
(Header
Length)
0x08
(Struct
Length)
0x08
(Struct
Length)
0x08
(Struct
Length)
0x06
(Header
Length)
0x00

```
**Cleanup:**

```
IP_TC CPORT_TC
IP_TC DPORT_TC

```
|TC sends Tunnel CONNECT_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC -> IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|`0x0205`<br>`(CONNECT_`<br>`REQUEST)`|`0x001A`<br>`(Total`<br>`Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`DPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|<br> <br>`0x04`<br>`(Tunnel)`|`0x02`<br>`(Link`<br>`Layer)`|<br>`0x00`|||

```
0x0008
(Total
Length)

```
|BDUT sends negative Tunnel CONNECT_RESPONSE:|Col2|Col3|Col4|
|---|---|---|---|
|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_BDUT, CPORT_BDUT -> IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Version)`|`0x0206`<br>`(CONNECT_`<br>`RESPONSE)`|`0x0008`<br>`(Total`<br>`Length)`|
|`0x00`|`0x25`<br>`(E_NO_MORE_UNIQUE_CONNECTIONS)`|||


Close all opened tunnel connections.

##### 5.4 NAT Compatibility

###### 5.4.1 Standard Case NAT Compatible Tunnelling to KNX
**Function ID: 30301**

**Description: This test opens a NAT compatible tunnel connection and a KNX bus connection, and**
verifies the standard behaviour by sending a NAT compatible tunnelling request message on the tunnel
connection, which should produce a corresponding KNX bus telegram. NAT compatibility means that
all HPAI fields in KNXnet/IP packets are set to zero, where the receiver of such packets implicitly
takes the IP address information normally contained in the HPAI fields from the preceding IP telegram
header.


-----

**Expectation: The test device should respond with NAT compatible telegrams, and as a result of the**
tunnelling request, the expected KNX bus telegram must appear.

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: None**

**Test sequence:**


-----

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|`0x001A`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|
|`0x02`<br>`(TUNNEL`<br>`_LINKLA`<br>`YER)`|`0x00`<br>`(reserv`<br>`ed)`|||||

|BDUT sends response:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0014`<br>`(Total Length)`|`CID`|`0x00`<br>`(NO_ERR`<br>`OR)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|
|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|`XXXX`<br>`(individual`<br>`address)`||||


Used results: Channel ID (CID)

Test application sends a valid TUNNELLING_REQUEST with CID

BDUT sends a valid TUNNELLING_ACK

Test application checks if the telegram is received via KNX bus connection

Test application checks if the L_Data.con is received via tunnel connection

Test application sends a valid TUNNELLING_ACK

Test application sends:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0209 0x0010
(Header (Ver.) (DISCONNECT_REQUE (Total Length)
- ST)
Length)
0x08 0x01 0x00000000
(Struct (IPV4_U (ip address of control endpoint)
- DP)
Length)

```
BDUT sends a valid DISCONNECT_RESPONSE

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0209`<br>`(DISCONNECT_REQUE`<br>`ST)`|`0x0010`<br>`(Total Length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|


-----

**Cleanup: None**


-----

###### 5.4.2 NAT compatible Tunneling to KNX with IP address set
**Function ID: 30302**

**Description: This test opens a NAT compatible tunnel connection and a KNX bus connection, and**
verifies the correct behavior by sending a NAT compatible tunneling request message on the tunnel
connection, which should produce a corresponding KNX bus telegram. In this case, the HPAI fields
containing the port number of control endpoint and data endpoint are both set to zero, while the HPAI
fields containing the IP address of control endpoint and data endpoint are set to the real IP address.

**Expectation: The test device should respond with NAT compatible telegrams, and as a result of the**
tunneling request, the expected KNX bus telegram must appear.

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: None**

**Test sequence:**

Test application sends:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A 0x08 0x01
(Header (Ver.) (CONNECT_REQUEST) (Total Length) (Struct (IPV4_U
- - DP)
Length) Length)
0x ac 18 f0 37 0x0000 0x08 0x01
(ip address of control endpoint) (port number of (Struct (IPV4_U
                       control endpoint) - DP)
                                   Length)
0x ac 18 f0 37 0x0000 0x04 0x04
(ip address of data endpoint) (port number of (Struct (TUNNEL
                       data endpoint) - _CONNEC
                                   Length) TION)
0x02 0x00
(TUNNEL (reserv
_LINKLA ed)
YER)

```
BDUT sends response:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0206 0x0014 CID 0x00
(Header (Ver.) (CONNECT_RESPONSE (Total Length) (NO_ERR
- ) OR)
Length)
0x08 0x01 0x00000000 0x0000
(Struct (IPV4_U (ip address of data endpoint) (port number of
- DP) data endpoint)
Length)
0x04 0x04 XXXX
(Struct (TUNNEL (individual
- _CONNEC address)
Length) TION)

```
Used results: Channel ID (CID)

Test application sends a valid TUNNELLING_REQUEST with CID

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|`0x001A`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x ac 18 f0 37`<br>`(ip address of data endpoint)`|`0x ac 18 f0 37`<br>`(ip address of data endpoint)`|`0x ac 18 f0 37`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|
|`0x02`<br>`(TUNNEL`<br>`_LINKLA`<br>`YER)`|`0x00`<br>`(reserv`<br>`ed)`|||||

|BDUT sends response:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0014`<br>`(Total Length)`|`CID`|`0x00`<br>`(NO_ERR`<br>`OR)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|
|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|`XXXX`<br>`(individual`<br>`address)`||||


-----

BDUT sends a valid TUNNELLING_ACK

Test application checks if the telegram is received via KNX bus connection

Test application checks if the L_Data.con is received via tunnel connection

Test application sends a valid TUNNELLING_ACK

Test application sends:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0209 0x0010 CID 0x00
(Header (Ver.) (DISCONNECT_REQUE (Total Length) (reserv
- ST) ed)
Length)
0x08 0x01 0x ac 18 f0 37 0x0000
(Struct (IPV4_U (ip address of control endpoint) (port number of
- DP) control endpoint)
Length)

```
BDUT sends a valid DISCONNECT_RESPONSE

**Cleanup: None**

###### 5.4.3 NAT compatible Tunneling to KNX with port number set
**Function ID: 30303**

**Description: This test opens a NAT compatible tunnel connection and a KNX bus connection, and**
verifies the correct behavior by sending a NAT compatible tunneling request message on the tunnel
connection, which should produce a corresponding KNX bus telegram. In this case, the HPAI fields
containing the IP address of control endpoint and data endpoint are both set to zero, while the HPAI
fields containing the port number of control endpoint and data endpoint are set to the real port
numbers.

**Expectation: The test device should respond with NAT compatible telegrams, and as a result of the**
tunneling request, the expected KNX bus telegram must appear.

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: None**

**Test sequence:**

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0209`<br>`(DISCONNECT_REQUE`<br>`ST)`|`0x0010`<br>`(Total Length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|


-----

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|`0x001A`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x05 f1`<br>`(port number of`<br>`control endpoint)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x05 f2`<br>`(port number of`<br>`data endpoint)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|
|`0x02`<br>`(TUNNEL`<br>`_LINKLA`<br>`YER)`|`0x00`<br>`(reserv`<br>`ed)`|||||

|BDUT sends response:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0014`<br>`(Total Length)`|`CID`|`0x00`<br>`(NO_ERR`<br>`OR)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|
|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|`XXXX`<br>`(individual`<br>`address)`||||


Used results: Channel ID (CID)

Test application sends a valid TUNNELLING_REQUEST with CID

BDUT sends a valid TUNNELLING_ACK

Test application checks if the telegram is received via KNX bus connection

Test application checks if the L_Data.con is received via tunnel connection

Test application sends a valid TUNNELLING_ACK

Test application sends:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0209 0x0010
(Header (Ver.) (DISCONNECT_REQUE (Total Length)
- ST)
Length)
0x08 0x01 0x00000000
(Struct (IPV4_U (ip address of control endpoint)
- DP)
Length)

```
BDUT sends a valid DISCONNECT_RESPONSE

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0209`<br>`(DISCONNECT_REQUE`<br>`ST)`|`0x0010`<br>`(Total Length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x05 f1`<br>`(port number of`<br>`control endpoint)`|`0x05 f1`<br>`(port number of`<br>`control endpoint)`|


-----

**Cleanup: None**

###### 5.4.4 Standard Case NAT Compatible Tunnelling from KNX
**Function ID: 30304**

**Description: This test opens a NAT compatible tunnel connection and a KNX bus connection, and**
verifies the standard behaviour by sending a group-addressed KNX bus telegram, which should
produce a corresponding NAT compatible tunnelling request from the test device. NAT compatibility
means that all HPAI fields in KNXnet/IP packets are set to zero, where the receiver of such packets
implicitly takes the IP address information normally contained in the HPAI fields from the preceding
IP telegram header.

**Expectation: The test device should respond with NAT compatible telegrams, and as a result of the**
KNX bus telegram, the expected tunnelling request must appear.

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: None**

**Test sequence:**

Test application sends:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A 0x08 0x01
(Header (Ver.) (CONNECT_REQUEST) (Total Length) (Struct (IPV4_U
- - DP)
Length) Length)
0x00000000 0x0000 0x08 0x01
(ip address of control endpoint) (port number of (Struct (IPV4_U
                       control endpoint) - DP)
                                   Length)
0x00000000 0x0000 0x04 0x04
(ip address of data endpoint) (port number of (Struct (TUNNEL
                       data endpoint) - _CONNEC
                                   Length) TION)
0x02 0x00
(TUNNEL (reserv
_LINKLA ed)
YER)

```
BDUT sends response:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0206 0x0014 CID 0x00
(Header (Ver.) (CONNECT_RESPONSE (Total Length) (NO_ERR
- ) OR)
Length)
0x08 0x01 0x00000000 0x0000
(Struct (IPV4_U (ip address of data endpoint) (port number of
- DP) data endpoint)
Length)
0x04 0x04 XXXX
(Struct (TUNNEL (individual
- _CONNEC address)
Length) TION)

```
Used results: Channel ID (CID)

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|`0x001A`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|
|`0x02`<br>`(TUNNEL`<br>`_LINKLA`<br>`YER)`|`0x00`<br>`(reserv`<br>`ed)`|||||

|BDUT sends response:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0014`<br>`(Total Length)`|`CID`|`0x00`<br>`(NO_ERR`<br>`OR)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|
|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|`XXXX`<br>`(individual`<br>`address)`||||


-----

Test application sends telegram via KNX bus connection

Test application checks if BDUT sends a valid TUNNELLING_REQUEST

Test application sends a valid TUNNELLING_ACK

Test application sends:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0209 0x0010 CID 0x00
(Header (Ver.) (DISCONNECT_REQUE (Total Length) (reserv
- ST) ed)
Length)
0x08 0x01 0x00000000 0x0000
(Struct (IPV4_U (ip address of control endpoint) (port number of
- DP) control endpoint)
Length)

```
BDUT sends a valid DISCONNECT_RESPONSE

**Cleanup: None**

###### 5.4.5 NAT compatible Tunneling from KNX with IP address set
**Function ID: 30305**

**Description: This test opens a NAT compatible tunnel connection and a KNX bus connection, and**
verifies the correct behavior by sending a group-addressed KNX bus telegram, which should produce
a corresponding NAT compatible tunneling request from the test device. In the request message, the
HPAI fields containing the IP address of control endpoint and data endpoint are both set to zero, while
the HPAI fields containing the port number of control endpoint and data endpoint are set to the real
port number.

**Expectation: The test device should respond with NAT compatible telegrams, and as a result of the**
KNX bus telegram, the expected tunnelling request must appear.

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: None**

**Test sequence:**

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0209`<br>`(DISCONNECT_REQUE`<br>`ST)`|`0x0010`<br>`(Total Length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|`0x001A`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x ac 18 f0 37`<br>`(ip address of data endpoint)`|`0x ac 18 f0 37`<br>`(ip address of data endpoint)`|`0x ac 18 f0 37`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|
|`0x02`<br>`(TUNNEL`<br>`_LINKLA`<br>`YER)`|`0x00`<br>`(reserv`<br>`ed)`|||||


-----

|BDUT sends response:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0014`<br>`(Total Length)`|`CID`|`0x00`<br>`(NO_ERR`<br>`OR)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|
|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|`XXXX`<br>`(individual`<br>`address)`||||


Used results: Channel ID (CID)

Test application sends telegram via KNX bus connection

Test application checks if BDUT sends a valid TUNNELLING_REQUEST

Test application sends a valid TUNNELLING_ACK

Test application sends:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0209 0x0010 CID 0x00
(Header (Ver.) (DISCONNECT_REQUE (Total Length) (reserv
- ST) ed)
Length)
0x08 0x01 0x ac 18 f0 37 0x0000
(Struct (IPV4_U (ip address of control endpoint) (port number of
- DP) control endpoint)
Length)

```
BDUT sends a valid DISCONNECT_RESPONSE

**Cleanup: None**

###### 5.4.6 NAT compatible Tunneling from KNX with port number set
**Function ID: 30306**

**Description: This test opens a NAT compatible tunnel connection and a KNX bus connection, and**
verifies the correct behavior by sending a group-addressed KNX bus telegram, which should produce
a corresponding NAT compatible tunneling request from the test device. In this case, NAT
compatibility means that in KNXnet/IP packets, the HPAI field containing the IP address is set to zero,
while the HPAI field containing the port number is set to the real port number.

**Expectation: The test device should respond with NAT compatible telegrams, and as a result of the**
KNX bus telegram, the expected tunnelling request must appear.

**Parameters: Falcon connection parameters**

**Out Parameters: None**

**Preparation: None**

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0209`<br>`(DISCONNECT_REQUE`<br>`ST)`|`0x0010`<br>`(Total Length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x ac 18 f0 37`<br>`(ip address of control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|`0x0000`<br>`(port number of`<br>`control endpoint)`|


-----

**Test sequence:**

Test application sends:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0205 0x001A
(Header (Ver.) (CONNECT_REQUEST) (Total Length)
Length)
0x00000000 0x0621
(ip address of control endpoint) (port number of
                       control endpoint)
0x00000000 0x0622
(ip address of data endpoint) (port number of
                       data endpoint)
0x02 0x00
(TUNNEL (reserv
_LINKLA ed)
YER)

```
BDUT sends response:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0206 0x0014
(Header (Ver.) (CONNECT_RESPONSE (Total Length)
- )
Length)
0x08 0x01 0x00000000
(Struct (IPV4_U (ip address of data endpoint)
- DP)
Length)
0x04 0x04 XXXX
(Struct (TUNNEL (individual
- _CONNEC address)
Length) TION)

```
Used results: Channel ID (CID)

Test application sends telegram via KNX bus connection

Test application checks if BDUT sends a valid TUNNELLING_REQUEST

Test application sends a valid TUNNELLING_ACK

Test application sends:
```
UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0209 0x0010
(Header (Ver.) (DISCONNECT_REQUE (Total Length)
- ST)
Length)
0x08 0x01 0x00000000
(Struct (IPV4_U (ip address of control endpoint)
- DP)
Length)

```
BDUT sends a valid DISCONNECT_RESPONSE

**Cleanup: None**

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0205`<br>`(CONNECT_REQUEST)`|`0x001A`<br>`(Total Length)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x0621`<br>`(port number of`<br>`control endpoint)`|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|
|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x0622`<br>`(port number of`<br>`data endpoint)`|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|
|`0x02`<br>`(TUNNEL`<br>`_LINKLA`<br>`YER)`|`0x00`<br>`(reserv`<br>`ed)`|||||

|BDUT sends response:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0206`<br>`(CONNECT_RESPONSE`<br>`) `|`0x0014`<br>`(Total Length)`|`CID`|`0x00`<br>`(NO_ERR`<br>`OR)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x00000000`<br>`(ip address of data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|`0x0000`<br>`(port number of`<br>`data endpoint)`|
|`0x04`<br>`(Struct`<br>`-`<br>`Length)`|`0x04`<br>`(TUNNEL`<br>`_CONNEC`<br>`TION)`|`XXXX`<br>`(individual`<br>`address)`||||

|Test application sends:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0209`<br>`(DISCONNECT_REQUE`<br>`ST)`|`0x0010`<br>`(Total Length)`|`CID`|`0x00`<br>`(reserv`<br>`ed)`|
|`0x08`<br>`(Struct`<br>`-`<br>`Length)`|`0x01`<br>`(IPV4_U`<br>`DP)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x00000000`<br>`(ip address of control endpoint)`|`0x0621`<br>`(port number of`<br>`control endpoint)`|`0x0621`<br>`(port number of`<br>`control endpoint)`|


-----

#### 6 Routing

##### 6.1 Routing Indication

###### 6.1.1 Standard Case 1
**Function ID: 40201**

**Description: This test verifies the standard behaviour by sending a valid KNXnet/IP routing**
indication on the standard multicast address

**Expectation: The telegram must be received over an open Falcon KNX connection.**

**Parameters: Falcon connection parameters.**

**Preparation: none**

**Test sequence:**

Send KNXnet/IP routing:
```
UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0530 0x0014 0x29 0x00
(Header (Ver.) (ROUTING_INDICATI (Total Length) L_data. Additio
- ON) ind nal
Length) Info
 bc c0 00 00 12 34 04 00 80 56 78 9a 

```
Expected Answer must be received not later than x s after sending the KNX/IP Routing

KNX telegram:

BC 00 00 12 34 B4 00 80 56 78 9A :E5

CC

**Cleanup: none**

###### 6.1.2 Standard Case 2
**Function ID: 40202**

**Description: This test verifies the standard behaviour by sending a group data message over a Falcon**
KNX connection.

**Expectation: The telegram must be received over KNXnet/IP routing.**

**Parameters: Falcon connection parameters.**

**Preparation: none**

**Test sequence:**

Send group data message over a Falcon KNX connection:

BC 11 FD 12 34 C4 00 80 56 78 9A :79

CC

|Send KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|


-----

|Expected KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|


**Cleanup: none**

###### 6.1.3 Changed multicast address, Case 1
**Function ID: 40203**

**Description: This test changes the routing multicast address and verifies the standard behaviour by**
sending a valid KNXnet/IP routing indication on the changed multicast address.

**Expectation: The telegram must be received over an open Falcon KNX connection.**

**Parameters: Falcon connection parameters.**

**Preparation:**

Send Connection Request

Send Configuration Request:

M_PropWrite.req, IOT=11, OI=1, PID=66, NoE=1, SIx=1

Data: $ EF C0 27 ED

Send Device Configuration Request:

M_Reset.req

Close Connection

**Test sequence:**

Send KNXnet/IP routing:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING (EF C0 27 ED), CPORT_BDUT)
0x06 0x10 0x0530 0x0014 0x29 0x00
(Header (Ver.) (ROUTING_INDICATI (Total Length) L_data. Additio
- ON) ind nal
Length) Info
 bc c0 00 00 12 34 04 00 80 56 78 9a 

```
Expected Answer must be received not later than x s after sending the KNX/IP Routing:

KNX telegram:

BC 00 00 12 34 B4 00 80 56 78 9A :E5

CC

**Cleanup:**

Send Connection Request

Send Configuration Request:

M_PropWrite.req, IOT=11, OI=1, PID=66, NoE=1, SIx=1

Data: $ E0 00 17 0C

Send Device Configuration Request:

|UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING (EF C0 27 ED), CPORT_BDUT)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|


-----

M_Reset.req

Close Connection

###### 6.1.4 Changed multicast address, Case 2
**Function ID: 40204**

**Description: This test changes the routing multicast address and verifies the standard behaviour by**
sending a group data message over a Falcon KNX connection.

**Expectation: The telegram must be received over KNXnet/IP routing.**

**Parameters: Falcon connection parameters.**

**Preparation:**

Send Connection Request

Send Configuration Request:

M_PropWrite.req, IOT=11, OI=1, PID=66, NoE=1, SIx=1

Data: $ EF C0 27 ED

Send Device Configuration Request:

M_Reset.req

Close Connection

**Test sequence:**

Send group data message over a Falcon KNX connection:

BC 11 FD 12 34 C4 00 80 56 78 9A :79

CC

Expected KNXnet/IP routing:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING (EF C0 27 ED), CPORT_BDUT)
0x06 0x10 0x0530 0x0014 0x29 0x00
(Header (Ver.) (ROUTING_INDICATI (Total Length) L_data. Additio
- ON) ind nal
Length) Info

```
bc b0 11 fd 12 34 04 00 80 56 78 9a

**Cleanup:**

Send Connection Request

Send Configuration Request:

M_PropWrite.req, IOT=11, OI=1, PID=66, NoE=1, SIx=1

Data: $ E0 00 17 0C

Send Device Configuration Request:

M_Reset.req

Close Connection

|UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING (EF C0 27 ED), CPORT_BDUT)|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|bc b0 11 fd 12 34 04 00 80 56 78 9a|bc b0 11 fd 12 34 04 00 80 56 78 9a|bc b0 11 fd 12 34 04 00 80 56 78 9a|bc b0 11 fd 12 34 04 00 80 56 78 9a|bc b0 11 fd 12 34 04 00 80 56 78 9a|bc b0 11 fd 12 34 04 00 80 56 78 9a|


-----

###### 6.1.5 Property PID_MSG_TRANSMIT_TO_KNX
Optional test, only needed if PID_MSG_TRANSMIT_TO_KNX is implemented

**Function ID: 40205**

**Description: This test checks the counter PID_MSG_TRANSMIT_TO_KNX before and after routing**
5 routed and 3 non-routed group data messages to KNX subnet.

**Expectation: The counter should be 0 before and increased by 5 after sending the test telegrams.**

**Parameters: Max number of retrials to reopen connection after resetting device, Waiting time in**
milliseconds after resetting device, Falcon connection parameters

**Preparation:**

Send DeviceConnection Request

Send Device Configuration Request:

M_Reset.req

Close Connection

**Test sequence:**

Send DeviceConnection Request

Send Device Configuration Request: M_PropRead.req
```
UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)
0x06 0x10 0x0310 0x0011 0x04 x
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) structu Channel
- TION_REQUEST) re ID
Length) length
0x00 0x00 0xFC 0x000B 0x01 0x4B 0x10
Sequenc reserve M_PropR ObjectType Instanc PID NoE=1
e d ead.req e
counter
0x01
Six=1

```
Expected Answer: Device Configuration Response

Expected Answer: Device Configuration Request: M_PropRead.conf
```
UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0310 0x0015 0x04 x
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) structu Channel
- TION_REQUEST) re ID
Length) length
0x00 0x00 0xFB 0x000B 0x01 0x4B 0x10
Sequenc reserve M_PropR ObjectType Instanc PID NoE=1
e d ead.con e
counter f
0x01 0x00000000
Six=1 Data

```
Close Connection

|Send Device Configuration Request: M_PropRead.req|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`x `<br>`Channel`<br>`ID`|
|`0x00`<br>`Sequenc`<br>`e `<br>`counter`|`0x00`<br>`reserve`<br>`d `|`0xFC`<br>`M_PropR`<br>`ead.req`|`0x000B`<br>`ObjectType`|`0x000B`<br>`ObjectType`|`0x01`<br>`Instanc`<br>`e `|`0x4B`<br>`PID`|`0x10`<br>`NoE=1`|
|`0x01`<br>`Six=1`||||||||

|Expected Answer: Device Configuration Request: M_PropRead.conf|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`x `<br>`Channel`<br>`ID`|
|`0x00`<br>`Sequenc`<br>`e `<br>`counter`|`0x00`<br>`reserve`<br>`d `|`0xFB`<br>`M_PropR`<br>`ead.con`<br>`f `|`0x000B`<br>`ObjectType`|`0x000B`<br>`ObjectType`|`0x01`<br>`Instanc`<br>`e `|`0x4B`<br>`PID`|`0x10`<br>`NoE=1`|
|`0x01`<br>`Six=1`|**`0x00000000`**<br>**`Data`**|**`0x00000000`**<br>**`Data`**|**`0x00000000`**<br>**`Data`**|**`0x00000000`**<br>**`Data`**||||


-----

Send 5 KNXnet/IP routing:
```
UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0530
(Header (Ver.) (ROUTING_INDICATI
- ON)
Length)
 bc c0 00 00 12 34 04 00 80 56 78 9a 

```
Expected Answer:

Received KNX telegram:

BC 00 00 12 34 B4 00 80 56 78 9A :E5

CC

BC 00 00 12 34 B4 00 80 56 78 9A :E5

CC

BC 00 00 12 34 B4 00 80 56 78 9A :E5

CC

BC 00 00 12 34 B4 00 80 56 78 9A :E5

CC

BC 00 00 12 34 B4 00 80 56 78 9A :E5

CC

Send 3 KNXnet/IP routing:
```
UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0530
(Header (Ver.) (ROUTING_INDICATI
- ON)
Length)
 bc 80 00 00 12 34 04 00 80 56 78 9a

```
Send DeviceConnection Request

Send Device Configuration Request: M_PropRead.req
```
UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)
0x06 0x10 0x0310
(Header (Ver.) (DEVICE_CONFIGURA
- TION_REQUEST)
Length)
0x00 0x00 0xFC 0x000B
Sequenc reserve M_PropR ObjectType
e d ead.req
counter
0x01
Six=1

```
Expected Answer: Device Configuration Response

|Send 5 KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|

|Send 3 KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc 80 00 00 12 34 04 00 80 56 78 9a`|` bc 80 00 00 12 34 04 00 80 56 78 9a`|` bc 80 00 00 12 34 04 00 80 56 78 9a`|` bc 80 00 00 12 34 04 00 80 56 78 9a`|` bc 80 00 00 12 34 04 00 80 56 78 9a`|` bc 80 00 00 12 34 04 00 80 56 78 9a`|

|Send Device Configuration Request: M_PropRead.req|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`x `<br>`Channel`<br>`ID`|
|`0x00`<br>`Sequenc`<br>`e `<br>`counter`|`0x00`<br>`reserve`<br>`d `|`0xFC`<br>`M_PropR`<br>`ead.req`|`0x000B`<br>`ObjectType`|`0x000B`<br>`ObjectType`|`0x01`<br>`Instanc`<br>`e `|`0x4B`<br>`PID`|`0x10`<br>`NoE=1`|
|`0x01`<br>`Six=1`||||||||


-----

|Expected Answer: Device Configuration Request: M_PropRead.conf|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`x `<br>`Channel`<br>`ID`|
|`0x00`<br>`Sequenc`<br>`e `<br>`counter`|`0x00`<br>`reserve`<br>`d `|`0xFB`<br>`M_PropR`<br>`ead.con`<br>`f `|`0x000B`<br>`ObjectType`|`0x000B`<br>`ObjectType`|`0x01`<br>`Instanc`<br>`e `|`0x4B`<br>`PID`|`0x10`<br>`NoE=1`|
|`0x01`<br>`Six=1`|**`0x00000005`**<br>**`Data`**|**`0x00000005`**<br>**`Data`**|**`0x00000005`**<br>**`Data`**|**`0x00000005`**<br>**`Data`**||||


Close Connection

**Cleanup: none**

###### 6.1.6 Property PID_MSG_TRANSMIT_TO_IP
Optional test, only needed if PID_MSG_TRANSMIT_TO_IP is implemented

**Function ID: 40206**

**Description: This test checks the counter PID_MSG_TRANSMIT_TO_IP before and after routing 5**
routed and 3 non-routed group data messages from a Falcon KNX connection.

**Expectation: The counter should be 0 before and increased by 5 after sending the test telegrams**

**Parameters: Max number of retrials to reopen connection after resetting device, Waiting time in**
milliseconds after resetting device, Falcon connection parameters

**Preparation:**

Send DeviceConnection Request

Send Device Configuration Request:

M_Reset.req

Close Connection

**Test sequence:**

Send DeviceConnection Request

Send Device Configuration Request: M_PropRead.req
```
UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)
0x06 0x10 0x0310 0x0011 0x04 x
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) structu Channel
- TION_REQUEST) re ID
Length) length
0x00 0x00 0xFC 0x000B 0x01 0x4B 0x10
Sequenc reserve M_PropR ObjectType Instanc PID NoE=1
e d ead.req e
counter
0x01
Six=1

```
Expected Answer: Device Configuration Response

|Send Device Configuration Request: M_PropRead.req|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`x `<br>`Channel`<br>`ID`|
|`0x00`<br>`Sequenc`<br>`e `<br>`counter`|`0x00`<br>`reserve`<br>`d `|`0xFC`<br>`M_PropR`<br>`ead.req`|`0x000B`<br>`ObjectType`|`0x000B`<br>`ObjectType`|`0x01`<br>`Instanc`<br>`e `|`0x4B`<br>`PID`|`0x10`<br>`NoE=1`|
|`0x01`<br>`Six=1`||||||||


-----

|Expected Answer: Device Configuration Request: M_PropRead.conf|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`x `<br>`Channel`<br>`ID`|
|`0x00`<br>`Sequenc`<br>`e `<br>`counter`|`0x00`<br>`reserve`<br>`d `|`0xFB`<br>`M_PropR`<br>`ead.con`<br>`f `|`0x000B`<br>`ObjectType`|`0x000B`<br>`ObjectType`|`0x01`<br>`Instanc`<br>`e `|`0x4B`<br>`PID`|`0x10`<br>`NoE=1`|
|`0x01`<br>`Six=1`|**`0x00000000`**<br>**`Data`**|**`0x00000000`**<br>**`Data`**|**`0x00000000`**<br>**`Data`**|**`0x00000000`**<br>**`Data`**||||


Close Connection

Send 5 KNX telegrams:

BC 11 FD 12 34 C4 00 80 56 78 9A :79

CC

BC 11 FD 12 34 C4 00 80 56 78 9A :79

CC

BC 11 FD 12 34 C4 00 80 56 78 9A :79

CC

BC 11 FD 12 34 C4 00 80 56 78 9A :79

CC

BC 11 FD 12 34 C4 00 80 56 78 9A :79

CC

Send 3 KNX telegrams:

BC 11 FD 12 34 84 00 80 56 78 9A :39

CC

BC 11 FD 12 34 84 00 80 56 78 9A :39

CC

BC 11 FD 12 34 84 00 80 56 78 9A :39

CC

Expected Answer:

Receive 5 KNXnet/IP routing:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0530
(Header (Ver.) (ROUTING_INDICATI
- ON)
Length)
 bc b0 11 fd 12 34 04 00 80 56 78 9a

```
Send DeviceConnection Request

|Receive 5 KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|


-----

|Send Device Configuration Request: M_PropRead.req|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|<br>`UDP-frame (IP_TC, CPORT_TC, IP_ BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0011`<br>`(Total Length)`|`0x0011`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`x `<br>`Channel`<br>`ID`|
|`0x00`<br>`Sequenc`<br>`e `<br>`counter`|`0x00`<br>`reserve`<br>`d `|`0xFC`<br>`M_PropR`<br>`ead.req`|`0x000B`<br>`ObjectType`|`0x000B`<br>`ObjectType`|`0x01`<br>`Instanc`<br>`e `|`0x4B`<br>`PID`|`0x10`<br>`NoE=1`|
|`0x01`<br>`Six=1`||||||||


Expected Answer: Device Configuration Response

Expected Answer: Device Configuration Request: M_PropRead.conf
```
UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0310 0x0015 0x04 x
(Header (Ver.) (DEVICE_CONFIGURA (Total Length) structu Channel
- TION_REQUEST) re ID
Length) length
0x00 0x00 0xFB 0x000B 0x01 0x4B 0x10
Sequenc reserve M_PropR ObjectType Instanc PID NoE=1
e d ead.con e
counter f
0x01 0x00000005
Six=1 Data

```
Close Connection

**Cleanup: none**

###### 6.1.7 Mixed Case 1
**Function ID: 30201**

**Description: This test verifies the standard behaviour by sending a valid tunnelling request message**
on a KNX Link Layer Tunnelling Connection. The tunnelling message contains an L_Data.req service
with fixed data.

**Expectation: The telegram must be received both over KNXnet/IP routing and a local Falcon KNX**
connection.

**Parameters: Falcon connection parameters**

**Preparation: none**

**Test sequence:**

Send TunnellingConnection Request

Send a Tunnelling Request: L_DATA.req 11 00 bc c0 00 00 12 34 04 00 80 56 78 9a

Expected Answer:

|Expected Answer: Device Configuration Request: M_PropRead.conf|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP-frame (IP_ BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0310`<br>`(DEVICE_CONFIGURA`<br>`TION_REQUEST)`|`0x0015`<br>`(Total Length)`|`0x0015`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`x `<br>`Channel`<br>`ID`|
|`0x00`<br>`Sequenc`<br>`e `<br>`counter`|`0x00`<br>`reserve`<br>`d `|`0xFB`<br>`M_PropR`<br>`ead.con`<br>`f `|`0x000B`<br>`ObjectType`|`0x000B`<br>`ObjectType`|`0x01`<br>`Instanc`<br>`e `|`0x4B`<br>`PID`|`0x10`<br>`NoE=1`|
|`0x01`<br>`Six=1`|**`0x00000005`**<br>**`Data`**|**`0x00000005`**<br>**`Data`**|**`0x00000005`**<br>**`Data`**|**`0x00000005`**<br>**`Data`**||||


-----

Receive KNXnet/IP routing:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0530 0x0014 0x29 0x00
(Header (Ver.) (ROUTING_INDICATI (Total Length) L_data. Additio
- ON) ind nal
Length) Info
 bc b0 11 e8 12 34 04 00 80 56 78 9a

```
Receive KNX telegram:

BC 11 E8 12 34 C4 00 80 56 78 9A :6C

CC

Receive Tunnelling Request: L_DATA.conf 2e 00 bc c0 11 e8 12 34 04 00 80 56 78 9a

Close Connection

**Cleanup: none**

###### 6.1.8 Mixed Case 2
**Function ID: 30202**

**Description: This test verifies the standard behaviour by sending a valid tunnelling request message**
over a local Falcon KNX connection, while a KNX Link Layer Tunnelling Connection is open. The
Falcon KNX message contains an L_Data.req service with fixed data.

**Expectation: The telegram must be received both over KNXnet/IP routing and the KNX Tunnelling**
connection.

**Parameters: Falcon connection parameters**

**Preparation: none**

**Test sequence:**

Send TunnellingConnection Request

Send KNX telegram

BC 11 FD 12 34 C4 00 80 56 78 9A :79

CC

Expected Answer:

Receive Tunnelling Request: L_DATA.ind 29 00 bc c0 11 fd 12 34 04 00 80 56 78 9a

Receive KNXnet/IP routing:
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0530 0x0014 0x29 0x00
(Header (Ver.) (ROUTING_INDICATI (Total Length) L_data. Additio
- ON) ind nal
Length) Info
 bc b0 11 fd 12 34 04 00 80 56 78 9a

```
Close Connection

**Cleanup: none**

|Receive KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc b0 11 e8 12 34 04 00 80 56 78 9a`|` bc b0 11 e8 12 34 04 00 80 56 78 9a`|` bc b0 11 e8 12 34 04 00 80 56 78 9a`|` bc b0 11 e8 12 34 04 00 80 56 78 9a`|` bc b0 11 e8 12 34 04 00 80 56 78 9a`|` bc b0 11 e8 12 34 04 00 80 56 78 9a`|

|Receive KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|` bc b0 11 fd 12 34 04 00 80 56 78 9a`|


-----

###### 6.1.9 Mixed Case 3
**Function ID: 30203**

**Description: This test verifies the standard behaviour by sending a valid tunnelling request message**
over KNXnet/IP routing, while a KNX Link Layer Tunnelling Connection and a Falcon KNX
connection is open. The KNXnet/IP routing message contains an L_Data.ind service with fixed data.

**Expectation: The telegram must be received both over the local Falcon KNX connection and the**
KNX Tunnelling connection.

**Parameters: Falcon connection parameters**

**Preparation: none**

**Test sequence:**

Send TunnellingConnection Request

Send KNXnet/IP routing:
```
UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0530 0x0014 0x29 0x00
(Header (Ver.) (ROUTING_INDICATI (Total Length) L_data. Additio
- ON) ind nal
Length) Info
 bc c0 00 00 12 34 04 00 80 56 78 9a

```
Expected Answer:

Receive Tunnelling Request: L_DATA.ind 29 00 bc b0 00 00 12 34 04 00 80 56 78 9a

Receive KNX telegram

BC 00 00 12 34 B4 00 80 56 78 9A :E5

CC

Close Connection

**Cleanup: none**

##### 6.2 Routing Lost Message

###### 6.2.1 Standard Case
**Function ID: 40101**

**Description: This test verifies the standard behaviour by sending a large number of KNXnet/IP**
routing indications in a short period of time, stopping if a routing lost message indication has been
received.

**Expectation: After a certain number of routing indications, the test device will loose one or more**
telegrams and transmit a Routing Lost Message Indication.

**Parameters: Max. number of Routing Indications to transmit (Type = Integer, Default = 1000 ), Wait**
time in milliseconds if no lost message indication has been received (Type = Integer, Default = 10),
Falcon connection parameters

**Preparation: none**

|Send KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|` bc c0 00 00 12 34 04 00 80 56 78 9a`|


-----

**Test sequence:**

Send in short period of time n KNXnet/IP routing:
```
UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0530 0x0014 0x29 0x00
(Header (Ver.) (ROUTING_INDICATI (Total Length) L_data. Additio
- ON) ind nal
Length) Info
 bc c0 00 00 12 34 04 00 80 56 ss ss
(ss ss = a sequencecounter start with 0, increment per 1)

```
Expected Answer:

Receive n-1 KNX telegrams

BC 00 00 12 34 B4 00 80 56 00 00

CC

BC 00 00 12 34 B4 00 80 56 00 01

CC

…

BC 00 00 12 34 B4 00 80 56 n-1

CC

Receive Routing Lost Message
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0531 0x000A 0x04 0x00
(Header (Ver.) (ROUTING_LOST_MES (Total Length) structu device
- SAGE) re state
Length) length
 0x0001
Number of lost
messages

```
**Cleanup: none**

###### 6.2.2 Continuous overflow
**Function ID: 40102**

**Description: This test verifies the standard behaviour by sending a large number of KNXnet/IP**
routing indications in a short period of time. Unlike the previous test, the tool does not stop sending
after receiving the routing lost message.

**Expectation: After a certain number of routing indications, the test device might loose one or more**
telegrams and transmit Routing Lost Message Indications. The added number of lost and routed
messages should be the total number of messages transmitted. The time between subsequent lost
message indications should be about one second.

**Parameters: Max. number of Routing Indications to transmit (Type = Integer, Default = 1000), Wait**
time in milliseconds if no lost message indication has been received (Type = Integer, Default = 10),
Falcon connection parameters

**Preparation: none**

|Send in short period of time n KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter start with 0, increment per 1)`|

|Receive Routing Lost Message|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0531`<br>`(ROUTING_LOST_MES`<br>`SAGE)`|`0x000A`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`0x00`<br>`device`<br>`state`|
|` 0x0001`<br>`Number of lost`<br>`messages`|` 0x0001`<br>`Number of lost`<br>`messages`|||||


-----

**Test sequence:**

Send in a short period of time m * n KNXnet/IP routing:
```
UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0530 0x0014
(Header (Ver.) (ROUTING_INDICATI
- ON)
Length)
 bc c0 00 00 12 34 04 00 80 56 ss ss
(ss ss = a sequencecounter (start with 0, increment per 1)

```
Expected Answer:

Receive m*(n-1) KNX telegrams, m = 1

BC 00 00 12 34 B4 00 80 56 00 00

CC

BC 00 00 12 34 B4 00 80 56 00 01

CC

…

BC 00 00 12 34 B4 00 80 56 m*(n-1)

CC

Receive Routing Lost Message
```
UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)
0x06 0x10 0x0531 0x000A
(Header (Ver.) (ROUTING_LOST_MES
- SAGE)
Length)
 0x0001
Number of lost
messages

```
Receive m*(n-1) KNX telegrams, m = 2

BC 00 00 12 34 B4 00 80 56 m*n + 0

CC

BC 00 00 12 34 B4 00 80 56 m*n + 1

CC

…

BC 00 00 12 34 B4 00 80 56 m*n - nL

CC

|Send in a short period of time m * n KNXnet/IP routing:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_TC, CPORT_TC, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATI`<br>`ON)`|`0x0014`<br>`(Total Length)`|`0x29`<br>`L_data.`<br>`ind`|`0x00`<br>`Additio`<br>`nal`<br>`Info`|
|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter (start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter (start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter (start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter (start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter (start with 0, increment per 1)`|` bc c0 00 00 12 34 04 00 80 56 ss ss`<br>`(ss ss = a sequencecounter (start with 0, increment per 1)`|

|Receive Routing Lost Message|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0531`<br>`(ROUTING_LOST_MES`<br>`SAGE)`|`0x000A`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`0x00`<br>`device`<br>`state`|
|` 0x0001`<br>`Number of lost`<br>`messages`|` 0x0001`<br>`Number of lost`<br>`messages`|||||


-----

|Receive Routing Lost Message|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|`UDP-frame (IP_BDUT, CPORT_BDUT, IP_ ROUTING, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`-`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0531`<br>`(ROUTING_LOST_MES`<br>`SAGE)`|`0x000A`<br>`(Total Length)`|`0x04`<br>`structu`<br>`re`<br>`length`|`0x00`<br>`device`<br>`state`|
|` nL`<br>`Number of lost`<br>`messages`|` nL`<br>`Number of lost`<br>`messages`|||||


**Cleanup: none**


-----

#### 7 Remote Diagnosis and Configuration

##### 7.1 General
This test subclass is concerned with KNX/IP Service Family “Remote Diagnosis And Configuration”
in general.

###### 7.1.1 Supported Service Family
**Function ID: 50101**

**Description: This test checks whether “Remote Diagnosis and Configuration” is contained in**
“Supported Service Families” reported by the target device via Discovery SEARCH_RESPONSE.

**Expectation: “Remote Diagnosis and Configuration” (Service Family 7, Version 1) is contained in**
“Supported Service Families” reported by the target device via Discovery SEARCH_RESPONSE.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends SEARCH_REQUEST:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0201 0x000E 0x08 0x01
(Header (Ver.) (SEARCH_REQUEST) (Total length) (Struct (IPV4_
Length) length) UDP)
IP_TC CPORT_TC

```
BDUT sends SEARCH_RESPONSE:
```
UDP frame (IP_BDUT : CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0202 0x0052
(Header (Ver.) (SEARCH_RESPONSE) (Total Length)
Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x36 0x01
(Struct (Device ...
Length) Info
       DIB)
0x0C 0x02 X X X X X X
(Struct (Supp
Length) Svc
       Fams
       DIB)
X X 0x07 0x01
             (Remote (V1)
             Diag
             And
             Config)

```
**Cleanup: None.**

**Remark: for this test, it is only relevant that the BDUT sends a search response at least indicating**
support of remote diagnostics and configuration (all other supported service families are irrelevant).

|TC sends SEARCH_REQUEST:|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0201`<br>`(SEARCH_REQUEST)`|`0x000E`<br>`(Total length)`|`0x08`<br>`(Struct`<br>`length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|
|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|||

|BDUT sends SEARCH_RESPONSE:|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT : CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT : CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0202`<br>`(SEARCH_RESPONSE)`|`0x0202`<br>`(SEARCH_RESPONSE)`|`0x0052`<br>`(Total Length)`|`0x0052`<br>`(Total Length)`|||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(Device`<br>`Info`<br>`DIB)`|`...`|`...`|`...`|`...`|||
|`0x0C`<br>`(Struct`<br>`Length)`|`0x02`<br>`(Supp`<br>`Svc`<br>`Fams`<br>`DIB)`|`X `|`X `|`X `|`X `|`X `|`X `|
|`X `|`X `|**`0x07`**<br>**`(Remote`**<br>**`Diag`**<br>**`And`**<br>**`Config)`**|`0x01`<br>`(V1)`|||||


-----

###### 7.1.2 Illegal Service Code
**Function ID: 50102**

**Description: This test sends a RemoteDiagAndConfig datagram with an illegal Service Code, i.e. a**
KNX/IP datagram with undefined Service Code in the range 0740h...07FFh (these are reserved for
RemoteDiagAndConfig; 0744h…07FFh are undefined). The test datagram is constructed by
modifying the KNX/IP Service Code of a REMOTE_DIAGNOSTIC_REQUEST datagram selecting
the target device by MAC address.

**Expectation: Target device ignores this invalid datagram, and sends no response.**

**Parameters: Illegal Service Code (Type = String, Default = 0x0744).**

**Preparation: None.**

**Test sequence:**

TC sends RemoteDiagAndConfig datagram with illegal ServiceCode:
```
UDP frame (IP_TC : CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0744 0x0016
(Header (Ver.) (illegal (Total Length)
Length) Service Code)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)

```
BDUT sends no response.

**Cleanup: None.**

|TC sends RemoteDiagAndConfig datagram with illegal ServiceCode:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_TC : CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC : CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC : CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC : CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC : CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|**`0x0744`**<br>**`(illegal`**<br>**`Service Code)`**|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|


-----

###### 7.1.3 Illegal Header Length
**Function ID: 50103**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST with illegal KNX/IP Header**
Length (not 0x06). The test datagram is constructed by modifying the Header Length value in the
KNX/IP header of a REMOTE_DIAGNOSTIC_REQUEST datagram selecting the target device by
MAC address.

**Expectation: Target device ignores this invalid datagram, and sends no response.**

**Parameters: Illegal Header Length (Type = Byte, Default = 0x05).**

**Preparation: None.**

**Test sequence:**

TC sends RemoteDiagAndConfig with illegal HeaderLength:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x05 0x10 0x0740 0x0016
(illegal (Ver.) (REMOTE_ (Total Length)
Header DIAG_REQUEST)
Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)

```
BDUT sends no response.

**Cleanup: None.**

|TC sends RemoteDiagAndConfig with illegal HeaderLength:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|**`0x05`**<br>**`(illegal`**<br>**`Header`**<br>**`Length)`**|`0x10`<br>`(Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|


-----

###### 7.1.4 Illegal Protocol Version
**Function ID: 50104**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST with illegal KNX/IP Protocol**
Version (not 0x10). The test datagram is constructed by modifying the Protocol Version value in the
KNX/IP header of a REMOTE_DIAGNOSTIC_REQUEST datagram selecting the target device by
MAC address.

**Expectation: Target device ignores this invalid datagram, and sends no response.**

**Parameters: Illegal Protocol Version (Type = Byte, Default = 0x11).**

**Preparation: None.**

**Test sequence:**

TC sends RemoteDiagAndConfig with illegal HeaderLength:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x11 0x0740 0x0016
(Header (illegal (REMOTE_ (Total Length)
Length) Version) DIAG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)

```
BDUT sends no response.

**Cleanup: None.**

|TC sends RemoteDiagAndConfig with illegal HeaderLength:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|**`0x11`**<br>**`(illegal`**<br>**`Version)`**|<br> <br>`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|


-----

##### 7.2 REMOTE_DIAGNOSTIC_REQUEST
This test subclass sends REMOTE_DIAGNOSTIC_REQUEST datagrams.

Unless specified otherwise, the TC sends these test datagrams with MAC SELECTOR to the BDUT.

###### 7.2.1 Illegal Total Length
**Function ID: 50201**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST with illegal KNX/IP Total**
Length. The test datagram is constructed by modifying the Total Length value in the KNX/IP header
of a REMOTE_DIAGNOSTIC_REQUEST datagram.

**Expectation: Target device ignores this invalid datagram, and sends no response.**

**Parameters: Illegal Total Length (Type = String, Default = 0x0018).**

**Preparation: None.**

**Test sequence:**

TC sends REMOTE_DIAGNOSTIC_REQUEST with illegal TotalLength:
```
UDP frame (IP_, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0740 0x0018
(Header (Ver.) (REMOTE_ (illegal
Length) DIAG_REQUEST) Total Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)

```
BDUT sends no response.

**Cleanup: None.**

|TC sends REMOTE_DIAGNOSTIC_REQUEST with illegal TotalLength:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|**`0x0018`**<br>**`(illegal`**<br>**`Total Length)`**||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|


-----

###### 7.2.2 Missing HPAI
**Function ID: 50202**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST without Discovery Endpoint**
HPAI. The test datagram is constructed by omitting the HPAI field in a
REMOTE_DIAGNOSTIC_REQUEST datagram.

**Expectation: Target device ignores this invalid datagram, and sends no response.**

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends REMOTE_DIAGNOSTIC_REQUEST without HPAI:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0740 0x000E
(Header (Ver.) (REMOTE_ (Total Length)
Length) DIAG_REQUEST)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)

```
BDUT sends no response.

**Cleanup: None.**

###### 7.2.3 Missing Selector
**Function ID: 50203**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST without SELECTOR. The test**
datagram is constructed by omitting the SELECTOR field in a REMOTE_DIAGNOSTIC_REQUEST
datagram.

**Expectation: Target device ignores this invalid datagram, and sends no response.**

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends REMOTE_DIAGNOSTIC_REQUEST without SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0740 0x000E
(Header (Ver.) (REMOTE_ (Total Length)
Length) DIAG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)

```
BDUT sends no response.

**Cleanup: None.**

|TC sends REMOTE_DIAGNOSTIC_REQUEST without HPAI:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x000E`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|

|TC sends REMOTE_DIAGNOSTIC_REQUEST without SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x000E`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|


-----

###### 7.2.4 Illegal Selector
**Function ID: 50204**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST with illegal SELECTOR. The test**
datagram is constructed by modifying the Selection Code (2nd byte) value in a PrgMode SELECTOR
(without MAC address field) or MAC SELECTOR (with MAC address field) in a
REMOTE_DIAGNOSTIC_REQUEST datagram.

**Expectation: Target device ignores these invalid datagrams, and sends no response.**

**Parameters: Illegal Selection Code (Type = Byte, Default = 0x00).**

**Preparation: None.**

**Test sequence:**

TC sends REMOTE_DIAGNOSTIC_REQUEST with illegal PrgMode SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0740 0x0010
(Header (Ver.) (REMOTE_ (Total Length)
Length) DIAG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x02 0x00
(Struct (ill.
Length) Sel.)

```
BDUT sends no response.

TC sends REMOTE_DIAGNOSTIC_REQUEST with illegal MAC SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0740 0x0016
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x00 MAC_BDUT
(Struct (ill.
Length) Sel.)

```
BDUT sends no response.

**Cleanup: None.**

|TC sends REMOTE_DIAGNOSTIC_REQUEST with illegal PrgMode SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x02`<br>`(Struct`<br>`Length)`|**`0x00`**<br>**`(ill.`**<br>**`Sel.)`**||||

|TC sends REMOTE_DIAGNOSTIC_REQUEST with illegal MAC SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|**`0x00`**<br>**`(ill.`**<br>**`Sel.)`**|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|


-----

###### 7.2.5 Selection by Programming Mode
**Function ID: 50205**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST with PrgMode SELECTOR.**
First, BDUT is set to PrgMode=1 via KNX/IP Device Management, then TC sends
REMOTE_DIAGNOSTIC_REQUEST with PrgMode SELECTOR, then BDUT is set to PrgMode=0
via KNX/IP Device Management, then TC sends REMOTE_DIAGNOSTIC_REQUEST with
PrgMode SELECTOR.

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE if and only if it is**
in Programming Mode.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sets BDUT to PrgMode=1 via KNX/IP Device Management.

|TC sends REMOTE_DIAGNOSTIC_REQUEST with PrgMode SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x02`<br>`(Struct`<br>`Length)`|`0x01`<br>`(PrgMode`<br>`Sel.)`||||

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with PrgMode SELECTOR and all of its supported DIBs:|Col2|Col3|Col4|
|---|---|---|---|
|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|


-----

TC sets BDUT to PrgMode=0 via KNX/IP Device Management.

TC sends REMOTE_DIAGNOSTIC_REQUEST with PrgMode SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0740 0x0010
(Header Ver.) (REMOTE_
Length) DIAG_REQUEST)
0x08 0x01 IP_TC
(Struct (IPV4_
Length) UDP)
0x02 0x01
(Struct (PrgMode
Length) Sel.)

```
BDUT sends no response.

**Cleanup: None.**

|TC sends REMOTE_DIAGNOSTIC_REQUEST with PrgMode SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x02`<br>`(Struct`<br>`Length)`|`0x01`<br>`(PrgMode`<br>`Sel.)`||||


-----

###### 7.2.6 Selection by MAC Address
**Function ID: 50206**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST with MAC SELECTOR. First,**
TC sends REMOTE_DIAGNOSTIC_REQUEST with MAC SELECTOR with correct MAC Address,
then TC sends REMOTE_DIAGNOSTIC_REQUEST with MAC SELECTOR with wrong MAC
Address (obtained by inverting all bits).

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE if and only if its**
MAC address matches.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

|TC sends REMOTE_DIAGNOSTIC_REQUEST with MAC SELECTOR with correct MAC Address:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with MAC SELECTOR and all of its supported DIBs:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|`...`|


-----

|TC sends REMOTE_DIAGNOSTIC_REQUEST with MAC SELECTOR with wrong MAC Address:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`(wrong MAC Address)`|`(wrong MAC Address)`|`(wrong MAC Address)`|


BDUT sends no response.

**Cleanup: None.**


-----

###### 7.2.7 Request via Broadcast
**Function ID: 50207**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST via Broadcast (destination**
address 255.255.255.255 instead of multicast address 224.0.23.12).

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE.**

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends REMOTE_DIAGNOSTIC_REQUEST via Broadcast:
```
UDP frame (IP_TC, CPORT_TC -> 255.255.255.255, CPORT_BDUT)
0x06 0x10 0x0740 0x0016
(Header (Ver.) (REMOTE_ (Total Length)
Length) DIAG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)

```
BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE and all of its supported DIBs:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x36 0x01
(Struct (DeviceInfo ...
Length) DIB)
0xXX 0x02
(Struct (SuppSvcFams ...
Length) DIB)
...

```
**Cleanup: None.**

|UDP frame (IP_TC, CPORT_TC -> 255.255.255.255, CPORT_BDUT)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE and all of its supported DIBs:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|`...`|


-----

##### 7.3 REMOTE_DIAGNOSTIC_RESPONSE
This test subclass is concerned with REMOTE_DIAGNOSTIC_RESPONSE datagrams.

###### 7.3.1 Spontaneous REMOTE_DIAGNOSTIC_RESPONSE
**Function ID: 50301**

**Description: This test sends REMOTE_DIAGNOSTIC_RESPONSE to the Control Endpoint of the**
target device.

**Expectation: Target device ignores this, and sends no response.**

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends REMOTE_DIAGNOSTIC_RESPONSE to BDUT:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x36 0x01
(Struct (DeviceInfo ...
Length) DIB)
0x0C 0x02
(Struct (SuppSvcFams ...
Length) DIB)
...

```
BDUT sends no response.

**Cleanup: None.**

|TC sends REMOTE_DIAGNOSTIC_RESPONSE to BDUT:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|`...`|
|`0x0C`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|`...`|


-----

###### 7.3.2 Supported DIBs
**Function ID: 50302**

**Description: This test sends REMOTE_DIAGNOSTIC_REQUEST with MAC SELECTOR.**

**Expectation: Target device responds with a REMOTE_DIAGNOSTIC_RESPONSE datagram**
containing all supported DIBs (mandatory: IpConfig, IpCurConfig, KnxAddresses[2]).

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends REMOTE_DIAGNOSTIC_REQUEST with MAC SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0740 0x0016
(Header (Ver.) (REMOTE_ (Total Length)
Length) DIAG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)

```
BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with MAC SELECTOR and all
of its supported DIBs:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x10 0x03
(Struct (IpConfig ...
Length) DIB)
0x14 0x04
(Struct (IpCurConfig ...
Length) DIB)
0xXX 0x05
(Struct (KnxAddresses ...
Length) DIB)
xxx xxx …

```
**Cleanup: None.**

2 Mandatory DIBs: subject to final approval by TF IP (currently 0413 pending).

|TC sends REMOTE_DIAGNOSTIC_REQUEST with MAC SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0740`<br>`(REMOTE_`<br>`DIAG_REQUEST)`|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with MAC SELECTOR and all of its supported DIBs:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|**`0x02`**<br>**`(MAC`**<br>**`Sel.)`**|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x10`<br>`(Struct`<br>`Length)`|**`0x03`**<br>**`(IpConfig`**<br>**`DIB)`**|`...`|`...`|`...`|
|`0x14`<br>`(Struct`<br>`Length)`|**`0x04`**<br>**`(IpCurConfig`**<br>**`DIB)`**|`...`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|**`0x05`**<br>**`(KnxAddresses`**<br>**`DIB)`**|<br>`...`|<br>`...`|<br>`...`|
|`xxx`|**`xxx`**|`… `|`… `|`… `|


-----

##### 7.4 REMOTE_BASIC_CONFIGURATION_REQUEST
This test subclass sends REMOTE_BASIC_CONFIGURATION_REQUEST datagrams.

Unless specified otherwise, the TC sends these test datagrams with MAC SELECTOR to the BDUT.

Unless specified otherwise, these test datagrams contain an IpConfig DIB as found in the response to a
previously sent REMOTE_DIAGNOSTIC_REQUEST.

In all tests here, the TC reads out the configuration via REMOTE_DIAGNOSTIC_REQUEST in the
preparation phase, and restores the old configuration via
REMOTE_BASIC_CONFIGURATION_REQUEST in the cleanup phase.

###### 7.4.1 Illegal Total Length
**Function ID: 50401**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with illegal**
KNX/IP Total Length. The test datagram is constructed by modifying the Total Length value in the
KNX/IP header of a REMOTE_BASIC_CONFIGURATION_REQUEST datagram.

**Expectation: Target device ignores this invalid datagram, and sends no response.**

**Parameters: Illegal Total Length (Type = String, Default = 0x0028).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with illegal TotalLength:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x0028
(Header (Ver.) (REMOTE_ (illegal
Length) CONFIG_REQUEST) Total Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x10 0x03
(Struct (IpConfig ...
Length) DIB)

```
BDUT sends no response.

**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with illegal TotalLength:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|**`0x0028`**<br>**`(illegal`**<br>**`Total Length)`**||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|


-----

###### 7.4.2 Missing HPAI
**Function ID: 50402**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST without Discovery**
Endpoint HPAI. The test datagram is constructed by omitting the HPAI field in a
REMOTE_BASIC_CONFIGURATION_REQUEST datagram.

**Expectation: Target device ignores this invalid datagram, and sends no response.**

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_DIAGNOSTIC_REQUEST without HPAI:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x001E
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x10 0x03
(Struct (IpConfig ...
Length) DIB)

```
BDUT sends no response.

**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_DIAGNOSTIC_REQUEST without HPAI:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x001E`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|


-----

###### 7.4.3 Missing Selector
**Function ID: 50403**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST without**
SELECTOR. The test datagram is constructed by omitting the SELECTOR field in a
REMOTE_BASIC_CONFIGURATION_REQUEST datagram.

**Expectation: Target device ignores this invalid datagram, and sends no response.**

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUESTwithout SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x001E
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x10 0x03
(Struct (IpConfig ...
Length) DIB)

```
BDUT sends no response.

**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUESTwithout SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x001E`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|


-----

###### 7.4.4 Illegal Selector
**Function ID: 50404**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with illegal**
SELECTOR. The test datagram is constructed by modifying the Selection Code (2nd byte) value in a
PrgMode SELECTOR (without MAC address field) or MAC SELECTOR (with MAC address field)
in a REMOTE_BASIC_CONFIGURATION_REQUEST datagram.

**Expectation: Target device ignores these invalid datagrams, and sends no response.**

**Parameters: Illegal Selection Code (Type = Byte, Default = 0x00).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with illegal PrgMode SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x0020
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x02 0x00
(Struct (ill.
Length) Sel.)
0x10 0x03
(Struct (IpConfig ...
Length) DIB)

```
BDUT sends no response.

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with illegal MAC SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x0026
(Header Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x00 MAC_BDUT
(Struct (ill.
Length) Sel.)
0x10 0x03
(Struct (IpConfig ...
Length) DIB)

```
BDUT sends no response.

**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with illegal PrgMode SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0020`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x02`<br>`(Struct`<br>`Length)`|**`0x00`**<br>**`(ill.`**<br>**`Sel.)`**||||
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with illegal MAC SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0026`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|**`0x00`**<br>**`(ill.`**<br>**`Sel.)`**|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|


-----

###### 7.4.5 Selection by Programming Mode
**Function ID: 50405**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with PrgMode**
SELECTOR. First, BDUT is set to PrgMode=1 via KNX/IP Device Management, then TC sends
REMOTE_BASIC_CONFIGURATION_REQUEST with PrgMode SELECTOR, then BDUT is set to
PrgMode=0 via KNX/IP Device Management, then TC sends
REMOTE_BASIC_CONFIGURATION_REQUEST with PrgMode SELECTOR.

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE if and only if it is**
in Programming Mode.

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sets BDUT to PrgMode=1 via KNX/IP Device Management.

|TC sends REMOTE_DIAGNOSTIC_REQUEST with PrgMode SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0020`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x02`<br>`(Struct`<br>`Length)`|`0x01`<br>`(PrgMode`<br>`Sel.)`||||
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with PrgMode SELECTOR and all supported DIBs:|Col2|Col3|Col4|
|---|---|---|---|
|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|


-----

TC sets BDUT to PrgMode=0 via KNX/IP Device Management.

TC sends REMOTE_DIAGNOSTIC_REQUEST with PrgMode SELECTOR:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0742 0x0020
(Header Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x02 0x01
(Struct (PrgMode
Length) Sel.)
0x10 0x03
(Struct (IpConfig ...
Length) DIB)

```
BDUT sends no response.

**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_DIAGNOSTIC_REQUEST with PrgMode SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0020`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x02`<br>`(Struct`<br>`Length)`|`0x01`<br>`(PrgMode`<br>`Sel.)`||||
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|


-----

###### 7.4.6 Selection by MAC Address
**Function ID: 50406**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with MAC**
SELECTOR. First, TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with MAC
SELECTOR with correct MAC Address, then TC sends
REMOTE_BASIC_CONFIGURATION_REQUEST with MAC SELECTOR with wrong MAC
Address (obtained by inverting all bits).

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE if and only if its**
MAC address matches.

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with MAC SELECTOR with correct MAC Address:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0026`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with MAC SELECTOR and all supported DIBs:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|`...`|


-----

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with MAC SELECTOR with wrong MAC Address:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0026`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`(wrong MAC Address)`|`(wrong MAC Address)`|`(wrong MAC Address)`|
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|


BDUT sends no response.

**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**


-----

###### 7.4.7 Missing DIB
**Function ID: 50407**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST without DIBs.**

**Expectation: Target device may or may not respond with REMOTE_DIAGNOSTIC_RESPONSE.**

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST without DIBs:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x0016
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)

```
BDUT may respond by sending REMOTE_DIAGNOSTIC_RESPONSE:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x36 0x01
(Struct (DeviceInfo ...
Length) DIB)
0xXX 0x02
(Struct (SuppSvcFams ...
Length) DIB)
...

```
**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST without DIBs:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0016`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|

|BDUT may respond by sending REMOTE_DIAGNOSTIC_RESPONSE:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|`...`|


-----

###### 7.4.8 Unknown DIB
**Function ID: 50408**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with a DIB of**
unknown type.

**Expectation: Target device may or may not respond with REMOTE_DIAGNOSTIC_RESPONSE.**

**Parameters: Unknown Description Type Code (Type = Byte, Default = 0x00).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with unknown DIB:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x0026
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x10 0x00
(Struct (unknown ...
Length) DIB)

```
BDUT may respond by sending REMOTE_DIAGNOSTIC_RESPONSE:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x36 0x01
(Struct (DeviceInfo ...
Length) DIB)
0xXX 0x02
(Struct (SuppSvcFams ...
Length) DIB)
...

```
**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with unknown DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0026`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x10`<br>`(Struct`<br>`Length)`|**`0x00`**<br>**`(unknown`**<br>**`DIB)`**|`...`|`...`|`...`|

|BDUT may respond by sending REMOTE_DIAGNOSTIC_RESPONSE:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|`...`|


-----

###### 7.4.9 Device Information DIB
**Note: this test can only be performed if the Device Information DIB is supported by the BDUT**

**Function ID: 50409**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with DeviceInfo**
DIB specifying new (inverted) PrgMode.

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE with DeviceInfo**
DIB specifying new PrgMode.

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new DeviceInfo DIB:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x004C
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x36 0x01
(Struct (DeviceInfo (new Programming Mode)
Length) DIB)

```
BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with new DeviceInfo DIB:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x36 0x01
(Struct (DeviceInfo (new Programming Mode)
Length) DIB)
0xXX 0x02
(Struct (SuppSvcFams ...
Length) DIB)
...

```
**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new DeviceInfo DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x004C`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|<br>**`(new Programming Mode)`**|<br>**`(new Programming Mode)`**|<br>**`(new Programming Mode)`**|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with new DeviceInfo DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|**`(new Programming Mode)`**|**`(new Programming Mode)`**|**`(new Programming Mode)`**|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|`...`|


-----

###### 7.4.10 Supported Service Families DIB
**Note: this test can only be performed if the Supported Service Families DIB is supported by the**
**BDUT**

**Function ID: 50410**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with new (empty)**
SupportedServiceFamilies DIB.

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE with old**
(unchangeable) SupportedServiceFamilies DIB.

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new (empty)
SupportedServiceFamilies DIB:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x0018
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x02 0x02
(Struct (SuppSvcFams
Length) DIB)

```
BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with old (unchanged)
SupportedServiceFamilies DIB:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x36 0x01
(Struct (DeviceInfo ...
Length) DIB)
0x0C 0x02
(Struct (SuppSvcFams (old Supported Service Families)
Length) DIB)
...

```
**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new (empty) SupportedServiceFamilies DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0018`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x02`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`||||

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with old (unchanged) SupportedServiceFamilies DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|`...`|
|`0x0C`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>**`(old Supported Service Families)`**|<br>**`(old Supported Service Families)`**|<br>**`(old Supported Service Families)`**|
|`...`|`...`|`...`|`...`|`...`|


-----

###### 7.4.11 IP Configuration DIB
**Function ID: 50411**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with IpConfig DIB**
specifying new IP Address.

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE with IpConfig**
DIB specifying new IP Address.

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new IpConfig DIB:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x0026
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x10 0x03
(Struct (IpConfig (new IP Address)
Length) DIB)

```
BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with new IpConfig DIB:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
...
0x10 0x03
(Struct (IpConfig (new IP Address)
Length) DIB)
...

```
**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new IpConfig DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0026`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>**`(new IP Address)`**|<br>**`(new IP Address)`**|<br>**`(new IP Address)`**|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with new IpConfig DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`...`|`...`|`...`|`...`|`...`|
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|**`(new IP Address)`**|**`(new IP Address)`**|**`(new IP Address)`**|
|`...`|`...`|`...`|`...`|`...`|


-----

###### 7.4.12 IP Current Configuration DIB
**Function ID: 50412**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with new (zero-**
valued) IpCurConfig DIB.

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE with old**
(unchangeable) IpCurConfig DIB.

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new IpCurConfig DIB:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x002A
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x14 0x04
(Struct (IpCurConfig (all values zero)
Length) DIB)

```
BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with old (unchanged)
IpCurConfig DIB:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
...
0x14 0x04
(Struct (IpCurConfig (old values)
Length) DIB)
...

```
**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new IpCurConfig DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x002A`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x14`<br>`(Struct`<br>`Length)`|`0x04`<br>`(IpCurConfig`<br>`DIB)`|<br>**`(all values zero)`**|<br>**`(all values zero)`**|<br>**`(all values zero)`**|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with old (unchanged) IpCurConfig DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|**`...`**|**`...`**|**`...`**|**`...`**|**`...`**|
|`0x14`<br>`(Struct`<br>`Length)`|`0x04`<br>`(IpCurConfig`<br>`DIB)`|<br>**`(old values)`**|<br>**`(old values)`**|<br>**`(old values)`**|
|`...`|`...`|`...`|`...`|`...`|


-----

###### 7.4.13 KNX Addresses DIB
**Function ID: 50413**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with KnxAddresses**
DIB specifying new (main) KNX Address, obtained by incrementing Line Address.

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE with**
KnxAddresses DIB specifying new KNX Address.

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new KnxAddresses DIB:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0742 0x00XX
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0xXX 0x05
(Struct (KnxAddresses (new KNX Address)
Length) DIB)

```
BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with new KnxAddresses DIB:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
...
0xXX 0x05
(Struct (KnxAddresses (new KNX Address)
Length) DIB)
...

```
**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_BASIC_CONFIGURATION_REQUEST with new KnxAddresses DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x05`<br>`(KnxAddresses`<br>`DIB)`|**`(new KNX Address)`**|**`(new KNX Address)`**|**`(new KNX Address)`**|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE with new KnxAddresses DIB:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`...`|`...`|`...`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x05`<br>`(KnxAddresses`<br>`DIB)`|<br>**`(new KNX Address)`**|<br>**`(new KNX Address)`**|<br>**`(new KNX Address)`**|
|`...`|`...`|`...`|`...`|`...`|


-----

###### 7.4.14 Request via Broadcast
**Function ID: 50415**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST via Broadcast**
(destination address 255.255.255.255 instead of multicast address 224.0.23.12).

**Expectation: Target device responds with REMOTE_DIAGNOSTIC_RESPONSE.**

**Parameters: None.**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_BASIC_CONFIGURATION_REQUEST via Broadcast:
```
UDP frame (IP_TC,CPORT_TC -> 255.255.255.255 : CPORT_BDUT)
0x06 0x10 0x0742 0x0026
(Header (Ver.) (REMOTE_ (Total Length)
Length) CONFIG_REQUEST)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x10 0x03
(Struct (IpConfig ...
Length) DIB)

```
BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE:
```
UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)
0x06 0x10 0x0741 0x00XX
(Header Ver.) (REMOTE_ (Total Length)
Length) DIAG_RESPONSE)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x36 0x01
(Struct (DeviceInfo ...
Length) DIB)
0xXX 0x02
(Struct (SuppSvcFams ...
Length) DIB)
...

```
**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|UDP frame (IP_TC,CPORT_TC -> 255.255.255.255 : CPORT_BDUT)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0742`<br>`(REMOTE_`<br>`CONFIG_REQUEST)`|`0x0026`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`CPORT_TC`|
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x10`<br>`(Struct`<br>`Length)`|`0x03`<br>`(IpConfig`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|

|BDUT responds by sending REMOTE_DIAGNOSTIC_RESPONSE:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|<br>`UDP frame (IP_BDUT, CPORT_BDUT, IP_TC, CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0741`<br>`(REMOTE_`<br>`DIAG_RESPONSE)`|`0x00XX`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(DeviceInfo`<br>`DIB)`|`...`|`...`|`...`|
|`0xXX`<br>`(Struct`<br>`Length)`|`0x02`<br>`(SuppSvcFams`<br>`DIB)`|<br>`...`|<br>`...`|<br>`...`|
|`...`|`...`|`...`|`...`|`...`|


-----

##### 7.5 REMOTE_RESET_REQUEST
This test subclass sends REMOTE_RESET_REQUEST datagrams.

Unless specified otherwise, the TC sends these test datagrams with MAC SELECTOR to the BDUT.

Unless specified otherwise, these test datagrams specify Restart (Reset Mode = Soft).

The BDUT should react here by performing the restart, without sending a response.

The TC tests this behavior by sending REMOTE_DIAGNOSTIC_REQUEST (with MAC
SELECTOR) shortly after the REMOTE_RESET_REQUEST. Receiving
REMOTE_DIAGNOSTIC_RESPONSE from the BDUT here means failure, as we expect that during
a certain “dead time” (restarting phase) the BDUT will not respond.

In the cleanup phase, the TC repeatedly (every second) sends REMOTE_DIAGNOSTIC_REQUEST
until the BDUT responds with REMOTE_DIAGNOSTIC_RESPONSE. If nothing happens after some
time (configurable, default = 3 minutes), then the test will be aborted with fatal error message.

In all tests here, the TC reads out the configuration via REMOTE_DIAGNOSTIC_REQUEST in the
preparation phase, and restores the old configuration via
REMOTE_BASIC_CONFIGURATION_REQUEST at the end of the cleanup phase.

###### 7.5.1 Illegal Total Length
**Function ID: 50501**

**Description: This test sends REMOTE_RESET_REQUEST with illegal KNX/IP Total Length. The**
test datagram is constructed by modifying the Total Length value in the KNX/IP header of a
REMOTE_RESET_REQUEST datagram.

**Expectation: Target device ignores this invalid datagram, and does not restart.**

**Parameters: Illegal Total Length (Type = String, Default = 0x0012); Max Dead Time / s (Type =**
Integer, Default = 180).

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_RESET_REQUEST with illegal TotalLength:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x0012
(Header (Ver.) (REMOTE_ (illegal
Length) RESET_REQUEST) Total Length)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT does not restart, and responds to subsequent REMOTE_DIAGNOSTIC_REQUEST.

**Cleanup: TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds, then**
restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.

|TC sends REMOTE_RESET_REQUEST with illegal TotalLength:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|**`0x0012`**<br>**`(illegal`**<br>**`Total Length)`**||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`||||


-----

###### 7.5.2 Missing Selector
**Function ID: 50502**

**Description: This test sends REMOTE_RESET_REQUEST without SELECTOR. The test datagram**
is constructed by omitting the SELECTOR field in a REMOTE_RESET_REQUEST datagram.

**Expectation: Target device ignores this invalid datagram, and does not restart.**

**Parameters: Max Dead Time / s (Type = Integer, Default = 180).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_RESET_REQUESTwithout SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x0008
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x01 0x00
(Restart) (reserved)

```
BDUT does not restart, and responds to subsequent REMOTE_DIAGNOSTIC_REQUEST.

**Cleanup: TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds, then**
restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.

|TC sends REMOTE_RESET_REQUESTwithout SELECTOR:|Col2|Col3|Col4|
|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x0008`<br>`(Total Length)`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`|`0x00`<br>`(reserved)`|`0x00`<br>`(reserved)`|


-----

###### 7.5.3 Illegal Selector
**Function ID: 50503**

**Description: This test sends REMOTE_RESET_REQUEST with illegal SELECTOR. The test**
datagram is constructed by modifying the Selection Code (2nd byte) value in a PrgMode SELECTOR
(without MAC address field) or MAC SELECTOR (with MAC address field) in a
REMOTE_RESET_REQUEST datagram.

**Expectation: Target device ignores this invalid datagram, and does not restart.**

**Parameters: Illegal Selection Code (Type = Byte, Default = 0x00); Max Dead Time / s (Type =**
Integer, Default = 180).

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

TC sends REMOTE_RESET_REQUEST with illegal PrgMode SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x000A
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x02 0x00
(Struct (ill.
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT does not restart, and responds to subsequent REMOTE_DIAGNOSTIC_REQUEST.

TC sends REMOTE_RESET_REQUEST with illegal MAC SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x0010
(Header Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x08 0x00 MAC_BDUT
(Struct (ill.
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT does not restart.

**Cleanup: TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds, then**
restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.

|TC sends REMOTE_RESET_REQUEST with illegal PrgMode SELECTOR:|Col2|Col3|Col4|
|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x000A`<br>`(Total Length)`|
|`0x02`<br>`(Struct`<br>`Length)`|**`0x00`**<br>**`(ill.`**<br>**`Sel.)`**|**`0x00`**<br>**`(ill.`**<br>**`Sel.)`**|**`0x00`**<br>**`(ill.`**<br>**`Sel.)`**|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`|`0x00`<br>`(reserved)`|`0x00`<br>`(reserved)`|

|TC sends REMOTE_RESET_REQUEST with illegal MAC SELECTOR:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|**`0x00`**<br>**`(ill.`**<br>**`Sel.)`**|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`||||


-----

###### 7.5.4 Selection by Programming Mode
**Function ID: 50504**

**Description: This test sends REMOTE_RESET_REQUEST with PrgMode SELECTOR. First, BDUT**
is set to PrgMode=1 via KNX/IP Device Management, then TC sends REMOTE_RESET_REQUEST
with PrgMode SELECTOR, then BDUT is set to PrgMode=0 via KNX/IP Device Management, then
TC sends REMOTE_RESET_REQUEST with PrgMode SELECTOR.

**Expectation: Target device restarts if and only if it is in Programming Mode.**

**Parameters: Max Dead Time / s (Type = Integer, Default = 180).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sets BDUT to PrgMode=1 via KNX/IP Device Management.

TC sends REMOTE_RESET_REQUEST with PrgMode SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x000A
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x02 0x01
(Struct (PrgMode
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT restarts, and does not respond to subsequent REMOTE_DIAGNOSTIC_REQUEST.

TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds.

TC sets BDUT to PrgMode=0 via KNX/IP Device Management.

TC sends REMOTE_RESET_REQUEST with PrgMode SELECTOR:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x000A
(Header Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x02 0x01
(Struct (PrgMode
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT does not restart, and responds to subsequent REMOTE_DIAGNOSTIC_REQUEST.

**Cleanup: TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds, then**
restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.

|TC sends REMOTE_RESET_REQUEST with PrgMode SELECTOR:|Col2|Col3|Col4|
|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x000A`<br>`(Total Length)`|
|`0x02`<br>`(Struct`<br>`Length)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`|`0x00`<br>`(reserved)`|`0x00`<br>`(reserved)`|

|TC sends REMOTE_RESET_REQUEST with PrgMode SELECTOR:|Col2|Col3|Col4|
|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x000A`<br>`(Total Length)`|
|`0x02`<br>`(Struct`<br>`Length)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|`0x01`<br>`(PrgMode`<br>`Sel.)`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`|`0x00`<br>`(reserved)`|`0x00`<br>`(reserved)`|


-----

###### 7.5.5 Selection by MAC Address
**Function ID: 50505**

**Description: This test sends REMOTE_RESET_REQUEST with MAC SELECTOR. First, TC sends**
REMOTE_RESET_REQUEST with MAC SELECTOR with correct MAC Address, then TC sends
REMOTE_RESET_REQUEST with MAC SELECTOR with wrong MAC Address (obtained by
inverting all bits).

**Expectation: Target device restarts if and only if its MAC address matches.**

**Parameters: Max Dead Time / s (Type = Integer, Default = 180).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_RESET_REQUEST with MAC SELECTOR with correct MAC address:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x0010
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT restarts, and does not respond to subsequent REMOTE_DIAGNOSTIC_REQUEST.

TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds.

TC sends REMOTE_RESET_REQUEST with MAC SELECTOR with wrong MAC address:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x0010
(Header Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x08 0x02 (wrong MAC address)
(Struct (MAC
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT does not restart, and responds to subsequent REMOTE_DIAGNOSTIC_REQUEST.

**Cleanup: TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds, then**
restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.

|TC sends REMOTE_RESET_REQUEST with MAC SELECTOR with correct MAC address:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`||||

|TC sends REMOTE_RESET_REQUEST with MAC SELECTOR with wrong MAC address:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`(wrong MAC address)`|`(wrong MAC address)`|`(wrong MAC address)`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`||||


-----

###### 7.5.6 Missing Reset Mode
**Function ID: 50506**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST without Reset**
Mode (including reserved byte).

**Expectation: Target device ignores this invalid datagram, and does not restart.**

**Parameters: Max Dead Time / s (Type = Integer, Default = 180).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

TC sends REMOTE_RESET_REQUEST without ResetMode:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x000E
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)

```
BDUT does not restart, and responds to subsequent REMOTE_DIAGNOSTIC_REQUEST.

**Cleanup: TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds, then**
restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.

|TC sends REMOTE_RESET_REQUEST without ResetMode:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x000E`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|


-----

###### 7.5.7 Unknown Reset Mode
**Function ID: 50507**

**Description: This test sends REMOTE_BASIC_CONFIGURATION_REQUEST with unknown**
Reset Mode (value of first byte after SELECTOR).

**Expectation: Target device ignores this invalid datagram, and does not restart.**

**Parameters: Unknown Reset Mode (Type = Byte, Default = 0x00); Max Dead Time / s (Type =**
Integer, Default = 180).

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

TC sends REMOTE_RESET_REQUEST with unknown ResetMode:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x0010
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x00 0x00
(unknown (reserved)
ResetMode)

```
BDUT does not restart, and responds to subsequent REMOTE_DIAGNOSTIC_REQUEST.

**Cleanup: TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds, then**
restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.

|TC sends REMOTE_RESET_REQUEST with unknown ResetMode:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x00`<br>`(unknown`<br>`ResetMode)`|<br>`0x00`<br>`(reserved)`||||


-----

###### 7.5.8 Soft Reset
**Function ID: 50508**

**Description: This test sends REMOTE_RESET_REQUEST with Reset Mode = Soft = Restart.**

**Expectation: Target device restarts, and afterwards has same IP configuration as before.**

**Parameters: Max Dead Time / s (Type = Integer, Default = 180).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_RESET_REQUEST with MAC SELECTOR with correct MAC address:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x0010
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT restarts, and does not respond to subsequent REMOTE_DIAGNOSTIC_REQUEST.

TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds.

TC compares new and old IpConfig DIB from REMOTE_DIAGNOSTIC_RESPONSE.

**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|TC sends REMOTE_RESET_REQUEST with MAC SELECTOR with correct MAC address:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`||||


-----

###### 7.5.9 Hard Reset
**CAUTION!**

This test may abort the whole test run with fatal error.

Paradoxically this normally means success (i.e. Hard Rest was really executed), as the Hard Reset may
produce an IP configuration making the BDUT inaccessible for the TC, so that the old configuration
cannot be restored automatically. In this case, the old configuration must be restored manually
(typically by ETS download via bus).

Automatically restoring the old configuration typically requires presence of a DHCP server in the IP
subnet of the BDUT.

**Function ID: 50509**

**Description: This test sends REMOTE_RESET_REQUEST with Reset Mode = Hard = MasterReset.**

**Expectation: Target device restarts, and afterwards has a changed IP configuration.**

**Parameters: Max Dead Time / s (Type = Integer, Default = 180).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_RESET_REQUEST with ResetMode = Hard:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x0010
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x02 0x00
(Master (reserved)
Reset)

```
BDUT restarts, and does not respond to subsequent REMOTE_DIAGNOSTIC_REQUEST.

TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds.

TC compares new and old IpConfig DIB from REMOTE_DIAGNOSTIC_RESPONSE.

TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.

TC sends REMOTE_RESET_REQUEST with ResetMode = Soft:
```
UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)
0x06 0x10 0x0743 0x0010
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT restarts.

**Cleanup: TC sends repeatedly REMOTE_DIAGNOSTIC_REQUEST until BDUT responds, then**
restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.

|TC sends REMOTE_RESET_REQUEST with ResetMode = Hard:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x02`<br>`(Master`<br>`Reset)`|`0x00`<br>`(reserved)`||||

|TC sends REMOTE_RESET_REQUEST with ResetMode = Soft:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|<br>`UDP frame (IP_TC, CPORT_TC, IP_BDUT, CPORT_BDUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`||||


-----

###### 7.5.10 Request via Broadcast
**Function ID: 50510**

**Description: This test sends REMOTE_RESET_REQUEST via Broadcast (destination address**
255.255.255.255 instead of multicast address 224.0.23.12).

**Expectation: Target device restarts.**

**Parameters: Max Dead Time / s (Type = Integer, Default = 180).**

**Preparation: TC reads configuration via REMOTE_DIAGNOSTIC_REQUEST.**

**Test sequence:**

TC sends REMOTE_RESET_REQUEST via Broadcast:
```
UDP frame (IP_TC, CPORT_TC -> 255.255.255.255, CPORT_BDUT)
0x06 0x10 0x0743 0x0010
(Header (Ver.) (REMOTE_ (Total Length)
Length) RESET_REQUEST)
0x08 0x02 MAC_BDUT
(Struct (MAC
Length) Sel.)
0x01 0x00
(Restart) (reserved)

```
BDUT restarts, and does not respond to subsequent REMOTE_DIAGNOSTIC_REQUEST.

**Cleanup: TC restores old configuration via REMOTE_BASIC_CONFIGURATION_REQUEST.**

|UDP frame (IP_TC, CPORT_TC -> 255.255.255.255, CPORT_BDUT)|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0743`<br>`(REMOTE_`<br>`RESET_REQUEST)`|`0x0010`<br>`(Total Length)`||
|`0x08`<br>`(Struct`<br>`Length)`|`0x02`<br>`(MAC`<br>`Sel.)`|`MAC_BDUT`|`MAC_BDUT`|`MAC_BDUT`|
|`0x01`<br>`(Restart)`|`0x00`<br>`(reserved)`||||


-----

#### 8 IP as KNX Medium

##### 8.1 General
This test subclass is for KNX IP(-only) end devices of the new mask version 57B0 (System B for IP).

##### 8.2 KNX-IP device detection
These tests verify that KNX-IP devices (currently specified with mask versions 5705h or 57B0h)
correctly identify themselves when discovered using KNXnet/IP Search and Self-Description services,
so that a Management Client can use this information to filter out the different types of KNXnet/IP
and KNX-IP devices that are responding the these KNXnet/IP Core services.

###### 8.2.1 Detection of KNX IP end devices
**Function ID: 60101**

**Description: This test checks SEARCH_RESPONSE for KNX-IP end devices.**

**Expectation: SEARCH_RESPONSE reports KnxMedium=0x20(=IP) and no support of Routing.**

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends SEARCH_REQUEST (see Error! Reference source not found.).

DUT sends SEARCH_RESPONSE (see Error! Reference source not found.):
```
UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)
0x06 0x10 0x0202 0x0052
(Header (Ver.) (SEARCH_ (Total
Length) RESPONSE) Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x36 0x01
(Struct (Device ...
Length) Info
       DIB)
0x36 0x01 0x20
(Struct (Device (Medium) ...
Length) Info
       DIB)
0x0C 0x02 0x02 0x01 0x03 0x02 0x04 0x01
(Struct (Supp (Core) (V1) (Dev (V2) (Tunn) (V1)
Length) Svc Mgt)
       Fams
       DIB)
0x07 0x01
(Remote (V1)
Diag
And
Config)

```
**Cleanup: None.**

|DUT sends SEARCH_RESPONSE (see Error! Reference source not found.):|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0202`<br>`(SEARCH_`<br>`RESPONSE)`|`0x0202`<br>`(SEARCH_`<br>`RESPONSE)`|`0x0052`<br>`(Total`<br>`Length)`|`0x0052`<br>`(Total`<br>`Length)`|||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(Device`<br>`Info`<br>`DIB)`|`...`|`...`|`...`|`...`|||
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(Device`<br>`Info`<br>`DIB)`|**`0x20`**<br>**`(Medium)`**|`...`|`...`|`...`|`...`|`...`|
|`0x0C`<br>`(Struct`<br>`Length)`|`0x02`<br>`(Supp`<br>`Svc`<br>`Fams`<br>`DIB)`|`0x02`<br>`(Core)`|`0x01`<br>`(V1)`|`0x03`<br>`(Dev`<br>`Mgt)`|`0x02`<br>`(V2)`|`0x04`<br>`(Tunn)`|`0x01`<br>`(V1)`|
|`0x07`<br>`(Remote`<br>`Diag`<br>`And`<br>`Config)`|`0x01`<br>`(V1)`|||||||


-----

###### 8.2.2 Detection of Mask Version (57B0h or 5705h)
**Function ID: 60102**

**Description: This test requests Mask Version via M_PropRead.**

**Expectation: Mask Version is 0x5705 or 0x57B0.**

**Parameters: None.**

**Preparation:**

TC opens Device Management connection (see 4.1.1).

**Test sequence:**

TC requests value of OT_DEVICE (OT=0) PID_DEVICE_DESCRIPTOR (PID=83) via
M_PropRead.req (see Error! Reference source not found.).

DUT returns 2-byte value for MaskVersion

**Cleanup:**

TC closes Device Management connection (see 3.6.1).


-----

##### 8.3 cEMI Transport Layer
These tests verify if support for the cEMI Transport Layer is indicated for KNXnet/IP Device
Management connections and that the implementation of the cEMI Transport Layer as specified in
“AN118 v02 cEMI Transport Layer DV.docx” follows the rules for which type of transport layer
message gets forwarded as which type of cEMI Transport Layer service on the KNXnet/IP Device
Management connection.

###### 8.3.1 Device Management Version 2
**Function ID: 60201**

**Description: This test checks SEARCH_RESPONSE for cEMI Transport Layer.**

**Expectation: SEARCH_RESPONSE reports DeviceManagement Version >= 2.**

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC sends SEARCH_REQUEST (see Error! Reference source not found.).

DUT sends SEARCH_RESPONSE (see Error! Reference source not found.):
```
UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)
0x06 0x10 0x0202 0x0052
(Header (Ver.) (SEARCH_ (Total
Length) RESPONSE) Length)
0x08 0x01 IP_TC CPORT_TC
(Struct (IPV4_
Length) UDP)
0x36 0x01
(Struct (Device ...
Length) Info
       DIB)
0x36 0x01 0x20
(Struct (Device (Medium) ...
Length) Info
       DIB)
0x0C 0x02 0x02 0x01 0x03 0x02 0x04 0x01
(Struct (Supp (Core) (V1) (Dev (V2) (Tunn) (V1)
Length) Svc Mgt)
       Fams
       DIB)
0x07 0x01
(Remote (V1)
Diag
And
Config)

```
**Cleanup: None.**

|DUT sends SEARCH_RESPONSE (see Error! Reference source not found.):|Col2|Col3|Col4|Col5|Col6|Col7|Col8|
|---|---|---|---|---|---|---|---|
|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|<br>`UDP-frame (IP_DUT : 3671 -> IP_TC : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0202`<br>`(SEARCH_`<br>`RESPONSE)`|`0x0202`<br>`(SEARCH_`<br>`RESPONSE)`|`0x0052`<br>`(Total`<br>`Length)`|`0x0052`<br>`(Total`<br>`Length)`|||
|`0x08`<br>`(Struct`<br>`Length)`|`0x01`<br>`(IPV4_`<br>`UDP)`|`IP_TC`|`IP_TC`|`IP_TC`|`IP_TC`|`CPORT_TC`|`CPORT_TC`|
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(Device`<br>`Info`<br>`DIB)`|`...`|`...`|`...`|`...`|||
|`0x36`<br>`(Struct`<br>`Length)`|`0x01`<br>`(Device`<br>`Info`<br>`DIB)`|`0x20`<br>`(Medium)`|`...`|`...`|`...`|`...`|`...`|
|`0x0C`<br>`(Struct`<br>`Length)`|`0x02`<br>`(Supp`<br>`Svc`<br>`Fams`<br>`DIB)`|`0x02`<br>`(Core)`|`0x01`<br>`(V1)`|`0x03`<br>`(Dev`<br>`Mgt)`|**`0x02`**<br>**`(V2)`**|`0x04`<br>`(Tunn)`|`0x01`<br>`(V1)`|
|`0x07`<br>`(Remote`<br>`Diag`<br>`And`<br>`Config)`|`0x01`<br>`(V1)`|||||||


-----

###### 8.3.2 T_Connect/T_Disconnect
**Function ID: 60202**

**Description:**

(1) TC opens DM connection, then sends T_Connect and MaskVersionRead via Routing.

(2) TC closes connections, sends T_Connect via Routing, then opens DM connection.

**Expectation:**

(1) DUT sends T_Disconnect via Routing.

(2) DUT sends CONNECT_RESPONSE E_NO_MORE_CONNECTIONS.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC opens Device Management connection (see 4.1.1).

TC sends ROUTING_INDICATION L_Data.ind T_Connect:
```
UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)
0x06 0x10 0x0530 0x00XX
(Header (Ver.) (ROUTING_INDICATION) (Total Length)
Length)
0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x00 0x80
(cEMI: L_Data.ind 1.1.255->15.15.255 Connect)

```
TC sends ROUTING_INDICATION L_Data.ind T_Data_Connected DevDescrRead:
```
UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)
0x06 0x10 0x0530 0x00XX
(Header (Ver.) (ROUTING_INDICATION) (Total Length)
Length)
0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x01 0x43 0x00
(cEMI: L_Data.ind 1.1.255->15.15.255 DevDescrRead)

```
DUT sends ROUTING_INDICATION L_Data.ind T_Disconnect:
```
UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)
0x06 0x10 0x0530 0x00XX
(Header (Ver.) (ROUTING_INDICATION) (Total Length)
Length)
0x29 0x00 0xB0 0x60 0x11 0x01 0xFF 0xFF 0x00 0x81
(cEMI: L_Data.ind 1.1.1->15.15.255 Disconnect)

```
TC closes Device Management connection (see 3.6.1).

TC sends ROUTING_INDICATION L_Data.ind T_Connect.

TC opens Device Management connection (see 4.1.1).

DUT returns CONNECT_RESPONSE NO_MORE_CONNECTIONS (see Error! Reference source
**not found.).**

**Cleanup:**

TC closes Device Management connection (see 3.6.1).

|TC sends ROUTING_INDICATION L_Data.ind T_Connect:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATION)`|<br>`0x00XX`<br>`(Total Length)`||
|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x00 0x80`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 Connect)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x00 0x80`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 Connect)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x00 0x80`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 Connect)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x00 0x80`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 Connect)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x00 0x80`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 Connect)`|

|TC sends ROUTING_INDICATION L_Data.ind T_Data_Connected DevDescrRead:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATION)`|<br>`0x00XX`<br>`(Total Length)`||
|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x01 0x43 0x00`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 DevDescrRead)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x01 0x43 0x00`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 DevDescrRead)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x01 0x43 0x00`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 DevDescrRead)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x01 0x43 0x00`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 DevDescrRead)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0xFF 0xFF 0x01 0x43 0x00`<br>`(cEMI: L_Data.ind 1.1.255->15.15.255 DevDescrRead)`|

|DUT sends ROUTING_INDICATION L_Data.ind T_Disconnect:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATION)`|<br>`0x00XX`<br>`(Total Length)`||
|`0x29 0x00 0xB0 0x60 0x11 0x01 0xFF 0xFF 0x00 0x81`<br>`(cEMI: L_Data.ind 1.1.1->15.15.255 Disconnect)`|`0x29 0x00 0xB0 0x60 0x11 0x01 0xFF 0xFF 0x00 0x81`<br>`(cEMI: L_Data.ind 1.1.1->15.15.255 Disconnect)`|`0x29 0x00 0xB0 0x60 0x11 0x01 0xFF 0xFF 0x00 0x81`<br>`(cEMI: L_Data.ind 1.1.1->15.15.255 Disconnect)`|`0x29 0x00 0xB0 0x60 0x11 0x01 0xFF 0xFF 0x00 0x81`<br>`(cEMI: L_Data.ind 1.1.1->15.15.255 Disconnect)`|`0x29 0x00 0xB0 0x60 0x11 0x01 0xFF 0xFF 0x00 0x81`<br>`(cEMI: L_Data.ind 1.1.1->15.15.255 Disconnect)`|


-----

###### 8.3.3 T_Data_Broadcast
**Function ID: 60203**

**Description:**

(1) TC opens DM connection, clears ProgMode via M_PropWrite.req, then sends
A_IndividualAddress_Read via Routing.

(2) TC sets ProgMode via M_PropWrite.req, then sends A_IndividualAddress_Read via Routing.

**Expectation:**

(1) DUT does not respond, neither via Routing nor via DM connection.

(2) DUT responds with A_IndividualAddress_Response via Routing, but does not respond via DM
connection. IA from A_IndividualAddress_Response agrees with IA from SEARCH_RESPONSE.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC opens Device Management connection (see 4.1.1).

TC clears ProgMode by sending DEVICE_CONFIGURATION_REQUEST (see Error! Reference
**source not found.) M_PropWrite.req OT_DEVICE (OT=0) PID_PROGMODE (PID=54) Data=0.**

TC sends ROUTING_INDICATION L_Data.ind A_IndividualAddress_Read:
```
UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)
0x06 0x10 0x0530 0x00XX
(Header (Ver.) (ROUTING_INDICATION) (Total Length)
Length)
0x29 0x00 0xB0 0xE0 0x11 0xFF 0x00 0x00 0x01 0x01 0x00
(cEMI: L_Data.ind 1.1.255->0/0/0 AddrRead)

```
DUT does not respond, neither via Routing nor via DM connection.

TC sets ProgMode by sending DEVICE_CONFIGURATION_REQUEST M_PropWrite.req
OT_DEVICE (OT=0) PID_PROGMODE (PID=54) Data=1.

TC sends ROUTING_INDICATION L_Data.ind A_IndividualAddress_Read.

DUT sends ROUTING_INDICATION L_Data.ind A_IndividualAddress_Response:
```
UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)
0x06 0x10 0x0530 0x00XX
(Header (Ver.) (ROUTING_INDICATION) (Total Length)
Length)
0x29 0x00 0xB0 0xE0 0x11 0x01 0x00 0x00 0x01 0x01 0x40
(cEMI: L_Data.ind 1.1.1->0/0/0 AddrResp)

```
DUT does not respond via DM connection.

**Cleanup:**

TC closes Device Management connection (see 3.6.1).

|TC sends ROUTING_INDICATION L_Data.ind A_IndividualAddress_Read:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATION)`|<br>`0x00XX`<br>`(Total Length)`||
|`0x29 0x00 0xB0 0xE0 0x11 0xFF 0x00 0x00 0x01 0x01 0x00`<br>`(cEMI: L_Data.ind 1.1.255->0/0/0 AddrRead)`|`0x29 0x00 0xB0 0xE0 0x11 0xFF 0x00 0x00 0x01 0x01 0x00`<br>`(cEMI: L_Data.ind 1.1.255->0/0/0 AddrRead)`|`0x29 0x00 0xB0 0xE0 0x11 0xFF 0x00 0x00 0x01 0x01 0x00`<br>`(cEMI: L_Data.ind 1.1.255->0/0/0 AddrRead)`|`0x29 0x00 0xB0 0xE0 0x11 0xFF 0x00 0x00 0x01 0x01 0x00`<br>`(cEMI: L_Data.ind 1.1.255->0/0/0 AddrRead)`|`0x29 0x00 0xB0 0xE0 0x11 0xFF 0x00 0x00 0x01 0x01 0x00`<br>`(cEMI: L_Data.ind 1.1.255->0/0/0 AddrRead)`|

|DUT sends ROUTING_INDICATION L_Data.ind A_IndividualAddress_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATION)`|<br>`0x00XX`<br>`(Total Length)`||
|`0x29 0x00 0xB0 0xE0 0x11 0x01 0x00 0x00 0x01 0x01 0x40`<br>`(cEMI: L_Data.ind 1.1.1->0/0/0 AddrResp)`|`0x29 0x00 0xB0 0xE0 0x11 0x01 0x00 0x00 0x01 0x01 0x40`<br>`(cEMI: L_Data.ind 1.1.1->0/0/0 AddrResp)`|`0x29 0x00 0xB0 0xE0 0x11 0x01 0x00 0x00 0x01 0x01 0x40`<br>`(cEMI: L_Data.ind 1.1.1->0/0/0 AddrResp)`|`0x29 0x00 0xB0 0xE0 0x11 0x01 0x00 0x00 0x01 0x01 0x40`<br>`(cEMI: L_Data.ind 1.1.1->0/0/0 AddrResp)`|`0x29 0x00 0xB0 0xE0 0x11 0x01 0x00 0x00 0x01 0x01 0x40`<br>`(cEMI: L_Data.ind 1.1.1->0/0/0 AddrResp)`|


-----

###### 8.3.4 T_Data_Group
**Function ID: 60204**

**Description:**

TC opens DM connection, then sends A_GroupValue_Read via Routing to a readable group object of
the DUT.

**Expectation:**

DUT responds with A_GroupValue_Response via Routing, but does not respond via DM connection.

**Parameters: None.**

**Parameters: Group address of a readable DUT object (Type = String, Default = 31/7/255)**

**Preparation: None.**

**Test sequence:**

TC opens Device Management connection (see 4.1.1).

TC sends ROUTING_INDICATION L_Data.ind A_GroupValue_Read:
```
UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)
0x06 0x10 0x0530 0x00XX
(Header (Ver.) (ROUTING_INDICATION) (Total Length)
Length)
0x29 0x00 0xBC 0xC0 0x11 0xFF 0xFF 0xFF 0x01 0x00 0x00
(cEMI: L_Data.ind 1.1.255->31/7/255 ValueRead)

```
DUT sends ROUTING_INDICATION L_Data.ind A_GroupValue_Response:
```
UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)
0x06 0x10 0x0530 0x00XX
(Header (Ver.) (ROUTING_INDICATION) (Total Length)
Length)
0x29 0x00 0xB0 0xC0 0x11 0x01 0xFF 0xFF 0x01 0x00 0x40
(cEMI: L_Data.ind 1.1.1->31/7/255 ValueResp 0)

```
DUT does not respond via DM connection.

**Cleanup:**

TC closes Device Management connection (see 3.6.1).

|TC sends ROUTING_INDICATION L_Data.ind A_GroupValue_Read:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATION)`|<br>`0x00XX`<br>`(Total Length)`||
|`0x29 0x00 0xBC 0xC0 0x11 0xFF 0xFF 0xFF 0x01 0x00 0x00`<br>`(cEMI: L_Data.ind 1.1.255->31/7/255 ValueRead)`|`0x29 0x00 0xBC 0xC0 0x11 0xFF 0xFF 0xFF 0x01 0x00 0x00`<br>`(cEMI: L_Data.ind 1.1.255->31/7/255 ValueRead)`|`0x29 0x00 0xBC 0xC0 0x11 0xFF 0xFF 0xFF 0x01 0x00 0x00`<br>`(cEMI: L_Data.ind 1.1.255->31/7/255 ValueRead)`|`0x29 0x00 0xBC 0xC0 0x11 0xFF 0xFF 0xFF 0x01 0x00 0x00`<br>`(cEMI: L_Data.ind 1.1.255->31/7/255 ValueRead)`|`0x29 0x00 0xBC 0xC0 0x11 0xFF 0xFF 0xFF 0x01 0x00 0x00`<br>`(cEMI: L_Data.ind 1.1.255->31/7/255 ValueRead)`|

|DUT sends ROUTING_INDICATION L_Data.ind A_GroupValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_DUT : 3671 -> 224.0.23.12 : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATION)`|<br>`0x00XX`<br>`(Total Length)`||
|`0x29 0x00 0xB0 0xC0 0x11 0x01 0xFF 0xFF 0x01 0x00 0x40`<br>`(cEMI: L_Data.ind 1.1.1->31/7/255 ValueResp 0)`|`0x29 0x00 0xB0 0xC0 0x11 0x01 0xFF 0xFF 0x01 0x00 0x40`<br>`(cEMI: L_Data.ind 1.1.1->31/7/255 ValueResp 0)`|`0x29 0x00 0xB0 0xC0 0x11 0x01 0xFF 0xFF 0x01 0x00 0x40`<br>`(cEMI: L_Data.ind 1.1.1->31/7/255 ValueResp 0)`|`0x29 0x00 0xB0 0xC0 0x11 0x01 0xFF 0xFF 0x01 0x00 0x40`<br>`(cEMI: L_Data.ind 1.1.1->31/7/255 ValueResp 0)`|`0x29 0x00 0xB0 0xC0 0x11 0x01 0xFF 0xFF 0x01 0x00 0x40`<br>`(cEMI: L_Data.ind 1.1.1->31/7/255 ValueResp 0)`|


-----

###### 8.3.5 T_Data_Connected
**Function ID: 60205**

**Description:**

(1) TC opens DM connection, then sends T_Data_Connected.req A_PropertyValue_Read
PID_PROGMODE via DM connection.

(2) TC sends T_Data_Connected.req A_PropertyValue_Read PID_PROGMODE via Routing.

**Expectation:**

(1) DUT responds with T_Data_Connected.req A_PropertyValue_Response via DM connection, but
does not respond via Routing. Returned PID_PROGMODE value agrees with DeviceState from
SEARCH_RESPONSE.

(2) DUT does not respond, neither via Routing, nor via DM connection.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC opens Device Management connection (see 4.1.1).

TC sends DEVICE_CONFIGURATION_REQUEST T_Data_Connected.req A_PropertyValue_Read
PID_PROGMODE

|PID_PROGMODE|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0019`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Connected.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Connected.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Connected.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Connected.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|`0x41 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Connected.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|

|DUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

|DUT sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Connected.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|`0x89 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||

|TC sends ROUTING_INDICATION L_Data.ind T_Data_Connected.req A_PropertyValue_Read PID_PROGMODE:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATION)`|<br>`0x00XX`<br>`(Total Length)`||
|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x47 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x47 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x47 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x47 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x47 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|


DUT sends no ROUTING_INDICATION L_Data.ind T_Ack.

DUT sends no ROUTING_INDICATION L_Data.ind T_Data_Connected.ind
A_GroupValue_Response.

DUT does not respond via DM connection.

**Cleanup:**

TC closes Device Management connection (see 3.6.1).


-----

###### 8.3.6 T_Data_Individual
**Function ID: 60206**

**Description:**

(1) TC opens DM connection, then sends T_Data_Individual.req A_PropertyValue_Read
PID_PROGMODE via DM connection.

(2) TC sends T_Data_Individual.req A_PropertyValue_Read PID_PROGMODE via Routing.

**Expectation:**

(1) DUT responds with T_Data_Individual.req A_PropertyValue_Response via DM connection, but
does not respond via Routing. Returned PID_PROGMODE value agrees with DeviceState from
SEARCH_RESPONSE.

(2) DUT does not respond, neither via Routing, nor via DM connection.

**Parameters: None.**

**Preparation: None.**

**Test sequence:**

TC opens Device Management connection (see 4.1.1).

TC sends DEVICE_CONFIGURATION_REQUEST T_Data_Individual.req A_PropertyValue_Read
PID_PROGMODE

|PID_PROGMODE|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0019`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Individual.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Individual.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Individual.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Individual.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|`0x4A 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: T_Data_Individual.req 0.0.0->0.0.0 PropValueRead OX=0 P=54)`|

|DUT sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||


-----

|DUT sends DEVICE_CONFIGURATION_REQUEST with cEMI T_Data_Individual.ind A_PropertyValue_Response:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|<br>`UDP frame (IP_DUT : CPORT_DUT -> IP_TC : CPORT_TC)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x0310`<br>`(CONFIG_REQUEST)`|`0x001B`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|`0xXX`<br>`(Channel`<br>`ID)`|`0x00`<br>`(Sequence`<br>`Counter)`|`0x00`<br>`(Reserved)`||
|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|`0x94 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06`<br>`0x03 0xD6 0x00 0x36 0x10 0x01 0x00`<br>`89 00 00 00 00 00 00 00 06 03 d6 00 36 10 01 00`<br>`(cEMI: T_Data_Connected.ind 0.0.0->0.0.0 PropValueResp OX=0 P=54 $00)`|

|TC sends DEVICE_CONFIGURATION_ACK:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|<br>`UDP frame (IP_TC : CPORT_TC -> IP_DUT : CPORT_DUT)`|
|`0x06`<br>`(Header`<br>`Length)`|<br> <br>`0x10`<br>`(Ver.)`|`0x0311`<br>`(CONFIG_ACK)`|`0x0311`<br>`(CONFIG_ACK)`|`0x000A`<br>`(Total Length)`|
|`0x04`<br>`(Struct`<br>`Length)`|<br> <br>`0xXX`<br>`(Channel`<br>`ID)`|<br>`0x00`<br>`(Sequence`<br>`Counter)`|<br>`0x00`<br>`(Reserved)`||

|TC sends ROUTING_INDICATION L_Data.ind T_Data_Individual.req A_PropertyValue_Read PID_PROGMODE:|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|<br>`UDP frame (IP_TC : 3671 -> 224.0.23.12 : 3671)`|
|`0x06`<br>`(Header`<br>`Length)`|`0x10`<br>`(Ver.)`|`0x0530`<br>`(ROUTING_INDICATION)`|<br>`0x00XX`<br>`(Total Length)`||
|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|`0x29 0x00 0xB0 0x60 0x11 0xFF 0x11 0x01 0x05`<br>`0x03 0xD5 0x00 0x36 0x10 0x01`<br>`(cEMI: L_Data.ind 1.1.255->1.1.1 PropValueRead OX=0 P=54)`|


DUT sends no ROUTING_INDICATION L_Data.ind T_Data_Individual.ind
A_GroupValue_Response.

DUT does not respond via DM connection.

**Cleanup:**

TC closes Device Management connection (see 3.6.1).


-----

