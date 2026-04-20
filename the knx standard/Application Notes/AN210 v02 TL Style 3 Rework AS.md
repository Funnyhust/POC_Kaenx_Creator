KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN210** **TL Style 3 asymmetry removal**

# Application Note 210/21 v02

**Title:** **TL Style 3 asymmetry removal**

**Status:** Approved Standard

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2021.12.17

**Subject:** Clearing asymmetric behaviour in handling incorrect Sequence
Numbers in the Connection Oriented TL Style 3 State Machine.

**Documents** **Modified**

[01] Chapter 3/3/4 “Transport Layer” v01.02.02 of 2013.11.29

[02] 08_03_04 Transport Layer Tests v01 06 05 FV

[03] KNX Test Templates for Transport Layer
**Referred**

[04] 06 Profiles v01.13.02

**Document updates**

**Version** **Date** **Modifications**
KSG985-01 2021.04.08 Document created
KSG985-02 2021.05.11 Document review.
AN210 v01 2021.11.02 Creation of the Draft Proposal.
AN210 v02 2021.12.17 Creation of the Approved Standard.

**Contents**

##### 1 Purpose, motivation and scope ......................................................................... 2

 2 Specification ........................................................................................................ 3
 2.1 Terms and definitions ............................................................................... 3 2.2 Stack and communication......................................................................... 4
 2.2.1 Transport Layer .................................................................................. 4 2.3 Resource definition or used Resources .................................................... 5 2.4 Management Procedures ......................................................................... 5 2.5 Configuration Procedures ......................................................................... 5 2.6 Usage and context .................................................................................... 6 2.7 Profile definition ........................................................................................ 8 2.8 Identifiers and discovery ........................................................................... 8

 3 Impact and dependencies .................................................................................. 8
 3.1 System specification (“Handbook”) dependencies .................................... 8 3.2 Configuration interworking ........................................................................ 9

Savedate: Filename: page 1 of 9
2021 12 17 AN210 v02 TL Style 3 Rework AS docx

|Version|Date|Modifications|
|---|---|---|
|KSG985-01|2021.04.08|Document created|
|<br>KSG985-02|<br>2021.05.11|<br>Document review.|
|<br>AN210 v01|<br>2021.11.02|<br>Creation of the Draft Proposal.|
|AN210 v02|2021.12.17|Creation of the Approved Standard.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN210** **TL Style 3 asymmetry removal**

##### 3.3 Runtime Interworking ................................................................................ 9 3.4 Registration and certification .................................................................... 9 3.5 Integration and common tool impact ......................................................... 9 3.6 Security..................................................................................................... 9 3.7 Risks and compatibility issues .................................................................. 9

## 1 Purpose, motivation and scope
There is an asymmetric behaviour in the Transport Layer Style 3, which leads to a nontolerant behaviour in at least one case. In this case the Transport Layer unnecessarily closes
the open Transport Layer connection.

In the state “OPEN WAIT” (Sender waits for a T_ACK-PDU corresponding to a message sent
to the partner), there are two different exceptions defined for the handling of received
T_ACK-PDU and T-NAK-PDU with unexpected sequence numbers.

[..]

[..]

(s. [01])

[..]

[…]

(See [01].)

Savedate: Filename: page 2 of 9
2021 12 17 AN210 v02 TL Style 3 Rework AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN210** **TL Style 3 asymmetry removal**

[..]

(See [01].)

If a T_ACK-PDU is received with a wrong sequence number, the connection shall be closed
with the action “A6”.

If a T-NAK-PDU is received with a wrong sequence number, this T-NAK-PDU shall be
ignored, as it is done for if a repeated N_Data_Individual.req is received with a sequence
number “expected – 1”.

With this definition, a communication partner receiving a T_ACK-PDU/T-NAK-PDU with an
unexpected sequence number, shall behave different if it receives a T_ACK-PDU or a
T_NAK-PDU.

There seems to be no logic argument for this behaviour.

What is even more confusing is, that the repeated reception of a T-NAK-PDU, which
obviously points to communication problems is simply ignored, whilst the reception of a
T_ACK-PDU, which is most probably an unnecessary forwarded repetition from the field bus
leads to a closing of the connection. If a different behaviour is wanted, the definition seems to
make more sense in exactly the other way around.

## 2 Specification

### 2.1 Terms and definitions

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce any new terms or definitions.

Savedate: Filename: page 3 of 9
2021 12 17 AN210 v02 TL Style 3 Rework AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN210** **TL Style 3 asymmetry removal**

### 2.2 Stack and communication

#### 2.2.1 Transport Layer

 _Clause 5.4.3 “Style 3” in [01] shall be updated as follows. Modified contents is in blue text format._


State should not be entered except in case of an internal error.

