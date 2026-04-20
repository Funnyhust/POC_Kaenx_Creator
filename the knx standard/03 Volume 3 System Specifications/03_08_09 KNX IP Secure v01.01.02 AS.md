# System Specifications

## KNXnet/IP

 KNX IP Secure

Summary

This document provides the KNX IP Secure specification.

Version 01.01.02 is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

01.01.01 2020.02.11 Creation of the document based on AN159 “KNX IP Secure” v06 AS.
2021.01.21 Corrected the numerical value for Return Code E_COMMAND_INVALID.
2021.10.08 Preparation for inclusion in the KNX Specifications v3.0.

#### References

A general reference is made to the RFCs[ 1)] defining the Internet Protocol. These documents can be
[obtained on the Internet at http://www.ietf.org/rfc.html.](http://www.ietf.org/rfc.html)

[01] Chapter 3/2/6 “KNX IP”

[02] Chapter 3/3/7 “Application Layer” v02.01.01

[03] Chapter 3/4/1 “Application Interface Layer””

[04] Chapter 3/5/1 “Resources”

[05] Chapter 3/8/1 “KNXnet/IP Overview”

[06] Chapter 3/8/2 “KNXnet/IP Core”

[07] Chapter 3/8/3 “KNXnet/IP Management”

[08] Chapter 3/8/4 “KNXnet/IP Tunnelling”

[09] Volume 6 “Profiles”

[10] Diffie, W.; van Oorschot, P. C.; Wiener, M. J. (1992), "Authentication and Authenticated

Key Exchanges", Designs, Codes and Cryptography, Kluwer Academic Publishers

[11] Bellare, Mihir. (2006), “New Proofs for NMAC and HMAC: Security without Collision
Resistance”

[12] Dierks, T. und Rescorla, E. (2008), “The Transport Layer Security (TLS) Protocol

Version 1.2”

[13] Dr. Kinne, Andreas (2004), “Security in EIBnet/IP” s.l. : Siemens AG

[14] Eronen, P. und Tschofenig, H. (2005), „Pre-Shared Key Ciphersuites for Transport

Layer Security (TLS)”

[15] Lechner, Daniel, Granzer, Wolfgang und Kastner, Wolfgang (2009), “Security for

KNXnet/IP“ s.l. : TU Wien

[16] Rescorla, E. (2009) “Diffie-Hellman Key Agreement Method” s.l. : IETF

[17] Rijmen, Vincent und Daemen, Joan (2002), “The Design of Rijndael: AES. The

Advanced Encryption Standard”

Filename: 03_08_09 KNX IP Secure v01.01.02 AS.docx
Version: 01.01.02
Status: Approved Standard
Savedate: 2021.10.08
Number of pages: 71

1) Request for Comment: Internet Standards defined by the Internet Engineering Task Force (IETF) are firstly
published as RFCs.

© C i h 2012 2021 A i i S S ifi i 01 01 02 2 f 1

|Version|Date|Modifications|
|---|---|---|
|01.01.01|2020.02.11|Creation of the document based on AN159“KNX IP Secure” v06 AS.|
|01.01.01|2021.01.21|Corrected the numerical value for Return Code ECOMMANDINVALID.|
|01.01.01|2021.10.08|__<br>Preparation for inclusion in the KNX Specifications v3.0.|


-----

#### Content

###### 1 Purpose, motivation and scope .............................................................................................. 5 1.1 Motivation ....................................................................................................................... 5 1.2 Scope ............................................................................................................................... 5 1.2.1 General Security Goals ....................................................................................... 5 1.2.2 Authentication ..................................................................................................... 6 1.2.3 Multicast Communication ................................................................................... 6 1.2.4 Algorithms and key sizes .................................................................................... 6

 2 Specification ............................................................................................................................ 7 2.1 Terms and definitions ..................................................................................................... 7 2.2 Stack and communication ............................................................................................... 7 2.2.1 KNXnet/IP Security layer ................................................................................... 7 2.2.2 Multicast communication .................................................................................. 14 2.2.3 Unicast connections .......................................................................................... 25 2.2.4 Implementation requirements ........................................................................... 36 2.3 Resource definition ....................................................................................................... 37 2.3.1 KNXnet/IP Parameter Object ........................................................................... 37 2.4 Management Procedures ............................................................................................... 47 2.4.1 Secure session setup .......................................................................................... 47 2.4.2 Closing a secure session.................................................................................... 49 2.4.3 Retransmission of lost frames ........................................................................... 49 2.4.4 Synchronizing timers ........................................................................................ 49 2.5 Profile definition ........................................................................................................... 50 2.5.1 Stack .................................................................................................................. 50 2.5.2 Interface Objects and Properties ....................................................................... 52 2.5.3 Management Procedures ................................................................................... 53 2.5.4 Configuration Procedures ................................................................................. 53 2.6 Identifiers and discovery ............................................................................................... 53 2.6.1 Summary of Identifiers ..................................................................................... 53 2.6.2 KNXnet/IP Discovery ....................................................................................... 54 A.1 SESSION_REQUEST .................................................................................................. 55
 A.1.1 Client Curve25519 Key Pair ............................................................................. 55 A.1.2 Binary Example ................................................................................................ 55 A.2 SESSION_RESPONSE ................................................................................................ 55
 A.2.1 Server Curve25519 Key Pair ............................................................................ 55 A.2.2 Message Authentication Code .......................................................................... 56 A.2.3 Binary Example ................................................................................................ 57 A.2.4 Session Key ....................................................................................................... 57 A.3 SESSION_AUTHENTICATE ..................................................................................... 57
 A.3.1 Message Authentication Code .......................................................................... 57 A.3.2 Binary Example ................................................................................................ 58 A.3.3 Secure Wrapper ................................................................................................. 58 A.3.4 Wrapped Example ............................................................................................. 59 A.4 SESSION_STATUS ..................................................................................................... 60
 A.4.1 Binary Example ................................................................................................ 60 A.4.2 Secure Wrapper ................................................................................................. 61 A.4.3 Wrapped Example ............................................................................................. 62 A.5 ROUTING_INDICATION ........................................................................................... 62
 A.5.1 Binary Example ................................................................................................ 62

© C i h 2012 2021 A i i S S ifi i 01 01 02 3 f 1


-----

###### A.5.2 Secure Wrapper ................................................................................................. 63 A.5.3 Wrapped Example ............................................................................................. 64 A.6 TIMER_NOTIFY ......................................................................................................... 65
 A.6.1 Message Authentication Code .......................................................................... 65 A.6.2 Binary Example ................................................................................................ 65 B.1 Time sync state machine ............................................................................................... 67 B.2 Interpretation of the concepts ....................................................................................... 68
 B.2.1 Update of multicast group timer ....................................................................... 68 B.2.2 Notify suppression after update ........................................................................ 68 B.2.3 Notify suppression by 'good enough' notifies ................................................... 68 B.2.4 Periodically sending timer notifications ........................................................... 68 B.2.5 Timer update notification triggered by outdated frames ................................... 68 B.3 Description of transitions .............................................................................................. 68 B.4 Analysis of possible replay attacks ............................................................................... 70
 B.4.1 Replaying old SECURE_WRAPPER frames ................................................... 70 B.4.2 Replaying old TIMER_NOTIFY frames .......................................................... 70 B.4.3 Replaying any frame after forced mc_timer wrap around ................................ 70 B.5 Example parameter sets and resulting time windows ................................................... 71

© C i h 2012 2021 A i i S S ifi i 01 01 02 4 f 1


-----

### 1 Purpose, motivation and scope

#### 1.1 Motivation
KNXnet/IP is a protocol designed to transport KNX building automation frames over an IP network. It is
used as an infrastructure backbone for connecting KNX subnetworks, as a communication medium for
KNX-IP devices and to provide IP based services for clients (e.g. connecting a tool software to a KNX
installation). The main advantages of using IP for these purposes are that IP network infrastructure is
inexpensive, available almost everywhere and that the distance of two communication parties on an IP
network is virtually unlimited.

KNXnet/IP differentiates between unicast and multicast services. KNXnet/IP unicast services are used to
connect a single client to a single KNXnet/IP server (e.g. KNXnet/IP Tunnelling). KNXnet/IP multicast
services are mainly used to connect different KNX subnetworks using IP communication on the KNX
backbone. The KNXnet/IP Routing services are defined for this purpose. KNXnet/IP multicast services
build on top of IP multicast.

**Multicast (e.g. A_GroupValue_Write) orUnicast (e.g. A_Memory_Read) or** **KNX** **Multicast (e.g. A_GroupValue_Write) orUnicast (e.g. A_Memory_Read) or**
**(System-)Broadcast (e.g. A_IndividualAddress_Write)** **Layer** **(System-)Broadcast (e.g. A_IndividualAddress_Write)**

**KNXnet/IP**

**Unicast Services (e.g. KNXnet/IP Tunneling)** **Layer** **Multicast Services (e.g. KNXnet/IP Routing)**

**Unicast IP** **IP** **Multicast IP**
**UDP or TCP** **Layer** **UDP**

**Figure 1 - Unicast and Multicast in the sense of KNX, KNXnet/IP and IP**

The KNXnet/IP service families like Routing or Tunnelling (as well as the transported KNX protocol
itself) do not provide any dedicated security features today. Even with KNX Data Security (Secure
Application Layer, see [02]) used in the KNX Telegram, this only provides confidentiality on Application
Layer and still reveals potentially sensitive information for eavesdroppers. This increasingly becomes a
problem because with IP as the underlying protocol, the transported KNX data can easily be accessed and
dissected like never before. Furthermore, networks today get connected worldwide and highly
sophisticated methods of attacking IP networks exist.

As part of the KNX secure communication strategy, this document specifies the security wrapper for
securing KNXnet/IP traffic that puts an additional layer of security – transparent to all existing
KNXnet/IP services – around the complete KNXnet/IP traffic.

#### 1.2 Scope

##### 1.2.1 General Security Goals
The most important goal of securing KNXnet/IP traffic is keeping outside attackers from gaining control
over a KNX building automation system while connecting remotely over the Internet. A slightly different
and also important scenario is an attacker gaining access over the local (W)LAN at the automation
system's site. From the view of a KNXnet/IP device these two attacks are equivalent. Defending against
these kinds of attack leads to two main security objectives: Data Integrity and Freshness.

Ensuring data integrity means keeping an attacker from gaining control by injecting manipulated
KNXnet/IP frames. Ensuring freshness means keeping an attacker from recording packets and playing
them back at a later time without manipulating the contents. This is called a replay-attack: An attacker
records KNXnet/IP traffic and at the same time observes what is happening in the automated building to
relate recorded packets to actions. At a later time he can maliciously trigger an action by replaying the
appropriate previously recorded packet.

© C i h 2012 2021 A i i S S ifi i 01 01 02 f 1

|Unicast (e.g. A_Memory_Read) or<br>Multicast (e.g. A_GroupValue_Write) or<br>(System-)Broadcast (e.g. A_IndividualAddress_Write)<br>Unicast Services (e.g. KNXnet/IP Tunneling)<br>Unicast IP<br>UDP or TCP|KNX<br>Layer<br>KNXnet/IP<br>Layer<br>IP<br>Layer|Unicast (e.g. A_Memory_Read) or<br>Multicast (e.g. A_GroupValue_Write) or<br>(System-)Broadcast (e.g. A_IndividualAddress_Write)<br>Multicast Services (e.g. KNXnet/IP Routing)<br>Multicast IP<br>UDP|
|---|---|---|


-----

A different goal is keeping attackers from deriving knowledge about what is going on inside a building by
looking at the KNXnet/IP traffic. This leads to the security objective of ensuring Confidentiality.
Confidentiality is normally achieved by encrypting network traffic to grant an attacker the lowest possible
insight into the data actually transferred.

Because KNXnet/IP is implemented in small, embedded devices, a security solution should require
reasonable processing power and memory consumption.

##### 1.2.2 Authentication

###### 1.2.2.1 General
Aside from the three security objectives mentioned above, it is important that the communicating peers
can trust each other's claimed identity. The security objective for this is called Mutual Authentication.
Mutual authentication can also prevent an attack known as man-in-the-middle (MiM) attack. When
conducting a MiM attack, an attacker is logically located in between two communicating parties. He is
able to intercept and change the traffic flowing in both directions. He masquerades as legal
communication partner to both peers and sets up secured communication channels to both sides. He
decrypts traffic coming from one side and re-encrypts it before sending it to the other side. So, he is able
to intercept and change the clear text communication. For KNXnet/IP Security we have to differentiate
between three kinds of authentication:

###### 1.2.2.2 Server authentication
The goal of authenticating the server (KNXnet/IP device) to the client (tool software) for a KNXnet/IP
unicast connection (e.g., Tunnelling or KNXnet/IP Device Management) is to ensure that a client talking
to a KNXnet/IP device (e.g. in order to configure the device) is really talking to the device it thinks it is
talking to. Without this authentication an attacker could mimic or fake a specific KNXnet/IP device in
order to gain knowledge about sensible configuration data sent to the device.

###### 1.2.2.3 Client authentication
The goal of authenticating the client (tool software) to the server (KNXnet/IP device) for a KNXnet/IP
unicast connection (e.g., Tunnelling or KNXnet/IP Device Management) is to ensure that a client talking
to a KNXnet/IP device (e.g. in order to access the KNX installation) is really authorized to do so. Today,
everybody with knowledge of the IP address of a KNXnet/IP device has full access to the configuration of
the device and possibly to the whole KNX installation it is connected to.

###### 1.2.2.4 Group authentication
The goal of mutual authentication of the nodes involved in KNXnet/IP multicast communication (like
KNXnet/IP Routing) is to establish a trusted group of devices communicating together. Membership in
this trusted group involves to the possibility to authenticate to all other members in this group as
legitimate member of this group.

##### 1.2.3 Multicast Communication
A special requirement of securing KNXnet/IP traffic is the support for Secure Multicast
**Communication with more than one sender and more than one receiver where device individual telegram**
counters (point-to-point) cannot be used to ensure freshness.

##### 1.2.4 Algorithms and key sizes
As a trade-off between desired security and available processing power as measured in terms of
throughput and latency, the key sizes and algorithms of the KNXnet/IP Secure standard represent the
minimum requirement for supporting secure communication. While this standard may be extended with
additional key sizes and algorithms in the future, the current set will remain the default. This means that
any KNXnet/IP Secure device shall at least support CCM (AES-128 CTR and AES-128 CBC-MAC) and
SHA-256 as a fall-back if enabling of other, more advanced algorithms or key sizes is not supported.

© C i h 2012 2021 A i i S S ifi i 01 01 02 6 f 1


-----

### 2 Specification

#### 2.1 Terms and definitions
**Terms**


_Secure_
_Backbone Key_


_The key used for encryption and message authentication of secure KNXnet/IP_
_multicast communication in a KNXnet/IP Routing multicast group. This key will be_
_configured by ETS and is a shared secret between all members of the secure_
_KNXnet/IP Routing multicast group._


_Secure Session_ _An authenticated, authorized and encrypted communication channel between one_
_KNXnet/IP client and one KNXnet/IP server for unicast communication._

_Session Key_ _The key used for encryption and message authentication in a secure session between_
_two KNXnet/IP communication parties. This key will be created using ECDH in the_
_secure session setup procedure (providing perfect forward secrecy) and is only valid_
_for this individual session._

_Cipher Text_ _Cipher text is a generic term that denotes the encrypted data._
_Cipher text opposes to plain data._

_Plain Data_ _This is a generic term that denotes unencrypted data. The content of the plain data_
_depends on the service and the user or not of confidentiality and authentication. Plain_
_data opposes to cipher text._

#### 2.2 Stack and communication

##### 2.2.1 KNXnet/IP Security layer

###### 2.2.1.1 General requirements and overview
KNXnet/IP is implemented on top of the UDP/TCP network layer. Figure 2 shows the protocol
architecture of the current unsecured KNXnet/IP protocol. With the introduction of KNXnet/IP Security
new services are defined that continue to use this traditional setup but may contain encrypted and/or
authenticated data as payload. One special service is dedicated to transport unsecured KNXnet/IP
messages securely wrapped into a KNXnet/IP Security message. Figure 3 shows how this KNXnet/IP
Secure Wrapper message is integrated into the existing protocol architecture.

**Figure 2 - KNXnet/IP protocol stack** **Figure 3 - KNXnet/IP Secure Wrapper**

© C i h 2012 2021 A i i S S ifi i 01 01 02 f 1


-----

Locating the security layer in this case between the TCP/IP layer and the original KNXnet/IP layer has
the advantage that the TCP/IP standard mechanisms like routing and multicast remain intact and also
apply to the secured connection. No changes to existing frames are necessary.

The KNXnet/IP Security frames are assigned a service type and a protocol version just like any other
KNXnet/IP frame. The encapsulated frame is carrying its own protocol version and service type. This has
the advantage that secure wrapper messages are able to carry any existing and future KNXnet/IP service
type. Therefore, KNXnet/IP Security can be expected to work seamlessly with existing and future
extensions to KNXnet/IP.

###### 2.2.1.2 Common frame format

2.2.1.2.1 KNXnet/IP header
For compatibility reasons the KNXnet/IP Security frames shall start with a standard KNXnet/IP header.
Using the standard header, it is possible to run secure communication in parallel to insecure
communication in the same installation and even on the same endpoint. A KNXnet/IP Security-enabled
device can distinguish security layer frames from regular frames by looking at the Service Type Identifier
located in the header. Non-Security-enabled devices will just ignore the security layer frames because the
KNXnet/IP Security service type identifiers in the header are unknown to them.
```
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |     Header Length     |    Protocol Version    |
          |     (06h)         |    (10h)         |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |           Service Type Identifier          |
          |           (2 Octet)                 |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |             Total Length             |
          |             (2 Octet)              |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 4 – Format of the KNXnet/IP Security header**

Header fields:

   - `Header Length`

Length of the header in Octets, fixed to 06h.

   - `Protocol Version`

KNXnet/IP Security frames shall continue to use protocol version 1.0 as the frame structure
itself as well as the KNXnet/IP header are not changed.

   - `Service Type Identifier`

Identifies the type of the frame body following the header. The high octet shall always be 09h
for KNXnet/IP Security frames.

   - `Total Length`

The complete length of the KNXnet/IP Security frame including the KNXnet/IP Security
header.

2.2.1.2.2 KNXnet/IP body

2.2.1.2.2.1 Secure Services
Messages of the KNXnet/IP Security service family have different needs regarding message
authentication and confidentiality. Therefore, there is no pattern for a common frame format for all types
of KNXnet/IP Security frames.

© C i h 2012 2021 A i i S S ifi i 01 01 02 8 f 1


-----

2.2.1.2.2.2 Secure Wrapper
When KNXnet/IP frames are to be sent over a secured connection, each frame including the KNXnet/IP
header shall be completely encapsulated as encrypted payload inside a SECURE_WRAPPER frame that
adds some extra information needed to decrypt the frame and for ensuring data integrity and freshness.

Figure 5 shows how a KNXnet/IP frame shall be embedded into a KNXnet/IP Secure Wrapper frame. It
shall apply to secure multicast communication and to secure unicast runtime communication. The
encapsulated KNXnet/IP frame in the KNXnet/IP Secure Wrapper body shall be prefixed with security
information and followed by a message authentication code.

KNXnet/IP KNXnet/IP Secure Wrapper Body

TCP/ Secure
Ethernet IP

UDP Wrapper Security Encapsulated

MAC

Header Information KNXnet/IP Frame

Authenticated Authenticated Authenticated & Encrypted Encrypted

Unencrypted

Replay protected

**Figure 5 - KNXnet/IP secure wrapper frame detailing encrypted and authenticated parts**

Which (plain) KNXnet/IP frames can be encapsulated in a KNXnet/IP Secure Wrapper frame depends on
the KNXnet/IP service family to be secured. It is e.g. not possible to embed a KNXnet/IP Secure Wrapper
frame into another KNXnet/IP Secure Wrapper frame.

The network headers including the TCP/UDP headers shall be unencrypted to take advantage of standard
mechanisms like routing, flow control, network address translation, etc. The network headers shall also
not be included into the message authentication code to avoid problems with secured frames passing a
network address translation.

2.2.1.2.2.3 Secure Routing
Figure 6 shows a more detailed view on the encrypted part of a multicast routing frame. Because a routing
device receives the complete routing traffic within its multicast group, it is important to be able to filter
out unwanted frames as fast as possible. The decision whether a received multicast routing frame has to
be processed any further depends on the KNX destination address buried inside the cEMI part of the
routing frame.

As the figure shows, the KNX destination address can be found at octet positions 13 and 14 of the
encrypted part of the KNXnet/IP secure frame. This means that for a routing decision it is sufficient to
decrypt only the first 16 octet block of a received frame. So decrypting the whole frame is only necessary
for frames that are already known to be of interest for the receiving device. Most other frames can be
discarded after just decrypting the first 16 octets of encrypted data.

KNXnet/IP

KNXnet/IP KNXnet/IP

cEMI Message

Routing Header Secure Wrapper

(6 octets before KNX destination

(6 octets) MAC

address)

Authenticated & Encrypted Encrypted

**Figure 6 - Encrypted part of a KNXnet/IP secure routing frame**

© C i h 2012 2021 A i i S S ifi i 01 01 02 9 f 1

|Ethernet|IP|TCP/<br>UDP|KNXnet/IP<br>Secure<br>Wrapper<br>Header|KNXnet/IP Secure Wrapper Body|Col6|Col7|
|---|---|---|---|---|---|---|
|Ethernet|IP|TCP/<br>UDP|KNXnet/IP<br>Secure<br>Wrapper<br>Header|Security<br>Information|Encapsulated<br>KNXnet/IP Frame|MAC|
|Unencrypted|Unencrypted|Unencrypted|Authenticated|Authenticated|Authenticated & Encrypted|Encrypted|
|Unencrypted|Unencrypted|Unencrypted|Replay protected|Replay protected|Replay protected|Replay protected|

|KNXnet/IP<br>Routing Header<br>(6 octets)|KNXnet/IP<br>cEMI Message<br>(6 octets before KNX destination<br>address)|KNXnet/IP<br>Secure Wrapper<br>MAC|
|---|---|---|
|Authenticated & Encrypted|Authenticated & Encrypted|Encrypted|


-----

###### 2.2.1.3 SECURE_WRAPPER

2.2.1.3.1 Binary format
```
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |     Header Length     |    Protocol Version    |           |
   |     (06h)         |    (10h)         |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |           Service Type Identifier          | KNXnet/IP Secure  |
   |           (0950h)                  | Wrapper Header   |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |             Total Length             |           |
   |             (2 Octet)              |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |          Secure Session Identifier          |           |
   |          (2 Octet)                  |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |           Sequence Information           |           |
   |           (6 Octet)                 | Security      |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+ Information    |
   |            KNX Serial Number            |           |
   |            (6 Octet)                |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |             Message Tag             |           |
   |             (2 Octet)              |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |          Encapsulated KNXnet/IP Frame        |           |
   |          (variable length)              | Encrypted Data   |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+ (AES128-CTR/CCM)  |
   |          Message Authentication Code         |           |
   |          (16 Octet, CBC-MAC/CCM)           |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+

