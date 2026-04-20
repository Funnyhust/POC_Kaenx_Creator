# Profiles

## Base Profiles

 Coupler Model 2.0

###### Summary

 This document specifies the requirements for implementations according Coupler Model 2.0.

 This document is a KNX Approved Standard.


-----

#### Document updates

**Version** **Date** **Modifications**

01.01.01 2021.12.22 - Document creation based on AN161 “Coupler Model 2.0”.

#### References

[01] Chapter 3/2/5 “Communication Medium RF” v02.03.01 AS of 2021.09.28

[02] Chapter 3/3/1 “Physical Layer General” v01.01.02 AS of 2013.12.10

[03] Chapter 3/3/2 “Data Link Layer General” v01.03.02 AS of 2021.09.28

[04] Chapter 3/3/3 “Network Layer” v02.01.01 AS of 2021.09.28

[05] Chapter 3/3/4 “Transport Layer” v01.02.03 AS of 2021.09.28

[06] Chapter 3/3/7 “Application Layer” v02.01.01 AS of 2021.09.28

[07] Chapter 3/4/1 “Application Interface Layer” v02.01.01 AS of 2021.09.28

[08] Chapter 3/5/1 “Resources” v01.10.01 AS of 2021.09.29

[09] Chapter 3/5/2 “Management Procedures” v02.01.02 AS of 2021.09.29

[10] Chapter 3/5/3 “Configuration Procedures” v02.01.01 AS of 2021.09.30

[11] Chapter 3/7/3 “Standard Identifier Tables” v01.04.01 AS of 2021.10.01

[12] Chapter 8/2/5 “Radio Frequency” v1.0 RfV of 2003.12.03

[13] Chapter 8/3/3 “Network Layer Tests” v1.0 AS of 2002.02.05

[14] Chapter 8/3/4 “Transport Layer Tests” v1.0 AS of 2002.02.05

[15] Chapter 8/3/7 “Application (Interface) Layer Testing – Network Management
Server/Client Testing” v1.0 AS of 2002.02.05

[16] Part 8/7 “Interworking Tests” v1.1 FV of 2003.10.15

Filename: 06_02_01 Coupler Model 2.0 v01.01.01 AS.docx
Version: 01.01.01
Status: Approved Standard
Savedate: 2021.12.22
Number of pages: 31

|Version|Date|Modifications|
|---|---|---|
|01.01.01|2021.12.22|-<br>Document creation based on AN161 “Coupler Model 2.0”.|


-----

#### Contents

###### 1 Coupler Model 2.0 .................................................................................................................. 5 1.1 Basic Model .................................................................................................................... 5 1.2 Media for the Medium Interfaces ................................................................................... 6 1.3 Router Object .................................................................................................................. 6 1.4 Control of acknowledging, routing and filtering ............................................................ 7 1.4.1 Data Link Layer .................................................................................................. 7 1.4.2 Network Layer, Filter Table and Coupler Parameters ........................................ 8 1.4.3 Implementation specific Coupler Parameters ..................................................... 8 1.5 Management ................................................................................................................... 9 1.5.1 Individual Addresses ........................................................................................... 9 1.5.2 Device Descriptor Type 0 (Mask Version) ......................................................... 9

 2 Profiles definitions ................................................................................................................ 10 2.1 Introduction and common requirements ....................................................................... 10 2.2 Medium dependent layers ............................................................................................. 10 2.2.1 TP1 medium dependent layers .......................................................................... 10 2.2.2 RF medium dependent layers............................................................................ 10 2.3 Common stack .............................................................................................................. 11 2.3.1 Overview ........................................................................................................... 11 2.3.2 Physical Layer - general.................................................................................... 11 2.3.3 Data Link Layer - general ................................................................................. 11 2.3.4 Data Link Layer - Router .................................................................................. 12 2.3.5 Data Link Layer - Bridge .................................................................................. 12 2.3.6 Network Layer - general ................................................................................... 12 2.3.7 Network Layer – Router ................................................................................... 12 2.3.8 Network Layer – Bridge ................................................................................... 12 2.3.9 Network Layer- RF Retransmitter .................................................................... 12 2.3.10 Network Layer TP1/RF Media Coupler ........................................................... 13 2.3.11 Transport Layer–multicast ................................................................................ 13 2.3.12 Application Layer – Group Object services...................................................... 13 2.3.13 Application Layer – Property Value Services .................................................. 13 2.3.14 Application Layer – Function Property services .............................................. 13 2.3.15 Application Interface Layer – Group Objects ................................................... 14 2.3.16 Application Interface Layer – Interface Objects ............................................... 14 2.3.17 Application Interface Layer – Function Properties ........................................... 14 2.3.18 Application Layer Interface Layer – Group Objects indirection ...................... 14 2.3.19 Application Interface Layer for unidirectional devices .................................... 14 2.4 Specific parts ................................................................................................................ 15 2.5 Configuration and management .................................................................................... 15 2.5.1 Communication ................................................................................................. 15 2.5.2 Device Management ......................................................................................... 17 2.5.3 Device Identification ......................................................................................... 21 2.5.4 Device Individualisation ................................................................................... 22 2.5.5 Device Linking.................................................................................................. 24 2.5.6 Application Handling ........................................................................................ 24 2.6 Interface Objects and Properties ................................................................................... 25 2.6.1 Interface Objects ............................................................................................... 25 2.6.2 Device Object (Object Type = 0) ...................................................................... 26 2.6.3 Router Object (Object Type = 6) ...................................................................... 28


-----

###### 2.6.4 LTE Address Filter Table Object (Object Type = 0007h) ................................ 30 2.7 User Interface ................................................................................................................ 31 2.7.1 Reset to factory default ..................................................................................... 31


-----

### 1 Coupler Model 2.0

#### 1.1 Basic Model
###### The Coupler Model 2.0 shall be composed of exactly two Medium Interfaces. For the use as a Router, one Medium Interface shall act as the Primary Side and the other Medium Interface shall act as the Secondary Side.

 Each Medium Interface shall be represented by exactly one Router Object. See Figure 1. There are no requirements as to the absolute value of the Object Indexes of these Interface Objects, but the Object Index of the Router Object of the Primary Side shall be lower than the Object Index of the Router Object of the Secondary Side.

Primary Subnetwork

First Medium Interface Primary Side

[Router Object ] [Router Object ]

for the first for the
Medium Interface Primary Side

Second Medium Interface Secondary Side

Filter

[Router Object ] [Router Object ]
for the second for the

Table

Medium Interface Secondary Side

Secondary Subnetwork


Second Medium Interface

[Router Object ]
for the second
Medium Interface



[Router Object ]

for the first
Medium Interface



[Router Object ]
for the second
Medium Interface



[Router Object ]

for the first
Medium Interface


Primary Subnetwork


Second Medium Interface


Secondary Side


###### Figure 1 – Coupler Model 2.0 – basic model


Secondary Side

Filter

[Router Object ]

for the

Table

Secondary Side



[Router Object ]

for the
Secondary Side


Secondary Subnetwork


Primary Side


###### Figure 2 – Coupler Model 2.0 as Router



[Router Object ]

for the
Primary Side


First Medium Interface


###### Implementations of the Coupler Model 2.0 shall always be usable as KNX Router. In this case, the first Medium Interface shall act as Primary Side and the second Medium Interface shall act as Secondary Side. See Figure 2. The classification of any Medium Interface as either Primary Side or Secondary Side is fixed at manufacturing time. It is not foreseen that these roles can be attributed through configuration.

 For this, the Second Medium Interface shall exhibit a Filter Table.



[Router Object ]

for the
Primary Side


-----

#### 1.2 Media for the Medium Interfaces

###### Primary Side

 Secondary Side TP1 PL110 RF IP

 TP1 yes yes [a] no yes

 PL110 yes no no yes

 RF yes yes [b] no yes

 IP no no no no

a Implementations of such Coupler exist but are not standardised. If this combination would
cause problems, this model may not be supported in this paper.
b This paper does not exclude this Coupler realisation. However, it contains two DoAs: a two
octet KNX PL110 DoA and a six octet KNX RF DoA. This has to be considered in the Network
Configuration Procedures.

Legend

yes: A Coupler Model 2.0 with this Primary Medium and that Secondary Medium is assumed meaningful.

no: A Coupler Model 2.0 with this Primary Medium and that Secondary Medium is not assumed meaningful. Such
device shall not be supported.

#### 1.3 Router Object
###### The Interface Object Type of the Router Object shall be the same as in the Coupler Model 1.x. The same Properties with the same Property Identifiers shall be used for parameters with the same behaviour on both Medium Interfaces. Each Router Object shall contain the following parameters.

 1. Common parameters required for each Router Object

EXAMPLE 1 To enable the Medium Interface, to report the loss of communication on that Medium
Interface, etc.

###### 2. Parameters for the specific use of that Medium Interface as Primary – or as Secondary Side

EXAMPLE 2 Filter Table, Subnetwork – and Device Address, etc.

###### 3. Parameters specific to the KNX medium used for that Medium Interface

EXAMPLE 3 Domain Addresses for open media

###### This is only an introduction. There is no need to be more precise. It will be clear from the Profile specification which Properties are mandatory for which Interface Object Instance.

 The Properties in the Router Object for each connection shall be assigned according to the following rule.

 1. The first range shall be the range for the KNX communication medium independent Properties. 2. Then, range of 8 Properties are foreseen for the KNX communication medium specific Properties.

 If more Properties are needed for a KNX communication medium, then KNX Association may assign one or more additional ranges of 8 Properties to this communication medium or may store the Properties for this medium in a medium specific Interface Object.

 As a result of these rules, the current Properties defined in this document are assigned according to the scheme given in Table 1.

