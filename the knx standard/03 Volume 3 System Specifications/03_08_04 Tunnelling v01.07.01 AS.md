# System Specifications

## KNXnet/IP

 Tunnelling

Summary

This document provides the KNXnet/IP Tunnelling specification.

Version 01.07.01 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0 DP 2004.01.07 Final version for Release for Voting
1.1 DV 2005.05.30 Draft for Voting for Final Voting.
1.3 AS 2008.07.02 Publication of the Approved Standard.
1.4 AS 2008.09.05  - **AN110 "Phasing out A-Mode" integrated**
1.4 AS 2009.06.29 Editorial update in view of inclusion in the KNX Specifications v2.0.
01.05.00 2013.07.18  - **AN139 "Procedures for the assignment of IAs to KNXnet/IP**
**Tunnelling connections" integrated.**
01.05.01 2013.07.18  - Editorial review.
01.05.01 2013.09.20  - 4.2.3.5.3 “Assignment via PID_INDIVIDUAL_ADDRESS”:
PID_KNX_INDIVIDUAL_ADDRESS is located in the KNXnet/IP
Parameter Object, and not in the Device Object.
01.05.03 2013.10.28 Editorial updates for the publication of KNX Specifications 2.1.
01.05.04 2014.08.14 Editorial update.
01.06.01 2020.12.22  - **AN184 “KNXnet/IP Core v2” integrated.**
01.07.01 2021.01.05  - **AN185 “KNXnet/IP Tunnelling v2” integrated.**
2021.10.07 Preparation for inclusion in the KNX Specifications v3.0.

#### References

A general reference is made to the RFCs[ 1)] defining the Internet Protocol. These documents can be
obtained on the Internet at http://www.ietf.org/rfc.html.

[01] Chapter 3/5/2 “Management Procedures”

[02] Chapter 3/5/3 “Configuration Procedures”

[03] Chapter 3/6/3 “External Message Interface”

[04] Chapter 3/8/1 “Overview” (KNXnet/IP)

[05] Chapter 3/8/2 “Core” (KNXnet/IP)

[06] Chapter 3/8/3 “Device Management” (KNXnet/IP)

[07] Chapter 3/8/3 “Remote Configuration and Diagnosis” (planned)

[08] Chapter 3/8/9 “KNX IP Secure”

[09] Volume 6 “Profiles”

[10] Part 9/3 “Couplers”

Filename: 03_08_04 Tunnelling v01.07.01 AS.docx
Version: 01.07.01
Status: Approved Standard
Savedate: 2021.10.07
Number of pages: 35

1) Request for Comment: Internet Standards defined by the Internet Engineering Task Force (IETF) are firstly
published as RFCs.

|Version|Date|Modifications|
|---|---|---|
|1.0 DP|2004.01.07|Final version for Release for Voting|
|1.1 DV|2005.05.30|Draft for Voting for Final Voting.|
|1.3 AS|2008.07.02|Publication of the Approved Standard.|
|1.4 AS|2008.09.05|• **AN110"Phasing out A-Mode"** integrated|
|1.4 AS|2009.06.29|<br>Editorial update in view of inclusion in the KNX Specifications v2.0.|
|01.05.00|2013.07.18|• <br>**AN139 "Procedures for the assignment of IAs to KNXnet/IP**<br>**Tunnelling connections"** integrated.|
|01.05.01|2013.07.18|<br>• <br>Editorial review.|
|01.05.01|2013.09.20|• <br>4.2.3.5.3 “Assignment via PID_INDIVIDUAL_ADDRESS”:<br>PID_KNX_INDIVIDUAL_ADDRESS is located in the KNXnet/IP<br>Parameter Object, and not in the Device Object.|
|01.05.03|2013.10.28|Editorial updates for the publication of KNX Specifications 2.1.|
|01.05.04|2014.08.14|Editorial update.|
|01.06.01|2020.12.22|• <br>**AN184“KNXnet/IP Core v2”** integrated.|
|01.07.01|2021.01.05|<br>• <br>**AN185“KNXnet/IP Tunnelling v2”** integrated.|
|01.07.01|2021.10.07|<br>Preparation for inclusion inthe KNXSpecifications v3.0.|


-----

#### Content

###### 1 Introduction ............................................................................................................................ 5 1.1 Scope ............................................................................................................................... 5 1.2 Definitions, acronyms and abbreviations ....................................................................... 5

 2 Tunnelling of KNX frames .................................................................................................... 6 2.1 Introduction ..................................................................................................................... 6 2.2 Tunnelling ....................................................................................................................... 6 2.2.1 General requirements .......................................................................................... 6 2.2.2 Tunnelling on KNX Data Link Layer ................................................................. 6 2.2.3 Tunnelling in cEMI Raw mode ........................................................................... 8 2.2.4 Tunnelling on KNX Busmonitor ........................................................................ 8 2.3 Timing ............................................................................................................................. 9 2.4 Sending KNX frames via KNXnet/IP Tunnelling Server to local subnet ...................... 9 2.5 Receiving KNX frames via KNXnet/IP Tunnelling Server from local subnet .............. 9 2.6 Frame confirmation ........................................................................................................ 9 2.6.1 Tunnelling on UDP ............................................................................................. 9 2.6.2 Tunnelling on TCP ............................................................................................ 10

 3 Tunnelling Feature services ................................................................................................ 11 3.1 Common ....................................................................................................................... 11 3.2 TUNNELLING_FEATURE_GET ............................................................................... 11 3.3 TUNNELLING_FEATURE_SET ................................................................................ 11 3.4 TUNNELLING_FEATURE_INFO ............................................................................. 11 3.5 Common error handling ................................................................................................ 12 3.6 Definition of the Interface Features .............................................................................. 12 3.6.1 Overview of the Interface Features ................................................................... 12 3.6.2 Interface Feature 01: Supported EMI type ........................................................ 12 3.6.3 Interface Feature 02: Device Descriptor Type 0 ............................................... 13 3.6.4 Interface Feature 03: Bus connection status ..................................................... 13 3.6.5 Interface Feature 04: KNX Manufacturer Code ............................................... 14 3.6.6 Interface Feature 05: Active EMI type ............................................................. 14 3.6.7 Interface Feature 06: Interface Individual Address .......................................... 15 3.6.8 Interface Feature 07: Max APDU Length ......................................................... 16 3.6.9 Interface Feature 08: Interface Feature Info service Enable ............................. 16

 4 Configuration and Management ......................................................................................... 18 4.1 General .......................................................................................................................... 18 4.2 IA assignment for KNXnet/IP Tunnelling connections ................................................ 18 4.2.1 Goal ................................................................................................................... 18 4.2.2 Prerequisites ...................................................................................................... 18 4.2.3 Procedure .......................................................................................................... 18 4.3 Handling of E_NO_MORE_UNIQUE_CONNECTIONS by the KNXnet/IP Tunnelling Client .......................................................................................................... 23

 5 Frame structures .................................................................................................................. 25 5.1 Introduction ................................................................................................................... 25 5.2 Common constants ........................................................................................................ 25 5.3 Common error codes ..................................................................................................... 25 5.4 KNX telegram tunnelling ............................................................................................. 25 5.4.1 KNXnet/IP services .......................................................................................... 25 5.4.2 Connection Type ............................................................................................... 25


-----

###### 5.4.3 Connection Request Information (CRI) ............................................................ 26 5.4.4 Connection Response Data Block (CRD) ......................................................... 30 5.4.5 Connection header ............................................................................................ 30 5.4.6 TUNNELLING_REQUEST ............................................................................. 31 5.4.7 TUNNELLING_ACK....................................................................................... 31 5.4.8 TUNNELLING_FEATURE_GET ................................................................... 32 5.4.9 TUNNELLING_FEATURE_RESPONSE ....................................................... 32 5.4.10 TUNNELLING_FEATURE_SET .................................................................... 33 5.4.11 TUNNELLING_FEATURE_INFO .................................................................. 33

 6 Binary examples of KNXnet/IP frames .............................................................................. 34 6.1 TUNNELLING_REQUEST ......................................................................................... 34 6.2 TUNNELLING_ACK .................................................................................................. 34

 7 Certification .......................................................................................................................... 35 7.1 Introduction ................................................................................................................... 35 7.2 Support matrix .............................................................................................................. 35


-----

### 1 Introduction

#### 1.1 Scope
This specification defines the integration of KNX protocol implementations on top of Internet Protocol
(IP) networks, called KNXnet/IP. It describes a standard protocol for KNX devices connected to an IP
network, called KNXnet/IP devices. The IP network acts as a fast (compared to KNX transmission speed)
backbone in KNX installations.

An overview of KNXnet/IP is presented in [04].

General frame descriptions and data exchange protocols between KNXnet/IP devices are described
in [05].

General device management and configuration of KNXnet/IP devices is specified in [06].

This Chapter 3/8/4 “Tunnelling” of the KNXnet/IP specification describes point-to-point exchange of
KNX telegrams over an IP network between an KNXnet/IP device acting as a server and an KNXnet/IP
Client for configuration and diagnostics. KNX frames are encapsulated inside IP datagrams. KNXnet/IP
Tunnelling does not address timing issues caused by IP data network latency greater than one second.
Refer to [07] (planned).

This document specifies a standard protocol that is implemented within KNX devices and the
Engineering Tool Software (ETS) to support KNX data exchange over non-KNX networks.

#### 1.2 Definitions, acronyms and abbreviations
Refer to [04] for a list of definitions for the KNXnet/IP specification.


-----

### 2 Tunnelling of KNX frames

#### 2.1 Introduction
Tunnelling is characterized by ETS sending a single KNX frame in an IP frame and waiting until the
response arrives or a time-out is reached.

#### 2.2 Tunnelling

##### 2.2.1 General requirements
KNX frames shall always be sent within a TUNNELLING_REQUEST frame. This frame shall contain
the KNX frame in cEMI format. The cEMI format shall be supported by all KNXnet/IP devices.

After a communication channel has been established, the following KNX services shall be supported by a
KNXnet/IP version 1 implementation:

KNXnet/IP Tunnelling on KNX Data Link Layer

Client  Server L_Data.req, M_Reset.req

Server  Client L_Data.con, L_Data.ind

KNXnet/IP Tunnelling in cEMI Raw mode