|Col1|State|Col3|Col4|Col5|
|---|---|---|---|---|
|**Event **|**CLOSED**|**OPEN_IDLE**|**OPEN_WAIT**|**CONNECTING**|
|E00|OPEN_IDLE<br>A1|<br>OPEN_IDLE<br>A0|<br>OPEN_WAIT<br>A0|CONNECTING<br>A0|
|E01|OPEN_IDLE<br>A1|OPEN_IDLE<br>A10|OPEN_WAIT<br>A10|CONNECTING<br>A10|
|E02|CLOSED<br>A0|CLOSED<br>A5|CLOSED<br>A5|CLOSED<br>A5|
|E03|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CONNECTING<br>A0|
|E04|CLOSED<br>A0|OPEN_IDLE<br>A2|OPEN_WAIT<br>A2|CLOSED<br>A6|
|E05|CLOSED<br>A0|OPEN_IDLE<br>A3|OPEN_WAIT<br>A3|CONNECTING<br>A3|
|E06|CLOSED<br>A0|OPEN_IDLE<br>A4|OPEN_WAIT<br>A4|CONNECTING<br>A6|
|E07|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CONNECTING<br>A10|
|E08|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_IDLE<br>A8|CLOSED<br>A6|
|E09|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CLOSED<br>A6|
|E10|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CONNECTING<br>A10|
|E11|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CLOSED<br>A6|
|E12|CLOSED<br>A0|CLOSED<br>A6|OPEN_WAIT<br>A9|CLOSED<br>A6|
|E13|CLOSED<br>A0|CLOSED<br>A6|CLOSED<br>A6|CLOSED<br>A6|
|E14|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CONNECTING<br>A10|
|E15|CLOSED<br>A0|OPEN_WAIT<br>A7|OPEN_WAIT<br>A11|CONECTING<br>A11|
|E16|CLOSED<br>A0|CLOSED<br>A6|CLOSED<br>A6|CLOSED<br>A6|


Savedate: Filename: page 4 of 9
2021 12 17 AN210 v02 TL Style 3 Rework AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN210** **TL Style 3 asymmetry removal**

**State**

**Event** **CLOSED** **OPEN_IDLE** **OPEN_WAIT** **CONNECTING**

E17 CLOSED OPEN_IDLE OPEN_WAIT CONNECTING

A0 A0 A9 A0

E18 CLOSED OPEN_IDLE CLOSED CONNECTING

A0 A0 A6 A0

E19 CLOSED OPEN_IDLE OPEN_WAIT OPEN_IDLE

A0 A0 A0 A13

E20 CLOSED OPEN_IDLE OPEN_WAIT CLOSED

A0 A0 A0 A5

E21 CLOSED OPEN_IDLE OPEN_WAIT CONNECTING

A0 A0 A0 A0

E22 CLOSED OPEN_IDLE OPEN_WAIT CONNECTING

A0 A0 A0 A0

E23 CLOSED OPEN_IDLE OPEN_WAIT CONNECTING

A0 A0 A0 A0

E24 CLOSED OPEN_IDLE OPEN_WAIT CONNECTING

A0 A0 A0 A0

E25 CONNECTING CLOSED CLOSED CLOSED

A12 A6 A6 A6

E26 CLOSED CLOSED CLOSED CLOSED

A15 A14 A14 A14

E27 CLOSED OPEN_IDLE OPEN_WAIT CONNECTING

A0 A0 A0 A0

### 2.3 Resource definition or used Resources

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any Resources.

### 2.4 Management Procedures

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any Management Procedure.

### 2.5 Configuration Procedures

 _This clause is not intended for integration in the KNX Specifications._

This document does not introduce neither modify any Configuration Procedure.

Savedate: Filename: page 5 of 9
2021 12 17 AN210 v02 TL Style 3 Rework AS docx

|Col1|State|Col3|Col4|Col5|
|---|---|---|---|---|
|**Event **|**CLOSED**|**OPEN_IDLE**|**OPEN_WAIT**|**CONNECTING**|
|E17|CLOSED<br>A0|<br>OPEN_IDLE<br>A0|<br>OPEN_WAIT<br>A9|CONNECTING<br>A0|
|E18|CLOSED<br>A0|OPEN_IDLE<br>A0|CLOSED<br>A6|CONNECTING<br>A0|
|E19|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|OPEN_IDLE<br>A13|
|E20|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CLOSED<br>A5|
|E21|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CONNECTING<br>A0|
|E22|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CONNECTING<br>A0|
|E23|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CONNECTING<br>A0|
|E24|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CONNECTING<br>A0|
|E25|CONNECTING<br>A12|CLOSED<br>A6|CLOSED<br>A6|CLOSED<br>A6|
|E26|CLOSED<br>A15|CLOSED<br>A14|CLOSED<br>A14|CLOSED<br>A14|
|E27|CLOSED<br>A0|OPEN_IDLE<br>A0|OPEN_WAIT<br>A0|CONNECTING<br>A0|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN210** **TL Style 3 asymmetry removal**

### 2.6 Usage and context

 _This clause is not intended for integration in the KNX Specifications._

In the following the situation is described in more detail, where the Transport Layer
connection is unnecessarily closed, because of the requirement E09 -> A6 (Closed).