|Secondary Side|Primary Side|Col3|Col4|Col5|
|---|---|---|---|---|
|**Secondary Side**|**TP1**|**PL110**|**RF**|**IP**|
|TP1|yes|yesa|no|yes|
|PL110|yes|no|no|yes|
|RF|yes|yesb|no|yes|
|IP|no|no|no|no|
|a <br>Implementations of such Coupler exist but are not standardised. If this combination would<br>cause problems, this model may not be supported in this paper.<br>b <br>This paper does not exclude this Coupler realisation. However, it contains two DoAs: a two<br>octet KNX PL110 DoA and a six octet KNX RF DoA. This has to be considered in the Network<br>Configuration Procedures.|a <br>Implementations of such Coupler exist but are not standardised. If this combination would<br>cause problems, this model may not be supported in this paper.<br>b <br>This paper does not exclude this Coupler realisation. However, it contains two DoAs: a two<br>octet KNX PL110 DoA and a six octet KNX RF DoA. This has to be considered in the Network<br>Configuration Procedures.|a <br>Implementations of such Coupler exist but are not standardised. If this combination would<br>cause problems, this model may not be supported in this paper.<br>b <br>This paper does not exclude this Coupler realisation. However, it contains two DoAs: a two<br>octet KNX PL110 DoA and a six octet KNX RF DoA. This has to be considered in the Network<br>Configuration Procedures.|a <br>Implementations of such Coupler exist but are not standardised. If this combination would<br>cause problems, this model may not be supported in this paper.<br>b <br>This paper does not exclude this Coupler realisation. However, it contains two DoAs: a two<br>octet KNX PL110 DoA and a six octet KNX RF DoA. This has to be considered in the Network<br>Configuration Procedures.|a <br>Implementations of such Coupler exist but are not standardised. If this combination would<br>cause problems, this model may not be supported in this paper.<br>b <br>This paper does not exclude this Coupler realisation. However, it contains two DoAs: a two<br>octet KNX PL110 DoA and a six octet KNX RF DoA. This has to be considered in the Network<br>Configuration Procedures.|


-----

###### Table 1 – PID assignment scheme in the Router Object for the Coupler Model 2.0

 PID range

 Start End Usage

 0 50 Interface Object Type independent Properties

 51 95 KNX medium independent Coupler Properties

 96 103 KNX TP1 specific Coupler Properties

 104 111 KNX PL110 specific Coupler Properties

 112 119 KNX RF specific Coupler Properties
 This Table 1 does not put requirements on devices; it is only an administrative means for the KNX Association System Group, which has the responsibility for the assignment of the above and future standard Property Identifiers.

 The Router Object is a Standard System Interface Object: according to clause 3.1 “Assignment scheme” in [11], non-standardized (“implementation specific”) Properties shall have PID-values between 201 and 255.

 KNX IP

 There are no KNXnet/IP or KNX IP specific Properties in the Coupler Model 2.0. The KNXnet/IP Router shall base on the medium independent Coupler Properties and on the KNXnet/IP Parameter Object. Possibly, extension may be added later.

#### 1.4 Control of acknowledging, routing and filtering

##### 1.4.1 Data Link Layer
###### The Coupler Model 2.0 shall in any case evaluate any incoming Frame for passing up in its communication stack to its own management, as if it is an end device located in the Subnetwork on which the incoming Frame arrives, and this regardless of the routing conclusion for that Frame.

 - A Frame may thus be acknowledged, even if it is not routed.

    - Specifically, an incoming Frame with hop count = 0 or with Route Last Flag = 1 will be
###### acknowledged, even if these Frames will not be routed, and passed in the own communication stack to the own Management. The Coupler can thus be managed with such Frames from both Medium Interfaces.

    - Also, a Frame with a System Broadcast service will be acknowledged and passed to the
###### Coupler management, even if the routing of system broadcast services (PID_PL110_SBC_CONTROL or PID_RF_SBC_CONTROL) is disabled.

 - A Frame may thus be acknowledged on all Medium Interfaces.

    - Specifically, a Frame with Destination Address equal to the own Individual Address will be
###### acknowledged, on the Primary Side if it is received on the Primary Side, but also on any secondary Side if it is received on that Secondary Side.

    - This can thus be seen as if the Coupler Model 2.0, as device itself, belongs to all connected
###### Subnetworks.

 Please note the indications about the Coupler Individual Address in 1.5.1.

|PID range|Col2|Usage|
|---|---|---|
|**Start**|**End**|**End**|
|0|50|Interface Object Type independent Properties|
|51|95|KNX medium independent Coupler Properties|
|96|103|KNX TP1 specific Coupler Properties|
|104|111|KNX PL110 specific Coupler Properties|
|112|119|KNX RF specific Coupler Properties|


-----

##### 1.4.2 Network Layer, Filter Table and Coupler Parameters
###### As indicated in the Network Layer specifications ([04]) the basic State Machine of the Network Layer for Routers can be extended and influenced by additional, standard - and implementation specific parameters. For the Coupler Model 2.0 these can be the following.

 1. The “State Machine for Couplers” as specified in [04] clause 2.4.2 “State Machine for Couplers”.

 2. Parameters PID_RF_SBC_CONTROL and PID_PL110_SBC_CONTROL to control the handling and routing of system broadcast services.

 3. The Filter Table Realisation Type 3 as specified in [08].

 4. The Parameter Filter Table Use (PID_FILTER_TABLE_USE) as specified in [08].

 5. Implementation specific Parameters.

EXAMPLE 4 Parameters defining the handling of messages with hop count equal to 7.

###### The Coupler Model 2.0 does not have further standard Parameters influencing the routing behaviour. These are implementation specific, as is their mutual dependency and their impact on the state machine and Filter Tables. The Coupler Model 2.0 does not have a standard algorithm for concluding on the “routing condition”[ 1)].

NOTE 1 This requires that the Manufacturer Code is verified prior to accessing any Parameter.

###### The MaC cannot interpret the implementation specific Parameters and can thus not conclude on whether or not the device will interpret the Filter Table. If the device does not interpret the Filter Table, then the MaC may shorten its download time by not downloading the FT.

##### 1.4.3 Implementation specific Coupler Parameters
###### The Coupler Model 2.0 allows for the implementation specific realisation of parameters that influence the routing and filtering behaviour. This may concern

 - parameters that control the handling of messages in all communication modes[ 2)]
 - the handling of messages with hop count equal to 7
 - the configuration of a TP1 Coupler as TP1 Bridge or TP1 Repeater
 - the configuration of the TP1 L2-acknowledge
 - the routing of System Broadcast messages for PL110
 - the routing of System Broadcast messages for RF
 - …

 Implementation specific Parameters and Master Reset

 Yet, these parameters shall comply with the following requirements concerning Master Reset. These parameters shall reset to their implementation specific value on the following conditions.

 - Master Reset with Erase Code “Factory Reset”
 - Master Reset with Erase Code “Reset Param”
 - Master Reset with Erase Code “Factory Reset without IA”

 These Parameters shall not change on the following conditions.

 - Master Reset with Erase Code “Reset IA”
 - Master Reset with Erase Code “Reset Links”

1) See “Routing in case of a Group Destination Address” in clause 2.4.2.4.5.2 in [04].
2) point-to-point connectionless and – connection-oriented, point-to-multipoint connectionless (multicast), point-toall (broadcast).


-----

#### 1.5 Management

##### 1.5.1 Individual Addresses
###### The Coupler Model 2.0 realisations shall have one single Individual Address.

 This IA shall be logically related to the Secondary Side.

 - The Individual Address of the Coupler shall thus contain the Subnetwork Address of the Secondary Side to which it connects.
 - Please note the requirements concerning Layer-2 acknowledge of incoming Frames in 1.4.1. This will be the IA that shall be used in the Network Configuration[ 3)].

 The Primary Side shall not have an Individual Address.

##### 1.5.2 Device Descriptor Type 0 (Mask Version)
###### The Mask Version of the Coupler shall indicate exclusively the Medium Type of the second Medium Interface. All Couplers according Coupler Model 2.0 with the same KNX Communication Medium used for the second Medium Interface shall have the same Mask Version. The Communication Medium used for the first Medium Interface shall be given through the Property PID_MEDIUM of the Router Object that configures the first Medium Interface. Also, the Router Object of the second Medium Interface shall have the Property PID_MEDIUM. This approach shall avoid that for each new combination of Media for the second Medium Interface and for the first Medium Interface a new Mask Version has to be specified.

EXAMPLE 5 Mask versions according Coupler Model 2.0 can be defined as follows.

###### Coupler Model 2.0


###### Secondary
 Side

 TP1

 PL110


###### Primary Side


###### TP1 PL110 RF IP


###### RF 2920h

Only the bold formatted combinations are standardised so far (September 2014). These Mask Versions
shall not yet be used for other combinations before standardisation by KNX Association.

###### In order to avoid configuring a device with one medium on the Primary Side with the data of the MaC of a device with a different medium, with the same mask version and manufacturer code, the Property PID_HARDWARE_TYPE shall be evaluated. Additionally, the manufacturer may use a MergeID in the MaC software to verify additional criteria.