Client  Server L_Raw.req, M_Reset.req

Server  Client L_Raw.con, L_Raw.ind

KNXnet/IP Tunnelling on KNX Busmonitor

Client  Server n.a.

Server  Client L_Busmon.ind

##### 2.2.2 Tunnelling on KNX Data Link Layer
Implementation of Tunnelling on KNX Data Link Layer is mandatory.

Each KNXnet/IP Tunnelling connection shall correspond with a KNX Individual Address i.e. when the
Tunnelling connection is established the KNXnet/IP Server shall assign a KNX Individual Address to it.

This Tunnelling Individual Address shall be unique within the open KNXnet/IP Tunnelling connections
of the KNXnet/IP Tunnelling device. The KNXnet/IP Tunnelling Server shall not open two or more
KNXnet/IP Tunnelling connections with the same Tunnelling Individual Address.

In case a KNXnet/IP Tunnelling client connection request cannot be accepted because the list of unique
Individual Addresses has been depleted and all remaining Additional Individual Address entries are
identical and one of these entries is already in use, then the KNXnet/IP Tunnelling Server SHALL return
the error code E_NO_MORE_UNIQUE_CONNECTIONS (= 25h) as the CONNECT_RESPONSE status
code. This error code is mandatory for any device that offers more than one KNXnet/IP Tunnelling
connection.

The KNXnet/IP Tunnelling Client side error handling is specified in 4.3.

This KNX Individual Address shall be returned in the CONNECT_RESPONSE frame Connection
Response Data Block (CRD). If the KNXnet/IP Server assigns its own KNX Individual Address to the
Tunnelling connection then management of the KNXnet/IP Server shall not be possible via KNXnet/IP
Tunnelling frames or from the KNX Subnetwork. The KNX Individual Address of the KNXnet/IP Server
itself shall be obtained by assignment through ETS. This address may be used for a KNXnet/IP
Tunnelling connection with the implication stated above [see Figure 1-A].


-----

KNX Individual Addresses for any additional Tunnelling connection shall be assigned by ETS.
The additional KNX Individual Addresses shall be stored in Property PID_ADDITIONAL_INDIVIDUAL_ADDRESSES.
To prevent other Management Clients from using or assigning any of these additional IAs the KNXnet/IP
Tunnelling device shall defend its additional IA. Such Management Client will to this execute the
Management Procedure NM_IndividualAddress_Check (see [01]). If this Management Client in this
request tries to establish a Transport Layer connection to any of these IAs by sending a T_Connect-PDU,
then the KNXnet/IP Tunnelling device shall act as follows.

   - If no Tunnelling connection is open for the additional KNX Individual Address, then the
Tunnelling device shall send a T_Disconnect-PDU.
   - If the Tunnelling connection for this additional IA is currently open, then the Tunnelling device
shall forward the above request as T_Connect-PDU to the connected KNXnet/IP Tunnelling
Client. The KNXnet/IP Tunnelling Client then shall respond to the request.

Additional KNX Individual Addresses shall be permanent. The KNXnet/IP Server shall generate Layer-2
acknowledge frames for these additionally assumed KNX Individual Addresses [see Figure 1-B][ 2)].

If a KNXnet/IP Server also implements KNXnet/IP Routing it shall not use its own KNX Individual
Address for KNXnet/IP Tunnelling connections but shall assume KNX Individual Addresses as described
above [see Figure 1-C].

A KNXnet/IP Router shall not activate KNXnet/IP Tunnelling until at least one additional KNX
Individual Address has been set via KNXnet/IP Device Management.

These are the bootstrap steps to take for a KNXnet/IP Router.

a) KNXnet/IP Discovery of KNXnet/IP Router IP address

b) Initiation of KNXnet/IP Device Management connection to KNXnet/IP Router and setting KNX
Individual Address for this KNXnet/IP Router.

c) Setting KNXnet/IP Router additional KNX Individual Address(es)

The KNXnet/IP Tunnelling Server shall only pass those KNX point-to-point addressed telegrams to the
KNXnet/IP Tunnelling Client that contain the KNX Individual Address of the KNXnet/IP Tunnelling
connection with this KNXnet/IP Tunnelling Client. All KNX telegrams on KNX point-to-multipoint
communication (i.e. group addressing) shall be forwarded to the KNXnet/IP Tunnelling Client.

If the KNXnet/IP Tunnelling Client sends a cEMI frame L_Data.req with a KNX Individual Address
(KNX Source Address) set to 0000h then the Tunnelling server shall enter the KNX Individual Address
assigned to this Tunnelling connection. Otherwise, the KNX frame shall be sent unchanged (see cEMI
specifications in [03]).

2) Every KNXnet/IP Tunnelling connection shall use its own (unique) Individual Address and hence logically
appears as another device on the KNX bus. Hence, it shall acknowledge telegrams even if the telegram is coming
from the physically same device.


-----

**A** **KNXnet/IP server** **KNXnet/IP client**

Individual Address (1.1.1)

Tunnelling Connection #1

Individual

Address Tunnelling Connection #1

(1.1.1)

**KNXnet/IP client**

Individual
Tunnelling Connection #2

Address Tunnelling Connection #2

(1.1.37)

**B** **KNXnet/IP server** **KNXnet/IP client**

Individual Address (1.1.1)

Tunnelling Connection #1

Individual

Address Tunnelling Connection #1

(1.1.74)

**KNXnet/IP client**

Individual
Tunnelling Connection #2

Address Tunnelling Connection #2

(1.1.37)

**C** **KNXnet/IP server**

Individual Address (1.1.0)

Individual **KNXnet/IP client**

Address Routing

(1.1.0) Tunnelling Connection #1

Individual

Address Tunnelling Connection #1

(1.1.37)

**KNXnet/IP client**

Individual
Tunnelling Connection #2

Address Tunnelling Connection #2

(1.1.74)

**Figure 1 – Tunnelling connections and KNX Individual Addresses in the KNXnet/IP Server**

##### 2.2.3 Tunnelling in cEMI Raw mode 
Implementation of Tunnelling on KNX cEMI Raw mode is optional.

The KNXnet/IP Tunnelling Server shall pass any KNX telegram received to the KNXnet/IP Tunnelling
Client.

The KNXnet/IP Tunnelling Server shall not generate Layer-2 acknowledge frames in response to KNX
telegrams forwarded onto a KNXnet/IP Tunnelling connection in cEMI Raw mode.

Because KNXnet/IP Tunnelling on cEMI Raw mode would therefore disable the KNXnet/IP Routing
function in a KNXnet/IP Router, KNXnet/IP Tunnelling on cEMI Raw mode shall not be supported in a
KNXnet/IP Routing device.

##### 2.2.4 Tunnelling on KNX Busmonitor
Implementation of Tunnelling on KNX Busmonitor is optional.

If Tunnelling on KNX Busmonitor is implemented the KNXnet/IP Tunnelling Server shall only support
one KNXnet/IP Tunnelling connection per KNX Subnetwork. If Tunnelling on KNX Busmonitor is
activated then the KNXnet/IP Tunnelling Server may not support any other KNXnet/IP services for the
KNX Subnetwork.

Because KNXnet/IP Tunnelling on KNX Busmonitor would therefore disable the KNXnet/IP Routing
function in a KNXnet/IP Router, KNXnet/IP Tunnelling on KNX Busmonitor shall not be supported in a
KNXnet/IP Routing device.


-----

#### 2.3 Timing
KNXnet/IP Tunnelling as such does not provide any mechanisms to modify timing requirements on the
tunnelled data packets. More precisely, the timing requirements defined by the KNX specification are still
valid while tunnelling or routing over a non-KNX network. Therefore the transfer time of tunnelled data
packets shall allow operation within these timing requirements.

This implies that tTunnelling_protocol_transfer_time << tKNX_transfer_time-outs.

#### 2.4 Sending KNX frames via KNXnet/IP Tunnelling Server to local subnet
To send a KNX frame, the KNXnet/IP Tunnelling Client shall send a TUNNELLING_REQUEST frame
to the KNXnet/IP Tunnelling Server, with an L_Data.req, according to the KNX specification. The
KNXnet/IP Tunnelling Client shall be connected and shall not be in Busmonitor Mode.

#### 2.5 Receiving KNX frames via KNXnet/IP Tunnelling Server from local subnet
If a connection is established, the KNXnet/IP Tunnelling Server shall send a TUNNELLING_REQUEST
frame for each telegram it receives from the local KNX Subnetwork. The KNX services of the embedded
KNX frame may be L_Data.con, L_Data.ind, or L_Busmon.ind, according to the KNX specification.

#### 2.6 Frame confirmation

##### 2.6.1 Tunnelling on UDP
TUNNELLING_REQUEST frames shall be confirmed using TUNNELLING_ACK frames.

If a TUNNELLING_REQUEST frame is not confirmed within the TUNNELLING_REQUEST_TIME_OUT time of one (1) second then the frame shall be repeated once with the same sequence counter value
by the sending KNXnet/IP device.

If the KNXnet/IP device does not receive a TUNNELLING_ACK frame within the TUNNELLING_REQUEST_TIMEOUT (= 1 second) or the status of a received TUNNELLING_ACK frame signals any
kind of error condition, the sending device shall repeat the TUNNELLING_REQUEST frame once and
then terminate the connection by sending a DISCONNECT_REQUEST frame to the other device’s
control endpoint.

If a KNXnet/IP Tunnelling Server receives a data packet with a sequence number that is the expected
sequence number then it shall reply with a TUNNELLING_ACK (Status = E_NO_ERROR) frame and
process the received frame.

If a KNXnet/IP Tunnelling Server receives a frame with a sequence number that is one less than the
expected sequence number then it shall reply with a TUNNELLING_ACK (Status = E_NO_ERROR)
frame and discard the received frame.

If a KNXnet/IP Tunnelling Server receives a data packet with a sequence number that is not equal to the
expected sequence number and not equal to one less than the expected sequence number, then the
KNXnet/IP Tunnelling Server shall not reply and shall discard the received frame.

If a KNXnet/IP Tunnelling Client receives a frame with a sequence number that equals the expected
sequence number then it shall reply with a TUNNELLING_ACK (Status = E_NO_ERROR) frame and
process the received frame.

