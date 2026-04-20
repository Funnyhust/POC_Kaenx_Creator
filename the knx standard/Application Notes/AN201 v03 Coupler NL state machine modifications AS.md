KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN201** **Coupler NL state machine modifications**

# Application Note 201/20 v03

**Title:** **Coupler NL state machine modifications**

**Status:** **Date:**

Approved Standard 2021.05.27

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2021.05.27

**Subject:** Completion of the NL state machine concerning connections on
which to respond and hop counts to be used.
**Documents** **Modified**

[01] Chapter 3/2/2 “Twisted Pair 1” v01.02.02 AS

[02] Chapter 3/3/2 “Data Link Layer General” v01.02.02 AS

[03] Chapter 3/3/3 “Network Layer” v01.01.02 AS
**Referred**

[04] AN161 “Coupler Model 2.0” v05 AS of 2015.11.05

**Document updates**

**Version** **Date** **Modifications**
KSG787-01 2017.09.27 - Document creation.
KSG787-02 2017.11.13 - Inclusion of the conclusions of the KSG Core meeting of

2017.09.27-28.
KSG787-03 2019.11.26 - Inclusion of the conclusions of the KSG Core meeting of

2017.12.13-14.
KSG778-04 2020.03.03 - Removal of the Open Point in clause 2.4.
AN201 v01 2020.05.06 - Creation of the Draft Proposal.
KSG787-05 2020.06.23 - First update proposal according the comments from

Release for Voting.
KSG787-06 2020.07.15 - Update according the conclusions of the KSG Core

meeting of 2020.06.23.
AN201 v02 2020.07.15 - Preparation of the Draft for Voting.
AN201 v03 2021.05.27 - Creation of the Approved Standard.

**Contents**

##### 1 Purpose, motivation and scope ........................................................................ 2
 1.1 Motivation ................................................................................................ 2 1.2 Constraints .............................................................................................. 2

 2 Specification ....................................................................................................... 2

Savedate: Filename: page 1 of 6
2021 05 27 AN201 v03 Coupler NL state machine modifications AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG787-01|2017.09.27|• Document creation.|
|KSG787-02|2017.11.13|<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2017.09.27-28.|
|KSG787-03|2019.11.26|<br>• Inclusion of the conclusions of the KSG Core meeting of<br>2017.12.13-14.|
|KSG778-04|2020.03.03|<br>• Removal of the Open Point in clause 2.4.|
|AN201 v01|2020.05.06|<br>• Creation of the Draft Proposal.|
|KSG787-05|2020.06.23|<br>• First update proposal according the comments from<br>Release for Voting.|
|KSG787-06|2020.07.15|<br>• Update according the conclusions of the KSG Core<br>meeting of 2020.06.23.|
|AN201 v02|2020.07.15|<br>• Preparation of the Draft for Voting.|
|AN201 v03|2021.05.27|<br>• Creation of the Approved Standard.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN201** **Coupler NL state machine modifications**

##### 2.1 Terms and definitions .............................................................................. 2 2.2 Stack and communication ....................................................................... 2
 2.2.1 Data Link Layer ................................................................................. 2 2.2.2 Network Layer ................................................................................... 3 2.3 Resource definition or used Resources................................................... 4 2.4 Management Procedures ........................................................................ 4 2.5 Configuration Procedures ........................................................................ 5 2.6 Usage and context .................................................................................. 5 2.7 Profile definition ....................................................................................... 5 2.8 Identifiers and discovery .......................................................................... 5

 3 Impact and dependencies ................................................................................. 5
 3.1 System specification (“Handbook”) dependencies .................................. 5 3.2 Configuration interworking ....................................................................... 5 3.3 Runtime Interworking .............................................................................. 5 3.4 Registration and certification ................................................................... 5 3.5 Integration and common tool impact ....................................................... 6 3.6 Security ................................................................................................... 6 3.7 Risks and compatibility issues ................................................................. 6

## 1 Purpose, motivation and scope

 _This clause is not intended for integration in the KNX Specifications._

### 1.1 Motivation
The KNX Specifications for the Network Layer of a Coupler do not specify explicitly the value
of the hop count in case of a message initiated by the Coupler – as an original message or
as a response.