3) Meant here are the Network Configuration Procedures in which the Coupler acts as a Management Server
(device) in S-Mode. The Network Management Procedures in which the Coupler itself is a Client, mainly for
SNA Management Procedures in E-Mode, are not considered here.

|Secondary<br>Side|Primary Side|Col3|Col4|Col5|
|---|---|---|---|---|
|**Secondary**<br>**Side**|**TP1**|**PL110**|**RF**|**IP**|
|**TP1**|||||
|**PL110**|||||
|**RF**|**2920h**||||


-----

### 2 Profiles definitions

#### 2.1 Introduction and common requirements
###### This Coupler Model 2.0 is specified so that the Resources are accessible both from the Primary – as well as from the Secondary Side, so that the Coupler can be configured from either side.

#### 2.2 Medium dependent layers

##### 2.2.1 TP1 medium dependent layers

 _This clause is intended for integration in the Profile specific document for mask 0920h in Volume 6._

**Feature**

1 Physical Layer M M
2 Data Link Layer M M
3 Extended Frames M M
4 APDU-length ≥ 55 ≥ 55

##### 2.2.2 RF medium dependent layers

|Col1|Coupler Model 2.0|Col3|
|---|---|---|
|**Feature**|**Primary Side**|**Secondary Side**|
|1 Physical Layer|M|M|
|2 Data Link Layer|M|M|
|3 Extended Frames|M|M|
|4 APDU-length|≥ 55|≥ 55|

|Feature|Coupler Model 2.0|
|---|---|
|1.<br>Physical Layer Sender<br>2.<br>Physical Layer Transceiver<br>3.<br>Data Link Layer<br>4.<br>Physical Layer - general<br>5.<br>Data Link Layer – general<br>6.<br>Data Link Layer – router<br>7.<br>Data Link Layer - bridge<br>8.<br>LTE frame format<br>9.<br>Extended LTE Group Addresses and frame acceptance<br>10. Data Link Layer-Retransmitter<br>11. Data Link Layer Media Coupler<br>12. Local Services Metering<br>13. KNX Serial Number<br>14. APDU-length|X <br>M <br>M <br>M <br>M <br>M <br>O <br>M <br>M <br>O <br>M <br>n/a<br>M <br>≥ 55|


-----

#### 2.3 Common stack

##### 2.3.1 Overview

###### Feature

1 Physical Layer – General M
2 Data Link Layer – General M
3 Data Link Layer – Router M
4 Data Link Layer – Bridge O
5 Network Layer general M
6 Network Layer - Router M
7 Network Layer - Bridge O
8 Network Layer RF Retransmitter O
9 Network Layer TP1/RF Media Coupler O
10 Transport Layer – multicast O
11 AL – Group Object services O
12 AL – Property Value Services M
13 AL – Function Property Services M
14 AIL – Group Objects O
15 AIL – Interface Objects M
16 AIL – Function Properties M
17 AIL – GO indirection O
18 Application Interface Layer for unidirectional devices n/a

##### 2.3.2 Physical Layer - general

**Specification** **Test**

     - **General**

[02] (contains no requirement) none.

##### 2.3.3 Data Link Layer - general

|Feature|Coupler Model 2.0|
|---|---|
|1 Physical Layer – General<br>2 Data Link Layer – General<br>3 Data Link Layer – Router<br>4 Data Link Layer – Bridge<br>5 Network Layer general<br>6 Network Layer - Router<br>7 Network Layer - Bridge<br>8 Network Layer RF Retransmitter<br>9 Network Layer TP1/RF Media Coupler<br>10 Transport Layer – multicast<br>11 AL – Group Object services<br>12 AL – Property Value Services<br>13 AL – Function Property Services<br>14 AIL – Group Objects<br>15 AIL – Interface Objects<br>16 AIL – Function Properties<br>17 AIL – GO indirection<br>18 Application Interface Layer for unidirectional devices|M <br>M <br>M <br>O <br>M <br>M <br>O <br>O <br>O <br>O <br>O <br>M <br>M <br>O <br>M <br>M <br>O <br>n/a|

|Specification|Test|
|---|---|
|• <br>**General**<br>[02] (contains no requirement)|none.|

|Specification|Test|
|---|---|
|• **General**<br>[03] -<br>§1.1 “Functions of the Data Link Layer”<br>- <br>§1.2 “Possible Media and their Impact on<br>Layer-2”<br>- <br>§1.3 “Objective”|tested with medium specific tests|
|• **Individual address /Group Address**<br>[03] -<br>§1.4 “Definitions”|tested with medium specific tests|
|• **Data Link Layer Protocol**<br>[03] -<br>§3 “Data Link Layer Protocols”|tested with medium specific tests|
|• **Parameters**<br>[03] -<br>§4 “Parameters of Layer-2” (except TP1<br>Fast Polling)|tested with medium specific tests|


-----

##### 2.3.4 Data Link Layer - Router

**Specification** **Test**

[03] - §6.2 “The Layer-2 of a Router” - tested with medium specific tests

##### 2.3.5 Data Link Layer - Bridge

**Specification** **Test**

[03] - §6.1 “The Layer-2 of the TP1-Bridge and tested with medium specific tests

the TP1 Repeater”

##### 2.3.6 Network Layer - general

**Specification** **Test**

   - **General**

[04] - §1 “Overview” [13]

   - **NPDU**

[04] - §2.1 “NPDU” [13] - §3 (Black Box Tests)[ 4)]

                                                - Routers

                                                - Bridge

   - **Parameters**

[04] - §2.3 “Parameters of Network Layer” - §3(Black Box Tests) 4[)]

     - hop_count: preferred value: 6.     - Routers

                                                - Bridge

   - **state machine**

[04] - §2.4.1 [13] - §3 (Black Box Tests) 4[)]

                                                - Routers

                                                - Bridge

##### 2.3.7 Network Layer – Router

**Specification** **Test**

[04] - §2.4.2.4 “State Machine of Network Layer [13] - §5 “Test case 3: Testing of routing

for Routers” algorithm in routers”

##### 2.3.8 Network Layer – Bridge

**Specification** **Test**

[04] - §2.4.2.3 “State Machine of Network Layer [13] - §5 “Test case 3: Testing of routing

for a TP1 Bridge” algorithm in routers”

##### 2.3.9 Network Layer- RF Retransmitter

**Specification** **Test**

[01] - §6.1.7.3 “History List” [12] - §3

     - §6.1.7.4 “RF Repetition Counter”

     - §6.1.7.2 “Filtering”

4) System 1 or BCU 1 devices in test 3.4 (broadcast communication) may answer with routing count = 0...6.

|Specification|Test|
|---|---|
|[03] -<br>§6.2 “The Layer-2 of a Router”|- <br>tested with medium specific tests|

|Specification|Test|
|---|---|
|[03] -<br>§6.1 “The Layer-2 of the TP1-Bridge and<br>the TP1 Repeater”|tested with medium specific tests|

|Specification|Test|
|---|---|
|• **General**<br>[04] -<br>§1 “Overview”|[13]|
|• **NPDU**<br>[04] -<br>§2.1 “NPDU”|[13] -<br>§3 (Black Box Tests) 4) <br>- <br>Routers<br>- <br>Bridge|
|• **Parameters**<br>[04] -<br>§2.3 “Parameters of Network Layer”<br>- <br>hop_count: preferred value: 6.|- <br>§3(Black Box Tests) 4) <br>- <br>Routers<br>- <br>Bridge|
|• **state machine**<br>[04] -<br>§2.4.1|[13] -<br>§3 (Black Box Tests) 4) <br>- <br>Routers<br>- <br>Bridge|

|Specification|Test|
|---|---|
|[04] -<br>§2.4.2.4 “State Machine of Network Layer<br>for Routers”|[13] -<br>§5 “Test case 3: Testing of routing<br>algorithm in routers”|

|Specification|Test|
|---|---|
|[04] -<br>§2.4.2.3 “State Machine of Network Layer<br>for a TP1 Bridge”|[13] -<br>§5 “Test case 3: Testing of routing<br>algorithm in routers”|

|Specification|Test|
|---|---|
|[01] -<br>§6.1.7.3 “History List”<br>- <br>§6.1.7.4 “RF Repetition Counter”<br>- <br>§6.1.7.2 “Filtering”|[12] -<br>§3|


-----

##### 2.3.10 Network Layer TP1/RF Media Coupler

**Specification** **Test**

[01] - §6.1.7.4 “Retransmitter Flowchart”

     - §6.1.6 “The Layer-2 of an RF-TP Media

Coupler”

##### 2.3.11 Transport Layer–multicast

**Specification** **Test**

   - **TPDU**

[05] - §1.2 “Point-to-Multipoint, Connectionless [14] - All end devices

(Multicast) Communication Mode”      - Routers

                                                - Bridge

     - §3.2 “T_Data_Group Service”

[12]

                                                - RF bidirectional end device

                                                - RF unidirectional sender

##### 2.3.12 Application Layer – Group Object services

**Specification** **Test**

   - **APDU**

[06] - §2 “APDU” [16] - All end devices
`o A_GroupValue_Read-PDU`     - Routers
`o A_GroupValue_Response-PDU`     - Bridge
`o A_GroupValue_Write-PDU` [12]

                                                 - RF bidirectional end device

     - **Data length**

[06] data must be coded as indicated in §3.1 [16] - All end devices

“Application Layer Services on Multicast    - Routers
Communication Mode”    - Bridge

[12]

                                                 - RF bidirectional end device

##### 2.3.13 Application Layer – Property Value Services

