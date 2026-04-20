KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

# Application Note 175/15 v02

**Title:** **web services**

**Status:** **Date:**

Draft Proposal 2017.01.31

**Transitional period:** Immediate effect after Final Voting.

**Date:** 2017.01.31

**Subject:** Specification of KNX web services and interfaces.

**Documents** **Modified**
None.
**Referred**

[01] OASIS. OBIX Version 1.1, Committee Specification Draft 02 / Public
Review Draft 02. 2013.

[02] Chapter 3/7/2 “Datapoint Types”.

[03] T. Berners-Lee, R. Fielding, L. Masinter. Uniform Resource
Identifier (URI): Generic Syntax, RFC 3986. Online:
https://www.ietf.org/rfc/rfc3986.txt. Accessed: 2015-08-06.

[04] ASHRAE. ANSI/ASHRAE Addendum am to ANSI/ASHRAE
Standard 135-2012, BACnet Data Communication Protocol for
Building Automation and Control Networks, 2016.

[05] W. Mahnke, S.-H. Leitner und M. Damm, OPC Unified Architecture,
Springer Science & Business Media, 2009.

[06] OPC Foundation, OPC Unified Architecture Specification, Part 4:
_Services, Release 1.03, 2015._

[07] OPC Foundation, OPC Unified Architecture for Devices,
_Companion Specification, Release 1.01,_

[08] OPC Foundation, OPC Unified Architecture Specification, Part 8:
_Data Access, Release 1.03, 2015._

[09] OPC Foundation, OPC Unified Architecture Specification, Part 3:
_Address Space Model, Release 1.03, 2015._

[10] OPC Foundation, OPC Unified Architecture Specification, Part 12:
_Discovery, Release 1.03, 2015._

[11] OPC Foundatoin, OPC Unified Architecture Specification, Part 2:
_Security Model, Release 1.03, 2015._

[12] OPC Foundation, OPC Unified Architecture Specification, Part 5:
_Information Model, Release 1.03, 2015._

**Document updates**

**Version** **Date** **Modifications**

KSG577-00 2014.06.28 - Document creation.
KSG577-01 2014.07.24 - Modifications due to in person meeting
KSG577-02 2014.09.15 - Modifications due to official meeting notes
KSG577-03 2014.11.10 - KNX Information model revised
KSG577-04 2014.12.22 - Example for KNX Information model and OBIX Web interface
KSG577-05 2015.02.02 - Changes in KNX Information model and corresponding example
KSG577-06 2015.04.07 - Introduction of tags to model a KNX network

Savedate: Filename: page 1 of 74
2017 01 31 AN175 v02 web services DP docx

|Version|Date|Modifications|
|---|---|---|
|KSG577-00|2014.06.28|- <br>Document creation.|
|KSG577-01|2014.07.24|- <br>Modifications due to inperson meeting|
|KSG577-02|2014.09.15|- <br>Modifications due to official meeting notes|
|KSG577-03|2014.11.10|- <br>KNX Information model revised|
|KSG577-04|2014.12.22|- <br>Example for KNX Information model and OBIX Web interface|
|KSG577-05|2015.02.02|- <br>Changes in KNX Information model and corresponding example|
|KSG577-06|2015.04.07|- <br>Introduction of tags to model a KNX network|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**Version** **Date** **Modifications**

KSG577-07 2015.04.22 - Changes in overview, additional examples, tag meta-model extended
KSG577-08. 2015.05.18 - Renaming in tag meta-model, updated tag example
KSG577-09 2015.07.08 - KNX Information model: structuring elements, examples
added/updated
KSG577-10 2015.08.06 - Adaptions in KNX Information model and KNX Web interface OBIX
KSG577-011 2015.08.27 - Update of gateway profiles, removal of conformance tests content
KSG577-012 2015.09.28 - Supplement to gateway profiles (JSON, CBOR, import strategies),
KNX Information model (list of core tags and tag relations, additional
clarifications), OBIX Web interface (unknown values, readable/writable,
locations, naming issues, addressing issues, mapping of contracts)
AN175 v01 2015.10.29 - Preparation of the Draft Proposal.

                     KSG577-13 2016.03.01 - Introduction BACnet/WS, rules for KNW Web Interface BACnet/WS,
extension for multiple occurrence of simple tags, marker for functions,
some smaller changes
KSG577-14 2016.04.15 - BACnet/WS adaptions according to feedback from KSG
KSG577-15 2016.05.17 - Introduction OPC UA, rules for KNX Web Interface OPC UA
KSG577-16 2016.11.10 - Update KNX Web Interface BACnet/WS, KNX Web Interface OPC UA,
KNX Web Interface OBIX
AN175 v02 2017.01.31 - Preparation of the Draft Proposal v02.

Savedate: Filename: page 2 of 74
2017 01 31 AN175 v02 web services DP docx

|Version|Date|Modifications|
|---|---|---|
|KSG577-07|2015.04.22|- <br>Changes inoverview, additional examples, tag meta-model extended|
|KSG577-08.|2015.05.18|- <br>Renaming intag meta-model, updated tag example|
|KSG577-09|2015.07.08|- <br>KNX Information model: structuring elements, examples<br>added/updated|
|KSG577-10|2015.08.06|- <br>Adaptions in KNX Information model and KNX Web interface OBIX|
|KSG577-011|2015.08.27|- <br>Update of gateway profiles, removal of conformance tests content|
|KSG577-012|2015.09.28|- <br>Supplement to gateway profiles (JSON, CBOR, import strategies),<br>KNX Information model (list of core tags and tag relations, additional<br>clarifications), OBIX Web interface (unknown values, readable/writable,<br>locations, naming issues, addressing issues, mapping of contracts)|
|AN175 v01|2015.10.29|- <br>Preparation of the Draft Proposal.|
|||-|
|KSG577-13|2016.03.01|- <br>Introduction BACnet/WS, rules for KNW Web Interface BACnet/WS,<br>extension for multiple occurrence of simple tags, marker for functions,<br>some smaller changes|
|KSG577-14|2016.04.15|- <br>BACnet/WS adaptions according to feedback from KSG|
|KSG577-15|2016.05.17|- <br>Introduction OPC UA, rules for KNX Web Interface OPC UA|
|KSG577-16|2016.11.10|- <br>Update KNX Web Interface BACnet/WS, KNX Web Interface OPC UA,<br>KNX Web Interface OBIX|
|AN175 v02|2017.01.31|- <br>Preparation of the Draft Proposal v02.|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

### Contents

##### 1 Introduction ......................................................................................................... 5
 1.1 Initial position ........................................................................................... 5 1.2 Intention ................................................................................................... 5

 2 Overview .............................................................................................................. 7
 2.1 General architecture ................................................................................. 7 2.2 General KNX Network structure ............................................................... 9 2.3 Structure of this document ....................................................................... 9

 3 KNX Information model .................................................................................... 10
 3.1 Introduction ............................................................................................ 10 3.2 Vocabulary structure .............................................................................. 10 3.3 Core tags ................................................................................................ 13 3.4 Modeling example .................................................................................. 19

 4 KNX Web interface OBIX .................................................................................. 22
 4.1 Introduction ............................................................................................ 22 4.2 Information presentation ......................................................................... 22
 4.2.1 Introduction ...................................................................................... 22 4.2.2 Contract mapping ............................................................................. 25 4.2.3 Datapoint Type contract mapping .................................................... 27 4.2.4 Functional Block Type contract mapping ......................................... 29 4.2.5 Entity mapping ................................................................................. 29 4.3 Object addressing .................................................................................. 30 4.4 Object interaction ................................................................................... 32
 4.4.1 Introduction ...................................................................................... 32 4.4.2 Read transaction .............................................................................. 33 4.4.3 Write transaction .............................................................................. 33 4.4.4 Invoke transaction ............................................................................ 34

 5 KNX Gateway OBIX ........................................................................................... 35
 5.1 Introduction ............................................................................................ 35 5.2 Object model .......................................................................................... 35 5.3 Representational State Transfer ............................................................ 36

 6 KNX Web interface OPC UA ............................................................................. 36
 6.1 Introduction into OPC UA ....................................................................... 36 6.2 Introductory example .............................................................................. 40 6.3 General type mapping ............................................................................ 41 6.4 Device Type mapping ............................................................................. 43 6.5 Datapoint Type mapping ........................................................................ 44 6.6 Functional Block Type mapping ............................................................. 47 6.7 Addressing ............................................................................................. 47 6.8 Interaction .............................................................................................. 48
 6.8.1 Read transaction .............................................................................. 48 6.8.2 Write transaction .............................................................................. 49 6.8.3 Method calls ..................................................................................... 49

 7 KNX Gateway OPC UA ...................................................................................... 50

Savedate: Filename: page 3 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

##### 7.1 Introduction ............................................................................................ 50 7.2 Object model .......................................................................................... 50

 8 KNX Web interface BACnet/WS ....................................................................... 51
 8.1 Introduction ............................................................................................ 51 8.2 Information presentation ......................................................................... 51
 8.2.1 Introduction ...................................................................................... 51 8.2.2 Type mapping .................................................................................. 55 8.2.3 Datapoint Type mapping .................................................................. 58 8.2.4 Functional Block Type mapping ....................................................... 61 8.2.5 Entity mapping ................................................................................. 62 8.3 Object addressing .................................................................................. 64 8.4 Object interaction ................................................................................... 65
 8.4.1 Introduction ...................................................................................... 65 8.4.2 Read transaction .............................................................................. 66 8.4.3 Write transaction .............................................................................. 66 8.4.4 Function calls ................................................................................... 67

 9 KNX Gateway BACnet/WS ................................................................................ 68
 9.1 Introduction ............................................................................................ 68 9.2 Object model .......................................................................................... 68

 10 Gateway profiles ............................................................................................... 69
 10.1 Introduction ............................................................................................ 69 10.2 Information encoding .............................................................................. 69 10.3 Message exchange ................................................................................ 70 10.4 Profiles ................................................................................................... 70 10.5 Conflict handling ..................................................................................... 72

 11 Conformance tests ........................................................................................... 73
 11.1 Introduction ............................................................................................ 73 11.2 Setup ...................................................................................................... 73 11.3 Information model................................................................................... 73 11.4 Unit tests ................................................................................................ 73

 12 Use case scenarios ........................................................................................... 74
 12.1 Introduction ............................................................................................ 74

Savedate: Filename: page 4 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

## 1 Introduction

### 1.1 Initial position
KNX Networks are dedicated to control and monitor networked building automation systems
(BASs). Currently, they have limited capability to communicate with other systems due to
different protocols, incompatibility or various other restrictions. Nowadays, there exist
individual and custom solutions for the integration of KNX Networks for specific problem
scenarios. Hence, a standardized interface between the KNX world and the remaining
systems is needed to establish a common link in order to bridge this gap and integrate KNX
Networks into systems like the traditional Internet or the emerging Internet of Things (IoT).

Figure 1 shows the KNX Network on the one hand side and IT systems on the other side.
Currently, a standardized bridge between these two areas based on Web services (WSs) is
missing to support upcoming use case scenarios.

### 1.2 Intention
The scope of the KNX Web services specification is to clearly define a standardized
interface between KNX Networks and other information technology (IT) systems based on
WSs. This interface is encapsulated in a gateway device, the KNX Gateway, which is able to
communicate with both the KNX Network and the connected IT systems. The KNX Gateway
has to implement a set of encoding standards (see clause 10.2) as well as various message
exchange protocols (see clause 10.3) to enable remote access to the KNX Network via the
Internet or another wide area network (WAN). For this purpose, gateway profiles define
levels of implementation extent (see clause 10.4). On the other hand, the KNX Gateway
must be able to communicate with the KNX Network. The KNX Gateway is an abstract
concept, and thus not restricted to any hardware requirements or limitations. Constrained
devices can be used as well as enterprise systems to constitute a KNX Gateway device. It
has to be kept in mind that some configurations may overload the used hardware regarding
the mentioned limitations. For example, a computationally intensive message exchange
protocol cannot be used in resource-constrained KNX Gateways. However, the KNX Web
services specification defines the KNX Gateway in an abstract and platform-independent
way irrespective of any particular hardware.

Figure 1 sketches the intended setting containing the KNX Network, the IT systems and the
KNX Gateway between these two components.

**KNX Network** **IT systems**

**KNX Gateway**

**Figure 1 – Intention**

Savedate: Filename: page 5 of 74
2017 01 31 AN175 v02 web services DP docx

|Col1|KNX Gateway|
|---|---|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

The KNX Gateway and its WS interface can be based on OASIS Open Building Information
Exchange (OBIX), OPC Unified Architecture (OPC UA), or BACnet Web services
(BACnet/WS). OPC UA is discussed In clauses 6 and 7 while the OBIX integration is
specified In clauses 4 and 5. Additionally, a KNX Gateway based on BACnet/WS is
described In clauses 8 and 9. The KNX Gateway enables browsing of information about the
KNX Network and reading or modifying runtime data of devices, datapoints, functional
blocks, interface objects or channels. Thus, any high level management use case for
manipulating or monitoring the underlying KNX Network will be covered by this document
and can be implemented using the presented interfaces.

By default, the KNX Gateway is used by two user groups.

- _Web Client_ _developers use the defined interface to implement Web Clients, which are_
remote applications for accessing KNX Networks. These applications are not limited to
Web technologies (e.g. HTML5), but also other applications can use the introduced
WSs. Due to the standardized interface, the group of Web Client developers requires no
KNX expert knowledge. Interactions with the KNX Gateway are handled via common
WS calls. However, the Web Client developers have to understand the structure of a
BAS and the possible ways of interacting with its elements to implement management
applications.

- _Gateway manufacturers have to provide the Web Client developers with the common_
and standardized interface. In addition, they are faced with the integration of information
from KNX Networks into the KNX Gateway. Gateway manufacturers have to be aware
of KNX Handbook knowledge as well as knowledge on implementing and providing
WSs. The KNX knowledge is needed for the realization of a communication interface
between KNX Gateway and KNX Network.

There are three interfaces on the boundaries of the specified KNX Gateway, which have to
be implemented.

- First, the KNX Information model interface defines the structure of the input model to
integrate a representation of the KNX Network into the KNX Gateway. All available
elements and their representation are specified by this interface. Depending on the used
technology in the KNX Gateway, mappings of the information into the technologyspecific representation is required.

- Second, the KNX Web interface between the KNX Gateway and the remote IT systems
describes the available access points and the structure of the data both provided and
expected by the services of the KNX Gateway.

- Third, the KNX Network access interface is required to connect the KNX Gateway with
the KNX Network in order to enable message exchange and routing requests from and
to the remote IT systems.

This KNX Web services specification covers the first and the second interface while the third
one is left to the gateway manufacturer who is responsible for establishing an adequate link
to the KNX Network.

Savedate: Filename: page 6 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

## 2 Overview

### 2.1 General architecture
The overall architecture of the KNX Web services consists of nine main components, which
are illustrated in Figure 2. This overview is used throughout this specification to describe the
different components and interfaces in detail. Moreover, a workflow from the KNX Network to
the final integration into the KNX Gateway is illustrated in this figure. The following
enumeration roughly describes the components.

**1. KNX Network covers all kinds of KNX installations. Twisted pair (TP) as well as the**

Internet Protocol (IP) or USB can be used to establish a link to the KNX Gateway
component.
**2. ETS is used for engineering the KNX Network. All settings and configuration actions are**

done by means of the Engineering Tool Software (ETS). Afterwards export functionality
can be used to provide the available data of the KNX Network for further processing.
However, this component is not mandatory. If the data can be obtained from another
information source, the ETS export does not need to be used (cf. the following
component).
**3. Additional information illustrates an extra information source besides the ETS.**

Similarly, information is modelled by means of the KNX Information model. This
modeling step can be done either automatically by any tool support or manually by
editing the model prior to its integration into the KNX Gateway device.
**4. Remote access covers all access activities from Web Clients, which use various**

message exchange protocols (e.g. HTTP, CoAP, or WebSocket). Data for requests and
responses can be encoded in different formats (e.g. XML, EXI, JSON, or CBOR).
**5. KNX Gateway describes the component that enables the link between the KNX Network**

and the Web Clients. Its interfaces are the KNX Information model for the import of
network configuration information as well as the KNX Network access and the KNX Web
_interface as service interfaces for Web Client access to the KNX Network._
**6. KNX Information model describes the interface that consolidates the ETS data and the**

information of additional data sources. This model is based on a common vocabulary
(KNX Tag vocabulary) defining a list of tags and relations between these tags. The KNX
Information model is independent of both the data source of the KNX Network (i.e. input
sources to the model) and the technology used to implement the KNX Gateway (i.e.
OBIX, OPC UA, or BACnet/WS). The generated model is the source for integration of
KNX Network information into the KNX Gateway. This interface is used for configuration
purposes while the subsequently described KNX Network access and KNX Web
interface provide their services at runtime of the KNX Gateway.
7. **KNX Network access is consigned to handle the message exchange between the KNX**

Gateway and the connected KNX Network.
8. **KNX Web interface, on the other hand, provides services for Web Clients via common**

Web protocols. The messages can be encoded by using different formats. The KNX Web
interfaces according to the various KNX Gateway technologies are described throughout
this specification document.
9. **KNX Tag vocabulary defines a list of available tags to specify entities in the KNX**

Information model. Additionally, relationships between tags are defined in the KNX Tag
vocabulary in order to structure the tags. First, the KNX Tag vocabulary is used during
the creation of the KNX Information model. Second, the KNX Web interface uses this
KNX Tag vocabulary to transform the internal data representation into the format
expected by Web Clients.

Savedate: Filename: page 7 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**KNX Network access**

**Figure 2 – General architecture**

Savedate: Filename: page 8 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

### 2.2 General KNX Network structure
This schematic representation should force the understanding of modeling a KNX Network at
the KNX Gateway interfaces. An overview of this model is depicted in Figure 3. This abstract
model is independent from the used KNX Gateway technology (OBIX, OPC UA, or
BACnet/WS). Moreover, it is intentionally kept abstract using an intuitive notation in order to
give a first overview of the various elements.

The top element of the model is an installation, which contains a set of views. Each view is
linked to other view elements and to devices, functionalities, or datapoints. For example, a
topology view will represent the topological structure of the network with its hierarchy of
subnets and devices. A building view will create a structure of building parts and
corresponding devices, and trades categorize the devices of a network in different
application domains (e.g. lighting). A device is linked with functionality elements or is directly
connected with its datapoints. A functionality element is a container for various datapoints
combined in order to reach a common goal or to describe a common task. Examples for
functionality elements are functional blocks or channels. Finally, a datapoint has one or
multiple access methods to interact with the underlying KNX Network.

Installation

View Device

Functionality

Datapoint

AccessMethod

**Figure 3 – Abstract model**

### 2.3 Structure of this document
In the following clauses, the interfaces KNX Information model (interface 6) and KNX Web
interface (interface 8) are specified. First, the KNX Information model and the corresponding
KNX Tag vocabulary are defined (see clause 3). The internal processing (model integration)
and storage (internal data structures) of the KNX Information model within the KNX Gateway
is left to the manufacturers. Thus, there is enough freedom in designing KNX Gateways.
Second, the KNX Web interface for the KNX Gateway technologies OBIX (see clause 4),
OPC UA (see clause 6), and BACnet/WS (see clause 8) is specified. Here, mappings from
the KNX Tag vocabulary and the KNX Information model to the technology-specific Web
interface are addressed. In clauses 5, 7, and 9, characteristics of the three gateway
technologies are presented.

Savedate: Filename: page 9 of 74
2017 01 31 AN175 v02 web services DP docx


Datapoint


Device


View


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

In summary, this document is focused on the interfaces for the Web Clients (KNX Web
interface) and the KNX Gateway manufacturers (KNX Web interface, KNX Information
model). Issues regarding internal data processing, network access, and data storage are out
of scope and left to the manufacturers.