### 1.2 Constraints
1. The internal handling of runtime multicast communication (N_Data_Group) is not
specified. The use case where the Coupler has itself an Application Program is not
considered. This is discussed in the KSG discussion topic [KSG00251-00].

## 2 Specification

### 2.1 Terms and definitions

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any terms or definitions.

### 2.2 Stack and communication

#### 2.2.1 Data Link Layer

 _For completeness, the following shall be added in [02] clause 6.1 “The Layer-2 of the TP1 Bridge and the_
_TP1 Repeater” as well as clause 6.2 “The Layer-2 of a Router” as well as in [01] clause 2.9 The Data Link_
_Layer of a Bridge and clause 2.10 “The Data Link Layer of a Router”_

Each medium interface shall have a dedicated Data Link Layer entity.

Savedate: Filename: page 2 of 6
2021 05 27 AN201 v03 Coupler NL state machine modifications AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN201** **Coupler NL state machine modifications**

#### 2.2.2 Network Layer

##### 2.2.2.1 State Machine of Network Layer for Routers

2.2.2.1.1 Common requirements

 _The following is copied from AN161 “Coupler Model 2.0” ([04]). Modifications are in blue text._
_This shall replace Figure 3 of [04] and Figure 2 in [03]._

This clause specifies the basic rules for the State Machine for the Network Layer for
Routers. These rules can be influenced by additional, standard and implementation specific
parameters.

Transport Layer

Network Layer services to the Transport Layer



Network Layer of a Coupler NSAPs

|Network Layer of a Coupler NSAPs<br>(a) (a)<br>(b) routing and (b)<br>(c) filtering (c)<br>(d) (d)<br>NPDUs provided to routing NPDUs provided to routing<br>and filtering and filtering|Col2|Col3|
|---|---|---|
||||


Transport Layer


Data Link Layer of a
Coupler – entity 1


NPDUs provided to routing

and filtering


routing and
filtering


Network Layer of a Coupler


NSAPs


(b)


(c)


(a)


(d)





 N_Data_Individual (a) N_Data_Individual-PDU
 N_Data_Broadcast (b) N_Data_Broadcast-PDU
 N_Data_SystemBroadcast (c) N_Data_SystemBroadcast-PDU
(d) N_Data_Group-PDU


 N_Data_Individual (a) N_Data_Individual-PDU
 N_Data_Broadcast (b) N_Data_Broadcast-PDU
 N_Data_SystemBroadcast (c) N_Data_SystemBroadcast-PDU
(d) N_Data_Group-PDU


NPDUs provided to routing

and filtering


(b)


(d)


**Figure 1 – Basic model of the Network Layer for a Coupler**

NOTE 1 The Coupler has a different Data Link Layer algorithm than an end device. This is specified in [02] clause 6.2 “The
Data Link Layer of a Router” and, amongst other, does not only accept point-to-point messages addressed to the own IA of the
Coupler, but also to IAs of devices connected to Segments of other Data Link Layer instances in the Coupler.

The below considers the routing and internal handling of messages using
N_Data_Individual, N_Data_Broadcast and N_Data_SystemBroadcast.

a. The Coupler shall have one single entity of the “Network Layer of a Coupler”. This shall
make use of the Data Link Layer services of its Medium Interfaces and provide the
services N_Data_Individual, N_Data_Broadcast and N_Data_SystemBroadcast to the
Transport Layer, just like the Network Layer of an end device.

Savedate: Filename: page 3 of 6
2021 05 27 AN201 v03 Coupler NL state machine modifications AS docx


Data Link Layer of a

Coupler – entity 2


(a)


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN201** **Coupler NL state machine modifications**

b. In reception direction, any LSDU received by the Network Layer entity from any of its
Data Link Layer entities shall be handled as follows.

   - It shall be evaluated whether it shall be passed to the Transport Layer.
In the below, there are requirements as to responding services on the Data Link
Layer entity from which they are requested or not. This requires that the Coupler
keeps track in its messaging system on the originating Data Link Layer entity. This
is however not foreseen in the service definitions (service parameters in the
payload or additional service parameters) and there are no requirements on how
this shall be done.

   - It shall be evaluated for routing and filtering for decision whether it shall be passed
