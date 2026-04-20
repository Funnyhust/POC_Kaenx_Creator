## KNX System Conformance Testing 8

#### Test Suite Supplement K

 KNX IP Secure Tests

Summary

This document contains the KNX IP Secure Tests in accordance with
AN159, tests in accordance with AN 183 IP System Broadcast, AN185
IP Tunneling v2 and AN184 IP Core v2.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 1 f 376


-----

**Document Updates**

**Version** **Date** **Modifications**
1.0 2017-11 Updating document in preparation for regular October Voting
Cycle
1.1 2018-03 No comments in release for voting – publication as AS

Filename: KNXnetIPSecureTestSpec_0318_v1_1_AS.docx
Version: 1.1
Status: Approved Standard
Savedate: 2018.03.07
Number of pages: 376

©C i h 1998 2018 KNX A i i V i 1 1 AS P 2 f 376

|Version|Date|Modifications|
|---|---|---|
|1.0|2017-11|Updating document in preparation for regular October Voting<br>Cycle|
|1.1|2018-03|No comments in release for voting –publication as AS|


-----

##### Contents

  - 1 Introduction

`o` 1.1 System specification references
`o` 1.2 Terminology

          - 1.2.1 Procedure definitions

          - 1.2.2 Test results
`o` 1.3 Parameters

          - 1.3.1 Parameters of the BDUT determined automatically by the test
tool

          - 1.3.2 Parameters of the BDUT

          - 1.3.3 Parameters specified in KNX specifications

          - 1.3.4 Constants and arbitrary data
`o` 1.4 Test execution

          - 1.4.1 Profiles (test subset for a specific mask version and/or type of
device)

          - 1.4.2 Test execution order

          - 1.4.3 Required manual initialization

          - 1.4.4 General setup

          - 1.4.5 Test duration
`o` 1.5 Explicitly not tested
`o` 1.6 Assumptions

  - 2 Test Catalogue

`o` 2.1 Multicast

          - 2.1.1 Meta test: Secure multicast frames ok

          - 2.1.2 Multicast communication on System Setup Multicast Address
works

          - 2.1.3 Multicast communication on non-System Setup Multicast
Address works

          - 2.1.4 Frames sent to wrong multicast address but with a known
backbone key are ignored

          - 2.1.5 Erroneous SecureWrapper frames are ignored

          - 2.1.6 Timer Synchronization: SecureWrapper updates mc_timer

          - 2.1.7 Timer Synchronization: TimerNotify updates mc_timer

          - 2.1.8 Timer Synchronization: Timer increases when power-cycled

          - 2.1.9 Timer Synchronization: Clock accuracy and TimerNotify
challenge

          - 2.1.10 Timer Synchronization: Check initial TimerNotify timing

          - 2.1.11 Timer Synchronization: Check periodic TimerNotify timing
(time-keeper)

          - 2.1.12 Timer Synchronization: Initial TimerNotify can be
suppressed

          - 2.1.13 Timer Synchronization: Periodic TimerNotify is suppressed
by E01 events

          - 2.1.14 Timer Synchronization: Periodic TimerNotify is suppressed
by E02 events

©C i h 1998 2018 KNX A i i V i 1 1 AS P 3 f 376


-----

          - 2.1.15 Timer Synchronization: Periodic TimerNotify is not
suppressed by E03 events

          - 2.1.16 Timer Synchronization: Periodic TimerNotify is suppressed
by E05 events

          - 2.1.17 Timer Synchronization: Periodic TimerNotify is suppressed
by E06 events

          - 2.1.18 Timer Synchronization: Periodic TimerNotify is not
suppressed by E07 events

          - 2.1.19 Timer Notify Frame Format – Send

          - 2.1.20 Timer Notify Frame Format – Receive

          - 2.1.21 Outdated SecureWrappers are dropped

          - 2.1.22 Timer Synchronization: Sending SecureWrapper suppresses
periodic TimerNotify

          - 2.1.23 Timer Synchronization: Changing the backbone key resets
mc_timer

          - 2.1.24 Timer Synchronization: Setting the backbone key to the
same value does not reset mc_timer

          - 2.1.25 Timer Synchronization: Sending SecureWrapper does not
cancel SCHED_UPDATE state

          - 2.1.26 Timer Synchronization: Update is suppressed by E01 events

          - 2.1.27 Timer Synchronization: Update is suppressed by E02 events

          - 2.1.28 Timer Synchronization: Update is not affected by E03 events

          - 2.1.29 Timer Synchronization: Update is not affected by E04 events

          - 2.1.30 Timer Synchronization: Update is not affected by E05 events

          - 2.1.31 Timer Synchronization: Update is not affected by E06 events

          - 2.1.32 Timer Synchronization: Update is not affected by E07 events

          - 2.1.33 Timer Synchronization: Update is not affected by E08 events

          - 2.1.34 Timer Synchronization: Become time follower on E01 events
(and periodic TimerNotify timing for time-follower)

          - 2.1.35 Timer Synchronization: Become time follower on E02 events
(and periodic TimerNotify timing for time-follower)

          - 2.1.36 Timer Synchronization: Become time keeper on E10 events

          - 2.1.37 Timer Synchronization: Time keeper update duration

          - 2.1.38 Timer Synchronization: Time follower update duration

          - 2.1.39 Timer Synchronization: TimerNotify response

          - 2.1.40 Nested SecureWrapper is ignored (multicast)

          - 2.1.41 Timer Synchronization is disabled when routing is set to
non-secure

          - 2.1.42 Timer Synchronization is enabled when routing is set to
secure

          - 2.1.43 Overview of covered aspects
`o` 2.2 Unicast

          - 2.2.1 Meta test: Secure unicast frames ok

          - 2.2.2 Secure session setup

          - 2.2.3 Secure sessions are contained in a single TCP connection

          - 2.2.4 Secure session setup, user level

©C i h 1998 2018 KNX A i i V i 1 1 AS P 4 f 376


-----

          - 2.2.5 SecureWrapper traffic keeps session alive

          - 2.2.6 Erroneous SecureWrapper

          - 2.2.7 SessionClose by client

          - 2.2.8 Unsecured SessionClose by client is ignored

          - 2.2.9 Closing TCP connection closes all contained secure sessions

          - 2.2.10 Stress test: Maximum parallel sessions

          - 2.2.11 Ignore invalid SessionRequests

          - 2.2.12 Ignore secured SessionRequest

          - 2.2.13 Missing authentication

          - 2.2.14 Ignore invalid SessionAuthenticate (format errors)

          - 2.2.15 Reject invalid SessionAuthenticate

          - 2.2.16 Authentication timeout

          - 2.2.17 Unsecured SessionAuthenticate is ignored

          - 2.2.18 Keepalive keeps session alive

          - 2.2.19 Session timeout

          - 2.2.20 Keepalive before authentication

          - 2.2.21 Close before authentication

          - 2.2.22 Erroneous valid second SessionAuthenticate

          - 2.2.23 Erroneous invalid second SessionAuthenticate

          - 2.2.24 Sequence Number tests

          - 2.2.25 SessionRequest via UDP is ignored

          - 2.2.26 Sequential secure sessions in the same TCP connection

          - 2.2.27 Nested SecureWrapper is ignored (unicast)

          - 2.2.28 SessionRequest via TCP with non-route-back HPAI is
ignored

          - 2.2.29 Reject valid SessionAuthenticate after invalid SessionAuthenticate

          - 2.2.30 Drop non-secure device management frames for secure
device management connections

          - 2.2.31 Drop non-secure tunnelling frames for secure tunnelling
connections

          - 2.2.32 Drop routing frames arriving via unicast

          - 2.2.33 KNX connections are strictly associated with a single secure
session

          - 2.2.34 KNX connection is implicitly closed when enclosing secure
session is closed

          - 2.2.35 Different public key after power-cycle

          - 2.2.36 DisconnectRequest and ConnectionStateRequest return E_CONNECTION_ID outside of associated secure session

          - 2.2.37 Invalid SecureWrapper does not extend session timeout

          - 2.2.38 Session timeouts of concurrent secure sessions are
independent

          - 2.2.39 M_Prop services honour Security Mode

          - 2.2.40 Covered aspects

              - 2.2.40.1 Overview of covered transitions in the transition
table

©C i h 1998 2018 KNX A i i V i 1 1 AS P 5 f 376


-----

              - 2.2.40.2 Tested combinations and scenarios between TCP
connections, secure sessions and KNXnet/IP connections

              - 2.2.40.3 Tested Core connection requests vs secured/nonsecure service family
`o` 2.3 Resources

          - 2.3.1 Checking of Resources – PID_BACKBONE_KEY

          - 2.3.2 Checking of Resources – PID_DEVICE_AUTHENTICATION_CODE

          - 2.3.3 Checking of Resources – PID_PASSWORD_HASHES

          - 2.3.4 Checking of Resources – PID_SECURED_SERVICE_FAMILIES

          - 2.3.5 Checking of Resources – PID_MULTICAST_LATENCY_TOLERANCE

          - 2.3.6 Checking of Resources – PID_SYNC_LATENCY_FRACTION

          - 2.3.7 Checking of Resources – PID_TUNNELLING_USERS

          - 2.3.8 Combinations of KNX connections, secure sessions and
secured service families (PID_SECURED_SERVICE_FAMILIES)

          - 2.3.9 Writes to PID_SECURED_SERVICE_FAMILIES for
unsupported service families report E_DATA_VOID

          - 2.3.10 Remote configuration services are ignored when security
mode is enabled

          - 2.3.11 Non-secure KNX connections are not closed by enabling
security in PID_SECURED_SERVICE_FAMILIES
`o` 2.4 IP System Broadcast

          - 2.4.1 Meta test: Check all IP System Broadcast related frames sent
by the BDUT for consistency

          - 2.4.2 Receive IP System Broadcast on system setup multicast
address only

          - 2.4.3 Valid system broadcast frames are routed from TP1 to IP as
RoutingSystemBroadcast if system broadcast mode is enabled

          - 2.4.4 Valid system broadcast frames are routed from TP1 to IP as
RoutingIndication if system broadcast mode is disabled

          - 2.4.5 Unsuitable frames are not routed from TP1 to IP as RoutingSystemBroadcast

          - 2.4.6 Valid system broadcast frames are routed from IP to TP1 if
system broadcast mode is enabled

          - 2.4.7 Valid system broadcast frames are not routed from IP to TP1
if system broadcast mode is disabled

          - 2.4.8 Unsuitable frames are not routed from IP to TP1

          - 2.4.9 Handling in Management: Unsuitable system broadcast
frames are ignored (secure)

          - 2.4.10 Handling in Management: Unsuitable system broadcast
frames are ignored (non-secure)

          - 2.4.11 System broadcast mode automatically switches back to
Disabled

          - 2.4.12 System broadcast mode can be manually disabled

©C i h 1998 2018 KNX A i i V i 1 1 AS P 6 f 376


-----

          - 2.4.13 Handling in Management: Read serial number

          - 2.4.14 Handling in Management: SyncRequest is responded to

          - 2.4.15 Handling in Management: Non-secure domain address write
(4 octet version)

          - 2.4.16 Handling in Management: Non-secure domain address write
(4 octet version) is ignored when security mode is enabled

          - 2.4.17 Handling in Management: Secure domain address write (4
octet version)

          - 2.4.18 Handling in Management: Secure domain address write (21
octet version)

          - 2.4.19 Handling in Management: Secure domain address write with
invalid routing security version is ignored

          - 2.4.20 Group communication is not routed via system broadcast

          - 2.4.21 S-AL system broadcast frames with SBC=1 and T=0 are
routed from TP1 to IP as domain broadcast

          - 2.4.22 S-AL system broadcast frames with SBC=1 and T=0 are not
routed from IP to TP1

          - 2.4.23 Handling in Management: Domain Broadcast: Read serial
number

          - 2.4.24 Handling in Management: Domain Broadcast: SyncRequest
is responded to

          - 2.4.25 Handling in Management: Domain Broadcast: Non-secure
domain address write (4 octet version)

          - 2.4.26 Handling in Management: Domain Broadcast: Non-secure
domain address write (4 octet version) is ignored when security
mode is enabled

          - 2.4.27 Handling in Management: Domain Broadcast: Secure
domain address write (4 octet version)

          - 2.4.28 Handling in Management: Domain Broadcast: Secure
domain address write (21 octet version)

          - 2.4.29 Handling in Management: Domain Broadcast: Secure
domain address write with invalid routing security version is ignored

          - 2.4.30 Routing service family version is at least 2

          - 2.4.31 Enabling system broadcast mode while domain broadcasts
are blocked

          - 2.4.32 Handling in Management: Domain Broadcast: Ignore cEMI
telegrams with SB=0 (system broadcast)
`o` 2.5 Core v2 TCP

          - 2.5.1 TCP communication works

          - 2.5.2 Fragmented TCP frames are received OK

          - 2.5.3 Merged TCP frames are received OK

          - 2.5.4 TCP connection gets closed on wrong header length

          - 2.5.5 TCP connection gets closed on wrong protocol version

          - 2.5.6 TCP connection gets closed on total length field < 6

          - 2.5.7 TCP connection gets closed upon receiving insufficient data
(receive timeout)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 7 f 376


-----

          - 2.5.8 TCP connection does not get closed on long frame

          - 2.5.9 TCP connection does not get closed on unknown service type

          - 2.5.10 Half-closing TCP connection results in closing the TCP
connection

          - 2.5.11 KNXnet/IP frames with total length 508 are handled correctly

          - 2.5.12 TCP connection is not closed after DescriptionResponse

          - 2.5.13 TCP connection gets closed immediately after inner KNX
connection timeout

          - 2.5.14 TCP connection gets closed immediately after inner secure
session timeout

          - 2.5.15 TCP connection does not get closed while at least one KNX
connection or secure session is active

          - 2.5.16 TCP/session/connection timeout behavior on concurrent
connections/sessions

          - 2.5.17 TCP idle timeout

          - 2.5.18 TCP octets prevent idle timeout

          - 2.5.19 KNX connections in TCP ignore sequence counter

          - 2.5.20 KNX connections in TCP do not send ACKs and ignore
ACKs

          - 2.5.21 TCP and KNX connections: HPAI restrictions

          - 2.5.22 UDP and KNX connections: HPAI restrictions

          - 2.5.23 Concurrent KNX connections in a TCP connection

          - 2.5.24 Concurrent KNX connections in a secure session

          - 2.5.25 Sequential KNX connections in a TCP connection

          - 2.5.26 Sequential KNX connections in a secure session

          - 2.5.27 KNX connections do not span concurrent TCP connections

          - 2.5.28 KNX connections get closed on TCP connection close (and
do not span sequential TCP connections)

          - 2.5.29 Valid DeviceConfigurationRequest frames with invalid cEMI
content extend KNX connection timeout

          - 2.5.30 Open TCP connections get closed by restart

          - 2.5.31 KNX connections via UDP get closed by restart
`o` 2.6 Core v2 Discovery

          - 2.6.1 Meta test: SearchResponseExtended frames OK

          - 2.6.2 SearchRequestExtended via UDP

          - 2.6.3 SearchRequestExtended via TCP

          - 2.6.4 SearchRequestExtended via TCP and secure session

          - 2.6.5 Mandatory Bit

          - 2.6.6 SRP Type Programming Mode

          - 2.6.7 SRP Type Mac Address

          - 2.6.8 SRP Type Select By Service

          - 2.6.9 SRP Type Request DIBs

          - 2.6.10 Erroneous SearchRequestExtended frames are ignored

          - 2.6.11 SearchRequest via TCP is ignored

          - 2.6.12 SearchRequest via UDP with TCP/UDP HPAI is
ignored/accepted

©C i h 1998 2018 KNX A i i V i 1 1 AS P 8 f 376


-----

          - 2.6.13 SearchResponse reports only UDP endpoint even if TCP is
supported

          - 2.6.14 DescriptionRequest via UDP with TCP/UDP HPAI is
ignored/accepted

          - 2.6.15 Secure service family is reported by SearchRequestExtended

          - 2.6.16 Secured service families DIB is reported by SearchRequestExtended if at least one service is secured

          - 2.6.17 Secured service families DIB is not reported by SearchRequestExtended if no service is secured

          - 2.6.18 Extended Device Information DIB

          - 2.6.19 Supported service family versions are consistent between
SearchResponse, DescriptionResponse and SearchResponseExtended

          - 2.6.20 SearchResponse and DescriptionResponse only report presecurity service families in Supported Service Families DIB and
only report pre-security DIBs
`o` 2.7 Tunnelling v2

          - 2.7.1 TunnellingFeatureGet

          - 2.7.2 Failing TunnellingFeatureSet

          - 2.7.3 TunnellingFeatureSet of Interface Individual Address (security
mode disabled)

          - 2.7.4 TunnellingFeatureSet of Interface Individual Address (security
mode enabled)

          - 2.7.5 Tunnelling feature: Bus connection status

          - 2.7.6 No Tunnelling Acks with TCP

          - 2.7.7 (removed)

          - 2.7.8 TunnellingFeatureGet - Connection Header handling

          - 2.7.9 TunnellingFeatureSet - Connection Header handling

          - 2.7.10 Tunnelling ConnectRequest - E_CONNECTION_OPTION

          - 2.7.11 Tunnelling ConnectRequest - E_NO_MORE_CONNECTIONS

          - 2.7.12 Tunnelling ConnectRequest - E_NO_MORE_UNIQUE_CONNECTIONS

          - 2.7.13 Tunnelling ConnectRequest - E_NO_TUNNELLING_ADDRESSES

          - 2.7.14 Tunnelling ConnectRequest - E_AUTHORISATION_ERROR

          - 2.7.15 Tunnelling ConnectRequest - E_CONNECTION_IN_USE

          - 2.7.16 Default for Interface Feature Info Service Enable is Disabled

          - 2.7.17 Erroneously formatted tunnelling ConnectRequests are
ignored

          - 2.7.18 Tunnelling ConnectRequest with unsupported layer results
in E_TUNNELLING_LAYER

          - 2.7.19 Non-secure ConnectRequest while tunnelling is secured
results in E_CONNECTION_TYPE

          - 2.7.20 Tunnelling Information DIB

©C i h 1998 2018 KNX A i i V i 1 1 AS P 9 f 376


-----

          - 2.7.21 Tunnelling version is >= 2 in Supported Service Families DIB

          - 2.7.22 Establishing a tunnelling connection while TP1 is
disconnected

          - 2.7.23 Tunnelling ConnectRequest with extended CRI

          - 2.7.24 PID_TUNNELLING_USERS is ignored when tunnelling is
set to non-secure

          - 2.7.25 PID_TUNNELLING_USERS: 2 users associated with
different slots

          - 2.7.26 PID_TUNNELLING_USERS: 2 users associated with the
same slot

          - 2.7.27 PID_TUNNELLING_USERS: 1 user associated with 2 slots

          - 2.7.28 PID_TUNNELLING_USERS: Users associated with 2 slots
each

  - 3 Global procedures

`o` 3.1 Multicast

          - 3.1.1 GlPro_SetupMulticast()

          - 3.1.2 GlPro_CleanupMulticast()

          - 3.1.3 GlPro_SendTimerNotify()

          - 3.1.4 GlPro_ReceiveTimerNotify()

          - 3.1.5 GlPro_VerifyMulticastIsFunctional()

          - 3.1.6 GlPro_QueryMcTimer()

          - 3.1.7 GlPro_SendMcSecureWrapper()

          - 3.1.8 GlPro_TestPeriodicTimerNotify()

          - 3.1.9 GlPro_VerifySecureWrapperIsIgnored()

          - 3.1.10 GlPro_MulticastSetState()

          - 3.1.11 GlPro_TestUpdateTimerNotify()

          - 3.1.12 GlPro_TestBecomingTimeFollower()
`o` 3.2 Unicast

          - 3.2.1 GlPro_SetupUnicast()

          - 3.2.2 GlPro_CleanupUnicast()

          - 3.2.3 GlPro_SecureSessionSetup()

          - 3.2.4 GlPro_VerifySecureSessionIsFunctional()

          - 3.2.5 GlPro_WaitForSessionStatus()

          - 3.2.6 GlPro_VerifySessionIsClosed()

          - 3.2.7 GlPro_CloseSecureSession()

          - 3.2.8 GlPro_TestSecureSessionSetup()

          - 3.2.9 GlPro_SecureSessionRequestResponse()

          - 3.2.10 GlPro_VerifyBdutIsResponsiveViaTcp()

          - 3.2.11 GlPro_SecureSessionSetupTrySecondSession()

          - 3.2.12 GlPro_SecureSessionSetupTry()
`o` 3.3 IP System Broadcast

          - 3.3.1 GlPro_SetupSystemBroadcast()

          - 3.3.2 GlPro_CleanupSystemBroadcast()

          - 3.3.3 GlPro_SendRoutingSystemBroadcast()

          - 3.3.4 GlPro_SendTpSystemBroadcast()

          - 3.3.5 GlPro_WaitUntilResponsiveAfterDomainAddressWrite()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 10 f 376


-----

          - 3.3.6 GlPro_DataSecuritySync()

          - 3.3.7 GlPro_VerifyHopCount()
`o` 3.4 Core v2 TCP + Discovery

          - 3.4.1 GlPro_ReceiveSearchResponseExtended()

          - 3.4.2 GlPro_SendSearchRequestExtended()

          - 3.4.3 GlPro_TestSearchRequestParameter()

          - 3.4.4 GlPro_GetDefaultSRPList()

          - 3.4.5 GlPro_TestKnxConnection()

          - 3.4.6 GlPro_TestConcurrentKnxConnections()

          - 3.4.7 GlPro_TestSequentialKnxConnections()
`o` 3.5 Tunnelling v2

          - 3.5.1 GlPro_SetupTunnelling()

          - 3.5.2 GlPro_CleanupTunnelling()

          - 3.5.3 GlPro_SendTunnellingFeatureGet()

          - 3.5.4 GlPro_SendTunnellingFeatureSet()

          - 3.5.5 GlPro_ReceiveTunnellingFeatureResponse()

          - 3.5.6 GlPro_ReceiveNoTunnellingConnectionFrame()

          - 3.5.7 GlPro_EstablishTunnellingConnection()

          - 3.5.8 GlPro_CloseTunnellingConnection()

          - 3.5.9 GlPro_GetOneFreeAdditionalIndividualAddress()

          - 3.5.10 GlPro_SetTunnellingFeature()

          - 3.5.11 GlPro_GetTunnellingFeature()
`o` 3.6 Common

          - 3.6.1 GlPro_WaitUntilRestartComplete()

          - 3.6.2 GlPro_VerifyBdutIsResponsive()

          - 3.6.3 GlPro_PowerCycleBdut()

          - 3.6.4 GlPro_SwitchOnOffTp()

          - 3.6.5 GlPro_GetCurrentTime()

          - 3.6.6 GlPro_GetLocalMcTimer()

          - 3.6.7 GlPro_SetLocalMcTimer()

          - 3.6.8 GlPro_Abs()

          - 3.6.9 GlPro_SetupFamilySecurity()

          - 3.6.10 GlPro_ReadSupportedServiceFamiliesDib()

          - 3.6.11 GlPro_OpenTwoTcpConnections()

  - 4 Property access procedures

`o` 4.1 PropAccess_DevMgmt() (Reading and writing properties)
`o` 4.2 List of properties which are read and/or written during the tests
`o` 4.3 Configuration procedures

          - 4.3.1 PropSetup_Multicast()

          - 4.3.2 PropSetup_Unicast()

          - 4.3.3 PropSetup_SystemBroadcast()

          - 4.3.4 PropSetup_NonSecure()

          - 4.3.5 PropSetup_SetProgrammingMode()

          - 4.3.6 PropSetup_SetRoutingMulticastAddress()

          - 4.3.7 PropSetup_SetBackboneKey()

          - 4.3.8 PropSetup_TunnellingUsers()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 11 f 376


-----

          - 4.3.9 PropSetup_GetAdditionalIndividualAddresses()

          - 4.3.10 PropSetup_SetIndividualAddresses()

          - 4.3.11 PropSetup_SecurityMode()

          - 4.3.12 PropSetup_SetSecuredServices()

  - 5 Profile guidelines

©C i h 1998 2018 KNX A i i V i 1 1 AS P 12 f 376


-----

# 1 Introduction

### 1.1 System specification references

This test specification is based on the following documents and versions:

**Document** **Date** **Description /** **Used by tests**
**Remarks**

KSG616-21.00 KNXnet-IP 2017.09.19 KNXnet/IP Security 2.1.*, 2.2.*,
Security.docx 2.3.*

KSG668-15.01 KNXnet-IP System 2017.07.04 IP System 2.4.*
Broadcast.docx Broadcast

KSG643-22.01 KNXnet-IP Tunnelling 2017.09.18 KNXnet/IP 2.7.*, 2.3.7
v2.pdf Tunnelling v2

KSG696-10.01 KNXnet-IP Core 2017.09.25 KNXnet/IP Core v2 2.5.*, 2.6.*
v2.docx

KSG638-26.03 KNX Data Security.pdf 2017.09.21 KNX Data Security 2.4.[1,39,14,16-19]

### 1.2 Terminology

Terms and abbreviations used in this specification.

**Term** **Description**

BDUT Bus Device Under Test

Client, test client, test tool The test tool executing the tests of this specification.

Server BDUT

Sender Whoever sends a frame or message (Client or Server).

Receiver Whoever receives a frame or message (Client or Server).

##### 1.2.1 Procedure definitions

The test procedures of the following test specifications call procedures for re-occurring
tasks. These tasks can be setup/cleanup tasks and/or can perform the actual tests.
Procedures which are only used by one test are defined together with that test.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 13 f 376

|Document|Date|Description /<br>Remarks|Used by tests|
|---|---|---|---|
|KSG616-21.00 KNXnet-IP<br>Security.docx|2017.09.19|KNXnet/IP Security|2.1.*, 2.2.*,<br>2.3.*|
|KSG668-15.01 KNXnet-IP System<br>Broadcast.docx|2017.07.04|IP System<br>Broadcast|2.4.*|
|KSG643-22.01 KNXnet-IP Tunnelling<br>v2.pdf|2017.09.18|KNXnet/IP<br>Tunnelling v2|2.7.*, 2.3.7|
|KSG696-10.01 KNXnet-IP Core<br>v2.docx|2017.09.25|KNXnet/IP Core v2|2.5.*, 2.6.*|
|KSG638-26.03 KNX Data Security.pdf|2017.09.21|KNX Data Security|2.4.[1,3-<br>9,14,16-19]|

|Term|Description|
|---|---|
|BDUT|Bus Device Under Test|
|Client, test client, test tool|The test tool executing the tests of this specification.|
|Server|BDUT|
|Sender|Whoever sends a frame or message (Client or Server).|
|Receiver|Whoever receives a frame or message (Client or Server).|


-----

Procedures which are used by multiple tests are defined in a separate section after all
tests. Procedures can receive arguments and may return a value. The procedure
definition lists the names of the formal arguments and indicates the return value
signature. Procedure arguments may have default values and in this case these may be
omitted when calling the procedure. Procedure arguments use duck-typing. Their type is
determined by their usage in the procedure. The syntax and semantics of argument
passing matches the syntax and semantics for argument passing in Python.
Procedures may use informal arguments (and/or global state of the test) like the current
secure session, and they may also affect the global state of the test, e.g. close or open
secure sessions. These aspects are not formally defined in procedure definitions but
should always be clear from the context.

##### 1.2.2 Test results

For most tests it is clear from the test description and expectation what makes a test
pass and fail. Some tests explicitly refer to these passed/failed results to formally define
the test result in situations where this is not intuitive (e.g. where running into a timeout
means that a test passed).
Tests may return the following results:

  - **TestPassed: The test did not detect an error. The BDUT passed the test. This is**
rarely mentioned explicitly in the following tests. If none of the described
expectations or subtests fail, the test is assumed to return TestPassed.

  - **TestFailed: The test detected an error in the BDUT. The BDUT failed the test.**
This is only explicitly mentioned in the following tests when necessary (e.g. when
not intuitive). Any unmet expectation is a TestFailed.

**Test abortion on subtest failure: Some tests check multiple conditions as part of the**
same test procedure. For example they may either execute the same test with different
parameters, or a test may contain multiple checks and assertions. As soon as the first of
these subtests failes (i.e. TestFailed) the test execution is aborted and the cleanup
phase is executed, and the test tool indicates which of the subtests failed in a failure
message.

### 1.3 Parameters

This section lists all parameters, constants and magic values used by all tests. Not all
parameters need to be provided by the user to test a device. Some parameters are
artifacts of the test procedures.The 'Usage' column in the following parameter tables
specify who is responsible for assigning a value to a parameter and how likely it is to
modify a parameter:

©C i h 1998 2018 KNX A i i V i 1 1 AS P 14 f 376


-----

|Usage|Description|
|---|---|
|user|The user of the test tool should modify these parameters to match the<br>characteristics of the BDUT. These parameters do not all have useful<br>defaults, e.g. Fdsk.|
|user/default|The user may modify these parameters to match the characteristics of the<br>BDUT and/or the test setup (e.g. network). All of these parameters have<br>reasonable default values.|
|constant|These parameters are constants defined either by the KNX specifications<br>or by the test tool itself (see column "Specification Reference"). These<br>parameters are usually not modified.|
|constant<br>(calculated)|These parameters have values which are derived from other parameters.<br>No individual value may be assigned to these parameters.|
|auto|These parameters are automatically determined by the test tool by<br>inspecting the BDUT. The user does not need to provide a values for<br>these parameters.|


##### 1.3.1 Parameters of the BDUT determined automatically by the test tool

These parameters are specific to the BDUT and can be determined automatically by the
test tool.

**Parameter Value** **Usage Description** **Specification**
**Reference**

Serial- (automatically auto KNX serial number of the BDUT as (specified by
Number determined by reported by search responses or BDUT)
test tool) description responses.

Individual- (automatically auto Individual address of the BDUT as (specified by
Address determined by reported by search responses or BDUT)
test tool) description responses.Note: The

user must assign an individual
address which is unique in the test
setup to the BDUT before running
the test. The test tool then
determines this individual address
automatically.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 15 f 376

|Parameter|Value|Usage|Description|Specification<br>Reference|
|---|---|---|---|---|
|Serial-<br>Number|(automatically<br>determined by<br>test tool)|auto|KNX serial number of the BDUT as<br>reported by search responses or<br>description responses.|(specified by<br>BDUT)|
|Individual-<br>Address|(automatically<br>determined by<br>test tool)|auto|Individual address of the BDUT as<br>reported by search responses or<br>description responses.Note: The<br>user must assign an individual<br>address which is unique in the test<br>setup to the BDUT before running<br>the test. The test tool then<br>determines this individual address<br>automatically.|(specified by<br>BDUT)|


-----

|Original-<br>Multicast-<br>Address|(automatically<br>determined by<br>test tool)|auto|Original multicast address<br>configured in the BDUT. This is not<br>relevant for the tests as all test set<br>their own multicast addresses, but<br>the test tool restores this multicast<br>address after running tests.|(specified by<br>BDUT)|
|---|---|---|---|---|
|Control-<br>EndpointIp|(automatically<br>determined by<br>test tool)|auto|Control endpoint IP reported in the<br>search response.|(specified by<br>BDUT)|
|Control-<br>Endpoint-<br>Port|(automatically<br>determined by<br>test tool)|auto|Control endpoint port reported in<br>the search response.|(specified by<br>BDUT)|
|Mac-<br>Address|(automatically<br>determined by<br>test tool)|auto|MAC address of the BDUT.|(specified by<br>BDUT)|


##### 1.3.2 Parameters of the BDUT

These parameters are specific to the BDUT. Most of these parameters need
customization before running the test tool for the first time.

**Parameter** **Default** **Usage** **Description** **Specification**
**Value** **Reference**

Fdsk none user FDSK of the BDUT. (specified by
Device authentication BDUT)
code used after
factory reset.

Unsupported- (0, 02h..7fh) user (only A User Id (specified by
UserId 2.2.15) for SESSION_- BDUT)
AUTHENTICATE in
the range of 02h to 7fh
which the device does
not handle, for
example 7fh. If no
such user id exists (if
all user ids are valid),
set to 0.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 16 f 376

|Parameter|Default<br>Value|Usage|Description|Specification<br>Reference|
|---|---|---|---|---|
|Fdsk|none|user|FDSK of the BDUT.<br>Device authentication<br>code used after<br>factory reset.|(specified by<br>BDUT)|
|Unsupported-<br>UserId|(0, 02h..7fh)|user (only<br>2.2.15)|A User Id<br>for SESSION_-<br>AUTHENTICATE in<br>the range of 02h to 7fh<br>which the device does<br>not handle, for<br>example 7fh. If no<br>such user id exists (if<br>all user ids are valid),<br>set to 0.|(specified by<br>BDUT)|


-----

|Num-<br>Supported-<br>Parallel-<br>Secure-<br>Sessions|(>= 1)|user|Maximum number of<br>secure sessions<br>supported by the<br>device ( >= 1).|(specified by<br>BDUT)|
|---|---|---|---|---|
|Num-<br>Supported-<br>Parallel-<br>Secure-<br>SessionsIs-<br>HardLimit|0 or 1|user (only<br>2.2.10)|If 0 the BDUT<br>supports at least Num-<br>SupportedParallel-<br>SecureSessions, but it<br>may support more. If 1<br>the BDUT will support<br>exactly Num-<br>SupportedParallel-<br>SecureSessions, no<br>less and no more.|(specified by<br>BDUT)|
|Num-<br>Supported-<br>ParallelTcp-<br>Connections|(>= 1)|user|Maximum number of<br>supported parallel<br>TCP connections.|(specified by<br>BDUT)|
|NonMgmt-<br>UserId|(0, 02h..7fh)|user|A valid non-<br>management level<br>user id (02h..7fh). If no<br>non-mgmt user is<br>supported this is set to<br>0.|(specified by<br>BDUT)|
|Tunnelling-<br>UserA|0|user|A valid tunnelling user<br>id in the range<br>02h..7fh, or 0 if the<br>BDUT does not<br>support any user for<br>secure tunnelling.<br>Typically set to 2 for a<br>device which supports<br>secure tunnelling.<br>Setting this to 0 for a<br>device which supports<br>secure tunnelling<br>means that only the<br>device management<br>user exists for secure<br>tunnelling. Tests<br>which require at least|(specified by<br>BDUT)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 17 f 376


-----

|Col1|Col2|Col3|one tunnelling user<br>check this parameter.|Col5|
|---|---|---|---|---|
|Tunnelling-<br>UserB|0|user|A second valid<br>tunnelling user id in<br>the range 02h..7fh, or<br>0 if the BDUT does<br>not support two or<br>more tunnelling users.<br>Typically set to 3 for a<br>device which supports<br>secure tunnelling and<br>which supports more<br>than one tunnelling<br>user, else set to 0.<br>Tests which require<br>two tunnelling users<br>check this parameter.|(specified by<br>BDUT)|
|BdutTp-<br>Connection-<br>SwitchGroup-<br>Address|1/1/50|user|Group Address for<br>switching TP bus<br>connection of BDUT<br>(used by various<br>IPVT1 tests).|(specified by test<br>setup)|
|BdutPower-<br>SupplySwitch-<br>GroupAddress|1/1/51|user|Group Address for<br>switching BDUT<br>power supply (used<br>by PowerCycle_-<br>Bdut()).<br>Note: If the device is<br>powered by TP, set<br>BdutTpConnection-<br>SwitchGroupAddress<br>== BdutPowerSupply-<br>SwitchGroupAddress.|(specified by test<br>setup)|
|DummyGroup-<br>Address|31/7/255|user (only<br>2.4.20)|Group Address which<br>is different from any<br>group address in any<br>device in the test<br>system. This is used<br>as a group address<br>which is always routed<br>and which has no<br>effect on any device in|(specified by test<br>setup)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 18 f 376


-----

|Col1|Col2|Col3|the test system. The<br>tets tool just checks<br>whether this is routed<br>by the BDUT or not.|Col5|
|---|---|---|---|---|
|**General**<br>**timeouts:**|||||
|Network-<br>Latency|50 ms|user/default|Worst case network<br>latency for a one-way<br>UDP packet. Network<br>latencies exceeding<br>this may cause failed<br>tests.|(specified by test<br>setup)|
|TimeoutToTp1|1 s|user/default|Maximum time<br>allowed to pass<br>between an IP<br>message send by the<br>test client to the BDUT<br>and this message<br>being detected on the<br>TP side by the test<br>client.|(specified by<br>BDUT)|
|TimeoutToIp|1 s|user/default|Maximum time<br>allowed to pass<br>between a TP<br>message send by the<br>test client to the BDUT<br>and this message<br>being detected on the<br>IP side by the test<br>client.|(specified by<br>BDUT)|
|TimeoutApp-<br>Layer-<br>Response|1 s|user/default|Maximum time to wait<br>for Application Layer<br>responses, such as<br>A_DeviceDescriptor_-<br>Response in response<br>to A_Device-<br>Descriptor_Read (for<br>example A_System-<br>NetworkParameter_-<br>Response, S-A_-<br>Sync_Response).|(specified by<br>BDUT)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 19 f 376


-----

|Timeout-<br>Description-<br>Response|1 s|user/default|Maximum time to wait<br>for a Description-<br>Response in response<br>to a Description-<br>Request.|(specified by<br>BDUT)|
|---|---|---|---|---|
|Timeout-<br>Search-<br>Response|1 s|user/default|Maximum time to wait<br>for a SearchResponse<br>in response to a<br>SearchRequest|(specified by<br>BDUT)|
|Timeout-<br>Disconnect-<br>Request|10 s|user/default|Timeout for the<br>DisconnectRequest,<br>which is send by the<br>BDUT at the end of<br>the disconnect on<br>missing ack<br>mechanism.<br>Minimum should be:<br>TimeoutTunnellingAck<br>+ NetworkLatency.<br>Not defined in the<br>system specifications.|(specified by<br>BDUT)|
|Timeout-<br>PowerUp|60 s|user/default|Maximum time to wait<br>for a DESCRIPTION_-<br>RESPONSE, after<br>powering up the<br>device and pinging it<br>with DESCRIPTION_-<br>REQUESTs.|(specified by<br>BDUT)|
|WaitTimeAfter-<br>PowerDown|5 s|user/default|Time to wait after<br>powering down the<br>device, before re-<br>powering up.<br>Time to wait after<br>switching on or off the<br>TP.|(specified by<br>BDUT)|
|WaitTimeAfter-<br>Restart|1 s|user/default|Time to wait after a<br>reset or restart before<br>trying to ping the<br>device to test whether<br>it became responsive<br>again. This is the|03_05_02<br>Management<br>Procedures<br>v01.09.02 AS.pdf,<br>3.7.1.1.2 Timing<br>(Management|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 20 f 376


-----

|Col1|Col2|Col3|maximum time the<br>device is allowed to<br>stay responsive under<br>old conditions after<br>having received a<br>restart/reset request<br>and before it is going<br>out of service before<br>the restart. This is not<br>the time in which a<br>restart is completed.<br>This is the maximum<br>time after which a<br>restart request is<br>accepted by a device.|Client and<br>Management<br>Server)|
|---|---|---|---|---|
|**Multicast**<br>**timeouts:**|||||
|Latency-<br>Tolerance|400 ms<br>(LAN)|user/default|Absolute worst case<br>network latency.<br>Multicast packets<br>older than this are<br>discarded.<br>Corresponds to<br>latencyTolerance in<br>the spec. This value is<br>written into PID_-<br>MULTICAST_-<br>LATENCY_-<br>TOLERANCE of the<br>BDUT.|(specified by test<br>setup)<br>AN159 v05<br>KNXnet-IP<br>Secure DV<br>(2016.11.18)<br>2.2.2.3.2.2<br>(Parameters),<br>2.3.1.5 (PID_-<br>MULTICAST_-<br>LATENCY_-<br>TOLERANCE),<br>B.4.4 (Example<br>parameter sets<br>and resulting time<br>windows)|
|SyncLatency-<br>Tolerance|200 ms<br>(LAN)|user/default|Typical worst case<br>network latency.<br>99.9% of all observed<br>network latencies<br>must be within the<br>SyncLatency-<br>Tolerance.<br>Corresponds to sync-<br>LatencyTolerance in<br>the spec. The value|(specified by test<br>setup)<br>AN159 v05<br>KNXnet-IP<br>Secure DV<br>(2016.11.18)<br>2.2.2.3.2.2<br>(Parameters),<br>2.3.1.6 (PID_-<br>SYNC_-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 21 f 376


-----

|Col1|Col2|Col3|SyncLatency-<br>Tolerance * 255 /<br>LatencyTolerance is<br>written into PID -<br>_<br>SYNC LATENCY -<br>_ _<br>FRACTION of the<br>BDUT.|LATENCY -<br>_<br>FRACTION),<br>B.4.4 (Example<br>parameter sets<br>and resulting time<br>windows)|
|---|---|---|---|---|
|TimeoutTimer-<br>Notify-<br>Response|MaxDelay-<br>Time-<br>Follower-<br>UpdateNotify<br>+ 2 *<br>Network-<br>Latency|constant<br>(calculated)|Maximum time the test<br>client needs to wait for<br>a 'response' to an<br>outdated TIMER_-<br>NOTIFY.|(derived value)|
|TimeDelta-<br>ReceivedMc-<br>Timestamps|Network-<br>Latency|constant<br>(calculated)|Maximum time the<br>observed BDUT<br>mc_timer (in<br>received TIMER_-<br>NOTIFY<br>or SECURE_-<br>WRAPPER frames)<br>may run behind the<br>local mc_timer.|(derived value)|
|TimeLeap-<br>UpdateTest|2 * Max-<br>DelayTime-<br>Follower-<br>UpdateNotify|<br>constant<br>(calculated)|<br>The mc_timer is<br>advanced this much in<br>tests which advance<br>the mc_timer to test<br>the mc_timer update<br>mechanism. This<br>should be more than<br>any of the involved<br>timer state machine<br>times. This is never<br>waited for, so the<br>magnitude is<br>unimportant. This is a<br>rather arbitrary value.|(derived value)|
|TimeoutInitial-<br>TimerNotify|MaxDelay-<br>InitialNotify +<br>Network-<br>Latency|constant<br>(calculated)|Maximum time to wait<br>for the initial TIMER_-<br>NOTIFY after power-<br>up.|(derived value)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 22 f 376


-----

|Timeout-<br>PeriodicTimer-<br>Notify|MaxDelay-<br>Time-<br>Follower-<br>Periodic-<br>Notify +<br>Network-<br>Latency|constant<br>(calculated)|Maximum time to wait<br>for a TIMER NOTIFY<br>_<br>traffic in an idle<br>system. This is the<br>longest delay of a<br>time-follower plus<br>network latency.|(derived value)|
|---|---|---|---|---|
|TimeLeap-<br>GreaterThan-<br>Persistence-<br>Interval|Max-<br>Persistence-<br>Interval * 10|constant<br>(calculated)|Time interval which is<br>greater than the worst<br>case 'jump ahead'<br>when power-cycling a<br>BDUT. This is used to<br>increase the local<br>mc_timer in the test<br>tool by an amount<br>which makes sure that<br>the mc_timer of the<br>BDUT is outdated.|(derived value)|
|MaxAllowed-<br>WorstCase-<br>TimeAdded-<br>OnPowerCycle|Max-<br>Persistence-<br>Interval + 5 s|constant<br>(calculated)|Power-cycling the<br>BDUT will add at most<br>this much to the<br>current mc_timer. The<br>5 s allows for jitter in<br>the persistence<br>implementation and<br>for any kind of network<br>latencies in<br>setting/querying<br>current mc_timer<br>values in tests. There<br>is no need to cover<br>any boot or<br>processing time in the<br>BDUT, as the BDUT<br>does not have to (and<br>should not) take its<br>own boot time into<br>account when adding<br>the worst case time to<br>the persisted timer<br>value on power-up.|(derived value)|
|TimeoutTimer-<br>Notify-<br>Processed|1 s|user/default|After waiting for this<br>time we are sure the<br>BDUT has received|(specified by<br>BDUT)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 23 f 376


-----

|Col1|Col2|Col3|a TIMER NOTIFY<br>_<br>and has completely<br>processed it, including<br>updating the<br>persistent storage.|Col5|
|---|---|---|---|---|
|Timeout-<br>Remote-<br>Diagnostic-<br>Response|5 s|user/defaultonly<br>3.1.5|Maximum time to wait<br>for a Remote<br>Diagnostic Response|(specified by<br>BDUT)|
|**Unicast:**|||||
|Timeout-<br>Secure-<br>SessionDelta|2 s|user/default|Time differences<br>around Timeout-<br>SecureSession where<br>the test client can<br>safely assume that the<br>secure session did not<br>yet expire (-) or did<br>expire (+). This mainly<br>makes up for the<br>network latencies for<br>transmitting the<br>information when the<br>session started or<br>when the timeout is<br>reset. This also makes<br>up for the inaccuracy<br>of the 60 s timer in the<br>server.|(arbitrarily<br>specified by test<br>specification)|
|Timeout-<br>Session-<br>Authenticate-<br>Delta|1 s|user/default|Time differences<br>around Timeout-<br>SessionAuthenticate<br>which are acceptable<br>when observing<br>a SESSION_-<br>AUTHENTICATE<br>timeout.|(arbitrarily<br>specified by test<br>specification)|
|**System**<br>**broadcast:**|||||
|TimeoutIp-<br>System-|1 s|user/defaultonly<br>2.4.11|The System<br>Broadcast mode is<br>allowed to switch back<br>in the interval|(arbitrarily<br>specified by test<br>specification)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 24 f 376


-----

|Broadcast-<br>FallbackTo-<br>DisableDelta|Col2|Col3|TimeoutIpSystem-<br>BroadcastFallbackTo-<br>Disable +/- Timeout-<br>IpSystemBroadcast-<br>FallbackToDisable-<br>Delta after it was<br>enabled. This includes<br>network latencies and<br>all other processing<br>latencies and the timer<br>inaccuracy in the test<br>tool and in the BDUT.|Col5|
|---|---|---|---|---|


##### 1.3.3 Parameters specified in KNX specifications

The values of these parameters are defined in KNX specifications. Most of them are
constants, except for those where the value is derived from SyncLatencyTolerance.

**Parameter** **Value** **Usage** **Description** **Specification**
**Reference**

**Multicast:**

MinDelay- 0 ms constant BDUT sends one AN159 v05 KNXnetInitialNotify initial TIMER_NOTIFY frame IP Secure DV
randomly in this interval after (2016.11.18)

MaxDelay- 10000 ms constant

power-up. 2.2.2.3.2.2

InitialNotify

(Parameters)

MinDelay- 10000 ms constant Timekeepers send
Time- periodic TIMER_NOTIFY
Keeper- frames in this interval, relative
Periodic- to the last
Notify sent/received TIMER_NOTIFY

frame.
MaxDelay- Min- constant
Time- Delay- (calculated)
Keeper- TimePeriodic- KeeperNotify Periodic
Notify + 3

       - SyncLatencyTolerance

©C i h 1998 2018 KNX A i i V i 1 1 AS P 25 f 376

|Parameter|Value|Usage|Description|Specification<br>Reference|
|---|---|---|---|---|
|**Multicast:**|||||
|MinDelay-<br>InitialNotify|0 ms|constant|BDUT sends one<br>initial TIMER_NOTIFY frame<br>randomly in this interval after<br>power-up.|AN159 v05 KNXnet-<br>IP Secure DV<br>(2016.11.18)<br>2.2.2.3.2.2<br>(Parameters)|
|MaxDelay-<br>InitialNotify|10000 ms|constant|constant|constant|
|MinDelay-<br>Time-<br>Keeper-<br>Periodic-<br>Notify|10000 ms|constant|Timekeepers send<br>periodic TIMER_NOTIFY<br>frames in this interval, relative<br>to the last<br>sent/received TIMER_NOTIFY<br>frame.|Timekeepers send<br>periodic TIMER_NOTIFY<br>frames in this interval, relative<br>to the last<br>sent/received TIMER_NOTIFY<br>frame.|
|MaxDelay-<br>Time-<br>Keeper-<br>Periodic-<br>Notify|Min-<br>Delay-<br>Time-<br>Keeper-<br>Periodic-<br>Notify + 3<br>* Sync-<br>Latency-<br>Tolerance|constant<br>(calculated)|constant<br>(calculated)|constant<br>(calculated)|


-----

|MinDelay-<br>Time-<br>Follower-<br>Periodic-<br>Notify|Max-<br>Delay-<br>Time-<br>Keeper-<br>Periodic-<br>Notify + 1<br>* Sync-<br>Latency-<br>Tolerance|constant<br>(calculated)|Timefollowers send<br>periodic TIMER NOTIFY<br>_<br>frames in this interval, relative<br>to the last<br>sent/received TIMER NOTIFY<br>_<br>frame.|Col5|
|---|---|---|---|---|
|MaxDelay-<br>Time-<br>Follower-<br>Periodic-<br>Notify|Min-<br>Delay-<br>Time-<br>Follower-<br>Periodic-<br>Notify +<br>10 *<br>Sync-<br>Latency-<br>Tolerance|constant<br>(calculated)|constant<br>(calculated)|constant<br>(calculated)|
|MinDelay-<br>Time-<br>Keeper-<br>Update-<br>Notify|100 ms|constant|Timekeepers send responses<br>to outdated TIMER_NOTIFY<br>frames (updates) in this<br>interval, relative to the earliest<br>provoking TIMER_NOTIFY<br>frame.|Timekeepers send responses<br>to outdated TIMER_NOTIFY<br>frames (updates) in this<br>interval, relative to the earliest<br>provoking TIMER_NOTIFY<br>frame.|
|MaxDelay-<br>Time-<br>Keeper-<br>Update-<br>Notify|Min-<br>Delay-<br>Time-<br>Keeper-<br>Update-<br>Notify + 1<br>* Sync-<br>Latency-<br>Tolerance|constant<br>(calculated)|constant<br>(calculated)|constant<br>(calculated)|
|MinDelay-<br>Time-<br>Follower-<br>Update-<br>Notify|Max-<br>Delay-<br>Time-<br>Keeper-<br>Update-<br>Notify + 1<br>* Sync-<br>Latency-<br>Tolerance|constant<br>(calculated)|Timefollowers send responses<br>to outdated TIMER_NOTIFY<br>frames (updates) in this<br>interval, relative to the earliest<br>provoking TIMER_NOTIFY<br>frame.|Timefollowers send responses<br>to outdated TIMER_NOTIFY<br>frames (updates) in this<br>interval, relative to the earliest<br>provoking TIMER_NOTIFY<br>frame.|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 26 f 376


-----

|MaxDelay-<br>Time-<br>Follower-<br>Update-<br>Notify|Min-<br>Delay-<br>Time-<br>Follower-<br>Update-<br>Notify +<br>10 *<br>Sync-<br>Latency-<br>Tolerance|constant<br>(calculated)|Col4|Col5|
|---|---|---|---|---|
|Max-<br>Persistence-<br>Interval|1 h|constant|Maximum time<br>implementations may wait<br>between persisting the<br>mc_timer value. The real<br>restriction is that<br>implementations may not add<br>more than this time as a worst<br>case time after a power-up to<br>avoid attacks based on<br>constantly power-cycling a<br>device to force an mc_timer<br>wrap around.|AN159 v05 KNXnet-<br>IP Secure DV<br>(2016.11.18) 2.2.4.2<br>(Persisting the<br>multicast timer)|
|Clock-<br>Accuracy-<br>Max-<br>Allowed-<br>DeviationIn-<br>Ppm|100 ppm|constant|The mc_timer may deviate<br>from real-time by this factor.|AN159 v05 KNXnet-<br>IP Secure DV<br>(2016.11.18)<br>2.2.2.2.3 (System<br>clock accuracy)|
|**Unicast:**|||||
|Timeout-<br>Session-<br>Response|10 s|constant|Timeout for a client which<br>waits for a SESSION_-<br>RESPONSE in response to a<br>SESSION_REQUEST.|AN159 v05 KNXnet-<br>IP Secure DV<br>(2016.11.18)<br>2.2.3.6.1<br>(SESSION_-<br>REQUEST / Usage)|
|Timeout-<br>Session-<br>Authenticate|10 s|constant|Corresponds to timeout-<br>Authentication in the<br>specification. Timeout for a<br>server (e.g. BDUT) which<br>waits for a SESSION_-<br>AUTHENTICATE in response<br>to a SESSION_RESPONSE.|AN159 v05 KNXnet-<br>IP Secure DV<br>(2016.11.18)<br>2.2.3.5.2.1.1<br>(Parameters)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 27 f 376


-----

|Timeout-<br>Session-<br>Status-<br>Authenticate|10 s|constant|Timeout for a client which<br>waits for a SESSION -<br>_<br>STATUS in response to a<br>SESSION AUTHENTICATE.<br>_|AN159 v05 KNXnet-<br>IP Secure DV<br>(2016.11.18)<br>2.2.3.8.1<br>(SESSION -<br>_<br>AUTHENTICATE /<br>Usage)|
|---|---|---|---|---|
|Timeout-<br>Secure-<br>Session|60 s|constant|Corresponds to timeout-<br>Session in the specification.<br>Maximum time an<br>authenticated session may<br>remain unused (without any<br>communication over this<br>session) until the session will<br>be dropped.|AN159 v05 KNXnet-<br>IP Secure DV<br>(2016.11.18)<br>2.2.3.5.2.1.1<br>(Parameters)|
|Timeout-<br>Knx-<br>Connection|120 s|constant|Timeout of idle KNX<br>connections.|03_08_01 Overview<br>v01.04.02 AS 5.8<br>(Timeout constants)|
|Timeout-<br>Knx-<br>Connect-<br>Response|10 s|constant|Timeout when waiting for a<br>ConnectResponse after a<br>ConnectRequest.|03_08_01 Overview<br>v01.04.02 AS 5.8<br>(Timeout constants)|
|Timeout-<br>Knx-<br>Connection-<br>State-<br>Response|10 s|constant|Timeout when waiting for a<br>ConnectionStateResponse<br>after a ConnectionState-<br>Request.|03_08_01 Overview<br>v01.04.02 AS 5.8<br>(Timeout constants)|
|Timeout-<br>Knx-<br>Disconnect-<br>Response|10 s|constant|Timeout when waiting for a<br>DisconnectResponse after a<br>DisconnectRequest.|undefined|
|TimeoutIdle-<br>Tcp-<br>Connection|10 s|constant|Time after which the server<br>closes an idle TCP connection<br>(a TCP connection which does<br>not contain a KNX connection<br>or a secure session). The<br>timeout is restarted after the<br>reception of each byte.|AN184 v01 KNXnet-<br>IP Core v2 DP<br>(2016.11.18)<br>2.2.2.2.3 (UDP and<br>TCP)|
|Password-<br>HashDefault|Hash of<br>password<br>"" (empty<br>string).|constant|Password hash of the default<br>password (empty string). This<br>is the default password for the<br>management user and for all|KSG616-16.02<br>KNXnet-IP Security<br>(2017.02.21) 2.3.1.3|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 28 f 376


-----

|Col1|E9 C3 04<br>B9 14 A3<br>51 75 FD<br>7D 1C 67<br>3A B5 2F<br>E1|Col3|tunnelling users for secure<br>sessions.This can be<br>calculated with Python >=<br>2.7.8 or >= 3.4:python -c<br>'import hashlib; print<br>hashlib.pbkdf2 -<br>_<br>hmac("sha256", password =<br>b"", salt = b"user-<br>password.1.secure.ip.knx.org",<br>iterations = 65536, dklen =<br>128 / 8).encode("hex").upper()'|(PID -<br>_<br>PASSWORD -<br>_<br>HASHES)|
|---|---|---|---|---|
|**System**<br>**Broadcast:**|||||
|TimeoutIp-<br>System-<br>Broadcast-<br>FallbackTo-<br>Disable|20 s|constant|Timeout when the System<br>Broadcast mode falls back to<br>disabled after it was last<br>enabled.|AN183 v01 KNXnet-<br>IP System<br>Broadcast DP<br>(2016.11.18) 2.3.1.1<br>(PID_IP_SBC_-<br>CONTROL)|
|WaitTime-<br>AfterWriting-<br>Domain-<br>Address|1 s|constant|Time to wait after writing the<br>domain address before<br>starting to ping device to<br>check whether it is responsive<br>again. The purpose of this wait<br>time is to ensure that the<br>device had enough time to<br>change its own configuration<br>to get unresponsive. The test<br>tool will always blindly wait<br>during this time and will not<br>poll the device for<br>responsiveness. (See also<br>TimeoutAfterWritingDomain-<br>Address which immediately<br>follows this time interval.)|AN183 v01 KNXnet-<br>IP System<br>Broadcast DP<br>(2016.11.18) 2.2.4.2<br>(Handling in<br>Management)|
|Timeout-<br>AfterWriting-<br>Domain-<br>Address|60 s|constant|Maximum time allowed for a<br>device to get responsive again<br>after WaitTimeAfterWriting-<br>DomainAddress has<br>elapsed.The test tool will poll<br>the device to check whether it<br>is responsive again (on the<br>new domain address). It will|AN183 v01 KNXnet-<br>IP System<br>Broadcast DP<br>(2016.11.18) 2.2.4.2<br>(Handling in<br>Management)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 29 f 376


-----

|Col1|Col2|Col3|stop polling as soon as the<br>device is responsive again.<br>This is the maximum time for<br>this polling interval.|Col5|
|---|---|---|---|---|
|** Extended**<br>**Discovery:**|||||
|Timeout-<br>Search-<br>Response-<br>Extended-<br>Unicast|10 s|constant|Timeout for a unicast Search-<br>ResponseExtended|AN184 v01 KNXnet-<br>IP Core v2 DP<br>(2016.11.18) 2.4<br>(Management<br>Procedures)|
|Timeout-<br>Search-<br>Response-<br>Extended-<br>Multicast|3 s|constant|Timeout for a multicast<br>SearchResponseExtended|AN184 v01 KNXnet-<br>IP Core v2 DP<br>(2016.11.18) 2.4<br>(Management<br>Procedures)|
|**Tunnelling**<br>**v2**|||||
|Timeout-<br>Tunnelling-<br>Ack|1 s|constant|KNXnet/IP Client shall wait for<br>1 second for a TunnellingAck<br>response on a Tunnelling-<br>Request frame from<br>KNXnet/IP Server.|03_08_01 Overview<br>v01.04.02 AS|
|Timeout-<br>Tunnelling-<br>Feature-<br>Response|3 s|constant|Timeout for a Tunnelling-<br>FeatureResponse after a<br>TunnellingFeatureGet/Set.|KSG643-19.01<br>KNXnet-IP<br>Tunnelling v2<br>(2017.07.06)<br>2.2.2.2.4<br>TUNNELLING_-<br>FEATURE_INFO|


##### 1.3.4 Constants and arbitrary data

The following constants do not require configuration and are fixed values for all tests
and all devices. However, their symbolic names are used in the test descriptions.

**Parameter Value** **Usage** **Description**
**Reference**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 30 f 376

|Parameter|Value|Usage|Description|Specification<br>Reference|
|---|---|---|---|---|


-----

|System-<br>Setup-<br>Multicast-<br>Address|224.0.23.12|constant|System setup multicast<br>address. Also used for IP<br>System Broadcast<br>communication.|03 08 01<br>_ _<br>Overview<br>v01.04.02 AS<br>5.9 (Internet<br>Protocol<br>constants)|
|---|---|---|---|---|
|Non-<br>System-<br>Setup-<br>Multicast-<br>Address|225.0.23.12|constant|Any usable multicast address<br>different from SystemSetup-<br>MulticastAddress<br>(224.0.23.12). 225.0.23.12 is a<br>good test as it maps onto the<br>same 48-bit Ethernet MAC<br>address as 224.0.23.12.|(arbitrarily<br>specified by<br>test<br>specification)|
|Non-<br>System-<br>Setup-<br>Multicast-<br>Address2|226.0.23.12|constant|Similar to NonSystemSetup-<br>MulticastAddress, but must be<br>different from NonSystem-<br>SetupMulticastAddress and<br>from SystemSetupMulticast-<br>Address.|(arbitrarily<br>specified by<br>test<br>specification)|
|Discovery-<br>Hpai|224.0.23.12:3671,<br>Protocol: UDP|constant|HPAI to discover devices.|03_08_02<br>Core<br>v01.05.01 AS|
|TCPRoute-<br>BackHpai|0.0.0.0:0,<br>Protocol: TCP|constant|Route Back HPAI for TCP<br>frames|AN184 v01<br>KNXnet-IP<br>Core v2 DP<br>(2016.11.18)<br>2.2.2.2.5<br>(Host<br>Protocol<br>Address<br>Information)|
|UDPRoute-<br>BackHpai|0.0.0.0:0,<br>Protocol: UDP|constant|Route Back HPAI for UDP<br>frames|03_08_02<br>Core<br>v01.05.01 AS<br>- 8.6.3.5<br>Network<br>Address<br>Translation<br>(NAT)|
|Backbone-<br>Key1|00 01 02 03 04 05<br>06 07 08 09 0A<br>0B 0C 0D 0E 0F|constant|A 16 byte backbone key. Must<br>be different from Backbone-<br>Key2.|(arbitrarily<br>specified by|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 31 f 376


-----

|Col1|Col2|Col3|Col4|test<br>specification)|
|---|---|---|---|---|
|Backbone-<br>Key2|01 02 03 04 05 06<br>07 08 09 0A 0B<br>0C 0D 0E 0F 00|constant|A 16 byte backbone key. Must<br>be different from Backbone-<br>Key1.|(arbitrarily<br>specified by<br>test<br>specification)|
|Password-<br>Hash1|Hash of password<br>"Password-<br>Hash1":51 5D 8E<br>D4 C2 4F 69 BB<br>DF 50 A3 CB 89<br>35 84 61|constant|Password hash for password<br>"PasswordHash1".This can be<br>calculated with Python >=<br>2.7.8 or >= 3.4:python -c<br>'import hashlib; print<br>hashlib.pbkdf2_-<br>hmac("sha256", password =<br>b"PasswordHash1", salt =<br>b"user-<br>password.1.secure.ip.knx.org",<br>iterations = 65536, dklen =<br>128 / 8).encode("hex").upper()'|(arbitrarily<br>specified by<br>test<br>specification)|
|Duration-<br>OfClock-<br>Accuracy-<br>Test|60 s|constantonly<br>2.1.9|Duration of the inner test loop<br>of the test which determines<br>the accuracy of the mc_timer<br>for multicast communication.<br>This can be set to a longer<br>interval when it is necessary to<br>measure the accuracy more<br>accurately, e.g. 1 hour results<br>in < 30 ppm accuracy. For the<br>sake of the test it is not<br>necessary to modify this<br>value. See also Clock-<br>AccuracyMaxAllowed-<br>DeviationInPpm.|(arbitrarily<br>specified by<br>test<br>specification)|
|Duration-<br>OfPeriodic-<br>Timer-<br>NotifyTest|60 s|constant|Duration of the test which<br>checks that periodic TIMER_-<br>NOTIFY frames are sent.|(arbitrarily<br>specified by<br>test<br>specification)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 32 f 376


-----

### 1.4 Test execution

##### 1.4.1 Profiles (test subset for a specific mask version and/or type of device)

The test tool supports profiles (profile files). Profiles are specific for a specific mask
version and/or type of device. A profile file selects a certain subset of tests which have
to be executed and passed in order to validate the device.Profiles are not specified in
this specification, but section 5 gives an overview which tests have to be executed for
which class of device.

##### 1.4.2 Test execution order

Tests are always executed in ascending order of their test id.The tests are listed in
ascending order (and so in execution order) in each section in this specification, but the
sections are not listed in ascending order in the specification (e.g. the test in 2.5.* will be
executed before the tests in 2.1.*).

##### 1.4.3 Required manual initialization

The following aspects need to be manually configured in the BDUT:

  - Individual address (this is then determined by the test tool).

  - Tool key (if present) is set to the Fdsk.

Otherwise each test initializes the BDUT sufficiently to run the test.

##### 1.4.4 General setup

**Test ID** 01000

**Description** This pseudo test serves as optional general setup procedure, which
brings the BDUT into the desired state, for example after unclean
termination of an earlier test.

**Expectation** The initialization can be completed without errors.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 33 f 376

|Test ID|01000|
|---|---|
|**Description**|This pseudo test serves as optional general setup procedure, which<br>brings the BDUT into the desired state, for example after unclean<br>termination of an earlier test.|
|**Expectation**|The initialization can be completed without errors.|
|**Setup**|-|


-----

|Test procedure| Switch BDUT power supply on via BdutPowerSupplySwitch-<br>GroupAddress.<br> Switch BDUT bus connection on via BdutTpConnectionSwitch-<br>GroupAddress.<br> PropSetup NonSecure(ignoreErrors = true, fallBackToSecure-<br>_<br>Session = true, unlockBroadcastAndGroup = true).|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|(Specified just in this specification.)|
|**Duration**|ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 1.4.5 Test duration

The "Duration" of a test specifies the worst-case duration for running that test. This
always includes the duration of all called procedures. The duration is only informative
any may be inaccurate or even incorrect. A test tool must not terminate a test because
the specified worst-case duration elapsed.

### 1.5 Explicitly not tested

The following aspects are explicitly not covered by this test specification.

**Aspect** **Document,** **Reason**
**Section**

Data Security KSG638-18.03 Can be tested with EITT.
KNX Data
Security.docx

Access policies of resources (many) Can be tested with EITT.

IP Protocols: ARP, RARP, KSG696-08.01 Out of scope because unrelated to
Fixed IP Address, BootP, KNXnet-IP Core KNXnet/IP. Should be tested by
DHCP, ICMP, IGMP v2.docx, 2.2.3.1 manufacturer using dedicated IP-Stack

test suites.

Uniqueness of serial number KSG616-18.03 Not possible to test with a single
for each device. KNXnet-IP device.
Security.docx,
2.5.1.3.1

©C i h 1998 2018 KNX A i i V i 1 1 AS P 34 f 376

|Aspect|Document,<br>Section|Reason|
|---|---|---|
|Data Security|KSG638-18.03<br>KNX Data<br>Security.docx|Can be tested with EITT.|
|Access policies of resources|(many)|Can be tested with EITT.|
|IP Protocols: ARP, RARP,<br>Fixed IP Address, BootP,<br>DHCP, ICMP, IGMP|KSG696-08.01<br>KNXnet-IP Core<br>v2.docx, 2.2.3.1|Out of scope because unrelated to<br>KNXnet/IP. Should be tested by<br>manufacturer using dedicated IP-Stack<br>test suites.|
|Uniqueness of serial number<br>for each device.|KSG616-18.03<br>KNXnet-IP<br>Security.docx,<br>2.5.1.3.1|Not possible to test with a single<br>device.|


-----

|Non-security enabled<br>devices ignore Secure-<br>Wrapper frames.|KSG616-18.03<br>KNXnet-IP<br>Security.docx,<br>2.2.1.2.1|Hard to test for little benefit.|
|---|---|---|
|Tunnelling server repeats<br>TUNNELLING_REQUESTs,<br>TUNNELLING_FEATURE_-<br>RESPONSEs and<br>TUNNELLING_FEATURE_-<br>INFOs on missing<br>TUNNLING_ACKs from the<br>client (via UDP).|KSG643-20.01<br>KNXnet-IP<br>Tunnelling<br>v2.docx, 2.2.2.2.1<br>03_08_04<br>Tunnelling<br>v01.05.03 AS.pdf,<br>2.6|Not properly specified in the Tunnelling<br>v1 specification and thus a wide range<br>of existing implementations exist. No<br>common behavior can be assumed for<br>existing implementations, thus nothing<br>is tested.|
|ROUTING_BUSY, for<br>example not sending and<br>responding to ROUTING_-<br>BUSY in conjunction with<br>system broadcast.|KSG668-15.01<br>KNXnet-IP System<br>Broadcast, 2.2.5|The ROUTING_BUSY behavior is<br>currently excluded from the certification<br>process since it is not sufficiently<br>specified.|


### 1.6 Assumptions

The following assumptions are made by this test specification although these aspects
are not documented anywhere.

**Id Assumption** **Reason / Description**
**tests**

A7 Disconnecting the TP1 line after a The behavior what happens when the 2.7.5
tunnelling connection has been TP1 line is disconnected on an
established may trigger one of the established tunnelling connection is
following behaviors of the BDUT: not documented anywhere. The

system specification of the Tunneling
1. A TunnellingFeatureInfo(Bus- FeatureInfo(BusConnectionStatus)
ConnectionStatus) is sent if this assumes that a tunneling connection
info service is enabled. Optionally survives disconnecting the TP1 line.
the device may send a Disconnect- This is not consistent with the wider
Request after this or not envelope of allowed behavior when
(implementation defined). establishing a tunnelling connection.
Optionally the device may become This assumption transfers this wider
completely unresponsive after this envelope when establishing a
or not (implementation defined), or: tunnelling connection to the case when

disconnecting the TP1 line while a

2. A DisconnectRequest is tunnelling connection was already
sent. Optionally the device may established.
become completely unresponsive

©C i h 1998 2018 KNX A i i V i 1 1 AS P 35 f 376

|Id|Assumption|Reason / Description|Affected<br>tests|
|---|---|---|---|
|A7|Disconnecting the TP1 line_after_ a<br>tunnelling connection has been<br>established may trigger one of the<br>following behaviors of the BDUT:<br>1. A TunnellingFeatureInfo(Bus-<br>ConnectionStatus) is sent if this<br>info service is enabled. Optionally<br>the device may send a Disconnect-<br>Request after this or not<br>(implementation defined).<br>Optionally the device may become<br>completely unresponsive after this<br>or not (implementation defined), or:<br>2. A DisconnectRequest is<br>sent. Optionally the device may<br>become completely unresponsive|The behavior what happens when the<br>TP1 line is disconnected on an<br>established tunnelling connection is<br>not documented anywhere. The<br>system specification of the Tunneling-<br>FeatureInfo(BusConnectionStatus)<br>assumes that a tunneling connection<br>survives disconnecting the TP1 line.<br>This is not consistent with the wider<br>envelope of allowed behavior when<br>establishing a tunnelling connection.<br>This assumption transfers this wider<br>envelope when establishing a<br>tunnelling connection to the case when<br>disconnecting the TP1 line while a<br>tunnelling connection was already<br>established.|2.7.5|


-----

|Col1|after this (implementation defined),<br>or:<br>3. The device becomes completely<br>unresponsive.<br>Which of these alternatives is<br>taken is implementation defined.|This assumption does not assume that<br>the behavior when trying to<br>establishing a tunnelling connection<br>while TP1 is disconnected is consistent<br>with the behavior when disconnecting<br>the TP1 line on an established<br>tunnelling connection.|Col4|
|---|---|---|---|
|A8|Routers which support System<br>Broadcast do not route S-AL<br>system broadcast frames with<br>SCF.SBC=1 and SCF.T=0 from<br>TP1 to IP, independent of the<br>system broadcast mode.|The current System Broadcast<br>specification is ambiguous in this<br>aspect and this assumption just<br>captures which variant is currently<br>assumed by the test specification and<br>by the test tool. This may or may not<br>be the best assumption.<br>Independent of the ambiguity of the<br>System Broadcast specification the<br>topic itself (whether to route frames<br>with SBC=1 and T=0 from TP1 to IP or<br>not and under which circumstances) is<br>still under discussion which may lead<br>to a conclusion which conflicts with this<br>assumption.<br>This assumption is solely motivated by<br>(and 100% in line with) this text in<br>KSG668-15.01 KNXnet-IP System<br>Broadcast (2017.07.04) 2.2.3.2<br>(Routing from TP1 to IP): "S-A_Sync_-<br>Request-PDU and S-A_Data-PDU with<br>confidentiality with the SBC bit in the<br>Security Control Field (SCF) equal to 1<br>but the tool access (T) bit in the<br>Security Control Field (SCF) equal to 0<br>shall not be routed, independent of the<br>system broadcast routing mode.".<br>However:<br> <br>The text "If the system<br>broadcast routing mode of a<br>KNXnet/IP Router does not<br>have the value “Enable”, or if a<br>received TP1 broadcast Frame|2.4.21|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 36 f 376


-----

|Col1|Col2|does not match the above rules,<br>it shall be forwarded to IP<br>according to the normal routing<br>handling." (also in KSG668-<br>15.01 KNXnet-IP System<br>Broadcast (2017.07.04) 2.2.3.2<br>(Routing from TP1 to IP))<br>conflicts with this assumption,<br>because it specified that such<br>messages should be routed if<br>the system broadcast mode is<br>disabled. This behavior is also<br>consistent with routers which do<br>not support IP System<br>Broadcast.<br> The text quoted above ("S-A -<br>_<br>Sync Request-PDU and ...")<br>_<br>conflicts with the fact that this<br>bullet point is in a scope where<br>system broadcast mode is<br>always enabled.<br> The text quoted above ("S-A -<br>_<br>Sync Request-PDU and ...") is<br>_<br>part of a list which is supposed<br>to specify messages which are<br>to be routed. But the text<br>specifies that this particular<br>message is not to be routed.|Col4|
|---|---|---|---|


# 2 Test Catalogue

### 2.1 Multicast

All multicast tests expect just the BDUT and the test tool to send TimerNotify and
SecureWrapper traffic (unless explicitly specified otherwise).

##### 2.1.1 Meta test: Secure multicast frames ok

**Test ID** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 37 f 376

|Test ID|-|
|---|---|


-----

|Description|This test is not run as an independent test. Instead this test validates all<br>incoming IP security multicast related frames, coming from the BDUT,<br>while executing all multicast tests.|
|---|---|
|**Expectation**|None of the checks listed in the test procedure fail.|
|**Setup**|Start the processing of this test before the first multicast test and let it<br>run while all multicast tests are running.|
|**Test procedure**|For each frame received from the BDUT on the IP side:<br> <br>If frame is a SecureWrapper with secure session identifier == 0 or<br>a TimerNotify (secure multicast frames):<br>`o` Check that the header length equals 6 and the Protocol<br>Version equals 10h.<br>`o` Check that the tuples 'Timestamp, MessageTag' of all<br>multicast frames received from the BDUT are pairwise<br>different.<br>`o` Verify MAC is valid.<br>`o` Check whether timestamp increases monotonically (not<br>strictly monotonically) from frame to frame.<br> <br>Exception: This check must be suppressed<br>immediately after changing BDUT backbone key<br>(which should reset BDUT mc_timer).<br>`o` For SecureWrapper:<br> <br>If inner frame is a SessionRequest, Session-<br>Response, SessionAuthenticate, SessionStatus,<br>SecureWrapper or TimerNotify: TestFailed.|
|**Cleanup**|End the processing of this test after the last multicast test.|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.1.3 (SECURE_-<br>WRAPPER), 2.2.2.4 (TIMER_NOTIFY)|
|**Duration**|<br>0 s (This tests runs while all other multicast tests are running and does<br>not consume any time.)|
|**Mask version**||
|**Open points**||


##### 2.1.2 Multicast communication on System Setup Multicast Address works

**Test ID** 70102

©C i h 1998 2018 KNX A i i V i 1 1 AS P 38 f 376

|Test ID|70102|
|---|---|


-----

|Description|Set backbone key and enable multicast communication on the System<br>Setup Multicast Address. Read Mask Version by sending SecureWrapper<br>RoutingIndication DeviceDescriptorRead and receiving SecureWrapper<br>RoutingIndication DeviceDescriptorResponse. Read BDUT Mask Version<br>once again (to test sequence counter consistency). The meta-test<br>implicitly tests a lot of low-level aspects of the multicast communication.|
|---|---|
|**Expectation**|There are no errors or timeouts during setup. There are no errors or<br>timeouts when waiting for responses from the BDUT.|
|**Setup**| <br>GlPro_SetupMulticast(multicastAddress = SystemSetupMulticast-<br>Address).|
|**Test**<br>**procedure**| <br>Execute GlPro_VerifyMulticastIsFunctional(multicastAddress =<br>SystemSetupMulticastAddress).<br> <br>Wait 100 milliseconds. (Explanation: The waiting is just here to<br>ensure that the mc_timer in the BDUT increases and Secure-<br>Wrapper packets with different timestamps are sent. The 100 ms<br>are arbitrary.)<br> <br>Execute GlPro_VerifyMulticastIsFunctional(multicastAddress =<br>SystemSetupMulticastAddress).|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.1 (Key<br>Management) (Specifies that secure multicast works for KNX/IPRouting<br>and thus for any multicast address.)Checked state machine transitions:<br>Event E06 State SCHED_PERIODIC.|
|**Duration**|<br>3 s + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.3 Multicast communication on non-System Setup Multicast Address works

**Test ID** 70103

©C i h 1998 2018 KNX A i i V i 1 1 AS P 39 f 376

|Test ID|70103|
|---|---|


-----

|Description|Set backbone key and enable multicast communication on a non-System<br>Setup Multicast Address. Read Mask Version by sending SecureWrapper<br>RoutingIndication DeviceDescriptorRead and receiving SecureWrapper<br>RoutingIndication DeviceDescriptorResponse.|
|---|---|
|**Expectation**|SecureWrapper RoutingIndication DeviceDescriptorResponse is<br>received.|
|**Setup**| <br>Execute GlPro_SetupMulticast(multicastAddress = NonSystem-<br>SetupMulticastAddress).|
|**Test**<br>**procedure**| <br>Execute GlPro_VerifyMulticastIsFunctional(multicastAddress =<br>SystemSetupMulticastAddress).|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.1 (Key<br>Management) (Specifies that secure multicast works for KNX/IPRouting<br>and thus for any multicast address.)Checked state machine transitions:<br>Event E06 State SCHED_PERIODIC.|
|**Duration**|<br>2 s + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.4 Frames sent to wrong multicast address but with a known backbone key are ignored

**Test ID** 70104

**Description** Set backbone key and enable multicast communication on a nonSystem Setup Multicast Address. Read a property on a different nonSystem Setup Multicast Address, which should fail.

**Expectation** The BDUT does not respond to a request sent to NonSystemSetupMulticastAddress2. The request times out.

**Setup** - Execute GlPro_SetupMulticast(multicastAddress = NonSystemSetupMulticastAddress).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 40 f 376

|Test ID|70104|
|---|---|
|**Description**|Set backbone key and enable multicast communication on a non-<br>System Setup Multicast Address. Read a property on a different non-<br>System Setup Multicast Address, which should fail.|
|**Expectation**|The BDUT does not respond to a request sent to NonSystemSetup-<br>MulticastAddress2. The request times out.|
|**Setup**| <br>Execute GlPro_SetupMulticast(multicastAddress = NonSystem-<br>SetupMulticastAddress).|


-----

|Test procedure| Execute GlPro VerifySecureWrapperIsIgnored(multicastAddress<br>_<br>= NonSystemSetupMulticastAddress2).|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.1 (Key<br>Management)|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutAppLayerResponse +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.5 Erroneous SecureWrapper frames are ignored

**Test ID** 70105

**Description** Send SecureWrapper frames with various errors injected to the BDUT.
All of these should be ignored.

**Expectation** All erroneous frames are ignored by the BDUT.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 41 f 376

|Test ID|70105|
|---|---|
|**Description**|Send SecureWrapper frames with various errors injected to the BDUT.<br>All of these should be ignored.|
|**Expectation**|All erroneous frames are ignored by the BDUT.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test procedure| For each of the following errors:<br>o non-zero session identifier<br>o serial number not corresponding to the serial number used<br>to calculate the MAC<br>o encrypted data which differs in one byte from the correct<br>encrypted data (e.g. generate a correct frame and<br>increment one byte of the encrypted data by one).<br>o MAC which differs in one byte from the correct MAC (e.g.<br>generate a correct frame and increment one byte of the<br>MAC by one).<br>o Total length two bytes longer than for SecureWrapper, but<br>total length matches actual length of frame (e.g. append<br>two zero bytes to a valid SecureWrapper frame and<br>increase total length fields by 2).<br> Do the following:<br>o Send a SecureWrapper frame containing Routing-<br>Indication, L Data.ind, A DeviceDescriptor Read, with<br>_ _ _<br>one of the below errors injected to the BDUT on the Non-<br>SystemSetupMulticastAddress.<br>o Wait for response. Timeout: TimeoutAppLayerResponse.<br>o On timeout: Ok. Continue.<br>o On received response:<br> Abort test and return TestFailed.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.1.3.1 (SECURE_-<br>WRAPPER, Binary Format)|
|**Duration**|5 * TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


##### 2.1.6 Timer Synchronization: SecureWrapper updates mc_timer

**Test ID** 70106

**Description** Send a SecureWrapper to the BDUT which has a significantly increased
timestamp compared to the BDUTs mc_timer. Verify that the mc_timer
in the BDUT is updated accordingly.

**Expectation** BDUT's mc_timer is updated accordingly.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 42 f 376

|Test ID|70106|
|---|---|
|**Description**|Send a SecureWrapper to the BDUT which has a significantly increased<br>timestamp compared to the BDUTs mc_timer. Verify that the mc_timer<br>in the BDUT is updated accordingly.|
|**Expectation**|BDUT's mc_timer is updated accordingly.|


-----

|Setup| Execute GlPro SetupMulticast().<br>_|
|---|---|
|**Test procedure**| <br>Execute GlPro_SetLocalMcTimer(time = GlPro_GetLocalMc-<br>Timer() + TimeLeapUpdateTest) (do not wait, just increase<br>mc_timer).<br> <br>Execute GlPro_VerifyMulticastIsFunctional().<br> <br>Execute (receivedTime, localMcTime) = GlPro_QueryMcTimer().<br> <br>Verify that the newly received timestamp is in sync with the local<br>mc_timer of the test tool: Verify that receivedTime is in 'localMc-<br>Time - TimeDeltaReceivedMcTimestamps .. localMcTime'.<br>(Explanation: Transferring the time from the test tool to the BDUT<br>using the SecureWrapper takes one network latency, and<br>querying the mc_timer takes another one, plus some processing<br>time)|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table, Event E05), 2.2.2.3.2.6 (Actions, A1)<br>Checked state machine transitions: Event E05 State SCHED_-<br>PERIODIC.|
|**Duration**|3 s + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.7 Timer Synchronization: TimerNotify updates mc_timer

**Test ID** 70107

**Description** Send a TimerNotify to the BDUT which has a significantly increased
timestamp compared to the BDUTs mc_timer. Verify that the mc_timer
in the BDUT is updated accordingly.

**Expectation** BDUT's mc_timer is updated accordingly.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 43 f 376

|Test ID|70107|
|---|---|
|**Description**|Send a TimerNotify to the BDUT which has a significantly increased<br>timestamp compared to the BDUTs mc_timer. Verify that the mc_timer<br>in the BDUT is updated accordingly.|
|**Expectation**|BDUT's mc_timer is updated accordingly.|
|**Setup**|<br> <br>Execute GlPro_SetupMulticast().|


-----

|Test procedure| Execute GlPro SetLocalMcTimer(time = GlPro GetLocalMc-<br>_ _<br>Timer() + TimeLeapUpdateTest) (do not wait, just increase<br>mc timer)<br>_<br> Execute GlPro SendTimerNotify(timestamp = GlPro GetLocal-<br>_ _<br>McTimer())<br> Execute (receivedTime, localMcTime) = GlPro QueryMcTimer()<br>_<br> Verify that the newly received timestamp is in sync with the local<br>mc timer of the test tool: Verify that receivedTime is in 'localMc-<br>_<br>Time - TimeDeltaReceivedMcTimestamps .. localMcTime'.<br>(Explanation: Transferring the time from the test tool to the BDUT<br>using the TimerNotify takes one network latency, and querying<br>the mc timer takes another one, plus some processing time.)<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table, Event E01), 2.2.2.3.2.6 (Actions, A1).<br>Checked state machine transitions: Event E01 State SCHED_-<br>PERIODIC.|
|**Duration**|3 s + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.8 Timer Synchronization: Timer increases when power-cycled

**Test ID** 70108

**Description** Devices generally must not re-use timer values, even on unexpected
power losses. Check that the timer value in the BDUT monotonically
increases when being power cycled. This test checks the implementation
of persisting the timer value in non-volatile memory.

Query the current mc_timer of the BDUT, then power-cycle the BDUT,
then query the current mc_timer again. The mc_timer must increase
monotonically.

**Expectation** When the BDUT is power-cycled, its mc_timer increases such that the
BDUT alone does not repeat timestamps. (There is no requirement that
the mc_timer increases enough to be in sync with other devices which
have not been power-cycled.)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 44 f 376

|Test ID|70108|
|---|---|
|**Description**|Devices generally must not re-use timer values, even on unexpected<br>power losses. Check that the timer value in the BDUT monotonically<br>increases when being power cycled. This test checks the implementation<br>of persisting the timer value in non-volatile memory.<br> Query the current mc_timer of the BDUT, then power-cycle the BDUT,<br>then query the current mc_timer again. The mc_timer must increase<br>monotonically.|
|**Expectation**|When the BDUT is power-cycled, its mc_timer increases such that the<br>BDUT alone does not repeat timestamps. (There is no requirement that<br>the mc_timer increases enough to be in sync with other devices which<br>have not been power-cycled.)|


-----

|Setup| Execute GlPro SetupMulticast().<br>_|
|---|---|
|**Test**<br>**procedure**| <br>Execute (receivedTime_A, localMcTime_A) = GlPro_QueryMc-<br>Timer()<br> <br>newTime = receivedTime_A + TimeLeapGreaterThanPersistence-<br>Interval.<br> <br>Execute GlPro_SetLocalMcTimer(time = newTime).<br> <br>Execute GlPro_SendTimerNotify(timestamp = newTime)<br> <br>Wait for TimeoutTimerNotifyProcessed.<br>`o` Expectation: The BDUT must now have persisted our sent<br>timer value newTime. It is not sufficient to persist it at the<br>next regular point within the next hour.<br> <br>Execute receivedTimerNotifyFrame = GlPro_PowerCycleBdut()<br> <br>If receivedTimerNotifyFrame != none:<br>`o` receivedTime_B = receivedTimerNotifyFrame.timestamp.<br>`o` localMcTime_B = GlPro_GetLocalMcTimer().<br> <br>else:<br>`o` Execute (receivedTime_B, localMcTime_B) = GlPro_-<br>ReceiveTimerNotify(timeout = TimeoutInitialTimerNotify)<br> <br>Verify that mc_timer in BDUT was increased enough: Verify that<br>receivedTime_B >= newTime + TimeoutTimerNotifyProcessed.<br>`o` Explanation: It is sufficient if the BDUT does not re-use<br>timestamps after a power-cycle. The time the BDUT lost<br>during power-down and the random initial delay until the first<br>TimerNotify is sent do not matter. The BDUT may loose this<br>time, this is ok.<br> <br>Verify that mc_timer in BDUT was not increased too much (to<br>avoid mc_timer wrap around attacks): Verify that receivedTime_B<br>< localMcTime_B + MaxAllowedWorstCaseTimeAddedOnPower-<br>Cycle.<br>`o` Explanation: The BDUT must not be too generous in adding<br>worst case times to the persisted timer to avoid mc_timer<br>wrap around attacks. We could in theory check that<br>receivedTime_B < newTime + MaxAllowedWorstCaseTime-<br>AddedOnPowerCycle + BootTime + InitialRandomDelay-<br>Time + NetworkLatencies. But we indirectly know BootTime<br>+ InitialRandomDelayTime + NetworkLatencies by<br>observing localMcTime_B which is more robust.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 45 f 376


-----

|Specification<br>reference|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.4.2 (Persisting the<br>multicast timer)|
|---|---|
|**Duration**|12 s + 2 * ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.9 Timer Synchronization: Clock accuracy and TimerNotify challenge

**Test ID** 70109

**Description** This test checks the following aspects:

            - The mc_timer clock in the BDUT is accurate when compared to an
absolute real-time clock.

            - Periodic TimerNotify frames carry the serial number of the sending
BDUT (TimerNotify challenge).

            - Periodic TimerNotify frames carry a random MessageTag (TimerNotify challenge).

Observe the periodic TimerNotify frames coming from the BDUT. The
timestamps should not deviate more than 100 ppm relative to a real-time
clock plus a constant jitter due to network latencies. This test does only a
coarse check on the clock accuracy to keep the test duration within
reasonable limits. It makes sure it is within 2000 ppm (for a 60 s test and
NetworkLatency = 50 ms).

**Expectation** The accuracy of the mc_timer clock in the BDUT is within 2000 ppm.
Periodic TimerNotify frames carry the serial number of the sending BDUT
and a random MessageTag.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 46 f 376

|Test ID|70109|
|---|---|
|**Description**|This test checks the following aspects:<br> <br>The mc_timer clock in the BDUT is accurate when compared to an<br>absolute real-time clock.<br> <br>Periodic TimerNotify frames carry the serial number of the sending<br>BDUT (TimerNotify challenge).<br> <br>Periodic TimerNotify frames carry a random MessageTag (Timer-<br>Notify challenge).<br>Observe the periodic TimerNotify frames coming from the BDUT. The<br>timestamps should not deviate more than 100 ppm relative to a real-time<br>clock plus a constant jitter due to network latencies. This test does only a<br>coarse check on the clock accuracy to keep the test duration within<br>reasonable limits. It makes sure it is within 2000 ppm (for a 60 s test and<br>NetworkLatency = 50 ms).|
|**Expectation**|The accuracy of the mc_timer clock in the BDUT is within 2000 ppm.<br>Periodic TimerNotify frames carry the serial number of the sending BDUT<br>and a random MessageTag.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test<br>procedure| Magic constants:<br> Set minTimerNotifyFramePairs = 3. (Minimum number of received<br>TimerNotify pairs, for MessageTag randomness test. We wait for<br>one more TimerNotify frame as we do not count the first one.)<br> Set changedBitsThreshold = 3. (Minimum average number of<br>changed bits in consecutive MessageTags. For minTimerNotify-<br>FramePairs = 1000 we could specify 7.8, empirically. Must be 2 < x<br>< 8 to be useful, see below.)<br> Set startTime = GlPro GetLocalMcTimer()<br>_<br> Set numMessageTags = 0.<br> Set sumChangedBitsInMessageTag = 0.<br> Set lastMessageTag = -1.<br> While (GlPro GetLocalMcTimer() - startTime <= DurationOfClock-<br>_<br>AccuracyTest) OR (numMessageTags < minTimerNotifyFrame-<br>Pairs): (Explanation: Run at least 1 minute but receive at least 4<br>periodic TimerNotify frames.)<br>o Execute (receivedTime, localMcTime) = GlPro Receive-<br>_<br>TimerNotify(timeout = TimeoutPeriodicTimerNotify)<br>o elapsedTime = localMcTime - startTime.<br>o Verify that GlPro Abs(receivedTime - localMcTime) < 2 *<br>_<br>NetworkLatency + elapsedTime * ClockAccuracyMax-<br>AllowedDeviationInPpm / 1000000.<br> Explanation: 2* NetworkLatency because our<br>startTime also jitters with the network latency.<br>o Let thisMessageTag be the MessageTag of the received<br>TimerNotify frame.<br>o If lastMessageTag >= 0:<br> numMessageTags += 1.<br> sumChangedBitsInMessageTag += countSet-<br>Bits(lastMessageTag XOR thisMessageTag)<br>(accumulate Hamming Distance)<br>o Set lastMessageTag = thisMessageTag.<br>o If serial number in last received TimerNotify frame is !=<br>SerialNumber:<br> Abort test and return TestFailed.<br> Explanation: Periodic TimerNotify frames must carry<br>the serial number of the BDUT.<br> Set avgChangedBitsInMessageTag = sumChangedBitsInMessage-<br>Tag / numMessageTags.<br>o Explanation: avgChangedBitsInMessageTag is now the<br>average number of changed bits between consecutive pairs<br>of MessageTags (== average Hamming Distance between<br>consecutive pairs of MessagesTags). We use this as a<br>heuristic measure for the randomness of the MessageTag.<br> If avgChangedBitsInMessageTag < changedBitsThreshold:|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 47 f 376


-----

|Col1|o Abort test and return TestFailed. Reason: MessageTag<br>does not look random enough. Print avgChangedBitsIn-<br>MessageTag value.<br>o Note: This test may fail sporadically. However, the threshold<br>3 is reasonably conservative so that it should never fail<br>spuriously in practice:<br> avgChangedBitsInMessageTag will be around 8 for<br>truly random or pseudo random number sequences,<br>but also for alternating constants which differ in 8<br>bits.<br> avgChangedBitsInMessageTag will be just below 2<br>for increasing numbers.<br> avgChangedBitsInMessageTag will be 0 for a<br>constant.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.2.3 (System clock<br>accuracy)<br>Checked state machine transitions: Event E10 State SCHED_PERIODIC.|
|**Duration**|<br>DurationOfClockAccuracyTest + 1 s + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.10 Timer Synchronization: Check initial TimerNotify timing

**Test ID** 70110

**Description** Check the timing of the initial TimerNotify after it was power-cycled.

**Expectation** The initial TimerNotify is sent by the BDUT within the specified interval.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 48 f 376

|Test ID|70110|
|---|---|
|**Description**|Check the timing of the initial TimerNotify after it was power-cycled.|
|**Expectation**|The initial TimerNotify is sent by the BDUT within the specified interval.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test<br>procedure| Execute receivedTimerNotifyFrame = GlPro PowerCycleBdut()<br>_<br> if receivedTimerNotifyFrame != none:<br>o Return TestPassed. (Explanation: The BDUT sent the initial<br>TimerNotify before we received the DescriptionResponse.<br>This is valid and can always occur.)<br> else:<br>o Execute GlPro SetLocalMcTimer(time = 0).<br>_<br>o Execute (receivedTime, localMcTime) = GlPro Receive-<br>_<br>TimerNotify(timeout = TimeoutInitialTimerNotify)<br> Verify localMcTime is in [0..MaxDelayInitialNotify+Network-<br>Latency].<br>o Explanation: The minimum boundary is 0 because we are<br>sure that the BDUT has already been up when GlPro -<br>_<br>PowerCycleBdut() returned. The maximum boundary is<br>MaxDelayInitialNotify+NetworkLatency because in the<br>longest delaying case the BDUT starts the initial timer-sync<br>at the same time when we receive the DescriptionResponse<br>in GlPro PowerCycleBdut(). The the BDUT may randomly<br>_<br>choose to delay the full MaxDelayInitialNotify and then the<br>TimerNotify needs some time before it arrives at the test<br>tool (NetworkLatency).|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.1.1 (Timer sync<br>service / General), 2.2.2.3.2.2 (Parameters)|
|**Duration**|TimeoutInitialTimerNotify + 1 s + 2 * ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.11 Timer Synchronization: Check periodic TimerNotify timing (time- keeper)

**Test ID** 70111

**Description** Check the timing of the periodic TimerNotify. This test assumes that the
BDUT is the timekeeper, which is always the case because it is the only
competing device in the system.

**Expectation** The timing of periodic TimerNotify frames (their time distance) should be
in the specified intervals.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 49 f 376

|Test ID|70111|
|---|---|
|**Description**|Check the timing of the periodic TimerNotify. This test assumes that the<br>BDUT is the timekeeper, which is always the case because it is the only<br>competing device in the system.|
|**Expectation**|The timing of periodic TimerNotify frames (their time distance) should be<br>in the specified intervals.|


-----

|Setup| Execute GlPro SetupMulticast().<br>_|
|---|---|
|**Test procedure**| <br>startTime = GlPro_GetCurrentTime()<br> <br>While GlPro_GetCurrentTime() - startTime <= DurationOf-<br>PeriodicTimerNotifyTest:<br>`o` Execute GlPro_SetLocalMcTimer(time = 0).<br>`o` Execute (receivedTime, localMcTime) = GlPro_Receive-<br>TimerNotify(timeout = TimeoutPeriodicTimerNotify).<br>`o` Verify that localMcTime is in [MinDelayTimeKeeper-<br>PeriodicNotify-NetworkLatency..MaxDelayTimeKeeper-<br>PeriodicNotify+NetworkLatency].|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2<br>(Parameters)<br>Checked state machine transitions: Event E10 State SCHED_-<br>PERIODIC.|
|**Duration**|DurationOfPeriodicTimerNotifyTest + 1 s + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.12 Timer Synchronization: Initial TimerNotify can be suppressed

**Test ID** 70112

**Description** Sending a TimerNotify or SecureWrapper frame with a high enough
timestamp should suppress the initial TimerNotify from the BDUT.The
main complication of this test is that we first need to find out the current
timer value of the BDUT (in order to later senda a higher one), and then
reset the BDUT to be in the power-up case, and then we of course do not
know the current timer value of the BDUT because this depends on the
worst case time added to the persisted timer value. We add a value which
is higher than the highest allowed worst case time to be on the safe side.

**Expectation** The initial TimerNotify frame can be suppressed.

**Setup** (non, done in test procedure)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 50 f 376

|Test ID|70112|
|---|---|
|**Description**|Sending a TimerNotify or SecureWrapper frame with a high enough<br>timestamp should suppress the initial TimerNotify from the BDUT.The<br>main complication of this test is that we first need to find out the current<br>timer value of the BDUT (in order to later senda a higher one), and then<br>reset the BDUT to be in the power-up case, and then we of course do not<br>know the current timer value of the BDUT because this depends on the<br>worst case time added to the persisted timer value. We add a value which<br>is higher than the highest allowed worst case time to be on the safe side.|
|**Expectation**|The initial TimerNotify frame can be suppressed.|
|**Setup**|(non, done in test procedure)|


-----

|Test<br>procedure| For i in 1..2: (Once for TimerNotify and once for SecureWrapper)<br>o Label retry:<br>o Execute GlPro SetupMulticast().<br>_<br>o GlPro SetLocalMcTimer(time = GlProGetLocalTimer() +<br>_<br>TimeLeapGreaterThanPersistenceInterval) (do not wait, just<br>increase mc timer)<br>_<br>o Execute GlPro PowerCycleBdut()<br>_<br>o If i== 1: Execute SendTimerNotify(timestamp = GlPro Get-<br>_<br>LocalMcTimer())<br>else: Execute GlPro SendMcSecureWrapper(timestamp =<br>_<br>GlPro GetLocalMcTimer())<br>_<br> Expectation: This should suppress the initial Timer-<br>Notify of the BDUT (in both cases).<br>o Wait for a TimerNotify. Timeout: NetworkLatency. If a Timer-<br>Notify was received, goto label retry. If not TimerNotify was<br>received: Continue with test.<br> Explanation: It may happen that the BDUT sends out<br>its initial TimerNotify before it has received and<br>processed the TimerNotify/SecureWrapper from the<br>test tool. This behavior is OK, but we could not (yet)<br>validate the test condition and thus have to re-do the<br>test. It can be expected that this loop usually<br>terminates after the first iteration and only rarely<br>needs a second iteration.<br>o Wait for a TimerNotify. Timeout: MinDelayTimeKeeper-<br>PeriodicNotify-NetworkLatency. If a TimerNotify was<br>received: Abort test and return TestFailed.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.1.1 (Timer sync<br>service / General), 2.2.2.3.2.2 (Parameters), 2.2.2.3.2.7 (Transition table).<br> Checked state machine transitions: Event E01 State SCHED_-<br>PERIODIC.|
|**Duration**|2 * MinDelayTimeKeeperPeriodicNotify + 2 * ConfirmedRestart|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 51 f 376


-----

##### 2.1.13 Timer Synchronization: Periodic TimerNotify is suppressed by E01 events

**Test ID** 70113

**Description** Sending TimerNotify traffic which runs ahead should suppress the
periodic TimerNotify frames of the BDUT.

**Expectation** No TimerNotify is received from the BDUT because it is suppressed.

**Setup** (in test procedure)

**Test procedure** - Execute GlPro_TestPeriodicTimerNotify(sendTimerNotify = 1,
mcTimeOffset = 0, mcTimeShift = SyncLatencyTolerance,
expectTimerNotify = 0)
`o` Explanation: mcTimeShift = SyncLatencyTolerance
makes the test tool run always ahead of the BDUT. We do
this to force E01 events for this test.

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2
**reference** (Parameters), 2.2.2.3.2.7 (Transition table).

Checked state machine transitions: Event E01 State SCHED_PERIODIC.

**Duration** DurationOfPeriodicTimerNotifyTest + ConfirmedRestart

**Mask version**

**Open points**

##### 2.1.14 Timer Synchronization: Periodic TimerNotify is suppressed by E02 events

**Test ID** 70114

**Description** Sending TimerNotify traffic which runs behind but within the SyncLatencyTolerance should suppress the periodic TimerNotify frames of
the BDUT.

**Expectation** No TimerNotify is received from the BDUT because it is suppressed.

**Setup** (in test procedure)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 52 f 376

|Test ID|70113|
|---|---|
|**Description**|Sending TimerNotify traffic which runs ahead should suppress the<br>periodic TimerNotify frames of the BDUT.|
|**Expectation**|No TimerNotify is received from the BDUT because it is suppressed.|
|**Setup**|(in test procedure)|
|**Test procedure**| <br>Execute GlPro_TestPeriodicTimerNotify(sendTimerNotify = 1,<br>mcTimeOffset = 0, mcTimeShift = SyncLatencyTolerance,<br>expectTimerNotify = 0)<br>`o` Explanation: mcTimeShift = SyncLatencyTolerance<br>makes the test tool run always ahead of the BDUT. We do<br>this to force E01 events for this test.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2<br>(Parameters), 2.2.2.3.2.7 (Transition table).<br> Checked state machine transitions: Event E01 State SCHED_-<br>PERIODIC.|
|**Duration**|DurationOfPeriodicTimerNotifyTest + ConfirmedRestart|
|**Mask version**||
|**Open points**||

|Test ID|70114|
|---|---|
|**Description**|Sending TimerNotify traffic which runs behind but within the Sync-<br>LatencyTolerance should suppress the periodic TimerNotify frames of<br>the BDUT.|
|**Expectation**|No TimerNotify is received from the BDUT because it is suppressed.|
|**Setup**|(in test procedure)|


-----

|Test procedure| Execute GlPro TestPeriodicTimerNotify(sendTimerNotify = 1,<br>_<br>mcTimeOffset = -SyncLatencyTolerance/2, mcTimeShift = 0,<br>expectTimerNotify = 0)<br>o Explanation: mcTimeOffset = -SyncLatencyTolerance/2<br>makes the test tool always run behind the BDUT. We do<br>this to force E02 events for this test.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2<br>(Parameters), 2.2.2.3.2.7 (Transition table).<br> Checked state machine transitions: Event E02 State SCHED_-<br>PERIODIC.|
|**Duration**|DurationOfPeriodicTimerNotifyTest + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.15 Timer Synchronization: Periodic TimerNotify is not suppressed by E03 events

**Test ID** 70115

**Description** Sending TimerNotify traffic which runs behind more than syncLatencyTolerance but within the latencyTolerance should not suppress the
periodic TimerNotify frames of the BDUT.

**Expectation** Periodic TimerNotify frames are received from the BDUT because they
are not suppressed.

**Setup** (in test procedure)

**Test procedure** - Set lag = SyncLatencyTolerance + (LatencyTolerance - SyncLatencyTolerance) / 2

             - Execute GlPro_TestPeriodicTimerNotify(sendTimerNotify = 1,
mcTimeOffset = -lag, mcTimeShift = 0, expectTimerNotify = 1)
`o` Explanation: mcTimeOffset = -lag makes the test tool
always run behind the BDUT. We do this to force E03
events for this test.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 53 f 376

|Test ID|70115|
|---|---|
|**Description**|Sending TimerNotify traffic which runs behind more than syncLatency-<br>Tolerance but within the latencyTolerance should not suppress the<br>periodic TimerNotify frames of the BDUT.|
|**Expectation**|Periodic TimerNotify frames are received from the BDUT because they<br>are not suppressed.|
|**Setup**|(in test procedure)|
|**Test procedure**| <br>Set lag = SyncLatencyTolerance + (LatencyTolerance - Sync-<br>LatencyTolerance) / 2<br> <br>Execute GlPro_TestPeriodicTimerNotify(sendTimerNotify = 1,<br>mcTimeOffset = -lag, mcTimeShift = 0, expectTimerNotify = 1)<br>`o` Explanation: mcTimeOffset = -lag makes the test tool<br>always run behind the BDUT. We do this to force E03<br>events for this test.|


-----

|Cleanup| Execute GlPro CleanupMulticast().<br>_|
|---|---|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2<br>(Parameters), 2.2.2.3.2.7 (Transition table).<br>Checked state machine transitions: Event E03 State SCHED_-<br>PERIODIC.|
|**Duration**|DurationOfPeriodicTimerNotifyTest + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.16 Timer Synchronization: Periodic TimerNotify is suppressed by E05 events

**Test ID** 70116

**Description** Sending SecureWrapper traffic which runs ahead should suppress the
periodic TimerNotify frames of the BDUT.

**Expectation** No TimerNotify is received from the BDUT because it is suppressed.

**Setup** (in test procedure)

**Test procedure** - Execute GlPro_TestPeriodicTimerNotify(sendTimerNotify = 0,
mcTimeOffset = 0, mcTimeShift = SyncLatencyTolerance,
expectTimerNotify = 0)
`o` Explanation: mcTimeShift = SyncLatencyTolerance
makes the test tool run always ahead of the BDUT. We do
this to force E05 events for this test.

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2
**reference** (Parameters), 2.2.2.3.2.7 (Transition table).

Checked state machine transitions: Event E05 State SCHED_PERIODIC.

**Duration** DurationOfPeriodicTimerNotifyTest + ConfirmedRestart

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 54 f 376

|Test ID|70116|
|---|---|
|**Description**|Sending SecureWrapper traffic which runs ahead should suppress the<br>periodic TimerNotify frames of the BDUT.|
|**Expectation**|No TimerNotify is received from the BDUT because it is suppressed.|
|**Setup**|(in test procedure)|
|**Test procedure**| <br>Execute GlPro_TestPeriodicTimerNotify(sendTimerNotify = 0,<br>mcTimeOffset = 0, mcTimeShift = SyncLatencyTolerance,<br>expectTimerNotify = 0)<br>`o` Explanation: mcTimeShift = SyncLatencyTolerance<br>makes the test tool run always ahead of the BDUT. We do<br>this to force E05 events for this test.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2<br>(Parameters), 2.2.2.3.2.7 (Transition table).<br> Checked state machine transitions: Event E05 State SCHED_-<br>PERIODIC.|
|**Duration**|DurationOfPeriodicTimerNotifyTest + ConfirmedRestart|
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.1.17 Timer Synchronization: Periodic TimerNotify is suppressed by E06 events

**Test ID** 70117

**Description** Sending SecureWrapper traffic which runs behind but within the syncLatencyTolerance should suppress the periodic TimerNotify frames of
the BDUT.

**Expectation** No TimerNotify is received from the BDUT because it is suppressed.

**Setup** (in test procedure)

**Test procedure** - Execute GlPro_TestPeriodicTimerNotify(sendTimerNotify = 0,
mcTimeOffset = -SyncLatencyTolerance/2, mcTimeShift = 0,
expectTimerNotify = 0)
`o` Explanation: mcTimeOffset = -SyncLatencyTolerance/2
makes the test tool always run behind the BDUT. We do
this to force E06 events for this test.

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2
**reference** (Parameters), 2.2.2.3.2.7 (Transition table).

Checked state machine transitions: Event E06 State SCHED_PERIODIC.

**Duration** DurationOfPeriodicTimerNotifyTest + ConfirmedRestart

**Mask version**

**Open points**

##### 2.1.18 Timer Synchronization: Periodic TimerNotify is not suppressed by E07 events

**Test ID** 70118

©C i h 1998 2018 KNX A i i V i 1 1 AS P 55 f 376

|Test ID|70117|
|---|---|
|**Description**|Sending SecureWrapper traffic which runs behind but within the sync-<br>LatencyTolerance should suppress the periodic TimerNotify frames of<br>the BDUT.|
|**Expectation**|No TimerNotify is received from the BDUT because it is suppressed.|
|**Setup**|(in test procedure)|
|**Test procedure**| <br>Execute GlPro_TestPeriodicTimerNotify(sendTimerNotify = 0,<br>mcTimeOffset = -SyncLatencyTolerance/2, mcTimeShift = 0,<br>expectTimerNotify = 0)<br>`o` Explanation: mcTimeOffset = -SyncLatencyTolerance/2<br>makes the test tool always run behind the BDUT. We do<br>this to force E06 events for this test.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2<br>(Parameters), 2.2.2.3.2.7 (Transition table).<br>Checked state machine transitions: Event E06 State SCHED_-<br>PERIODIC.|
|**Duration**|DurationOfPeriodicTimerNotifyTest + ConfirmedRestart|
|**Mask version**||
|**Open points**||

|Test ID|70118|
|---|---|


-----

|Description|Sending SecureWrapper traffic which runs behind more than sync-<br>LatencyTolerance but within the latencyTolerance should not suppress<br>the periodic TimerNotify frames of the BDUT.|
|---|---|
|**Expectation**|Periodic TimerNotify frames are received from the BDUT because they<br>are not suppressed.|
|**Setup**|(in test procedure)|
|**Test procedure**| <br>lag = SyncLatencyTolerance + (LatencyTolerance - SyncLatency-<br>Tolerance) / 2<br> <br>Execute GlPro_TestPeriodicTimerNotify(sendTimerNotify = 0,<br>mcTimeOffset = -lag, mcTimeShift = 0, expectTimerNotify = 1)<br>`o` Explanation: mcTimeOffset = -lag makes the test tool<br>always run behind the BDUT. We do this to force E07<br>events for this test.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.2<br>(Parameters), 2.2.2.3.2.7 (Transition table).<br>Checked state machine transitions: Event E07 State SCHED_-<br>PERIODIC.|
|**Duration**|DurationOfPeriodicTimerNotifyTest + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.19 Timer Notify Frame Format – Send

**Test ID** 70119

**Description** Check the format of TimerNotify frames sent by the BDUT.

**Expectation** The frame format of one received TimerNotify is according to the
specification.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 56 f 376

|Test ID|70119|
|---|---|
|**Description**|Check the format of TimerNotify frames sent by the BDUT.|
|**Expectation**|The frame format of one received TimerNotify is according to the<br>specification.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test procedure| Execute GlPro QueryMcTimer()<br>_<br> Note: The actual testing of the frame format is done implicitly<br>by the multicast meta test 2.1.1.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.4.2 (TIMER_-<br>NOTIFY / Binary format).<br>Checked state machine transitions: Event E04 State SCHED_-<br>PERIODIC.|
|**Duration**|1 s + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.20 Timer Notify Frame Format – Receive

**Test ID** 70120

**Description** Send broken TimerNotify frames to the BDUT which the BDUT should
ignored.

**Expectation** The BDUT ignores all broken TimerNotify frames.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 57 f 376

|Test ID|70120|
|---|---|
|**Description**|Send broken TimerNotify frames to the BDUT which the BDUT should<br>ignored.|
|**Expectation**|The BDUT ignores all broken TimerNotify frames.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test<br>procedure| For each frame F of the following frames:<br>o TimerNotify frame with total length information field larger<br>or smaller than 36 bytes;<br>o TimerNotify frame with actual length larger or smaller than<br>36 bytes;<br>o TimerNotify frame a KNX Serial number not corresponding<br>to the included MAC;<br>o TimerNotify frame a Message tag not corresponding to the<br>included MAC;<br>o TimerNotify frame a MAC calculated with another backbone<br>key;<br> Do the following:<br>o Set futureTime = GlPro GetLocalMcTimer() + TimeLeap-<br>_<br>GreaterThanPersistenceInterval.<br>o Send via the Testtool frame F with a timestamp futureTime.<br>o (receivedTimestamp, localMcTime) = Execute GlPro -<br>_<br>QueryMcTimer()<br>o If receivedTimestamp >= futureTime:<br> AbortTest and return TestFailed.<br> Note: This test implicitly assumes that the time needed to send the<br>broken TimerNotify frames plus MaxDelayTimeFollowerPeriodic-<br>Notify + NetworkLatency is less than TimeLeapGreaterThan-<br>PersistenceInterval which is usually the case.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.4.2 (TIMER_-<br>NOTIFY / Binary format)<br>Checked state machine transitions: Event E04 State SCHED_-<br>PERIODIC.|
|**Duration**|6 * TimeoutTimerNotifyResponse + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.21 Outdated SecureWrappers are dropped

**Test ID** 70121

**Description** Check that outdated SecureWrapper frames are dropped.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 58 f 376

|Test ID|70121|
|---|---|
|**Description**|Check that outdated SecureWrapper frames are dropped.|


-----

|Expectation|Outdated SecureWrapper frames are dropped.|
|---|---|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test procedure**| <br>Decrease mc_timer by LatencyTolerance.<br> <br>GlPro_VerifySecureWrapperIsIgnored().|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7<br>(Transition Table)<br>Checked state machine transitions: Event E08 State SCHED_-<br>PERIODIC.|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutAppLayerResponse +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.22 Timer Synchronization: Sending SecureWrapper suppresses periodic TimerNotify

**Test ID** 70122

**Description** Check that the BDUTs periodic notify_timer is reset when the BDUT
sends a TimerNotify.Sketch: After having received a TimerNotify we wait
until short before the next TimerNotify would have been sent by the
BDUT. We send a SecureWrapper which qualifies for E07 which is
accepted (so the BDUT will respond with a SecureWrapper), but which
does not reset the BDUTs periodic notify_timer. The BDUT will then
respond and should reset its notify_timer. If it does not do this, it will send
the next TimerNotify too early and the test will fail.

**Expectation** The periodic notify_timer of the BDUT is reset when the BDUT sends a
SecureWrapper.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 59 f 376

|Test ID|70122|
|---|---|
|**Description**|Check that the BDUTs periodic notify_timer is reset when the BDUT<br>sends a TimerNotify.Sketch: After having received a TimerNotify we wait<br>until short before the next TimerNotify would have been sent by the<br>BDUT. We send a SecureWrapper which qualifies for E07 which is<br>accepted (so the BDUT will respond with a SecureWrapper), but which<br>does not reset the BDUTs periodic notify_timer. The BDUT will then<br>respond and should reset its notify_timer. If it does not do this, it will send<br>the next TimerNotify too early and the test will fail.|
|**Expectation**|The periodic notify_timer of the BDUT is reset when the BDUT sends a<br>SecureWrapper.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test<br>procedure| Wait for MinDelayTimeKeeperPeriodicNotify - 2 * NetworkLatency.<br> Decrease mc timer by SyncLatencyTolerance.<br>_<br> Execute GlPro VerifyMulticastIsFunctional().<br>_<br> Explanation: When we get here, we just received a response from<br>the BDUT. We assume the periodic notify timer was just reset.<br>_<br> Set t1 = GlPro GetLocalMcTimer().<br>_<br> Execute (receivedTimestamp, localMcTime) = GlPro Receive-<br>_<br>TimerNotify(timeout = MaxDelayTimeFollowerPeriodicNotify).<br> If localMcTime - t1 + NetworkLatency < MinDelayTimeKeeper-<br>PeriodicNotify:<br>o Abort test and return test failed.<br>o Explanation: This means the BDUT did not reset its periodic<br>notify timer on sending a SecureWrapper.<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br> Checked state machine transitions: Event E09 State SCHED_-<br>PERIODIC.|
|**Duration**|TimeoutTimerNotifyResponse + 2 * MinDelayTimeKeeperPeriodicNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.23 Timer Synchronization: Changing the backbone key resets mc_timer

**Test ID** 70123

**Description** Verify that changing the backbone key resets mc_timer to 0.

**Expectation** mc_timer is reset to 0.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 60 f 376

|Test ID|70123|
|---|---|
|**Description**|Verify that changing the backbone key resets mc_timer to 0.|
|**Expectation**|<br>mc_timer is reset to 0.|
|**Setup**|<br>-|


-----

|Test<br>procedure| For state in SCHED PERIODIC, SCHED UPDATE:<br>_ _<br>o Execute GlPro SetupMulticast().<br>_<br>o Explanation: Increase BDUTs mc timer and verify that it<br>_<br>was increased:<br> GlPro SetLocalMcTimer(time = GlPro GetLocalMc-<br>_ _<br>Timer() + TimeLeapGreaterThanPersistenceInterval).<br> Execute GlPro SendTimerNotify(timestamp = Gl-<br>_<br>Pro GetLocalMcTimer()).<br>_<br> (receivedTimestamp, localMcTime) = GlPro Query-<br>_<br>McTimer().<br> If receivedTimestamp + NetworkLatency < localMc-<br>Time:<br> Abort test and return TestFailed.<br> Explanation: The BDUT did not accept our<br>higher timestamp.<br>o Explanation: Change the backbone key and check the<br>BDUTs mc timer:<br>_<br> Execute GlPro MulticastSetState(state = state,<br>_<br>timekeeper = 0).<br> Execute PropSetup SetBackboneKey(Backbone-<br>_<br>Key2).<br> (receivedTimestamp2, localMcTime2) = GlPro -<br>_<br>QueryMcTimer().<br> If receivedTimestamp2 >= receivedTimestamp:<br> Abort test and return TestFailed.<br> Explanation: The BDUT did not reset its<br>mc timer to 0. We cannot easily check for 0 or<br>_<br>for 'near 0' since we have no idea how long the<br>initialization procedure in the BDUT takes. But<br>it must be smaller than any previous<br>'sufficiently high' timestamp we observed from<br>the BDUT. This is a very conservative test.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br> Checked state machine transitions: Event E11 State SCHED_PERIODIC<br>and SCHED_UPDATE.|
|**Duration**|<br>6 * TimeoutTimerNotifyResponse + 2 * ConfirmedRestart|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 61 f 376


-----

##### 2.1.24 Timer Synchronization: Setting the backbone key to the same value does not reset mc_timer

**Test ID** 70124

**Description** Verify that setting the backbone key to the same value (it already has)
does not reset the mc_timer. (Resetting the mc_timer in this case would
open the door for replay attacks.)Note: Testing setting the backbone key
in state SCHED_UPDATE may or may not work. This test assumes that
writing the backbone key takes less than 50 ms and does not require a
restart. If this is not the case this test will still pass and just will not test
setting the backbone key in state SCHED_UPDATE. In this case this
scenario is not reachable in the BDUT and thus cannot be tested.

**Expectation** mc_timer is not reset.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 62 f 376

|Test ID|70124|
|---|---|
|**Description**|Verify that setting the backbone key to the same value (it already has)<br>does not reset the mc_timer. (Resetting the mc_timer in this case would<br>open the door for replay attacks.)Note: Testing setting the backbone key<br>in state SCHED_UPDATE may or may not work. This test assumes that<br>writing the backbone key takes less than 50 ms and does not require a<br>restart. If this is not the case this test will still pass and just will not test<br>setting the backbone key in state SCHED_UPDATE. In this case this<br>scenario is not reachable in the BDUT and thus cannot be tested.|
|**Expectation**|mc_timer is not reset.|
|**Setup**|<br> <br>Execute GlPro_SetupMulticast().|


-----

|Test<br>procedure| For state in SCHED PERIODIC, SCHED UPDATE:<br>_ _<br>o Explanation: Increase BDUTs mc timer and verify that it<br>_<br>was increased:<br> GlPro SetLocalMcTimer(time = GlPro GetLocalMc-<br>_ _<br>Timer() + TimeLeapGreaterThanPersistenceInterval).<br> Execute GlPro SendTimerNotify(timestamp = Gl-<br>_<br>Pro GetLocalMcTimer()).<br>_<br> (receivedTimestamp, localMcTime) = GlPro Query-<br>_<br>McTimer().<br> If receivedTimestamp + NetworkLatency < localMc-<br>Time:<br> Abort test and return TestFailed.<br> Explanation: The BDUT did not accept our<br>higher timestamp.<br>o Explanation: Set the backbone key to the same value and<br>check the BDUTs mc timer:<br>_<br> Execute GlPro MulticastSetState(state = state,<br>_<br>timekeeper = 0).<br> Execute PropSetup SetBackboneKey(Backbone-<br>_<br>Key).<br> (receivedTimestamp2, localMcTime2) = GlPro -<br>_<br>QueryMcTimer().<br> If receivedTimestamp2 < receivedTimestamp:<br> Abort test and return TestFailed.<br> Explanation: The BDUT did reset its mc timer<br>_<br>to 0 or did decrease its mc timer which must<br>_<br>never happen. The mc timer should increase<br>_<br>monotonically ignoring the backbone key write.<br>This is a very conservative test.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br> Checked state machine transitions: Event E12 State SCHED_PERIODIC<br>and SCHED_UPDATE.|
|**Duration**|<br>3 * TimeoutTimerNotifyResponse + ConfirmedRestart|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 63 f 376


-----

##### 2.1.25 Timer Synchronization: Sending SecureWrapper does not cancel SCHED_UPDATE state

**Test ID** 70125

**Description** Verify that when the BDUT sends a SecureWrapper while in state
SCHED_UPDATE, it does not leave SCHED_UPDATE.

**Expectation** BDUT does not leave state SCHED_UPDATE when it sends a SecureWrapper.

**Setup** - Execute GlPro_SetupMulticast().

**Test** - Execute GlPro_MulticastSetState(state = SCHED_UPDATE,
**procedure** timekeeper = 0).

             - Execute GlPro_VerifyMulticastIsFunctional().
`o` Explanation: This stimulates the BDUT to send a SecureWrapper.

             - Execute (receivedTimestamp, localMcTime) = GlPro_ReceiveTimerNotify(timeout = TimeoutTimerNotifyResponse).
`o` Explanation: If the sent SecureWrapper does not affect the
BDUT's state machine (as it ought to be) a TimerNotify will
be received within the timeout and the test will pass. If the
sent SecureWrapper will set the state back to SCHED_PERIODIC (which is wrong) the above statement will time
out and the test will fail.

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition
**reference** Table)

Checked state machine transitions: Event E09 State SCHED_UPDATE.

**Duration** 2 * TimeoutTimerNotifyResponse + ConfirmedRestart

**Mask version**

**Open points**

##### 2.1.26 Timer Synchronization: Update is suppressed by E01 events

**Test ID** 70126

©C i h 1998 2018 KNX A i i V i 1 1 AS P 64 f 376

|Test ID|70125|
|---|---|
|**Description**|Verify that when the BDUT sends a SecureWrapper while in state<br>SCHED_UPDATE, it does not leave SCHED_UPDATE.|
|**Expectation**|<br>BDUT does not leave state SCHED_UPDATE when it sends a Secure-<br>Wrapper.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test**<br>**procedure**| <br>Execute GlPro_MulticastSetState(state = SCHED_UPDATE,<br>timekeeper = 0).<br> <br>Execute GlPro_VerifyMulticastIsFunctional().<br>`o` Explanation: This stimulates the BDUT to send a Secure-<br>Wrapper.<br> <br>Execute (receivedTimestamp, localMcTime) = GlPro_Receive-<br>TimerNotify(timeout = TimeoutTimerNotifyResponse).<br>`o` Explanation: If the sent SecureWrapper does not affect the<br>BDUT's state machine (as it ought to be) a TimerNotify will<br>be received within the timeout and the test will pass. If the<br>sent SecureWrapper will set the state back to SCHED_-<br>PERIODIC (which is wrong) the above statement will time<br>out and the test will fail.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br> Checked state machine transitions: Event E09 State SCHED_UPDATE.|
|**Duration**|<br>2 * TimeoutTimerNotifyResponse + ConfirmedRestart|
|**Mask version**||
|**Open points**||

|Test ID|70126|
|---|---|


-----

**Test procedure** - Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 1, mcTimeShift = SyncLatencyTolerance, expectUpdateTimerNotify = 0)
`o` Explanation: mcTimeShift = SyncLatencyTolerance makes
the test tool run ahead of the BDUT which generates an
E01 event in the BDUT. We expect the BDUT to go back to
SCHED_PERIODIC and so not to send a TimerNotify
update.

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition
**reference** Table)

Checked state machine transitions: Event E01 in state SCHED_UPDATE.

**Duration** TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +
ConfirmedRestart

**Mask version**

**Open points**

##### 2.1.27 Timer Synchronization: Update is suppressed by E02 events

**Test ID** 70127

**Description** Verify that E02 events cancel a scheduled TimerNotify update.

**Expectation** E02 events make the BDUT go back into the SCHED_PERIODIC state
immediately.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 65 f 376

|Description|Verify that E01 events cancel a scheduled TimerNotify update.|
|---|---|
|**Expectation**|E01 events make the BDUT go back into the SCHED_PERIODIC state<br>immediately.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test procedure**| <br>Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 1, mc-<br>TimeShift = SyncLatencyTolerance, expectUpdateTimerNotify = 0)<br>`o` Explanation: mcTimeShift = SyncLatencyTolerance makes<br>the test tool run ahead of the BDUT which generates an<br>E01 event in the BDUT. We expect the BDUT to go back to<br>SCHED_PERIODIC and so not to send a TimerNotify<br>update.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br> Checked state machine transitions: Event E01 in state SCHED_-<br>UPDATE.|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||

|Test ID|70127|
|---|---|
|**Description**|Verify that E02 events cancel a scheduled TimerNotify update.|
|**Expectation**|E02 events make the BDUT go back into the SCHED_PERIODIC state<br>immediately.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test<br>procedure| Set lag = SyncLatencyTolerance / 2.<br> Execute GlPro TestUpdateTimerNotify(sendTimerNotify = 1, mc-<br>_<br>TimeShift = -lag, expectUpdateTimerNotify = 0)<br>o Explanation: mcTimeShift = -lag makes the test tool run<br>behind the BDUT within the SyncLatencyTolerance which<br>generates an E02 event in the BDUT. We expect the BDUT<br>to go back to SCHED PERIODIC and so not to send a<br>_<br>TimerNotify update.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br> Checked state machine transitions: Event E02 in state SCHED_-<br>UPDATE.|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.28 Timer Synchronization: Update is not affected by E03 events

**Test ID** 70128

**Description** Verify E03 events do not cancel a scheduled TimerNotify update.

**Expectation** The scheduled update is sent.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 66 f 376

|Test ID|70128|
|---|---|
|**Description**|Verify E03 events do not cancel a scheduled TimerNotify update.|
|**Expectation**|The scheduled update is sent.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test<br>procedure| Set lag = SyncLatencyTolerance + (LatencyTolerance - Sync-<br>LatencyTolerance) / 2.<br> Execute GlPro TestUpdateTimerNotify(sendTimerNotify = 1, mc-<br>_<br>TimeShift = -lag, expectUpdateTimerNotify = 1)<br>o Explanation: mcTimeShift = -lag makes the test tool run<br>behind the BDUT within the LatencyTolerance which<br>generates an E03 event in the BDUT. The BDUT is<br>expected to stay in SCHED UPDATE and send the<br>_<br>scheduled TimerNotify as originally scheduled.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br> Checked state machine transitions: Event E03 in state SCHED_-<br>UPDATE.|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.29 Timer Synchronization: Update is not affected by E04 events

**Test ID** 70129

**Description** Verify E04 events do not cancel a scheduled TimerNotify update.

**Expectation** The scheduled update is sent.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 67 f 376

|Test ID|70129|
|---|---|
|**Description**|Verify E04 events do not cancel a scheduled TimerNotify update.|
|**Expectation**|The scheduled update is sent.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test<br>procedure| Set lag = LatencyTolerance + NetworkLatency.<br> Execute GlPro TestUpdateTimerNotify(sendTimerNotify = 1, mc-<br>_<br>TimeShift = -lag, expectUpdateTimerNotify = 1)<br>o Explanation: mcTimeShift = -lag makes the test tool run<br>behind the BDUT beyond the LatencyTolerance which<br>generates an E04 event in the BDUT. The BDUT is<br>expected to stay in SCHED UPDATE and send the<br>_<br>scheduled TimerNotify as originally scheduled.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br>Checked state machine transitions: Event E04 in state SCHED_-<br>UPDATE.|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.30 Timer Synchronization: Update is not affected by E05 events

**Test ID** 70130

**Description** Verify E05 events do not cancel a scheduled TimerNotify update.

**Expectation** The scheduled update is sent.

**Setup** - Execute GlPro_SetupMulticast().

**Test** - Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 0, mc**procedure** TimeShift = SyncLatencyTolerance, expectUpdateTimerNotify = 1)
`o` Explanation: mcTimeShift = SyncLatencyTolerance makes
the test tool run ahead of the BDUT which generates an
E05 event in the BDUT. The BDUT is expected to stay in
SCHED_UPDATE and send the scheduled TimerNotify as
originally scheduled.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 68 f 376

|Test ID|70130|
|---|---|
|**Description**|Verify E05 events do not cancel a scheduled TimerNotify update.|
|**Expectation**|The scheduled update is sent.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test**<br>**procedure**| <br>Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 0, mc-<br>TimeShift = SyncLatencyTolerance, expectUpdateTimerNotify = 1)<br>`o` Explanation: mcTimeShift = SyncLatencyTolerance makes<br>the test tool run ahead of the BDUT which generates an<br>E05 event in the BDUT. The BDUT is expected to stay in<br>SCHED_UPDATE and send the scheduled TimerNotify as<br>originally scheduled.|


-----

|Cleanup| Execute GlPro CleanupMulticast().<br>_|
|---|---|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br>Checked state machine transitions: Event E05 in state SCHED_-<br>UPDATE.|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.31 Timer Synchronization: Update is not affected by E06 events

**Test ID** 70131

**Description** Verify E06 events do not cancel a scheduled TimerNotify update.

**Expectation** The scheduled update is sent.

**Setup** - Execute GlPro_SetupMulticast().

**Test** - Set lag = SyncLatencyTolerance / 2.
**procedure** - Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 0, mcTimeShift = -lag, expectUpdateTimerNotify = 1)
`o` Explanation: mcTimeShift = -lag makes the test tool run
behind the BDUT with in the SyncLatencyTolerance which
generates an E06 event in the BDUT. The BDUT is
expected to stay in SCHED_UPDATE and send the
scheduled TimerNotify as originally scheduled.

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition
**reference** Table)

Checked state machine transitions: Event E06 in state SCHED_UPDATE.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 69 f 376

|Test ID|70131|
|---|---|
|**Description**|Verify E06 events do not cancel a scheduled TimerNotify update.|
|**Expectation**|The scheduled update is sent.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test**<br>**procedure**| <br>Set lag = SyncLatencyTolerance / 2.<br> <br>Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 0, mc-<br>TimeShift = -lag, expectUpdateTimerNotify = 1)<br>`o` Explanation: mcTimeShift = -lag makes the test tool run<br>behind the BDUT with in the SyncLatencyTolerance which<br>generates an E06 event in the BDUT. The BDUT is<br>expected to stay in SCHED_UPDATE and send the<br>scheduled TimerNotify as originally scheduled.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br>Checked state machine transitions: Event E06 in state SCHED_-<br>UPDATE.|


-----

|Duration|TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|---|---|
|**Mask version**||
|**Open points**||


##### 2.1.32 Timer Synchronization: Update is not affected by E07 events

**Test ID** 70132

**Description** Verify E07 events do not cancel a scheduled TimerNotify update.

**Expectation** The scheduled update is sent.

**Setup** - Execute GlPro_SetupMulticast().

**Test** - Set lag = SyncLatencyTolerance + (LatencyTolerance - Sync**procedure** LatencyTolerance) / 2.

             - Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 0, mcTimeShift = -lag, expectUpdateTimerNotify = 1)
`o` Explanation: mcTimeShift = -lag makes the test tool run
behind the BDUT within the LatencyTolerance which
generates an E07 event in the BDUT. The BDUT is
expected to stay in SCHED_UPDATE and send the
scheduled TimerNotify as originally scheduled.

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition
**reference** Table)

Checked state machine transitions: Event E07 in state SCHED_UPDATE.

**Duration** TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +
ConfirmedRestart

**Mask version**

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 70 f 376

|Test ID|70132|
|---|---|
|**Description**|Verify E07 events do not cancel a scheduled TimerNotify update.|
|**Expectation**|The scheduled update is sent.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test**<br>**procedure**| <br>Set lag = SyncLatencyTolerance + (LatencyTolerance - Sync-<br>LatencyTolerance) / 2.<br> <br>Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 0, mc-<br>TimeShift = -lag, expectUpdateTimerNotify = 1)<br>`o` Explanation: mcTimeShift = -lag makes the test tool run<br>behind the BDUT within the LatencyTolerance which<br>generates an E07 event in the BDUT. The BDUT is<br>expected to stay in SCHED_UPDATE and send the<br>scheduled TimerNotify as originally scheduled.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br>Checked state machine transitions: Event E07 in state SCHED_-<br>UPDATE.|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


-----

##### 2.1.33 Timer Synchronization: Update is not affected by E08 events

**Test ID** 70133

**Description** Verify E08 events do not cancel a scheduled TimerNotify update.

**Expectation** The scheduled update is sent.

**Setup** - Execute GlPro_SetupMulticast().

**Test** - Set lag = LatencyTolerance + NetworkLatency.
**procedure** - Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 0, mcTimeShift = -lag, expectUpdateTimerNotify = 1)
`o` Explanation: mcTimeShift = -lag makes the test tool run
behind the BDUT beyond the LatencyTolerance which
generates an E08 event in the BDUT. The BDUT is
expected to stay in SCHED_UPDATE and send the
scheduled TimerNotify as originally scheduled.

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition
**reference** Table)
Checked state machine transitions: Event E08 in state SCHED_UPDATE.

**Duration** TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +
ConfirmedRestart

**Mask version**

**Open points**

##### 2.1.34 Timer Synchronization: Become time follower on E01 events (and periodic TimerNotify timing for time-follower)

**Test ID** 70134

**Description** Verify that the BDUT is a time follower after it received an E01 event.

**Expectation** BDUT sends periodic TimerNotify in the periodic+time-follower time
window.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 71 f 376

|Test ID|70133|
|---|---|
|**Description**|Verify E08 events do not cancel a scheduled TimerNotify update.|
|**Expectation**|The scheduled update is sent.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test**<br>**procedure**| <br>Set lag = LatencyTolerance + NetworkLatency.<br> <br>Execute GlPro_TestUpdateTimerNotify(sendTimerNotify = 0, mc-<br>TimeShift = -lag, expectUpdateTimerNotify = 1)<br>`o` Explanation: mcTimeShift = -lag makes the test tool run<br>behind the BDUT beyond the LatencyTolerance which<br>generates an E08 event in the BDUT. The BDUT is<br>expected to stay in SCHED_UPDATE and send the<br>scheduled TimerNotify as originally scheduled.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br>Checked state machine transitions: Event E08 in state SCHED_-<br>UPDATE.|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||

|Test ID|70134|
|---|---|
|**Description**|Verify that the BDUT is a time follower after it received an E01 event.|
|**Expectation**|BDUT sends periodic TimerNotify in the periodic+time-follower time<br>window.|


-----

|Setup| Execute GlPro SetupMulticast().<br>_|
|---|---|
|**Test procedure**| <br>Execute GlPro_TestBecomingTimeFollower(mcTimerShift =<br>SyncLatencyTolerance).|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7<br>(Transition Table)<br> Checked state machine transitions: Event E01 in state SCHED_-<br>PERIODIC and SCHED_UPDATE.|
|**Duration**|<br>2 * TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.35 Timer Synchronization: Become time follower on E02 events (and periodic TimerNotify timing for time-follower)

**Test ID** 70135

**Description** Verify that the BDUT is a time follower after it received an E02 event.

**Expectation** BDUT sends periodic TimerNotify in the periodic+time-follower time
window.

**Setup** - Execute GlPro_SetupMulticast().

**Test procedure** - Execute GlPro_TestBecomingTimeFollower(mcTimerShift = SyncLatencyTolerance/2).

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7
**reference** (Transition Table)#

Checked state machine transitions: Event E02 in state SCHED_PERIODIC and SCHED_UPDATE.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 72 f 376

|Test ID|70135|
|---|---|
|**Description**|Verify that the BDUT is a time follower after it received an E02 event.|
|**Expectation**|BDUT sends periodic TimerNotify in the periodic+time-follower time<br>window.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test procedure**| <br>Execute GlPro_TestBecomingTimeFollower(mcTimerShift = -<br>SyncLatencyTolerance/2).|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7<br>(Transition Table)#<br> Checked state machine transitions: Event E02 in state SCHED_-<br>PERIODIC and SCHED_UPDATE.|


-----

|Duration|2 * TimeoutTimerNotifyResponse + TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|---|---|
|**Mask version**||
|**Open points**||


##### 2.1.36 Timer Synchronization: Become time keeper on E10 events

**Test ID** 70136

**Description** Verify that event E10 (sending a TimerNotify) brings the BDUT into the
time keeper state.Sketch:

             - First bring the BDUT into the time follower state.

             - Wait for a (periodic or update) TimerNotify. This brings the BDUT
into the time keeper state.

             - Wait for another periodic TimerNotify to be able to determine
whether the BDUT is not in time keeper or time follower state.

**Expectation** BDUT is timekeeper after sending a TimerNotify.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 73 f 376

|Test ID|70136|
|---|---|
|**Description**|Verify that event E10 (sending a TimerNotify) brings the BDUT into the<br>time keeper state.Sketch:<br> <br>First bring the BDUT into the time follower state.<br> <br>Wait for a (periodic or update) TimerNotify. This brings the BDUT<br>into the time keeper state.<br> <br>Wait for another periodic TimerNotify to be able to determine<br>whether the BDUT is not in time keeper or time follower state.|
|**Expectation**|BDUT is timekeeper after sending a TimerNotify.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test procedure| For state in SCHED PERIODIC, SCHED UPDATE:<br>_ _<br>o Execute GlPro MulticastSetState(state = state,<br>_<br>timekeeper = 0).<br> Explanation: Here the BDUT is a time follower in<br>state SCHED PERIODIC or in state SCHED -<br>_ _<br>UPDATE.<br>o Execute (receivedTimestamp, localMcTime) = GlPro -<br>_<br>ReceiveTimerNotify(timeout = TimeoutPeriodicTimer-<br>Notify).<br> Explanation: Here the BDUT just became a time<br>keeper in state SCHED PERIODIC.<br>_<br>o Explanation: Check the length of the periodic delay to<br>determine whether we are a time keeper or a time<br>follower.<br>o Set t1 = GlPro GetLocalMcTimer().<br>_<br>o Execute (receivedTimestamp, localMcTime) = GlPro -<br>_<br>ReceiveTimerNotify(timeout = TimeoutPeriodicTimer-<br>Notify).<br>o If localMcTime - t1 is not in [MinDelayTimeKeeper-<br>PeriodicNotify - NetworkLatency .. MaxDelayTimeKeeper-<br>PeriodicNotify + NetworkLatency]:<br> Abort test and return TestFailed.<br> Explanation: The received TimerNotify was not in<br>the periodic+time-keeper time window.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br>Checked state machine transitions: Event E10 in state SCHED_-<br>PERIODIC and SCHED_UPDATE.|
|**Duration**|<br>TimeoutTimerNotifyResponse + 2 * TimeoutPeriodicTimerNotify +<br>ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.37 Timer Synchronization: Time keeper update duration

**Test ID** 70137

**Description** Verify time keeper delay duration for updates.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 74 f 376

|Test ID|70137|
|---|---|
|**Description**|Verify time keeper delay duration for updates.|


-----

|Expectation|The observed update TimerNotify is in the time window for time keeper<br>updates.|
|---|---|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test procedure**| <br>Execute GlPro_MulticastSetState(state = SCHED_UPDATE,<br>timekeeper = 1).<br>`o` Explanation: Here the BDUT is a time keeper in state<br>SCHED_UPDATE.<br> <br>Explanation: Check the length of the update delay.<br> <br>Set t1 = GlPro_GetLocalMcTimer().<br> <br>Execute (receivedTimestamp, localMcTime) = GlPro_Receive-<br>TimerNotify(timeout = TimeoutTimerNotifyResponse).<br> <br>If localMcTime - t1 is not in [MinDelayTimeKeeperUpdateNotify -<br>NetworkLatency .. MaxDelayTimeKeeperUpdateNotify +<br>NetworkLatency]:<br>`o` Abort test and return TestFailed.<br>`o` Explanation: The received TimerNotify was not in the<br>update+time-keeper time window.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br> Checked state machine transitions: Event E10 in state SCHED_-<br>UPDATE and others.|
|**Duration**|3 * TimeoutTimerNotifyResponse + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.38 Timer Synchronization: Time follower update duration

**Test ID** 70138

**Description** Verify time follower delay duration for updates.

**Expectation** The observed update TimerNotify is in the time window for time follower
updates.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 75 f 376

|Test ID|70138|
|---|---|
|**Description**|Verify time follower delay duration for updates.|
|**Expectation**|The observed update TimerNotify is in the time window for time follower<br>updates.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test procedure| Execute GlPro MulticastSetState(state = SCHED UPDATE,<br>_ _<br>timekeeper = 0).<br>o Explanation: Here the BDUT is a time follower in state<br>SCHED UPDATE.<br>_<br> Explanation: Check the length of the update delay.<br> Set t1 = GlPro GetLocalMcTimer().<br>_<br> Execute (receivedTimestamp, localMcTime) = GlPro Receive-<br>_<br>TimerNotify(timeout = TimeoutTimerNotifyResponse).<br> If localMcTime - t1 is not in [MinDelayTimeFollowerUpdateNotify<br>- NetworkLatency .. MaxDelayTimeFollowerUpdateNotify +<br>NetworkLatency]:<br>o Abort test and return TestFailed.<br>o Explanation: The received TimerNotify was not in the<br>update+time-follower time window.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.3.2.7 (Transition<br>Table)<br>Checked state machine transitions: Event E10 in state SCHED_-<br>UPDATE and others.|
|**Duration**|2 * TimeoutTimerNotifyResponse + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.39 Timer Synchronization: TimerNotify response

**Test ID** 70139

**Description** Verify that TimerNotify updates (responses) contain the serial number
and the MessageTag of the 'requesting' TimerNotify frame.

**Expectation** The observed update TimerNotify contains the serial number and the
MessageTag of the TimerNotify frame which was sent out by the test
tool.

**Setup** - Execute GlPro_SetupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 76 f 376

|Test ID|70139|
|---|---|
|**Description**|Verify that TimerNotify updates (responses) contain the serial number<br>and the MessageTag of the 'requesting' TimerNotify frame.|
|**Expectation**|The observed update TimerNotify contains the serial number and the<br>MessageTag of the TimerNotify frame which was sent out by the test<br>tool.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|


-----

|Test procedure| Execute GlPro MulticastSetState(state = SCHED PERIODIC,<br>_ _<br>timekeeper = 0).<br> Execute GlPro SendTimerNotify(timestamp = 0). Use a random<br>_<br>MessageTag m1 and a random serial number s1 in the Timer-<br>Notify frame and remember these.<br>o Explanation: This will trigger a new and fresh update in the<br>BDUT.<br> Execute GlPro ReceiveTimerNotify(timeout = TimeoutTimer-<br>_<br>NotifyResponse).<br> If (serial number of the last received TimerNotify frame is != s1)<br>OR (MessageTage of the last received TimerNotify frame is !=<br>m1): (Sent and received from the point of view of the test tool.)<br>o Abort test and return test failed.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.2.4.2 (TIMER_-<br>NOTIFY Binary Format)<br>Checked state machine transitions: Event E10 in state SCHED_-<br>UPDATE.|
|**Duration**|2 * TimeoutTimerNotifyResponse + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.1.40 Nested SecureWrapper is ignored (multicast)

**Test ID** 70140

**Description** Send to the BDUT a SecureWrapper containing a SecureWrapper
containing a DeviceDescriptorRead, via multicast.

**Expectation** The BDUT ignores the nested SecureWrapper frame.

**Setup** - Execute GlPro_SetupMulticast(multicastAddress = NonSystemSetupMulticastAddress).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 77 f 376

|Test ID|70140|
|---|---|
|**Description**|Send to the BDUT a SecureWrapper containing a SecureWrapper<br>containing a DeviceDescriptorRead, via multicast.|
|**Expectation**|The BDUT ignores the nested SecureWrapper frame.|
|**Setup**| <br>Execute GlPro_SetupMulticast(multicastAddress = NonSystem-<br>SetupMulticastAddress).|


-----

|Test procedure| Send to the BDUT a SecureWrapper containing Secure wrapper<br>containing a RoutingIndication, L Data.ind, A Device-<br>_ _<br>Descriptor Read<br>_<br> Wait for a SecureWrapper from the BDUT containing a Routing-<br>Indication, L Data.ind, A DeviceDescriptor Response. Timeout:<br>_ _ _<br>TimeoutAppLayerResponse.<br>o On timeout: OK.<br>o On received response: Abort test and return TestFailed.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.2.1.2.2.2 Secure<br>Wrapper|
|**Duration**|TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


##### 2.1.41 Timer Synchronization is disabled when routing is set to non- secure

**Test ID** 70141

**Description** Set routing to non-secure in PID_SECURED_SERVICE_FAMILIES.
This disables the timer synchronization state machine.

**Expectation** The BDUT neither sends spontaneous TimerNotify frames nor
responds to received outdated TimerNotifys.

**Setup** - Execute GlPro_SetupMulticast(multicastAddress = NonSystemSetupMulticastAddress).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 78 f 376

|Test ID|70141|
|---|---|
|**Description**|Set routing to non-secure in PID_SECURED_SERVICE_FAMILIES.<br>This disables the timer synchronization state machine.|
|**Expectation**|The BDUT neither sends spontaneous TimerNotify frames nor<br>responds to received outdated TimerNotifys.|
|**Setup**| <br>Execute GlPro_SetupMulticast(multicastAddress = NonSystem-<br>SetupMulticastAddress).|


-----

|Test procedure| Explanation: Routing is set to secure here. Timer-sync state<br>machine is active.<br> Execute: GlPro VerifyMulticastIsFunctional(multicastAddress =<br>_<br>NonSystemSetupMulticastAddress).<br> Explanation: Now disable the timer-sync state machine by<br>setting routing to non-secure.<br> Execute GlPro SetupMulticast(multicastAddress = NonSystem-<br>_<br>SetupMulticastAddress, secureRouting = 0).<br> Execute GlPro SendTimerNotify(timestamp = 0).<br>_<br> Receive TimerNotify for current backbone key. Timeout: Max-<br>DelayTimeFollowerPeriodicNotify + NetworkLatency.<br>o On timeout: OK.<br>o On received TimerNotify: Abort test and return Test-<br>Failed. (The timer sync state machine should be<br>disabled.)|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.2.2.3.2.8 Starting<br>the multicast timer synchronization|
|**Duration**|TimeoutTimerNotifyResponse + TimeoutAppLayerResponse + 2 *<br>ConfirmedRestart + MaxDelayTimeFollowerPeriodicNotify + Network-<br>Latency|
|**Mask version**||
|**Open points**||


##### 2.1.42 Timer Synchronization is enabled when routing is set to secure

**Test ID** 70142

**Description** Setting routing from non-secure to secure in PID_SECURED_SERVICE_FAMILIES causes a re-initialization of the timer-sync state
machine and enables the timer-sync state machine.

**Expectation** The BDUT starts sending spontaneous TimerNotify frames.

**Setup** - Execute GlPro_SetupMulticast(multicastAddress = NonSystemSetupMulticastAddress, secureRouting = 0).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 79 f 376

|Test ID|70142|
|---|---|
|**Description**|Setting routing from non-secure to secure in PID_SECURED_-<br>SERVICE_FAMILIES causes a re-initialization of the timer-sync state<br>machine and enables the timer-sync state machine.|
|**Expectation**|The BDUT starts sending spontaneous TimerNotify frames.|
|**Setup**| <br>Execute GlPro_SetupMulticast(multicastAddress = NonSystem-<br>SetupMulticastAddress, secureRouting = 0).|


-----

|Test<br>procedure| Receive TimerNotify for current backbone key. Timeout: Max-<br>DelayTimeFollowerPeriodicNotify + NetworkLatency.<br>o On timeout: OK.<br>o On received TimerNotify: Abort test and return TestFailed.<br>(The timer sync state machine should be disabled.)<br> Explanation: Now enable the timer-sync state machine:<br> Execute GlPro SetupMulticast(multicastAddress = NonSystem-<br>_<br>SetupMulticastAddress, secureRouting = 1).<br> Note: The above GlPro SetupMulticast() already queries the<br>_<br>mc timer and this proves that the timer-sync state machine works.<br>_<br>However, we wait for one more spontaneous TimerNotify to make<br>sure the timer-sync state machine is really on and did not just<br>respond mechanically to modifying PID SECURED SERVICE -<br>_ _ _<br>FAMILIES[Routing].<br> Receive TimerNotify for current backbone key. Timeout: Max-<br>DelayTimeFollowerPeriodicNotify + NetworkLatency.<br>o On timeout: Abort test and return TestFailed.<br>o On received TimerNotify: OK.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.2.2.3.2.8 Starting the<br>multicast timer synchronization|
|**Duration**|TimeoutTimerNotifyResponse + 2 * (ConfirmedRestart + MaxDelayTime-<br>FollowerPeriodicNotify + NetworkLatency)|
|**Mask version**||
|**Open points**||


##### 2.1.43 Overview of covered aspects

**Rationale: Go through each transition in the transition table at least once. This table**
**lists only the most prominent tests for each transition.**

**Event** **SCHED_-** **SCHED_UPDATE** **Event**
**PERIODIC**

E01 2.1.7, 2.1.12, 2.1.26 Received TIMER_NOTIFY
2.1.13 (ahead)

E02 2.1.14 2.1.27 Received TIMER_NOTIFY (good)

E03 2.1.15 2.1.28 Received TIMER_NOTIFY
(acceptable)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 80 f 376

|Rationale: Go through each transition in the transition table at least once. This table<br>lists only the most prominent tests for each transition.|Col2|Col3|Col4|
|---|---|---|---|
|**Event**|**SCHED_-**<br>**PERIODIC**|**SCHED_UPDATE**|**Event**|
|E01|2.1.7, 2.1.12,<br>2.1.13|2.1.26|Received TIMER_NOTIFY<br>(ahead)|
|E02|2.1.14|2.1.27|Received TIMER_NOTIFY (good)|
|E03|2.1.15|2.1.28|<br>Received TIMER_NOTIFY<br>(acceptable)|


-----

|E04|2.1.19,<br>2.1.20|2.1.29|Received TIMER NOTIFY<br>_<br>(outdated)|
|---|---|---|---|
|E05|2.1.6, 2.1.16|2.1.30|Received SECURE_WRAPPER<br>(ahead)|
|E06|2.1.3, 2.1.17|2.1.31|Received SECURE_WRAPPER<br>(good)|
|E07|2.1.18|2.1.32|Received SECURE_WRAPPER<br>(acceptable)|
|E08|2.1.21, 2.3.5|2.1.33|Received SECURE_WRAPPER<br>(outdated)|
|E09|2.1.22|2.1.25|Sent SECURE_WRAPPER|
|E10|2.1.9, 2.1.11|2.1.6, 2.1.39 (and<br>virtually all multicast<br>tests)|<br>notify_timer expired, send Timer-<br>Notify|
|E11|2.1.23|2.1.23|Backbone Key changed|
|E12|2.1.24|2.1.24|Backbone Key same value|
|**Rationale: Go through each transition which affects the time keeper / time follower**<br>**state at least once and make sure the the target state is reached.**|**Rationale: Go through each transition which affects the time keeper / time follower**<br>**state at least once and make sure the the target state is reached.**|**Rationale: Go through each transition which affects the time keeper / time follower**<br>**state at least once and make sure the the target state is reached.**|**Rationale: Go through each transition which affects the time keeper / time follower**<br>**state at least once and make sure the the target state is reached.**|
|**Transition**|**SCHED_-**<br>**PERIODIC**|**SCHED_UPDATE**|**Description**|
|E01: time keeper -<br>> time follower|2.1.34|2.1.34|Received TIMER_NOTIFY<br>(ahead) while being time keeper|
|E02: time keeper -<br>> time follower|2.1.35|2.1.35|Received TIMER_NOTIFY (good)<br>while being time keeper|
|E10: time follower<br>-> time keeper|2.1.36|2.1.36|notify_timer expired, send Timer-<br>Notify while being time follower|
|**Rationale: Check each of the four TimerNotify delay intervals for time keeper / time**<br>**follower and SCHED_PERIODIC and SCHED_UPDATE.**|**Rationale: Check each of the four TimerNotify delay intervals for time keeper / time**<br>**follower and SCHED_PERIODIC and SCHED_UPDATE.**|**Rationale: Check each of the four TimerNotify delay intervals for time keeper / time**<br>**follower and SCHED_PERIODIC and SCHED_UPDATE.**|**Rationale: Check each of the four TimerNotify delay intervals for time keeper / time**<br>**follower and SCHED_PERIODIC and SCHED_UPDATE.**|
|<br>**Interval**|<br>**SCHED_-**<br>**PERIODIC**|<br>**SCHED_UPDATE**|<br>**Description**|
|Delay interval time<br>keeper|2.1.36|2.1.37|Check delay interval for time<br>keeper for SCHED_PERIODIC<br>and SCHED_UPDATE|
|Delay interval time<br>follower|2.1.34,<br>2.1.35|2.1.38|<br>Check delay interval for time<br>follower for SCHED_PERIODIC<br>and SCHED_UPDATE|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 81 f 376


-----

|Rationale: Check TimerNotify challenge/response mechanism|Col2|Col3|Col4|
|---|---|---|---|
|TimerNotify<br>challenge|2.1.9|(not possible)|Check the behavior when<br>sending out periodic Timer-<br>Notifies (challenge).|
|TimerNotify<br>response|(not possible)|2.1.39|Check the behavior when<br>sending out update TimerNotifies<br>(response)|
|**Rationale: Check parameters**|**Rationale: Check parameters**|**Rationale: Check parameters**|**Rationale: Check parameters**|
|**Parameter**|**Tested by**|||
|latencyTolerance|2.3.5|||
|syncLatency-<br>Tolerance|2.3.6|||
|minDelayInitial-<br>Notify|2.1.10|||
|maxDelayInitial-<br>Notify|2.1.10|||
|minDelayTime-<br>KeeperPeriodic-<br>Notify|2.1.11|||
|maxDelayTime-<br>KeeperPeriodic-<br>Notify|2.1.11|||
|minDelayTime-<br>FollowerPeriodic-<br>Notify|2.1.34,<br>2.1.35|||
|maxDelayTime-<br>FollowerPeriodic-<br>Notify|2.1.34,<br>2.1.35|||
|minDelayTime-<br>KeeperUpdate-<br>Notify|2.1.37|||
|maxDelayTime-<br>KeeperUpdate-<br>Notify|2.1.37|||
|minDelayTime-<br>FollowerUpdate-<br>Notify|2.1.38|||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 82 f 376


-----

|maxDelayTime-<br>FollowerUpdate-<br>Notify|2.1.38|Col3|Col4|
|---|---|---|---|


### 2.2 Unicast

##### 2.2.1 Meta test: Secure unicast frames ok

**Test ID** 
**Description** This test is not run as an independent test. Instead this test validates all
incoming IP security unicast related frames, coming from the BDUT,
while executing all unicast tests.
For each frame sent by the BDUT on the IP side.

**Expectation** The checks specified below do not detect any errors while all unicast
tests are being run.

**Setup** Start the processing of this test before the first unicast test and let it run
while all multicast tests are running.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 83 f 376

|Test ID|-|
|---|---|
|**Description**|This test is not run as an independent test. Instead this test validates all<br>incoming IP security unicast related frames, coming from the BDUT,<br>while executing all unicast tests.<br>For each frame sent by the BDUT on the IP side.|
|**Expectation**|The checks specified below do not detect any errors while all unicast<br>tests are being run.|
|**Setup**|Start the processing of this test before the first unicast test and let it run<br>while all multicast tests are running.|


-----

|Test procedure| For all frames received via TCP:<br>o If frame is a SecureWrapper with secure session identifier<br>!= 0 (secure unicast frames):<br> Check that the header length equals 6 and the<br>Protocol Version equals 10h.<br> Check BDUT serial number.<br> Check message tag == 0.<br> Check whether sequence number increases strictly<br>monotonically from frame to frame.<br> Check whether MAC is valid.<br> If inner frame is a SessionRequest: TestFailed.<br>(Nested sessions not supported.)<br> If inner frame is a SessionResponse: TestFailed.<br>(Nested sessions not supported.)<br> If inner frame is a SessionAuthenticate: TestFailed.<br>(BDUT never initiates sessions.)<br> If inner frame is a Secure Wrapper: TestFailed.<br>(Nested sessions not supported.)<br>o If frame is a SessionRequest: TestFailed. (BDUT never<br>initiates sessions.)<br>o If frame is a SessionAuthenticate: TestFailed. (Must<br>always be wrapped in a SecureWrapper.)<br>o If frame is a SessionStatus: TestFailed. (Must always be<br>wrapped in a SecureWrapper.)<br> For all frames received via UDP:<br>o If frame is a SecureWrapper with secure session identifier<br>!= 0 (secure unicast frames): TestFailed (Unicast is not<br>supported via UDP, only via TCP.)<br>o If frame is a SessionRequest: TestFailed (Unicast is not<br>supported via UDP, only via TCP.)<br>o If frame is a SessionResponse: TestFailed (Unicast is not<br>supported via UDP, only via TCP.)<br>o If frame is a SessionAuthenticate: TestFailed (Unicast is<br>not supported via UDP, only via TCP.)<br>o If frame is a SessionStatus: TestFailed (Unicast is not<br>supported via UDP, only via TCP.)|
|---|---|
|**Cleanup**|End the processing of this test after the last unicast test.|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.1.3.1 (SECURE_-<br>WRAPPER / Binary format), 2.2.3.5.1 (Associating session keys to<br>secure sessions, nested session not allowed).|
|**Duration**|0 s (This tests runs while all other unicast tests are running and does not<br>consume any time.)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 84 f 376


-----

|Mask version|Col2|
|---|---|
|**Open points**||


##### 2.2.2 Secure session setup

**Test ID** 70202

**Description** Create a secure session and verify that it works (userId = 1,
management level).

**Expectation** A secure session can be established without errors. A DescriptionRequest/DescriptionResponse works inside this secure session.

**Setup** - Execute GlPro_SetupUnicast().

**Test procedure** - Execute GlPro_TestSecureSessionSetup(userId = 1).

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.6 (Session
**reference** Request), 2.2.3.7 (Session Response), 2.2.3.8 (Session Authenticate),
2.2.3.9 (Session Status)

Checked state machine transitions:

              - Event E00 State Idle, Action A0.

              - Event E01 State Unauthenticated, Action A1.

              - Event E03 State Authenticated, Action A4.

              - Event E05 State Authenticated, Action A5.

**Duration** TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +
TimeoutDescriptionResponse

**Mask version**

**Open points**

##### 2.2.3 Secure sessions are contained in a single TCP connection

©C i h 1998 2018 KNX A i i V i 1 1 AS P 85 f 376

|Test ID|70202|
|---|---|
|**Description**|Create a secure session and verify that it works (userId = 1,<br>management level).|
|**Expectation**|A secure session can be established without errors. A Description-<br>Request/DescriptionResponse works inside this secure session.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Execute GlPro_TestSecureSessionSetup(userId = 1).|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.6 (Session<br>Request), 2.2.3.7 (Session Response), 2.2.3.8 (Session Authenticate),<br>2.2.3.9 (Session Status)<br> Checked state machine transitions:<br> <br>Event E00 State Idle, Action A0.<br> <br>Event E01 State Unauthenticated, Action A1.<br> <br>Event E03 State Authenticated, Action A4.<br> <br>Event E05 State Authenticated, Action A5.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


-----

|Test ID|70203|
|---|---|
|**Description**|Verify that secure sessions can only be used in the TCP connection they<br>were created in.Create two TCP connections, each containing a secure<br>session.Verify that sending frames encrypted with a valid session key but<br>on the wrong TCP connection has no effect.|
|**Expectation**|SecureWrapper frames which are encrypted with a session key are only<br>accepted on the TCP connection which contains the matching secure<br>session.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 86 f 376


-----

|Test<br>procedure| If NumSupportedParallelTcpConnections < 2:<br>o Abort test and return TestPassed. Explanation: All secure<br>sessions are trivially contained in a single TCP connection.<br> Open TCP connection Tcp1.<br> Open TCP connection Tcp2.<br> On Tcp1:<br>o Execute GlPro SecureSessionSetup(userId = 1).<br>_<br>o Remember session 1, consisting of the session key,<br>session id and the sending/receiving sequence counters.<br> On Tcp2:<br>o Execute GlPro SecureSessionSetup(userId = 1).<br>_<br>o Remember session 2, consisting of the session key,<br>session id and the sending/receiving sequence counters.<br> On Tcp1:<br>o Use session 2: Execute: GlPro VerifySessionIsClosed().<br>_<br> Explanation: This should be ignored by the BDUT<br>because we are sending on the wrong TCP<br>connection.<br>o Use session 2: Send to the BDUT a Secure Wrapper<br>containing a SessionStatus with the Status 'Status Close'.<br>_<br> Explanation: This should be ignored by the BDUT<br>because we are sending on the wrong TCP<br>connection. This must neither close the secure<br>session in Tcp1 nor in Tcp2.<br>o Use session 1: Execute GlPro VerifySecureSessionIs-<br>_<br>Functional().<br> Explanation: This should still work. The session<br>should not have been closed by the previous<br>Status Close.<br>_<br>o Use session 1: Close secure session: Execute GlPro -<br>_<br>CloseSecureSession().<br> On Tcp2:<br>o Use session 2: Execute GlPro VerifySecureSessionIs-<br>_<br>Functional().<br> Explanation: This should still work. The session<br>should not have been closed by the Status Close<br>_<br>requests on Tcp1.<br>o Use session 2: Close secure session: Execute GlPro -<br>_<br>CloseSecureSession().|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 87 f 376


-----

|Specification<br>reference|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.7 (Relation<br>between TCP connections, secure sessions and plain KNXnet/IP<br>connections)|
|---|---|
|**Duration**|2 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate + 3 *<br>TimeoutDescriptionResponse)|
|**Mask version**||
|**Open points**||


##### 2.2.4 Secure session setup, user level

**Test ID** 70204

**Description** Create a secure session with a user-level userId and verify that it
works.Note: Device Management will not work with NonMgmtUserId.
But this test uses only DescriptionRequest/Response.

**Expectation** A secure session can be established without errors. A DescriptionRequest/DescriptionResponse works inside this secure session.

**Setup** - If NonMgmtUserId == 0: Abort test and return TestPassed.

             - Execute GlPro_SetupUnicast(userId = NonMgmtUserId,
passwordHash = PasswordHashDefault).

**Test procedure** - Execute GlPro_TestSecureSessionSetup(userId = NonMgmtUserId).

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.6 (Session
**reference** Request), 2.2.3.7 (Session Response), 2.2.3.8 (Session Authenticate),
2.2.3.9 (Session Status)

Checked state machine transitions:

             - Event E00 State Idle, Action A0.

             - Event E01 State Unauthenticated, Action A1.

             - Event E03 State Authenticated, Action A4.

             - Event E05 State Authenticated, Action A5.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 88 f 376

|Test ID|70204|
|---|---|
|**Description**|Create a secure session with a user-level userId and verify that it<br>works.Note: Device Management will not work with NonMgmtUserId.<br>But this test uses only DescriptionRequest/Response.|
|**Expectation**|A secure session can be established without errors. A Description-<br>Request/DescriptionResponse works inside this secure session.|
|**Setup**| <br>If NonMgmtUserId == 0: Abort test and return TestPassed.<br> <br>Execute GlPro_SetupUnicast(userId = NonMgmtUserId,<br>passwordHash = PasswordHashDefault).|
|**Test procedure**| <br>Execute GlPro_TestSecureSessionSetup(userId = NonMgmt-<br>UserId).|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.6 (Session<br>Request), 2.2.3.7 (Session Response), 2.2.3.8 (Session Authenticate),<br>2.2.3.9 (Session Status)<br>Checked state machine transitions:<br> <br>Event E00 State Idle, Action A0.<br> <br>Event E01 State Unauthenticated, Action A1.<br> <br>Event E03 State Authenticated, Action A4.<br> <br>Event E05 State Authenticated, Action A5.|


-----

|Duration|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse|
|---|---|
|**Mask version**||
|**Open points**||


##### 2.2.5 SecureWrapper traffic keeps session alive

**Test ID** 70205

**Description** Test whether sending Secure Wrapper frames resets the secure
session timeout timer.

**Expectation** Secure session does not time out when SecureWrapper traffic is going
on.

**Setup** - Execute GlPro_SetupUnicast().

**Test procedure** - Execute GlPro_SecureSessionSetup(userId = 1).

              - Execute GlPro_VerifySecureSessionIsFunctional().

              - Wait for TimeoutSecureSession - TimeoutSecureSessionDelta
seconds. (Wait until short before the session timeout.)

              - Execute GlPro_VerifySecureSessionIsFunctional().

              - Wait for 3*TimeoutSecureSessionDelta. (We are now past the
TimeoutSecureSession, but the session should not have been
closed due to previous SecureWrapper traffic.)

              - Execute GlPro_VerifySecureSessionIsFunctional().

              - Close secure session: Execute GlPro_CloseSecureSession().

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.1.1 (Session
**reference** State Machine / Goal / Parameters), 2.4.1 (Secure session setup)

Checked state machine transitions: Event E05 State Authenticated,
Action A5.

**Duration** TimeoutSessionResponse + TimeoutSessionStatusAuthenticate + 3 *
TimeoutDescriptionResponse + TimeoutSecureSession + 3*TimeoutSecureSessionDelta

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 89 f 376

|Test ID|70205|
|---|---|
|**Description**|Test whether sending Secure Wrapper frames resets the secure<br>session timeout timer.|
|**Expectation**|Secure session does not time out when SecureWrapper traffic is going<br>on.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Execute GlPro_SecureSessionSetup(userId = 1).<br> <br>Execute GlPro_VerifySecureSessionIsFunctional().<br> <br>Wait for TimeoutSecureSession - TimeoutSecureSessionDelta<br>seconds. (Wait until short before the session timeout.)<br> <br>Execute GlPro_VerifySecureSessionIsFunctional().<br> <br>Wait for 3*TimeoutSecureSessionDelta. (We are now past the<br>TimeoutSecureSession, but the session should not have been<br>closed due to previous SecureWrapper traffic.)<br> <br>Execute GlPro_VerifySecureSessionIsFunctional().<br> <br>Close secure session: Execute GlPro_CloseSecureSession().|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.1.1 (Session<br>State Machine / Goal / Parameters), 2.4.1 (Secure session setup)<br> Checked state machine transitions: Event E05 State Authenticated,<br>Action A5.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate + 3 *<br>TimeoutDescriptionResponse + TimeoutSecureSession + 3*Timeout-<br>SecureSessionDelta|
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.2.6 Erroneous SecureWrapper

**Test ID** 70206

**Description** Test whether erroneous SecureWrapper frames are ignored by the
BDUT.

**Expectation** Erroneous SecureWrapper frames are ignored by the BDUT.

**Setup** - Execute GlPro_SetupUnicast().

             - Execute GlPro_SecureSessionSetup(userId = 1).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 90 f 376

|Test ID|70206|
|---|---|
|**Description**|Test whether erroneous SecureWrapper frames are ignored by the<br>BDUT.|
|**Expectation**|Erroneous SecureWrapper frames are ignored by the BDUT.|
|**Setup**| <br>Execute GlPro_SetupUnicast().<br> <br>Execute GlPro_SecureSessionSetup(userId = 1).|


-----

|Test<br>procedure| Start recording all IP frames received from the BDUT.<br> For each error E of the following errors in a SecureWrapper frame:<br>o a wrong session identifier (e.g. one higher than the one<br>normally expected);<br>o zero session identifier<br>o a sequence number less than the last received number;<br>o a sequence number equal to the last received number;<br>o a serial number not corresponding to the serial number<br>used to calculate the MAC;<br>o a message tag different from 0000h;<br>o encrypted data which differs in one byte from the correct<br>encrypted data (e.g. generate a correct frame and<br>increment one byte of the encrypted data by one).<br>o a MAC which differs in one byte from the correct MAC (e.g.<br>generate a correct frame and increment one byte of the<br>MAC by one).<br>o Total length two bytes longer than for SecureWrapper, but<br>total length matches actual length of frame (e.g. append two<br>zero bytes to a valid SecureWrapper frame and increase<br>total length fields by 2). (TCP connection does not get out of<br>sync since lengths are all consistent.)<br> Do the following:<br>o Send one DescriptionRequest frame, through the secure<br>session (wrapped in a SecureWrapper) with error E<br>injected.<br>o Wait for DescriptionResponse (wrapped in SecureWrapper).<br>Timeout: TimeoutDescriptionResponse.<br> On received response: Abort test and return Test-<br>Failed.<br> On timeout: Continue.<br> Verify that session is still functional: Execute GlPro VerifySecure-<br>_<br>SessionIsFunctional().<br> Close secure session: Execute GlPro CloseSecureSession().<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.1.3.1 (SECURE_-<br>WRAPPER, Binary Format)|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate + 11 *<br>TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 91 f 376


-----

##### 2.2.7 SessionClose by client

**Test ID** 70207

**Description** Test whether a SessionStatus with StatusClose sent by the client
really closes the session.

**Expectation** SecureWrapper packets encrypted with a session key of a previously
closed session are ignored.

**Setup** - Execute GlPro_SetupUnicast().

**Test procedure** - Create secure session: Execute GlPro_SecureSessionSetup(userId = 1).

               - Close secure session: Execute GlPro_CloseSecureSession(closeTcp = 0).

               - Check whether session is closed: Execute: GlPro_VerifySessionIsClosed().

               - Close TCP connection.

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.9.2 (Session**reference** Status / Binary format)

Checked state machine transitions: Event E03 State Authenticated,
Action A4.

**Duration** TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +
TimeoutDescriptionResponse

**Mask version**

**Open points**

##### 2.2.8 Unsecured SessionClose by client is ignored

**Test ID** 70208

**Description** Verify that an unsecured SessionStatus / StatusClose is ignored.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 92 f 376

|Test ID|70207|
|---|---|
|**Description**|Test whether a SessionStatus with StatusClose sent by the client<br>really closes the session.|
|**Expectation**|SecureWrapper packets encrypted with a session key of a previously<br>closed session are ignored.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Create secure session: Execute GlPro_SecureSession-<br>Setup(userId = 1).<br> <br>Close secure session: Execute GlPro_CloseSecure-<br>Session(closeTcp = 0).<br> <br>Check whether session is closed: Execute: GlPro_Verify-<br>SessionIsClosed().<br> <br>Close TCP connection.|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.9.2 (Session-<br>Status / Binary format)<br> Checked state machine transitions: Event E03 State Authenticated,<br>Action A4.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||

|Test ID|70208|
|---|---|
|**Description**|Verify that an unsecured SessionStatus / StatusClose is ignored.|


-----

|Expectation|An unsecured SessionStatus / StatusClose is ignored. A secure<br>session is still usable after this.|
|---|---|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Create secure session: Execute GlPro_SecureSession-<br>Setup(userId = 1).<br> <br>Send to the BDUT a SessionStatus with the status StatusClose.<br>(Not wrapped in a SecureWrapper as it ought to be.)<br>`o` Expectation: This frame should be completely ignored by<br>the BDUT.<br> <br>Check that the session still works: Execute GlPro_Verify-<br>SecureSessionIsFunctional().<br> <br>Close secure session: Execute GlPro_CloseSecureSession().|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.9.2 (SESSION_-<br>STATUS / Binary format)|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.2.9 Closing TCP connection closes all contained secure sessions

**Test ID** 70209

**Description** Closing a TCP connection which currently contains a secure session
closes the secure session implicitly.

**Expectation** The secure session is closed and the session key cannot be used in
future TCP connections.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 93 f 376

|Test ID|70209|
|---|---|
|**Description**|Closing a TCP connection which currently contains a secure session<br>closes the secure session implicitly.|
|**Expectation**|The secure session is closed and the session key cannot be used in<br>future TCP connections.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test procedure| Open TCP connection.<br> Create secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Remember session key.<br> Close TCP connection.<br>o Explanation: This should also close the contained<br>secure session.<br> Open TCP connection.<br> Use the session key from the previous secure session in the<br>following. Do not open a new secure session.<br> Check whether session is closed: Execute: GlPro Verify-<br>_<br>SessionIsClosed().|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG616-15.02 KNXnet-IP Security (2016.12.12) 2.4.2 (Closing a<br>secure session).|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.2.10 Stress test: Maximum parallel sessions

**Test ID** 70210

**Description** Open the maximum number of supported parallel secure sessions and
make sure they are functional. Try to open one more session to test the
failure case. Run this test twice: Once with each session in a new TCP
connection and once with all sessions in the same TCP connection.Side
test: Check whether all received public keys from the BDUT are pairwise
different.

**Expectation** NumSupportedParallelSecureSessions secure sessions are supported in
parallel. One more session leads to a controlled error.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 94 f 376

|Test ID|70210|
|---|---|
|**Description**|Open the maximum number of supported parallel secure sessions and<br>make sure they are functional. Try to open one more session to test the<br>failure case. Run this test twice: Once with each session in a new TCP<br>connection and once with all sessions in the same TCP connection.Side<br>test: Check whether all received public keys from the BDUT are pairwise<br>different.|
|**Expectation**|NumSupportedParallelSecureSessions secure sessions are supported in<br>parallel. One more session leads to a controlled error.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test<br>procedure| Start recording public keys received from the BDUT.<br> Execute LoPro SessionStressTest(numTcpConnections = Num-<br>_<br>SupportedParallelTcpConnections).<br> If NumSupportedParallelTcpConnections > 1:<br>o Execute LoPro SessionStressTest(numTcpConnections =<br>_<br>1).<br> Check that all received public keys from the BDUT are pairwise<br>different.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.1 (Associating<br>session keys to secure sessions), 2.2.3.5.2.1 (Session State Machine /<br>Goal)|
|**Duration**|2 * NumSupportedParallelSecureSessions * (TimeoutSessionResponse +<br>TimeoutSessionStatusAuthenticate + TimeoutDescriptionResponse)|
|**Mask version**||
|**Open points**||


Local procedures:

**Procedure** LoPro_SessionStressTest(numTcpConnections)
**name**

**Description** Create "NumSupportedParallelSecureSessions" secure sessions and
make sure they work.

**Parameter** - numTcpConnections: Number of TCP connections to use for all
**description** secure sessions. Must be >= 1.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 95 f 376

|Procedure<br>name|LoPro SessionStressTest(numTcpConnections)<br>_|
|---|---|
|**Description**|Create "NumSupportedParallelSecureSessions" secure sessions and<br>make sure they work.|
|**Parameter**<br>**description**| <br>numTcpConnections: Number of TCP connections to use for all<br>secure sessions. Must be >= 1.|


-----

|Procedure| Open numTcpConnections TCP connections, called TCP i for i in<br>_<br>1..numTcpConnections.<br> Open NumSupportedParallelSecureSessions sessions: For i in<br>1..NumSupportedParallelSecureSessions:<br>o Open new session "i" in TCP connection TCP (((i-1) % num-<br>_<br>TcpConnections) + 1):<br> Execute GlPro SecureSessionSetup(userId = 1).<br>_<br> Expectation: All sessions can be opened.<br> Test all sessions are functional:<br>o Start recording DescriptionResponse frames.<br>o For i in 1..NumSupportedParallelSecureSessions:<br> Send a DescriptionRequest frame through session i.<br>o Wait for all DescriptionResponses. Timeout Timeout-<br>DescriptionResponse, measured after the last Description-<br>Request has been sent. On timeout: Abort test and return<br>TestFailed.<br> If NumSupportedParallelSecureSessionsIsHardLimit != 0:<br>o Try to open one more session:<br> Send a Session Request with a new public key X.<br> Wait for the BDUT to send a Session Response.<br>Timeout: TimeoutSessionResponse. On timeout: Ok.<br>On received Session Response: Abort test and return<br>TestFailed.<br> Expectation: This new session cannot be created, as<br>the maximum number of parallel session is already<br>open.<br> Close all sessions: For i in 1..NumSupportedParallelSecure-<br>Sessions:<br>o For session "i": GlPro CloseSecureSession(closeTcp = 0).<br>_<br> Close all numTcpConnections TCP connections TCP i for i in<br>_<br>1..numTcpConnections.|
|---|---|
|**Return**|-|
|**Open points**||


##### 2.2.11 Ignore invalid SessionRequests

**Test ID** 70211

©C i h 1998 2018 KNX A i i V i 1 1 AS P 96 f 376

|Test ID|70211|
|---|---|


-----

|Description|Send invalid SessionRequest frames to the BDUT which the BDUT<br>should ignore.|
|---|---|
|**Expectation**|The BDUT ignores all invalid SessionRequest frames.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test**<br>**procedure**| <br>For each error E:<br>`o` Total length two bytes longer than for SessionRequest, but<br>total length matches actual length of frame (e.g. append two<br>zero bytes). (TCP connection does not get out of sync since<br>lengths are all consistent.)<br> <br>Expectation: The BDUT will skip the frame and ignore<br>it. It can skip it since it knows the length.<br>`o` Non-zero TCP HPAI. (KSG616-15.02 KNXnet-IP Security<br>(2016.12.12) 2.2.3.6.4 (Reception and Decoding) and<br>AN184 v01 KNXnet-IP Core v2 DP (2016.11.18) 2.2.2.2.5<br>(Host Protocol Address Information))<br> <br>Expectation: The BDUT will skip the frame and ignore<br>it. It can skip it since it knows the length.<br> <br>Do the following:<br>`o` Open new TCP connection.<br>`o` Send a SessionRequest with error E injected.<br>`o` Wait for SessionResponse or TCP close with timeout<br>min(TimeoutSessionResponse, TimeoutIdleTcpConnection *<br>0.9).<br> <br>Explanation: We expect the BDUT to ignore the<br>frame and we expect the BDUT to not close the TCP<br>connection, so we wait until close before the TCP<br>timeout. Then we check whether the BDUT is still<br>responding to frames on this TCP connection, to<br>make 1. sure the BDUT is still alive and 2. the TCP<br>connection is still usable.<br> <br>On timeout:<br> <br>Execute GlPro_VerifyBdutIsResponsiveVia-<br>Tcp().<br> <br>Continue.<br> <br>On SessionResponse or TCP close: Abort test and<br>return TestFailed.<br>`o` Close TCP connection.|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 97 f 376


-----

|Specification<br>reference|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.8.2 (Session<br>Request / Binary Format)<br>AN184 v01 KNXnet-IP Core v2 DP (2016.11.18) 2.2.2.2.5 (Host Protocol<br>Address Information) (For subtest "Non-zero TCP HPAI".)|
|---|---|
|**Duration**|4 * TimeoutSessionResponse|
|**Mask version**||
|**Open points**||


##### 2.2.12 Ignore secured SessionRequest

**Test ID** 70212

**Description** Send invalid Session Request within a secure session to the BDUT
which the BDUT should ignore because nested secure sessions are not
supported.

**Expectation** The BDUT shall ignore secured SessionRequests sent within a secure
session.

**Setup** - Execute GlPro_SetupUnicast().

**Test procedure** - Create secure session: Execute GlPro_SecureSessionSetup(userId = 1).

             - Send a Secure Wrapper containing a valid Session Request.

             - Wait for SessionResponse or SecureWrapper containing a
SessionResponse with timeout TimeoutSessionResponse. On
timeout: TestPassed. On any SessionResponse (with or without
SecureWrapper): TestFailed.

             - Close secure session: Execute GlPro_CloseSecureSession().

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.1 (Session State
**reference** Machine / Goal) (Nested secure session are not supported.)

**Duration** TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +
TimeoutSessionResponse

**Mask version**

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 98 f 376

|Test ID|70212|
|---|---|
|**Description**|Send invalid Session Request within a secure session to the BDUT<br>which the BDUT should ignore because nested secure sessions are not<br>supported.|
|**Expectation**|The BDUT shall ignore secured SessionRequests sent within a secure<br>session.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Create secure session: Execute GlPro_SecureSession-<br>Setup(userId = 1).<br> <br>Send a Secure Wrapper containing a valid Session Request.<br> <br>Wait for SessionResponse or SecureWrapper containing a<br>SessionResponse with timeout TimeoutSessionResponse. On<br>timeout: TestPassed. On any SessionResponse (with or without<br>SecureWrapper): TestFailed.<br> <br>Close secure session: Execute GlPro_CloseSecureSession().|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.1 (Session State<br>Machine / Goal) (Nested secure session are not supported.)|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutSessionResponse|
|**Mask version**||
|**Open points**||


-----

##### 2.2.13 Missing authentication

**Test ID** 70213

**Description** Create an unauthenticated secure session: Send/receive SessionRequest/SessionResponse, but do not send/receive a SessionAuthenticate/SessionStatus. Then try to use the session key for secure
communication which should fail.

**Expectation** Valid Secure Wrapper frames sent before authentication should be
discarded and a SessionStatus with STATUS_UNAUTHENTICATED
should be returned.

**Setup** - Execute GlPro_SetupUnicast().

**Test** - Execute GlPro_SecureSessionRequestResponse().
**procedure** - Start recording DescriptionResponses, wrapped in a SecureWrapper.

             - Send DescriptionRequest, wrapped in a valid SecureWrapper.

             - Wait for the BDUT to send SecureWrapper containing a SessionStatus frame with timeout TimeoutSessionStatusAuthenticate. On
timeout: Abort test and return TestFailed.
`o` If status code is not STATUS_UNAUTHENTICATED return
TestFailed.

             - Verify that no DescriptionResponse was received.

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Transition
**reference** Table).

Checked state machine transitions: Event E05 State Unauthenticated,
Action A7.

**Duration** TimeoutSessionResponse + TimeoutSessionStatusAuthenticate

**Mask version**

**Open points**

##### 2.2.14 Ignore invalid SessionAuthenticate (format errors)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 99 f 376

|Test ID|70213|
|---|---|
|**Description**|Create an unauthenticated secure session: Send/receive Session-<br>Request/SessionResponse, but do not send/receive a Session-<br>Authenticate/SessionStatus. Then try to use the session key for secure<br>communication which should fail.|
|**Expectation**|Valid Secure Wrapper frames sent before authentication should be<br>discarded and a SessionStatus with STATUS_UNAUTHENTICATED<br>should be returned.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test**<br>**procedure**| <br>Execute GlPro_SecureSessionRequestResponse().<br> <br>Start recording DescriptionResponses, wrapped in a Secure-<br>Wrapper.<br> <br>Send DescriptionRequest, wrapped in a valid SecureWrapper.<br> <br>Wait for the BDUT to send SecureWrapper containing a Session-<br>Status frame with timeout TimeoutSessionStatusAuthenticate. On<br>timeout: Abort test and return TestFailed.<br>`o` If status code is not STATUS_UNAUTHENTICATED return<br>TestFailed.<br> <br>Verify that no DescriptionResponse was received.|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Transition<br>Table).<br>Checked state machine transitions: Event E05 State Unauthenticated,<br>Action A7.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate|
|**Mask version**||
|**Open points**||


-----

|Test ID|70214|
|---|---|
|**Description**|Send invalid SessionAuthenticate frames with various injected errors.<br>Verify these are all ignored.|
|**Expectation**|The invalid SessionAuthenticate frames are silently ignored. No<br>response is sent in return.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>For each of the following errors E:<br>`o` Total length two bytes longer than for SessionRequest, but<br>total length matches actual length of frame (e.g. append<br>two zero bytes). (TCP connection does not get out of sync<br>since lengths are all consistent.)<br>`o` Reserved bits set to different values than 00h<br> <br>Do the following:<br>`o` Open TCP connection.<br>`o` Execute GlPro_SecureSessionRequestResponse().<br>`o` Send SessionAuthenticate frame with error E injected,<br>wrapped in a valid SecureWrapper.<br>`o` Wait for the BDUT to send Secure Wrapper containing a<br>SessionStatus frame with timeout TimeoutSessionStatus-<br>Authenticate + 1 s.<br> <br>On timeout: Ok. Continue.<br> <br>On reception of SessionStatus / StatusTimeout: Ok.<br>Continue.<br> <br>On reception of any other SessionStatus frame:<br>Abort test and return TestFailed.<br>`o` Close TCP connection.|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.8.2 (SESSION_-<br>AUTHENTICATE / Binary format), 2.2.3.8.5 (Reception and decoding)|
|**Duration**|TimeoutSessionResponse + 4 * (TimeoutSessionStatusAuthenticate + 1<br>s)|
|**Mask version**||
|**Open points**||


##### 2.2.15 Reject invalid SessionAuthenticate

©C i h 1998 2018 KNX A i i V i 1 1 AS P 100 f 376


-----

|Test ID|70215|
|---|---|
|**Description**|Send invalid SessionAuthenticate frames with various injected errors<br>(valid format, yet invalid values in fields including wrong password). Verify<br>these are responded to with a STATUS_AUTHENTICATION_FAILED.|
|**Expectation**|<br>The BDUT responds to these invalid SessionAuthenticate frames with a<br>SessionStatus / STATUS_AUTHENTICATION_FAILED.|
|**Setup**|<br> <br>Execute GlPro_SetupUnicast().<br> <br>Open TCP connection.|
|**Test**<br>**procedure**| <br>For each 'error' listed here:<br>`o` A reserved User Id value (80h to FFh)<br>`o` If UnsupportedUserId > 0:<br> <br>An invalid User Id value (02h to 7fh, one the BDUT<br>does not support): UnsupportedUserId.<br>`o` A MAC encrypted with a password hash not corresponding<br>to the indicated User ID.<br> <br>Do:<br>`o` Execute GlPro_SecureSessionRequestResponse().<br>`o` Send SessionAuthenticate frame with 'error', wrapped in a<br>valid SecureWrapper.<br>`o` Wait for the BDUT to send Secure Wrapper containing a<br>SessionStatus frame with timeout TimeoutSessionStatus-<br>Authenticate. On timeout: TestFailed.<br> <br>Check that status code is STATUS_-<br>AUTHENTICATION_FAILED.<br>`o` Execute VerifySessionIsClosed().|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Transition<br>Table).<br>Checked state machine transitions: Event E02 State Unauthenticated,<br>Action A3.|
|**Duration**|3 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate)|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 101 f 376


-----

##### 2.2.16 Authentication timeout

**Test ID** 70216

**Description** Send a SessionRequest and do not send a SessionAuthenticate to
provoke the timeout in the BDUT.

**Expectation** The BDUT sends a SessionStatus with StatusTimeout when the timeout
TimeoutSessionAuthenticate elapses.

**Setup** - Execute GlPro_SetupUnicast().

**Test** - Execute GlPro_SecureSessionRequestResponse().
**procedure** - Wait for the BDUT to send a SecureWrapper frame containing a
SessionStatus Frame containing a StatusTimeout. Measure time T
= T_time_when_Session_Status_was_received - T_time_when_Session_Response_was_received. Timeout TimeoutSessionAuthenticate + TimeoutSessionAuthenticateDelta. On timeout:
Return TestFailed.

             - Verify that T is between (inclusive) TimeoutSessionAuthenticate TimeoutSessionAuthenticateDelta and TimeoutSessionAuthenticate + TimeoutSessionAuthenticateDelta.

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Session
**reference** state machine).

Checked state machine transitions: Event E06 State Unauthenticated,
Action A6.

**Duration** TimeoutSessionResponse + TimeoutSessionStatusAuthenticate

**Mask version**

**Open points**

##### 2.2.17 Unsecured SessionAuthenticate is ignored

**Test ID** 70217

**Description** Setup a secure session, but do not wrap the Session Authenticate in a
Secure Wrapper.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 102 f 376

|Test ID|70216|
|---|---|
|**Description**|Send a SessionRequest and do not send a SessionAuthenticate to<br>provoke the timeout in the BDUT.|
|**Expectation**|The BDUT sends a SessionStatus with StatusTimeout when the timeout<br>TimeoutSessionAuthenticate elapses.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test**<br>**procedure**| <br>Execute GlPro_SecureSessionRequestResponse().<br> <br>Wait for the BDUT to send a SecureWrapper frame containing a<br>SessionStatus Frame containing a StatusTimeout. Measure time T<br>= T_time_when_Session_Status_was_received - T_time_when_-<br>Session_Response_was_received. Timeout TimeoutSession-<br>Authenticate + TimeoutSessionAuthenticateDelta. On timeout:<br>Return TestFailed.<br> <br>Verify that T is between (inclusive) TimeoutSessionAuthenticate -<br>TimeoutSessionAuthenticateDelta and TimeoutSession-<br>Authenticate + TimeoutSessionAuthenticateDelta.|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Session<br>state machine).<br>Checked state machine transitions: Event E06 State Unauthenticated,<br>Action A6.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate|
|**Mask version**||
|**Open points**||

|Test ID|70217|
|---|---|
|**Description**|Setup a secure session, but do not wrap the Session Authenticate in a<br>Secure Wrapper.|


-----

|Expectation|The unsecured SessionAuthenticate is ignored by the BDUT.|
|---|---|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Execute GlPro_SecureSessionRequestResponse().<br> <br>Send a valid SessionAuthenticate frame with userId and a MAC<br>(encrypted using the matching password hash). (This is<br>intentionally (and erroneously) not wrapped in a Secure Wrapper<br>here.)<br> <br>Wait for the BDUT to send a Secure Wrapper Frame containing a<br>SessionStatus Frame. Timeout TimeoutSessionAuthenticate +<br>TimeoutSessionAuthenticateDelta. On timeout: Abort test and<br>return TestFailed.<br>`o` Verify that received status is StatusTimeout.|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.8.2 (SESSION_-<br>AUTHENTICATE / Binary format)|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate|
|**Mask version**||
|**Open points**||


##### 2.2.18 Keepalive keeps session alive

**Test ID** 70218

**Description** Create a secure session and verify that the session is kept open by a
SessionStatus / StatusKeepalive.

**Expectation** The session does not time out.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 103 f 376

|Test ID|70218|
|---|---|
|**Description**|Create a secure session and verify that the session is kept open by a<br>SessionStatus / StatusKeepalive.|
|**Expectation**|The session does not time out.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test procedure| Create secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Wait for TimeoutSecureSession - TimeoutSecureSessionDelta.<br> Send to the BDUT a SecureWrapper containing a SessionStatus<br>with the status StatusKeepalive.<br> Wait for 3 * TimeoutSecureSessionDelta.<br> Execute GlPro VerifySecureSessionIsFunctional().<br>_<br> Close secure session: Execute GlPro CloseSecureSession().<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Session<br>state machine).<br>Checked state machine transitions: Event E04 State Authenticated,<br>Action A5.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutSecureSession + 2 * TimeoutSecureSessionDelta + Timeout-<br>DescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.2.19 Session timeout

**Test ID** 70219

**Description** Create a secure session and verify that the session gets automatically
closed by the server after the session timeout.

In addition a KNX connection is created and kept alive in the background,
to avoid that the timeout of the secure session immediately closes the
TCP connection in which case it is undefined (and thus not testable)
whether a SessionStatus/StatusTimeout was sent.

**Expectation** The secure session gets closed by the BDUT after the session timeout.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 104 f 376

|Test ID|70219|
|---|---|
|**Description**|Create a secure session and verify that the session gets automatically<br>closed by the server after the session timeout.<br>In addition a KNX connection is created and kept alive in the background,<br>to avoid that the timeout of the secure session immediately closes the<br>TCP connection in which case it is undefined (and thus not testable)<br>whether a SessionStatus/StatusTimeout was sent.|
|**Expectation**|The secure session gets closed by the BDUT after the session timeout.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test<br>procedure| Create secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Execute GlPro VerifySecureSessionIsFunctional().<br>_<br> Open device management connection inside the same TCP<br>connection but outside of the secure session. This is just done to<br>prevent the TCP connection from closing immediately after the<br>secure session timeout.<br> Wait for the BDUT to send a Secure Wrapper containing a<br>Session Status with the Status 'Status Timeout'. Timeout:<br>_ _<br>TimeoutSecureSession + TimeoutSecureSessionDelta. Measure<br>time T = T time when Session Status was received - T time -<br>_ _ _ _ _ _ _ _<br>when last frame was sent on session.<br>_ _ _ _ _ _<br>o On timeout: Abort test and return TestFailed.<br>o Verify that T is between (inclusive) TimeoutSecureSession -<br>TimeoutSecureSessionDelta and TimeoutSecureSession +<br>TimeoutSecureSessionDelta.<br> Execute GlPro VerifySessionIsClosed().<br>_<br> Close TCP connection.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Session<br>state machine).<br>Checked state machine transitions: Event E06 State Authenticated,<br>Action A6.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutSecureSession + TimeoutSecureSessionDelta + Timeout-<br>DescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.2.20 Keepalive before authentication

**Test ID** 70220

**Description** Create a secure session and send a SessionStatus / StatusKeepalive
before the session is authenticated. The BDUT should report an error.

**Expectation** The BDUT should report an error (SessionStatus / StatusUnauthenticated) and close the unauthenticated session.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 105 f 376

|Test ID|70220|
|---|---|
|**Description**|Create a secure session and send a SessionStatus / StatusKeepalive<br>before the session is authenticated. The BDUT should report an error.|
|**Expectation**|The BDUT should report an error (SessionStatus / Status-<br>Unauthenticated) and close the unauthenticated session.|


-----

|Setup| Execute GlPro SetupUnicast().<br>_|
|---|---|
|**Test procedure**| <br>Execute GlPro_SecureSessionRequestResponse().<br> <br>Send to the BDUT a SecureWrapper containing a SessionStatus<br>with the status StatusKeepalive.<br> <br>Wait for the BDUT to send a SecureWrapper containing a<br>SessionStatus with the status STATUS_UNAUTHENTICATED.<br>Timeout: TimeoutSessionAuthenticate. On timeout: Abort test and<br>return TestFailed.<br> <br>Execute GlPro_VerifySessionIsClosed().|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Session<br>state machine).<br>Checked state machine transitions: Event E04 State Unauthenticated,<br>Action A7.|
|**Duration**|TimeoutSessionResponse + TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**|The timeout with which the BDUT responds to unauthenticated frames is<br>undefined in the spec.|


##### 2.2.21 Close before authentication

**Test ID** 70221

**Description** Create a secure session. Close session before authentication. Try to
authenticate with correct credentials. This must fail.

**Expectation** The BDUT should not respond to the authentication because the session
is already closed.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 106 f 376

|Test ID|70221|
|---|---|
|**Description**|Create a secure session. Close session before authentication. Try to<br>authenticate with correct credentials. This must fail.|
|**Expectation**|The BDUT should not respond to the authentication because the session<br>is already closed.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test<br>procedure| Execute GlPro SecureSessionRequestResponse().<br>_<br> Send to the BDUT a SecureWrapper containing a SessionStatus<br>with the status StatusClose.<br> Send via the Testtool a Secure Wrapper frame encrypted with the<br>negotiated session key containing a SessionAuthenticate frame<br>with user id 1 and a valid MAC (encrypted using PasswordHash-<br>Default).<br> Wait for a SecureWrapper containing a SessionStatus. Timeout:<br>TimeoutSessionStatusAuthenticate.<br>o On timeout: Ok.<br>o On received SessionStatus (any status code): Abort test<br>and test failed.<br>o Explanation: The expectation is that the BDUT cannot even<br>decrypt out SessionAuthenticate since there is no session<br>key. The BDUT should silently ignore the non-decryptable<br>SecureWrapper. The main expected error case is that the<br>BDUT ignored our SessionStatus / StatusClose, in which<br>case there will be a response to our SessionAuthenticate.<br>Any response is an error.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Session<br>state machine).<br>Checked state machine transitions: Event E03 State Unauthenticated,<br>Action A4.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.2.22 Erroneous valid second SessionAuthenticate

**Test ID** 70222

**Description** Establish a secure session. Check that it is closed when sending a valid
second SessionAuthenticate frame.

**Expectation** The secure session is closed after the second SessionAuthenticate.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 107 f 376

|Test ID|70222|
|---|---|
|**Description**|Establish a secure session. Check that it is closed when sending a valid<br>second SessionAuthenticate frame.|
|**Expectation**|The secure session is closed after the second SessionAuthenticate.|


-----

|Setup| Execute GlPro SetupUnicast().<br>_|
|---|---|
|**Test procedure**| <br>Create secure session: Execute GlPro_SecureSession-<br>Setup(userId = 1).<br> <br>Send to the BDUT a Secure Wrapper containing a valid Session-<br>Authenticate.<br> <br>Execute  GlPro_WaitForSessionStatus(timeout = Timeout-<br>SessionStatusAuthenticate, expectedStatus = STATUS_-<br>AUTHENTICATION_FAILED).<br> <br>Execute GlPro_VerifySessionIsClosed().|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Session<br>state machine).<br>Checked state machine transitions: Event E01 State Authenticated,<br>Action A2.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**|It is not clearly specified in the spec what should happen on a second<br>SessionAuthenticate. The current suggestion is in line with this test.|


##### 2.2.23 Erroneous invalid second SessionAuthenticate

**Test ID** 70223

**Description** Establish a secure session. Check that it is closed when sending an
invalid second SessionAuthenticate frame.

**Expectation** The secure session is closed after the second SessionAuthenticate.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 108 f 376

|Test ID|70223|
|---|---|
|**Description**|Establish a secure session. Check that it is closed when sending an<br>invalid second SessionAuthenticate frame.|
|**Expectation**|The secure session is closed after the second SessionAuthenticate.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test procedure| Create secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Send to the BDUT a Secure Wrapper containing an invalid<br>SessionAuthenticate (valid format, wrong password).<br> Execute GlPro WaitForSessionStatus(timeout = Timeout-<br>_<br>SessionStatusAuthenticate, expectedStatus = STATUS -<br>_<br>AUTHENTICATION FAILED).<br>_<br> Execute GlPro VerifySessionIsClosed().<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.5.2.5 (Session<br>state machine).<br>Checked state machine transitions: Event E02 State Authenticated,<br>Action A2.|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**|It is not clearly specified in the spec what should happen on a second<br>SessionAuthenticate. The current suggestion is in line with this test.|


##### 2.2.24 Sequence Number tests

**Test ID** 70224

**Description** Establish a secure session. Verify that frames with strictly increasing
sequence numbers are accepted, also with big gaps. Verify that frames
with outdated sequence numbers are ignored. Verify receiving sequence
number is 48 bits wide in the server. Verify received sequence numbers
are compared to the highest-ever received sequence number, and not to
the last sequence number or to a received-frame counter.

**Expectation** BDUT accepts all frames with strictly increasing sequence numbers and
silently ignores all frames with the same or lower sequence numbers.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 109 f 376

|Test ID|70224|
|---|---|
|**Description**|Establish a secure session. Verify that frames with strictly increasing<br>sequence numbers are accepted, also with big gaps. Verify that frames<br>with outdated sequence numbers are ignored. Verify receiving sequence<br>number is 48 bits wide in the server. Verify received sequence numbers<br>are compared to the highest-ever received sequence number, and not to<br>the last sequence number or to a received-frame counter.|
|**Expectation**|BDUT accepts all frames with strictly increasing sequence numbers and<br>silently ignores all frames with the same or lower sequence numbers.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test<br>procedure| Create secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Execute LoPro VerifyUnicastSeqNrOk(seqNr = 0x7fff ffffffff).<br>_<br>o Expectation: This frame should be accepted, because the<br>sequence number is higher than the previous (0).<br> Execute LoPro VerifyUnicastSeqNrOk(seqNr = 0x8000<br>_<br>00000000).<br>o Expectation: This frame should be accepted, because the<br>sequence number is higher than the previous. This also<br>proves that the receiving sequence counter used in the<br>client is at least 48 bits wide and is interpreted unsigned.<br> Execute LoPro VerifyUnicastSeqNrFail(seqNr = 0x8000<br>_<br>00000000).<br>o Expectation: This frame should be ignored, because the<br>sequence number did not increase.<br> Execute LoPro VerifyUnicastSeqNrFail(seqNr = 100).<br>_<br>o Expectation: This frame should be ignored, because the<br>sequence number did not increase. (This would erroneously<br>succeed if the server compares the sequence number to an<br>internal 'number of received frames' counter.)<br> Execute LoPro VerifyUnicastSeqNrFail(seqNr = 101).<br>_<br>o Expectation: This frame should be ignored, because the<br>sequence number did not increase. (This would erroneously<br>succeed if the server compares the sequence number with<br>the sequence number of the previously received frame.)<br> Execute LoPro VerifyUnicastSeqNrOk(seqNr = 0x8000<br>_<br>00000001).<br>o Expectation: This frame should be accepted. Invalid<br>sequence numbers should not close the session.<br> Execute GlPro CloseSecureSession().<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.3 (Defending<br>against replay attacks).|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate + 6 *<br>TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**|The sentence "An incoming frame shall be accepted by the receiver if the<br>sequence identifier is greater than the sequence identifier of the<br>previously received frame on the same connection." is misleading. It<br>sounds like in the test sequence the 101 should be accepted while it must<br>definitely be dropped.|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 110 f 376


-----

Local procedures:

**Procedure name** LoPro_VerifyUnicastSeqNrOk(seqNr)

**Description** Verify that a frame with seqNr is accepted by the BDUT.

**Parameter description** seqNr: Sequence number of the frame to be sent.

**Procedure** - Set sending sequence number of session to seqNr.

                  - Execute GlPro_VerifySecureSessionIsFunctional().

**Return** 
**Open points**

**Procedure** LoPro_VerifyUnicastSeqNrFail(seqNr)
**name**

**Description** Verify that a frame with seqNr is ignored by the BDUT.

**Parameter** seqNr: Sequence number of the frame to be sent.
**description**

**Procedure** - Set sending sequence number of session to seqNr.

            - Send a SecureWrapper frame encrypted with the negotiated
session key, containing a DescriptionRequest.

            - Wait for a SecureWrapper frame containing a matching
DescriptionResponse. Timeout: TimeoutDescriptionResponse. On
timeout: Ok. On received DescriptionResponse: Abort test and
return TestFailed.

**Return** 
**Open points**

##### 2.2.25 SessionRequest via UDP is ignored

**Test ID** 70225

©C i h 1998 2018 KNX A i i V i 1 1 AS P 111 f 376

|Procedure name|LoPro VerifyUnicastSeqNrOk(seqNr)<br>_|
|---|---|
|**Description**|<br>Verify that a frame with seqNr is accepted by the BDUT.|
|**Parameter description**|seqNr: Sequence number of the frame to be sent.|
|**Procedure**| <br>Set sending sequence number of session to seqNr.<br> <br>Execute GlPro_VerifySecureSessionIsFunctional().|
|**Return**|-|
|**Open points**||

|Procedure<br>name|LoPro VerifyUnicastSeqNrFail(seqNr)<br>_|
|---|---|
|**Description**|Verify that a frame with seqNr is ignored by the BDUT.|
|**Parameter**<br>**description**|seqNr: Sequence number of the frame to be sent.|
|**Procedure**| <br>Set sending sequence number of session to seqNr.<br> <br>Send a SecureWrapper frame encrypted with the negotiated<br>session key, containing a DescriptionRequest.<br> <br>Wait for a SecureWrapper frame containing a matching<br>DescriptionResponse. Timeout: TimeoutDescriptionResponse. On<br>timeout: Ok. On received DescriptionResponse: Abort test and<br>return TestFailed.|
|**Return**|-|
|**Open points**||

|Test ID|70225|
|---|---|


-----

|Description|Send a SessionRequest to the BDUT via UDP, once with a UDP/NAT<br>HPAI and once with a TCP/NAT HPAI. Both should be ignored.<br>This tests:<br> Valid UDP SessionRequests should be ignored.<br> Invalid UDP SessionRequests which contain a TCP HPAI should<br>also be ignored. This tests whether the decision whether a<br>session is created via UDP is made on the actual transport (UDP<br>or TCP) or on the HPAI protocol indicator.|
|---|---|
|**Expectation**|No SessionResponse is received via UDP.|
|**Setup**| <br>(do not create any TCP connection, this test uses UDP)<br> <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Generate new random Curve25519 public/private key pair X /<br>X_private.<br> <br>Send a SessionRequest with the new public key X to the BDUT<br>via UDP, using a UDP/NAT HPAI (NAT == zero IP address, route<br>back).<br> <br>Wait for the BDUT to send a SessionResponse via UDP. Timeout<br>TimeoutSessionResponse. On reception of SessionResponse:<br>Abort test and return TestFailed.<br> <br>Send a SessionRequest with the new public key X to the BDUT<br>via UDP, using a TCP/NAT HPAI (NAT == zero IP address, route<br>back).<br> <br>Wait for the BDUT to send a SessionResponse via UDP. Timeout<br>TimeoutSessionResponse. On reception of SessionResponse:<br>Abort test and return TestFailed.|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|(KSG616-15.02 KNXnet-IP Security (2016.12.12) 2.2.3.3 (Defending<br>against replay attacks).|
|**Duration**|2 * TimeoutSessionResponse|
|**Mask version**||
|**Open points**||


##### 2.2.26 Sequential secure sessions in the same TCP connection

©C i h 1998 2018 KNX A i i V i 1 1 AS P 112 f 376


-----

|Test ID|70226|
|---|---|
|**Description**|Multiple secure sessions are opened and closed, non-overlapping, in<br>the same TCP connection.|
|**Expectation**|The TCP connection is not closed when a secure session is closed.|
|**Setup**| <br>Open a TCP connection.<br> <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Execute GlPro_SecureSessionSetup(userId = 1).<br> <br>Execute GlPro_VerifySecureSessionIsFunctional().<br> <br>Execute GlPro_CloseSecureSession().<br> <br>Wait TimeoutIdleTcpConnection - 2 * NetworkLatency.<br> <br>Explanation: The TCP connection should be still open.<br> <br>Execute GlPro_SecureSessionSetup(userId = 1).<br> <br>Execute GlPro_VerifySecureSessionIsFunctional().<br> <br>Execute GlPro_CloseSecureSession().|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN184 v01 KNXnet-IP Core v2 DP (2016.11.18) 2.2.2.2.3 (UDP and<br>TCP)|
|**Duration**|2 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>2 * TimeoutDescriptionResponse) + TimeoutIdleTcpConnection - 2 *<br>NetworkLatency|
|**Mask version**||
|**Open points**||


##### 2.2.27 Nested SecureWrapper is ignored (unicast)

**Test ID** 70227

**Description** Send to the BDUT a SecureWrapper containing a SecureWrapper
containing a DeviceDescriptorRead, through a secure session.

**Expectation** The BDUT ignores the nested SecureWrapper frame.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 113 f 376

|Test ID|70227|
|---|---|
|**Description**|Send to the BDUT a SecureWrapper containing a SecureWrapper<br>containing a DeviceDescriptorRead, through a secure session.|
|**Expectation**|The BDUT ignores the nested SecureWrapper frame.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test procedure| Setup secure session: Execute the procedure GlPro Secure-<br>_<br>SessionSetup(userId = 1).<br> Send a SecureWrapper frame containing a SecureWrapper<br>frame, containing a DescriptionRequest.<br> Wait for a SecureWrapper frame containing a matching<br>DescriptionResponse. Timeout: TimeoutDescriptionResponse.<br>o On timeout: OK.<br>o On received response: Abort test and return TestFailed.<br> Close secure session: Execute GlPro CloseSecureSession().<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.2.1.2.2.2 Secure<br>Wrapper|
|**Duration**|TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


##### 2.2.28 SessionRequest via TCP with non-route-back HPAI is ignored

**Test ID** 70228

**Description** Send to the BDUT a SessionRequest via TCP with a UDP route-back
HPAI and another one using a TCP non-route-back HPAI.

**Expectation** The BDUT ignores the SessionRequests because the only supported
HPAI is TCP route-back.

**Setup** - Execute GlPro_SetupUnicast().

**Test procedure** - Open TCP connection and send the following through the
BDUT:

              - Send SessionRequest with UDP-route-back-HPAI.

              - Send SessionRequest with TCP-HPAI with IP=client IP address
and port=3671.

              - Wait for SessionResponse. Timeout: TimeoutSessionResponse
+ NetworkLatency.
`o` On timeout: OK.
`o` On received SessionResponse: Abort test and return
TestFailed.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 114 f 376

|Test ID|70228|
|---|---|
|**Description**|Send to the BDUT a SessionRequest via TCP with a UDP route-back<br>HPAI and another one using a TCP non-route-back HPAI.|
|**Expectation**|The BDUT ignores the SessionRequests because the only supported<br>HPAI is TCP route-back.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Open TCP connection and send the following through the<br>BDUT:<br> <br>Send SessionRequest with UDP-route-back-HPAI.<br> <br>Send SessionRequest with TCP-HPAI with IP=client IP address<br>and port=3671.<br> <br>Wait for SessionResponse. Timeout: TimeoutSessionResponse<br>+ NetworkLatency.<br>`o` On timeout: OK.<br>`o` On received SessionResponse: Abort test and return<br>TestFailed.|


-----

|Cleanup| Execute GlPro CleanupUnicast().<br>_|
|---|---|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.2.3.6.4 Reception<br>and decoding|
|**Duration**|TimeoutSessionResponse + NetworkLatency|
|**Mask version**||
|**Open points**||


##### 2.2.29 Reject valid SessionAuthenticate after invalid Session- Authenticate

**Test ID** 70229

**Description** While establishing a secure session, first send a SessionAuthenticate
with an invalid password, and then a SessionAuthenticate with a valid
password. In any case a secure session must not be established.

**Expectation** The BDUT responds to the first invalid SessionAuthenticate frame with a
SessionStatus / STATUS_AUTHENTICATION_FAILED and either
ignores the second SessionAuthenticate frame or even closes the TCP
connection while the second SessionAuthenticate frame is sent.

**Setup** - Execute GlPro_SetupUnicast().

             - Open TCP connection.

**Test** - Execute GlPro_SecureSessionRequestResponse().
**procedure** - Send SessionAuthenticate frame with invalid password (MAC
calculated with invalid password). Do not wait for SessionStatus
response.

             - Send SessionAuthenticate frame with valid password (MAC
calculated with valid password).

             - Wait for the BDUT to send a SecureWrapper containing a SessionStatus frame with timeout TimeoutSessionStatusAuthenticate.
`o` On timeout: Abort test and return TestFailed.
`o` Check that status code is STATUS_AUTHENTICATION_FAILED.

             - Execute VerifySessionIsClosed().

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.2.3.8.3 Authenticating
**reference** the client to the device

©C i h 1998 2018 KNX A i i V i 1 1 AS P 115 f 376

|Test ID|70229|
|---|---|
|**Description**|While establishing a secure session, first send a SessionAuthenticate<br>with an invalid password, and then a SessionAuthenticate with a valid<br>password. In any case a secure session must not be established.|
|**Expectation**|The BDUT responds to the first invalid SessionAuthenticate frame with a<br>SessionStatus / STATUS_AUTHENTICATION_FAILED and either<br>ignores the second SessionAuthenticate frame or even closes the TCP<br>connection while the second SessionAuthenticate frame is sent.|
|**Setup**| <br>Execute GlPro_SetupUnicast().<br> <br>Open TCP connection.|
|**Test**<br>**procedure**| <br>Execute GlPro_SecureSessionRequestResponse().<br> <br>Send SessionAuthenticate frame with invalid password (MAC<br>calculated with invalid password). Do not wait for SessionStatus<br>response.<br> <br>Send SessionAuthenticate frame with valid password (MAC<br>calculated with valid password).<br> <br>Wait for the BDUT to send a SecureWrapper containing a Session-<br>Status frame with timeout TimeoutSessionStatusAuthenticate.<br>`o` On timeout: Abort test and return TestFailed.<br>`o` Check that status code is STATUS_AUTHENTICATION_-<br>FAILED.<br> <br>Execute VerifySessionIsClosed().|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.2.3.8.3 Authenticating<br>the client to the device|


-----

|Duration|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate|
|---|---|
|**Mask version**||
|**Open points**||


##### 2.2.30 Drop non-secure device management frames for secure device management connections

**Test ID** 70230

**Description** When a secure device management connection has been established (via
IP security, i.e. SECURE_WRAPPER), the device should not accept nonsecure device management frames (frames not wrapped in SECURE_WRAPPER).

This test creates a secure session and securely creates a device
management connection within it. It then tries to read a property using a
non-secure device management frame (a frame not wrapped in a
SECURER_WRAPPER) which otherwise belongs to the created device
management connection. This property read should be ignored.

Note: This test tests resistance against a potential attack where nonsecure device management frames are injected into secure traffic. This
test differs from the test for PID_SECURED_SERVICE_FAMILIES in that
the latter just tries to open a device management connection using a nonsecure ConnectRequest while this test uses a secure connect request
and a non-secure frame inside this connection.

**Expectation** Non-secure device management frames are dropped.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 116 f 376

|Test ID|70230|
|---|---|
|**Description**|When a secure device management connection has been established (via<br>IP security, i.e. SECURE_WRAPPER), the device should not accept non-<br>secure device management frames (frames not wrapped in SECURE_-<br>WRAPPER).<br>This test creates a secure session and securely creates a device<br>management connection within it. It then tries to read a property using a<br>non-secure device management frame (a frame not wrapped in a<br>SECURER_WRAPPER) which otherwise belongs to the created device<br>management connection. This property read should be ignored.<br>Note: This test tests resistance against a potential attack where non-<br>secure device management frames are injected into secure traffic. This<br>test differs from the test for PID_SECURED_SERVICE_FAMILIES in that<br>the latter just tries to open a device management connection using a non-<br>secure ConnectRequest while this test uses a secure connect request<br>and a non-secure frame inside this connection.|
|**Expectation**|Non-secure device management frames are dropped.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test<br>procedure| For securedService in [0, 1]:<br>o Open TCP connection.<br>o Set PID SECURED SERVICE FAMILIES[Device-<br>_ _ _<br>Management] = securedService.<br>o Execute GlPro SecureSessionSetup(userId = 1).<br>_<br>o Open Device Management connection C in secure session.<br>The ConnectRequest is wrapped in a SecureWrapper.<br>o Send via TCP a non-secure DeviceConfiguration-<br>Request/M PropRead.req to get PID OBJECT TYPE<br>_ _ _<br>(type=0, instance=1).<br> Note: This should be a valid configuration request for<br>connection C, except that it is not wrapped in a<br>SecureWrapper frame.<br>o Wait for response (DeviceConfigurationAck, or "Device-<br>ConfigurationRequest M PropRead.con"). Timeout:<br>_<br>TimeoutAppLayerResponse.<br> On timeout: Ok. Continue.<br> On response or ACK received:<br> Abort test and return TestFailed.<br>o Send via UDP a non-secure DeviceConfiguration-<br>Request/M PropRead.req to get PID OBJECT TYPE<br>_ _ _<br>(type=0, instance=1).<br> Note: This should be a valid configuration request for<br>connection C, except that it is not wrapped in a<br>SecureWrapper frame.<br>o Wait for response (DeviceConfigurationAck, or "Device-<br>ConfigurationRequest M PropRead.con"). Timeout:<br>_<br>TimeoutAppLayerResponse.<br> On timeout: Ok. Continue.<br> On response or ACK received:<br> Abort test and return TestFailed.<br>o Execute GlPro CloseSecureSession(closeTcp=1).<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast(). (Note: This will fallback to a<br>secure session which is required to clear the device management<br>security.)|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.3.1.4.3 (PID_-<br>SECURE_SERVICE_FAMILIES, Format)|
|**Duration**|<br>TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse + 2 * TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 117 f 376


-----

##### 2.2.31 Drop non-secure tunnelling frames for secure tunnelling connections

**Test ID** 70231

**Description** When a secure tunnelling connection has been established (via IP
security, i.e. SECURE_WRAPPER), the device should not accept nonsecure tunnelling frames.This test creates a secure session and securely
creates a tunnelling connection within it. It then sends a tunnelling request
using a non-secure TunnellingRequest frame which otherwise belongs to
the created tunnelling connection. This TunnellingRequest should should
be ignored and should not be routed.Note: This test tests resistance
against a potential attack where non-secure TunnellingRequest frames
are injected into secure traffic. This test differs from the test for PID_SECURED_SERVICE_FAMILIES in that the latter just tries to open a
tunnelling connection using a non-secure ConnectRequest while this test
uses a secure connect request and a non-secure frame inside this
connection.

**Expectation** Non-secure tunnelling frames are dropped.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 118 f 376

|Test ID|70231|
|---|---|
|**Description**|When a secure tunnelling connection has been established (via IP<br>security, i.e. SECURE_WRAPPER), the device should not accept non-<br>secure tunnelling frames.This test creates a secure session and securely<br>creates a tunnelling connection within it. It then sends a tunnelling request<br>using a non-secure TunnellingRequest frame which otherwise belongs to<br>the created tunnelling connection. This TunnellingRequest should should<br>be ignored and should not be routed.Note: This test tests resistance<br>against a potential attack where non-secure TunnellingRequest frames<br>are injected into secure traffic. This test differs from the test for PID_-<br>SECURED_SERVICE_FAMILIES in that the latter just tries to open a<br>tunnelling connection using a non-secure ConnectRequest while this test<br>uses a secure connect request and a non-secure frame inside this<br>connection.|
|**Expectation**|Non-secure tunnelling frames are dropped.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test<br>procedure| For securedService in [0, 1]:<br>o Open TCP connection.<br>o Set PID SECURED SERVICE FAMILIES[Tunnelling] =<br>_ _ _<br>securedService.<br>o Execute GlPro SecureSessionSetup(userId = 1).<br>_<br> Explanation: userId=1 can always be used for<br>tunnelling.<br>o Open tunnelling connection C in secure session. The<br>ConnectRequest is wrapped in a SecureWrapper.<br>o Send via TCP a non-secure "TunnellingRequest L Data.req<br>_<br>A DeviceDescriptor Read".<br>_ _<br> Note: This should be a valid tunnelling request for<br>connection C, except that it is not wrapped in a<br>SecureWrapper frame.<br>o Wait for response (TunnellingAck oder "TunnellingRequest<br>L Data.con A DeviceDescriptor Read"). Timeout: Timeout<br>_ _ _<br>TimeoutAppLayerResponse.<br> On timeout: Ok. Continue.<br> On response received:<br> Abort test and return TestFailed.<br>o Send via UDP a non-secure "TunnellingRequest L Data.req<br>_<br>A DeviceDescriptor Read".<br>_ _<br> Note: This should be a valid tunnelling request for<br>connection C, except that it is not wrapped in a<br>SecureWrapper frame.<br>o Wait for response (TunnellingAck oder "TunnellingRequest<br>L Data.con A DeviceDescriptor Read"). Timeout: Timeout<br>_ _ _<br>TimeoutAppLayerResponse.<br> On timeout: Ok. Continue.<br> On response received:<br> Abort test and return TestFailed.<br>o Close tunnelling connection C.<br>o Execute GlPro CloseSecureSession(closeTcp = 1).<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.3.1.4.3 (PID_-<br>SECURE_SERVICE_FAMILIES, Format)|
|**Duration**|<br>TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutDescriptionResponse + 2 * TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 119 f 376


-----

##### 2.2.32 Drop routing frames arriving via unicast

**Test ID** 70232

**Description** RoutingIndications sent via unicast UDP or TCP have no effect,
regardless of whether routing security is enabled or not.

**Expectation** Unicast RoutingIndications frames are ignored.

**Setup** - Execute GlPro_SetupMulticast().

**Test procedure** - Execute the following sequence twice: Once for enabled
routing security and once for disabled (0) routing security:
`o` Explanation: Test non-secure routing via unicast/UDP:
(This is strange but we want to test the general
behavior of the stack.)
`o` Send (via unicast UDP) to the BDUT a RoutingIndication, L_Data.ind, A_DeviceDescriptor_Read
`o` Wait (via unicast and multicast UDP) for a RoutingIndication, L_Data.ind, A_DeviceDescriptor_Response

                       - Timeout: TimeoutAppLayerResponse. On
received response: Abort test and return TestFailed

                       - Explanation: We should not receive a response
since RoutingIndication via unicast should be
ignored.
`o` Explanation: Test non-secure routing via TCP: (This is
strange but we want to test the general behavior of the
stack.)
`o` Send (via TCP) to the BDUT a RoutingIndication,
L_Data.ind, A_DeviceDescriptor_Read
`o` Wait (via TCP) for a RoutingIndication, L_Data.ind, A_DeviceDescriptor_Response

                       - Timeout: TimeoutAppLayerResponse. On
received response: Abort test and return TestFailed

                       - Explanation: We should not receive a response
since RoutingIndication via unicast should be
ignored.

**Cleanup**     - Execute GlPro_CleanupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 120 f 376

|Test ID|70232|
|---|---|
|**Description**|RoutingIndications sent via unicast UDP or TCP have no effect,<br>regardless of whether routing security is enabled or not.|
|**Expectation**|Unicast RoutingIndications frames are ignored.|
|**Setup**| <br>Execute GlPro_SetupMulticast().|
|**Test procedure**| <br>Execute the following sequence twice: Once for enabled<br>routing security and once for disabled (0) routing security:<br>`o` Explanation: Test non-secure routing via unicast/UDP:<br>(This is strange but we want to test the general<br>behavior of the stack.)<br>`o` Send (via unicast UDP) to the BDUT a Routing-<br>Indication, L_Data.ind, A_DeviceDescriptor_Read<br>`o` Wait (via unicast and multicast UDP) for a Routing-<br>Indication, L_Data.ind, A_DeviceDescriptor_Response<br> <br>Timeout: TimeoutAppLayerResponse. On<br>received response: Abort test and return Test-<br>Failed<br> <br>Explanation: We should not receive a response<br>since RoutingIndication via unicast should be<br>ignored.<br>`o` Explanation: Test non-secure routing via TCP: (This is<br>strange but we want to test the general behavior of the<br>stack.)<br>`o` Send (via TCP) to the BDUT a RoutingIndication,<br>L_Data.ind, A_DeviceDescriptor_Read<br>`o` Wait (via TCP) for a RoutingIndication, L_Data.ind, A_-<br>DeviceDescriptor_Response<br> <br>Timeout: TimeoutAppLayerResponse. On<br>received response: Abort test and return Test-<br>Failed<br> <br>Explanation: We should not receive a response<br>since RoutingIndication via unicast should be<br>ignored.|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|


-----

|Specification<br>reference|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.3.1.4.3 (PID -<br>_<br>SECURE SERVICE FAMILIES, Format)<br>_ _|
|---|---|
|**Duration**|<br>TimeoutTimerNotifyResponse + ConfirmedRestart + TimeoutApp-<br>LayerResponse|
|**Mask version**||
|**Open points**||


##### 2.2.33 KNX connections are strictly associated with a single secure session

**Test ID** 70233

**Description** A secure session may contain many KNX connections, but all frames
belonging to a KNX connection belong only to one secure
session.Setup:

             - Secure session S1 (with password P1) with management user (id
1). Device management connection C1 within this.

             - Secure session S2 (with password P2) with NonMgmtUserId.

             - Frame F is send over S2, but the payload P of F belongs to C1.
Payload P is 100% valid in the context of C1.

             - Expectation: Frame F is ignored by the BDUT. Because: It is
encrypted with the wrong authorization (non-management user
instead of management user). The BDUT must filter accordingly.

**Expectation** - Frames received on session S2 for KNX connection C1 which
was not established in session S2 are dropped.

**Setup** - If TunnellingUserA == 0:
`o` Abort test and return TestPassed.

             - Execute GlPro_SetupUnicast(userId = TunnellingUserA,
passwordHash = PasswordHashDefault).

             - Open TCP connection.

             - Execute GlPro_SecureSessionSetup(userId = 1). Session S1.

             - Execute GlPro_SecureSessionSetup(userId = TunnellingUserA).
Session S2.

             - (Both secure sessions in the same TCP connection.)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 121 f 376

|Test ID|70233|
|---|---|
|**Description**|A secure session may contain many KNX connections, but all frames<br>belonging to a KNX connection belong only to one secure<br>session.Setup:<br> <br>Secure session S1 (with password P1) with management user (id<br>1). Device management connection C1 within this.<br> <br>Secure session S2 (with password P2) with NonMgmtUserId.<br> <br>Frame F is send over S2, but the payload P of F belongs to C1.<br>Payload P is 100% valid in the context of C1.<br> <br>Expectation: Frame F is ignored by the BDUT. Because: It is<br>encrypted with the wrong authorization (non-management user<br>instead of management user). The BDUT must filter accordingly.|
|**Expectation**| <br>Frames received on session S2 for KNX connection C1 which<br>was not established in session S2 are dropped.|
|**Setup**| <br>If TunnellingUserA == 0:<br>`o` Abort test and return TestPassed.<br> <br>Execute GlPro_SetupUnicast(userId = TunnellingUserA,<br>passwordHash = PasswordHashDefault).<br> <br>Open TCP connection.<br> <br>Execute GlPro_SecureSessionSetup(userId = 1). Session S1.<br> <br>Execute GlPro_SecureSessionSetup(userId = TunnellingUserA).<br>Session S2.<br> <br>(Both secure sessions in the same TCP connection.)|


-----

|Test procedure| Open DevMgmt connection C1 in session S1.<br> Send Frame over S2: Send a SecureWrapper containing an<br>DeviceConfigurationRequest/M PropRead.req to read PID -<br>_ _<br>OBJECT TYPE (type=0, instance=1).<br>_<br>o Note: The Frame sent above must be generated so that it<br>would be 100% valid when sent on connection C1+S1, but<br>it is sent on session S2 instead of S1.<br> Wait for the response. Timeout: Timeout TimeoutAppLayer-<br>Response.<br>o On timeout: Ok.<br>o On received read response:<br>o<br> Abort test and return TestFailed.<br> Explanation: The property read should have been<br>be ignored because it is part of a device<br>management connection (C1) which was<br>established within secure session S1.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.8 (Relation<br>between secure sessions and KNXnet/IP connections)|
|**Duration**|2 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate) +<br>TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


##### 2.2.34 KNX connection is implicitly closed when enclosing secure session is closed

**Test ID** 70234

**Description** A secure session is created with a device management connection
within it. The secure session is closed and a new secure session is
created. A connection state request is sent which should return 'not
connected'.

**Expectation** The connection state request returns 'not connected' because the device
management connection was implicitly closed when closing the first
secure session.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 122 f 376

|Test ID|70234|
|---|---|
|**Description**|A secure session is created with a device management connection<br>within it. The secure session is closed and a new secure session is<br>created. A connection state request is sent which should return 'not<br>connected'.|
|**Expectation**|The connection state request returns 'not connected' because the device<br>management connection was implicitly closed when closing the first<br>secure session.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test procedure| Execute GlPro SecureSessionSetup(userId = 1).<br>_<br> Open DevMgmt connection C in secure session.<br> Execute GlPro CloseSecureSession(closeTcp = 0).<br>_<br> Execute GlPro SecureSessionSetup(openTcp = 0, userId = 1).<br>_<br> Send a ConnectionStateRequest to the BDUT, using the<br>connection id of the previous device management connection,<br>through the new secure session.<br> Wait for response. Timeout: TimeoutAppLayerResponse.<br> On timeout or response == "is connected" abort test and return<br>TestFailed.<br> Execute GlPro CloseSecureSession().<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG616-16.02 KNXnet-IP Security (2017.02.21) 2.4.2 (Closing a secure<br>session)|
|**Duration**|2 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate) +<br>TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


##### 2.2.35 Different public key after power-cycle

**Test ID** 70235

**Description** The BDUT is power-cycled and a secure session is initiated. The public
key from the BDUT is recorded. The BDUT is power-cycled again and
the public key is recorded again. Both public keys must be different.

This test tests whether the BDUT at least tries to generate different public
keys after each power cycle. This means it must have some entropy after
a power cycle. However, this test does not test whether there is enough
entropy to be secure.

**Expectation** Both public keys must be different.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 123 f 376

|Test ID|70235|
|---|---|
|**Description**|The BDUT is power-cycled and a secure session is initiated. The public<br>key from the BDUT is recorded. The BDUT is power-cycled again and<br>the public key is recorded again. Both public keys must be different.<br>This test tests whether the BDUT at least tries to generate different public<br>keys after each power cycle. This means it must have some entropy after<br>a power cycle. However, this test does not test whether there is enough<br>entropy to be secure.|
|**Expectation**|Both public keys must be different.|
|**Setup**|-|


-----

|Test<br>procedure| For n in [1..3]:<br>o Execute GlPro PowerCycleBdut().<br>_<br>o Execute GlPro SetupUnicast().<br>_<br>o Execute GlPro SecureSessionRequestResponse().<br>_<br>o Remember public key from BDUT.<br> Check that all public keys from BDUT are pairwise different.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.2.4.1 Random<br>number generation|
|**Duration**|3 * TimeoutSessionResponse|
|**Mask version**||
|**Open points**||


##### 2.2.36 DisconnectRequest and ConnectionStateRequest return E_- CONNECTION_ID outside of associated secure session

**Test ID** 70236

**Description** A secure session is created, and within this a KNX connection. A
DisconnectRequest and a ConnectionStateRequest is sent from another
secure session (if supported) and also from outside any secure session.

**Expectation** The BDUT responds to all DisconnectRequests and ConnectionStateRequests outside of the associated secure session with E_CONNECTION_ID.

**Setup** - Execute GlPro_SetupUnicast().

             - Open TCP connection.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 124 f 376

|Test ID|70236|
|---|---|
|**Description**|A secure session is created, and within this a KNX connection. A<br>DisconnectRequest and a ConnectionStateRequest is sent from another<br>secure session (if supported) and also from outside any secure session.|
|**Expectation**|The BDUT responds to all DisconnectRequests and ConnectionState-<br>Requests outside of the associated secure session with E_-<br>CONNECTION_ID.|
|**Setup**|<br> <br>Execute GlPro_SetupUnicast().<br> <br>Open TCP connection.|


-----

|Test<br>procedure| Execute GlPro SecureSessionSetup(userId = 1). (Remember this<br>_<br>as session S1.)<br> Execute GlPro SecureSessionSetupTrySecondSession().<br>_<br>(Remember this as session S2.)<br>o If second session could not be established: Continue with<br>test. Some cases will not be executed.<br> (Note: S1 and S2 are in the same TCP connection.)<br> Open DevMgmt connection C1 in session S1.<br> If this fails: Abort test and return TestFailed.<br> If S2 could be established:<br>o Send ConnectionStateRequest for C1 over S2 and wait for<br>response over S2. Timeout: TimeoutKnxConnectionState-<br>Response.<br> On timeout: Abort test and return TestFailed. (BDUT<br>must respond with E CONNECTION ID.)<br>_ _<br> On E CONNECTION ID: Ok.<br>_ _<br> On any other response: Abort test and return Test-<br>Failed.<br> Send plain ConnectionStateRequest for C1 over TCP outside of<br>S1 and S2 and wait for plain response over TCP. Timeout:<br>TimeoutKnxConnectionStateResponse.<br>o On timeout: Abort test and return TestFailed. (BDUT must<br>respond with E CONNECTION ID.)<br>_ _<br>o On E CONNECTION ID: Ok.<br>_ _<br>o On any other response: Abort test and return TestFailed.<br> If S1 could be established:<br>o Send DisconnectRequest for C1 over S2 and wait for<br>response over S2. Timeout: TimeoutKnxDisconnect-<br>Response.<br> On timeout: Abort test and return TestFailed. (BDUT<br>must respond with E CONNECTION ID.)<br>_ _<br> On E CONNECTION ID: Ok.<br>_ _<br> On any other response: Abort test and return Test-<br>Failed.<br> Send plain DisconnectRequest for C1 over TCP outside of S1 and<br>S2 and wait for plain response over TCP. Timeout: TimeoutKnx-<br>DisconnectResponse.<br>o On timeout: Abort test and return TestFailed. (BDUT must<br>respond with E CONNECTION ID.)<br>_ _<br>o On E CONNECTION ID: Ok.<br>_ _<br>o On any other response: Abort test and return TestFailed.<br> Explanation: Check wheter C1 is still responsive:<br> Send ConnectionStateRequest for C1 over S1 and wait for<br>response over S1. Timeout: TimeoutKnxConnectionState-<br>Response.|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 125 f 376


-----

|Col1|o On timeout or error: Abort test and return TestFailed.|
|---|---|
|**Cleanup**| <br>Close TCP connection.<br> <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.4.1 Secure session<br>setup|
|**Duration**|2 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate<br>+ TimeoutKnxConnectionStateResponse + TimeoutKnxDisconnect-<br>Response) + TimeoutKnxConnectResponse|
|**Mask version**||
|**Open points**||


##### 2.2.37 Invalid SecureWrapper does not extend session timeout

**Test ID** 70237

**Description** Create a secure session and send an invalid SecureWrapper half way
into the session timeout. This must not extend the session timeout.

In addition a KNX connection is created and kept alive in the
background, to avoid that the timeout of the secure session immediately
closes the TCP connection in which case it is undefined (and thus not
testable) whether a SessionStatus/StatusTimeout is sent.

**Expectation** The secure session gets closed after the simple session timeout,
ignoring the invalid SecureWrapper.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 126 f 376

|Test ID|70237|
|---|---|
|**Description**|Create a secure session and send an invalid SecureWrapper half way<br>into the session timeout. This must not extend the session timeout.<br>In addition a KNX connection is created and kept alive in the<br>background, to avoid that the timeout of the secure session immediately<br>closes the TCP connection in which case it is undefined (and thus not<br>testable) whether a SessionStatus/StatusTimeout is sent.|
|**Expectation**|The secure session gets closed after the simple session timeout,<br>ignoring the invalid SecureWrapper.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test procedure| Open TCP connection.<br> Open device management connection inside the same TCP<br>connection as the secure session but outside of the secure<br>session. This is just done to prevent the TCP connection from<br>closing immediately after the secure session timeout.<br> Create secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Remember time T1.<br> Wait for TimeoutSecureSession / 2.<br> Send an invalid SecureWrapper containing a valid Description-<br>Request, but containing an invalid session identifier. All other<br>aspects of the SecureWrapper should be correct and consistent.<br>In particular it should have a correct MAC.<br> Wait for the BDUT to send a Secure Wrapper containing a<br>Session Status with the Status 'Status Timeout'. Timeout:<br>_ _<br>TimeoutSecureSession / 2 + TimeoutSecureSessionDelta.<br>Measure time T = T time when Session Status was received -<br>_ _ _ _ _ _<br>T1.<br>o On timeout: Abort test and return TestFailed.<br>o Verify that T is between (inclusive) TimeoutSecureSession<br>-TimeoutSecureSessionDelta and TimeoutSecureSession +<br>TimeoutSecureSessionDelta.<br> Execute GlPro VerifySessionIsClosed().<br>_<br> Close TCP connection.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.4.1 Secure session<br>setup|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutSecureSession + TimeoutSecureSessionDelta + Timeout-<br>DescriptionResponse + TimeoutKnxConnectResponse.|
|**Mask version**||
|**Open points**||


##### 2.2.38 Session timeouts of concurrent secure sessions are independent

**Test ID** 70238

**Description** Two secure sessions are created. The first secure session is kept busy.
The second secure session will eventually time out.

**Expectation** The idle secure session will time out.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 127 f 376

|Test ID|70238|
|---|---|
|**Description**|Two secure sessions are created. The first secure session is kept busy.<br>The second secure session will eventually time out.|
|**Expectation**|The idle secure session will time out.|


-----

|Setup| Execute GlPro SetupUnicast().<br>_<br> Open TCP connection.|
|---|---|
|**Test procedure**| <br>Execute GlPro_SecureSessionSetup(userId = 1). (Remember this<br>as session S1.)<br> <br>Execute GlPro_SecureSessionTrySecondSession(). (Remember<br>this as session S2.)<br>`o` If S2 could not be established: Abort test and return Test-<br>Passed. The BDUT behavior is valid (just supports a single<br>secure session) and the test criterion is not supported by<br>the BDUT which is valid in this case.<br> <br>Remember time T1.<br> <br>Wait for TimeoutSecureSession / 2.<br> <br>Send SessionStatus/StatusKeepalive over S1.<br> <br>Wait for SessionStatus/StatusTimeout over S2. Timeout: Timeout-<br>SecureSession / 2 + TimeoutSecureSessionDelta. Measure time<br>T = T_time_when_Session_Status_was_received - T1.<br>`o` On timeout: Abort test and return TestFailed.<br>`o` Verify that T is between (inclusive) TimeoutSecureSession<br>-TimeoutSecureSessionDelta and TimeoutSecureSession<br>+ TimeoutSecureSessionDelta.<br> <br>Execute GlPro_VerifySessionIsClosed() for S2.<br> <br>Execute GlPro_VerifySecureSessionIsFunctional() for S1.|
|**Cleanup**| <br>Close TCP connection.<br> <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.4.1 Secure session<br>setup|
|**Duration**|2 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutKnxConnectionStateResponse + TimeoutKnxDisconnect-<br>Response) + TimeoutKnxConnectResponse|
|**Mask version**||
|**Open points**||


##### 2.2.39 M_Prop services honour Security Mode

**Test ID** 70239

©C i h 1998 2018 KNX A i i V i 1 1 AS P 128 f 376

|Test ID|70239|
|---|---|


-----

|Description|Read/write properties using M PropRead/Write while security mode is<br>_<br>enabled and disabled (via UDP).<br>Security mode enabled:<br> Read PID DEVICE DESCRIPTOR: Can be read.<br>_ _<br> Read PID TUNNELLING ADDRESSES: Cannot be read.<br>_ _<br>(Only tested if Tunnelling v2 is supported.)<br> Write PID PROGMODE with 1: Cannot be written.<br>_<br> Read PID TOOL KEY: Cannot be read.<br>_ _<br>Security mode is disabled:<br> Read PID DEVICE DESCRIPTOR: Can be read.<br>_ _<br> Read PID TUNNELLING ADDRESSES: Can be read. (Only<br>_ _<br>tested if Tunnelling v2 is supported.)<br> Write PID PROGMODE with 1: Can be written.<br>_<br> Read PID TOOL KEY: Cannot be read.<br>_ _|
|---|---|
|**Expectation**|The read/write accesses fail or succeed according to the access<br>policies of the individual properties listed in the description.|
|**Setup**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 129 f 376


-----

|Test procedure| Use UDP communication for M Prop communication in the<br>_<br>following.<br> Execute PropSetup SecurityMode(securityMode = enable).<br>_<br> Open non-secure device management connection.<br> Send DeviceConfigurationRequest with M PropRead.req<br>_<br>for PID DEVICE DESCRIPTOR.<br>_ _<br> Wait for DeviceConfigurationRequest with M PropRead.con.<br>_<br>Timeout: TimeoutAppLayerResponse.<br>o On timeout or error response: Abort test and return Test-<br>Failed.<br> Send DeviceConfigurationRequest with M PropRead.req for<br>_<br>PID TUNNELLING ADDRESSES.<br>_ _<br> Wait for DeviceConfigurationRequest with M PropRead.con.<br>_<br>Timeout: TimeoutAppLayerResponse.<br>o On positive response received: Abort test and return<br>TestFailed.<br> Send DeviceConfigurationRequest with M PropWrite.req for<br>_<br>PID PROGMODE, value 1.<br>_<br> Wait for DeviceConfigurationRequest with M PropWrite.con.<br>_<br>Timeout: TimeoutAppLayerResponse.<br>o On positive response received: Abort test and return<br>TestFailed.<br> Send DeviceConfigurationRequest with M PropRead.req for<br>_<br>PID TOOL KEY.<br>_ _<br> Wait for DeviceConfigurationRequest with M PropRead.con.<br>_<br>Timeout: TimeoutAppLayerResponse.<br>o On positive response received: Abort test and return<br>TestFailed.<br> Close non-secure device management connection.<br> Execute PropSetup SecurityMode(securityMode = disable).<br>_<br> Open non-secure device management connection.<br> Send DeviceConfigurationRequest with M PropRead.req for<br>_<br>PID DEVICE DESCRIPTOR.<br>_ _<br> Wait for DeviceConfigurationRequest with M PropRead.con.<br>_<br>Timeout: TimeoutAppLayerResponse.<br>o On timeout or error response: Abort test and return Test-<br>Failed.<br> Send DeviceConfigurationRequest with M PropRead.req for<br>_<br>PID TUNNELLING ADDRESSES.<br>_ _<br> Wait for DeviceConfigurationRequest with M PropRead.con.<br>_<br>Timeout: TimeoutAppLayerResponse.<br>o On timeout or error response: Abort test and return Test-<br>Failed.<br> Send DeviceConfigurationRequest with M PropWrite.req for<br>_<br>PID PROGMODE, value 1.<br>_|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 130 f 376


-----

|Col1| Wait for DeviceConfigurationRequest with M PropWrite.con.<br>_<br>Timeout: TimeoutAppLayerResponse.<br>o On timeout or error response: Abort test and return Test-<br>Failed.<br> Send DeviceConfigurationRequest with M PropRead.req for<br>_<br>PID TOOL KEY.<br>_ _<br> Wait for DeviceConfigurationRequest with M PropRead.con.<br>_<br>Timeout: TimeoutAppLayerResponse.<br>o On positive response received: Abort test and return<br>TestFailed.<br> Close non-secure device management connection.|
|---|---|
|**Cleanup**| <br>Close device management connection if necessary.<br> <br>Execute PropSetup_SecurityMode(securityMode = disable).<br> <br>Execute PropSetup_SetProgrammingMode(progMode = 0).|
|**Specification**<br>**reference**|KSG616-19.01 KNXnet-IP Security (2017.06.22) 2.2.1.4.3 (KNXnet/IP<br>Device Management)|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.2.40 Covered aspects

**2.2.40.1 Overview of covered transitions in the transition table**

**Event \** **IDLE** **UNAUTHENTICATED AUTHENTICATED Description**
**State**

**E00** 2.2.2 (not possible) (not possible) Received SessionRequest

**E01** (not 2.2.2 2.2.22 Received Session
possible) Authenticate (valid)

**E02** (not 2.2.15 2.2.23 Received Session
possible) Authenticate (invalid)

**E03** (not 2.2.21 2.2.2, 2.2.7 Received StatusClose
possible)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 131 f 376

|Event \<br>State|IDLE|UNAUTHENTICATED|AUTHENTICATED|Description|
|---|---|---|---|---|
|**E00**|2.2.2|(not possible)|(not possible)|Received Session-<br>Request|
|**E01**|(not<br>possible)|2.2.2|2.2.22|Received Session<br>Authenticate (valid)|
|**E02**|(not<br>possible)|2.2.15|2.2.23|Received Session<br>Authenticate (invalid)|
|**E03**|(not<br>possible)|2.2.21|2.2.2, 2.2.7|Received StatusClose|


-----

|E04|(not<br>possible)|2.2.20|2.2.18|Received Status-<br>Keepalive|
|---|---|---|---|---|
|**E05**|(not<br>possible)|2.2.13|2.2.2, 2.2.5|Received Secure-<br>Wrapper|
|**E06**|(not<br>possible)|2.2.16|2.2.19|Session timeout|


**2.2.40.2 Tested combinations and scenarios between TCP connections, secure**
**sessions and KNXnet/IP connections**

**V is contained in >** **Tested aspect** **Outer TCP** **Outer Secure**
**connection** **session**

**Inner Secure** concurrent secure 2.2.10 (not possible)
**session** sessions in

sequenrtial secure 2.2.26
sessions in

is strictly contained in one 2.2.3

is closed when outer ... is 2.2.9
closed

**Inner KNXnet/IP** concurrent KNXnet/IP 2.5.23 2.5.24
**connection** connections in

sequential KNXnet/IP 2.5.25 2.5.26
connections in

is strictly contained in one 2.5.27, 2.5.28 2.2.33

is closed when outer ... is 2.5.28 2.2.34
closed

**2.2.40.3 Tested Core connection requests vs secured/non-secure service family**

**CONNECT_REQUEST of** **DEVICE_MGMT_-** **TUNNEL_CONNECTION**
**type ->** **CONNECTION**

**PID_SECURED_-** **non-secure** **secure (1)** **non-secure** **secure (1) for**
**SERVICE_FAMILIES is -** **(0) for** **for** **(0) for** **TUNNELLING**

**>** **DEV_MGMT** **DEV_MGMT** **TUNNELLING**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 132 f 376

|V is contained in >|Tested aspect|Outer TCP<br>connection|Outer Secure<br>session|
|---|---|---|---|
|**Inner Secure**<br>**session**|concurrent secure<br>sessions in|2.2.10|(not possible)|
|**Inner Secure**<br>**session**|sequenrtial secure<br>sessions in|2.2.26|2.2.26|
|**Inner Secure**<br>**session**|is strictly contained in one|2.2.3|2.2.3|
|**Inner Secure**<br>**session**|is closed when outer ... is<br>closed|2.2.9|2.2.9|
|**Inner KNXnet/IP**<br>**connection**|concurrent KNXnet/IP<br>connections in|2.5.23|2.5.24|
|**Inner KNXnet/IP**<br>**connection**|sequential KNXnet/IP<br>connections in|2.5.25|2.5.26|
|**Inner KNXnet/IP**<br>**connection**|is strictly contained in one|2.5.27, 2.5.28|2.2.33|
|**Inner KNXnet/IP**<br>**connection**|is closed when outer ... is<br>closed|2.5.28|2.2.34|

|CONNECT REQUEST of<br>_<br>type ->|DEVICE MGMT -<br>_ _<br>CONNECTION|Col3|TUNNEL CONNECTION<br>_|Col5|
|---|---|---|---|---|
|**PID_SECURED_-**<br>**SERVICE_FAMILIES is -**<br>**> **|**non-secure**<br>**(0) for**<br>**DEV_MGMT**|**secure (1)**<br>**for**<br>**DEV_MGMT**|**non-secure**<br>**(0) for**<br>**TUNNELLING**|**secure (1) for**<br>**TUNNELLING**|


-----

|Unwrapped CONNECT -<br>_<br>REQUEST|Access<br>granted<br>2.5.21,<br>2.5.22,<br>2.5.27,<br>2.5.28,<br>2.5.25, 2.3.4,<br>2.3.8|Access<br>denied<br>2.3.4, 2.3.8|Access<br>granted<br>2.3.4, 2.3.8|Access denied<br>2.3.4, 2.3.8|
|---|---|---|---|---|
|**Wrapped CONNECT_-**<br>**REQUEST in dev-mgmt**<br>**user (1) secure session**|Access<br>granted<br>2.2.30,<br>2.5.26, 2.3.4,<br>2.3.8|Access<br>granted<br>2.2.30,<br>2.3.4, 2.3.8|Access<br>granted<br>2.2.31, 2.3.4,<br>2.3.8|Access granted<br>2.2.31, 2.3.4,<br>2.3.8|
|**Wrapped CONNECT_-**<br>**REQUEST in tunnelling**<br>**user (>=2) secure**<br>**session**|Access<br>granted<br>2.3.8|Access<br>denied<br>2.3.8|Access<br>granted<br>2.3.8|Access granted if<br>and only if<br>allowed by PID_-<br>TUNNELLING_-<br>USERS and<br>related<br>properties<br>2.3.8|


### 2.3 Resources

Note: Testing access restrictions on properties and read-only/write-only semantics is
done using the EITT. The following tests test whether modifying the properties has the
desired effect on the BDUT.

##### 2.3.1 Checking of Resources – PID_BACKBONE_KEY

**Test ID** 70301

**Description** Modify device backbone key and check that the new backbone key is
used by the BDUT.

**Expectation** The contents of the PID_BACKBONE_KEY resource affects secure
multicast communication.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 133 f 376

|Test ID|70301|
|---|---|
|**Description**|Modify device backbone key and check that the new backbone key is<br>used by the BDUT.|
|**Expectation**|The contents of the PID_BACKBONE_KEY resource affects secure<br>multicast communication.|


-----

|Setup|-|
|---|---|
|**Test procedure**| <br>GlPro_SetupMulticast(multicastAddress = SystemSetup-<br>MulticastAddress, backboneKey = BackboneKey1).<br> <br>GlPro_VerifyMulticastIsFunctional(multicastAddress = System-<br>SetupMulticastAddress, backboneKey = BackboneKey1).<br> <br>GlPro_SetupMulticast(multicastAddress = SystemSetup-<br>MulticastAddress, backboneKey = BackboneKey2).<br> <br>GlPro_VerifyMulticastIsFunctional(multicastAddress = System-<br>SetupMulticastAddress, backboneKey = BackboneKey2).|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.3.1.1 (PID_-<br>BACKBONE_KEY).|
|**Duration**|<br>2 * (TimeoutTimerNotifyResponse + TimeoutDescriptionResponse) + 2<br>* ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.3.2 Checking of Resources – PID_DEVICE_AUTHENTICATION_CODE

**Test ID** 70302

**Description** Modify Device Authentication code and check the new device
authentication code is used by the device.

**Expectation** The contents of the PID_DEVICE_AUTHENTICATION_CODE resource
affects secure unicast communication.

**Setup** - Execute GlPro_SetupUnicast(deviceAuthenticationCode =
Fdsk+1). (Fdsk + 1 means to use the 16 bytes of the Fdsk and
increase the last byte by 1, potentially wrapping from ffh to 00h.)

**Test procedure** - Execute GlPro_TestSecureSessionSetup(userId = 1, deviceAuthenticationCode = Fdsk+1).

**Cleanup** - Execute GlPro_CleanupUnicast()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 134 f 376

|Test ID|70302|
|---|---|
|**Description**|Modify Device Authentication code and check the new device<br>authentication code is used by the device.|
|**Expectation**|The contents of the PID_DEVICE_AUTHENTICATION_CODE resource<br>affects secure unicast communication.|
|**Setup**| <br>Execute GlPro_SetupUnicast(deviceAuthenticationCode =<br>Fdsk+1). (Fdsk + 1 means to use the 16 bytes of the Fdsk and<br>increase the last byte by 1, potentially wrapping from ffh to 00h.)|
|**Test procedure**| <br>Execute GlPro_TestSecureSessionSetup(userId = 1, device-<br>AuthenticationCode = Fdsk+1).|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast()|


-----

|Specification<br>reference|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.3.1.2 (PID DEVICE -<br>_ _<br>AUTHENTICATION CODE)<br>_|
|---|---|
|**Duration**|<br>2 * (1 s + TimeoutSessionResponse + TimeoutSessionStatus-<br>Authenticate + TimeoutDescriptionResponse) + 3 * ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.3.3 Checking of Resources – PID_PASSWORD_HASHES

**Test ID** 70303

**Description** Modify password hash and check whether logins fails/succeeds with a
different/correct password. Do this for management user and a nonmanagement user.

**Expectation** Login (a successful SESSION_AUTHENTICATE) is only possible with a
password hash matching the specified user id and fails in all other
cases.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 135 f 376

|Test ID|70303|
|---|---|
|**Description**|Modify password hash and check whether logins fails/succeeds with a<br>different/correct password. Do this for management user and a non-<br>management user.|
|**Expectation**|Login (a successful SESSION_AUTHENTICATE) is only possible with a<br>password hash matching the specified user id and fails in all other<br>cases.|
|**Setup**|-|


-----

|Test procedure| Execute GlPro SetupUnicast(userId = 1, passwordHash =<br>_<br>PasswordHash1).<br> Execute LoPro VerifyUserLogin(userId = 1, passwordHash =<br>_<br>PasswordHashDefault, expectedStatus = Status -<br>_<br>Authentication Failed).<br>_<br> Execute LoPro VerifyUserLogin(userId = 1, passwordHash =<br>_<br>PasswordHash1, expectedStatus = Status Authentication -<br>_ _<br>Success).<br> Execute GlPro CloseSecureSession().<br>_<br> Execute GlPro SetupUnicast(userId = 1, passwordHash =<br>_<br>PasswordHashDefault).<br> Execute LoPro VerifyUserLogin(userId = 1, passwordHash =<br>_<br>PasswordHashDefault, expectedStatus = Status -<br>_<br>Authentication Success).<br>_<br> Execute GlPro CloseSecureSession().<br>_<br> Execute LoPro VerifyUserLogin(userId = 1, passwordHash =<br>_<br>PasswordHash1, expectedStatus = Status Authentication -<br>_ _<br>Failed).<br> If NonMgmtUserId != 0:<br>o Execute GlPro SetupUnicast(userId = NonMgmtUserId,<br>_<br>passwordHash = PasswordHash1).<br>o Execute LoPro VerifyUserLogin(userId = NonMgmtUser-<br>_<br>Id, passwordHash = PasswordHashDefault, expected-<br>Status = Status Authentication Failed).<br>_ _<br>o Execute LoPro VerifyUserLogin(userId = NonMgmtUser-<br>_<br>Id, passwordHash = PasswordHash1, expectedStatus =<br>Status Authentication Success).<br>_ _<br>o Execute GlPro CloseSecureSession().<br>_<br>o Execute GlPro SetupUnicast(userId = NonMgmtUserId,<br>_<br>passwordHash = PasswordHashDefault).<br>o Execute LoPro VerifyUserLogin(userId = NonMgmtUser-<br>_<br>Id, passwordHash = PasswordHashDefault, expected-<br>Status = Status Authentication Success).<br>_ _<br>o Execute GlPro CloseSecureSession().<br>_<br>o Execute LoPro VerifyUserLogin(userId = NonMgmtUser-<br>_<br>Id, passwordHash = PasswordHash1, expectedStatus =<br>Status Authentication Failed).<br>_ _|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.3.1.3 (PID_-<br>PASSWORD_HASHES)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 136 f 376


-----

|Duration|((NonMgmtUserId != 0) + 1) * 2 * (2 * TimeoutSessionResponse + 2 *<br>TimeoutSessionStatusAuthenticate) + ((NonMgmtUserId != 0) + 1) * 2 *<br>ConfirmedRestart|
|---|---|
|**Mask version**||
|**Open points**||


Local procedures:

**Procedure** LoPro_VerifyUserLogin(userId, passwordHash, deviceAuthentication**name** Code = Fdsk, expectedStatus)

**Description** Verify whether user login fails or succeeds.

**Parameter** userId: User id for secure session.
**description** passwordHash: Password hash corresponding to the user id.
deviceAuthenticationCode: Device authentication code.
expectedStatus: Expected status in response to SESSION_AUTHENTICATE, either STATUS_AUTHENTICATION_FAILED or
STATUS_AUTHENTICATION_SUCCESS.

**Procedure** - Execute GlPro_SecureSessionRequestResponse(deviceAuthenticationCode = deviceAuthenticationCode)

            - Send via the test tool a SecureWrapper frame encrypted with the
negotiated session key containing a SessionAuthenticate frame
with userId and a MAC (encrypted using passwordHash).

            - Wait for the BDUT to send a SecureWrapper frame containing a
SessionStatus frame. Timeout TimeoutSessionStatusAuthenticate.
On timeout: Abort test and return TestFailed.

            - Check the resulting SessionStatus of the BDUT:
`o` If received status different from expectedStatus: Abort test
and return TestFailed.

**Return** 
**Duration** TimeoutSessionResponse + TimeoutSessionStatusAuthenticate

**Open points**

##### 2.3.4 Checking of Resources – PID_SECURED_SERVICE_FAMILIES

**Test ID** 70304

©C i h 1998 2018 KNX A i i V i 1 1 AS P 137 f 376

|Procedure<br>name|LoPro VerifyUserLogin(userId, passwordHash, deviceAuthentication-<br>_<br>Code = Fdsk, expectedStatus)|
|---|---|
|**Description**|Verify whether user login fails or succeeds.|
|**Parameter**<br>**description**|userId: User id for secure session.<br>passwordHash: Password hash corresponding to the user id.<br>deviceAuthenticationCode: Device authentication code.<br>expectedStatus: Expected status in response to SESSION_-<br>AUTHENTICATE, either STATUS_AUTHENTICATION_FAILED or<br>STATUS_AUTHENTICATION_SUCCESS.|
|**Procedure**|<br> <br>Execute GlPro_SecureSessionRequestResponse(device-<br>AuthenticationCode = deviceAuthenticationCode)<br> <br>Send via the test tool a SecureWrapper frame encrypted with the<br>negotiated session key containing a SessionAuthenticate frame<br>with userId and a MAC (encrypted using passwordHash).<br> <br>Wait for the BDUT to send a SecureWrapper frame containing a<br>SessionStatus frame. Timeout TimeoutSessionStatusAuthenticate.<br>On timeout: Abort test and return TestFailed.<br> <br>Check the resulting SessionStatus of the BDUT:<br>`o` If received status different from expectedStatus: Abort test<br>and return TestFailed.|
|**Return**|-|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate|
|**Open points**||

|Test ID|70304|
|---|---|


-----

|Description|Test usability of services depending on whether they are secured or not.<br>Core can always be used non-secure.<br> Check that each supported service family can be used secure<br>when the service family is not secured (0). (Exception: Secure<br>routing frames must be ignored when routing is set to non-secure<br>because the timer is not synchronized.)<br> Check that each supported service family can be used non-secure<br>when the service family is not secured (0).<br> Check that each supported service family can be used secure<br>when the service family is secured (1).<br> Check that each supported service family cannot be used non-<br>secure when the service family secured (1).<br>The actual test whether a service family is usable is done using the<br>following procedures:<br> Device management: Do a Connect Request (potentially wrapped<br>_<br>in a SecureWrapper in a secure unicast session). This should<br>fail/succeed as expected.<br> Tunnelling: Do a Connect Request (potentially wrapped in a<br>_<br>SecureWrapper in a secure unicast session). This should<br>fail/succeed as expected.<br> Routing: Send a A DeviceDescriptor Read and wait for the<br>_ _<br>response, both potentially wrapped in a SecureWrapper<br>(multicast). This should fail/succeed as expected.|
|---|---|
|**Expectation**|Each service family can be used secure even if it is set to non-secure<br>(see exceptions in description). Service families set to secure can only<br>be used secure (see exceptions above).|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 138 f 376


-----

|Test procedure| Read the supported service families by GlPro ReadSupported-<br>_<br>ServiceFamiliesDib(coreV2 = false). (Explanation: coreV2 = false<br>just in order not to assume Core v2 support.)<br> Execute GlPro SetupFamilySecurity(familiesAreSecured = false)<br>_<br> Explanation: Check that each supported service family can be<br>used secure when the service family is not secured (0):<br>o Execute LoPro VerifyServiceFamilyUsability(secure = true,<br>_<br>expect = success, expectRouting = failure, familiesAre-<br>Secured = false)<br> Explanation: Check that each supported service family can be<br>used non-secure when the service family is not secured (0):<br>o Execute LoPro VerifyServiceFamilyUsability(secure =<br>_<br>false, expect = success, expectRouting = success, families-<br>AreSecured = false)<br> Execute GlPro SetupFamilySecurity(familiesAreSecured = true)<br>_<br> Explanation: Check that each supported service family can be<br>used secure when the service family is secured (1).<br>o Execute LoPro VerifyServiceFamilyUsability(secure = true,<br>_<br>expect = success, expectRouting = success, familiesAre-<br>Secured = true)<br> Explanation: Check that each supported service family cannot be<br>used non-secure when the service family secured (1):<br>o Execute LoPro VerifyServiceFamilyUsability(secure =<br>_<br>false, expect = failure, expectRouting = failure, familiesAre-<br>Secured = true)|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast() (Note: This will fallback to a<br>secure session which is required to clear the device management<br>security.)|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.3.1.4 (PID_-<br>SECURED_SERVICE_FAMILIES)|
|**Duration**|<br>8 * (2 * TimeoutKnxConnectResponse + TimeoutSessionResponse +<br>TimeoutSessionStatusAuthenticate) + 3 * TimeoutAppLayerResponse +<br>2 * ConfirmedRestart|
|**Mask version**||
|**Open points**||


Local procedures:

©C i h 1998 2018 KNX A i i V i 1 1 AS P 139 f 376


-----

|Procedure<br>name|LoPro VerifyServiceFamilyUsability(secure, expect, expectRouting,<br>_<br>familiesAreSecured)|
|---|---|
|**Description**|Verify whether each supported service family is either usable or unusable.|
|**Parameter**<br>**description**| <br>secure: If true: Send all traffic secured (IP-Security, SecureWrapper,<br>unicast in the current secure session or multicast depending on<br>service). Else send non-secure.<br> <br>expect: Expect either 'success' or 'failure' for device management or<br>tunnelling.<br> <br>expectRouting: Expect either 'success' or 'failure' for routing.<br> <br>familiesAreSecured: Assume service families are secure (true) or<br>non-secure (false).|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 140 f 376


-----

|Procedure| Explanation: Test device management and tunnelling:<br>o For each serviceFamily in Device Management, Tunnelling<br>(the subset of these supported by the BDUT):<br> Create secure session: Execute GlPro Secure-<br>_<br>SessionSetup(userId = 1).<br> Send to the BDUT a Connect Request for service-<br>_<br>Family (if 'secure == true' then wrapped in a Secure-<br>Wrapper).<br> Verify that the result matches 'expect'.<br> If the Connect Request succeeded:<br>_<br> Send to the BDUT a Disconnect Request for<br>_<br>the current connection (if 'secure == true' then<br>wrapped in a SecureWrapper).<br> Verify that the result matches 'expect'.<br> Execute GlPro CloseSecureSession().<br>_<br> Explanation: Test routing:<br>o If secure == 1:<br> If familiesAreSecured == true:<br> Explanation: Here we expect secure routing to<br>work ok.<br> Execute (receivedTimestamp, localMcTime) =<br>GlPro QueryMcTimer().<br>_<br> Execute GlPro SetLocalMcTimer(time =<br>_<br>receivedTimestamp).<br> Send to the BDUT a SecureWrapper containing<br>a RoutingIndication, L Data.ind, A Device-<br>_ _<br>Descriptor Read<br>_<br> Wait for a SecureWrapper from the BDUT<br>containing a RoutingIndication, L Data.ind, A -<br>_ _<br>DeviceDescriptor Response. Timeout: Timeout-<br>_<br>AppLayerResponse.<br> On timeout: Set result = failure.<br> Else: Set result = success.<br> else:<br> Explanation: Here we expect: 1. The BDUT<br>does not send TIMER NOTIFY frames (neither<br>_<br>spontaneous nor responses). 2. The BDUT<br>does not respond to secured requests, neither<br>secure nor non-secure<br> Execute GlPro SendTimerNotify(timestamp=0).<br>_<br> Send to the BDUT a SecureWrapper containing<br>a RoutingIndication, L Data.ind, A Device-<br>_ _<br>Descriptor Read, timestamp = 0xf000 0000<br>_<br>0000 (Explanation: Use high timestamp to make<br>this request valid.)|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 141 f 376


-----

|Col1| Wait for TimerNotify, RoutingIndication or<br>SecureWrapper. Timeout: TimeoutPeriodic-<br>TimerNotify<br> On timeout: Set result = failure.<br>(Explanation: This means the test will<br>pass. This is the expected behavior.)<br> On TimerNotify, RoutingIndication or<br>SecureWrapper received: Set result =<br>success. (Explanation: This means the<br>test will fail. This is the fail case.)<br>o If secure == 0:<br> Send to the BDUT a RoutingIndication, L Data.ind,<br>_<br>A DeviceDescriptor Read<br>_ _<br> Wait for a RoutingIndication, L Data.ind, A Device-<br>_ _<br>Descriptor Response. Timeout: TimeoutAppLayer-<br>_<br>Response.<br> On timeout: Set result = failure.<br> Else: Set result = success.<br>o If result != expectRouting:<br> Abort test and return TestFailed.|
|---|---|
|**Return**|-|
|**Duration**|2 * (2 * TimeoutKnxConnectResponse + TimeoutSessionResponse +<br>TimeoutSessionStatusAuthenticate) + TimeoutAppLayerResponse|
|**Open points**||


##### 2.3.5 Checking of Resources – PID_MULTICAST_LATENCY_- TOLERANCE

**Test ID** 70305

**Description** Check whether the multicast latency tolerance is honored by the
device when receiving multicast traffic.

**Expectation** SecureWrapper frames which are older than the tolerance (when
compared to the mc_timer of the BDUT) are discarded.

**Setup** - (Done in procedure LoPro_TestLatencyTolerance()).

**Test procedure** - Execute LoPro_TestLatencyTolerance(latencyTolerance = 4s).

              - Execute LoPro_TestLatencyTolerance(latencyTolerance = 2s).

**Cleanup** - Execute GlPro_CleanupMulticast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 142 f 376

|Test ID|70305|
|---|---|
|**Description**|Check whether the multicast latency tolerance is honored by the<br>device when receiving multicast traffic.|
|**Expectation**|SecureWrapper frames which are older than the tolerance (when<br>compared to the mc_timer of the BDUT) are discarded.|
|**Setup**|<br>- (Done in procedure LoPro_TestLatencyTolerance()).|
|**Test procedure**|<br> <br>Execute LoPro_TestLatencyTolerance(latencyTolerance = 4s).<br> <br>Execute LoPro_TestLatencyTolerance(latencyTolerance = 2s).|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|


-----

|Specification<br>reference|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.3.1.5 (PID -<br>_<br>MULTICAST LATENCY TOLERANCE)<br>_ _<br>Checked state machine transitions (multicast): Event E08 State<br>SCHED PERIODIC.<br>_|
|---|---|
|**Duration**|<br>2 * ConfirmedRestart + 2 * (TimeoutTimerNotifyResponse + 2 *<br>TimeoutDescriptionResponse)|
|**Mask version**||
|**Open points**||


Local procedures:

**Procedure** LoPro_TestLatencyTolerance(latencyTolerance)
**name**

**Description** Test latency multicast frame dropping behavior one specific latency
tolerance value.

**Parameter** latencyTolerance: Latency tolerance.
**description**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 143 f 376

|Procedure<br>name|LoPro TestLatencyTolerance(latencyTolerance)<br>_|
|---|---|
|**Description**|Test latency multicast frame dropping behavior one specific latency<br>tolerance value.|
|**Parameter**<br>**description**|latencyTolerance: Latency tolerance.|


-----

|Procedure| Execute GlPro SetupMulticast(latencyTolerance = latency-<br>_<br>Tolerance)<br>o Remark: Now the test tools mc timer runs behind the BDUTs<br>_<br>mc timer.<br>_<br> Wait for mc timer to be >= latencyTolerance + NetworkLatency * 2<br>_<br>(if necessary, to avoid the expression 'mc timer - latencyTolerance<br>_<br>+ NetworkLatency * 2' to get negative).<br> Send to the BDUT a SecureWrapper containing RoutingIndication,<br>L Data.ind, A DeviceDescriptor Read, via multicastAddress,<br>_ _ _<br>encrypted using backboneKey, sending a timestamp = mc timer -<br>_<br>latencyTolerance + NetworkLatency * 2.<br> Wait for a SecureWrapper from the BDUT containing Routing-<br>Indication, L Data.ind, A DeviceDescriptor Response, received on<br>_ _ _<br>multicastAddress, decrypted using backboneKey. Timeout: Timeout-<br>AppLayerResponse. On timeout: Abort test and return TestFailed.<br>o Expectation: This A DeviceDescriptor Read is received ok<br>_ _<br>by the device because: 1. The test clients mc timer is<br>_<br>running behind the BDUTs mc timer by NetworkLatency at<br>_<br>most. 2. The BDUT receives the A DeviceDescriptor Read<br>_ _<br>at most NetworkLatency later than it was sent.<br> Wait for mc timer to be >= latencyTolerance (if necessary, to avoid<br>_<br>the expression 'mc timer - latencyTolerance' to get negative).<br>_<br> Send to the BDUT a SecureWrapper containing RoutingIndication,<br>L Data.ind, A DeviceDescriptor Read, via multicastAddress,<br>_ _ _<br>encrypted using backboneKey, sending a timestamp = mc timer -<br>_<br>latencyTolerance.<br> Wait for a SecureWrapper from the BDUT containing Routing-<br>Indication, L Data.ind, A DeviceDescriptor Response, received on<br>_ _ _<br>multicastAddress, decrypted using backboneKey. Timeout: Timeout-<br>AppLayerResponse. On timeout: OK. On response: Abort test and<br>return TestFailed.<br>o Expectation: This A DeviceDescriptor Read is ignored by<br>_ _<br>the BDUT because: The mc timer of the test client is always<br>_<br>running behind the BDUTs mc timer and so the sent<br>_<br>timestamp of mc timer - latencyTolerance is always behind<br>_<br>the BDUTs mc timer -latencyTolerance and so the frame is<br>_<br>dropped.|
|---|---|
|**Return**|-|
|**Duration**|TimeoutTimerNotifyResponse + 2 * TimeoutDescriptionResponse +<br>ConfirmedRestart|
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 144 f 376


-----

##### 2.3.6 Checking of Resources – PID_SYNC_LATENCY_FRACTION

**Test ID** 70306

**Description** Provoke TimerNotify updates in the BDUT and cancel them (or do not
cancel them) by sending a TimerNotify from the test client which is just
outside the sync latency tolerance (no cancel) or just within (cancel).

**Expectation** The provoked TimerNotify-update scheduled in the BDUT is cancelled
by TimerNotify frames just within the syncLatencyTolerance and is not
cancelled by TimerNotify frames just outside the syncLatencyTolerance.

**Setup** - (Done in procedure LoPro_TestSyncLatencyTolerance()).

**Test procedure** - Execute LoPro_TestSyncLatencyTolerance(syncLatencyTolerance = 400 ms, latencyTolerance = 1000 ms).

             - Execute LoPro_TestSyncLatencyTolerance(syncLatencyTolerance = 200 ms, latencyTolerance = 1000 ms).

**Cleanup** - Execute GlPro_CleanupMulticast().

**Specification** AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.3.1.6 (PID_SYNC_**reference** LATENCY_FRACTION)

**Duration** TimeoutTimerNotifyResponse * 10 + 2 * ConfirmedRestart

**Mask version**

**Open points**

Local procedures:

**Procedure** LoPro_TestSyncLatencyTolerance(syncLatencyTolerance, latency**name** Tolerance)

**Description** Test sync latency tolerance related behavior of the BDUT. Verify that
TimerNotify frames which are inside the sync latency tolerance cancel a
scheduled 'update' TimerNotify. Verify that TimerNotify frames which are
just outside the sync latency tolerance do not cancel an 'update' TimerNotify.

**Parameter** syncLatencyTolerance: Sync latency tolerance.
**description**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 145 f 376

|Test ID|70306|
|---|---|
|**Description**|Provoke TimerNotify updates in the BDUT and cancel them (or do not<br>cancel them) by sending a TimerNotify from the test client which is just<br>outside the sync latency tolerance (no cancel) or just within (cancel).|
|**Expectation**|The provoked TimerNotify-update scheduled in the BDUT is cancelled<br>by TimerNotify frames just within the syncLatencyTolerance and is not<br>cancelled by TimerNotify frames just outside the syncLatencyTolerance.|
|**Setup**|- (Done in procedure LoPro_TestSyncLatencyTolerance()).|
|**Test procedure**|<br> <br>Execute LoPro_TestSyncLatencyTolerance(syncLatency-<br>Tolerance = 400 ms, latencyTolerance = 1000 ms).<br> <br>Execute LoPro_TestSyncLatencyTolerance(syncLatency-<br>Tolerance = 200 ms, latencyTolerance = 1000 ms).|
|**Cleanup**| <br>Execute GlPro_CleanupMulticast().|
|**Specification**<br>**reference**|AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.3.1.6 (PID_SYNC_-<br>LATENCY_FRACTION)|
|**Duration**|<br>TimeoutTimerNotifyResponse * 10 + 2 * ConfirmedRestart|
|**Mask version**||
|**Open points**||

|Procedure<br>name|LoPro TestSyncLatencyTolerance(syncLatencyTolerance, latency-<br>_<br>Tolerance)|
|---|---|
|**Description**|Test sync latency tolerance related behavior of the BDUT. Verify that<br>TimerNotify frames which are inside the sync latency tolerance cancel a<br>scheduled 'update' TimerNotify. Verify that TimerNotify frames which are<br>just outside the sync latency tolerance do not cancel an 'update' Timer-<br>Notify.|
|**Parameter**<br>**description**|syncLatencyTolerance: Sync latency tolerance.|


-----

|Procedure| GlPro SetupMulticast(syncLatencyTolerance = syncLatency-<br>_<br>Tolerance, latencyTolerance = latencyTolerance)<br> Check effect of being just outside the sync latency tolerance:<br>o Explanation: Now (after GlPro SetupMulticast()) the BDUT is<br>_<br>a timekeeper and will respond to outdated TimerNotify frames<br>(e.g. timestamp 0) with updates in the short timekeeper time<br>window.<br>o Wait for mc timer to be >= syncLatencyTolerance (if<br>_<br>necessary, to avoid the expression 'mc timer - syncLatency-<br>_<br>Tolerance' to get negative).<br>o Provoke update from the BDUT by sending a TimerNotify<br>with timestamp 0.<br>o Immediately afterwards send a TimerNotify with mc timer -<br>_<br>syncLatencyTolerance.<br> Expectation: This is received by the BDUT outside of<br>the sync latency tolerance, i.e. not in E02, but in E03.<br>This will not cancel the update.<br>o Wait for a TimerNotify from the BDUT. Timeout: MinDelay-<br>TimeKeeperUpdateNotify + syncLatencyTolerance +<br>NetworkLatency. If received: Ok. If not received: Abort test<br>and return TestFailed.<br> Explanation: The timeout is the timekeeper update<br>time window for the 'syncLatencyTolerance' argument<br>plus network latency.<br> Check effect of being just inside the sync latency tolerance:<br>o Send a TimerNotify with timestamp 0 to the BDUT and wait<br>for the response. Now the BDUT is timekeeper again.<br>o Provoke update from the BDUT by sending a TimerNotify<br>with timestamp 0.<br>o Immediately afterwards send a TimerNotify with mc timer -<br>_<br>syncLatencyTolerance + NetworLatency*2.<br> Expectation: This is received by the BDUT inside of<br>the sync latency tolerance, i.e. in E02. This will cancel<br>the update.<br>o Wait for a TimerNotify from the BDUT. Timeout: MinDelay-<br>TimeKeeperUpdateNotify + syncLatencyTolerance +<br>NetworkLatency. On timeout: Ok. On received TimerNotify:<br>Abort test and return TestFailed.<br>o Explanation: The timeout is the timekeeper update time<br>window plus network latency.|
|---|---|
|**Return**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 146 f 376


-----

|Duration|TimeoutTimerNotifyResponse * 5 + syncLatencyTolerance + Confirmed-<br>Restart|
|---|---|
|**Open points**||


##### 2.3.7 Checking of Resources – PID_TUNNELLING_USERS

**Test ID** 70307

**Description** Try to establish a tunnelling connection using a user id which is
suitable/unsuitable for the requested tunnelling connection.

This test must only be executed for devices which support Tunnelling v2
and IP security.

**Expectation** Tunnelling connections can only be created within secure session for
user id U, if PID_TUNNELLING_USERS maps U onto a valid tunnelling
address index.

**Setup** 
**Test** - If TunnellingUserA == 0:
**procedure** `o` Abort test and return TestPassed. Explanation: The BDUT
does not support any tunnelling user id. This means that the
only valid content of PID_TUNNELLING_USERS is the
empty array, which in turn means that the behavior of the
resource PID_TUNNELLING_USERS is always trivially ok.

             - Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =
GlPro_SetupTunnelling(enableTunnellingSecurity = true,
tunnellingUsers = [(TunnellingUserA, 1)]).

             - Execute GlPro_EstablishTunnellingConnection(userId =
TunnellingUserA).

             - Execute GlPro_CloseTunnellingConnection().

             - Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =
GlPro_SetupTunnelling(enableTunnellingSecurity = true,
tunnellingUsers = []).

             - Execute GlPro_EstablishTunnellingConnection(userId =
TunnellingUserA, expectedError = E_NO_MORE_CONNECTIONS).

**Cleanup** - Close tunnelling connection and/or secure session if necessary.

             - Execute GlPro_CleanupUnicast()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 147 f 376

|Test ID|70307|
|---|---|
|**Description**|Try to establish a tunnelling connection using a user id which is<br>suitable/unsuitable for the requested tunnelling connection.<br>This test must only be executed for devices which support Tunnelling v2<br>and IP security.|
|**Expectation**|Tunnelling connections can only be created within secure session for<br>user id U, if PID_TUNNELLING_USERS maps U onto a valid tunnelling<br>address index.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>If TunnellingUserA == 0:<br>`o` Abort test and return TestPassed. Explanation: The BDUT<br>does not support any tunnelling user id. This means that the<br>only valid content of PID_TUNNELLING_USERS is the<br>empty array, which in turn means that the behavior of the<br>resource PID_TUNNELLING_USERS is always trivially ok.<br> <br>Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro_SetupTunnelling(enableTunnellingSecurity = true,<br>tunnellingUsers = [(TunnellingUserA, 1)]).<br> <br>Execute GlPro_EstablishTunnellingConnection(userId =<br>TunnellingUserA).<br> <br>Execute GlPro_CloseTunnellingConnection().<br> <br>Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro_SetupTunnelling(enableTunnellingSecurity = true,<br>tunnellingUsers = []).<br> <br>Execute GlPro_EstablishTunnellingConnection(userId =<br>TunnellingUserA, expectedError = E_NO_MORE_-<br>CONNECTIONS).|
|**Cleanup**| <br>Close tunnelling connection and/or secure session if necessary.<br> <br>Execute GlPro_CleanupUnicast()|


-----

|Specification<br>reference|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.3.1.7.1 Abstract<br>resource definition|
|---|---|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.3.8 Combinations of KNX connections, secure sessions and secured service families (PID_SECURED_SERVICE_FAMILIES)

**Test ID** 70308

**Description** Systematically test all combinations of:

             - Device management and tunnelling connections

             - Secured/non-secured device management / tunnelling service
family

             - Connection requests unwrapped, or wrapped in a session for the
device management user or a tunnelling user.

This test covers the matrix in section 2.2.1.4.2 in KSG616-18.03
KNXnet-IP Security (2017.06.10).

**Expectation** The BDUT grants access except for these cases:

             - Unwrapped ConnectRequest for DEV_MGMT while DEV_MGMT
service family is set to secure (1).

             - Unwrapped ConnectRequest for TUNNELLING while
TUNNELLING service family is set to secure (1).

             - Wrapped ConnectRequest for DEV_MGMT (in secure session for
tunnelling user) while DEV_MGMT service family is set to secure
(1).

             - Wrapped ConnectRequest for TUNNELLING (in secure session
for tunnelling user) while TUNNELLING service family is set to
secure (1) and tunnelling user is not listed in PID_TUNNELLING_USERS.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 148 f 376

|Test ID|70308|
|---|---|
|**Description**|Systematically test all combinations of:<br> <br>Device management and tunnelling connections<br> <br>Secured/non-secured device management / tunnelling service<br>family<br> <br>Connection requests unwrapped, or wrapped in a session for the<br>device management user or a tunnelling user.<br>This test covers the matrix in section 2.2.1.4.2 in KSG616-18.03<br>KNXnet-IP Security (2017.06.10).|
|**Expectation**|The BDUT grants access except for these cases:<br> <br>Unwrapped ConnectRequest for DEV_MGMT while DEV_MGMT<br>service family is set to secure (1).<br> <br>Unwrapped ConnectRequest for TUNNELLING while<br>TUNNELLING service family is set to secure (1).<br> <br>Wrapped ConnectRequest for DEV_MGMT (in secure session for<br>tunnelling user) while DEV_MGMT service family is set to secure<br>(1).<br> <br>Wrapped ConnectRequest for TUNNELLING (in secure session<br>for tunnelling user) while TUNNELLING service family is set to<br>secure (1) and tunnelling user is not listed in PID_TUNNELLING_-<br>USERS.|
|**Setup**|-|


-----

|Test procedure| LoPro TestKnxConnectionCombination(connectionType=DEV -<br>_ _<br>MGMT, serviceFamilySecured=0, wrappedInUser=0,<br>expect=granted).<br> LoPro TestKnxConnectionCombination(connectionType=DEV -<br>_ _<br>MGMT, serviceFamilySecured=1, wrappedInUser=0,<br>expect=denied).<br> LoPro TestKnxConnectionCombination(connection-<br>_<br>Type=TUNNELLING, serviceFamilySecured=0, wrappedIn-<br>User=0, expect=granted).<br> LoPro TestKnxConnectionCombination(connection-<br>_<br>Type=TUNNELLING, serviceFamilySecured=1, wrappedIn-<br>User=0, expect=denied).<br> LoPro TestKnxConnectionCombination(connectionType=DEV -<br>_ _<br>MGMT, serviceFamilySecured=0, wrappedInUser=1,<br>expect=granted).<br> LoPro TestKnxConnectionCombination(connectionType=DEV -<br>_ _<br>MGMT, serviceFamilySecured=1, wrappedInUser=1,<br>expect=granted).<br> LoPro TestKnxConnectionCombination(connection-<br>_<br>Type=TUNNELLING, serviceFamilySecured=0, wrappedIn-<br>User=1, expect=granted).<br> LoPro TestKnxConnectionCombination(connection-<br>_<br>Type=TUNNELLING, serviceFamilySecured=1, wrappedIn-<br>User=1, expect=granted).<br> LoPro TestKnxConnectionCombination(connectionType=DEV -<br>_ _<br>MGMT, serviceFamilySecured=0, wrappedInUser=2,<br>expect=granted).<br> LoPro TestKnxConnectionCombination(connectionType=DEV -<br>_ _<br>MGMT, serviceFamilySecured=1, wrappedInUser=2,<br>expect=denied).<br> LoPro TestKnxConnectionCombination(connection-<br>_<br>Type=TUNNELLING, serviceFamilySecured=0, wrappedIn-<br>User=2, expect=granted).<br> LoPro TestKnxConnectionCombination(connection-<br>_<br>Type=TUNNELLING, serviceFamilySecured=1, wrappedIn-<br>User=2, expect=denied).<br> LoPro TestKnxConnectionCombination(connection-<br>_<br>Type=TUNNELLING, serviceFamilySecured=1, wrappedIn-<br>User=2, expect=granted, tunnellingUsers=2).|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG616-18.04 KNXnet-IP Security (2017.06.14) 2.2.1.4.2|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 149 f 376


-----

|Duration|Col2|TimeoutAppLayerResponse|
|---|---|---|
|**Mask version**|**Mask version**||
|**Open points**|**Open points**||
|**Procedure**<br>**name**|LoPro_TestKnxConnectionCombination(connectionType, serviceFamily-<br>Secured, wrappedInUser, expect, tunnellingUsers = 0)|LoPro_TestKnxConnectionCombination(connectionType, serviceFamily-<br>Secured, wrappedInUser, expect, tunnellingUsers = 0)|
|**Description**|Try to establish the specified connection and check whether access is<br>granted ot denied as expected.|Try to establish the specified connection and check whether access is<br>granted ot denied as expected.|
|**Parameter**<br>**description**| <br>connectionType: Connection type for ConnectRequest DEV_MGMT<br>or TUNNELLING.<br> <br>serviceFamilySecured: 0 or 1: Specify whether the corresponding<br>service family for the connectionType is to be non-secure (0) or<br>secured (1).<br> <br>wrappedInUser: 0 = ConnectRequest is not wrapped in a secure<br>session. 1 = ConnectRequest is wrapped in a secure session of the<br>device management user, 2 = ConnectRequest is wrapped in a<br>secure session for tunnelling user 2.<br> <br>expect = granted / denied<br> <br>tunnellingUsers = 0 or 1 (1 means PID_TUNNELLING_USERS<br>allows access for tunnelling user TunnellingUserA).| <br>connectionType: Connection type for ConnectRequest DEV_MGMT<br>or TUNNELLING.<br> <br>serviceFamilySecured: 0 or 1: Specify whether the corresponding<br>service family for the connectionType is to be non-secure (0) or<br>secured (1).<br> <br>wrappedInUser: 0 = ConnectRequest is not wrapped in a secure<br>session. 1 = ConnectRequest is wrapped in a secure session of the<br>device management user, 2 = ConnectRequest is wrapped in a<br>secure session for tunnelling user 2.<br> <br>expect = granted / denied<br> <br>tunnellingUsers = 0 or 1 (1 means PID_TUNNELLING_USERS<br>allows access for tunnelling user TunnellingUserA).|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 150 f 376


-----

|Procedure| Set sessionUserId = 1.<br> If connectionType == TUNNELLING and TunnellingUserA == 0:<br>o Return without error.<br> Set sessionUserId = TunnellingUserA.<br> Setup device:<br>o Use PropAccess DevMgmt(fallbackToSecureSession = true)<br>_<br>to<br> Set PID DEVICE AUTHENTICATION CODE to Fdsk.<br>_ _ _<br> Set PID PASSWORD HASHES[1] to PasswordHash-<br>_ _<br>Default.<br> If connectionType == DEV MGMT:<br>_<br> Set PID SECURED SERVICE -<br>_ _ _<br>FAMILIES[DeviceManagement] to service-<br>FamilySecured.<br> If connectionType == TUNNELLING:<br> Set PID SECURED SERVICE -<br>_ _ _<br>FAMILIES[Tunnelling] to serviceFamilySecured.<br> If tunnellingUsers == 0:<br> Set PID TUNNELLING USERS to an<br>_ _<br>empty array.<br> Else:<br> Set PID TUNNELLING USERS so that<br>_ _<br>tunnellingUser gets mapped to a valid<br>tunnelling slot:<br> Assuming PID TUNNELLING -<br>_ _<br>ADDRESSES contains at least one<br>slot. (PID TUNNELLING -<br>_ _<br>ADDRESSES is read-only.)<br> Set PID TUNNELLING USERS[0]<br>_ _<br>= 0. (Clear array.)<br> Set PID TUNNELLING USERS[1]<br>_ _<br>= (tunnellingUser, 1).<br> Create secure session if necessary:<br>o If wrappedInUser != 0:<br> Execute GlPro SecureSessionSetup(userId = session-<br>_<br>UserId).<br> Try to establish connection:<br>o Send ConnectRequest (wrapped in a SecureWrapper if a<br>secure session was established) for connectionType.<br>o Wait for ConnectResponse (wrapped in a SecureWrapper if a<br>secure session was established). Timeout: TimeoutConnect-<br>Response.<br> On timeout: Abort test and return TestFailed.<br> On positive response:<br> If expect == denied: Abort test and return Test-<br>Failed.|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 151 f 376


-----

|Col1| Send DisconnectRequest (wrapped in a Secure-<br>Wrapper if a secure session was established).<br> Wait for DisconnectResponse (wrapped in a<br>SecureWrapper if a secure session was<br>established). Timeout: TimeoutConnect-<br>Response.<br> On timeout: Abort test and return Test-<br>Failed.<br> On negative response:<br> If expect == granted: Abort test and return Test-<br>Failed.<br> Close secure session if necessary:<br>o If wrappedInUser != 0:<br> Execute GlPro CloseSecureSession().<br>_|
|---|---|
|**Return**|-|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate|
|**Open points**||


##### 2.3.9 Writes to PID_SECURED_SERVICE_FAMILIES for unsupported service families report E_DATA_VOID

**Test ID** 70309

**Description** Check that reading from and writing to a valid but unsupported service
family in PID_SECURED_SERVICE_FAMILIES using A_FunctionPropertyExtState_Read/A_FunctionPropertyExtCommand results in an
E_DATA_VOID error.

This is checked for tunnelling and routing because device management is
always supported and PID_SECURED_SERVICE_FAMILIES does not
support other service families. If both tunnelling and routing are
supported then this test always trivially passes.

**Expectation** Reading or writing an unsupported service family in PID_SECURED_SERVICE_FAMILIES results in E_DATA_VOID being returned.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 152 f 376

|Test ID|70309|
|---|---|
|**Description**|Check that reading from and writing to a valid but unsupported service<br>family in PID_SECURED_SERVICE_FAMILIES using A_Function-<br>PropertyExtState_Read/A_FunctionPropertyExtCommand results in an<br>E_DATA_VOID error.<br>This is checked for tunnelling and routing because device management is<br>always supported and PID_SECURED_SERVICE_FAMILIES does not<br>support other service families. If both tunnelling and routing are<br>supported then this test always trivially passes.|
|**Expectation**|Reading or writing an unsupported service family in PID_SECURED_-<br>SERVICE_FAMILIES results in E_DATA_VOID being returned.|
|**Setup**|<br>-|


-----

|Test<br>procedure| Execute GlPro ReadSupportedServiceFamiliesDib(coreV2 =<br>_<br>false) and extract: tunnellingIsSupported (version >=1) and<br>routingIsSupported (version >= 1).<br> Open a non-secure device management connection via UDP.<br> If not tunnellingIsSupported:<br>o Send a A FunctionPropertyExtState Read with Service<br>_ _<br>Info 04h (tunnelling) to the BDUT and wait for a A -<br>_<br>FunctionPropertyExtState Response response. Timeout:<br>_<br>TimeoutAppLayerResponse.<br> On timeout: Abort test and return TestFailed.<br> On response with error != E DATA VOID: Abort test<br>_ _<br>and return TestFailed.<br>o Send a A FunctionPropertyExtCommand with Service Info<br>_<br>04h (tunnelling) and value 0 to the BDUT and wait for a A -<br>_<br>FunctionPropertyExtState Response response. Timeout:<br>_<br>TimeoutAppLayerResponse.<br> On timeout: Abort test and return TestFailed.<br> On response with error != E DATA VOID: Abort test<br>_ _<br>and return TestFailed.<br> If not routingIsSupported:<br>o Send a A FunctionPropertyState Read with Service Info<br>_ _<br>05h (routing) to the BDUT and wait for a A Function-<br>_<br>PropertyExtState Response response. Timeout: Timeout-<br>_<br>AppLayerResponse.<br> On timeout: Abort test and return TestFailed.<br> On response with error != E DATA VOID: Abort test<br>_ _<br>and return TestFailed.<br>o Send a A FunctionPropertyExtCommand with Service Info<br>_<br>05h (routing) and value 0 to the BDUT and wait for a A -<br>_<br>FunctionPropertyExtState Response response. Timeout:<br>_<br>TimeoutAppLayerResponse.<br> On timeout: Abort test and return TestFailed.<br> On response with error != E DATA VOID: Abort test<br>_ _<br>and return TestFailed.|
|---|---|
|**Cleanup**| <br>Close device management connection.|
|**Specification**<br>**reference**||
|**Duration**||
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 153 f 376


-----

##### 2.3.10 Remote configuration services are ignored when security mode is enabled

**Test ID** 70310

**Description** Devices must ignore all incoming frames of the service family "Remote
Configuration and Diagnosis" when the security mode is enabled.

Enable security mode and send these remote configuration requests
using the MAC selector on the SystemSetupMulticastAddress:

             - RemoteDiagnosticRequest

             - RemoteBasicConfigurationRequest (with DIB KNX_ADDRESSES)

             - RemoteResetRequest (Restart)

Note: This test can be executed regardless whether the device supports
remote configuration or not.

**Expectation** No response is received for the RemoteDiagnosticRequest and RemoteBasicConfigurationRequest. Also the device stays responsive
immediately after a RemoteResetRequest and also one second later (as
a rough test that no restart was performed).

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 154 f 376

|Test ID|70310|
|---|---|
|**Description**|Devices must ignore all incoming frames of the service family "Remote<br>Configuration and Diagnosis" when the security mode is enabled.<br>Enable security mode and send these remote configuration requests<br>using the MAC selector on the SystemSetupMulticastAddress:<br> <br>RemoteDiagnosticRequest<br> <br>RemoteBasicConfigurationRequest (with DIB KNX_ADDRESSES)<br> <br>RemoteResetRequest (Restart)<br>Note: This test can be executed regardless whether the device supports<br>remote configuration or not.|
|**Expectation**|No response is received for the RemoteDiagnosticRequest and Remote-<br>BasicConfigurationRequest. Also the device stays responsive<br>immediately after a RemoteResetRequest and also one second later (as<br>a rough test that no restart was performed).|
|**Setup**|-|


-----

|Test<br>procedure| PropSetup SecurityMode(disable).<br>_<br> Explanation: Get KNX Addresses DIB contents.<br>o Send RemoteDiagnosticRequest to the SystemSetup-<br>MulticastAddress using the MAC selector with the BDUTs<br>MAC "MacAddress" and wait for RemoteDiagnostic-<br>Response. Timeout: TimeoutAppLayerResponse.<br> On timeout: Abort test and return TestPassed.<br>Explanation: We assume that the device does not<br>support Remote Diagnostic and Configuration.<br>o Extract KnxAddressesDib from RemoteDiagnostic-<br>Response.<br> If this is not present in response: Abort test and<br>return TestFailed.<br> PropSetup SecurityMode(enable).<br>_<br> Explanation: Check that RemoteDiagnosticRequest is ignored.<br>o Send RemoteDiagnosticRequest to the SystemSetup-<br>MulticastAddress using the MAC selector with the BDUTs<br>MAC "MacAddress" and wait for RemoteDiagnostic-<br>Response. Timeout: TimeoutAppLayerResponse.<br> On timeout: OK. Continue.<br> On response received: Abort test and return test<br>failed.<br> Explanation: Check that RemoteConfigurationRequest is ignored.<br>o If KnxAddressesDib != none:<br> Send RemoteBasicConfigurationRequest with Knx-<br>AddressesDib to the SystemSetupMulticastAddress<br>using the MAC selector with the BDUTs MAC "Mac-<br>Address" and wait for RemoteDiagnosticResponse.<br>Timeout: TimeoutAppLayerResponse.<br> On timeout: OK. Continue.<br> On response received: Abort test and return test<br>failed.<br> Explanation: Check that RemoteResetRequest is ignored. For this<br>we check whether a set programming mode is not cleared by the<br>reset.<br>o Execute GlPro SetProgrammingMode(progMode = 1).<br>_<br>o Send RemoteResetRequest with resetCommand=Restart to<br>the SystemSetupMulticastAddress using the MAC selector<br>with the BDUTs MAC "MacAddress".<br>o Wait WaitTimeAfterRestart. Explanation: Allow device to<br>really enter the reset procedure. It is no problem if the<br>device completed the reset before the 1 s elapsed.<br>o Execute GlPro WaitUntilRestartComplete().<br>_<br>o Inspect the last received DescriptionResponse received by<br>GlPro WaitUntilRestartComplete(): Inspect Device<br>_|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 155 f 376


-----

|Col1|Infomation DIB -> Device Status -> bit 0 (programming<br>mode):<br> If 0: Abort test and return TestFailed. Explanation: A<br>reset occurred and cleared the programming mode.<br>But the reset should not occur since the Remote-<br>ResetRequest should have been ignored.|
|---|---|
|**Cleanup**| <br>PropSetup_SecurityMode(disable).|
|**Specification**<br>**reference**|KSG616-19.01 KNXnet-IP Security (2017.06.22) 2.2.1.4.7 Remote<br>Configuration|
|**Duration**|1 s + 3 * TimeoutDescriptionResponse + 2 * TimeoutAppLayerResponse<br>+ 2 * ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.3.11 Non-secure KNX connections are not closed by enabling security in PID_SECURED_SERVICE_FAMILIES

**Test ID** 70311

©C i h 1998 2018 KNX A i i V i 1 1 AS P 156 f 376

|Test ID|70311|
|---|---|


-----

|Description|Security for device management is enabled (without a restarted to let it<br>become effective) while a non-secure device management connection is<br>active. The device management is expected to be unaffected. The same<br>is tested for a tunnelling connection.<br>Sketch:<br> Open non-secure device management connection.<br> Set PID SECURED SERVICE FAMILIES[device managament] =<br>_ _ _<br>1.<br> Verify device management connection is still useable.<br> Close device management connection.<br> Set PID SECURED SERVICE FAMILIES[device managament] =<br>_ _ _<br>0.<br> Open a non-secure tunnelling connection.<br> Open a non-secure device management connection. If this fails:<br>Ok. TestPassed.<br> Set PID SECURED SERVICE FAMILIES[device managament] =<br>_ _ _<br>1.<br> Set PID SECURED SERVICE FAMILIES[tunnelling connection]<br>_ _ _<br>= 1.<br> Verify that neither the device management connection nor the<br>tunnelling connection were affected.<br> Close device management connection and tunnelling connection.<br> Set PID SECURED SERVICE FAMILIES[device managament] =<br>_ _ _<br>0.<br> Set PID SECURED SERVICE FAMILIES[tunnelling connection]<br>_ _ _<br>= 0.<br>Note: This test explicitly accepts BDUTs which do not allow a device<br>management connection in parallel to an existing tunnelling connection.|
|---|---|
|**Expectation**|The non-secure KNX connections do respond to a ConnectionState-<br>Request with a ConnectionStateResponse/E_NO_ERROR after PID_-<br>SECURED_SERVICE_FAMILIES was set to secure.|
|**Setup**|<br>-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 157 f 376


-----

|Test<br>procedure| Explanation: Verify that a device management connection does not<br>get closed by setting PID SECURED SERVICE -<br>_ _ _<br>FAMILIES[device managament] = 1 (without a trailing restart).<br> Execute PropAccess DevMgmt(restart = false) to:<br>_<br>o Set PID SECURED SERVICE FAMILIES[device<br>_ _ _<br>managament] = 1.<br>o Read back PID SECURED SERVICE FAMILIES[device<br>_ _ _<br>managament].<br> If the device management connection was closed unexpectedly or<br>if the reading of PID SECURED SERVICE FAMILIES[device<br>_ _ _<br>managament] failed or resulted in a valued != 1: Abort test and<br>return TestFailed.<br> Explanation: Reset device management back to non-secure:<br> Execute PropAccess DevMgmt(restart = true, fallBackToSecure-<br>_<br>Session = true) to:<br>o Set PID SECURED SERVICE FAMILIES[device<br>_ _ _<br>managament] = 0.<br> Explanation: Verify that tunnelling connection does not get closed<br>by setting PID SECURED SERVICE FAMILIES[device<br>_ _ _<br>managament] = 1 (without a trailing restart).<br> Create non-secure tunnelling connection T.<br>o If this fails: Abort test and return TestPassed. Explanation: It<br>is ok if tunnelling is not supported.<br> Explanation: Now check whether we can open a device<br>management connection in parallel to the tunnelling connection.<br> Open non-secure device management connection.<br>o If this fails: Abort test and return TestPassed. Explanation:<br>The BDUT does not support a device management<br>connection in parallel to a tunnelling connection. This is ok.<br>It is then not possible to cause the scenario which to be<br>tested, which is OK.<br> Close device-management connection.<br> Explanation: Now enable device management security and<br>tunnelling security (without reset) and verify that the tunnelling<br>connection is still usable.<br> Execute PropAccess DevMgmt(restart = false) to:<br>_<br>o Set PID SECURED SERVICE FAMILIES[device<br>_ _ _<br>management] = 1.<br>o Set PID SECURED SERVICE FAMILIES[tunnelling] = 1.<br>_ _ _<br>o Read back PID SECURED SERVICE FAMILIES[device<br>_ _ _<br>management].<br>o Read back PID SECURED SERVICE -<br>_ _ _<br>FAMILIES[tunnelling].<br> If the device management connection was closed unexpectedly or<br>if the reading of PID SECURED SERVICE FAMILIES[device<br>_ _ _|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 158 f 376


-----

|Col1|management] or PID SECURED SERVICE FAMILIES[tunnelling]<br>_ _ _<br>failed or resulted in a valued != 1: Abort test and return TestFailed.<br> Send ConnectionStateRequest for T and wait for response.<br>Timeout: TimeoutKnxConnectionStateResponse.<br>o On timeout: Abort test and return TestFailed.<br>o On status != E NO ERROR: Abort test and return Test-<br>_ _<br>Failed.<br> Close tunnelling connection.|
|---|---|
|**Cleanup**| <br>Execute PropAccess_DevMgmt(restart = true, fallBackToSecure-<br>Session = true) to:<br>`o` Set PID_SECURED_SERVICE_FAMILIES[device<br>managament] = 0.<br>`o` Set PID_SECURED_SERVICE_FAMILIES[tunnelling] = 0.|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.3.1.4.4.1 Write-<br>ServiceID 00h: Write the IP Service Family Security Requirement|
|**Duration**||
|**Mask version**||
|**Open points**||


### 2.4 IP System Broadcast

##### 2.4.1 Meta test: Check all IP System Broadcast related frames sent by the BDUT for consistency

**Test ID** 
**Description** This test is not run as an independent test. Instead this test validates all
incoming IP system broadcast related frames, coming from the BDUT,
while executing all IP System Broadcast tests.

**Expectation** The tests listed below do not result in any failures while executing all IP
System Broadcast tests.

**Setup** Start the processing of this test before the first IP system broadcast test
and let it run while all IP system broadcast tests are running.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 159 f 376

|Test ID|-|
|---|---|
|**Description**|This test is not run as an independent test. Instead this test validates all<br>incoming IP system broadcast related frames, coming from the BDUT,<br>while executing all IP System Broadcast tests.|
|**Expectation**|The tests listed below do not result in any failures while executing all IP<br>System Broadcast tests.|
|**Setup**|Start the processing of this test before the first IP system broadcast test<br>and let it run while all IP system broadcast tests are running.|


-----

|Test procedure|For each frame received from the BDUT on the IP side:<br> If frame is a RoutingSystemBroadcast:<br>o Verify that it was received on the SystemSetupMulticast-<br>Address.<br>o Verify that Message code is L Data.ind.<br>_<br>o Verify that cEMI.ControlField1.SB = 0.<br>o Verify that cEMI.ControlField2.DestAddrType = 1.<br>o Verify that cEMI.DestAddr = 0.<br>o if inner cEMI message is an S-A Data-PDU, S-A Sync -<br>_ _ _<br>Request-PDU or S-A Sync - Response-PDU:<br>_ _<br> Verify that SCF.SBC = 1.<br> Verify that SCF.T = 1.|
|---|---|
|**Cleanup**|End the processing of this test after the last IP system broadcast test.|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.1 (IP<br>System Broadcast Frame)|
|**Duration**|0 s (this is run in parallel to all IP System Broadcast tests)|
|**Mask version**||
|**Open points**||


##### 2.4.2 Receive IP System Broadcast on system setup multicast address only

**Test ID** 80102

**Description** Send a RoutingSystemBroadcast frame to the BDUT on a non-SystemSetupMulticastAddress. This should be ignored.

**Expectation** There should not be any response to this on the SystemSetupMulticastAddress and also not on the non-SystemSetupMulticastAddresss used
for sending.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 160 f 376

|Test ID|80102|
|---|---|
|**Description**|Send a RoutingSystemBroadcast frame to the BDUT on a non-System-<br>SetupMulticastAddress. This should be ignored.|
|**Expectation**|There should not be any response to this on the SystemSetupMulticast-<br>Address and also not on the non-SystemSetupMulticastAddresss used<br>for sending.|


-----

|Setup| Execute GlPro SetupSystemBroadcast(multicastAddress = Non-<br>_<br>SystemSetupMulticastAddress, progMode = 1).<br> (Note: multicastAddress = NonSystemSetupMulticastAddress is<br>not necessary for this test, but this may trick the BDUT into<br>receiving IP system broadcast frames on the NonSystemSetup-<br>MulticastAddress.)<br> (Note: It is not relevant for this test whether the system broadcast<br>mode is enabled or disabled in the BDUT. The BDUT may not<br>even be a router. The BDUT must always respond to IP system<br>broadcast A SystemNetworkParameterRead, regardless of the<br>_<br>system broadcast mode, see AN183 v01 KNXnet-IP System<br>Broadcast DP (2016.11.18) 2.2.3.5 (Handling in the routers own<br>MaS stack), 2.2.4.1 (Handling in Link Layer).)|
|---|---|
|**Test**<br>**procedure**| <br>Send valid IP system broadcast frame to BDUT, but on wrong<br>multicast address 'NonSystemSetupMulticastAddress':<br>`o` Execute: GlPro_SendRoutingSystemBroadcast(hop = 7,<br>pdu = "A_SystemNetworkParameterRead with object_type<br>= 0, PID = 11 and operand = 1", mcaddr = NonSystem-<br>SetupMulticastAddress).<br> <br>Wait for a RoutingSystemBroadcast frame containing a A_System-<br>NetworkParameterResponse (receive on NonSystemSetup-<br>MulticastAddress and SystemSetupMulticastAddress). Timeout<br>TimeoutAppLayerResponse. On timeout: Ok. On reception: Abort<br>test and return TestFailed.<br>`o` Expectation: There should not be a response because the<br>read should be ignored, because the read was sent to a<br>multicast address which is different from the system setup<br>multicast address.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.3.5<br>(Handling in the routers own MaS stack), 2.2.4.1 (Handling in Link Layer).|
|**Duration**|TimeoutAppLayerResponse + WaitTimeAfterWritingDomainAddress +<br>TimeoutAfterWritingDomainAddress + ConfirmedRestart|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 161 f 376


-----

##### 2.4.3 Valid system broadcast frames are routed from TP1 to IP as RoutingSystemBroadcast if system broadcast mode is enabled

**Test ID** 80103

**Description** Set system broadcast mode of BDUT to Enabled. Then send all different
types of TP1 broadcast frames which should be routed from TP to IP as
RoutingSystemBroadcast. Check that these are routed from TP1 to IP as
RoutingSystemBroadcast on the SystemSetupMulticast address.

This test also checks that the IP system broadcast frames are not
wrapped in a SecureWrapper even when routing security is enabled.

Verify hop_count behavior.

**Expectation** All specified system broadcast frames are received on the IP side as
RoutingSystemBroadcast on the SystemSetupMulticastAddress. In
addition, they are neither received as RoutingIndication nor as SecureWrapper nor on the NonSystemSetupMulticastAddress. The hop_count
gets decremented unless the BDUT does not support data security (Fdsk
== none) and the original hop_count was 7 in which case it may or may
not get decremented.

**Setup** - Execute GlPro_SetupSystemBroadcast(multicastAddress = NonSystemSetupMulticastAddress, backboneKey = BackboneKey1,
sbcMode = 1). (Explanation: This also enables routing security
which is desired for this test to be able to check that RoutingSystemBroadcast frames are not wrapped in SecureWrapper
frames even when routing security is enabled.)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 162 f 376

|Test ID|80103|
|---|---|
|**Description**|Set system broadcast mode of BDUT to Enabled. Then send all different<br>types of TP1 broadcast frames which should be routed from TP to IP as<br>RoutingSystemBroadcast. Check that these are routed from TP1 to IP as<br>RoutingSystemBroadcast on the SystemSetupMulticast address.<br>This test also checks that the IP system broadcast frames are not<br>wrapped in a SecureWrapper even when routing security is enabled.<br>Verify hop_count behavior.|
|**Expectation**|<br>All specified system broadcast frames are received on the IP side as<br>RoutingSystemBroadcast on the SystemSetupMulticastAddress. In<br>addition, they are neither received as RoutingIndication nor as Secure-<br>Wrapper nor on the NonSystemSetupMulticastAddress. The hop_count<br>gets decremented unless the BDUT does not support data security (Fdsk<br>== none) and the original hop_count was 7 in which case it may or may<br>not get decremented.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(multicastAddress = Non-<br>SystemSetupMulticastAddress, backboneKey = BackboneKey1,<br>sbcMode = 1). (Explanation: This also enables routing security<br>which is desired for this test to be able to check that Routing-<br>SystemBroadcast frames are not wrapped in SecureWrapper<br>frames even when routing security is enabled.)|


-----

|Test<br>procedure| Start recording frames on the IP side. Listen on the SystemSetup-<br>MulticastAddress and on the NonSystemSetupMulticastAddress.<br>(Do not wait for the messages to appear on the IP side. Adhere to<br>maximum message rate.).<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>SystemNetworkParameterRead with object type = 0, PID = 11 and<br>_<br>operand = 1").<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>DomainAddressSerialNumber Write with serial number != Serial-<br>_<br>Number and with 4 octet domain address"). (Sent serial number !=<br>SerialNumber of BDUT so this gets routed and not processed by<br>the BDUTs management stack.)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = S-A -<br>_ _<br>Sync Request with SCF.SBC = 1 and SCF.T = 1).<br>_<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = S-A Data<br>_ _<br>with SCF.SBC = 1 and SCF.T = 1).<br> Execute GlPro SendTpSystemBroadcast(hop = 6, pdu = S-A Data<br>_ _<br>with SCF.SBC = 1 and SCF.T = 1).<br> Wait for TimeoutToIp.<br> Verify for received IP frames:<br>o Received RoutingSystemBroadcast on SystemSetup-<br>MulticastAddress:<br> Verify that all messages sent above are received and<br>that the PDU is identical with the PDU originally sent<br>to TP (excluding the hop count).<br>_<br> Execute GlPro VerifyHopCount(originalHopCount =<br>_<br>7 except for the last case where originalHopCount is<br>6), receivedHopCount = hop count field of received<br>_<br>RoutingSystemBroadcast).<br>o Received RoutingIndication on SystemSetupMulticast-<br>Address:<br> Verify that no such frames were received.<br>o Received SecureWrapper on SystemSetupMulticast-<br>Address:<br> Verify that no such frames were received.<br>o Received RoutingSystemBroadcast on NonSystemSetup-<br>MulticastAddress:<br> Verify that no such frames were received.<br>o Received RoutingIndication on NonSystemSetupMulticast-<br>Address:<br> Verify that no such frames were received.<br>o Received SecureWrapper on NonSystemSetupMulticast-<br>Address:<br> Verify that no such frames were received.|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 163 f 376


-----

|Cleanup| Execute GlPro CleanupSystemBroadcast().<br>_|
|---|---|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.1 (IP<br>System Broadcast Frame), 2.2.3.2 (Routing from TP to IP).|
|**Duration**|TimeoutToIp|
|**Mask version**||
|**Open points**||


##### 2.4.4 Valid system broadcast frames are routed from TP1 to IP as RoutingIndication if system broadcast mode is disabled

**Test ID** 80104

**Description** Send all different types of TP broadcast frames which would be routed
from TP to IP as RoutingSystemBroadcast if the system broadcast mode
would be enabled. Check that these are not routed from TP to IP as
RoutingSystemBroadcast.

Verify hop_count behavior.

**Expectation** All specified frames are received on the IP side as RoutingIndication on
the NonSystemSetupMulticastAddress. In addition they are neither
received as RoutingSystemBroadcast nor on the SystemSetupMulticastAddress. The hop_count gets decremented unless the BDUT does not
support data security (Fdsk == none) and the original hop_count was 7 in
which case it may or may not get decremented.

**Setup** - Execute GlPro_SetupSystemBroadcast(multicastAddress = NonSystemSetupMulticastAddress, sbcMode = 0).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 164 f 376

|Test ID|80104|
|---|---|
|**Description**|Send all different types of TP broadcast frames which would be routed<br>from TP to IP as RoutingSystemBroadcast if the system broadcast mode<br>would be enabled. Check that these are not routed from TP to IP as<br>RoutingSystemBroadcast.<br>Verify hop_count behavior.|
|**Expectation**|<br>All specified frames are received on the IP side as RoutingIndication on<br>the NonSystemSetupMulticastAddress. In addition they are neither<br>received as RoutingSystemBroadcast nor on the SystemSetupMulticast-<br>Address. The hop_count gets decremented unless the BDUT does not<br>support data security (Fdsk == none) and the original hop_count was 7 in<br>which case it may or may not get decremented.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(multicastAddress = Non-<br>SystemSetupMulticastAddress, sbcMode = 0).|


-----

|Test<br>procedure| Start recording frames on the IP side. Listen on the SystemSetup-<br>MulticastAddress and on the NonSystemSetupMulticast-<br>Address. (Do not wait for the messages to appear on the IP side.<br>Adhere to maximum message rate.).<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>SystemNetworkParameterRead with object type = 0, PID = 11 and<br>_<br>operand = 1").<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = A -<br>_ _<br>DomainAddressSerialNumber Write with serial number != Serial-<br>_<br>Number and with 4 octet domain address). (Sent serial number !=<br>SerialNumber of BDUT so this gets routed and not processed by<br>the BDUTs management stack.)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = S-A -<br>_ _<br>Sync Request with SCF.SBC = 1 and SCF.T = 1).<br>_<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = S-<br>_<br>A Data with SCF.SBC = 1 and SCF.T = 1).<br>_<br> Execute GlPro SendTpSystemBroadcast(hop = 6, pdu = S-<br>_<br>A Data with SCF.SBC = 1 and SCF.T = 1).<br>_<br> Wait for TimeoutToIp.<br> Verify for received IP frames:<br>o Received RoutingSystemBroadcast on SystemSetup-<br>MulticastAddress:<br> Verify that no such frames were received. (This also<br>verifies that the BDUT did not make an exception for<br>hop count = 7.)<br>_<br>o Received RoutingIndication on SystemSetupMulticast-<br>Address:<br> Verify that no such frames were received.<br>o Received RoutingSystemBroadcast on NonSystemSetup-<br>MulticastAddress:<br> Verify that no such frames were received.<br>o Received RoutingIndication on NonSystemSetupMulticast-<br>Address:<br> Verify that all messages sent above are received and<br>that the PDU is identical with the PDU originally sent<br>to TP (excluding the hop count).<br>_<br> Execute GlPro VerifyHopCount(originalHopCount =<br>_<br>7 except for the last case where originalHopCount is<br>6), receivedHopCount = hop count field of received<br>_<br>RoutingIndication).|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 165 f 376


-----

|Specification<br>reference|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.1 (IP<br>System Broadcast Frame), 2.2.3.2 (Routing from TP to IP).|
|---|---|
|**Duration**|TimeoutToIp|
|**Mask version**||
|**Open points**||


##### 2.4.5 Unsuitable frames are not routed from TP1 to IP as RoutingSystem- Broadcast

**Test ID** 80105

**Description** Send TP1 messages which are not eligible to be routed to IP as system
broadcast, but which look very similar to messages which are eligible to
be routed to IP as RoutingSystemBroadcast. None of these should be
routed as RoutingSystemBroadcast.

**Expectation** None of the specified frames are received on IP as RoutingSystemBroadcast or on the SystemSetupMulticastAddress.

**Setup** - Execute GlPro_SetupSystemBroadcast(multicastAddress = NonSystemSetupMulticastAddress, sbcMode = 1).
`o` Explanation: Setting the routing multicast address to NonSystemSetupMulticastAddress so we can separately detect
frames routed via the normal routing mechanism (domain
broadcast and system broadcast routing).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 166 f 376

|Test ID|80105|
|---|---|
|**Description**|Send TP1 messages which are not eligible to be routed to IP as system<br>broadcast, but which look very similar to messages which are eligible to<br>be routed to IP as RoutingSystemBroadcast. None of these should be<br>routed as RoutingSystemBroadcast.|
|**Expectation**|None of the specified frames are received on IP as RoutingSystem-<br>Broadcast or on the SystemSetupMulticastAddress.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(multicastAddress = Non-<br>SystemSetupMulticastAddress, sbcMode = 1).<br>`o` Explanation: Setting the routing multicast address to Non-<br>SystemSetupMulticastAddress so we can separately detect<br>frames routed via the normal routing mechanism (domain<br>broadcast and system broadcast routing).|


-----

|Test<br>procedure| Start recording frames on the IP side. Listen on the SystemSetup-<br>MulticastAddress and on the NonSystemSetupMulticast-<br>Address. (Do not wait for the messages to appear on the IP side.<br>Adhere to maximum message rate.).<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>SystemNetworkParameterRead with object type = 1, PID = 11 and<br>_<br>operand = 1"). (wrong object type)<br>_<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>SystemNetworkParameterRead with object type = 0, PID = 12 and<br>_<br>operand = 1"). (wrong PID)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>SystemNetworkParameterRead with object type = 0, PID = 11 and<br>_<br>operand = 2"). (wrong operand)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = A -<br>_ _<br>DomainAddressSerialNumber Write with serial number != Serial-<br>_<br>Number and with 21 octet domain address). (Send serial number<br>!= SerialNumber of BDUT so this does not get processed by the<br>BDUTs management stack.) (21 octet domain address must<br>always be wrapped in a S-A Data-PDU so this message will get<br>_<br>discarded)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = S-A -<br>_ _<br>Sync Request with SCF.SBC = 0 and SCF.T = 1). (discarded<br>_<br>because SBC is not 1)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = S-<br>_<br>A Data with SCF.SBC = 0 and SCF.T = 1). (discarded because<br>_<br>SBC is not 1)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = S-A -<br>_ _<br>Sync Request with SCF.SBC = 1 and SCF.T = 0). (discarded<br>_<br>because T is not 1)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = S-<br>_<br>A Data with SCF.SBC = 1 and SCF.T = 0). (discarded because T<br>_<br>is not 1)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = S-A -<br>_ _<br>Sync Response with SCF.SBC = 1 and SCF.T = 1). (wrong APCI<br>_<br>for TP to IP)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>SystemNetworkParameterResponse with object type = 0, PID =<br>_<br>11 and operand = 1"). (wrong APCI for TP to IP)<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>IndividualAddress Read"). (wrong APCI for TP to IP)<br>_<br> Execute GlPro SendTpSystemBroadcast(hop = 0, pdu = "A -<br>_ _<br>SystemNetworkParameterRead with object type = 0, PID = 11 and<br>_<br>operand = 1"). (discarded because hop count = 0.)<br>_<br> Execute GlPro SendTpSystemBroadcast(hop = 0, pdu = A -<br>_ _<br>DomainAddressSerialNumber Write with serial number != Serial-<br>_<br>Number and with 4 octet domain address). (Sent serial number !=|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 167 f 376


-----

|Col1|SerialNumber of BDUT so this gets routed and not processed by<br>the BDUTs management stack.) (discarded because hop count =<br>_<br>0.)<br> Execute GlPro SendTpSystemBroadcast(hop = 0, pdu = S-A -<br>_ _<br>Sync Request with SCF.SBC = 1 and SCF.T = 1). (discarded<br>_<br>because hop count = 0.)<br>_<br> Execute GlPro SendTpSystemBroadcast(hop = 0, pdu = S-<br>_<br>A Data with SCF.SBC = 1 and SCF.T = 1). (discarded because<br>_<br>hop count = 0.)<br>_<br> Wait for TimeoutToIp.<br> Verify for received IP frames:<br>o Received RoutingSystemBroadcast on SystemSetup-<br>MulticastAddress:<br> Verify that no such frames were received.<br>o Received RoutingIndication on SystemSetupMulticast-<br>Address:<br> Verify that no such frames were received.<br>o Received RoutingSystemBroadcast on NonSystemSetup-<br>MulticastAddress:<br> Verify that no such frames were received.<br>o Received RoutingIndication on NonSystemSetupMulticast-<br>Address:<br> All of the frames sent above, except those with hop =<br>0, are received. (Explanation: System broadcast<br>mode is enabled which means that domain<br>broadcasts are also enabled, even if domain<br>broadcast would be blocked by some device specific<br>mechanism. Without blocking domain broadcasts the<br>specified frames would also be routed as specified<br>here if system broadcast mode is disabled.)|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.1 (IP<br>System Broadcast Frame), 2.2.3.2 (Routing from TP to IP), 2.2.3.4<br>(hop_count)|
|**Duration**|<br>TimeoutToIp|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 168 f 376


-----

##### 2.4.6 Valid system broadcast frames are routed from IP to TP1 if system broadcast mode is enabled

**Test ID** 80106

**Description** Set system broadcast mode of BDUT to Enabled. Then send all different
types of IP system broadcast frames which should be routed from IP to
TP1 as broadcast messages. Check that these are routed from IP to
TP1.

Verify hop_count behavior.

**Expectation** The specified frames are routed to the TP1 side. The hop_count gets
decremented unless the BDUT does not support data security (Fdsk ==
none) and the original hop_count was 7 in which case it may or may not
get decremented.

**Setup** - Execute GlPro_SetupSystemBroadcast( sbcMode = 1).

**Test procedure** - Start recording messages on the TP side. (Do not wait for the
messages to appear on the TP side. Adhere to maximum
message rate.).

             - Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu =
"A_SystemNetworkParameterResponse with object_type = 0, PID
= 11 and operand = 1").

             - Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = SA_Sync_Response with SCF.SBC = 1 and SCF.T = 1).

             - Execute GlPro_SendRoutingSystemBroadcast(hop = 6, pdu = SA_Sync_Response with SCF.SBC = 1 and SCF.T = 1).

             - Wait for TimeoutToTp1.

             - Verify that the two IP frames sent above have appeared on the TP
side in the order they were sent. For each message check:
`o` Verify that the PDU is identical with the PDU originally sent
to IP.
`o` Verify that Message code is L_Data.ind.
`o` Verify that cEMI.ControlField2.DestAddrType = 1.
`o` Verify that cEMI.DestAddr = 0.
`o` If inner cEMI message is S-A_Sync_Response-PDU:

                     - Verify that SCF.SBC = 1.
`o` Execute GlPro_VerifyHopCount(originalHopCount = 7
except for the last case where originalHopCount is 6),
receivedHopCount = hop_count field of received message).

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 169 f 376

|Test ID|80106|
|---|---|
|**Description**|Set system broadcast mode of BDUT to Enabled. Then send all different<br>types of IP system broadcast frames which should be routed from IP to<br>TP1 as broadcast messages. Check that these are routed from IP to<br>TP1.<br>Verify hop_count behavior.|
|**Expectation**|<br>The specified frames are routed to the TP1 side. The hop_count gets<br>decremented unless the BDUT does not support data security (Fdsk ==<br>none) and the original hop_count was 7 in which case it may or may not<br>get decremented.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast( sbcMode = 1).|
|**Test procedure**| <br>Start recording messages on the TP side. (Do not wait for the<br>messages to appear on the TP side. Adhere to maximum<br>message rate.).<br> <br>Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu =<br>"A_SystemNetworkParameterResponse with object_type = 0, PID<br>= 11 and operand = 1").<br> <br>Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = S-<br>A_Sync_Response with SCF.SBC = 1 and SCF.T = 1).<br> <br>Execute GlPro_SendRoutingSystemBroadcast(hop = 6, pdu = S-<br>A_Sync_Response with SCF.SBC = 1 and SCF.T = 1).<br> <br>Wait for TimeoutToTp1.<br> <br>Verify that the two IP frames sent above have appeared on the TP<br>side in the order they were sent. For each message check:<br>`o` Verify that the PDU is identical with the PDU originally sent<br>to IP.<br>`o` Verify that Message code is L_Data.ind.<br>`o` Verify that cEMI.ControlField2.DestAddrType = 1.<br>`o` Verify that cEMI.DestAddr = 0.<br>`o` If inner cEMI message is S-A_Sync_Response-PDU:<br> <br>Verify that SCF.SBC = 1.<br>`o` Execute GlPro_VerifyHopCount(originalHopCount = 7<br>except for the last case where originalHopCount is 6),<br>receivedHopCount = hop_count field of received message).|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|


-----

|Specification<br>reference|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.1 (IP<br>System Broadcast Frame), 2.2.3.3 (Routing from IP to TP).|
|---|---|
|**Duration**|TimeoutToTp1|
|**Mask version**||
|**Open points**||


##### 2.4.7 Valid system broadcast frames are not routed from IP to TP1 if system broadcast mode is disabled

**Test ID** 80107

**Description** System broadcast mode of BDUT is disabled. Then send all different
types of IP system broadcast frames which would be routed from IP to
TP1 as broadcast if the system broadcast mode would be enabled.
Check that these are not routed from IP to TP1 (because the system
broadcast mode is disabled).

**Expectation** None of the specified frames are routed to TP1.

**Setup** - Execute GlPro_SetupSystemBroadcast(sbcMode = 0).

**Test** - Start recording frames on the TP side. (Do not wait for the
**procedure** messages to appear on the TP side. Adhere to maximum
message rate.).

             - Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = "A_SystemNetworkParameterResponse with object_type = 0, PID =
11 and operand = 1").

             - Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = SA_Sync_Response with SCF.SBC = 1 and SCF.T = 1).

             - Execute GlPro_SendRoutingSystemBroadcast(hop = 6, pdu = SA_Sync_Response with SCF.SBC = 1 and SCF.T = 1).

             - Wait for TimeoutToTp1.

             - Verify that none of the the two cEMI messages sent above have
appeared on the TP side. (This also verifies that the BDUt did not
make an exception for hop_count = 7.)

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.3.3
**reference** (Routing from IP to TP).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 170 f 376

|Test ID|80107|
|---|---|
|**Description**|System broadcast mode of BDUT is disabled. Then send all different<br>types of IP system broadcast frames which would be routed from IP to<br>TP1 as broadcast if the system broadcast mode would be enabled.<br>Check that these are not routed from IP to TP1 (because the system<br>broadcast mode is disabled).|
|**Expectation**|None of the specified frames are routed to TP1.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(sbcMode = 0).|
|**Test**<br>**procedure**| <br>Start recording frames on the TP side. (Do not wait for the<br>messages to appear on the TP side. Adhere to maximum<br>message rate.).<br> <br>Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = "A_-<br>SystemNetworkParameterResponse with object_type = 0, PID =<br>11 and operand = 1").<br> <br>Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = S-<br>A_Sync_Response with SCF.SBC = 1 and SCF.T = 1).<br> <br>Execute GlPro_SendRoutingSystemBroadcast(hop = 6, pdu = S-<br>A_Sync_Response with SCF.SBC = 1 and SCF.T = 1).<br> <br>Wait for TimeoutToTp1.<br> <br>Verify that none of the the two cEMI messages sent above have<br>appeared on the TP side. (This also verifies that the BDUt did not<br>make an exception for hop_count = 7.)|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.3.3<br>(Routing from IP to TP).|


-----

|Duration|TimeoutToTp1|
|---|---|
|**Mask version**||
|**Open points**||


##### 2.4.8 Unsuitable frames are not routed from IP to TP1

**Test ID** 80108

**Description** Send IP frames which are not eligible to be routed form IP to TP1 as
system broadcast, but which look very similar to messages which are
eligible to be routed from IP to TP1 as system broadcast. None of these
should be routed.

**Expectation** All of the frames are discarded.

**Setup** - Execute GlPro_SetupSystemBroadcast( sbcMode = 1).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 171 f 376

|Test ID|80108|
|---|---|
|**Description**|Send IP frames which are not eligible to be routed form IP to TP1 as<br>system broadcast, but which look very similar to messages which are<br>eligible to be routed from IP to TP1 as system broadcast. None of these<br>should be routed.|
|**Expectation**|All of the frames are discarded.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast( sbcMode = 1).|


-----

|Test<br>procedure| Start recording frames on the TP side. (Do not wait for the<br>messages to appear on the TP side. Adhere to maximum<br>message rate.).<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu =<br>_<br>"A SystemNetworkParameterResponse with object type = 1, PID<br>_ _<br>= 11 and operand = 1"). (wrong object type)<br>_<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu =<br>_<br>"A SystemNetworkParameterResponse with object type = 0, PID<br>_ _<br>= 12 and operand = 1"). (wrong PID)<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu =<br>_<br>"A SystemNetworkParameterResponse with object type = 0, PID<br>_ _<br>= 11 and operand = 2"). (wrong operand)<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu = "S-<br>_<br>A Sync Response with SCF.SBC = 0 and with SCF.T = 1").<br>_ _<br>(discarded because SBC is not 1)<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu = "S-<br>_<br>A Sync Response with SCF.SBC = 1 and with SCF.T = 0").<br>_ _<br>(discarded because T is not 1)<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu =<br>_<br>"A SystemNetworkParameterRead with object type = 0, PID = 11<br>_ _<br>and operand = 1"). (wrong APCI for IP to TP)<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu =<br>_<br>"A DomainAddressSerialNumber Write with serial number !=<br>_ _<br>SerialNumber and with 4 octet domain address"). (Send serial<br>number != SerialNumber of BDUT so this does not get processed<br>by the BDUTs management stack.)<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu = "S-<br>_<br>A Sync Request with SCF.SBC = 1" and SCF.T = 1). (wrong<br>_ _<br>APCI for IP to TP)<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu = "S-<br>_<br>A Data with SCF.SBC = 1"). (wrong APCI for IP to TP)<br>_<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu =<br>_<br>"A IndividualAddress Read"). (wrong APCI for IP to TP)<br>_ _<br> Execute GlPro SendRoutingSystemBroadcast(hop = 0, pdu =<br>_<br>"A SystemNetworkParameterResponse with object type = 0, PID<br>_ _<br>= 11 and operand = 1"). (discarded because hop count = 0.)<br>_<br> Execute GlPro SendRoutingSystemBroadcast(hop = 0, pdu = S-<br>_<br>A Sync Response with SCF.SBC = 1 and SCF.T = 1). (discarded<br>_ _<br>because hop count = 0.)<br>_<br> Wait for TimeoutToTp1.<br> Verify that none of the cEMI messages sent above have appeared<br>on the TP side. Note that an S-A Sync Response may appear on<br>_ _<br>the TP side. This is OK.|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 172 f 376


-----

|Cleanup| Execute GlPro CleanupSystemBroadcast().<br>_|
|---|---|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.3.3<br>(Routing from IP to TP).|
|**Duration**|TimeoutToTp1|
|**Mask version**||
|**Open points**||


##### 2.4.9 Handling in Management: Unsuitable system broadcast frames are ignored (secure)

**Test ID** 80109

**Description** Verify unsuitable secure system broadcast frames targeted at the BDUT
are ignored by the BDUT. A number of RoutingSystemBroadcast frames
are sent to the BDUT. The BDUT should ignore all of them. The frames
on IP and the telegrams on the TP1 line (if any) are monitored.

**Expectation** Unsuitable frames are silently ignored.

**Setup** - Execute GlPro_SetupSystemBroadcast(multicastAddress =
SystemSetupMulticastAddress, progMode = 1).

            - If BDUT is a secure device:
`o` Execute GlPro_DataSecuritySync().

            - else (BDUT is a non-secure device):
`o` Use sequence number 0 for the S-A_Data frames in this
test. Explanation: This is OK because the BDUT has no
concept of a sequence number (in the data security sense)
anyway.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 173 f 376

|Test ID|80109|
|---|---|
|**Description**|Verify unsuitable secure system broadcast frames targeted at the BDUT<br>are ignored by the BDUT. A number of RoutingSystemBroadcast frames<br>are sent to the BDUT. The BDUT should ignore all of them. The frames<br>on IP and the telegrams on the TP1 line (if any) are monitored.|
|**Expectation**|Unsuitable frames are silently ignored.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(multicastAddress =<br>SystemSetupMulticastAddress, progMode = 1).<br> <br>If BDUT is a secure device:<br>`o` Execute GlPro_DataSecuritySync().<br> <br>else (BDUT is a non-secure device):<br>`o` Use sequence number 0 for the S-A_Data frames in this<br>test. Explanation: This is OK because the BDUT has no<br>concept of a sequence number (in the data security sense)<br>anyway.|


-----

|Test<br>procedure| Start recording ROUTING SYSTEM -<br>_ _<br>BROADCAST and ROUTING INDICATION frames from BDUT on<br>_<br>SystemSetupMulticastAddress.<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "S-A Data<br>_ _<br>with confidentiality, with SCF.SBC = 1, containing a A Individual-<br>_<br>Address Read"). (Discarded because APCI not eligible.)<br>_<br> Wait for response, timeout = TimeoutAppLayerResponse.<br>o On response: Abort test and return TestFailed.<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "A Domain-<br>_ _<br>Address-SerialNumber Write with serialNumber = SerialNumber<br>_<br>and 21 octet domain address NonSystemSetupMulticast-<br>Address2:01:BackboneKey1"). (Discarded because 21-octet DoA<br>is not wrapped in S-A Data.)<br>_<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "S-A Data<br>_ _<br>without confidentiality, with SCF.SBC = 1, containing a A Domain-<br>_<br>AddressSerial-Number Write with serialNumber = SerialNumber<br>_<br>and 4 octet domain address NonSystemSetupMulticastAddress2").<br>(Discarded because S-A Data was sent without confidentiality.)<br>_<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "S-A Data<br>_ _<br>with confidentiality, with SCF.SBC = 0, containing a A Domain-<br>_<br>AddressSerial-Number Write with serialNumber = SerialNumber<br>_<br>and 4 octet domain address NonSystemSetupMulticast-<br>Address2"). (Discarded because S-A Data was sent with<br>_<br>SCF.SBC = 0.)<br> Explanation: Now we need to wait for something not to happen<br>(setting the multicast address to NonSystemSetupMulticast-<br>Address2 should not happen). The only thing we can do is to wait<br>for the worst case timeout after writing the domain address.<br> Wait for WaitTimeAfterWritingDomainAddress + TimeoutAfter-<br>WritingDomainAddress.<br>o Explanation: The BDUT may switch from the old to the new<br>multicast address any time during this timeout, so we have<br>to wait the whole timeout. (There is no point in polling for<br>any change to happen as it would just optimize the fail-<br>case.)<br> Send a DescriptionRequest to the BDUT.<br> Wait for a DescriptionResponse from the BDUT. (Explanation: This<br>contains the routing multicast address.) Timeout: Timeout-<br>DescriptionResponse<br> If received multicast address is NonSystemSetupMulticast-<br>Address2:<br>o Abort test and return TestFailed. (Explanation: Because all<br>DoA writes above should fail.)|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 174 f 376


-----

|Cleanup| Execute GlPro CleanupSystemBroadcast().<br>_|
|---|---|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|WaitTimeAfterWritingDomainAddress + TimeoutAfterWritingDomain-<br>Address|
|**Mask version**||
|**Open points**||


##### 2.4.10 Handling in Management: Unsuitable system broadcast frames are ignored (non-secure)

**Test ID** 80110

**Description** Verify unsuitable non-secure system broadcast frames targeted at the
BDUT are ignored by the BDUT. A number of RoutingSystemBroadcast
frames are sent to the BDUT. The BDUT should ignore all of them. The
frames on IP and the telegrams on the TP1 line (if any) are monitored.

**Expectation** Unsuitable frames are silently ignored.

**Setup** - Execute GlPro_PowerCycleBdut()
`o` Explanation: Try to make A_SystemNetwork-ParameterRead with object_type = 0, PID = 11 and operand = 3
work.).

             - Execute GlPro_SetupSystemBroadcast(multicastAddress =
SystemSetupMulticastAddress, progMode = 1).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 175 f 376

|Test ID|80110|
|---|---|
|**Description**|Verify unsuitable non-secure system broadcast frames targeted at the<br>BDUT are ignored by the BDUT. A number of RoutingSystemBroadcast<br>frames are sent to the BDUT. The BDUT should ignore all of them. The<br>frames on IP and the telegrams on the TP1 line (if any) are monitored.|
|**Expectation**|Unsuitable frames are silently ignored.|
|**Setup**| <br>Execute GlPro_PowerCycleBdut()<br>`o` Explanation: Try to make A_SystemNetwork-Parameter-<br>Read with object_type = 0, PID = 11 and operand = 3<br>work.).<br> <br>Execute GlPro_SetupSystemBroadcast(multicastAddress =<br>SystemSetupMulticastAddress, progMode = 1).|


-----

|Test<br>procedure| Start recording IP system broadcast frames from BDUT.<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "A -<br>_ _<br>IndividualAddress Read"). (Discarded because APCI not eligible.)<br>_<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "A Property-<br>_ _<br>Value Read with object index = 0, PID = 1"). (Discarded because<br>_ _<br>APCI not eligible.)<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "A Device-<br>_ _<br>Descriptor Read, addressed to BDUT via IA"). (Discarded<br>_<br>because APCI not eligible.)<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "A -<br>_ _<br>IndividualAddressSerialNumber Read, addressed to BDUT via<br>_<br>serial number"). (Discarded because APCI not eligible.)<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "A System-<br>_ _<br>Network-ParameterRead with object type = 0, PID = 1 (PID -<br>_ _<br>OBJECT TYPE) and operand = 1"). (Discarded because of wrong<br>_<br>PID.)<br> Execute GlPro SendRoutingSystemBroadcast(pdu = "A System-<br>_ _<br>Network-ParameterRead with object type = 0, PID = 11 and<br>_<br>operand = 3"). (Discarded because of test info 3 (NM Read -<br>_ _ _<br>SerialNumber By PowerReset) which is not eligible for Routing-<br>_ _<br>SystemBroadcast.)<br> Wait for max(TimeoutToTp1, TimeoutAppLayerResponse).<br> Expectation: All of the frames sent above should be ignored by the<br>BDUT, because they do not match the criterions for eligible<br>RoutingSystemBroadcast frames accepted by the BDUT.<br> If any IP system broadcast frames or routing indications have been<br>received on the IP side: Abort test and return TestFailed.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|max(TimeoutToTp1, TimeoutAppLayerResponse)|
|**Mask version**||
|**Open points**||


##### 2.4.11 System broadcast mode automatically switches back to Disabled

**Test ID** 80111

©C i h 1998 2018 KNX A i i V i 1 1 AS P 176 f 376

|Test ID|80111|
|---|---|


-----

|Description| Check whether system broadcast mode switches back to Disabled<br>after the defined timeout.<br> Check whether the timeout can be extended by enabling it again<br>while it is still enabled.|
|---|---|
|**Expectation**|The system broadcast mode automatically switches back to disabled<br>after the timeout. Enabling it while it is enabled resets the timeout timer<br>and so results in a new full timeout interval where the system broadcast<br>mode is enabled.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(sbcMode = 0, multicast-<br>Address = SystemSetupMulticastAddress).|
|**Test procedure**| <br>Execute GlPro_SetupSystemBroadcast(sbcMode = 1).<br>`o` Expectation: This should re-start the broadcast mode<br>enable timeout in the BDUT.<br> <br>Execute LoPro_VerifySystemBroadcastModeFallbackTo-<br>Disabled()<br> <br>Execute GlPro_SetupSystemBroadcast(sbcMode = 1).<br> <br>Wait TimeoutIpSystemBroadcastFallbackToDisable/2.<br> <br>Execute GlPro_SetupSystemBroadcast(sbcMode = 1).<br>`o` Expectation: This should re-start the broadcast mode<br>enable timeout in the BDUT.<br> <br>Execute LoPro_VerifySystemBroadcastModeFallbackTo-<br>Disabled().|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.3.1.1<br>(PID_IP_SBC_CONTROL)|
|**Duration**|<br>2.5 * TimeoutIpSystemBroadcastFallbackToDisable + 2 * (TimeoutIp-<br>SystemBroadcastFallbackToDisableDelta + max(TimeoutToTp1,<br>TimeoutToIp))|
|**Mask version**||
|**Open points**||


Local procedures:

**Procedure** LoPro_VerifySystemBroadcastModeFallbackToDisabled()
**name**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 177 f 376

|Procedure<br>name|LoPro VerifySystemBroadcastModeFallbackToDisabled()<br>_|
|---|---|


-----

|Description|Verify that the system broadcast mode switches back to disabled in about<br>TimeoutIpSystemBroadcastFallbackToDisable. It checks that system<br>broadcasts are handled shortly before the timeout expires and are no<br>longer handled shortly after the timeout expires.<br>This procedure assumes that the system broadcast mode has been<br>enabled just before calling this procedure (time-wise).|
|---|---|
|**Parameter**<br>**description**|-|
|**Procedure**| <br>Start recording frames on the IP side and TP side. (Do not wait for<br>frames/messages to appear on either side. Adhere to maximum<br>message rate.).<br> <br>Define absolute time t0 = CurrentTime() + TimeoutIpSystem-<br>BroadcastFallbackToDisable - TimeoutIpSystemBroadcastFallback-<br>ToDisableDelta.<br> <br>Define absolute time t1 = max(t0 + 2*TimeoutIpSystemBroadcast-<br>FallbackToDisableDelta, t0 + TimeoutToTp1, t0 + TimeoutToIp).<br> <br>Wait until t0.<br> <br>Execute GlPro_SendTpSystemBroadcast(hop = 7, pdu = "A_-<br>SystemNetworkParameterRead with object_type = 0, PID = 11 and<br>operand = 1").<br> <br>Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = "A_-<br>SystemNetworkParameterResponse with object_type = 0, PID = 11<br>and operand = 1").<br> <br>Wait until t1.<br> <br>Verify that the frame and the message sent above have been<br>routed to the other side, respectively:<br>`o` Expect a RoutingSystemBroadcast containing a A_System-<br>NetworkParameterRead on IP.<br>`o` Expect an A_SystemNetworkParameterResponse on TP1.<br> <br>Execute GlPro_SendTpSystemBroadcast(hop = 7, pdu = "A_-<br>SystemNetworkParameterRead with object_type = 0, PID = 11 and<br>operand = 1").<br> <br>Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = "A_-<br>SystemNetworkParameterResponse with object_type = 0, PID = 11<br>and operand = 1").<br> <br>Wait for max(TimeoutToTp1, TimeoutToIp).<br> <br>Verify that the TP1 message above is routed to IP as a Routing-<br>Indication, and that the IP frame sent above is discarded.<br>`o` Expect a RoutingIndication containing a A_SystemNetwork-<br>ParameterRead on IP.<br>`o` Expect no message at all on TP1.|
|**Return**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 178 f 376


-----

|Duration|TimeoutIpSystemBroadcastFallbackToDisable + TimeoutIpSystem-<br>BroadcastFallbackToDisableDelta + max(TimeoutToTp1, TimeoutToIp)|
|---|---|
|**Open points**||


##### 2.4.12 System broadcast mode can be manually disabled

**Test ID** 80112

**Description** Enable system broadcast mode, verify it is enabled, then disable it
before the 20s fallback to disabled. Verify it is immediately disabled.

**Expectation** System broadcast frames are not routed after system broadcast mode is
manually disabled.

**Setup** - Execute GlPro_SetupSystemBroadcast(multicastAddress =
SystemSetupMulticastAddress).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 179 f 376

|Test ID|80112|
|---|---|
|**Description**|Enable system broadcast mode, verify it is enabled, then disable it<br>before the 20s fallback to disabled. Verify it is immediately disabled.|
|**Expectation**|System broadcast frames are not routed after system broadcast mode is<br>manually disabled.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(multicastAddress =<br>SystemSetupMulticastAddress).|


-----

|Test procedure| Start recording frames on the IP side and TP side. (Do not wait<br>for frames/messages to appear on either side. Adhere to<br>maximum message rate.).<br> Execute GlPro SetupSystemBroadcast(sbcMode = 1).<br>_<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>SystemNetworkParameterRead with object type = 0, PID = 11<br>_<br>and operand = 1").<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu =<br>_<br>"A SystemNetworkParameterResponse with object type = 0,<br>_ _<br>PID = 11 and operand = 1").<br> Wait until the message and the frame sent above have been<br>seen on the other side. Timeout: max(TimeoutToTp1, TimeoutTo-<br>Ip). On timeout: Abort test and return TestFailed.<br>o Expect a RoutingSystemBroadcast containing a A -<br>_<br>SystemNetworkParameterRead on IP.<br>o Expect an A SystemNetworkParameterResponse on TP1.<br>_<br> Execute GlPro SetupSystemBroadcast(sbcMode = 0).<br>_<br> Execute GlPro SendTpSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>SystemNetworkParameterRead with object type = 0, PID = 11<br>_<br>and operand = 1").<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu =<br>_<br>"A SystemNetworkParameterResponse with object type = 0,<br>_ _<br>PID = 11 and operand = 1").<br> Wait for max(TimeoutToTp1, TimeoutToIp).<br> Verify that the TP1 message above is routed to IP as a Routing-<br>Indication, and that the IP frame sent above is discarded.<br>o Expect a RoutingIndication containing a A System-<br>_<br>NetworkParameterRead on IP.<br>o Expect no message at all on TP1.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.3.1.1<br>(PID_IP_SBC_CONTROL)|
|**Duration**|<br>2 * max(TimeoutToTp1, TimeoutToIp).|
|**Mask version**||
|**Open points**||


##### 2.4.13 Handling in Management: Read serial number

**Test ID** 80113

©C i h 1998 2018 KNX A i i V i 1 1 AS P 180 f 376

|Test ID|80113|
|---|---|


-----

|Description|Read serial number of BDUT using A SystemNetworkParameter -<br>_ _<br>Read/PID SERIAL NUMBER via IP System Broadcast while<br>_ _<br>programming mode is enabled.|
|---|---|
|**Expectation**|The serial number read is the BDUTs serial number. The response is<br>received via IP System Broadcast.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast( multicastAddress = Non-<br>SystemSetupMulticastAddress, progMode = 1).<br>`o` Explanation: multicastAddress: Not strictly necessary, but<br>adds a positive test-variant of test 2.4.2 as a subtest.|
|**Test procedure**| <br>Execute GlPro_SendRoutingSystemBroadcast(pdu = "A_System-<br>NetworkParameterRead with object_type = 0, PID = 11 and<br>operand = 1").<br> <br>Wait for RoutingSystemBroadcast/A_SystemNetworkParameter-<br>Response with timeout TimeoutAppLayerResponse (receive on<br>SystemSetupMulticastAddress only). On timeout abort test and<br>return TestFailed.<br> <br>Verify that the received serial number is the same as Serial-<br>Number.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|TimeoutAppLayerResponse + WaitTimeAfterWritingDomainAddress +<br>TimeoutAfterWritingDomainAddress + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.4.14 Handling in Management: SyncRequest is responded to

**Test ID** 80114

**Description** Send a S-A_Sync_Request to the BDUT via IP system broadcast
and wait for a response.

**Expectation** A S-A_Sync_Response is received via IP system broadcast.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 181 f 376

|Test ID|80114|
|---|---|
|**Description**|Send a S-A_Sync_Request to the BDUT via IP system broadcast<br>and wait for a response.|
|**Expectation**|A S-A_Sync_Response is received via IP system broadcast.|
|**Setup**|<br>-|


-----

|Test procedure| Execute GlPro DataSecuritySync().<br>_|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


##### 2.4.15 Handling in Management: Non-secure domain address write (4 octet version)

**Test ID** 80115

**Description** Send a non-secure domain address write (4 octet version) to the BDUT.
The routing multicast address in the BDUT should be updated
accordingly.

**Expectation** The routing multicast address is updated accordingly in the BDUT.

**Setup** - Execute GlPro_SetupSystemBroadcast(securityMode = 0,
multicastAddress = NonSystemSetupMulticastAddress).

**Test procedure** - Execute GlPro_SendRoutingSystemBroadcast(pdu = A_DomainAddressSerialNumber_Write with serial number = SerialNumber
and with 4 octet domainAddress = NonSystemSetupMulticastAddress2).

             - Execute GlPro_WaitUntilResponsiveAfterDomainAddressWrite(multicastAddress = NonSystemSetupMulticastAddress2,
secureRouting = 0, backboneKey = 0).

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2
**reference** (Handling in Management).

**Duration** 2 * WaitTimeAfterWritingDomainAddress + 2 * TimeoutAfterWritingDomainAddress + ConfirmedRestart

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 182 f 376

|Test ID|80115|
|---|---|
|**Description**|Send a non-secure domain address write (4 octet version) to the BDUT.<br>The routing multicast address in the BDUT should be updated<br>accordingly.|
|**Expectation**|The routing multicast address is updated accordingly in the BDUT.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(securityMode = 0,<br>multicastAddress = NonSystemSetupMulticastAddress).|
|**Test procedure**| <br>Execute GlPro_SendRoutingSystemBroadcast(pdu = A_Domain-<br>AddressSerialNumber_Write with serial number = SerialNumber<br>and with 4 octet domainAddress = NonSystemSetupMulticast-<br>Address2).<br> <br>Execute GlPro_WaitUntilResponsiveAfterDomainAddress-<br>Write(multicastAddress = NonSystemSetupMulticastAddress2,<br>secureRouting = 0, backboneKey = 0).|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|2 * WaitTimeAfterWritingDomainAddress + 2 * TimeoutAfterWriting-<br>DomainAddress + ConfirmedRestart|
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.4.16 Handling in Management: Non-secure domain address write (4 octet version) is ignored when security mode is enabled

**Test ID** 80116

**Description** Send a non-secure domain address write (4 octet version) to the BDUT,
while the security mode is enabled.

**Expectation** The domain address write is silently ignored.

**Setup** - Execute GlPro_SetupSystemBroadcast( securityMode = 1,
multicastAddress = NonSystemSetupMulticastAddress).

**Test** - Execute GlPro_SendRoutingSystemBroadcast(pdu = A_Domain**procedure** AddressSerialNumber_Write with serial number = SerialNumber
and with 4 octet domainAddress = NonSystemSetupMulticastAddress2).

             - Explanation: We tried to write a new multicast address into the
device and we now must verify that the device did not accept it.
This is made difficult by the fact that even if devices do accept a
new multicast address they are allowed to make this new multicast
address effective only after up to 60 s. Instead we check whether
the old multicast address is still active after waiting 1 second.

             - Execute GlPro_WaitUntilResponsiveAfterDomainAddressWrite(multicastAddress = NonSystemSetupMulticastAddress,
secureRouting = 0, backboneKey = 0).

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2
**reference** (Handling in Management).

**Duration** 2 * WaitTimeAfterWritingDomainAddress + 2 * TimeoutAfterWritingDomainAddress + ConfirmedRestart

**Mask version**

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 183 f 376

|Test ID|80116|
|---|---|
|**Description**|Send a non-secure domain address write (4 octet version) to the BDUT,<br>while the security mode is enabled.|
|**Expectation**|The domain address write is silently ignored.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast( securityMode = 1,<br>multicastAddress = NonSystemSetupMulticastAddress).|
|**Test**<br>**procedure**| <br>Execute GlPro_SendRoutingSystemBroadcast(pdu = A_Domain-<br>AddressSerialNumber_Write with serial number = SerialNumber<br>and with 4 octet domainAddress = NonSystemSetupMulticast-<br>Address2).<br> <br>Explanation: We tried to write a new multicast address into the<br>device and we now must verify that the device did not accept it.<br>This is made difficult by the fact that even if devices do accept a<br>new multicast address they are allowed to make this new multicast<br>address effective only after up to 60 s. Instead we check whether<br>the old multicast address is still active after waiting 1 second.<br> <br>Execute GlPro_WaitUntilResponsiveAfterDomainAddress-<br>Write(multicastAddress = NonSystemSetupMulticastAddress,<br>secureRouting = 0, backboneKey = 0).|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|2 * WaitTimeAfterWritingDomainAddress + 2 * TimeoutAfterWriting-<br>DomainAddress + ConfirmedRestart|
|**Mask version**||
|**Open points**||


-----

##### 2.4.17 Handling in Management: Secure domain address write (4 octet version)

**Test ID** 80117

**Description** Send a secure domain address write (4 octet version) to the BDUT, while
the security mode is enabled or disabled and routing security is enabled.

**Expectation** The domain address is accepted. Routing security is disabled. The
security mode is unaffected.

**Setup** - (done in test)

**Test** - For securityMode in 0,1:
**procedure** `o` Execute GlPro_SetupSystemBroadcast( securityMode =
securityMode, multicastAddress = NonSystemSetupMulticastAddress, backboneKey = BackboneKey1).

                    - Explanation: securityMode: The security mode is not
supposed to change. We set it once to 0 and once to
1 to be able to detect whether it got affected by the
A_DomainAddressSerialNumber_Write.

                    - Explanation: backboneKey: Enable secure routing so
we can detect that this gets disabled.
`o` Execute GlPro_DataSecuritySync().
`o` Execute GlPro_SendRoutingSystemBroadcast(pdu = SA_Data with A+C and tool key Fdsk and SCF.SBC=1
containing a A_DomainAddressSerialNumber_Write with
serial number = SerialNumber and with 4 octet domainAddress = NonSystemSetupMulticastAddress2).
`o` Execute GlPro_WaitUntilResponsiveAfterDomainAddressWrite(multicastAddress = NonSystemSetupMulticastAddress2, secureRouting = 0, backboneKey = 0).
`o` Read PID_SECURED_SERVICE_FAMILIES and verify that
routing security is 0 (disabled).
`o` Read PID_SECURITY_MODE and verify that it still has the
value 'securityMode'.

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2
**reference** (Handling in Management).

**Duration** 2 * (TimeoutAppLayerResponse + WaitTimeAfterWritingDomainAddress
+ TimeoutAfterWritingDomainAddress + ConfirmedRestart)

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 184 f 376

|Test ID|80117|
|---|---|
|**Description**|Send a secure domain address write (4 octet version) to the BDUT, while<br>the security mode is enabled or disabled and routing security is enabled.|
|**Expectation**|The domain address is accepted. Routing security is disabled. The<br>security mode is unaffected.|
|**Setup**|- (done in test)|
|**Test**<br>**procedure**| <br>For securityMode in 0,1:<br>`o` Execute GlPro_SetupSystemBroadcast( securityMode =<br>securityMode, multicastAddress = NonSystemSetup-<br>MulticastAddress, backboneKey = BackboneKey1).<br> <br>Explanation: securityMode: The security mode is not<br>supposed to change. We set it once to 0 and once to<br>1 to be able to detect whether it got affected by the<br>A_DomainAddressSerialNumber_Write.<br> <br>Explanation: backboneKey: Enable secure routing so<br>we can detect that this gets disabled.<br>`o` Execute GlPro_DataSecuritySync().<br>`o` Execute GlPro_SendRoutingSystemBroadcast(pdu = S-<br>A_Data with A+C and tool key Fdsk and SCF.SBC=1<br>containing a A_DomainAddressSerialNumber_Write with<br>serial number = SerialNumber and with 4 octet domain-<br>Address = NonSystemSetupMulticastAddress2).<br>`o` Execute GlPro_WaitUntilResponsiveAfterDomainAddress-<br>Write(multicastAddress = NonSystemSetupMulticast-<br>Address2, secureRouting = 0, backboneKey = 0).<br>`o` Read PID_SECURED_SERVICE_FAMILIES and verify that<br>routing security is 0 (disabled).<br>`o` Read PID_SECURITY_MODE and verify that it still has the<br>value 'securityMode'.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|2 * (TimeoutAppLayerResponse + WaitTimeAfterWritingDomainAddress<br>+ TimeoutAfterWritingDomainAddress + ConfirmedRestart)|
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.4.18 Handling in Management: Secure domain address write (21 octet version)

**Test ID** 80118

**Description** Send a secure domain address write (21 octet version) to the BDUT
(routing security version 1), while the security mode is disabled and
routing security is disabled.

**Expectation** The domain address, backbone key and routing security version are
accepted. Routing security is enabled (version 1). The security mode is
enabled.

**Setup** - Execute GlPro_SetupSystemBroadcast( securityMode = 0,
multicastAddress = NonSystemSetupMulticastAddress).
`o` Explanation: This also disables routing security since no
backbone key is provided.

             - Execute GlPro_DataSecuritySync().

**Test** - Prepare 21 byte domain address with NonSystemSetupMulticast**procedure** Address2 concatenated with 01h concatenated with BackboneKey2.

             - Execute GlPro_SendRoutingSystemBroadcast(pdu = S-A_Data
with A+C and tool key Fdsk and SCF.SBC=1 containing a A_DomainAddressSerialNumber_Write with serial number = SerialNumber and with the prepared 21 octet domain address).

             - Execute GlPro_WaitUntilResponsiveAfterDomainAddressWrite(multicastAddress = NonSystemSetupMulticastAddress2,
secureRouting = 1, backboneKey = BackboneKey2).

             - Read PID_SECURED_SERVICE_FAMILIES and verify that
routing security is 1 (enabled).

             - Read PID_SECURITY_MODE and verify that it is now 1.

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2
**reference** (Handling in Management).

**Duration** TimeoutTimerNotifyResponse + WaitTimeAfterWritingDomainAddress +
TimeoutAfterWritingDomainAddress + ConfirmedRestart

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 185 f 376

|Test ID|80118|
|---|---|
|**Description**|Send a secure domain address write (21 octet version) to the BDUT<br>(routing security version 1), while the security mode is disabled and<br>routing security is disabled.|
|**Expectation**|The domain address, backbone key and routing security version are<br>accepted. Routing security is enabled (version 1). The security mode is<br>enabled.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast( securityMode = 0,<br>multicastAddress = NonSystemSetupMulticastAddress).<br>`o` Explanation: This also disables routing security since no<br>backbone key is provided.<br> <br>Execute GlPro_DataSecuritySync().|
|**Test**<br>**procedure**| <br>Prepare 21 byte domain address with NonSystemSetupMulticast-<br>Address2 concatenated with 01h concatenated with Backbone-<br>Key2.<br> <br>Execute GlPro_SendRoutingSystemBroadcast(pdu = S-A_Data<br>with A+C and tool key Fdsk and SCF.SBC=1 containing a A_-<br>DomainAddressSerialNumber_Write with serial number = Serial-<br>Number and with the prepared 21 octet domain address).<br> <br>Execute GlPro_WaitUntilResponsiveAfterDomainAddress-<br>Write(multicastAddress = NonSystemSetupMulticastAddress2,<br>secureRouting = 1, backboneKey = BackboneKey2).<br> <br>Read PID_SECURED_SERVICE_FAMILIES and verify that<br>routing security is 1 (enabled).<br> <br>Read PID_SECURITY_MODE and verify that it is now 1.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|TimeoutTimerNotifyResponse + WaitTimeAfterWritingDomainAddress +<br>TimeoutAfterWritingDomainAddress + ConfirmedRestart|
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.4.19 Handling in Management: Secure domain address write with invalid routing security version is ignored

**Test ID** 80119

**Description** Send a secure domain address write (21 octet version) to the BDUT
(routing security version 7Eh), while the security mode is disabled and
routing security is disabled.

**Expectation** The frame is completely ignored.

**Setup** - Execute GlPro_SetupSystemBroadcast( securityMode = 0,
multicastAddress = NonSystemSetupMulticastAddress).
`o` Explanation: This also disables routing security since no
backbone key is provided.

             - Execute GlPro_DataSecuritySync().

**Test** - Prepare 21 byte domain address with NonSystemSetupMulticast**procedure** Address2 concatenated with 7Eh concatenated with BackboneKey2.
`o` Explanation: 7Eh is chosen to be a high and unsupported
security version. It is avoiding the special values 7Fh..FFh
which may get special meanings in the future.

             - Execute GlPro_SendRoutingSystemBroadcast(pdu = S-A_Data
with A+C and tool key Fdsk and SCF.SBC=1 containing a A_DomainAddressSerialNumber_Write with serial number = SerialNumber and with the prepared 21 octet domain address).

             - Execute GlPro_WaitUntilResponsiveAfterDomainAddressWrite(multicastAddress = NonSystemSetupMulticastAddress,
secureRouting = 0, backboneKey = 0).

             - Read PID_SECURED_SERVICE_FAMILIES and verify that
routing security is 0 (disabled).

             - Read PID_SECURITY_MODE and verify that it is still 0.

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2
**reference** (Handling in Management).

**Duration** TimeoutTimerNotifyResponse + WaitTimeAfterWritingDomainAddress +
TimeoutAfterWritingDomainAddress + ConfirmedRestart

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 186 f 376

|Test ID|80119|
|---|---|
|**Description**|Send a secure domain address write (21 octet version) to the BDUT<br>(routing security version 7Eh), while the security mode is disabled and<br>routing security is disabled.|
|**Expectation**|The frame is completely ignored.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast( securityMode = 0,<br>multicastAddress = NonSystemSetupMulticastAddress).<br>`o` Explanation: This also disables routing security since no<br>backbone key is provided.<br> <br>Execute GlPro_DataSecuritySync().|
|**Test**<br>**procedure**| <br>Prepare 21 byte domain address with NonSystemSetupMulticast-<br>Address2 concatenated with 7Eh concatenated with Backbone-<br>Key2.<br>`o` Explanation: 7Eh is chosen to be a high and unsupported<br>security version. It is avoiding the special values 7Fh..FFh<br>which may get special meanings in the future.<br> <br>Execute GlPro_SendRoutingSystemBroadcast(pdu = S-A_Data<br>with A+C and tool key Fdsk and SCF.SBC=1 containing a A_-<br>DomainAddressSerialNumber_Write with serial number = Serial-<br>Number and with the prepared 21 octet domain address).<br> <br>Execute GlPro_WaitUntilResponsiveAfterDomainAddress-<br>Write(multicastAddress = NonSystemSetupMulticastAddress,<br>secureRouting = 0, backboneKey = 0).<br> <br>Read PID_SECURED_SERVICE_FAMILIES and verify that<br>routing security is 0 (disabled).<br> <br>Read PID_SECURITY_MODE and verify that it is still 0.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|TimeoutTimerNotifyResponse + WaitTimeAfterWritingDomainAddress +<br>TimeoutAfterWritingDomainAddress + ConfirmedRestart|
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.4.20 Group communication is not routed via system broadcast

**Test ID** 80120

**Description** Group value read/write operations which are received in a RoutingSystemBroadcast frame or in a telegram which is marked as system
broadcast (SB flag = 0) are dropped and are not routed. This test makes
sure that the system broadcast mechanism cannot be used to inject
group value read/writes into the TP or IP side via system broadcast

**Expectation** Group value read/write frames/telegrams are silently ignored.

**Setup** - Setup BDUT to route all group addresses.

             - Execute GlPro_SetupSystemBroadcast( sbcMode = 1).

**Test** - Start recording TP messages from the BDUT.
**procedure** - Execute GlPro_SendRoutingSystemBroadcast(pdu = "A_GroupValue_Read to DummyGroupAddress"). (Discarded because APCI
not eligible.)

             - Execute GlPro_SendRoutingSystemBroadcast(pdu = "A_GroupValue_Response to DummyGroupAddress"). (Discarded because
APCI not eligible.)

             - Execute GlPro_SendRoutingSystemBroadcast(pdu = "A_GroupValue_Write to DummyGroupAddress"). (Discarded because APCI
not eligible.)

             - Wait for max(TimeoutToTp1, TimeoutToIp).

             - Expectation: All of the frames sent above should be ignored by the
BDUT (and not routed anywhere), because they do not match the
criterions for routing system broadcast frames/telegrams.

             - If any telegrams have been received on the TP side: Abort test and
return TestFailed.

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2
**reference** (Handling in Management).

**Duration** TimeoutToTp1

**Mask version**

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 187 f 376

|Test ID|80120|
|---|---|
|**Description**|Group value read/write operations which are received in a Routing-<br>SystemBroadcast frame or in a telegram which is marked as system<br>broadcast (SB flag = 0) are dropped and are not routed. This test makes<br>sure that the system broadcast mechanism cannot be used to inject<br>group value read/writes into the TP or IP side via system broadcast|
|**Expectation**|Group value read/write frames/telegrams are silently ignored.|
|**Setup**| <br>Setup BDUT to route all group addresses.<br> <br>Execute GlPro_SetupSystemBroadcast( sbcMode = 1).|
|**Test**<br>**procedure**| <br>Start recording TP messages from the BDUT.<br> <br>Execute GlPro_SendRoutingSystemBroadcast(pdu = "A_Group-<br>Value_Read to DummyGroupAddress"). (Discarded because APCI<br>not eligible.)<br> <br>Execute GlPro_SendRoutingSystemBroadcast(pdu = "A_Group-<br>Value_Response to DummyGroupAddress"). (Discarded because<br>APCI not eligible.)<br> <br>Execute GlPro_SendRoutingSystemBroadcast(pdu = "A_Group-<br>Value_Write to DummyGroupAddress"). (Discarded because APCI<br>not eligible.)<br> <br>Wait for max(TimeoutToTp1, TimeoutToIp).<br> <br>Expectation: All of the frames sent above should be ignored by the<br>BDUT (and not routed anywhere), because they do not match the<br>criterions for routing system broadcast frames/telegrams.<br> <br>If any telegrams have been received on the TP side: Abort test and<br>return TestFailed.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2<br>(Handling in Management).|
|**Duration**|TimeoutToTp1|
|**Mask version**||
|**Open points**||


-----

##### 2.4.21 S-AL system broadcast frames with SBC=1 and T=0 are routed from TP1 to IP as domain broadcast

**Test ID** 80121

**Description** Send S-A_Sync_Request and S-A_Data system broadcast frames via
TP1 to the BDUT with SCF.SBC=1 (correct) and SCF.T=0 (erroneous).
Verify that none of these frames appear on the IP side because none of
them should be routed because SCF.T is 0.

This test is executed twice, once each for system broadcast mode
enabled and disabled as the behavior is independent of the system
broadcast mode.

**Expectation** None of the sent frames are routed to IP.

**Setup** 
**Test** - Execute GlPro_SetupSystemBroadcast(multicastAddress =
**procedure** SystemSetupMulticastAddress).

             - For sbcMode in [enabled, disabled]:
`o` Execute GlPro_SetupSystemBroadcast(sbcMode =
sbcMode).
`o` Start recording frames on the IP side. Listen on the SystemSetupMulticastAddress.
`o` Execute GlPro_SendTpSystemBroadcast(pdu = S-A_Sync_Request with SCF.SBC = 1 and SCF.T = 0).
`o` Execute GlPro_SendTpSystemBroadcast(pdu = S-A_Data
with SCF.SBC = 1 and SCF.T = 0).
`o` Wait for TimeoutToIp.
`o` Verify that two RoutingIndication frames containing a
Broadcast were received on the IP side on the SystemSetupMulticastAddress.

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.3.2
**reference** (Routing from TP1 to IP).

**Duration**

**Mask version**

**Open points**

##### 2.4.22 S-AL system broadcast frames with SBC=1 and T=0 are not routed from IP to TP1

©C i h 1998 2018 KNX A i i V i 1 1 AS P 188 f 376

|Test ID|80121|
|---|---|
|**Description**|Send S-A_Sync_Request and S-A_Data system broadcast frames via<br>TP1 to the BDUT with SCF.SBC=1 (correct) and SCF.T=0 (erroneous).<br>Verify that none of these frames appear on the IP side because none of<br>them should be routed because SCF.T is 0.<br>This test is executed twice, once each for system broadcast mode<br>enabled and disabled as the behavior is independent of the system<br>broadcast mode.|
|**Expectation**|None of the sent frames are routed to IP.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Execute GlPro_SetupSystemBroadcast(multicastAddress =<br>SystemSetupMulticastAddress).<br> <br>For sbcMode in [enabled, disabled]:<br>`o` Execute GlPro_SetupSystemBroadcast(sbcMode =<br>sbcMode).<br>`o` Start recording frames on the IP side. Listen on the System-<br>SetupMulticastAddress.<br>`o` Execute  GlPro_SendTpSystemBroadcast(pdu = S-A_-<br>Sync_Request with SCF.SBC = 1 and SCF.T = 0).<br>`o` Execute  GlPro_SendTpSystemBroadcast(pdu = S-A_Data<br>with SCF.SBC = 1 and SCF.T = 0).<br>`o` Wait for TimeoutToIp.<br>`o` Verify that two RoutingIndication frames containing a<br>Broadcast were received on the IP side on the System-<br>SetupMulticastAddress.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.3.2<br>(Routing from TP1 to IP).|
|**Duration**||
|**Mask version**||
|**Open points**||


-----

|Test ID|80122|
|---|---|
|**Description**|Send S-A_Sync_Response system broadcast frames via IP to the BDUT<br>with SCF.SBC=1 (correct) and SCF.T=0 (erroneous). Verify that this<br>frame does not appear on the TP1 side because it should not be routed<br>because SCF.T is 0.<br>This test is executed twice, once each for system broadcast mode<br>enabled and disabled as the behavior is independent of the system<br>broadcast mode.|
|**Expectation**|The specified frame is not routed to the TP1 side.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>For sbcMode in [enabled, disabled]:<br>`o` Execute GlPro_SetupSystemBroadcast(sbcMode =<br>sbcMode).<br>`o` Start recording messages on the TP side.<br>`o` Execute GlPro_SendRoutingSystemBroadcast(pdu = S-A_-<br>Sync_Response with SCF.SBC = 1 and SCF.T = 0).<br>`o` Wait for TimeoutToTp1.<br>`o` Verify that no messages appeared on the TP1 side.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.3.3<br>(Routing from IP to TP1).|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.4.23 Handling in Management: Domain Broadcast: Read serial number

**Test ID** 80123

**Description** Read serial number of BDUT using A_NetworkParameter_Read/PID_SERIAL_NUMBER via RoutingIndication via broadcast while
programming mode is enabled.

**Expectation** The serial number read is the BDUTs serial number. The response is
received via RoutingIndication broadcast.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 189 f 376

|Test ID|80123|
|---|---|
|**Description**|Read serial number of BDUT using A_NetworkParameter_Read/PID_-<br>SERIAL_NUMBER via RoutingIndication via broadcast while<br>programming mode is enabled.|
|**Expectation**|The serial number read is the BDUTs serial number. The response is<br>received via RoutingIndication broadcast.|


-----

|Setup| Execute GlPro SetupSystemBroadcast(multicastAddress = Non-<br>_<br>SystemSetupMulticastAddress, progMode = 1).<br>o Explanation: multicastAddress: We must check that we get<br>responded to on the Routing Multicast Address.|
|---|---|
|**Test procedure**| <br>Start recording received frames via IP. Listen on the System-<br>SetupMulticastAddress and on the NonSystemSetupMulticast-<br>Address.<br> <br>Send RoutingIndication containing a "A_NetworkParameterRead<br>with object_type = 0, PID = 11 and operand = 1" using broadcast<br>(CtrlField1.SB=1, AT=1, dest_addr = 0). Send on NonSystem-<br>SetupMulticastAddress.<br> <br>Wait for TimeoutAppLayerResponse (no timeout).<br> <br>Verify that one RoutingIndication/A_NetworkParameterResponse<br>was received via the NonSystemSetupMulticastAddress.<br> <br>Verify that the received serial number is the same as Serial-<br>Number.<br> <br>Verify that nothing was received on the SystemSetupMulticast-<br>Address.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04)<br>2.2.4.2.1 Communication Mode.<br>KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2.2 A_-<br>SystemNetworkParameter_Read / A_NetworkParameter_Read.|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.4.24 Handling in Management: Domain Broadcast: SyncRequest is responded to

**Test ID** 80124

**Description** Send a S-A_Sync_Request to the BDUT via RoutingIndication
broadcast and wait for a response.

**Expectation** A S-A_Sync_Response is received via RoutingIndication broadcast.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 190 f 376

|Test ID|80124|
|---|---|
|**Description**|Send a S-A_Sync_Request to the BDUT via RoutingIndication<br>broadcast and wait for a response.|
|**Expectation**|A S-A_Sync_Response is received via RoutingIndication broadcast.|


-----

|Setup| Execute GlPro SetupSystemBroadcast(multicastAddress = Non-<br>_<br>SystemSetupMulticastAddress).|
|---|---|
|**Test procedure**| <br>Send RoutingIndication containing a "S-A_Sync_Request" using<br>broadcast (CtrlField1.SB=1, AT=1, dest_addr = 0, SCF.T=1,<br>SCF.SBC=0). Send on NonSystemSetupMulticastAddress.<br> <br>Wait for RoutingIndication/S-A_Sync_Response with timeout<br>TimeoutAppLayerResponse (receive on NonSystemSetup-<br>MulticastAddress only).<br>`o` On timeout: Abort test and return TestFailed.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04)<br>2.2.4.2.1 Communication Mode.<br>KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2.3 S-<br>A_Sync_Request.|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.4.25 Handling in Management: Domain Broadcast: Non-secure domain address write (4 octet version)

**Test ID** 80125

**Description** Send a non-secure domain address write (4 octet version) to the BDUT
via RoutingIndication and broadcast while the security mode is disabled.
The routing multicast address in the BDUT should be updated
accordingly.

**Expectation** The routing multicast address is updated accordingly in the BDUT.

**Setup** - Execute GlPro_SetupSystemBroadcast(securityMode = 0,
multicastAddress = NonSystemSetupMulticastAddress).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 191 f 376

|Test ID|80125|
|---|---|
|**Description**|Send a non-secure domain address write (4 octet version) to the BDUT<br>via RoutingIndication and broadcast while the security mode is disabled.<br>The routing multicast address in the BDUT should be updated<br>accordingly.|
|**Expectation**|The routing multicast address is updated accordingly in the BDUT.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(securityMode = 0,<br>multicastAddress = NonSystemSetupMulticastAddress).|


-----

|Test<br>procedure| Send RoutingIndication containing a broadcast (CtrlField1.SB=1,<br>AT=1, dest addr = 0), containing an A DomainAddressSerial-<br>_ _<br>Number Write with serial number = SerialNumber and with 4 octet<br>_<br>domainAddress = NonSystemSetupMulticastAddress2. Send on<br>NonSystemSetupMulticastAddress.<br> Execute GlPro WaitUntilResponsiveAfterDomainAddress-<br>_<br>Write(multicastAddress = NonSystemSetupMulticastAddress2,<br>secureRouting = 0, backboneKey = 0).|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04)<br>2.2.4.2.1 Communication Mode.<br>KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2.4 A_-<br>DomainAddressSerialNumber_Write.|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.4.26 Handling in Management: Domain Broadcast: Non-secure domain address write (4 octet version) is ignored when security mode is enabled

**Test ID** 80126

**Description** Send a non-secure domain address write (4 octet version) to the BDUT
via RoutingIndication and broadcast while the security mode is enabled.
The routing multicast address in the BDUT must not be updated.

**Expectation** The domain address write is silently ignored.

**Setup** - Execute GlPro_SetupSystemBroadcast(securityMode = 1,
multicastAddress = NonSystemSetupMulticastAddress).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 192 f 376

|Test ID|80126|
|---|---|
|**Description**|Send a non-secure domain address write (4 octet version) to the BDUT<br>via RoutingIndication and broadcast while the security mode is enabled.<br>The routing multicast address in the BDUT must not be updated.|
|**Expectation**|The domain address write is silently ignored.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(securityMode = 1,<br>multicastAddress = NonSystemSetupMulticastAddress).|


-----

|Test<br>procedure| Send RoutingIndication containing a broadcast (CtrlField1.SB=1,<br>AT=1, dest addr = 0), containing an A DomainAddressSerial-<br>_ _<br>Number Write with serial number = SerialNumber and with 4 octet<br>_<br>domainAddress = NonSystemSetupMulticastAddress2. Send on<br>NonSystemSetupMulticastAddress.<br> Explanation: We tried to write a new multicast address into the<br>device and we now must verify that the device did not accept it.<br>This is made difficult by the fact that even if devices do accept a<br>new multicast address they are allowed to make this new multicast<br>address effective only after up to 60 s. Instead we check whether<br>the old multicast address is still active after waiting 1 second.<br> Execute GlPro WaitUntilResponsiveAfterDomainAddress-<br>_<br>Write(multicastAddress = NonSystemSetupMulticastAddress,<br>secureRouting = 0, backboneKey = 0).|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04)<br>2.2.4.2.1 Communication Mode.<br>KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2.4 A_-<br>DomainAddressSerialNumber_Write.|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.4.27 Handling in Management: Domain Broadcast: Secure domain address write (4 octet version)

**Test ID** 80127

**Description** Send a secure domain address write (4 octet version) to the BDUT via
RoutingIndication and broadcast, while the security mode is enabled or
disabled and routing security is enabled.

**Expectation** The domain address is accepted. Routing security is disabled. The
security mode is unaffected.

**Setup** - (done in test)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 193 f 376

|Test ID|80127|
|---|---|
|**Description**|Send a secure domain address write (4 octet version) to the BDUT via<br>RoutingIndication and broadcast, while the security mode is enabled or<br>disabled and routing security is enabled.|
|**Expectation**|The domain address is accepted. Routing security is disabled. The<br>security mode is unaffected.|
|**Setup**|- (done in test)|


-----

|Test<br>procedure| For securityMode in 0,1:<br>o Execute GlPro SetupSystemBroadcast(securityMode =<br>_<br>securityMode, multicastAddress = NonSystemSetup-<br>MulticastAddress, backboneKey = none).<br> Explanation: securityMode: The security mode is not<br>supposed to change. We set it once to 0 and once to<br>1 to be able to detect whether it got affected by the<br>A DomainAddressSerialNumber Write.<br>_ _<br> Explanation: backboneKey = none: Do not enable<br>secure routing in this test to simplify the test.<br>Disabling routing security is already tested in test<br>2.4.17.<br>o Execute GlPro DataSecuritySync().<br>_<br>o Send RoutingIndication containing a broadcast, containing<br>an S-A Data with A+C and tool key Fdsk (SCF.T=1) and<br>_<br>SCF.SBC=0 containing a A DomainAddressSerial-<br>_<br>Number Write with serial number = SerialNumber and with<br>_<br>4 octet domainAddress = NonSystemSetupMulticast-<br>Address2. Send on NonSystemSetupMulticastAddress.<br>o Execute GlPro WaitUntilResponsiveAfterDomainAddress-<br>_<br>Write(multicastAddress = NonSystemSetupMulticast-<br>Address2, secureRouting = 0, backboneKey = 0).<br>o Explanation: We do not need to read PID SECURED -<br>_ _<br>SERVICE FAMILIES here to check that it is 0 since it was 0<br>_<br>before. This is tested in 2.4.17 already.<br>o Read PID SECURITY MODE and verify that it still has the<br>_ _<br>value 'securityMode'.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04)<br>2.2.4.2.1 Communication Mode.<br>KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2.5.1 4<br>octet Domain Address.|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.4.28 Handling in Management: Domain Broadcast: Secure domain address write (21 octet version)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 194 f 376


-----

|Test ID|80128|
|---|---|
|**Description**|Send a secure domain address write (21 octet version) to the BDUT<br>(routing security version 1) via RoutingIndication and broadcast, while the<br>security mode is disabled and routing security is disabled.|
|**Expectation**|The domain address, backbone key and routing security version are<br>accepted. Routing security is enabled (version 1). The security mode is<br>enabled.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(securityMode = 0,<br>multicastAddress = NonSystemSetupMulticastAddress).<br>`o` Explanation: This also disables routing security since no<br>backbone key is provided.<br> <br>Execute GlPro_DataSecuritySync().|
|**Test**<br>**procedure**| <br>Prepare 21 byte domain address with NonSystemSetupMulticast-<br>Address2 concatenated with 01h concatenated with Backbone-<br>Key2.<br> <br>Send RoutingIndication containing a broadcast containing an S-<br>A_Data with A+C and tool key Fdsk (SCF.T=1) and SCF.SBC=0<br>containing a A_DomainAddressSerialNumber_Write with serial<br>number = SerialNumber and with the prepared 21 octet domain<br>address. Send on NonSystemSetupMulticastAddress.<br> <br>Execute GlPro_WaitUntilResponsiveAfterDomainAddress-<br>Write(multicastAddress = NonSystemSetupMulticastAddress2,<br>secureRouting = 1, backboneKey = BackboneKey2).<br> <br>Read PID_SECURED_SERVICE_FAMILIES and verify that<br>routing security is 1 (enabled).<br> <br>Read PID_SECURITY_MODE and verify that it is now 1.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04)<br>2.2.4.2.1 Communication Mode.<br>KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2.5.2 21<br>octet Domain Address.|
|**Duration**||
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 195 f 376


-----

##### 2.4.29 Handling in Management: Domain Broadcast: Secure domain address write with invalid routing security version is ignored

**Test ID** 80129

**Description** Send a secure domain address write (21 octet version) to the BDUT
(routing security version 7Eh) via RoutingIndication and broadcast, while
the security mode is disabled and routing security is disabled.

**Expectation** The frame is completely ignored.

**Setup** - Execute GlPro_SetupSystemBroadcast(securityMode = 0,
multicastAddress = NonSystemSetupMulticastAddress).
`o` Explanation: This also disables routing security since no
backbone key is provided.

             - Execute GlPro_DataSecuritySync().

**Test** - Prepare 21 byte domain address with NonSystemSetupMulticast**procedure** Address2 concatenated with 7Eh concatenated with BackboneKey2.
`o` Explanation: 7Eh is chosen to be a high and unsupported
security version. It is avoiding the special values 7Fh..FFh
which may get special meanings in the future.

             - Send RoutingIndication containing a broadcast containing an SA_Data with A+C and tool key Fdsk (SCF.T=1) and SCF.SBC=0
containing a A_DomainAddressSerialNumber_Write with serial
number = SerialNumber and with the prepared 21 octet domain
address. Send on NonSystemSetupMulticastAddress.

             - Execute GlPro_WaitUntilResponsiveAfterDomainAddressWrite(multicastAddress = NonSystemSetupMulticastAddress,
secureRouting = 0, backboneKey = 0).

             - Read PID_SECURED_SERVICE_FAMILIES and verify that
routing security is 0 (disabled).

             - Read PID_SECURITY_MODE and verify that it is still 0.

**Cleanup** - Execute GlPro_CleanupSystemBroadcast().

**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04)
**reference** 2.2.4.2.1 Communication Mode.

KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2.5.2 21
octet Domain Address.

**Duration**

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 196 f 376

|Test ID|80129|
|---|---|
|**Description**|Send a secure domain address write (21 octet version) to the BDUT<br>(routing security version 7Eh) via RoutingIndication and broadcast, while<br>the security mode is disabled and routing security is disabled.|
|**Expectation**|The frame is completely ignored.|
|**Setup**| <br>Execute GlPro_SetupSystemBroadcast(securityMode = 0,<br>multicastAddress = NonSystemSetupMulticastAddress).<br>`o` Explanation: This also disables routing security since no<br>backbone key is provided.<br> <br>Execute GlPro_DataSecuritySync().|
|**Test**<br>**procedure**| <br>Prepare 21 byte domain address with NonSystemSetupMulticast-<br>Address2 concatenated with 7Eh concatenated with Backbone-<br>Key2.<br>`o` Explanation: 7Eh is chosen to be a high and unsupported<br>security version. It is avoiding the special values 7Fh..FFh<br>which may get special meanings in the future.<br> <br>Send RoutingIndication containing a broadcast containing an S-<br>A_Data with A+C and tool key Fdsk (SCF.T=1) and SCF.SBC=0<br>containing a A_DomainAddressSerialNumber_Write with serial<br>number = SerialNumber and with the prepared 21 octet domain<br>address. Send on NonSystemSetupMulticastAddress.<br> <br>Execute GlPro_WaitUntilResponsiveAfterDomainAddress-<br>Write(multicastAddress = NonSystemSetupMulticastAddress,<br>secureRouting = 0, backboneKey = 0).<br> <br>Read PID_SECURED_SERVICE_FAMILIES and verify that<br>routing security is 0 (disabled).<br> <br>Read PID_SECURITY_MODE and verify that it is still 0.|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04)<br>2.2.4.2.1 Communication Mode.<br>KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2.5.2 21<br>octet Domain Address.|
|**Duration**||
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.4.30 Routing service family version is at least 2

**Test ID** 80130

**Description** Send a DescriptionRequest and receive a DescriptionResponse and
check reported routing version. If Core v2 is supported: Send a SearchRequestExtended and receive a SearchResponseExtended and check
reported routing version.

**Expectation** The version reported for routing in the supported service families DIB is
at least 2.

**Setup** 
**Test** - Execute supportedServiceFamiliesDib = GlPro_ReadSupported**procedure** ServiceFamiliesDib(coreV2 = false).

             - If supportedServiceFamiliesDib.routing.version < 2:
`o` Abort test and return TestFailed.

             - If supportedServiceFamiliesDib.core.version >= 2:
`o` Execute supportedServiceFamiliesDib = GlPro_ReadSupportedServiceFamiliesDib(coreV2 = true).
`o` If supportedServiceFamiliesDib.routing.version < 2:

                     - Abort test and return TestFailed.

**Cleanup** 
**Specification** KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.8 Identifiers
**reference** and discovery

**Duration**

**Mask version**

**Open points**

##### 2.4.31 Enabling system broadcast mode while domain broadcasts are blocked

**Test ID** 80131

©C i h 1998 2018 KNX A i i V i 1 1 AS P 197 f 376

|Test ID|80130|
|---|---|
|**Description**|Send a DescriptionRequest and receive a DescriptionResponse and<br>check reported routing version. If Core v2 is supported: Send a Search-<br>RequestExtended and receive a SearchResponseExtended and check<br>reported routing version.|
|**Expectation**|The version reported for routing in the supported service families DIB is<br>at least 2.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Execute supportedServiceFamiliesDib = GlPro_ReadSupported-<br>ServiceFamiliesDib(coreV2 = false).<br> <br>If supportedServiceFamiliesDib.routing.version < 2:<br>`o` Abort test and return TestFailed.<br> <br>If supportedServiceFamiliesDib.core.version >= 2:<br>`o` Execute supportedServiceFamiliesDib = GlPro_Read-<br>SupportedServiceFamiliesDib(coreV2 = true).<br>`o` If supportedServiceFamiliesDib.routing.version < 2:<br> <br>Abort test and return TestFailed.|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.8 Identifiers<br>and discovery|
|**Duration**||
|**Mask version**||
|**Open points**||

|Test ID|80131|
|---|---|


-----

|Description|When trying to enable system broadcast mode while domain broadcasts<br>are blocked (through whatever mechanism) there are two alternative valid<br>behaviors for the BDUT:<br> The BDUT must either disable the blocking of domain broadcasts<br>(thus enabling the routing of domain broadcasts) while the system<br>broadcast mode is enabled. Or:<br> The BDUT must respond to the write of 1 to PID IP SBC -<br>_ _ _<br>CONTROL with the error code E COMMAND IMPOSSIBLE and<br>_ _<br>not enable system broadcast mode and thus also not enable the<br>routing of domain broadcasts and system broadcasts.<br>Since the test tool does not know about any manufacturer specific<br>mechanism to block the routing of domain broadcasts, it tries to block<br>them through the properties PID MAIN LCCONFIG and PID SUB -<br>_ _ _ _<br>LCCONFIG. The tests checks for four symptoms and finally validates<br>whether all four symptoms are consistent. The symptoms are:<br> Domain broadcasts are initially blocked or not.<br> System broadcast could be enabled or not.<br> Domain broadcasts are finally blocked or not.<br> System broadcasts are finally blocked or not.<br>Procedure sketch:<br> Try to block broadcasts. Ignore any errors in doing so.<br> Send a broadcast through the BDUT. Remember whether<br>broadcasts are initially blocked or not.<br> Try to enable system broadcast mode. Remember whether it could<br>successfully be enabled or not. (Look for E COMMAND -<br>_ _<br>IMPOSSIBLE.)<br> Send a domain broadcast through the BDUT: Remember whether<br>domain broadcasts are initially blocked or not.<br> Send a system broadcast through the BDUT: Remember whether<br>system broadcasts are initially blocked or not.<br> Check if all three symptoms are consistent. The matrix of valid<br>cases is non-trivial. See test procedure.|
|---|---|
|**Expectation**|Two alternative cases are ok: 1. System broadcast mode could be<br>successfully be enabled and domain broadcasts are finally routed, or 2.<br>Domain broadcasts were initially blocked and system broadcast mode<br>could not be enabled and domain broadcasts are also finally blocked. All<br>other combinations are (potentially exotic) error cases. In any case the<br>routing of system broadcasts must be consistent with the error code<br>returned by setting the system broadcast mode.|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 198 f 376


-----

|Setup| PropSetup SetRoutingMulticastAddress(multicastAddress = Non-<br>_<br>SystemSetupMulticastAddress).|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 199 f 376


-----

|Test<br>procedure|Use PropAccess DevMgmt(fdsk = Fdsk, ignoreErrors = ignoreErrors) to<br>_<br><br>o Set PID MAIN LCCONFIG to 7fh (BROADCAST LOCK =<br>_ _ _<br>1).<br>o Set PID SUB LCCONFIG to 7fh (BROADCAST LOCK =<br>_ _ _<br>1).<br> Start recording messages on the TP1 side.<br> Send RoutingIndication containing a "A IndividualAddress -<br>_ _<br>Response" using broadcast (CtrlField1.SB=1, AT=1, dest addr =<br>_<br>0). Send on NonSystemSetupMulticastAddress.<br> Wait for a message containing a A IndividualAddress Response<br>_ _<br>to appear on the TP1 side. Timeout: TimeoutAppLayerResponse.<br>o On timeout: Ok. Set domainBroadcastsAreInitiallyBlocked =<br>true. Continue. (Explanation: We successfully enabled<br>blocking domain broadcasts. Good.)<br>o On received A IndividualAddress Response message: Ok.<br>_ _<br>Set domainBroadcastsAreInitiallyBlocked = false. Continue.<br>(Explanation: We failed to enable blocking domain<br>broadcasts. This is a valid behavior. Remember the fact so<br>we can check consistency later.)<br> Set systemBroadcastModeEnabled = true.<br> Use PropAccess DevMgmt(fdsk = Fdsk, restart = false, ignore-<br>_<br>Errors = true) to:<br>o Set PID IP SBC CONTROL = 1.<br>_ _ _<br>o Remember errorCode and timeout.<br>o On timeout: Abort test and return TestFailed.<br>o On ReturnCode != E NO ERROR and ReturnCode != E -<br>_ _ _<br>COMMAND IMPOSSIBLE: Abort test and return Test-<br>_<br>Failed.<br>o On ReturnCode == E COMMAND IMPOSSIBLE:<br>_ _<br> Set systemBroadcastModeEnabled = false. Ok.<br>Continue. Explanation: Consistency is checked at the<br>end.<br> Explanation: Now check whether domain broadcast are routed.<br> Send RoutingIndication containing a "A IndividualAddress -<br>_ _<br>Response" using broadcast (CtrlField1.SB=1, AT=1, dest addr =<br>_<br>0). Send on NonSystemSetupMulticastAddress.<br> Wait for a message containing a A IndividualAddress Response<br>_ _<br>to appear on the TP1 side. Timeout: TimeoutToTp1.<br>o On timeout: Set domainBroadcastsAreFinallyBlocked = true.<br>o On received A IndividualAddress Response message: Set<br>_ _<br>domainBroadcastsAreFinallyBlocked = false.<br> Explanation: Now check whether system broadcasts are routed.<br>The this must be consistent with systemBroadcastModeEnabled.|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 200 f 376


-----

|Col1|This is a consistency check independent of the domain broadcast<br>routing behavior.<br> Execute GlPro SendRoutingSystemBroadcast(hop = 7, pdu = "A -<br>_ _<br>SystemNetworkParameterResponse with object type = 0, PID =<br>_<br>11 and operand = 1").<br> Wait for a message containing a A SystemNetworkParameter-<br>_<br>Response to appear on the TP1 side. Timeout: TimeoutToTp1.<br>o On timeout: Set systemBroadcastsAreBlocked = true.<br>o On received A SystemNetworkParameterResponse<br>_<br>message: Set systemBroadcastsAreBlocked = false.<br> Explanation: Now check the behavior for consistency. To make<br>sure all domain broadcast cases are covered, all 8 combinations of<br>the 3 flags systemBroadcastModeEnabled, domainBroadcastsAre-<br>InitiallyBlocked and domainBroadcastsAreFinallyBlocked are<br>checked explicitly (some of the conditions below cover two of these<br>possibilities at once). The consistency of systemBroadcastsAre-<br>Blocked and systemBroadcastModeEnabled is orthogonal and is<br>check independently.<br> If (not domainBroadcastsAreInitiallyBlocked) and (not system-<br>BroadcastModeEnabled): Abort test and return TestFailed.<br>Explanation: When domain broadcasts are not blocked, setting the<br>system broadcast mode is not allowed to fail with E COMMAND -<br>_ _<br>IMPOSSIBLE. This error code is only allowed while domain<br>broadcasts are blocked. This is independent whether domain<br>broadcasts are finally blocked. (Exotic error case.)<br> If (systemBroadcastModeEnabled) and (not domainBroadcasts-<br>AreFinallyBlocked): Ok. Explanation: System broadcast mode was<br>successfully enabled and domain broadcasts are finally routed.<br>Good. This is independent whether domain broadcasts were<br>initially blocked or not. (Main ok case.)<br> If (systemBroadcastModeEnabled) and (domainBroadcastsAre-<br>FinallyBlocked): Abort test and return TestFailed: Explanation:<br>System broadcast mode was successfully enabled and domain<br>broadcasts are finally blocked. This is always wrong, independent<br>whether domain broadcasts were initially blocked or not. (Main<br>error case.)<br> If (domainBroadcastsAreInitiallyBlocked) and (not system-<br>BroadcastModeEnabled) and (not domainBroadcastsAreFinally-<br>Blocked): Abort test and return TestFailed: Explanation: Failing<br>(but trying) to enable system broadcast mode magically disabled<br>blocking domain broadcasts, but when failing to enable system<br>broadcast mode the blocking of domain broadcast must be<br>unaffected. (Exotic and quite obscure error case.)<br> If (domainBroadcastsAreInitiallyBlocked) and (not system-<br>BroadcastModeEnabled) and (domainBroadcastsAreFinally-<br>Blocked): Ok. Explanation: Failing to enable system broadcast|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 201 f 376


-----

|Col1|mode leaves domain broadcast mode blocking unaffected. Good.<br>(Main ok case.)<br> If systemBroadcastsAreBlocked == systemBroadcastMode-<br>Enabled: Abort test and return TestFailed. Explanation: Either<br>system broadcasts are blocked while the system broadcast mode<br>is enabled or system broadcasts are routed while the system<br>broadcast mode is disabled. Both cases indicate an error.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().<br>`o` Explanation: This causes a restart which in turn disables the<br>system broadcast mode, so no need to manually reset it to<br>0 here.<br>`o` Explanation: This also resets PID_MAIN_LCCONFIG and<br>PID_SUB_LCCONFIG.|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.3.1.1 PID_-<br>IP_SBC_CONTROL (PID: 120)|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.4.32 Handling in Management: Domain Broadcast: Ignore cEMI telegrams with SB=0 (system broadcast)

**Test ID** 80132

**Description** This test verifies that domain broadcasts which contain a cEMI telegrams
which have StrlField1.SB=0 are ignored.

This test tries to read the serial number of the BDUT using A_NetworkParameter_Read/PID_SERIAL_NUMBER using RoutingIndication via
broadcast while programming mode is enabled. This should fail because
CtrlField1.SB=0.

**Expectation** The erroneous A_NetworkParameter_Read is ignored by the BDUT.

**Setup** - Execute GlPro_SetupSystemBroadcast(multicastAddress =
SystemSetupMulticastAddress, progMode = 1).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 202 f 376

|Test ID|80132|
|---|---|
|**Description**|This test verifies that domain broadcasts which contain a cEMI telegrams<br>which have StrlField1.SB=0 are ignored.<br>This test tries to read the serial number of the BDUT using A_Network-<br>Parameter_Read/PID_SERIAL_NUMBER using RoutingIndication via<br>broadcast while programming mode is enabled. This should fail because<br>CtrlField1.SB=0.|
|**Expectation**|The erroneous A_NetworkParameter_Read is ignored by the BDUT.|
|**Setup**|<br> <br>Execute GlPro_SetupSystemBroadcast(multicastAddress =<br>SystemSetupMulticastAddress, progMode = 1).|


-----

|Test procedure| Start recording received frames via IP. Listen on the System-<br>SetupMulticastAddress.<br> Send RoutingIndication containing a "A NetworkParameterRead<br>_<br>with object type = 0, PID = 11 and operand = 1" using broadcast<br>_<br>(CtrlField1.SB=0, AT=1, dest addr = 0). Send on SystemSetup-<br>_<br>MulticastAddress.<br> Wait for TimeoutAppLayerResponse (no timeout).<br> Verify that nothing was received on the SystemSetupMulticast-<br>Address.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupSystemBroadcast().|
|**Specification**<br>**reference**|KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04)<br>2.2.4.2.1 Communication Mode, Note 7<br>KSG668-15.01 KNXnet-IP System Broadcast (2017.07.04) 2.2.4.2.2 A_-<br>SystemNetworkParameter_Read / A_NetworkParameter_Read.|
|**Duration**||
|**Mask version**||
|**Open points**||


### 2.5 Core v2 TCP

##### 2.5.1 TCP communication works

**Test ID** 10701

**Description** Send a DescriptionRequest through TCP in one chunk.This test
verifies that the BDUT responds to simple core request via TCP at all.

**Expectation** The BDUT responds to the DescriptionRequest.

**Setup** - Open TCP connection.

**Test procedure** - Send a DescriptionRequest through TCP.

              - Wait for a DescriptionResponse. Timeout: TimeoutDescriptionResponse.
`o` On timeout: Abort test and return Test Failed.

**Cleanup** - Close TCP connection.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 203 f 376

|Test ID|10701|
|---|---|
|**Description**|Send a DescriptionRequest through TCP in one chunk.This test<br>verifies that the BDUT responds to simple core request via TCP at all.|
|**Expectation**|The BDUT responds to the DescriptionRequest.|
|**Setup**| <br>Open TCP connection.|
|**Test procedure**| <br>Send a DescriptionRequest through TCP.<br> <br>Wait for a DescriptionResponse. Timeout: TimeoutDescription-<br>Response.<br>`o` On timeout: Abort test and return Test Failed.|
|**Cleanup**| <br>Close TCP connection.|


-----

|Specification<br>reference|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3 UDP and<br>TCP|
|---|---|
|**Duration**|TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.5.2 Fragmented TCP frames are received OK

**Test ID** 10702

**Description** Send a DescriptionRequest frame as individual 1-byte chunks, sent
separately, one chunk every 20 ms, and wait for response.

**Expectation** The BDUT responds to the DescriptionRequest.

**Setup** - Open TCP connection.

**Test procedure** - Prepare a DescriptionRequest frame.

              - Send frame as individual 1-byte chunks. Wait 20 ms between
chunks. As a DescriptionRequest frame is 14 bytes long this will
take less than second.

              - Wait for a DescriptionResponse. Timeout: TimeoutDescriptionResponse.
`o` On timeout: Abort test and return Test Failed.

**Cleanup** - Close TCP connection.

**Specification** KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending
**reference** and receiving frames, frame synchronization and receive timeouts in a
TCP receiver

**Duration** TimeoutDescriptionResponse

**Mask version**

**Open points**

##### 2.5.3 Merged TCP frames are received OK

**Test ID** 10703

©C i h 1998 2018 KNX A i i V i 1 1 AS P 204 f 376

|Test ID|10702|
|---|---|
|**Description**|Send a DescriptionRequest frame as individual 1-byte chunks, sent<br>separately, one chunk every 20 ms, and wait for response.|
|**Expectation**|The BDUT responds to the DescriptionRequest.|
|**Setup**| <br>Open TCP connection.|
|**Test procedure**| <br>Prepare a DescriptionRequest frame.<br> <br>Send frame as individual 1-byte chunks. Wait 20 ms between<br>chunks. As a DescriptionRequest frame is 14 bytes long this will<br>take less than second.<br> <br>Wait for a DescriptionResponse. Timeout: TimeoutDescription-<br>Response.<br>`o` On timeout: Abort test and return Test Failed.|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending<br>and receiving frames, frame synchronization and receive timeouts in a<br>TCP receiver|
|**Duration**|TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||

|Test ID|10703|
|---|---|


-----

|Description|Send a DescriptionRequest frame and a ConnectionStateRequest as<br>one chunk to the BDUT.|
|---|---|
|**Expectation**|The BDUT responds to both requests.|
|**Setup**| <br>Open TCP connection.|
|**Test procedure**| <br>Send DescriptionRequest frame and a ConnectionStateRequest<br>as one chunk to the BDUT.<br> <br>Wait for a DescriptionResponse and ConnectionStateResponse.<br>Timeout: max(TimeoutDescriptionResponse, TimeoutAppLayer-<br>Response).<br>`o` If not both responses have been received within the<br>timeout: Abort test and return Test Failed.|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending<br>and receiving frames, frame synchronization and receive timeouts in a<br>TCP receiver|
|**Duration**|max(TimeoutDescriptionResponse, TimeoutAppLayerResponse)|
|**Mask version**||
|**Open points**||


##### 2.5.4 TCP connection gets closed on wrong header length

**Test ID** 10704

**Description** Send a frame with an incorrect header length (8) in the KNXnet/IP
header. This is a malformed KNXnet/IP header.

**Expectation** The BDUT closes the TCP connection immediately.

**Setup** - Open TCP connection.

**Test procedure** - Send a DescriptionRequest with an invalid header length of 8.

              - Wait for a DescriptionResponse or TCP close. Timeout:
TimeoutDescriptionResponse.
`o` On timeout or DescriptionResponse: Abort test and return
Test Failed.
`o` On TCP close: Ok.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 205 f 376

|Test ID|10704|
|---|---|
|**Description**|Send a frame with an incorrect header length (8) in the KNXnet/IP<br>header. This is a malformed KNXnet/IP header.|
|**Expectation**|The BDUT closes the TCP connection immediately.|
|**Setup**| <br>Open TCP connection.|
|**Test procedure**| <br>Send a DescriptionRequest with an invalid header length of 8.<br> <br>Wait for a DescriptionResponse or TCP close. Timeout:<br>TimeoutDescriptionResponse.<br>`o` On timeout or DescriptionResponse: Abort test and return<br>Test Failed.<br>`o` On TCP close: Ok.|


-----

|Cleanup| Close TCP connection.|
|---|---|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending<br>and receiving frames, frame synchronization and receive timeouts in a<br>TCP receiver|
|**Duration**|TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.5.5 TCP connection gets closed on wrong protocol version

**Test ID** 10705

**Description** Send a frame with an incorrect protocol version in the KNXnet/IP
header. This is a malformed KNXnet/IP header.

**Expectation** The BDUT closes the TCP connection immediately.

**Setup** - Open TCP connection.

**Test procedure** - Send a DescriptionRequest with a protocol version 0fh.

              - Wait for a DescriptionResponse or TCP close. Timeout:
TimeoutDescriptionResponse.
`o` On timeout or DescriptionResponse: Abort test and return
Test Failed.
`o` On TCP close: Ok.

**Cleanup** - Close TCP connection.

**Specification** KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending
**reference** and receiving frames, frame synchronization and receive timeouts in a
TCP receiver

**Duration** TimeoutDescriptionResponse

**Mask version**

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 206 f 376

|Test ID|10705|
|---|---|
|**Description**|Send a frame with an incorrect protocol version in the KNXnet/IP<br>header. This is a malformed KNXnet/IP header.|
|**Expectation**|The BDUT closes the TCP connection immediately.|
|**Setup**| <br>Open TCP connection.|
|**Test procedure**| <br>Send a DescriptionRequest with a protocol version 0fh.<br> <br>Wait for a DescriptionResponse or TCP close. Timeout:<br>TimeoutDescriptionResponse.<br>`o` On timeout or DescriptionResponse: Abort test and return<br>Test Failed.<br>`o` On TCP close: Ok.|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending<br>and receiving frames, frame synchronization and receive timeouts in a<br>TCP receiver|
|**Duration**|TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


-----

##### 2.5.6 TCP connection gets closed on total length field < 6

**Test ID** 10706

**Description** Send a frame with the total length field set to less than 6 (e.g. 5). This
is a malformed KNXnet/IP header.

**Expectation** The BDUT closes the TCP connection immediately.

**Setup** - Open TCP connection.

**Test procedure** - Send byte sequence 06 10 02 03 00 05.

              - Wait for a DescriptionResponse or TCP close. Timeout:
TimeoutDescriptionResponse.
`o` On timeout or DescriptionResponse: Abort test and return
Test Failed.
`o` On TCP close: Ok.

**Cleanup** - Close TCP connection.

**Specification** KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending
**reference** and receiving frames, frame synchronization and receive timeouts in a
TCP receiver

**Duration** TimeoutDescriptionResponse

**Mask version**

**Open points**

##### 2.5.7 TCP connection gets closed upon receiving insufficient data (receive timeout)

**Test ID** 10707

**Description** A partial DescriptionRequest frame is sent to the BDUT. The rest is not
sent.

**Expectation** The BDUT closes the TCP connection when running into the receive
timeout.

**Setup** - Open TCP connection.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 207 f 376

|Test ID|10706|
|---|---|
|**Description**|Send a frame with the total length field set to less than 6 (e.g. 5). This<br>is a malformed KNXnet/IP header.|
|**Expectation**|The BDUT closes the TCP connection immediately.|
|**Setup**| <br>Open TCP connection.|
|**Test procedure**| <br>Send byte sequence 06 10 02 03 00 05.<br> <br>Wait for a DescriptionResponse or TCP close. Timeout:<br>TimeoutDescriptionResponse.<br>`o` On timeout or DescriptionResponse: Abort test and return<br>Test Failed.<br>`o` On TCP close: Ok.|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending<br>and receiving frames, frame synchronization and receive timeouts in a<br>TCP receiver|
|**Duration**|TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||

|Test ID|10707|
|---|---|
|**Description**|A partial DescriptionRequest frame is sent to the BDUT. The rest is not<br>sent.|
|**Expectation**|The BDUT closes the TCP connection when running into the receive<br>timeout.|
|**Setup**| <br>Open TCP connection.|


-----

|Test procedure| Send byte sequence (hex): 06 10 02 03 00 0e<br>o Explanation: This byte sequence is a valid KNXnet/IP<br>header of a DescriptionRequest.<br> Wait for the TCP connection to be closed by the BDUT (e.g. by<br>doing a recv()). Timeout: TimeoutIdleTcpConnection + 1 s.<br>o On timeout: Abort test and return TestFailed. The BDUT<br>did not close the TCP connection.|
|---|---|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending<br>and receiving frames, frame synchronization and receive timeouts in a<br>TCP receiver|
|**Duration**|TimeoutIdleTcpConnection + 1 s|
|**Mask version**||
|**Open points**||


##### 2.5.8 TCP connection does not get closed on long frame

**Test ID** 10708

**Description** A secure dummy frame is sent to the BDUT which has a very long length.
This should not affect TCP synchronization.

**Expectation** The BDUT ignores the long dummy frame.

**Setup** - Open TCP connection.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 208 f 376

|Test ID|10708|
|---|---|
|**Description**|A secure dummy frame is sent to the BDUT which has a very long length.<br>This should not affect TCP synchronization.|
|**Expectation**|The BDUT ignores the long dummy frame.|
|**Setup**| <br>Open TCP connection.|


-----

|Test<br>procedure| Send byte sequence (hex): 06 10 09 50 ff ff and then 65529 "00"<br>bytes. (65529 = ffffh - 6)<br>o Explanation: This byte sequence is a valid KNXnet/IP<br>secure header (SecureWrapper) with an all-zero dummy<br>payload (an invalid inner frame). The BDUT should<br>consume all of the data and should ignore the invalid frame.<br>It is not required that the BDUT stores this ridiculously long<br>frame, but it should not get out of synchronization and<br>should cleanly skip this frame.<br> Explanation: Now check whether the BDUT is still responsive on<br>this TCP connection.<br> Send a DescriptionRequest.<br> Wait for a DescriptionResponse. Timeout: TimeoutDescription-<br>Response.<br>o On timeout: Abort test and return Test Failed.|
|---|---|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending and<br>receiving frames, frame synchronization and receive timeouts in a TCP<br>receiver|
|**Duration**|TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.5.9 TCP connection does not get closed on unknown service type

**Test ID** 10709

**Description** A frame with an invalid (to the BDUT: unknown) service type identifier is
sent to the BDUT. This frame must be silently ignored and the TCP
connection must not be closed.

**Expectation** The BDUT ignores the frame and is able to receive following frames.

**Setup** - Open TCP connection.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 209 f 376

|Test ID|10709|
|---|---|
|**Description**|A frame with an invalid (to the BDUT: unknown) service type identifier is<br>sent to the BDUT. This frame must be silently ignored and the TCP<br>connection must not be closed.|
|**Expectation**|The BDUT ignores the frame and is able to receive following frames.|
|**Setup**| <br>Open TCP connection.|


-----

|Test procedure| Send byte sequence (hex): 06 10 09 ee 00 0e 00 00 00 00 00 00<br>00 00<br>o Explanation: This byte sequence is a valid KNXnet/IP<br>header containing the undefined service type identifier<br>09ee and 8 bytes of zero dummy payload. The BDUT<br>should consume all of the data and should ignore the<br>invalid frame.<br> Explanation: Now check whether the BDUT is still responsive on<br>this TCP connection.<br> Send a DescriptionRequest.<br> Wait for a DescriptionResponse. Timeout: TimeoutDescription-<br>Response.<br>o On timeout: Abort test and return Test Failed.|
|---|---|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending and<br>receiving frames, frame synchronization and receive timeouts in a TCP<br>receiver|
|**Duration**|TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.5.10 Half-closing TCP connection results in closing the TCP connection

**Test ID** 10710

©C i h 1998 2018 KNX A i i V i 1 1 AS P 210 f 376

|Test ID|10710|
|---|---|


-----

|Description|The test tool sends a request to the BDUT and then immediately closes<br>its sending side of the TCP connection. The BDUT must close the TCP<br>connection (sending and receiving side) in response to the half-closed<br>TCP connection.The BDUT may or may not answer the currently pending<br>requests, because the events "BDUT sends response" and "DBUT<br>receives half-closed event" are in a race.<br>Background: A TCP connection which has one direction of the full-duplex<br>connection closed is called a 'half-closed' connection. Half-closed TCP<br>connections are valid TCP connections. This is a non-optional TCP<br>feature. However, KNXnet/IP devices do not make use of this feature and<br>close the TCP connection whenever detecting a half-closed TCP<br>connection.<br>Note: Half-closed TCP connections are different from half-open TCP<br>connections which are either embryonic TCP connections or TCP<br>connections where one peer stopped communicating. Half-open TCP<br>connections are no valid TCP connections.|
|---|---|
|**Expectation**|The BDUT may either immediately close the TCP connection or it may<br>first send responses to any number of the outstanding requests and then<br>immediately close the TCP connection. In any case, the TCP connection<br>should be closed relatively shortly after half-closing the TCP connection.|
|**Setup**| <br>Open TCP connection.|
|**Test**<br>**procedure**| <br>Send DescriptionRequest.<br> <br>Close sending side of the TCP connection. On BSD socket<br>interfaces this is done with 'shutdown(SHUT_WR)' and on<br>Windows using shutdown(SD_SEND).<br>`o` Explanation: The TCP connection is now in half-closed<br>state.<br> <br>Wait for TCP close. Timeout: TimeoutDescriptionResponse.<br>`o` On timeout: Abort test and return Test Failed.<br>`o` On TCP close: OK.<br>`o` On DescriptionResponse received and then TCP close<br>received: OK.<br> <br>Note: Detecting in the received that the sender has closed his<br>sending side of the TCP connection is usually done by detecting<br>recv() returning 0 bytes in BDS-like socket interfaces.|
|**Cleanup**| <br>Close TCP connection.|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 211 f 376


-----

|Specification<br>reference|KSG696-08.01 KNXnet-IP Core v2 (2017.04.07) 2.2.3.2.3.1 Sending and<br>receiving frames, frame synchronization and receive timeouts in a TCP<br>receiver|
|---|---|
|**Duration**|TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.5.11 KNXnet/IP frames with total length 508 are handled correctly

**Test ID** 10711

**Description** A KNXnet/IP frame with a total length of 508 octets is sent to the BDUT
once via UDP (unicast) and once via TCP. In both cases a response is
expected.

The 508 octets long KNXnet/IP frame consists of a SearchRequestExtended which is filled with two long "Invalid" SRPs with M = 0. Because
M is 0 these SRPs are always ignored by the BDUT and a normal
SearchResponseExtended (as if no SRPs would have been specified)
should be generated by the BDUT.

**Expectation** The BDUT responds to both requests (UDP and TCP) as expected.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 212 f 376

|Test ID|10711|
|---|---|
|**Description**|A KNXnet/IP frame with a total length of 508 octets is sent to the BDUT<br>once via UDP (unicast) and once via TCP. In both cases a response is<br>expected.<br>The 508 octets long KNXnet/IP frame consists of a SearchRequest-<br>Extended which is filled with two long "Invalid" SRPs with M = 0. Because<br>M is 0 these SRPs are always ignored by the BDUT and a normal<br>SearchResponseExtended (as if no SRPs would have been specified)<br>should be generated by the BDUT.|
|**Expectation**|The BDUT responds to both requests (UDP and TCP) as expected.|
|**Setup**|-|


-----

|Test<br>procedure| Prepare a SearchRequestExtended frame F with a total length of<br>508 octets:<br>o 6 octets KNXnet/IP header: 06 10 02 0b 01 fc (Search-<br>RequestExtended, total length = 508)<br>o 8 octets HPAI (discovery endpoint of the test tool, TCP or<br>UDP)<br>o 250 octets SRP "Invalid" (code 00h) with M = 0: fa 00 and<br>then 248 times 00<br>o 244 octets SRP "Invalid" (code 00h) with M = 0: f4 00 and<br>then 242 times 00<br>o (508 octets total)<br> Send frame F to the control endpoint of the BDUT via UDP<br>(unicast).<br> Receive SearchResponseExtended via UDP. Timeout: Timeout-<br>SearchResponseExtendedUnicast.<br>o On timeout: Abort test and return TestFailed.<br> Open TCP connection to the BDUT.<br> Send frame F to the BDUT via TCP.<br> Receive SearchResponseExtended via TCP. Timeout: Timeout-<br>SearchResponseExtendedUnicast.<br>o On timeout: Abort test and return TestFailed.|
|---|---|
|**Cleanup**| <br>Close TCP connection if necessary.|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.1 (KNXnet/IP frame<br>length requirements)|
|**Duration**|2 * TimeoutSearchResponseExtendedUnicast|
|**Mask version**||
|**Open points**||


##### 2.5.12 TCP connection is not closed after DescriptionResponse

**Test ID** 10712

**Description** A DescriptionRequest is sent to the BDUT. The BDUT is expected to
keep the TCP connection open for the idle timeout after it answered with
a DescriptionResponse.

**Expectation** The BDUT closes the TCP connection when the idle timeout for this TCP
connection expires. This test expects the effects of the TCP idle timeout
to be within the range of 90% to 110% of the defined TCP idle timeout.
This is to account for measuring inaccuracies and the network latency on
all sides.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 213 f 376

|Test ID|10712|
|---|---|
|**Description**|A DescriptionRequest is sent to the BDUT. The BDUT is expected to<br>keep the TCP connection open for the idle timeout after it answered with<br>a DescriptionResponse.|
|**Expectation**|The BDUT closes the TCP connection when the idle timeout for this TCP<br>connection expires. This test expects the effects of the TCP idle timeout<br>to be within the range of 90% to 110% of the defined TCP idle timeout.<br>This is to account for measuring inaccuracies and the network latency on<br>all sides.|


-----

|Setup|-|
|---|---|
|**Test**<br>**procedure**| <br>Open a TCP connection and do the following throughthis TCP<br>connection:<br> <br>Send a DescriptionRequest to the BDUT via TCP.<br> <br>Wait for a DescriptionResponse. Timeout: TimeoutDescription-<br>Response.<br>`o` On: timeout: Abort test and return TestFailed.<br> <br>Wait until server closes the TCP connection. Measure waiting time<br>T. (On a BSD socket interface this can be done by doing a<br>blocking recv() on the socket. This will return 0 once the peer has<br>close his sending side of the connection.) Timeout: 1.1 * Timeout-<br>IdleTcpConnection.<br>`o` On: timeout: Abort test and return TestFailed. The BDUt<br>kept the idle TCP connection open for too long.<br> <br>If T < 0.9 * TimeoutIdleTcpConnection: Abort test and return Test-<br>Failed. The BDUT closed the TCP connection too early.|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.2 (Self<br>description)|
|**Duration**|2 * TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


##### 2.5.13 TCP connection gets closed immediately after inner KNX connection timeout

**Test ID** 10713

**Description** A KNX connection is created within a TCP connection. The KNX
connection is kept idle. The BDUT will eventually close the KNX
connection due to a timeout. The outer TCP connection should be closed
immediately after the timeout.

**Expectation** The BDUT closes the TCP connection immediately after the timeout of
the inner connection.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 214 f 376

|Test ID|10713|
|---|---|
|**Description**|A KNX connection is created within a TCP connection. The KNX<br>connection is kept idle. The BDUT will eventually close the KNX<br>connection due to a timeout. The outer TCP connection should be closed<br>immediately after the timeout.|
|**Expectation**|The BDUT closes the TCP connection immediately after the timeout of<br>the inner connection.|
|**Setup**|-|


-----

|Test procedure| Open a TCP connection.<br> Open a device management connection to the BDUT in the TCP<br>connection.<br> Wait for TCP connection to get closed by the BDUT. Receive and<br>ignore all frames from the BDUT meanwhile. Timeout: Timeout-<br>KnxConnection + TimeoutIdleTcpConnection / 2.<br>o On timeout: Abort test and return TestFailed. (The BDUT<br>did not close the TCP connection shortly after TimeoutKnx-<br>Connection.)<br>o Note: On reception of any frame from the BDUT, e.g. a<br>DisconnectRequest etc, nothing special happens. It is not<br>defined whether the BDUT sends anything to the client<br>before the TCP connection is closed.<br> Verify waiting time is >= 0.9 * TimeoutKnxConnection. (Sanity<br>check that the timeout of the inner connection is working.)<br> Close TCP connection if necessary.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.3 (UDP and<br>TCP)|
|**Duration**|TimeoutKnxConnection + TimeoutIdleTcpConnection / 2|
|**Mask version**||
|**Open points**||


##### 2.5.14 TCP connection gets closed immediately after inner secure session timeout

**Test ID** 10714

**Description** A secure session is created within a TCP connection. The secure
session is kept idle. The BDUT will eventually close the secure session
due to a timeout. The outer TCP connection should be closed
immediately after the timeout.

**Expectation** The BDUT closes the TCP connection immediately after the timeout of
the inner session.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 215 f 376

|Test ID|10714|
|---|---|
|**Description**|A secure session is created within a TCP connection. The secure<br>session is kept idle. The BDUT will eventually close the secure session<br>due to a timeout. The outer TCP connection should be closed<br>immediately after the timeout.|
|**Expectation**|The BDUT closes the TCP connection immediately after the timeout of<br>the inner session.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test<br>procedure| Create secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Wait for TCP connection to get closed by the BDUT. Receive and<br>ignore all frames from the BDUT meanwhile. Timeout: Timeout-<br>SecureSession + TimeoutIdleTcpConnection / 2.<br>o On timeout: Abort test and return TestFailed. (The BDUT<br>did not close the TCP connection shortly after Timeout-<br>SecureSession.)<br>o Note: On reception of any frame from the BDUT, e.g. a<br>SecureWrappe/SessionStatus/StatusTimeout), nothing<br>special happens. It is not defined whether the BDUT sends<br>anything to the client before the TCP connection is closed.<br> Verify waiting time is >= 0.9 * TimeoutSecureSession. (Sanity<br>check that the timeout of the inner connection is working.)<br> Close TCP connection if necessary.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.3 (UDP and<br>TCP)|
|**Duration**|TimeoutSecureSession + TimeoutIdleTcpConnection / 2|
|**Mask version**||
|**Open points**||


##### 2.5.15 TCP connection does not get closed while at least one KNX connection or secure session is active

**Test ID** 10715

**Description** Interleaved and overlapping KNX connections and secure sessions are
opened and closed. This is done in such a way that each
connection/session is idle longer than the TCP idle timeout and so that
always at least one connection or session is open.

**Expectation** The BDUT does not close the TCP connection.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 216 f 376

|Test ID|10715|
|---|---|
|**Description**|Interleaved and overlapping KNX connections and secure sessions are<br>opened and closed. This is done in such a way that each<br>connection/session is idle longer than the TCP idle timeout and so that<br>always at least one connection or session is open.|
|**Expectation**|The BDUT does not close the TCP connection.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test procedure| Open TCP connection and do the following in the TCP<br>connection:<br> In all following operations: Detect unexpected closure of the TCP<br>connection. Abort test and return TestFailed as soon at the TCP<br>connection gets closed by the BDUT.<br> Open device management connection.<br> Wait for 1.5 * TimeoutIdleTcpConnection.<br> Open secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Close device management connection.<br> Wait for 1.5 * TimeoutIdleTcpConnection.<br> Open device management connection.<br> Execute GlPro CloseSecureSession().<br>_<br> Wait for 1.5 * TimeoutIdleTcpConnection.<br> Open secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Close device management connection.<br> Wait for 1.5 * TimeoutIdleTcpConnection.<br> Execute GlPro CloseSecureSession().<br>_<br> Verify that TCP was not yet closed. (On a BSD socket interface a<br>non-blocking recv() will return EAGAIN if the TCP connection is<br>open, and it will return 0 if the TCP connection was closed by the<br>peer.)<br> Close TCP connection.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.3.1 (Sending<br>and receiving frames)|
|**Duration**|6 * TimeoutIdleTcpConnection|
|**Mask version**||
|**Open points**||


##### 2.5.16 TCP/session/connection timeout behavior on concurrent connections/sessions

**Test ID** 10716

©C i h 1998 2018 KNX A i i V i 1 1 AS P 217 f 376

|Test ID|10716|
|---|---|


-----

|Description|This test tests the following aspects of a TCP connection:<br> A timeout on an idle KNX connection does not close the TCP<br>connection while there is a non-idle secure session.<br> A timeout of an idle secure session does not close the TCP<br>connection while there is a non-idle KNX connection.<br> Keeping a secure session busy does not prevent a concurrent<br>KNX connection from timing out.<br> Keeping a KNX connection busy does not prevent a concurrent<br>secure session from timing out.<br>Test procedure sketch:<br>A KNX connection and a concurrent secure session are created. The<br>secure session eventually times out while the KNX connection is kept<br>busy.<br>A new secure session is created and kept busy. The existing KNX<br>connection is no longer kept busy and will eventually time out.<br>At no point will the BDUT close the TCP connection.|
|---|---|
|**Expectation**|The BDUT does not close the TCP connection.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 218 f 376


-----

|Test procedure| Open TCP connection and do the following in the TCP<br>connection:<br> In all following operations: Detect unexpected closure of the TCP<br>connection. Abort test and return TestFailed as soon at the TCP<br>connection gets closed by the BDUT.<br> Open device management connection.<br> Open secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Wait for timeout of the secure session. Timeout: 1.1 * Timeout-<br>SecureSession.<br>o While waiting: Keep KNX connection busy by sending a<br>ConnectionStateRequest every 10 seconds.<br>o On timeout: Abort test and return TestFailed. Error: The<br>secure session did not time out, but is expected to time<br>out.<br>o If the waiting time was < 0.9 * TimeoutSecure-<br>Session: Abort test and return TestFailed. Error: The<br>secure session timed out too early.<br> Note: The secure session is now closed.<br> Open new secure session: Execute GlPro SecureSession-<br>_<br>Setup(userId = 1).<br> Wait for timeout of the KNX connection. Timeout: 1.1 * Timeout-<br>KnxConnection.<br>o While waiting: Keep secure session busy by sending a<br>SessionStatus/StatusKeepalive every 10 seconds, though<br>the secure session.<br>o On timeout: Abort test and return TestFailed. Error: The<br>KNX connection did not time out, but is expected to time<br>out.<br>o If the waiting time was < 0.9 * TimeoutKnxConnection:<br>Abort test and return TestFailed. Error: The KNX<br>connection timed out too early.<br> Note: The KNX connection is now closed.<br> Execute GlPro CloseSecureSession().<br>_<br> Close TCP connection.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.3.1 (Sending<br>and receiving frames)|
|**Duration**|TimeoutSecureSession + TimeoutKnxConnection|
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 219 f 376


-----

##### 2.5.17 TCP idle timeout

**Test ID** 10717

**Description** Open a TCP connection. Verify that an idle TCP connection (without any
open KNX connections or secure sessions) is closed 10 s after the last
octet was transferred or after the TCP connection was established.

**Expectation** The BDUT closes the TCP connection 10 s after the octet was
transferred.

**Setup** 
**Test** - Test timeout of fresh unused TCP connection.
**procedure** `o` Open TCP connection.
`o` Wait for TCP connection to be closed. Timeout: 1.1 *
TimeoutIdleTcpConnection.

                     - On timeout: Abort test and return TestFailed.

                     - On TCP connection close:

                     - If waiting time is < 0.9 * TimeoutIdleTcpConnection: Abort test and return TestFailed.
`o` Note: TCP connection is now closed.

             - Test timeout after closing a KNX connection:
`o` Open TCP connection.
`o` Open and close a device management connection.
`o` Wait for TCP connection to be closed. Timeout: 1.1 *
TimeoutIdleTcpConnection.

                     - On timeout: Abort test and return TestFailed.

                     - On TCP connection close:

                     - If waiting time is < 0.9 * TimeoutIdleTcpConnection:
Abort test and return TestFailed.

**Cleanup** 
**Specification** KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.3.1 (Sending
**reference** and receiving frames)

**Duration** TimeoutSecureSession + TimeoutKnxConnection

**Mask version**

**Open points**

##### 2.5.18 TCP octets prevent idle timeout

©C i h 1998 2018 KNX A i i V i 1 1 AS P 220 f 376

|Test ID|10717|
|---|---|
|**Description**|Open a TCP connection. Verify that an idle TCP connection (without any<br>open KNX connections or secure sessions) is closed 10 s after the last<br>octet was transferred or after the TCP connection was established.|
|**Expectation**|The BDUT closes the TCP connection 10 s after the octet was<br>transferred.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Test timeout of fresh unused TCP connection.<br>`o` Open TCP connection.<br>`o` Wait for TCP connection to be closed. Timeout: 1.1 *<br>TimeoutIdleTcpConnection.<br> <br>On timeout: Abort test and return TestFailed.<br> <br>On TCP connection close:<br> <br>If waiting time is < 0.9 * TimeoutIdleTcp-<br>Connection: Abort test and return TestFailed.<br>`o` Note: TCP connection is now closed.<br> <br>Test timeout after closing a KNX connection:<br>`o` Open TCP connection.<br>`o` Open and close a device management connection.<br>`o` Wait for TCP connection to be closed. Timeout: 1.1 *<br>TimeoutIdleTcpConnection.<br> <br>On timeout: Abort test and return TestFailed.<br> <br>On TCP connection close:<br> <br>If waiting time is < 0.9 * TimeoutIdleTcpConnection:<br>Abort test and return TestFailed.|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.3.1 (Sending<br>and receiving frames)|
|**Duration**|TimeoutSecureSession + TimeoutKnxConnection|
|**Mask version**||
|**Open points**||


-----

|Test ID|10718|
|---|---|
|**Description**|Open a TCP connection. Send the first 10 bytes of a DescriptionRequest<br>as individual bytes, one byte every TimeoutIdleTcpConnection/2. Verify<br>that sending individual bytes keeps the TCP connection open, as long as<br>these bytes form a valid KNXnet/IP frame.|
|**Expectation**|The BDUT does not close the TCP connection.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Open TCP connection.<br> <br>Send the following octet sequence as individual octets: 06 10 09<br>ee 00 0c 00 00 00 00 00 00<br> <br>For each octet:<br>`o` Wait TimeoutIdleTcpConnection / 2.<br>`o` Send next octet.<br>`o` On TCP connection close: Abort test and return TestFailed.<br> <br>Verify TCP connection was not yet closed.<br> <br>Close TCP connection.|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.3.1 (Sending<br>and receiving frames)|
|**Duration**|6 * TimeoutIdleTcpConnection|
|**Mask version**||
|**Open points**||


##### 2.5.19 KNX connections in TCP ignore sequence counter

**Test ID** 10719

**Description** Open device management connection in a TCP connection. Use a
constant sequence counter of 42 in all DeviceConfigurationRequest
frames.

**Expectation** The BDUT accepts all DeviceConfigurationRequests with sequence
counter 42, since it must ignore the sequence counter. (The BDUT may
send any sequence counter values it wants, so we cannot expect
anything there.)

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 221 f 376

|Test ID|10719|
|---|---|
|**Description**|Open device management connection in a TCP connection. Use a<br>constant sequence counter of 42 in all DeviceConfigurationRequest<br>frames.|
|**Expectation**|The BDUT accepts all DeviceConfigurationRequests with sequence<br>counter 42, since it must ignore the sequence counter. (The BDUT may<br>send any sequence counter values it wants, so we cannot expect<br>anything there.)|
|**Setup**|-|


-----

|Test procedure| Open a device management connection in TCP connection.<br> Repeat 3 times:<br>o Send DeviceConfigurationRequest M PropRead.req<br>_<br>ObjectType=0 PID=1, with sequence counter = 42.<br>o Wait for response. Timeout: TimeoutAppLayerResponse.<br> On Timeout: Abort test and return TestFailed.<br> Close TCP connection.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.4.1 (Connection<br>Header)|
|**Duration**|3 * TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


##### 2.5.20 KNX connections in TCP do not send ACKs and ignore ACKs

**Test ID** 10720

**Description** Open device management connection in a TCP connection and do 3
property reads.

Verify that the BDUT does not send DeviceConfigurationAcks to DeviceConfigurationRequests.

Verify that BDUT ignores DeviceConfigurationAcks.

**Expectation** The BDUT does not send DeviceConfigurationAcks. The BDUT ignores
DeviceConfigurationAcks.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 222 f 376

|Test ID|10720|
|---|---|
|**Description**|Open device management connection in a TCP connection and do 3<br>property reads.<br>Verify that the BDUT does not send DeviceConfigurationAcks to Device-<br>ConfigurationRequests.<br>Verify that BDUT ignores DeviceConfigurationAcks.|
|**Expectation**|The BDUT does not send DeviceConfigurationAcks. The BDUT ignores<br>DeviceConfigurationAcks.|
|**Setup**|-|


-----

|Test procedure| Open a device management connection in TCP connection.<br> Repeat 3 times:<br>o Send DeviceConfigurationRequest M PropRead.req<br>_<br>ObjectType=0 PID=1, with sequence counter = 0.<br>o Wait for response. Timeout: TimeoutAppLayerResponse.<br> On Timeout: Abort test and return TestFailed.<br> On received DeviceConfigurationRequest:<br> Verify that this is not an error response.<br> Send DeviceConfigurationAck for this<br>response.<br> On received DeviceConfigurationAck: Abort test and<br>return TestFailed. (The BDUT is not supposed to<br>send ACKs over TCP.)<br> On closure of the device management connection<br>(for example since the BDUT treats the Device-<br>ConfigurationAcks as error): Abort test and return<br>TestFailed.<br> Close TCP connection.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.4 (Device<br>Management)|
|**Duration**|3 * TimeoutAppLayerResponse|
|**Mask version**||
|**Open points**||


##### 2.5.21 TCP and KNX connections: HPAI restrictions

**Test ID** 10721

©C i h 1998 2018 KNX A i i V i 1 1 AS P 223 f 376

|Test ID|10721|
|---|---|


-----

|Description|Validate that the following possible cases for creating a device<br>management connection are handled correctly:<br> TCP connection and TCP Route Back HPAI: Supported.<br> TCP connection and TCP HPAI with non-zero port: Not allowed.<br> TCP connection and TCP HPAI with non-zero IP-Address: Not<br>allowed.<br> TCP connection and TCP HPAI with non-zero port and non-zero<br>IP-Address: Not allowed.<br> TCP connection and UDP Route Back HPAI: Not allowed.<br> TCP connection and UDP HPAI with non-zero port and non-zero<br>IP-Address: Not allowed.|
|---|---|
|**Expectation**|The BDUT silently ignores ConnectRequests which are not allowed and<br>does not send an error.|
|**Setup**|-|
|**Test procedure**| <br>Start TCP server on port Ptcp. Listen for incoming connections.<br>`o` On incoming connections: Abort test and return Test-<br>Failed.<br> <br>Start UDP server on port Pudp. Listen for incoming packets.<br>`o` On incoming packets: Abort test and return Test failed.<br> <br>Execute GlPro_TestKnxConnection(via = TCP, type = device<br>management, hpai = "TCP Route Back", expect = success).<br> <br>Execute GlPro_TestKnxConnection(via = TCP, type = device<br>management, hpai = "TCP port = Ptcp, IP-Address = 0", expect<br>= ignored).<br> <br>Execute GlPro_TestKnxConnection(via = TCP, type = device<br>management, hpai = "TCP port = 0, IP-Address = client IP-<br>Address", expect = ignored).<br> <br>Execute GlPro_TestKnxConnection(via = TCP, type = device<br>management, hpai = "TCP port = Ptcp, IP-Address = client IP-<br>Address", expect = ignored).<br> <br>Execute GlPro_TestKnxConnection(via = TCP, type = device<br>management, hpai = "UDP Route Back", expect = ignored).<br> <br>Execute GlPro_TestKnxConnection(via = TCP, type = device<br>management, hpai = "UDP port = Pudp, IP-Address = client IP-<br>Address", expect = ignored).|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.5 (Host<br>Protocol Address Information)|
|**Duration**|6 * TimeoutKnxConnectResponse|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 224 f 376


-----

|Mask version|Col2|
|---|---|
|**Open points**||


##### 2.5.22 UDP and KNX connections: HPAI restrictions

**Test ID** 10722

**Description** Validate that the following possible cases for creating a device
management connection are handled correctly:

              - UDP communication and TCP Route Back HPAI: Not allowed.

              - UDP communication and TCP HPAI with non-zero port and nonzero IP-Address: Not allowed.

              - UDP communication and UDP Route Back HPAI: Allowed.

              - UDP communication and UDP HPAI with non-zero port and nonzero IP-Address: Allowed.

**Expectation** The BDUT silently ignores ConnectRequests which are not allowed and
does not send an error.

**Setup** 
**Test procedure** - Start TCP server on port Ptcp. Listen for incoming connections.
`o` On incoming connections: Abort test and return TestFailed.

              - Start UDP server on port Pudp. Listen for incoming packets.
`o` On incoming packets: Ignore.

              - Execute GlPro_TestKnxConnection(via = UDP, type = device
management, hpai = "TCP Route Back", expect = ignored).

              - Execute GlPro_TestKnxConnection(via = UDP, type = device
management, hpai = "TCP port = Ptcp, IP-Address = client IPAddress", expect = ignored).

              - Execute GlPro_TestKnxConnection(via = UDP, type = device
management, hpai = "UDP Route Back", expect = success).

              - Execute GlPro_TestKnxConnection(via = UDP, type = device
management, hpai = "UDP port = Pudp, IP-Address = client IPAddress", expect = success).

**Cleanup** 
**Specification** KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.5 (Host
**reference** Protocol Address Information)

**Duration** 4 * TimeoutKnxConnectResponse

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 225 f 376

|Test ID|10722|
|---|---|
|**Description**|Validate that the following possible cases for creating a device<br>management connection are handled correctly:<br> <br>UDP communication and TCP Route Back HPAI: Not allowed.<br> <br>UDP communication and TCP HPAI with non-zero port and non-<br>zero IP-Address: Not allowed.<br> <br>UDP communication and UDP Route Back HPAI: Allowed.<br> <br>UDP communication and UDP HPAI with non-zero port and non-<br>zero IP-Address: Allowed.|
|**Expectation**|The BDUT silently ignores ConnectRequests which are not allowed and<br>does not send an error.|
|**Setup**|-|
|**Test procedure**| <br>Start TCP server on port Ptcp. Listen for incoming connections.<br>`o` On incoming connections: Abort test and return Test-<br>Failed.<br> <br>Start UDP server on port Pudp. Listen for incoming packets.<br>`o` On incoming packets: Ignore.<br> <br>Execute GlPro_TestKnxConnection(via = UDP, type = device<br>management, hpai = "TCP Route Back", expect = ignored).<br> <br>Execute GlPro_TestKnxConnection(via = UDP, type = device<br>management, hpai = "TCP port = Ptcp, IP-Address = client IP-<br>Address", expect = ignored).<br> <br>Execute GlPro_TestKnxConnection(via = UDP, type = device<br>management, hpai = "UDP Route Back", expect = success).<br> <br>Execute GlPro_TestKnxConnection(via = UDP, type = device<br>management, hpai = "UDP port = Pudp, IP-Address = client IP-<br>Address", expect = success).|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.5 (Host<br>Protocol Address Information)|
|**Duration**|4 * TimeoutKnxConnectResponse|
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.5.23 Concurrent KNX connections in a TCP connection

**Test ID** 10723

**Description** Two KNX connections are opened concurrently inside a TCP connection.

(This test first probes if two concurrent KNX connections are possible at
all via UDP. If this is not supported this test always passes as the
criterion cannot be tested and there is no requirement that devices must
support concurrent KNX connections.)

**Expectation** The connections can be established and used successfully.

**Setup** 
**Test** - Execute GlPro_TestConcurrentKnxConnections(secureSession =
**procedure** false).

**Cleanup** 
**Specification** KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.7 (Relation
**reference** between TCP connections, secure sessions and plain KNXnet/IP
connections)

**Duration** 2 * TimeoutKnxConnectResponse

**Mask version**

**Open points**

##### 2.5.24 Concurrent KNX connections in a secure session

**Test ID** 10724

**Description** Two KNX connections are opened concurrently inside a secure session
inside a TCP connection.

(This test first probes if two concurrent KNX connections are possible at
all via UDP. If this is not supported this test always passes as the
criterion cannot be tested and there is no requirement that devices must
support concurrent KNX connections.)

**Expectation** The connections can be established and used successfully.

**Setup** - Execute GlPro_SetupUnicast().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 226 f 376

|Test ID|10723|
|---|---|
|**Description**|Two KNX connections are opened concurrently inside a TCP connection.<br>(This test first probes if two concurrent KNX connections are possible at<br>all via UDP. If this is not supported this test always passes as the<br>criterion cannot be tested and there is no requirement that devices must<br>support concurrent KNX connections.)|
|**Expectation**|The connections can be established and used successfully.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Execute GlPro_TestConcurrentKnxConnections(secureSession =<br>false).|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.7 (Relation<br>between TCP connections, secure sessions and plain KNXnet/IP<br>connections)|
|**Duration**|2 * TimeoutKnxConnectResponse|
|**Mask version**||
|**Open points**||

|Test ID|10724|
|---|---|
|**Description**|Two KNX connections are opened concurrently inside a secure session<br>inside a TCP connection.<br>(This test first probes if two concurrent KNX connections are possible at<br>all via UDP. If this is not supported this test always passes as the<br>criterion cannot be tested and there is no requirement that devices must<br>support concurrent KNX connections.)|
|**Expectation**|The connections can be established and used successfully.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|


-----

|Test<br>procedure| Execute GlPro TestConcurrentKnxConnections(secureSession =<br>_<br>true).|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.8 (Relation<br>between secure sessions and KNXnet/IP connections)|
|**Duration**|2 * TimeoutKnxConnectResponse + TimeoutSessionResponse +<br>TimeoutSessionStatusAuthenticate + TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.5.25 Sequential KNX connections in a TCP connection

**Test ID** 10725

**Description** A KNX connection is opened and then closed in a TCP connection.
Another KNX connection is opened and then closed in the same TCP
connection.

**Expectation** The connections can be established and used successfully.

**Setup** 
**Test procedure** - Execute GlPro_TestSequentialKnxConnections(secureSession =
false).

**Cleanup** 
**Specification** KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.7 (Relation
**reference** between TCP connections, secure sessions and plain KNXnet/IP
connections)

**Duration** 2 * TimeoutKnxConnectResponse

**Mask version**

**Open points**

##### 2.5.26 Sequential KNX connections in a secure session

**Test ID** 10726

©C i h 1998 2018 KNX A i i V i 1 1 AS P 227 f 376

|Test ID|10725|
|---|---|
|**Description**|A KNX connection is opened and then closed in a TCP connection.<br>Another KNX connection is opened and then closed in the same TCP<br>connection.|
|**Expectation**|The connections can be established and used successfully.|
|**Setup**|-|
|**Test procedure**| <br>Execute GlPro_TestSequentialKnxConnections(secureSession =<br>false).|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.7 (Relation<br>between TCP connections, secure sessions and plain KNXnet/IP<br>connections)|
|**Duration**|2 * TimeoutKnxConnectResponse|
|**Mask version**||
|**Open points**||

|Test ID|10726|
|---|---|


-----

|Description|A KNX connection is opened and then closed in a secure session.<br>Another KNX connection is opened and then closed in the same secure<br>session.|
|---|---|
|**Expectation**|The connections can be established and used successfully.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Execute GlPro_TestSequentialKnxConnections(secureSession<br>= true).|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.8 (Relation<br>between secure sessions and KNXnet/IP connections)|
|**Duration**|2 * TimeoutKnxConnectResponse + TimeoutSessionResponse +<br>TimeoutSessionStatusAuthenticate + TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


##### 2.5.27 KNX connections do not span concurrent TCP connections

**Test ID** 10727

**Description** A TCP connection A and inside this a KNX connection K is opened.

A second TCP connection B is opened. It is tried to query the
connection status of K through B, and it is tried to close K through B.
Both should fail.

Finally, the KNX connection K is checked and it is verified that it was
unaffected.

Note: This tests only deals with KNX connections in TCP connections,
but it is of course allowed to have KNX connections through UDP.

**Expectation** The KNX connection K is not affect by any operation issued on B.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 228 f 376

|Test ID|10727|
|---|---|
|**Description**|A TCP connection A and inside this a KNX connection K is opened.<br>A second TCP connection B is opened. It is tried to query the<br>connection status of K through B, and it is tried to close K through B.<br>Both should fail.<br>Finally, the KNX connection K is checked and it is verified that it was<br>unaffected.<br>Note: This tests only deals with KNX connections in TCP connections,<br>but it is of course allowed to have KNX connections through UDP.|
|**Expectation**|The KNX connection K is not affect by any operation issued on B.|
|**Setup**|-|


-----

|Test procedure| If NumSupportedParallelTcpConnections < 2:<br>o Abort test and return TestPassed. Explanation: All KNX<br>connections are trivially contained in a single TCP<br>connection.<br> Open TCP connection A.<br> Open TCP connection B.<br> Send ConnectRequest device management through TCP<br>connection A.<br> Wait for ConnectResponse. Timeout: TimeoutKnxConnect-<br>Response.<br>o On timeout: Abort test and return TestFailed.<br>o Remember connection id K.<br> Send ConnectionStateRequest through TCP connection B (using<br>the connection id K).<br> Wait for ConnectionStateResponse on TCP connection A and<br>TCP connection B. Timeout: TimeoutKnxConnectionState-<br>Response.<br>o On negative ConnectionStateResponse (E -<br>_<br>CONNECTION ID) on TCP connection B: OK.<br>_<br>o On any other response on TCP connection B: Abort test<br>and return TestFailed.<br>o On any response on TCP connection A: Abort test and<br>return TestFailed.<br>o On receiving TCP disconnect on TCP connection A or<br>TCP connection B: Abort test and return TestFailed.<br>o On timeout: Abort test and return TestFailed.<br> Send DisconnectRequest through TCP connection B (using the<br>connection id K).<br> Wait for DisconnectResponse on TCP connection A and TCP<br>connection B. Timeout: TimeoutKnxDisconnectResponse.<br>o On negative DisconnectResponse (E CONNECTION ID)<br>_ _<br>on TCP connection B: OK.<br>o On any other response on TCP connection B: Abort test<br>and return TestFailed.<br>o On any response on TCP connection A: Abort test and<br>return TestFailed.<br>o On receiving TCP disconnect on TCP connection A or<br>TCP connection B: Abort test and return TestFailed.<br>o On timeout: Abort test and return TestFailed.<br> Explanation: Now verify that the original connection is still<br>working:<br> Send ConnectionStateRequest through TCP connection A (using<br>the connection id K).<br> Wait for ConnectionStateResponse on TCP connection A.<br>Timeout: TimeoutKnxConnectionStateResponse.<br>o On timeout: Abort test and return TestFailed.|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 229 f 376


-----

|Col1| Send DisconnectRequest through TCP connection A (using the<br>connection id K).<br> Wait for DisconnectResponse on TCP connection A . Timeout:<br>TimeoutKnxDisconnectResponse.<br>o On timeout: Abort test and return TestFailed.<br> Close TCP connections.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.7 (Relation<br>between TCP connections, secure sessions and plain KNXnet/IP<br>connections)|
|**Duration**|2 * TimeoutKnxConnectResponse + TimeoutKnxConnectionState-<br>Response + TimeoutKnxDisconnectResponse|
|**Mask version**||
|**Open points**||


##### 2.5.28 KNX connections get closed on TCP connection close (and do not span sequential TCP connections)

**Test ID** 10728

**Description** A TCP connection A and inside this a KNX connection K is opened. Then
the TCP connection is closed, which should implicitly close the KNX
connection K. A new TCP connection B is opened and it is tried to
access K from this which must fail.

**Expectation** The KNX connection K cannot be accessed from the TCP connection B.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 230 f 376

|Test ID|10728|
|---|---|
|**Description**|A TCP connection A and inside this a KNX connection K is opened. Then<br>the TCP connection is closed, which should implicitly close the KNX<br>connection K. A new TCP connection B is opened and it is tried to<br>access K from this which must fail.|
|**Expectation**|The KNX connection K cannot be accessed from the TCP connection B.|
|**Setup**|-|


-----

|Test<br>procedure| Open TCP connection A.<br> Send ConnectRequest device management through TCP<br>connection A.<br> Wait for ConnectResponse. Timeout: TimeoutKnxConnect-<br>Response.<br>o On timeout: Abort test and return TestFailed.<br>o Remember connection id K.<br> Close TCP connection A. This should implicitly close the KNX<br>connection K.<br> Open TCP connection B.<br> Send ConnectionStateRequest through TCP connection B (using<br>the old connection id K).<br> Wait for ConnectionStateResponse on TCP connection B.<br>Timeout: TimeoutKnxConnectionStateResponse.<br>o On ConnectionStateResponse with error E -<br>_<br>CONNECTION ID: OK.<br>_<br>o On ConnectionStateResponse with other result: Abort test<br>and return TestFailed.<br>o On timeout: Abort test and return TestFailed.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-08.01 KNXnet-IP Core v2 (2017.04.04) 2.2.3.2.7 (Relation<br>between TCP connections, secure sessions and plain KNXnet/IP<br>connections)|
|**Duration**|2 * TimeoutKnxConnectResponse|
|**Mask version**||
|**Open points**||


##### 2.5.29 Valid DeviceConfigurationRequest frames with invalid cEMI content extend KNX connection timeout

**Test ID** 10729

**Description** Open device management connection in a TCP connection. Sending a
DeviceConfigurationRequest with an invalid cEMI message extends the
device management connection timeout.

**Expectation** The KNX connection does not time out.

**Setup** - Open TCP connection.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 231 f 376

|Test ID|10729|
|---|---|
|**Description**|Open device management connection in a TCP connection. Sending a<br>DeviceConfigurationRequest with an invalid cEMI message extends the<br>device management connection timeout.|
|**Expectation**|The KNX connection does not time out.|
|**Setup**| <br>Open TCP connection.|


-----

|Test<br>procedure| Open a device management connection in TCP connection.<br> Wait TimeoutKnxConnection / 2.<br> Send DeviceConfigurationRequest M PropRead.req,<br>_<br>malformatted, all fields after ObjectInstance missing (message too<br>short). The DeviceConfigurationRequest KNXnet/IP frame must be<br>correctly formatted however.<br> Remember time T1.<br> Wait for DisconnectRequest or TCP connection close.<br>Timeout: TimeoutKnxConnection * 1.1. Measure time T = T -<br>_<br>DisconnectRequest or TCP close - T1.<br>_ _ _<br>o On timeout: Abort test and return TestFailed.<br>o Check that T is in [TimeoutKnxConnection * 0.9 .. Timeout-<br>KnxConnection * 1.1].|
|---|---|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|03_08_02 Core v01.05.01 AS (2013.10.28) 5.4 Heartbeat monitoring. (It<br>is assumed that the text "within 120 seconds of the last correctly received<br>message frame" refers to just validating the KNXnet/IP header and the<br>connection header to retrigger the timeout, and not the content of the<br>frame following the connection header, as this is not defined in the scope<br>of the timeout. The reasoning behind this is that a BDUT which does not<br>support the cEMI payloads of frames in the device management<br>connection (e.g. new APCIs) should still keep the connection device<br>management connection open for further (and potentially supported)<br>communication.)|
|**Duration**|1.5 * TimeoutKnxConnection|
|**Mask version**||
|**Open points**||


##### 2.5.30 Open TCP connections get closed by restart

**Test ID** 10730

**Description** This test verifies that open TCP connections get closed by a restart (e.g.
Basic Restart or Confirmed Restart). This implies that secure sessions
and plain KNX connection running over TCP also get closed by a restart.

A TCP connection is opened to the BDUT and it is verified that it is
responsive. Then the BDUT is restarted (Basic Restart) and it is waited
until the BDUT is responsive again.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 232 f 376

|Test ID|10730|
|---|---|
|**Description**|This test verifies that open TCP connections get closed by a restart (e.g.<br>Basic Restart or Confirmed Restart). This implies that secure sessions<br>and plain KNX connection running over TCP also get closed by a restart.<br>A TCP connection is opened to the BDUT and it is verified that it is<br>responsive. Then the BDUT is restarted (Basic Restart) and it is waited<br>until the BDUT is responsive again.|


-----

|Expectation|TCP connections are no longer usable once the BDUT becomes<br>responsive again after a restart.|
|---|---|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Open TCP connection C.<br> <br>Open non-secure device management connection D via UDP.<br> <br>Send M_Reset via D.<br> <br>Wait for WaitTimeAfterRestart.<br> <br>Execute GlPro_WaitUntilRestartComplete().<br> <br>Try to send a DescriptionRequest through C. This may or may not<br>fail.<br>`o` On failure of any kind: Ok: Abort test and return Test-<br>Passed.<br> <br>Explanation: If the BDUT closed its receiving side of<br>the TCP connection gracefully (for example because<br>it did not reset itself completely which is not<br>required), then the test clients TCP stack will already<br>know the peer side closed its receiving side of the<br>connection and sending will fail immediately. But<br>alternatively the BDUT could just restart is TCP stack<br>non-gracefully which is also allowed. In this case the<br>BDUTs TCP stack will send an RST packet to the<br>test client which may or may not make the send<br>operation fail immediately. All variants are ok.<br>`o` On successful send: Ok. Continue:<br> <br>Try to receive a DescriptionResponse through C. Timeout:<br>TimeoutDescriptionResponse.<br>`o`  <br> <br>On failure of any kind: Ok: Abort test and return Test-<br>Passed.<br> <br>On timeout: Abort test and return test failed.<br>Explanation: The TCP stack in the BDUT should by<br>now (the latest) have told the test client that either<br>the TCP connection was closed (graceful close<br>through FIN/ACK) or that it does not know about the<br>TCP connection at all (through RST).<br> <br>On received DescriptionResponse. Abort test and<br>return TestFailed. Explanation: This is a primary<br>indication that the TCP connection was not closed at<br>all.|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 233 f 376


-----

|Cleanup| Send DisconnectRequest for D via UDP. Do not wait for any<br>response. (Explanation: This is only necessary in the fail case<br>where the device failed to close the UDP based KNX connection D<br>upon the restart. This may avoid spuriously failing the following<br>tests.)<br> If TCP connection still appears to be open: Close TCP connection.<br>Ignore all errors. (Explanation: This is only necessary in the fail<br>case where the device failed to close the TCP upon the restart.<br>This may avoid spuriously failing the following tests.)|
|---|---|
|**Specification**<br>**reference**|KSG696-09.02 KNXnet-IP Core v2 (2017.09.21) 2.2.3.2.3 TCP and UDP,<br>2.4.3 DM_Restart - extensions|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.5.31 KNX connections via UDP get closed by restart

**Test ID** 10731

**Description** This test verifies that KNX connections using UDP are closed (gracefully
or non-gracefully) by a restart of the BDUT.

A UDP based device management connection is created. If supported
by the BDUT, another device management connection and/or a
tunnelling connection via UDP is opened.

**Expectation** All opened KNX connections report the error E_CONNECTION_ID to a
ConnectionStateRequest after a restart.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 234 f 376

|Test ID|10731|
|---|---|
|**Description**|This test verifies that KNX connections using UDP are closed (gracefully<br>or non-gracefully) by a restart of the BDUT.<br>A UDP based device management connection is created. If supported<br>by the BDUT, another device management connection and/or a<br>tunnelling connection via UDP is opened.|
|**Expectation**|All opened KNX connections report the error E_CONNECTION_ID to a<br>ConnectionStateRequest after a restart.|
|**Setup**|-|


-----

|Test procedure| Open non-secure device management connection D1 via UDP.<br> Try to open a non-secure device management connection D2 via<br>UDP. If this fails: Ok: Set D2 to 'none'.<br> Try to open a tunnelling connection T vis UDP. If this fails: Ok:<br>Set T to 'none'.<br> Send M Reset via D.<br>_<br> Wait for WaitTimeAfterRestart.<br> Execute GlPro WaitUntilRestartComplete().<br>_<br> Send ConnectionStateRequest for D1 and wait for response.<br>Timeout: TimeoutKnxConnectionStateResponse.<br>o On timeout: Abort test and return TestFailed.<br>o On status != E CONNECTION ID: Abort test and return<br>_ _<br>TestFailed.<br> If D2 != 'none':<br>o Send ConnectionStateRequest for D2 and wait for<br>response. Timeout: TimeoutKnxConnectionState-<br>Response.<br> On timeout: Abort test and return TestFailed.<br> On status != E CONNECTION ID: Abort test and<br>_ _<br>return TestFailed.<br> If T != 'none':<br>o Send ConnectionStateRequest for T and wait for response.<br>Timeout: TimeoutKnxConnectionStateResponse.<br> On timeout: Abort test and return TestFailed.<br> On status != E CONNECTION ID: Abort test and<br>_ _<br>return TestFailed.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-09.02 KNXnet-IP Core v2 (2017.09.21) 2.4.3 DM_Restart -<br>extensions|
|**Duration**||
|**Mask version**||
|**Open points**||


### 2.6 Core v2 Discovery

##### 2.6.1 Meta test: SearchResponseExtended frames OK

©C i h 1998 2018 KNX A i i V i 1 1 AS P 235 f 376


-----

|Test ID|10901|
|---|---|
|**Description**|This test is not run as an independent test. Instead this test validates all<br>incoming SearchResponseExtended frames coming from the BDUT via<br>UDP or TCP, while executing all Core v2 Discovery tests.|
|**Expectation**|The frame structure and contents of all received SearchResponse-<br>Extended frames is ok.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>If received frame is a SearchResponseExtended frame:<br>`o` Check Control Endpoint field:<br> <br>If this is not UDP: Abort test and return TestFailed.<br> <br>If this is not ControlEndpointIp: Abort test and return<br>TestFailed.<br> <br>Explanation: Do not check ControlEndpoint-<br>Port as the BDUT may report multiple ports,<br>each in one SearchResponseExtended. (Each<br>port indicates an individual BDUT and requires<br>an individual IPVT test run.)<br>`o` Check DIB list:<br> <br>Check that the length of each DIB is at least 2 and<br>does not extend beyond the end of the frame.<br> <br>Check that the DIB type is in [1, 2, 3, 4, 5, 6, 7, 8,<br>FEh].<br> <br>If any of the above check fails: Abort test and return<br>TestFailed.|
|**Cleanup**|-|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.2.2 (Binary<br>Format)|
|**Duration**|-|
|**Mask version**||
|**Open points**||


##### 2.6.2 SearchRequestExtended via UDP

**Test ID** 10902

©C i h 1998 2018 KNX A i i V i 1 1 AS P 236 f 376

|Test ID|10902|
|---|---|


-----

|Description|Send a SearchRequestExtended to the BDUT, one each:<br> via UDP multicast with answers send back to the client via<br>multicast (all on the SystemSetupMulticastAddress)<br> via UDP multicast with answers send back to the client via<br>unicast (once using the client IP/port in the HPAI and once using<br>UDP route-back HPAI)<br> via UDP unicast with the test clients IP/port as HPAI<br> via UDP unicast with UDP route-back HPAI<br> via UDP unicast with an erroneous TCP route-back HPAI which<br>should be ignored|
|---|---|
|**Expectation**|Receive a SearchResponseExtended for the first five valid requests. Do<br>not receive any response for the last erroneous request.|
|**Setup**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 237 f 376


-----

|Test procedure| localHpai = UDP with IP address and port number of the test<br>clients socket.<br> Execute GlPro SendSearchRequestExtended(destinationHPAI<br>_<br>= DiscoveryHpai, frameHpai = DiscoveryHpai).<br> Execute GlPro ReceiveSearchResponseExtended(listening-<br>_<br>HPAI = DiscoveryHpai).<br> Execute GlPro SendSearchRequestExtended(destinationHPAI<br>_<br>= DiscoveryHpai, frameHpai = localHpai).<br> Execute GlPro ReceiveSearchResponseExtended(listening-<br>_<br>HPAI = localHpai).<br> Execute GlPro SendSearchRequestExtended(destinationHPAI<br>_<br>= DiscoveryHpai, frameHpai = UDPRouteBackHpai).<br> Execute GlPro ReceiveSearchResponseExtended(listening-<br>_<br>HPAI = localHpai).<br> bdutHpai = UDP with IP address and port number of the BDUTs<br>control endpoint.<br> Execute GlPro SendSearchRequestExtended(destinationHPAI<br>_<br>= bdutHpai, frameHpai = localHpai).<br> Execute GlPro ReceiveSearchResponseExtended(listening-<br>_<br>HPAI = localHpai).<br> Execute GlPro SendSearchRequestExtended(destinationHPAI<br>_<br>= bdutHpai, frameHpai = UDPRouteBackHpai).<br> Execute GlPro ReceiveSearchResponseExtended(listening-<br>_<br>HPAI = localHpai).<br> Execute GlPro SendSearchRequestExtended(destinationHPAI<br>_<br>= bdutHpai, frameHpai = TCPRouteBackHpai).<br> Execute receivedFrame = GlPro ReceiveSearchResponse-<br>_<br>Extended(listeningHPAI = localHpai, expectResponse = false).<br> If receivedFrame != null:<br>o Abort test and return TestFailed.|
|---|---|
|**Cleanup**||
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.1 (Definition)|
|**Duration**||
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 238 f 376


-----

##### 2.6.3 SearchRequestExtended via TCP

**Test ID** 10903

**Description** Send a SearchRequestExtended to the control endpoint via TCP and
receive a SearchResponseExtended via TCP. Also send two SearchRequestExtended frames with erroneous HPAI (UDP route-back and
TCP non-route-back) which should be ignored.

**Expectation** Receive a SearchResponseExtended if the SearchRequestExtended
contains a correct HPAI.

**Setup** 
**Test** - bdutHpai = TCP with IP address and port number of the BDUT.
**procedure** - localHpai = TCP Route-back. (Explanation: This means to use the
same TCP connection for reception of the response which was
used for sending the request.)

             - TCPNonRouteBackHpai = TCP with IP address and port number
of the test clients socket.

             - Execute GlPro_SendSearchRequestExtended(destinationHPAI =
bdutHpai, frameHpai = TCPRouteBackHpai).

             - Execute GlPro_ReceiveSearchResponseExtended(listeningHPAI
= localHpai).

             - Execute GlPro_SendSearchRequestExtended(destinationHPAI =
bdutHpai, frameHpai = UDPRouteBackHpai).

             - Execute receivedFrame = GlPro_ReceiveSearchResponseExtended(listeningHPAI = localHpai, expectResponse = false).

             - If receivedFrame != null:
`o` Abort test and return TestFailed.

             - Execute GlPro_SendSearchRequestExtended(destinationHPAI =
bdutHpai, frameHpai = TCPNonRouteBackHpai).

             - Execute receivedFrame = GlPro_ReceiveSearchResponseExtended(listeningHPAI = localHpai, expectResponse = false).

             - If receivedFrame != null:
`o` Abort test and return TestFailed.

**Cleanup** 
**Specification** AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.1 (Definition)
**reference**

**Duration**

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 239 f 376

|Test ID|10903|
|---|---|
|**Description**|Send a SearchRequestExtended to the control endpoint via TCP and<br>receive a SearchResponseExtended via TCP. Also send two Search-<br>RequestExtended frames with erroneous HPAI (UDP route-back and<br>TCP non-route-back) which should be ignored.|
|**Expectation**|Receive a SearchResponseExtended if the SearchRequestExtended<br>contains a correct HPAI.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>bdutHpai = TCP with IP address and port number of the BDUT.<br> <br>localHpai = TCP Route-back. (Explanation: This means to use the<br>same TCP connection for reception of the response which was<br>used for sending the request.)<br> <br>TCPNonRouteBackHpai = TCP with IP address and port number<br>of the test clients socket.<br> <br>Execute GlPro_SendSearchRequestExtended(destinationHPAI =<br>bdutHpai, frameHpai = TCPRouteBackHpai).<br> <br>Execute GlPro_ReceiveSearchResponseExtended(listeningHPAI<br>= localHpai).<br> <br>Execute GlPro_SendSearchRequestExtended(destinationHPAI =<br>bdutHpai, frameHpai = UDPRouteBackHpai).<br> <br>Execute receivedFrame = GlPro_ReceiveSearchResponse-<br>Extended(listeningHPAI = localHpai, expectResponse = false).<br> <br>If receivedFrame != null:<br>`o` Abort test and return TestFailed.<br> <br>Execute GlPro_SendSearchRequestExtended(destinationHPAI =<br>bdutHpai, frameHpai = TCPNonRouteBackHpai).<br> <br>Execute receivedFrame = GlPro_ReceiveSearchResponse-<br>Extended(listeningHPAI = localHpai, expectResponse = false).<br> <br>If receivedFrame != null:<br>`o` Abort test and return TestFailed.|
|**Cleanup**|-|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.1 (Definition)|
|**Duration**||
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.6.4 SearchRequestExtended via TCP and secure session

**Test ID** 10904

**Description** Open a secure session and send through it a SearchRequestExtended
and receive a SearchResponseExtended. (All via TCP.)

This test must only be executed for devices supporting IP-Security.

**Expectation** Receive a SearchResponseExtended through the secure session.

**Setup** - Execute GlPro_SetupUnicast().

**Test procedure** - bdutHpai = TCP with IP address and port number of the BDUT

             - localHpai = TCP Route-back. (Explanation: This means to use
the same TCP connection for reception of the response which
was used for sending the request.)

             - Explanation: Test SearchRequestExtended through secure
session:

             - Execute GlPro_SetupSecureSession(userId = 1).

             - Execute GlPro_SendSearchRequestExtended(destinationHPAI =
bdutHpai, frameHpai = TCPRouteBackHpai). (Use secure
session.)

             - Execute GlPro_ReceiveSearchResponseExtended(listeningHPAI
= localHpai). (Use secure session.)

             - Execute GlPro_CloseSecureSession().

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.1 (Definition)
**reference**

**Duration**

**Mask version**

**Open points**

##### 2.6.5 Mandatory Bit

**Test ID** 10905

©C i h 1998 2018 KNX A i i V i 1 1 AS P 240 f 376

|Test ID|10904|
|---|---|
|**Description**|Open a secure session and send through it a SearchRequestExtended<br>and receive a SearchResponseExtended. (All via TCP.)<br>This test must only be executed for devices supporting IP-Security.|
|**Expectation**|Receive a SearchResponseExtended through the secure session.|
|**Setup**| <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>bdutHpai = TCP with IP address and port number of the BDUT<br> <br>localHpai = TCP Route-back. (Explanation: This means to use<br>the same TCP connection for reception of the response which<br>was used for sending the request.)<br> <br>Explanation: Test SearchRequestExtended through secure<br>session:<br> <br>Execute GlPro_SetupSecureSession(userId = 1).<br> <br>Execute GlPro_SendSearchRequestExtended(destinationHPAI =<br>bdutHpai, frameHpai = TCPRouteBackHpai). (Use secure<br>session.)<br> <br>Execute GlPro_ReceiveSearchResponseExtended(listeningHPAI<br>= localHpai). (Use secure session.)<br> <br>Execute GlPro_CloseSecureSession().|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.1 (Definition)|
|**Duration**||
|**Mask version**||
|**Open points**||

|Test ID|10905|
|---|---|


-----

|Description|Send SearchRequestExtended with invalid SRP to the discovery<br>endpoint and receive SearchResponseExtended if the mandatory bit<br>admits it.<br>The following cases are tested:<br> Invalid SRP with M=0 (a response is expected).<br> Multiple SRPs containing an invalid SRP with M=0 (a response<br>is expected).<br> Invalid SRP with M=1 (no response is allowed).<br> Multiple SRPs containing an invalid SRP with M=1 (no response<br>is allowed).|
|---|---|
|**Expectation**|The cases with M=0 expect a response and the cases with M=1 do not<br>allow a response.|
|**Setup**| <br>Execute PropSetup_SetProgrammingMode(progMode = 1).|
|**Test procedure**| <br>invalidSRP = SRP with Type = Invalid and Mandatory = 0.<br> <br>Execute GlPro_TestSearchRequestParameter(SRPsToSend =<br>invalidSRP).<br> <br>multiSRPWithInvalidSRP = GlPro_GetDefaultSRPList().<br> <br>Execute GlPro_TestSearchRequestParameter(SRPsToSend =<br>multiSRPWithInvalidSRP).<br> <br>invalidMandatorySRP = SRP with Type = Invalid and Mandatory<br>= 1.<br> <br>Execute receivedFrame = GlPro_TestSearchRequest-<br>Parameter(SRPsToSend = invalidMandatorySRP, expect-<br>Response = false).<br> <br>If receivedFrame != null:<br>`o` Abort test and return TestFailed.<br> <br>multiSRPWithInvalidMandatorySRP = GlPro_GetDefault-<br>SRPList() with Invalid SRP Mandatory changed to 1.<br> <br>Execute receivedFrame = GlPro_TestSearchRequest-<br>Parameter(SRPsToSend = multiSRPWithInvalidMandatorySRP,<br>expectResponse = false).<br> <br>If receivedFrame != null:<br>`o` Abort test and return TestFailed.|
|**Cleanup**| <br>Execute PropSetup_SetProgrammingMode( progMode = 0).|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 241 f 376


-----

|Specification<br>reference|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.3.1<br>(Definition)|
|---|---|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.6.6 SRP Type Programming Mode

**Test ID** 10906

**Description** Send SearchRequestExtended with ProgMode Selector to the
discovery endpoint and receive SearchResponseExtended when the
BDUT is in programming mode.

The following cases are tested:

              - Programming mode SRP while programming mode is 1
(response expected).

              - Multiple SRPs wth programming mode SRP while programming
mode is 1 (response expected).

              - Programming mode SRP while programming mode is 0 (no
response allowed).

              - Multiple SRPs wth programming mode SRP while programming
mode is 0 (no response allowed).

**Expectation** A SearchResponseExtended is received only for the first two cases
(programming mode 1).

**Setup** - Execute PropSetup_SetProgrammingMode( progMode = 1).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 242 f 376

|Test ID|10906|
|---|---|
|**Description**|Send SearchRequestExtended with ProgMode Selector to the<br>discovery endpoint and receive SearchResponseExtended when the<br>BDUT is in programming mode.<br>The following cases are tested:<br> <br>Programming mode SRP while programming mode is 1<br>(response expected).<br> <br>Multiple SRPs wth programming mode SRP while programming<br>mode is 1 (response expected).<br> <br>Programming mode SRP while programming mode is 0 (no<br>response allowed).<br> <br>Multiple SRPs wth programming mode SRP while programming<br>mode is 0 (no response allowed).|
|**Expectation**|A SearchResponseExtended is received only for the first two cases<br>(programming mode 1).|
|**Setup**| <br>Execute PropSetup_SetProgrammingMode( progMode = 1).|


-----

|Test procedure| progModeSelector = SRP with Type = SelectByProgMode and<br>Mandatory = 1.<br> Execute GlPro TestSearchRequestParameter( SRPsToSend =<br>_<br>progModeSelector).<br> multiSRPWithProgModeSelector = GlPro GetDefaultSRPList().<br>_<br> Execute GlPro TestSearchRequestParameter( SRPsToSend =<br>_<br>multiSRPWithProgModeSelector).<br> Execute PropSetup SetProgrammingMode(progMode = 0).<br>_<br> Execute receivedFrame = GlPro TestSearchRequestParameter(<br>_<br>SRPsToSend = progModeSelector, expectResponse = false).<br> If receivedFrame != null:<br>o Abort test and return TestFailed.<br> Execute receivedFrame = GlPro TestSearchRequestParameter(<br>_<br>SRPsToSend = multiSRPWithProgModeSelector, expect-<br>Response = false).<br> If receivedFrame != null:<br>o Abort test and return TestFailed.|
|---|---|
|**Cleanup**| <br>Execute PropSetup_SetProgrammingMode( progMode = 0).|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.3.3 (SRP Type<br>“Select By Programming Mode SRP”)|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.6.7 SRP Type Mac Address

**Test ID** 10907

©C i h 1998 2018 KNX A i i V i 1 1 AS P 243 f 376

|Test ID|10907|
|---|---|


-----

|Description|Send SearchRequestExtended with MacAddress Selector to the<br>discovery endpoint and receive SearchResponseExtended if the MAC<br>Address is correct.<br>The following cases are tested:<br> Mac address SRP with MAC address of the BDUT (response<br>expected).<br> Multiple SRPs including a Mac address SRP with MAC address<br>of the BDUT (response expected).<br> Mac address SRP with a MAC address different from the BDUTs<br>MAC address (no response allowed).<br> Multiple SRPs including a Mac address SRP with a MAC<br>address different from the BDUTs MAC address (no response<br>allowed).|
|---|---|
|**Expectation**|A SearchResponseExtended is received only for the first two cases<br>(correct MAC address).|
|**Setup**| <br>Execute PropSetup_SetProgrammingMode(progMode = 1).|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 244 f 376


-----

|Test procedure| macAddressSelector = SRP with "Type = SelectByMacAddress<br>and Mandatory = 1 and MacAddress = MacAddress".<br> Execute GlPro TestSearchRequestParameter( SRPsToSend =<br>_<br>macAddressSelector).<br> multiSRPWithMacAddressSelector = GlPro GetDefault-<br>_<br>SRPList().<br> Execute GlPro TestSearchRequestParameter( SRPsToSend =<br>_<br>multiSRPWithMacAddressSelector).<br> wrongMacAddressSelector = SRP with "Type = SelectByMac-<br>Address and Mandatory = 1 and MacAddress different from<br>MacAddress".<br> Execute receivedFrame = GlPro TestSearchRequestParameter(<br>_<br>SRPsToSend = wrongMacAddressSelector, expectResponse =<br>false).<br> If receivedFrame != null:<br>o Abort test and return TestFailed.<br> multiSRPWithWrongMacAddressSelector = GlPro GetDefault-<br>_<br>SRPList() with MacAddress changed.<br> Execute receivedFrame = GlPro TestSearchRequestParameter(<br>_<br>SRPsToSend = multiSRPWithWrongMacAddressSelector,<br>expectResponse = false).<br> If receivedFrame != null:<br>o Abort test and return TestFailed.|
|---|---|
|**Cleanup**| <br>Execute PropSetup_SetProgrammingMode(progMode = 0).|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.3.4 (SRP Type<br>“Select By MAC Address”)|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.6.8 SRP Type Select By Service

**Test ID** 10908

©C i h 1998 2018 KNX A i i V i 1 1 AS P 245 f 376

|Test ID|10908|
|---|---|


-----

|Description|Send SearchRequestExtended with Service Selector to the discovery<br>endpoint and receive SearchResponseExtended if the service is<br>supported.<br>The following cases are tested for each service family supported by the<br>device:<br> Select by service SRP with service version = 1 (response<br>expected).<br> Multiple SRPs containing a select by service SRP with service<br>version 1 (response expected).<br> Select by service SRP with service version = 255 (no response<br>allowed).<br> Multiple SRPs containing a select by service SRP with service<br>version 255 (no response allowed).|
|---|---|
|**Expectation**|A SearchResponseExtended is received only for the first two cases of<br>each service family, because version 1 is always assumed to be<br>supported (for supported service families) and version 255 is always<br>assumed not to be supported.|
|**Setup**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 246 f 376


-----

|Test<br>procedure| For each suppServFam found by GlPro ReadSupportedService-<br>_<br>FamiliesDib(coreV2 = true):<br><br>o serviceV1Selector = SRP with Type = SelectByService and<br>Mandatory = 1 and ServiceFamily = suppServFam and<br>ServiceVersion = 1.<br>o Execute GlPro TestSearchRequestParameter(SRPsTo-<br>_<br>Send = serviceV1Selector).<br><br>o multiSRPWithServiceV1Selector = GlPro GetDefault-<br>_<br>SRPList() with Service = Core changed to suppServFam.<br>o Execute GlPro TestSearchRequestParameter(SRPsTo-<br>_<br>Send = multiSRPWithServiceV1Selector).<br><br>o serviceV255Selector = SRP with Type = SelectByService<br>and Mandatory = 1 and ServiceFamily = suppServFam and<br>ServiceVersion = 255.<br>o Execute receivedFrame = GlPro TestSearchRequest-<br>_<br>Parameter(SRPsToSend = serviceV255Selector, expect-<br>Response = false).<br>o If receivedFrame != null:<br> Abort test and return TestFailed.<br><br>o multiSRPWithServiceV255Selector = multiSRPWith-<br>ServiceV1Selector with ServiceVersion = 1 changed to 255.<br>o Execute receivedFrame = GlPro TestSearchRequest-<br>_<br>Parameter(SRPsToSend = multiSRPWithService-<br>V255Selector, expectResponse = false).<br>o If receivedFrame != null:<br> Abort test and return TestFailed.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.3.5 (SRP Type<br>“Select By Service”)|
|**Duration**||
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 247 f 376


-----

##### 2.6.9 SRP Type Request DIBs

**Test ID** 10909

**Description** First use Request DIBs SRP to determine the set of all supported
description types. Then use Request DIBs to request all supported DIBs.
Consistency is checked. All of this is done via TCP in order to avoid any
unnecessary limit to the maximum size of the SEARCH_REQUEST_RESPONSE when requesting many DIBs at once.

This test checks:

            - That the M bit has no effect for Request DIBs SRP.

            - That unsupported and/or unknown description types do not affect
responses.

            - That the basic set of DIBs is reported (“Device Information DIB”,
“Extended Device Information DIB” and “Supported Services DIB”).

            - That all requested and supported DIBs are always reported.

            - That each DIB is reported only once, even when specified multiple
times in the Request DIBs request.

**Expectation** For every SEARCH_REQUEST_EXTENDED in this test there is a
response. Reported DIBs are consistent with supported and requested
DIBs. The checks listed in the description hold.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 248 f 376

|Test ID|10909|
|---|---|
|**Description**|First use Request DIBs SRP to determine the set of all supported<br>description types. Then use Request DIBs to request all supported DIBs.<br>Consistency is checked. All of this is done via TCP in order to avoid any<br>unnecessary limit to the maximum size of the SEARCH_REQUEST_-<br>RESPONSE when requesting many DIBs at once.<br>This test checks:<br> <br>That the M bit has no effect for Request DIBs SRP.<br> <br>That unsupported and/or unknown description types do not affect<br>responses.<br> <br>That the basic set of DIBs is reported (“Device Information DIB”,<br>“Extended Device Information DIB” and “Supported Services DIB”).<br> <br>That all requested and supported DIBs are always reported.<br> <br>That each DIB is reported only once, even when specified multiple<br>times in the Request DIBs request.|
|**Expectation**|For every SEARCH_REQUEST_EXTENDED in this test there is a<br>response. Reported DIBs are consistent with supported and requested<br>DIBs. The checks listed in the description hold.|
|**Setup**|-|


-----

|Test<br>procedure|Note: This test procedure uses TCP and does not use UDP.<br>Set MaxRequestedDescriptionTypesPerSearchRequestExtended = 10.<br>Determine set of supported DIBs using Request DIBs SRP:<br> Set potentiallySupportedDescriptionTypes = {1, 2, 3, ..., 255} (all<br>description types from 1..255).<br> Partition potentiallySupportedDescriptionTypes into N chunks, so<br>that each chunk contains at most MaxRequestedDescriptionTypes-<br>PerSearchRequestExtended description types.<br> For each of these partitions:<br>o Set requestDibs = current partition of description types<br>concatenated with current partition of description types (so<br>that each description type appears twice in the list of<br>description types).<br>o Execute GlPro SendSearchRequestExtended(destination-<br>_<br>HPAI = TCP control port of BDUT, frameHpai = TCP-Route-<br>Back, SRPsToSend = Select by MAC address with Mac-<br>Address (M=1), Request DIBs with requestDibs (M=1).<br>o Wait for SearchResponseExtended. Timeout: Timeout-<br>SearchResponseExtendedUnicast<br> On timeout: Abort test and return test failed.<br>o Execute GlPro SendSearchRequestExtended(destination-<br>_<br>HPAI = TCP control port of BDUT, frameHpai = TCP-Route-<br>Back, SRPsToSend = Select by MAC address with Mac-<br>Address (M=1), Request DIBs with requestDibs (M=0).<br>o Wait for SearchResponseExtended. Timeout: Timeout-<br>SearchResponseExtendedUnicast<br> On timeout: Abort test and return test failed.<br>o Verify that both SearchResponseExtended contain the<br>same set of DIBs.<br>o Verify that both SearchResponseExtended contain each<br>DIB only once.<br>o Accumulate set of supported description types in supported-<br>DescriptionTypes.<br> Verify that “Device Information DIB”, “Extended Device Information<br>DIB” and “Supported Services DIB” are in supportedDescription-<br>Types.<br>Get all supported DIBs:<br> Partition supportedDescriptionTypes into N chunks, so that each<br>chunk contains at most MaxRequestedDescriptionTypesPer-<br>SearchRequestExtended description types.|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 249 f 376


-----

|Col1| For each of these partitions:<br>o Set requestDibs = current partition of description types<br>concatenated with current partition of description types (so<br>that each description type appears twice in the list of<br>description types).<br>o Execute GlPro SendSearchRequestExtended(destination-<br>_<br>HPAI = TCP control port of BDUT, frameHpai = TCP-Route-<br>Back, SRPsToSend = Select by MAC address with Mac-<br>Address (M=1), Request DIBs with requestDibs (M=1).<br>o Wait for SearchResponseExtended. Timeout: Timeout-<br>SearchResponseExtendedUnicast<br> On timeout: Abort test and return test failed.<br>o Verify that the SearchResponseExtended contains all<br>requested description types.<br>o Verify that the SearchResponseExtended contains each<br>description type only once.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.3.6 (SRP Type<br>“Request DIBs”)|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.6.10 Erroneous SearchRequestExtended frames are ignored

**Test ID** 10910

**Description** Send a valid SearchRequestExtended to the BDUT and await response,
just to make sure a device is connected at all. Then send a number of
erroneous SearchRequestExtended frames to the BDUT and await
response.

**Expectation** No SearchResponseExtended is received for the erroneous frames.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 250 f 376

|Test ID|10910|
|---|---|
|**Description**|Send a valid SearchRequestExtended to the BDUT and await response,<br>just to make sure a device is connected at all. Then send a number of<br>erroneous SearchRequestExtended frames to the BDUT and await<br>response.|
|**Expectation**|No SearchResponseExtended is received for the erroneous frames.|
|**Setup**|-|


-----

|Test<br>procedure| Explanation: Check whether device responds to SearchRequest-<br>Extended at all (whether device is present at all):<br>o Execute GlPro SendSearchRequestExtended(destination-<br>_<br>HPAI = DiscoveryHpai, frameHpai = test clients UDP<br>socket).<br>o Execute GlPro ReceiveSearchResponse-<br>_<br>Extended(listeningHPAI = localHpai).<br> Explanation: Then send a number of erroneous SearchRequest-<br>Extended frames to the BDUT and check that they all are ignored:<br> For each of these erroneous frames (starting with a valid frame<br>and then modifying it to make it erroneous):<br>o SearchRequestExtended without SRPs, with KNXnet/IP<br>header length set to 5 (instead of 6). (The actual length of<br>the header and the frame is unmodified.)<br>o SearchRequestExtended without SRPs, with KNXnet/IP<br>header version set to FFh.<br>o SearchRequestExtended without SRPs, with KNXnet/IP<br>header Total Length field decreased by one (but the actual<br>length of the frame unmodified).<br>o SearchRequestExtended without SRPs and without<br>Discovery Endpoint HPAI. (This means Total Length = 6).<br>o SearchRequestExtended without SRPs and with<br>HPAI.StructureLength set to 7 (instead of 8). (The actual<br>length should be unmodified.)<br>o SearchRequestExtended without SRPs and with<br>HPAI.Protocol set to 00h (instead of 1 or 2). (Wrong<br>protocol number in HPAI).<br>o SearchRequestExtended with Select by MAC SRP with<br>MacAddress and with the SRPs structure length set to 7<br>(instead of 8).<br>o SearchRequestExtended with Select by MAC SRP with<br>MacAddress and with the last octet removed from the frame<br>(SRPs structure length is still 8 but the last octet of the SRP<br>is not part of the frame sent).<br> Do the following for each 'frame':<br>o Send frame via UDP multicast to the discovery endpoint.<br>o Wait for SearchResponseExtended. Timeout: Timeout-<br>SearchResponseExtendedMulticast.<br>o On received response: Abort test and return TestFailed.<br>o On timeout: Ok. Continue with list.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.2.1.2 (Binary<br>Format)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 251 f 376


-----

|Duration|Col2|
|---|---|
|**Mask version**||
|**Open points**||


##### 2.6.11 SearchRequest via TCP is ignored

**Test ID** 10911

**Description** A SearchRequest is sent to the BDUT via TCP, using a TCP-RouteBack HPAI. This must be ignored because SearchRequest is not
allowed via TCP.

**Expectation** The BDUT does not respond.

**Setup** 
**Test procedure** - Open a TCP connection to the BDUTs control endpoint.

             - Send a SearchRequest to the BDUT via TCP, using a TPCRoute-Back HPAI.

             - Wait for response through TCP or UDP (listen on port 3671):
Timeout: TimeoutSearchResponse.
`o` On response received: Abort test and return TestFailed.
`o` On TCP connection closed: Abort test and return TestFailed. (Reason: Correctly formatted KNXnet/IP frames,
no matter how invalid, must never close the TCP
connection.
`o` On timeout: OK.

             - Close TCP connection.

**Cleanup** 
**Specification** AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.3.2.1 (Discovery)
**reference**

**Duration** TimeoutSearchResponse

**Mask version**

**Open points**

##### 2.6.12 SearchRequest via UDP with TCP/UDP HPAI is ignored/accepted

©C i h 1998 2018 KNX A i i V i 1 1 AS P 252 f 376

|Test ID|10911|
|---|---|
|**Description**|A SearchRequest is sent to the BDUT via TCP, using a TCP-Route-<br>Back HPAI. This must be ignored because SearchRequest is not<br>allowed via TCP.|
|**Expectation**|The BDUT does not respond.|
|**Setup**|-|
|**Test procedure**| <br>Open a TCP connection to the BDUTs control endpoint.<br> <br>Send a SearchRequest to the BDUT via TCP, using a TPC-<br>Route-Back HPAI.<br> <br>Wait for response through TCP or UDP (listen on port 3671):<br>Timeout: TimeoutSearchResponse.<br>`o` On response received: Abort test and return TestFailed.<br>`o` On TCP connection closed: Abort test and return Test-<br>Failed. (Reason: Correctly formatted KNXnet/IP frames,<br>no matter how invalid, must never close the TCP<br>connection.<br>`o` On timeout: OK.<br> <br>Close TCP connection.|
|**Cleanup**|-|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.3.2.1 (Discovery)|
|**Duration**|TimeoutSearchResponse|
|**Mask version**||
|**Open points**||


-----

|Test ID|10912|
|---|---|
|**Description**|SearchRequests are sent to the BDUT via UDP containing various<br>HPAIs:<br> <br>Full UDP HPAI (should be handled by the BDUT)<br> <br>Route-Back UDP HPAI (should be handled by the BDUT)<br> <br>Full TCP HPAI (should be ignored by the BDUT)<br> <br>Route-Back TCP HPAI (should be ignored the BDUT)<br>Note: This test ignores erroneous incoming TCP connection requests<br>from the BDUT, because it is blindly assumed that the BDUT will never<br>initiate TCP connections to the client.|
|**Expectation**|The BDUT ignores SEARCH_REQUESTS with TCP HPAIs.|
|**Setup**|<br>-|
|**Test procedure**| <br>Send a SearchRequest to the BDUT via UDP (to the discovery<br>endpoint, via multicast), containing a full UDP HPAI (IP address<br>of the client and port 3671).<br> <br>Wait for a response: Timeout: TimeoutSearchResponse.<br>`o` On timeout: Abort test and return TestFailed.<br>`o` Check HPAI in response to be a UDP HPAI (either full or<br>Route-Back).<br> <br>Send a SearchRequest to the BDUT via UDP (to the discovery<br>endpoint, via multicast), containing a Route-Back UDP HPAI.<br> <br>Wait for a response: Timeout: TimeoutSearchResponse.<br>`o` On timeout: Abort test and return TestFailed.<br>`o` Check HPAI in response to be a UDP HPAI (either full or<br>Route-Back).<br> <br>Send a SearchRequest to the BDUT via UDP (to the discovery<br>endpoint, via multicast), containing a full TCP HPAI (the control<br>endpoint of the client).<br> <br>Wait for a response: Timeout: TimeoutSearchResponse.<br>`o` On UDP response received: Abort test and return Test-<br>Failed.<br>`o` On timeout: OK.<br> <br>Send a SearchRequest to the BDUT via UDP (to the discovery<br>endpoint, via multicast), containing a Route-Back TCP HPAI.<br> <br>Wait for a response: Timeout: TimeoutSearchResponse.<br>`o` On UDP response received: Abort test and return Test-<br>Failed.<br>`o` On timeout: OK.|
|**Cleanup**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 253 f 376


-----

|Specification<br>reference|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.3.2.1 (Discovery)|
|---|---|
|**Duration**|4 * TimeoutSearchResponse|
|**Mask version**||
|**Open points**||


##### 2.6.13 SearchResponse reports only UDP endpoint even if TCP is supported

**Test ID** 10913

**Description** Send a SearchRequest to the BDUT and wait for response. Verify that
the UDP control endpoint is reported.

Note: Although this test is intended for devices which support also
TCP, it is perfectly OK to run this test also for devices which do not
support TCP.

**Expectation** The UDP control endpoint is reported.

**Setup** 
**Test procedure** - Send a SearchRequest to the BDUT via UDP (multicast).

              - Wait for SearchResponse. Timeout: TimeoutSearchResponse.

              - On timeout: Abort test and return TestFailed.

              - Verify that response contains the UDP control endpoint of the
BDUT.

**Cleanup** 
**Specification** AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.3.2.1 (Discovery)
**reference**

**Duration** TimeoutSearchResponse

**Mask version**

**Open points**

##### 2.6.14 DescriptionRequest via UDP with TCP/UDP HPAI is ignored/accepted

©C i h 1998 2018 KNX A i i V i 1 1 AS P 254 f 376

|Test ID|10913|
|---|---|
|**Description**|Send a SearchRequest to the BDUT and wait for response. Verify that<br>the UDP control endpoint is reported.<br>Note: Although this test is intended for devices which support also<br>TCP, it is perfectly OK to run this test also for devices which do not<br>support TCP.|
|**Expectation**|The UDP control endpoint is reported.|
|**Setup**|-|
|**Test procedure**| <br>Send a SearchRequest to the BDUT via UDP (multicast).<br> <br>Wait for SearchResponse. Timeout: TimeoutSearchResponse.<br> <br>On timeout: Abort test and return TestFailed.<br> <br>Verify that response contains the UDP control endpoint of the<br>BDUT.|
|**Cleanup**|-|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.3.2.1 (Discovery)|
|**Duration**|TimeoutSearchResponse|
|**Mask version**||
|**Open points**||


-----

|Test ID|10914|
|---|---|
|**Description**|DescriptionRequests are sent to the BDUT via UDP containing various<br>HPAIs:<br> <br>Full UDP HPAI (should be handled by the BDUT)<br> <br>Route-Back UDP HPAI (should be handled by the BDUT)<br> <br>Full TCP HPAI (should be ignored by the BDUT)<br> <br>Route-Back TCP HPAI (should be ignored the BDUT)<br>Note: This test ignores erroneous incoming TCP connection requests<br>from the BDUT, because it is blindly assumed that the BDUT will never<br>initiate TCP connections to the client.|
|**Expectation**|The BDUT ignores DESCRIPTION_REQUESTS with TCP HPAIs.|
|**Setup**|<br>-|
|**Test procedure**| <br>Send a DescriptionRequest to the BDUT via UDP (to the control<br>endpoint, ControlEndpointIp and ControlEndpointPort), containing<br>a full UDP HPAI (IP address of the client and 3671).<br> <br>Wait for a response: Timeout: TimeoutDescriptionResponse.<br>`o` On timeout: Abort test and return TestFailed.<br> <br>Send a DescriptionRequest to the BDUT via UDP (to the control<br>endpoint, ControlEndpointIp and ControlEndpointPort), containing<br>a Route-Back UDP HPAI.<br> <br>Wait for a response: Timeout: TimeoutDescriptionResponse.<br>`o` On timeout: Abort test and return TestFailed.<br> <br>Send a DescriptionRequest to the BDUT via UDP (to the control<br>endpoint, ControlEndpointIp and ControlEndpointPort), containing<br>a full TCP HPAI (IP address of the client and 3671).<br> <br>Wait for a response: Timeout: TimeoutDescriptionResponse.<br>`o` On UDP response received: Abort test and return Test-<br>Failed.<br>`o` On timeout: OK.<br> <br>Send a DescriptionRequest to the BDUT via UDP (to the control<br>endpoint, ControlEndpointIp and ControlEndpointPort), containing<br>a Route-Back TCP HPAI.<br> <br>Wait for a response: Timeout: TimeoutDescriptionResponse.<br>`o` On UDP response received: Abort test and return Test-<br>Failed.<br>`o` On timeout: OK.|
|**Cleanup**|-|
|**Specification**<br>**reference**|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.3.2.1 (Discovery)|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 255 f 376


-----

|Duration|4 * TimeoutDescriptionResponse|
|---|---|
|**Mask version**||
|**Open points**||


##### 2.6.15 Secure service family is reported by SearchRequestExtended

**Test ID** 10915

**Description** Send a SearchRequestExtended to the BDUT without any SRPs. Check
that the "Supported Service Families DIB" is present and that the
"Secure service family" is reported with version 1.

**Expectation** The "Secure service family" is reported in the "Supported Service
Families DIB" with version >= 1.

**Setup** - Open TCP connection.

**Test procedure** - Execute GlPro_SendSearchRequestExtended(destinationHPAI =
BDUTs IP and port, frameHpai = test clients IP and port). (Via
TCP.)

             - Execute receivedFrame = GlPro_ReceiveSearchResponseExtended(listeningHPAI = test clients IP and port). (Via TCP.)

             - Verify that "Supported Service Families DIB" is present in the
response.

             - Verify that "Secure service family" (9) is present in "Supported
Service Families DIB" with version >= 1.

**Cleanup** - Close TCP connection.

**Specification** KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.6.2.1 KNXnet/IP
**reference** Secure service family

**Duration** TimeoutSearchResponseExtendedUnicast

**Mask version**

**Open points**

##### 2.6.16 Secured service families DIB is reported by SearchRequest- Extended if at least one service is secured

**Test ID** 10916

©C i h 1998 2018 KNX A i i V i 1 1 AS P 256 f 376

|Test ID|10915|
|---|---|
|**Description**|Send a SearchRequestExtended to the BDUT without any SRPs. Check<br>that the "Supported Service Families DIB" is present and that the<br>"Secure service family" is reported with version 1.|
|**Expectation**|The "Secure service family" is reported in the "Supported Service<br>Families DIB" with version >= 1.|
|**Setup**| <br>Open TCP connection.|
|**Test procedure**| <br>Execute GlPro_SendSearchRequestExtended(destinationHPAI =<br>BDUTs IP and port, frameHpai = test clients IP and port). (Via<br>TCP.)<br> <br>Execute receivedFrame = GlPro_ReceiveSearchResponse-<br>Extended(listeningHPAI = test clients IP and port). (Via TCP.)<br> <br>Verify that "Supported Service Families DIB" is present in the<br>response.<br> <br>Verify that "Secure service family" (9) is present in "Supported<br>Service Families DIB" with version >= 1.|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.6.2.1 KNXnet/IP<br>Secure service family|
|**Duration**|TimeoutSearchResponseExtendedUnicast|
|**Mask version**||
|**Open points**||

|Test ID|10916|
|---|---|


-----

|Description|Enable security for device management, tunnelling and routing, each<br>with version 1. Send a SearchRequestExtended to the BDUT with a<br>"Request DIBs" SRP to request DEVICE INFO and SECURE -<br>_ _<br>SERVICES and receive the response.|
|---|---|
|**Expectation**|The SearchRequestExtendedResponse contains a "Secured service<br>families DIB", and this in turn contains the families device management<br>(3), tunnelling (4) and routing (5), each with version 1.|
|**Setup**| <br>Execute GlPro_SetupFamilySecurity(true).|
|**Test procedure**| <br>Open TCP connection.<br> <br>Execute GlPro_SendSearchRequestExtended(destinationHPAI =<br>BDUTs IP and port, frameHpai = test clients IP and port, SRPsTo-<br>Send = "Request DIBs" SRP requesting DEVICE_INFO and<br>SECURE_SERVICES). (Via TCP.)<br> <br>Execute receivedFrame = GlPro_ReceiveSearchResponse-<br>Extended(listeningHPAI = test clients IP and port). (Via TCP.)<br> <br>Verify that "Secured service families DIB" is present in the<br>receivedFrame.<br> <br>Verify that "Secured service families DIB" contains exactly the<br>service families device management (3), tunnelling (4) and routing<br>(5) each with version 1.|
|**Cleanup**| <br>Close TCP connection.<br> <br>Execute GlPro_SetupFamilySecurity(false).|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.6.2.2 KNXnet/IP<br>Secured service families DIB|
|**Duration**|TimeoutSearchResponseExtendedUnicast + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.6.17 Secured service families DIB is not reported by SearchRequest- Extended if no service is secured

**Test ID** 10917

**Description** Disable security for device management, tunnelling and routing. Send a
SearchRequestExtended to the BDUT with a "Request DIBs" SRP to
request DEVICE_INFO and SECURE_SERVICES and receive the
response.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 257 f 376

|Test ID|10917|
|---|---|
|**Description**|Disable security for device management, tunnelling and routing. Send a<br>SearchRequestExtended to the BDUT with a "Request DIBs" SRP to<br>request DEVICE_INFO and SECURE_SERVICES and receive the<br>response.|


-----

|Expectation|The SearchRequestExtendedResponse does not contain a "Secured<br>service families DIB".|
|---|---|
|**Setup**| <br>Execute GlPro_SetupFamilySecurity(false).|
|**Test procedure**|<br> <br>Open TCP connection.<br> <br>Execute GlPro_SendSearchRequestExtended(destinationHPAI =<br>BDUTs IP and port, frameHpai = test clients IP and port, SRPsTo-<br>Send = "Request DIBs" SRP requesting DEVICE_INFO and<br>SECURE_SERVICES). (Via TCP.)<br> <br>Execute receivedFrame = GlPro_ReceiveSearchResponse-<br>Extended(listeningHPAI = test clients IP and port). (Via TCP.)<br> <br>Verify that "Secured service families DIB" is not present in the<br>receivedFrame.|
|**Cleanup**| <br>Close TCP connection.|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.6.2.2 KNXnet/IP<br>Secured service families DIB|
|**Duration**|TimeoutSearchResponseExtendedUnicast + ConfirmedRestart|
|**Mask version**||
|**Open points**||


##### 2.6.18 Extended Device Information DIB

**Test ID** 10918

**Description** Get Extended Device Information DIB using a SearchRequestExtended
without a Request DIBs SRP and receive the response.

Inspect the received Extended Device Information DIB and validate the
contents according to the expectations.

Disconnect TP1 line and request another Extended Device Information
DIB and inspect the Medium Status again. If the device becomes
unresponsive after disconnecting the TP1 line this is ok because a TP1
powered device is assumed.

**Expectation** The fields in the Extended Device Information DIB reflect their respective
property values and the Medium Status follows the TP1 line connection
status.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 258 f 376

|Test ID|10918|
|---|---|
|**Description**|Get Extended Device Information DIB using a SearchRequestExtended<br>without a Request DIBs SRP and receive the response.<br>Inspect the received Extended Device Information DIB and validate the<br>contents according to the expectations.<br>Disconnect TP1 line and request another Extended Device Information<br>DIB and inspect the Medium Status again. If the device becomes<br>unresponsive after disconnecting the TP1 line this is ok because a TP1<br>powered device is assumed.|
|**Expectation**|The fields in the Extended Device Information DIB reflect their respective<br>property values and the Medium Status follows the TP1 line connection<br>status.|
|**Setup**|-|


-----

|Test<br>procedure| Execute GlPro SendSearchRequestExtended(destinationHPAI =<br>_<br>BDUTs IP and port, frameHpai = test clients IP and port).<br> Execute extendedDeviceInformationDib = GlPro ReceiveSearch-<br>_<br>ResponseExtended(listeningHPAI = test clients IP and port).<br> Extract isTunnellingV2Supported from received SerahcResponse-<br>Extended (Supported Service Families DIB).<br> Execute PropAccess DevMgmt(dsk = Fdsk, restart = false) to read<br>_<br>the following properties:<br>o If BDUT is a router (if IndividualAddress ends in .0):<br> PID MEDIUM STATUS in the Router Object<br>_ _<br>o Else:<br> Set PID MEDIUM STATUS to 'none' to disable the<br>_ _<br>comparison below.<br>o If isTunnellingV2Supported:<br> PID MAX LOCAL APDU LENGTH in the cEMI<br>_ _ _ _<br>Server Object<br>o Else:<br> Set PID MAX LOCAL APDU LENGTH to 'none' to<br>_ _ _ _<br>disable the comparison below.<br>o PID DEVICE DESCRIPTOR in the Device Object<br>_ _<br> If (PID MEDIUM STATUS != 'none') and (field "Medium Status" is<br>_ _<br>!= PID MEDIUM STATUS):<br>_ _<br>o Abort test and return TestFailed.<br> If field Medium Status indicates that TP1 is disconnected:<br>o Abort test and return TestFailed. (Explanation: TP1 is<br>connected by default for all tests.)<br> If (PID MAX LOCAL APDU LENGTH != 'none') field "Maximal<br>_ _ _ _<br>Local APDU length" is != PID MAX LOCAL APDU LENGTH:<br>_ _ _ _<br>o Abort test and return TestFailed.<br> If field "Device Descriptor Type 0" is != PID DEVICE -<br>_ _<br>DESCRIPTOR:<br>o Abort test and return TestFailed.<br> Explanation: Check whether field 'Medium Status' follows the TP1<br>connection status. TP1 powered devices become unresponsive<br>which is ok.<br>o Execute GlPro SwitchOnOffTp(on = false).<br>_<br>o Wait WaitTimeAfterPowerDown.<br>o Execute GlPro SendSearchRequestExtended(destination-<br>_<br>HPAI = BDUTs IP and port, frameHpai = test clients IP and<br>port).<br>o Wait for SearchResponseExtended. Timeout: Timeout-<br>SearchResponseExtendedUnicast.<br> On timeout: Ok. Continue.<br> On response received:<br> Extract ExtendedDeviceInformationDib.|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 259 f 376


-----

|Col1| If field Medium Status indicates that TP1 is<br>connected:<br> Abort test and return TestFailed.|
|---|---|
|**Cleanup**| <br>Execute GlPro_SwitchOnOffTp(on = true).|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.4.2 Extended<br>Device Info DIB|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.6.19 Supported service family versions are consistent between Search- Response, DescriptionResponse and SearchResponseExtended

**Test ID** 10919

**Description** Request a SearchResponse, DescriptionResponse and a SearchResponseExtended.

**Expectation** The versions for service families 02h .. 08h (pre-security) are the same
for all three received responses.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 260 f 376

|Test ID|10919|
|---|---|
|**Description**|Request a SearchResponse, DescriptionResponse and a Search-<br>ResponseExtended.|
|**Expectation**|The versions for service families 02h .. 08h (pre-security) are the same<br>for all three received responses.|
|**Setup**|-|


-----

**Test procedure** - Send a SearchRequest to the BDUT.

              - Wait for a SearchResponse. Timeout: TimeoutSearchResponse.
`o` On timeout: Abort and return failed.

              - Extract supportedServiceFamiliesDibSearch from received
SearchResponse.

              - Send a DescriptionRequest to the BDUT.

              - Wait for a DescriptionResponse. Timeout: TimeoutDescriptionResponse.
`o` On timeout: Abort and return failed.

              - Extract supportedServiceFamiliesDibDescription from received
DescriptionResponse.

              - Execute GlPro_SendSearchRequestExtended(destinationHPAI =
BDUTs IP and port, frameHpai = test clients IP and port).

              - Execute supportedServiceFamiliesDibExt = GlPro_ReceiveSearchResponseExtended(listeningHPAI = test clients IP and
port).

              - If version for at least one service family in 02h to 08h is different
between either:
`o` supportedServiceFamiliesDibSearch and supportedServiceFamiliesDibDescription, or
`o` supportedServiceFamiliesDibSearch and supportedServiceFamiliesDibExt
`o` Then: Abort test and return TestFailed.

**Cleanup** 
**Specification** KSG696-09.02 KNXnet-IP Core v2 (2017.09.21) 2.2.2.3 (SEARCH_**reference** RESPONSE), 2.2.2.4 (DESCRIPTION_RESPONSE), 2.2.2.5
Supported service families DIB

**Duration**

**Mask version**

**Open points**

##### 2.6.20 SearchResponse and DescriptionResponse only report pre- security service families in Supported Service Families DIB and only report pre-security DIBs

**Test ID** 10920

©C i h 1998 2018 KNX A i i V i 1 1 AS P 261 f 376

|Test procedure| Send a SearchRequest to the BDUT.<br> Wait for a SearchResponse. Timeout: TimeoutSearchResponse.<br>o On timeout: Abort and return failed.<br> Extract supportedServiceFamiliesDibSearch from received<br>SearchResponse.<br> Send a DescriptionRequest to the BDUT.<br> Wait for a DescriptionResponse. Timeout: TimeoutDescription-<br>Response.<br>o On timeout: Abort and return failed.<br> Extract supportedServiceFamiliesDibDescription from received<br>DescriptionResponse.<br> Execute GlPro SendSearchRequestExtended(destinationHPAI =<br>_<br>BDUTs IP and port, frameHpai = test clients IP and port).<br> Execute supportedServiceFamiliesDibExt = GlPro Receive-<br>_<br>SearchResponseExtended(listeningHPAI = test clients IP and<br>port).<br> If version for at least one service family in 02h to 08h is different<br>between either:<br>o supportedServiceFamiliesDibSearch and supported-<br>ServiceFamiliesDibDescription, or<br>o supportedServiceFamiliesDibSearch and supported-<br>ServiceFamiliesDibExt<br>o Then: Abort test and return TestFailed.|
|---|---|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG696-09.02 KNXnet-IP Core v2 (2017.09.21) 2.2.2.3 (SEARCH_-<br>RESPONSE), 2.2.2.4 (DESCRIPTION_RESPONSE), 2.2.2.5<br>Supported service families DIB|
|**Duration**||
|**Mask version**||
|**Open points**||

|Test ID|10920|
|---|---|


-----

|Description|Send a SearchRequest and a DescriptionRequest to the BDUT via UDP.<br>Verify that the responses to these only contain the pre-secure service<br>families. Also verify that the responses only contain pre-security DIBs<br>(e,g, no Secured service families DIB, no Tunnelling Information DIB and<br>no Extended Device Information DIB).<br>Note: Devices which support post-secure versions of pre-secure service<br>families (e.g. Core v2) must report the actual version they support for<br>these service families. I.e. a device which supports Core v2 must report<br>'version 2' for service family 'Core', even in SearchResponse and<br>DescriptionResponse. This is why the versions reported for pre-secure<br>service families are not constrained in this test.|
|---|---|
|**Expectation**|The BDUT reports only the pre-secure service families (02h to 08h).<br>The BDUT reports only the pre-secure DIBs (01h to 05h and feh).|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Send a SearchRequest to the DiscoveryHpai with the UDPRoute-<br>BackHpai<br> <br>Wait for a SearchResponse. Timeout: TimeoutSearchResponse.<br>`o` On timeout: Abort and return failed.<br>`o` Check whether Supported Service Family DIB contains only<br>the allowed supported service families for a Search-<br>Response (02h to 08h).<br> <br>Otherwise: Abort and return TestFailed.<br>`o` Check whether the response contains any DIB outside the<br>set 01h to 05h and feh.<br> <br>If so: Abort and return TestFailed.<br> <br>Send a DescriptionRequest to the BDUT with the UDPRouteBack-<br>Hpai<br> <br>Wait for a DescriptionResponse. Timeout: TimeoutDescription-<br>Response.<br>`o` On timeout: Abort and return failed.<br>`o` Check whether Supported Service Family DIB contains only<br>the allowed supported service families for a Description-<br>Response (02h to 08h).<br> <br>Otherwise: Abort and return failed.<br>`o` Check whether the response contains any DIB outside the<br>set 01h to 05h and feh.<br> <br>If so: Abort and return TestFailed.|
|**Cleanup**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 262 f 376


-----

|Specification<br>reference|AN184 v02 KNXnet-IP Core v2 DV (2017.05.02) 2.2.3.2.2 (Self<br>Description)<br>KSG643-21.02 KNXnet-IP Tunnelling v2 (2017.09.04) 2.4.1.2 (Tunnelling<br>Information DIB), 2.4.2.2 (Extended Device Information DIB)<br>KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.6.2.2 (KNXnet/IP<br>Secured Service Families DIB)|
|---|---|
|**Duration**|TimeoutSearchResponse + TimeoutDescriptionResponse|
|**Mask version**||
|**Open points**||


### 2.7 Tunnelling v2

##### 2.7.1 TunnellingFeatureGet

**Test ID** 30401

**Description** Read all Tunnelling Features via TunnellingFeatureGet. Also read one
non-existing tunnelling feature with id 0. (Using UDP.)

**Expectation** Read the correct values of the Tunnelling Features. Receive an error E_ADDRESS_VOID for tunnelling feature id 0.

**Setup**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 263 f 376

|Test ID|30401|
|---|---|
|**Description**|Read all Tunnelling Features via TunnellingFeatureGet. Also read one<br>non-existing tunnelling feature with id 0. (Using UDP.)|
|**Expectation**|Read the correct values of the Tunnelling Features. Receive an error E_-<br>ADDRESS_VOID for tunnelling feature id 0.|
|**Setup**||


-----

|Test<br>procedure| Read the following properties using PropAccess DevMgmt(restart<br>_<br>= false):<br>o PID DEVICE DESCRIPTOR<br>_ _<br>o PID MANUFACTURER CODE<br>_ _<br>o PID MAX INTERFACE APDU LENGTH<br>_ _ _ _<br>o (The values of these properties are referenced in the<br>following by their property name.)<br> tunnellingAddress = GlPro EstablishTunnellingConnection().<br>_<br> Execute GlPro SendTunnellingFeatureGet(featureId = Supported<br>_<br>EMI type).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Supported EMI type, expectedValue = 0004h (cEMI) or E -<br>_<br>ADDRESS VOID, expectedValueLength = 2). (Explanation: E -<br>_ _<br>ADDRESS VOID is allowed since this is an optional feature.).<br>_<br> Execute GlPro SendTunnellingFeatureGet(featureId = Host<br>_<br>Device Device Descriptor Type 0).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Host Device Device Descriptor Type 0, expectedValue = PID -<br>_<br>DEVICE DESCRIPTOR, expectedValueLength = 2).<br>_<br> Execute GlPro SendTunnellingFeatureGet(featureId = Bus<br>_<br>connection status).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Bus connection status, expectedValue = active, expectedValue-<br>Length = 1).<br> Execute GlPro SendTunnellingFeatureGet(featureId = KNX<br>_<br>Manufacturer Code).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>KNX Manufacturer Code, expectedValue = PID -<br>_<br>MANUFACTURER CODE, expectedValueLength = 2).<br>_<br> Execute GlPro SendTunnellingFeatureGet(featureId = Active EMI<br>_<br>type).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Active EMI type, expectedValue = 03h (cEMI), expectedValue-<br>Length = 1). (Explanation: E ADDRESS VOID is allowed since<br>_ _<br>this is an optional feature.).<br> Execute GlPro SendTunnellingFeatureGet(featureId = Individual<br>_<br>Address).|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 264 f 376


-----

|Col1| Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Individual Address, expectedValue = tunnellingAddress, expected-<br>ValueLength = 2).<br> Execute GlPro SendTunnellingFeatureGet(featureId = Max APDU<br>_<br>Length).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Max APDU Length, expectedValue = PID MAX INTERFACE -<br>_ _ _<br>APDU LENGTH, expectedValueLength = 2).<br>_<br> Execute GlPro SendTunnellingFeatureGet(featureId = Interface<br>_<br>Feature Info Service Enable).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Interface Feature Info Service Enable, expectedValue = false,<br>expectedValueLength = 1).<br> Execute GlPro SendTunnellingFeatureGet(featureId = Invalid<br>_<br>Feature Identifier(value 0)).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Invalid Feature Identifier(value 0), expectedReturnCode = E -<br>_<br>ADDRESS VOID).<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CloseTunnellingConnection().|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27),<br>2.2.2.8.1 Overview of the Interface Features, 2.2.2.2.2 TUNNELLING_-<br>FEATURE_GET|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.7.2 Failing TunnellingFeatureSet

**Test ID** 30402

**Description** Write all read-only tunnelling features via TunnellingFeatureSet and
check the return code. Write all writable tunnelling feature with invalid
data and/or invalid data sizes and check the return code. (Using UDP.)

**Expectation** Receive the appropriate return code for writes.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 265 f 376

|Test ID|30402|
|---|---|
|**Description**|Write all read-only tunnelling features via TunnellingFeatureSet and<br>check the return code. Write all writable tunnelling feature with invalid<br>data and/or invalid data sizes and check the return code. (Using UDP.)|
|**Expectation**|Receive the appropriate return code for writes.|
|**Setup**|-|


-----

|Test procedure| Execute GlPro EstablishTunnellingConnection().<br>_<br> Execute GlPro SendTunnellingFeatureSet(featureId = Supported<br>_<br>EMI type, value = 0).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Supported EMI type, expectedReturnCode = E ACCESS -<br>_ _<br>READ ONLY or E ADDRESS VOID). (E ADDRESS VOID is<br>_ _ _ _ _<br>allowed because this is an optional feature.).<br> Execute GlPro SendTunnellingFeatureSet(featureId = Host<br>_<br>Device Device Descriptor Type 0, value = 0).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Host Device Device Descriptor Type 0, expectedReturnCode =<br>E ACCESS READ ONLY).<br>_ _ _<br> Execute GlPro SendTunnellingFeatureSet(featureId = Bus<br>_<br>connection status, value = 0).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Bus connection status, expectedReturnCode = E ACCESS -<br>_ _<br>READ ONLY).<br>_<br> Execute GlPro SendTunnellingFeatureSet(featureId = KNX<br>_<br>Manufacturer Code, value = 0).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>KNX Manufacturer Code, expectedReturnCode = E ACCESS -<br>_ _<br>READ ONLY).<br>_<br> Execute GlPro SendTunnellingFeatureSet(featureId = Active EMI<br>_<br>type, value = 0).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Active EMI type, expectedReturnCode = E ACCESS READ -<br>_ _ _<br>ONLY or E ADDRESS VOID). (E ADDRESS VOID is allowed<br>_ _ _ _<br>because this is an optional feature.).<br> Execute GlPro SendTunnellingFeatureSet(featureId = Max.<br>_<br>APDU Length, value = 0).<br> APDULength = GlPro ReceiveTunnellingFeature-<br>_<br>Response(featureId = Max. APDU Length, expectedReturnCode =<br>E ACCESS READ ONLY).<br>_ _ _<br> Execute GlPro SendTunnellingFeatureSet(featureId = 0 (= Invalid<br>_<br>Feature Identifier), value = 0).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId = 0,<br>_<br>expectedReturnCode = E ADDRESS VOID).<br>_ _|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 266 f 376


-----

|Col1| Execute GlPro SendTunnellingFeatureSet(featureId = Individual<br>_<br>Address, value = 0, frameError = (FeatureValueLength = Feature-<br>ValueLength - 1)) (Try to write a one byte long Individual<br>Address.).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Individual Address, expectedReturnCode = E DATA TYPE -<br>_ _ _<br>CONFLICT).<br> Execute GlPro SendTunnellingFeatureSet(featureId = Interface<br>_<br>Feature Info Service Enable, value = 0, frameError = (Feature-<br>ValueLength = FeatureValueLength + 1)) (Try to write the value<br>0x0000 to Interface Feature Info Service Enable).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Interface Feature Info Service Enable, expectedReturnCode = E -<br>_<br>DATA TYPE CONFLICT).<br>_ _<br> Execute GlPro SendTunnellingFeatureSet(featureId = Interface<br>_<br>Feature Info Service Enable, value = 2) (Try to write an invalid<br>value to Interface Feature Info Service Enable.).<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Interface Feature Info Service Enable, expectedReturnCode = E -<br>_<br>DATA VOID or E DATA MAX).<br>_ _ _|
|---|---|
|**Cleanup**| <br>Execute GlPro_CloseTunnellingConnection().|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.2.8.1 Overview<br>of the Interface Features, 2.2.2.2.3 TUNNELLING_FEATURE_SET|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.7.3 TunnellingFeatureSet of Interface Individual Address (security mode disabled)

**Test ID** 30403

**Description** Set a new Interface Individual Address (Tunnelling Address) via
TunnellingFeatureSet when the Security Mode is disabled. (Using UDP.)

**Expectation** The Interface Individual Address is updated.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 267 f 376

|Test ID|30403|
|---|---|
|**Description**|Set a new Interface Individual Address (Tunnelling Address) via<br>TunnellingFeatureSet when the Security Mode is disabled. (Using UDP.)|
|**Expectation**|The Interface Individual Address is updated.|


-----

|Setup| Execute additionalIndividualAddresses = PropSetup Get-<br>_<br>AdditionalIndividualAddresses().|
|---|---|
|**Test procedure**| <br>Execute GlPro_EstablishTunnellingConnection().<br> <br>tunnellingAddress = GlPro_GetOneFreeAdditionalIndividual-<br>Address(additionalIndividualAddresses).<br> <br>Execute GlPro_SendTunnellingFeatureSet(featureId = Interface<br>Feature Info Service Enable, expectedValue = enable).<br> <br>Execute GlPro_ReceiveTunnellingFeatureResponse(featureId =<br>Interface Feature Info Service Enable, expectedValue = enable,<br>expectedValueLength = 1).<br> <br>Execute GlPro_SendTunnellingFeatureSet(featureId = Interface<br>Individual Address, value = tunnellingAddress).<br> <br>Receive the following frames via the tunnelling connection via<br>UDP. Wait until all of these frames have been received, in any<br>order. Timeout: TimeoutTunnellingFeatureResponse.<br>`o` On receiving a TunnellingFeatureResponse:<br> <br>Verify that featureId = Interface Individual Address,<br>value = tunnellingAddress, valueLength = 2.<br> <br>Send a TunnellingAck to the BDUT.<br>`o` On receiving a TunnellingFeatureInfo:<br> <br>Verify that featureId = Interface Individual Address,<br>value = tunnellingAddress, valueLength = 2.<br> <br>Send a TunnellingAck to the BDUT.<br>`o` On timeout: Abort test and return TestFailed.<br> <br>Execute GlPro_CloseTunnellingConnection().<br> <br>Execute GlPro_EstablishTunnellingConnection().<br> <br>Execute GlPro_SendTunnellingFeatureSet(featureId = Interface<br>Individual Address, value = IndividualAddress).<br> <br>Execute GlPro_ReceiveTunnellingFeatureResponse(featureId =<br>Interface Individual Address, expectedValue = none, expected-<br>ReturnCode = E_DATA_VOID).|
|**Cleanup**| <br>Execute GlPro_CloseTunnellingConnection().<br> <br>Execute PropSetup_SetIndividualAddresses(knxIndividual-<br>Address = IndividualAddress, additionalIndividualAddresses =<br>additionalIndividualAddresses).|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27),<br>2.2.2.8.7 Interface Feature 06: Interface Individual Address|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 268 f 376


-----

|Duration|Col2|
|---|---|
|**Mask version**||
|**Open points**||


##### 2.7.4 TunnellingFeatureSet of Interface Individual Address (security mode enabled)

**Test ID** 30404

**Description** Try to set a new Interface Individual Address (Tunnelling Address) via
TunnellingFeatureSet when the Security Mode is enabled. (Using UDP.)

**Expectation** The Interface Individual Address is not updated.

**Setup** - Execute additionalIndividualAddresses = PropSetup_GetAdditionalIndividualAddresses().

             - Execute PropSetup_SecurityMode(enable).

**Test procedure** - Execute tunnellingAddress = GlPro_GetOneFreeAdditionalIndividualAddress(additionalIndividualAddresses).

             - Execute GlPro_EstablishTunnellingConnection().

             - Execute GlPro_SendTunnellingFeatureSet(featureId = Interface
Individual Address, value = tunnellingAddress).

             - Execute GlPro_ReceiveTunnellingFeatureResponse(featureId =
Interface Individual Address, expectedValue = none, expectedReturnCode = E_ACCESS_READ_ONLY).

**Cleanup** - Execute GlPro_CloseTunnellingConnection().

             - Execute PropSetup_SecurityMode(securityMode = disable).

**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27),
**reference** 2.2.2.8.7 Interface Feature 06: Interface Individual Address

**Duration**

**Mask version**

**Open points**

##### 2.7.5 Tunnelling feature: Bus connection status

**Test ID** 30405

©C i h 1998 2018 KNX A i i V i 1 1 AS P 269 f 376

|Test ID|30404|
|---|---|
|**Description**|Try to set a new Interface Individual Address (Tunnelling Address) via<br>TunnellingFeatureSet when the Security Mode is enabled. (Using UDP.)|
|**Expectation**|The Interface Individual Address is not updated.|
|**Setup**| <br>Execute additionalIndividualAddresses = PropSetup_Get-<br>AdditionalIndividualAddresses().<br> <br>Execute PropSetup_SecurityMode(enable).|
|**Test procedure**| <br>Execute tunnellingAddress = GlPro_GetOneFreeAdditional-<br>IndividualAddress(additionalIndividualAddresses).<br> <br>Execute GlPro_EstablishTunnellingConnection().<br> <br>Execute GlPro_SendTunnellingFeatureSet(featureId = Interface<br>Individual Address, value = tunnellingAddress).<br> <br>Execute GlPro_ReceiveTunnellingFeatureResponse(featureId =<br>Interface Individual Address, expectedValue = none, expected-<br>ReturnCode = E_ACCESS_READ_ONLY).|
|**Cleanup**| <br>Execute GlPro_CloseTunnellingConnection().<br> <br>Execute PropSetup_SecurityMode(securityMode = disable).|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27),<br>2.2.2.8.7 Interface Feature 06: Interface Individual Address|
|**Duration**||
|**Mask version**||
|**Open points**||

|Test ID|30405|
|---|---|


-----

|Description|Check the Bus Connection Status feature for both TunnellingFeatureGet<br>and TunnellingFeatureInfo. Also check enabling and disabling the<br>TunnellingFeatureInfo service.<br>The following procedure is used:<br> Create a tunnelling connection while TP1 is physically connected.<br> Disable the Interface Feature Info Service.<br> Check that no TunnellingFeatureInfo frames are sent when TP1 is<br>physically disconnected and then reconnected. Verify that<br>TunnellingFeatureGet(BusConnectionStatus) is consistent with the<br>TP1 connection status. Allow TP1 powered devices to get<br>completely or partially unresponsive.<br> Enable the Interface Feature Info Service.<br> Check that TunnellingFeatureInfo frames are send when TP1 is<br>physically disconnected and then reconnected. Verify that<br>TunnellingFeatureGet(BusConnectionStatus) is consistent with the<br>TP1 connection status. Allow TP1 powered devices to get<br>completely or partially unresponsive.<br>The test procedure is quite complex since a wide range of alternative<br>behaviors are allowed:<br>1. A TunnellingFeatureInfo(BusConnectionStatus) is sent if this info<br>service is enabled. Optionally the device may send a DisconnectRequest<br>after this or not (implementation defined). Optionally the device may<br>become completely unresponsive after this or not (implementation<br>defined), or:<br>2. A DisconnectRequest is sent. Optionally the device may become<br>completely unresponsive after this (implementation defined), or:<br>3. The device becomes completely unresponsive.<br>The BDUT may implement any of these alternatives.|
|---|---|
|**Expectation**|Reported bus connection status (through TunnellingFeatureGet) is<br>consistent with the physical TP1 connection status. No Tunnelling-<br>FeatureInfo frames are sent when Interface Feature Info Service is<br>disabled, and these are sent with a correct value when it is enabled.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Execute LoPro_TestBusConnectionStatus(enableInfo = false).<br> <br>Execute LoPro_TestBusConnectionStatus(enableInfo = true).|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 270 f 376


-----

|Cleanup| If TP1 connection is disconnected:<br>o Execute GlPro SwitchOnOffTp(on = true).<br>_<br>o Execute GlPro WaitUntilRestartComplete().<br>_|
|---|---|
|**Specification**<br>**reference**|KSG643-21.02 KNXnet-IP Tunnelling v2 (2017.09.04) 2.2.2.8.4 Interface<br>feature 03: Bus connection status|
|**Duration**||
|**Mask version**||
|**Open points**|Todo: This test makes assumption A7.|


Local Procedure:

**Procedure** LoPro_TestBusConnectionStatus(enableInfo)
**name**

**Description** Test the Bus Connection Status feature while TP1 is physically
connected/disconnected and check the TunnellingFeatureInfo telegrams
and their values. Test through TunnellingFeatureInfo (which must be
suppressed in the BDUT when enableInfo=false) and TunnellingFeatureGet.

Sketch:

           - Open tunnelling connection.

           - Set Interface Feature Info Service Enable = enableInfo.

           - Disconnect TP1.

           - Allow device to become unresponsive (TP1 powered device). In this
case re-connect TP1 and return from this local procedure without
error.

           - Check TunnellingFeatureInfo and TunnellingFeatureGet results for
consistency, honoring enableInfo.

           - Re-connect TP1.

           - Check TunnellingFeatureInfo and TunnellingFeatureGet results for
consistency, honoring enableInfo.

           - Close tunnelling connection.

**Parameter** - enableInfo: Set InterfaceFeature Info Service to enableInfo.
**description**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 271 f 376

|Procedure<br>name|LoPro TestBusConnectionStatus(enableInfo)<br>_|
|---|---|
|**Description**|Test the Bus Connection Status feature while TP1 is physically<br>connected/disconnected and check the TunnellingFeatureInfo telegrams<br>and their values. Test through TunnellingFeatureInfo (which must be<br>suppressed in the BDUT when enableInfo=false) and TunnellingFeature-<br>Get.<br>Sketch:<br> <br>Open tunnelling connection.<br> <br>Set Interface Feature Info Service Enable = enableInfo.<br> <br>Disconnect TP1.<br> <br>Allow device to become unresponsive (TP1 powered device). In this<br>case re-connect TP1 and return from this local procedure without<br>error.<br> <br>Check TunnellingFeatureInfo and TunnellingFeatureGet results for<br>consistency, honoring enableInfo.<br> <br>Re-connect TP1.<br> <br>Check TunnellingFeatureInfo and TunnellingFeatureGet results for<br>consistency, honoring enableInfo.<br> <br>Close tunnelling connection.|
|**Parameter**<br>**description**| <br>enableInfo: Set InterfaceFeature Info Service to enableInfo.|


-----

|Procedure| Explanation: TP1 is always connected here.<br> Execute GlPro EstablishTunnellingConnection().<br>_<br> Execute GlPro SetTunnellingFeature(featureId = Interface Feature<br>_<br>Info Service Enable, value = enableInfo).<br> Execute GlPro SwitchOnOffTp(on = false, wait = false).<br>_<br> Set gotError = false.<br> Set gotInfo0Ok = false.<br> Set gotInfo1Ok = false.<br> Set isClosed = false.<br> Wait for max(WaitTimeAfterPowerDown, WaitTimeAfterRestart) +<br>TimeoutTunnellingRequest and receive frames (no timeout, keep<br>receiving during this duration):<br>o On TunnellingFeatureInfo:<br> If enableInfo == false: Set gotError = true.<br>(Explanation: Info service is disabled, but we received<br>an Info. -> Error.)<br> If featureId == Bus Connection Status:<br> If value == true: Set gotError = true.<br>(Explanation: Info contained wrong value. -><br>Error. (We do not care whether the service was<br>set to enabled or disabled here.)<br> Else: Set gotInfo0 = true. (Explanation:<br>Remember that we received an Info with a valid<br>value. We do not care whether the service was<br>set to enabled or disabled here.)<br>o On DisconnectRequest: Respond appropriately. Set isClosed<br>= true.<br> Explanation: The device decided to close the tunnelling<br>connection. This is ok.<br>o On other tunnelling frame: Ok. Send ACK for frame.<br> Explanation: Verify device is still responsive. If not, this is ok (TP1<br>powered device).<br> Send a DescriptionRequest and wait for a DescriptionResponse.<br>Timeout: TimeoutDescriptionResponse.<br>o On timeout:<br> Explanation: The device has become unresponsive.<br>Switch the power back on and wait until the device<br>becomes responsive again. The device was power-<br>cycled.<br> Execute GlPro SwitchOnOffTp(on = true, wait = true).<br>_<br> Execute GlPro WaitUntilRestartComplete().<br>_<br> If gotError:<br> Abort test and return TestFailed.<br> Return without error.<br> Explanation: If we get here we know the BDUT is not TP1 powered.<br>It must from now on respond appropriately.|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 272 f 376


-----

|Col1| If isClosed:<br>o Explanation: The BDUT closed the tunneling connection but is<br>still responsive. This is a valid behavior.<br>o Execute GlPro SwitchOnOffTp(on = true, wait = true).<br>_<br>o Explanation: GlPro WaitUntilRestartComplete() is not<br>_<br>necessary here because the BDUT was not power-cycled<br>since it is still responsive, and so we do not need to wait until<br>the device finished restarting.<br>o If gotError:<br> Abort test and return TestFailed.<br>o Return without error.<br> Execute GlPro GetTunnellingFeature(featureId = Bus connection<br>_<br>status, expectedValue = 1). (Set gotError = true on failure and<br>continue.)<br> Execute GlPro SwitchOnOffTp(on = true, wait = false).<br>_<br> Wait for max(WaitTimeAfterPowerDown, WaitTimeAfterRestart) +<br>TimeoutTunnellingRequest and receive frames (no timeout, keep<br>receiving during this duration):<br>o On TunnellingFeatureInfo:<br> If enableInfo == false: Set gotError = true.<br>(Explanation: Info service is disabled, but we received<br>an Info. -> Error.)<br> If featureId == Bus Connection Status:<br> If value == false: Set gotError = true.<br>(Explanation: Info contained wrong value. -><br>Error. (We do not care whether the service was<br>set to enabled or disabled here.)<br> Else: Set gotInfo1 = true. (Explanation:<br>Remember that we received an Info with a valid<br>value. We do not care whether the service was<br>set to enabled or disabled here.)<br>o On DisconnectRequest:<br> Set gotError = true. (Explanation: The device decided<br>to close the tunnelling connection on re-connecting<br>TP1. This is unexpected and is an error, because<br>tunnelling connections must not break spontaneously<br>while TP1 is connected, which means they may not<br>break when TP1 is re-connected.)<br> Set isClosed = true.<br>o On other tunnelling frame: Ok. Send ACK for frame.<br> If not isClosed:<br>o Execute GlPro CloseTunnellingConnection().<br>_<br> If enableInfo:<br>o If (not gotInfo0Ok) or (not gotInfo1Ok):<br> Abort test and return TestFailed. (Explanation: We<br>enabled the Info service and the BDUT is nit TP1|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 273 f 376


-----

|Col1|powered, but we did not receive the Info for both<br>transitions. -> Error.)<br> If gotError:<br>o Abort test and return TestFailed.|
|---|---|
|**Return**|- <br>When this procedure returns TP1 is connected and the device is<br>responsive again, so other tests can be executed.|
|**Duration**||
|**Open points**||


##### 2.7.6 No Tunnelling Acks with TCP

**Test ID** 30406

**Description** Use some Tunnelling Feature services within a TCP connection. Do not
send ACKs.

**Expectation** No Tunnelling Acks shall be sent or expected by the BDUT.

**Setup** - Execute additionalIndividualAddresses = PropSetup_GetAdditionalIndividualAddresses().

©C i h 1998 2018 KNX A i i V i 1 1 AS P 274 f 376

|Test ID|30406|
|---|---|
|**Description**|Use some Tunnelling Feature services within a TCP connection. Do not<br>send ACKs.|
|**Expectation**|No Tunnelling Acks shall be sent or expected by the BDUT.|
|**Setup**| <br>Execute additionalIndividualAddresses = PropSetup_Get-<br>AdditionalIndividualAddresses().|


-----

|Test procedure| Execute newTunnellingAddress = GlPro GetOneFreeAdditional-<br>_<br>IndividualAddress(additionalIndividualAddresses).<br> Execute connectionAddress = GlPro EstablishTunnelling-<br>_<br>Connection(tcp = true).<br> Execute GlPro SendTunnellingFeatureGet(featureId = Interface<br>_<br>Feature Info Service Enable)<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Interface Feature Info Service Enable, expectedValue = disable,<br>expectedValueLength = 1, checkTcpNoAck = true)<br> Execute GlPro SendTunnellingFeatureSet(featureId = Interface<br>_<br>Feature Info Service Enable, value = enable)<br> Execute GlPro ReceiveTunnellingFeatureResponse(featureId =<br>_<br>Interface Feature Info Service Enable, expectedValue = enable,<br>expectedValueLength = 1, checkTcpNoAck = true)<br> Execute GlPro SendTunnellingFeatureSet(featureId = Individual<br>_<br>Address, value = newTunnellingAddress)<br> Receive the following frames via the tunnelling connection via<br>TCP. Wait unconditionally for max(TimeoutTunnellingFeature-<br>Response, TimeoutTunnellingAck + NetworkLateny). (No<br>timeout.)<br>o On receiving a TunnellingFeatureResponse:<br> Verify that featureId = Interface Individual Address,<br>value = newTunnellingAddress, valueLength = 2.<br>o On receiving a TunnellingFeatureInfo:<br> Verify that featureId = Interface Individual Address,<br>value = newTunnellingAddress, valueLength = 2.<br> Verify that in the previous receive duration exactly one Tunnelling-<br>FeatureResponse and exactly one TunnellingFeatureInfo was<br>received.<br>o Explanation: If we receive more than one this means that<br>the BDUT was erroneously repeating a response because<br>of an alleged missing ACK.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CloseTunnellingConnection().<br> <br>Execute PropSetup_SetIndividualAddresses(knxIndividual-<br>Address = IndividualAddress, additionalIndividualAddresses =<br>additionalIndividualAddresses)|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.2.2.1<br>Common / Note 6|
|**Duration**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 275 f 376


-----

|Mask version|Col2|
|---|---|
|**Open points**||


##### 2.7.7 (removed)

 2.7.8 TunnellingFeatureGet - Connection Header handling

**Test ID** 30408

**Description** Send TunnellingFeatureGet frames with Connection Header errors.

**Expectation** Invalid frames shall be dropped by the BDUT.

**Setup** 
**Test procedure** - Execute LoPro_TunnellingFeatureGetFrameFormatSubtest(frameError = (ChannelId = ChannelId +1)).

              - Execute LoPro_TunnellingFeatureGetFrameFormatSubtest(frameError = (SequenceCounter = SequenceCounter 2), incrementSequenceCounter = 2).

              - Execute LoPro_TunnellingFeatureGetFrameFormatSubtest(frameError = (SequenceCounter = SequenceCounter 1), incrementSequenceCounter = 1).

**Cleanup** - Execute GlPro_CloseTunnellingConnection() if necessary (on
abort).

**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27)
**reference** 2.2.2.4 TUNNELLING_FEATURE_GET

03_08_04 Tunnelling v01.05.03 AS, 2.6 Frame confirmation

**Duration**

**Mask version**

**Open points**

Local Procedure:

**Procedure** LoPro_TunnellingFeatureGetFrameFormatSubtest(frameError,
**name** incrementSequenceCounter = 0)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 276 f 376

|Test ID|30408|
|---|---|
|**Description**|Send TunnellingFeatureGet frames with Connection Header errors.|
|**Expectation**|Invalid frames shall be dropped by the BDUT.|
|**Setup**|-|
|**Test procedure**| <br>Execute LoPro_TunnellingFeatureGetFrameFormat-<br>Subtest(frameError = (ChannelId = ChannelId +1)).<br> <br>Execute LoPro_TunnellingFeatureGetFrameFormat-<br>Subtest(frameError = (SequenceCounter = SequenceCounter -<br>2), incrementSequenceCounter = 2).<br> <br>Execute LoPro_TunnellingFeatureGetFrameFormat-<br>Subtest(frameError = (SequenceCounter = SequenceCounter -<br>1), incrementSequenceCounter = 1).|
|**Cleanup**| <br>Execute GlPro_CloseTunnellingConnection() if necessary (on<br>abort).|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27)<br>2.2.2.4 TUNNELLING_FEATURE_GET<br>03_08_04 Tunnelling v01.05.03 AS, 2.6 Frame confirmation|
|**Duration**||
|**Mask version**||
|**Open points**||

|Procedure<br>name|LoPro TunnellingFeatureGetFrameFormatSubtest(frameError,<br>_<br>incrementSequenceCounter = 0)|
|---|---|


-----

|Description|Open a tunnelling connection, incease the sequence counter, send a<br>TunnellingFeatureGet frame with errors in the Connection Header.|
|---|---|
|**Parameter**<br>**description**| <br>frameError: Error of the frame<br> <br>incrementSequenceCounter: Increment the connections sequence<br>counter by incrementSequenceCounter, before sending the<br>erroneous frame.|
|**Procedure**| <br>Execute GlPro_EstablishTunnellingConnection().<br> <br>for i = 1 to i = incrementSequenceCounter:<br>`o` Execute GlPro_SendTunnellingFeatureGet(featureId =<br>Interface Feature Info Service Enable).<br>`o` Execute GlPro_ReceiveTunnellingFeature-<br>Response(featureId = Interface Feature Info Service<br>Enable, expectedValue = none).<br> <br>Execute GlPro_SendTunnellingFeatureGet(featureId = Interface<br>Feature Info Service Enable, frameError).<br> <br>Execute GlPro_ReceiveNoTunnellingConnectionFrame(timeout =<br>TimeoutTunnellingFeatureResponse + NetworkLatency).<br> <br>Execute GlPro_CloseTunnellingConnection().|
|**Return**||
|**Duration**||
|**Open points**||


##### 2.7.9 TunnellingFeatureSet - Connection Header handling

**Test ID** 30409

**Description** Send TunnellingFeatureSet frames with Connection Header errors.

**Expectation** Invalid frames shall be dropped by the BDUT.

**Setup**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 277 f 376

|Test ID|30409|
|---|---|
|**Description**|Send TunnellingFeatureSet frames with Connection Header errors.|
|**Expectation**|Invalid frames shall be dropped by the BDUT.|
|**Setup**||


-----

|Test procedure| Execute LoPro TunnellingFeatureSetFrameFormat-<br>_<br>Subtest(frameError = (ChannelId = ChannelId +1)).<br> Execute LoPro TunnellingFeatureSetFrameFormat-<br>_<br>Subtest(frameError = (SequenceCounter = SequenceCounter -<br>2), incrementSequenceCounter = 2).<br> Execute LoPro TunnellingFeatureSetFrameFormat-<br>_<br>Subtest(frameError = (SequenceCounter = SequenceCounter -<br>1), incrementSequenceCounter = 1).<br> Execute LoPro TunnellingFeatureSetFrameFormat-<br>_<br>Subtest(frameError = (SequenceCounter = SequenceCounter +<br>1)).|
|---|---|
|**Cleanup**| <br>Execute GlPro_CloseTunnellingConnection() if necessary (on<br>abort).|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27)<br>2.2.2.6 TUNNELLING_FEATURE_SET<br>03_08_04 Tunnelling v01.05.03 AS, 2.6 Frame confirmation|
|**Duration**||
|**Mask version**||
|**Open points**||


Local Procedure:

**Procedure** LoPro_TunnellingFeatureSetFrameFormatSubtest(frameError,
**name** incrementSequenceCounter = 0)

**Description** Open a tunnelling connection, incease the sequence counter, send a
TunnellingFeatureSet frame with errors in the Connection Header

**Parameter** - frameError: Error of the frame
**description** - incrementSequenceCounter: Increment the connections sequence
counter by incrementSequenceCounter, before sending the
erroneous frame.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 278 f 376

|Procedure<br>name|LoPro TunnellingFeatureSetFrameFormatSubtest(frameError,<br>_<br>incrementSequenceCounter = 0)|
|---|---|
|**Description**|Open a tunnelling connection, incease the sequence counter, send a<br>TunnellingFeatureSet frame with errors in the Connection Header|
|**Parameter**<br>**description**| <br>frameError: Error of the frame<br> <br>incrementSequenceCounter: Increment the connections sequence<br>counter by incrementSequenceCounter, before sending the<br>erroneous frame.|


-----

|Procedure| Execute GlPro EstablishTunnellingConnection().<br>_<br> for i = 1 to i = incrementSequenceCounter:<br>o Execute GlPro SendTunnellingFeatureGet(featureId =<br>_<br>Interface Feature Info Service Enable).<br>o Execute GlPro ReceiveTunnellingFeature-<br>_<br>Response(featureId = Interface Feature Info Service<br>Enable, expectedValue = none).<br> Execute GlPro SendTunnellingFeatureSet(featureId = Interface<br>_<br>Feature Info Service Enable, frameError).<br> Execute GlPro ReceiveNoTunnellingConnectionFrame(timeout =<br>_<br>TimeoutTunnellingFeatureResponse + NetworkLatency).<br> Execute GlPro CloseTunnellingConnection().<br>_|
|---|---|
|**Return**||
|**Duration**||
|**Open points**||


##### 2.7.10 Tunnelling ConnectRequest - E_CONNECTION_OPTION

**Test ID** 30410

**Description** Try to establish a RAW tunnelling connection when the Security Mode
is enabled.

**Expectation** Receive a ConnectResponse with E_CONNECTION_OPTION in the
status code octet.

E_TUNNELLING_LAYER is also ok, for the case that the device
doesn't support cEMI Raw Mode Tunnelling.

**Setup** - PropSetup_SecurityMode(securityMode = enable).

**Test procedure** - Execute GlPro_EstablishTunnellingConnection(expectedError =
(E_CONNECTION_OPTION or E_TUNNELLING_LAYER),
knxLayer = Raw)

**Cleanup** - Execute GlPro_CloseTunnellingConnection() if necessary (on
abort).

              - PropSetup_SecurityMode(securityMode = disable).

**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27), 2.2.1.5.1 Basic
**reference** flowchart

©C i h 1998 2018 KNX A i i V i 1 1 AS P 279 f 376

|Test ID|30410|
|---|---|
|**Description**|Try to establish a RAW tunnelling connection when the Security Mode<br>is enabled.|
|**Expectation**|Receive a ConnectResponse with E_CONNECTION_OPTION in the<br>status code octet.<br>E_TUNNELLING_LAYER is also ok, for the case that the device<br>doesn't support cEMI Raw Mode Tunnelling.|
|**Setup**| <br>PropSetup_SecurityMode(securityMode = enable).|
|**Test procedure**| <br>Execute GlPro_EstablishTunnellingConnection(expectedError =<br>(E_CONNECTION_OPTION or E_TUNNELLING_LAYER),<br>knxLayer = Raw)|
|**Cleanup**| <br>Execute GlPro_CloseTunnellingConnection() if necessary (on<br>abort).<br> <br>PropSetup_SecurityMode(securityMode = disable).|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27), 2.2.1.5.1 Basic<br>flowchart|


-----

|Duration|Col2|
|---|---|
|**Mask version**||
|**Open points**||


##### 2.7.11 Tunnelling ConnectRequest - E_NO_MORE_CONNECTIONS

**Test ID** 30411

**Description** Provoke E_NO_MORE_CONNECTIONS errors.

The following cases are tested:

             - Management user (1) can create a tunnelling connection using
basic CRI.

             - Tunnelling user which is not listed in PID_TUNNELLING_USERS
cannot create a tunnelling connection using basic CRI (E_NO_MORE_CONNECTIONS).

             - Tunnelling user which is listed in PID_TUNNELLING_USERS
cannot create a tunnelling connection using basic CRI (E_NO_MORE_CONNECTIONS) when no more free tunnelling address is
available for this user id.

This test is only executed for devices which support IP security.

**Expectation** Receive a ConnectResponse with E_NO_MORE_CONNECTIONS in
the status code octet.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 280 f 376

|Test ID|30411|
|---|---|
|**Description**|Provoke E_NO_MORE_CONNECTIONS errors.<br>The following cases are tested:<br> <br>Management user (1) can create a tunnelling connection using<br>basic CRI.<br> <br>Tunnelling user which is not listed in PID_TUNNELLING_USERS<br>cannot create a tunnelling connection using basic CRI (E_NO_-<br>MORE_CONNECTIONS).<br> <br>Tunnelling user which is listed in PID_TUNNELLING_USERS<br>cannot create a tunnelling connection using basic CRI (E_NO_-<br>MORE_CONNECTIONS) when no more free tunnelling address is<br>available for this user id.<br>This test is only executed for devices which support IP security.|
|**Expectation**|Receive a ConnectResponse with E_NO_MORE_CONNECTIONS in<br>the status code octet.|
|**Setup**|-|


-----

|Test procedure| Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = []).<br> Execute GlPro EstablishTunnellingConnection(userId = 1).<br>_<br> Execute GlPro CloseTunnellingConnection().<br>_<br> If TunnellingUserA == 0:<br>o Abort test and return TestPassed. Explanation: E NO -<br>_ _<br>MORE CONNECTIONS can trivially not be provoked<br>_<br>which is ok when not supporting any user id.<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, expectedError = E NO MORE -<br>_ _ _<br>CONNECTIONS).<br> Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = [(TunnellingUserA, 1)]).<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA). (Connection T.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, expectedError = E NO MORE -<br>_ _ _<br>CONNECTIONS). (Connection T.)<br> Execute GlPro CloseTunnellingConnection(). (Connection T.)<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupTunnelling().|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.3.1.7.1 Abstract<br>resource definition<br>KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic<br>flowchart|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.7.12 Tunnelling ConnectRequest - E_NO_MORE_UNIQUE_- CONNECTIONS

**Test ID** 30412

©C i h 1998 2018 KNX A i i V i 1 1 AS P 281 f 376

|Test ID|30412|
|---|---|


-----

|Description|Provoke E NO MORE UNIQUE CONNECTIONS using non-secure<br>_ _ _ _<br>tunnelling connections, using secure tunnelling connections (if available)<br>using the device management user and using a tunnelling user (if<br>available).<br>Sketch:<br> Set all entries in PID ADDITIONAL INDIVIDUAL ADDRESSES<br>_ _ _<br>to the individual address of the BDUT.<br> Try to open two concurrent non-secure tunnelling connections<br>using a basic CRI. The second try should fail with E NO MORE -<br>_ _ _<br>UNIQUE CONNECTIONS.<br>_<br> If IP security is supported:<br>o Try to open two concurrent secure tunnelling connections<br>using the device management user and a basic CRI. The<br>second try should fail with E NO MORE UNIQUE -<br>_ _ _ _<br>CONNECTIONS.<br>o If at least one tunnelling user is supported:<br> Try to open two concurrent secure tunnelling<br>connections using a tunnelling user and a basic CRI.<br>The second try should fail with E NO MORE -<br>_ _ _<br>UNIQUE CONNECTIONS.<br>_|
|---|---|
|**Expectation**|In all three scenarios the second try to open a tunnelling connection fails<br>with E_NO_MORE_UNIQUE_CONNECTIONS.|
|**Setup**|<br> <br>Execute oldAdditionalIndividualAddresses = PropSetup_Get-<br>AdditionalIndividualAddresses().|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 282 f 376


-----

|Test<br>procedure| Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = false,<br>_<br>tunnellingUsers = [], uniqueIAs = false).<br> If numTunnellingSlots < 2:<br>o Abort test and return TestPassed. Explanation: Devices<br>which only support one tunnelling slot cannot emit E NO -<br>_ _<br>MORE UNIQUE CONNECTIONS because at least two<br>_ _<br>concurrent connections are needed for this error to occur.<br> Execute GlPro EstablishTunnellingConnection().<br>_<br> Execute GlPro EstablishTunnellingConnection(expectedError =<br>_<br>E NO MORE UNIQUE CONNECTIONS).<br>_ _ _ _<br> Execute GlPro CloseTunnellingConnection().<br>_<br> If ipSecurityIsSupported == false:<br>o Abort test and return TestPassed.<br> Execute GlPro EstablishTunnellingConnection(userId = 1).<br>_<br> Execute GlPro EstablishTunnellingConnection(userId = 1,<br>_<br>expectedError = E NO MORE UNIQUE CONNECTIONS).<br>_ _ _ _<br> Execute GlPro CloseTunnellingConnection().<br>_<br> If TunnellingUserA == 0:<br>o Abort test and return TestPassed.<br> Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = [(TunnellingUserA, 1), (TunnellingUserA, 2)],<br>uniqueIAs = false).<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, expectedError = E NO ERROR).<br>_ _<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, expectedError = E NO MORE UNIQUE -<br>_ _ _ _<br>CONNECTIONS).<br> Execute GlPro CloseTunnellingConnection().<br>_|
|---|---|
|**Cleanup**| <br>Execute PropSetup_SetIndividualAddresses(individualAddress =<br>IndividualAddress, additionalIndividualAddresses = oldAdditional-<br>IndividualAddresses).<br> <br>Execute GlPro_CleanupTunnelling().|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic<br>flowchart<br>03_08_04 Tunnelling v01.05.03 AS, 3.3 Handling of E_NO_MORE_-<br>UNIQUE_CONNECTIONS by the KNXnet/IP Tunnelling Client|
|**Duration**||
|**Mask version**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 283 f 376


-----

|Open points|Col2|
|---|---|


##### 2.7.13 Tunnelling ConnectRequest - E_NO_TUNNELLING_ADDRESSES

**Test ID** 30413

**Description** Try to establish a tunnelling connection with an address, which is not the
BDUTs individual address and which is not in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES. Such an address is also not in PID_TUNNELLING_ADDRESSES which means it is not a Tunnelling
Address.

**Expectation** Receive a ConnectResponse with E_NO_TUNNELLING_ADDRESS in
the status code octet.

**Setup** - Execute additionalIndividualAddresses = PropSetup_GetAdditionalIndividualAddresses().

**Test** - Execute newAIA = GlPro_GetOneFreeAdditionalIndividual**procedure** Address(additionalIndividualAddresses).

             - Execute GlPro_EstablishTunnellingConnection(userId = none,
tunnellingAddress = newAIA, expectedError = E_NO_TUNNELLING_ADDRESS).

**Cleanup** - Execute GlPro_CloseTunnellingConnection() if necessary (on
abort).

**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic
**reference** flowchart

**Duration**

**Mask version**

**Open points**

##### 2.7.14 Tunnelling ConnectRequest - E_AUTHORISATION_ERROR

**Test ID** 30414

©C i h 1998 2018 KNX A i i V i 1 1 AS P 284 f 376

|Test ID|30413|
|---|---|
|**Description**|Try to establish a tunnelling connection with an address, which is not the<br>BDUTs individual address and which is not in PID_ADDITIONAL_-<br>INDIVIDUAL_ADDRESSES. Such an address is also not in PID_-<br>TUNNELLING_ADDRESSES which means it is not a Tunnelling<br>Address.|
|**Expectation**|Receive a ConnectResponse with E_NO_TUNNELLING_ADDRESS in<br>the status code octet.|
|**Setup**| <br>Execute additionalIndividualAddresses = PropSetup_Get-<br>AdditionalIndividualAddresses().|
|**Test**<br>**procedure**| <br>Execute newAIA = GlPro_GetOneFreeAdditionalIndividual-<br>Address(additionalIndividualAddresses).<br> <br>Execute GlPro_EstablishTunnellingConnection(userId = none,<br>tunnellingAddress = newAIA, expectedError = E_NO_-<br>TUNNELLING_ADDRESS).|
|**Cleanup**| <br>Execute GlPro_CloseTunnellingConnection() if necessary (on<br>abort).|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic<br>flowchart|
|**Duration**||
|**Mask version**||
|**Open points**||

|Test ID|30414|
|---|---|


-----

|Description|Check error code E AUTHORISATION ERROR in response to creating<br>_ _<br>secure tunnelling connections which are not authorised by PID -<br>_<br>TUNNELLING USRES.<br>_<br>The following cases are tested:<br> User id 1 (management user) can create tunnelling connection<br>even if PID TUNNELLING USERS is empty.<br>_ _<br> Tunnelling user id cannot create tunnelling connection if PID -<br>_<br>TUNNELLING USERS is empty (E AUTHORISATION ERROR).<br>_ _ _<br> User id 1 (management user) can create tunnelling connection<br>even if PID TUNNELLING USERS restricts the requested<br>_ _<br>tunnelling address to a specific user.<br> Tunnelling user id can create tunnelling connection if authorized<br>by PID TUNNELLING USERS for the request address.<br>_ _<br> Tunnelling user id cannot create tunnelling connection if PID -<br>_<br>TUNNELLING USERS only authorizes the user for a different<br>_<br>tunnelling address.<br> When the device supports at least two users and at least two<br>tunnelling slots:<br>o Allow all combinations of users/slots except for one<br>combination X.<br>o Verify that no tunnelling connection can be established for<br>connection X.<br>o Verify that a tunnelling connection can be established for<br>the other 3 combinations.<br>This test must only be run for devices supporting IP security.|
|---|---|
|**Expectation**|Creating tunnelling connections for user/tunnelling address pairs which<br>are not authorized by PID_TUNNELLING_USERS results in E_-<br>AUTHORISATION_ERROR.|
|**Setup**|<br>-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 285 f 376


-----

|Test procedure| Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = []).<br> Set nonTunnellingAddress to an individual address which is not<br>IndividualAddress and which is not in slotIAs but which is in the<br>same subnet as IndividualAddress.<br> Execute GlPro EstablishTunnellingConnection(userId = 1,<br>_<br>tunnellingAddress = slotIAs[1]).<br> Execute GlPro CloseTunnellingConnection().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[1], expectedError =<br>E AUTHORIZATION ERROR).<br>_ _<br> Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = [(TunnellingUserA, 1)]).<br> Execute GlPro EstablishTunnellingConnection(userId = 1,<br>_<br>tunnellingAddress = slotIAs[1]).<br> Execute GlPro CloseTunnellingConnection().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[1]).<br> Execute GlPro CloseTunnellingConnection().<br>_<br> if (numTunnellingSlots > 1):<br>o Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[2], expected-<br>Error = E AUTHORIZATION ERROR).<br>_ _<br> If (TunnellingUserA == 0) or (TunnellingUserB == 0) or (num-<br>TunnellingSlots < 2):<br>o Abort test and return TestPassed.<br> Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = [(TunnellingUserA, 2), (TunnellingUserB, 1),<br>(TunnellingUserB, 2)]).<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[1], expectedError =<br>E AUTHORIZATION ERROR).<br>_ _<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[2]).<br> Execute GlPro CloseTunnellingConnection().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[1]).<br> Execute GlPro CloseTunnellingConnection().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[2]).<br> Execute GlPro CloseTunnellingConnection().<br>_|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 286 f 376


-----

|Cleanup| Execute GlPro CleanupTunnelling().<br>_|
|---|---|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.3.1.7.1 Abstract<br>resource definition<br>KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic<br>flowchart|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.7.15 Tunnelling ConnectRequest - E_CONNECTION_IN_USE

**Test ID** 30415

**Description** Try to establish a connection with an individual address which is already
in use for tunnelling in the BDUT.

A first tunnelling connection is opened by using a basic CRI. Then a
second tunnelling connection is requested, requesting the tunnelling
address used by the first tunnelling connection.

**Expectation** Receive a ConnectResponse with E_CONNECTION_IN_USE in the
status code octet.

**Setup** 
**Test procedure** - Execute tunnellingAddress = GlPro_EstablishTunnellingConnection(userId = none, tcp = false, tunnellingAddress =
none).

             - Execute GlPro_EstablishTunnellingConnection(userId = none,
tcp = false, tunnellingAddress = tunnellingAddress, expectedError
= E_CONNECTION_IN_USE).

             - Execute GlPro_CloseTunnellingConnection().

**Cleanup** - Execute GlPro_CloseTunnellingConnection() if necessary (on
abort).

**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic
**reference** flowchart

**Duration**

**Mask version**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 287 f 376

|Test ID|30415|
|---|---|
|**Description**|Try to establish a connection with an individual address which is already<br>in use for tunnelling in the BDUT.<br>A first tunnelling connection is opened by using a basic CRI. Then a<br>second tunnelling connection is requested, requesting the tunnelling<br>address used by the first tunnelling connection.|
|**Expectation**|Receive a ConnectResponse with E_CONNECTION_IN_USE in the<br>status code octet.|
|**Setup**|-|
|**Test procedure**| <br>Execute tunnellingAddress = GlPro_EstablishTunnelling-<br>Connection(userId = none, tcp = false, tunnellingAddress =<br>none).<br> <br>Execute GlPro_EstablishTunnellingConnection(userId = none,<br>tcp = false, tunnellingAddress = tunnellingAddress, expectedError<br>= E_CONNECTION_IN_USE).<br> <br>Execute GlPro_CloseTunnellingConnection().|
|**Cleanup**| <br> Execute GlPro_CloseTunnellingConnection() if necessary (on<br>abort).|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic<br>flowchart|
|**Duration**||
|**Mask version**||


-----

|Open points|Col2|
|---|---|


##### 2.7.16 Default for Interface Feature Info Service Enable is Disabled

**Test ID** 30416

**Description** This test checks that the default of the 'Interface Feature Info Service
Enable' feature is 'disabled' for every new tunnelling connection.

It also checks that this flag is separately maintained for concurrent
tunnelling connections (if concurrent tunnelling connections are
supported by the BDUT at all).

**Expectation** The default of the 'Interface Feature Info Service Enable' feature is
'disabled' for every new tunnelling connection, and it is independently
maintained for each tunnelling connection.

**Setup** 
**Test procedure** - Execute GlPro_EstablishTunnellingConnection(). This is
tunnelling connection T1.

             - Execute GlPro_GetTunnellingFeature(featureId = Interface
Feature Info Service Enabled, expectedValue = disabled) for T1.

             - Execute GlPro_SetTunnellingFeature(featureId = Interface
Feature Info Service Enabled, value = enabled) for T1.

             - Try to create a second tunnelling connection T2 using a Basic
CRI.
`o` If this fails: Ok. Continue.
`o` If this succeeds:

                     - Execute GlPro_GetTunnellingFeature(featureId =
Interface Feature Info Service Enabled, expectedValue = disabled) for T2.

                     - Close T2.

             - Execute GlPro_CloseTunnellingConnection().

             - Execute GlPro_EstablishTunnellingConnection(). This is
tunnelling connection T1.

             - Execute GlPro_GetTunnellingFeature(featureId = Interface
Feature Info Service Enabled, expectedValue = disabled) for T1.

**Cleanup** - Close T2 if necessary.

             - Execute GlPro_CloseTunnellingConnection().

**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.2.8.9 Interface
**reference** Feature 08: Interface Feature Info service Enable

**Duration**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 288 f 376

|Test ID|30416|
|---|---|
|**Description**|This test checks that the default of the 'Interface Feature Info Service<br>Enable' feature is 'disabled' for every new tunnelling connection.<br>It also checks that this flag is separately maintained for concurrent<br>tunnelling connections (if concurrent tunnelling connections are<br>supported by the BDUT at all).|
|**Expectation**|The default of the 'Interface Feature Info Service Enable' feature is<br>'disabled' for every new tunnelling connection, and it is independently<br>maintained for each tunnelling connection.|
|**Setup**|-|
|**Test procedure**| <br>Execute GlPro_EstablishTunnellingConnection(). This is<br>tunnelling connection T1.<br> <br>Execute GlPro_GetTunnellingFeature(featureId = Interface<br>Feature Info Service Enabled, expectedValue = disabled) for T1.<br> <br>Execute GlPro_SetTunnellingFeature(featureId = Interface<br>Feature Info Service Enabled, value = enabled) for T1.<br> <br>Try to create a second tunnelling connection T2 using a Basic<br>CRI.<br>`o` If this fails: Ok. Continue.<br>`o` If this succeeds:<br> <br>Execute GlPro_GetTunnellingFeature(featureId =<br>Interface Feature Info Service Enabled, expected-<br>Value = disabled) for T2.<br> <br>Close T2.<br> <br>Execute GlPro_CloseTunnellingConnection().<br> <br>Execute GlPro_EstablishTunnellingConnection(). This is<br>tunnelling connection T1.<br> <br>Execute GlPro_GetTunnellingFeature(featureId = Interface<br>Feature Info Service Enabled, expectedValue = disabled) for T1.|
|**Cleanup**| <br>Close T2 if necessary.<br> <br>Execute GlPro_CloseTunnellingConnection().|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.2.8.9 Interface<br>Feature 08: Interface Feature Info service Enable|
|**Duration**||


-----

|Mask version|Col2|
|---|---|
|**Open points**||


##### 2.7.17 Erroneously formatted tunnelling ConnectRequests are ignored

**Test ID** 30417

**Description** A number of erroneously formatted ConnectRequests are sent to the
BDUT.

**Expectation** All erroneous ConnectRequests are silently ignored.

**Setup** 
**Test procedure** - Execute GlPro_VerifyBdutIsResponsive().

             - Execute LoPro_TestErroneousTunnellingConnectRequest(cri =
Valid CRI consisting of 4 octets, but with a Structure Length of
the CRI set to 6).

             - Execute LoPro_TestErroneousTunnellingConnectRequest(cri =
Valid CRI consisting of 6 octets (IA=0), but with a Structure
Length of the CRI set to 4).

             - Execute LoPro_TestErroneousTunnellingConnectRequest(cri =
Valid CRI consisting of 6 octets (IA=0), but with a Structure
Length of the CRI set to 8).

             - Execute LoPro_TestErroneousTunnellingConnectRequest(cri =
Valid CRI consisting of 8 octets (extended CRI with IA=0 and two
zero octets appended), but with a Structure Length of the CRI set
to 6).

**Cleanup** 
**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.3 Basic CRI
**reference** and 2.2.1.4 Extended CRI.

**Duration**

**Mask version**

**Open points**

Local procedures:

**Procedure** LoPro_TestErroneousTunnellingConnectRequest(cri)
**name**

**Description** Send ConnectRequest for tunnelling with the erroneous 'cri' to the BDUT.
Verify that no ConnectResponse is received.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 289 f 376

|Test ID|30417|
|---|---|
|**Description**|A number of erroneously formatted ConnectRequests are sent to the<br>BDUT.|
|**Expectation**|All erroneous ConnectRequests are silently ignored.|
|**Setup**|-|
|**Test procedure**| <br>Execute GlPro_VerifyBdutIsResponsive().<br> <br>Execute LoPro_TestErroneousTunnellingConnectRequest(cri =<br>Valid CRI consisting of 4 octets, but with a Structure Length of<br>the CRI set to 6).<br> <br>Execute LoPro_TestErroneousTunnellingConnectRequest(cri =<br>Valid CRI consisting of 6 octets (IA=0), but with a Structure<br>Length of the CRI set to 4).<br> <br>Execute LoPro_TestErroneousTunnellingConnectRequest(cri =<br>Valid CRI consisting of 6 octets (IA=0), but with a Structure<br>Length of the CRI set to 8).<br> <br>Execute LoPro_TestErroneousTunnellingConnectRequest(cri =<br>Valid CRI consisting of 8 octets (extended CRI with IA=0 and two<br>zero octets appended), but with a Structure Length of the CRI set<br>to 6).|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.3 Basic CRI<br>and 2.2.1.4 Extended CRI.|
|**Duration**||
|**Mask version**||
|**Open points**||

|Procedure<br>name|LoPro TestErroneousTunnellingConnectRequest(cri)<br>_|
|---|---|
|**Description**|Send ConnectRequest for tunnelling with the erroneous 'cri' to the BDUT.<br>Verify that no ConnectResponse is received.|


-----

|Parameter<br>description| cri: erroneous CRI for the ConnectRequest|
|---|---|
|**Procedure**| <br>Send a ConnectRequest for tunnelling with CRI 'cri'.<br> <br>Wait for ConnectResponse. Timeout: TimeoutConnectResponse.<br>`o` On received ConnectResponse:<br> <br>If tunnelling connection was opened successfully:<br>Close it.<br> <br>Abort test and return TestFailed.|
|**Return**|-|
|**Open points**||


##### 2.7.18 Tunnelling ConnectRequest with unsupported layer results in E_- TUNNELLING_LAYER

**Test ID** 30418

**Description** A tunnelling ConnectRequest is sent with the layer field in the CRI set
to 0 (which is not a valid layer code).

**Expectation** A ConnectResponse is received from the BDUT with the error code
E_TUNNELLING_LAYER.

**Setup** 
**Test procedure** - Send a ConnectRequest for tunnelling with a basic CRI with
the layer field set to 0 (invalid layer).

               - Wait for a ConnectResponse. Timeout: TimeoutConnectResponse.
`o` On timeout: Abort test and return TestFailed.
`o` On errorCode != E_TUNNELLING_LAYER: Abort test
and return TestFailed.

**Cleanup** - Close tunnelling connection if necessary.

**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic
**reference** flowchart

**Duration**

**Mask version**

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 290 f 376

|Test ID|30418|
|---|---|
|**Description**|A tunnelling ConnectRequest is sent with the layer field in the CRI set<br>to 0 (which is not a valid layer code).|
|**Expectation**|A ConnectResponse is received from the BDUT with the error code<br>E_TUNNELLING_LAYER.|
|**Setup**|<br>-|
|**Test procedure**| <br>Send a ConnectRequest for tunnelling with a basic CRI with<br>the layer field set to 0 (invalid layer).<br> <br>Wait for a ConnectResponse. Timeout: TimeoutConnect-<br>Response.<br>`o` On timeout: Abort test and return TestFailed.<br>`o` On errorCode != E_TUNNELLING_LAYER: Abort test<br>and return TestFailed.|
|**Cleanup**| <br>Close tunnelling connection if necessary.|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic<br>flowchart|
|**Duration**||
|**Mask version**||
|**Open points**||


-----

##### 2.7.19 Non-secure ConnectRequest while tunnelling is secured results in E_CONNECTION_TYPE

**Test ID** 30419

**Description** The tunnelling service family is set to secured and then a non-secure
ConnectRequest is sent to the BDUT.

**Expectation** The BDUT answers with E_CONNECTION_TYPE.

**Setup** - Execute GlPro_SetupUnicast().

**Test procedure** - Execute GlPro_SetupFamilySecurity(familiesAreSecured =
true).

              - Send non-secure ConnectRequest for tunnelling, Basic CRI,
layer TUNNEL_LINKLAYER,

              - Wait for a ConnectResponse. Timeout: TimeourtConnectResponse.
`o` On timeout: Abort test and return TestFailed.
`o` On errorCode != E_CONNECTION_TYPE:

                      - On errorCode == E_NO_ERROR: Close
tunnelling connection. (Explanation: Clean up on
error.)

                      - Abort test and return TestFailed.

**Cleanup** - Execute GlPro_CleanupUnicast().

**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic
**reference** flowchart

**Duration**

**Mask version**

**Open points**

##### 2.7.20 Tunnelling Information DIB

**Test ID** 30420

**Description** Get Tunnelling Information DIB using a SearchRequestExtended with a
suitable Request DIBs SRP and receive the response. Inspect the
received Tunnelling Information DIB and validate the contents according
to the expectations.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 291 f 376

|Test ID|30419|
|---|---|
|**Description**|The tunnelling service family is set to secured and then a non-secure<br>ConnectRequest is sent to the BDUT.|
|**Expectation**|The BDUT answers with E_CONNECTION_TYPE.|
|**Setup**|<br> <br>Execute GlPro_SetupUnicast().|
|**Test procedure**| <br>Execute GlPro_SetupFamilySecurity(familiesAreSecured =<br>true).<br> <br>Send non-secure ConnectRequest for tunnelling, Basic CRI,<br>layer TUNNEL_LINKLAYER,<br> <br>Wait for a ConnectResponse. Timeout: TimeourtConnect-<br>Response.<br>`o` On timeout: Abort test and return TestFailed.<br>`o` On errorCode != E_CONNECTION_TYPE:<br> <br>On errorCode == E_NO_ERROR: Close<br>tunnelling connection. (Explanation: Clean up on<br>error.)<br> <br>Abort test and return TestFailed.|
|**Cleanup**| <br>Execute GlPro_CleanupUnicast().|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.5.1 Basic<br>flowchart|
|**Duration**||
|**Mask version**||
|**Open points**||

|Test ID|30420|
|---|---|
|**Description**|Get Tunnelling Information DIB using a SearchRequestExtended with a<br>suitable Request DIBs SRP and receive the response. Inspect the<br>received Tunnelling Information DIB and validate the contents according<br>to the expectations.|


-----

|Expectation|A SearchResponseExtended is received which contains a Tunnelling<br>Information DIB.<br>Field "APDU-length for bus access" is consistent with PID MAX -<br>_ _<br>INTERFACE APDU LENGTH.<br>_ _<br>Length of "Tunnelling Slot Information" is consistent with length of PID -<br>_<br>TUNNELLING ADDRESSES.<br>_<br>"Individual Address" in "Tunnelling Slot Information" is consistent with<br>PID TUNNELLING ADDRESSES and PID ADDITIONAL -<br>_ _ _ _<br>INDIVIDUAL ADDRESSES.<br>_<br>(Note that there is no order defined in "Tunnelling Slot Information".)|
|---|---|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Execute GlPro_SendSearchRequestExtended(destinationHPAI =<br>BDUTs IP and port, frameHpai = test clients IP and port, SRPsTo-<br>Send = Request DIBs containing Tunnelling Information DIB).<br> <br>Execute tunnellingInformationDib = GlPro_ReceiveSearch-<br>ResponseExtended(listeningHPAI = test clients IP and port).<br> <br>Execute PropAccess_DevMgmt(fdsk = Fdsk, restart = false) to<br>read the following properties:<br>`o` PID_MAX_INTERFACE_APDU_LENGTH<br>`o` PID_TUNNELLING_ADDRESSES<br>`o` PID_ADDITIONAL_INDIVIDUAL_ADDRESSES<br> <br>If field "APDU-length for bus access" is != PID_MAX_-<br>INTERFACE_APDU_LENGTH:<br>`o` Abort test and return TestFailed.<br> <br>If number of tunnelling slots described in tunnellingInformationDib<br>is != number of tunnelling slots described in PID_TUNNELLING_-<br>ADDRESSES: (That is: If numberOfOctetsIn(tunnellingInformation-<br>Dib) / 4 - 1 != PID_TUNNELLING_ADDRESSEScurrent_nr_of_-<br>elem):<br>`o` Abort test and return TestFailed.<br> <br>For each Individual Address A in tunnellingInformationDib:<br>`o` Verify that A is pointed to by any element in PID_-<br>TUNNELLING_ADDRESSES, which means it either needs<br>to be in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES at<br>any index listed in PID_TUNNELLING_ADDRESSES, or it<br>must be the IndividualAddress of the BDUT if 0 is contained<br>in PID_TUNNELLING_ADDRESSES.<br>`o` If this is not the case:<br> <br>Abort test and return TestFailed.|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 292 f 376


-----

|Cleanup|Col2|
|---|---|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.4.1.2 Tunnelling<br>Information DIB|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.7.21 Tunnelling version is >= 2 in Supported Service Families DIB

**Test ID** 30421

**Description** Send a SearchRequestExtended and receive a SearchResponseExtended and check reported tunnelling version. Send a DescriptionRequest and receive a DescriptionResponse and check reported
tunnelling version.

**Expectation** The version reported for tunnelling in the supported service families DIB
is >= 2 for both cases.

**Setup** 
**Test procedure** - Execute supportedServiceFamiliesDib = GlPro_ReadSupportedServiceFamiliesDib(coreV2 = true).

             - If supportedServiceFamiliesDib.tunnelling.version < 2:
`o` Abort test and return TestFailed.

             - Execute supportedServiceFamiliesDib = GlPro_ReadSupportedServiceFamiliesDib(coreV2 = false).

             - If supportedServiceFamiliesDib.tunnelling.version < 2:
`o` Abort test and return TestFailed.

**Cleanup** 
**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.7.3.4 KNXnet/IP
**reference** Tunnelling

**Duration**

**Mask version**

**Open points**

##### 2.7.22 Establishing a tunnelling connection while TP1 is disconnected

**Test ID** 30422

©C i h 1998 2018 KNX A i i V i 1 1 AS P 293 f 376

|Test ID|30421|
|---|---|
|**Description**|Send a SearchRequestExtended and receive a SearchResponse-<br>Extended and check reported tunnelling version. Send a Description-<br>Request and receive a DescriptionResponse and check reported<br>tunnelling version.|
|**Expectation**|The version reported for tunnelling in the supported service families DIB<br>is >= 2 for both cases.|
|**Setup**|-|
|**Test procedure**| <br>Execute supportedServiceFamiliesDib = GlPro_ReadSupported-<br>ServiceFamiliesDib(coreV2 = true).<br> <br>If supportedServiceFamiliesDib.tunnelling.version < 2:<br>`o` Abort test and return TestFailed.<br> <br>Execute supportedServiceFamiliesDib = GlPro_ReadSupported-<br>ServiceFamiliesDib(coreV2 = false).<br> <br>If supportedServiceFamiliesDib.tunnelling.version < 2:<br>`o` Abort test and return TestFailed.|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.7.3.4 KNXnet/IP<br>Tunnelling|
|**Duration**||
|**Mask version**||
|**Open points**||

|Test ID|30422|
|---|---|


-----

|Description|Verify BDUT is responsive (to check that it is present at all). Then<br>disconnect BDUT from TP1 line. If the BDUT becomes unresponsive this<br>is ok. If it is still responsive, query and remember a TunnellingInformation<br>DIB. Then try to create a tunnelling connection. (Using UDP.) Any error<br>(including no error) is ok. Check that the connection behavior is<br>consistent with the U bit in the previously queried Tunnelling Information<br>DIB. If the tunnelling connection was opened successfully, close it.|
|---|---|
|**Expectation**|The tunnelling connection can either be established successfully, or any<br>error is returned. The success or failure of creating a tunnelling<br>connection must be consistent with the U bit (or bits) in the Tunnelling<br>Information DIB queried before creating the tunnelling connection.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Execute GlPro_VerifyBdutIsResponsive().<br> <br>Execute GlPro_SwitchOnOffTp(on = false. wait = true).<br> <br>Explanation: Check whether BDUT is still responsive and get<br>Tunnelling Information DIB. We can assume Core v2 to be<br>supported since Tunnelling v2 support implies Core v2 support.<br> <br>Send to the BDUT a SearchRequestExtended with a RequestDib<br>SRP (Tunnelling Information DIB) to the BDUT using UDP.<br> <br>Wait for a SearchResponseExtended. Timeout: TimeoutSearch-<br>ResponseExtendedUnicast<br>`o` On timeout: Abort test and return TestPassed. Explanation:<br>The device is most likely TP1 powered. This is ok. No<br>further tests can be done.<br> <br>Inspect TunnellingInformation DIB: Remember the U (usable) bit<br>and IA for each tunnelling slot.<br> <br>Execute GlPro_EstablishTunnellingConnection(expectedError =<br>any error including E_NO_ERROR is allowed).<br> <br>If the error code of the ConnectResponse was E_NO_ERROR:<br>`o` Verify that the U bit for the tunnelling IA was 1, else abort<br>test and return TestFailed.<br>`o` Execute GlPro_CloseTunnellingConnection().<br> <br>Else:<br>`o` Verify that the U bit for all tunnelling IAs in the Tunnelling<br>Information DIB was 0, else abort test and return Test-<br>Failed.|
|**Cleanup**| <br>If tunnelling connection is open: Execute GlPro_CloseTunnelling-<br>Connection().<br> <br>Execute GlPro_SwitchOnOffTp(on = true).<br> <br>Execute GlPro_VerifyBdutIsResponsive().|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 294 f 376


-----

|Specification<br>reference|KSG643-21.02 KNXnet-IP Tunnelling v2 (2017.09.04) 2.2.1.5.1 Basic<br>Flowchart, 2.2.1.5.3 Implementation specific connection request<br>evaluation criteria|
|---|---|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.7.23 Tunnelling ConnectRequest with extended CRI

**Test ID** 30423

**Description** Establish a tunnelling connection with basic CRI. Remember the
assigned tunnelling address and close the tunnelling connection. Then try
to establish a tunnelling connection by using the previously used
tunnelling address using an extended CRI and verify that this tunnelling
address is really used.

**Expectation** The tunnelling connection can successfully be established using an
extended CRI.

**Setup** 
**Test** - Execute usableTunnellingAddress = GlPro_EstablishTunnelling**procedure** Connection(userId = none, tcp = false, tunnellingAddress = none).

             - Execute GlPro_CloseTunnellingConnection().

             - Execute effectiveTunnellingAddress = GlPro_EstablishTunnellingConnection(userId = none, tcp = false, tunnellingAddress =
usableTunnellingAddress).

             - If effectiveTunnellingAddress != usableTunnellingAddress:
`o` Abort test and return TestFailed.

             - Execute GlPro_CloseTunnellingConnection().

**Cleanup** 
**Specification** KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.4 Extended
**reference** CRI

**Duration**

**Mask version**

**Open points**

##### 2.7.24 PID_TUNNELLING_USERS is ignored when tunnelling is set to non-secure

©C i h 1998 2018 KNX A i i V i 1 1 AS P 295 f 376

|Test ID|30423|
|---|---|
|**Description**|Establish a tunnelling connection with basic CRI. Remember the<br>assigned tunnelling address and close the tunnelling connection. Then try<br>to establish a tunnelling connection by using the previously used<br>tunnelling address using an extended CRI and verify that this tunnelling<br>address is really used.|
|**Expectation**|The tunnelling connection can successfully be established using an<br>extended CRI.|
|**Setup**|-|
|**Test**<br>**procedure**| <br>Execute usableTunnellingAddress = GlPro_EstablishTunnelling-<br>Connection(userId = none, tcp = false, tunnellingAddress = none).<br> <br>Execute GlPro_CloseTunnellingConnection().<br> <br>Execute effectiveTunnellingAddress = GlPro_EstablishTunnelling-<br>Connection(userId = none, tcp = false, tunnellingAddress =<br>usableTunnellingAddress).<br> <br>If effectiveTunnellingAddress != usableTunnellingAddress:<br>`o` Abort test and return TestFailed.<br> <br>Execute GlPro_CloseTunnellingConnection().|
|**Cleanup**|-|
|**Specification**<br>**reference**|KSG643-20.01 KNXnet-IP Tunnelling v2 (2017.07.27) 2.2.1.4 Extended<br>CRI|
|**Duration**||
|**Mask version**||
|**Open points**||


-----

|Test ID|30424|
|---|---|
|**Description**|Tunnelling security is disabled. Configure PID_TUNNELLING_UESRS<br>and then try to create a tunnelling connection which conflicts with this<br>setup which should always succeed.<br>Procedure:<br>The PID_TUNNELLING_USERS array is cleared (made empty). The<br>following tunnelling connections are created and closed, sequentially:<br> <br>Non-secure tunnelling connection using Basic CRI.<br> <br>Secure session with userId = TunnellingUserA and within this a<br>tunnelling connection using a Basic CRI.<br>If BDUT supports at least two tunnelling users (TunnellingUserA and<br>TunnellingUserB) and two tunnelling slots (SlotA and SlotB):<br>The PID_TUNNELLING_USERS array is set to a single element,<br>mapping TunnellingUserA to SlotA.<br>The following tunnelling connections are created and closed,<br>sequentially:<br> <br>Non-secure tunnelling connection using Extended CRI with IA =<br>SlotA.IA.<br> <br>Secure session with userId = TunnellingUserB and within this a<br>tunnelling connection using an Extended CRI with IA = SlotA.IA.<br> <br>Secure session with userId = TunnellingUserA and within this a<br>tunnelling connection using an Extended CRI with IA = SlotB.IA.<br>This test is only executed if the BDUT supports IP security. It trivially<br>passes in all other configurations.|
|**Expectation**|All tunnelling connections can be created without error.|
|**Setup**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 296 f 376


-----

|Test procedure| Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = false,<br>_<br>tunnellingUsers = []).<br> If not ipSecurityIsSupported:<br>o Abort test and return TestPassed. (Explanation: PID -<br>_<br>TUNNELLING USERS is not available. Nothing to test.)<br>_<br> Execute GlPro EstablishTunnellingConnection().<br>_<br> Execute GlPro CloseTunnellingConnection().<br>_<br> If (TunnellingUserA > 0):<br>o Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA).<br>o Execute GlPro CloseTunnellingConnection().<br>_<br> If (TunnellingUserA > 0) and (TunnellingUserB > 0) and (num-<br>TunnellingSlots >= 2):<br>o Execute GlPro SetTunnellingUsers(array = [(Tunnelling-<br>_<br>UserA, 1)]).<br>o Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[1]).<br>o Execute GlPro CloseTunnellingConnection().<br>_<br>o Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[2]).<br>o Execute GlPro CloseTunnellingConnection().<br>_|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupTunnelling().|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.3.1.7.1 Abstract<br>resource definition|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.7.25 PID_TUNNELLING_USERS: 2 users associated with different slots

**Test ID** 30425

©C i h 1998 2018 KNX A i i V i 1 1 AS P 297 f 376

|Test ID|30425|
|---|---|


-----

|Description|Setup: Tunnelling security is enabled. TunnellingUserA is mapped to<br>SlotA and TunnellingUserB is mapped to SlotB.<br>The following aspects are tested sequentially (all via TCP):<br> TunnellingUserA can connect using SlotA and concurrently<br>TunnellingUserB can connect using SlotB.<br> TunnellingUserA cannot connect using SlotB.<br> TunnellingUserB cannot connect using SlotA.<br> Non-secure tunnelling connection can neither be established for<br>SlotA nor for SlotB.<br>This test is only executed if the BDUT supports IP security, two or more<br>tunnelling users and two or more tunnelling slots. It trivially passes in all<br>other configurations.|
|---|---|
|**Expectation**|The two concurrent tunnelling connections can successfully connect. All<br>other connection must fail with their appropriate error code.|
|**Setup**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 298 f 376


-----

|Test<br>procedure| If TunnellingUserB == 0:<br>o Abort test and return TestPassed. (Explanation: Not enough<br>tunnelling users supported for test. Nothing to test.)<br> If NumSupportedParallelSecureSessions < 2:<br>o Abort test and return TestPassed. (Explanation: Not enough<br>secure sessions available for two different tunnelling users.)<br> Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = [(TunnellingUserA, 1), (TunnellingUserB, 2)]).<br> If not ipSecurityIsSupported:<br>o Abort test and return TestPassed. (Explanation: PID -<br>_<br>TUNNELLING USERS is not available. Nothing to test.)<br>_<br> If numTunnellingSlots < 2:<br>o Abort test and return TestPassed. (Explanation: Not enough<br>tunnelling slots supported for test. Nothing to test.)<br> Explanation: The following two concurrent tunnelling connections<br>will each create their own private secure connection each within<br>their own private TCP connection, if possible. This is a realistic use<br>case as in the free filed these would be two independent tunnelling<br>clients which do not know of each other.<br> Open two TCP connections T1 and T2 (or potentially just a single<br>TCP connection (T1 == T2) if just one is supported): (T1, T2) = Gl-<br>Pro OpenTwoTcpConnections().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[1]). (Use T1.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[2]). (Use T2.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false). (for<br>_<br>TunnellingUserA, use T1.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false). (for<br>_<br>TunnellingUserB, use T2.)<br> Close T1 and (if necessary) T2.<br> Open TCP connection T.<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[2], expectedError =<br>E AUTHORISATION ERROR). (Use T.)<br>_ _<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[1], expectedError =<br>E AUTHORISATION ERROR). (Use T.)<br>_ _<br> Execute GlPro EstablishTunnellingConnection(tcp = true,<br>_<br>tunnellingAddress = slotIAs[1], expectedError = E -<br>_<br>CONNECTION TYPE). (Use T.)<br>_<br> Execute GlPro EstablishTunnellingConnection(tcp = true,<br>_<br>tunnellingAddress = slotIAs[2], expectedError = E -<br>_<br>CONNECTION TYPE). (Use T.)<br>_|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 299 f 376


-----

|Col1| Close TCP connection T.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupTunnelling().|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.3.1.7.1 Abstract<br>resource definition|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.7.26 PID_TUNNELLING_USERS: 2 users associated with the same slot

**Test ID** 30426

**Description** Setup: Tunnelling security is enabled. TunnellingUserA is mapped to
SlotA and TunnellingUserB is mapped to SlotA.

The following aspects are tested sequentially:

             - TunnellingUserA can connect using SlotA.

             - TunnellingUserB can connect using SlotA.

             - TunnellingUserA cannot connect using SlotA while TunnellingUserB is connected using SlotA.

             - TunnellingUserA cannot connect using SlotB.

             - Non-secure tunnelling connection can neither be established for
SlotA nor for SlotB.

This test is only executed if the BDUt support two or more tunnelling
users and two or more tunnelling slots. It trivially passes in all other
configurations.

**Expectation** The first two connections succeed, all other connections fail.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 300 f 376

|Test ID|30426|
|---|---|
|**Description**|Setup: Tunnelling security is enabled. TunnellingUserA is mapped to<br>SlotA and TunnellingUserB is mapped to SlotA.<br>The following aspects are tested sequentially:<br> <br>TunnellingUserA can connect using SlotA.<br> <br>TunnellingUserB can connect using SlotA.<br> <br>TunnellingUserA cannot connect using SlotA while Tunnelling-<br>UserB is connected using SlotA.<br> <br>TunnellingUserA cannot connect using SlotB.<br> <br>Non-secure tunnelling connection can neither be established for<br>SlotA nor for SlotB.<br>This test is only executed if the BDUt support two or more tunnelling<br>users and two or more tunnelling slots. It trivially passes in all other<br>configurations.|
|**Expectation**|The first two connections succeed, all other connections fail.|
|**Setup**|-|


-----

|Test procedure| If TunnellingUserB == 0:<br>o Abort test and return TestPassed. (Explanation: Not<br>enough tunnelling users supported for test. Nothing to<br>test.)<br> Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = [(TunnellingUserA, 1), (TunnellingUserB, 1)]).<br> If not ipSecurityIsSupported:<br>o Abort test and return TestPassed. (Explanation: PID -<br>_<br>TUNNELLING USERS is not available. Nothing to test.)<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[1]).<br> Execute GlPro CloseTunnellingConnection().<br>_<br> Open two TCP connections T1 and T2 (or potentially just a single<br>TCP connection (T1 == T2) if just one is supported): (T1, T2) =<br>GlPro OpenTwoTcpConnections().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[1]). (Use T1.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[1], expectedError =<br>E CONNECTION IN USE). (Use T2.)<br>_ _ _<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T1.)<br> Execute GlPro EstablishTunnellingConnection(tunnellingAddress<br>_<br>= slotIAs[1], expectedError = E CONNECTION TYPE, tcp =<br>_ _<br>true). (Use T2.)<br> Close T1 and (if necessary) T2.<br> If numTunnellingSlots < 2:<br>o Abort test and return TestPassed. (Explanation: Not<br>enough tunnelling slots supported for the remaining tests:<br>Nothing more to test. Test passed.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[2], expectedError =<br>E AUTHORISATION ERROR).<br>_ _<br> Close TCP connection if necessary.<br> Execute GlPro EstablishTunnellingConnection(tunnellingAddress<br>_<br>= slotIAs[2], expectedError = E CONNECTION TYPE). (Use<br>_ _<br>UDP.)|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupTunnelling().|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.3.1.7.1 Abstract<br>resource definition|
|**Duration**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 301 f 376


-----

|Mask version|Col2|
|---|---|
|**Open points**||


##### 2.7.27 PID_TUNNELLING_USERS: 1 user associated with 2 slots

**Test ID** 30427

**Description** Setup: Tunnelling security is enabled. TunnellingUserA is mapped to
SlotA and to SlotB.

The following aspects are tested sequentially:

             - TunnellingUserA can connect using SlotA and TunnellingUserA
can also connect using SlotB, concurrently.

             - TunnellingUserB cannot connect using SlotA.

             - TunnellingUserB cannot connect using SlotB.

             - Non-secure tunnelling connection can neither be established for
SlotA nor for SlotB.

This test is only executed if the BDUt support two or more tunnelling
users and two or more tunnelling slots. It trivially passes in all other
configurations.

**Expectation** The first two concurrent tunnelling connections succeed, all other
connections fail.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 302 f 376

|Test ID|30427|
|---|---|
|**Description**|Setup: Tunnelling security is enabled. TunnellingUserA is mapped to<br>SlotA and to SlotB.<br>The following aspects are tested sequentially:<br> <br>TunnellingUserA can connect using SlotA and TunnellingUserA<br>can also connect using SlotB, concurrently.<br> <br>TunnellingUserB cannot connect using SlotA.<br> <br>TunnellingUserB cannot connect using SlotB.<br> <br>Non-secure tunnelling connection can neither be established for<br>SlotA nor for SlotB.<br>This test is only executed if the BDUt support two or more tunnelling<br>users and two or more tunnelling slots. It trivially passes in all other<br>configurations.|
|**Expectation**|The first two concurrent tunnelling connections succeed, all other<br>connections fail.|
|**Setup**|-|


-----

|Test<br>procedure| If TunnellingUserA == 0:<br>o Abort test and return TestPassed. (Explanation: Not enough<br>tunnelling users supported for test. Nothing to test.)<br> Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = [(TunnellingUserA, 1), (TunnellingUserA, 2)]).<br> If not ipSecurityIsSupported:<br>o Abort test and return TestPassed. (Explanation: PID -<br>_<br>TUNNELLING USERS is not available. Nothing to test.)<br>_<br> If numTunnellingSlots < 2:<br>o Abort test and return TestPassed. (Explanation: Not enough<br>tunnelling slots supported for test. Nothing to test.)<br> Explanation: The following two concurrent tunnelling connections<br>will each create their own private secure connection each within<br>their own private TCP connection. This is a realistic use case as in<br>the free filed these would be two independent tunnelling clients<br>which do not know of each other.<br> Open two TCP connections T1 and T2 (or potentially just a single<br>TCP connection (T1 == T2) if just one is supported): (T1, T2) = Gl-<br>Pro OpenTwoTcpConnections().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[1]). (Use T1.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[2]). (Use T2.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T1.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T2.)<br> Close T1 and (if necessary) T2.<br> Execute GlPro EstablishTunnellingConnection(tunnellingAddress<br>_<br>= slotIAs[1], expectedError = E CONNECTION TYPE). (Use<br>_ _<br>UDP.)<br> Execute GlPro EstablishTunnellingConnection(tunnellingAddress<br>_<br>= slotIAs[2], expectedError = E CONNECTION TYPE). (Use<br>_ _<br>UDP.)<br> If TunnellingUserB == 0:<br>o Abort test and return TestPassed. (Explanation: Not enough<br>tunnelling users supported for remaining tests. Nothing to<br>test.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[1], expectedError =<br>E AUTHORIZATION ERROR).<br>_ _<br> Close TCP connection if necessary.<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[2], expectedError =<br>E AUTHORIZATION ERROR).<br>_ _|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 303 f 376


-----

|Col1| Close TCP connection if necessary.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupTunnelling().|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.3.1.7.1 Abstract<br>resource definition|
|**Duration**||
|**Mask version**||
|**Open points**||


##### 2.7.28 PID_TUNNELLING_USERS: Users associated with 2 slots each

**Test ID** 30428

**Description** Setup: Tunnelling security is enabled. TunnellingUserA is mapped to
SlotA and SlotB and TunnellingUserB is mapped to SlotA and SlotB.

The following aspects are tested sequentially:

             - TunnellingUserA can connect using SlotA and TunnellingUserA
can also connect using SlotB, concurrently.

             - TunnellingUserB can connect using SlotA and TunnellingUserB
can also connect using SlotB, concurrently.

             - TunnellingUserA can connect using SlotA and TunnellingUserB
can also connect using SlotB, concurrently.

             - TunnellingUserB can connect using SlotA and TunnellingUserA
can also connect using SlotB, concurrently.

             - Non-secure tunnelling connection can neither be established for
SlotA nor for SlotB.

This test is only executed if the BDUT supports two or more tunnelling
users and two or more tunnelling slots. It trivially passes in all other
configurations.

**Expectation** The secure tunnelling connections succeed, the non-secure tunnelling
connections fail.

**Setup** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 304 f 376

|Test ID|30428|
|---|---|
|**Description**|Setup: Tunnelling security is enabled. TunnellingUserA is mapped to<br>SlotA and SlotB and TunnellingUserB is mapped to SlotA and SlotB.<br>The following aspects are tested sequentially:<br> <br>TunnellingUserA can connect using SlotA and TunnellingUserA<br>can also connect using SlotB, concurrently.<br> <br>TunnellingUserB can connect using SlotA and TunnellingUserB<br>can also connect using SlotB, concurrently.<br> <br>TunnellingUserA can connect using SlotA and TunnellingUserB<br>can also connect using SlotB, concurrently.<br> <br>TunnellingUserB can connect using SlotA and TunnellingUserA<br>can also connect using SlotB, concurrently.<br> <br>Non-secure tunnelling connection can neither be established for<br>SlotA nor for SlotB.<br>This test is only executed if the BDUT supports two or more tunnelling<br>users and two or more tunnelling slots. It trivially passes in all other<br>configurations.|
|**Expectation**|The secure tunnelling connections succeed, the non-secure tunnelling<br>connections fail.|
|**Setup**|-|


-----

|Test<br>procedure| If TunnellingUserB == 0:<br>o Abort test and return TestPassed. (Explanation: Not enough<br>tunnelling users supported for test. Nothing to test.)<br> Execute (ipSecurityIsSupported, numTunnellingSlots, slotIAs) =<br>GlPro SetupTunnelling(enableTunnellingSecurity = true,<br>_<br>tunnellingUsers = [(TunnellingUserA, 1), (TunnellingUserA, 2),<br>(TunnellingUserB, 1), (TunnellingUserB, 2)]).<br> If not ipSecurityIsSupported:<br>o Abort test and return TestPassed. (Explanation: PID -<br>_<br>TUNNELLING USERS is not available. Nothing to test.)<br>_<br> If numTunnellingSlots < 2:<br>o Abort test and return TestPassed. (Explanation: Not enough<br>tunnelling slots supported for test. Nothing to test.)<br> Explanation: The following concurrent tunnelling connection pairs<br>will each create their own private secure connection each within<br>their own private TCP connection. This is a realistic use case as in<br>the free filed these would be two independent tunnelling clients<br>which do not know of each other.<br> Open two TCP connections T1 and T2 (or potentially just a single<br>TCP connection (T1 == T2) if just one is supported): (T1, T2) = Gl-<br>Pro OpenTwoTcpConnections().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[1]). (Use T1.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[2]). (Use T2.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T1.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T2.)<br> Close T1 and (if necessary) T2.<br> Open two TCP connections T1 and T2 (or potentially just a single<br>TCP connection (T1 == T2) if just one is supported): (T1, T2) = Gl-<br>Pro OpenTwoTcpConnections().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[1]). (Use T1.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[2]). (Use T2.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T1.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T2.)<br> Close T1 and (if necessary) T2.<br> Open two TCP connections T1 and T2 (or potentially just a single<br>TCP connection (T1 == T2) if just one is supported): (T1, T2) = Gl-<br>Pro OpenTwoTcpConnections().<br>_|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 305 f 376


-----

|Col1| Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[1]). (Use T1.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[2]). (Use T2.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T1.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T2.)<br> Close T1 and (if necessary) T2.<br> Open two TCP connections T1 and T2 (or potentially just a single<br>TCP connection (T1 == T2) if just one is supported): (T1, T2) = Gl-<br>Pro OpenTwoTcpConnections().<br>_<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserB, tunnellingAddress = slotIAs[1]). (Use T1.)<br> Execute GlPro EstablishTunnellingConnection(userId =<br>_<br>TunnellingUserA, tunnellingAddress = slotIAs[2]). (Use T2.)<br> Execute GlPro EstablishTunnellingConnection(tunnellingAddress<br>_<br>= slotIAs[1], expectedError = E CONNECTION TYPE). (Use<br>_ _<br>UDP.)<br> Execute GlPro EstablishTunnellingConnection(tunnellingAddress<br>_<br>= slotIAs[2], expectedError = E CONNECTION TYPE). (Use<br>_ _<br>UDP.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T1.)<br> Execute GlPro CloseTunnellingConnection(closeTcp = false).<br>_<br>(Use T2.)<br> Close T1 and (if necessary) T2.|
|---|---|
|**Cleanup**| <br>Execute GlPro_CleanupTunnelling().|
|**Specification**<br>**reference**|KSG616-20.03 KNXnet-IP Security (2017.08.07) 2.3.1.7.1 Abstract<br>resource definition|
|**Duration**||
|**Mask version**||
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 306 f 376


-----

# 3 Global procedures

This section contains the definitions of global procedures. Global procedures are used
(called) by tests to avoid repeating common operations in multiple tests. Global
procedures may be called from the Setup, Test procedure and Cleanup stages of
tests.Local procedures which are used just by one test are defined as part of this test.

### 3.1 Multicast

##### 3.1.1 GlPro_SetupMulticast()

**Procedure** GlPro_SetupMulticast(multicastAddress = NonSystemSetupMulticast**name** Address, backboneKey = BackboneKey1, latencyTolerance = LatencyTolerance, syncLatencyTolerance = SyncLatencyTolerance, secureRouting = 1)

**Description** This is the default test setup for multicast tests. It sets the necessary
properties and synchronizes the mc_timer of the test tool with the
mc_timer in the BDUT.The BDUT is always a time keeper when this
procedure returns.

**Parameter** - multicastAddress: System routing multicast address which will be
**description** used during the test.

            - backboneKey: The backbone key which will be used during the test.

            - latencyTolerance: Set PID_MULTICAST_LATENCY_TOLERANCE
to this.

            - syncLatencyTolerance: Set PID_SYNC_LATENCY_FRACTION
according to this.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 307 f 376

|Procedure<br>name|GlPro SetupMulticast(multicastAddress = NonSystemSetupMulticast-<br>_<br>Address, backboneKey = BackboneKey1, latencyTolerance = Latency-<br>Tolerance, syncLatencyTolerance = SyncLatencyTolerance, secure-<br>Routing = 1)|
|---|---|
|**Description**|This is the default test setup for multicast tests. It sets the necessary<br>properties and synchronizes the mc_timer of the test tool with the<br>mc_timer in the BDUT.The BDUT is always a time keeper when this<br>procedure returns.|
|**Parameter**<br>**description**| <br>multicastAddress: System routing multicast address which will be<br>used during the test.<br> <br>backboneKey: The backbone key which will be used during the test.<br> <br>latencyTolerance: Set PID_MULTICAST_LATENCY_TOLERANCE<br>to this.<br> <br>syncLatencyTolerance: Set PID_SYNC_LATENCY_FRACTION<br>according to this.|


-----

|Procedure| Execute PropSetup Multicast(multicastAddress = multicastAddress,<br>_<br>backboneKey = backboneKey, latencyTolerance = latency-<br>Tolerance, syncLatencyTolerance = syncLatencyTolerance, secure-<br>Routing = secureRouting).<br> If secureRouting == 1:<br>o Execute GlPro SendTimerNotify(timestamp = 1.000.000,<br>_<br>multicastAddress = multicastAddress, backboneKey =<br>backboneKey).<br>o Wait for NetworkLatency.<br>o Execute (receivedTimestamp, localMcTime) = GlPro Query-<br>_<br>McTimer(multicastAddress = multicastAddress, backbone-<br>Key = backboneKey).<br> Explanation: This also provokes an early exit of the<br>init delay.<br>o Execute GlPro SetLocalMcTimer(time = received-<br>_<br>Timestamp).|
|---|---|
|**Return**|-|
|**Duration**|TimeoutTimerNotifyResponse + ConfirmedRestart|
|**Open points**||


##### 3.1.2 GlPro_CleanupMulticast()

**Procedure** GlPro_CleanupMulticast()
**name**

**Description** Clean up after secure multicast tests. Disable secure multicast
communication, allow non-secure multicast communication and reset the
routing multicast address.

**Parameter** **description**

**Procedure** - Execute PropSetup_NonSecure(ignoreErrors = true, fallBackToSecureSession = true).

**Return** 
**Duration** ConfirmedRestart

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 308 f 376

|Procedure<br>name|GlPro CleanupMulticast()<br>_|
|---|---|
|**Description**|Clean up after secure multicast tests. Disable secure multicast<br>communication, allow non-secure multicast communication and reset the<br>routing multicast address.|
|**Parameter**<br>**description**|-|
|**Procedure**| <br>Execute PropSetup_NonSecure(ignoreErrors = true, fallBackTo-<br>SecureSession = true).|
|**Return**|-|
|**Duration**|ConfirmedRestart|
|**Open points**||


-----

##### 3.1.3 GlPro_SendTimerNotify()

**Procedure name** GlPro_SendTimerNotify(timestamp, multicastAddress = NonSystemSetupMulticastAddress, backboneKey = BackboneKey1)

**Description** Send a TimerNotify with the given parameters.

**Parameter** - timestamp: Timestamp of the timer notify
**description** - multicastAddress: Target routing multicast address

              - backboneKey: Backbone key of the timer notify

**Procedure** Send a TimerNotify with the given parameter.

**Return** 
**Duration** 0 s

**Open points**

##### 3.1.4 GlPro_ReceiveTimerNotify()

**Procedure** GlPro_ReceiveTimerNotify(timeout, multicastAddress = NonSystem**name** SetupMulticastAddress, backboneKey = BackboneKey1)

**Description** Wait for a received TimerNotify and return its timestamp and the local
time.

**Parameter** - timeout: Timestamp of the TimerNotify.
**description** - multicastAddress: Listen on routing multicast address.

             - backboneKey: Backbone key of the timer notify.

**Procedure** - Wait for a TimerNotify from the BDUT and remember the received
timestamp receivedTimestamp. Timeout: timeout.
`o` Note: Do not update the local mc_timer if receivedTimestamp > mc_timer. Leave mc_timer unaffected. This is
done outside of this procedure (if necessary).
`o` On timeout: Abort test and return TestFailed.

             - localMcTime = GlPro_GetLocalMcTimer().

**Return** Tuple: (receivedTimestamp, localMcTime)

**Duration** timeout

**Open points**

##### 3.1.5 GlPro_VerifyMulticastIsFunctional()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 309 f 376

|Procedure name|GlPro SendTimerNotify(timestamp, multicastAddress = NonSystem-<br>_<br>SetupMulticastAddress, backboneKey = BackboneKey1)|
|---|---|
|**Description**|Send a TimerNotify with the given parameters.|
|**Parameter**<br>**description**| <br>timestamp: Timestamp of the timer notify<br> <br>multicastAddress: Target routing multicast address<br> <br>backboneKey: Backbone key of the timer notify|
|**Procedure**|Send a TimerNotify with the given parameter.|
|**Return**|-|
|**Duration**|0 s|
|**Open points**||

|Procedure<br>name|GlPro ReceiveTimerNotify(timeout, multicastAddress = NonSystem-<br>_<br>SetupMulticastAddress, backboneKey = BackboneKey1)|
|---|---|
|**Description**|Wait for a received TimerNotify and return its timestamp and the local<br>time.|
|**Parameter**<br>**description**| <br>timeout: Timestamp of the TimerNotify.<br> <br>multicastAddress: Listen on routing multicast address.<br> <br>backboneKey: Backbone key of the timer notify.|
|**Procedure**| <br>Wait for a TimerNotify from the BDUT and remember the received<br>timestamp receivedTimestamp. Timeout: timeout.<br>`o` Note: Do not update the local mc_timer if received-<br>Timestamp > mc_timer. Leave mc_timer unaffected. This is<br>done outside of this procedure (if necessary).<br>`o` On timeout: Abort test and return TestFailed.<br> <br>localMcTime = GlPro_GetLocalMcTimer().|
|**Return**|Tuple: (receivedTimestamp, localMcTime)|
|**Duration**|timeout|
|**Open points**||


-----

|Procedure<br>name|GlPro VerifyMulticastIsFunctional(multicastAddress = NonSystem-<br>_<br>SetupMulticastAddress, backboneKey = BackboneKey1, secure = true)|
|---|---|
|**Description**|Verify that it is possible to make multicast communication in a secure<br>way.|
|**Parameter**<br>**description**| <br>multicastAddress: Send and listen on routing multicast address<br> <br>backboneKey: Backbone key.<br> <br>secure: If true: Use secure communication (SecureWrapper), else<br>non-secure communication.|
|**Procedure**| <br>If secure == true:<br>`o` Send to the BDUT a SecureWrapper containing a Routing-<br>Indication, L_Data.ind, A_DeviceDescriptor_Read.<br>`o` Wait for a SecureWrapper from the BDUT containing a<br>RoutingIndication, L_Data.ind, A_DeviceDescriptor_-<br>Response.<br>`o` Timeout: TimeoutAppLayerResponse. On timeout: Abort<br>test and return TestFailed.<br> <br>Else:<br>`o` Send to the BDUT a RoutingIndication, L_Data.ind, A_-<br>DeviceDescriptor_Read.<br>`o` Wait for a RoutingIndication, L_Data.ind, A_Device-<br>Descriptor_Response.<br>`o` Timeout: TimeoutAppLayerResponse. On timeout: Abort<br>test and return TestFailed.|
|**Return**||
|**Duration**|TimeoutAppLayerResponse|
|**Open points**||


##### 3.1.6 GlPro_QueryMcTimer()

**Procedure** (receivedTimestamp, localMcTime) = GlPro_QueryMcTimer(multicast**name** Address = NonSystemSetupMulticastAddress, backboneKey = BackboneKey1)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 310 f 376

|Procedure<br>name|(receivedTimestamp, localMcTime) = GlPro QueryMcTimer(multicast-<br>_<br>Address = NonSystemSetupMulticastAddress, backboneKey = Backbone-<br>Key1)|
|---|---|


-----

|Description|Get 'current' mc timer value from BDUT by sending an outdated Timer-<br>_<br>Notify frame and waiting for a TimerNotify (update) response. Of course<br>the return values of all 'get' procedures of volatile data are always outdated<br>by definition. But a returned mc timer value x allows to draw the hard<br>_<br>conclusion that the current mc timer value in the BDUT is always >= x,<br>_<br>which is useful. The less hard conclusion is that the mc timer value of the<br>_<br>BDUT is also <= x + NetworkLatency (less hard because the BDUT may<br>crash and the mc timer may jump ahead spontaneously by up to 1 hour).<br>_<br>When this procedure returns the BDUT has become a time keeper.|
|---|---|
|**Parameter**<br>**description**| <br>multicastAddress: Send and listen on this multicast address.<br> <br>backboneKey: Backbone key.|
|**Procedure**| <br>Execute GlPro_SendTimerNotify(timestamp = 0, multicastAddress =<br>multicastAddress, backboneKey = backboneKey).<br> <br>Execute (receivedTimestamp, localMcTime) = GlPro_ReceiveTimer-<br>Notify(timeout = TimeoutTimerNotifyResponse, multicastAddress =<br>multicastAddress, backboneKey = backboneKey).|
|**Return**|Tuple (receivedTimestamp, localMcTime).|
|**Duration**|TimeoutTimerNotifyResponse|
|**Open points**||


##### 3.1.7 GlPro_SendMcSecureWrapper()

**Procedure** GlPro_SendMcSecureWrapper(timestamp, multicastAddress = Non**name** SystemSetupMulticastAddress, backboneKey = BackboneKey1)

**Description** Send a SecureWrapper containing a dummy payload.

**Parameter** timestamp: Timestamp to put into the SecureWrapper.multicastAddress:
**description** Send SecureWrapper to this multicast address.backboneKey: Use this
key for encryption of the SecureWrapper.

**Procedure** - Send to the BDUT a SecureWrapper containing RoutingIndication
L_Data.ind A_DeviceDescriptor_Response, via multicastAddress,
encrypted using backboneKey, containing timestamp.
`o` Note: We use A_DeviceDescriptor_Response (not A_DeviceDescriptor_Read), as we want no direct response
from the DUT here.

**Return** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 311 f 376

|Procedure<br>name|GlPro SendMcSecureWrapper(timestamp, multicastAddress = Non-<br>_<br>SystemSetupMulticastAddress, backboneKey = BackboneKey1)|
|---|---|
|**Description**|Send a SecureWrapper containing a dummy payload.|
|**Parameter**<br>**description**|timestamp: Timestamp to put into the SecureWrapper.multicastAddress:<br>Send SecureWrapper to this multicast address.backboneKey: Use this<br>key for encryption of the SecureWrapper.|
|**Procedure**| <br>Send to the BDUT a SecureWrapper containing RoutingIndication<br>L_Data.ind A_DeviceDescriptor_Response, via multicastAddress,<br>encrypted using backboneKey, containing timestamp.<br>`o` Note: We use A_DeviceDescriptor_Response (not A_-<br>DeviceDescriptor_Read), as we want no direct response<br>from the DUT here.|
|**Return**|-|


-----

|Duration|0 s|
|---|---|
|**Open points**||


##### 3.1.8 GlPro_TestPeriodicTimerNotify()

**Procedure** GlPro_TestPeriodicTimerNotify(sendTimerNotify, mcTimeOffset, mcTime**name** Shift, expectTimerNotifiy)

**Description** This procedure is used to test different scenarios in which periodic TimerNotify frames from the BDUT are suppressed or are not suppressed. It is
used to test the periodic TimerNotify mechanism of the BDUT.

**Parameter** - sendTimerNotify: May be 0 (send SecureWrapper) or 1 (send
**description** TimerNotify).

            - mcTimeOffset: Allows tests to issue timestamps which constantly
run behind the BDUT (<0) or are in sync with the BDUT (== 0). In
ms.

            - mcTimeShift: Allows tests to issue timestamps which always run
ahead of the BDUT (>0). (mcTimeOffset>0 can not achieve this
since the BDUT will sync itself immediately.) In ms.

            - expectTimerNotify: May be 0 (no TimerNotifies expected, these
should be suppressed), or may be 1 (TimerNotifies expected, not
suppressed).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 312 f 376

|Procedure<br>name|GlPro TestPeriodicTimerNotify(sendTimerNotify, mcTimeOffset, mcTime-<br>_<br>Shift, expectTimerNotifiy)|
|---|---|
|**Description**|This procedure is used to test different scenarios in which periodic Timer-<br>Notify frames from the BDUT are suppressed or are not suppressed. It is<br>used to test the periodic TimerNotify mechanism of the BDUT.|
|**Parameter**<br>**description**| <br>sendTimerNotify: May be 0 (send SecureWrapper) or 1 (send<br>TimerNotify).<br> <br>mcTimeOffset: Allows tests to issue timestamps which constantly<br>run behind the BDUT (<0) or are in sync with the BDUT (== 0). In<br>ms.<br> <br>mcTimeShift: Allows tests to issue timestamps which always run<br>ahead of the BDUT (>0). (mcTimeOffset>0 can not achieve this<br>since the BDUT will sync itself immediately.) In ms.<br> <br>expectTimerNotify: May be 0 (no TimerNotifies expected, these<br>should be suppressed), or may be 1 (TimerNotifies expected, not<br>suppressed).|


-----

|Procedure| Execute GlPro SetupMulticast().<br>_<br> Start recording TimerNotify frames from the BDUT.<br> startTime = CurrentTime().<br> nextSendTime = startTime.<br> While CurrentTime() - startTime <= DurationOfPeriodicTimerNotify-<br>Test:<br>o GlPro SetLocalMcTimer(time = GlPro GetLocalMcTimer() +<br>_ _<br>mcTimeShift) (do not wait, just increase mc timer).<br>_<br>o nextSendTime += MinDelayTimeKeeperPeriodicNotify * 0.9.<br>o Explanation: * 0.9 means: Make sure the test tool is always<br>faster in sending TimerNotify/SecureWrapper than the BDUT<br>is in sending periodic TimerNotifies.<br>o Wait until nextSendTime.<br>o If sendTimerNotify == 1: Execute GlPro SendTimer-<br>_<br>Notify(timestamp = GlPro GetLocalMcTimer() + mcTime-<br>_<br>Offset).<br>o else: Execute GlPro SendMcSecureWrapper(timestamp =<br>_<br>GlPro GetLocalMcTimer() + mcTimeOffset).<br>_<br>o Expectation: Depending on the mcTimeOffset this<br>should/should not suppress the periodic TimerNotify of the<br>BDUT (for both cases of sendTimerNotify).<br> If expectTimerNotify == 0: Verify that no TimerNotify frames have<br>been sent by the BDUT.<br> else: Verify that at least floor(DurationOfPeriodicTimerNotifyTest /<br>MaxDelayTimeFollowerPeriodicNotify) - 1 TimerNotify frames were<br>received.|
|---|---|
|**Return**|-|
|**Duration**|TimeoutTimerNotifyResponse + ConfirmedRestart + DurationOfPeriodic-<br>TimerNotifyTest|
|**Open points**||


##### 3.1.9 GlPro_VerifySecureWrapperIsIgnored()

**Procedure** GlPro_VerifySecureWrapperIsIgnored(multicastAddress = NonSystem**name** SetupMulticastAddress, backboneKey = BackboneKey1)

**Description** Verify that it is possible to make multicast communication in a secure
way

©C i h 1998 2018 KNX A i i V i 1 1 AS P 313 f 376

|Procedure<br>name|GlPro VerifySecureWrapperIsIgnored(multicastAddress = NonSystem-<br>_<br>SetupMulticastAddress, backboneKey = BackboneKey1)|
|---|---|
|**Description**|Verify that it is possible to make multicast communication in a secure<br>way|


-----

|Parameter<br>description| multicastAddress: Send and listen on routing multicast address<br> backboneKey: Backbone key.|
|---|---|
|**Procedure**| <br>Send to the BDUT a SecureWrapper containing a Routing-<br>Indication, L_Data.ind, A_DeviceDescriptor_Read. Use the<br>current mc_timer.<br> <br>Wait for a SecureWrapper from the BDUT containing a Routing-<br>Indication, L_Data.ind, A_DeviceDescriptor_Response. Timeout:<br>TimeoutAppLayerResponse.<br>`o` On timeout: Ok.<br>`o` On received response: Abort test and return TestFailed.|
|**Return**|-|
|**Duration**|TimeoutAppLayerResponse|
|**Open points**||


##### 3.1.10 GlPro_MulticastSetState()

**Procedure** GlPro_MulticastSetState(state, timekeeper)
**name**

**Description** Set multicast state machine in the BDUT to state. When called with
SCHED_PERIODIC the state will persist indefinitely until it is changed by
further actions. When called with SCHED_UPDATE the state will persist for
at least MinDelayTimeFollowerUpdateNotify - NetworkLatency (100 + 200
+ 200 - 50 ms = 450 ms by default), so any test in state SCHED_UPDATE
must be done immediately.Assumptions:

            - mc_timer is synced with BDUTs mc_timer (which is always the case
after a GlPro_SetupMulticast()).

            - UDP packets arrive at the BDUT in the order they were sent (which
is generally not guaranteed, but which is usually the case in wired
LANs without any > L2 switches)).

**Parameter** - state: State which the BDUT should be brought into. Either
**description** SCHED_PERIODIC or SCHED_UPDATE.

            - timekeeper: 0 means: Bring into time keeper state. 1 means: Bring
into time follower state.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 314 f 376

|Procedure<br>name|GlPro MulticastSetState(state, timekeeper)<br>_|
|---|---|
|**Description**|Set multicast state machine in the BDUT to state. When called with<br>SCHED_PERIODIC the state will persist indefinitely until it is changed by<br>further actions. When called with SCHED_UPDATE the state will persist for<br>at least MinDelayTimeFollowerUpdateNotify - NetworkLatency (100 + 200<br>+ 200 - 50 ms = 450 ms by default), so any test in state SCHED_UPDATE<br>must be done immediately.Assumptions:<br> <br>mc_timer is synced with BDUTs mc_timer (which is always the case<br>after a GlPro_SetupMulticast()).<br> <br>UDP packets arrive at the BDUT in the order they were sent (which<br>is generally not guaranteed, but which is usually the case in wired<br>LANs without any > L2 switches)).|
|**Parameter**<br>**description**| <br>state: State which the BDUT should be brought into. Either<br>SCHED_PERIODIC or SCHED_UPDATE.<br> <br>timekeeper: 0 means: Bring into time keeper state. 1 means: Bring<br>into time follower state.|


-----

|Procedure| Execute GlPro SendTimerNotify(timestamp = GlPro GetLocalMc-<br>_ _<br>Timer()).<br> Explanation: Force state SCHED PERIODIC and time follower: This<br>_<br>sends a TimerNotify to the BDUT which is within the SyncLatency-<br>Tolerance. This forces to leave SCHED UPDATE immediately and<br>_<br>go to SCHED PERIODIC, or to stay in SCHED PERIODIC. The<br>_ _<br>BDUT is now a time follower.<br> If timekeeper == 1:<br>o Execute: GlPro QueryMcTimer().<br>_<br>o Explanation: The BDUT is now in state SCHED PERIODIC<br>_<br>and time keeper.<br> If state == SCHED PERIODIC:<br>_<br>o Return.<br> If state == SCHED UPDATE:<br>_<br>o Execute GlPro SendTimerNotify(timestamp = 0).<br>_<br>o Explanation: Force SCHED UPDATE immediately. BDUT is<br>_<br>still a time keeper or time follower as before, until it sent its<br>TimerNotify (earliest in MinDelayTimeKeeperUpdateNotify or<br>MinDelayTimeFollowerUpdateNotify).|
|---|---|
|**Return**|-|
|**Duration**|If timekeeper == 0: 0, else: TimeoutTimerNotifyResponse|
|**Open points**||


##### 3.1.11 GlPro_TestUpdateTimerNotify()

**Procedure name** GlPro_TestUpdateTimerNotify(sendTimerNotify, mcTimeShift,
expectUpdateTimerNotifiy)

**Description** This procedure is used to test the E01-E08 events in state
SCHED_UPDATE. It tests how the BDUT reacts to incoming
TimerNotify/SecureWrapper traffic when it is in state SCHED
UPDATE.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 315 f 376

|Procedure name|GlPro TestUpdateTimerNotify(sendTimerNotify, mcTimeShift,<br>_<br>expectUpdateTimerNotifiy)|
|---|---|
|**Description**|This procedure is used to test the E01-E08 events in state<br>SCHED_UPDATE. It tests how the BDUT reacts to incoming<br>TimerNotify/SecureWrapper traffic when it is in state SCHED<br>UPDATE.|


-----

|Parameter<br>description| sendTimerNotify: May be 0 (send SecureWrapper) or 1<br>(send TimerNotify).<br> mcTimeShift: Allows tests to issue timestamps which run<br>ahead of the BDUT (>0) or which lag behind the BDUT (<<br>0). In ms.<br> expectUpdateTimerNotify: May be 0 (no TimerNotify<br>expected within the update interval) or 1 (TimerNotify<br>expected within the update interval).|
|---|---|
|**Procedure**| <br>Execute GlPro_MulticastSetState(state = SCHED_-<br>UPDATE, timekeeper = 0).<br> <br>Execute GlPro_SetLocalMcTimer(time = GlPro_GetLocal-<br>McTimer() + mcTimeShift).<br> <br>If sendTimerNotify:<br>`o` Execute GlPro_SendTimerNotify(timestamp = Gl-<br>Pro_GetLocalMcTimer()).<br>`o` Explanation: This causes an E01/E02/E03/E04<br>event while we are still in state SCHED_UPDATE in<br>the BDUT.<br> <br>else:<br>`o` Execute GlPro_SendMcSecureWrapper(timestamp<br>= GlPro_GetLocalMcTimer()).<br>`o` Explanation: This causes an E05/E06/E07/E08<br>event while we are still in state SCHED_UPDATE in<br>the BDUT.<br> <br>Set t1 = GlPro_GetLocalMcTimer().<br> <br>Execute (receivedTimestamp, localMcTime) = GlPro_-<br>ReceiveTimerNotify(timeout = TimeoutPeriodicTimer-<br>Notify).<br> <br>If (expectUpdateTimerNotify == 1) XOR (localMcTime - t1<br>+ NetworkLatency < MinDelayTimeKeeperPeriodicNotify):<br> Abort test and return test failed.  <br> Explanation: This means one of these two error conditions<br>occurred:  <br> We expected a TimerNotify update (BDUT stays in<br>SCHED_UPDATE), but we did not receive an update.  <br> We expected the scheduled update to be cancelled (BDUT<br>went back to SCHED_PERIODIC), but we received an update.|
|**Return**|<br>-|
|**Duration**|TimeoutPeriodicTimerNotify|
|**Open**<br>**points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 316 f 376


-----

##### 3.1.12 GlPro_TestBecomingTimeFollower()

**Procedure name** GlPro_TestBecomingTimeFollower( mcTimeShift)

**Description** This procedure is used to test becoming time follower on
events E01 and E02 in states SCHED_PERIODIC and
SCHED_UPDATE.

**Parameter description** - mcTimeShift: Allows tests to issue timestamps which run
ahead of the BDUT (>0) or which lag behind the BDUT (< 0).
In ms.

**Procedure**    - For state in SCHED_PERIODIC, SCHED_UPDATE:

                               - Execute GlPro_MulticastSetState(state =
state, timekeeper = 1).

                               - Execute GlPro_SetLocalMcTimer(time = GlPro_GetLocalMcTimer() + mcTimeShift).

                               - Execute GlPro_SendTimerNotify(timestamp
= GlPro_GetLocalMcTimer()).

                               - Explanation: This causes an E01 event in
the BDUT. BDUT should now be in SCHED_PERIODIC and a time follower.

                               - Set t1 = GlPro_GetLocalMcTimer().

                               - Execute (receivedTimestamp, localMcTime)
= GlPro_ReceiveTimerNotify(timeout =
TimeoutPeriodicTimerNotify).

                               - If localMcTime - t1 is not in [MinDelayTimeFollowerPeriodicNotify - NetworkLatency ..
MaxDelayTimeFollowerPeriodicNotify +
NetworkLatency]:

                               - Abort test and return TestFailed.

                               - Explanation: The received TimerNotify was
not in the periodic+time-follower time window.

**Return**          
**Duration** TimeoutPeriodicTimerNotify +
TimeoutTimerNotifyResponse

**Open**
**points**

### 3.2 Unicast

##### 3.2.1 GlPro_SetupUnicast()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 317 f 376

|Procedure name|GlPro TestBecomingTimeFollower( mcTimeShift)<br>_|
|---|---|
|**Description**|<br>This procedure is used to test becoming time follower on<br>events E01 and E02 in states SCHED_PERIODIC and<br>SCHED_UPDATE.|
|**Parameter description**|<br> mcTimeShift: Allows tests to issue timestamps which run<br>ahead of the BDUT (>0) or which lag behind the BDUT (< 0).<br>In ms.|
|**Procedure**| For state in SCHED_PERIODIC, SCHED_UPDATE:<br> Execute GlPro_MulticastSetState(state =<br>state, timekeeper = 1).  <br> Execute GlPro_SetLocalMcTimer(time = Gl-<br>Pro_GetLocalMcTimer() + mcTimeShift).  <br> Execute GlPro_SendTimerNotify(timestamp<br>= GlPro_GetLocalMcTimer()).  <br> Explanation: This causes an E01 event in<br>the BDUT. BDUT should now be in SCHED_-<br>PERIODIC and a time follower.  <br> Set t1 = GlPro_GetLocalMcTimer().  <br> Execute (receivedTimestamp, localMcTime)<br>= GlPro_ReceiveTimerNotify(timeout =<br>TimeoutPeriodicTimerNotify).  <br> If localMcTime - t1 is not in [MinDelayTime-<br>FollowerPeriodicNotify - NetworkLatency ..<br>MaxDelayTimeFollowerPeriodicNotify +<br>NetworkLatency]:  <br> Abort test and return TestFailed.  <br> Explanation: The received TimerNotify was<br>not in the periodic+time-follower time window.|
|**Return**|-|
|**Duration**|TimeoutPeriodicTimerNotify +<br>TimeoutTimerNotifyResponse|
|**Open**<br>**points**||


-----

|Procedure name|GlPro SetupUnicast(deviceAuthenticationCode = Fdsk,<br>_<br>passwordHashUser1 = PasswordHashDefault, userId = 0,<br>passwordHash = 0, userId2 = 0, passwordHash2 = 0)|
|---|---|
|**Description**|Common setup for unicast tests.|
|**Parameter**<br>**description**| deviceAuthenticationCode: Device authentication code.  <br> passwordHashUser1: Password hash of management user.  <br> userId: Optional user id of a non-management user. Only used to set<br>'passwordHash'. 0 means unused.  <br> passwordHash: Password hash for user 'userId'.|
|**Procedure**| Execute PropSetup_Unicast(deviceAuthenticationCode =<br>deviceAuthenticationCode, passwordHashUser1 = password-<br>HashUser1, userId = userId, passwordHash = passwordHash,<br>userId2 = userId2, passwordHash2 = passwordHash2).|
|**Return**|-|
|**Duration**|0 s|
|**Open**<br>**points**||


##### 3.2.2 GlPro_CleanupUnicast()

**Procedure name** GlPro_CleanupUnicast()

**Description** Clean up after secure unicast tests.

                    - Close all open or half-closed TCP connections. (A half-closed TCP
connection here refers to a TCP connection which was established
and already shutdown() by the BDUT (i.e. recv() returns 0) but which
was not yet closed by the test tool.

                    - This implicitly closes all open secure sessions in these TCP
connections. We rely on this behavior in the BDUT and this behavior
is explicitly tested in test 2.2.9.

                    - Close all UDP based KNX connections. (The TCP based KNX
connections are implicitly closed by closing the TCP connection.)

                    - Reset all security switches to their non-secure defaults, in particular
PID_SECURED_SERVICE_FAMILIES for routing, tunnelling and
device management, PID_SECURITY_MODE and PID_IP_SBC_CONTROL.
This procedure generally ignores all errors.

**Parameter**    **description**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 318 f 376

|Procedure name|GlPro CleanupUnicast()<br>_|
|---|---|
|**Description**|<br>Clean up after secure unicast tests.<br> Close all open or half-closed TCP connections. (A half-closed TCP<br>connection here refers to a TCP connection which was established<br>and already shutdown() by the BDUT (i.e. recv() returns 0) but which<br>was not yet closed by the test tool.  <br> This implicitly closes all open secure sessions in these TCP<br>connections. We rely on this behavior in the BDUT and this behavior<br>is explicitly tested in test 2.2.9.  <br> Close all UDP based KNX connections. (The TCP based KNX<br>connections are implicitly closed by closing the TCP connection.)  <br> Reset all security switches to their non-secure defaults, in particular<br>PID_SECURED_SERVICE_FAMILIES for routing, tunnelling and<br>device management, PID_SECURITY_MODE and PID_IP_SBC_-<br>CONTROL.  <br>This procedure generally ignores all errors.|
|**Parameter**<br>**description**|-|


-----

|Procedure| Close all open or half-closed TCP connections. Ignore any<br>errors.<br> Close all UDP based KNX connections, if any.<br> Execute PropSetup NonSecure(ignoreErrors = true, fall-<br>_<br>BackToSecureSession = true).|
|---|---|
|**Return**|-|
|**Duration**|ConfirmedRestart|
|**Open**<br>**points**||


##### 3.2.3 GlPro_SecureSessionSetup()

**Procedure** GlPro_SecureSessionSetup(userId, passwordHash = PasswordHash**name** Default, deviceAuthenticationCode = Fdsk, openTcp = 1)

**Description** Setup secure unicast session using SessionRequest, Session Response,
SessionAuthenticate and SessionStatus. When this procedure returns a
SessionStatus code of Status_Authentication_Success has just been
received and normal communication through the secure session can
commence.

**Parameter** userId: User id of the secure session. 1 means management
**description** level.passwordHash: 16 byte hash of the password belonging to the userIddeviceAuthenticationCode: 16 byte device authentication codeopenTcp:
1 == open new TCP connection for this session. 0 == use an existing TCP
connection informally specified in the callers context.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 319 f 376

|Procedure<br>name|GlPro SecureSessionSetup(userId, passwordHash = PasswordHash-<br>_<br>Default, deviceAuthenticationCode = Fdsk, openTcp = 1)|
|---|---|
|**Description**|Setup secure unicast session using SessionRequest, Session Response,<br>SessionAuthenticate and SessionStatus. When this procedure returns a<br>SessionStatus code of Status_Authentication_Success has just been<br>received and normal communication through the secure session can<br>commence.|
|**Parameter**<br>**description**|userId: User id of the secure session. 1 means management<br>level.passwordHash: 16 byte hash of the password belonging to the user-<br>IddeviceAuthenticationCode: 16 byte device authentication codeopenTcp:<br>1 == open new TCP connection for this session. 0 == use an existing TCP<br>connection informally specified in the callers context.|


-----

|Procedure| If openTcp == 1:<br>o Open new TCP connection and use it in the following.<br> If openTcp == 0:<br>o Use a specific TCP connection which is informally specified in<br>the callers context.<br> Generate new random Curve25519 public/private key pair X /<br>X private.<br>_<br> Send via the Testtool a SessionRequest with the new public key X.<br> Wait for the BDUT to send the SessionResponse. Timeout Timeout-<br>SessionResponse. On timeout: Abort test and return TestFailed.<br> Check the resulting SessionResponse of BDUT: (Specification:<br>AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.7.2 (Session-<br>Response / Binary format))<br>o Correct header length (06h) and protocol version (10h);<br>o Correct Service Type Identifier (0952h);<br>o Correct Total Length 38h.<br>o Correct Secure Session Identifier: it may not be 00h.<br>o A Diffie-Hellman Server public key Y which is: Not all zero.<br>Different from X. Different from all values Y seen so far in<br>previous tests. (Specification: AN159 v05 KNXnet-IP Secure<br>DV (2016.11.18) 2.2.3.1.1 (Session key)). (The requirement<br>'Not all zero. Different from X' and 'different from all values Y<br>seen so far in previous tests' is just a pragmatic way of tests<br>against a trivially non-random public key (e.g. a hardcoded<br>key).)<br>o The MAC in line with the 'deviceAuthenticationCode' (device<br>authentication code). (Specification: AN159 v05 KNXnet-IP<br>Secure DV (2016.11.18) 2.2.3.7.4 (Authentication), 2.2.3.7.5<br>(Reception and decoding))<br> Send via the Testtool a Secure Wrapper frame encrypted with the<br>negotiated session key containing a SessionAuthenticate frame with<br>userId and a MAC (encrypted using passwordHash).<br> Wait for the BDUT to send a Secure Wrapper Frame containing a<br>Session Status Frame. Timeout TimeoutSessionStatusAuthenticate.<br>On timeout: Abort test and return TestFailed.<br> Check the resulting Session Status of the BDUT: (Specification:<br>AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.9.2<br>(SESSION STATUS / Binary format))<br>_<br>o Correct header length (06h) and protocol version (10h);<br>o Correct Service Type Identifier (0954h);<br>o Correct Total Length 08h<br>o The Status Code Status Authentication Success (00h);<br>_ _|
|---|---|
|**Return**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 320 f 376


-----

|Duration|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate|
|---|---|
|**Open points**||


##### 3.2.4 GlPro_VerifySecureSessionIsFunctional()

**Procedure** GlPro_VerifySecureSessionIsFunctional()
**name**

**Description** Verify that the currently open secure session is functional, which means
that communication is possible through the secure session and the BDUT
is responsive. This is checked by sending a dummy request to the BDUT
and waiting for the response.

**Parameter** **description**

**Procedure** - Send a Secure Wrapper Frame encrypted with the negotiated
session key, containing a DescriptionRequest.

            - Wait for a SecureWrapper frame containing a matching
DescriptionResponse. Timeout: TimeoutDescriptionResponse. On
timeout: Abort test and return TestFailed.

**Return** 
**Duration** TimeoutDescriptionResponse

**Open points**

##### 3.2.5 GlPro_WaitForSessionStatus()

**Procedure** GlPro_WaitForSessionStatus(timeout, expectedStatus)
**name**

**Description** Wait for a SecureWrapper containing a SessionStatus with a status of
'expectedStatus', from the BDUT.

**Parameter** timeout: Time to wait for SessionStatus.expectedStatus: Fail if the
**description** received SessionStatus does not contain expectedStatus.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 321 f 376

|Procedure<br>name|GlPro VerifySecureSessionIsFunctional()<br>_|
|---|---|
|**Description**|Verify that the currently open secure session is functional, which means<br>that communication is possible through the secure session and the BDUT<br>is responsive. This is checked by sending a dummy request to the BDUT<br>and waiting for the response.|
|**Parameter**<br>**description**|-|
|**Procedure**| <br>Send a Secure Wrapper Frame encrypted with the negotiated<br>session key, containing a DescriptionRequest.<br> <br>Wait for a SecureWrapper frame containing a matching<br>DescriptionResponse. Timeout: TimeoutDescriptionResponse. On<br>timeout: Abort test and return TestFailed.|
|**Return**|-|
|**Duration**|TimeoutDescriptionResponse|
|**Open points**||

|Procedure<br>name|GlPro WaitForSessionStatus(timeout, expectedStatus)<br>_|
|---|---|
|**Description**|Wait for a SecureWrapper containing a SessionStatus with a status of<br>'expectedStatus', from the BDUT.|
|**Parameter**<br>**description**|timeout: Time to wait for SessionStatus.expectedStatus: Fail if the<br>received SessionStatus does not contain expectedStatus.|


-----

|Procedure| Wait for the BDUT to send a SecureWrapper containing a<br>SessionStatus with the Status 'expectedStatus'. Timeout:<br>'timeout'. On timeout: Abort test and return TestFailed.<br> If received status is not expectedStatus: Abort test and return<br>TestFailed.|
|---|---|
|**Return**|-|
|**Duration**|timeout|
|**Open points**||


##### 3.2.6 GlPro_VerifySessionIsClosed()

**Procedure** GlPro_VerifySessionIsClosed()
**name**

**Description** Verify that a secure session is closed by sending a dummy request to the
BDUT which the BDUT should silently ignore.

**Parameter** **description**

**Procedure** - Send a SecureWrapper Frame encrypted with the negotiated
session key, containing a DescriptionRequest.

            - Wait for a SecureWrapper frame containing a matching
DescriptionResponse. Timeout: TimeoutDescriptionResponse. On
timeout: Ok. On received DescriptionResponse: Abort test and
return TestFailed.

**Return** 
**Duration** TimeoutDescriptionResponse

**Open points**

##### 3.2.7 GlPro_CloseSecureSession()

**Procedure name** GlPro_CloseSecureSession(closeTcp = 1)

**Description** Close secure session. (There is no confirmation.) Optionally close
surrounding TCP connection.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 322 f 376

|Procedure<br>name|GlPro VerifySessionIsClosed()<br>_|
|---|---|
|**Description**|Verify that a secure session is closed by sending a dummy request to the<br>BDUT which the BDUT should silently ignore.|
|**Parameter**<br>**description**|-|
|**Procedure**| <br>Send a SecureWrapper Frame encrypted with the negotiated<br>session key, containing a DescriptionRequest.<br> <br>Wait for a SecureWrapper frame containing a matching<br>DescriptionResponse. Timeout: TimeoutDescriptionResponse. On<br>timeout: Ok. On received DescriptionResponse: Abort test and<br>return TestFailed.|
|**Return**|-|
|**Duration**|TimeoutDescriptionResponse|
|**Open points**||

|Procedure name|GlPro CloseSecureSession(closeTcp = 1)<br>_|
|---|---|
|**Description**|<br>Close secure session. (There is no confirmation.) Optionally close<br>surrounding TCP connection.|


-----

|Parameter<br>description|-|
|---|---|
|**Procedure**| <br>Send to the BDUT a Secure Wrapper containing a Session-<br>Status with the Status 'Status_Close'.<br>`o` If closeTcp == 1:<br> <br>Close TCP connection.|
|**Return**|-|
|**Duration**|0 s|
|**Open points**||


##### 3.2.8 GlPro_TestSecureSessionSetup()

**Procedure** GlPro_TestSecureSessionSetup(userId, deviceAuthenticationCode =
**name** Fdsk)

**Description** Test secure session creation, make sure the session actually works, and
close the secure session.

**Parameter** userId: User id for the secure session. (An empty password is
**description** assumed.)deviceAuthenticationCode: Device authentication code of the
BDUT.

**Procedure** - Setup secure session: Execute the procedure GlPro_SecureSessionSetup(userId = userId, deviceAuthenticationCode =
deviceAuthenticationCode).

             - Check that the session actually works: Execute GlPro_VerifySecureSessionIsFunctional().

             - Close secure session: Execute GlPro_CloseSecureSession().

**Return** 
**Duration** TimeoutSessionResponse + TimeoutSessionStatusAuthenticate + 2 *
TimeoutDescriptionResponse

**Open points**

##### 3.2.9 GlPro_SecureSessionRequestResponse()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 323 f 376

|Procedure<br>name|GlPro TestSecureSessionSetup(userId, deviceAuthenticationCode =<br>_<br>Fdsk)|
|---|---|
|**Description**|Test secure session creation, make sure the session actually works, and<br>close the secure session.|
|**Parameter**<br>**description**|userId: User id for the secure session. (An empty password is<br>assumed.)deviceAuthenticationCode: Device authentication code of the<br>BDUT.|
|**Procedure**| <br>Setup secure session: Execute the procedure GlPro_Secure-<br>SessionSetup(userId = userId, deviceAuthenticationCode =<br>deviceAuthenticationCode).<br> <br>Check that the session actually works: Execute GlPro_Verify-<br>SecureSessionIsFunctional().<br> <br>Close secure session: Execute GlPro_CloseSecureSession().|
|**Return**|-|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate + 2 *<br>TimeoutDescriptionResponse|
|**Open points**||


-----

|Procedure<br>name|GlPro SecureSessionRequestResponse(deviceAuthenticationCode =<br>_<br>Fdsk)|
|---|---|
|**Description**|This is the first half of the secure session setup: SessionRequest and<br>SessionResponse. The SessionAuthenticate is done separately by the<br>caller (or intentionally not done).|
|**Parameter**<br>**description**|deviceAuthenticationCode: Device authentication code.|
|**Procedure**| <br>Generate new random Curve25519 public/private key pair X /<br>X_private.<br> <br>Send via the Testtool a SessionRequest with the new public key X.<br> <br>Wait for the BDUT to send the SessionResponse. Timeout Timeout-<br>SessionResponse. On timeout: Abort test and return TestFailed.<br> <br>Check the resulting SessionResponse of BDUT: (Specification:<br>AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.7.2 (Session-<br>Response / Binary format))<br>`o` Correct header length (06h) and protocol version (10h);<br>`o` Correct Total Length 38h<br>`o` Correct Secure Session Identifier: it may not be 00h<br>`o` A Diffie-Hellman Server public key Y which is: Not all zero.<br>Different from X. Different from all values Y seen so far in<br>previous tests. (Specification: AN159 v05 KNXnet-IP Secure<br>DV (2016.11.18) 2.2.3.1.1 (Session key)). (The requirement<br>'Not all zero. Different from X' and 'different from all values Y<br>seen so far in previous tests' is just a pragmatic way of tests<br>against a trivially non-random public key (e.g. a hardcoded<br>key).)<br>`o` The MAC in line with the 'deviceAuthenticationCode' (device<br>authentication code). (Specification: AN159 v05 KNXnet-IP<br>Secure DV (2016.11.18) 2.2.3.7.4 (Authentication), 2.2.3.7.5<br>(Reception and decoding))|
|**Return**|-|
|**Duration**|TimeoutSessionResponse|
|**Open points**||


##### 3.2.10 GlPro_VerifyBdutIsResponsiveViaTcp()

**Procedure** GlPro_VerifyBdutIsResponsiveViaTcp()
**name**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 324 f 376

|Procedure<br>name|GlPro VerifyBdutIsResponsiveViaTcp()<br>_|
|---|---|


-----

|Description|Verify that the BDUT responds to a dummy request sent via TCP,<br>outside of any secure session and without security. This proves that the<br>BDUT did not crash.|
|---|---|
|**Parameter**<br>**description**||
|**Procedure**| <br>Use implied TCP connection of the surrounding context.<br> <br>Send a DescriptionRequest to the BDUT via TCP.<br> <br>Wait for a DescriptionResponse. Timeout: TimeoutDescription-<br>Response.<br>`o` On timeout: Abort test and return TestFailed.|
|**Return**|-|
|**Duration**|TimeoutDescriptionResponse|
|**Open points**||


##### 3.2.11 GlPro_SecureSessionSetupTrySecondSession()

**Procedure** GlPro_SecureSessionSetupTrySecondSession()
**name**

**Description** Try to establish a secure session with any user id. Failure to establish a
secure session are NOT handled as a test failure. The caller must handle
such errors.

Not supporting multiple concurrent secure sessions is valid. This
procedure is intended to be used after a primary secure session was
already established. This procedure is intended to be used from tests
which only make sense when multiple concurrent secure session are
supported. These tests should pass if no second secure session can be
established.

**Parameter** **description**

**Procedure** - GlPro_SecureSessionSetupTry(userId = 1).

            - If a secure session could be established, return without error.

            - GlPro_SecureSessionSetupTry(userId = TunnellingUserA).

            - If a secure session could be established, return without error.

            - Return without error. The caller should abort the test and return
TestPassed.

**Return** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 325 f 376

|Procedure<br>name|GlPro SecureSessionSetupTrySecondSession()<br>_|
|---|---|
|**Description**|Try to establish a secure session with any user id. Failure to establish a<br>secure session are NOT handled as a test failure. The caller must handle<br>such errors.<br>Not supporting multiple concurrent secure sessions is valid. This<br>procedure is intended to be used after a primary secure session was<br>already established. This procedure is intended to be used from tests<br>which only make sense when multiple concurrent secure session are<br>supported. These tests should pass if no second secure session can be<br>established.|
|**Parameter**<br>**description**|-|
|**Procedure**| <br>GlPro_SecureSessionSetupTry(userId = 1).<br> <br>If a secure session could be established, return without error.<br> <br>GlPro_SecureSessionSetupTry(userId = TunnellingUserA).<br> <br>If a secure session could be established, return without error.<br> <br>Return without error. The caller should abort the test and return<br>TestPassed.|
|**Return**|-|


-----

|Duration|2 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate)|
|---|---|
|**Open points**||


##### 3.2.12 GlPro_SecureSessionSetupTry()

**Procedure** GlPro_SecureSessionSetupTry()
**name**

**Description** Try to establish a secure session. Do not abort the test and do not fail if this
fails. The caller is responsible for handling failing to establish a secure
session.

**Parameter** userId: User id for the secure session.
**description**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 326 f 376

|Procedure<br>name|GlPro SecureSessionSetupTry()<br>_|
|---|---|
|**Description**|Try to establish a secure session. Do not abort the test and do not fail if this<br>fails. The caller is responsible for handling failing to establish a secure<br>session.|
|**Parameter**<br>**description**|userId: User id for the secure session.|


-----

            - Send via the Testtool a SessionRequest with the new public key X.

            - Wait for the BDUT to send the SessionResponse. Timeout TimeoutSessionResponse.
`o` On timeout: Return without error.

            - Check the resulting SessionResponse of BDUT: (Specification:
AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.7.2 (SessionResponse / Binary format))
`o` Correct header length (06h) and protocol version (10h);
`o` Correct Service Type Identifier (0952h);
`o` Correct Total Length 38h
`o` Correct Secure Session Identifier: it may not be 00h
`o` A Diffie-Hellman Server public key Y which is: Not all zero.
Different from X. Different from all values Y seen so far in
previous tests. (Specification: AN159 v05 KNXnet-IP Secure
DV (2016.11.18) 2.2.3.1.1 (Session key)). (The requirement
'Not all zero. Different from X' and 'different from all values Y
seen so far in previous tests' is just a pragmatic way of tests
against a trivially non-random public key (e.g. a hardcoded
key).)
`o` The MAC in line with the 'deviceAuthenticationCode' (device
authentication code). (Specification: AN159 v05 KNXnet-IP
Secure DV (2016.11.18) 2.2.3.7.4 (Authentication), 2.2.3.7.5
(Reception and decoding))

            - Send via the Testtool a Secure Wrapper frame encrypted with the
negotiated session key containing a SessionAuthenticate frame with
userId and a MAC (encrypted using passwordHash).

            - Wait for the BDUT to send a Secure Wrapper Frame containing a
Session Status Frame. Timeout TimeoutSessionStatusAuthenticate.
`o` On timeout: Return without error.

            - Check the resulting Session Status of the BDUT:
(Specification: AN159 v05 KNXnet-IP Secure DV
(2016.11.18) 2.2.3.9.2 (SESSION_STATUS / Binary format))
`o` On Status Code Status_Authentication_Success (00h):
Return without error.
`o` On any other Status Code: Return without error.

**Return** 
**Duration** 2 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate)

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 327 f 376

|Procedure| (Use the TCP connection implied by the context.)<br> Generate new random Curve25519 public/private key pair X /<br>X private.<br>_<br> Send via the Testtool a SessionRequest with the new public key X.<br> Wait for the BDUT to send the SessionResponse. Timeout Timeout-<br>SessionResponse.<br>o On timeout: Return without error.<br> Check the resulting SessionResponse of BDUT: (Specification:<br>AN159 v05 KNXnet-IP Secure DV (2016.11.18) 2.2.3.7.2 (Session-<br>Response / Binary format))<br>o Correct header length (06h) and protocol version (10h);<br>o Correct Service Type Identifier (0952h);<br>o Correct Total Length 38h<br>o Correct Secure Session Identifier: it may not be 00h<br>o A Diffie-Hellman Server public key Y which is: Not all zero.<br>Different from X. Different from all values Y seen so far in<br>previous tests. (Specification: AN159 v05 KNXnet-IP Secure<br>DV (2016.11.18) 2.2.3.1.1 (Session key)). (The requirement<br>'Not all zero. Different from X' and 'different from all values Y<br>seen so far in previous tests' is just a pragmatic way of tests<br>against a trivially non-random public key (e.g. a hardcoded<br>key).)<br>o The MAC in line with the 'deviceAuthenticationCode' (device<br>authentication code). (Specification: AN159 v05 KNXnet-IP<br>Secure DV (2016.11.18) 2.2.3.7.4 (Authentication), 2.2.3.7.5<br>(Reception and decoding))<br> Send via the Testtool a Secure Wrapper frame encrypted with the<br>negotiated session key containing a SessionAuthenticate frame with<br>userId and a MAC (encrypted using passwordHash).<br> Wait for the BDUT to send a Secure Wrapper Frame containing a<br>Session Status Frame. Timeout TimeoutSessionStatusAuthenticate.<br>o On timeout: Return without error.<br> Check the resulting Session Status of the BDUT:<br>(Specification: AN159 v05 KNXnet-IP Secure DV<br>(2016.11.18) 2.2.3.9.2 (SESSION STATUS / Binary format))<br>_<br>o On Status Code Status Authentication Success (00h):<br>_ _<br>Return without error.<br>o On any other Status Code: Return without error.|
|---|---|
|**Return**|-|
|**Duration**|2 * (TimeoutSessionResponse + TimeoutSessionStatusAuthenticate)|
|**Open points**||


-----

### 3.3 IP System Broadcast

##### 3.3.1 GlPro_SetupSystemBroadcast()

**Procedure** GlPro_SetupSystemBroadcast( securityMode = none, multicastAddress =
**name** none, backboneKey = none, progMode = none, sbcMode = none)

**Description** Common setup for system broadcast tests.

**Parameter** - securityMode: If not 'none': Set PID_SECURITY_MODE to
**description** securityMode.

            - multicastAddress: If not 'none': Set PID_ROUTING_MULTICAST_ADDRESS and set PID_SECURED_SERVICE_FAMILIES[
Routing] = 0 or 1 (for backBoneKey being 'none' or not 'none',
respectively).

            - backboneKey: If not 'none': Set PID_BACKBONE_KEY to
backboneKey.

            - progMode: If not 'none': Set PID_PROGMODE to progMode.

            - sbcMode: If not 'none': Set PID_IP_SBC_CONTROL to sbcMode.

**Procedure** - Execute PropSetup_SystemBroadcast( securityMode = securityMode, multicastAddress = multicastAddress, backboneKey =
backboneKey, progMode = progMode, sbcMode = sbcMode)

**Return** 
**Duration** ConfirmedRestart

**Open points**

##### 3.3.2 GlPro_CleanupSystemBroadcast()

**Procedure name** GlPro_CleanupSystemBroadcast()

**Description** Common cleanup after system broadcast tests.

**Parameter** **description**

**Procedure** - Close all open or half-closed TCP connections. Ignore any
errors.

               - Execute PropSetup_NonSecure(ignoreErrors = true, fallBackToSecureSession = true).

**Return** 
©C i h 1998 2018 KNX A i i V i 1 1 AS P 328 f 376

|Procedure<br>name|GlPro SetupSystemBroadcast( securityMode = none, multicastAddress =<br>_<br>none, backboneKey = none, progMode = none, sbcMode = none)|
|---|---|
|**Description**|Common setup for system broadcast tests.|
|**Parameter**<br>**description**| <br>securityMode: If not 'none': Set PID_SECURITY_MODE to<br>securityMode.<br> <br>multicastAddress: If not 'none': Set PID_ROUTING_MULTICAST_-<br>ADDRESS and set PID_SECURED_SERVICE_FAMILIES[<br>Routing] = 0 or 1 (for backBoneKey being 'none' or not 'none',<br>respectively).<br> <br>backboneKey: If not 'none': Set PID_BACKBONE_KEY to<br>backboneKey.<br> <br>progMode: If not 'none': Set PID_PROGMODE to progMode.<br> <br>sbcMode: If not 'none': Set PID_IP_SBC_CONTROL to sbcMode.|
|**Procedure**| <br> Execute PropSetup_SystemBroadcast( securityMode = security-<br>Mode, multicastAddress = multicastAddress, backboneKey =<br>backboneKey, progMode = progMode, sbcMode = sbcMode)|
|**Return**|-|
|**Duration**|ConfirmedRestart|
|**Open points**||

|Procedure name|GlPro CleanupSystemBroadcast()<br>_|
|---|---|
|**Description**|<br>Common cleanup after system broadcast tests.|
|**Parameter**<br>**description**|-|
|**Procedure**| <br>Close all open or half-closed TCP connections. Ignore any<br>errors.<br> <br>Execute PropSetup_NonSecure(ignoreErrors = true, fallBack-<br>ToSecureSession = true).|
|**Return**|-|


-----

|Duration|0 s|
|---|---|
|**Open points**||


##### 3.3.3 GlPro_SendRoutingSystemBroadcast()

**Procedure name** GlPro_SendRoutingSystemBroadcast(hop = 6, pdu, mcaddr = SystemSetupMulticastAddress)

**Description** Send a RoutingSystemBroadcast frame via IP to the BDUT.

**Parameter** hop: hop_count to use for sending.
**description**

pdu: Inner payload to be put into the system broadcast frame.mcaddr:
Multicast address to send the system broadcast to.

**Procedure** - Send to the multicast address 'mcaddr' (and so to the BDUT) a
RoutingSystemBroadcast frame with:
`o` Inner cEMI message with PDU 'pdu' and hop_count =
hop.

**Return** 
**Duration** 0 s

**Open points**

##### 3.3.4 GlPro_SendTpSystemBroadcast()

**Procedure name** GlPro_SendTpSystemBroadcast(hop = 6, pdu)

**Description** Send a broadcast telegram via TP.

**Parameter** hop: hop_count to use for sending.
**description**

pdu: Payload to be put into the broadcast telegram.

**Procedure** - Send to the BDUT via TP a broadcast message with the PDU
'pdu'. (With group address 0 (broadcast) and hop_count = hop.)

**Return** 
**Duration** 0 s

©C i h 1998 2018 KNX A i i V i 1 1 AS P 329 f 376

|Procedure name|GlPro SendRoutingSystemBroadcast(hop = 6, pdu, mcaddr = System-<br>_<br>SetupMulticastAddress)|
|---|---|
|**Description**|Send a RoutingSystemBroadcast frame via IP to the BDUT.|
|**Parameter**<br>**description**|hop: hop_count to use for sending.<br> pdu: Inner payload to be put into the system broadcast frame.mcaddr:<br>Multicast address to send the system broadcast to.|
|**Procedure**| <br>Send to the multicast address 'mcaddr' (and so to the BDUT) a<br>RoutingSystemBroadcast frame with:<br>`o` Inner cEMI message with PDU 'pdu' and hop_count =<br>hop.|
|**Return**|-|
|**Duration**|0 s|
|**Open points**||

|Procedure name|GlPro SendTpSystemBroadcast(hop = 6, pdu)<br>_|
|---|---|
|**Description**|<br>Send a broadcast telegram via TP.|
|**Parameter**<br>**description**|hop: hop_count to use for sending.<br>pdu: Payload to be put into the broadcast telegram.|
|**Procedure**| <br>Send to the BDUT via TP a broadcast message with the PDU<br>'pdu'. (With group address 0 (broadcast) and hop_count = hop.)|
|**Return**|-|
|**Duration**|0 s|


-----

|Open points|Col2|
|---|---|


##### 3.3.5 GlPro_WaitUntilResponsiveAfterDomainAddressWrite()

**Procedure** GlPro_WaitUntilResponsiveAfterDomainAddressWrite(multicastAddress,
**name** secureRouting, backboneKey)

**Description** Wait until the device is responsive again after writing the domain address
(i.e. multicast address and potentially the backbone key).

This procedure is used for two alternative purposes:

            - Verify that a new domain address was accepted.

            - Verify that a new domain address was not accepted.

**Parameter** - multicastAddress: New multicast address (new domain address).
**description** - secureRouting: If 1 assume secure multicast routing communication.

            - backboneKey: Backbone key when using secure routing.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 330 f 376

|Procedure<br>name|GlPro WaitUntilResponsiveAfterDomainAddressWrite(multicastAddress,<br>_<br>secureRouting, backboneKey)|
|---|---|
|**Description**|Wait until the device is responsive again after writing the domain address<br>(i.e. multicast address and potentially the backbone key).<br>This procedure is used for two alternative purposes:<br> <br>Verify that a new domain address was accepted.<br> <br>Verify that a new domain address was not accepted.|
|**Parameter**<br>**description**| <br>multicastAddress: New multicast address (new domain address).<br> <br>secureRouting: If 1 assume secure multicast routing communication.<br> <br>backboneKey: Backbone key when using secure routing.|


-----

|Procedure| Wait for WaitTimeAfterWritingDomainAddress.<br>o Explanation: While blindly waiting we may lose the initial<br>TimerNotify from the BDUT if secureRouting = 1, but this is<br>necessary for the case where we want to verify that a domain<br>address was not accepted by the BDUT. A lost initial Timer-<br>Notify is harmless because the BDUT will send a periodic<br>TimerNotify soon. We just need to make sure to wait long<br>enough for it below (see max(TimeoutAfterWritingDomain-<br>Address, TimeoutPeriodicTimerNotify)).<br> If secureRouting == 1:<br>o Explanation: When using secureRouting we cannot just send<br>a request to the BDUT because the test-tool and the BDUT<br>are potentially not synchronized. We also cannot synchronize<br>immediately from the test-tools perspective because the<br>BDUT first needs to become responsive. Because the BDUT<br>also first needs to synchronize with the rest of the world as<br>the very first thing after joining a new IP domain, we simply<br>wait for the first TimerNotify from the test tool and answer it.<br>o (receivedTimestamp, localMcTime) = GlPro ReceiveTimer-<br>_<br>Notify(timeout = max(TimeoutAfterWritingDomainAddress,<br>TimeoutPeriodicTimerNotify), multicastAddress = multicast-<br>Address, backboneKey = backboneKey)<br>o On timeout: Abort test and return TestFailed.<br>o GlPro SetLocalMcTimer(time = receivedTimestamp +<br>_<br>latencyTolerance).<br>o Explanation: Always be ahead of BDUT to always update its<br>mc timer to force it to leave its "wait for update timestamp"<br>_<br>loop.<br>o GlPro SendTimerNotify(timestamp = GlPro GetLocalMc-<br>_ _<br>Timer(), multicastAddress = multicastAddress, backboneKey<br>= backboneKey) with the serial number and message tag of<br>the received TimerNotify.<br>o Wait for LatencyTolerance.<br>o Explanation: When we return from this procedure we must be<br>sure that the BDUT accepts our frames.<br> else (if secureRouting == 0):<br>o For up to TimeoutAfterWritingDomainAddress:<br> Send each second: RoutingIndication L Data.ind, A -<br>_ _<br>DeviceDescriptor Read<br>_<br> If a response was received, return from this procedure.<br>o On timeout: Abort test and return TestFailed.|
|---|---|
|**Return**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 331 f 376


-----

|Duration|WaitTimeAfterWritingDomainAddress + TimeoutAfterWritingDomain-<br>Address|
|---|---|
|**Open points**||


##### 3.3.6 GlPro_DataSecuritySync()

**Procedure** GlPro_DataSecuritySync()
**name**

**Description** Retrieve the current sending sequence number for data security to be
used by the test tool when addressing the BDUT.This procedure must only
be called for secure devices.

**Parameter** **description**

**Procedure** - Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = "SA_Sync_Request encrypted with toolKey = Fdsk, SCF.SBC = 1,
key_select = ToolKey, comm_mode = point-to-all-points (systembroadcast), with Target-SerialNumber = SerialNumber (to address
the BDUT)").

            - Wait for RoutingSystemBroadcast/S-A_Sync_Response with
timeout TimeoutAppLayerResponse. On timeout abort test and
return TestFailed.

            - Use the received sequence number in the following for sending SA_Data frames.

**Return** 
**Duration** TimeoutAppLayerResponse

**Open points**

##### 3.3.7 GlPro_VerifyHopCount()

**Procedure** GlPro_VerifyHopCount(originalHopCount, receivedHopCount)
**name**

**Description** Verify that potentially decrementing the op_count has happened as
specified:

            - hop_count 1..6 must always be decremented to 0..5, respectively.

            - hop_count 7 must be decremented if Fdsk != none, else it must be
7 or 6.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 332 f 376

|Procedure<br>name|GlPro DataSecuritySync()<br>_|
|---|---|
|**Description**|Retrieve the current sending sequence number for data security to be<br>used by the test tool when addressing the BDUT.This procedure must only<br>be called for secure devices.|
|**Parameter**<br>**description**|-|
|**Procedure**| <br>Execute GlPro_SendRoutingSystemBroadcast(hop = 7, pdu = "S-<br>A_Sync_Request encrypted with toolKey = Fdsk, SCF.SBC = 1,<br>key_select = ToolKey, comm_mode = point-to-all-points (system-<br>broadcast), with Target-SerialNumber = SerialNumber (to address<br>the BDUT)").<br> <br>Wait for RoutingSystemBroadcast/S-A_Sync_Response with<br>timeout TimeoutAppLayerResponse. On timeout abort test and<br>return TestFailed.<br> <br>Use the received sequence number in the following for sending S-<br>A_Data frames.|
|**Return**|-|
|**Duration**|TimeoutAppLayerResponse|
|**Open points**||

|Procedure<br>name|GlPro VerifyHopCount(originalHopCount, receivedHopCount)<br>_|
|---|---|
|**Description**|Verify that potentially decrementing the op_count has happened as<br>specified:<br> <br>hop_count 1..6 must always be decremented to 0..5, respectively.<br> <br>hop_count 7 must be decremented if Fdsk != none, else it must be<br>7 or 6.|


-----

|Parameter<br>description|originalHopCount: hop count of frame/message sent to the BDUT.<br>_<br>receivedHopCount: hop Count received from the BDUT.<br>_|
|---|---|
|**Procedure**|<br> <br>If originalHopCount == 0:<br>`o` Abort test and return TestFailed. (Explanation: Internal error,<br>this procedure must never be called with originalHopCount<br>== 0).<br> <br>Else if hop_count is in 1..6:<br>`o` If receivedHopCount is != originalHopCount - 1:<br>`o` Abort test and return TestFailed. (Explanation: hop_count<br>was not decremented.)<br> <br>Else if hop_count == 7:<br>`o` If Fdsk != none:<br> <br>If receivedHopCount != 6:<br> <br>Abort test and return TestFailed. (Explanation:<br>Devices supporting data security must<br>decrement hop_count 7, but it was not<br>decremented.)<br>`o` Else:<br> <br>If receivedHopCount is not in 6..7:<br> <br>Abort test and return TestFailed. (Explanation:<br>Devices not supporting data security may or<br>may not decrement hop_count 7, but it had<br>some other unexpected value.)|
|**Return**|-|
|**Duration**|0|
|**Open points**||


### 3.4 Core v2 TCP + Discovery

##### 3.4.1 GlPro_ReceiveSearchResponseExtended()

**Procedure** GlPro_ReceiveSearchResponseExtended(listeningHPAI, expectResponse
**name** = true, expectBasicSet = true)

**Description** Receive a SearchResponseExtended and check the contained DIBs.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 333 f 376

|Procedure<br>name|GlPro ReceiveSearchResponseExtended(listeningHPAI, expectResponse<br>_<br>= true, expectBasicSet = true)|
|---|---|
|**Description**|Receive a SearchResponseExtended and check the contained DIBs.|


-----

|Parameter<br>description| listeningHPAI: The endpoint/protocol type where the tool expects the<br>response.<br> expectResponse: true: Expect a response frame. Error if no<br>response is received. false: Return null if no response is received.<br>No error regardless whether a response was received or not.<br> expectBasicSet: true means: Expect a Device Information DIB, an<br>Extended Device Information DIB and a Supported Services DIB in<br>the SearchResponseExtended. Error if not.|
|---|---|
|**Procedure**| <br>If listeningHPAI.IpAddress is unicast or if listeningHPAI.host-<br>ProtocolCode is TCP:<br>`o` timeout = TimeoutSearchResponseExtendedUnicast<br> <br>Else:<br>`o` timeout = TimeoutSearchResponseExtendedMulticast<br> <br>searchResponseExtendedFrame = Receive a SearchResponse-<br>Extended on listeningHPAI.Endpoint via listeningHPAI.hostProtocol-<br>Code. Timeout: timeout. (If listeningHPAI is TCPRouteBack this<br>means to listen on the same TCP connection which was used for<br>sending the request which is an implicit parameter for this<br>procedure.)<br>`o` On timeout:<br> <br>If  expectResponse:<br> <br>Abort test and return TestFailed.<br> <br>Else:<br> <br>Return null.<br> <br>listOfDIBs = Extract list of DIBs from searchResponseExtended-<br>Frame.<br> <br>if expectBasicSet:<br>`o` If listOfDIBs does not contain Device Information DIB:<br> <br>Abort test and return TestFailed<br>`o` if listOfDIBs does not contain Extended Device Information<br>DIB:<br> <br>Abort test and return TestFailed<br>`o` if listOfDIBs does not contain Supported Services DIB:<br> <br>Abort test and return TestFailed|
|**Return**|listOfDIBs|
|**Duration**|max(TimeoutSearchResponseExtendedUnicast, TimeoutSearchResponse-<br>ExtendedMulticast)|
|**Open points**||


##### 3.4.2 GlPro_SendSearchRequestExtended()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 334 f 376


-----

|Procedure<br>name|GlPro SendSearchRequestExtended(destinationHPAI, frameHpai,<br>_<br>SRPsToSend = empty)|
|---|---|
|**Description**|Send a SearchRequestExtended to the destinationEndpoint and check<br>the response|
|**Parameter**<br>**description**| <br>destinationHPAI: The test client send the SearchRequestExtended<br>telegram to the destinationHPAI<br> <br>frameHpai: Value of the HPAI structure of the SearchRequest-<br>Extended<br> <br>SRPsToSend: List with SRPs|
|**Procedure**| <br>Send a SearchRequestExtended containing the given frameHpai<br>and SRPsToSend to the destinationHPAI.Endpoint via UDP<br>(multicast or unicast) or TCP according to destinationHPAI.|
|**Return**||
|**Duration**|0|
|**Open points**||


##### 3.4.3 GlPro_TestSearchRequestParameter()

**Procedure** GlPro_TestSearchRequestParameter(SRPsToSend = empty, expect**name** Response = true)

**Description** Send SearchRequestExtended with specified SRPs and check for
SearchResponseExtended

**Parameter** - SRPsToSend: SRPs for SearchRequestExtended
**description** - expectResponse: Expect SearchResponseExtended or not

©C i h 1998 2018 KNX A i i V i 1 1 AS P 335 f 376

|Procedure<br>name|GlPro TestSearchRequestParameter(SRPsToSend = empty, expect-<br>_<br>Response = true)|
|---|---|
|**Description**|Send SearchRequestExtended with specified SRPs and check for<br>SearchResponseExtended|
|**Parameter**<br>**description**| <br>SRPsToSend: SRPs for SearchRequestExtended<br> <br>expectResponse: Expect SearchResponseExtended or not|


-----

|Procedure| localHpai = UDP with IP address and port number of the test<br>clients socket.<br> Execute GlPro SendSearchRequestExtended(destinationHPAI =<br>_<br>DiscoveryHpai, frameHpai = localHpai, SRPsToSend = SRPsTo-<br>Send).<br> If (SRPsToSend == empty) or (SRPsToSend does not contain a<br>RequestDIBs SRP):<br>o Set expectBasicSet = true.<br> Else:<br>o Set expectBasicSet = false.<br> Execute receivedFrame = GlPro ReceiveSearchResponse-<br>_<br>Extended(listeningHPAI = localHPAI, expectResponse = expect-<br>Response, expectBasicSet = expectBasicSet).|
|---|---|
|**Return**|receivedFrame (potentially null if not frame was received and expect-<br>Response was false).|
|**Duration**||
|**Open points**||


##### 3.4.4 GlPro_GetDefaultSRPList()

**Procedure** GlPro_GetDefaultSRPList
**name**

**Description** Return a default SRP list

**Parameter**
**description**

**Procedure** - SRPList is
`o` One SRP with type programming mode. The M-bit is one.
`o` One SRP with type mac address and MacAddress of the
BDUT. The M-bit is one.
`o` One SRP with type select by service and core version V 1.
The M-bit is one.
`o` One SRP with type invalid . The M-bit is zero.
`o` One SRP with type request DIBs and description types
Device Information DIB, Extended Device Information DIB
and Supported Services DIB. The M-bit is one.

**Return** SRPList

**Duration** 0

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 336 f 376

|Procedure<br>name|GlPro GetDefaultSRPList<br>_|
|---|---|
|**Description**|Return a default SRP list|
|**Parameter**<br>**description**||
|**Procedure**| <br>SRPList is<br>`o` One SRP with type programming mode. The M-bit is one.<br>`o` One SRP with type mac address and MacAddress of the<br>BDUT. The M-bit is one.<br>`o` One SRP with type select by service and core version V 1.<br>The M-bit is one.<br>`o` One SRP with type invalid . The M-bit is zero.<br>`o` One SRP with type request DIBs and description types<br>Device Information DIB, Extended Device Information DIB<br>and Supported Services DIB. The M-bit is one.|
|**Return**|SRPList|
|**Duration**|0|
|**Open points**||


-----

##### 3.4.5 GlPro_TestKnxConnection()

**Procedure** GlPro_TestKnxConnection(via, type, hpai, expect)
**name**

**Description** Test whether a KNX connection of 'type' can be established or not, via
'via' (TCP or UDP), sending control+data HPAI 'hpai' in the ConnectRequest.

**Parameter** - via: Either TCP or UDP: Do the communication either via TCP or
**description** UDP. A new TCP connection is created and closed by this
procedure if necessary.

            - type: Connection type (e.g. 'device management')

            - hpai: HPA to be sent as control and data HPAI in the ConnectRequest

            - expect: Either 'success' (connection was established) or 'ignored'
(no ConnectResponse and no other error is received. The
ConnectRequest is silently ignored.)

**Procedure** - If via == TCP open a TCP connection for the following
communication.

            - Send a ConnectRequest for type 'type' via 'via' with control hpai
and data hpai 'hpai' to the BDUT.

            - Wait for a ConnectResponse: Timeout: TimeoutKnxConnectResponse.
`o` On Timeout:

                    - If expect == 'success': Abort test and return TestFailed.
`o` On received ConnectResponse:

                    - If expect == 'success':

                        - If got error response: Abort test and return
TestFailed.

                    - If expect == 'ignored': Abort test and return TestFailed.
`o` If via == TCP: On TCP connection close: Abort test and
return TestFailed.

            - If via == TCP: Close TCP connection if necessary.

            - If via == UDP and connection was established:
`o` Close KNX connection via UDP.

**Return** 
**Duration** TimeoutKnxConnectResponse

©C i h 1998 2018 KNX A i i V i 1 1 AS P 337 f 376

|Procedure<br>name|GlPro TestKnxConnection(via, type, hpai, expect)<br>_|
|---|---|
|**Description**|Test whether a KNX connection of 'type' can be established or not, via<br>'via' (TCP or UDP), sending control+data HPAI 'hpai' in the Connect-<br>Request.|
|**Parameter**<br>**description**| <br>via: Either TCP or UDP: Do the communication either via TCP or<br>UDP. A new TCP connection is created and closed by this<br>procedure if necessary.<br> <br>type: Connection type (e.g. 'device management')<br> <br>hpai: HPA to be sent as control and data HPAI in the Connect-<br>Request<br> <br>expect: Either 'success' (connection was established) or 'ignored'<br>(no ConnectResponse and no other error is received. The<br>ConnectRequest is silently ignored.)|
|**Procedure**| <br>If via == TCP open a TCP connection for the following<br>communication.<br> <br>Send a ConnectRequest for type 'type' via 'via' with control hpai<br>and data hpai 'hpai' to the BDUT.<br> <br>Wait for a ConnectResponse: Timeout: TimeoutKnxConnect-<br>Response.<br>`o` On Timeout:<br> <br>If expect == 'success': Abort test and return Test-<br>Failed.<br>`o` On received ConnectResponse:<br> <br>If expect == 'success':<br> <br>If got error response: Abort test and return<br>TestFailed.<br> <br>If expect == 'ignored': Abort test and return Test-<br>Failed.<br>`o` If via == TCP: On TCP connection close: Abort test and<br>return TestFailed.<br> <br>If via == TCP: Close TCP connection if necessary.<br> <br>If via == UDP and connection was established:<br>`o` Close KNX connection via UDP.|
|**Return**|-|
|**Duration**|TimeoutKnxConnectResponse|


-----

|Open points|Col2|
|---|---|


##### 3.4.6 GlPro_TestConcurrentKnxConnections()

**Procedure** GlPro_TestConcurrentKnxConnections(secureSession)
**name**

**Description** First probe whether the device supports two concurrent KNX connections
at all. If this is not supported, return without error as the criterion cannot
be tested.

Then test whether two concurrent KNX connections can be established
and used inside a TCP connection or inside a secure session.

**Parameter** - secureSession: Use a secure session around the KNX
**description** connections, or not.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 338 f 376

|Procedure<br>name|GlPro TestConcurrentKnxConnections(secureSession)<br>_|
|---|---|
|**Description**|First probe whether the device supports two concurrent KNX connections<br>at all. If this is not supported, return without error as the criterion cannot<br>be tested.<br>Then test whether two concurrent KNX connections can be established<br>and used inside a TCP connection or inside a secure session.|
|**Parameter**<br>**description**| <br>secureSession: Use a secure session around the KNX<br>connections, or not.|


-----

|Procedure| Explanation: First probe whether device supports two concurrent<br>KNX connection via UDP:<br>o Open device management connection via UDP.<br> On error: Abort test and return TestFailed.<br>o Open second device management connection via UDP.<br> On error:<br> Open tunnelling connection via UDP.<br> On error: Return without error. The<br>device does not support two concurrent<br>KNX connections.<br>o Close both KNX connections.<br> Open TCP connection.<br> If the TCP connection gets closed by the BDUT any time in the<br>following during this procedure: Abort test and return TestFailed.<br> If secureSession == true:<br>o Execute GlPro SecureSessionSetup(userId = 1).<br>_<br> Open device management connection A via TCP (and in the<br>secure session secureSession == true).<br>o On error: Abort test and return TestFailed.<br> Open device management connection B via TCP (and in the<br>secure session secureSession == true).<br>o On error:<br> Open tunnelling connection B via TCP (and in the<br>secure session secureSession == true).<br> On error: Abort test and return TestFailed.<br> Send a ConnectionStateRequest via TCP and potentially through<br>the secure session for connection A.<br> Wait for a ConnectionStateResponse from connection A: Timeout:<br>TimeoutKnxConnectionStateResponse.<br>o On Timeout: Abort test and return TestFailed.<br> Send a ConnectionStateRequest via TCP and potentially through<br>the secure session for connection B.<br> Wait for a ConnectionStateResponse from connection B: Timeout:<br>TimeoutKnxConnectionStateResponse.<br>o On Timeout: Abort test and return TestFailed.<br> Send a DisconnectRequest for connection A.<br> Wait for a DisconnectResponse for connection A: Timeout:<br>TimeoutKnxDisconnectResponse.<br>o On Timeout: Abort test and return TestFailed<br> Send a DisconnectRequest for connection B.<br> Wait for a DisconnectResponse for connection B: Timeout:<br>TimeoutKnxDisconnectResponse.<br>o On Timeout: Abort test and return TestFailed<br> If secureSession == true:|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 339 f 376


-----

|Col1|o Execute GlPro CloseSecureSession() (Explanation: We do<br>_<br>this explicitly here to test whether the TCP connection is still<br>functional.<br> Close TCP connection|
|---|---|
|**Return**|-|
|**Duration**|2 * (2 * TimeoutKnxConnectResponse + TimeoutKnxConnectionState-<br>Response + 2 * TimeoutKnxDisconnetResponse)|
|**Open points**||


##### 3.4.7 GlPro_TestSequentialKnxConnections()

**Procedure** GlPro_TestSequentialKnxConnections(secureSession)
**name**

**Description** Test whether two sequential KNX connections can be established and
used inside a TCP connection or inside a secure session.

**Parameter** - secureSession: Use a secure session around the KNX
**description** connections, or not.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 340 f 376

|Procedure<br>name|GlPro TestSequentialKnxConnections(secureSession)<br>_|
|---|---|
|**Description**|Test whether two sequential KNX connections can be established and<br>used inside a TCP connection or inside a secure session.|
|**Parameter**<br>**description**| <br>secureSession: Use a secure session around the KNX<br>connections, or not.|


-----

|Procedure| Open TCP connection.<br> If the TCP connection gets closed by the BDUT any time in the<br>following during this procedure: Abort test and return TestFailed.<br> If secureSession == true:<br>o Execute GlPro SecureSessionSetup(userId = 1).<br>_<br> Send a ConnectRequest for device management via TCP and<br>potentially through the secure session to the BDUT.<br> Wait for a ConnectResponse: Timeout: TimeoutKnxConnect-<br>Response.<br>o On Timeout: Abort test and return TestFailed.<br> Send a ConnectionStateRequest via TCP and potentially through<br>the secure session.<br> Wait for a ConnectionStateResponse: Timeout: TimeoutKnx-<br>ConnectionStateResponse.<br>o On Timeout: Abort test and return TestFailed.<br> Send a DisconnectRequest.<br> Wait for a DisconnectResponse: Timeout: TimeoutKnxDisconnect-<br>Response.<br>o On Timeout: Abort test and return TestFailed<br> Wait for TimeoutIdleTcpConnection / 2. (Explanation: Give the<br>BDUT some time to make the mistake to close the TCP connection<br>after the last KNX connection was closed (which must not happen).<br> Send a ConnectRequest for device management via TCP and<br>potentially through the secure session to the BDUT.<br> Wait for a ConnectResponse: Timeout: TimeoutKnxConnect-<br>Response.<br>o On Timeout: Abort test and return TestFailed.<br> Send a ConnectionStateRequest via TCP and potentially through<br>the secure session.<br> Wait for a ConnectionStateResponse: Timeout: TimeoutKnx-<br>ConnectionStateResponse.<br>o On Timeout: Abort test and return TestFailed.<br> Send a DisconnectRequest.<br> Wait for a DisconnectResponse: Timeout: TimeoutKnxDisconnect-<br>Response.<br>o On Timeout: Abort test and return TestFailed<br> If secureSession == true:<br>o Execute GlPro CloseSecureSession() (Explanation: We do<br>_<br>this explicitly here to test whether the TCP connection is still<br>functional.<br> Close TCP connection|
|---|---|
|**Return**|-|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 341 f 376


-----

|Duration|2 * (TimeoutKnxConnectResponse + TimeoutKnxConnectionState-<br>Response + TimeoutKnxDisconnetResponse)|
|---|---|
|**Open points**||


### 3.5 Tunnelling v2

##### 3.5.1 GlPro_SetupTunnelling()

**Procedure** GlPro_SetupTunnelling(enableTunnellingSecurity, tunnellingUsers = none,
**name** setupUnicast = true, uniqueIAs = true)

**Description** Setup BDUT to support a specific tunnelling setup.

This procedure assumes that the BDUT supports Tunnelling v2. It does not
assume that the BDUT supports IP security and instead reports the support
for IP security in the return value. It also reports the number of available
tunnelling slots and their configured unique individual addresses in the
return value.

This procedure calls GlPro_SetupUnicast() (to set up passwords etc) if IP
security is supported at all.

**Parameter** - enableTunnellingSecuirty: Enable/disablee tunnling security in PID_**description** SECURED_SERVICE_FAMILIES.

           - tunnellingUsers: If != none: Set PID_TUNNELLING_USERS.

           - setupUnicast: If == true: Setup BDUT so that unicast secure
communication can be used. Required when test uses secure
sessions in any way.

           - uniqueIAs: If == true: Set the elements in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES which are pointed to by PID_TUNNELLING_ADDRESSES to unique IAs. If == false: Set the
elements in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES which
are pointed to by PID_TUNNELLING_ADDRESSES all to the same
IA, different of the IA of the BDUT. (This is used to provoke E_NO_MORE_UNIQUE_CONNECTIONS. The IAs must be different from
the IA of the BDUT in case the BDUT is a router, because the router
address is never used as a tunnelling IA and then the error E_NO_MORE_UNIQUE_CONNECTIONS cannot be provoked because not
even a single tunnelling connection can be opened.)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 342 f 376

|Procedure<br>name|GlPro SetupTunnelling(enableTunnellingSecurity, tunnellingUsers = none,<br>_<br>setupUnicast = true, uniqueIAs = true)|
|---|---|
|**Description**|Setup BDUT to support a specific tunnelling setup.<br>This procedure assumes that the BDUT supports Tunnelling v2. It does not<br>assume that the BDUT supports IP security and instead reports the support<br>for IP security in the return value. It also reports the number of available<br>tunnelling slots and their configured unique individual addresses in the<br>return value.<br>This procedure calls GlPro_SetupUnicast() (to set up passwords etc) if IP<br>security is supported at all.|
|**Parameter**<br>**description**| <br>enableTunnellingSecuirty: Enable/disablee tunnling security in PID_-<br>SECURED_SERVICE_FAMILIES.<br> <br>tunnellingUsers: If != none: Set PID_TUNNELLING_USERS.<br> <br>setupUnicast: If == true: Setup BDUT so that unicast secure<br>communication can be used. Required when test uses secure<br>sessions in any way.<br> <br>uniqueIAs: If == true: Set the elements in PID_ADDITIONAL_-<br>INDIVIDUAL_ADDRESSES which are pointed to by PID_-<br>TUNNELLING_ADDRESSES to unique IAs. If == false: Set the<br>elements in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES which<br>are pointed to by PID_TUNNELLING_ADDRESSES all to the same<br>IA, different of the IA of the BDUT. (This is used to provoke E_NO_-<br>MORE_UNIQUE_CONNECTIONS. The IAs must be different from<br>the IA of the BDUT in case the BDUT is a router, because the router<br>address is never used as a tunnelling IA and then the error E_NO_-<br>MORE_UNIQUE_CONNECTIONS cannot be provoked because not<br>even a single tunnelling connection can be opened.)|


-----

|Procedure| Read PID TUNNELLING ADDRESSES array using PropAccess -<br>_ _ _<br>DevMgmt(fdsk = Fdsk, restart = false).<br> If Fdsk is not set: (Explanation: If IP-Security is not supported:)<br>o Write the following properties using PropAccess Dev-<br>_<br>Mgmt(fdsk = Fdsk):<br> If uniqueIAs:<br> For x in PID TUNNELLING ADDRESSES: If x<br>_ _<br>> 0: PID ADDITIONAL INDIVIDUAL -<br>_ _ _<br>ADDRESSES[x] = unique individual address<br>different from IndividualAddress and in the same<br>subnet as IndividualAddress (all array elements<br>get a different value). (Remember the assigned<br>individual addresses for the return value.)<br> Else:<br> For x in PID TUNNELLING ADDRESSES: If x<br>_ _<br>> 0: PID ADDITIONAL INDIVIDUAL -<br>_ _ _<br>ADDRESSES[x] = individual address different<br>from IndividualAddress and in the same subnet<br>as IndividualAddress (all array elements get the<br>same value). (Remember the assigned<br>individual addresses for the return value.)<br>o return (false, length(PID TUNNELLING ADDRESSES), list of<br>_ _<br>individual addresses pointed to by PID TUNNELLING -<br>_ _<br>ADDRESSES).<br> Else: (Explanation: If IP-Security is supported:)<br>o If setupUnicast == true:<br> Explanation: Here we also set the passwords for the<br>tunnelling users. These passwords need to be used<br>when creating the secure sessions for the respective<br>tunnelling users, which is not explicitly mentioned in<br>this specification.<br> If TunnellingUserB > 0: Execute GlPro Setup-<br>_<br>Unicast(userId = TunnellingUserA, passwordHash =<br>[TunnellingUserA octet repeated 16 times], userId2 =<br>TunnellingUserB, passwordHash2 = [TunnellingUserB<br>octet repeated 16 times]).<br> Else if TunnellingUserA > 0: Execute GlPro Setup-<br>_<br>Unicast(userId = TunnellingUserA, passwordHash =<br>[TunnellingUserA octet repeated 16 times]).<br> Else: Execute GlPro SetupUnicast().<br>_<br>o Write the following properties using PropAccess Dev-<br>_<br>Mgmt(fdsk = Fdsk):<br> PID SUPPORTED SERVICE FAMILIES[Tunnelling]<br>_ _ _<br>= enableTunnellingSecurity.<br> If uniqueIAs:|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 343 f 376


-----

|Col1| For x in PID TUNNELLING ADDRESSES: If x<br>_ _<br>> 0: PID ADDITIONAL INDIVIDUAL -<br>_ _ _<br>ADDRESSES[x] = unique individual address<br>different from IndividualAddress and in the same<br>subnet as IndividualAddress (all array elements<br>get a different value). (Remember the assigned<br>individual addresses for the return value.)<br> Else:<br> For x in PID TUNNELLING ADDRESSES: If x<br>_ _<br>> 0: PID ADDITIONAL INDIVIDUAL -<br>_ _ _<br>ADDRESSES[x] = individual address different<br>from IndividualAddress and in the same subnet<br>as IndividualAddress (all array elements get the<br>same value). (Remember the assigned<br>individual addresses for the return value.)<br> If tunnellingUsers != none:<br> PID TUNNELLING USERS = tunnellingUsers.<br>_ _<br> Return (true, length(PID TUNNELLING ADDRESSES), list of<br>_ _<br>individual addresses pointed to by PID TUNNELLING -<br>_ _<br>ADDRESSES).|
|---|---|
|**Return**|Tuple (ipSecurityIsSupported, numTunnellingSlots, slotIAs):<br> <br>ipSecurityIsSupported: True means that IP security is supported.<br>False mens that IP security is not supported. Tests need to query<br>this flags before assuming that a device supports IP security.<br> <br>numTunnellingSlots: Number of tunnelling slots supported by the<br>device. This is the number of entries in slotIAs.<br> <br>slotIAs: 1-based array of length numTunnellingSlots: Individual<br>addresses configured for the tunnelling slots. These are always<br>guaranteed to be unique.|
|**Duration**||
|**Open points**||


##### 3.5.2 GlPro_CleanupTunnelling()

**Procedure** GlPro_CleanupTunnelling()
**name**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 344 f 376

|Procedure<br>name|GlPro CleanupTunnelling()<br>_|
|---|---|


-----

|Description|Cleanup after tunnelling tests.<br>This procedure calls GlPro CleanupUnicast() to undo the effects of Gl-<br>_<br>Pro SetupUnicast().<br>_<br>In particular it does:<br> Close all open or half-closed TCP connections. (A half-closed TCP<br>connection here refers to a TCP connection which was established<br>and already shutdown() by the BDUT (i.e. recv() returns 0) but<br>which was not yet closed by the test tool.<br> This implicitly closes all open secure sessions in these TCP<br>connections. We rely on this behavior in the BDUT and this<br>behavior is explicitly tested in test 2.2.9.<br> Close all UDP based KNX connections. (The TCP based KNX<br>connections are implicitly closed by closing the TCP connection.)<br> Reset all security switches to their non-secure defaults, in particular<br>PID SECURED SERVICE FAMILIES for routing, tunnelling and<br>_ _ _<br>device management, PID SECURITY MODE and PID IP SBC -<br>_ _ _ _ _<br>CONTROL.<br>This procedure generally ignores all errors.|
|---|---|
|**Parameter**<br>**description**|-|
|**Procedure**| <br>Execute GlPro_CleanupUnicast().|
|**Return**|-|
|**Duration**||
|**Open points**||


##### 3.5.3 GlPro_SendTunnellingFeatureGet()

**Procedure name** GlPro_SendTunnellingFeatureGet (featureId, frameError = noError)

**Description** Send a TunnellingFeatureGet to the BDUT

**Parameter** - featureId: Feature which shall be read by the test client.
**description** - frameError: Add an error to the TunnellingFeatureGet frame.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 345 f 376

|Procedure name|GlPro SendTunnellingFeatureGet (featureId, frameError = noError)<br>_|
|---|---|
|**Description**|<br>Send a TunnellingFeatureGet to the BDUT|
|**Parameter**<br>**description**| <br>featureId: Feature which shall be read by the test client.<br> <br>frameError: Add an error to the TunnellingFeatureGet frame.|


-----

|Procedure| Send a TunnellingFeatureGet frame to the BDUT. Inject frame-<br>Error if any.<br> If the tunnelling connection is run within a TCP connection:<br>o Return (do not wait for ACK).<br> If (frameError != noError) and (frameError != SequenceNumber<br>- 1)<br>o Receive a TunnellingAck from the BDUT. Timeout:<br>TimeoutTunnellingAck.<br> On timeout: Return successful.<br> On ACK received: Abort test and return Test-<br>Failed.<br> Else:<br>o Receive a TunnellingAck from the BDUT. Timeout:<br>TimeoutTunnellingAck.<br> On timeout: Abort test and return TestFailed.|
|---|---|
|**Return**||
|**Duration**||
|**Open points**||


##### 3.5.4 GlPro_SendTunnellingFeatureSet()

**Procedure name** GlPro_SendTunnellingFeatureSet (featureId, value, frameError =
noError)

**Description** Send a TunnellingFeatureSet to the BDUT

**Parameter** - featureId: Feature which shall be set by the test client.
**description** - value: New value of the Tunnelling Feature

              - frameError: Add an error to the TunnellingFeatureGet frame.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 346 f 376

|Procedure name|GlPro SendTunnellingFeatureSet (featureId, value, frameError =<br>_<br>noError)|
|---|---|
|**Description**|Send a TunnellingFeatureSet to the BDUT|
|**Parameter**<br>**description**| <br>featureId: Feature which shall be set by the test client.<br> <br>value: New value of the Tunnelling Feature<br> <br>frameError: Add an error to the TunnellingFeatureGet frame.|


-----

|Procedure| Send a TunnellingFeatureSet frame to the BDUT with the<br>given featureId and value. Inject frameError.<br> If the tunnelling connection run within a TCP connection:<br>o Return (do not wait for ACK).<br> Wait for a TunnellingAck from the BDUT. Timeout: Timeout-<br>TunnellingAck.<br>o On timeout:<br> If frameError == noError: Abort test and return<br>TestFailed.<br>o On ACK received:<br> If frameError != noError: Abort test and return<br>TestFailed.|
|---|---|
|**Return**||
|**Duration**||
|**Open points**||


##### 3.5.5 GlPro_ReceiveTunnellingFeatureResponse()

**Procedure** GlPro_ReceiveTunnellingFeatureResponse (expectedFeatureId, expected**name** Value, expectedValueLength, expectedReturnCode = E_NO_ERROR,
timeout = TimeoutTunnellingFeatureResponse, sendTunnellingAck = true,
checkTcpNoAck = false)

**Description** Receive a TunnellingFeatureResponse from the BDUT

**Parameter** - expectedFeatureId: Expected Feature Identifier.
**description** - expectedValue: Expected value of the Feature Identifier. 'none'
means: Do check returned value and do not check its length.

            - expectedValueLength: Expected value length in octets. Only used if
expectedValue != none.

            - expectedReturnCode: Expected Return Code of the TunnellingFeatureResponse

            - timeout: Timeout for the TunnellingFeatureResponse

            - sendTunnellingAck: Send a TunnellingAck if the connection is using
UDP.

            - checkTcpNoAck: Check that no ACKs are sent via TCP.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 347 f 376

|Procedure<br>name|GlPro ReceiveTunnellingFeatureResponse (expectedFeatureId, expected-<br>_<br>Value, expectedValueLength, expectedReturnCode = E NO ERROR,<br>_ _<br>timeout = TimeoutTunnellingFeatureResponse, sendTunnellingAck = true,<br>checkTcpNoAck = false)|
|---|---|
|**Description**|Receive a TunnellingFeatureResponse from the BDUT|
|**Parameter**<br>**description**| <br>expectedFeatureId: Expected Feature Identifier.<br> <br>expectedValue: Expected value of the Feature Identifier. 'none'<br>means: Do check returned value and do not check its length.<br> <br>expectedValueLength: Expected value length in octets. Only used if<br>expectedValue != none.<br> <br>expectedReturnCode: Expected Return Code of the Tunnelling-<br>FeatureResponse<br> <br>timeout: Timeout for the TunnellingFeatureResponse<br> <br>sendTunnellingAck: Send a TunnellingAck if the connection is using<br>UDP.<br> <br>checkTcpNoAck: Check that no ACKs are sent via TCP.|


-----

|Procedure| Receive a TunnellingFeatureResponse or another frame from the<br>BDUT. Timeout: timeout.<br>o On timeout: Abort test and return TestFailed.<br> If "the tunnelling connection is run via UDP" and sendTunnelling-<br>Ack:<br>o Send a TunnellingAck to the BDUT<br> If the tunnelling connection is run within a TCP connection and<br>checkTcpNoAck == true:<br>o Explanation: Check that the TunnellingFeatureResponse will<br>not be repeated by the BDUT.<br>o Wait for TunnellingFeatureResponse. Timeout: Timeout-<br>TunnellingAck + NetworkLateny.<br> On TunnellingFeatureResponse: Abort test and return<br>TestFailed.<br> On timeout: Ok.<br> If the Feature Id of the TunnellingFeatureResponse != expected-<br>FeatureId:<br>o Abort test and return TestFailed.<br> If expectedReturnCode != the Return Code of the Tunnelling-<br>FeatureResponse .<br>o Abort test and return TestFailed.<br> If Return Code of the TunnellingFeatureResponse == E -<br>_<br>ADDRESS VOID:<br>_<br>o Check that the field Feature Value is omitted.<br> Otherwise: Abort test and return TestFailed<br> Else:<br>o If expectedValue != none:<br> If (expectedValueLength != length of Feature Value) or<br>(expectedValue != Feature Value):<br> Abort test and return TestFailed.|
|---|---|
|**Return**|Value of the feature.|
|**Duration**||
|**Open points**||


##### 3.5.6 GlPro_ReceiveNoTunnellingConnectionFrame()

**Procedure** GlPro_ReceiveNoTunnellingConnectionFrame(timeout)
**name**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 348 f 376

|Procedure<br>name|GlPro ReceiveNoTunnellingConnectionFrame(timeout)<br>_|
|---|---|


-----

|Description|Wait for a frame with a suitable connection header for the current<br>tunnelling connection. If any frame matching the current tunnelling<br>connection is received: Abort test and return TestFailed.|
|---|---|
|**Parameter**<br>**description**| <br>timeout: Wait for unexpected frame for this duration. This should<br>be: Timeout_for_response_of_previous_operation + Network-<br>Latency.|
|**Procedure**| <br>Wait for frame belonging to the current tunnelling connection.<br>Timeout: timeout.<br>`o` On timeout: OK.<br>`o` On frame received: Abort test and return TestFailed.|
|**Return**||
|**Duration**|timeout|
|**Open points**||


##### 3.5.7 GlPro_EstablishTunnellingConnection()

**Procedure** GlPro_EstablishTunnellingConnection(userId = none, tcp = false,
**name** tunnellingAddress = none, expectedError = E_NO_ERROR, knxLayer =
TUNNEL_LINKLAYER)

**Description** Open a tunnelling connection, optionally in a secure session (useId !=
none), optionally plain in a TCP connection (tcp = true), else via UDP,
optionally for a specific tunnelling address (tunnellingAddress != none).

**Parameter** - userId: If userId != none, establish the tunnelling connection within a
**description** secure session (always via TCP). Otherwise send a non-secure
ConnectRequest.

            - tcp: Establish the tunnelling connection within a TCP connection.
Only relevant when userId == none.

            - tunnellingAddress: If tunnellingAddress is none, the Basic CRI shall
be used, otherwise the Extended CRI shall be used with the
given tunnelling address.

            - expectedError: Expected error code of the connection response.

            - knxLayer: Knx Layer octet of the CRI.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 349 f 376

|Procedure<br>name|GlPro EstablishTunnellingConnection(userId = none, tcp = false,<br>_<br>tunnellingAddress = none, expectedError = E NO ERROR, knxLayer =<br>_ _<br>TUNNEL LINKLAYER)<br>_|
|---|---|
|**Description**|<br>Open a tunnelling connection, optionally in a secure session (useId !=<br>none), optionally plain in a TCP connection (tcp = true), else via UDP,<br>optionally for a specific tunnelling address (tunnellingAddress != none).|
|**Parameter**<br>**description**| <br>userId: If userId != none, establish the tunnelling connection within a<br>secure session (always via TCP). Otherwise send a non-secure<br>ConnectRequest.<br> <br>tcp: Establish the tunnelling connection within a TCP connection.<br>Only relevant when userId == none.<br> <br>tunnellingAddress: If tunnellingAddress is none, the Basic CRI shall<br>be used, otherwise the Extended CRI shall be used with the<br>given tunnelling address.<br> <br>expectedError: Expected error code of the connection response.<br> <br>knxLayer: Knx Layer octet of the CRI.|


-----

|Procedure| If userId != none:<br>o Execute GlPro SecureSessionSetup(userID), use it in the<br>_<br>following. (Use an existing surrounding TCP connection if<br>specified.)<br> Else if tcp:<br>o Open new TCP connection and use it in the following. (Or<br>use an existing surrounding TCP connection if specified.)<br> Else:<br>o Use UDP in the following.<br> If tunnellingAddress != none:<br>o CRI = Extended CRI with the value of IA in the individual<br>address octets and with Connection Type Code = Tunnelling<br>and knxLayer.<br> Else:<br>o CRI = Basic CRI with Connection Type Code = Tunnelling<br>and and knxLayer.<br> Send a ConnectRequest with two Route Back HPAIs and CRI.<br> Receive a ConnectionResponse CRD. Timeout: TimeoutKnx-<br>ConnectResponse.<br>o On timeout: Set gotTimeout = true.<br>o Else: Set gotTimeout = false.<br> If userId != none:<br>o If gotTimeout or (CRD error code != E NO ERROR):<br>_ _<br> Execute GlPro CloseSecureSession(closeTcp =<br>_<br>false).<br> If gotTimeout:<br>o Abort test and return TestFailed.<br> If CRD error code != expectedError:<br>o Abort test and return TestFailed.|
|---|---|
|**Return**|Individual Address of the CRD (tunnelling address).|
|**Duration**|TimeoutSessionResponse + TimeoutSessionStatusAuthenticate +<br>TimeoutKnxConnectResponse|
|**Open points**||


##### 3.5.8 GlPro_CloseTunnellingConnection()

**Procedure** GlPro_CloseTunnellingConnection(closeTcp = true)
**name**

**Description** Close a tunnelling connection. Also close the surrounding secure session
if one was used. Optionally close the surrounding TCP connection if one
was used. (Note that TCP is always used when a secure session is used.)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 350 f 376

|Procedure<br>name|GlPro CloseTunnellingConnection(closeTcp = true)<br>_|
|---|---|
|**Description**|Close a tunnelling connection. Also close the surrounding secure session<br>if one was used. Optionally close the surrounding TCP connection if one<br>was used. (Note that TCP is always used when a secure session is used.)|


-----

|Parameter<br>description| closeTcp: Close TCP connection if tunnelling connection ran within<br>a secure session.|
|---|---|
|**Procedure**| <br>testFailed = false<br> <br>Send a DisconnectRequest.<br> <br>Receive DisconnectResponse. Timeout: TimeoutKnxDisconnet-<br>Response.<br>`o` On timeout: testFailed = true.<br> <br>If the connection ran within a SecureSession:<br>`o` Execute GlPro_CloseSecureSession(closeTcp = closeTcp).<br> <br>If testFailed:<br>`o` Abort test and return TestFailed.|
|**Return**|-|
|**Duration**||
|**Open points**||


##### 3.5.9 GlPro_GetOneFreeAdditionalIndividualAddress()

**Procedure** GlPro_GetOneFreeAdditionalIndividualAddress(currentAdditional**name** IndividualAddresses)

**Description** Return an Individual Address, which has the same subnet address part
as the IndividualAddress of the BDUT and which is currently not used in
the test network.

**Parameter** currentAdditionalIndividualAddresses: Additional Individual Addresses,
**description** which are currently used by the BDUT.

**Procedure** - subnet = IndividualAddress with device part set to 0.

             - Return first free individual address in the range [subnet +
1..subnet + 254] which:
`o` is != IndividualAddress, and
`o` is not in currentAdditionalIndividualAddresses

**Return** Free individual address.

**Duration**

**Open points**

##### 3.5.10 GlPro_SetTunnellingFeature()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 351 f 376

|Procedure<br>name|GlPro GetOneFreeAdditionalIndividualAddress(currentAdditional-<br>_<br>IndividualAddresses)|
|---|---|
|**Description**|Return an Individual Address, which has the same subnet address part<br>as the IndividualAddress of the BDUT and which is currently not used in<br>the test network.|
|**Parameter**<br>**description**|currentAdditionalIndividualAddresses: Additional Individual Addresses,<br>which are currently used by the BDUT.|
|**Procedure**| <br>subnet = IndividualAddress with device part set to 0.<br> <br>Return first free individual address in the range [subnet +<br>1..subnet + 254] which:<br>`o` is != IndividualAddress, and<br>`o` is not in currentAdditionalIndividualAddresses|
|**Return**|Free individual address.|
|**Duration**||
|**Open points**||


-----

|Procedure name|GlPro SetTunnellingFeature(featureId, value)<br>_|
|---|---|
|**Description**|<br>Set a tunnelling feature via TunnellingFeatureSet.|
|**Parameter**<br>**description**| <br>featureId: Tunnelling feature to set.<br> <br>value: Value of the tunnelling feature.|
|**Procedure**| <br>Execute GlPro_SendTunnellingFeatureSet(featureId =<br>featureId, value = value).<br> <br>Execute GlPro_ReceiveTunnellingFeatureResponse(featureId =<br>featureId, expectedValue = value).|
|**Return**||
|**Duration**||
|**Open points**||


##### 3.5.11 GlPro_GetTunnellingFeature()

**Procedure name** GlPro_GetTunnellingFeature(featureId)

**Description** Get a tunnelling feature via TunnellingFeatureGet.

**Parameter** - featureId: Tunnelling feature to get.
**description**

**Procedure** - Execute GlPro_SendTunnellingFeatureGet(featureId =
featureId).

               - Execute featureValue = GlPro_ReceiveTunnellingFeatureResponse(featureId = featureId).

**Return** featureValue.

**Duration**

**Open points**

### 3.6 Common

##### 3.6.1 GlPro_WaitUntilRestartComplete()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 352 f 376

|Procedure name|GlPro GetTunnellingFeature(featureId)<br>_|
|---|---|
|**Description**|<br>Get a tunnelling feature via TunnellingFeatureGet.|
|**Parameter**<br>**description**| <br>featureId: Tunnelling feature to get.|
|**Procedure**| <br>Execute GlPro_SendTunnellingFeatureGet(featureId =<br>featureId).<br> <br>Execute featureValue = GlPro_ReceiveTunnellingFeature-<br>Response(featureId = featureId).|
|**Return**|featureValue.|
|**Duration**||
|**Open points**||


-----

|Procedure<br>name|GlPro WaitUntilRestartComplete(maxPowerUpTime = TimeoutPowerUp)<br>_|
|---|---|
|**Description**|Wait until the device is responsive again after a restart. Send a<br>DescriptionRequest every second and wait until either a Description-<br>Response or a TimerNotify frame is received, whatever occurs first.<br>Return the received TimerNotify frame (if any) or none if a Description-<br>Response was received first.|
|**Parameter**<br>**description**|maxPowerUpTime: Maximum time to wait for a DescriptionResponse,<br>after powering up the device and pinging it with DescriptionRequests.|
|**Procedure**| <br>For up to maxPowerUpTime:<br>`o` Send a DescriptionRequest each second.<br>`o` If a DescriptionResponse was received, return from this<br>procedure (return none).<br>`o` If a TimerNotify frame was received: Return the TimerNotify<br>frame.<br> <br>Abort test and return TestFailed.|
|**Return**|receivedTimerNotifyFrame or none|
|**Duration**|maxPowerUpTime|
|**Open points**||


##### 3.6.2 GlPro_VerifyBdutIsResponsive()

**Procedure** GlPro_VerifyBdutIsResponsive()
**name**

**Description** Send a DescriptionRequest to the BDUT and wait for a DescriptionResponse. Abort test and return TestFailed if no response is received.

This can be used by test which expect no response from the BDUT at
all to avoid a false positive result when no BDUT is present at all.

**Parameter**
**description**

**Procedure** - Send a DescriptionRequest and wait for a DescriptionResponse.
Timeout: TimeoutDescriptionResponse.
`o` On timeout: Abort test and return TestFailed.

**Return**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 353 f 376

|Procedure<br>name|GlPro VerifyBdutIsResponsive()<br>_|
|---|---|
|**Description**|Send a DescriptionRequest to the BDUT and wait for a Description-<br>Response. Abort test and return TestFailed if no response is received.<br>This can be used by test which expect no response from the BDUT at<br>all to avoid a false positive result when no BDUT is present at all.|
|**Parameter**<br>**description**||
|**Procedure**| <br>Send a DescriptionRequest and wait for a DescriptionResponse.<br>Timeout: TimeoutDescriptionResponse.<br>`o` On timeout: Abort test and return TestFailed.|
|**Return**||


-----

|Duration|TimeoutDescriptionResponse|
|---|---|
|**Open points**||


##### 3.6.3 GlPro_PowerCycleBdut()

**Procedure** GlPro_PowerCycleBdut(maxPowerUpTime = TimeoutPowerUp)
**name**

**Description** Reboots the BDUT by turning of the power. Wait until the device either
responds with a description response to a description request or until a
TimerNotify frame is received. As soon as one of these two frames is
received this procedure returns.

**Parameter** maxPowerUpTime: Maximum time to wait for a DescriptionResponse,
**description** after power up the device and ping it with DescriptionRequests

**Procedure** - Power off the device by using the load switch.

            - Wait for WaitTimeAfterPowerDown.

            - Power on the device by using the load switch.

            - Execute receivedTimerNotifyFrame = GlPro_WaitUntilRestartComplete(maxPowerUpTime = maxPowerUpTime).

**Return** receivedTimerNotifyFrame

**Duration** maxPowerUpTime

**Open points**

##### 3.6.4 GlPro_SwitchOnOffTp()

**Procedure name** GlPro_SwitchOnOffTp(on, wait = true)

**Description** Power the TP on or off

**Parameter** on: True power the TP on, false power the TP off
**description**

wait: If wait is false, return immediately after switching on or off the TP.
Otherwise wait for WaitTimeAfterPowerDown.

**Procedure** - If on == true
`o` Power on the TP by using the load switch.

              - else
`o` Power off the TP by using the load switch.

              - if wait
`o` Wait for WaitTimeAfterPowerDown.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 354 f 376

|Procedure<br>name|GlPro PowerCycleBdut(maxPowerUpTime = TimeoutPowerUp)<br>_|
|---|---|
|**Description**|Reboots the BDUT by turning of the power. Wait until the device either<br>responds with a description response to a description request or until a<br>TimerNotify frame is received. As soon as one of these two frames is<br>received this procedure returns.|
|**Parameter**<br>**description**|maxPowerUpTime: Maximum time to wait for a DescriptionResponse,<br>after power up the device and ping it with DescriptionRequests|
|**Procedure**| <br>Power off the device by using the load switch.<br> <br>Wait for WaitTimeAfterPowerDown.<br> <br>Power on the device by using the load switch.<br> <br>Execute receivedTimerNotifyFrame = GlPro_WaitUntilRestart-<br>Complete(maxPowerUpTime = maxPowerUpTime).|
|**Return**|receivedTimerNotifyFrame|
|**Duration**|maxPowerUpTime|
|**Open points**||

|Procedure name|GlPro SwitchOnOffTp(on, wait = true)<br>_|
|---|---|
|**Description**|<br>Power the TP on or off|
|**Parameter**<br>**description**|on: True power the TP on, false power the TP off<br>wait: If wait is false, return immediately after switching on or off the TP.<br>Otherwise wait for WaitTimeAfterPowerDown.|
|**Procedure**| <br>If on == true<br>`o` Power on the TP by using the load switch.<br> <br>else<br>`o` Power off the TP by using the load switch.<br> <br>if wait<br>`o` Wait for WaitTimeAfterPowerDown.|


-----

|Return|Col2|
|---|---|
|**Duration**|0 s|
|**Open points**||


##### 3.6.5 GlPro_GetCurrentTime()

**Procedure** GlPro_GetCurrentTime()
**name**

**Description** Returns the current absolute real-time, relative to some arbitrary point in
time. This is used to calculate absolute times in the future, relative to the
time of an event to check timeouts etc. Granularity should be better than
10 ms.

**Parameter**
**description**

**Procedure**

**Return** Current absolute real-time.

**Duration** 0 s

**Open points**

##### 3.6.6 GlPro_GetLocalMcTimer()

**Procedure name** GlPro_GetLocalMcTimer()

**Description** Get current mc_timer value. Note that the value of the mc_timer
increases with real-time every ms.

**Parameter**
**description**

**Procedure**

**Return** Current mc_timer value (unsigned integer, 48 bit).

**Duration** 0 s

**Open points**

##### 3.6.7 GlPro_SetLocalMcTimer()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 355 f 376

|Procedure<br>name|GlPro GetCurrentTime()<br>_|
|---|---|
|**Description**|Returns the current absolute real-time, relative to some arbitrary point in<br>time. This is used to calculate absolute times in the future, relative to the<br>time of an event to check timeouts etc. Granularity should be better than<br>10 ms.|
|**Parameter**<br>**description**||
|**Procedure**||
|**Return**|Current absolute real-time.|
|**Duration**|0 s|
|**Open points**||

|Procedure name|GlPro GetLocalMcTimer()<br>_|
|---|---|
|**Description**|<br>Get current mc_timer value. Note that the value of the mc_timer<br>increases with real-time every ms.|
|**Parameter**<br>**description**||
|**Procedure**||
|**Return**|Current mc_timer value (unsigned integer, 48 bit).|
|**Duration**|<br>0 s|
|**Open points**||


-----

|Procedure name|GlPro SetLocalMcTimer(time)<br>_|
|---|---|
|**Description**|<br>Set current mc_timer value. Note that the value of the mc_timer<br>increases with real-time every ms.|
|**Parameter**<br>**description**|time: new value of the mc_timer, unsigned integer, 48 bit.|
|**Procedure**||
|**Return**|-|
|**Duration**|0 s|
|**Open points**||


##### 3.6.8 GlPro_Abs()

**Procedure name** GlPro_Abs(x)

**Description** Returns the absolute value of x.

**Parameter description** x: Numeric argument.

**Procedure**

**Return** Absolute (positive) value of x.

**Duration** 0 s

**Open points**

##### 3.6.9 GlPro_SetupFamilySecurity()

**Procedure** GlPro_SetupFamilySecurity(familiesAreSecured)
**name**

**Description** Setup all service families either to be secure or non-secure.

**Parameter** - familiesAreSecured: Setup service families to be secure (true) or
**description** non-secure (false).

©C i h 1998 2018 KNX A i i V i 1 1 AS P 356 f 376

|Procedure name|GlPro Abs(x)<br>_|
|---|---|
|**Description**|<br>Returns the absolute value of x.|
|**Parameter description**|x: Numeric argument.|
|**Procedure**||
|**Return**|Absolute (positive) value of x.|
|**Duration**|0 s|
|**Open points**||

|Procedure<br>name|GlPro SetupFamilySecurity(familiesAreSecured)<br>_|
|---|---|
|**Description**|Setup all service families either to be secure or non-secure.|
|**Parameter**<br>**description**| <br>familiesAreSecured: Setup service families to be secure (true) or<br>non-secure (false).|


-----

|Procedure| Use PropAccess DevMgmt(fallBackToSecureSession = true) to<br>_<br>o If familiesAreSecured == false:<br> Set PID ROUTING MULTICAST ADDRESS to<br>_ _ _<br>NonSystemSetupMulticastAddress.<br> Set PID SECURED SERVICE FAMILIES[Device-<br>_ _ _<br>Management] to 0.<br> Set PID SECURED SERVICE -<br>_ _ _<br>FAMILIES[Tunnelling] to 0.<br> Set PID SECURED SERVICE FAMILIES[Routing]<br>_ _ _<br>to 0.<br>o If familiesAreSecured == true:<br> Set PID DEVICE AUTHENTICATION CODE to<br>_ _ _<br>Fdsk.<br> Set PID PASSWORD HASHES[1] to Password-<br>_ _<br>HashDefault.<br> Set PID ROUTING MULTICAST ADDRESS to<br>_ _ _<br>NonSystemSetupMulticastAddress.<br> Set PID BACKBONE KEY to BackboneKey1.<br>_ _<br> Set PID MULTICAST LATENCY TOLERANCE to<br>_ _ _<br>LatencyTolerance.<br> Set PID SYNC LATENCY FRACTION to Sync-<br>_ _ _<br>LatencyTolerance * 255 / LatencyTolerance.<br> Set PID SECURED SERVICE FAMILIES[Device-<br>_ _ _<br>Management] to 1.<br> Set PID SECURED SERVICE -<br>_ _ _<br>FAMILIES[Tunnelling] to 1.<br> Set PID SECURED SERVICE FAMILIES[Routing]<br>_ _ _<br>to 1.|
|---|---|
|**Return**|-|
|**Duration**|ConfirmedRestart|
|**Open points**||


##### 3.6.10 GlPro_ReadSupportedServiceFamiliesDib()

**Procedure** GlPro_ReadSupportedServiceFamiliesDib(coreV2 = true)
**name**

**Description** Read the supported service Family DIB with a SearchRequestExtended
(coreV2 = true) or DescriptionRequest (coreV2 = false) and return the
supported service families DIB.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 357 f 376

|Procedure<br>name|GlPro ReadSupportedServiceFamiliesDib(coreV2 = true)<br>_|
|---|---|
|**Description**|Read the supported service Family DIB with a SearchRequestExtended<br>(coreV2 = true) or DescriptionRequest (coreV2 = false) and return the<br>supported service families DIB.|


-----

|Parameter<br>description| coreV2: True means: Use SearchRequestExtended, which also<br>returns the Security service family and future service families. False<br>means: Use DescriptionRequest which only reports pre-security<br>service families. Set this to false if Core v2 support cannot be<br>assumed.|
|---|---|
|**Procedure**| <br>If coreV2 == true:<br>`o` Send to the BDUT a SearchRequestExtended without any<br>SRP to the BDUT using UDP.<br>`o` Wait for a SearchResponseExtended. Timeout: Timeout-<br>SearchResponseExtendedUnicast<br> <br>On timeout: Abort and return TestFailed.<br> <br>else: (Core v1)<br>`o` Send to the BDUT a DescriptionRequest to the BDUT using<br>UDP.<br>`o` Wait for a DescriptionResponse. Timeout: Timeout-<br>DescriptionResponse<br> <br>On timeout: Abort and return TestFailed.|
|**Return**|Supported service families DIB|
|**Duration**|max(TimeoutSearchResponseExtendedUnicast, TimeoutDescription-<br>Response)|
|**Open points**||


##### 3.6.11 GlPro_OpenTwoTcpConnections()

**Procedure** GlPro_OpenTwoTcpConnections()
**name**

**Description** Open two TCP connections and return them. If only one TCP connection
is supported, only one TCP connection is opened and this connection is
returned twice.

**Parameter** **description**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 358 f 376

|Procedure<br>name|GlPro OpenTwoTcpConnections()<br>_|
|---|---|
|**Description**|Open two TCP connections and return them. If only one TCP connection<br>is supported, only one TCP connection is opened and this connection is<br>returned twice.|
|**Parameter**<br>**description**|-|


-----

|Procedure| Open TCP connection T1 to BDUT.<br>o On error: Abort test and return TestFailed. (Explanation:<br>This procedure is only called when Core v2 (and thus TCP)<br>is supported.)<br> If NumSupportedParallelTcpConnections < 2:<br>o Return (T1, T1).<br> Open TCP connection T2 to BDUT.<br>o On error: Abort test and return TestFailed. (Explanation: At<br>least two connection should be supported in this case.)|
|---|---|
|**Return**| <br>(T1, T2).|
|**Duration**|6 * NetworkLatency|
|**Open points**||


# 4 Property access procedures

This chapter describes procedures wich are used to read and write properties. These
are called mostly from the setup and cleanup phases, but my also be called during the
test procedure.

### 4.1 PropAccess_DevMgmt() (Reading and writing properties)

**Procedure** PropAccess_DevMgmt(fdsk = Fdsk, propertyList, ignoreErrors = false, fall**name** BackToSecureSession = false, restart = true)

**Description** This is the main property access procedure used to read and write property
values. A device management connection is opened and then the
properties are read and/or written using the appropriate mechanisms. If
restart is true, then the BDUT is restarted and this procedure waits until the
BDUT is responsive again after the restart. A restart makes sure all
property values are in effect.

Tests rarely call this procedure directly to perform common setup or
cleanup tasks but instead call the respective PropSetup_*() procedure
instead.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 359 f 376

|Procedure<br>name|PropAccess DevMgmt(fdsk = Fdsk, propertyList, ignoreErrors = false, fall-<br>_<br>BackToSecureSession = false, restart = true)|
|---|---|
|**Description**|This is the main property access procedure used to read and write property<br>values. A device management connection is opened and then the<br>properties are read and/or written using the appropriate mechanisms. If<br>restart is true, then the BDUT is restarted and this procedure waits until the<br>BDUT is responsive again after the restart. A restart makes sure all<br>property values are in effect.<br>Tests rarely call this procedure directly to perform common setup or<br>cleanup tasks but instead call the respective PropSetup_*() procedure<br>instead.|


-----

|Parameter<br>description| fdsk: Key for the data secured communication, or empty if data<br>security should not be used.<br> propertyList: List with properties to write<br> ignoreErrors: Ignore all errors during the execution of this procedure.<br>This means the execution of this procedure is not aborted when<br>parts of it cause an error. Errors should still be logged as warning<br>into log files.<br> fallBackToSecureSession: False: Just try to set the properties using<br>data security. True: First try to set the properties using data security<br>and if this fails try again using IP security in addition to data security.<br> (If ignoreErrors == true and fallBackToSecureSession == true first<br>the fallback should be done on an error, and then errors in the retry<br>should be ignored.)|
|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 360 f 376


-----

|Procedure| If fdsk is non-empty: Use data security in the following, using the<br>fdsk as the tool key.<br> Open a non-secure device management V2 Connection with<br>protocol type TCP<br> switch(Read/Write mode)<br>o case "write scalar":<br> Write property by using a connection oriented A -<br>_<br>PropertyExtValue WriteCon/A FunctionPropertyExt-<br>_ _<br>Command<br>o case "write array element":<br> Write one array propert element by using a connection<br>oriented A PropertyExtValue WriteCon<br>_ _<br>o case "write complete array property":<br> Set property length to the new number of elements by<br>using a connection oriented A PropertyExtValue -<br>_ _<br>WriteCon<br> Write property by using a connection oriented A -<br>_<br>PropertyExtValue WriteCon<br>_<br>o case "read scalar"<br> Read property by using A PropertyExtValue Read<br>_ _<br>o case "read array"<br> Read the property description by using A PropertyExt-<br>_<br>Description Read<br>_<br> Read the current property length by using A Property-<br>_<br>ExtValue Read<br>_<br> Read the current property by using A PropertyExt-<br>_<br>Value Read<br>_<br> If the above failed and if (fallBackToSecureSession == true) and if<br>fdsk is non-empty:<br>o Retry to set all properties using IP security (secure session,<br>device management, userId=1) in addition to data security.<br> If restart == true:<br>o Restart device with erase code 1 (confirmed restart) and<br>channel number 0. Throw an exception if the error code of the<br>A Restart Response is not 0 (no error)<br>_ _<br>o Close all connections.<br>o Wait for WaitTimeAfterRestart.<br>o Execute GlPro WaitUntilRestartComplete().<br>_|
|---|---|
|**Return**|-|
|**Duration**|ConfirmedRestart|
|**Open points**||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 361 f 376


-----

### 4.2 List of properties which are read and/or written during the tests

This table lists all properties read or written by this specification. It indicates whether a
property requires a trailing restart to take effect and it also indicates the mechanism
used to access a property.

In any case, the system specifications always take precedence over this table. This
table is just here to get an overview over the affected properties.

**Property** **Restart** **Read/Write mode**
**required after**
**write**

**Skalar Array** **Complete** **Function**

**element** **array** **property**

PID_ADDITIONAL_- No. X X
INDIVIDUAL_ADDRESSES

PID_BACKBONE_KEY Yes. X

PID_DEVICE_- Yes. X
AUTHENTICATION_CODE

PID_DEVICE_- (No. Just X
DESCRIPTOR read.)

PID_IP_SBC_CONTROL No. Restart X
resets
property to 0.

PID_KNX_INDIVIDUAL_- No. X
ADDRESS

PID_MAIN_LCCONFIG No. X

PID_MAIN_- No. X
LCGRPCONFIG

PID_MANUFACTURER_- (No. Just X
CODE read.)

PID_MAX_INTERFACE_- (No. Just X
APDU_LENGTH read.)

PID_MAX_LOCAL_APDU_- (No. Just X
LENGTH read.)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 362 f 376

|Property|Restart<br>required after<br>write|Read/Write mode|Col4|Col5|Col6|
|---|---|---|---|---|---|
|||**Skalar**|** Array**<br>**element**|**Complete**<br>**array**|**Function**<br>**property**|
|PID_ADDITIONAL_-<br>INDIVIDUAL_ADDRESSES|No.||X|X||
|<br>PID_BACKBONE_KEY|Yes.|X||||
|<br>PID_DEVICE_-<br>AUTHENTICATION_CODE|Yes.|X||||
|<br>PID_DEVICE_-<br>DESCRIPTOR|(No. Just<br>read.)|X||||
|PID_IP_SBC_CONTROL|No. Restart<br>resets<br>property to 0.||||X|
|PID_KNX_INDIVIDUAL_-<br>ADDRESS|No.|X||||
|PID_MAIN_LCCONFIG|No.|X||||
|<br>PID_MAIN_-<br>LCGRPCONFIG|No.|X||||
|PID_MANUFACTURER_-<br>CODE|(No. Just<br>read.)|X||||
|PID_MAX_INTERFACE_-<br>APDU_LENGTH|(No. Just<br>read.)|X||||
|<br>PID_MAX_LOCAL_APDU_-<br>LENGTH|(No. Just<br>read.)|X||||


-----

|PID MEDIUM STATUS<br>_ _|(No. Just<br>read.)|X|Col4|Col5|Col6|
|---|---|---|---|---|---|
|PID_MULTICAST_-<br>LATENCY_TOLERANCE|Yes.|X||||
|<br>PID_OBJECT_TYPE|(No. Just<br>read.)|X||||
|PID_PASSWORD_-<br>HASHES|Yes.||X|||
|PID_PROGMODE|No. Restart<br>resets<br>property to 0.|X||||
|PID_ROUTING_-<br>MULTICAST_ADDRESS|Yes.|X||||
|<br>PID_SECURED_-<br>SERVICE_FAMILIES|Yes.||||X|
|<br>PID_SECURITY_MODE|No.||||X|
|<br>PID_SERIAL_NUMBER|(No. Just<br>read.)|X||||
|PID_SUB_LCCONFIG|No.|X||||
|<br>PID_SUB_LCGRPCONFIG|No.|X||||
|<br>PID_SYNC_LATENCY_-<br>FRACTION|<br>Yes.|X||||
|PID_TOOL_KEY|No.|X||||
|<br>PID_TUNNELLING_-<br>ADDRESSES|(No. Just<br>read.)||X|X||
|PID_TUNNELLING_USERS|Yes.|||X||


### 4.3 Configuration procedures

The following procedures are mostly used by the setup and/or cleanup phases, but may
also be used during the test procedures.

##### 4.3.1 PropSetup_Multicast()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 363 f 376


-----

|Procedure<br>name|PropSetup Multicast(multicastAddress = NonSystemSetupMulticast-<br>_<br>Address, backboneKey = BackboneKey1, latencyTolerance = Latency-<br>Tolerance, syncLatencyTolerance = SyncLatencyTolerance, secure-<br>Routing = 1)|
|---|---|
|**Description**|This is the default property setup for secure multicast tests. This causes a<br>restart of the BDUT. This waits until the device is responsive again.This<br>procedure is usually called before each multicast test. This is called by Gl-<br>Pro_SetupMulticast().|
|**Parameter**<br>**description**|<br> <br>multicastAddress: System routing multicast address which will be<br>used during the test.<br> <br>backboneKey: The backbone key which will be used during the test.<br> <br>latencyTolerance: Set PID_MULTICAST_LATENCY_TOLERANCE<br>to this.<br> <br>syncLatencyTolerance: Set PID_SYNC_LATENCY_FRACTION<br>according to this.<br> <br>secureRouting: Sets PID_SECURED_SERVICE_-<br>FAMILIES[Routing].|
|**Procedure**| <br>Use PropAccess_DevMgmt(fdsk = Fdsk) to<br>`o` Set PID_BACKBONE_KEY to backboneKey.<br>`o` Set PID_ROUTING_MULTICAST_ADDRESS to multicast-<br>Address.<br>`o` Set PID_MULTICAST_LATENCY_TOLERANCE to latency-<br>Tolerance.<br>`o` Set PID_SYNC_LATENCY_FRACTION to syncLatency-<br>Tolerance * 255 / latencyTolerance.<br>`o` Set PID_SECURED_SERVICE_FAMILIES[Routing] to<br>secureRouting.|
|**Return**||
|**Duration**|ConfirmedRestart|
|**Open points**||


##### 4.3.2 PropSetup_Unicast()

**Procedure** PropSetup_Unicast(deviceAuthenticationCode = Fdsk, passwordHash**name** User1 = PasswordHashDefault, userId = 0, passwordHash = 0, userId2 =
0, passwordHash2 = 0)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 364 f 376

|Procedure<br>name|PropSetup Unicast(deviceAuthenticationCode = Fdsk, passwordHash-<br>_<br>User1 = PasswordHashDefault, userId = 0, passwordHash = 0, userId2 =<br>0, passwordHash2 = 0)|
|---|---|


-----

|Description|This is the default property setup for secure unicast tests. This causes a<br>restart of the BDUT and waits until the device is responsive again. This<br>procedure is usually called before each test which creates one or more<br>secure sessions. This is called by GlPro SetupUnicast().<br>_|
|---|---|
|**Parameter**<br>**description**|<br> <br>deviceAuthenticationCode: Device authentication code.<br> <br>passwordHashUser1: Password hash of management user.<br> <br>userId: Optional user id of a non-management user. Only used to<br>set 'passwordHash'.<br> <br>passwordHash: Password hash for user 'userId'. Only set if userId !=<br>0.<br> <br>userId2: Optional user id of a non-management (e.g. tunnelling)<br>user. Only used to set 'passwordHash2'.<br> <br>passwordHash2: Password hash for user 'userId2'. Only set if<br>userId2  != 0.|
|**Procedure**| <br>Use PropAccess_DevMgmt(fdsk = Fdsk) to<br>`o` Set PID_DEVICE_AUTHENTICATION_CODE to device-<br>AuthenticationCode.<br>`o` Set PID_PASSWORD_HASHES[1] to passwordHashUser1.<br>`o` If userId != 0:<br> <br>Set PID_PASSWORD_HASHES[userId] to password-<br>Hash.<br>`o` If userId2 != 0:<br> <br>Set PID_PASSWORD_HASHES[userId2] to<br>passwordHash2.|
|**Return**||
|**Duration**|ConfirmedRestart|
|**Open points**||


##### 4.3.3 PropSetup_SystemBroadcast()

**Procedure** PropSetup_SystemBroadcast( securityMode = none, multicastAddress =
**name** none, backboneKey = none, progMode = none, sbcMode = none)

**Description** This is the default property setup for system broadcast tests. This causes a
restart of the BDUT if necessary. In this case this procedure waits until the
device is responsive again.This optionally sets security mode, programming
mode, system broadcast mode, routing multicast address, and backbone
key.Routing security is enabled/disabled whenever a multicast address is
specified. It is enabled iff a backbone key is specified in addition.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 365 f 376

|Procedure<br>name|PropSetup SystemBroadcast( securityMode = none, multicastAddress =<br>_<br>none, backboneKey = none, progMode = none, sbcMode = none)|
|---|---|
|**Description**|This is the default property setup for system broadcast tests. This causes a<br>restart of the BDUT if necessary. In this case this procedure waits until the<br>device is responsive again.This optionally sets security mode, programming<br>mode, system broadcast mode, routing multicast address, and backbone<br>key.Routing security is enabled/disabled whenever a multicast address is<br>specified. It is enabled iff a backbone key is specified in addition.|


-----

|Parameter<br>description| securityMode: If not 'none': Set PID SECURITY MODE to security-<br>_ _<br>Mode.<br> multicastAddress: If not 'none': Set PID ROUTING MULTICAST -<br>_ _ _<br>ADDRESS and set PID SECURED SERVICE FAMILIES[ Routing]<br>_ _ _<br>= 0 or 1 (for backBoneKey being 'none' or not 'none', respectively).<br> backboneKey: If not 'none': Set PID BACKBONE KEY to backbone-<br>_ _<br>Key.<br> progMode: If not 'none': Set PID PROGMODE to progMode.<br>_<br> sbcMode: If not 'none': Set PID IP SBC CONTROL to sbcMode.<br>_ _ _|
|---|---|
|**Procedure**| <br>if securityMode != none or multicastAddress != none:<br>`o` Use PropAccess_DevMgmt( fdsk = Fdsk, ignoreErrors = false,<br>fallBackToSecureSession = false) to<br> <br>If multicastAddress is != none:<br> <br>Set PID_ROUTING_MULTICAST_ADDRESS to<br>multicastAddress.<br> <br>If BDUT is a secure device:<br> <br>If securityMode != none:<br> <br>Set PID_SECURITY_MODE to security-<br>Mode.If multicastAddress != none:<br> <br>If backboneKey != none:<br> <br>Set PID_SECURED_SERVICE_FAMILIES[<br>Routing] = 1.<br> <br>Set PID_BACKBONE_KEY = backboneKey<br> <br>else (backboneKey == none):<br> <br>Set PID_SECURED_SERVICE_FAMILIES[<br>Routing] = 0.<br> <br>If progMode != none or sbcMode != none:<br>`o` Use PropAccess_DevMgmt(fdsk = Fdsk, ignoreErrors = false,<br>fallBackToSecureSession = false, restart = false) to<br> <br>If progMode != none:<br> <br>Set PID_PROGMODE to progMode<br> <br>If BDUT is a router:<br> <br>If sbcMode != none:<br> <br>Set PID_IP_SBC_CONTROL to<br>sbcMode.|
|**Return**|-|
|**Duration**|ConfirmedRestart|
|**Open points**||


##### 4.3.4 PropSetup_NonSecure()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 366 f 376


-----

|Procedure<br>name|PropSetup NonSecure(ignoreErrors = false, fallBackToSecureSession =<br>_<br>false, unlockBroadcastAndGroup = false)|
|---|---|
|**Description**|This is the default property setup for non-secure tests. This is usually<br>executed in the cleanup phases of secure tests to allow executing non-<br>secure tests afterwards which do not know about security.Note: Non-secure<br>tests are not specified in this specification. These are the tests which were<br>ported from the old (pre-secure) IPVT to the new secure IPVT.|
|**Parameter**<br>**description**| <br>ignoreErrors: Ignore all errors during the execution of this procedure.<br>This means the execution of this procedure is not aborted when<br>parts of it cause an error. Errors should still be logged as warning<br>into log files.<br> <br>fallBackToSecureSession: False: Just try to set the properties using<br>data security. True: First try to set the properties using data security<br>and if this fails try again using IP security in addition to data security.|
|**Procedure**| <br>Use PropAccess_DevMgmt(fdsk = Fdsk, ignoreErrors = ignore-<br>Errors, fallBackToSecureSession = fallBackToSecureSession) to<br>`o` Set PID_ROUTING_MULTICAST_ADDRESS to Original-<br>MulticastAddress.<br>`o` Set PID_KNX_INDIVIDUAL_ADDRESS to IndividualAddress.<br>`o` Set PID_PROGMODE to 0. (Note: Not necessary. Is reset to<br>0 by Restart anyway.)<br>`o` If BDUT is a secure device:<br>`o` Set PID_SECURED_SERVICE_FAMILIES[Device-<br>Management] to 0.<br>`o` Set PID_SECURED_SERVICE_FAMILIES[Tunnelling] to 0.<br>`o` Set PID_SECURED_SERVICE_FAMILIES[Routing] to 0.<br>`o` Set PID_SECURITY_MODE to 0.<br>`o` If BDUT is a router:<br>`o` Set PID_IP_SBC_CONTROL to 0. (Note: Not necessary. Is<br>reset to 0 by Restart anyway.)<br> <br>if unlockBroadcastAndGroup == true:<br> <br>Set PID_MAIN_LCCONFIG to 77h<br>(BROADCAST_UNLOCK).<br> <br>Set PID_SUB_LCCONFIG to 77h<br>(BROADCAST_UNLOCK).<br> <br>Set PID_MAIN_LCGRPCONFIG to 15h<br>(GROUP_UNLOCK).<br> <br>Set PID_SUB_LCGRPCONFIG to 15h<br>(GROUP_UNLOCK).|
|**Return**|-|
|**Duration**|ConfirmedRestart|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 367 f 376


-----

|Open points|Col2|
|---|---|


##### 4.3.5 PropSetup_SetProgrammingMode()

**Procedure** PropSetup_SetProgrammingMode(progMode)
**name**

**Description** Set or clear programming mode. Note that the programming mode is
cleared by a restart so this has no effect when used with (or before a)
PropAccess_DevMgmt(restart = true).

**Parameter** progMode: Value of PID_PROGMODE (0 or 1).
**description**

**Procedure** - Use PropAccess_DevMgmt(fdsk = Fdsk, restart = false) to
`o` Set PID_PROGMODE to progMode.

**Return** 
**Duration**

**Open points**

##### 4.3.6 PropSetup_SetRoutingMulticastAddress()

**Procedure** PropSetup_SetRoutingMulticastAddress(multicastAddress)
**name**

**Description** Set routing multicast address and wait until this is effective. This neither
uses IP system broadcast nor data security. This assumes non-secure
routing.

**Parameter** - multicastAddress: New multicast address to be used for routing.
**description**

**Procedure** - Use PropAccess_DevMgmt(fdsk = Fdsk, restart = true) to
`o` Set PID_ROUTING_MULTICAST_ADDRESS to multicastAddress.

**Return** 
**Duration** ConfirmedRestart

**Open points**

##### 4.3.7 PropSetup_SetBackboneKey()

©C i h 1998 2018 KNX A i i V i 1 1 AS P 368 f 376

|Procedure<br>name|PropSetup SetProgrammingMode(progMode)<br>_|
|---|---|
|**Description**|Set or clear programming mode. Note that the programming mode is<br>cleared by a restart so this has no effect when used with (or before a)<br>PropAccess_DevMgmt(restart = true).|
|**Parameter**<br>**description**|<br>progMode: Value of PID_PROGMODE (0 or 1).|
|**Procedure**| <br>Use PropAccess_DevMgmt(fdsk = Fdsk, restart = false) to<br>`o` Set PID_PROGMODE to progMode.|
|**Return**|-|
|**Duration**||
|**Open points**||

|Procedure<br>name|PropSetup SetRoutingMulticastAddress(multicastAddress)<br>_|
|---|---|
|**Description**|Set routing multicast address and wait until this is effective. This neither<br>uses IP system broadcast nor data security. This assumes non-secure<br>routing.|
|**Parameter**<br>**description**| <br>multicastAddress: New multicast address to be used for routing.|
|**Procedure**| <br>Use PropAccess_DevMgmt(fdsk = Fdsk, restart = true) to<br>`o` Set PID_ROUTING_MULTICAST_ADDRESS to multicast-<br>Address.|
|**Return**|-|
|**Duration**|ConfirmedRestart|
|**Open points**||


-----

|Procedure name|PropSetup SetBackboneKey(backboneKey)<br>_|
|---|---|
|**Description**|<br>Set backbone key and wait until this is effective.|
|**Parameter description**| <br>backboneKey: New backbone key to be used for routing.|
|**Procedure**| <br>Use PropAccess_DevMgmt(fdsk = Fdsk) to<br>`o` Set PID_BACKBONE_KEY to backboneKey.|
|**Return**|-|
|**Duration**|ConfirmedRestart|
|**Open points**||


##### 4.3.8 PropSetup_TunnellingUsers()

**Procedure name** PropSetup_TunnellingUsers(newTunnellingUsers)

**Description** Set PID_TUNNELLING_USERS.

**Parameter** - newTunnellingUsers: An array with the new tunnelling users
**description** table.

**Procedure** - Use PropAccess_DevMgmt(fdsk = Fdsk) to
`o` Set PID_TUNNELLING_USERS to newTunnellingUsers

**Return**

**Duration**

**Open points**

##### 4.3.9 PropSetup_GetAdditionalIndividualAddresses()

**Procedure name** PropSetup_GetAdditionalIndividualAddresses()

**Description** Get and return all IAs in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES.

**Parameter**
**description**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 369 f 376

|Procedure name|PropSetup TunnellingUsers(newTunnellingUsers)<br>_|
|---|---|
|**Description**|<br>Set PID_TUNNELLING_USERS.|
|**Parameter**<br>**description**|<br> <br>newTunnellingUsers: An array with the new tunnelling users<br>table.|
|**Procedure**| <br>Use PropAccess_DevMgmt(fdsk = Fdsk) to<br>`o` Set PID_TUNNELLING_USERS to newTunnelling-<br>Users|
|**Return**||
|**Duration**||
|**Open points**||

|Procedure name|PropSetup GetAdditionalIndividualAddresses()<br>_|
|---|---|
|**Description**|<br>Get and return all IAs in PID_ADDITIONAL_INDIVIDUAL_-<br>ADDRESSES.|
|**Parameter**<br>**description**||


-----

|Procedure| Execute PropAccess DevMgmt(fdsk = Fdsk, restart = false)<br>_<br>to:<br>o Read PID ADDITIONAL INDIVIDUAL -<br>_ _ _<br>ADDRESSES|
|---|---|
|**Return**|List of IAs in PID_ADDITIONAL_INDIVIDUAL_ADDRESSES.|
|**Duration**||
|**Open points**||


##### 4.3.10 PropSetup_SetIndividualAddresses()

**Procedure name** PropSetup_SetIndividualAddresses(knxIndividualAddress, additionalIndividualAddresses)

**Description** Set PID_KNX_INDIVIDUAL_ADDRESS and PID_ADDITIONAL_INDIVIDUAL_ADDRESSES.

**Parameter** - knxIndividualAddresses: Device Individual Address to set.
**description** - additionalIndividualAddress: Additional Individual Addresses to
set.

**Procedure** - Use PropAccess_DevMgmt(fdsk = Fdsk, restart = false) to
`o` Set PID_KNX_INDIVIDUAL_ADDRESS to knxIndividualAddress
`o` Set PID_ADDITIONAL_INDIVIDUAL_ADDRESSES to
additionalIndividualAddresses

**Return**

**Duration**

**Open points**

##### 4.3.11 PropSetup_SecurityMode()

**Procedure name** PropSetup_SecurityMode(securityMode)

**Description** Set PID_SECURITY_MODE.

**Parameter** - securityMode: Disable or enable, to disable or enable the
**description** security mode.

©C i h 1998 2018 KNX A i i V i 1 1 AS P 370 f 376

|Procedure name|PropSetup SetIndividualAddresses(knxIndividualAddress, additional-<br>_<br>IndividualAddresses)|
|---|---|
|**Description**|Set PID_KNX_INDIVIDUAL_ADDRESS and PID_ADDITIONAL_-<br>INDIVIDUAL_ADDRESSES.|
|**Parameter**<br>**description**|<br> <br>knxIndividualAddresses: Device Individual Address to set.<br> <br>additionalIndividualAddress: Additional Individual Addresses to<br>set.|
|**Procedure**| <br>Use PropAccess_DevMgmt(fdsk = Fdsk, restart = false) to<br>`o` Set PID_KNX_INDIVIDUAL_ADDRESS to knxIndividual-<br>Address<br>`o` Set PID_ADDITIONAL_INDIVIDUAL_ADDRESSES to<br>additionalIndividualAddresses|
|**Return**||
|**Duration**||
|**Open points**||

|Procedure name|PropSetup SecurityMode(securityMode)<br>_|
|---|---|
|**Description**|<br>Set PID_SECURITY_MODE.|
|**Parameter**<br>**description**|<br> <br>securityMode: Disable or enable, to disable or enable the<br>security mode.|


-----

|Procedure| Use PropAccess DevMgmt(fdsk = Fdsk) to<br>_<br>o Set PID SECURITY MODE to securityMode<br>_ _|
|---|---|
|**Return**||
|**Duration**||
|**Open points**||


##### 4.3.12 PropSetup_SetSecuredServices()

**Procedure name** PropSetup_SetSecuredServices(routing = non-secure, tunnelling =
non-secure, deviceMgnt = non-secure)

**Description** Set PID_SECURED_SERVICE_FAMILIES.

**Parameter** - routing: Disable or enable, security for routing.
**description** - tunnelling: Disable or enable, security for tunnelling .

              - deviceMgnt: Disable or enable, security for device management.

**Procedure** - Use PropAccess_DevMgmt(fdsk = Fdsk) to
`o` Set PID_SECURED_SERVICE_FAMILIES[routing] to
routing
`o` Set PID_SECURED_SERVICE_FAMILIES[tunnelling] to
tunnelling
`o` Set PID_SECURED_SERVICE_FAMILIES[deviceMgnt]
to deviceMgnt

**Return**

**Duration**

**Open points**

©C i h 1998 2018 KNX A i i V i 1 1 AS P 371 f 376

|Procedure name|PropSetup SetSecuredServices(routing = non-secure, tunnelling =<br>_<br>non-secure, deviceMgnt = non-secure)|
|---|---|
|**Description**|Set PID_SECURED_SERVICE_FAMILIES.|
|**Parameter**<br>**description**|<br> <br>routing: Disable or enable, security for routing.<br> <br>tunnelling: Disable or enable, security for tunnelling .<br> <br>deviceMgnt: Disable or enable, security for device management.|
|**Procedure**| <br>Use PropAccess_DevMgmt(fdsk = Fdsk) to<br>`o` Set PID_SECURED_SERVICE_FAMILIES[routing] to<br>routing<br>`o` Set PID_SECURED_SERVICE_FAMILIES[tunnelling] to<br>tunnelling<br>`o` Set PID_SECURED_SERVICE_FAMILIES[deviceMgnt]<br>to deviceMgnt|
|**Return**||
|**Duration**||
|**Open points**||


-----

# 5. Profile guidelines

This section does not define the actual profiles used for actual devices, but it should give some idea which tests need to
be covered for which class of device.

X = Test must be executed if device supports this aspect. (X) = Aspect is tested by this test if aspect is available in device.

**Test** **IP-Security** **IP-** **Core** **Core v2** **Tunnelling** **System** **System** **Remote**
**(multicast)** **Security** **v2** **(discovery)** **v2** **Broadcast** **Broadcast** **Configuration**

**(unicast)** **(TCP)** **(routing)** **(management)**

2.1.* X

2.2.1 - X X
2.2.31

2.2.31 X X X

2.2.32 X

2.2.33 X X X

2.2.34 - X X
2.2.38

2.2.39 (Does not use any of the listed aspects. Just uses data security.)

2.3.1 X

2.3.2, X X
2.3.3

2.3.4 X X X (X)

©C i h 1998 2018 KNX A i i V i 1 1 AS P 372 f 376

|Test|IP-Security<br>(multicast)|IP-<br>Security<br>(unicast)|Core<br>v2<br>(TCP)|Core v2<br>(discovery)|Tunnelling<br>v2|System<br>Broadcast<br>(routing)|System<br>Broadcast<br>(management)|Remote<br>Configuration|
|---|---|---|---|---|---|---|---|---|
|2.1.*|X||||||||
|2.2.1 -<br>2.2.31||X|X||||||
|2.2.31||X|X||X||||
|2.2.32|X||||||||
|2.2.33||X|X||X||||
|2.2.34 -<br>2.2.38||X|X||||||
|2.2.39|(Does not use any of the listed aspects. Just uses data security.)|(Does not use any of the listed aspects. Just uses data security.)|(Does not use any of the listed aspects. Just uses data security.)|(Does not use any of the listed aspects. Just uses data security.)|(Does not use any of the listed aspects. Just uses data security.)|(Does not use any of the listed aspects. Just uses data security.)|(Does not use any of the listed aspects. Just uses data security.)|(Does not use any of the listed aspects. Just uses data security.)|
|2.3.1|X||||||||
|2.3.2,<br>2.3.3||X|X||||||
|2.3.4|X|X|X||(X)||||


-----

|2.3.5,<br>2.3.6|X|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|2.3.7,<br>2.3.8||X|X||X||||
|2.3.9|X (either multicast or<br>unicast)|X (either multicast or<br>unicast)|||||||
|2.3.10||||||||X|
|2.3.11||X|||(X)||||
|2.4.1,<br>2.4.2||||||X|X||
|2.4.3 -<br>2.4.8||||||X|||
|2.4.9,<br>2.4.10|||||||X||
|2.4.11,<br>2.4.12||||||X|||
|2.4.13 -<br>2.4.19|||||||X||
|2.4.20 -<br>2.4.22||||||X|||
|2.4.23 -<br>2.4.29|||||||X||
|2.4.30,<br>2.4.31||||||X|||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 373 f 376


-----

|2.5.1 -<br>2.5.10|Col2|Col3|X|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|2.5.11|||X|X|||||
|2.5.12,<br>2.5.13|||X||||||
|2.5.14 - 2<br>5.16||X|X||||||
|2.5.17 -<br>2.5.23|||X||||||
|2.5.24||X|X||||||
|2.5.25|||X||||||
|2.5.26||X|X||||||
|2.5.27 - 2<br>.5.31|||X||||||
|2.5.28 -<br>2.5.30|||X||||||
|2.5.31|||X||(X)||||
|2.6.1|||X|X|||||
|2.6.2||||X|||||
|2.6.3|||X|X|||||
|2.6.4||X|X|X|||||
|2.6.5 -<br>2.6.8||||X|||||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 374 f 376


-----

|2.6.9|Col2|Col3|X|X|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|2.6.10||||X|||||
|2.6.11|||X|X|||||
|2.6.12 -<br>2.6.14||||X|||||
|2.6.15 -<br>2.6.17|||X|X|||||
|2.6.18 -<br>2.6.20||||X|||||
|2.7.1 -<br>2.7.5|||||X||||
|2.7.6|||X||X||||
|2.7.8 -<br>2.7.9|||||X||||
|2.7.10|||||X||||
|2.7.11,<br>2.7.12||X|X||X||||
|2.7.13|||||X||||
|2.7.14||X|X||X||||
|2.7.15 -<br>2.7.18|||||X||||
|2.7.19||X|X||X||||
|2.7.20 -<br>2.7.23|||||X||||


©C i h 1998 2018 KNX A i i V i 1 1 AS P 375 f 376


-----

|2.7.24 -<br>2.7.28|Col2|X|X|Col5|X|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|


©C i h 1998 2018 KNX A i i V i 1 1 AS P 376 f 376


-----