## 3 KNX Information model

### 3.1 Introduction
The KNX Information model specifies the input data of the KNX Gateway on interface 6 (cf.
Figure 2). This model conforms to a list of tags stored in a common KNX _Tag vocabulary. In_
order to provide a structured vocabulary, a meta-model specifies the characteristics of tags
and their relations to each other. Gateway manufacturers use the KNX Information model
and its KNX Tag vocabulary to integrate information from the KNX Network into the KNX
Gateway. The KNX Information model based on tags of the KNX Tag vocabulary defines the
KNX Network in a neutral and flexible way independent of any KNX Gateway technology.
The model describes the static structure of a KNX Network and semantic information while
runtime information such as actual values of datapoints is modelled at interface 8 and within
the KNX Gateway implementation. Compared to a restrictive object model specifying classes
and their attributes, a vocabulary of tags is more easily to extend for future needs.

All KNX Gateway devices have to be able to handle the full KNX Information model and its
KNX Tag vocabulary for the integration of KNX Networks. The KNX Information model
exclusively defines the interface for integrating KNX Network information into the KNX
Gateway. It has to be mentioned that the KNX Information model and the corresponding
KNX Tag vocabulary are no contradiction to the already existing ETS object model. In fact, it
is an addendum to the existing model tailored for the needs of KNX WS specification.

First, the overall structure of the KNX Tag vocabulary and the core tags of this vocabulary
are described. Afterwards, an example is given to illustrate the usage of the KNX Tag
vocabulary in order to represent a particular KNX Network in the form of a KNX Information
model. An XML Schema file that defines the presented tag structure is included in the
additional artifacts of the specification. Moreover, the core of the KNX Tag vocabulary is
enclosed as additional, machine-readable artefact, which enables the automatic processing
of the KNX Information model.

### 3.2 Vocabulary structure
The KNX Tag vocabulary defines a set of tags and the relations between different tags.
Subsequently, a tagged model defines entities and tag/value-pairs, which characterize these
entities and correspond to tags of the KNX Tag vocabulary. Thus, the tags are used to add
characteristics to the KNX-relevant entities when creating a KNX Information model. In
Figure 4, the structure of the tags, their relations, the entities, and the tag/value-pairs are
specified. In addition, this structure is defined in the form of an XML Schema in order to
allow automatic processing of tag vocabularies and KNX Information models.

- Each Tag has a name and a description. The name of the tag has to be a unique
identifier. Additionally, the tag has a type specifying the datatype of the tag’s value.
There exist three kinds of datatypes for a tag.

Savedate: Filename: page 10 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

- Primitive datatypes (e.g. bool, string, or real) can be used to specify standard tags. For
example, the tag with the name serialNumber is of type string, and thus corresponding
values can contain any text character.

   - The type marker indicates an is-a relationship and has no value. For example, the
marker tag named device can be used to classify a particular entity as a KNX
device. Marker tags do not need a value as the characterization is given by the tag
assignment itself.

   - The type ref defines a reference to another marker tag. For this purpose, the
_reference association of the class tag is used to specify this referenced tag. For_
example, deviceRef, which is a tag of type ref, is used to model a reference to an
entity that is marked with the tag device, which is, on the other hand, a tag of type
_marker. The value of a tag/value-pair using a ref tag is the identifier of the_
referenced entity (i.e. the value of its tag/value-pair that is associated with the tag
_id)._

- In order to define relationships between tags, the class Relation is used. A relation
specifies a tag (tag) and its associated sub-tag (used with). The occurrence defines if a
tag can be used only once (one) or multiple times (many) within a particular entity. For
example, the marker tag device can use the tag name, but this is allowed only once per
entity (occurrence = one).

- An Entity is a container for tag/value-pairs. Tag/value-pairs that belong together are
grouped within one entity, for example to describe a distinct device in the KNX Network.
In general, an identifier for each entity is mandatory in order to ensure identifiability (i.e.
each entity has to have a tag/value-pair that is associated with the tag id). Furthermore,
the values of identifiers are not case sensitive. A digit must not be used as first
character in an identifier, and allowed characters are ASCII letters, digits, and
underscore. Identifiers for entities need to be globally unique, but should be meaningful
and descriptive in order to ease addressing via the KNX Web interface.

- The intermediate class TagValuePair is used as building block of entities. Each
tag/value-pair instance belongs to an entity and refers to a predefined tag of the KNX
Tag vocabulary. Its value attribute is of type object in order to enable the storage of any
primitive data (e.g. integer, real, date, string). The type of the data is specified in the
associated tag.

+reference «enumeration»

**typeEnum**

                                - 0..1

+string = 1

**Tag** +int = 2

**Entity** +tagvaluepairs **TagValuePair** +tag +name : identifier +real = 3

+bool = 4

+value : object +type : typeEnum

+ref = 5

1              -              - 1 +description : string +marker = 6

+date = 7
+time = 8

1 1 +datetime = 9

+tag +used with

**Relation**

«enumeration»

                                
+occurrence : occurrenceEnum **occurrenceEnum**

+one = 1

                                
+many = 2

**Figure 4 – Meta-model for entities, tags, and tag/value-pairs**

Savedate: Filename: page 11 of 74
2017 01 31 AN175 v02 web services DP docx

|* 0..<br>Tag<br>Entity +tagvaluepairs TagValuePair +tag +name : identifier<br>+value : object +type : typeEnum<br>1 * * 1 +description : string<br>1 1<br>+tag +use<br>Relation<br>*<br>+occurrence : occurrenceEnum<br>*|Col2|Col3|0..|
|---|---|---|---|
|**Tag**<br>+name : identifier<br>+type : typeEnum<br>+description : string<br>*<br>0..<br>**Relation**<br>+occurrence : occurrenceEnum<br>+tag<br>1<br>*<br>+use<br>1<br>*<br>**Entity**<br>1<br>+tagvaluepairs<br>*<br>**TagValuePair**<br>+value : object<br>*<br>+tag<br>1|**Tag**|**Tag**|**Tag**|
|**Tag**<br>+name : identifier<br>+type : typeEnum<br>+description : string<br>*<br>0..<br>**Relation**<br>+occurrence : occurrenceEnum<br>+tag<br>1<br>*<br>+use<br>1<br>*<br>**Entity**<br>1<br>+tagvaluepairs<br>*<br>**TagValuePair**<br>+value : object<br>*<br>+tag<br>1|+name : identifier<br>+type : typeEnum<br>+description : string|+name : identifier<br>+type : typeEnum<br>+description : string|+name : identifier<br>+type : typeEnum<br>+description : string|
|**Tag**<br>+name : identifier<br>+type : typeEnum<br>+description : string<br>*<br>0..<br>**Relation**<br>+occurrence : occurrenceEnum<br>+tag<br>1<br>*<br>+use<br>1<br>*<br>**Entity**<br>1<br>+tagvaluepairs<br>*<br>**TagValuePair**<br>+value : object<br>*<br>+tag<br>1||||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Figure 5 shows the usage of this meta-model for defining tags, entities, and tag/value-pairs
in terms of an example.

- On the right hand side, there are some tags defined. The short notation is used to keep
the example as clear as possible. In brackets, the type of the tag is shown. For ref tags,
the name of the referenced marker tag is also written in brackets (e.g. see tag
_datapointRef). Outside of the brackets, the name of the tag is given._