```
**Figure 7 – Binary format of the KNXnet/IP Secure Wrapper frame**

Fields:

   - `Secure Session Identifier`

ID of the secure session needed to decide which key to use. For multicast connections the fixed
identifier 0000h shall be used. For unicast connections the ID was established during a previous
successful secure session setup procedure.

   - `Sequence Information`

This field is used to defend against replay attacks. For unicast connections it is a monotonically
increasing sequence number assigned by the sender; incremented by the sender after each frame
sent. For multicast connections this is the device’s current multicast timer value in millisecond
resolution.

   - `KNX Serial Number`

The KNX serial number of the device sending the KNXnet/IP Secure Wrapper frame.

   - `Message Tag`

This field contains an arbitrary value to differentiate two KNXnet/IP Secure Wrapper multicast
frames sent by one KNXnet/IP Device within the same millisecond (with the same timer value).
For unicast connections this field shall be ignored and shall be set to 0000h.

   - `Message Authentication Code`

The full 128 bit encrypted CBC-MAC from the CCM calculation.

© C i h 2012 2021 A i i S S ifi i 01 01 02 10 f 1


-----

2.2.1.3.2 Confidentiatlity and authentication
SECURE_WRAPPER frames shall provide confidentiality using symmetric encryption and a message
authentication code (MAC) shall be appended to every message for ensuring data integrity. For the
symmetric encryption the AES algorithm with a key length of 128 bit shall be used in CTR mode of
operation. For calculating the MAC, the CBC-MAC method with AES 128 bit as cipher algorithm shall
be used. This combination of AES 128 in CTR mode and CBC-MAC is known as CCM (see Annex A of
KNX Data Security in [02]).

The below requirements shall apply for the use of the SECURE_WRAPPER frame both in multicast as
well as in unicast communication. They shall summarize the KNX specific definitions of the use of CCM
in KNXnet/IP Security:

**A**

The message authentication code in CCM protects the payload and so called associated data A. For
KNXnet/IP Secure Wrapper frames A = KNXnet/IP Secure Wrapper Header | Secure Session Identifier
from the security information of the KNXnet/IP Secure Wrapper Body. The length of the associated data
is therefore fixed to a = 8 octets.

**P**

In CCM the payload P is defined as the amount of data that is being authenticated and encrypted. For
KNXnet/IP Secure Wrapper frames P = Encapsulated KNXnet/IP Frame.

**B0**

The composition of the first block B0 for the CBC-MAC calculation in the CCM algorithm is specified in
Figure 8. These fields from the KNXnet/IP SECURE_WRAPPER Frame are included here, so that they
cannot be altered in the communication path between sender and receiver without being detected.

**octet nr**

**0** **…** **5** **6** **..** **11** **12** **13** **14** **15**

**SeqInf** **SerialNr** **Tag** **Q**

**Figure 8 – Format of B0 for CCM in Secure Wrapper frames**

   - SeqInf contains the unicast sequence number or multicast timer value from the security
information of the KNXnet/IP Secure Wrapper Body.

   - SerialNr contains the KNX serial number value from the security information of the KNXnet/IP
Secure Wrapper Body.

   - Tag contains the message tag value from the security information of the KNXnet/IP Secure
Wrapper Body.

   - Q shall be the length of the payload P in octets, which is the length of the original, encapsulated
KNXnet/IP frame.

**Ctri**

The format of the Block Counter Ctri is also KNX specific. Ctri shall be composed as specified in
Figure 9. For Ctr0 the counter [i] shall be 00h. Each counter value [i] shall be calculated by incrementing
the preceding counter value [i-1] by 1.

Note: For security reasons (B0 shall not be equal to Ctr0) the maximum length of the payload P is limited
to 65.279 octets (feffh in B0). But as [j] in Ctrj is only one octet, this practically limits the length of the
payload to 255*16 (blocksize) = 4.080 octets.

© C i h 2012 2021 A i i S S ifi i 01 01 02 11 f 1

|octet nr|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|**0 **|**… **|**5 **|**6 **|**..**|**11**|**12**|**13**|**14**|**15**|
|**SeqInf**|**SeqInf**|**SeqInf**|**SerialNr**|**SerialNr**|**SerialNr**|**Tag**|**Tag**|**Q **|**Q **|


-----

|octet nr|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|**0 **|**… **|**5 **|**6 **|**..**|**11**|**12**|**13**|**14**|**15**|
|**SeqInf**|**SeqInf**|**SeqInf**|**SerialNr**|**SerialNr**|**SerialNr**|**Tag**|**Tag**|**ffh**|**[i]**|


**Figure 9 – Format of Ctri for CCM in Secure Wrapper frames**

   - SeqInf contains the unicast sequence number or multicast timer value from the security
information of the KNXnet/IP Secure Wrapper Body.

   - SerialNr contains the KNX serial number value from the security information of the KNXnet/IP
Secure Wrapper Body.

   - Tag contains the message tag value from the security information of the KNXnet/IP Secure
Wrapper Body.

Due to using a nonce in multicast communication mainly consisting of the shared timer value, the device
individual serial number and a message tag are added to Ctri to ensure that it is different on every
encryption, even on different devices in the same millisecond (the message tag shall differentiate two
messages sent by the same device in the same millisecond). This makes it harder for an attacker to gain
information from traffic analysis.

2.2.1.3.3 Reception and decoding
Upon reception of a KNXnet/IP Secure Wrapper frame the received data is evaluated and decoded in the
following steps:

   - Frame Size
KNXnet/IP Secure Wrapper frames are always built around an inner, encapsulated KNXnet/IP
frame. As these inner, encapsulated frames have a minimum size of 6 octets (the size of the
KNXnet/IP Header), the minimum size of a KNXnet/IP Secure Wrapper frame is therefore 44
octets (6 octets for the Secure Header, 16 octets for the Security Information, 6 octets for the
encapsulated KNXnet/IP Header and 16 octets for the Message Authentication Code). Received
KNXnet/IP Secure Wrapper frames smaller than 44 octets shall be discarded.

   - Encryption Key
The Secure Session Identifier indicates the encryption key used for securing the encrypted part
of the KNXnet/IP Secure Wrapper Body. If the Secure Session Identifier refers to a non-existing
session, the KNXnet/IP Secure Wrapper frame shall be discarded.

   - Sequence Number (Unicast)

   - The sending device’s sequence number in unicast Secure Wrapper frames must only increase
within a given session (not necessarily by one). Received Secure Wrapper frames shall be
discarded if the sequence number is less than or equal to the last received number. As no further
action is taken upon receiving outdated unicast Secure Wrapper frames, it is OK to check the
sequence number before validating the message authentication code. For details on sequence
number handling for unicast connections see 2.2.3.3 Defending against replay attacks on page
26.

   - Message Authentication Code
The received Secure Wrapper frame is decrypted with the associated key and a message
authentication code Yn over the received and decrypted plaintext data is created. This calculated
MAC is then compared to the received and decrypted MAC TR from the Secure Wrapper frame
(see “Message verification” in Annex A of KNX Data Security in [02]). If they do not match,
the KNXnet/IP Secure Wrapper frame shall be discarded.

© C i h 2012 2021 A i i S S ifi i 01 01 02 12 f 1


-----

   - Sequence Information (Multicast)
For secure multicast communication even outdated, unexpected timer values are relevant (they
trigger (re-)synchronization of the network). Therefore the message authentication code has to
be checked before the multicast timer value can be evaluated. The different possible reactions of
the receiving communication partner depending on the received timer value are explained in
detail in 2.2.2.3 Timer synchronizing on page 16.

###### 2.2.1.4 Access Control

2.2.1.4.1 KNXnet/IP Services
For each SECURE_WRAPPER received in a secure session, the KNXnet/IP Server shall verify if the user
authenticated for this session is allowed to request the wrapped KNXnet/IP Service and has sufficient
access rights on the accessed resources. The management user (= User ID 01h) shall always be granted
access to all KNXnet/IP resources. For other users, access shall be granted as specified below.

2.2.1.4.2 KNXnet/IP Core
The discovery services in KNXnet/IP Core do not require authorization. If the wrapped frame therefore is
a SEARCH_REQUEST (extended) or DESCRIPTION_REQUEST access shall be granted independent
of the authorized user.

If the wrapped frame is a CONNECT_REQUEST, the server shall first evaluate
PID_SECURED_SERVICE_FAMILIES. If no security is enforced for this connection type, i.e. the
corresponding service family entry in PID_SECURED_SERVICE_FAMILIES is 0, access shall be
granted independent of the authorized user. Otherwise, the server shall evaluate the corresponding access
control list, depending on the connection type:

**Connection type** **Access control list**
DEVICE_MGMT_CONNECTION Only the management user (01h) has access.

TUNNEL_CONNECTION The management user (01h) always has access. For other
users, the PID_TUNNELLING_USERS shall be evaluated; only
if the user is found there, access shall be granted.

Unwrapped (plain) CONNECT_REQUESTs are only accepted if and only if the respective service family
is set to non-secure in PID_SECURED_SERVICE_FAMILIES. The following table gives an overview
over all possible combinations of incoming CONNECT_REQUESTs depending on the state of
PID_SECURED_SERVICE_FAMILIES:

CONNECT_REQUEST

DEVICE_MGMT_CONNECTION TUNNEL_CONNECTION
of type

PID_SECURED_- non-secure (0) for

secure (1) for non-secure (0) for secure (1) for

SERVICE_FAMILIES DEV_MGMT

DEV_MGMT TUNNELLING TUNNELING

is ->

Unwrapped Access granted Access denied Access granted Access denied
CONNECT_REQUEST

Wrapped Access granted Access granted Access granted Access granted
CONNECT_REQUEST
in dev-mgmt user (1)
secure session

Wrapped Access granted Access denied Access granted Access granted if
CONNECT_REQUEST allowed by
in tunnelling user (>=2) PID_TUNNELsecure session LING_USERS

© C i h 2012 2021 A i i S S ifi i 01 01 02 13 f 1

|Connection type|Access control list|
|---|---|
|DEVICE_MGMT_CONNECTION|Only the management user (01h) has access.|
|TUNNEL_CONNECTION|The management user (01h) always has access. For other<br>users, the PID_TUNNELLING_USERS shall be evaluated; only<br>if the user is found there, access shall be granted.|

|CONNECT REQUEST<br>_<br>of type|DEVICE MGMT CONNECTION<br>_ _|Col3|TUNNEL CONNECTION<br>_|Col5|
|---|---|---|---|---|
|PID_SECURED_-<br>SERVICE_FAMILIES<br>is ->|non-secure (0) for<br>DEV_MGMT|secure (1) for<br>DEV_MGMT|non-secure (0) for<br>TUNNELLING|secure (1) for<br>TUNNELING|
|Unwrapped<br>CONNECT_REQUEST|Access granted|Access denied|Access granted|Access denied|
|<br>Wrapped<br>CONNECT_REQUEST<br>in dev-mgmt user (1)<br>secure session|Access granted|Access granted|Access granted|Access granted|
|Wrapped<br>CONNECT_REQUEST<br>in tunnelling user (>=2)<br>secure session|Access granted|Access denied|Access granted|Access granted if<br>allowed by<br>PID_TUNNEL-<br>LING_USERS|


-----

2.2.1.4.3 KNXnet/IP Device Management
Because KNXnet/IP Device Management v1 services (cEMI M_Prop) cannot be protected with KNX
Data Security (see [02]), access to a resource through cEMI M_Prop services will always be
“anonymous” (without Data Security and role “unlisted”).

With KNXnet/IP Device Management v2 services (cEMI local Transport Layer) full management access
to the device is possible even in device Security Mode if KNX Data Security is used together with the
_Tool Key. The lack of a source individual address in cEMI local Transport Layer prevents the use of other_
roles (R0 to R15).

2.2.1.4.4 KNXnet/IP Tunnelling
A detailed description how to verify access to a KNXnet/IP Tunnelling interface in combination with
different security scenarios and connection request options can be found in the specification of
Tunnelling v2 in [08].

2.2.1.4.5 KNXnet/IP Routing
If the wrapped message is a “KNXnet/IP Routing Service Family” message (The KNXnet/IP Service
Families are specified in [05] then it shall be ignored if it was not received on the routing endpoint or the
session identifier is not 0 (multicast communication).

Secure routing frames (i.e. multicast SecureWrapper frames containing a Routing.ind) must be received if
and only if KNXnet/IP Routing Service Family is set to require secure communication (see 2.3.1.5
PID_SECURED_SERVICE_FAMILIES (PID=94)).

Non-secure routing frames (i.e. plain multicast Routing.ind frames) must be received if and only if the
KNXnet/IP Routing Service Family is set to not require secure communication (security version = 0).

If the KNXnet/IP Routing Service Family is set to require secure communication (security version > 0),
all sent Routing.ind frames must be wrapped in a SecureWrapper frame, regardless of their target group
address, their target multicast address or any other aspect of the Routing.ind frame or the device
configuration.

If the KNXnet/IP Routing Service Family is set to not require secure communication, all sent Routing.ind
frames must not be wrapped in a SecureWrapper frame and no TimerNotify frames may be sent or
received.

2.2.1.4.6 Remote Logging
Access control resource to be defined when this connection type is specified.

2.2.1.4.7 Remote Configuration
It is not foreseen to support this service family if device Security Mode is enabled as these services would
be able to set any configuration unauthorized via broadcast. If device Security Mode is enabled in the
KNXnet/IP Server device, it shall therefore ignore all incoming KNXnetIP messages with service codes
from the “KNXnet/IP Remote Configuration and Diagnosis Service Family”.

2.2.1.4.8 Object Server
Access control resource to be defined when this connection type is specified.

##### 2.2.2 Multicast communication

###### 2.2.2.1 Key management
A single key is used for all devices in a KNXnet/IP Routing multicast group. This Secure Backbone Key
is transferred once during device commissioning using a secure connection to the devices (via KNX Data
Security possibly using secured KNXnet/IP Device Management). The key shall be transferred via the
property PID_BACKBONE_KEY and shall have an unlimited lifetime.

© C i h 2012 2021 A i i S S ifi i 01 01 02 14 f 1


-----

All devices listening on the same multicast address using the same Secure Backbone Key belong to one
secured KNXnet/IP multicast group. Frames possibly received on other multicast addresses must be
discarded.

Everyone with knowledge of this secret Secure Backbone Key is considered a legal member of the
KNXnet/IP Routing multicast group. If one device gets compromised, all keys used in this device shall be
seen as compromised. Nevertheless, the Secure Backbone Key can be changed for the remaining devices
using secured connections to these devices to restore security for the KNXnet/IP Routing multicast group
communication.

###### 2.2.2.2 Defending against replay attacks

2.2.2.2.1 Multicast sequence information
For KNXnet/IP multicast communication it is not possible to use a simple sequence number like in the
unicast case. In the multicast case there is an KNXnet/IP multicast group consisting of multiple nodes
each of which can act as sender or as receiver. A sequence number would have to be maintained and
persisted by every possible receiver for every sender. Without persistence, a receiver would be vulnerable
by a replay attack from power-up until every sender has received a valid frame.

Apart from the resources required on the receiving side, at least one kind of vulnerability would remain:
If an attacker can capture a valid frame and make sure that the frame doesn’t reach the legal receiver, he
can replay the frame later at any time. To get around this issue, sequence information is needed which
changes even if no communication is taking place.

Therefore a free running timer that is synchronized between all KNXnet/IP multicast group members
shall be used for providing sequence information. The range of the timer values is large enough for the
timers to be assumed to never overflow. Synchronization of timer values between devices are only
allowed in the forward direction: The sender of a packet shall include its current timer value as time
stamp in the sent packet. The receiver of a packet shall replace its own timer value with the received time
stamp if the received time stamp is having a greater value than the internal timer.

The timer value of an incoming frame shall be compared to the current local timer value. The frame shall
be discarded if the received frame is older than the time span given in PID_MULTICAST_LATENCY_TOLERANCE (typically a few seconds). This means that frames with slightly past timer
values shall be accepted to account for network latency.

The use of KNX Data Security on Application Layer for critical applications includes an additional
device specific counter that further minimizes the risk of replay attacks and reduces the need to tweak the
latency tolerance on KNXnet/IP.

2.2.2.2.2 Device timer implementation
The timer and the time stamp shall have a width of 48 bit. With timer ticks every millisecond, an
overflow of the timer would theoretically occur after 9 thousand years. This value should be sufficient to
well exceed the lifetime of an average building. The timer shall be reset to zero whenever the Secure
_Backbone Key is changed._

The device timer shall not be decreased in any case. This requirement especially includes the power-down
case. See 2.2.4.2 for implementation details.

2.2.2.2.3 System clock accuracy
The proposed timer-based replay attack protection depends on the device clocks being synchronized with
an allowable tolerance of a few milliseconds. Given standard quartz micro controller oscillator circuits, a
clock accuracy better than 50 ppm can easily be achieved. This implies that the clock deviation between
any two devices is at most 100 ppm.

© C i h 2012 2021 A i i S S ifi i 01 01 02 1 f 1


-----

###### 2.2.2.3 Timer synchronizing

2.2.2.3.1 Timer sync service

2.2.2.3.1.1 General
Whenever a KNXnet/IP service family using multicast communication is set to require secure
communication, the multicast timer between devices in a secure KNXnet/IP multicast group must be
synchronized. For this purpose, devices shall send TIMER_NOTIFY messages

a) To synchronize the device timer after power up:
If the device doesn’t need to send data immediately after power up, a TIMER_NOTIFY frame
shall be scheduled to be sent at a random time between 0 s (minDelayInitialNotify) and 10 s
(maxDelayInitialNotify) if no recent-enough TIMER_NOTIFY or SECURE_WRAPPER frame
has been received within this period of time. This shall prevent a flood of TIMER_NOTIFY
frames sent by the same type of device after a power cycle. If the device needs to send data
within this first period of time it can then shorten its delay time and immediately issue a
TIMER_NOTIFY frame.

b) To periodically re-synchronize the timers:
A TIMER_NOTIFY shall be sent by any device if no recent-enough TIMER_NOTIFY or
SECURE_WRAPPER frame has been received for about 10 seconds.

c) To re-synchronize an outdated timer:
A TIMER_NOTIFY shall be sent by any device after a random time of usually up to around 3 s
(maxDelayTimeFollowerUpdateNotify) after the device received an outdated TIMER_NOTIFY
or SECURE_WRAPPER frame.

Any device receiving a valid TIMER_NOTIFY or SECURE_WRAPPER frame shall compare the
received timer value with its local timer value and update its local timer value if the received timer value
is greater than the local timer value.

2.2.2.3.1.2 Reaction to outdated timer values
Any device receiving a valid outdated TIMER_NOTIFY or SECURE_WRAPPER frame shall schedule
sending a TIMER_NOTIFY frame after a random delay of usually up to around 3 seconds
(maxDelayTimeFollowerUpdateNotify).

If a TIMER_NOTIFY or SECURE_WRAPPER frame with a timer value greater than the sync latency
tolerance (fraction of the overall latency tolerance) behind the local timer value as Time Stamp field is
received before the delay elapses, the schedule shall be cancelled.

If no recent-enough TIMER_NOTIFY or SECURE_WRAPPER frame is received before the delay
elapses, the device shall send out its local timer value in a TIMER_NOTIFY frame and shall assume to be
a time keeper for its secure KNXnet/IP multicast group.

2.2.2.3.1.3 Time keeper
Devices that claim to be a time keeper for their secure KNXnet/IP multicast group continue scheduling
TIMER_NOTIFY frames on outdated received TIMER_NOTIFY or SECURE_WRAPPER frames in a
shorter and earlier time window than the other devices. Time keeper devices use a reduced
maxDelayUpdateNotify time and a reduced MaxDelayPeriodicNotify time to be able to more quickly
correct outdated timers or tell devices that have newly joined the secure KNXnet/IP multicast group the
correct current time. The exact definition of the time windows for time keeper and/or time follower
devices is dependent on the configured network latency.

Whenever time keeper devices receive a valid TIMER_NOTIFY frame with the received timer value
greater than their local timer value, they no longer claim to be a time keeper for their secure KNXnet/IP
multicast group.

© C i h 2012 2021 A i i S S ifi i 01 01 02 16 f 1


-----

2.2.2.3.2 Timer sync state machine

2.2.2.3.2.1 Goal
The state machine in each device tries to keep all mc_timers in all devices synchronized with as little
communication overhead as possible. It is completely transparent for all KNX/IP communication except
for discarding outdated SECURE_WRAPPER frames. The underlying goal is to detect and discard
replayed SECURE_WRAPPER frames.

2.2.2.3.2.2 Parameters

**Parameter** **Unit** **Value** **Description**

latencyTolerance ms configured SECURE_WRAPPER frames which are older than
default = this tolerance when comparing their timer value to the
2 000 ms receiving device’s mc_timer are discarded. This

parameter should therefore reflect the absolute worstcase latency of the network connecting all devices of
the secure KNXnet/IP multicast group.
This value can be configured through
PID_MULTICAST_LATENCY_TOLERANCE.

syncLatencyTolerance ms configured Common case latency. 99,9 % of all observed
default = network latencies should be within the
200 ms syncLatencyTolerance. The default value is 10% of

the latencyTolerance.
This value can be configured through
PID_SYNC_LATENCY_FRACTION.

minDelayInitialNotify s 0 s Minimum delay for sending an initial TIMER_NOTIFY
after power-up.

maxDelayInitialNotify s 10 s Maximum delay for sending an initial TIMER_NOTIFY
after power-up.

minDelayTimeKeeper s 10 s Minimum delay of time keeper devices for sending a
PeriodicNotify TIMER_NOTIFY after having received the last

acceptable TIMER_NOTIFY or
SECURE_WRAPPER.

maxDelayTimeKeeper ms calculated Maximum delay of time keeper devices for sending a
PeriodicNotify TIMER_NOTIFY after having received the last

acceptable TIMER_NOTIFY or
SECURE_WRAPPER.

minDelayTimeFollower ms calculated Minimum delay of all devices that are no time keeper
PeriodicNotify for sending a TIMER_NOTIFY after having received

the last acceptable TIMER_NOTIFY or
SECURE_WRAPPER.

maxDelayTimeFollower ms calculated Maximum delay of all devices that are no time keeper
PeriodicNotify for sending a TIMER_NOTIFY after having received

the last acceptable TIMER_NOTIFY or
SECURE_WRAPPER.

minDelayTimeKeeper ms 100 ms Minimum delay of time keeper devices for sending a
UpdateNotify TIMER_NOTIFY as an update after having received

an outdated TIMER_NOTIFY or
SECURE_WRAPPER.

maxDelayTimeKeeper ms calculated Maximum delay of time keeper devices for sending a
UpdateNotify TIMER_NOTIFY as an update after having received

an outdated TIMER_NOTIFY or
SECURE_WRAPPER.

© C i h 2012 2021 A i i S S ifi i 01 01 02 1 f 1

|Parameter|Unit|Value|Description|
|---|---|---|---|
|latencyTolerance|ms|configured<br>default =<br>2 000 ms|SECURE_WRAPPER frames which are older than<br>this tolerance when comparing their timer value to the<br>receiving device’s mc_timer are discarded. This<br>parameter should therefore reflect the absolute worst-<br>case latency of the network connecting all devices of<br>the secure KNXnet/IP multicast group.<br>This value can be configured through<br>PID_MULTICAST_LATENCY_TOLERANCE.|
|syncLatencyTolerance|ms|configured<br>default =<br>200 ms|<br>Common case latency. 99,9 % of all observed<br>network latencies should be within the<br>syncLatencyTolerance. The default value is 10% of<br>the latencyTolerance.<br>This value can be configured through<br>PID_SYNC_LATENCY_FRACTION.|
|minDelayInitialNotify|s|0 s|<br>Minimum delay for sending an initial TIMER_NOTIFY<br>after power-up.|
|maxDelayInitialNotify|s|10 s|Maximum delay for sending an initial TIMER_NOTIFY<br>after power-up.|
|minDelayTimeKeeper<br>PeriodicNotify|s|10 s|Minimum delay of time keeper devices for sending a<br>TIMER_NOTIFY after having received the last<br>acceptable TIMER_NOTIFY or<br>SECURE_WRAPPER.|
|maxDelayTimeKeeper<br>PeriodicNotify|ms|calculated|<br>Maximum delay of time keeper devices for sending a<br>TIMER_NOTIFY after having received the last<br>acceptable TIMER_NOTIFY or<br>SECURE_WRAPPER.|
|minDelayTimeFollower<br>PeriodicNotify|ms|calculated|<br>Minimum delay of all devices that are no time keeper<br>for sending a TIMER_NOTIFY after having received<br>the last acceptable TIMER_NOTIFY or<br>SECURE_WRAPPER.|
|maxDelayTimeFollower<br>PeriodicNotify|ms|calculated|<br>Maximum delay of all devices that are no time keeper<br>for sending a TIMER_NOTIFY after having received<br>the last acceptable TIMER_NOTIFY or<br>SECURE_WRAPPER.|
|minDelayTimeKeeper<br>UpdateNotify|ms|100 ms|<br>Minimum delay of time keeper devices for sending a<br>TIMER_NOTIFY as an update after having received<br>an outdated TIMER_NOTIFY or<br>SECURE_WRAPPER.|
|maxDelayTimeKeeper<br>UpdateNotify|ms|calculated|<br>Maximum delay of time keeper devices for sending a<br>TIMER_NOTIFY as an update after having received<br>an outdated TIMER_NOTIFY or<br>SECURE_WRAPPER.|


-----

maxDelayTimeFollowerUp ms calculated Maximum delay of all devices that are no time keeper
dateNotify for sending a TIMER_NOTIFY as an update after

having received an outdated TIMER_NOTIFY or
SECURE_WRAPPER.

The calculated parameters are mainly depending on the network’s latencyTolerance and
syncLatencyTolerance:

**Parameter** **Expression**

maxDelayTimeKeeperPeriodicNotify minDelayTimeKeeperPeriodicNotify +
3 * syncLatencyTolerance

minDelayTimeFollowerPeriodicNotify maxDelayTimeKeeperPeriodicNotify +
1 * syncLatencyTolerance

maxDelayTimeFollowerPeriodicNotify minDelayTimeFollowerPeriodicNotify +
10 * syncLatencyTolerance

maxDelayTimeKeeperUpdateNotify minDelayTimeKeeperUpdateNotify +
1 * syncLatencyTolerance

minDelayTimeFollowerUpdateNotify maxDelayTimeKeeperUpdateNotify +
1 * syncLatencyTolerance

maxDelayTimeFollowerUpdateNotify minDelayTimeFollowerUpdateNotify +
10 * syncLatencyTolerance

2.2.2.3.2.3 Local variables

**Name** **Description**

mc_timer 48-bit wide timer, one tick per millisecond real-time. The value of this timer
is used in SECURE_WRAPPER and TIMER_NOTIFY frames as sequence
information. The state machine in each device tries to synchronize all
mc_timers in all devices. mc_timer is always counting up and never stops.
The mc_timer only ever increases except when IP_backbone_key is
updated which implicitly resets mc_timer to 0.

notify_timer Timer counting down, resolution ideally 10ms or finer. Measured in seconds
and fractions of seconds. When the notify_timer reaches 0.0s it stops,
event E10 is generated and a TIMER_NOTIFY frame is sent.

backbone_key Symmetric 128 bit AES key used for multicast communication. Setting this
to a new value implicitly sets the mc_timer back to 0 and generates event
E11. Setting this to the same value as before generated event E12.

minDelayPeriodicNotify Minimum delay for sending a TIMER_NOTIFY after having received the last
acceptable TIMER_NOTIFY or SECURE_WRAPPER. This variable has
different values depending on if the device is a time keeper or not.

maxDelayPeriodicNotify Maximum delay for sending a TIMER_NOTIFY after having received the
last acceptable TIMER_NOTIFY or SECURE_WRAPPER. This variable
has different values depending on if the device is a time keeper or not.

© C i h 2012 2021 A i i S S ifi i 01 01 02 18 f 1

|Parameter|Unit|Value|Description|
|---|---|---|---|
|minDelayTimeFollower<br>UpdateNotify|ms|calculated|Minimum delay of all devices that are no time keeper<br>for sending a TIMER_NOTIFY as an update after<br>having received an outdated TIMER_NOTIFY or<br>SECURE_WRAPPER.|
|maxDelayTimeFollowerUp<br>dateNotify|ms|calculated|<br>Maximum delay of all devices that are no time keeper<br>for sending a TIMER_NOTIFY as an update after<br>having received an outdated TIMER_NOTIFY or<br>SECURE_WRAPPER.|

|Parameter|Expression|
|---|---|
|maxDelayTimeKeeperPeriodicNotify|minDelayTimeKeeperPeriodicNotify +<br>3 * syncLatencyTolerance|
|minDelayTimeFollowerPeriodicNotify|maxDelayTimeKeeperPeriodicNotify +<br>1 * syncLatencyTolerance|
|maxDelayTimeFollowerPeriodicNotify|minDelayTimeFollowerPeriodicNotify +<br>10 * syncLatencyTolerance|
|maxDelayTimeKeeperUpdateNotify|minDelayTimeKeeperUpdateNotify +<br>1 * syncLatencyTolerance|
|minDelayTimeFollowerUpdateNotify|maxDelayTimeKeeperUpdateNotify +<br>1 * syncLatencyTolerance|
|maxDelayTimeFollowerUpdateNotify|minDelayTimeFollowerUpdateNotify +<br>10 * syncLatencyTolerance|

|Name|Description|
|---|---|
|mc_timer|48-bit wide timer, one tick per millisecond real-time. The value of this timer<br>is used in SECURE_WRAPPER and TIMER_NOTIFY frames as sequence<br>information. The state machine in each device tries to synchronize all<br>mc_timers in all devices. mc_timer is always counting up and never stops.<br>The mc_timer only ever increases except when IP_backbone_key is<br>updated which implicitly resets mc_timer to 0.|
|notify_timer|<br>Timer counting down, resolution ideally 10ms or finer. Measured in seconds<br>and fractions of seconds. When the notify_timer reaches 0.0s it stops,<br>event E10 is generated and a TIMER_NOTIFY frame is sent.|
|backbone_key|<br>Symmetric 128 bit AES key used for multicast communication. Setting this<br>to a new value implicitly sets the mc_timer back to 0 and generates event<br>E11. Setting this to the same value as before generated event E12.|
|minDelayPeriodicNotify|Minimum delay for sending a TIMER_NOTIFY after having received the last<br>acceptable TIMER_NOTIFY or SECURE_WRAPPER. This variable has<br>different values depending on if the device is a time keeper or not.|
|maxDelayPeriodicNotify|Maximum delay for sending a TIMER_NOTIFY after having received the<br>last acceptable TIMER_NOTIFY or SECURE_WRAPPER. This variable<br>has different values depending on if the device is a time keeper or not.|


-----

maxDelayUpdateNotify Current maximum delay for sending a TIMER_NOTIFY as an update after
having received an outdated TIMER_NOTIFY or SECURE_WRAPPER.
This variable has different values depending on if the device is a time
keeper or not.

2.2.2.3.2.4 States

**State label** **State description**

SCHED_PERIODIC A TIMER_NOTIFY is scheduled to be sent once notify_timer (delay between
minDelayPeriodicNotify and maxDelayPeriodicNotify) expires (E10).

SCHED_UPDATE A TIMER_NOTIFY is scheduled to be sent once notify_timer (delay between
minDelayUpdateNotify and maxDelayUpdateNotify) expires (E10).

2.2.2.3.2.5 Events

**Event label** **Event description**

E01 Received TIMER_NOTIFY frame
(received_timer_value > mc_timer)

E02 Received TIMER_NOTIFY frame

(received_timer_value <= mc_timer) and
(received_timer_value > mc_timer - syncLatencyTolerance)

E03 Received TIMER_NOTIFY frame
(received_timer_value <= mc_timer - syncLatencyTolerance) and
(received_timer_value > mc_timer - latencyTolerance)

E04 Received TIMER_NOTIFY frame
(received_timer_value <= mc_timer - latencyTolerance)

E05 Received multicast SECURE_WRAPPER frame
(received_timer_value > mc_timer)

E06 Received multicast SECURE_WRAPPER frame
(received_timer_value <= mc_timer) and
(received_timer_value > mc_timer - syncLatencyTolerance)

E07 Received multicast SECURE_WRAPPER frame
(received_timer_value <= mc_timer - syncLatencyTolerance) and
(received_timer_value > mc_timer - latencyTolerance)

E08 Received multicast SECURE_WRAPPER frame
(received_timer_value <= mc_timer - latencyTolerance)

E09 Transmitted multicast SECURE_WRAPPER frame

E10 The notify_timer expired (reached 0.0s).

E11 Device joins new domain. PID_BACKBONE_KEY and/or PID_MULTICAST_ADDRESS
is set to a new and different value (via property access or DomainAddressSerialNumber_Write).

© C i h 2012 2021 A i i S S ifi i 01 01 02 19 f 1

|Name|Description|
|---|---|
|minDelayUpdateNotify|Current minimum delay for sending a TIMER_NOTIFY as an update after<br>having received an outdated TIMER_NOTIFY or SECURE_WRAPPER.<br>This variable has different values depending on if the device is a time<br>keeper or not.|
|maxDelayUpdateNotify|Current maximum delay for sending a TIMER_NOTIFY as an update after<br>having received an outdated TIMER_NOTIFY or SECURE_WRAPPER.<br>This variable has different values depending on if the device is a time<br>keeper or not.|

|State label|State description|
|---|---|
|SCHED_PERIODIC|A TIMER_NOTIFY is scheduled to be sent once notify_timer (delay between<br>minDelayPeriodicNotify and maxDelayPeriodicNotify) expires (E10).|
|SCHED_UPDATE|A TIMER_NOTIFY is scheduled to be sent once notify_timer (delay between<br>minDelayUpdateNotify and maxDelayUpdateNotify) expires (E10).|

|Event label|Event description|
|---|---|
|E01|Received TIMER_NOTIFY frame<br>(received_timer_value > mc_timer)|
|E02|<br>Received TIMER_NOTIFY frame<br>(received_timer_value <= mc_timer) and<br>(received_timer_value > mc_timer - syncLatencyTolerance)|
|E03|<br>Received TIMER_NOTIFY frame<br>(received_timer_value <= mc_timer - syncLatencyTolerance) and<br>(received_timer_value > mc_timer - latencyTolerance)|
|E04|<br>Received TIMER_NOTIFY frame<br>(received_timer_value <= mc_timer - latencyTolerance)|
|E05|<br>Received multicast SECURE_WRAPPER frame<br>(received_timer_value > mc_timer)|
|E06|<br>Received multicast SECURE_WRAPPER frame<br>(received_timer_value <= mc_timer) and<br>(received_timer_value > mc_timer - syncLatencyTolerance)|
|E07|<br>Received multicast SECURE_WRAPPER frame<br>(received_timer_value <= mc_timer - syncLatencyTolerance) and<br>(received_timer_value > mc_timer - latencyTolerance)|
|E08|<br>Received multicast SECURE_WRAPPER frame<br>(received_timer_value <= mc_timer - latencyTolerance)|
|E09|<br>Transmitted multicast SECURE_WRAPPER frame|
|E10|<br>The notify_timer expired (reached 0.0s).|
|E11|<br>Device joins new domain. PID_BACKBONE_KEY and/or PID_MULTICAST_ADDRESS<br>is set to a new and different value (via property access or DomainAddressSerial-<br>Number_Write).|


-----

The events E01 to E04 for the reception of TIMER_NOTIFY frames are symmetrical to the events E05 to
E08 for the reception of SECURE_WARPPER frames. These sets of events refer to different points in
time when the frames are received. Figure 10 illustrates these reception times on a time bar.

TIMER_NOTIFY: E04 E03 E02 E01

SECURE_WRAPPER: E08 E07 E06 E05

timer value

t0 = local timer value

t-2 = local timer value - t-1 = local timer value latencyTolerance syncLatencyTolerance

**Figure 10 – State machine events for different received timer values**

2.2.2.3.2.6 Actions

**Action label** **Action description**

A0 Do nothing.

A1 mc_timer = received_timer_value

A2 Accept SECURE_WRAPPER frame and pass to upper layers as usual

A3 Reschedule notify_timer
= random(minDelayPeriodicNotify, maxDelayPeriodicNotify)

A4 Remember received serial number and tag of outdated frame.
notify_timer = random(minDelayUpdateNotify, maxDelayUpdateNotify)

A5 Send TIMER_NOTIFY with own mc_timer as sequence information, own serial number
and random tag

A6 Send TIMER_NOTIFY with own mc_timer as sequence information, but serial number
and tag as remembered in A4

A7 Restart the multicast timer synchronization, see 2.2.2.3.2.8

A8 Becoming time keeper:
minDelayUpdateNotify = minDelayTimeKeeperUpdateNotify
maxDelayUpdateNotify = maxDelayTimeKeeperUpdateNotify
minDelayPeriodicNotify = minDelayTimeKeeperPeriodicNotify
maxDelayPeriodicNotify = maxDelayTimeKeeperPeriodicNotify

A9 Becoming time follower:
minDelayUpdateNotify = minDelayTimeFollowerUpdateNotify
maxDelayUpdateNotify = maxDelayTimeFollowerUpdateNotify
minDelayPeriodicNotify = minDelayTimeFollowerPeriodicNotify
maxDelayPeriodicNotify = maxDelayTimeFollowerPeriodicNotify

NOTE 1 random(start, end) returns a uniformly distributed random number between start and end inclusive.

2.2.2.3.2.7 Transition Table

**State**

**Event** **SCHED_PERIODIC** **SCHED_UPDATE**

E01 SCHED_PERIODIC **>> SCHED_PERIODIC**
A1 + A9 + A3 A1 + A9 + A3

E02 SCHED_PERIODIC **>> SCHED_PERIODIC**
A9 + A3 A9 + A3

E03 SCHED_PERIODIC SCHED_UPDATE
A0 A0

© C i h 2012 2021 A i i S S ifi i 01 01 02 20 f 1

|TIMER NOTIFY: E04<br>_<br>SECURE WRAPPER: E08<br>_<br>timer value|E03<br>E07<br>t = local timer value -|E02 E01<br>E06 E05<br>t = local timer value<br>0<br>t = local timer value -|
|---|---|---|

|Action label|Action description|
|---|---|
|A0|Do nothing.|
|A1|mc_timer = received_timer_value|
|A2|<br>Accept SECURE_WRAPPER frame and pass to upper layers as usual|
|A3|<br>Reschedule notify_timer<br>= random(minDelayPeriodicNotify, maxDelayPeriodicNotify)|
|A4|Remember received serial number and tag of outdated frame.<br>notify_timer = random(minDelayUpdateNotify, maxDelayUpdateNotify)|
|A5|<br>Send TIMER_NOTIFY with own mc_timer as sequence information, own serial number<br>and random tag|
|A6|Send TIMER_NOTIFY with own mc_timer as sequence information, but serial number<br>and tag as remembered in A4|
|A7|Restart the multicast timer synchronization, see 2.2.2.3.2.8|
|A8|Becoming time keeper:<br>minDelayUpdateNotify = minDelayTimeKeeperUpdateNotify<br>maxDelayUpdateNotify = maxDelayTimeKeeperUpdateNotify<br>minDelayPeriodicNotify = minDelayTimeKeeperPeriodicNotify<br>maxDelayPeriodicNotify = maxDelayTimeKeeperPeriodicNotify|
|A9|Becoming time follower:<br>minDelayUpdateNotify = minDelayTimeFollowerUpdateNotify<br>maxDelayUpdateNotify = maxDelayTimeFollowerUpdateNotify<br>minDelayPeriodicNotify = minDelayTimeFollowerPeriodicNotify<br>maxDelayPeriodicNotify = maxDelayTimeFollowerPeriodicNotify|

|Event|State|Col3|
|---|---|---|
|**Event**|**SCHED_PERIODIC**|**SCHED_UPDATE**|
|E01|<br>SCHED_PERIODIC<br>A1 + A9 + A3|<br>**>> SCHED_PERIODIC** <br>A1 + A9 + A3|
|E02|SCHED_PERIODIC<br>A9 + A3|**>> SCHED_PERIODIC** <br>A9 + A3|
|E03|SCHED_PERIODIC<br>A0|SCHED_UPDATE<br>A0|


-----

|Event|State|Col3|
|---|---|---|
|**Event**|**SCHED_PERIODIC**|**SCHED_UPDATE**|
|E04|<br>**>> SCHED_UPDATE** <br>A4|<br>SCHED_UPDATE<br>A0|
|E05|SCHED_PERIODIC<br>A1 + A2 + A3|SCHED_UPDATE<br>A1 + A2|
|E06|SCHED_PERIODIC<br>A2 + A3|SCHED_UPDATE<br>A2|
|E07|SCHED_PERIODIC<br>A2|SCHED_UPDATE<br>A2|
|E08|**>> SCHED_UPDATE** <br>A4|SCHED_UPDATE<br>A0|
|E09|SCHED_PERIODIC<br>A3|SCHED_UPDATE<br>A0|
|E10|SCHED_PERIODIC<br>A5 + A8 + A3|**>> SCHED_PERIODIC** <br>A6 + A8 + A3|
|E11|SCHED_PERIODIC<br>A7|**>> SCHED_PERIODIC** <br>A7|


NOTE 2 Although in E05 a time keeper might receive a newer timer value than its own, it does not get time follower,
because this decision will only be taken based upon timer notify frames.
NOTE 3 Sending or receiving of secure wrapper frames (E09 or E05) does not cancel scheduled timer notify updates
(although the recent timer value was already communicated to the multicast group) to allow direct (trusted) answers for outdated
devices.

2.2.2.3.2.8 Starting the multicast timer synchronization
The multicast timer synchronization shall only be active if at least one service family using multicast
communication is set to require secure communication. The start of the multicast timer synchronization
can therefore happen directly after device power-up or whenever the configuration of secured service
families changes.
In these cases the start state of the timer sync state machine is:

   - state = SCHED_PERIODIC.

   - In case of device power-up, the notify_timer = random(0, maxDelayInitialNotify) to prevent a
flood of notifications of devices booting up at the same time (e.g., after a power cycle),
otherwise notify_timer = 0

   - mc_timer = Value read from persistent storage (only if valid) + worst case time offset (if
applicable). If no such value is found (important: this is only acceptable for the first time ever
that a device has started the multicast timer synchronization with the current Secure Backbone
_Key!): mc_timer = 0._

After the start of the multicast timer synchronization and before receiving the first authentic timer value a
device is vulnerable to replay attacks. An attacker could replay any SECURE_WRAPPER and
TIMER_NOTIFY traffic captured between the device’s old, unsynchronized mc_timer and the current
time. The device will not be able to tell that its own mc_timer and the received timer values are out of
date and cannot detect the received traffic as replayed.

© C i h 2012 2021 A i i S S ifi i 01 01 02 21 f 1


-----

To work around this, a device can acquire an authentic timer value after the start of the multicast timer
synchronization by using the following procedure:

   - Set a flag mc_timer_authentic = false.

   - Do not process the encapsulated data of SECURE_WRAPPER frames until mc_timer_authentic
becomes true.

   - Send or schedule a TIMER_NOTIFY. Remember the used tag.

   - Wait for maxDelayTimeFollowerUpdateNotify + 2 * latencyTolerance after the first
TIMER_NOTIFY or SECURE_WRAPPER (sent or received)

   - If a TIMER_NOTIFY is received that repeats the own serial number and remembered tag value,
then set mc_timer_authentic to true and stop waiting any further.

   - Take the most recent timer value of all received TIMER_NOTIFYs and SECURE_WRAPPERs
as the initial mc_timer and set mc_timer_authentic to true.

Initially an arbitrary number of replayed (and thus false) TIMER_NOTIFY or SECURE_WRAPPER
frames may be received. But other sane devices will also have received these frames and the false (old)
response timer values. At least one of these other sane devices will answer with an authentic timer value.
The latest time until this authentic timer value could be received is latencyTolerance +
maxDelayTimeFollowerUpdateNotify + latencyTolerance.

The disadvantage of this procedure is that a device may neither receive nor send any
SECURE_WRAPPER frames before this authentic mc_timer acquisition is complete. In a typical
Ethernet LAN this may take up to 10 s + 2 s + 3 s + 2 s = 17 s.

If this kind of delay is not acceptable for a certain application a device may also send and receive
SECURE_WRAPPER frames before the authenticity of the multicast group timer is established. In this
case the application software must be robust against early replay attacks.

###### 2.2.2.4 TIMER_NOTIFY

2.2.2.4.1 Usage
This frame shall be sent during secure KNXnet/IP multicast group communication to keep the multicast
group member's timer values synchronized. The frame shall be sent to the KNXnet/IP Routing endpoint
(port 3671 on the configured routing multicast address).

2.2.2.4.2 Binary format
```
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |     Header Length     |    Protocol Version    |           |
   |     (06h)         |    (10h)         |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |           Service Type Identifier          | KNXnet/IP Secure  |
   |           (0955h)                  | Header       |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |             Total Length             |           |
   |             (24h)                |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |             Timer value              |           |
   |             (6 Octet)              |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |            KNX Serial Number            | Security      |
   |            (6 Octet)                | Information    |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |             Message Tag             |           |
   |             (2 Octet)              |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |         Message Authentication Code         | Encrypted Data   |
   |         (16 Octet)                  | (AES128 CCM)    |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+

