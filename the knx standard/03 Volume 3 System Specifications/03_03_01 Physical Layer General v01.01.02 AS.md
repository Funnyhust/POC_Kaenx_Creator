# System Specifications

## Communication

 Physical Layer General

Summary

This document gives the general description and specification of the
Physical Layer for KNX communication media.

Version 01.01.02 is a KNX Approved Standard.

This document is part of the KNX Specifications v2.1.


-----

#### Document updates

**Version** **Date** **Modifications**

1.0 2001.07.02 Preparation of Approved Standard.
1.1 2008.09.05  - “AN106 Phasing out TP0” integrated.

              - “AN109 Phasing out PL132” integrated.
1.1 2008.12.19 Preparation of v1.1 Approved Standard.
01.01.01 2013.10.28 Editorial updates for the publication of KNX Specifications 2.1.
01.01.02 2013.12.10 Editorial correction: vertical alignment of front page.
Preparation in view of publication of the KNX Specifications v2.1.

#### References

[01] Chapter 3/2/2 “Twisted Pair 1”

[02] Chapter 3/2/3 “Powerline 110”

[03] Chapter 3/2/5 “Radio Frequency”

[04] Chapter 3/2/6 “KNX IP”

Filename: 03_03_01 Physical Layer General v01.01.02 AS.docx
Version: 01.01.02
Status: Approved Standard
Savedate: 2013.12.10
Number of pages: 5

|Version|Date|Modifications|
|---|---|---|
|1.0|2001.07.02|Preparation of Approved Standard.|
|1.1|2008.09.05|• “AN106 Phasing out TP0” integrated.<br>• “AN109 Phasing out PL132” integrated.|
|1.1|2008.12.19|Preparation of v1.1 Approved Standard.|
|01.01.01|2013.10.28|Editorial updates for the publication of KNXSpecifications 2.1.|
|01.01.02|2013.12.10|Editorial correction: vertical alignment of front page.<br>Preparation in view ofpublication of the KNX Specifications v2.1.|


-----

#### Contents

##### 1 Overview ................................................................................................................................. 4 1.1 Components of the Physical Layer ................................................................................. 4 1.2 Layer-1 Logical Unit Functionality ................................................................................ 4 1.3 The task of the Medium Attachment Unit (MAU) ......................................................... 5 1.4 Layer-1 Service Interface ............................................................................................... 5 1.5 Possible media and their impact on Layer-1 ................................................................... 5


-----

### 1 Overview

#### 1.1 Components of the Physical Layer
The Physical Layer (PhL) (also called "Layer-1") is the layer between the Physical Layer user and the
medium. The Physical Layer conforms to the definitions of the ISO/OSI model (ISO 7498) Physical
Layer. It consists of the following components, see Figure 1:

   - the Logical Unit of the Physical Layer

   - the Medium Attachment Unit (MAU)

   - the medium interface (i.e. the connector)

   - the medium

- optionally: a separate power supply to the medium, for remote powered devices.

**Layer-1 User**

Physical Layer / DL Layer interface

data octets

**Logical Unit**

                                  - Octet data serialisation

                                  - Databit aggregation

                                  - Databit coding and logical bit decoding

                                  - Timing and synchronisation

                                  - Signal error checking

Physical Layer / “Layer zero” interface

logical bits

**Medium Attachment Unit**

**(MAU)**

                                  - Logical bit coding

                                  - Physical bit decoding

                                  - Surge protection

                                  - Bus power generation & extraction

Medium Interface (Connector)

(distorted) physical signals

**Medium**

**Figure 1 - Physical Layer overview**

#### 1.2 Layer-1 Logical Unit Functionality
In transmission direction the Logical Unit shall serialize each data octet in a sequence of data bits. Then it
shall frame the data bits with the help of the information given by the priority parameter[ 1)] to build the
UART character. Finally the Logical Unit shall transform the framed data bits in an asynchronous timed
logical signal.

1) For the definition of the priority parameter, please refer to the specification of the Physical Layer services for
each medium.

|data|octets|
|---|---|

|logic|al bits|
|---|---|

|(distorted) ph|ysical signals|
|---|---|


-----

In reception direction the Layer-1 Logical Unit shall transform the logical signal given by the MAU in a
data bit stream. The logical signal itself and the data bit framing shall be checked; the data bits shall be
reconstructed. Then the Logical Unit shall aggregate the bit stream to data octets. The mediumindependent sublayer of the Layer-1 Logical Unit shall pass the received data octets plus the class
information generated in the Logical Unit during reception to the Layer-1 User.

#### 1.3 The task of the Medium Attachment Unit (MAU)
The Medium Attachment Unit (MAU) shall code logical signals to physical signals and shall decode
physical signals to logical ones. Surge protection and bus power generation / extraction may be further
MAU tasks. MAU and the medium shall exchange physical signals via the connector.

The MAU can be regarded as the analog part of the Physical Layer. Besides its communication-relevant
tasks of coding logical data bits into the physical signal and decoding logical data bits from the physical
signal, the MAU may also have additional optional functions:

  - Extraction the power needed for remote powered devices

  - Monitoring the power signal contained in the physical signal to generate a save signal (i.e. an
interrupt) to the Layer-1 User in case of power decrease.

#### 1.4 Layer-1 Service Interface
The Logical Unit of Layer-1 and the Layer-1 User shall communicate locally with one each other by
physical services. A physical service shall consists of the .req (request), .ind (indication) and the .con
(confirmation) service primitives (see also Figure 1 and [01]).

The Layer-1 User shall pass a data octet plus priority information to the Layer-1 Logical Unit by the
Ph_data.req service primitive. The Layer-1 Logical Unit shall pass a data octet plus priority information
to the Layer-1 User by the Ph_data.ind service primitive; status information shall be passed to the Layer-1
User by the Ph_data.con and the Ph_Reset.con service primitives.

Optionally, the Layer-1 User may initiate a reset at the Physical Layer by the Ph_Reset.req service
primitive to which the Physical Layer responds with a Ph_Reset.con service primitive containing
status/error information.

The Layer-1 Logical Unit may spontaneously pass a data octet plus status/error information to the
Layer-1 User by the Ph_data.ind service primitive.

#### 1.5 Possible media and their impact on Layer-1
The following media are defined:

   - Twisted Pair 1 (See [01])

   - Power Line 110 (See [02])

   - Radio Frequency (See [03])

   - KNX IP (See [04])

Each medium needs an especially dedicated Medium Attachment Unit and an adapted Layer-1 Logical
Unit. See specific Chapters as indicated for the media above.


-----