**Specification** **Test**

     - **APDU**

[06] - §2 “APDU”

     - §3.4.4.1 “A_PropertyValue_Read-service”

     - §3.4.4.2 “A_PropertyValue_Write-service”

##### 2.3.14 Application Layer – Function Property services

**Specification** **Test**

   - **APDU**

[06] - §2 “APDU”

     - §3.4.7 “Function Property Services”

|Specification|Test|
|---|---|
|[01] -<br>§6.1.7.4 “Retransmitter Flowchart”<br>- <br>§6.1.6 “The Layer-2 of an RF-TP Media<br>Coupler”||

|Specification|Test|
|---|---|
|• **TPDU**<br>[05] -<br>§1.2 “Point-to-Multipoint, Connectionless<br>(Multicast) Communication Mode”<br>- <br>§3.2 “T_Data_Group Service”|[14]<br>- <br>All end devices<br>- <br>Routers<br>- <br>Bridge<br>[12]<br>- <br>RF bidirectional end device<br>- <br>RF unidirectional sender|

|Specification|Test|
|---|---|
|• **APDU**<br>[06] -<br>§2 “APDU”<br>`o` A_GroupValue_Read-PDU<br>`o` A_GroupValue_Response-PDU<br>`o` A_GroupValue_Write-PDU|[16]<br>- <br>All end devices<br>- <br>Routers<br>- <br>Bridge<br>[12]<br>- <br>RF bidirectional end device|
|• <br>**Data length**<br>[06] data must be coded as indicated in §3.1<br>“Application Layer Services on Multicast<br>Communication Mode”|[16]<br>- <br>All end devices<br>- <br>Routers<br>- <br>Bridge<br>[12]<br>- <br>RF bidirectional end device|

|Specification|Test|
|---|---|
|• <br>**APDU**<br>[06] -<br>§2 “APDU”<br>- <br>§3.4.4.1 “A_PropertyValue_Read-service”<br>- <br>§3.4.4.2“APropertyValueWrite-service”|<br>|

|Specification|Test|
|---|---|
|• **APDU**<br>[06] -<br>§2 “APDU”<br>- <br>§3.4.7 “Function Property Services”||


-----

##### 2.3.15 Application Interface Layer – Group Objects

**Specification** **Test**

   - **Group Objects**

[07] - §3 “Group Object Server” [15] - §1.3 “Group Object Tests”

                                                - all end devices

[12]                               
                                                - RF bidirectional end device

##### 2.3.16 Application Interface Layer – Interface Objects

**Specification** **Test**

   - **Interface Objects**

[07] - §4 “Interface Object Server”

##### 2.3.17 Application Interface Layer – Function Properties

**Specification** **Test**

   - **Function Properties**

[07] - §4.4.2 “Function Properties”

##### 2.3.18 Application Layer Interface Layer – Group Objects indirection

**Specification** **Test**

   - **Group Object Indirection**

[07] - §3.4 “Group Object Indirection – Group

Object Handles and PID-OBJECT_VALUE (PID = 62)

[08] - §4.3.13 “PID_OBJECT_VALUE (PID =

62)”

##### 2.3.19 Application Interface Layer for unidirectional devices

**Specification** **Test**

   - **APDU**

[06] - §2 “APDU” [16]

     - §3.1.3 “A_GroupValue_Write-service”:

Server side only

   - **Data length**

[06] - §3.1 “Application Layer services on [16]

Multicast Communication Mode”: data
shall be encoded as indicated in this
referred clause.

   - **Connection Codes**

     - Datapoint Types shall comply with [16]

Connection Codes used.

   - **Application Interface Layer for**

**unidirectional devices**

[07] - §3.3.4 “Writing the Group Object Value”

|Specification|Test|
|---|---|
|• **Group Objects**<br>[07] -<br>§3 “Group Object Server”|[15] -<br>§1.3 “Group Object Tests”<br>- <br>all end devices<br>[12]<br>- <br>- <br>RF bidirectional end device|

|Specification|Test|
|---|---|
|• **Interface Objects**<br>[07] -<br>§4 “Interface Object Server”||

|Specification|Test|
|---|---|
|• **Function Properties**<br>[07] -<br>§4.4.2 “Function Properties”||

|Specification|Test|
|---|---|
|• **Group Object Indirection**<br>[07] -<br>§3.4 “Group Object Indirection – Group<br>Object Handles and PID-OBJECT_-<br>VALUE (PID = 62)<br>[08] -<br>§4.3.13 “PID_OBJECT_VALUE (PID =<br>62)”||

|Specification|Test|
|---|---|
|• **APDU**<br>[06] -<br>§2 “APDU”<br>- <br>§3.1.3 “A_GroupValue_Write-service”:<br>Server side only|[16]|
|• **Data length**<br>[06] -<br>§3.1 “Application Layer services on<br>Multicast Communication Mode”: data<br>shall be encoded as indicated in this<br>referred clause.|[16]|
|• **Connection Codes**<br>- <br>Datapoint Types shall comply with<br>Connection Codes used.|[16]|
|• **Application Interface Layer for**<br>**unidirectional devices**<br>[07] -<br>§3.3.4 “Writing the Group Object Value”||


-----

#### 2.4 Specific parts

**Feature**

1 Data Link Layer – polling
2 Detection of Usage of own Individual Address
3 Extended Group Object Flags

#### 2.5 Configuration and management

##### 2.5.1 Communication

###### 2.5.1.1 Overview

**Feature**

1 TL - broadcast M

2 TL - connection oriented M

3 TL - connection oriented minimal X

4 TL - connectionless M

###### 2.5.1.2 TL - broadcast

|Col1|Coupler Model 2.0|Col3|
|---|---|---|
|**Feature**|**Primary Side**|**Secondary**<br>**Side**|
|1 Data Link Layer – polling<br>2 Detection of Usage of own Individual Address<br>3 Extended Group Object Flags|O|O|
|1 Data Link Layer – polling<br>2 Detection of Usage of own Individual Address<br>3 Extended Group Object Flags|X|X|
|1 Data Link Layer – polling<br>2 Detection of Usage of own Individual Address<br>3 Extended Group Object Flags|O|O|

|Feature|Coupler Model 2.0|
|---|---|
|1 TL - broadcast|M|
|2 TL - connection oriented|M|
|3 TL - connection oriented minimal|X|
|4 TL - connectionless|M|

|Specification|Test|
|---|---|
|[05] All features of the following clauses are<br>mandatory except for the coding of the<br>internal service primitives.<br>- <br>§1.3 “Point-to-all-Points Connectionless<br>(Broadcast) Communication Mode”<br>- <br>§2 “TPDU”<br>- <br>§3.4 “T_Data_Broadcast”<br>- <br>§4 “Parameters of Transport Layer”||


-----

###### 2.5.1.3 TL - connection oriented

- Coupler

**Specification**

[05] All features of the following clauses are
mandatory except for the coding of the internal
service primitives:

      - §1.6 “Point-to-Point, Connection-Oriented
Communication Mode”

      - §2 “TPDU”

      - §3.7 “T_Connect service”

      - §3.8 “T_Disconnect service”

      - §3.9 “T_Data_Connected service”

      - §4 “Parameters of Transport Layer”

      - §5.1 “States”

      - §5.3 “Actions”

      - §5.4 “Transition Table of the Connection
Oriented Transport Layer State Machine”

Any of the following styles may be
implemented.

           - §5.4.1 “Style 1”

           - §5.4.2 “Style 2”

           - §5.4.3 “Style 3”

###### 2.5.1.4 TL - connection oriented minimal This feature is not allowed for any Coupler Profile.

 2.5.1.5 TL - connectionless

|• Coupler|Col2|
|---|---|
|**Specification**|**Test**|
|[05]<br>All features of the following clauses are<br>mandatory except for the coding of the internal<br>service primitives:<br>- <br>§1.6 “Point-to-Point, Connection-Oriented<br>Communication Mode”<br>- <br>§2 “TPDU”<br>- <br>§3.7 “T_Connect service”<br>- <br>§3.8 “T_Disconnect service”<br>- <br>§3.9 “T_Data_Connected service”<br>- <br>§4 “Parameters of Transport Layer”<br>- <br>§5.1 “States”<br>- <br>§5.3 “Actions”<br>- <br>§5.4 “Transition Table of the Connection<br>Oriented Transport Layer State Machine”<br>Any of the following styles may be<br>implemented.<br>- <br>§5.4.1 “Style 1”<br>- <br>§5.4.2 “Style 2”<br>- <br>§5.4.3 “Style 3”|[14]|

|Specification|Test|
|---|---|
|[05] All features of the following clauses are<br>mandatory except for the coding of the internal<br>service primitives:<br>- <br>§1.5 “Point-to-point connectionless<br>Communication Mode”<br>- <br>§2 “TPDU”<br>- <br>§3.6 “T_Data_Individual”|[14]|


-----

##### 2.5.2 Device Management

###### 2.5.2.1 Overview Please note that the “Coupler services” are not allowed for the Coupler Model 2.0.

**Feature**

###### 1 Direct memory Access C[ 5)] 2 DMA on User Memory C [6] 3 Coupler services X 4 Verify Mode M 5 Interface Object Handling[ 7)] M 6 Reduced Interface Objects X 7 Function Properties M 8 Interface Object Index discovery M 9 Load and Run State Machines  a. Realisation Type 1 M  b. Realisation Type 2 X 10 Restart  a. connectionless M  b. connection-oriented M  c. Master Reset M 11 Authorization[ 8)] M nr of access levels 4

 2.5.2.2 Direct Memory Access