```
**Figure 11 – Binary format of the KNXnet/IP Secure Timer Notify frame**

© C i h 2012 2021 A i i S S ifi i 01 01 02 22 f 1


-----

Fields:

   - `Timer value`

The current multicast timer value of the device sending the timer notification.

   - `KNX Serial Number`

In case of a periodic or initial notify this is the KNX serial number of the device sending the
timer notification. In case of an update notify this is the serial number of the outdated frame
triggering the update.

   - `Message Tag`

In case of a periodic or initial notify this field shall contain a random value. In case of an update
notify this is the tag value of the outdated frame triggering the update.

The tag field of periodic TIMER_NOTIFY frames shall be random to prevent the unencrypted
data to only increase by one for subsequent timer values. This shall protect the Secure Backbone
_Key used to generate the MAC against analytic attacks and serve as a challenge for update_
notify frames so they can be immediately trusted as valid timer source for the device having
generated the original tag value.

   - `Message Authentication Code`

The full 128 bit CCM-MAC. The CCM algorithm ensures that the MAC itself is also encrypted.

2.2.2.4.3 Authentication
TIMER_NOTIFY frames shall provide authentication using a message authentication code (MAC) that
shall be appended to the TIMER_NOTIFY message for ensuring data integrity. For calculating this MAC,
the CCM algorithm with AES128 as cipher shall be used as defined in the Annex A of KNX Data
Security in [02]. As AES128 key for the CCM algorithm the the Secure Backbone Key shall be used.

The KNX specific definitions of the CCM parameters for TIMER_NOTIFY messages shall be:

**A**

For KNXnet/IP Timer Notify frames A = KNXnet/IP Secure Wrapper Header only. The length of the
associated data is fixed to a = 6 octets.

**P**

As TIMER_NOTIFY frames only use authentication, the CCM payload P is empty. This means that the
length of the payload Q for the generation of B0 is fixed to 0

**B0**

The composition of the first block B0 for the CBC-MAC calculation in the CCM algorithm is specified in
Figure 12. These fields from the KNXnet/IP TIMER_NOTIFY Frame are included here, so that they
cannot be altered in the communication path between sender and receiver without being detected.

**octet nr**

**0** **…** **5** **6** **..** **11** **12** **13** **14** **15**

**TimerValue** **SerialNr** **Tag** **Q = 0000h**

**Figure 12 – Format of B0 for the CCM CBC-MAC in Timer Notify frames**

   - TimerValue contains the multicast timer value from the security information of the KNXnet/IP
Timer Notify Body.

   - SerialNr contains the KNX serial number value from the security information of the KNXnet/IP
Timer Notify Body.

© C i h 2012 2021 A i i S S ifi i 01 01 02 23 f 1

|octet nr|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|**0 **|**… **|**5 **|**6 **|**..**|**11**|**12**|**13**|**14**|**15**|
|**TimerValue**|**TimerValue**|**TimerValue**|**SerialNr**|**SerialNr**|**SerialNr**|**Tag**|**Tag**|**Q = 0000h**|**Q = 0000h**|


-----

   - Tag contains the message tag value from the security information of the KNXnet/IP Timer
Notify Body.

   - Q shall be the length of the payload P in octets, which is fixed to 0 for KNXnet/IP Timer Notify
frames.

**Ctr0**

The format of the Block Counter Ctr0 is also KNX specific (for Timer Notify frames only the calculation
of one AES128 block for the encryption of the MAC is necessary). Ctr0 shall be composed as specified in
Figure 13.

**octet nr**

**0** **…** **5** **6** **..** **11** **12** **13** **14** **15**

**TimerValue** **SerialNr** **Tag** **ffh** **00h**

**Figure 13 – Format of Ctr0 for the CCM MAC encryption in Timer Notify frames**

   - TimerValue contains the multicast timer value from the security information of the KNXnet/IP
Timer Notify Body.

   - SerialNr contains the KNX serial number value from the security information of the KNXnet/IP
Timer Notify Body.

   - Tag contains the message tag value from the security information of the KNXnet/IP Timer
Notify Body.

2.2.2.4.4 Reception and decoding
Upon reception of a KNXnet/IP Timer Notify frame the received data is evaluated and decoded in the
following steps.

   - Frame Size
KNXnet/IP Timer Notify frames have a fixed length of 36 octets (6 octets for the Secure
Header, 14 octets for the Security Information and 16 octets for the Message Authentication
Code). Received KNXnet/IP Timer Notify frames larger or smaller than 36 octets shall be
discarded.

   - Message Authentication Code
The received Timer Notify frame is decrypted with the Secure Backbone Key and the message
authentication code Y1 over the received security information is created. This calculated MAC
is then compared to the received and decrypted MAC TR from the Timer Notify frame (see
“Message verification” in Annex A of KNX Data Security in [02]. If they do not match, the
KNXnet/IP Timer Notify frame shall be discarded.

   - Sequence Information
For secure multicast communication even outdated, unexpected timer values are relevant (they
trigger (re-)synchronization of the network). Therefore, the message authentication code has to
be checked before the multicast timer value can be evaluated. The different possible reactions of
the receiving communication partner depending on the received timer value are explained in
detail in 2.2.2.3 Timer synchronizing.

© C i h 2012 2021 A i i S S ifi i 01 01 02 24 f 1

|octet nr|Col2|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
|**0 **|**… **|**5 **|**6 **|**..**|**11**|**12**|**13**|**14**|**15**|
|**TimerValue**|**TimerValue**|**TimerValue**|**SerialNr**|**SerialNr**|**SerialNr**|**Tag**|**Tag**|**ffh**|**00h**|


-----

##### 2.2.3 Unicast connections

###### 2.2.3.1 Key management

2.2.3.1.1 Session key
If a KNXnet/IP client wants to securely communicate with a KNXnet/IP server using connectionless or
connection oriented unicast KNXnet/IP services it shall use a temporary key for every communication
session. The lifetime of this session key (how long this key remains valid) is called a KNXnet/IP Secure
Session.

The session key shall be negotiated between the two communicating parties using the Elliptic-Curve
Diffie-Hellman (ECDH) key agreement algorithm (Rescorla, Diffie-Hellman Key Agreement Method,
2009). As ECDH domain parameters the Curve25519 shall be used. During session setup both parties
exchange the public part of a randomly generated ECDH key pair. Knowledge of each other’s public key
in combination with the own private key allows both peers to calculate the same random number from
which the session key is derived.

Both communication parties shall generate a new random public/private key pair on the Curve25519
specification as ECDH parameters for every new session using a cryptographically safe source of entropy.
It is not allowed to generate a random key pair once (e.g. per power-on or per device) and re-use that for
more than one session.

2.2.3.1.2 Calculating the session key
The session key is calculated as follows (for both the KNXnet/IP secure client and KNXnet/IP secure
server).

(1) sharedSecret_in_little_endian = Curve25519(myPrivateKey, peersPublicKey)
(2) hash_in_big_endian = SHA256(sharedSecret_in_little_endian)
(3) sessionKey = get_first_16_bytes(hash_in_big_endian)

###### 2.2.3.2 Mutual Authentication

2.2.3.2.1 Authentication by known secrets
During session setup, a KNXnet/IP secure device shall authenticate itself to the connecting client by
proving knowledge of a secret based on the Device Authentication Code. The client shall authenticate
itself to the device by proving knowledge of a secret based on a user password. Both secrets have
previously been stored in the device.

2.2.3.2.2 Securing against dictionary attacks
Password based authentication mechanisms always bear the risk of a dictionary attack being conducted.
In a dictionary attack an attacker tries passwords from a dictionary in order of decreasing probability. For
real-world passwords regularly a surprisingly small number of attempts are necessary to find out the
correct password.

Dictionary attacks can be separated into on-line attacks and off-line attacks. In an on-line attack, the
attacker repeatedly connects to the system and on each connection tries a different password. In an offline attack, the attacker needs to be able to gain enough information by passively listening to the traffic of
a connection to be able to check the passwords off-line on his own (maybe parallelized) hardware.

Off-line attacks are for example possible when the password itself or a simple (unsalted) hash of the
password is transmitted as plain text. Password based challenge-response authentication schemes may
also be prone to off-line dictionary attacks if the attacker is able to get the plain text challenge and the
plain text response.

© C i h 2012 2021 A i i S S ifi i 01 01 02 2 f 1


-----

KNXnet/IP secure unicast sessions cannot easily be compromised by an off-line dictionary attack because
the authentication data that an attacker would need to generate for each password to be tested is calculated
using a time-consuming cryptographic algorithm reducing the amounts of possible tests in a reasonable
time by several orders magnitude.

Conducting an on-line dictionary attack is always possible. However, compared to an off-line attack the
number of passwords that can be tried on-line in a given time-span is rather small. Since an on-line attack
takes considerable time and requires the attacker being actively connected to the installation for that time,
his risk of being discovered is much higher compared to an off-line attack.

To further decrease the feasibility of on-line or off-line dictionary attacks, the Tool Software shall inform
the installers about the strength of the selected passwords (increasing the probability that passwords have
a minimal, acceptable strength).

###### 2.2.3.3 Defending against replay attacks
To prevent replay attacks, every packet sent via a secure connection shall bear a number as sequence
information. Every communication partner shall have its own independent sequence number counter. The
sequence number shall have a width of 48 bit. Assuming one million (10[6]) packets being sent per second
for each direction, an overflow of the sequence number would theoretically occur after 9 years.
Furthermore, the sequence numbers start at zero for every new connection further minimizing the risk of
an overflow.

The sequence number shall be initialized to zero on connection setup and incremented by one after each
packet sent. For every connection both peers shall store the sequence number of the last received frame.
An incoming frame shall be discarded if the sequence number is less than or equal to the stored number.

An incoming frame shall be accepted by the receiver if the sequence number is greater than the sequence
number of the previously successfully received frame on the same connection. There is no requirement
that the sequence number of two consecutive frames differ by exactly one. Because of this, the unicast
sequence information mechanism is inherently tolerant to frames getting lost.

This also means that for frames received in swapped order, those frames coming in too late will get lost. It
is depending on the stability of the upper protocol layers that make use of the KNXnet/IP secure unicast
session if this causes any problems. Because of this KNXnet/IP secure unicast sessions must use TCP and
must not use UDP.

###### 2.2.3.4 Securing the initial configuration
In a freshly installed device, all passwords may be empty. Therefore, during initial configuration of the
device (until the password has been set by the installer), no reliable authentication of the client to the
device is possible. However, all other security objectives mentioned above are met. The device will
authenticate itself to the client by using an initial Device Authentication Code (value equal to FDSK, see
KNX Data Security in [02] and the specification of the FDSK in [04]). As knowledge of this code by the
client requires at least some form of physical access to the device, some sort of client authentication is
still guaranteed (not if device authentication is optional). Confidentiality, freshness and data integrity are
assured using the standard measures described above.

###### 2.2.3.5 Secure Sessions

2.2.3.5.1 Associating session keys to secure sessions
During session setup, the server shall assign a Secure Session Identifier to the Secure Session being
established (not to be confused with the KNXnet/IP connection identifier). The Server shall ensure that
this Secure Session Identifier is unique to all of its currently open Secure Sessions. When transferring
data over the session, the Secure Session Identifier shall be included in every frame sent.
Selecting the right session key and sequence numbers for sending and receiving KNXnet/IP Secure
frames shall for the KNXnet/IP Server be based on the Secure Session Identifier. A KNXnet/IP Client
may additionally have to consider the IP information (e.g., TCP connection) or KNX serial number of the
KNXnet/IP Server if multiple concurrent sessions to different servers are maintained.

© C i h 2012 2021 A i i S S ifi i 01 01 02 26 f 1


-----

Secure sessions may not be nested, i.e., a secure session may not be wrapped in an existing secure
session.

2.2.3.5.2 Session state machine

2.2.3.5.2.1 Goal
The goal of this state machine is to clearly specify the behaviour of KNXnet/IP servers during the phase
of negotiating the temporary session keys as well as defining the lifetime of these keys (the lifetime of a
session). The state machine refers to a single session on the KNXnet/IP secure server. Multiple sessions
may exist in parallel.

2.2.3.5.2.1.1 Parameters

**Parameter** **Unit** **Value** **Description**

timeoutAuthentication s 10 s Maximum time the authentication process for newly
created secure sessions may last until the
unauthenticated session will be dropped.

timeoutSession s 60 s Maximum time an authenticated session may remain
unused (without any communication over this session)
until the session will be dropped.

2.2.3.5.2.1.2 Local variables

**Name** **Description**

session_timer Timer counting down, resolution ideally 10 ms or finer. When the
session_timer reaches 0,0 s it stops, the session will be aborted.

2.2.3.5.2.2 States

**State label** **State description**

IDLE The session is not open

UNAUTHENTICATED The session has been created, but is not yet authenticated

AUTHENTICATED The session has been successfully authenticated

2.2.3.5.2.3 Events

**Event label** **Event description**

E00 Received SESSION_REQUEST

E01 Received valid SECURE_WRAPPER containing valid SESSION_AUTHENTICATE

E02 Received valid SECURE_WRAPPER containing invalid SESSION_AUTHENTICATE

E03 Received valid SECURE_WRAPPER containing SESSION_STATUS with status field
STATUS_CLOSE

E04 Received valid SECURE_WRAPPER containing SESSION_STATUS with status field
STATUS_KEEPALIVE

E05 Received valid SECURE_WRAPPER containing any frame except
SESSION_AUTHENTICATE and SESSION_STATUS

E06 The session_timer expired (reaches 0,0 s)

© C i h 2012 2021 A i i S S ifi i 01 01 02 2 f 1

|Parameter|Unit|Value|Description|
|---|---|---|---|
|timeoutAuthentication|s|10 s|Maximum time the authentication process for newly<br>created secure sessions may last until the<br>unauthenticated session willbe dropped.|
|timeoutSession|s|60 s|Maximum time an authenticated session may remain<br>unused (without any communication over this session)<br>until the session willbe dropped.|

|Name|Description|
|---|---|
|session_timer|Timer counting down, resolution ideally 10 ms or finer. When the<br>session_timer reaches 0,0 s it stops, the session will be aborted.|

|State label|State description|
|---|---|
|IDLE|The session is not open|
|UNAUTHENTICATED|The session has been created, but is not yet authenticated|
|AUTHENTICATED|The session has been successfully authenticated|

|Event label|Event description|
|---|---|
|E00|Received SESSION_REQUEST|
|E01|<br>Received valid SECURE_WRAPPER containing valid SESSION_AUTHENTICATE|
|E02|<br>Received valid SECURE_WRAPPER containing invalid SESSION_AUTHENTICATE|
|E03|<br>Received valid SECURE_WRAPPER containing SESSION_STATUS with status field<br>STATUS_CLOSE|
|E04|<br>Received valid SECURE_WRAPPER containing SESSION_STATUS with status field<br>STATUS_KEEPALIVE|
|E05|<br>Received valid SECURE_WRAPPER containing any frame except<br>SESSION_AUTHENTICATE and SESSION_STATUS|
|E06|<br>The session_timer expired (reaches 0,0 s)|


-----

In addition to the validation rules described at service level the terms “valid” and “invalid” also mean in
this context the following.

   - For SECURE_WRAPPER frames valid means that the wrapper can be decrypted and MACvalidated with the session key associated with the session. Invalid SECURE_WRAPPERS shall
be ignored.

   - For SESSION_AUTHENTICATE frames valid means that the MAC can successfully be
validated with the password hash of the indicated user ID as key.

2.2.3.5.2.4 Actions

**Action label** **Action description**

A0 i. Allocate session.
ii. Send SESSION_RESPONSE.
iii. session_timer = timeoutAuthentication

A1 i. Send SESSION_STATUS with status field
STATUS_AUTHENTICATION_SUCCESS.
ii. session_timer = timeoutSession

A2 i. Send SESSION_STATUS with status field
STATUS_AUTHENTICATION_FAILED.
ii. Deallocate session.

A3 i. Close all contained secure connections (if there are any), without explicit
notification of the connection close to the client
ii. Send SESSION_STATUS with status field STATUS_CLOSE.
iii. Deallocate session.

A4 session_timer = timeoutSession

A5 i. Send SESSION_STATUS with status field STATUS_TIMEOUT.
ii. Close all contained secure connections (if there are any).
iii. Deallocate session.

A6 i. Send SESSION_STATUS with status field
STATUS_UNAUTHENTICATED.
ii. Close all contained secure connections (if there are any).
iii. Deallocate session.

2.2.3.5.2.5 Transition Table

**State**

**Event** **IDLE** **UNAUTHENTICATED** **AUTHENTICATED**

E00 **>> UNAUTHENTICATED** Cannot happen Cannot happen
A0

E01 Cannot happen **>> AUTHENTICATED** **>> IDLE**
A1 A2

E02 Cannot happen **>> IDLE** **>> IDLE**
A2 A2

E03 Cannot happen **>> IDLE** **>> IDLE**
A3 A3

E04 Cannot happen **>> IDLE** AUTHENTICATED
A6 A4

© C i h 2012 2021 A i i S S ifi i 01 01 02 28 f 1

|Action label|Action description|
|---|---|
|A0|i.<br>Allocate session.<br>ii.<br>Send SESSION_RESPONSE.<br>iii.<br>session_timer = timeoutAuthentication|
|A1|<br>i.<br>Send SESSION_STATUS with status field<br>STATUS_AUTHENTICATION_SUCCESS.<br>ii.<br>session_timer = timeoutSession|
|A2|<br>i.<br>Send SESSION_STATUS with status field<br>STATUS_AUTHENTICATION_FAILED.<br>ii.<br>Deallocate session.|
|A3|i.<br>Close all contained secure connections (if there are any), without explicit<br>notification of the connection close to the client<br>ii.<br>Send SESSION_STATUS with status field STATUS_CLOSE.<br>iii.<br>Deallocate session.|
|A4|session_timer = timeoutSession|
|A5|<br>i.<br>Send SESSION_STATUS with status field STATUS_TIMEOUT.<br>ii.<br>Close all contained secure connections (if there are any).<br>iii.<br>Deallocate session.|
|A6|i.<br>Send SESSION_STATUS with status field<br>STATUS_UNAUTHENTICATED.<br>ii.<br>Close all contained secure connections (if there are any).<br>iii.<br>Deallocate session.|

|Event|State|Col3|Col4|
|---|---|---|---|
|**Event**|**IDLE**|**UNAUTHENTICATED**|**AUTHENTICATED**|
|E00|**>> UNAUTHENTICATED** <br>A0|Cannot happen|Cannot happen|
|E01|Cannot happen|**>> AUTHENTICATED** <br>A1|**>> IDLE** <br>A2|
|E02|Cannot happen|**>> IDLE** <br>A2|**>> IDLE** <br>A2|
|E03|Cannot happen|**>> IDLE** <br>A3|**>> IDLE** <br>A3|
|E04|Cannot happen|**>> IDLE** <br>A6|AUTHENTICATED<br>A4|


-----

|Event|State|Col3|Col4|
|---|---|---|---|
|**Event**|**IDLE**|**UNAUTHENTICATED**|**AUTHENTICATED**|
|E05|Cannot happen|**>> IDLE** <br>A6|AUTHENTICATED<br>A4|
|E06|Cannot happen|**>> IDLE** <br>A5|**>> IDLE** <br>A5|


###### 2.2.3.6 SESSION_REQUEST

2.2.3.6.1 Usage
This frame shall be sent by the KNXnet/IP secure client to the control endpoint of the KNXnet/IP secure
server to initiate the secure session setup handshake for a new secure communication channel. The
maximum time a KNXnet/IP secure client shall wait for a response of the KNXnet/IP secure server shall
be 10 seconds.

2.2.3.6.2 Binary format
```
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |     Header Length     |    Protocol Version    |           |
   |     (06h)         |    (10h)         |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |           Service Type Identifier          | KNXnet/IP secure  |
   |           (0951h)                  | Header       |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |           Total Length               |           |
   |           (26h+sizeof(HPAI))            |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |           HPAI Control Endpoint           |           |
   |           (variable length)             |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+ Unencrypted Data  |
   |       Diffie-Hellman Client Public Value X       |           |
   |       (32 Octet)                    |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+