If a KNXnet/IP Tunnelling Client receives a frame with a sequence number that is one less than the
expected sequence number then it shall reply with a TUNNELLING_ACK (Status = E_NO_ERROR)
message and discard the received frame.

If a KNXnet/IP Tunnelling Client receives a frame with a sequence number that is not equal to the
expected sequence number and not equal to one less than the expected sequence number, the KNXnet/IP
Tunnelling Client shall not reply and shall discard the received frame.


-----

##### 2.6.2 Tunnelling on TCP
For connections inside a TCP connection, the sequence counter shall not be evaluated by the receiver.
The sender may set the sequence counter to zero.

For TCP communication, no TUNNELLING_ACK shall be sent. Received TUNNELLING_ACK
Frames shall be ignored.


-----

### 3 Tunnelling Feature services

#### 3.1 Common
The Tunnelling Client shall use the Tunnelling Feature services TUNNELLING_FEATURE_GET and
TUNNELLING_FEATURE_SET to read and respectively write features related to the Tunnelling
interface and the Tunnelling host device in the Tunnelling host device. The Tunnelling Server shall use
the service TUNNELLING_FEATURE_INFO to spontaneously report to the Tunnelling Client about
relevant changes in the state of itself or of the Tunnelling connection.

Tunnelling Feature services shall be confirmed by the receiver identically as the TUNNELLING_REQUEST service.

NOTE 1 This is, on UDP by a TUNNELLING_ACK Frame and on TCP there shall be no TUNNELLING_ACK
Frame.
The timing, the handling of the Sequence Counter and the error handling shall be equal as for the
TUNNELLING_REQUEST service as specified in 2.6.

In all services, the Interface Feature shall be identified by the Interface Feature Identifier.

#### 3.2 TUNNELLING_FEATURE_GET
The Tunnelling Client shall initiate the service TUNNELLING_FEATURE_GET to read the value of an
Interface Feature from the Tunnelling Server. The Tunnelling Server shall at the latest 3 s after
confirming the TUNNELLING_FEATURE_GET (see NOTE 1) respond with a
TUNNELLING_FEATURE_RESPONSE containing the value of the Interface Feature.

If the Tunnelling Server does not respond to the TUNNELLING_FEATURE_GET then the Tunnelling
Client may or may not repeat the request.

#### 3.3 TUNNELLING_FEATURE_SET
The Tunnelling Client shall initiate the service TUNNELLING_FEATURE_SET to set the value of an
Interface Feature in a Tunnelling Server. The Tunnelling Server shall accept the value and – unless
specified differently – apply the new value immediately, this is, before the
TUNNELLING_FEATURE_RESPONSE is sent or before routing the next TUNNELLING_REQUEST
on the bus. The Tunnelling Server shall at the latest 3 s after confirming the
TUNNELLING_FEATURE_GET (see NOTE 1) respond with a TUNNELLING_FEATURE_RESPONSE Frame containing the written value and a Return Code.

   - If the Tunnelling Client requests to set a Feature that is available for it but which is read-only,
then the Tunnelling Server shall respond with E_ACCESS_READ_ONLY.

   - If the Tunnelling Client requests to set a Feature to a value with a wrong size, then the
Tunnelling Server shall respond with E_DATA_TYPE_CONFLICT.

   - If the Tunnelling Client requests to set the Feature to a value that is not valid, then the
Tunnelling Server shall respond with E_DATA_VOID or alternatively with E_DATA_MAX or
E_DATA_MIN as appropriate. The field Feature Value shall repeat the Feature Value from the
request.

#### 3.4 TUNNELLING_FEATURE_INFO
The Tunnelling Server shall only send the TUNNELLING_FEATURE_INFO if the Interface Feature
“Interface Feature Info Service Enable” has the value “Enable”. See 3.6.9.

If enabled then the Tunnelling Server shall initiate the service TUNNELLING_FEATURE_INFO to
report on any relevant change of an Interface Feature to the Tunnelling Client.


-----

The Tunnelling Server shall per default report for all its supported Interface Features. There is no standard
way for the Tunnelling Client to disable the reporting of an individual Interface Feature. This may be
possible through the normal configuration of the Tunnelling Server device by a MaC, e.g. over
KNXnet/IP Device Management.

The Tunnelling Server shall address the TUNNELLING_FEATURE_INFO Frame to the data endpoint of
the established Tunnelling connection.

#### 3.5 Common error handling

- If a Tunnelling Feature service is requested from a Tunnelling Server that does not support the
Tunnelling Feature services, then the Tunnelling Server shall ignore this service request

NOTE 2 This means that no TUNNELLING_ACK will be sent. This is in line with the general requirement that
a received invalid data packet shall be ignored (see [05] clause 6.2). If this Tunnelling Feature service is conveyed
over a TCP connection, then however obviously a TCP acknowledge will be sent.
NOTE 3 The Tunnelling Client should in fact know whether the Tunnelling Server supports the Tunnelling
Feature services, by sending a DESCRIPTION_REQUEST to it and verifying if the DESCRIPTION_RESPONSE
contains the TUNNELLING_INFO DIB (see [04]) or not.

- If the requested Tunnelling Feature service is not available for the requested Interface Feature then
the Tunnelling Server shall respond with E_ACCESS_DENIED (FCh). The “Tunnelling Feature
_service availability matrixes” in the below Interface Feature definitions indicate for each Tunnelling_
Feature service the availability of that Interface Feature and the possible conditions.

- If a Tunnelling Feature service is transported over an unknown communication channel ID, then this
shall be ignored.

- If an unknown or not supported Interface Feature is addressed in the TUNNELLING_FEATURE_SET or TUNNELLING_FEATURE_GET then the Tunnelling Server shall respond with
the Return Code E_ADDRESS_VOID and the field Feature Value shall be omitted.
Additional error handling and Return Codes may be given specifically for each Feature below.

#### 3.6 Definition of the Interface Features

##### 3.6.1 Overview of the Interface Features
Please refer to [10] for the overview and common specifications of the Interface Features. Please refer to

[09] for the mandatory or optional support of the Interface Features and Tunnelling Feature services for
each.

The below clauses give additional requirements for the use of these Features in the KNXnet/IP Tunnelling
Server.

##### 3.6.2 Interface Feature 01: Supported EMI type
**Definition**

Please refer to the common definition of this Interface Feature in [10].

According clause 2.2.1, only cEMI is allowed for KNXnet/IP Tunnelling, so, only this value shall be
reported.


-----

**Access for implementation in the KNXnet/IP Tunnelling Server**

Please refer to [09] for the mandatory and optional support of this Interface Feature in the KNXnet/IP
Tunnelling Server and for the common minimal availability requirements. These are adjusted by the
below.

**Table 1 – Tunnelling Feature service availability matrix for the Interface Feature 01**

**Security Mode**

**Tunnelling Feature service** **Disabled / not present** **Enabled**

**TUNNELLING_FEATURE_GET** available available

**TUNNELLING_FEATURE_SET** E_ACCESS_READ_ONLY E_ACCESS_READ_ONLY

**TUNNELLING_FEATURE_INFO** not available not available

##### 3.6.3 Interface Feature 02: Device Descriptor Type 0
**Definition**

Please refer to the common definition of this Interface Feature in [10].

**Access for implementation in the KNXnet/IP Tunnelling Server**

Please refer to [09] for the mandatory and optional support of this Interface Feature in the KNXnet/IP
Tunnelling Server and for the common minimal availability requirements. These are adjusted by the
below.

**Table 2 – Tunnelling Feature service availability matrix for the Interface Feature 02**

**Security Mode**

**Tunnelling Feature service** **Disabled / not present** **Enabled**

**TUNNELLING_FEATURE_GET** available available

**TUNNELLING_FEATURE_SET** E_ACCESS_READ_ONLY E_ACCESS_READ_ONLY

**TUNNELLING_FEATURE_INFO** not available not available

NOTE 4 In line with the Access Policies AN158 “KNX Data Security”, where the service
A_DeviceDescriptor_Read can be called regardless of the Security Mode, here the Device Descriptor Type 0 can be
read (TUNNELLING_FEATURE_GET) also if Security Mode is enabled.

##### 3.6.4 Interface Feature 03: Bus connection status
**Definition**

Please refer to the common definition of this Interface Feature in [10].

**Access for implementation in the KNXnet/IP Tunnelling Server**

Please refer to [09] for the mandatory and optional support of this Interface Feature in the KNXnet/IP
Tunnelling Server and for the common minimal availability requirements. These are adjusted by the
below.

**Table 3 – Tunnelling Feature service availability matrix for the Interface Feature 03**

**Security Mode**

**Tunnelling Feature service** **Disabled / not present** **Enabled**

**TUNNELLING_FEATURE_GET** available available

**TUNNELLING_FEATURE_SET** E_ACCESS_READ_ONLY E_ACCESS_READ_ONLY

**TUNNELLING_FEATURE_INFO** available available

|Col1|Security Mode|Col3|
|---|---|---|
|**Tunnelling Feature service**|**Disabled / not present**|**Enabled**|
|**TUNNELLING_FEATURE_GET**|available|available|
|<br>**TUNNELLING_FEATURE_SET**|E_ACCESS_READ_ONLY|E_ACCESS_READ_ONLY|
|<br>**TUNNELLING_FEATURE_INFO**|<br>not available|<br>not available|

|Col1|Security Mode|Col3|
|---|---|---|
|**Tunnelling Feature service**|**Disabled / not present**|**Enabled**|
|**TUNNELLING_FEATURE_GET**|available|available|
|<br>**TUNNELLING_FEATURE_SET**|E_ACCESS_READ_ONLY|E_ACCESS_READ_ONLY|
|<br>**TUNNELLING_FEATURE_INFO**|<br>not available|<br>not available|

|Col1|Security Mode|Col3|
|---|---|---|
|**Tunnelling Feature service**|**Disabled / not present**|**Enabled**|
|**TUNNELLING_FEATURE_GET**|available|available|
|<br>**TUNNELLING_FEATURE_SET**|E_ACCESS_READ_ONLY|E_ACCESS_READ_ONLY|
|<br>**TUNNELLING_FEATURE_INFO**|<br>available|<br>available|


-----

##### 3.6.5 Interface Feature 04: KNX Manufacturer Code
**Definition**

Please refer to the common definition of this Interface Feature in [10].

**Access for implementation in the KNXnet/IP Tunnelling Server**