**Specification** **Test**

[09] - §3.2.1 “DMP_Connect_RCo” [15] - §2 “Network Management Server

     - §3.3.2 “DMP_Disconnect_RCo” Tests” corresponding tests

     - §3.18.2 “DMP_MemRead_RCo”

     - §3.16.2 “DMP_MemWrite_RCo”

5) This is mandatory if the Filter Table is located (partially) in memory below FFFFh.
6) This is mandatory of the Filter Table is located (partially) in memory above FFFFh.
7) Please refer to Annex A for the specification of mandatory and optional Interface Objects, Properties and
Property fields.
8) The support of the A_Authorize- and the A_Keywrite-service does not imply that the device itself has access
protected areas. If this is not the case, a device shall always allow – regardless of the attributed keys – access to
the highest level (0), including when receiving an illegal key (‘illegal’ in this sense meaning another key than
any of the keys entered in the key table).

|Feature|Coupler Mode 2.0|
|---|---|
|1 Direct memory Access|C 5)|
|2 DMAon User Memory|C 6|
|3 Coupler services|X|
|4 Verify Mode|M|
|5 Interface Object Handling 7)|M|
|6 Reduced Interface Objects|X|
|7 Function Properties|M|
|8 Interface Object Index discovery|M|
|9 Load and Run State Machines<br> a. Realisation Type 1<br> b. Realisation Type 2|M <br>X|
|10 Restart<br> a. connectionless<br> b. connection-oriented<br> c. Master Reset|M <br>M <br>M|
|11 Authorization 8) <br>nrof access levels|M <br>4|

|Specification|Test|
|---|---|
|[09] -<br>§3.2.1 “DMP_Connect_RCo”<br>- <br>§3.3.2 “DMP_Disconnect_RCo”<br>- <br>§3.18.2 “DMP_MemRead_RCo”<br>- <br>§3.16.2 “DMP_MemWrite_RCo”|[15] -<br>§2 “Network Management Server<br>Tests” corresponding tests|


-----

###### 2.5.2.3 DMA on user memory

**Specification** **Test**

[09] - §3.19 “DM_UserMemWrite” [15] - §2 “Network Management Server Tests”
corresponding tests

###### 2.5.2.4 Coupler services Coupler services are not allowed for the Coupler Model 2.0 and the derived masks.

**Specification** **Test**

[09] - §3.38 “DM_LCSlaveMemWrite”

     - §3.39 "DM_LCSlaveMemVerify”

     - §3.40 “DM_LCSlaveMemRead”

     - §3.41 “DM_LCExtMemWrite”

     - §3.42 “DM_LCExtMemVerify”

     - §3.43 “DM_LCExtMemRead”

     - §3.44 “DM_LCExtMemOpen”

     - §3.45 “DM_LCRouteTableStateWrite”

     - §3.46 “DM_LCRouteTableStateVerify”

     - §3.47 “DM_LCRouteTableStateRead”

###### 2.5.2.5 Verify Mode (for A_Memory_Write)

**Specification** **Test**

[08] - §4.2.14.7 "Verify Mode Control" [15] - §2 ”Network Management Server Tests”

Management Server part. Tests 7.1 to 7.7[.]

###### 2.5.2.6 Interface Object Handling Please refer to 2.6 for the specification of mandatory and optional Interface Objects, Properties and Property fields.

**Specification** **Test**

[09] - §3.25.2 “DMP_InterfaceObjectWrite_R” [15] - §2 “Network Management Server

     - §3.27.2 “DMP_InterfaceObjectRead_R” Tests” corresponding tests

     - §3.26.2 “DMP_InterfaceObjectVerify_R”

     - §3.28.2 “DM_InterfaceObjectScan_R”

[07] - §4 “Interface Object Server” [15] - §2 “Network Management Server Tests”

corresponding tests

###### 2.5.2.7 Reduced Interface Objects Reduced Interface Objects are not allowed for the Coupler Model 2.0 and the derived masks.

**Specification** **Test**

[09] - §3.25.3 “DMP_ReducedInterfaceObject- [15] - §2 “Network Management Server Tests”

Write_R” corresponding tests

     - §3.27.3 “DMP_ReducedInterfaceObjectRead_R”

     - §3.28.3 “DMP_ReducedInterfaceObject
Scan_R”

[07] - §4.1 “Common structure” [15] - §2 “Network Management Server Tests”

     - §4.3.4 “Reduced Interface Object” corresponding tests

|Specification|Test|
|---|---|
|[09] -<br>§3.19 “DM_UserMemWrite”|[15] -<br>§2 “Network Management Server Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|[09] -<br>§3.38 “DM_LCSlaveMemWrite”<br>- <br>§3.39 "DM_LCSlaveMemVerify”<br>- <br>§3.40 “DM_LCSlaveMemRead”<br>- <br>§3.41 “DM_LCExtMemWrite”<br>- <br>§3.42 “DM_LCExtMemVerify”<br>- <br>§3.43 “DM_LCExtMemRead”<br>- <br>§3.44 “DM_LCExtMemOpen”<br>- <br>§3.45 “DM_LCRouteTableStateWrite”<br>- <br>§3.46 “DM_LCRouteTableStateVerify”<br>- <br>§3.47 “DM_LCRouteTableStateRead”||

|Specification|Test|
|---|---|
|[08] -<br>§4.2.14.7 "Verify Mode Control"<br>Management Serverpart.|[15] -<br>§2 ”Network Management Server Tests”<br>Tests 7.1 to 7.7.|

|Specification|Test|
|---|---|
|[09] -<br>§3.25.2 “DMP_InterfaceObjectWrite_R”<br>- <br>§3.27.2 “DMP_InterfaceObjectRead_R”<br>- <br>§3.26.2 “DMP_InterfaceObjectVerify_R”<br>- <br>§3.28.2 “DM_InterfaceObjectScan_R”|[15]<br>- <br>§2 “Network Management Server<br>Tests” corresponding tests|
|[07] -<br>§4 “Interface Object Server”|[15] -<br>§2 “Network Management Server Tests”<br>corresponding tests|

|Specification|Test|
|---|---|
|[09] -<br>§3.25.3 “DMP_ReducedInterfaceObject-<br>Write_R”<br>- <br>§3.27.3 “DMP_ReducedInterfaceObject-<br>Read_R”<br>- <br>§3.28.3 “DMP_ReducedInterfaceObject-<br>Scan_R”|[15] -<br>§2 “Network Management Server Tests”<br>corresponding tests|
|[07] -<br>§4.1 “Common structure”<br>- <br>§4.3.4 “Reduced Interface Object”|[15] -<br>§2 “Network Management Server Tests”<br>corresponding tests|


-----

###### 2.5.2.8 Function Properties

**Specification** **Test**

[06] - §2 “APDU”

     - §3.4.1 “Introduction”

     - §3.4.7 “Function Property Services”

[07] - §4.1 “Common structure”

     - §4.2 “Minimal requirements of Interface
Objects”

     - §4.4.2 “Function Properties”

[09] - §3.30 “DM_FunctionProperty_Write_R”

###### 2.5.2.9 Interface Object Index discovery

**Specification** **Test**

[09] - §2.23.4 “NM_ObjectIndex_Read” To be defined.

###### 2.5.2.10 Load - and Run State Machines

**a) Realisation Type 1 - Property based**

**Specification** **Test**

[08] - records

[09] - §3.31.3 “DMP_LoadStateMachineWrite_- [15] - §2 “Network Management Tests”

RCo_IO” corresponding tests

     - §3.32.3 “DM_LoadStateMachineVerify_R_IO”

     - §3.33.3 “DMP_LoadStateMachineRead_R_IO”

     - §3.34.3 “DMP_RunStateMachineWrite_R_IO”

     - §3.35.3 “DMP_RunStateMachineVerify_R_IO”

     - §3.36.3 “DMP_RunStateMachineRead_R_IO”

###### The Load – and Run State Machines – Realisation Type 2 are not allowed for the Coupler Model 2.0 and the derived masks.

|Specification|Test|
|---|---|
|[06] -<br>§2 “APDU”<br>- <br>§3.4.1 “Introduction”<br>- <br>§3.4.7 “Function Property Services”||
|[07] -<br>§4.1 “Common structure”<br>- <br>§4.2 “Minimal requirements of Interface<br>Objects”<br>- <br>§4.4.2 “Function Properties”||
|[09] -<br>§3.30 “DM_FunctionProperty_Write_R”||

|Specification|Test|
|---|---|
|[09] -<br>§2.23.4 “NM_ObjectIndex_Read”|To be defined.|

|a) Realisation Type 1 - Property based|Col2|
|---|---|
|**Specification**|**Test**|
|[08] -<br>records||
|[09] -<br>§3.31.3 “DMP_LoadStateMachineWrite_-<br>RCo_IO”<br>- <br>§3.32.3 “DM_LoadStateMachineVerify_R_IO”<br>- <br>§3.33.3 “DMP_LoadStateMachineRead_R_IO”<br>- <br>§3.34.3 “DMP_RunStateMachineWrite_R_IO”<br>- <br>§3.35.3 “DMP_RunStateMachineVerify_R_IO”<br>- <br>§3.36.3 “DMP_RunStateMachineRead_R_IO”|[15]<br>- <br>§2 “Network Management Tests”<br>corresponding tests|