```
**Figure 14 – Binary format of the KNXnet/IP Secure Session Request frame**

Fields:

   - `HPAI Control Endpoint`

This field shall contain the return address information of the KNXnet/IP secure client’s control
endpoint so the KNXnet/IP secure server knows where to direct possible secure channel
responses and/or status information.

   - `Diffie-Hellman Client Public Value X`

ECDH public value X as calculated by the KNXnet/IP secure client from its chosen secret on
the Curve25519 for ECDH key agreement.

2.2.3.6.3 Security
The SESSION_REQUEST frame is sent unencrypted to the KNXnet/IP secure server and is therefore
prone to replay attacks. Only if the server generates a new (cryptographically save) random public/private
ECDH parameter Y according to the Curve25519 specification for every new session it can be assured
that replayed SESSION_REQUEST frames result in different session keys and a replay of
SECURE_WRAPPER frames is not possible.

© C i h 2012 2021 A i i S S ifi i 01 01 02 29 f 1


-----

2.2.3.6.4 Reception and decoding
Upon reception of a KNXnet/IP Session Request frame the received data is evaluated and decoded in the
following steps.

   - TCP
A KNXnet/IP Session Request frame is only valid if received over a TCP endpoint with a TCP
HPAI set to zero (route back). If the frame is received via UDP or the contained HPAI is
different from a TCP “route back” HPAI, then the received KNXnet/IP Session Request frame
shall be discarded.

   - Frame Size
KNXnet/IP Session Request frames currently have a fixed length of 46 octets (6 octets for the
Secure Header, 8 octets for the UDP/TCP HPAI and 32 octets for the client’s ECDH public
value). Received KNXnet/IP Session Request frames larger or smaller than 46 octets shall be
discarded.

###### 2.2.3.7 SESSION_RESPONSE

2.2.3.7.1 Usage
This frame shall be sent by the KNXnet/IP secure server to the KNXnet/IP secure client’s control
endpoint in response to a received secure session request frame.

2.2.3.7.2 Binary format
```
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |     Header Length     |    Protocol Version    |           |
   |     (06h)         |    (10h)         |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |           Service Type Identifier          | KNXnet/IP secure  |
   |           (0952h)                  | Header       |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+           |
   |             Total Length             |           |
   |               (38h)              |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |          Secure Session Identifier         |           |
   |          (2 Octet)                 |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+ Unencrypted Data  |
   |       Diffie-Hellman Server Public Value Y       |           |
   |       (32 Octet)                    |           |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+
   |          Message Authentication Code         | Encrypted Data   |
   |          (16 Octet)                 | (AES128 CCM)    |
   +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+---------------------+

```
**Figure 15 – Binary format of the KNXnet/IP Session Response frame**

Fields:

   - `Secure Session Identifier`

Unique identifier assigned by the server to the newly created session. The client shall later send
this identifier with every frame related to the session for the server to select the appropriate
decryption key. The secure session identifier 00h shall in general be reserved for multicast data
and shall not be used for unicast connections.

   - `Diffie-Hellman Server Public Value Y`

ECDH public value Y as calculated by the server from its chosen secret on the Curce25519 for
ECDH key agreement.

   - `Message Authentication Code`

The full 128 bit CCM-MAC. The CCM algorithm ensures that the MAC itself is also encrypted.

© C i h 2012 2021 A i i S S ifi i 01 01 02 30 f 1


-----

2.2.3.7.3 Authenticating the device to the client
To defend against man-in-the-middle-attacks, the KNXnet/IP secure server shall authenticate itself
against the KNXnet/IP secure client with its Device Authentication Code as a shared secret. This
authentication is integrated into the Elliptic-Curve Diffie-Hellman procedure when the KNXnet/IP secure
server sends its ECDH public value to the client (compare [10] STS station-to-station protocol).

With the knowledge of the Device Authentication Code as shared secret the client is able to optionally
validate the MAC of the received Session Response frame and this way can trust the authenticity of both
the message as well as the responding KNXnet/IP secure server.

2.2.3.7.4 Authentication
SESSION_RESPONSE frames shall provide the KNXnet/IP secure server authentication using a message
authentication code (MAC) that shall be appended to the Session Response frame for ensuring data
integrity. For calculating this MAC, the CCM algorithm with AES128 as cipher shall be used as defined
in the Annex A of KNX Data Security in [02]. As AES128 key for the CCM algorithm the Device
_Authentication Code shall be used._

The KNX specific definitions of the CCM parameters for SESSION_RESPONSE messages shall be as
follows.

**A**

For KNXnet/IP Session Response frames A = KNXnet/IP Secure Header | Secure Session Identifier |
(Diffie-Hellman Client Public Value X ^ Diffie-Hellman Server Public Value Y). The length of the
associated data is fixed to a = 40 octets.

**P**

As KNXnet/IP Session Response frames only use authentication, the CCM payload P is empty. This
means that the length of the payload Q for the generation of B0 is fixed to 0.

**B0**

The composition of the first block B0 for the CBC-MAC calculation in the CCM algorithm is specified in
Figure 16.

**octet nr**

**0** **…** **13** **14** **15**

**0** **Q = 0000h**

**Figure 16 – Format of B0 for the CCM CBC-MAC in Session Response frames**

   - Q shall be the length of the payload P in octets, which is fixed to 0 for KNXnet/IP Session
Response frames.

**Ctr0**

The format of the Block Counter Ctr0 is also KNX specific (for Session Response frames only the
calculation of one AES128 block for the encryption of the MAC is necessary). Ctr0 shall be composed as
specified in Figure 17.

**octet nr**

**0** **…** **13** **14** **15**

**0** **FFh** **00h**

**Figure 17 – Format of Ctr0 for the CCM MAC encryption in Session Response frames**

© C i h 2012 2021 A i i S S ifi i 01 01 02 31 f 1

|octet nr|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**0 **|**… **|**13**|**14**|**15**|
|**0 **|**0 **|**0 **|**Q = 0000h**|**Q = 0000h**|

|octet nr|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**0 **|**… **|**13**|**14**|**15**|
|**0 **|**0 **|**0 **|**FFh**|**00h**|


-----

2.2.3.7.5 Reception and decoding
Upon reception of a KNXnet/IP Session Response frame the received data is evaluated and decoded in
the following steps.

   - Frame Size
KNXnet/IP Session Response frames have a fixed length of 56 octets (6 octets for the Secure
Header, 2 octets for the Session Identifier, 32 octets for Diffie-Hellman Server Public Value Y
and 16 octets for the Message Authentication Code). Received KNXnet/IP Session Response
frames larger or smaller than 56 octets shall be discarded.

   - Message Authentication Code
Optionally, the received Session Response frame is decrypted with the Device Authentication
_Code and the message authentication code Yn over the received frame and the session’s Diffie-_
Hellman public values X and Y is created. This calculated MAC is then compared to the
received and decrypted MAC TR from the Session Response frame (see “Message verification”
in Annex A of KNX Data Security in [02]). If they match, the KNXnet/IP Session Response
frame can be trusted.

2.2.3.7.6 Exception Handling
If the KNXnet/IP server device cannot process the secure session request (either because there are no
more free secure session resources or the device is too busy to calculate another ECDH parameter set)
then the SESSION_REQUEST shall be discarded and no SESSION_RESPONSE shall be sent.

###### 2.2.3.8 SESSION_AUTHENTICATE

2.2.3.8.1 Usage
This frame shall be sent by the KNXnet/IP secure client to the control endpoint of the KNXnet/IP secure
server after the Diffie-Hellman handshake to authenticate the user against the server device. The
maximum time a KNXnet/IP secure client shall wait for an authentication status response of the
KNXnet/IP secure server shall be 10 seconds.

2.2.3.8.2 Binary format
```
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |     Header Length     |    Protocol Version    |
          |     (06h)         |    (10h)         |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |           Service Type Identifier          |
          |           (0953h)                  |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |             Total Length             |
          |             (18h)                |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |     reserved       |      User ID       |
          |     (00h)         |      (1 Octet)      |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |          Message Authentication Code         |
          |          (16 Octet, CBC-MAC/CCM)           |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 18 – Binary format of the KNXnet/IP Session Authenticate frame**

Fields:

   - `Reserved`

This field must be set to 00h by the client. If the server receives a non-zero value the frame shall
be discarded.

© C i h 2012 2021 A i i S S ifi i 01 01 02 32 f 1


-----

   - `User ID`

This field shall indicate the user requested by the client for authentication of the secure session.
The server shall use the User ID as index into the passwords array (see 2.3.1.4
PID_PASSWORD_HASHES (PID=93) for details).

    - 00h: Reserved, shall not be used

    - 01h: Management level access

    - 02h – 7Fh: User level access

    - 80h – FFh: Reserved, shall not be used

The access level (management level access or user level access with possibly any device
dependent role) shall also determine the set of services accepted by the server after authentication
(see 2.2.1.4 Access Control for details).

   - `Message Authentication Code`
```
    The full 128 bit CCM-MAC. The CCM algorithm ensures that the MAC itself is also encrypted.

```
To protect the communication from possible attacks, the authentication request frame shall be encrypted
and authenticated. Therefore this frame shall only be sent wrapped in a SECURE_WRAPPER frame over
the intended secure session.

2.2.3.8.3 Authenticating the client to the device
For authenticating the client (typically the tool software or visualizations) and user of the secure session
to the KNXnet/IP secure device, each device shall be secured by two types of passwords for two different
levels of access.

   - Management-Level Access
On the management level all services including KNXnet/IP Device Management shall be
supported. To change KNXnet/IP secure parameters, KNX Data Security role “ETS” (usage of
the Tool Key) shall be required.

   - User-Level Access
On the user level, all services except KNXnet/IP Device Management may be supported. This
means, on the user level everything shall be allowed that would also be possible using a
physical connection to the KNX bus.

The passwords are specific to devices and therefore may be individual for each device. For practical
reasons, a user may choose to opt for the same password set in all devices of his installation project. The
client decides which of the two passwords to use for authentication. After successful authentication, the
degree of access granted by the device to the client shall depend on the password used during
authentication.

If authentication fails, the client has to restart with a new ECDH handshake; it is not allowed to send
more than one authentication request with the same ECDH session key. This dramatically delays every
attempt to on-line attack the passwords.

2.2.3.8.4 Authentication
SESSION_AUTHENTICATE frames shall provide their authentication information using a message
authentication code (MAC) that shall be appended to the Session Authenticate frame for ensuring data
integrity. For calculating this MAC, the CCM algorithm with AES128 as cipher shall be used as defined
in the Annex A of KNX Data Security in [02]. As AES128 key for the CCM algorithm the password hash
of the User ID shall be used.

© C i h 2012 2021 A i i S S ifi i 01 01 02 33 f 1


-----

The KNX specific definitions of the CCM parameters for SESSION_AUTHENTICATE messages shall
be the following.

**A**

For KNXnet/IP Session Authentication frames A = KNXnet/IP Header | 00h | User ID | (Diffie-Hellman
Client Public Value X ^ Diffie-Hellman Server Public Value Y). The length of the associated data is fixed
to a = 40 octets.

**P**

As KNXnet/IP Session Authentication frames only use authentication, the CCM payload P is empty. This
means that the length of the payload Q for the generation of B0 is fixed to 0.

**B0**

The composition of the first block B0 for the CBC-MAC calculation in the CCM algorithm is specified in
Figure 19.

**octet nr**

**0** **…** **13** **14** **15**

**0** **Q = 0000h**

**Figure 19 – Format of B0 for the CCM CBC-MAC in Session Authenticate frames**

   - Q shall be the length of the payload P in octets, which is fixed to 0 for KNXnet/IP Session
Response frames.

**Ctr0**

The format of the Block Counter Ctr0 is also KNX specific (for Session Authenticate frames only the
calculation of one AES128 block for the encryption of the MAC is necessary). Ctr0 shall be composed as
specified in Figure 20.

**octet nr**

**0** **…** **13** **14** **15**

**0** **FFh** **00h**

**Figure 20 – Format of Ctr0 for the CCM MAC encryption in Session Authenticate frames**

2.2.3.8.5 Reception and decoding
Upon reception of a KNXnet/IP Session Authenticate frame the received data is evaluated and decoded in
the following steps.

   - Frame Size
KNXnet/IP Session Authenticate frames have a fixed length of 24 octets (6 octets for the Secure
Header, 1 octet reserved, 1 octet for the User ID and 16 octets for the Message Authentication
Code). Received KNXnet/IP Session Authenticate frames larger or smaller than 24 octets shall
be discarded.

   - Message Authentication Code
The MAC of the received Session Authenticate frame is decrypted with the password hash for
the User ID and the message authentication code Yn over the received frame and the session’s
Diffie-Hellman public values X and Y is created. This calculated MAC is then compared to the
received and decrypted MAC TR from the Session Authenticate frame (see “Message
verification” in Annex A of KNX Data Security in [02]). If they match (they can only match if
the password (hash) used as key matches), the secure session is authenticated for the User ID
(see 2.2.3.5.2 Session state machine for details).

© C i h 2012 2021 A i i S S ifi i 01 01 02 34 f 1

|octet nr|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**0 **|**… **|**13**|**14**|**15**|
|**0 **|**0 **|**0 **|**Q = 0000h**|**Q = 0000h**|

|octet nr|Col2|Col3|Col4|Col5|
|---|---|---|---|---|
|**0 **|**… **|**13**|**14**|**15**|
|**0 **|**0 **|**0 **|**FFh**|**00h**|


-----

###### 2.2.3.9 SESSION_STATUS

2.2.3.9.1 Usage
This frame may be sent by the KNXnet/IP secure server to the KNXnet/IP secure client or by the
KNXnet/IP secure client to the KNXnet/IP secure server in any stage of the secure session handshake to
indicate an error condition or status information.