Please refer to [09] for the mandatory and optional support of this Interface Feature in the KNXnet/IP
Tunnelling Server and for the common minimal availability requirements. These are adjusted by the
below.

**Table 4 – Tunnelling Feature service availability matrix for the Interface Feature 04**

**Security Mode**

**Tunnelling Feature service** **Disabled / not present** **Enabled**

**TUNNELLING_FEATURE_GET** available available

**TUNNELLING_FEATURE_SET** E_ACCESS_READ_ONLY E_ACCESS_READ_ONLY

**TUNNELLING_FEATURE_INFO** not available not available

##### 3.6.6 Interface Feature 05: Active EMI type
**Definition**

Please refer to the common definition of this Interface Feature in [10].

According clause 2.2.1, only cEMI is allowed for KNXnet/IP Tunnelling, so, only this value shall be
reported.

**Access for implementation in the KNXnet/IP Tunnelling Server**

Please refer to [09] for the mandatory and optional support of this Interface Feature in the KNXnet/IP
Tunnelling Server and for the common minimal availability requirements. These are adjusted by the
below.

**Table 5 – Tunnelling Feature service availability matrix for the Interface Feature 01**

**Security Mode**

**Tunnelling Feature service** **Disabled / not present** **Enabled**

**TUNNELLING_FEATURE_GET** available available

**TUNNELLING_FEATURE_SET** E_ACCESS_READ_ONLY E_ACCESS_READ_ONLY

**TUNNELLING_FEATURE_INFO** not available not available

|Col1|Security Mode|Col3|
|---|---|---|
|**Tunnelling Feature service**|**Disabled / not present**|**Enabled**|
|**TUNNELLING_FEATURE_GET**|available|available|
|<br>**TUNNELLING_FEATURE_SET**|E_ACCESS_READ_ONLY|E_ACCESS_READ_ONLY|
|<br>**TUNNELLING_FEATURE_INFO**|<br>not available|<br>not available|

|Col1|Security Mode|Col3|
|---|---|---|
|**Tunnelling Feature service**|**Disabled / not present**|**Enabled**|
|**TUNNELLING_FEATURE_GET**|available|available|
|<br>**TUNNELLING_FEATURE_SET**|E_ACCESS_READ_ONLY|E_ACCESS_READ_ONLY|
|<br>**TUNNELLING_FEATURE_INFO**|<br>not available|<br>not available|


-----

##### 3.6.7 Interface Feature 06: Interface Individual Address
**Definition**

Please refer to the common definition of this Interface Feature in [10].

This Feature shall be the Individual Address that is used by this Tunnelling Connection.

**Access for implementation in the KNXnet/IP Tunnelling Server**

Please refer to [09] for the mandatory and optional support of this Interface Feature in the KNXnet/IP
Tunnelling Server and for the common minimal availability requirements. These are adjusted by the
below.

**Table 6 – Tunnelling Feature service availability matrix for the Interface Feature 06**

**Security Mode**

**Tunnelling Feature service** **Disabled / not present** **Enabled**

**TUNNELLING_FEATURE_GET** available available

**TUNNELLING_FEATURE_SET** available E_ACCESS_READ_ONLY

**TUNNELLING_FEATURE_INFO** available available

- **TUNNELLING_FEATURE_GET**
This IA is already known to the Tunnelling Client as it is part of the CRD that is returned by the
Tunnelling Server when the connection is established. However, this feature can at any time be read
(TUNNELLING_FEATURE_GET).

- **TUNNELLING_FEATURE_SET**
This Feature is mainly designed to allow changing the IA (TUNNELLING_FEATURE_SET) if the
Tunnelling Server is not secured. If the Tunnelling Server is secured, then this IA cannot be changed,
unless through a Device Management connection.

Prior to changing the IA of a Tunnelling connection, the Tunnelling Client shall check whether the
intended IA is free in the target KNX network. The Tunnelling Client shall not set an IA as Tunnelling IA
that is occupied in the KNX network.

- If the Tunnelling Client requests setting a different IA for this Tunnelling Connection, then the
Tunnelling Server shall check whether this is IA is not already used inside the Tunnelling Server.

   - If the requested IA is contained in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES or if the
requested IA equals the IA of the host device then the Return Code in the
TUNNELLING_FEATURE_RESPONSE shall be E_DATA_VOID; the Feature Identifier and
the Feature Value shall be copied from the request.

- **TUNNELLING_FEATURE_INFO**
The Tunnelling IA shall also be evented with the TUNNELLING_FEATURE_INFO service, to allow for
the following.

   - It signals to the Tunnelling Client that its Tunnelling Address has changed by any other Client.

   - It signals to the Tunnelling Client the success of an own preceding change of the IA over a
TUNNELLING_FEATURE_SET, this is, the moment at which the new IA becomes effective.

|Col1|Security Mode|Col3|
|---|---|---|
|**Tunnelling Feature service**|**Disabled / not present**|**Enabled**|
|**TUNNELLING_FEATURE_GET**|available|available|
|<br>**TUNNELLING_FEATURE_SET**|available|E_ACCESS_READ_ONLY|
|<br>**TUNNELLING_FEATURE_INFO**|available|<br>available|


-----

##### 3.6.8 Interface Feature 07: Max APDU Length
**Definition**

Please refer to the common definition of this Interface Feature in [10].

This Feature shall be the maximal APDU-length that the KNXnet/IP server supports for tunnelling
messages from IP to the field medium. The contents and format (PDT_UNSIGNED_INT, U16) shall be
identical as the value of PID_MAX_INTERFACE_APDU_LENGTH (PID: 68) in the cEMI Server
Object.

**Access for implementation in the KNXnet/IP Tunnelling Server**

Please refer to [09] for the mandatory and optional support of this Interface Feature in the KNXnet/IP
Tunnelling Server and for the common minimal availability requirements. These are adjusted by the
below.

**Table 7 – Tunnelling Feature service availability matrix for the Interface Feature 07**

**Security Mode**

**Tunnelling Feature service** **Disabled / not present** **Enabled**

**TUNNELLING_FEATURE_GET** available available

**TUNNELLING_FEATURE_SET** E_ACCESS_READ_ONLY E_ACCESS_READ_ONLY

**TUNNELLING_FEATURE_INFO** not available not available

##### 3.6.9 Interface Feature 08: Interface Feature Info service Enable
**Definition**

This Interface Feature shall control whether or not the interface sends TUNNELLING_FEATURE_INFO
to the Client or not.

**Encoding**

The Feature shall be encoded according DPT_Enable (1.003).

**Encoding** **Value** **Definition**

0 Disable The interface shall not send Info services.

1 Enable The interface shall send Info services for the supported Interface
Features.

If the value has the value “Disable” then the Interface shall not send or immediately stop sending any
TUNNELLING_FEATURE_INFO.

If the feature has the “Enable” then the Interface shall send or start sending TUNNELLING_FEATURE_INFO as specified for the implemented Features.

The default value shall be “Disable”. This shall be the value after reset of the interface.

|Col1|Security Mode|Col3|
|---|---|---|
|**Tunnelling Feature service**|**Disabled / not present**|**Enabled**|
|**TUNNELLING_FEATURE_GET**|available|available|
|<br>**TUNNELLING_FEATURE_SET**|E_ACCESS_READ_ONLY|E_ACCESS_READ_ONLY|
|<br>**TUNNELLING_FEATURE_INFO**|<br>not available|<br>not available|

|Encoding|Value|Definition|
|---|---|---|
|0|Disable|The interface shall not send Info services.|
|1|Enable|The interface shall send Info services for the supported Interface<br>Features.|


-----

**Access for implementation in the KNXnet/IP Tunnelling Server**

Please refer to [09] for the mandatory and optional support of this Interface Feature in the KNXnet/IP
Tunnelling Server and for the common minimal availability requirements. These are adjusted by the
below.

**Table 8 – Tunnelling Feature service availability matrix for the Interface Feature 08**

**Security Mode**

**Disabled / not**

**Enabled**

**Tunnelling Feature service** **present**

**TUNNELLING_FEATURE_GET** available available

**TUNNELLING_FEATURE_SET** available available

**TUNNELLING_FEATURE_INFO** not available not available

**Requirements for the KNXnet/IP Tunnelling Server**

This Feature shall be implemented separately and independently for each possible Tunnelling connection.

If a Tunnelling Connection opens, the Tunnelling Server shall set the value to “Disable” for that
Tunnelling Connection.

While the Tunnelling Connection is open, the value can only be set to “Enable” for that Tunnelling
Connection by the Tunnelling Client over a TUNNELLING_FEATURE_SET and shall then remain
enabled until the Client disables it again or until the Tunnelling Connection closes.

If the Tunnelling closes, regardless of the condition[ 3)], then the Tunnelling Server shall set the value to
“Disable”.

3) Closed by the Tunnelling Client, by the Tunnelling Server, timeout, reset, power-down or other.

|Col1|Security Mode|Col3|
|---|---|---|
|**Tunnelling Feature service**|**Disabled / not**<br>**present**|**Enabled**|
|**TUNNELLING_FEATURE_GET**|available|available|
|<br>**TUNNELLING_FEATURE_SET**|available|available|
|<br>**TUNNELLING_FEATURE_INFO**|not available|not available|


-----

### 4 Configuration and Management

#### 4.1 General
General device management and configuration of KNXnet/IP devices is specified in [06].

KNXnet/IP Tunnelling does not require any configuration beyond the general device management.

#### 4.2 IA assignment for KNXnet/IP Tunnelling connections

##### 4.2.1 Goal
The goal of this procedure is to change the Individual Address used for a KNXnet/IP Tunnelling
Connection to an Individual Address IAreq provided by the ETS user.

##### 4.2.2 Prerequisites
1. The KNXnet/IP Tunnelling Client shall not assign an IAreq for which the Device Address part is 00h.

NOTE 5 The responsibility for this lies with the Management Client. In the Management Server definition for the
Individual Address and PID_ADDITIONAL_INDIVIDUAL_ADDRESSES no error handling is foreseen for values of any entry
with Device Address 00h.

2. Form 2.2.2: a KNXnet/IP Router shall not use its own IA as KNXnet/IP Tunnelling IA. However,
other IAs with Device Address part 00h can still be used if these are not used by other Couplers in the
installation. The Device Address part of CRD.IA can thus be 00h.
(CRD.IA is at any time the IA assigned to the KNXnet/IP Tunnelling Connection.)