The easiest way to provoke this situation in real world is to put a BUSY or NACK transmitter
onto TP1 that acknowledges Frame BUSY respectively NACK.

With this, both partners need to repeat their Frames three times, although both partners can
evaluate the first received Frame and react to it.

In this situation newer Frames will most probably overlap repeated older Frames.

EXAMPLE 01

**Normal situation, Sender 1 (S1) current sequence number = 1, Sender 2 (S2) current**
sequence number = 5

S1: A_Memory_Read-PDU(1)

S2: T_ACK-PDU(1)

S2: A_Memory_Response-PDU (5)

S1: T_ACK-PDU(5)

S1: A_Memory_Read-PDU(2)

S2: T_ACK-PDU(2)

S2: A_Memory_Response-PDU(6)

S1: T_ACK-PDU(6)

**Repeated situation:**

S1: A_Memory_Read-PDU(1)

S2: T_ACK-PDU(1)

S2: A_Memory_Response-PDU(5) (BUSY or NAK)

S1: T_ACK-PDU(5) (BUSY or NAK)

S1: A_Memory_Read-PDU(2)

S2: R1 A_Memory_Response-PDU(5) (BUSY or NAK)

S2: R2 A_Memory_Response-PDU(5) (BUSY or NAK)

S2: R3 A_Memory_Response-PDU(5)

S2: T_ACK-PDU(2)

S2: A_Memory_Response-PDU(6)

S1: R T_ACK-PDU(5)

S2: T_Disconnect-PDU(E09)

S1: T_ACK-PDU(6)

Savedate: Filename: page 6 of 9
2021 12 17 AN210 v02 TL Style 3 Rework AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN210** **TL Style 3 asymmetry removal**

If the E09 would have the same reaction as E11 (ignoring the repeated T_ACK-PDU), the
Transport Layer connection seems more stable (The BCU 1 TL style by the way does it like
this and seems to be more robust in this case).

This document proposes to change the requirement and have the same reaction for E09 as it
is defined for E11, simply ignore the repeated T_ACK-PDU.

The most obvious reason for a repeated T_ACK-PDU seems repetitions on the medium.

No disadvantages can be seen in changing the Style 3 behavior to a more robust
implementation, like the Style 2 (BCU1)

[..]

[..]

(s. [01])

Savedate: Filename: page 7 of 9
2021 12 17 AN210 v02 TL Style 3 Rework AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN210** **TL Style 3 asymmetry removal**

(s. [04])

### 2.7 Profile definition

 _This clause is not intended for integration in the KNX Specifications._

This document does not modify any existing Profile. The changed requirements have effect
on all Profiles using Transport Layer Style 3 but are an alternative specification for the
referred functionality.

### 2.8 Identifiers and discovery

 _This clause is not intended for integration in the KNX Specifications._

Not applicable, no new identifiers are needed. The change is not discoverable.

## 3 Impact and dependencies

### 3.1 System specification (“Handbook”) dependencies
It is proposed to change the action related to the event E09 in the state OPEN_WAIT from
“CLOSED A6” to “OPEN_WAIT A0” [01].

It is proposed to change the Test sequence “6.4.2.2 Sequence 22: Procedure with initial
state ‘OPEN_WAIT’” in [02] to end up in the same situation as Test sequence “6.4.4.2
Sequence 26: Procedure with initial state ‘OPEN_WAIT’)”.

It is proposed to change the KNX templates for certification for Transport Layer according to
this proposal [03].

Savedate: Filename: page 8 of 9
2021 12 17 AN210 v02 TL Style 3 Rework AS docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN210** **TL Style 3 asymmetry removal**

### 3.2 Configuration interworking
This document proposes to change the exception behaviour of a KNX Stack (Device and
Configuration Tool) using Transport Layer Style 3. Under normal conditions the Configuration
Interworking is not influenced by this document. In case of a wrong Sequence Number in a
T_ACK-PDU, the modified behaviour in this document even should allow for a more stable
connection between MaS and MaC.

### 3.3 Runtime Interworking
No change is proposed to the normal Runtime interworking.

### 3.4 Registration and certification
The changed requirements for the Transport Layer shall have effect immediately after voting
for all Profiles using Transport Layer Style 3. Existing implementations do not need to be
changed.

### 3.5 Integration and common tool impact
The common Tool (ETS) shall be changed accordingly. The Falcon shall be changed
accordingly.

### 3.6 Security
No security considerations are seen with this proposal.

### 3.7 Risks and compatibility issues
There is a risk, that Transport Layer connections will not break down as fast as they do
today. This could lead in another 12 s extra timeout during a configuration, where repetitions
take place.

On the other hand, the today’s behaviour leads under this situation to an uncomplete
Configuration Procedure, If the Management Client (ETS) stops configuring the device, if too
many Transport Layer connection breaks are supervised.

It is expected that the overall situation is a more stable situation as it is today.

Savedate: Filename: page 9 of 9
2021 12 17 AN210 v02 TL Style 3 Rework AS docx


-----