2.2.3.9.2 Binary format
```
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |     Header Length     |    Protocol Version    |
          |     (06h)         |    (10h)         |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |           Service Type Identifier          |
          |           (0954h)                  |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |             Total Length             |
          |             (08h)                |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |     Status        |  Reserved          |
          |     (1 Octet)       |  (1 Octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 21 – Binary format of the KNXnet/IP Session Status frame**

Fields:

   - `Status`

This field shall indicate an error condition or status information for the secure session. Usage by
the KNXnet/IP secure server:

    - responding to the authentication request of the client:

00h → STATUS_AUTHENTICATION_SUCCESS
01h → STATUS_AUTHENTICATION_FAILED

    - signalling a timeout for or ending of the secure session:

03h → STATUS_TIMEOUT
05h → STATUS_CLOSE

    - indicating an access control issue:

02h → STATUS_UNAUTHENTICATED

Usage by the KNXnet/IP secure client:

    - preventing the already authenticated session from expiring due to timeout:

04h → STATUS_KEEPALIVE

    - closing the secure session explicitly:

05h → STATUS_CLOSE

To protect the communication from possible attacks, the session status frame shall be encrypted and
authenticated. Therefore, this frame shall only be sent wrapped in a SECURE_WRAPPER frame over the
intended secure session.

Whenever one of the above-mentioned events triggers the transmission of a session status frame, the
communication partner shall expect to receive this status within a maximum wait time of 10 seconds.

Any of the status codes for ending the secure session (STATUS_CLOSE, STATUS_UNAUTHENTICATION_FAILED, STATUS_UNAUTHENTICATED and STATUS_TIMEOUT) shall be
unconfirmed. This means that directly after sending any of these session status frames, the TCP
connection is considered unused may also be closed (start of the termination procedure for TCP
connections by sending TCP FIN command) without having to wait for a reaction (confirmation) of the
communication partner first.

© C i h 2012 2021 A i i S S ifi i 01 01 02 3 f 1


-----

##### 2.2.4 Implementation requirements

###### 2.2.4.1 Random number generation
The secure implementation of the KNXnet/IP Secure protocol – like any other cryptographic protocol needs a source of cryptographically secure random numbers at runtime. Because in a typical embedded
KNX device there is hardly any entropy to derive random numbers from, a software implemented
cryptographically secure pseudo random number generator (CSPRNG) should be used for calculating
random numbers.

For computing a different sequence of random numbers in every device, the CSPRNG must be seeded
with a device specific seed. This seed may be a random number individually programmed into every
device during manufacturing. Alternatively, the device’s individual private key might be used to seed the
CSPRNG. To meet the security requirements of the cryptographic algorithms used, a random seed that
should be at least 128 bit long is needed.

For computing a different sequence of random numbers in the same device after every power cycle, an
additional seed must be used that changes with every power cycle. A simple persistent counter that is
increased for every power cycle may be used to implement this. Alternatively, the persistent secure
KNXnet/IP multicast timer detailed in the following section may be used.

Immediately after power-up, the RAM is likely to contain random values that might be used as a source
of entropy.

During runtime any available entropy should be fed into the CSPRNG. A suitable source of entropy for
this is the system timer value read on the occurrence of certain external events like receiving a frame from
the KNX TP line or on the Ethernet connection.

###### 2.2.4.2 Persisting the multicast timer
The KNXnet/IP multicast timer must be monotonically increasing at least every millisecond. It shall
under no circumstances be decremented because this would weaken the resistance against replay attacks.
To achieve this, the multicast timer must be persisted during power-off conditions. Even better it should
be increased during power-off conditions using an RTC.

Depending on the actual hardware implementation there may be enough time after detecting a low power
condition to persist the multicast timer to non-volatile (flash) memory. If the hardware implementation
cannot guarantee the above condition, the multicast timer can be written to flash by software in regular
intervals of maximum one hour. After power-up when reading the stored multicast timer, the worst case is
assumed that the value has been stored at the very beginning of an interval while the power was lost at the
end of an interval. To ensure monotonic incrementing under this assumption, the timer difference
corresponding to one interval is added to the timer value just read.

The maximum persistence interval must be measured in mc_timer-time not real-time, because the
mc_timer may increase by an arbitrary amount during one hour of real time. The fundamental
requirement is that mc_timer may not run backwards even on power loss. From this it follows that when a
device recently persisted mc_timer value T and uses a persistence interval of D (all in milliseconds), then
it may only send out TimerNotify frames and SecureWrapper frames with timer values in the range
T … T+D. Before it sends out a timer value > T+D it must persist the current mc_timer value. Similarly,
when receiving a frame with timer value > T+D it must persist this new timer value immediately because
otherwise it cannot guarantee not re-using timer values after a power loss. All this happens regardless of
the real-time elapsed since the last persisting operation.

© C i h 2012 2021 A i i S S ifi i 01 01 02 36 f 1


-----

#### 2.3 Resource definition

##### 2.3.1 KNXnet/IP Parameter Object

###### 2.3.1.1 Overview
The KNXnet/IP Device Management of a security enabled KNXnet/IP device shall expose an additional
set of Properties in the “KNXnet/IP Parameter Object” (Object Type = 11). It shall hold the security
related Properties as listed in Table 1. (This table only gives an overview. For the mandatory and optional
Properties, please refer to 0).

The security conditions for accessing these Properties are specified in the detailed Property descriptions
in clause 2.3.1 and further. In general, the security related Properties of the KNXnet/IP Parameter Object
shall only be accessible via KNX Data Security. They shall not be accessible via any other standard- or
non-standard means.

It is therefore recommended that the memory where the Properties are stored should be encrypted as well,
so that it cannot be interpreted by any other interface to this memory, bypassing the KNX S-AL, such as a
JTAG-interface.

**Table 1 – Security related Properties in the KNXnet/IP Parameter Object**

**Property name** **Property Identifier** **Property Datatype**

Secure Backbone Key 91 = PID_BACKBONE_KEY PDT_GENERIC_16

Device Authentication Code 92 = PID_DEVICE_- PDT_GENERIC_16

AUTHENTICATION_CODE

Password Hashes 93 = PID_PASSWORD_HASHES PDT_GENERIC_16[]

Secured Service Families 94 = PID_SECURED_SERVICE- PDT_FUNCTION

_FAMILIES

Multicast Latency Tolerance 95 = PID_MULTICAST_LATENCY- PDT_UNSIGNED_INT

_TOLERANCE

Multicast Sync Latency Fraction 96 = PID_SYNC_LATENCY_- PDT_SCALING

FRACTION

Tunnelling Users 97 = PID_TUNNELLING_USERS PDT_GENERIC_02[]

###### 2.3.1.2 PID_BACKBONE_KEY (PID=91)

 **Property name:** Secure Backbone Key

 **Property Datatype:** PDT_GENERIC_16

 **Datapoint Type:** None

 **Access Policy:** 008/008 (see notation style of Access Policies in [03])

 **Access Level:** X/2

2.3.1.2.1 Abstract Resource definition
This parameter shall contain the key used for encryption, decryption and MAC calculation in secure
multicast communication.

2.3.1.2.2 Security
The Secure Backbone Key shall not be readable and shall only be writable using Application Layer
services secured with the Tool Key (authentication and confidentiality).

2.3.1.2.3 Usage by the MaS
In ex-factory state and after every factory reset the Secure Backbone Key shall be zero.

© C i h 2012 2021 A i i S S ifi i 01 01 02 3 f 1

|Property name|Property Identifier|Property Datatype|
|---|---|---|
|Secure Backbone Key|91 = PID_BACKBONE_KEY|PDT_GENERIC_16|
|Device Authentication Code|<br>92 = PID_DEVICE_-<br>AUTHENTICATION_CODE|<br>PDT_GENERIC_16|
|Password Hashes|<br>93 = PID_PASSWORD_HASHES|PDT_GENERIC_16[]|
|Secured Service Families|<br>94 = PID_SECURED_SERVICE-<br>_FAMILIES|<br>PDT_FUNCTION|
|Multicast Latency Tolerance|<br>95 = PID_MULTICAST_LATENCY-<br>_TOLERANCE|PDT_UNSIGNED_INT|
|Multicast Sync Latency Fraction|<br>96 = PID_SYNC_LATENCY_-<br>FRACTION|PDT_SCALING|
|Tunnelling Users|97 = PID_TUNNELLING_USERS|PDT_GENERIC_02[]|


-----

The Secure Backbone Key is part of the KNX/IP domain configuration. It can be changed via Property
data access or via A_DomainAddressSerialNumber_Write-PDU (see [01]). The behaviour of the
Management Server upon changing the Secure Backbone Key shall not differ depending on the way this
Resource is accessed.

Changing the Secure Backbone Key affects the generation of KNXnet/IP Routing.ind frames if the
KNXnet/IP Routing service family is configured to be secure. KNXnet/IP Secure Wrapper frames already
generated with the previous Secure Backbone Key may still be sent from outgoing queues even after the
_Secure Backbone Key has been changed (for maximum 1 second)._

Nevertheless, the Management Server shall immediately after the change of the Secure Backbone Key
start the timer synchronization process as described in 2.2.2.3.2.8. Taking internal processing delays into
account, the synchronization procedure shall start no later than 1 second after having received the Secure
_Backbone Key change._

2.3.1.2.4 Usage by the MaC (ETS)
A MaC must generate a different Secure Backbone Key for each security domain. In particular, when just
changing the routing multicast address of a security domain, it must also generate and write a new and
different Secure Backbone Key for this new security domain.

A backbone network may not use the same Secure Backbone Key on two different routing multicast
addresses, because this introduces a security hole, because attackers can potentially stimulate desirable
traffic on one multicast address and replay the traffic on the other multicast address. Different routing
multicast address must imply different Secure Backbone Keys (but not vice versa).

###### 2.3.1.3 PID_DEVICE_AUTHENTICATION_CODE (PID=92)

 **Property name:** Device Authentication Code

 **Property Datatype:** PDT_GENERIC_16

 **Datapoint Type:** None

 **Access Policy:** 008/008 (see notation style of Access Policies in [03])

 **Access Level:** X/2

2.3.1.3.1 Abstract Resource definition
This parameter shall contain the Device Authentication Code used for authentication in secure unicast
communication setup.

The Device Authentication Code is a key derived from a user chosen shared secret. It will be calculated
by the Management Client before writing it into this Property and the KNXnet/IP secure client when
verifying the KNXnet/IP secure server MAC in the Session Response.
DeviceAuthenticationCode = PBKDF2( HMAC-SHA256,<SECRET>,"device-authenticationcode.1.secure.ip.knx.org", 65.536, 128)

It shall be set by the tool software when the device is configured for the first time. It is recommended that
each device’s authentication code should be individual (randomly chosen by the tool software), but the
user can manually set this code to a user-specific value to simplify connection handling.

2.3.1.3.2 Security
The Device Authentication Code shall not be readable and shall only be writable using Application Layer
services secured with the Tool Key (authentication and confidentiality).

2.3.1.3.3 Usage by the MaS
In ex-factory state and after every factory reset the Device Authentication Code shall be the Factory
_Default Setup Key printed on the device (this is also used for secured Application Layer services in ex-_
factory state).

© C i h 2012 2021 A i i S S ifi i 01 01 02 38 f 1


-----

Changes to the Device Authentication Code shall not affect any existing secure sessions authenticated
with past Device Authentication Codes. After changing the Device Authentication Code, all subsequent
session response frames will be authenticated with the new Device Authentication Code. Taking internal
processing delays into account, the KNXnet/IP server shall start using the new Device Authentication
_Code no later than 1 second after having received the request to change the Device Authentication Code._

###### 2.3.1.4 PID_PASSWORD_HASHES (PID=93)

 **Property name:** Password Hashes

 **Property Datatype:** PDT_GENERIC_16[]

 **Datapoint Type:** None

 **Access Policy:** 008/008 (see notation style of Access Policies in [03])

 **Access Level:** X/2

2.3.1.4.1 Abstract Resource definition
This array shall contain hashes of the passwords used for authenticating the client during secure unicast
connection setup.

The Password Hashes are derived from the user chosen password texts. They will be calculated by the
Management Client before writing it into this Property and the KNXnet/IP secure client when
authenticating a secure session for a given user.
PasswordHash = PBKDF2( HMAC-SHA256,<PASSWORD>,"user-password.1.secure.ip.knx.org",
65.536, 128)

The index of the password in the array identifies a user (= User ID, see 2.2.3.8 SESSION_AUTHENTICATE). Therefore the minimum size is 1 (the first entry shall always be reserved for the
Management Client granting full access) and the maximum size shall be 127 (Management Client +
maximum 126 additional limited users).

2.3.1.4.2 Security
The Password Hashes shall not be readable and shall only be writable using Application Layer services
secured with the Tool Key (authentication and confidentiality).

2.3.1.4.3 Usage by the MaS
In ex-factory state and after every factory reset shall have the passwords set to the empty string (resulting
in the fixed hash E9C304B914A35175FD7D1C673AB52FE1). The tool software shall remind the user if
the password has not yet been changed for a device. For changing the passwords, the KNX restriction of
at most one active KNXnet/IP Device Management connection for a given time applies. This ensures that
an attacker is unable to interfere with the password change by opening a parallel connection.

A password change shall only apply to new connections. User connections authenticated using the old
password shall remain authenticated after the password change. The password shall only be used for
authenticating the Client during the Secure Session setup: see 2.4.1. The password (hashes) are not used
during later communication.

Taking internal processing delays into account, the KNXnet/IP server shall start using the new password
no later than 1 second after having received the request to change the current password.

**Error handling**

If the MaC requests to write one or more Password Hashes at Property Value array elements beyond the
supported range, then the standard error handling for A_PropertValue_Write shall apply, this is, the
request shall be confirmed with an A_PropertValue_Response-PDU with nr_of_elem = 0 and no data.

© C i h 2012 2021 A i i S S ifi i 01 01 02 39 f 1


-----

###### 2.3.1.5 PID_SECURED_SERVICE_FAMILIES (PID=94)

 **Property name:** KNXnet/IP Secured Service Families

 **Property Datatype:** PDT_FUNCTION

 **Datapoint Type:** This Property is a Function Property. The coding of the data depends on
whether data is written to the function or responded by the function. No
single DPT can be given.

 **Access Policy:** 15D/15D (see notation style of Access Policies in [03])

 **Access Level:** 3/2

2.3.1.5.1 Abstract resource definition
This Function Property shall control the service families for which security is enforced as well as the
required version of the security services. Only dedicated service families can be secured. E.g. the core
discovery services are intentionally not secured at all to allow any client to search for devices on the
network and discover their security requirements. The core connection services will follow the security
requirements of the corresponding connection oriented service families which make use of these services.

2.3.1.5.2 Security
Please refer to the above access requirements. These requirements are exclusive: other Roles, security
features or services shall not have access to this Property. Regardless of the device _Security Mode,_
command access to this Property shall only be possible using secure communication.

2.3.1.5.3 Initial State
The initial state of all service families supported by the device shall be set to not require security.

2.3.1.5.4 Write (A_FunctionPropertyCommand-PDU)

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

WriteServiceID

00h See below. See below.

**Figure 22 - Basic format and common handling of A_FunctionProperty_Write-PDU**

**Table 2 – Overview PID_SECURED_SERVICE_FAMILIES WriteServiceIDs**

**WriteServiceID** **Description**

00h Write the security requirements for a given KNXnet/IP Service Family (required
security version)

2.3.1.5.4.1 WriteServiceID 00h: Write the IP Service Family Security Requirement

octet 10 octet 11 octet 12 octet 13

reserved ServiceID ServiceInfo

Write Security Service Family Security
Requirement ID Version

00h 00h See below. See below.

**Figure 23 - A_FunctionProperty_Write-PDU for Write ServiceID 00h for**
**PID_SECURED_SERVICE_FAMILIES**

© C i h 2012 2021 A i i S S ifi i 01 01 02 40 f 1

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||WriteServiceID||
|00h|See below.|See below.|

|WriteServiceID|Description|
|---|---|
|00h|Write the security requirements for a given KNXnet/IP Service Family (required<br>security version)|

|octet 10|octet 11|octet 12|octet 13|
|---|---|---|---|
|reserved|ServiceID|ServiceInfo|ServiceInfo|
||Write Security<br>Requirement|Service Family<br>ID|Security<br>Version|
|00h|00h|See below.|See below.|


-----

The MaC shall use this command to disable or enable the requirement to use a specific security version
for a given KNXnet/IP service family. This means that the KNXnet/IP device shall generate KNXnet/IP
frames for this KNXnet/IP service family only according to the configured security version. The
KNXnet/IP device may accept frames for a specific KNXnet/IP service family encoded in higher security
versions only if this is explicitly allowed by these higher security versions.

For the security version as specified in this document, only the following KNXnet/IP Service Family IDs
are allowed as Service Info:

ServiceID: 00h Command “Write Service Family Security
Requirement”

ServiceInfo: Service Family ID 03h: KNXnet/IP Device Management

04h: KNXnet/IP Tunnelling

05h: KNXnet/IP Routing

Security Version 00h: Allow this KNXnet/IP Service Family to use plain
communication without any security extension.

01h: Require that this KNXnet/IP Service Family shall use at
least the security as specified in this document.

                    - 01h: Reserved. For future use.

**Service Family ID 05h: KNXnet/IP Routing**

The security status of the KNXnet/IP Routing Service Family is part of the KNX/IP domain
configuration. It can therefore not only be changed via this Function Property but also via
A_DomainAddressSerialNumber_Write-PDU (see [01]). The behaviour of the Management Server upon
enabling/disabling security for KNXnet/IP Routing shall not differ depending on the way this resource
was accessed.

Enabling or disabling security for the KNXnet/IP Routing Service Family mainly affects the generation of
KNXnet/IP Routing.ind frames. KNXnet/IP Routing.ind frames already generated with the previous
security configuration (off or wrapped according to a configured security version) may still be sent from
outgoing queues even after the security setting for the KNXnet/IP Routing Service Family has been
changed (for maximum 1 second).

The KNXnet/IP server shall immediately after enabling or disabling security for the KNXnet/IP Routing
Service Family start or stop the timer synchronization process as described in 2.2.2.3.2.8. Taking internal
processing delays into account, timer synchronization shall start or stop no later than 1 second after
having received the request to change the security setting for the KNXnet/IP Routing Service Family.

**Service Family ID 03h: KNXnet/IP Device Management**

Changes to the security version of the KNXnet/IP Device Management Service Family shall not affect
any existing KNXnet/IP Device Management connection. Especially when enabling security, existing
plain (and unauthenticated) connections shall remain intact. The MaC may reset the MaS (thus
terminating all active sessions and connections) if the MaC wants to prevent existing insecure KNXnet/IP
Device Management connections remaining connected after having required security for the KNXnet/IP
Device Management Service Family.

Enabling or disabling security for the KNXnet/IP Device Management Service Family affects the
requirement for accepting KNXnet/IP Device Management connection requests only inside a sufficiently
authenticated secure session. Taking internal processing delays into account, the KNXnet/IP server shall
apply or ignore this requirement no later than 1 second after having received the request to change the
security setting for the KNXnet/IP Device Management Service Family.

© C i h 2012 2021 A i i S S ifi i 01 01 02 41 f 1


-----

**Service Family ID 04h: KNXnet/IP Tunnelling**

Changes to the security version of the KNXnet/IP Tunnelling Service Family shall not affect any existing
Tunnelling connection. Especially when enabling security, existing plain (and unauthenticated)
connections shall remain intact. The MaC may reset the MaS (thus terminating all active sessions and
connections) if the MaC wants to prevent existing insecure Tunnelling connections remaining connected
after having required security for the KNXnet/IP Tunnelling Service Family.

Enabling or disabling security for the KNXnet/IP Tunnelling Service Family affects the requirement for
accepting Tunnelling connection requests only inside a sufficiently authenticated secure session. Taking
internal processing delays into account, the KNXnet/IP server shall apply or ignore this requirement no
later than 1 second after having received the request to change the security setting for the KNXnet/IP
Tunnelling Service Family.

**Response handling**

If the MaS can successfully handle the command then it shall set the Security Version as requested and
respond with an A_FunctionPropertyState_Response-PDU as in Figure 24.

If the MaS has any problem then it shall respond as specified in 2.3.1.5.6.

The MaS shall respond with an A_FunctionPropertyState_Response-PDU with the appropriate positive or
negative Return Code as listed in 2.3.1.5.6.

octet 10 octet 11

Return Code ServiceID

Write Security
Requirement

00h

**Figure 24 - A_FunctionPropertyState_Response-PDU for WriteServiceID 00h for**
**PID_SECURED_SERVICE_FAMILIES**

2.3.1.5.5 Read (A_FunctionPropertyState_Read-PDU)
If the MaS can respond to the command then it shall respond with an A_FunctionPropertyState_Response-PDU with a positive Return Code, the ReadServiceID and the ServiceInfo as from the
request (if available) and the command result as specified below.

octet 10 octet 11 octet 12 … octet n

Reserved ServiceID ServiceInfo

ReadServiceID

00h See below. See below.

**Figure 25 - Basic format and common handling of A_FunctionPropertyState_Read-PDU**

**Table 3 – Overview PID_SECURED_SERVICE_FAMILIES ReadServiceIDs**

**ReadServiceID** **Description**

00h Read the security requirements for a given KNXnet/IP Service Family (required
security version)

© C i h 2012 2021 A i i S S ifi i 01 01 02 42 f 1

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
||Write Security<br>Requirement|
||00h|

|octet 10|octet 11|octet 12 … octet n|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||ReadServiceID||
|00h|See below.|See below.|

|ReadServiceID|Description|
|---|---|
|00h|Read the security requirements for a given KNXnet/IP Service Family (required<br>security version)|


-----

2.3.1.5.5.1 ReadServiceID 00h: Read the IP Service Family Security Requirement

octet 10 octet 11 octet 12

Reserved ServiceID ServiceInfo

Read Security Service Family
Requirement ID

00h 00h See below.

**Figure 26 - A_FunctionPropertyState_Read-PDU for Read ServiceID 00h for**
**PID_SECURED_SERVICE_FAMILIES**

This command shall be used to read the currently configured security requirements for a given
KNXnet/IP Service Family.

For the security version as specified in this document, only the following KNXnet/IP Service Family IDs
are allowed as Service Info:

ServiceID: 00h Command “Read Service Family Security Requirement”

ServiceInfo: Service Family ID 03h: KNXnet/IP Device Management

04h: KNXnet/IP Tunnelling

05h: KNXnet/IP Routing

If the MaS can successfully respond to the request then it shall respond with an A_FunctionPropertyState_Response-PDU as in Figure 27.

If the MaS has any problem then it shall respond as specified in 2.3.1.5.6.

The MaS shall respond with an A_FunctionPropertyState_Response-PDU with the appropriate positive or
negative Return Code as listed in 2.3.1.5.6.

octet 10 octet 11 octet 12 octet 13

Return Code ServiceID ServiceInfo

Read Security Service Family Security
Requirement ID Version

00h 00h as in the
request

**Figure 27 - A_FunctionPropertyState_Response-PDU for ReadServiceID 01h for**
**PID_SECURED_SERVICE_FAMILIES**

2.3.1.5.6 Common error – and exception handling for PID_SECURED_SERVICE_FAMILIES
In case of any error or exception, the MaS shall return the specified A_FunctionPropertyState_Response-PDU, but with the field Return Code as listed in Table 4 and repeating the ServiceID –
ReadServiceID or WriteServiceID as appropriate.

octet 10 octet 11

Return Code ServiceID

                   - 7Fh as in the
request

**Figure 28 – Common A_FunctionPropertyState_Read-PDU with error for**
**PID_SECURED_SERVICE_FAMILIES**

© C i h 2012 2021 A i i S S ifi i 01 01 02 43 f 1

|octet 10|octet 11|octet 12|
|---|---|---|
|Reserved|ServiceID|ServiceInfo|
||Read Security<br>Requirement|Service Family<br>ID|
|00h|00h|See below.|

|octet 10|octet 11|octet 12|octet 13|
|---|---|---|---|
|Return Code|ServiceID|ServiceInfo|ServiceInfo|
||Read Security<br>Requirement|Service Family<br>ID|Security<br>Version|
|00h|00h|as in the<br>request||

|octet 10|octet 11|
|---|---|
|Return Code|ServiceID|
|> 7Fh|as in the<br>request|


-----

**Table 4 – Return Codes**

**Return Code** **ErrorName** **ErrorType**

FFh E_ERROR Error

The service, function or command has failed without a closer indication of the
problem. This Return Code shall only be used in case of an error for which no
Return Code is defined or supported.

F2h E_COMMAND_INVALID Invalid Command

This Return Code shall be used in case a not defined or not supported
ReadServiceID or WriteServiceID is requested.

F8h E_DATA_VOID void data

This Return Code shall be used in case any field in the request, except the
ReadServiceID or WriteServiceID has an invalid or not supported value.
This Return Code shall be used if octet 10 in the request does not equal 00h.
This Return Code shall be used if the field ServiceInfo has an invalid or not
supported value (e.g. not supported/allowed Service Family ID).

###### 2.3.1.6 PID_MULTICAST_LATENCY_TOLERANCE (PID=95)

 **Property name:** Multicast Latency Tolerance

 **Property Datatype:** PDT_UNSIGNED_INT

 **Datapoint Type:** 7.002 DPT_TimePeriodMsec

 **Access Policy:** 15D/15D (see notation style of Access Policies in [03])

 **Access Level:** 3/2

2.3.1.6.1 Abstract resource definition
This parameter specifies the length of the acceptance window for accepting incoming multicast frames
timestamped with a past multicast timer value.

This acceptance window is configurable to suit the needs of the specific installation (should be as small as
possible, to be secure, but it can be bigger if there is more latency on the network). The maximum age of
a telegram to be accepted as a valid telegram affects the reliability of the system. A greater time span will
improve tolerance against network latencies while a shorter time span will improve the protection against
replay attacks. A reasonable value for this time span is largely dependent on the expected network
latencies.

2.3.1.6.2 Security
The multicast latency tolerance can be read using plain Application Layer services, but shall only be
writable using Application Layer services secured with the Tool Key (authentication and confidentiality).

2.3.1.6.3 Usage by the MaS
In ex-factory state and after every factory reset the multicast latency tolerance shall be 2 000 ms.

Changing the multicast latency tolerance affects the reception of multicast KNXnet/IP Secure Wrapper
frames and decisions taken in the timer sync state machine as described in 2.2.2.3.2. Taking delays due to
internal processing time into account, the acceptance of KNXnet/IP Secure Wrapper frames and the timer
sync behaviour shall adapt to the new multicast latency tolerance value no later than 1 second after having
received the request to change the multicast latency tolerance.

© C i h 2012 2021 A i i S S ifi i 01 01 02 44 f 1

|Return Code|ErrorName|ErrorType|
|---|---|---|
|FFh|E_ERROR|Error|
|FFh|<br>The service, function or command has failed without a closer indication of the<br>problem. This Return Code shall only be used in case of an error for which no<br>Return Code is defined or supported.|<br>The service, function or command has failed without a closer indication of the<br>problem. This Return Code shall only be used in case of an error for which no<br>Return Code is defined or supported.|
|F2h|E_COMMAND_INVALID|Invalid Command|
|F2h|<br>This Return Code shall be used in case a not defined or not supported<br>ReadServiceID or WriteServiceID is requested.|<br>This Return Code shall be used in case a not defined or not supported<br>ReadServiceID or WriteServiceID is requested.|
|F8h|E_DATA_VOID|void data|
|F8h|<br>This Return Code shall be used in case any field in the request, except the<br>ReadServiceID or WriteServiceID has an invalid or not supported value.<br>This Return Code shall be used if octet 10 in the request does not equal 00h.<br>This Return Code shall be used if the field ServiceInfo has an invalid or not<br>supported value(e.g. not supported/allowed Service Family ID).|<br>This Return Code shall be used in case any field in the request, except the<br>ReadServiceID or WriteServiceID has an invalid or not supported value.<br>This Return Code shall be used if octet 10 in the request does not equal 00h.<br>This Return Code shall be used if the field ServiceInfo has an invalid or not<br>supported value(e.g. not supported/allowed Service Family ID).|


-----

###### 2.3.1.7 PID_SYNC_LATENCY_FRACTION (PID=96)

 - **Property name:** Multicast Sync Latency Fraction

 - **Property Datatype:** PDT_SCALING

 - **Datapoint Type:** 5.001 DPT_Scaling

 - **Access Policy:** 15D/15D (see notation style of Access Policies in [03])

 - **Access Level:** 3/2

2.3.1.7.1 Abstract resource definition
This parameter specifies the fraction of the KNXnet/IP secure Multicast Latency Tolerance in
PID_MULTICAST_LATENCY_TOLERANCE (PID = 95) that shall be used as accepted latency of
received Secure Wrapper or Timer Notify frames when deciding if the Timer Notify scheduled by the
receiving device shall be cancelled/rescheduled or not.

2.3.1.7.2 Security
The multicast latency tolerance fraction can be read using plain Application Layer services, but shall only
be writable using Application Layer services secured with the _Tool Key (authentication and_
confidentiality).

2.3.1.7.3 Usage by the MaS
In ex-factory state and after every factory reset the multicast latency tolerance fraction shall be 10,2 %
(1Ah).

Changing the multicast latency tolerance fraction affects decisions taken in the timer sync state machine
as described in 2.2.2.3.2. Taking delays due to internal processing time into account, the timer sync
behaviour shall adapt to the new value no later than 1 second after having received the request to change
the multicast latency tolerance fraction.

###### 2.3.1.8 PID_TUNNELLING_USERS (PID=97)

 **Property name:** Tunnelling Users

 **Property Datatype:** PDT_Generic_02[]

 **Datapoint Type:** None

 **Access Policy:** 00C/00C (see notation style of Access Policies in [03])

 **Access Level:** 2/2

2.3.1.8.1 Abstract resource definition
The Tunnelling Users table shall link the tunnelling slots with their configured Individual Addresses (see
PID_TUNNELLING_ADDRESSES of KNXnet/IP as used in Tunnelling v2 [08] and specified in [07])
with the users (see 2.3.1.4 “PID_PASSWORD_HASHES (PID=93)”) having the rights to connect with
these tunnelling addresses.

This authorization shall only be applied for authenticated sessions. If security is disabled for KNXnet/IP
Tunnelling, every unauthenticated MaC has access to all of the available Tunnelling addresses.

2.3.1.8.2 Security
The tunnelling users table shall be readable and writable using Application Layer services secured with
the Tool Key (authentication and confidentiality) only.

2.3.1.8.3 Format
The Tunnelling Users table shall be an array Property of which each element shall contain the relation
between one User ID, which is the index into the Password Hashes table, and one Tunnelling Address,
through its index into the Tunnelling Addresses table.

© C i h 2012 2021 A i i S S ifi i 01 01 02 4 f 1


-----

**Array** **Tunnelling Address**
**User ID**
**Index** **Index**

1 octet 1 octet

**1**

**2**

**…** … …

**N**

**Figure 29 – Tunnelling Users Table**

The Tunnelling Users table is sorted by User ID (first) and Tunnelling Address Index (second). The same
User ID may be granted access to more than one Tunnelling Address and one Tunnelling Address may be
accessible by multiple Users IDs.

The management user (= User ID 01h) has implicit access to all Tunnelling Addresses and shall not be
included in the Tunnelling Users table.

It is not required that every Tunnelling Address has at least one entry in the Tunnelling Users table.
Addresses without an entry in the Tunnelling Users table shall only be usable by the management user
(= User ID 01h) if Security is enabled for the Tunnelling Service in the Secured Services Property.

2.3.1.8.4 Usage by the MaS (device)
When an authenticated Secure Session is established and the MaC requests a KNXnet/IP Tunnelling
connection, the MaS shall through the User ID associated with the Secure Session search the Tunnelling
Address(es) the User ID has access rights for.

If the Tunnelling Client does not request a specific Tunnelling Address to connect to, the Tunnelling
Server shall connect with any of the authorized and free addresses (if any). Otherwise the Tunnelling
Server shall respond with the appropriate error code.

If the User requests a specific Tunnelling Address and this address is in the Tunnelling Users table not
assigned to the user, the MaS shall respond with an appropriate error code.

The tunnelling user table shall only be used for authorization of the client during the connection setup.
The tunnelling user table shall not be used during later communication.

A change to the tunnelling user table shall thus only affect new connections and existing connections
already authorized to legitimate tunnelling users shall remain active. Taking internal processing delays
into account, the KNXnet/IP server shall evaluate the new tunnelling user table no later than 1 second
after having received the request to change the current tunnelling user table.

In ex-factory state and after every factory reset the tunnelling users table shall be empty.

**Error handling**

The Tunnelling Server (MaS) may check the validity of the contents of the KNXnet/IP Tunnelling Users.

EXAMPLE 1 Presence of an invalid User ID; sorting error in the table…
The reaction of the Tunnelling Server on invalid entries is implementation specific.

EXAMPLE 2 The Tunnelling Server may not accept Tunnelling connections at all, or it may only accept Tunnelling
connections up to where PID_TUNNELLING_USERS appears to be valid, or other.

© C i h 2012 2021 A i i S S ifi i 01 01 02 46 f 1

|User ID|Tunnelling Address<br>Index|
|---|---|
|1 octet|1 octet|
|||
|||
|…|…|
|||


-----

2.3.1.8.5 Usage by the MaC (ETS)
The MaC shall write the entries of the Tunnelling Users table, from the lower indexes to the higher,
sorted firstly according the field User ID and then according the field Tunnelling Address.

The MaC may reset the MaS (thus terminating all active sessions and connections) if the MaC wants to
prevent no longer existing tunnelling users to remain connected after having changed the tunnelling user
table.

#### 2.4 Management Procedures

##### 2.4.1 Secure session setup
See Figure 30 for a sequence diagram of the handshake taking place during secure session setup (the
handling of authentication failures is omitted for better readability).

During secure session setup the Elliptic-Curve Diffie-Hellman (ECDH) key agreement algorithm is used
to agree on a common secret key. Since the original ECDH algorithm is vulnerable to a man-in-themiddle attack, a modified form of the algorithm is used that integrates mutual authentication of client and
server. For authentication the ECDH public values sent between client and server are authenticated and
encrypted in a way that protects the symmetrical keys used for authentication against offline dictionary
attacks.

Establishing a secure session between a client and a server device is always initiated by the client sending
a SESSION_REQUEST frame to the server. This frame contains the client’s ECDH public value X.

For every received SESSION_REQUEST frame the server reserves a session identifier, generates the
ECDH parameters and calculates the session key for this secure session. The server then answers with a
SESSION_RESPONSE frame containing the Secure Session Identifier, the server’s ECDH public value
Y and an authentication part.

With the server sends out a successful secure session response, the returned session identifier is marked as
“connected” and must not be reused until it is disconnected again.

Within 10 seconds after the secure session was established, the KNXnet/IP secure client has to start
authentication of the user. Therefore, the KNXnet/IP secure client sends a SESSION_AUTHENTICATE
request wrapped inside a SECURE_WRAPPER frame to the KNXnet/IP secure server. The client expects
a SESSION_STATUS with the authentication result from the KNXnet/IP secure server within a timeout
period of 10 seconds.

**Error handling**

   - The general KNXnet/IP error handling shall apply (see Chapter 3/8/2 “KNXnet/IP Core” clause
6. This is, any Fame received with an incorrect value of a wrong length, unknown protocol
version, unknown Service Type or wrong value of a reserved field, shall be ignored.)

   - If the client sends any other SECURE_WRAPPER except a wrapped
SESSION_AUTHENTICATE request before successful authentication, the server shall respond
with a SESSION_STATUS with status field of STATUS_UNAUTHENTICATED.

   - In case of the server detects any of the below listed authentication failures then it shall send a
SESSION_STATUS frame with a status field of STATUS_AUTHENTICATION_FAILED to
the client and the connection setup handshake shall be immediately aborted (the secure session
disconnected). The following are authentication failures.

    - Use of a reserved User ID (this is, in the range 80h – FFh).

    - Use of a User ID in the range 02h to 7Fh to which no password hash is assigned in
PID_PASSWORD_HASHES.

    - Use of a password to calculate the MAC of the SESSION_AUTHENTICATE which is not
consistent with the password hash stored in PID_PASSWORD_HASHES.
Otherwise, if the authentication is successful, the status of the SESSION_STATUS shall be
STATUS_AUTHENTICATION_SUCCESS.

© C i h 2012 2021 A i i S S ifi i 01 01 02 4 f 1


-----

   - If no valid SECURE_WRAPPER frame is received by the server for a connected and
authenticated session identifier within the session timeout after the last valid frame for this
session, the server assumes a communication error, sends a final SESSION_STATUS frame
with a status field of STATUS_TIMEOUT and closes the connection. The client may keep the
session open by sending a SESSION_STATUS frame with a status field of
STATUS_KEEPALIVE before the timeout elapses.
After the secure connection has been established and successfully authenticated, a regular KNXnet/IP
connection will typically be created on top of it by exchanging CONNECT_REQUEST and
CONNECT_RESPONSE frames encapsulated as payload inside SECURE_WRAPPER frames.

Within an authenticated secure session, the client may open any number of secure connections of any
connection type. In addition, connectionless communication (e.g. DESCRIPTION_REQUEST) may be
performed within the context of the session.

For all connections created within a secure session, the server shall accept only SECURE_WRAPPER
frames associated with this session. SECURE_WRAPPER frames associated with other sessions and
plain frames shall be ignored. For outgoing communication, the server shall use SECURE_WRAPPER
frames associated with the owning session.

All other traffic belonging to the enclosed connections shall also always be securely encapsulated inside
SECURE_WRAPPER frames for this session. The KNXnet/IP Core services DISCONNECT_REQUEST
and CONNECTIONSTATE_REQUEST shall return E_CONNECTION_ID if the referenced connection
identifier is used outside the associated session (plain or within a different session).

**Error handling**

   - If the KNXnet/IP secure server receives a SECURE_WRAPPER frame containing a service
code that requires an authenticated session for authorization, but the secure session has not
successfully passed authentication, then the server shall send a SESSION_STATUS frame with
a status field of STATUS_UNAUTHENTICATED and disconnect the secure session.

   - If the KNXnet/IP secure server receives a SECURE_WRAPPER frame containing a
disconnected session identifier, this frame shall be discarded.

   - If the KNXnet/IP secure server receives a SECURE_WRAPPER frame containing a connected
session identifier, but the payload could not be successfully decrypted and/or authenticated, this
frame shall be discarded.


:Server


:Server


X … ECDH Public Value Client
Y … ECDH Public Value Server
|| … Concatenation operator
^ … XOR operator


:Client


**Figure 30 - Secure session setup handshake**

© C i h 2012 2021 A i i S S ifi i 01 01 02 48 f 1


:Client


-----

##### 2.4.2 Closing a secure session
Both, the client and the server may close an established secure session at any time by sending a
SESSION_STATUS frame with a status field of STATUS_CLOSE. In addition, the session is closed if
the server sends a SESSION_STATUS with status codes STATUS_AUTHENTICATION_FAILED,
STATUS_UNAUTHENTICATED or STATUS_TIMEOUT.

When a secure session is closed, all connections opened within the session shall be closed implicitly and
all associated resources shall be released. This implicit connection close shall not be reported to the client.

Secure sessions must be closed implicitly when the surrounding TCP connection closes.

##### 2.4.3 Retransmission of lost frames
For multicast communication UDP packets (and thus KNXnet/IP frames) may get lost, reordered and
duplicated during transmission. The communication partners need to handle losing, re-ordering and
duplication KNXnet/IP frames on the Application Layer. KNXnet/IP multicast applications are directly
exposed to the peculiarities of the UDP protocol implementation of the IP infrastructure used. The
KNXnet/IP Secure layer for multicast does not handle losing, re-ordering and duplication of KNXnet/IP
frames in any special way.

For unicast connections (secure sessions) KNXnet/IP frames are never lost, re-ordered or duplicated
because they use TCP as a reliable transport. Thus, the KNXnet/IP application is not exposed to the
peculiarities of the TCP protocol implementation or the IP infrastructure.

##### 2.4.4 Synchronizing timers
Figure 31 shows how a device synchronizes its local timer to the devices in an existing installation after
power up. It can be seen how the random delays work together to minimize the number of frames actually
sent dependent on the transmitted timer values.

If no TIMER_NOTIFY was received by device 1, it would continue sending as time keeper its periodic
TIMER_NOTIFY frames about every 10 seconds.

:Device1 :Device2 :Device3

Timer(Device1) = 0, Timer(Device2[TimeKeeper]) =1000, Timer(Device3) = 1001

Power-up Delay elapsed
Timer(Device1) = 500

TIMER_NOTIFY(500)

Timer(Device2) = 1500 Timer(Device3) = 1501
No timer update, Notify No timer update, Notify

Start Delay (100ms) Start Delay (500ms)
TimeKeeperUpdateNotify TimeFollowerUpdateNotify

Delay elapsed
Timer(Device2) = 1600

Timer(Device1) = 600 TIMER_NOTIFY(1600) Timer(Device3) = 1601
Update timer to 1600 No timer update

Cancel Delay
TimeFollowerUpdateNotify

Timer(Device1) =1600, Timer(Device2[TimeKeeper]) =1600, Timer(Device3) = 1601

**Figure 31 - Timer synchronization after power up**

© C i h 2012 2021 A i i S S ifi i 01 01 02 49 f 1

|Col1|Col2|Col3|
|---|---|---|
|Timer(Device<br>No timer upda|2)<br>  t|=<br>  e,|
|Timer(Device<br>No timer upda|||

|Col1|Col2|Col3|
|---|---|---|
|Timer(Device<br>No timer upd|3)<br>  at|<br>  e|
|Timer(Device<br>No timer upd|||

|Col1|Col2|Col3|
|---|---|---|
|Timer(Device<br>No timer upd|3)<br>  at|<br>  e|
|Timer(Device<br>No timer upd|||

|:Device1 :Device2 :Device3<br>Timer(Device1) = 0, Timer(Device2[TimeKeeper]) =1000, Timer(Device3) = 1001<br>Power-up Delay elapsed<br>Timer(Device1) = 500<br>TIMER NOTIFY(500)<br>_<br>Timer(Device2) = 1500 Timer(Device3) = 1501<br>No timer update, Notify No timer update, Notify<br>Start Delay (100ms) Start Delay (500ms)<br>TimeKeeperUpdateNotify TimeFollowerUpdateNotify<br>Delay elapsed<br>Timer(Device2) = 1600<br>Timer(Device1) = 600 TIMER _NOTIFY(1600) Timer(Device3) = 1601<br>Update timer to 1600 No timer update<br>Cancel Delay<br>TimeFollowerUpdateNotify<br>Timer(Device1) =1600, Timer(Device2[TimeKeeper]) =1600, Timer(Device3) = 1601|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|:Device1<br>:Device2<br>TIMER_NOTIFY(500)<br>:Device3<br>Timer(Device1) = 0, Timer(Device2[TimeKeeper]) =1000, Timer(Device3) = 1001<br>Power-up Delay elapsed<br>Timer(Device1) = 500<br>Timer(Device2) = 1500<br>No timer update, Notify<br>Timer(Device3) = 1501<br>No timer update, Notify<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>Start Delay (100ms)<br>TimeKeeperUpdateNotify<br>TIMER_NOTIFY(1600)<br>Delay elapsed<br>Timer(Device2) = 1600<br>Timer(Device1) =1600, Timer(Device2[TimeKeeper]) =1600, Timer(Device3) = 1601<br>Timer(Device3) = 1601<br>No timer update<br>Cancel Delay<br>TimeFollowerUpdateNotify<br>Timer(Device1) = 600<br>Update timer to 1600|Time|Time|r(Device1) = 0, Timer(Device2[TimeKeeper]) =1000, Timer(|Device3) = 1001|Device3) = 1001|
|:Device1<br>:Device2<br>TIMER_NOTIFY(500)<br>:Device3<br>Timer(Device1) = 0, Timer(Device2[TimeKeeper]) =1000, Timer(Device3) = 1001<br>Power-up Delay elapsed<br>Timer(Device1) = 500<br>Timer(Device2) = 1500<br>No timer update, Notify<br>Timer(Device3) = 1501<br>No timer update, Notify<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>Start Delay (100ms)<br>TimeKeeperUpdateNotify<br>TIMER_NOTIFY(1600)<br>Delay elapsed<br>Timer(Device2) = 1600<br>Timer(Device1) =1600, Timer(Device2[TimeKeeper]) =1600, Timer(Device3) = 1601<br>Timer(Device3) = 1601<br>No timer update<br>Cancel Delay<br>TimeFollowerUpdateNotify<br>Timer(Device1) = 600<br>Update timer to 1600|Time|Time|TIMER_NOTIFY(500)<br>Power-up Delay elapsed<br>Timer(Device1) = 500<br>Timer(Device2)<br>No timer updat<br>Start Delay (100ms)<br>TimeKeeperUpdateNotify<br>TIMER_NO<br>Delay elapsed<br>Timer(Device2) = 1600<br>) = 600<br>  o 1600|= 1500<br>  e, Notify<br>Timer(Device3)<br>No timer updat<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>TIFY(1600)<br>Timer(Device3)<br>No timer updat<br>Cancel Delay<br>TimeFollowerUpdateNotify|= 1500<br>  e, Notify<br>Timer(Device3)<br>No timer updat<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>TIFY(1600)<br>Timer(Device3)<br>No timer updat<br>Cancel Delay<br>TimeFollowerUpdateNotify|
|:Device1<br>:Device2<br>TIMER_NOTIFY(500)<br>:Device3<br>Timer(Device1) = 0, Timer(Device2[TimeKeeper]) =1000, Timer(Device3) = 1001<br>Power-up Delay elapsed<br>Timer(Device1) = 500<br>Timer(Device2) = 1500<br>No timer update, Notify<br>Timer(Device3) = 1501<br>No timer update, Notify<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>Start Delay (100ms)<br>TimeKeeperUpdateNotify<br>TIMER_NOTIFY(1600)<br>Delay elapsed<br>Timer(Device2) = 1600<br>Timer(Device1) =1600, Timer(Device2[TimeKeeper]) =1600, Timer(Device3) = 1601<br>Timer(Device3) = 1601<br>No timer update<br>Cancel Delay<br>TimeFollowerUpdateNotify<br>Timer(Device1) = 600<br>Update timer to 1600|Time|||||
|Timer(Device<br>Update timer|Timer(Device<br>Update timer|1<br>  t|)<br>  o|)<br>  o|)<br>  o|
|Tim|Tim|||||
|Tim|Tim|Tim|er(Device1) =1600, Timer(Device2[TimeKeeper]) =1600, Ti|mer(Device3) = 1601||
|Tim|Tim|Tim||||


:Device2


:Device1


:Device2


-----

Figure 32 shows how devices are cyclically resynchronized to keep the lag between the individual device
timers small. It also helps to achieve synchronization between former physically independent KNXnet/IP
multicast groups being connected together.

Device 1 initiates the synchronization process. Each device has a cyclic synchronization timer expiring at
a fixed time with a small random variation. In this example the Device 1 is initially TimeKeeper and its
periodic timer of was the first to expire.

:Device1 :Device2 :Device3

Timer(Device1 [TimeKeeper]) = 1000, Timer(Device2) =900, Timer(Device3) = 1101

Periodic Delay elapsed
Timer(Device1) = 1000

TIMER_NOTIFY(1000)

Start Delay (10s) Timer(Device2) = 900 Timer(Device3) = 1101
TimeKeeperPeriodicNotify Update timer to 1000 No timer update, Notify

Start Delay (11s) Start Delay (500ms)
TimeFollowerPeriodicNotify TimeFollowerUpdateNotify

Delay elapsed
Timer(Device3) = 1601

TIMER_NOTIFY(1601)

Timer(Device1) = 1500 Timer(Device2) = 1500 Become TimeKeeper
Update timer to 1601 Update timer to 1601
Loose TimeKeepership

Start Delay (11s) Start Delay (10s)
TimeFollowerPeriodicNotify TimeKeeperPeriodicNotify

Start Delay (11s)
TimeFollowerPeriodicNotify

Timer(Device1) =1601, Timer(Device2) =1601, Timer(Device3 [TimeKeeper]) = 1601

**Figure 32 - Cyclic synchronization of timers**

The figure shows how the devices interact sending and receiving timer notification frames and finally
arrive with all device timer synchronized again.

#### 2.5 Profile definition
This Profile definition for KNXnet/IP Secure devices complements the Profile requirements that are
already available in for KNX Data Security in [09] AN158 Data Security and Tunnelling v2 in [08].

##### 2.5.1 Stack

###### 2.5.1.1 KNX IP

**Feature**

1 KNXnet/IP Overview M M M M
2 KNXnet/IP Core v02 v02 v02 v02
3 KNXnet/IP Device Management v02 v02 v02 v02
4 KNXnet/IP Tunnelling (v02) (v02) v02 v02

© C i h 2012 2021 A i i S S ifi i 01 01 02 0 f 1

|Col1|Col2|
|---|---|
|Timer(Device<br>Update timer|2)<br>  to|
|Timer(Device<br>Update timer||

|Col1|Col2|Col3|
|---|---|---|
|Timer(Device<br>No timer upd|3)<br>  at|<br>  e|
|Timer(Device<br>No timer upd|||

|Col1|T|
|---|---|
|||
|Timer(Device<br>Update timer|2)<br>  to|
|Timer(Device<br>Update timer||

|Col1|Col2|Col3|
|---|---|---|
|Become Time|K|e|
|Become Time|||

|:Device1 :Device2 :Device3<br>Timer(Device1 [TimeKeeper]) = 1000, Timer(Device2) =900, Timer(Device3) = 1101<br>Periodic Delay elapsed<br>Timer(Device1) = 1000<br>TIMER NOTIFY(1000)<br>_<br>Start Delay (10s) Timer(Device2) = 900 Timer(Device3) = 1101<br>TimeKeeperPeriodicNotify Update timer to 1000 No timer update, Notify<br>Start Delay (11s) Start Delay (500ms)<br>TimeFollowerPeriodicNotify TimeFollowerUpdateNotify<br>Delay elapsed<br>Timer(Device3) = 1601<br>TIMER NOTIFY(1601)<br>_<br>Timer(Device1) = 1500 Timer(Device2) = 1500 Become TimeKeeper<br>Update timer to 1601 Update timer to 1601<br>Loose TimeKeepership<br>Start Delay (11s) Start Delay (10s)<br>TimeFollowerPeriodicNotify TimeKeeperPeriodicNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>Timer(Device1) =1601, Timer(Device2) =1601, Timer(Device3 [TimeKeeper]) = 1601|Col2|Col3|Col4|Col5|Col6|
|---|---|---|---|---|---|
|:Device1<br>:Device2<br>TIMER_NOTIFY(1000)<br>:Device3<br>Timer(Device1 [TimeKeeper]) = 1000, Timer(Device2) =900, Timer(Device3) = 1101<br>Periodic Delay elapsed<br>Timer(Device1) = 1000<br>Timer(Device2) = 900<br>Update timer to 1000<br>Timer(Device3) = 1101<br>No timer update, Notify<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>TIMER_NOTIFY(1601)<br>Delay elapsed<br>Timer(Device3) = 1601<br>Timer(Device1) =1601, Timer(Device2) =1601, Timer(Device3 [TimeKeeper]) = 1601<br>Timer(Device2) = 1500<br>Update timer to 1601<br>Timer(Device1) = 1500<br>Update timer to 1601<br>Loose TimeKeepership<br>Start Delay (10s)<br>TimeKeeperPeriodicNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>Become TimeKeeper<br>Start Delay (10s)<br>TimeKeeperPeriodicNotify|Time|Time|r(Device1 [TimeKeeper]) = 1000, Timer(Device2) =900, Tim|er(Device3) = 1101|er(Device3) = 1101|
|:Device1<br>:Device2<br>TIMER_NOTIFY(1000)<br>:Device3<br>Timer(Device1 [TimeKeeper]) = 1000, Timer(Device2) =900, Timer(Device3) = 1101<br>Periodic Delay elapsed<br>Timer(Device1) = 1000<br>Timer(Device2) = 900<br>Update timer to 1000<br>Timer(Device3) = 1101<br>No timer update, Notify<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>TIMER_NOTIFY(1601)<br>Delay elapsed<br>Timer(Device3) = 1601<br>Timer(Device1) =1601, Timer(Device2) =1601, Timer(Device3 [TimeKeeper]) = 1601<br>Timer(Device2) = 1500<br>Update timer to 1601<br>Timer(Device1) = 1500<br>Update timer to 1601<br>Loose TimeKeepership<br>Start Delay (10s)<br>TimeKeeperPeriodicNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>Become TimeKeeper<br>Start Delay (10s)<br>TimeKeeperPeriodicNotify|Time|Time|TIMER_NOTIFY(1000)<br>Periodic Delay elapsed<br>Timer(Device1) = 1000<br>Timer(Device2)<br>Update timer to<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>T<br>Timer(Device2)<br>Update timer to<br>) = 1500<br>  o 1601<br> pership<br>Start Delay (10s)<br>TimeKeeperPeriodicNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify|= 900<br>   1000<br>Timer(Device3)<br>No timer updat<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>IMER_NOTIFY(1601)<br>Delay elapsed<br>Timer(Device3) = 1601<br> = 1500<br>   1601<br>Become TimeK<br>Start Delay (10s)<br>TimeKeeperPeriodicNotify|= 900<br>   1000<br>Timer(Device3)<br>No timer updat<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>IMER_NOTIFY(1601)<br>Delay elapsed<br>Timer(Device3) = 1601<br> = 1500<br>   1601<br>Become TimeK<br>Start Delay (10s)<br>TimeKeeperPeriodicNotify|
|:Device1<br>:Device2<br>TIMER_NOTIFY(1000)<br>:Device3<br>Timer(Device1 [TimeKeeper]) = 1000, Timer(Device2) =900, Timer(Device3) = 1101<br>Periodic Delay elapsed<br>Timer(Device1) = 1000<br>Timer(Device2) = 900<br>Update timer to 1000<br>Timer(Device3) = 1101<br>No timer update, Notify<br>Start Delay (500ms)<br>TimeFollowerUpdateNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>TIMER_NOTIFY(1601)<br>Delay elapsed<br>Timer(Device3) = 1601<br>Timer(Device1) =1601, Timer(Device2) =1601, Timer(Device3 [TimeKeeper]) = 1601<br>Timer(Device2) = 1500<br>Update timer to 1601<br>Timer(Device1) = 1500<br>Update timer to 1601<br>Loose TimeKeepership<br>Start Delay (10s)<br>TimeKeeperPeriodicNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>Start Delay (11s)<br>TimeFollowerPeriodicNotify<br>Become TimeKeeper<br>Start Delay (10s)<br>TimeKeeperPeriodicNotify|Time|||||
|Timer(Device<br>Update timer<br>Loose TimeKe|Timer(Device<br>Update timer<br>Loose TimeKe|1<br>  t<br> e|)<br>  o<br> p|)<br>  o<br> p|)<br>  o<br> p|
|Tim|Tim|||||
|Tim|Tim|Tim|er(Device1) =1601, Timer(Device2) =1601, Timer(Device3 [T|imeKeeper]) = 1601||
|Tim|Tim|Tim||||

|Col1|Feature|All KNX IP Secure Profiles|KNX IP end device|KNXnet/IP Tunnelling Server|KNXnet/IP Router|
|---|---|---|---|---|---|
|1|KNXnet/IPOverview|M|M|M|M|
|2|KNXnet/IPCore|v02|v02|v02|v02|
|3|KNXnet/IP Device Management|v02|v02|v02|v02|
|4|KNXnet/IP Tunnelling|(v02)|(v02)|v02|v02|


:Device2


:Device1


:Device3


-----

5 KNXnet/IP Routing (v01) v01 (v01) v01
6 KNX IP System Broadcast O M O M
7 §2.2.1 KNXnet/IP Security Layer M M M M
8 §2.2.2 Multicast communication O M O M

(vnn) This notation style shall mean that this functionality is optional but, if it is implemented the indicated
protocol version nn shall be implemented. Other versions are not allowed.

EXAMPLE 3 (v02) means that – if the functionality is implemented, that then v02 shall be
implemented.

###### 2.5.1.2 KNX Secure

**Feature**

[09] §9.1 Profile Module “S-AL” M M M M

###### 2.5.1.3 Resources

2.5.1.3.1 Overview

**Feature**

KNX Serial Number – Realisation Type 2 M M M M

© C i h 2012 2021 A i i S S ifi i 01 01 02 1 f 1

|Col1|Feature|All KNX IP Secure Profiles|KNX IP end device|KNXnet/IP Tunnelling Server|KNXnet/IP Router|
|---|---|---|---|---|---|
|5|KNXnet/IP Routing|(v01)|v01|(v01)|v01|
|6|KNX IPSystem Broadcast|O|M|O|M|
|7|§2.2.1 KNXnet/IPSecurity Layer|M|M|M|M|
|8|§2.2.2 Multicast communication|O|M|O|M|

|Col1|Feature|All KNX IP Secure Profiles|KNX IP end device|KNXnet/IP Tunnelling Server|KNXnet/IP Router|
|---|---|---|---|---|---|
|[09]|§9.1 Profile Module “S-AL”|M|M|M|M|

|Feature|All KNX IP Secure Profiles|KNX IP end device|KNXnet/IP Tunnelling Server|KNXnet/IP Router|
|---|---|---|---|---|
|KNXSerial Number – Realisation Type 2|M|M|M|M|


-----

2.5.1.3.2 KNX Serial Number – Realisation Type 2

**Specification**

[04] - §4.16.1 “Abstract Resource definition”

    - §4.16.3 “KNX Serial Number –
Realisation Type 2”

##### 2.5.2 Interface Objects and Properties

|Specification|Test|
|---|---|
|[04] -<br>§4.16.1 “Abstract Resource definition”<br>- <br>§4.16.3 “KNX Serial Number –<br>Realisation Type 2”||


###### 2.5.2.1 Interface Objects

 _S-Mode Profiles  End-devices  Interface Objects_

**Interface Object**

0 Device Object M M M M
11 KNXnet/IP Parameter Object M M M M

|Interface Object|All KNX IP Secure devices|KNX IP end device|KNXnet/IP Tunnelling Server|KNXnet/IP Router|
|---|---|---|---|---|
|0 <br>Device Object|M|M|M|M|
|11 KNXnet/IP Parameter Object|M|M|M|M|


###### 2.5.2.2 Device Object

**Property**

1 PID_OBJECT_TYPE M M M M
11 PID_SERIAL_NUMBER M M M M

|Property|All KNX IP Secure devices|KNX IP end device|KNXnet/IP Tunnelling Server|KNXnet/IP Router|
|---|---|---|---|---|
|1 PIDOBJECTTYPE|M|M|M|M|
|__<br>11 PID_SERIAL_NUMBER|M|M|M|M|


###### 2.5.2.3 KNXnet/IP Parameter Object

**Property**

1 PID_OBJECT_TYPE M M M M
91 PID_BACKBONE_KEY O M O M
92 PID_DEVICE_AUTHENTICATION_CODE M M M M
93 PID_PASSWORD_HASHES[ a] M M M M
94 PID_SECURED_SERVICE _FAMILIES M M M M

© C i h 2012 2021 A i i S S ifi i 01 01 02 2 f 1

|Property|All KNX IP Secure devices|KNX IP end device|KNXnet/IP Tunnelling Server|KNXnet/IP Router|
|---|---|---|---|---|
|1 PIDOBJECTTYPE|M|M|M|M|
|__<br>91 PIDBACKBONEKEY|O|M|O|M|
|__<br>92 PIDDEVICEAUTHENTICATIONCODE|M|M|M|M|
|___<br>93 PIDPASSWORDHASHES a|M|M|M|M|
|__<br>94 PID_SECURED_SERVICE _FAMILIES|M|M|M|M|


-----

95 PID_MULTICAST_LATENCY_TOLERANCE O M O M
96 PID_SYNC_LATENCY_FRACTION O M O M
97 PID_TUNNELING_USERS O O M M
a A minimal number of entries of 1 is required.

##### 2.5.3 Management Procedures
No additional Management Procedures are required yet.

##### 2.5.4 Configuration Procedures

**Feature**

Firmware Download M

#### 2.6 Identifiers and discovery

##### 2.6.1 Summary of Identifiers

###### 2.6.1.1 KNXnet/IP Services

2.6.1.1.1 Service type number ranges
The KNX IP Secure service family shall use the service type number range as specified in clause 5.3.1
Service type number ranges of [05] (0950h to 09FFh).

2.6.1.1.2 KNXnet/IP Secure Services
KNX IP Secure shall use the service type identifiers SECURE_WRAPPER, SESSION_REQUEST,
SESSION_RESPONSE, SESSION_AUTHENTICATE, SESSION_STATUS and TIMER_NOTIFY as
defined in clause 5.3.2 Core KNXnet/IP services of [05] Chapter 3/8/1 “Overview”.

###### 2.6.1.2 Status Codes
KNX IP Secure implementation shall use the error and status codes for the different service type families
as defined in clause 5.5 “Error codes” of [05], in particular the status codes STATUS_AUTHENTICATION_SUCCESS, STATUS_AUTHENTICATION_FAILED, STATUS_UNAUTHENTICATED,
STATUS_TIMEOUT, STATUS_CLOSE, STATUS_KEEPALIVE are dedicated to KNX IP secure
sessions.

© C i h 2012 2021 A i i S S ifi i 01 01 02 3 f 1

|Property|All KNX IP Secure devices|KNX IP end device|KNXnet/IP Tunnelling Server|KNXnet/IP Router|
|---|---|---|---|---|
|95 PIDMULTICASTLATENCYTOLERANCE|O|M|O|M|
|___<br>96 PIDSYNCLATENCYFRACTION|O|M|O|M|
|___<br>97 PIDTUNNELINGUSERS|O|O|M|M|
|__<br>a <br>A minimal number of entries of 1 is required.|__<br>a <br>A minimal number of entries of 1 is required.|__<br>a <br>A minimal number of entries of 1 is required.|__<br>a <br>A minimal number of entries of 1 is required.|__<br>a <br>A minimal number of entries of 1 is required.|

|Feature|All KNX IP Secure Profiles|
|---|---|
|Firmware Download|M|


-----

###### 2.6.1.3 Description Information Block
Please refer to Chapter 3/8/1 “Overview” ([05]) clause 5.6 for the complete overview of the assigned s
Description Information Blocks (DIBs).

##### 2.6.2 KNXnet/IP Discovery

###### 2.6.2.1 KNXnet/IP Secure service family
KNXnet/IP servers supporting the KNXnet/IP Secure services as specified in this document shall include
the support of these services out of the KNXnet/IP Secure service family by adding an entry to the
supported service families DIB (see [06]) with the Service Family ID field set to 09h and the Service
Family Version field set to 01h.

This shall be done only if the supported service families DIB is sent in a response to a Search Request
Extended request (see “KNXnet/IP Core v2” in [06]). The KNXnet/IP Secure service family shall not be
announced in response to a KNXnet/IP Core v1 Search Request or Description Request.

The support of the KNXnet/IP Secure service family shall also be reflected in the content of Property
PID_KNXNETIP_DEVICE_CAPABILITIES (PID = 68) of the KNXnet/IP Parameter Object (Object
Type = 17) (see [07]).

###### 2.6.2.2 KNXnet/IP Secured service families DIB
KNXnet/IP servers supporting the KNXnet/IP Secure services as specified in this document shall return
the Secured service families DIB on reception of a Search Request Extended request (see “KNXnet/IP
Core v2” in [07]) if security requirements are enabled for any of the supported KNXnet/IP service
families. The Secured service families DIB shall have the following structure:
```
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Structure Length      |  Description Type Code    |
          |  (1 octet)          |  (06h)            |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Service Family ID      |  Required Security Version  |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Service Family ID      |  Required Security Version  |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  ...             |  ...             |
          |                |                |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+
          |  Service Family ID      |  Required Security Version  |
          |  (1 octet)          |  (1 octet)          |
          +-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+-7-+-6-+-5-+-4-+-3-+-2-+-1-+-0-+