NOTE 6 This second prerequisite is mainly intended to take into account KNXnet/IP Tunnelling Clients that do not
respect the first prerequisite. It is not a wanted situation that an additional Tunnelling Address in a KNXnet/IP Router has the
Device Address part 00h. The Tunnelling Address would then be topologically not be correct, because the KNXnet/IP Tunnelling
Server is logically linked to the Subnetwork at the secondary side of the KNXnet/IP Router and should therefore also have the
same Subnetwork Address as the KNXnet/IP Router, in line with the IAs of the Subnetwork at the secondary side.

3. The procedure below firstly handles the PID_ADDITIONAL_INDIVIDUAL_ADDRESSES in the
KNXnet/IP Server Object and then only PID_INDIVIDUAL_ADDRESS in the Device Object. It is
recommended practice that the KNXnet/IP Server that supports more than one KNXnet/IP Tunnelling
connection, does not use the own Individual Address (PID_INDIVIDUAL_ADDRESS) for
KNXnet/IP Tunnelling.

##### 4.2.3 Procedure

###### 4.2.3.1 General
It is the intention that the KNXnet/IP Tunnelling Client executes the steps in the clause 4.2.3 one after the
other.

###### 4.2.3.2 Step 1: Establish a KNXnet/IP Tunnelling connection to the device and get the IA used for the KNXnet/IP Tunnelling Connection
This is the KNXnet/IP Tunnelling Connection of which the IA will be changed. If the KNXnet/IP
Tunnelling connection is already open, then this step shall be skipped and the existing KNXnet/IP
Tunnelling connection shall be used.

/* The KNXnet/IP Client builds up a KNXnet/IP Tunnelling connection */
/* to the KNXnet/IP Tunnelling Server. */
/* The KNXnet/IP Tunnelling Server returns the used IA as part of the CRD in the response. */
DMP_KNXnet/IP_Connect(dmp_HPAIControlEndpoint, dmp_HPAIDataEndpoint,

dmp_CRI = TUNNEL_CONNECTION, dmp_CommChannelID, dmp_Status, dmp_HPAIServerDataEndpoint,
dmp_CRD)


-----

If IAreq = dmp_CRD.IA then the procedure can be halted here: the used IA is the requested IAreq.

###### 4.2.3.3 Read operations

4.2.3.3.1 Step 2: Build up a KNXnet/IP Management Connection

/* The KNXnet/IP Client builds up a KNXnet/IP Device Management connection */
/* to the KNXnet/IP Tunnelling Server. */
DMP_KNXnet/IP_Connect(dmp_HPAIControlEndpoint, dmp_HPAIDataEndpoint,

dmp_CRI = DEVICE_MGT_CONNECTION, dmp_CommChannelID, dmp_Status,
dmp_HPAIServerDataEndpoint, dmp_CRD)

4.2.3.3.2 Step 3: Read the additional IAs of the KNXnet/IP Tunnelling Server

NOTE 7 The Additional Individual Addresses IAadditional[] are read firstly and then only the IAdevice is read. This fits best to the
models B and C in Figure 1, in which the KNXnet/IP Tunnelling Server does not use its own device Individual Address as KNXnet/IP
Tunnelling Address.

DMP_InterfaceObjectRead_IP(mpp_Obj.Type = KNXnet/IP Parameter Object, mpp_Obj.Inst = 1,

mpp_Prop.ID = PID_ADDITIONAL_INDIVIDUAL_ADDRESSES, IAadditional[] = mpp_Prop.Value,
IAadditionalNr = mpp_Prop.CurrentNr)

NOTE 8 In this procedure, it is assumed that there is only one instance of the KNXnet/IP Parameter Object. Implementations
with more than one instance of this Interface Object, e.g. with more than one IP connection, are not yet considered in this
specification.

The resulting information is the list of additional Individual Addresses, IAadditional[], that is maintained
by this KNXnet/IP Tunnelling Server. This list shall be queried for the presence of two values.

1. The CRD.IA used for the open KNXnet/IP Tunnelling connection.
2. The IAreq requested by the ETS user.
**1. Search CRD.IA in IAadditional[]**

The CRD.IA should be searched in this list IAadditional[]. There are three possible results.

a. CRD.IA is found exactly once in IAadditional[].
b. CRD.IA is found more than once IAadditional[].
c. CRD.IA is not found at all in IAadditional[].

**a. CRD.IA is found once at the index CRD.IAindex**

ETS shall write IAreq in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES at this index
CRD.IAindex according 4.2.3.5.2.

This shall be regardless of whether it is in 4.2.3.3.3 found that CRD.IA would also match
IAdevice.

**b. CRD.IA is found more than once**

If CRD.IA is found more than once in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES[]
then ETS shall write IAreq at the lowest index where it is found in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES at this index CRD.IAindex according 4.2.3.5.2.

This shall be regardless of whether it is in 4.2.3.3.3 found that CRD.IA would also match
IAdevice.

NOTE 9 This can be the case if a newly installed KNXnet/IP Tunnelling Server has all array elements of
PID_ADDITIONAL_INDIVIDUAL_ADDRESSES[] for instance filled with FFFFh.


-----

NOTE 10 It may be that the index CRD.IA is not the index of the entry for CRD.IA that is taken by the
KNXnet/IP Tunnelling Server for this connection. This is only possible in the very rare case that one or more other
KNXnet/IP Tunnelling Clients would manage the Additional Individual Addresses in parallel and uses the same value for
its IAreq.


KNXnet/IP
Tunnelling Client


KNXnet/IP
Tunnelling Server


⇓
CRD.IAindex = 1 !


CRD.IA = 1.1.7


IAdevice


1.1.7


1.1.5


1.1.10


IA2


**Figure 2 – Selection of CRD.IAindex**

**c. CRD.IA is not found in IAadditional[]**

In this case, CRD.IA should match IAdevice. IAdevice shall be read according 4.2.3.3.3.

**2. Check for the possible presence of IAreq in IAadditional[]**

- If also IAreq is in this list, then it is possible that IAreq is already used by another, open KNXnet/IP
Tunnelling connection. It cannot be discovered whether or not this is the case. Therefore, IAreq cannot
be used as IA for this KNXnet/IP Tunnelling Connection.

ETS should report that the chosen IAreq may currently not be possible and request the ETS user to
select a different IAreq. The procedure is exit here.

- If IAreq is not present in this list, then it still may be that IAreq equals the IAdevice of the KNXnet/IP
Tunnelling Server device. Therefore, IAdevice shall in any case be read.

4.2.3.3.3 Step 4: Read the IAdevice of the KNXnet/IP Tunnelling Server

/* Read PID_KNX_INDIVIDUAL_ADDRESS in the KNXnet/IP Parameter Object */
/* of the KNXnet/IP Tunnelling Server. */
DMP_InterfaceObjectRead_IP(mpp_Obj.Type = KNXnet/IP Parameter Object, mpp_Obj.Inst = 1

mpp_Prop.ID = PID_KNX_INDIVIDUAL_ADDRESS, IAdevice = mpp_Prop.Value, 1)

The response shall be subject to a sequence of tests.

**1. Check if IAdevice equals CRD.IA**

If IAdevice = CRD.IA then the device uses its own IA as Tunnelling Address for this KNXnet/IP
Connection.

NOTE 11 This is the typical case for a KNXnet/IP Tunnelling Server that supports only a single KNXnet/IP Tunnelling
Connection. Obviously, this can however also occur for a KNXnet/IP Tunnelling Server that supports more than one
KNXnet/IP Tunnelling connection.

If all below tests prove positive, the assignment shall then be done by writing PID_KNX_INDIVIDUAL_ADDRESS as specified in 4.2.3.5.3.

**2. Check if IAdevice equals IAreq**

If thus IAdevice ≠ CRD.IA but however IAdevice = IAreq then the device already has the IA requested
for the KNXnet/IP Tunnelling connection, but did not assign it to this KNXnet/IP Tunnelling Client,
e.g. as another KNXnet/IP Tunnelling connection using IAdevice already stands.


KNXnet/IP
Tunnelling Client


IAadditional[]


1.1.8


IA1


-----

KNXnet/IP
Tunnelling Client


KNXnet/IP
Tunnelling Server


KNXnet/IP
Tunnelling Server


IAadditional[]


IAreq


1.1.5


1.1.8


IA2


IA3


**Figure 3 – CRD.IA ≠ IAdevice but IAreq = IAdevice**

ETS should report to the ETS user that the requested IAreq is used as the own IA of the KNXnet/IP
Tunnelling Server and is not used for the KNXnet/IP Tunnelling Connection. It can propose to
change IAreq.

The procedure is exit here.

###### 4.2.3.4 Tests

4.2.3.4.1 Step 5: Compare with IAdevice
IAreq shall be compared with IAdevice. If the Subnetwork Address is different, then ETS should signal this
to the ETS user and request the user to select a different IAreq with the same Subnetwork Address as in
IAdevice. This is certainly relevant if the KNXnet/IP Tunnelling Server is hosted in a KNXnet/IP Router.

NOTE 12 This should only be a warning. It should always be possible to use a KNXnet/IP Tunnelling Address (IAreq) with an SNA
that is not identical to the SNA that is not identical to the SNA of the KNXnet/IP Tunnelling Server (IAdevice).

NOTE 13 This is only a consistency measure when assuming a new KNXnet/IP Tunnelling Address. If the Subnetwork Address of
the KNXnet/IP Tunnelling Server changes later on, there is no requirement towards the KNXnet/IP Tunnelling that it “corrects” any
of its KNXnet/IP Tunnelling IAs.

4.2.3.4.2 Step 6: Read suitable SNAs from the Couplers
Another, possible, additional way to check whether an IAreq contains a valid Subnetwork Address is by
reading it from the Router.

/* This procedure will always work independently of any IA used by the KNXnet/IP Tunnelling Server */
/* as it uses broadcast communication mode. */
NM_NetworkParameter_Read_R(hop_count_type_req = 0, object_type = Device Object,

PID = PID_SUBNET_ADDR, test_info = 00h, comm_mode_res = broadcast, hop_count_type_res = 0,
result_data[])