to the other Data Link Layer entities. This shall be done for any LSDU received from
the Data Link Layer.

Both evaluations are part of the Network Layer State Machine for each Coupler Type.

c. In transmission direction, differentiation is made between requests for
N_Data_Individual and requests for N_Data_Broadcast and N_Data_SystemBroadcast.

   - **N_Data_Individual.req**

    - If the Transport Layer (User) does not indicate the Data Link Layer entity
(LSAP) to use, then the default behaviour shall be that the Network Layer shall
pass the TPDU to the Data Link Layer entity in function of the Destination
Address (Individual Address).

NOTE 2 This is the case if the Coupler device is the initiator of a communication.

    - If the Transport Layer does indicate the Data Link Layer entity (LSAP) to use,
then the Network Layer shall pass the TPDU to the Data Link Layer entity as
requested by the Transport Layer.

NOTE 3 This is the case if the Transport Layer (User) responds to a point-to-point message.
This allows that the Coupler device can be addressed in point-to-point communication by a
communication partner (MaC) from any medium interface, even if the IA of the Coupler device
and the IA of the communication partner do not (yet) respect the logical topology, e.g. in case the
Coupler still needs to be assigned an IA or has an incorrect IA.

   - **N_Data_Broadcast and N_Data_SystemBroadcast**

The Network Layer shall pass the TPDU to all Data Link Layer entities.

The Network Layer shall in both cases use the Network Layer parameter hop_count, for
all outgoing messages.

NOTE 4 This means that the message will appear on all connected media with the same hop count value.
Decrementing of the hop count (and thus messages on connected media with different hop count value) is only
done in reception direction in case of forwarding messages.

### 2.3 Resource definition or used Resources

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any Resources.

### 2.4 Management Procedures

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any Management Procedures.

Savedate: Filename: page 4 of 6
2021 05 27 AN201 v03 Coupler NL state machine modifications AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN201** **Coupler NL state machine modifications**

### 2.5 Configuration Procedures

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any Configuration Procedures.

### 2.6 Usage and context

 _This clause is not intended for integration in the KNX Specifications._

This document does not concern any new use case but clarifies the requirements of the
existing use case of a Coupler initiating itself a message transmission.

### 2.7 Profile definition

 _This clause is not intended for integration in the KNX Specifications._

This document does not modify or introduce any new Profiles. The contents of this document
shall apply to all existing Coupler Profiles (TP1/TP1 Coupler, TP1/RF Media Coupler,
KNXnet/IP Router…). This document completes missing information in the current KNX
Specification.

### 2.8 Identifiers and discovery

 _This clause is not intended for integration in the KNX Specifications._

None.

## 3 Impact and dependencies

### 3.1 System specification (“Handbook”) dependencies

 _This clause is not intended for integration in the KNX Specifications._

Indications for the integration of this document in the KNX Specification are given in the
specific clauses.

There are no further integrations to be done.

### 3.2 Configuration interworking

 _This clause is not intended for integration in the KNX Specifications._

The specifications as modified in this document do not have effect on the Configuration
Interworking.

### 3.3 Runtime Interworking

 _This clause is not intended for integration in the KNX Specifications._

This document does not affect runtime Interworking.

### 3.4 Registration and certification

 _This clause is not intended for integration in the KNX Specifications._

This document includes clarifications for the handling of messages from the Coupler itself
and can be applied immediatelly for new registrations and stack testing.

Savedate: Filename: page 5 of 6
2021 05 27 AN201 v03 Coupler NL state machine modifications AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN201** **Coupler NL state machine modifications**

### 3.5 Integration and common tool impact

 _This clause is not intended for integration in the KNX Specifications._

ETS does not evaluate the hop count. The considered behaviour does not influence the
Management Procedures of the Coupler or any other KNX device.

### 3.6 Security

 _This clause is not intended for integration in the KNX Specifications._

The clarifications in this document do not modify KNX security.

### 3.7 Risks and compatibility issues

 _This clause is not intended for integration in the KNX Specifications._

No risks are seen.

Savedate: Filename: page 6 of 6
2021 05 27 AN201 v03 Coupler NL state machine modifications AS docx


-----