```
**Figure 33 – KNXnet/IP Secured Service Families DIB**

The Secured service families DIB has a variable length and is encoded similar to the Supported service
families DIB as in [06] Chapter 3/8/2 “Core”. It includes all KNXnet/IP service family IDs with enabled
security requirements. KNXnet/IP service families without security requirements shall not be included in
the Secured service families DIB. If no KNXnet/IP service family has security requirements, the Secured
service families DIB shall not be sent.

© C i h 2012 2021 A i i S S ifi i 01 01 02 4 f 1


-----

###### (informative)

## Binary Examples of KNXnet/IP secure Frames

#### A.1 SESSION_REQUEST

##### A.1.1 Client Curve25519 Key Pair
Private Key:
```
b8 fa bd 62 66 5d 8b 9e 8a 9d 8b 1f 4b ca 42 c8
c2 78 9a 61 10 f5 0e 9d d7 85 b3 ed e8 83 f3 78

```
Public Key (X):
```
0a a2 27 b4 fd 7a 32 31 9b a9 96 0a c0 36 ce 0e
5c 45 07 b5 ae 55 16 1f 10 78 b1 dc fb 3c b6 31

##### A.1.2 Binary Example
     +-------------------------------+ - - - - - - - - - - - - KNXnet/IP secure Header
   1  |       06h       |  header size
     +-------------------------------+
   2  |       10h       |  protocol version
     +-------------------------------+
   3  |       09h       | \
     +- - - - - - - - - - - - - - - -+ > service type identifier 0951h
   4  |       51h       | /  SESSION_REQUEST
     +-------------------------------+
   5  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > total length, 46 octets
   6  |       2Eh       | /
     +-------------------------------+ - - - - - - - - - - - - HPAI Control Endpoint
   7  |       08h       |  structure length
     +-------------------------------+
   8  |       02h       |  host protocol code, e.g. 02h for TCP over IPv4
     +-------------------------------+
   9  |       00h       | \
     +- - - - - - - - - - - - - - - -+ |
  10  |       00h       | |
     +- - - - - - - - - - - - - - - -+ > IPv4 address of client’s control endpoint,
  11  |       00h       | |  e.g. TCP route back
     +- - - - - - - - - - - - - - - -+ |
  12  |       00h       | /
     +-------------------------------+
  13  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > UDP port number of client’s control endpoint,
  14  |       00h       | /  e.g. TCP route back
     +-------------------------------+ - - - - - - - - - - - - Unencrypted Data
 15-22  |  0a a2 27 b4 fd 7a 32 31  | \
     +- - - - - - - - - - - - - - - -+ |
 23-30  |  9b a9 96 0a c0 36 ce 0e  | |
     +- - - - - - - - - - - - - - - -+ > Diffie-Hellman Client Public Value X
 31-38  |  5c 45 07 b5 ae 55 16 1f  | |
     +- - - - - - - - - - - - - - - -+ |
 39-46  |  10 78 b1 dc fb 3c b6 31  | /
     +-------------------------------+