The Couplers that are with their primary or secondary side in the same segment as the KNXnet/IP
Tunnelling Server will reply at that side. From the number and values of result_data[], the topological
position of the KNXnet/IP Server can be concluded and it can be concluded if IAreq would be a suitable
IA. Please refer to “SNA Read” in [02].

The KNXnet/IP Tunnelling Client should have a time-out on the bus[ 4)] for collecting any answer of at
least 3 s.

4) This is the time on the bus between the transmission of the request and the reception of the answer. the
KNXnet/IP Tunnelling Client should take into account the times needed for Datagrams on IP to travel forth and
back to the KNXnet/IP Tunnelling Server.


KNXnet/IP
Tunnelling Client


IAdevice


1.1.7


IA1


-----

4.2.3.4.3 Step 7: Check whether IAreq is free
If IAreq is not found in the KNXnet/IP Tunnelling Server, then it has to be tested whether IAreq is an
acceptable IA.

NOTE 14 The following procedure may use the actual standing KNXnet/IP Tunnelling Connection. This procedure will not be
possible however if that connection is not Tunnelling on Data Link Layer; ETS should give a warning that this test about uniqueness
of the IAreq cannot be performed.

/* The KNXnet/IP Tunnelling Client uses its KNXnet/IP Tunnelling Connection */
/* to call the next procedure. */
NM_IndividualAddress_Check(IA_test = IAreq)

If this results positive, then it is sure that IAreq is used in the Subnetwork and cannot be chosen. ETS
should signal this to the ETS user and request the user to select a different IAreq. The Configuration
Procedure is stopped here and restarted from the beginning if the ETS user selects a different IAreq.

If this results negative, then it is not guaranteed that IAreq is really a free IA, namely if IAreq does not have
a suitable SNA, the present Routers do not support SNA-reading or have incorrect SNAs. With the
preceding tests, this risk should be minimal.

###### 4.2.3.5 Step 8: Assignment of IAreq

4.2.3.5.1 General
IAreq shall be written in the KNXnet/IP Tunnelling Server by one of the below procedures. Which
procedure shall be applied depends on where CRD.IA has been found. This is given in the read operations
in 4.2.3.3.

4.2.3.5.2 Assignment via PID_KNX_ADDITIONAL_INDIVIDUAL_ADDRESSES[]
PID_ADDITIONAL_INDIVIDUAL_ADDRESSES does not need to be sorted. In the following, the IAreq
can thus be written at the Property Value array element where CRD.IA has been found before, this is
CRD.IAindex, without further re-arranging (resorting) the remaining Property Value array elements.

If CRD.IA is found at multiple indexes, then IAreq shall be changed at the lowest index.

/* Change the Property Array Element of PID_ADDITIONAL_INDIVIDUAL_ADDRESSES[] /*
/* where CRD.IA is found above: at CRD.IAindex */
DMP_InterfaceObjectWrite_IP(mpp_Obj.Type = KNXnet/IP Parameter Object, mpp_Obj.Inst = 1,

mpp_Prop.ID = PID_ADDITIONAL_INDIVIDUAL_ADDRESSES, mpp_Prop.Value = IAreq,
mpp_Prop.StartIndex = CRD.IAindex, mpp_Prop.NrOfElem = 1, mpp_ErrorCode)

The KNXnet/IP Tunnelling Server shall apply and use the newly assigned IAreq immediately, without
requiring a restart. The M_PropWrite.con contained in this procedure DMP_InterfaceObjectWrite_IP
shall be the confirmation that the KNXnet/IP Tunnelling Address has changed and is used.

4.2.3.5.3 Assignment via PID_INDIVIDUAL_ADDRESS

NOTE 15 The below procedure will be used if the KNXnet/IP Tunnelling Server has used its own IA as Tunnelling Address. A
KNXnet/IP Router shall not use its own IA for KNXnet/IP Tunnelling connections (see Figure 1-C), in the below it is not necessary to
check whether the KNXnet/IP Tunnelling Server is in a KNXnet/IP Router.