- On the left hand side, two entities as containers for tag/value-pairs are listed (entity #17,
_entity #45)._

- In between, particular characteristics of these entities are specified by means of
instances of the TagValuePair class. In the figure, the values are written in quotes. Each
value has an associated tag in order to specify the meaning of the value. Thus, each
entity is linked with a set of tag/value-pairs, and each tag/value-pair has one distinct tag.
Marker tags do not have a value, i.e. their value is null. A tag/value-pair using a ref tag
indicates a connection to another entity marked with the specified tag. The value of this
tag/value-pair is the identifier of the referenced entity (i.e. the value that is associated
with the tag id). This is exemplarily shown by the dotted arrow indicating a virtual link
between the datapointRef tag/value-pair of entity #45 and entity #17, which is marked as
_datapoint and has the id “datapoint_17”._

Entities TagValuePairs Tags

„datapoint_17“

description (string)

null

entity #17

name (string)

„Switch Channel A“

datapoint (marker)

„Datapoint for switching“

id (string)

datapointRef (ref datapoint)

„device_3“

entity #45 „datapoint_17“ device (marker)

„Switching Actuator“

null

**Figure 5 – Exemplary modeling of entities, tag/value-pairs, and tags**

Savedate: Filename: page 12 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

### 3.3 Core tags
In the following the core tags of the KNX Tag vocabulary are presented, which are used
within this specification in the context of examples. Additionally, all tags that have an impact
on the mapping to the KNX Gateway technologies (e.g. tags to specify types) are listed in
the following tables. Table 1 lists tags that are specified by their names and types as well as
the reference associations. Detailed description of these tags and all other tags can be found
in the machine-readable KNX Tag vocabulary that is available as additional artifact. The
KNX Tag vocabulary can be extended ad libitum and is not limited to these tags. This
specification hosts, inter alia, those tags, which are absolutely necessary in the KNX
Information model and the mapping to target technologies of the KNX Gateway. In order to
avoid ambiguity, all tags provided by the KNX Association are hosted in the namespace knx,
which is used as prefix for the tag name. Subsequently, the relations between the tags are
shown. Dependencies between tags can be modelled by means of these relations.

**Table 1 – Core tags**

**Name** **Type** **Reference**

accessMethod marker

application marker

buildingPart marker

buildingPartFloor marker

buildingPartRoom marker

channel marker

channelType marker

channelTypeRef ref channelType

communication bool

datapoint marker

datapointRef ref datapoint

datapointType marker

datapointTypeRef ref datapointType

description string

device marker

deviceRef ref device

dimensionA int

dimensionCd int

dimensionK int

dimensionKg int

dimensionM int

dimensionMol int

Savedate: Filename: page 13 of 74
2017 01 31 AN175 v02 web services DP docx

|Name|Type|Reference|
|---|---|---|
|accessMethod|marker||
|application|marker||
|buildingPart|marker||
|buildingPartFloor|marker||
|buildingPartRoom|marker||
|channel|marker||
|channelType|marker||
|channelTypeRef|ref|channelType|
|communication|bool||
|datapoint|marker||
|datapointRef|ref|datapoint|
|datapointType|marker||
|datapointTypeRef|ref|datapointType|
|description|string||
|device|marker||
|deviceRef|ref|device|
|dimensionA|int||
|dimensionCd|int||
|dimensionK|int||
|dimensionKg|int||
|dimensionM|int||
|dimensionMol|int||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**Name** **Type** **Reference**

dimensionS int

direction string

encodingRef ref enumeration

enumeration marker

enumerationRef ref enumeration

functionalBlock marker

functionalBlockType marker

functionalBlockTypeRef ref functionalBlockType

functionality marker

functionalityRef ref functionality

functionParameter marker

geoAddress string

groupAddress string

groupObject marker

id string

individualAddress string

installation marker

literal marker

literalBit bool

literalInt int

literalRef ref literal

literalString string

locale string

lsb int

manufacturer marker

manufacturerRef ref manufacturer

max real

min real

msb int

name string

offset int

orderNumber string

Savedate: Filename: page 14 of 74
2017 01 31 AN175 v02 web services DP docx

|Name|Type|Reference|
|---|---|---|
|dimensionS|int||
|direction|string||
|encodingRef|ref|enumeration|
|enumeration|marker||
|enumerationRef|ref|enumeration|
|functionalBlock|marker||
|functionalBlockType|marker||
|functionalBlockTypeRef|ref|functionalBlockType|
|functionality|marker||
|functionalityRef|ref|functionality|
|functionParameter|marker||
|geoAddress|string||
|groupAddress|string||
|groupObject|marker||
|id|string||
|individualAddress|string||
|installation|marker||
|literal|marker||
|literalBit|bool||
|literalInt|int||
|literalRef|ref|literal|
|literalString|string||
|locale|string||
|lsb|int||
|manufacturer|marker||
|manufacturerRef|ref|manufacturer|
|max|real||
|min|real||
|msb|int||
|name|string||
|offset|int||
|orderNumber|string||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**Name** **Type** **Reference**

parameterInRef ref functionParameter

parameterOutRef ref functionParameter

parameterType marker

parameterTypeRef ref parameterType

priority marker

priorityRef ref priority

readable bool

roomNumber string

scale real

serialNumber string

symbol string

translatable marker

translation marker

translationRef ref translation

transmittable bool

unit marker

unitRef ref unit

updatable bool

value marker

valueBit marker

valueDate marker

valueEnum marker

valueFunction marker

valueInt marker

valueReal marker

valueRef ref value

valueString marker

view marker

viewRef ref view

writable bool

Savedate: Filename: page 15 of 74
2017 01 31 AN175 v02 web services DP docx

|Name|Type|Reference|
|---|---|---|
|parameterInRef|ref|functionParameter|
|parameterOutRef|ref|functionParameter|
|parameterType|marker||
|parameterTypeRef|ref|parameterType|
|priority|marker||
|priorityRef|ref|priority|
|readable|bool||
|roomNumber|string||
|scale|real||
|serialNumber|string||
|symbol|string||
|translatable|marker||
|translation|marker||
|translationRef|ref|translation|
|transmittable|bool||
|unit|marker||
|unitRef|ref|unit|
|updatable|bool||
|value|marker||
|valueBit|marker||
|valueDate|marker||
|valueEnum|marker||
|valueFunction|marker||
|valueInt|marker||
|valueReal|marker||
|valueRef|ref|value|
|valueString|marker||
|view|marker||
|viewRef|ref|view|
|writable|bool||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

In addition to these tag declarations, their relations to each other are of interest. Table 2
summarizes these dependencies by defining the tag (column Tag) and its associated subtags (column Used with). If a tag can occur more than once in combination with its parent tag
within a single entity, the occurrence value many is used. Otherwise, the value one is used
for the occurrence. For example, the marker view is used with the tag translatable. The
occurrence is one indicating that this tag cannot be used multiple times within an entity
marked as view. In addition, the view marker can be combined with multiple occurrences of
_datapointRef, deviceRef, functionalityRef, and viewRef. Thus, an arbitrary hierarchy of view_
entities can be built.

It has to be noted that this list as well as the tag list is informative than normative and should
give an overview regarding the concept of tags and the previously introduced meta-model for
the overall structure. The list of tag relations is used as primary source for creating type and
contract definitions at the KNX Web interface (interface 8) before the actual entities of the
KNX Information model are mapped. Although the column Tag in Table 2 contains only
marker tags, the tag relations are not limited to relations of the form <marker> used with
_<any tag>._

**Table 2 – Relations of core tags**

**Tag** **Used with** **Occurrence**

accessMethod datapointRef many

application view one

buildingPart view one

buildingPartFloor buildingPart one

buildingPartRoom buildingPart one

buildingPartRoom roomNumber one

channel channelTypeRef one

channel functionality one

channelType translatable one

datapoint datapointTypeRef many

datapoint direction one

datapoint parameterTypeRef one

datapoint translatable one

datapointType translatable one

datapointType valueRef many

device datapointRef many

device functionalityRef many

device individualAddress one

device manufacturerRef one

device orderNumber one

device serialNumber one

Savedate: Filename: page 16 of 74
2017 01 31 AN175 v02 web services DP docx

|Tag|Used with|Occurrence|
|---|---|---|
|accessMethod|datapointRef|many|
|application|view|one|
|buildingPart|view|one|
|buildingPartFloor|buildingPart|one|
|buildingPartRoom|buildingPart|one|
|buildingPartRoom|roomNumber|one|
|channel|channelTypeRef|one|
|channel|functionality|one|
|channelType|translatable|one|
|datapoint|datapointTypeRef|many|
|datapoint|direction|one|
|datapoint|parameterTypeRef|one|
|datapoint|translatable|one|
|datapointType|translatable|one|
|datapointType|valueRef|many|
|device|datapointRef|many|
|device|functionalityRef|many|
|device|individualAddress|one|
|device|manufacturerRef|one|
|device|orderNumber|one|
|device|serialNumber|one|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**Tag** **Used with** **Occurrence**

device translatable one

enumeration literalRef many

enumeration translatable one

functionalBlock functionalBlockTypeRef one

functionalBlock functionality one

functionalBlockType parameterTypeRef many

functionalBlockType translatable one

functionality datapointRef many

functionality translatable one

groupObject accessMethod one

groupObject communication one

groupObject groupAddress many

groupObject priorityRef one

groupObject readable one

groupObject transmittable one

groupObject updatable one

groupObject writable one

installation translatable one

installation viewRef many

literal translatable one

literal literalBit one

literal literalInt one

literal literalString one

manufacturer geoAddress one

manufacturer id one

manufacturer name one

functionParameter translatable one

functionParameter valueRef many

parameterType datapointTypeRef one

parameterType direction one

parameterType translatable one

priority literal one

Savedate: Filename: page 17 of 74
2017 01 31 AN175 v02 web services DP docx

|Tag|Used with|Occurrence|
|---|---|---|
|device|translatable|one|
|enumeration|literalRef|many|
|enumeration|translatable|one|
|functionalBlock|functionalBlockTypeRef|one|
|functionalBlock|functionality|one|
|functionalBlockType|parameterTypeRef|many|
|functionalBlockType|translatable|one|
|functionality|datapointRef|many|
|functionality|translatable|one|
|groupObject|accessMethod|one|
|groupObject|communication|one|
|groupObject|groupAddress|many|
|groupObject|priorityRef|one|
|groupObject|readable|one|
|groupObject|transmittable|one|
|groupObject|updatable|one|
|groupObject|writable|one|
|installation|translatable|one|
|installation|viewRef|many|
|literal|translatable|one|
|literal|literalBit|one|
|literal|literalInt|one|
|literal|literalString|one|
|manufacturer|geoAddress|one|
|manufacturer|id|one|
|manufacturer|name|one|
|functionParameter|translatable|one|
|functionParameter|valueRef|many|
|parameterType|datapointTypeRef|one|
|parameterType|direction|one|
|parameterType|translatable|one|
|priority|literal|one|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**Tag** **Used with** **Occurrence**

translatable description one

translatable id one

translatable name one

translatable translationRef many

translation description one

translation id one

translation locale one

translation name one

unit dimensionA one

unit dimensionCd one

unit dimensionK one

unit dimensionKg one

unit dimensionM one

unit dimensionMol one

unit dimensionS one

unit offset one

unit scale one

unit symbol one

unit translatable one

value lsb one

value msb one

value translatable one

valueBit encodingRef one

valueBit value one

valueDate value one

valueEnum enumerationRef one

valueEnum value one

valueFunction parameterInRef one

valueFunction parameterOutRef one

valueFunction value one

valueInt max one

valueInt min one

Savedate: Filename: page 18 of 74
2017 01 31 AN175 v02 web services DP docx

|Tag|Used with|Occurrence|
|---|---|---|
|translatable|description|one|
|translatable|id|one|
|translatable|name|one|
|translatable|translationRef|many|
|translation|description|one|
|translation|id|one|
|translation|locale|one|
|translation|name|one|
|unit|dimensionA|one|
|unit|dimensionCd|one|
|unit|dimensionK|one|
|unit|dimensionKg|one|
|unit|dimensionM|one|
|unit|dimensionMol|one|
|unit|dimensionS|one|
|unit|offset|one|
|unit|scale|one|
|unit|symbol|one|
|unit|translatable|one|
|value|lsb|one|
|value|msb|one|
|value|translatable|one|
|valueBit|encodingRef|one|
|valueBit|value|one|
|valueDate|value|one|
|valueEnum|enumerationRef|one|
|valueEnum|value|one|
|valueFunction|parameterInRef|one|
|valueFunction|parameterOutRef|one|
|valueFunction|value|one|
|valueInt|max|one|
|valueInt|min|one|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**Tag** **Used with** **Occurrence**

valueInt unitRef one

valueInt value one

valueReal max one

valueReal min one

valueReal unitRef one

valueReal value one

valueString value one

view datapointRef many

view deviceRef many

view functionalityRef many

view translatable one

view viewRef many

It has to be noted that the definition of tag relations directly influences the structure of
objects at the KNX Web interface. This is because automatic mapping processes in order to
form the KNX Web interface, e.g. for OBIX-based Gateways, use the KNX Tag vocabulary
and the corresponding relations (see clause 4.2). One basic principle is that the assignment
of ref tags to other tags (e.g. the tag viewRef is used by the tag installation) is motivated by
the intended modeling and access methodology. In this specification, top-down tag relations
are defined, for example, providing a list of view entities in the parental installation entity
(see example in clause 3.4). However, also additional bottom-up tag relations can be defined
without contradiction to already existing tag relations.

### 3.4 Modeling example
On the next page, an exemplary mapping of a KNX Network, called Demo, to the KNX
Information model is shown in Figure 6. First, the entities, which are relevant for the Web
Client, are presented. These entities are colored green. There are two different views,
named Lighting and All devices. According to the KNX Tag vocabulary, the entities are
constructed and the tag values are set. Second, entities regarding the network access (e.g.
group objects) are modelled in this example, which are colored orange. Afterwards, the
types for datapoints and functional blocks are described (colored blue). Additionally, general
entities such as units and enumerations (sometimes also referred to as encodings) are part
of this KNX Information model (colored blue). Thus, all information that is required for the
integration of the KNX Network into the KNX Gateway is available in this model. Models
conforming to the introduced KNX Tag vocabulary or an XML serialization of it are provided
at interface 6 (cf. Figure 2) in order to integrate the structure of the desired KNX Network into
a KNX Gateway implementation. As can be seen, the KNX Information model is used to
structure static information while runtime information is not part of this model (e.g. current
values of datapoints).

Savedate: Filename: page 19 of 74
2017 01 31 AN175 v02 web services DP docx

|Tag|Used with|Occurrence|
|---|---|---|
|valueInt|unitRef|one|
|valueInt|value|one|
|valueReal|max|one|
|valueReal|min|one|
|valueReal|unitRef|one|
|valueReal|value|one|
|valueString|value|one|
|view|datapointRef|many|
|view|deviceRef|many|
|view|functionalityRef|many|
|view|translatable|one|
|view|viewRef|many|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

References between entities are realized by means of ref tags. Entities have a unique
identifier using the tag id. This identifier is used in the ref tags to establish a link between two
entities. The example shows two group objects (entities with marker groupObject). Each
group object represents a method for accessing a group in the underlying KNX Network. It
can be linked with several datapoints, and it exists only in the internal domain of the KNX
Gateway. Web Clients do not directly use these access methods, but interact with the more
abstract datapoints. The KNX Gateway implementation decides internally on the correct
access method for the communication with the KNX Network.

For a better understanding of the subsequent example, the particular modeling elements are
explained within the figure by means of the topmost entity. It has to be noted that the arrows
do not represent additional information. They are only used for better visualization of the
dependencies between entities.

Savedate: Filename: page 20 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

unique identifier (using tag id)

marker (no value) id=“demo“

installation
name=“Demo“ entity
description=“Demo installation“

tag/value-pair viewRef=“view_devices“ value

viewRef=“view_lighting“

reference (viewRef=“view_lighting“)

tag

id=“view_devices“ id=“view_lighting“
view application id=“T_01“
name=“Devices“ view translation
description=“All devices“ translatable name=“Beleuchtung“
deviceRef=“temperature_controller“ name=“Lighting“ description=“Meine verteilte Anwendung“
deviceRef=“actuator_1“ description=“My distributed Application“ locale=“de-DE“

viewRef=“ground_floor“
translationRef=“T_01“

id=“temperature_controller“ id=“actuator_1“ id=“ground_floor“
device device buildingPartFloor
name=“Temperature controller“ name=“Switching actuator“ view
orderNumber=“1234567“ orderNumber=“7654321“ name=“Ground floor“
serialNumber=“SN33221133“ serialNumber=“SN33771188“ viewRef=“room_14“
physicalAddress=“1.4.43“ physicalAddress=“1.4.41“ viewRef=“room_37“
manufacturerRef=“Manufacturer_GmbH“ manufacturerRef=“Manufacturer_GmbH“
datapointRef=“temperature_value“ functionalBlockRef=“light_actuator_block“

id=“room_14“
buildingPartRoom id=“room_37“
view buildingPartRoom

id=“Manufacturer_GmbH“ name=“Meeting room“ view
manufacturer roomNumber=“1.4.14“ name=“Meeting room“
name=“Manufacturer GmbH“ functionalityRef=“light_actuator_block“ roomNumber=“1.4.37“
geoAddress=“Strasse 17, 51413 Musterort“

id=“light_actuator_block“

id=“temperature_value“ functionalBlock
datapoint functionality
name=“Temperature value“ name=“Light switching actuator“
direction=“out“ datapointRef=“switch_channel“
datapointTypeRef=“DPST_9_001“ functionalBlockTypeRef=“FBT_01“

id=“switch_channel“

id=“DPST_9_001“ datapoint
datapointType name=“Switching value“ id=“FBT_01“
name=“DPT Value Temp“ direction=“in“ functionalBlockType
valueRef=“temperature“ datapointTypeRef=“DPST_1_001“ name=“Light switching actuator basic“

parameterTypeRef=“PT_02“ parameterTypeRef=“PT_01“

id=“GO_02“ parameterTypeRef=“PT_02“
groupObject
accessMethod
communication=true

id=“temperature“ transmittable=true
valueReal updatable=false
value readable=true id=“PT_02“ id=“PT_01“
name=“Temperature“ writable=false parameterType parameterType
lsb=0 datapointRef=“temperature_value“ name=“Switching value“ name=“Stored state“
msb=15 priorityRef=“high“ direction=“in“ direction=“out“
min=-273 groupAddress=“1.0.4“ datapointTypeRef=“DPST_1_001“ datapointTypeRef=“DPST_1_001“
max=670760
unitRef=“celsius“

id=“GO_01“
groupObject
accessMethod
communication=true id=“DPST_1_001“
transmittable=true datapointType
updatable=false name=“DPT Switch“

id=“celsius“ readable=false valueRef=“switch“
unit writable=true
name=“Celsius“ datapointRef=“switch_channel“
symbol=“°C“ priorityRef=“high“
offset=“-273.15“ groupAddress=“1.0.2“
scale=1.0 groupAddress=“1.0.5“ id=“switch“
dimensionK=1 valueBit

value
name=“Switch on/off“
lsb=0

id=“high“ msb=0 id=“on“
priority encodingRef=“onoff“ literal
literal name=“On“
name=“High“ literalBit=true

id=“priority“

id=“normal“ enumeration id=“onoff“
priority name=“Priority“ enumeration id=“off“
literal literalRef=“high“ name=“Encoding on/off“ literal
name=“Normal“ literalRef=“normal“ literalRef=“on“ name=“Off“

literalRef=“off“ literalBit=false

**Figure 6 – Exemplary KNX Information model**

Savedate: Filename: page 21 of 74
2017 01 31 AN175 v02 web services DP docx


id=“GO_01“
groupObject
accessMethod
communication=true
transmittable=true
updatable=false
readable=false
writable=true
datapointRef=“switch_channel“
priorityRef=“high“
groupAddress=“1.0.2“
groupAddress=“1.0.5“


id=“actuator_1“
device
name=“Switching actuator“
orderNumber=“7654321“
serialNumber=“SN33771188“
physicalAddress=“1.4.41“
manufacturerRef=“Manufacturer_GmbH“
functionalBlockRef=“light_actuator_block“


id=“temperature_controller“
device
name=“Temperature controller“
orderNumber=“1234567“
serialNumber=“SN33221133“
physicalAddress=“1.4.43“
manufacturerRef=“Manufacturer_GmbH“
datapointRef=“temperature_value“


id=“room_14“
buildingPartRoom
view
name=“Meeting room“
roomNumber=“1.4.14“
functionalityRef=“light_actuator_block“


id=“T_01“
translation
name=“Beleuchtung“
description=“Meine verteilte Anwendung“
locale=“de-DE“


id=“switch_channel“
datapoint
name=“Switching value“
direction=“in“
datapointTypeRef=“DPST_1_001“
parameterTypeRef=“PT_02“


id=“ground_floor“
buildingPartFloor
view
name=“Ground floor“
viewRef=“room_14“
viewRef=“room_37“


id=“switch“
valueBit
value
name=“Switch on/off“
lsb=0
msb=0
encodingRef=“onoff“


id=“temperature_value“
datapoint
name=“Temperature value“
direction=“out“
datapointTypeRef=“DPST_9_001“


id=“PT_02“
parameterType
name=“Switching value“
direction=“in“
datapointTypeRef=“DPST_1_001“


id=“onoff“
enumeration
name=“Encoding on/off“
literalRef=“on“
literalRef=“off“


id=“room_37“
buildingPartRoom
view
name=“Meeting room“
roomNumber=“1.4.37“


id=“DPST_1_001“
datapointType
name=“DPT Switch“
valueRef=“switch“


id=“normal“
priority
literal
name=“Normal“


id=“on“
literal
name=“On“
literalBit=true


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

## 4 KNX Web interface OBIX

### 4.1 Introduction
This interface specifies the relationship between the KNX Gateway implemented in
accordance to the OBIX standard and the Web Clients as remote applications like building
management systems (BMSs). The description contains

- the information presentation of the KNX Network,

- the scheme for addressing KNX Network objects within the KNX Gateway, and

- an overview on interaction scenarios.

Thus, this interface specification forms the commitment that has to be implemented in order
to guarantee a standardized way of interaction between a KNX Gateway and all kinds of
Web Clients. Gateway internal processes and data structures are not in the scope of this
specification. The aim is to define the interface for Web Clients. Thus, these Web Clients can
use a uniform interface for accessing the KNX Network.

### 4.2 Information presentation

#### 4.2.1 Introduction
If the KNX Gateway is based on the OBIX standard, the information presentation in the KNX
Web interface has to be realized within the framework offered by this OASIS standard [01].

OASIS OBIX specifies a simple and concise object model to represent the information.
Everything is modelled as an object in OBIX. Each object has a set of standardized
attributes and may contain an arbitrary number of child objects. There exist definitions for
basic value objects (e.g. integer, date, or real), a list object, an operation object, or a
reference object to establish a link to other objects. The OBIX concept is based on the
Representational State Transfer (REST) paradigm, which is characterized by its resourceorientation and the statelessness. According to this paradigm, each request is selfcontained, and the key elements of the provided services are resources (e.g. datapoints).
Every resource is accessed through a uniform interface via a unique address and a small set
of operations. In addition, so-called contracts can be specified to define new OBIX types.
The contracts are templates describing the syntax and the semantics of the derived,
concrete objects. More details about REST and the OBIX object model can be found in
clause 5.

Savedate: Filename: page 22 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

A brief example that is derived from the KNX Information model example (see clause 3.4)
should demonstrate the concept of information representation in OBIX. The KNX Network
_Demo contains a temperature controller with a datapoint representing the actual temperature_
value (Temperature value). This datapoint is mapped to an OBIX object as an instance of a
temperature value contract that represents KNX Datapoint Type 9.001 because the
datapoint is of type DPST 9.001. A Web Client wants to read the value of the temperature
datapoint of the mentioned device. Every KNX Gateway based on OBIX needs to implement
an OBIX lobby object (obix:Lobby). This is a standardized main entry point for accessing
objects. In the lobby, a reference to the root node for integrated KNX Networks is available.
For detecting all available KNX Networks within the KNX Gateway, an HTTP GET call to this
root node for KNX Networks with the Uniform Resource Identifier (URI)
```
http://localhost:8080/installations/ is sent. The response of the KNX Gateway

```
consists of a list of available installations in form of OBIX ref objects. After identifying the
required network, the Web Client sends a read request containing the unique address (URI)
of the desired device within a particular view to the OBIX-based KNX Gateway. In this
example, the device is located in a view named Devices. The request is sent via an HTTP
```
GET call, which can be seen in Listing 1. Special characters within URIs, like spaces or

```
brackets, are encoded in accordance to the well-established HTML URL encoding schema
described in RFC 3986 [03]. As browsers often forbid an encoded slash (/), this character
has to be replaced by an underscore (_) when creating a URI. Moreover, the URIs are case
insensitive. Here, all URI characters are set to lower case. The maximum length of URIs has
to be respected. In general, OBIX requires absolute URIs in the XML root element’s href
attribute. However, the following XML listings use server-relative URIs to ensure better
readability. The server part of the URI is assumed to be always http://localhost:8080
in these examples.
```
  GET
  http://localhost:8080/installations/demo/views/view_devices/devices/tempera
  ture_controller/

```
**Listing 1 – Read request for device**

The KNX Gateway itself contains a representation of the entire KNX Network in the form of a
set of OBIX objects. After receiving the request, the KNX Gateway returns the OBIX object
of the temperature controller (see Listing 2). While the name of the object is an identifier, the
texts in the attributes displayName as well as display depend on the specified language
given in the HTTP request (attribute accept-language). If no language is defined, the
default values are set to these attributes. It has to be noted that translations have to be
stored internally in the KNX Gateway. If a request is sent with a specific language attribute,
the KNX Gateway will have to add the corresponding language dependent texts in the
returned object. The device in Listing 2 also has an order number, a serial number, an
individual address, and a reference to a manufacturer object. Finally, there is a list of
associated datapoints containing the desired datapoint for the actual temperature value.

Savedate: Filename: page 23 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**
```
  <obj name="temperature_controller" is="/knx/Device"
  displayName="Temperature controller"
  href="/installations/demo/views/view_devices/.../temperature_controller/">
   <int name="individualAddress" href="individualAddress" val="43"/>
   <str name="orderNumber" href="orderNumber" val="1234567"/>
   <str name="serialNumber" href="serialNumber" val="SN33221133"/>
   <ref name="manufacturer" href="manufacturer_gmbh"
  is="/knx/Manufacturer"/>
   <list name="datapoints" href="datapoints" of="obix:ref /knx/Datapoint">
    <ref name="temperature_value" href="datapoints/temperature_value"
      displayName="Temperature value" is="/knx/DPST_9_001
  /knx/Datapoint"/>
   </list>
  </obj>

```
**Listing 2 – Response of the device object**

For reading the value of the temperature datapoint, the Web Client can access the datapoint
reference. The corresponding HTTP GET can be seen in Listing 3.
```
  GET
  http://localhost:8080/installations/demo/views/view_devices/.../temperature
  _controller/datapoints/temperature_value/

```
**Listing 3 – Read request for datapoint**

When accessing the object of the datapoint, the KNX Gateway retrieves the temperature
information from the corresponding datapoint in the KNX Network and updates its internal
representation of this datapoint. For this purpose, each datapoint consists of one or multiple
access methods. In this example, a readable group object is connected with the desired
datapoint. Thus, a Group Value Read is executed by the KNX Gateway to get the value of
the datapoint. Afterwards, the result (i.e. the OBIX datapoint object) is sent back to the Web
Client. The response from the KNX Gateway contains the OBIX object that is given in
Listing 4.
```
  <obj name="temperature_value" is="/knx/DPST_9_001 /knx/Datapoint"
  href="/installations/demo/views/view_devices/.../datapoints/temperature_val
  ue/" 
    displayName="Temperature value">
   <real name="temperature" href="temperature" displayName="Temperature"
  val="23.4" 
      min="-273.0" max="670760.0" unit="/units/celsius" is="obix:Point"/>
  </obj>

```
**Listing 4 – Response of the datapoint object**

The object contains several attributes like the name or the URI (attribute href). In addition,
the attribute is specifies the parental contract (/knx/DPST-9.001) or rather the list of
parental contracts (/knx/DPST_9_001 and /knx/Datapoint). The OBIX object contains also a
child element of type real that contains the captured temperature value (attribute val).
Clause 4.4 gives further examples for object interaction.

Savedate: Filename: page 24 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

In the KNX Web interface, all network elements are defined in terms of the basic OBIX
object model. The structure of these elements is constituted in a set of contracts, which is
based on the KNX Tag vocabulary and specified in the following clause (see clause 4.2.2).
Afterwards, the mapping of KNX Datapoint Types (see clause 4.2.3), Parameter Types (see
clause 4.2.4), and Functional Block Types (see clause 4.2.4) from the KNX Information
model to OBIX contracts is examined. Finally, the mapping of all other elements of the KNX
Information model to OBIX objects is examined (see clause 4.2.5).

In general, referenced entities in the KNX Information model (by the use of tags of type ref)
are directly integrated into their parent objects. If a distinct entity like a datapoint is
referenced in multiple views, this will lead to virtual copies of this datapoint in the form of
individual child elements in the associated views. Therefore, the KNX Gateway has to
manage this circumstance by ensuring data consistency between object copies or merging
the virtual object copies, which have different URIs, to one consistent object within the KNX
Gateway.

#### 4.2.2 Contract mapping
The aim of contracts is to define syntax and semantics of custom types. Thus, they provide
the basis for interoperability via the standardized KNX Web interface. Default values of type
properties can be set, and type inheritance is available. KNX Gateway objects implement
these custom types similar to classes in object-oriented programming languages that
implement interfaces. Hence, the user of the KNX Web interface can rely on the specified
contracts while communicating with the KNX Gateway. Contracts represent an agreement
between the KNX Gateway (interface provider) and any Web Client (interface user). It has to
be noted, that OBIX contracts are exchanged out-of-band. Based on the defined KNX Tag
vocabulary, contracts can be generated automatically. A set of rules specifies the procedure
to extract contract definitions out of the tag declarations and the list of tag relations. In the
following, these rules as well as potential exceptions are described.

First of all, all tags of type marker, become OBIX contracts. Therefore, the name of the tag in
combination with the name of the namespace becomes the URI (attribute href) of the
contract. For example, the tag installation in the core namespace knx results in a contract
with URI /knx/Installation. As exceptions, the following markers are ignored in this
initial step. Entities using these markers are colored blue in the example presented in
Figure 6.

   - unit

   - enumeration

   - literal and all tags using literal (e.g. priority)

   - datapointType

   - functionalBlockType

   - channelType

   - parameterType

   - value and all tags using value (e.g. valueBit)

   - translation

   - functionParameter

   - accessMethod and all tags using accessMethod (e.g. groupObject)

Savedate: Filename: page 25 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Next, the relations of these marker tags are analyzed. First, tags of primitive datatype (e.g.
_string, int) that are used in a relationship with a marker become child elements in the_
resulting OBIX contract. The name of these child objects is set to the name of the
corresponding tag. For example, the order number of a device becomes a str child object
in the resulting device contract as the marker device uses the tag orderNumber according to
Table 2. If tags of primitive datatype can occur multiple times (occurrence = many), an OBIX
```
list is used instead of adding a single child element. This list has the particular OBIX type

```
in its of attribute. The various primitive tag datatypes are mapped as follows:

   - Type string becomes a str object.

   - Type int becomes an int object.

   - Type real becomes a real object.

   - Type bool becomes a bool object.

   - Type date becomes a date object.

   - Type time becomes a time object.

   - Type datetime becomes an absTime object.

If a marker tag uses other markers (e.g. tag device is used with tag translatable), then also
tags of these related markers are integrated into the contract (recursively). Additionally,
these marker tags (or rather their contract URIs) are integrated into the is attribute of the
newly constructed OBIX contract as the markers indicate contracts, as well.

Tags of type ref become child objects of OBIX type ref with the referenced contract stated
in the is attribute. Relations between tags with multiple occurrence (occurrence = many) are
combined into OBIX list objects specifying the type of the contained elements in the of
attribute of the list. As the list contains ref elements, it needs an additional obix:Ref in the
```
of attribute. The name of the ref or list object is set to the name of the tag without the

```
term “Ref”. For lists, a singular tag name is transformed into plural form. For example, the
tag viewRef becomes an OBIX list with name views in the installation contract. A naming
conflict can occur, if there is already a tag with this name. Then, the transformed name is
expanded by an additional, arbitrary number (e.g. views1) until the naming of all child
elements within one contract is consistent.

In general, the URIs of child elements (attribute href) are set to the same value as the
name of these objects, which results in relative URIs. However, child elements of type ref
do not have a href value in the contract definition. This information is added while mapping
the concrete entities of the KNX Information model as instances of the contracts. There are
some exceptions for mapping of tag relations:

- The tags id, name, and description do not become child elements. Their values are
mapped to the already available OBIX attributes name, displayName and display,
respectively.

- A reference to a literal (or any tag that uses literal, e.g. priority) becomes an OBIX enum
child.

- References to translation (translationRef), unit (unitRef), enumeration (enumerationRef,
_encodingRef), value (valueRef), datapointType (datapointTypeRef), parameterType_
(parameterTypeRef), channelType (channelTypeRef), or functionalBlockType
(functionalBlockTypeRef) are ignored and do not become child elements.

Savedate: Filename: page 26 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

As an example, the contract /knx/Installation is shown in Listing 5. This contract results from
the analysis of the KNX Tag vocabulary and the list of relations. The installation tag is a
marker, and thus it results in a contract. Furthermore, the tag uses the viewRef tag that can
occur multiple times in combination with the installation tag. According to the previously
introduced rules, this results in a list of references to view objects (of = "obix:ref /knx/View").
The name of this list is set to plural form. Another example is presented in Listing 6, where
the device contract is illustrated.
```
  <obj href="/knx/Installation">
   <list name="views" href="views" of="obix:ref /knx/View"/>
  </obj>

```
**Listing 5 – Installation contract**
```
  <obj href="/knx/Device">
   <ref name="manufacturer" is="/knx/Manufacturer"/>
   <str name="orderNumber" href="orderNumber"/>
   <str name="serialNumber" href="serialNumber"/> 
   <int name="individualAddress" href="individualAddress"/>
   <list name="datapoints" href="datapoints" of="obix:ref /knx/Datapoint"/>
   <list name="functionalities" href="functionalities" 
      of="obix:ref /knx/Functionality"/>
  </obj>

```
**Listing 6 – Device contract**

#### 4.2.3 Datapoint Type contract mapping
The KNX Datapoint Types are specified in the corresponding KNX system specifications
document [02]. Datapoint Types may have

- a format,

- an encoding,

- a range, and

- a unit.

These types have to be modelled in the KNX Information model using the available tags of
the KNX Tag vocabulary (e.g. datapointType, value, valueReal). Afterwards, these types can
be mapped from the KNX Information model to OBIX contracts. The datapoint type contracts
are used during creation of datapoint objects. Each KNX Datapoint Type becomes a
complex (i.e. composite) OBIX contract object containing subordinated objects for the values
(e.g. bool, int, real) and further information like units or the encoding of binary values.

Savedate: Filename: page 27 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Each datapoint type specified in the KNX Information model becomes a contract. These are
all entities with the marker tag datapointType. The href of the contract is derived from the
identifier of the datapoint type entity and is complemented by the namespace knx. With
respect to the KNX Tag vocabulary, a datapoint type consists of multiple references to
values. Each datapoint type contract must be derived from the generic datapoint contract.
This is done by adding the URI /knx/datapoint to the is attribute of the datapoint type.
In contrast to previously mentioned reference mapping, this relation does not result in a list
of values, but each value results in a distinct child element of the particular datapoint type
contract. The attributes href, name, displayName, or display of these child elements
are set in the same way as in clause 4.2.2, and the data is taken from the entities of the KNX
Information model. Moreover, these child elements are derived from the standardized OBIX
contract obix:Point, which is set in the is attribute. In this context, the various value
markers lead to different OBIX child objects:

   - _ValueReal becomes a real object._

   - _ValueInt becomes an int object._

   - _ValueString becomes a string object._

   - _ValueBit becomes a bool object._

   - _ValueEnum becomes an enum object._

   - _ValueFunction becomes an op object._

Similar to the mapping of normal contracts, related tags are integrated into the value child
objects if there exist corresponding OBIX attributes. For example, min and max tags are
mapped to the OBIX attributes min and max of a real object. All other tags without a
corresponding OBIX attribute are ignored in the contracts for the KNX Web interface, and
the data is only stored internally in the KNX Gateway. Ref tags are an exception of this rule.
Here, already available OBIX attributes are used as far as possible, as well. For example,
the unitRef of valueReal does not result in a ref child but is mapped to the unit attribute of
the OBIX real object. But also ref tags without a corresponding OBIX attribute are mapped
to the contract. For example, encodingRef becomes a child element of type enum and name
_encoding. In general, references to enumerations become OBIX enum objects. As an_
example, Listing 7 shows the contract for KNX Datapoint Type 9.001. It has one child of type
```
real with min value and max value as well as a related unit. However, the tags for the most

```
and least significant bit (msb, lsb) are ignored in the OBIX contract for the KNX Web
interface as there is no corresponding OBIX attribute for these tags.
```
  <obj href="/knx/DPST_9_001" is="/knx/Datapoint" displayName="DPT Value
  Temp">
   <real name="temperature" href="temperature" displayName="Temperature" 
      unit="/units/celsius" min="-273" max="670760" is="obix:Point"/>
  </obj>

```
**Listing 7 – DPST 9.001 contract**

A special case is the valueFunction. The linked input (parameterInRef) and output parameter
(parameterOutRef) referring to a functionParameter need to be specified in the available in
and out attributes of the OBIX op object. For this purpose, all functionParameter entities
specified in the KNX Information model become contracts. The unique href is again derived
from the identifier, similar to datapoint types. The connected valueRef elements are resolved
as described in the datapoint type mapping. Finally, the href of the functionParameter
contracts are set in the corresponding in and out attributes of the defined op object.

Savedate: Filename: page 28 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

After defining the datapoint type contracts, parameter type contracts and datapoints
referencing a datapoint type can be mapped to OBIX. As already mentioned, a ref tag to a
datapoint type does not result in a child element of OBIX type ref, but the name of the
datapoint type contract is added to the list of contracts in the is attribute of the particular
entity. An example can be seen in Listing 9.

#### 4.2.4 Functional Block Type contract mapping
Similar to the Datapoint Type mapping, this clause describes the mapping of Functional
Block Types (i.e. entities in the KNX Information model using the marker tag
_functionalBlockType) to corresponding OBIX contracts. According to the KNX Tag_
vocabulary, a functional block type consists of a list of parameter types. Similar to the values
of datapoint types, these parameter types are not mapped to an OBIX list object in the
functional block contract. On the contrary, each parameter type entity described in the KNX
Information model becomes an OBIX ref child with a distinct URI (attribute href). An
example for a functional block type contract is shown in Listing 8. Similar to the datapoint
type, the functional block types are inherited from the generic contracts
```
/knx/FunctionalBlock.
  <obj href="/knx/FBT_01" is="/knx/FunctionalBlock"
    displayName="Light switching actuator basic">
   <ref name="PT_02" href="/knx/PT_02"/>
   <ref name="PT_01" href="/knx/PT_01"/>
  </obj>

```
**Listing 8 – Exemplary functional block type contract**

Next, the parameter types need to be mapped to OBIX contracts (i.e. entities with marker tag
_parameterType). An example is given in Listing 9. It can be seen that the datapointTypeRef_
has to be resolved by means of the is attribute (cf. Clause 4.2.3).
```
  <obj href="/knx/PT_02" displayName="Switching value" is="/knx/DPST_1_001">
   <str name="direction" href="direction" val="in"/>
  </obj>

```
**Listing 9 – Exemplary parameter type contract**

#### 4.2.5 Entity mapping
In order to map all other entities from the KNX Information model to OBIX objects, the
previously generated contracts are used. An entity becomes an OBIX obj. Each marker tag
in an entity is mapped to the is attribute specifying the contract inheritance hierarchy. Then,
the information from the contracts is integrated into the particular entity object. Afterwards,
the generated child objects are filled with values from the entity. For example, the installation
contract defines a list with references to views. This list is copied to a particular installation
object. Then the view references are added to this list which leads to an object comparable
to Listing 10. If there are already ref child elements in the parental contract (e.g.
_manufacturer in /knx/Device), then they are copied (their names remain the same), and_
the values of their href attributes are set to the referenced objects (see Listing 2). On the
other hand, new ref objects (e.g. elements of the list views in Listing 10) are created by
using the entity identifier for the name and href attribute.

Savedate: Filename: page 29 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**
```
  <obj name="demo" href="/installations/demo/" is="/knx/Installation" 
    displayName="Demo">
   <list name="views" href="views" of="obix:ref /knx/View">
    <ref name="view_devices" href="view_devices" is="/knx/View"/>
    <ref name="view_lighting" href="view_lighting" is="/knx/View"/>
   </list>
  </obj>

```
**Listing 10 – Exemplary installation instance**

Special mapping is required for entities marked as unit or enumeration. The information of a
_unit entity is mapped to the obix:Unit contract. An enumeration entity is mapped to a list of_
type obix:Range. The associated literals become child elements of this list. If a literal has an
additional value (e.g. tag literalBit with a Boolean value), then the literal is directly mapped to
the corresponding OBIX object (e.g. OBIX bool). Otherwise, the child elements of the
enumeration become objects of type obj. Literals do not become self-contained OBIX
objects. An example is shown in Listing 11. The URI of units is composed of the absolute
path /units/ and the unit’s identifier (e.g. /units/celsius/). On the other hand,
enumerations and encodings are located in the path /enums/ followed by their particular
identifier (e.g. /enums/onoff/).
```
  <list href="/enums/onoff/" of="obix:bool" is="obix:Range">
   <bool name="on" href="on" val="true" displayName="On"/>
   <bool name="off" href="off" val="false" displayName="Off"/>
  </list>

```
**Listing 11 –Exemplary enumeration object**

There is no standardized procedure to integrate translations into the KNX Gateway. The
handling of multilingual texts is an internal functionality of the gateway, and thus it is not
necessary to define neither a contract nor a mapping approach. The KNX Gateway
installation integrates multilingual texts into its internal memory and returns them if requested
by a Web Client.

The modelled access methods (e.g. groupObjects) in the KNX Information model are not
mapped to contracts or objects in the KNX Web interface. Instead, they are internally
managed and stored. The KNX Gateway integrates the various access methods and decides
which method has to be used if there is, for example, an access to a connected datapoint
object. Although the access methods are not represented at the KNX Web interface, normal
OBIX objects can be used for internal representation.

### 4.3 Object addressing
A KNX Gateway may provide access to multiple KNX Networks. It is necessary that each
element (e.g. device, datapoint, or building part) has its own distinct URI. Every object
access is carried out via its URI according to the resource-orientation of the REST paradigm.
For example, the URI
```
http://localhost:8080/installations/demo/views/view_devices/devices/
temperature_controller refers to an instance of a temperature controller in the view

```
_Devices of KNX network Demo. The accessed KNX Gateway is running locally on port 8080._

Savedate: Filename: page 30 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Objects have either absolute or relative URIs. Absolute URIs start with a leading slash while
a relative URI does not. Again, more details can be found in the OBIX specification [01].
Figure 7 shows the tree structure for accessing objects of KNX Networks within the KNX
Gateway. The root element is the KNX Gateway itself that is addressed via its name or IP
address and the service port. These are the minimum requirements to access a KNX
Gateway. Additionally, gateway manufacturers can implement an optional discovery
mechanism for their KNX Gateways. Then, IP address and service port do not have to be
exchanged out of band. The networks are hosted in /installations/, which is an
absolute URI. By adding the name of the desired KNX Network to the path (e.g.
```
/installations/demo/), the OBIX installation object is retrieved from the KNX Gateway.

```
Views are accessed by adding views/ to the installation’s URI. Each parent-child
relationship (e.g. between view element and associated datapoints, or between the
installation and its views) is realized by a list of ref objects. These references point to the
particular objects, which are child elements in the same parent object. For example, the list
of views in an installation hosts both the references to the views and the views itself.
However, the particular view objects are not visible to avoid high payload during
transactions. Sub-objects are accessed by adding the particular, relative URI to the current
URI. For example, a view called Lighting can be addressed by adding view_lighting/ to
the URI /installations/demo/views/. The internal management of OBIX objects is
left to the KNX Gateway manufacturer, and thus this issue is out of scope in this document.
Although all objects have a distinct URI in the KNX Gateway, which enables direct access to
these objects, they can also be found by following the references from the well-known entry
point for KNX Networks that is listed in the OBIX lobby.

KNX Gateway

0..* /installations/

|KNX Gateway|Col2|
|---|---|
|0..*|/installat|

|Installation|Col2|
|---|---|
|0..*|views/|


View


KNX Gateway


0..* 0..*
datapoints/ functionalities/

Datapoint Functionality

0..* 0..*

datapoints/ functionalities/

0..*

datapoints/


Installation


0..*
devices/

|View<br>views/<br>0..*|Col2|
|---|---|
|0..*<br>datapoints/|functionalities/<br>0..*|


Datapoint


Device


**Figure 7 – Addressing scheme**

Savedate: Filename: page 31 of 74
2017 01 31 AN175 v02 web services DP docx


Functionality


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

While KNX Network objects are located in /installations/, there exist locations for
other data, as well. As already mentioned, units are located in the absolute path /units/
while enumerations and encodings are located in /enums/. Contracts have an absolute URI
(e.g. /knx/Device, /knx/DPST_9_001). Thus, they are directly located in the server’s
root path in the form of OBIX objects.

The KNX Web interface enables the access to OBIX objects via a set of operations, which
are examined in the following clause. The KNX Gateway manufacturers have to integrate the
information of the KNX Network according to the KNX Information model to finally support
the addressing of objects via the KNX Web interface as given in Figure 7. In summary,
referenced objects are added to the associated parent objects as child objects. In addition,
the children of an OBIX object are not directly visible when accessing the object, but they are
represented by means of ref objects pointing to the particular child objects. Hence, efficient
message exchange is supported by avoiding unnecessary payload by retrieving entire object
hierarchies.

### 4.4 Object interaction

#### 4.4.1 Introduction
The KNX Gateway is designed in accordance to the REST paradigm. Details about this
methodology are explained in clause 5. The present clause illustrates the transaction of the
three most common interactions with a KNX Gateway (i.e. read, write, invoke). Due to the
similarity of these interaction types with HTTP request types, the following paragraphs
demonstrate the transactions by means of HTTP calls.

Regarding the ability to read and write objects, it is important to differ between the interaction
at the KNX Web interface (interface 8 in Figure 2) and the interaction at the KNX Network
access (interface 7 in Figure 2). In the latter case, the flags readable and writable represent
the already configured accessibility of elements in the KNX Network for communication with
the KNX Gateway. These flags are set in the access method entities of the KNX Information
model (e.g. groupObject entities with tag/value-pairs for tags readable and writable). On the
other hand, OBIX objects provided at the KNX Web interface are always readable for Web
Clients. Therefore, the standard defines no readable attribute for OBIX objects [01]. If an
OBIX object correspond to an element in the KNX Network, and if this element is really
readable via the KNX Network access interface, is not relevant for the Web Client. It is task
of a KNX Gateway to provide the Web Clients with the requested data. For example, the
channel of a switching actuator can be requested via the KNX Web interface in order to get
its characteristics (e.g. name, description, or other child elements). However, if the readable
attribute of its associated group object is disabled, there is no real read request (i.e. KNX
Group Value Read) sent to the KNX Network. The attribute writable at the KNX Web
interface indicates that an OBIX object can be written by a Web Client. This does not
necessarily imply a KNX Group Value Write in the KNX Network. In fact, it is task of a KNX
Gateway to handle write transactions at the KNX Web interface. If an OBIX object is set to
writable (writable = true), depends on the implementation of the KNX Gateway. For example,
OBIX datapoint objects can be set to writable if their corresponding group object is also
writable. Another possibility is to set OBIX objects at the KNX Web interface to writable if the
flags communication and writable of a group object are set to true. Also access control
mechanisms at the KNX Gateway can influence the status of an OBIX object’s writable
attribute.

Savedate: Filename: page 32 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

#### 4.4.2 Read transaction
First, reading of elements is shown. An HTTP GET is sent to the KNX Gateway, and this call
contains the URI of the targeted OBIX object. On the one hand, the KNX Gateway can
translate this call to a KNX Group Value Read message and receives the answer from the
KNX Network. In this case, no internal state of the KNX elements (e.g. datapoints) is
necessary in the KNX Network representation of the KNX Gateway. On the other hand, the
KNX Gateway may contain the current state of the requested object and does not need to
read from the KNX Network. This stateful method requires a kind of polling of the KNX
Gateway and update messages from the KNX Network instead of an active Group Value
Read. Afterwards, the response is transformed and forwarded to the client. This procedure is
shown in Figure 8. If a requested value is unknown (e.g. the KNX Gateway does not have an
internal value and cannot read the datapoint value in the KNX Network), the OBIX attribute
_null should be used in order to indicate the unknown state of the value. This situation is_
illustrated in Figure 8.

In this figure and the following figures in clause 4.4.3 and Clause 4.4.4, the right hand side of
the diagram (i.e. the communication with the KNX Network) is out of scope of this
specification document. The left hand side, on the other hand, represents the communication
between Web Client and KNX Gateway via the KNX Web interface.

:Web Client :KNX Gateway :KNX Network

GET http://localhost:8080/installations/
demo/views/.../switch_channel/switch/

Group Value Read

Group Value Response

Response

Content:
```
     <bool name="switch" href="switch" val="false" null="true" writable="true" is="obix:Point">
      <enum name="encoding" href="encoding" val="off" null="true"
         writable="true" range="/enums/onoff"/>
     </bool>

```
**Figure 8 – Read transaction**

#### 4.4.3 Write transaction
Write calls are another type of transactions. Here, HTTP PUT is used to send the modified
object as content to a specific URI (i.e. an OBIX object). If this object is a writable KNX
datapoint, an appropriate KNX Group Value Write is sent to the KNX Network by the KNX
Gateway. This is only relevant for KNX Gateway manufacturers and not for Web Client
developers. Afterwards, the modified OBIX object is sent back to the calling client (see
Figure 9). In general, OBIX objects that are marked as writable in the KNX Web interface are
accepted during a write transaction by the KNX Gateway. Other objects will be ignored by
the KNX Gateway if they are in the content of a write transaction.

Savedate: Filename: page 33 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

:Web Client :KNX Gateway :KNX Network

PUT http://localhost:8080/installations/
demo/views/.../switch_channel/

Group Value Write(s)

Return modified object

Content:
```
            <obj name="switch_channel"
              href="/installations/demo/views/.../switch_channel/"
              is="/knx/DPST_1_001 /knx/PT_02 /knx/Datapoint"
              displayName="Switching value">
             <bool name="switch" href="switch" val="true" writable="true" is="obix:Point">
              <enum name="encoding" href="encoding" val="on" null="true"
                 writable="true" range="/enums/onoff"/>
             </bool>
            </obj>

```
**Figure 9 – Write transaction**

#### 4.4.4 Invoke transaction
HTTP POST forms the third common request type and corresponds to the OBIX INVOKE.
This type is used for OBIX operations. The content of a call is a parameter encoded as
complex OBIX object. The KNX Gateway invokes the requested operation that may
communicate with the KNX Network. Finally, the response of the operation is returned to the
client. This answer can contain an OBIX object in its content. The invoke process is
visualized in Figure 10.

:Web Client :KNX Gateway :KNX Network

POST http://localhost:8080/installations/
demo/views/…/dimming/increase/

Group Value Write(s)

Return output parameter

Content:
```
        <obj name="parameter" is="/knx/ParameterDimming">
          <int name="value" href="value" val="0" min="0" max="100" unit="/units/percent"/>
        </obj>

```
Content:
```
                    <obj is="obix:Nil" null="true"/>

```
**Figure 10 – Invoke transaction**

Savedate: Filename: page 34 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

## 5 KNX Gateway OBIX

### 5.1 Introduction
The KNX Gateway implementation on the basis of the OBIX standard in the version 1.1 is in
the focus of this clause [01].

As already mentioned in the corresponding KNX Web interface OBIX (see clause 4), URIs
are used to address resources like datapoints or devices to read and write information.
Security is rolled out to current state-of-the-art transport level security (e.g. HTTPS,
SSL/TLS, or DTLS). Furthermore, authorization mechanisms are not covered by the OBIX
standard specification, but are implementation specific. A KNX Gateway manufacturer has to
foresee security procedures and authorization mechanisms when implementing and
deploying KNX Gateway devices. It is important that a KNX Gateway manufacturer has to
implement its products in conformance with the OBIX standard including all mandatory
elements.

### 5.2 Object model
The OBIX standard provides a compact and concise object model for the creation of custom
OBIX objects. The root element of the flat model hierarchy is the type obj. Besides this type
several derived types for special purposes exist (integers, floats, references). Every object
can contain an arbitrary number of child objects. All information can be modelled as
instances of the object model’s types. Thus, in OBIX everything is an object. This concept
enables for consistent extensibility. Further details are listed in the OBIX specification [01].

An additional OBIX core library contains a set of standardized objects and services.
Examples are objects for units, enumeration ranges or weekdays. Moreover, OBIX offers
services like alarming, histories or watches. The provision of these services at runtime is left
to the KNX Gateway manufacturer. Depending on the resources of the KNX Gateway
device, some of the services may be supported in addition to the normal functionality
specified in the KNX Web interface. An integration of these advanced services (e.g.
alarming) in the KNX Information model to support all KNX Gateway technologies and
implementations is not intended due to the extra configuration data, which will be necessary
but not available during the integration process.

The set of OBIX objects is a pool located in the KNX Gateway implementation. Particular
objects can be addressed via their unique URIs (see clause 4.3). The retrieved objects are
encoded either textual (e.g. XML, JSON) or binary (e.g. EXI, CBOR). More details on the
information encoding and the message exchange can be found in clause 10.2 and Clause
10.3, respectively.

In OBIX, contracts can be utilized to define templates and rules for concrete objects. Hence,
contracts define new custom OBIX types. They define the syntax and the semantics for
these types to provide interoperability for information exchange. The concept is similar to
interfaces and type inheritance known from common object-oriented programming
languages.

Savedate: Filename: page 35 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

### 5.3 Representational State Transfer
The OBIX standard was designed around the REST paradigm from the very beginning. This
scheme uses a small set of verbs to access objects via their URIs. The information is
transferred using the chosen message protocol and encoding. BASs and datapoint-oriented
systems tend to fit better to REST-oriented WSs than to service-oriented SOAP WSs.
Features of REST are the resource-orientation and the statelessness. The key elements are
resources (here OBIX objects) while activities are not explicitly modelled. Every request is
self-contained, and the resources are accessed through a uniform interface. Resources
possess unique and descriptive names. The set of REST verbs is very similar to the main
HTTP methods. Table 3 summarizes this set of REST methods.

_Read and write methods are equivalent to KNX Group Value Read and KNX Group Value_
Write, respectively. On the other hand, invoke and delete have to be translated by the KNX
Gateway to execute the desired functionality in the KNX Network. For example, a dimming
operation receives a relative dimming value from a Web Client. In the KNX Gateway, this
operation call is transformed to a write request for a datapoint in the KNX Network.

**Table 3 – REST methods**

**REST method** **HTTP method** **Target**

**Read** GET Any accessible object

**Write** PUT Any writable object

**Invoke** POST Any operation (OBIX type op)

**Delete** DELETE Any writable object

## 6 KNX Web interface OPC UA

### 6.1 Introduction into OPC UA
Contrary to classical OPC, which only provides possibilities to represent plain process data,
OPC Unified Architecture supports mechanisms to enrich data with specific semantics. For
example, in addition to the measurement value of a sensor an engineering unit and
information about the sensor status can be modelled, too. This form of meta data can be
interpreted by clients and used by applications to provide additional information related to
process data. OPC UA defines the following rules regarding information modelling:

- Information is modelled in form of nodes carrying attributes and references linking the
nodes.

- Type hierarchies and inheritance are used as object-oriented principles.

- There is no distinction between the exposure of data and type information. The latter is
needed by clients to interpret the data that is accessed.

- Information is modelled in form of a network of full-meshed nodes. There is no unique
way to model information. Each use case requires a specific manner of modelling.

- The base information model as part of the specification is extensible with regard to
defining subtypes of nodes and references between them.

- Information models only exist on OPC UA servers. Clients gain their knowledge about
how data is modelled by fetching that information from the server.

Savedate: Filename: page 36 of 74
2017 01 31 AN175 v02 web services DP docx

|REST method|HTTP method|Target|
|---|---|---|
|**Read**|GET|Any accessible object|
|**Write**|PUT|Any writable object|
|**Invoke**|POST|Any operation (OBIX type op)|
|**Delete**|DELETE|Any writable object|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

The address space contains definitions for basic data types, references, for creating variable
types, object types, reference types, methods and further information entities. The basic idea
beneath the address space model is the concept of nodes and references. Nodes in OPC
UA consist of attributes which give a description of the node and references creating links
between nodes. Some attributes are inherent in all node classes, some are specific.
Examples of common attributes are the NodeId for uniquely identifying the node in the
address space, the BrowseName which identifies a node when browsing through the
address space, and the DisplayName attribute containing the name of the node to be
displayed in a user interface. A Description attribute provides additional, short information
about the node. The following built-in instance definition node classes are defined in OPC
UA:

- Variable node class: variables must always belong to another node (e.g., an object).
The Value attribute holds a physical value of a technical process (if it is linked by a
HasComponent reference) or provides meta information, i.e. characteristics like an
engineering unit for the superior node (when referenced by HasProperty). In this case, a
variable is called Property. Properties can neither be of a complex type nor have any
subtypes.


Variable



- Object node class: objects consist of variables, methods, and properties. They are used
to model devices or components of the technical process under control, like a
temperature controller or a motor controller.


ObjectType:

Name



- Method node class: methods are always referenced to an object. They represent
functions that can be called by an OPC UA client (e.g., start and stop routines of a motor
controller object).

Method

- View node class: in order to reduce the scope of a client accessing an information
model on a server, views can be used to make only parts of it visible. Depending on the
use case, only the relevant part of the whole model can be made visible to the client.

View

The built-in type definition node classes are the following.

- DataType node class: defines the data type of the value attribute of a variable or
variable type. DataTypes are organized in a type hierarchy, with the abstract
BaseDataType on the top. Typical built-in DataTypes are Boolean, String or Number.
Subtypes of the abstract DataType Number are Integer, Float and Double.

DataType

Savedate: Filename: page 37 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

- VariableType node class: used to define the type of a variable. There are simple
VariableTypes which only define the semantic and the data type to be used for the value
attribute, where complex variable types hold a structure of nodes which enables
structuring the variable type into sub values.

VariableType

- ObjectType node class: specifies the type of an object. ObjectTypes can also be
complex or simple where the difference is whether they expose a structure of other
nodes beneath them or not. Complex ones can hold other objects, variables, and
methods. This allows the engineer to create models of technical devices that reflect the
entirety of the relevant device properties.

_ObjectType_

- ReferenceType node class: used to specify reference types. References in OPC UA
derived from reference types are applied to create a link between two nodes. There are
both abstract ReferenceTypes and concrete ones. The idea is the same as for
DataTypes, namely to aggregate common attributes of sub types within an abstract
super type and generate a more structured type hierarchy this way. References can
either be symmetric or asymmetric, depending on whether they have the same semantic
in both directions or not. The Symmetric attribute of the ReferenceType indicates this
property.

_ReferenceType_

When instantiated, the ReferenceTypes used in this specification have the following
notation:


HasProperty


HasSubtype


HasComponent Organizes

Interoperability between devices of different vendors requires a uniform representation of
data. In OPC UA, the idea is to define information models (i.e., data representations) for
different application domains. Vendors can use these models to expose data of their
applications or they can even extend them by their own domain-specific knowledge. Clients
do not have to distinguish between different vendors for their functionalities since they all
have the same base model exposing data in common. Displaying current process data in a
simple, generic user interface, access to historical data or event-driven update of data
exposed or signalization belong to these basic functionalities. If a server provides an
information model with functionalities extending these basic ones, clients are able to
interpret this more complex data by gathering the additional semantic from the information
model. This way, advanced visualization, more sophisticated computing or automated
integration into other systems can be done with data provided by an OPC UA server.

The Base OPC UA Information Model is founded on the rules of the meta model. The
structure of this part is shown in detail in Figure 11. Here the additional specifications known
from the classical OPC standard like Alarms & Conditions (AC), Historical Access (HA),
Programs (Prog) and new, automation specific Data Access (DA) features are included.

Savedate: Filename: page 38 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Standards published by other organisations use these OPC UA information models and build
their own specific ones on top of it. Also the proposed model for KNX is located in this area.
The uppermost layer of information models is formed by vendor specific extensions
designed for particular applications using the OPC UA Base, the OPC UA Information
Models or other OPC UA based models.

Vendor specific Extensions

Specification of Information Models IEC, EDDL, FDT, PLCopen

of other Organisations

DA AC HA Prog OPC UA Information Model


OPC UA Base


OPC UA Basis


**Figure 11 - OPC UA layered architecture [05]**

OPC UA defines a set of services to exchange data between servers and clients. Contrary to
the classic OPC specification, services in OPC UA are defined transport protocol and
platform independent which requires an abstract service description [06]. OPC UA gets
along with a very generic and reduced set of services. This is possible since information is
provided by the server address space. There is no need for specialised methods for
accessing different types of data or information.

The Discovery service set enables an OPC UA client to receive a list of online OPC UA
servers from a discovery server. To find the node holding the desired data in the information
model on the server, the client can directly access it using the NodeId or it must browse to
the target node starting at a dedicated node called Entry Point. The Browse service is a
representative of the View service set. Following the outgoing references, the client reaches
the destination node holding the desired data. This is done in a recursive way by calling the
Browse service for each node on this path. It returns an array of references originating in the
node and pointing to a target node. Filtering mechanisms help to reduce the amount of data
returned. When the requested node is reached, it can be identified by its NodeId.

The Attribute Service Set provides access to the attributes of nodes which are uniquely
identified by the AttributeId and the NodeId. These are passed to the service methods as
parameters. The most essential services are the Read and Write service. Depending on
what kind of access is desired, one of these is called by the client. This is the most common
use case to access data. Attributes of an array-type can be accessed element-wise by
passing an index argument to the service method. But it is also possible to read or write the
entire set or a range of elements of this attribute type as a composite.

Savedate: Filename: page 39 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

### 6.2 Introductory example
Figure 12 shows an OPC UA model instance of a demo KNX installation. The entry point for
an OPC UA client browsing this instance on a KNX OPC UA gateway is the Objects Folder
object. It organizes (using Organizes references) a number of orange colored ViewType
objects, namely a Datapoints view, a BuildingsTopology view, and a Lighting view. On the
other hand – as required by the OPC UA for Devices (OPC UA DI) specification [07] – the
_DeviceSet object exposes the device view of the installation. Like defined in the KNX Tag_
Model, these views enable different perspectives on the OPC UA address space. One view
object can organize further view objects, i.e., they can be nested like in this example shown
for the BuildingTopology view.

KNX devices are modelled as complex objects exposing static properties as well as runtime
datapoints. A well-suited modelling pattern for this purpose is the device model defined in
the OPC UA companion specification OPC UA for Devices. The central, green-colored
element in Figure 12 is a model instance of a KNX switching actuator device
(KNXSwitchingActuator object) according to OPC UA DI. Static attributes in form of OPC UA
Properties are aligned on the left side of the graph. They carry information about the device’s
type designation, the serial number, the vendor, various revision counters and the device’s
individual KNX address. The nodes on the right side of the KNXSwitchingActuator instance
represent the datapoints of the device which shall be exposed by the KNX OPC UA
gateway. The ParameterSet object references two TwoStateDiscreteType variables which
are defined in part 8 of the OPC UA specification (Data Access) [08]. This complex
VariableType includes two properties (TrueState, FalseState) defining the semantic of each
binary state which is in case of the actual datapoints “On” and “Off”. The KNXDatapointType
property informs about the DPT of the underlying device’s datapoint. Additionally, the two
_FunctionalGroupType objects OutputDatapoints and InputDatapoints assign information_
about the data flow direction to the datapoint variables. This concept is also taken from the
OPC UA DI model.

When calling the Browse service on the Objects folder (referenced by the Root folder), it
returns a list of the references originating in the current node and pointing to the connected
nodes. In this example, two Organizes references would be returned pointing to the
_BaseObjectType object DeviceSet and the InstallationType object DemoInstallation. When_
calling the Browse service again on the DemoInstallation object, it returns the references to
the Datapoints, BuildingTopology and Lighting objects. For accessing distinct attributes of a
Node, the Read and Write services are available. Typical attributes of interest are the
_DisplayName, the Description or the Value attribute of a variable. If for example an OPC UA_
client wants to alter the value of the SwitchingValue datapoint it calls the Write service with
the desired new value as an argument on the value attribute of the SwitchingValue variable.

Savedate: Filename: page 40 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Root

Organizes FolderType:Objects Organizes DemoInstallationInstallationType: Organizes ViewType:Lighting

ViewType:
BuildingTopology

Organizes BaseObjectType:DeviceSet Organizes

Ground FloorViewType: Organizes

Organizes

ViewType:

Office

Organizes DatapointsViewType: ViewType:

Meeting Room

Organizes

HasFunctionality

KNXDeviceType: KNXDeviceType: KNXFunctionalBlockType:
KNXTemperatureController KNXSwitchingActuator HasFunctionality LightActuatorBlock

PropertyType:SerialNumber BaseObjectType: PropertyType:SerialNumber BaseObjectType: BaseObjectType:

ParameterSet ParameterSet ParameterSet

AnalogItemType: TwoStateDiscreteType:

PropertyType:RevisionCounter TemperatureValue PropertyType:RevisionCounter SwitchingValue

PropertyType:

PropertyType: TrueState

PropertyType:Manufacturer EngineeringUnits PropertyType:Manufacturer

PropertyType:

PropertyType: FalseState

PropertyType:Model EURange PropertyType:Model PropertyType:

KNXDatapointType

PropertyType:

PropertyType:DeviceManual KNXDatapointType PropertyType:DeviceManual TwoStateDiscreteType:

StoredState

FunctionalGroupType:OutputDatapoints Organizes PropertyType:

PropertyType:DeviceRevision PropertyType:DeviceRevision TrueState

PropertyType:

FalseState

PropertyType:SoftwareRevision PropertyType:SoftwareRevision

PropertyType:
KNXDatapointType

PropertyType:HardwareRevision PropertyType:HardwareRevision

FunctionalGroupType:OutputDatapoints Organizes

PropertyType:IndividualAddress PropertyType:IndividualAddress

FunctionalGroupType:InputDatapoints Organizes

**Figure 12 - Exemplary KNX OPC UA Model Instance**

### 6.3 General type mapping
The aim of this section is to define rules for an automated transformation of the KNX tag
vocabularies’ semantic to OPC UA types and references. Hereby, a KNX OPC UA model is
defined which can be instantiated by a respective gateway dependent on the underlying
KNX installation. Since the OPC UA base information model and the companion
specifications resting upon it already provide a complex type system and an advanced
modelling concept, a mapping resting on tag level of the KNX tag vocabulary is not
applicable. Instead, the mapping rules are defined on basis of Entities depending on their
marker tags.

   - All Entities used for structuring purposes become objects of a subtype of the OPC
UA Folder type like InstallationType, ViewType. The type hierarchy is shown in
Figure 13. Currently, the following Tags identifying Entities for structuring purposes
are defined: buildingPart, buildingPartFloor, buildingPartRoom installation, view.

   - Relations between Folder subtyped objects are Organizes reference types or
individually defined subtypes thereof in case it increases clarity. Examples for such
ReferenceTypes are HasFunctionality or HasDatapoint which are named according
to their semantics.

Savedate: Filename: page 41 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

   - _device-tagged Entities are transformed to a new defined KNXDeviceType (cf._
Clause 6.4) which follows the OPC UA DI specification [07].

   - _datapoint-tagged Entities are represented by VariableTypes from OPC UA Part 8:_
Data Access [08]. The mapping rules are defined in clause 6.5.

   - Entities describing functionalities are mapped to the KNXFunctionalBlockType
defined in clause 6.6. Currently, the following Tags identifying Entities for this
purpose are defined: functionalBlock, functionalBlockType, functionality.

The rules for modelling OPC UA types are summarized in the following Table 4:

**Table 4 - Entity mapping**

**KNX WS Entity Category** **OPC UA Type**

Entities for structuring the address space Subtypes of FolderType ObjectType

Ref Tags _HasComponent ReferenceType for_
references to datapoints,
_HasProperty ReferenceType for references_
to Properties,
_Organizes ReferenceType for references to_
_FolderType instances or subtypes thereof_

device Marker Entities Subtypes of KNXDeviceType ObjectType

datapoint marker Tags _DataItemType VariableType or subtypes_

Entities defining functionalities Subtypes of KNXFunctionalBlockType
ObjectType

Primitive Entities (int, string, bool…) PropertyType VariableType for static
information

_FolderType_

_InstallationType_

_ViewType_

**Figure 13 - ObjectTypes for structuring the address space**

In OPC UA, the Base NodeClass, which is the superclass of all other NodeClasses (i.e.,
ObjectType, VariableType, ReferenceType NodeClasses), defines a number of attributes.
These attributes are inherited to every sub-NodeClass. This section defines the assignment
of the Base NodeClass attributes according to the Tag Model.

   - The NodeId is a composite attribute consisting of a namespaceIndex, a server-wide
unique identifier and an identifierType field which declares the datatype of the
identifier. The namespaceIndex points to the Namespace array of the local OPC UA
server where different namespace URIs are saved. For a detailed description of the
NodeId, please confer to [09].

Savedate: Filename: page 42 of 74
2017 01 31 AN175 v02 web services DP docx

|KNX WS Entity Category|OPC UA Type|
|---|---|
|Entities for structuring the address space|Subtypes of_FolderType_ ObjectType|
|Ref Tags|_HasComponent_  ReferenceType for<br>references to datapoints,<br>_HasProperty_ ReferenceType for references<br>to Properties,<br>_Organizes_ ReferenceType for references to<br>_FolderType_ instances or subtypes thereof|
|device Marker Entities|Subtypes of_KNXDeviceType_ ObjectType|
|datapoint marker Tags|_DataItemType_ VariableType or subtypes|
|Entities defining functionalities|Subtypes of_KNXFunctionalBlockType_ <br>ObjectType|
|Primitive Entities (int, string, bool…)|PropertyType VariableType for static<br>information|

|FolderType|Col2|
|---|---|
|_FolderType_|_FolderType_|
|_FolderType_||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

   - The BrowseName is an attribute used by the Browse service. Its value shall be set
to the identifier Tag of the Entity.

   - The DisplayName contains localized Text which is displayed by OPC UA clients
when navigating to a Node. The name Tag of the Entity is mapped to this attribute.

   - Optionally, the description attribute can be set to the description Tag value.

**Table 5 - General Node attribute mapping**
**Entity Tag** **OPC UA Node attribute**

KNX Namespace URI index + unique NodeId
identifier

NodeClass

As defined in Table 4

identifier Tag BrowseName

name Tag DisplayName

description Tag Description

As a consequence of the NodeClass type hierarchy, these mapping rules also apply by
inheritance to every NodeClass of the Base NodeClass, provided that the required
information is available. Since each NodeClass defines additional, specific attributes, the
assignment of them must be defined separately. This is done in the following clauses, if
applicable.

### 6.4 Device Type mapping
The type definition of the KNXDeviceType used for representing device Entities is shown in
Figure 14. It extends the DeviceType defined in OPC UA DI [07] with an additional Property
_IndividualAddress assigned with the individual address of the KNX device. Provided that this_
information is available, the properties included in this device model (e.g., SerialNumber,
_RevisionCounter, Manufacturer) are set the respective values. HasComponent_
ReferenceTypes are used to link a ParameterSet or MethodSet Object (not shown in
Figure 14) to the KNXDeviceType Object which in turn hold the necessary datapoint
variables (DataItemType VariableTypes, cf. to Clause 6.5) or methods. KNXDatapointType
Properties referenced by the datapoint variables indicate the KNX DPT name and ID (e.g.,
_1.001 DPT_Switch). Two FunctionalGroupType Objects InputDatapoints and_
_OutputDatapoints are used to group the datapoint variables by their I/O-direction using_
_Organizes ReferenceTypes. Additional FunctionalGroupType Objects can be added if further_
classification of datapoint variables is required.

Savedate: Filename: page 43 of 74
2017 01 31 AN175 v02 web services DP docx

|Entity Tag|OPC UA Node attribute|
|---|---|
|KNX Namespace URI index + unique<br>identifier<br>As defined in Table 4|NodeId<br>NodeClass|
|identifier Tag|BrowseName|
|name Tag|DisplayName|
|description Tag|Description|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

_DeviceType_

_KNXDeviceType_

PropertyType:SerialNumber BaseObjectType:

ParameterSet

PropertyType:RevisionCounter DataItemType:

<VariabeName>

PropertyType:Manufacturer PropertyType:

KNXDatapointType

PropertyType:Model DataItemType:

<VariabeName>

PropertyType:DeviceManual PropertyType:

KNXDatapointType

PropertyType:DeviceRevision

FunctionalGroupType:

Organizes
OutputDatapoints

PropertyType:SoftwareRevision

FunctionalGroupType:

InputDatapoints Organizes

PropertyType:HardwareRevision

PropertyType:IndividualAddress

**Figure 14 - Definition of KNXDeviceType**

### 6.5 Datapoint Type mapping
Whenever possible, subtypes of the DataItemType VariableTypes defined in OPC UA Part 8

- Data Access [08] shall be used for modelling KNX datapoints. Figure 15 shows the
hierarchy of the most commonly used types. Every VariableType in OPC UA has assigned a
distinct DataType which can be either primitive or complex. The DataItem VariableType and
its subtypes have additional properties like summarized in the following:

   - _DataItemType: optional definition string and precision in the temporal or value_
dimension

   - _AnalogItemType: range information, engineering unit (instance example shown in_
Figure 16)

   - _TwoStateDiscreteItemType and MultiState(Value)DiscreteType: encoding of each_
state value

   - _ArrayItemType: semantics for describing series of data and multi-dimensional_
arrays

Savedate: Filename: page 44 of 74
2017 01 31 AN175 v02 web services DP docx


_DeviceType_


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**Figure 15 - DataItem VariableType hierarchy [08]**

The mapping of the datapoint Entities depending on the value markers is defined in the
following:

   - _ValueReal datapoint type Entities become an AnalogItemType VariableType with_
DataType Float or Double. The EURange property is set to the range bound values
of the DPT. The EngineeringUnits property is set to the Unit of the DPT.

AnalogItemType:

AnalogItemType:

CurrentIntensityValue

CurrentIntensityValue

Attributes
Value=5500
DataType=Int16
AccessLevel=CurrentRead

PropertyType:
EngineeringUnits

Value=“mA“

PropertyType:

EURange

Value={0, 65535}

**Figure 16 - AnalogItemType Instance**

   - _ValueInt datapoint type Entities become an AnalogItemType variable with a subtype_
of DataType Integer (e.g., (U)Int16-64) The EURange property is set range values
of the DPT. The EngineeringUnits property is set to the Unit of the DPT.

   - _ValueString datapoint type Entities become a DataItemType variable with DataType_
_String._

   - _ValueBit datapoint type Entities become a TwoStateDiscreteItemType variable. The_
_TrueState and the FalseState properties are set according to the DPTs encoding._

Savedate: Filename: page 45 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

TwoStateDiscreteType:

TwoStateDiscreteType:

Output1, Switching

Output1, Switching

Attributes
Value=True
DataType=Boolean
AccessLevel=CurrentWrite

PropertyType:

TrueState

Value=“ON“

PropertyType:

FalseState

Value=“OFF“

**Figure 17 - TwoStateDiscreteType Instance**

   - _ValueEnum datapoint type Entities become a MultiStateDiscreteItemType variable._
The EnumStrings[] array of the VariableType is filled according to the DPT’s
encoding.

   - _ValueFunction datapoint type Entities do not map to a DataItemType variable but to_
an OPC UA method. The InputArguments[] and OutputArguments[] properties of the
method are set according to the DPTs involved in the function call.

   - Arrays can be exposed by an OPC UA server similarly than scalars but with the
_ValueRank attribute 1 (OneDimension ) or 0 (OneOrMoreDimension). The_
_ArrayDimensions[] attribute reflects the array length of each dimension. For bit_
fields, it can also be convenient to expose every single bit as a
_TwoStateDiscreteType._

   - A modelling guideline for mapping complex KNX DPTs (like, e.g., 201.100
_DPT_HVACMode_Z or 216.100 DPT_SpecHeatProd) to OPC UA is to treat each_
field of the DPT as a separate variable and perform the mapping as defined
previously.

The following Table 6 summarizes the assignment of the VariableType attributes.

**Table 6 - VariableType attribute mapping**

**Tag Model** **OPC UA VariableType attribute**

Default value Value

DPT data field type DataType

Depending on the DPT data field dimensions ValueRank

If array type, the length of each array dimension ArrayDimensions[]

Savedate: Filename: page 46 of 74
2017 01 31 AN175 v02 web services DP docx

|Tag Model|OPC UA VariableType attribute|
|---|---|
|Default value|Value|
|DPT data field type|DataType|
|Depending on the DPT data field dimensions|ValueRank|
|If array type, the length of each array dimension|ArrayDimensions[]|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

### 6.6 Functional Block Type mapping
For modelling the Entities tagged with functionalBlock, functionalBlockType and their
attached parameterType markers, again the OPC UA DI model [07] is applied. To this aim, a
_KNXFunctionalBlockType (shown in Figure 18) is defined in the following which is a subtype_
of the BlockType defined in OPC UA DI.

_BlockType_

_KNXFunctionalBlockType_

BaseObjectType:

ParameterSet

DataItemType:
<VariabeName>

PropertyType:
KNXParameterType

DataItemType:
<VariabeName>

PropertyType:
KNXParameterType

FunctionalGroupType:

Organizes
OutputParameters

FunctionalGroupType:

Organizes
InputParameters

**Figure 18 - KNXFunctionalBlockType Definition**

Analogously to the KNXDeviceType, a KNXFunctionalBlockType consists of parameters with
an I/O direction indicated by Organizes ReferenceTypes originating in the InputParameters
and OutputParameters objects. The parameter variables are grouped by the ParameterSet
object. The KNXDatapointType Property informs about the KNX DPT.

### 6.7 Addressing
The structure in the address space a client needs to follow to be able to reach a distinct
node such that it can access data on an OPC UA server is defined in the OPC UA
specification. This is structure is described more detailed in clause 7.2. Figure 19 shows the
scheme how instances of this KNX OPC information model must be organized on a KNX
OPC UA server.

Savedate: Filename: page 47 of 74
2017 01 31 AN175 v02 web services DP docx

|BlockType<br>KNXFunctionalBlockType<br>BaseObjectType:<br>ParameterSet<br>DataItemType:<br><VariabeName><br>PropertyType:<br>KNXParameterType<br>DataItemType:<br><VariabeName><br>PropertyType:<br>KNXParameterType<br>FunctionalGroupType:<br>Organizes<br>OutputParameters<br>FunctionalGroupType:<br>Organizes<br>InputParameters|Col2|Col3|
|---|---|---|
|_KNXFunctionalBlockType_<br>_BlockType_<br>DataItemType:<br><VariabeName><br>BaseObjectType:<br>ParameterSet<br>FunctionalGroupType:<br>OutputParameters<br>Organizes<br>FunctionalGroupType:<br>InputParameters<br>Organizes<br>PropertyType:<br>KNXParameterType<br>DataItemType:<br><VariabeName><br>PropertyType:<br>KNXParameterType|FunctionalGroupType:<br>InputParameters|FunctionalGroupType:<br>InputParameters|
|_KNXFunctionalBlockType_<br>_BlockType_<br>DataItemType:<br><VariabeName><br>BaseObjectType:<br>ParameterSet<br>FunctionalGroupType:<br>OutputParameters<br>Organizes<br>FunctionalGroupType:<br>InputParameters<br>Organizes<br>PropertyType:<br>KNXParameterType<br>DataItemType:<br><VariabeName><br>PropertyType:<br>KNXParameterType|FunctionalGroupType:<br>InputParameters|Organizes|


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

KNX OPC UA Gateway

1

BaseObjectType:

Objects

0...1

0..*

InstallationType: BaseObjectType:

<Installation> DeviceSet

0..*

ViewType:

<View>

0..*

0..*

0..* 0..* 0..*

DataItem: KNXFunctional KNXDeviceType:
<Datapoint> BlockType: <Device>

<Functionality>

0..* 0..*

0..*

**Figure 19 - Addressing Scheme**

### 6.8 Interaction
A number of steps are necessary between an OPC UA client and a server before datapoints
can be accessed. OPC UA provides discovery mechanisms [10] allowing clients to find OPC
UA servers in a network. If the ServerURI is determined this way or manually given, the
client needs to know the available Endpoints of a server, i.e., the allowed security
configurations to establish a Session over a SecureChannel. After the Session is
established, the client sends a Browse service request [06] to the server which results in the
references to the child objects (i.e., their NodeIds) of the Root Node. Repeating this
procedure recursively, the address space can be explored.

Services from the AttributeServiceSet (Read, HistoryRead, Write) require the NodeId of the
Node to access, which is determined by the Browse service. The attribute to access (e.g.,
BrowseName, Description, Value) is passed to the attribute services in form of the
AttributeId.

#### 6.8.1 Read transaction
An OPC UA client that wants to read the current value of Node attribute issues a Read
service call to the KNX OPC UA Gateway. The gateway internally determines if the attribute
to read is a KNX datapoint or statically defined value in the OPC UA server’s address space
(e.g., a DisplayName or a Description). If the read access regards a KNX datapoint, the
gateway resolves the request to a KNX group address and puts a Group Value Read to the
KNX network. After the KNX network has responded, the gateway can return the OPC UA
Read response containing the DataValue and additional diagnostic information to the client.
This is shown in Figure 20.

Savedate: Filename: page 48 of 74
2017 01 31 AN175 v02 web services DP docx


KNX OPC UA Gateway


BaseObjectType:

Objects


DataItem:
<Datapoint>


ViewType:

<View>


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

:OPC UA Client :KNX OPC UA Gateway :KNX Network

Read(nodesToReturn[],...)

Group Value Read(s)

Group Value Response(s)

Response

Content:
```
            results[],
            diagnosticInfos[],
            ...

```
**Figure 20 - Read transaction**

#### 6.8.2 Write transaction
Write access to a Node attribute works analogously to a read access. The KNX OPC UA
Gateway returns the success of the write access in form of a statusCode.

:OPC UA Client :KNX OPC UA Gateway :KNX Network

Write(nodesToWrite[]…)

Group Value Write(s)

Response

Content:
```
            results[],
            DiagnosticInfos[],
            ...

```
**Figure 21 - Write transaction**

#### 6.8.3 Method calls
A method call of a client to a KNX OPC UA Gateway (shown in Figure 22) follows a similar
procedure than a write access. The call request contains the MethodId and the NodeId of its
parent Object as well as the input arguments. Depending if the call regards a datapoint from
the KNX network, the gateway issues a Group Value Write to the network. After that, it
responds to the calling client with the results of the call including statusCodes,
_outputArguments and diagnosticInfos._

Savedate: Filename: page 49 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

:OPC UA Client :KNX OPC UA Gateway :KNX Network

Call(methodsToCall[], inputArguments[]...)

Group Value Write(s)

Response

Content:
```
           results[],
           diagnosticInfos[],
           ...

```
**Figure 22 – Method call**

## 7  KNX Gateway OPC UA

### 7.1 Introduction
This clause consists of the specific requirements for the KNX Gateway implemented on the
basis of OPC UA.

A KNX OPC UA Gateway needs to provide the capabilities to expose the concepts defined
in the previous Clause to one or more OPC UA clients. Therefore it must on the one hand
implement the address space consisting of all necessary Nodes and References to
represent the required information. On the other hand a KNX OPC UA Gateway must
provide services to establish a session to a client and to perform the defined data
transactions (cf. [06]). A comprehensive security model including device and user
authentication, authorization and data confidentiality are mandatory in OPC UA [11].

### 7.2 Object model
The address space of an OPC UA Server follows a well-defined structure. Figure 23 shows
this structure starting from the entry point Root. The Types folder includes subfolders for the
standard ObjectTypes, VariableTypes, ReferenceTypes and DataTypes defined by the OPC
UA base information model [12]. Also the types defined in the upper levels of the OPC UA
model hierarchy (cf. Figure 11) like companion specifications (e.g., OPC UA DI) and vendor
or application specific types like defined in this document are exposed by the Types folder.
The Objects folder consists of instances of the ObjectTypes. The Server object exists by
default and informs about parameters of the OPC UA server. Instances representing a KNX
installation like shown in Figure 12 are also exposed by the Objects folder. The Views folder
can provide different scopes on the servers’ address space, which is currently not applied in
this document.

Savedate: Filename: page 50 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**Figure 23 Standard AddressSpace Structure [12]**

## 8 KNX Web interface BACnet/WS

### 8.1 Introduction
Furthermore, the KNX Gateway can be based on BACnet/WS. The following clauses define
the requirements for the KNX Web interface according to the BACnet/WS specification. The
specifics of the Web interface that is provided by a KNX Gateway implemented in
accordance to the BACnet/WS standard are described. Similar to the KNX Web interface
OBIX (see clause 4), this description contains

   - the information presentation of the KNX Network,

   - details for addressing KNX Network objects via the KNX Web interface, and

   - specifics for common interaction scenarios.

The subsequently described mechanisms, rules, and guidelines have to be implemented by
KNX Gateway manufacturers in order to guarantee a standardized way of interaction
between the KNX Gateway and the remote Web Clients. On the other hand, internal
characteristics of the KNX Gateway are out of scope of this specification.

### 8.2 Information presentation

#### 8.2.1 Introduction
A KNX Gateway providing the KNX Web interface BACnet/WS has to be implemented in
accordance with the particular RESTful BACnet/WS specification [04]. The object model of
BACnet/WS enables the modeling of the elements of the KNX Information model for the
KNX Web interface. Main element is the data item. Each data item has a base type. The set
of available base types includes primitive types to hold values, such as integers, strings, or
real values, and constructed types such as arrays, lists or objects. A set of metadata is
provided to describe the data items in more detail. The BACnet/WS specification is based on
the REST paradigm. Resources are uniquely identified by URIs and a small set of verbs is
present for interaction with the resources. Besides the base types, which are defined in the
object model, custom types can be defined in the so-called definition context. The custom
types can be defined and instantiated as extensions of any of the BACnet/WS base types.
The definitions are available via the URI {prefix}/.defs, which is a standardized data
item. The modelled arrangements of data, i.e. the information about the modelled KNX
Network, are located in {prefix}/.knx. More details about BACnet/WS can be found in
clause 9.

Savedate: Filename: page 51 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

In this clause, an introductory example is used to explain the utilization of a BACnet/WS
interface. The KNX Network Demo contains a temperature controller with a datapoint
representing the actual temperature value (Temperature value). This datapoint is mapped to
a BACnet/WS Object as an instance of a temperature value type that represents KNX
Datapoint Type 9.001. A Web Client wants to read the value of the temperature datapoint of
the mentioned device. For detecting available KNX Networks within the KNX Gateway, an
HTTP GET call with the Uniform Resource Identifier (URI)
```
http://localhost/.knx/installations?depth=1 is sent under the assumption that

```
the BACnet/WS gateway is available via http://localhost and default port 80. The
depth parameter limits the depth of the response hierarchy. The response of the KNX
Gateway consists of a Collection of available installations in form of BACnet/WS
```
Objects. The installation objects are truncated as the depth is set to 1. After identifying the

```
desired network, the Web Client sends a read request containing the unique address (URI)
of the desired device within a particular view to the BACnet/WS-based KNX Gateway. In this
example, the device is located in a view named Devices. The request is sent via an HTTP
```
GET call, which can be seen in Listing 12. URIs are formed on the basis of the object names,

```
and URI encoding is defined in RFC 3986 [03]. The following examples are represented in
XML and JSON encoding. For JSON encodings, cat-all is used for the metadata
parameter in this document, which is done for better readability. As cat-all would make
responses much more verbose than needed, the format shown in Listing 15 would be used
in actual practice.
```
  GET
  http://localhost/.knx/installations/demo/views/view_devices/devices/tempera
  ture_controller?depth=2

```
**Listing 12 – Read request for device**

The KNX Gateway returns the BACnet/WS object of the temperature controller (see
Listing 13 and Listing 14). The name of an object is unique among its siblings. The device
has an order number, a serial number, an individual address, and an object that gives
information about the device manufacturer. As the depth parameter is set to 2, two hierarchy
levels are returned including, for example, the child elements of the device manufacturer
object. Finally, there is a collection of associated datapoints containing the desired datapoint
for the actual temperature value. The datapoints Collection is defined to have a member type
of org.knx.datapoint. In this example, the declared type of the datapoint is
_org.knx.DPST_9_001 which is a valid extension of the type org.knx.datapoint. The type_
definition for org.knx.device can be seen in Listing 21. As BACnet/WS responses do not
include information that is equal to the defined values of the custom types, this information is
also not shown in the BACnet/WS examples of this document.

Savedate: Filename: page 52 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**
```
  <Object name="temperature_controller" type="org.knx.Device"
  displayName="Temperature controller">
   <Integer name="individualAddress" value="43"/>
   <String name="orderNumber" value="1234567"/>
   <String name="serialNumber" value="SN33221133"/>
   <Object name="manufacturer" displayName="Manufacturer GmbH">
    <String name="geoAddress" value="Strasse 17, 51413 Musterort"/>
   </Object>
   <Collection name="datapoints">
    <Object name="temperature_value" displayName="Temperature value" 
        type="org.knx.DPST_9_001" truncated="true"/>
   </Collection>
  </Object>

```
**Listing 13 – Response of the device object (XML)**
```
  {
   "$base":"Object",
   "$name":"temperature_controller",
   "$type":"org.knx.Device",
   "$displayName":"Temperature controller",
   "individualAddress": {
    "$base":"Integer",
    "$value":"43"
   },
   "orderNumber": {
    "$base":"String",
    "$value":"1234567"
   },
   "serialNumber": {
    "$base":"String",
    "$value":"SN33221133"
   },
   "manufacturer": {
    "$base":"Object",
    "$displayName":"Manufacturer GmbH",
    "geoAddress": {
     "$base":"String",
     "$value":"Strasse 17, 51413 Musterort"
    },
   },
   "datapoints": {
    "$base":"Collection",
    "temperature_value": {
     "$base":"Object",
     "$displayName":"Temperature value",
     "$type":"org.knx.DPST_9_001",
     "$truncated":true
    }
   }
  }

```
Savedate: Filename: page 53 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**
```
  Listing 14 – Response of the device object (JSON)
  {
   "$name":"temperature_controller",
   "$type":"org.knx.Device",
   "$displayName":"Temperature controller",
   "individualAddress": 43,
   "orderNumber":"1234567",
   "serialNumber":"SN33221133",
   "manufacturer": {
    "$displayName":"Manufacturer GmbH",
    "geoAddress":"Strasse 17, 51413 Musterort"
   },
   "datapoints": {
    "temperature_value": {
     "$displayName":"Temperature value",
     "$type":"org.knx.DPST_9_001",
     "$truncated":true
    }
   }
  }

```
**Listing 15 – Short response of the device object (JSON)**

For reading the value of the temperature datapoint, the Web Client can access the datapoint
via an HTTP GET call that can be seen in Listing 16.
```
  GET
  http://localhost/.knx/installations/demo/views/view_devices/.../temperature
  _controller/datapoints/temperature_value

```
**Listing 16 – Read request for datapoint**

The KNX Gateway fetches the temperature information from the corresponding datapoint in
the KNX Network, and the resulting BACnet/WS object is sent back to the Web Client, which
is shown in Listing 17 and Listing 18.
```
  <Object name="temperature_value" type="org.knx.DPST_9_001">
   <Real name="temperature" value="23.4"/>
  </Object>

```
**Listing 17 – Response of the datapoint object (XML)**
```
  {
   "$name":"temperature_value",
   "$type":"org.knx.DPST_9_001",
   "temperature": "23.4"
  }

```
**Listing 18 – Response of the datapoint object (JSON)**

The object contains several metadata elements. The metadata type specifies the parental
type that is located in the definition context (org.knx.DPST_9_001). The object consists of a
child element of type Real that contains the captured temperature value (metadata value)
and a unit (metadata units). BACnet/WS supports the standardized BACnet Engineering
Units as well as manufacturer-specific extensions.

Savedate: Filename: page 54 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

In the following, the rules for creation of BACnet/WS types based on the KNX Tag
vocabulary are specified (see clause 8.2.2). Afterwards, the mapping of KNX Datapoint
Types (see clause 8.2.3), Parameter Types (see clause 8.2.4), and Functional Block Types
(see clause 8.2.4) from the KNX Information model is examined. Finally, the mapping of all
other elements of the KNX Information model is described (see clause 8.2.5).

If a distinct object like a datapoint is part of multiple views, the metadata via needs to be
used. For the Web Client, the referenced data appears to exist within the structure that has
the via reference while the effective data is hosted in another object. For example, a
datapoint object is created when it is used for the first time. If there are references in other
views to this datapoint, the via metadata is utilized to refer to the first datapoint object
containing the source data. The server must ensure the synchronization of the source and its
“copies” that use the via metadata.

#### 8.2.2 Type mapping
BACnet/WS provides a standardized data item for hosting type definitions. This definition
context is located in {prefix}/.defs. All types that are specified in this definition storage
can be used for subsequent instantiation. They provide a syntactic and semantic basis in
terms of customized types in addition to standardized elements of the BACnet/WS
specification. Based on the KNX Tag vocabulary and the relations between these tags (see
clause 3.3), types can be generated automatically. In the following, rules to extract type
definitions out of the KNX Tag vocabulary including exceptions to these rules are described.

First of all, all tags of type marker become a BACnet/WS Object in the definition context
(i.e. a type). Therefore, the name of the tag in combination with the reversed namespace
becomes the name of the new type. For example, the tag installation in the core namespace
_knx.org results in a type with name org.knx.Installation. The created types support the Web_
Clients to understand the structure of the data items that are available at the KNX Web
interface. The result is a structured system of types and instances of these types. As
exceptions, the following markers are ignored in this initial step and are handled in other
rules.

   - unit

   - enumeration

   - literal and all tags using literal (e.g. priority)

   - datapointType

   - functionalBlockType

   - channelType

   - parameterType

   - value and all tags using value (e.g. valueBit) except for valueFunction

   - translation

   - accessMethod and all tags using accessMethod (e.g. groupObject)

Savedate: Filename: page 55 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Next, the relations of these marker tags are analyzed. First, tags of primitive datatype (e.g.
_string, int) that are used in a relationship with a marker become child elements in the_
resulting Object. The name of these child objects is set to the name of the corresponding
tag. For example, the order number of a device becomes a child of type String in the
resulting device type as the marker device uses the tag orderNumber according to Table 2.
Moreover, the value of the metadata tags is set to the tag name including the namespace
(e.g. tags="org.knx.Device"). If tags of primitive datatype can occur multiple times
(occurrence = many), an BACnet/WS Collection is used instead of adding a single child
element. The member type of this collection is set to the type of the included elements. The
various primitive tag datatypes are mapped as follows:

   - Type string becomes a String data item.

   - Type int becomes an Integer data item.

   - Type real becomes a Real data item.

   - Type bool becomes a Boolean data item.

   - Type date becomes a Date data item.

   - Type time becomes a Time data item.

   - Type datetime becomes a DateTime data item.

If a marker tag uses other markers (e.g. tag device is used with tag translatable), the
metadata extends is used to model inheritance. Tags of type ref are resolved and result in
direct child elements within the parent data item. Relations between tags with multiple
occurrence (occurrence = many) are combined into Collection data items specifying the
type of the contained elements in the memberType metadata. The names of the referenced
objects or the names of the lists are set to the name of the tag without the term “Ref”. For
lists, a singular tag name is transformed into plural form. For example, the tag viewRef
becomes a Collection with name views in the installation type. A naming conflict can
occur, if there is already an element with this name. Then, the transformed name is
expanded by an additional, arbitrary number (e.g. views1) until the naming of all child
elements within one type is consistent and unambiguous. As for all BACnet/WS elements,
the id metadata of child elements are set to a globally unique identifier (GUID). There are
some exceptions for mapping of tag relations:

- The tags id, name, and description do not become child elements. Their values are
mapped to the already available metadata name, displayName, and description,
respectively.

- A reference to a literal (or any tag that uses literal, e.g. priority) becomes an
```
  Enumerated data item.

```
- References to translation (translationRef), unit (unitRef), enumeration (enumerationRef,
_encodingRef), value (valueRef), datapointType (datapointTypeRef), parameterType_
(parameterTypeRef), channelType (channelTypeRef), or functionalBlockType
(functionalBlockTypeRef) are ignored and do not become child elements in the types of
the definition context.

As an example, the type org.knx.Installation is shown in Listing 19 and Listing 20. The
installation tag is a marker, and thus it results in a type. Furthermore, the tag uses the
_viewRef tag that can occur multiple times in combination with the installation tag. According_
to the previously introduced rules, this leads to a Collection of Objects of type view
(memberType = "org.knx.View"). The name of this list is set to plural form. Another example
is presented in Listing 21 and Listing 22, where the device type is illustrated.

Savedate: Filename: page 56 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**
```
  <Definitions>
   <Object name="org.knx.Installation">
    <Collection name="views" memberType="org.knx.View"/>
   </Object>
  </Definitions>

```
**Listing 19 – Installation type (XML)**
```
  {
   "$$definitions": {
    "org.knx.Installation": {
     "$base":"Object",
     "views": {
      "$base":"Collection",
      "$memberType":"org.knx.View
     }
    }
   }
  }

```
**Listing 20 – Installation type (JSON)**
```
  <Definitions>
   <Object name="org.knx.Device">
    <Object name="manufacturer" type="org.knx.Manufacturer"/>
    <String name="orderNumber" tags="org.knx.orderNumber"/>
    <String name="serialNumber" tags="org.knx.serialNumber"/> 
    <Integer name="individualAddress" tags="org.knx.individualAddress"/>
    <Collection name="datapoints" memberType="org.knx.Datapoint"/>
    <Collection name="functionalities" memberType="org.knx.Functionality"/>
   </Object>
  </Definitions>

```
**Listing 21 – Device type (XML)**
```
  {
   "$$definitions": {
    "org.knx.Device": {
     "$base":"Object",
     "manufacturer": {
      "$base":"Object",
      "$type":"org.knx.Manufacturer"
     },
     "orderNumber": {
      "$base":"String",
      "$tags":"org.knx.orderNumber"
     },
     "serialNumber": {
      "$base":"String",
      "$tags":"org.knx.serialNumber"
     },
     "individualAddress": {
      "$base":"Integer",

```
Savedate: Filename: page 57 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**
```
      "$tags":"org.knx.individualAddress"
     },
     "datapoints": {
      "$base":"Collection",
      "$memberType":"org.knx.Datapoint"
     },
     "functionalities": {
      "$base":"Collection",
      "$memberType":"org.knx.Functionality"
     }
    }
   }
  }

```
**Listing 22 – Device type (JSON)**

#### 8.2.3 Datapoint Type mapping
The KNX Datapoint Types are modelled in the KNX Information model using the available
tags of the KNX Tag vocabulary (e.g. datapointType, value, valueReal). Afterwards, these
types can be mapped from the KNX Information model to individual BACnet/WS types. The
datapoint types in the definition context are used during instantiation of datapoint objects.
Each KNX Datapoint Type becomes a BACnet/WS Object type containing subordinated
objects for the values (e.g. Boolean, Integer, Real) and further information like units
or the encoding of binary values.

Each datapoint type specified in the KNX Information model becomes a type in the definition
context. These are all entities with the marker tag datapointType. The name of the type is
derived from the identifier of the datapoint type entity and is complemented by the reversed
namespace org.knx. Each datapoint type must be derived from the generic datapoint type
definition (extends="org.knx.Datapoint"). Each connected value entity results in a
distinct child element of the particular datapoint type. The metadata name, id,
```
displayName, and description of these child elements are set in the same way as in

```
clause 8.2.2, and the data is taken from the entities of the KNX Information model.
Moreover, these child elements are marked with node type point (metadata nodeType). In
this context, the various value markers lead to different data items:

   - _ValueReal becomes a Real data item._

   - _ValueInt becomes an Integer data item._

   - _ValueString becomes a String data item._

   - _ValueBit becomes a Boolean data item._

   - _ValueEnum becomes an Enumerated data item._

   - _ValueFunction becomes an Object data item of type org.knx.ValueFunction._

Savedate: Filename: page 58 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Similar to the mapping of normal types, related tags are integrated into the value data items
if there exist corresponding metadata. For example, min and max tags are mapped to the
metadata minimum and maximum of a Real data item. All other tags without a
corresponding metadata are ignored in the types for the KNX Web interface, and the data is
only stored internally in the KNX Gateway. Ref tags are an exception of this rule. Here,
already available metadata are used as far as possible, as well. For example, the unitRef of
_valueReal does not result in a new child but is mapped to the units metadata of the Real_
data item. The accepted units are specified in the list of BACnet Engineering Units. Thus, a
mapping from the SI-based KNX Information model units to these BACnet units needs to be
provided by the KNX Gateway. Also ref tags without a corresponding metadata are mapped
to the type. For example, encodingRef becomes a child element of the parent value entity of
type Enumerated and name encoding. This encoding element is linked to a type definition
of the enumeration in the definition context, which contains a namedValues collection with
available values. For this purpose, metadata type is used. As an example, Listing 23 and
Listing 24 show the type definition for the KNX Datapoint Type 9.001. It has one child of type
```
Real with minimum value and maximum value as well as related units. However, the tags

```
for the most and least significant bit (msb, lsb) are ignored in the type definition for the KNX
Web interface as there are no corresponding metadata for these tags in BACnet/WS.
```
  <Definitions>
   <Object name="org.knx.DPST_9_001" displayName="DPT Value Temp" 
       extends="org.knx.Datapoint">
    <Real name="temperature" displayName="Temperature" 
       units="degree-celsius" minimum="-273" maximum="670760"
  nodeType="point"/>
   </Object>
  </Definitions>

```
**Listing 23 – DPST 9.001 type (XML)**
```
  {
   "$$definitions": {
    "org.knx.DPST_9_001": {
     "$base":"Object",
     "$displayName":"DPT Value Temp",
     "$extends":"org.knx.Datapoint",
     "temperature": {
      "$base":"Real",
      "$minimum":"-273.0",
      "$maximum":"670760.0",
      "$units":"degrees-celsius",
      "$displayName":"Temperature",
      "$nodeType"="point"
     }
    }
   }
  }

```
**Listing 24 – DPST 9.001 type (JSON)**

Savedate: Filename: page 59 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

A special case is the valueFunction. As described, the type org.knx.ValueFunction is used
as base type for mapping the valueFunction entity to an Object. In the KNX Information
model, the function’s parameters are linked by the reference tags parameterInRef and
_parameterOutRef each referring to a functionParameter entity. Thus, the ValueFunction_
type, which is created according to the rules presented in clause 8.2.2, has two child objects
named parameterIn and parameterOut of type org.knx.FunctionParameter. A
_functionParameter entity in the KNX Information model has references to subordinated_
values via valueRef. These value entities are mapped as child elements to the parameterIn
and the parameterOut object similar to the value mapping of datapoint types described
above. In Listing 25 and Listing 26, the type definition for KNX Datapoint Type 3.007 is
shown. The type definition is not complete as the function decrease is omitted, but the
mapping is the same as for the increase function. As can be seen, the increase function has
one input parameter of type Integer and no output parameter.
```
  <Definitions>
   <Object name="org.knx.DPST_3_007" displayName="DPT Control Dimming"
       extends="org.knx.Datapoint">
    <Object name="increase" type="org.knx.ValueFunction">
     <Object name="parameterIn">
      <Integer name="value" minimum="0" maximum="100"/>
     </Object>
    </Object>
    ...
   </Object>
  </Definitions>

```
**Listing 25 – DPST 3.007 type with increase function (XML)**
```
  {
   "$$definitions": {
    "org.knx.DPST_3_007": {
     "$base":"Object",
     "$displayName":"DPT Control Dimming",
     "$extends":"org.knx.Datapoint",
     "increase": {
      "$base":"Object",
      "$type":"org.knx.ValueFunction",
      "parameterIn": {
       "$base":"Object",
       "value": {
        "$base":"Integer",
        "$minimum":"0",
        "$maximum":"100",
       }
      }
     }
     ...
    }
   }
  }

```
**Listing 26 – DPST 3.007 type with increase function (JSON)**

Savedate: Filename: page 60 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Such function descriptions are used by a Web Client to make a function call and to interpret
the result of this call. The KNX Gateway, on the other hand, uses these mappings of
functions to provide the corresponding executable function. Function calls are also
discussed in clause 8.4.4.

After defining the datapoint types, parameter types and datapoints implementing a datapoint
type can be mapped. As already mentioned, a ref tag to a datapoint type does not result in a
child element, but the name of the datapoint type is used in the extends metadata of the
parameter type entity and the type metadata of the datapoint entity. An example can be
seen in Listing 29 and Listing 30.

#### 8.2.4 Functional Block Type mapping
Similar to the Datapoint Type mapping, this clause describes the mapping of Functional
Block Types (i.e. entities in the KNX Information model using the marker tag
_functionalBlockType) to corresponding type definitions in the BACnet/WS definition context._
According to the KNX Tag vocabulary, a functional block type consists of a list of parameter
types. Similar to the values of datapoint types, these parameter types are not mapped to a
```
Collection data item. Each parameter type entity described in the KNX Information model

```
becomes an Object with a distinct name. An example for a functional block type is shown in
Listing 27 and Listing 28. The parameter type instances in the functional block type are
instances of their base parameter types. A functional block type is inherited from the generic
type for functional blocks.
```
  <Definitions>
   <Object name="org.knx.FBT_01" displayName="Light switching actuator
  basic"
       extends="org.knx.FunctionalBlock">
    <Object name="PT_02" type="org.knx.PT_02"/>
    <Object name="PT_01" type="org.knx.PT_01"/>
   </Object>
  </Definitions>

```
**Listing 27 – Exemplary functional block type (XML)**
```
  {
   "$$definitions": {
    "org.knx.FBT_01": {
     "$base":"Object",
     "$displayName":"Light switching actuator basic",
     "$extends":"org.knx.FunctionalBlock",
     "PT_02": {
      "$base":"Object",
      "$type":"org.knx.PT_02"
     },
     "PT_01": {
      "$base":"Object",
      "$type":"org.knx.PT_01"
     }
    }
   }
  }

```
**Listing 28 – Exemplary functional block type (JSON)**

Savedate: Filename: page 61 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Also the parameter types need to be mapped to type definitions (i.e. entities with marker tag
_parameterType). An example is given in Listing 29 and Listing 30. It can be seen that the_
_datapointTypeRef has to be resolved by means of the extends metadata (cf. Clause 4.2.3)._
```
  <Definitions>
   <Object name="org.knx.PT_02" displayName="Switching value" 
       extends="org.knx.DPST_1_001">
    <String name="direction" value="in"/>
   </Object>
  </Definitions>

```
**Listing 29 – Exemplary parameter type (XML)**
```
  {
   "$$definitions": {
    "org.knx.PT_02": {
     "$base":"Object",
     "$displayName":"Switching value",
     "$extends":"org.knx.DPST_1_001",
     "direction": {
      "$base":"String",
      "$value":"in"
     }
    }
   }
  }

```
**Listing 30 – Exemplary parameter type (JSON)**

#### 8.2.5 Entity mapping
In order to map all other entities from the KNX Information model to BACnet/WS elements,
the previously generated types are used. Each entity becomes a BACnet/WS Object. The
most specialized marker tag in an entity is mapped to the type metadata to model
inheritance. For example, if an entity has the marker tags for view and translatable, only view
is set in the type metadata as this is a subclass of translatable. Moreover, the metadata
_tags of the BACnet/WS object can be used to list all marker tags of an entity that are_
assigned in the KNX Information model. Afterwards, the object is filled with values from the
entity of the KNX Information model. For example, the installation type defines a list with
references to views. This list is instantiated in an actual installation object. Then, the view
references are added to this list, which leads to an object comparable to Listing 31 and
Listing 32. The entities are directly added to their parent objects resulting in a hierarchy of
elements with the installation as topmost object. This is visualized by the dots in Listing 31
and Listing 32.

Savedate: Filename: page 62 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**
```
  <Object name="demo" type="org.knx.Installation" displayName="Demo">
   <Collection name="views">
    <Object name="view_devices" displayName="Devices" type="org.knx.View">
     ...
    </Object>
    <Object name="view_lighting" displayname="Lighting"
  type="org.knx.View">
     ...
    </Object>
   </Collection>
  </Object>

```
**Listing 31 – Exemplary installation instance (XML)**
```
  {
   "$base":"Object",
   "$name":"demo",
   "$displayName":"Demo",
   "$type":"org.knx.Installation",
   "views": {
    "$base":"Collection",
    "view_devices": {
     "$base":"Object",
     "$type":"org.knx.View",
     "$displayName":"Devices",
     ... {...}
    },
    "view_lighting": {
     "$base":"Object",
     "$type":"org.knx.View",
     "$displayName":"Lighting",
     ... {...}
    }
   }
  }

```
**Listing 32 – Exemplary installation instance (JSON)**

A special mapping is required for entities marked as unit or enumeration. As already
mentioned, units need to be mapped to BACnet Engineering Units. In general, an
_enumeration entity is mapped to an Enumerated data item. The associated literals are_
added as Unsigned data item to a NamedValues collection. If a literal has a Boolean value
(i.e. tag literalBit with a Boolean value), then the literal is directly mapped to a Boolean data
item. For an enumeration with only two Boolean literals, a Boolean data item is used
instead of the Enumerated data item. An example is shown in Listing 33 and Listing 34.
Enumerations and encodings are located in the {prefix}/.defs standard data item and
have the reversed namespace org.knx.enums.

Savedate: Filename: page 63 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**
```
  <Definitions>
   <Boolean "org.knx.enums.onoff">
    <NamedValues>
     <Boolean name="on" value="true" displayName="On"/>
     <Boolean name="off" value="false" displayName="Off"/>
    </NamedValues> </Boolean>
  </Definitions>

```
**Listing 33 –Exemplary Boolean object definition (XML)**
```
  {
   "$$definitions": {
    "org.knx.enums.onoff": {
     "$base":"Boolean",
     "$namedValues": {
      "on":{"$base":"Boolean", "$value":"true", "$displayName":"On"},
      "off":{"$base":"Boolean", "$value":"false", "$displayName":"Off"}
     }
    }
   }
  }

```
**Listing 34 – Exemplary Boolean object definition (JSON)**

References to translations are resolved in the form of additional metadata. For example in
XML, a translation entity containing a text for a description becomes a Description child
element with the particular language in the locale metadata and the value between the
XML start and end tag. If there is also a translation for the name in this translation entity, this
results in an additional DisplayName child element. In JSON, a localized description
metadata has the locale code appended to it with a “$$” separator, e.g. “$description$$deDE” or “$description$$en-CA”.

The modelled access methods (e.g. groupObjects) in the KNX Information model are not
mapped to types or objects in the KNX Web interface. Instead, they are internally managed
and stored. The KNX Gateway integrates the various access methods and decides which
method has to be used if there is, for example, an access to a connected datapoint object.

### 8.3 Object addressing
A KNX Gateway may provide access to multiple KNX Networks. It is necessary that each
element (e.g. device, datapoint, or building part) has its own distinct URI. Every object
access is carried out via its URI according to the resource-orientation of the REST paradigm.
Objects have either absolute or relative URIs. More details can be found in the BACnet/WS
specification [04]. The KNX Networks are hosted in the standardized data item
```
{prefix}/.knx, while the type definitions are located in {prefix}/.defs. In this

```
definition context, the generated types (e.g. datapoint types, functional block types, device
type, or installation type) as well as enumerations are located. Instances of these definitions
use the type metadata in order to declare their defined type. The structure within the .knx
data item is visualized in Figure 24.This figure should give an overview on the general
addressing scheme.

Savedate: Filename: page 64 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

KNX Gateway

0..* /.knx/installations/

Installation

0..* views/

View

views/

0..*

0..* 0..* 0..*
datapoints/ functionalities/ devices/

Datapoint Functionality Device

0..* 0..*

datapoints/ functionalities/

0..*

datapoints/

**Figure 24 – Addressing scheme**

The KNX Gateway is addressed via its name or IP address and the service port. The starting
point for navigating through the managed KNX Networks is, for example,
```
http://localhost:8080/.knx/. BACnet/WS data items are subject of the message

```
exchange with the KNX Gateway. The KNX Gateway manufacturers have to integrate the
information of the KNX Network according to the KNX Information model and the KNX Tag
vocabulary to finally support the access of objects via the KNX Web interface. Child objects
are directly added to their parents. The depth parameter of the GET query is used to limit
the depth of the returned data.

### 8.4 Object interaction

#### 8.4.1 Introduction
The KNX Gateway based on BACnet/WS is designed in accordance with the REST
paradigm. In the following clauses, standardized transactions to read and write objects as
well as to invoke functions are explained. For the KNX Web interface, BACnet/WS also
provides a readable metadata besides the writable metadata. The Boolean value of this
readable flag is only related to the ability to read the value of a data item and not to the
ability to read the data item itself. The readability of the value of an element in the KNX
Network needs to be propagated to the KNX Web interface. Similarly, the writable flag
defines the ability to write a data item in the BACnet/WS server.

Savedate: Filename: page 65 of 74
2017 01 31 AN175 v02 web services DP docx

|KNX Gateway|Col2|
|---|---|
|0..*|/.knx/i|


Device


Datapoint


Installation


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

#### 8.4.2 Read transaction
In order to read an element, an HTTP GET is sent to the KNX Gateway, and this call
contains the URI of the targeted BACnet/WS object. The KNX Gateway returns the
requested element to the Web Client. This procedure is shown in Figure 25. In this figure
and the following figures in clause 8.4.3 and Clause 8.4.4, the right hand side of the diagram
(i.e. the communication with the KNX Network) is out of scope of this specification
document. The left hand side, on the other hand, represents the communication between
Web Client and KNX Gateway via the KNX Web interface.

:Web Client :KNX Gateway :KNX Network

GET http://localhost/.knx/installations/
demo/views/.../switch_channel/switch/

Group Value Read

Group Value Response

Response

Content:
```
           <Boolean name="switch" value="false" writable="true">
            <Enumerated name="encoding" value="off" type="org.knx.enums.onoff"/>
           </Boolean>

```
**Figure 25 – Read transaction**

#### 8.4.3 Write transaction
For write calls an HTTP PUT is used to send the modified object as content to a specific URI
(i.e. the BACnet/WS object). If this object is writable, an appropriate KNX Group Value Write
is sent to the KNX Network by the KNX Gateway. This is only relevant for KNX Gateway
manufacturers and not for Web Client developers. Afterwards, an HTTP status code is sent
back to the calling client (see Figure 26).

:Web Client :KNX Gateway :KNX Network

PUT http://localhost/.knx/installations/
demo/views/.../switch_channel/switch

Group Value Write(s)

Status code (e.g. 204 No Content)

Content:

|Col1|Col2|Col3|
|---|---|---|
|||Status code (e.g. 204 No Content)<br>|

```
<Boolean name="switch" value="true"/>

```

**Figure 26 – Write transaction**

For writing single primitive values, plain text encoding of the PUT content can also be used.
A simple example for this is shown in Listing 35.

Savedate: Filename: page 66 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

:Web Client :KNX Gateway :KNX Network

PUT http://localhost/.knx/installations/demo/
views/.../switch_channel/switch?alt=plain

Group Value Write(s)

Status code (e.g. 204 No Content)

Content:
```
                          true

```
**Listing 35 - Write transaction in plain text**

#### 8.4.4 Function calls

In order to call functions, BACnet/WS uses the HTTP GET method. According to the
BACnet/WS specification, the parameters are directly encoded in the URI if there are only a
few primitive parameters [04]. Otherwise, a POST call with XML content should be used. In
Figure 27, the function increase has one input parameter of value 17. The parameters
represent the value items of the function’s input parameter. These are the child elements of
the data item that is linked to the function via the parameters metadata. The execution of
the function is done in the KNX Gateway with or without any access to the KNX Network.
The server’s response can contain an arbitrary data structure. It has to be noted that
BACnet/WS specifies some default functions with simple names. Therefore, function names
shall be prefixed with org.knx (e.g. org.knx.increase).

:Web Client :KNX Gateway :KNX Network

GET http://localhost/.knx/installations/demo/
views/…/dimming/org.knx.increase(17)

Group Value Write(s)

Response

Content:
```
                    <Object description="..." name="...">
                        ...
                    </Object>

```
**Figure 27 – Function call**

Savedate: Filename: page 67 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

## 9 KNX Gateway BACnet/WS

### 9.1 Introduction
This clause consists of the specific requirements for the KNX Gateway implementation
based on BACnet Web services (BACnet/WS) [04]. This allows the exchange of structured
data using, for example, XML or JSON. The data is exchanged with the HTTP GET and PUT
methods. In general, objects can be created or deleted on the server, which is done with
HTTP POST and DELETE. Additionally, plain text for primitive values can be exchanged.
Furthermore, BACnet/WS enables subscriptions for event reporting, trend reporting, or
change-of-value. URIs are used to uniquely identify resources. BACnet/WS addresses
security and authorization based on state-of-the-art mechanisms like TLS and OAuth.

### 9.2 Object model
RESTful BACnet/WS specifies an object model to describe building automation systems in a
technology-independent way. BACnet/WS is not limited to BACnet systems but can be used
for any building automation technology. The fundamental elements of the object model are
_data and metadata. While data is the holder of the particular values, metadata describes_
other data. Data items can contain a number of standardized metadata. There are primitive
data items for representation of Integer, Date, Boolean, or Real values. On the other hand,
there are constructed data items, like Object, Array, or List, which are intended to contain a
set of child data items. A Link data item can be used to establish links between data in the
same server or to external data. Moreover, a metadata for associated tags is available in
order to classify some data items with standardized or individual tags. An enumeration of
various node types provides some default values to specify data items in more detail. The
construction of data items, the available metadata, and all other BACnet/WS characteristics
can be found in the specification [04].

BACnet/WS supports query parameters to filter the requested data items or to adjust the
result set. Additionally, standard functions and standard data items are provided. As an
example, the standard data item .auth offers information for secure communication and
authorization, and .data hosts information about the server configuration. Subscriptions
can be created in order to get update information on individual URIs, which are stored in
```
.subs data item. As already mentioned, .defs is the container for type definitions, and
.knx is the standard location for arrangement of KNX data. 

```
The BACnet/WS elements are located within the KNX Gateway implementation. By the use
of HTTP GET and PUT, data items can be read or modified. As online creation and deletion
of elements of the KNX Network representation in the KNX Gateway via KNX Web interface
communication is not supported in this version of the specification, HTTP POST and DELETE
do not have any effect on the pooled BACnet/WS elements in the server. BACnet/WS uses
only an HTTP (and HTTPS) binding. However, different encodings including XML, JSON,
and plain text are available for message exchange. These encodings and the HTTP binding
are combined to gateway profiles (see clause 10).

Savedate: Filename: page 68 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

## 10 Gateway profiles

### 10.1 Introduction
Gateway manufacturers can decide between different gateway profiles. Each of these
profiles lists the features that have to be implemented. Web Client developers use the profile
information (e.g. supported encodings, protocols) while implementing appropriate Web
Clients. This clause describes the profiles and their requirements. The term profile is limited
to the interface between the KNX Gateway and the Web Clients (i.e. the KNX Web interface,
interface 8 in Figure 2). On the contrary, the integration of the KNX Information model has to
be implemented to the full extent. The KNX Information model, which defines the input to the
KNX Gateway, is loaded via standard IP or any higher protocol based on IP. An integration
of a KNX Information model into the KNX Gateway via TP is not intended. In any case, the
KNX Gateway manufacturer has to support an offline configuration of the KNX Gateway by
implementing an integration process for the KNX Information model given in the form of XML
file(s). The data of a KNX information model can be split over several XML files. In this case,
the correct order of the imported files has to be ensured in order to avoid conflicts due to
missing data. Likewise, some data (e.g. datapoint types, functional block types) can already
be preconfigured in the KNX Gateway, and only the particular elements of a KNX Network
(e.g. devices, views) have to be imported. In general, newly imported elements will override
already existing elements in the KNX Gateway with the same identifiers. In addition, an
import of the KNX Tag vocabulary must be provided by the KNX Gateway. An online
integration of KNX Networks via Web Services is not yet part of this specification and is
shifted to future versions. However, the KNX Gateway manufacturers can provide optional
configuration or management services assuming the availability of the required offline
integration. Furthermore, there is a strong recommendation that KNX Gateway
manufacturers should consider authorization mechanisms to protect information and control
of the KNX Network against unauthorized access. In this context, passwords and other
authorization methods should be used effectively, and default settings in authorization
mechanisms need to be overwritten when commissioning a KNX Gateway device.

As the profiles differ in the supported types of information encodings as well as the message
exchange protocols, the set of available options are presented in the subsequent Clauses
10.2 and 10.3.

### 10.2 Information encoding
The KNX Web interface defines different information encodings for the transfer of data.
Depending on the use cases, different message encodings can be used by the Web Clients.
For providing a particular encoding format, it has to be supported by the KNX Gateway
implementation. The following list shows the available information encodings.

- **Extensible Markup Language (XML) is a state-of-the-art language within IT systems.**
Its advantage is the human readability. In addition, XML is editable with standard tools
and is wide spread in various platforms (e.g. Java, C#) as well as open source libraries.
A disadvantage is the high demand of CPU, memory, and bandwidth.

- **Efficient XML Interchange (EXI), on the other hand, is a binary encoded version of**
XML. Instead of using a custom binary protocol, EXI can be used for representing
normal XML messages. Due to the binary encoding, an efficient message processing
and transportation is provided. Nevertheless, complex libraries with limited availability
are needed.

Savedate: Filename: page 69 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

- **Java Script Object Notation (JSON) is a very popular encoding for Web-based**
applications. Thus, it can be processed efficiently by a browser. Data is represented in
nested JSON objects consisting of attribute/value-pairs. JSON as a languageindependent format uses human-readable text for data representation.

- **Concise Binary Object Representation (CBOR) is based on the JSON data model**
and is specified in RFC 7049. Similar to JSON, no schema description is needed as the
encoded data is self-describing. The concise binary encoding eases the transportation
of binary data. Especially for utilization in constrained devices with limited resources,
this binary data format is well suited.

In addition, technology-specific binary formats or custom formats can be supported by the
KNX Gateway implementation to target special purposes. For the purpose of interoperability
and compatibility, it is recommended to limit the set of supported encodings to the
standardized ones (XML, EXI, JSON, CBOR).

### 10.3 Message exchange
Besides the message encoding, the protocols for message exchange have to be defined in
the scope of this specification. The KNX Web interface offers the following message
exchange protocols, which can or have to be implemented by the KNX Gateway depending
on the particular profile (see clause 10.4).

- **Hypertext Transfer Protocol (HTTP) is one of the most common communication**
protocols in the Web and provides a small set of verbs for interacting with
communication partners (e.g. GET, PUT, and POST).

- **Constrained Application Protocol (CoAP) offers a similar interaction as HTTP.**
However, CoAP enables asynchronous receiving of update messages. This observing
feature avoids unnecessary polling of information. In addition, CoAP can perform on
IPv4 respectively IPv6 multicast addresses.

- **WebSocket is based on TCP and provides a full-duplex communication between KNX**
Gateway and Web Clients. In contrast to HTTP, a connection is established between the
communication partners, and thus both can initiate a message exchange.

Again, these protocols can be extended by platform-specific or custom solutions even
though these might restrict the interoperability between devices of different manufacturers.
Consequently, the use of HTTP, CoAP, or WebSocket is strictly recommended.

### 10.4 Profiles
According to these message exchange protocols and information encodings, the alternatives
for implementing KNX Web services are illustrated in Table 7. On the application layer,
OBIX, OPC UA, and BACnet/WS are specified in this document. The provided information
encodings are a subset of XML, JSON, CBOR, and EXI while message exchange protocols
cover the range of HTTP, WebSocket, and CoAP. Platform or technology-specific solutions
as well as custom implementations are excluded from this specification in order to enable a
standardized integration of KNX Networks into IT systems. The networking at the KNX Web
interface can be realized either by IPv4 or IPv6.

Savedate: Filename: page 70 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

**Table 7 – KNX Web services alternatives**

**Feature** **Alternatives**

_Application layer services_ OBIX BACnet/WS OPC UA

_Information encoding_ XML JSON EXI CBOR

_Message exchange_ HTTP Web Socket CoAP

_Networking_ IPv4 IPv6

As a result, four profile packages are defined, each one combining a message exchange
protocol and an information encoding format. These packages are defined for OBIX, OPC
UA, and BACnet/WS (see Figure 28). A KNX Gateway manufacturer can choose any subset
of this profile set. There is no mandatory basic profile and the packages have no
interdependencies. To become a certified KNX Gateway device, at least one package (all
but not the data archive) and at least one application layer service have to be implemented.
Additional package implementations are optional. The following listing describes the profiles
and their purposes.

- **Machine-to-machine (M2M) profile for OBIX needs the implementation of the CoAP**
message exchange protocol and the EXI encoding. In general, this profile fits to
constrained devices with limited hardware resources since it does not need as much
computational effort and resources as other profile packages.

- **Enterprise profile is used in an environment where adequate computational resources**
are available. For example, the OBIX enterprise profile requires HTTP as message
exchange protocol, and XML is used as information encoding format.

- **Real-time Web uses the WebSocket protocol to establish a connection between KNX**
Gateway and Web Clients in order to enable a bidirectional communication. This is
necessary in environments where polling is not applicable to receive update messages
from the KNX Gateway. Since its wide distribution in Web applications, JSON is used in
this profile as information encoding format.

- **Data archive provides additional services for Web Clients like history mechanisms,**
alarming services or watches. The services depend on the utilized application layer
service. While the data archive profile for OPC UA only supports a data history, OBIX
provides alarming and watches, as well. The data archive profile requires one of the
other three profiles as this package does not contain an information encoding format
and a message exchange protocol. Its only purpose is to make high level services
available to Web Client developers.

Savedate: Filename: page 71 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

Profile package

M2M Enterprise Real-time Web Data archive

**Figure 28 – Gateway profiles**

The best choice for exchange protocols and message encodings depends on the use case.
For example, CoAP and EXI may be used in M2M communication while Web-based client
interfaces are usually based on HTTP or WebSocket. If a KNX Gateway OBIX supports, for
example, both the M2M and the enterprise package, all combinations of protocols (i.e.
HTTP, CoAP) with the information encodings (i.e. EXI, XML) can be used. Thus, a protocol
of one profile can be used with any information encoding of other (implemented) profile
packages.

It has to be kept in mind that these packages define the minimum implementation
requirements and do not specify the upper limit of available implementations. Thus, a KNX
Gateway manufacturer can provide further application layer services, information encodings,
and message exchange protocols in addition to the denoted profiles. Moreover, additional
information can be provided at the KNX Web interface for special scenarios (e.g. real estate
management).

### 10.5 Conflict handling
KNX Gateways can communicate with other KNX Gateways in the same way as they
interact with Web Clients. They can choose between the provided encodings and exchange
protocols. However, conflicts can occur, if one of the communication partners does not
support the chosen format or protocol. In order to resolve the conflict, the KNX Gateways
agree on a common profile package. The KNX Gateways have to provide information on the
supported profiles during runtime. In OBIX, for example, this can be done out-of-band in a
separate OBIX object called OBIX lobby. As there is no mandatory package, conflicts might
be not solved. Hence, KNX Gateway implementations may exist that are not compatible. An
example is the communication of a constrained KNX Gateway implementing the M2M
package and an enterprise KNX Gateway supporting HTTP and XML, only. Thus, a
discovery method has to identify the implemented profiles of the communication partner
before negotiating the used profile package.

Savedate: Filename: page 72 of 74
2017 01 31 AN175 v02 web services DP docx

|C o E ? XA P I|Col2|H ? X T P MT L W|Col4|Col5|
|---|---|---|---|---|
|CoAP<br>EXI<br>?|CoAP<br>EXI<br>?|HTTP<br>XML<br>?<br>W|W|ebSocket<br>JSON|
|CoAP<br>EXI<br>?|CoAP<br>EXI<br>?|HTTP<br>XML<br>?<br>W||?|
|CoAP<br>EXI<br>?|||||
|?|?|?|?|?|

|W ay, A tch ela rm sin g ,|Col2|
|---|---|
|istory, ?||
|istory, ?||


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

## 11 Conformance tests

### 11.1 Introduction
This final clause summarizes the requirements for KNX Web services in the form of
conformance tests. The setup of a predefined KNX Network, which will be simulated by the
EITT, is the basis for further operations like the integration into the KNX Gateway and the
interaction with the KNX Gateway via the KNX Web interface. An outline of the KNX
Information model of this KNX Network is presented before the structure of the KNX
Gateway objects, which are accessible via the KNX Web interface, are examined by unit
tests. Additional documents containing machine-readable models are attached to this
document.

…

### 11.2 Setup
…

### 11.3 Information model
…

### 11.4 Unit tests
…

Savedate: Filename: page 73 of 74
2017 01 31 AN175 v02 web services DP docx


-----

KNX CERTIFICATION AND LICENCE SYSTEM
**KNX AN175** **web services**

## 12 Use case scenarios

### 12.1 Introduction
Some exemplary use case scenarios to illustrate the intention of KNX Web services will be
listed in this Clause.

…

Savedate: Filename: page 74 of 74
2017 01 31 AN175 v02 web services DP docx


-----