#### A.2 SESSION_RESPONSE

##### A.2.1 Server Curve25519 Key Pair
```
Private Key:
```
68 c1 74 48 13 f4 e6 5c f1 0c ca 67 1c aa 13 36
a7 96 b4 ac 40 cc 5c f2 65 56 74 22 5c 1e 52 64

```
Public Key (Y):
```
bd f0 99 90 99 23 14 3e f0 a5 de 0b 3b e3 68 7b
c5 bd 3c f5 f9 e6 f9 01 69 9c d8 70 ec 1f f8 24

```
© C i h 2012 2021 A i i S S ifi i 01 01 02 f 1


-----

##### A.2.2 Message Authentication Code
**Security Parameters**

Device Authentication Password: `“trustme”`

_Device Authentication Code:_ `e1 58 e4 01 20 47 bd 6c c4 1a af bc 5c 04 c1 fc`

Client Public Key (X): 0a a2 27 b4 fd 7a 32 31 9b a9 96 0a c0 36 ce 0e 5c 45 07 b5 ae 55
```
16 1f 10 78 b1 dc fb 3c b6 31

```
**Step 1: Calculating the additional data**

KNXnet/IP Secure Header = 06 10 09 52 00 38

Secure Session Identifier = 00 01

XOR(X, Y) = b7 52 be 24 64 59 26 0f 6b 0c 48 01 fb d5 a6 75 99 f8 3b 40 57 b3 ef 1e 79
```
e4 69 ac 17 23 4e 15

```
A = 06 10 09 52 00 38 00 01 b7 52 be 24 64 59 26 0f 6b 0c 48 01 fb d5 a6 75 99 f8 3b
```
40 57 b3 ef 1e 79 e4 69 ac 17 23 4e 15

```
a = 40 (00 28)

**Step 2: Calculating the message authentication code**

P = empty

Q = 0 (00 00)

B0 = 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00

B1 = 00 28 06 10 09 52 00 38 00 01 b7 52 be 24 64 59

B2 = 26 0f 6b 0c 48 01 fb d5 a6 75 99 f8 3b 40 57 b3

B3 = ef 1e 79 e4 69 ac 17 23 4e 15 00 00 00 00 00 00

Y0 = AES128(XOR(B0, 0)) = 69 34 be 7f 79 3f 01 5a 6c 10 3d 59 82 e1 20 c6

Y1 = AES128(XOR(B1, Y0)) = dc 89 c1 0a 8d 1a 43 bf af 1f d0 d8 0d 1a 67 c4

Y2 = AES128(XOR(B2, Y1)) = 25 2f 23 af 70 69 7c ca 48 ae fa 6e ed 05 71 8c

Y3 = AES128(XOR(B3, Y2)) = da 3d c6 af 79 89 6a a6 ee 75 73 d6 99 50 c2 83

**Step 3: Encryption of the message authentication code**

Ctr0 = 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ff 00

S0 = AES128(Ctr0) = 73 1f 96 f5 d3 ca 0b c5 b9 7e a6 9f d5 7d 30 20

MAC = XOR(S0, Y3) = a9 22 50 5a aa 43 61 63 57 0b d5 49 4c 2d f2 a3

© C i h 2012 2021 A i i S S ifi i 01 01 02 6 f 1


-----

##### A.2.3 Binary Example
```
     +-------------------------------+ - - - - - - - - - - - - KNXnet/IP secure Header
   1  |       06h       |  header size
     +-------------------------------+
   2  |       10h       |  protocol version
     +-------------------------------+
   3  |       09h       | \
     +- - - - - - - - - - - - - - - -+ > service type identifier 0952h
   4  |       52h       | /  SESSION_RESPONSE
     +-------------------------------+
   5  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > total length, 56 octets
   6  |       38h       | /
     +-------------------------------+ - - - - - - - - - - - - Unencrypted Data
   7  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > Secure Session Identifier, e.g. 01h
   8  |       01h       | /
     +-------------------------------+
  9-16  |  bd f0 99 90 99 23 14 3e  | \
     +- - - - - - - - - - - - - - - -+ |
 17-24  |  f0 a5 de 0b 3b e3 68 7b  | |
     +- - - - - - - - - - - - - - - -+ > Diffie-Hellman Server Public Value Y
 25-32  |  c5 bd 3c f5 f9 e6 f9 01  | |
     +- - - - - - - - - - - - - - - -+ |
 33-40  |  69 9c d8 70 ec 1f f8 24  | /
     +-------------------------------+ - - - - - - - - - - - - Encrypted Data
 41-48  |  a9 22 50 5a aa 43 61 63  | \
     +- - - - - - - - - - - - - - - -+ > Message Authentication Code
 49-56  |  57 0b d5 49 4c 2d f2 a3  | /
     +-------------------------------+

 A.2.4 Session Key
```
ECDH Shared Secret = d8 01 52 52 17 61 8f 0d a9 0a 4f f2 21 48 ae e0 ff 4c 19 b4 30 e8
```
08 12 23 ff e9 9c 81 a9 8b 05

```
SHA256(Shared Secret) = 28 94 26 c2 91 25 35 ba 98 27 9a 4d 18 43 c4 87 7f 6d 2d c3 7e
```
40 dc 4b eb fe 40 31 d4 73 3b 30

```
Session Key = 28 94 26 c2 91 25 35 ba 98 27 9a 4d 18 43 c4 87

#### A.3 SESSION_AUTHENTICATE

##### A.3.1 Message Authentication Code
**Security Parameters**

Password String: “secret”

Password Hash: `03 fc ed b6 66 60 25 1e c8 1a 1a 71 69 01 69 6a`

Client Public Key (X): 0a a2 27 b4 fd 7a 32 31 9b a9 96 0a c0 36 ce 0e 5c 45 07 b5 ae 55
```
16 1f 10 78 b1 dc fb 3c b6 31

```
Server Public Key (Y): bd f0 99 90 99 23 14 3e f0 a5 de 0b 3b e3 68 7b c5 bd 3c f5 f9 e6
```
f9 01 69 9c d8 70 ec 1f f8 24

```
**Step 1: Calculating the additional data**

KNXnet/IP Secure Header = 06 10 09 53 00 18

User ID = 01

XOR(X, Y) = b7 52 be 24 64 59 26 0f 6b 0c 48 01 fb d5 a6 75 99 f8 3b 40 57 b3 ef 1e 79
```
e4 69 ac 17 23 4e 15

```
A = 06 10 09 53 00 18 00 01 b7 52 be 24 64 59 26 0f 6b 0c 48 01 fb d5 a6 75 99 f8 3b
```
40 57 b3 ef 1e 79 e4 69 ac 17 23 4e 15

```
a = 40 (00 28)

© C i h 2012 2021 A i i S S ifi i 01 01 02 f 1


-----

**Step 2: Calculating the message authentication code**

P = empty

Q = 0 (00 00)

B0 = 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00

B1 = 00 28 06 10 09 53 00 18 00 01 b7 52 be 24 64 59

B2 = 26 0f 6b 0c 48 01 fb d5 a6 75 99 f8 3b 40 57 b3

B3 = ef 1e 79 e4 69 ac 17 23 4e 15 00 00 00 00 00 00

Y0 = AES128(XOR(B0, 0)) = 94 fa 4b 05 ff ed 42 38 0c 8f 11 88 31 0c 8f 75

Y1 = AES128(XOR(B1, Y0)) = 8d e1 18 42 37 3c 65 97 2f 4e 54 a5 c0 32 2d 8e

Y2 = AES128(XOR(B2, Y1)) = 02 27 31 b9 6a 19 bc cc 0a fd 51 d2 d0 3d 09 21

Y3 = AES128(XOR(B3, Y2)) = 74 16 69 f5 e3 2b ff 6f a2 ed f5 1c 52 d4 bd 8f

**Step 3: Encryption of the message authentication code**

Ctr0 = 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ff 00

S0 = AES128(Ctr0) = 6b 0b 30 1f 7c 39 5e 3d 47 34 87 63 5a 92 91 51

MAC = XOR(S0, Y3) = 1f 1d 59 ea 9f 12 a1 52 e5 d9 72 7f 08 46 2c de

##### A.3.2 Binary Example
```
     +-------------------------------+ - - - - - - - - - - - - KNXnet/IP secure Header
   1  |       06h       |  header size
     +-------------------------------+
   2  |       10h       |  protocol version
     +-------------------------------+
   3  |       09h       | \
     +- - - - - - - - - - - - - - - -+ > service type identifier 0953h
   4  |       53h       | /  SESSION_AUTHENTICATE
     +-------------------------------+
   5  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > total length, 24 octets
   6  |       18h       | /
     +-------------------------------+ - - - - - - - - - - - - Unencrypted Data
   7  |       00h       | \
     +-------------------------------+ > User ID
   8  |       01h       | /  e.g. 01h Management Client full access
     +-------------------------------+ - - - - - - - - - - - - Encrypted Data
  9-16  |  1f 1d 59 ea 9f 12 a1 52  | \
     +- - - - - - - - - - - - - - - -+ > Message Authentication Code
 17-24  |  e5 d9 72 7f 08 46 2c de  | /
     +- - - - - - - - - - - - - - - -+

 A.3.3 Secure Wrapper
```
Session Key = 28 94 26 c2 91 25 35 ba 98 27 9a 4d 18 43 c4 87

Secure Session Identifier = 00 01

Sequence Number: 0 (00 00 00 00 00 00)

KNX Serial Number: 00 fa 12 34 56 78

Message Tag: af fe

© C i h 2012 2021 A i i S S ifi i 01 01 02 8 f 1


-----

**Step 1: Calculating the message authentication code**

A = 06 10 09 50 00 3e 00 01

a = 08 (00 08)

P = 06 10 09 53 00 18 00 01 1f 1d 59 ea 9f 12 a1 52 e5 d9 72 7f 08 46 2c de

Q = 24 (00 18)

B0 = 00 00 00 00 00 00 00 fa 12 34 56 78 af fe 00 18

B1 = 00 08 06 10 09 50 00 3e 00 01 06 10 09 53 00 18

B2 = 00 01 1f 1d 59 ea 9f 12 a1 52 e5 d9 72 7f 08 46

B3 = 2c de 00 00 00 00 00 00 00 00 00 00 00 00 00 00

Y0 = AES128(XOR(B0, 0)) = 46 c7 13 9e bd 3a ce 74 e5 bf 3b ff 10 71 3a f7
Y1 = AES128(XOR(B1, Y0)) = 39 29 a1 3d 3a 14 06 92 18 2c 5f c5 3a e5 62 9a
Y2 = AES128(XOR(B2, Y1)) = 28 98 0c dc 1d 29 72 3e 66 17 0c e7 2a e0 53 32
Y3 = AES128(XOR(B3, Y2)) = 60 22 80 d0 89 6b ea a7 10 6e 72 48 f6 7f 2e ef

**Step 2: Encryption of the message authentication code**

Ctr0 = 00 00 00 00 00 00 00 fa 12 34 56 78 af fe ff 00
S0 = AES128(Ctr0) = 32 f9 28 37 6d d6 6a 1a 6d e8 f8 72 11 f8 67 31
MAC = XOR(S0, Y3) = 52 db a8 e7 e4 bd 80 bd 7d 86 8a 3a e7 87 49 de

**Step 3: Encryption of the payload**

Ctr1 = 00 00 00 00 00 00 00 fa 12 34 56 78 af fe ff 01

S1 = AES128(Ctr1) = 7f 05 ad a0 6e 76 42 09 cd 96 13 ca e2 9d 94 92

C0 = XOR(S1, P[0..15]) = 79 15 a4 f3 6e 6e 42 08 d2 8b 4a 20 7d 8f 35 c0

Ctr2 = 00 00 00 00 00 00 00 fa 12 34 56 78 af fe ff 02
S2 = AES128(Ctr2) = 34 e1 b0 15 73 18 5d b7 e8 6b 5d 76 e2 d5 1a 7e
C1 = XOR(MSB8(S2), P[16..23]) = d1 38 c2 6a 7b 5e 71 69

##### A.3.4 Wrapped Example
```
     +-------------------------------+ - - - - - - - - - KNXnet/IP Secure Wrapper Header
   1  |       06h       |  header size
     +-------------------------------+
   2  |       10h       |  protocol version
     +-------------------------------+
   3  |       09h       | \
     +- - - - - - - - - - - - - - - -+ > service type identifier 0950h
   4  |       50h       | /  SECURE_WRAPPER
     +-------------------------------+
   5  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > total length, 62 octets
   6  |       3Eh       | /
     +-------------------------------+ - - - - - - - - - KNXnet/IP Secure Wrapper Body

```
© C i h 2012 2021 A i i S S ifi i 01 01 02 9 f 1


-----

```
     +-------------------------------+ - - - - - - - - - Security Information
   7  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > secure session identifier
   8  |       01h       | /
     +-------------------------------+
   9  |       00h       | \
     +- - - - - - - - - - - - - - - -+ |
   10  |       00h       | |
     +- - - - - - - - - - - - - - - -+ |
   11  |       00h       | |
     +- - - - - - - - - - - - - - - -+ > secure unicast sequence number
   12  |       00h       | |  e.g. 0000 0000 0000h for first telegram sent
     +- - - - - - - - - - - - - - - -+ |  to newly created secure session
   13  |       00h       | |
     +- - - - - - - - - - - - - - - -+ |
   14  |       00h       | /
     +-------------------------------+
   15  |       00h       | \
     +- - - - - - - - - - - - - - - -+ |
   16  |       fah       | |
     +- - - - - - - - - - - - - - - -+ |
   17  |       12h       | |
     +- - - - - - - - - - - - - - - -+ > KNX serial number
   18  |       34h       | |
     +- - - - - - - - - - - - - - - -+ |
   19  |       56h       | |
     +- - - - - - - - - - - - - - - -+ |
   20  |       78h       | /
     +-------------------------------+
   21  |       afh       | \
     +- - - - - - - - - - - - - - - -+ > message tag
   22  |       feh       | /
     +-------------------------------+
     +-------------------------------+ - - - - - - - - - Encrypted Data
 23-30  |  79 15 a4 f3 6e 6e 42 08  | \
     +-------------------------------+ |
 31-38  |  d2 8b 4a 20 7d 8f 35 c0  | > Encapsulated SESSION_AUTHENTICATE Frame
     +-------------------------------+ | 
 39-46  |  d1 38 c2 6a 7b 5e 71 69  | /
     +-------------------------------+
     +-------------------------------+ 
 47-54  |  52 db a8 e7 e4 bd 80 bd  | \
     +-------------------------------+ > Message Authentication Code
 55-62  |  7d 86 8a 3a e7 87 49 de  | /
     +-------------------------------+

#### A.4 SESSION_STATUS

##### A.4.1 Binary Example
     +-------------------------------+ - - - - - - - - - - - - KNXnet/IP secure Header
   1  |       06h       |  header size
     +-------------------------------+
   2  |       10h       |  protocol version
     +-------------------------------+
   3  |       09h       | \
     +- - - - - - - - - - - - - - - -+ > service type identifier 0954h
   4  |       54h       | /  SESSION_STATUS
     +-------------------------------+
   5  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > total length, 8 octets
   6  |       08h       | /
     +-------------------------------+ - - - - - - - - - - - - KNXnet/IP Body
   7  |       00h       |  status code 00h STATUS_AUTHENTICATION_SUCCESS
     +-------------------------------+
   8  |       00h       |  Reserved
     +-------------------------------+

```
© C i h 2012 2021 A i i S S ifi i 01 01 02 60 f 1


-----

##### A.4.2 Secure Wrapper
Session Key = 28 94 26 c2 91 25 35 ba 98 27 9a 4d 18 43 c4 87
Secure Session Identifier = 00 01
Sequence Number: 0 (00 00 00 00 00 00)
KNX Serial Number: 00 fa aa aa aa aa
Message Tag: af fe

**Step 1: Calculating the message authentication code**

A = 06 10 09 50 00 2e 00 01

a = 08 (00 08)

P = 06 10 09 54 00 08 00 00

Q = 8 (00 08)

B0 = 00 00 00 00 00 00 00 fa aa aa aa aa af fe 00 08

B1 = 00 08 06 10 09 50 00 2e 00 01 06 10 09 54 00 08

B2 = 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00

Y0 = AES128(XOR(B0, 0)) = 46 0e a7 58 c2 24 ce 35 3b 40 0f c5 56 51 59 0d
Y1 = AES128(XOR(B1, Y0)) = 89 54 ad b8 36 1f 11 96 cb bd aa d5 4e 7c aa 23
Y2 = AES128(XOR(B2, Y1)) = a8 ed 27 96 a5 66 cd 60 b9 1a 4d e5 c1 14 4c bc

**Step 2: Encryption of the message authentication code**

Ctr0 = 00 00 00 00 00 00 00 fa aa aa aa aa af fe ff 00
S0 = AES128(Ctr0) = 0b 9e e4 76 11 db 29 29 c5 23 13 ae dd 3b 0a 1d
MAC = XOR(S0, Y2) = a3 73 c3 e0 b4 bd e4 49 7c 39 5e 4b 1c 2f 46 a1

**Step 3: Encryption of the payload**

Ctr1 = 00 00 00 00 00 00 00 fa aa aa aa aa af fe ff 01
S1 = AES128(Ctr1) = 20 05 64 e1 c7 41 88 8f d7 38 6b 06 80 9c 86 aa
C0 = XOR(S1, P[0..7]) = 26 15 6d b5 c7 49 88 8f

© C i h 2012 2021 A i i S S ifi i 01 01 02 61 f 1


-----

##### A.4.3 Wrapped Example
```
     +-------------------------------+ - - - - - - - - - KNXnet/IP Secure Wrapper Header
   1  |       06h       |  header size
     +-------------------------------+
   2  |       10h       |  protocol version
     +-------------------------------+
   3  |       98h       | \
     +- - - - - - - - - - - - - - - -+ > service type identifier 0950h
   4  |       50h       | /  SECURE_WRAPPER
     +-------------------------------+
   5  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > total length, 46 octets
   6  |       2Eh       | /
     +-------------------------------+ - - - - - - - - - KNXnet/IP Secure Wrapper Body
     +-------------------------------+ - - - - - - - - - Security Information
   7  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > secure session identifier
   8  |       01h       | /
     +-------------------------------+
   9  |       00h       | \
     +- - - - - - - - - - - - - - - -+ |
  10  |       00h       | |
     +- - - - - - - - - - - - - - - -+ |
  11  |       00h       | |
     +- - - - - - - - - - - - - - - -+ > secure unicast sequence number
  12  |       00h       | |  e.g. 00h for first telegram sent
     +- - - - - - - - - - - - - - - -+ |  to newly created secure session
  13  |       00h       | |
     +- - - - - - - - - - - - - - - -+ |
  14  |       00h       | /
     +-------------------------------+
  15  |       00h       | \
     +- - - - - - - - - - - - - - - -+ |
  16  |       fah       | |
     +- - - - - - - - - - - - - - - -+ |
  17  |       aah       | |
     +- - - - - - - - - - - - - - - -+ > KNX serial number
  18  |       aah       | |
     +- - - - - - - - - - - - - - - -+ |
  19  |       aah       | |
     +- - - - - - - - - - - - - - - -+ |
  20  |       aah       | /
     +-------------------------------+
  21  |       afh       | \
     +- - - - - - - - - - - - - - - -+ > message tag
  22  |       feh       | /
     +-------------------------------+
     +-------------------------------+ - - - - - - - - - Encrypted Data
 23-30  |  26 15 6d b5 c7 49 88 8f  |  Encapsulated SESSION_STATUS Frame
     +-------------------------------+
     +-------------------------------+ 
 31-38  |  a3 73 c3 e0 b4 bd e4 49  | \
     +-------------------------------+ > message authentication code
 39-46  |  7c 39 5e 4b 1c 2f 46 a1  | /
     +-------------------------------+

#### A.5 ROUTING_INDICATION

##### A.5.1 Binary Example
     +-------------------------------+ - - - - - - - - - - KNXnet/IP Routing.Ind Header
   1  |       06h       |  Header Size
     +-------------------------------+
   2  |       10h       |  Protocol Version
     +-------------------------------+
   3  |       05h       | \
     +- - - - - - - - - - - - - - - -+ > Service Type Identifier 0530h
   4  |       30h       | /  ROUTING_INDICATION
     +-------------------------------+
   5  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > Total Length: 17 octets
   6  |       11h       | /
     +-------------------------------+ - - - - - - - - - - KNXnet/IP Routing.Ind Body

```
© C i h 2012 2021 A i i S S ifi i 01 01 02 62 f 1


-----

```
     +-------------------------------+ - - - - - - - - - - cEMI Frame
   7  |       29h       |  Message Code: L_Data.ind
     +-------------------------------+
   8  |       00h       |  Additional Information: none
     +-------------------------------+
   9  |       BCh       |  Control Field 1: standard frame, low priority
     +-------------------------------+
  10  |       D0h       |  Control Field 2: hop count 5, group destination
     +-------------------------------+
  11  |       11h       | \
     +- - - - - - - - - - - - - - - -+ > Source address: 1.1.89
  12  |       59h       | /
     +-------------------------------+
  13  |       0ah       | \
     +- - - - - - - - - - - - - - - -+ > Destination address: 1/2/222
  14  |       DEh       | /
     +-------------------------------+
  15  |       01h       |  Length: 1
     +- - - - - - - - - - - - - - - -+
  16  |       00h       |  TPCI: T_Data_Group
     +- - - - - - - - - - - - - - - -+
  17  |       81h       |  A_GroupValue_Write: 1
     +-------------------------------+