/* Change the IA of the KNXnet/IP Tunnelling Server. /*
DMP_InterfaceObjectWrite_IP(mpp_Obj.Type = KNXnet/IP Parameter Object, mpp_Obj.Inst = 1,

mpp_Prop.ID = PID_KNX_INDIVIDUAL_ADDRESS, mpp_Prop.Value = IAreq,
mpp_Prop.StartIndex = 1, mpp_Prop.NrOfElem = 1, mpp_ErrorCode)


-----

###### 4.2.3.6 Closing the procedure
The modified Tunnelling Address shall apply immediately.

The Management Client shall close the established KNXnet/IP Device Management connection if it is no
longer needed.

**Further requirements**

- ETS shall not execute any restart after any of these Procedures.

#### 4.3 Handling of E_NO_MORE_UNIQUE_CONNECTIONS by the KNXnet/IP Tunnelling Client
If a KNXnet/IP Tunnelling Servers returns a KNXnet/IP Tunnelling CONNECT_REQUEST with a
CONNECT_RESPONSE with the error constant E_NO_MORE_UNIQUE_CONNECTIONS then this
means that the KNXnet/IP Tunnelling Server could provide a connection (in contrast to error constant
E_NO_MORE_CONNECTIONS) if only the KNXnet/IP Tunnelling Address that would be assigned to
the connection would be unique. Then the client (ETS) shall behave as follows.

1. Build up a KNXnet/IP Management Connection as specified in 4.2.3.3.1.

2. Read the additional IAs (PID_ADDITIONAL_INDIVIDUAL_ADDRESS) of the KNXnet/IP
Tunnelling Server as specified in 4.2.3.3.2.

3. In the results, search for the first occurrence of a duplicate KNXnet/IP Tunnelling Address.

      - If at least one double entry is found, let this be the address IAmultiple at index IAmuliple.index.

NOTE 16 There may be more than one IA that appears multiple times in the list. Only the first found IA will
however be handled.

      - If no double entry is found, continue at 4b.
4. Report to the ETS user that the KNXnet/IP Tunnelling device does not accept the KNXnet/IP
Tunnelling connection because the Individual Address IAmultiple is used multiple times within the
KNXnet/IP Tunnelling device. The user must then provide a different value for that Individual
Address. Let this address be IAunique. ETS shall evaluate IAunique according the tests specified in
4.2.3.4.

5. Using KNXnet/IP Device Management, replace the second instance of IAmultiple with IAunique
with the method as specified in 4.2.3.5.2.

NOTE 17 Only the second instance is changed and not the first one or any further instance: if the error
E_NO_MORE_UNIQUE_CONNECTIONS is returned, it is very likely that the first instance is used by an open
KNXnet/IP Tunnelling Connection, of which the IA should not be changed (unless by the KNXnet/IP Tunnelling Client
that owns that connection).

6. Retry establishing a KNXnet/IP Tunnelling Connection to the KNXnet/IP Tunnelling Server.
This may have the following results.
      - If this retry is successful, this KNXnet/IP Tunnelling Connection can be used and the
procedure is closed here.
      - If this retry returns again in E_NO_MORE_UNIQUE_CONNECTIONS, then the above
procedure shall be repeated from 2.
      - If this retry results in other errors (e.g. E_NO_MORE_CONNECTIONS) then these shall
be handled as specified for these errors.

**PID_ADDITIONAL_INDIVIDUAL_ADDRESS does not contain any double entry**

4b. Read the IAdevice of the KNXnet/IP Tunnelling Server as specified in 4.2.3.3.3.

NOTE 18 IAdevice should match at least one entry in the before read PID_ADDITIONAL_INDIVIDUAL_ADDRESS. If not, this would indicate a KNXnet/IP Tunnelling Server error.


-----

5b. If IAdevice equals FFFFh, then ETS shall request the ETS user to enter a new value for IAdevice.
Let this address be IAunique. ETS shall only accept a value complying with the following.
   - It shall not conflict with any other used Individual Address in the installation.
   - It shall not be present in the list of additional Individual Addresses PID_ADDITIONAL_INDIVIDUAL_ADDRESS.

ETS shall evaluate IAunique according to the tests specified in 4.2.3.4.2 and 4.2.3.4.3.

ETS shall change the IA of the KNXnet/IP Tunnelling Server, by setting PID_INDIVIDUAL_ADDRESS to the value IAunique as specified in 4.2.3.5.3.

ETS shall retry establishing a KNXnet/IP Tunnelling Connection to the KNXnet/IP Tunnelling
Server. This may have the following results.
   - If this retry is successful, this KNXnet/IP Tunnelling Connection can be used and the
procedure is closed here.
   - If this retry returns again in E_NO_MORE_UNIQUE_CONNECTIONS, then the above
procedure shall be repeated from 2.
   - If this retry results in other errors (e.g. E_NO_MORE_CONNECTIONS) then these shall
be handled as specified for these errors.

6b. If IAdevice differs from FFFFh, all entries in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES
that equal PID_INDIVIDUAL_ADDRESS shall be set to FFFFh, using the procedure specified in
4.2.3.5.2.

ETS shall retry establishing a KNXnet/IP Tunnelling Connection to the KNXnet/IP Tunnelling
Server. This may have the following results.

   - If this retry is successful, this KNXnet/IP Tunnelling Connection can be used and the
procedure is closed here.
   - If this retry returns again in E_NO_MORE_UNIQUE_CONNECTIONS, then the above
procedure shall be repeated from 2.
   - If this retry results in other errors (e.g. E_NO_MORE_CONNECTIONS) then these shall
be handled as specified for these errors.


-----

### 5 Frame structures

#### 5.1 Introduction
All KNXnet/IP frames shall have a common header, consisting of the protocol version, length
information, and the KNXnet/IP service type identifier.

#### 5.2 Common constants
Refer to [04] for a list of valid KNXnet/IP common constants.

#### 5.3 Common error codes
Refer to [04] for a list of valid KNXnet/IP common error codes.

#### 5.4 KNX telegram tunnelling
KNXnet/IP Tunnelling shall be initiated by establishing a KNXnet/IP Tunnelling connection from the
KNXnet/IP Client, e.g. ETS, to the KNXnet/IP Server. Refer to [05] for details.

##### 5.4.1 KNXnet/IP services
Table 9 lists all valid KNXnet/IP service types for KNXnet/IP Tunnelling.

**Table 9 – Tunnelling KNXnet/IP service type identifiers**

**Service name** **Code** **V.** **Description**
TUNNELLING_REQUEST 0420h 1 Used for sending and receiving single KNX frames
between KNXnet/IP Client and - Server.
TUNNELLING_ACK 0421h 1 Sent by a KNXnet/IP Client or – Server to confirm the
reception of the TUNNELLING_REQUEST.
TUNNELLING_FEATURE_GET 0422h 2 Used by the KNXnet/IP Tunnelling Client to read out
the value of a feature from the KNXnet/IP Tunnelling
Server.
TUNNELLING_FEATURE_RESPONSE 0423h 2 Used by the KNXnet/IP Tunnelling Server to respond
to a feature set or gotten by the KNXnet/IP Tunnelling
Client.
TUNNELLING_FEATURE_SET 0424h 2 Used by the KNXnet/IP Tunnelling Client to set the
value of a feature of the KNXnet/IP Tunnelling Server.
TUNNELLING_FEATURE_INFO 0425h 2 Used by the KNXnet/IP Tunnelling Server to inform
the KNXnet/IP Tunnelling Client on a value of an
Interface Feature.

##### 5.4.2 Connection Type
The connection type value for the connection type TUNNEL_CONNECTION shall be 04h.

Refer to [05] for more details.

|Service name|Code|V.|Description|
|---|---|---|---|
|TUNNELLING_REQUEST|0420h|1|Used for sending and receiving single KNX frames<br>between KNXnet/IP Client and- Server.|
|TUNNELLING_ACK|0421h|1|<br>Sent by a KNXnet/IP Client or – Server to confirm the<br>reception of the TUNNELLINGREQUEST.|
|TUNNELLING_FEATURE_GET|0422h|2|_<br>Used by the KNXnet/IP Tunnelling Client to read out<br>the value of a feature from the KNXnet/IP Tunnelling<br>Server.|
|TUNNELLING_FEATURE_RESPONSE|0423h|2|<br>Used by the KNXnet/IP Tunnelling Server to respond<br>to a feature set or gotten by the KNXnet/IP Tunnelling<br>Client.|
|TUNNELLING_FEATURE_SET|0424h|2|<br>Used by the KNXnet/IP Tunnelling Client to set the<br>value of a feature of the KNXnet/IP Tunnelling Server.|
|TUNNELLING_FEATURE_INFO|0425h|2|<br>Used by the KNXnet/IP Tunnelling Server to inform<br>the KNXnet/IP Tunnelling Client on a value of an<br>Interface Feature.|


-----

##### 5.4.3 Connection Request Information (CRI)

###### 5.4.3.1 Basic CRI
The Basic Connection Request Information (CRI) shall contain the requested Tunnelling KNX layer.
```
            +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
            |  Structure Length      |  TUNNEL_CONNECTION      |
            |  (1 octet = 04h)       |  (1 octet = 04h)       |
            +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
            |  KNX Layer          |  reserved          |
            |  (1 octet)          |  (1 octet)          |
            +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+

```
**Figure 4 – Tunnelling CRI binary format**

**Table 10 – Tunnelling KNX layers**

**Constant name** **Value** **V.** **Description**
TUNNEL_LINKLAYER 02h 1 Establish a Data Link Layer tunnel to the KNX network.
TUNNEL_RAW 04h 1 Establish a raw tunnel to the KNX network.
TUNNEL_BUSMONITOR 80h 1 Establish a Busmonitor tunnel to the KNX network.

**Table 11 – Tunnelling CONNECT_ACK error codes**

**Error constant** **Value** **V.** **Description**
E_NO_ERROR 00h 1 The message was received successfully.
E_TUNNELLING_LAYER 29h 1 The requested tunnelling layer is not supported by the
KNXnet/IP Server device.

###### 5.4.3.2 Extended CRI
The Extended Connection Request Information (CRI) shall contain the requested Tunnelling KNX layer
and the IA that the Client requests to be used on the field medium for the requested Tunnelling
connection.

NOTE 19 It is not possible for the Tunnelling Client to enter a “don’t care” value for the IA. If the Tunnelling
Client wants to open a Tunnelling connection without requesting any specific IA, it has to use a Basic CRI.
```
            +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
            |  Structure Length      |  TUNNEL_CONNECTION      |
            |  (1 octet = 06h)       |  (1 octet = 04h)       |
            +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
            |  KNX Layer          |  reserved          |
            |  (1 octet)          |  (1 octet)          |
            +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
            |  Individual Address                     |
            |  (2 octets)                         |
            +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+

```
**Figure 5 – Extended CRI binary format**

|Constant name|Value|V.|Description|
|---|---|---|---|
|TUNNELLINKLAYER|02h|1|Establish a Data Link Layer tunnel to the KNX network.|
|_<br>TUNNELRAW|<br>04h|<br>1|<br>Establish a raw tunnel to the KNX network.|
|_<br>TUNNELBUSMONITOR|<br>80h|<br>1|<br>Establish a Busmonitor tunnel to the KNX network.|

|Error constant|Value|V.|Description|
|---|---|---|---|
|ENOERROR|00h|1|The message was received successfully.|
|__<br>E_TUNNELLING_LAYER|<br>29h|<br>1|<br>The requested tunnelling layer is not supported by the<br>KNXnet/IP Server device.|


-----

###### 5.4.3.3 Evaluation of the Connection Request Information by the KNXnet/IP Tunnelling Server

5.4.3.3.1 Basic flowchart

NOTE Implementation specific additional criteria for refusing a Tunnelling connection may exist. See 5.4.3.3.3.

**Figure 6 – Tunnelling v2 connection establishment**

NOTE 20 This flow chart specifies the establishment of a Tunnelling connection; with the Extended CRI, it
allows requesting a Tunnelling Address. This does not allow changing the IA of an already established Tunnelling
connection: that can only be performed through an authorised KNXnet/IP Device Management Connection accessing
PID_ADDITIONAL_INDIVIDUAL_ADDRESSES or through the Tunnelling Feature services (see 3).


-----

5.4.3.3.2 Definitions
1. **CONNECT_REQUEST for Tunnelling**

At this point, it is assumed that if a Secure Session is used, that it is established at this point
and that the User ID of the user is known.

If the Tunnelling Connection is requested outside the scope of a Secure Session, then the
user is anonymous.

2. **Is Tunnelling a secured service family?**

To this, the Tunnelling Server shall evaluate PID_SECURED_SERVICE_FAMILIES and
check if the Security Version equals 00h or not. Please refer to [08].

3. **User Authenticated?**

This is only the verification if the User ID of the requesting Client is contained in
PID_TUNNELLING_USERS, this is, if the Client is at all authorised to use Tunnelling in
this MaS. This may lead to the error E_CONNECTION_TYPE if the Client requests a
Connection Type (in this case Tunnelling) for which it is not configured.

In case of an Extended CRI, it is here not yet verified if the Client is allowed to use the
requested Tunnelling Address; this is only verified in 7 and may lead to the error
E_AUTHORISATION_ERROR.

4.a If connections are available, but the requested Tunnelling Layer is not supported, then the
Tunnelling Server shall reply with E_TUNNELLING_LAYER.

4.b The Tunnelling Server shall refuse Tunnelling connections requesting Raw Mode if the
Security Mode is “enabled”. This shall be independent of

        - whether KNXnet/IP Tunnelling is a secured service or not

Even if Tunnelling would not be a secured service, if Security Mode is
enabled, a Raw Mode access will be refused.

        - or if the Management Level access is used or not.

Also the properly authorised Management Level access shall not be able to
use Raw Mode if Security Mode is enabled.

The Tunnelling Server shall refuse with E_CONNECTION_OPTION.

NOTE 21 This also means that the requesting Client cannot differentiate between whether the
Server does not support Raw Mode or whether Raw Mode is refused because Security Mode is
enabled.

5.4.3.3.2.1 Evaluation of the Extended CRI
6. **Is IArequest a Tunnelling Address?**

It shall be evaluated if IArequest is explicitly defined to be a Tunnelling Address.

EXAMPLE 1 This test will fail in the following cases.
A. It is one of the Additional Individual Addresses of the Tunnelling host device, but
is not a Tunnelling Address.
B. The address is nowhere used in the device.
E_NO_TUNNELLING_ADDRESS shall mean that the requested IA is no IA that has been
assigned for Tunnelling to the requested Client.


-----

7. **Is Tunnelling not a Secured Service or Is IArequest a Tunnelling Address for this Client?**

This check shall be positive

a. if Tunnelling is not a secured service family, or
b. if Tunnelling is a secured service family and the Client is authorised to use
IArequest

This shall be positive if the requesting Client through
PID_TUNNELLING_USERS linked to an entry in
PID_TUNNELLING_ADDRESSES that refers to IArequest in
PID_ADDITIONAL_INDIVIDUAL_ADDRESSES.

The Client authorised with Management Level access shall have access to all
Tunnelling Addresses, also those available in
PID_TUNNELLING_ADDRESSES and not linked through
PID_TUNNELLING_USERS.

**Client Authorised to use IArequest?[a]**

**Secured Service?** **No** **Yes**

**No** continue continue

**Yes** E_AUTHORISATION_- continue
ERROR

a Client authorised to use IArequest can only be evaluated in a Secure Session.
Outside a Secure Session, this shall be ”no”.

NOTE 22 If KNXnet/IP Tunnelling is a Secured Service then there are no “freely usable”
Tunnelling Addresses, this is, there are no Tunnelling Addresses that can be used without any
authentication. With a “free address”’ it is thus meant “an address that is not occupied”.
NOTE 23 This will also make that if Tunnelling is a Secured Service the Tunnelling Addresses
can only be used by the appropriate Clients.
8. If the requested IA is available and the Client is authorised to use it, but it is in use for
another Tunnelling connection, by another or by the same client, then the Tunnelling server
shall respond with E_CONNECTION_IN_USE.

5.4.3.3.2.2 Evaluation of the Basic CRI
9. **Any IA available for User ID?**

The Tunnelling Server shall firstly compile a list of potential IAs for the Tunnelling
connection, regardless of whether any of these IAs is currently in use or not, for which the
requesting Client would be authorised.

   - If Tunnelling is not a secured service, then the Tunnelling Server shall check if any of
the addresses in PID_TUNNELLING_ADDRESSES is free.

E_NO_MORE_CONNECTIONS shall mean that no potential IA is found that can
be assigned to the Tunnelling Client.

   - If Tunnelling is a secured service, then the Tunnelling Server shall additionally limit its
search to those Tunnelling Addresses to which the Tunnelling Client is linked through
PID_TUNNELLING_USERS. This is only possible if the Client is properly
authenticated and thus requires a secure connection.

E_NO_MORE_CONNECTIONS shall mean that none of the Tunnelling
Addresses assigned to the Tunnelling Client is currently available.

|Secured Service?|Client Authorised to use IA ?a<br>request|Col3|
|---|---|---|
|**Secured Service?**|**No**|**Yes**|
|**No**|continue|continue|
|**Yes**|E_AUTHORISATION_-<br>ERROR|continue|


-----

5.4.3.3.3 Implementation specific connection request evaluation criteria
Implementation specific additional criteria may exist for not accepting a Tunnelling connection.

This criteria may be evaluated anywhere additionally in the flow chart.

If a Tunnelling Slot is not available because of implementation specific criteria, then this shall be
signalled in the field Usable in the Tunnelling Information DIB (see [05]).

EXAMPLE 2 The connection may be refused if the Tunnelling Server cannot connect to the (TP1) field level
medium. In that case, the error code E_KNX_CONNECTION shall be returned.
If a Tunnelling Connection is refused because implementation specific criteria, then the appropriate error
code shall be returned. If no appropriate error code exists, then E_ERROR (see [04]) shall be returned.

EXAMPLE 3 The Tunnelling connection may only be accepted from certain IP addresses, at a certain scheduled time, etc.

##### 5.4.4 Connection Response Data Block (CRD)
The Connection Response Data Block (CRD) shall contain the KNX Individual Address assigned to this
KNXnet/IP Tunnelling connection.
```
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Structure Length      |  TUNNEL_CONNECTION      |
          |  (1 octet = 04h)       |  (1 octet = 04h)       |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  KNX Individual Address |
          |  (2 Octets)                         |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+

```
**Figure 7 – Tunnelling CRI binary format**

##### 5.4.5 Connection header
```
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Structure Length      |  Communication Channel ID  |
          |  (1 octet)          |  (1 octet)          |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
           |  Sequence Counter      |  reserved         |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 8 – Tunnelling connection header binary format**


-----

##### 5.4.6 TUNNELLING_REQUEST
```
                        KNXnet/IP header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10       |  KNXNETIP_VERSION      |
          |  (06h)            |  (10h)            |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  TUNNELLING_REQUEST                     |
          |  (0420h)                           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10 + sizeof(Connection Header) +        |
          |    sizeof(cEMI Frame)                   |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
                         KNXnet/IP body
                        Connection header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Structure Length      |  Communication Channel ID  |
          |  (1 octet)          |  (1 octet)          |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
           |  Sequence Counter      |  reserved        |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
                          cEMI frame
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Message Code        |  Additional Info Length   |
          |  (1 octet = 08h)       |  (1 octet)          |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Additional Information                   |
          |  (optional, variable length)                 |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Service Information                     |
          |  (variable length)                      |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+

```
**Figure 9 – TUNNELLING_REQUEST frame binary format**

##### 5.4.7 TUNNELLING_ACK
```
                        KNXnet/IP header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10       |  KNXNETIP_VERSION      |
          |  (06h)            |  (10h)            |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
            |  TUNNELLING_ACK                    |
          |  (0421h)                           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10 + sizeof(Connection Header)         |
          |                   |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
                         KNXnet/IP body
                        Connection header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Structure Length      |  Communication Channel ID  |
          |  (1 octet)          |  (1 octet)          |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Sequence Counter      |  Status           |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 10 – TUNNELLING_ACK frame binary format**


-----

##### 5.4.8 TUNNELLING_FEATURE_GET
```
                        KNXnet/IP header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10       |  KNXNETIP_VERSION      |
          |  (06h)            |  (10h)            |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  TUNNELLING_FEATURE_GET                   |
          |  (0422h)                           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10 + sizeof(KNXnet/IP body)           |
          |                   |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
                         KNXnet/IP body
                        connection header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Structure Length      |  Communication Channel ID  |
          |  (1 octet)          |  (1 octet)          |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Sequence Counter      | reserved           |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
                         Feature service
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Feature Identifier     | reserved           |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 11 – TUNNELLING_FEATURE_GET frame binary format**

##### 5.4.9 TUNNELLING_FEATURE_RESPONSE
```
                        KNXnet/IP header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10       |  KNXNETIP_VERSION      |
          |  (06h)            |  (10h)            |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  TUNNELLING_FEATURE_RESPONSE                 |
          |  (0423h)                           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10 + sizeof(KNXnet/IP body)           |
          |                   |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
                         KNXnet/IP body
                        connection header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Structure Length      |  Communication Channel ID  |
          |  (1 octet)          |  (1 octet)          |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Sequence Counter      | reserved           |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
                         Feature service
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Feature Identifier     | Return Code          |
          |  (1 octet)          | (1 octet)           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Feature Value                        |
          |  (n octets)                         |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 12 – TUNNELLING_FEATURE_RESPONSE frame binary format**


-----

##### 5.4.10 TUNNELLING_FEATURE_SET
```
                        KNXnet/IP header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10       |  KNXNETIP_VERSION      |
          |  (06h)            |  (10h)            |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  TUNNELLING_FEATURE_SET                   |
          |  (0424h)                           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10 + sizeof(KNXnet/IP body)           |
          |                   |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
                         KNXnet/IP body
                        connection header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Structure Length      |  Communication Channel ID  |
          |  (1 octet)          |  (1 octet)          |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Sequence Counter      | reserved           |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
                         Feature service
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Feature Identifier     | reserved           |
          |  (1 octet)          | (1 octet)           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Feature Value                        |
          |  (n octets)                         |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 13 – TUNNELLING_FEATURE_SET frame binary format**

##### 5.4.11 TUNNELLING_FEATURE_INFO
```
                        KNXnet/IP header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10       |  KNXNETIP_VERSION      |
          |  (06h)            |  (10h)            |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  TUNNELLING_FEATURE_INFO                   |
          |  (0425h)                           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  HEADER_SIZE_10 + sizeof(KNXnet/IP body)           |
          |                   |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
                         KNXnet/IP body
                        connection header
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Structure Length      |  Communication Channel ID  |
          |  (1 octet)          |  (1 octet)          |
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Sequence Counter      | reserved           |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
                         Feature service
          +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
          |  Feature Identifier     | reserved           |
          |  (1 octet)          | (1 octet)           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Feature Value                        |
          |  (n octets)                         |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 14 – TUNNELLING_FEATURE_INFO frame binary format**


-----

### 6 Binary examples of KNXnet/IP frames

#### 6.1 TUNNELLING_REQUEST
```
     +-------------------------------+ - - - - KNXnet/IP header - - -   1   |       06h       |  header size
     +-------------------------------+
  2   |       10h       |  protocol version
     +-------------------------------+ 
  3   |       04h       | \ 
     +- - - - - - - - - - - - - - - -+ > service type identifier 0420h
  4   |       20h       | / 
     +-------------------------------+
  5   |       00h       | \ 
     +- - - - - - - - - - - - - - - -+ > total length, L+12 octets
  6   |      L+0Ch       | / 
     +-------------------------------+ - - - - connection header - - -   7   |       06h       |  structure length of connection header
     +-------------------------------+
  8   |       15h       |  communication channel ID, e.g. 21 
     +-------------------------------+
  9   |       00h       |  sequence counter
     +-------------------------------+
  10   |       00h       |  reserved
     +-------------------------------+ - - - - cEMI frame - - -   11   |       11h       |  message code (e.g. L_Data.req message)
     +-------------------------------+
  12   |       00h       |  additional information (none)
     +-------------------------------+
  13   |       ...       | \ 
     +-------------------------------+ |
  14   |       ...       | > Service Information (L bytes)
     +-------------------------------+ |
 L+12   |       ...       | /  
     +-------------------------------+

```
**Figure 15 – TUNNELLING_REQUEST frame binary format: example**

#### 6.2 TUNNELLING_ACK
```
     +-------------------------------+ - - - - KNXnet/IP header - - -   1   |       06h       |  header size
     +-------------------------------+
  2   |       10h       |  protocol version
     +-------------------------------+ 
  3   |       04h       | \ 
     +- - - - - - - - - - - - - - - -+ > service type identifier 0421h
  4   |       21h       | / 
     +-------------------------------+
  5   |       00h       | \ 
     +- - - - - - - - - - - - - - - -+ > total length, 10 octets
  6   |       0Ah       | / 
     +-------------------------------+ - - - - connection header - - -   7   |       04h       |  structure length of connection header
     +-------------------------------+
  8   |       15h       |  communication channel ID, e.g. 21 
     +-------------------------------+
  9   |       00h       |  sequence counter
     +-------------------------------+
  10   |       00h       |  status, e.g. 00h (NO_ERROR)
     +-------------------------------+

```
**Figure 16 – TUNNELLING_ACK frame binary format: example**


-----

### 7 Certification

#### 7.1 Introduction
This clause provides information on the test procedures and requirements of the certification process.

#### 7.2 Support matrix

**Service name** **sent from ... to ...** **implementation is**
TUNNELLING_REQUEST Client  Server M

(L_Data.req,

M_Reset.req)

Server  Client

(L_Data.con, L_Data.ind)

TUNNELLING_REQUEST Client  Server O

(L_Raw.req)

Server  Client

(L_Raw.con,

L_Raw.ind,

L_Busmon.ind)

TUNNELLING_ACK Client  Server M

Server  Client

Legend: “M” = Mandatory, “O” = Optional, “n.a.” = not applicable

|Service name|sent from ... to ...|implementation is|
|---|---|---|
|TUNNELLING_REQUEST|Client Server<br>(L_Data.req,<br> M_Reset.req)<br>Server Client<br>(L_Data.con, L_Data.ind)|M|
|TUNNELLING_REQUEST|Client Server<br>(L_Raw.req)<br>Server Client<br>(L_Raw.con,<br>L_Raw.ind,<br>L_Busmon.ind)|O|
|TUNNELLING_ACK|Client Server<br>Server Client|M|


-----