|b) Realisation Type 2 – Memory mapped|Col2|
|---|---|
|**Specification**|**Test**|
|[08] -<br>records||
|[09] -<br>§3.31.2<br>“DMP_LoadStateMachineWrite_RCo_Mem”<br>- <br>§3.32.2<br>“DM_LoadStateMachineVerify_RCo_Mem”<br>- <br>§3.33.2<br>“DMP_LoadStateMachineRead_RCo_Mem”<br>- <br>§3.34.2<br>“DMP_RunStateMachineWrite_RCo_Mem”<br>- <br>§3.35.2<br>“DMP_RunStateMachineVerify_RCo_Mem”<br>- <br>§3.36.2<br>“DMP_RunStateMachineRead_RCo_Mem”|[15]<br>- <br>§2 “Network Management Tests”<br>corresponding tests|


-----

###### 2.5.2.11 Restart

2.5.2.11.1 Restart connectionless

**Specification**

[09] - §3.7.2 “DM_Restart_RCl”

2.5.2.11.2 Restart connection-oriented

**Specification**

[09] - §3.2.1 “DMP_Connect_RCo”

     - §3.7.3 “DM_Restart_RCo”

2.5.2.11.3 Master Reset

**Specification**

[09] - §3.7.2 “DM_Restart_RCl” – Master Reset

     - §3.7.3 “DM_Restart_RCo” – Master Reset

2.5.2.11.3.1 Erase Codes

**Erase Code**

01h Confirmed Restart M
02h Reset to default state O
03h ResetIA O
04h ResetAP O
05h ResetParam O
06h ResetLinks O
07h Reset to default without IA M

###### 2.5.2.12 Authorization

|Specification|Test|
|---|---|
|[09] -<br>§3.7.2 “DM_Restart_RCl”||

|Specification|Test|
|---|---|
|[09] -<br>§3.2.1 “DMP_Connect_RCo”<br>- <br>§3.7.3 “DM_Restart_RCo”|- <br>§2.9.1 “Send Restart”|

|Specification|Test|
|---|---|
|[09] -<br>§3.7.2 “DM_Restart_RCl” – Master Reset<br>- <br>§3.7.3 “DM_Restart_RCo” – Master Reset||

|Erase Code|Coupler Model 2.0|
|---|---|
|01h Confirmed Restart|M|
|02h Reset to default state|O|
|03h ResetIA|O|
|04h ResetAP|O|
|05h ResetParam|O|
|06h ResetLinks|O|
|07h Reset to default without IA|M|

|Specification|Test|
|---|---|
|• <br>**Management Procedures**<br>[09] -<br>§3.5.1 “DMP_Authorize_RCo”<br>- <br>§3.5.2 “DM_Authorize2_RCo”<br>- <br>§3.6 “DM_SetKey”||


-----

##### 2.5.3 Device Identification

**Feature**

1 Device Descriptor Service - connection oriented M

2 Device Descriptor Service - connectionless O

3 Device Descriptor Type 0 M

###### 2.5.3.1 Device Descriptor Service - connection oriented

**Specification** **Test**

[06] - §3.4.2.1 “A_DeviceDescriptor_Read- [15] - §2.5.1 “Read Mask-version”
service” (Network Management Tests)

###### 2.5.3.2 Device Descriptor Service - connectionless

**Specification** **Test**

[06] - §3.4.2.1 “A_DeviceDescriptor_Read- [15] - §2.5.1 “Read Mask-version”
service” (Network Management Tests)

[09] - §3.2.2 “DMP_Connect_RCl”

###### 2.5.3.3 Device Descriptor Type 0

**Specification** **Test**

[08] - §4.1.2 “Device Descriptor Type 0” [15] - §2.5.1 “Read Mask-version”
(Network Management Tests)

|Feature|Coupler Model 2.0|
|---|---|
|1 Device Descriptor Service - connection oriented|M|
|2 Device Descriptor Service - connectionless|O|
|3 Device Descriptor Type 0|M|

|Specification|Test|
|---|---|
|[06] -<br>§3.4.2.1 “A_DeviceDescriptor_Read-<br>service”|[15] -<br>§2.5.1 “Read Mask-version”<br>(Network Management Tests)|

|Specification|Test|
|---|---|
|[06] -<br>§3.4.2.1 “A_DeviceDescriptor_Read-<br>service”|[15] -<br>§2.5.1 “Read Mask-version”<br>(Network Management Tests)|
|[09] -<br>§3.2.2 “DMP_Connect_RCl”||

|Specification|Test|
|---|---|
|[08] -<br>§4.1.2 “Device Descriptor Type 0”|[15] -<br>§2.5.1 “Read Mask-version”<br>(Network Management Tests)|


-----

##### 2.5.4 Device Individualisation

**Feature**

1 Programming Mode

1.a Connection oriented M M

1.b Connectionless O O

Autonomous inactivation. O O

2 KNX Serial Number

a client initiated O M

b server initiated O O

3 Domain Address Assignment C[*] C[*]

4 Distributed Address Assignment X X

5 Default Individual Address O M

6 SNA Server O M

- mandatory on open media

###### 2.5.4.1 Programming Mode

2.5.4.1.1 connection oriented

**Specification** **Test**

[09] - §2.2 “NM_IndividualAddress_Read” [15] - §2.3 “Testing of A_IndividualAddress
     - §2.3 “NM_IndividualAddress_Write”[ 9)] _Read-service – Server Test”

**Programming Mode Control** [15] - §2.3 “Testing of A_IndividualAddress
   - via HMI: device selection and indication of _Read-service – Server Test”
Programming Mode

   - via bus:

[08] - §4.26.3 “Programming Mode – Realisation
Type 2”

[09] - §3.13.2 “DMP_ProgModeSwitch_RCo”

9) Implies connection-oriented TL and Application Layer services for accessing the Device Descriptor.

|Feature|Coupler|Coupler Model 2.0|
|---|---|---|
|1 Programming Mode|||
|1.a Connection oriented<br> 1.b Connectionless|M|M <br>O|
|1.a Connection oriented<br> 1.b Connectionless|O|O|
|Autonomous inactivation.|O|O|
|2 KNX Serial Number|||
|a client initiated<br> b server initiated|O|M <br>O|
|a client initiated<br> b server initiated|O|O|
|3 Domain Address Assignment|C*|C*|
|4 Distributed Address Assignment|X|X|
|5 Default Individual Address|O|M|
|6 SNA Server|O|M|

|Specification|Test|
|---|---|
|[09] -<br>§2.2 “NM_IndividualAddress_Read”<br>- <br>§2.3 “NM_IndividualAddress_Write” 9)|[15] -<br>§2.3 “Testing of A_IndividualAddress-<br>_Read-service – Server Test”|
|**Programming Mode Control**<br>• via HMI: device selection and indication of<br>Programming Mode<br>• via bus:<br>[08] -<br>§4.26.3 “Programming Mode – Realisation<br>Type 2”<br>[09] -<br>§3.13.2 “DMP_ProgModeSwitch_RCo”|[15] -<br>§2.3 “Testing of A_IndividualAddress-<br>_Read-service – Server Test”|


-----

2.5.4.1.2 Programming Mode – connectionless

**Specification** **Test**

[09] - §2.10 “NM_DomainAnd- [15] - §2.3 “Testing of A_IndividualAddressIndividualAddress_Write2” _Read-service – Server Test”

     - §2.2 “NM_IndividualAddress_Read”

**Programming Mode Control** [15] - §2.3 “Testing of A_IndividualAddress
   - via HMI: device selection and indication of _Read-service – Server Test”

Programming Mode

[09] - §3.13.2 “DMP_ProgModeSwitch_RCo”

[08] - §4.26.3 “Programming Mode – Realisation
Type 2”

2.5.4.1.3 Programming Mode – Autonomous Inactivation

**Specification** **Test**

[08] - §4.26.1 “Autonomous inactivation of Programming Mode”

###### 2.5.4.2 KNX Serial Number

2.5.4.2.1 Client initiated

**Specification** **Test**

[09] - §2.4 “NM_IndividualAddress_Serial- [15] - §2.16 “Testing of A_IndividualAddressNumber_Read” SerialNumber_Write-Service : Server

     - §2.5 “NM_IndividualAddress_Serial- Test”
Number_Write”     - §2.17 “Testing of A_IndividualAddress
SerialNumber_Read-Service : Server
Test”

2.5.4.2.2 Server initiated

**Specification** **Test**

[09] - §2.6 “NM_IndividualAddress_Serial- [15] - §2.16 “Testing of A_IndividualAddressNumber_Write2 SerialNumber_Write-Service : Server

Test”

###### 2.5.4.3 Domain Address Assignment

**Specification** **Test**

[09] - §2.7 “NM_DomainAddress_Read” [15]

     - §2.14.1.2.2 “NM_DomainAddress_Scan2”

###### 2.5.4.4 Distributed Address Assignment This feature is not allowed for any Coupler Profile.

|Specification|Test|
|---|---|
|[09] -<br>§2.10 “NM_DomainAnd-<br>IndividualAddress_Write2”<br>- <br>§2.2 “NM_IndividualAddress_Read”|[15] -<br>§2.3 “Testing of A_IndividualAddress-<br>_Read-service – Server Test”|
|**Programming Mode Control**<br>• via HMI: device selection and indication of<br>Programming Mode<br>[09] -<br>§3.13.2 “DMP_ProgModeSwitch_RCo”<br>[08] -<br>§4.26.3 “Programming Mode – Realisation<br>Type 2”|[15] -<br>§2.3 “Testing of A_IndividualAddress-<br>_Read-service – Server Test”|