##### A.5.2 Secure Wrapper
```
**Security Parameters:**

_Secure Backbone Key: 00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f_

Timer Value: 211938428830917 (c0 c1 c2 c3 c4 c5)

KNX Serial Number: 00 fa 12 34 56 78

Message Tag: af fe

**Step 1: Calculating the message authentication code**

A = 06 10 09 50 00 37 00 00

a = 08 (00 08)

P = 06 10 05 30 00 11 29 00 bc d0 11 59 0a de 01 00 81

Q = 17 (00 11)

B0 = c0 c1 c2 c3 c4 c5 00 fa 12 34 56 78 af fe 00 11

B1 = 00 08 06 10 09 50 00 37 00 00 06 10 05 30 00 11

B2 = 29 00 bc d0 11 59 0a de 01 00 81 00 00 00 00 00

Y0 = AES128(XOR(B0, 0)) = 95 5d 98 15 b5 16 77 88 2d 89 63 8d 46 4f cd 75

Y1 = AES128(XOR(B1, Y0)) = 59 37 08 b7 3f 9e 18 f0 cd 9c a6 94 7c a5 ea 2a

Y2 = AES128(XOR(B2, Y1)) = bd 0a 29 4b 95 25 54 b2 35 39 20 4c 22 71 d2 6b

**Step 2: Encryption of the message authentication code**

Ctr0 = c0 c1 c2 c3 c4 c5 00 fa 12 34 56 78 af fe ff 00

S0 = AES128(Ctr0) = cf 18 89 71 3f c1 c9 1a 63 b0 57 00 3f 5a 9f cf

MAC = XOR(S0, Y2) = 72 12 a0 3a aa e4 9d a8 56 89 77 4c 1d 2b 4d a4

© C i h 2012 2021 A i i S S ifi i 01 01 02 63 f 1


-----

**Step 3: Encryption of the payload**

Ctr1 = c0 c1 c2 c3 c4 c5 00 fa 12 34 56 78 af fe ff 01

S1 = AES128(Ctr1) = b1 fe 7b ba 1c 3e 52 ba 02 17 64 a4 64 ce d1 bc

C0 = XOR(S1, P[0..15]) = b7 ee 7e 8a 1c 2f 7b ba be c7 75 fd 6e 10 d0 bc

Ctr2 = c0 c1 c2 c3 c4 c5 00 fa 12 34 56 78 af fe ff 02

S2 = AES128(Ctr2) = ca 9f 6c ff 23 0c 9d ab 03 97 52 1a b6 16 b9 4e

C1 = XOR(MSB1(S2), P[16..16]) = 4b

##### A.5.3 Wrapped Example
```
     +-------------------------------+ - - - - - - - - - KNXnet/IP Secure Wrapper Header
   1  |       06h       |  Header Size
     +-------------------------------+
   2  |       10h       |  Protocol Version
     +-------------------------------+
   3  |       09h       | \
     +- - - - - - - - - - - - - - - -+ > Service Type Identifier 0950h
   4  |       50h       | /  SECURE_WRAPPER
     +-------------------------------+
   5  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > Total Length: 6+16+17+16=55 octets
   6  |       37h       | /
     +-------------------------------+ - - - - - - - - - KNXnet/IP Secure Wrapper Body
     +-------------------------------+ - - - - - - - - - Security Information
   7  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > Secure Session Identifier
   8  |       00h       | /  0000h for multicast messages
     +-------------------------------+
   9  |       C0h       | \
     +- - - - - - - - - - - - - - - -+ |
  10  |       C1h       | |
     +- - - - - - - - - - - - - - - -+ |
  11  |       C2h       | |
     +- - - - - - - - - - - - - - - -+ > Timer Value: 211938428830917
  12  |       C3h       | |
     +- - - - - - - - - - - - - - - -+ |
  13  |       C4h       | |
     +- - - - - - - - - - - - - - - -+ |
  14  |       C5h       | /
     +-------------------------------+
  15  |       00h       | \
     +- - - - - - - - - - - - - - - -+ |
  16  |       FAh       | |
     +- - - - - - - - - - - - - - - -+ |
  17  |       12h       | |
     +- - - - - - - - - - - - - - - -+ > KNX Serial Number
  18  |       34h       | |
     +- - - - - - - - - - - - - - - -+ |
  19  |       56h       | |
     +- - - - - - - - - - - - - - - -+ |
  20  |       78h       | /
     +-------------------------------+
  21  |       AFh       | \
     +- - - - - - - - - - - - - - - -+ > Message Tag
  22  |       FEh       | /
     +-------------------------------+ 

```
© C i h 2012 2021 A i i S S ifi i 01 01 02 64 f 1


-----

```
     +-------------------------------+ - - - - - - - - - - - - Encrypted Data
 23-30  |  b7 ee 7e 8a 1c 2f 7b ba  | \
     +-------------------------------+ |
 31-38  |  be c7 75 fd 6e 10 d0 bc  | > Encapsulated ROUTING_INDICATION Frame
     +-------------------------------+ | 
   39  |       4b        | /
     +-------------------------------+ 
     +-------------------------------+ 
 40-47  |  72 12 a0 3a aa e4 9d a8  | \
     +-------------------------------+ > Message Authentication Code
 48-55  |  56 89 77 4c 1d 2b 4d a4  | /
     +-------------------------------+

#### A.6 TIMER_NOTIFY

##### A.6.1 Message Authentication Code
```
**Security Parameters:**

_Secure Backbone Key: 00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f_

Timer Value: 211938428830917 (c0 c1 c2 c3 c4 c5)

KNX Serial Number: 00 fa 12 34 56 78

Message Tag: af fe

**Step 1: Calculating the message authentication code**

A = 06 10 09 55 00 24

a = 6 (00 06)

P = empty

B0 = c0 c1 c2 c3 c4 c5 00 fa 12 34 56 78 af fe 00 00

B1 = 00 06 06 10 09 55 00 24 00 00 00 00 00 00 00 00

Y0 = AES128(XOR(B0, 0)) = 45 c2 7c 18 1e 71 a0 d0 a2 5b bf 50 00 29 ec 29

Y1 = AES128(XOR(B1,Y0)) = 21 63 12 41 bc 1f 78 4d 6d 03 da 07 05 80 46 4a

**Step 2: Encryption of the message authentication code**

Ctr0 = c0 c1 c2 c3 c4 c5 00 fa 12 34 56 78 af fe ff 00

S0 = AES128(Ctr0) = cf 18 89 71 3f c1 c9 1a 63 b0 57 00 3f 5a 9f cf

MAC = XOR(S0,Y1) = ee 7b 9b 30 83 de b1 57 0e b3 8d 07 3a da d9 85

##### A.6.2 Binary Example
```
     +-------------------------------+ - - - - - - - - - KNXnet/IP Timer Notify Header
   1  |       06h       |  Header Size
     +-------------------------------+
   2  |       10h       |  Protocol Version
     +-------------------------------+
   3  |       09h       | \
     +- - - - - - - - - - - - - - - -+ > Service Type Identifier 0955h
   4  |       55h       | /  TIMER_NOTIFY
     +-------------------------------+
   5  |       00h       | \
     +- - - - - - - - - - - - - - - -+ > Total Length: 6+14+16=36 octets
   6  |       24h       | /
     +-------------------------------+ - - - - - - - - - KNXnet/IP Timer Notify Body

```
© C i h 2012 2021 A i i S S ifi i 01 01 02 6 f 1


-----

```
     +-------------------------------+ - - - - - - - - - Security Information
   7  |       C0h       | \
     +- - - - - - - - - - - - - - - -+ |
   8  |       C1h       | |
     +- - - - - - - - - - - - - - - -+ |
   9  |       C2h       | |
     +- - - - - - - - - - - - - - - -+ > Timer Value: 211938428830917
  10  |       C3h       | |
     +- - - - - - - - - - - - - - - -+ |
  11  |       C4h       | |
     +- - - - - - - - - - - - - - - -+ |
  12  |       C5h       | /
     +-------------------------------+
  13  |       00h       | \
     +- - - - - - - - - - - - - - - -+ |
  14  |       FAh       | |
     +- - - - - - - - - - - - - - - -+ |
  15  |       12h       | |
     +- - - - - - - - - - - - - - - -+ > KNX Serial Number
  16  |       34h       | |
     +- - - - - - - - - - - - - - - -+ |
  17  |       56h       | |
     +- - - - - - - - - - - - - - - -+ |
  18  |       78h       | /
     +-------------------------------+
  19  |       AFh       | \
     +- - - - - - - - - - - - - - - -+ > Message Tag
  20  |       FEh       | /
     +-------------------------------+ 
     +-------------------------------+ - - - - - - - - - Encrypted Data
 21-28  |  ee 7b 9b 30 83 de b1 57  | \
     +-------------------------------+ > Message Authentication Code
 29-36  |  0e b3 8d 07 3a da d9 85  | /

```
© C i h 2012 2021 A i i S S ifi i 01 01 02 66 f 1


-----

###### (informative)

## Interpretation of the timer sync state machine

###### (not up to date, but the concepts remain valid)

#### B.1 Time sync state machine

**State**

**Event** **SCHED_NOTIFY** **SCHED_UPDATE** **IDLE_NOTIFY**

E01 SCHED_NOTIFY **>> IDLE_NOTIFY** IDLE_NOTIFY
A1 + A3 + A7 (E01not) A1 + A7 (E01upd) A1 + A7 (E01idl)

E02 SCHED_NOTIFY **>> IDLE_NOTIFY** IDLE_ NOTIFY
A3 (E02not) A0 (E02upd) A0 (E02idl)

E03 SCHED_NOTIFY SCHED_UPDATE IDLE_ NOTIFY
A0 (E03not) A0 (E03upd) A0 (E03idl)

E04 **>> SCHED_UPDATE** SCHED_UPDATE IDLE_ NOTIFY
A4 (E04not) A0 (E04upd) A0 (E04idl)

E05 SCHED_NOTIFY SCHED_UPDATE IDLE_ NOTIFY
A1 + A2 + A3 (E05not) A1 + A2 (E05upd) A1 + A2 (E05idl)

E06 SCHED_NOTIFY SCHED_UPDATE IDLE_ NOTIFY
A2 + A3 (E06not) A2 (E06upd) A2 (E06idl)

E07 SCHED_NOTIFY SCHED_UPDATE IDLE_ NOTIFY
A2 (E07not) A2 (E07upd) A2 (E07idl)

E08 **>> SCHED_UPDATE** SCHED_UPDATE IDLE_ NOTIFY
A4 (E08not) A0 (E08upd) A0 (E08idl)

E09 SCHED_NOTIFY SCHED_UPDATE IDLE_ NOTIFY
A3 (E09not) A0 (E09upd) A0 (E09idl)

E10 SCHED_NOTIFY **>> SCHED_NOTIFY** IDLE_ NOTIFY
A5 + A3 (E10not) A5 + A3 (E10upd) A0 (E10idl) (not possible)

E11 SCHED_NOTIFY SCHED_UPDATE **>> SCHED_NOTIFY**
A0 (E11not) A0 (E11upd) A3 (E11idl)

E13 SCHED_ NOTIFY **>> SCHED_NOTIFY** **>> SCHED_NOTIFY**
A6 (E13not) A6 (E13upd) A6 (E13idl)

E14 SCHED_ NOTIFY SCHED_UPDATE IDLE_ NOTIFY
A0 (E14not) A0 (E14upd) A0 (E14idl)

© C i h 2012 2021 A i i S S ifi i 01 01 02 6 f 1

|Event|State|Col3|Col4|
|---|---|---|---|
|**Event**|**SCHED_NOTIFY**|**SCHED_UPDATE**|**IDLE_NOTIFY**|
|E01|SCHED_NOTIFY<br>A1 + A3 + A7(E01not)|**>> IDLE_NOTIFY** <br>A1 + A7(E01upd)|IDLE_NOTIFY<br>A1 + A7(E01idl)|
|E02|SCHED_NOTIFY<br>A3(E02not)|**>> IDLE_NOTIFY** <br>A0(E02upd)|IDLE_ NOTIFY<br>A0(E02idl)|
|E03|SCHED_NOTIFY<br>A0(E03not)|SCHED_UPDATE<br>A0(E03upd)|IDLE_ NOTIFY<br>A0(E03idl)|
|E04|**>> SCHED_UPDATE** <br>A4(E04not)|SCHED_UPDATE<br>A0(E04upd)|IDLE_ NOTIFY<br>A0(E04idl)|
|E05|SCHED_NOTIFY<br>A1 + A2 + A3(E05not)|SCHED_UPDATE<br>A1 + A2(E05upd)|IDLE_ NOTIFY<br>A1 + A2(E05idl)|
|E06|SCHED_NOTIFY<br>A2 + A3(E06not)|SCHED_UPDATE<br>A2(E06upd)|IDLE_ NOTIFY<br>A2(E06idl)|
|E07|SCHED_NOTIFY<br>A2(E07not)|SCHED_UPDATE<br>A2(E07upd)|IDLE_ NOTIFY<br>A2(E07idl)|
|E08|**>> SCHED_UPDATE** <br>A4(E08not)|SCHED_UPDATE<br>A0(E08upd)|IDLE_ NOTIFY<br>A0(E08idl)|
|E09|SCHED_NOTIFY<br>A3(E09not)|SCHED_UPDATE<br>A0(E09upd)|IDLE_ NOTIFY<br>A0(E09idl)|
|E10|SCHED_NOTIFY<br>A5 + A3(E10not)|**>> SCHED_NOTIFY** <br>A5 + A3(E10upd)|IDLE_ NOTIFY<br>A0(E10idl) (notpossible)|
|E11|SCHED_NOTIFY<br>A0(E11not)|SCHED_UPDATE<br>A0(E11upd)|**>> SCHED_NOTIFY** <br>A3(E11idl)|
|E13|SCHED_ NOTIFY<br>A6(E13not)|**>> SCHED_NOTIFY** <br>A6(E13upd)|**>> SCHED_NOTIFY** <br>A6(E13idl)|
|E14|SCHED_ NOTIFY<br>A0(E14not)|SCHED_UPDATE<br>A0(E14upd)|IDLE_ NOTIFY<br>A0(E14idl)|


-----

#### B.2 Interpretation of the concepts

##### B.2.1 Update of multicast group timer
Transitions for events E01 and E05 update the mc_timer to the received_timer_value, regardless of the
state.

##### B.2.2 Notify suppression after update
The state machine of time followers always stays maxDelayUpdateNotify in the combination of the states
SCHED_UPDATE and IDLE_NOTIFY. During these 5s outdated TIMER_NOTIFY or
SECURE_WRAPPER frames do not trigger another update notification by these devices. This is to
prevent (D)DoS attacks by flooding the network with old replayed SECURE_WRAPPER or
TIMER_NOTIFY frames.

##### B.2.3 Notify suppression by 'good enough' notifies
The goal is to have only very few (ideally just one) update notifies per outdated TIMER_NOTIFY or
SECURE_WRAPPER frame to reduce the network load. Problem: In a well synchronized system with a
network latency >= 1ms most devices will always receive only outdated frames due to the network
latency. This means that a mechanism to 'send timer update notifications only if I have a more recent
mc_timer' never suppresses any update. Solution: To still suppress most redundant timer update
notifications, all received TIMER_NOTIFY frames are defined to be 'good enough' when they are within
a low fraction (default is 10 %) of the overall latencyTolerance. This latencyTolerance and the
SyncLatencyFraction must be chosen so that ideally > 90 % of all frames have latencies below this
syncLatencyTolerance.

##### B.2.4 Periodically sending timer notifications
The goal is to synchronize devices and subsystems fast which get connected later than power-up (could
also be IP devices connected through a central switch which is powered up after the devices were already
powered up). Here, the problem is that a subsystem may stay unsynchronized for a long time when it gets
connected after power-up and there no traffic on the network. Therefore, timer notifications are sent
regularly around every 10s if no valid TIMER_NOTIFY or SECURE_WRAPPER frames were received,
causing subsystems which get connected later than power-up to synchronize within this period.

##### B.2.5 Timer update notification triggered by outdated frames
The goal is to synchronize subsystems which get connected late, after the individual subsystems already
completed their synchronization procedures, potentially a long time ago (could be subsystems consisting
each of multiple IP devices connected through a central switch which is powered up after the devices
were already powered up.). Potentially many subsystems get connected at different points in time in this
way. Problem: Active subsystems needing to communicate quickly may stay unsynchronized (sending
outdated frames) until the next periodic re-synchronization. Solution: Schedule a timer update notification
when receiving a TIMER_NOTIFY or SECURE_WRAPPER frame with a less than 'good enough' timer
value. In this case this received frame and a few following ones may be dropped due to the subsystems
not being correctly synchronized initially, but the subsystems will synchronize automatically in the next
100ms to 5s (maxDelayUpdateNotify).

#### B.3 Description of transitions
(E01not) + (E02not) + (E05not) + (E06not)

We received a Timer Notify or Secure Wrapper which is at least 'good enough'. We re-schedule our own
next timer notify since we can be sure that all devices are now sufficiently synchronized.

(E01upd) + (E02upd) + (E05upd) + (E06upd)

We received a Timer Notify or Secure Wrapper which is at least 'good enough'. We enter IDLE_NOTIFY
state to make sure we will not respond in the 5 s time window after we scheduled our own timer update

© C i h 2012 2021 A i i S S ifi i 01 01 02 68 f 1


-----

notification. We also cancel this scheduled timer update notification since the frame we received is good
enough.

(E01idl) + (E02idl) + (E03idl) + (E04idl) + (E05idl) + (E06idl) + (E07idl) + (E08idl)

We received another Timer Notify or Secure Wrapper after we either just sent a timer update notification
or received an at least 'good enough' Timer Notify or Secure Wrapper frame. In IDLE_NOTIFY state this
reception does not re-trigger the scheduling of another possible timer update notification.

(E03not) + (E07not)

We received a Timer Notify or Secure Wrapper which is not 'good enough' (within the
syncLatencyTolerance) but still within the overall latencyTolerance. In SCHED_NOTIFY state we do not
schedule a timer update notification with a better timer value to avoid network congestion in case the
network latency gets close to the latency tolerance. We keep our originally scheduled periodical timer
notify to synchronize the sender of the frame soon (soon enough before the sender risks to fall behind
latencyTolerance).

(E04not) + (E08not)

We received a Timer Notify or Secure Wrapper which is out of latencyTolerance. We schedule a timer
update notification since we have a better timer value. The goal is to synchronize subsystems which run
behind which just got connected to the rest of the system. The number of timer notifications to outdated,
replayed frames is throttled by the IDLE_RESPONSE state.

(E03upd) + (E04upd) + (E07upd) + (E08upd)

We received a Timer Notify or Secure Wrapper which is either not 'good enough' (within the
syncLatencyTolerance) but still within the overall latencyTolerance or even already behind the overall
latencyTalerance. In SCHED_UPDATE state we simply ignore this frame and must not re-schedule the
update in order to answer the first frame timely.

(E09not)

When sending out a multicast Secure Wrapper frame the included timer value triggers the timer
synchronization in the receiving devices the same way a timer notification does. Therefore in
SCHED_NOTIFY state we re-schedule our periodical timer notification.

(E09upd)

In SCHED_UPDATE transmitting a Secure Wrapper frame does implicitly notify our own timer value to
the multicast group. As it is no longer necessary to send an update timer notification, we immediately fall
into IDLE_NOTIFY state for the rest of maxDelayUpdateNotify. This is consistent with E05upd, E06upd
and E10upd.

(E09idl)

In IDLE_NOTIFY state transmitting a Secure Wrapper frame does not affect the timer synchronization
state machine. We stay in IDLE_NOTIFY state with not scheduling new timer (update) notifications.

(E10not)

The notify_timer expired. In SCHED_NOTIFY state we send the scheduled timer notification and
immediately schedule another periodical timer notification in 10 s to 15 s.

(E10upd)

The notify_timer expired. In SCHED_UPDATE state we send the scheduled timer notification and fall
into the IDLE_NOTIFY state to prevent new timer notifications for at least the
maxDelayUpdateNotification time period.

(E10idl) + (E11not) + (E11upd)

These transitions cannot happen since the timer event cannot occur in the respective state, assuming
timers are inactive once they expired.

© C i h 2012 2021 A i i S S ifi i 01 01 02 69 f 1


-----

(E11idl)

The idle_timer expired. We now schedule a next periodic timer notification to keep devices synchronized
even in inactive systems.

(E12req) + (E12res) + (E12idl)

mc_timer wrap around: The state machine is designed around the assumption that the mc_timer never
wraps around. This is a sensible assumption if there are no misbehaving devices, no erroneous flashes and
no software errors. But see case 3. of "Protection against replay attacks".

(E13req) + (E13res) + (E13idl)

A new Secure Backbone Key was set and thus the mc_timer was reset to 0. We cancel any scheduled
timer notification. We schedule a new timer notify with the power-up delay.

(E14req) + (E14res) + (E14idl)

We completely ignore setting a new identical Secure Backbone Key and leave the state machine
unaffected. We cannot reset the mc_timer to 0 because it may then be increased by an incoming frame of
any kind, which was sent by a device either a short while ago or by a device whose Secure Backbone Key
was not yet updated. Also fresh and valid frames we send would be ignored by other devices which were
not yet updated.

#### B.4 Analysis of possible replay attacks

##### B.4.1 Replaying old SECURE_WRAPPER frames
Limited attacks possible:

Replayed SECURE_WRAPPER frames which are older than the latencyTolerance are discarded.
Replayed SECURE_WRAPPER frames which are within the latencyTolerance are accepted as fresh.

Limited attacks possible: This allows replay attacks within the latencyTolerance. This may be a problem
for cases where commands are sent as a fast sequence to a stateful device: An attacker could replace the
sequence 'door-open, door-close' with 'door-open, door-close, door-open' by replaying the 'door-open'
command. He does not even have to follow a specific timing. It is sufficient to constantly replay the dooropen command to prevent the door from locking. The Application Layer must prevent this kind of attack,
for example by using an additional sequence number in the application payload.

Power-up replay attack: See "Authenticity of received timer values after power-up: Replay attack".

##### B.4.2 Replaying old TIMER_NOTIFY frames
Limited attacks possible:

Replayed TIMER_NOTIFY frames can also not lead to a network congestion due to triggering many
updating TIMER_NOTIFY frames.

The IDLE_NOTIFY state limits the maximum amount of sent TIMER_NOTIFY frames to one
TIMER_NOTIFY frame per 5s per device. Together with the randomized delay until sending an updating
TIMER_NOTIFY frame the total number of TIMER_NOTIFY frames seen on a network with many
devices is low (typically about 3 TIMER_NOTIFY frames per second for 200 devices and 15 ms network
latency).

##### B.4.3 Replaying any frame after forced mc_timer wrap around
Arbitrary replay attacks possible, depending on device behavior:

An attacker can potentially force a device to reboot over and over again (by powering it down and up
again many times). The device may potentially add a worst case time on every reboot, effectively
increasing the time of the whole system by the worst case time on every reboot.

© C i h 2012 2021 A i i S S ifi i 01 01 02 0 f 1


-----

Assuming a device with a worst case time of 1h and an average time of 5s after reboot until it sends its
timer notify frameit takes about 12,4 years (2[48]/(3600*1000)*5/60/60/365) to force a wraparound which is
not practical for an attack. This means that persisting the mc_timer at least once an hour is good and
delaying the initial timer notify by 0..10s is also good.

Assuming a device with a worst case time of one day and an average time of 1s after reboot until it sends
its first timer notify (for example it wants to send data immediately) it takes about 37.7 days to force a
wraparound which is a security problem since getting access to a buildings infrastructure after 38 days is
a practical attack.

#### B.5 Example parameter sets and resulting time windows

**Parameter** **LAN** **WLAN** **Internet** **Mobile** **Satellite**

PID_MULTICAST_LATENCY_- _400 ms_ _1000 ms_ _2000 ms_ _4000 ms_ _8000 ms_
TOLERANCE

PID_SYNC_LATENCY_FRACTION _50 %_ _20 %_ _10 %_ _10 %_ _10 %_

syncLatencyTolerance _200 ms_ _200 ms_ _200 ms_ _400 ms_ _800 ms_

minDelayTimeKeeperPeriodicNotify _10000 ms_ _10000 ms_ _10000 ms_ _10000 ms_ _10000 ms_

maxDelayTimeKeeperPeriodicNotify _10600 ms_ _10600 ms_ _10600 ms_ _11200 ms_ _12400 ms_

minDelayTimeFollowerPeriodicNotify _10800 ms_ _10800 ms_ _10800 ms_ _11600 ms_ _13200 ms_

maxDelayTimeFollowerPeriodicNotify _12800 ms_ _12800 ms_ _12800 ms_ _15600 ms_ _21200 ms_

minDelayTimeKeeperUpdateNotify _100 ms_ _100 ms_ _100 ms_ _100 ms_ _100 ms_

maxDelayTimeKeeperUpdateNotify _300 ms_ _300 ms_ _300 ms_ _500 ms_ _900 ms_

minDelayTimeFollowerUpdateNotify _500 ms_ _500 ms_ _500 ms_ _900 ms_ _1700 ms_

maxDelayTimeFollowerUpdateNotify _2500 ms_ _2500 ms_ _2500 ms_ _4900 ms_ _9700 ms_

© C i h 2012 2021 A i i S S ifi i 01 01 02 1 f 1

|Parameter|LAN|WLAN|Internet|Mobile|Satellite|
|---|---|---|---|---|---|
|PID_MULTICAST_LATENCY_-<br>TOLERANCE|_400 ms_|_1000 ms_|_2000 ms_|_4000 ms_|_8000 ms_|
|PID_SYNC_LATENCY_FRACTION|_50 %_|_20 %_|_10 %_|_10 %_|_10 %_|
|<br>syncLatencyTolerance|_200 ms_|_200 ms_|_200 ms_|_400 ms_|_800 ms_|
|minDelayTimeKeeperPeriodicNotify|_10000 ms_|_10000 ms_|_10000 ms_|_10000 ms_|_10000 ms_|
|maxDelayTimeKeeperPeriodicNotify|_10600 ms_|_10600 ms_|_10600 ms_|_11200 ms_|_12400 ms_|
|minDelayTimeFollowerPeriodicNotify|_10800 ms_|_10800 ms_|_10800 ms_|_11600 ms_|_13200 ms_|
|maxDelayTimeFollowerPeriodicNotify|_12800 ms_|_12800 ms_|_12800 ms_|_15600 ms_|_21200 ms_|
|minDelayTimeKeeperUpdateNotify|_100 ms_|_100 ms_|_100 ms_|_100 ms_|_100 ms_|
|maxDelayTimeKeeperUpdateNotify|_300 ms_|_300 ms_|_300 ms_|_500 ms_|_900 ms_|
|minDelayTimeFollowerUpdateNotify|_500 ms_|_500 ms_|_500 ms_|_900 ms_|_1700 ms_|
|maxDelayTimeFollowerUpdateNotify|_2500 ms_|_2500 ms_|_2500 ms_|_4900 ms_|_9700 ms_|


-----