|Specification|Test|
|---|---|
|[08] -<br>§4.26.1 “Autonomous inactivation of<br>Programming Mode”|-|

|Specification|Test|
|---|---|
|[09] -<br>§2.4 “NM_IndividualAddress_Serial-<br>Number_Read”<br>- <br>§2.5 “NM_IndividualAddress_Serial-<br>Number_Write”|[15] -<br>§2.16 “Testing of A_IndividualAddress-<br>SerialNumber_Write-Service : Server<br>Test”<br>- <br>§2.17 “Testing of A_IndividualAddress-<br>SerialNumber_Read-Service : Server<br>Test”|

|Specification|Test|
|---|---|
|[09] -<br>§2.6 “NM_IndividualAddress_Serial-<br>Number_Write2|[15] -<br>§2.16 “Testing of A_IndividualAddress-<br>SerialNumber_Write-Service : Server<br>Test”|

|Specification|Test|
|---|---|
|[09] -<br>§2.7 “NM_DomainAddress_Read”<br>- <br>§2.14.1.2.2 “NM_DomainAddress_Scan2”|[15]|


-----

###### 2.5.4.5 Default Individual Address

**Specification** **Test**

[08] - §3.3 “Individual Address”

         - Subnetwork Address, value
according to the medium.

         - Device Address, fixed value FFh

###### 2.5.4.6 SNA Server

**Specification** **Test**

[08] - **Device Object**

     - PID_SUBNET_ADDR

   - **Router Object**

     - PID_COUPL_SERV_CONTROL

[09] - §2.23.1 General Procedure
“NM_NetworkParameter_Read_R”

     - §2.22.1
“NM_NetworkParameter_Write_R”

[10] - §2.4.3 “SNA read” – Management Server
side support

     - §2.4.4 “SNA update on IA change”

     - §2.4.5 “SNA update on power-up”
(optional)

     - §2.4.6 “SNA heartbeat”

##### 2.5.5 Device Linking

**Feature**

1 Filter Table

1.1 Realisation Type 3 M

###### 2.5.5.1 Filter Table – Realisation Type 3

**Specification** **Test**

[08] - §5.3.1 “Filter Table Realisation Type 3”

##### 2.5.6 Application Handling
###### This feature is no standard feature of any of the approved Coupler Profiles.

|Specification|Test|
|---|---|
|[08] -<br>§3.3 “Individual Address”<br>- <br>Subnetwork Address, value<br>according to the medium.<br>- <br>Device Address, fixed value FFh||

|Specification|Test|
|---|---|
|[08]• **Device Object**<br>- <br>PID_SUBNET_ADDR<br>• **Router Object**<br>- <br>PID_COUPL_SERV_CONTROL||
|[09] -<br>§2.23.1 General Procedure<br>“NM_NetworkParameter_Read_R”<br>- <br>§2.22.1<br>“NM_NetworkParameter_Write_R”||
|[10] -<br>§2.4.3 “SNA read” – Management Server<br>side support<br>- <br>§2.4.4 “SNA update on IA change”<br>- <br>§2.4.5 “SNA update on power-up”<br>(optional)<br>- <br>§2.4.6 “SNA heartbeat”||

|Feature|Coupler Model 2.0|
|---|---|
|1 Filter Table<br> 1.1 Realisation Type 3||
|1 Filter Table<br> 1.1 Realisation Type 3|M|

|Specification|Test|
|---|---|
|[08] -<br>§5.3.1 “Filter Table Realisation Type 3”||


-----

#### 2.6 Interface Objects and Properties

##### 2.6.1 Interface Objects

 _S-Mode Profiles  Interface and Couplers  Interface Objects_

NOTE 2 The Coupler Model 2.0 does not require fix Object Indexes. Only the general rule applies that the Device Object shall
have Object Index 0. The MaC may discover the Object Indexes using NM_ObjectIndex_Read.

**Coupler**
**Model 2.0**

**Interface Object**

0 Device Object M
1 Addresstable Object O
2 Associationtable Object O
3 Applicationprogram Object O
4 Interfaceprogram Object O
6 Router Object M M
7 LTE Address Filter Table Object X M
8 cEMI Server Object O
9 Group Object Table Object O
10 Polling Master O O
11 KNXnet/IP Parameter Object 10) O
17 Security Interface Object O
19 RF Medium Object n/a n/a

10) The KNXnet/IP Parameter Object is mandatory if there is a KNXnet/IP interface.

|Col1|Coupler<br>Model 2.0|Col3|
|---|---|---|
|**Object Type**<br>**Interface Object**|**Primary Side**|**Secondary Side**|
|0 Device Object|M|M|
|1 Addresstable Object|O|O|
|2 Associationtable Object|O|O|
|3 Applicationprogram Object|O|O|
|4 Interfaceprogram Object|O|O|
|6 Router Object|M|M|
|7 LTE Address Filter Table Object|X|M|
|8 cEMI Server Object|O|O|
|9 Group Object Table Object|O|O|
|10 Polling Master|O|O|
|11 KNXnet/IP Parameter Object 10)|O|O|
|17 Security Interface Object|O|O|
|19 RF Medium Object|n/a|n/a|


-----

##### 2.6.2 Device Object (Object Type = 0)

###### 2.6.2.1 Overview

 _S-Mode Profiles  Interface and Couplers  Device Object_

###### Property
 Service
 Property Identifier type

1 PID_OBJECT_TYPE Data 3/X 3FF/0CC

NwPar Read                
5 PID_LOAD_STATE_CONTROL Data 3/2 3FF/0CC

9 PID_FIRMWARE_REVISION[ 11)] Data 3/X 3FF/0CC

11 PID_SERIAL_NUMBER Data 3/1 3FF/0CC

12 PID_MANUFACTURER_ID Data 3/1 3FF/0CC

13 PID_PROGRAM_VERSION Data 3/2 3FF/0CC

14 PID_DEVICE_CONTROL Data 3/2 3FF/0CC

15 PID_ORDER_INFO Data 3/1 3FF/0CC

19 PID_MANUFACTURER_DATA Data 3/1 3FF/0CC

25 PID_VERSION Data 3/1 3FF/0CC

30 PID_DOWNLOAD_COUNTER Data 3/x 3FF/0CC

51 PID_ROUTING_COUNT Data 3/2 3FF/0CC

54 PID_PROGMODE Data 3/2 3FF/0CC

56 PID_MAX_APDU_LENGTH Data 3/0 3FF/1FF

57 PID_SUBNET_ADDR Data 3/x 3FF/00C

NwPar Read                
58 PID_DEVICE_ADDR Data 3/x 3FF/00C

NwPar Read                
71 PID_IO_LIST Data 3/0 3FF/0CC

78 PID_HARDWARE_TYPE Data 3/0 3FF/0CC

83 PID_DEVICE_DESCRIPTOR Data 3/x 3FF/0CC

11) PID_FIRMWARE_REVISION is not allowed. Instead, PID_VERSION shall be used.

|Col1|Property Identifier|Property<br>Service<br>type|Access Level|Access Policy|
|---|---|---|---|---|
|1|PID_OBJECT_TYPE|Data|3/X|3FF/0CC|
|1|PID_OBJECT_TYPE|NwPar|Read|-|
|5|PID_LOAD_STATE_CONTROL|Data|3/2|3FF/0CC|
|9|PID_FIRMWARE_REVISION 11)|Data|3/X|3FF/0CC|
|11|PID_SERIAL_NUMBER|Data|3/1|3FF/0CC|
|12|PID_MANUFACTURER_ID|Data|3/1|3FF/0CC|
|13|PID_PROGRAM_VERSION|Data|3/2|3FF/0CC|
|14|PID_DEVICE_CONTROL|Data|3/2|3FF/0CC|
|15|PID_ORDER_INFO|Data|3/1|3FF/0CC|
|19|PID_MANUFACTURER_DATA|Data|3/1|3FF/0CC|
|25|PID_VERSION|Data|3/1|3FF/0CC|
|30|PID_DOWNLOAD_COUNTER|Data|3/x|3FF/0CC|
|51|PID_ROUTING_COUNT|Data|3/2|3FF/0CC|
|54|PID_PROGMODE|Data|3/2|3FF/0CC|
|56|PID_MAX_APDU_LENGTH|Data|3/0|3FF/1FF|
|57|PID_SUBNET_ADDR|Data|3/x|3FF/00C|
|57|PID_SUBNET_ADDR|NwPar|Read|-|
|58|PID_DEVICE_ADDR|Data|3/x|3FF/00C|
|58|PID_DEVICE_ADDR|NwPar|Read|-|
|71|PID_IO_LIST|Data|3/0|3FF/0CC|
|78|PID_HARDWARE_TYPE|Data|3/0|3FF/0CC|
|83|PID_DEVICE_DESCRIPTOR|Data|3/x|3FF/0CC|


-----

###### 2.6.2.2 PID_LOAD_STATE_CONTROL (PID = 5)

 _S-Mode Profiles  Interface and Couplers Device Object_  PID_LOAD_STATE_CONTROL

###### The Additional Load Controls are not allowed for the Coupler Model 2.0.

**Load** **Sub-**
**Control** **type Description**

00h No operation O
01h Start Loading M
02h Load Completed M
03h Additional Load Controls X
00h Absolute Code/Data Allocation X

01h Absolute Stack Allocation X
**02h Segment Control Record** X
**03h Task Pointer Record** X
**04h Task Control Record-1** X
**05h Task Control Record-2** X
0Ah Relative Allocation X
0Bh Data Relative Allocation X
04h Unload M

###### The following Load States may be returned.

 Value Load State

00h Unloaded M
01h Loaded M
02h Loading M
03h Error M
04h Unloading O
05h LoadCompleting O

NOTE 3 The Load States Unloading and LoadCompleting are optional and not forbidden. This means that the MaC shall
consider that the Coupler Model 2.0 implementation may return these Load States.

|Load<br>Control|Sub-<br>type|Description|Coupler Model 2.0|
|---|---|---|---|
|00h||No operation|O|
|01h||Start Loading|M|
|02h||Load Completed|M|
|03h||Additional Load Controls|X|
||00h|Absolute Code/Data Allocation|X|
||01h|Absolute Stack Allocation|X|
||**02h**|** Segment Control Record**|X|
||<br>**03h**|<br>** Task Pointer Record**|X|
||<br>**04h**|<br>** Task Control Record-1 **|X|
||<br>**05h**|<br>** Task Control Record-2 **|X|
||<br>0Ah|<br> Relative Allocation|X|
||0Bh|Data Relative Allocation|X|
|04h||Unload|M|

|Value Load State|Coupler Model 2.0|
|---|---|
|<br>00h Unloaded|M|
|01h Loaded|M|
|02h Loading|M|
|03h Error|M|
|04h Unloading|O|
|05h LoadCompleting|O|


-----

###### 2.6.2.3 PID_DEVICE_CONTROL (PID = 14)

Bit# Bit function

0 User stopped n/a
1 Individual Address duplication n/a
2 Verify Mode On M
3 Safe State On n/a
4 reserved n/a
5 reserved n/a
6 reserved n/a
7 reserved n/a

##### 2.6.3 Router Object (Object Type = 6)

###### 2.6.3.1 Overview

 _S-Mode Profiles  Interface and Couplers  Router Object_

###### Coupler Model
 2.0

 Property

1 PID_OBJECT_TYPE Data 3/1 3/1
NwPar R R
5 PID_LOAD_STATE_CONTROL Data X 3/2
7 PID_TABLE_REFERENCE Data X 3/x
27 PID_MCB_TABLE Data X 3/x
28 PID_ERROR_CODE Data X (3/X)
29 PID_OBJECT_INDEX Data (3/X) (3/X)
NwPara R R
51 PID_MEDIUM_STATUS Data 3/x 3/x
NwPar RT RT
56 PID_ROUTETABLE_CONTROL Data X 3/2
57 PID_COUPL_SERV_CONTROL Data X 3/2
58 PID_MAX_APDU_LENGTH Data 3/0 3/0
59 PID_L2_COUPLER_TYPE Data X (3/2)
61 PID_HOP_COUNT Data (3/2) (3/2)
63 PID_MEDIUM Data 3/0 3/0
67 PID_FILTER_TABLE_USE Data X 3/2

104 PID_PL110_SBC_CONTROL[ 12)] Data 3/2[ 12)] 3/2[ 12)]

12) PID_PL110_SBC_CONTROL and PID_PL110_DOA are only mandatory in Medium Interfaces to the PL110
medium.

|Bit# Bit function|Coupler Model 2.0|
|---|---|
|0 User stopped|n/a|
|1 Individual Address duplication|n/a|
|2 Verify Mode On|M|
|3 Safe State On|n/a|
|4 reserved|n/a|
|5 reserved|n/a|
|6 reserved|n/a|
|7 reserved|n/a|

|Col1|Col2|Coupler Model<br>2.0|Col4|
|---|---|---|---|
|**PID**<br>**Property**||**Primary Side**|**Secondary Side**|
|<br>1 PID_OBJECT_TYPE|Data|3/1|3/1|
|<br>1 PID_OBJECT_TYPE|NwPar|R|R|
|5 PID_LOAD_STATE_CONTROL|Data|X|3/2|
|7 PID_TABLE_REFERENCE|Data|X|3/x|
|27 PID_MCB_TABLE|Data|X|3/x|
|28 PID_ERROR_CODE|Data|X|(3/X)|
|29 PID_OBJECT_INDEX|Data|(3/X)|(3/X)|
|29 PID_OBJECT_INDEX|NwPara|R|R|
|51 PID_MEDIUM_STATUS|Data|3/x|3/x|
|51 PID_MEDIUM_STATUS|NwPar|RT|RT|
|56 PID_ROUTETABLE_CONTROL|Data|X|3/2|
|57 PID_COUPL_SERV_CONTROL|Data|X|3/2|
|58 PID_MAX_APDU_LENGTH|Data|3/0|3/0|
|59 PID_L2_COUPLER_TYPE|Data|X|(3/2)|
|61 PID_HOP_COUNT|Data|(3/2)|(3/2)|
|63 PID_MEDIUM|Data|3/0|3/0|
|67 PID_FILTER_TABLE_USE|Data|X|3/2|
|104 PID_PL110_SBC_CONTROL 12)|Data|3/2 12)|3/2 12)|


-----

###### Coupler Model
 2.0

 Property

105 PID_PL110_DOA Data n/a 3/2
112 PID_RF_SBC_CONTROL 13) Data 3/2[ 13)] 3/2[ 13)]

###### 2.6.3.2 PID_LOAD_STATE_CONTROL (PID = 5)

 _S-Mode Profiles  Interface and Couplers Router Object_  PID_LOAD_STATE_CONTROL

###### Load Sub- Control type Description

00h No operation O
01h Start Loading M
02h Load Completed M
03h Additional Load Controls M
00h Absolute Code/Data Allocation O
01h Absolute Stack Allocation O
02h Segment Control Record O
03h Task Pointer Record O
04h Task Control Record-1 O
05h Task Control Record-2 O
0Ah Relative Allocation O
0Bh Data Relative Allocation M
04h Unload M

13) PID_RF_SBC_CONTROL is only mandatory in Medium Interfaces to the RF medium.

|Col1|Col2|Coupler Model<br>2.0|Col4|
|---|---|---|---|
|**PID**<br>**Property **||**Primary Side**|**Secondary Side**|
|<br>105 PID_PL110_DOA|Data|n/a|3/2|
|112 PID_RF_SBC_CONTROL 13)|Data|3/2 13)|3/2 13)|

|Load<br>Control|Sub-<br>type|Description|Coupler Model 2.0|
|---|---|---|---|
|00h|<br>|No operation|O|
|01h|<br>|Start Loading|M|
|02h|<br>|Load Completed|M|
|03h|<br>|Additional Load Controls|M|
||00h|Absolute Code/Data Allocation|O|
||01h|Absolute Stack Allocation|O|
||02h|Segment Control Record|O|
||03h|Task Pointer Record|O|
||04h|Task Control Record-1|O|
||05h|Task Control Record-2|O|
||0Ah|Relative Allocation|O|
||0Bh|Data Relative Allocation|M|
|04h|<br>|Unload|M|


-----

###### The following Load States may be returned.

 Value Load State

00h LS_UNLOADED M
01h LS_LOADED M
02h LS_LOADING M
03h LS_ERROR M

##### 2.6.4 LTE Address Filter Table Object (Object Type = 0007h)

 _S-Mode Profiles  Couplers and Interfaces  LTE Address Filter Table Object_

###### Property

1 PID_OBJECT_TYPE Data 3/x
5 PID_LOAD_STATE_CONTROL Data 3/0
51 PID_LTE_ROUTESELECT Data 3/0
52 PID_LTE_ROUTETABLE Data 3/0

|Value Load State|Coupler Model 2.0|
|---|---|
|<br>00h LS_UNLOADED|M|
|01h LS_LOADED|M|
|02h LS_LOADING|M|
|03h LS_ERROR|M|

|Property|Col2|Coupler Model 2.0|
|---|---|---|
|<br>1 PID_OBJECT_TYPE|Data|3/x|
|5 PID_LOAD_STATE_CONTROL|Data|3/0|
|51 PID_LTE_ROUTESELECT|Data|3/0|
|52 PID_LTE_ROUTETABLE|Data|3/0|


-----

###### 2.6.4.1 PID_LOAD_STATE_CONTROL (PID = 5)

 _S-Mode Profiles  Interface and Couplers  LTE Address Filter Table Object _
_PID_LOAD_STATE_CONTROL_

###### Value Load Control

00h EV_NOP M
01h EV_START_LOAD M
02h EV_LOAD_COMPLETE M
03h EV_ADDITIONAL X
04h EV_UNLOAD M

###### The following Load States may be returned.

 Value Load State

00h LS_UNLOADED M
01h LS_LOADED M
02h LS_LOADING M
03h LS_ERROR M

#### 2.7 User Interface

##### 2.7.1 Reset to factory default
###### The Coupler Model 2.0 shall have a way in the HMI to reset to the factory default state.

|Value Load Control|Coupler Model 2.0|
|---|---|
|<br>00h EV_NOP|M|
|01h EV_START_LOAD|M|
|02h EV_LOAD_COMPLETE|M|
|03h EV_ADDITIONAL|X|
|04h EV_UNLOAD|M|

|Value Load State|Coupler Model 2.0|
|---|---|
|<br>00h LS_UNLOADED|M|
|01h LS_LOADED|M|
|02h LS_LOADING|M|
|03h LS_ERROR|M|


-----

