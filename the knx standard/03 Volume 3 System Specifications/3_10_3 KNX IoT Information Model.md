###### 1

 2

 3

 4


# System Specifications

#### KNX IoT

 KNX Information Model


###### 5 Summary

 6 This document provides information on the KNX Information Model.

 7 Version 2.0.0 KNX Working Document provided for reference to the
 8 Approved Standard versions of the KNX IoT specifications.

 9


-----

###### 10 Document updates

**Version** **Date** **Modifications**

0.1 2021.03.22 - Document creation.
0.2 2021.10.25 - Document update, minor corrections (OP ranges/domains), added line
numbers.
1.0.0 2021.10.29 - Publication of version 1.0.0.
2.0.0 2022.04.05 - Document update according to new requirements.
###### 11
 12 References

[01] AN175 KNX web services v02 DP of 2017.01.31

[02] Chapter 3/10/2 KNX IoT Introduction

[03] Chapter 3/10/2 KNX IoT Constants

[04] Chapter 3/10/3 KNX IoT Information Model

[05] Chapter 3/10/4 KNX IoT 3[rd] Party API

[06] Chapter 3/10/5 KNX IoT Point API

[07] Chapter 3/1/2 Glossary

[08] Chapter 7/20/1 Lighting Sensors

[09] Chapter 7/20/2 Lighting Actuators

Filename: 3_10_3 KNX IoT Information Model.docx
Version: 2.0.0
Status: Working Document
Save date: 2022.04.05
Number of pages: 92

|Version|Date|Modifications|
|---|---|---|
|0.1|2021.03.22|-<br>Document creation.|
|0.2|2021.10.25|-<br>Document update, minor corrections (OP ranges/domains), added line<br>numbers.|
|1.0.0|2021.10.29|-<br>Publication of version 1.0.0.|
|2.0.0|2022.04.05|-<br>Document update according to new requirements.|


-----

###### 13 Contents

 14 1 KNX Information Model ....................................................................................................... 6
 15 1.1 Introduction ..................................................................................................................... 6
 16 1.1.1 KIM Models ........................................................................................................ 6
 17 1.1.2 KIM Version ....................................................................................................... 7
 18 1.1.3 KIM Availability ................................................................................................. 7
 19 1.1.4 KIM Data Format ................................................................................................ 7
 20 1.1.5 KIM Ontology Mapping ..................................................................................... 8
 21 1.1.6 KIM Ontology IRIs and Namespaces ................................................................. 8
 22 1.1.7 KIM Ontology Classes ........................................................................................ 9
 23 1.1.8 KIM Semantic Dictionary ................................................................................. 10
 24 1.1.8.1 Goals ..................................................................................................... 10
 25 1.1.8.2 Dictionary Structure .............................................................................. 11
 26 1.1.8.3 Dictionary Content ................................................................................ 11
 27 1.1.8.3.1 KNX Content ............................................................................................................ 11
 28 1.1.8.3.2 KNX Manufacturer Content ..................................................................................... 11
 29 1.1.8.3.3 URN Scheme for Manufacturer and KNX Content .................................................. 12
 30 1.1.8.4 Dictionary Classes ................................................................................. 13
 31 1.1.8.4.1 Class Application Function ...................................................................................... 14
 32 1.1.8.4.2 Class Functional Block ............................................................................................. 14
 33 1.1.8.4.3 Class Point ................................................................................................................ 14
 34 1.1.8.4.4 Class Tag .................................................................................................................. 14
 35 1.1.8.4.5 Class Quality Kind, Process Kind ............................................................................ 14
 36 1.1.8.5 Dictionary Update ................................................................................. 15
 37 1.2 Location Model ............................................................................................................. 15
 38 1.2.1 Introduction ....................................................................................................... 15
 39 1.2.2 Requirements .................................................................................................... 17
 40 1.2.3 Class and subclasses ......................................................................................... 18
 41 1.2.3.1 Location................................................................................................. 18
 42 1.2.3.2 Building ................................................................................................. 19
 43 1.2.3.3 Floor ...................................................................................................... 19
 44 1.2.3.4 Outside .................................................................................................. 20
 45 1.2.3.5 Site ........................................................................................................ 20
 46 1.2.3.5.1 Site Segment ............................................................................................................. 21
 47 1.2.3.6 Space ..................................................................................................... 21
 48 1.2.3.6.1 Room ........................................................................................................................ 21
 49 1.2.3.6.2 RoomSegment .......................................................................................................... 22
 50 1.2.3.7 Address .................................................................................................. 22
 51 1.3 Installation Model ......................................................................................................... 22
 52 1.3.1 Introduction ....................................................................................................... 22
 53 1.3.2 Classes and subclasses ...................................................................................... 23
 54 1.3.2.1 Application Program ............................................................................. 25
 55 1.3.2.2 Aspect .................................................................................................... 25
 56 1.3.2.2.1 Application Function ................................................................................................ 25
 57 1.3.2.2.2 Function Point .......................................................................................................... 29
 58 1.3.2.3 Asset ...................................................................................................... 31
 59 1.3.2.3.1 Equipment ........................................................................................................ 31
 60 1.3.2.3.1.1 Cabinet ............................................................................................................. 32
 61 1.3.2.3.1.2 Device .............................................................................................................. 32


-----

###### 62 1.3.2.3.1.2.1 Introduction ............................................................................................. 32
 63 1.3.2.3.1.2.2 Device Model .......................................................................................... 33
 64 1.3.2.3.1.3 Gateway ........................................................................................................... 35
 65 1.3.2.3.2 Installation ................................................................................................................ 36
 66 1.3.2.4 Datapoint Type, Datapoint Type Field.................................................. 36
 67 1.3.2.5 Quality Kind, Process Kind, Operation Kind ....................................... 39
 68 1.3.2.6 Functionality ......................................................................................... 42
 69 1.3.2.6.1 Channel..................................................................................................................... 43
 70 1.3.2.6.2 Functional Block ...................................................................................................... 44
 71 1.3.2.7 Location................................................................................................. 44
 72 Point ...................................................................................................... 44
 73 1.3.2.8 44
 74 1.3.2.8.1 Datapoint .................................................................................................................. 45
 75 1.3.2.9 Product .................................................................................................. 47
 76 1.3.2.10 JSON Schema ....................................................................................... 47
 77 1.4 Tag Model ..................................................................................................................... 48
 78 1.4.1 Tag Relations .................................................................................................... 48
 79 1.4.1.1 Datapoint Relations ............................................................................... 50
 80 1.4.1.2 Function Point Relations ....................................................................... 50
 81 1.4.1.3 Application Function Relations ............................................................ 51
 82 1.4.2 Examples ........................................................................................................... 52
 83 1.4.3 Classes and subclasses ...................................................................................... 53
 84 1.4.3.1 Tag......................................................................................................... 53
 85 1.4.3.2 Equipment, Phenomenon, Virtual Entity .............................................. 54
 86 1.4.3.3 Quantity Kind, State Kind ..................................................................... 55
 87 1.4.3.4 Locality ................................................................................................. 56
 88 1.4.3.5 LocationUsage....................................................................................... 57
 89 1.4.3.6 PointFunctionType ................................................................................ 57
 90 1.4.3.7 PointInterface ........................................................................................ 58
 91 1.4.3.8 PointOperation ...................................................................................... 59
 92 1.4.3.9 Origin .................................................................................................... 61
 93 1.4.3.10 Protocol ................................................................................................. 61
 94 1.4.3.11 Trade ..................................................................................................... 62
 95 1.4.4 Tag Cardinalities ............................................................................................... 63
 96 1.5 Model Relations ............................................................................................................ 63
 97 1.5.1 Location Relations ............................................................................................ 65
 98 1.5.2 Installation Relations ........................................................................................ 67
 99 1.5.3 Datapoint Relations ........................................................................................... 70
 100 1.5.4 Datapoint Type Relations ................................................................................. 72
 101 1.5.5 Quality Kind, Process Kind, Operation Kind Relations ................................... 73
 102 1.5.6 Tag Relations .................................................................................................... 74

 103 2 Appendix ............................................................................................................................... 77
 104 2.1 Semantic Export ............................................................................................................ 77
 105 2.1.1 Content .............................................................................................................. 78
 106 2.1.1.1 Section Context ..................................................................................... 78
 107 2.1.1.2 Section Graph ........................................................................................ 78


-----

###### 108 2.1.2 Relations ........................................................................................................... 79
 109 2.1.2.1 MaC ETS References ............................................................................ 79
 110 2.1.2.2 External References .............................................................................. 80
 111 2.1.2.3 Different Representation ....................................................................... 81
 112 2.1.3 Assignments ...................................................................................................... 81
 113 2.1.3.1 Address .................................................................................................. 81
 114 2.1.3.2 Application Program ............................................................................. 81
 115 2.1.3.3 Application Function ............................................................................. 82
 116 2.1.3.4 Aspect .................................................................................................... 82
 117 2.1.3.5 Asset ...................................................................................................... 82
 118 2.1.3.6 Cabinet .................................................................................................. 82
 119 2.1.3.7 Channel ................................................................................................. 82
 120 2.1.3.8 Datapoint ............................................................................................... 82
 121 2.1.3.9 Device ................................................................................................... 83
 122 2.1.3.10 Equipment ............................................................................................. 83
 123 2.1.3.11 Functional Block ................................................................................... 83
 124 2.1.3.12 Functionality ......................................................................................... 83
 125 2.1.3.13 Function Point ....................................................................................... 83
 126 2.1.3.14 Gateway................................................................................................. 83
 127 2.1.3.15 Installation ............................................................................................. 83
 128 2.1.3.16 Installation ............................................................................................. 83
 129 2.1.3.17 JSON Data Schema ............................................................................... 83
 130 2.1.3.18 Location................................................................................................. 83
 131 2.1.3.19 Point ...................................................................................................... 83
 132 2.1.3.20 Product .................................................................................................. 83
 133 2.1.3.21 Quality Kind, Process Kind .................................................................. 83
 134 2.1.3.22 Tag......................................................................................................... 83
 135 2.1.3.23 Unit ........................................................................................................ 83

 136 3 Examples ............................................................................................................................... 84
 137 3.1.1 Room Temperature Control .............................................................................. 84
 138 3.1.2 Light Switch Control......................................................................................... 88
 139


-----

###### 140 1 KNX Information Model

 141 1.1 Introduction
 142 The KIM is technically built on several sources of information, KNX relevant definitions and from
 143 externally related content.

 144 • The external content consists of Tags from Haystack (where applicable), W3C concepts to reflect
 145 similar KIM concepts of a Point or an equipment and their relationships and location concepts from
 146 IFC. 

 147 • The KNX relevant definitions themselves are structured in two logical KIM parts, the KNX System
 148 and Semantic Dictionary. 

 149 The KNX System defines the concept framework as a static (versioned) part. The Semantic
 150 Dictionary defines the concept framework data as a dynamic part. It consists of semantic terms. 

 151 The separation is needed to extend/ update the Semantic Dictionary independently from the KNX
 152 System part, for this see clause 1.1.8.

 153 To express all here described different information sources individual namespaces are used, for details see
 154 in clause 1.1.6.
 155 KIM = KNX System + Semantic Dictionary + references to External Content

 156 This principle of different sources is shown also in below.

### KIM External Content


###### KNX System

product/system/installa�on


**W3C**


**IFC**


###### Seman�c Dic�onary
**Haystack**

###### 157
 158 Figure 1 – Main KIM sources

 159 1.1.1 KIM Models
 160 This clause is not informative.

 161 The general definition of the KNX System can be found in [03], it is designed for direct exchange of
 162 information (i.e., communication) between networked devices controlling applications in and around
 163 buildings respectively locations. 

 164
 165 Figure 2 - KNX System elements


-----

###### 166 To describe the entire KNX System as a concept framework several models are needed to reflect the
 167 different aspects as part of the KIM. 

 168 1. Product model

 169 To model for products with their applicative behavior using of Points, their configuration
 170 possibilities and their catalog information, independent from an actual usage in an Installation. 

 171 Mainly makes use of concepts of Device and Tag from this specification, generated data are also
 172 colloquially called (not instantiated) catalog data.

 173 EXAMPLE 1 product model aspect  memory footprint for configuration parameter and Points 

 174 2. System model

 175 To model the I/O interface communication between devices, as a result to build with them the
 176 intended application (see above Figure 2).

 177 Mainly makes use of concepts of Device, Points and Function Point from this specification. 

 178 EXAMPLE 2 communication model aspect  the Function Point (I/O interface) configuration of a device

 179 3. Installation model

 180 To model the correlation of the application and devices with a real-world Installation that is using of
 181 locations, uses as (input) the product model, behaves according to (and respect) the system model. 

 182 Mainly makes use of concepts of Location and Application Function from this specification,
 183 generated data are also colloquially called instance data. 

 184 EXAMPLE 3 location model aspect  the actual spatial building structure of an Installation which is
 185 independent from the KNX System


###### 186 The same Installation would technically operate/ communicate also in a different building,
 187 regardless if the original goal is met.
 188 NOTE 1 This document mainly addresses the installation model, an Installation documented in an ETS Project, with
 189 instantiated KNX Classic Devices or ETS Functions etc.

 190 1.1.2 KIM Version
 191 To distinguish updates to the KIM it needs an explicit versioning information. The only requirement of a
 192 new/ updated (KIM) Ontology is that the Ontology Version IRI MUST be different. 

 193 The KIM Ontology versioning follows the W3C recommendations for OWL versioning (see
 194 https://www.w3.org/TR/owl2-syntax/#Versioning_of_OWL_2_Ontologies). Common practice is to
 195 construct the IRI with the version identifier, a human readable text, and an additional timestamp. 

 196 The KIM Ontology IRI including its versioning identifier is defined in clause 1.1.6.

 197 1.1.3 KIM Availability
 198 It is expected that the KIM Ontology IRI underneath allows to retrieve the most recent Ontology as an
 199 electronic file by using the IRI as an URL. 

 200 To get a specific KIM Ontology version the corresponding KIM Ontology version IRI must be used
 201 instead as an URL. 

 202 • http://schema.knx.org/2020/ontology returns the most recent KIM Ontology version, as a full
 203 ontology including all specified Ontology parts such as the location concept, KNX System concept
 204 or semantic dictionaries from KNX and any KNX manufacturer (see table below)
 205 • http://schema.knx.org/2020/ontology/v1 returns the version v1 of the KIM Ontology, using the same
 206 Ontology IRI as specified above, extended with the required version (here "v1")

 207 1.1.4 KIM Data Format
 208 The KIM is available in a linked data format, such as TURTLE or RDF/XML. The KIM exchanges its
 209 data as part and with the support of the Semantic Export, for details of this see clause 2.1. 


-----

###### 210 1.1.5 KIM Ontology Mapping
 211 For easy semantical mappings relevant KIM concepts need to translate to other (external) Ontologies. For
 212 this an OWL class/sub class relation or an explicit reference is mainly used, explained hereafter.

 213 1. KIM locations having the same conceptual meaning as specific IFC location, this is expressed by
 214 using the owl:sameAs reference.

 215 This reference only expresses that IFC locations can be mapped/translated to their semantic
 216 counterpart KNX locations. A KNX location themselves does not necessarily need to express all data
 217 of a IFC location. 

 218 NOTE 2 If a KNX location requires information that is not (directly or indirectly) required for the
 219 corresponding IFC location, a translating from IFC to KNX cannot be done due to missing
 220 information at IFC. 


###### 221 EXAMPLE 4 The class loc:Building has an owl:sameAs reference to the
 222 http://standards.buildingsmart.org/IFC/DEV/IFC4_1/OWL#IfcBuilding

 223 2. KIM DPTs having the same conceptual meaning as specific subclass of JSON schema, this is
 224 expressed by using the subclass assignment (such as the individual dic:bool is a subclass of
 225 jsonschema:BooleanScheme).

 226 This subclass expresses that a DPT from KNX Classic can be mapped/translated to its semantic
 227 counterpart concept JSON data scheme (type). A DPT MUST at least require the information that is
 228 also required by a JSON type.

 229 NOTE 3 A DPT inherits a corresponding JSON type but can add additional things.
 230 EXAMPLE 5 The individual dic:bool is a subclass of jsonschema:BooleanScheme.

 231 1.1.6 KIM Ontology IRIs and Namespaces
 232 The KIM Ontology IRI is defined according to the following (simplified) principle.

 233 {scheme} + “://” + {authority} + “/” + {path} + “/” + {version} +"#"

 234 With the above given {scheme} and {authority} part the KIM Ontology IRI is defined as
 235 “http://schema.knx.org/2020/ontology”. 

 236 The {path} is a string describing separate KIM concepts which also uses an own namespace, for this see
 237 next table. 

 238 The {version} MUST be a string of “v” concatenated with a non-zero leading decimal number, such as
 239 “v2” or “v249”. Consequently, this versioning approach allows to number only main Ontology versions. 

 240 Table 1 expresses the in KIM used namespace prefix, its IRIs and its Ontology reference.

 241 Table 1 – KIM namespaces

**Ontology Name Namespace Prefix in KIM** **IRI[ 1)]** **Comment**

                                           - OWL (SI) unit class for FPs and
Schema.org `schema:` http://schema.org/
Datapoints

                                           - OPs and OWL classes to

[https://www.w3.org/2019/wot/](https://www.w3.org/2019/wot/json-schema)
JSON schema `jsonSchema:` express JSON type/ format and
[json-schema#](https://www.w3.org/2019/wot/json-schema)

data

                                           - OPs and OWL classes to
`qudt:` [http://qudt.org/schema/qudt/](http://qudt.org/schema/qudt/)
express units

QUDT

`unit:` [http://qudt.org/vocab/unit/](http://qudt.org/vocab/unit/)           - Individuals to express (SI) units

1) An IRI does not need necessarily to be dereferenced as an URL to access any content explanation on a web site.
To retrieve the KIM content, please refer to the clause 1.1.3.

|Ontology Name|Namespace Prefix in KIM|IRI 1)|Comment|
|---|---|---|---|
|Schema.org|_`schema:`_|http://schema.org/|• <br>OWL (SI) unit class for FPs and<br>Datapoints|
|JSON schema|_`jsonSchema:`_|https://www.w3.org/2019/wot/<br>json-schema#|• <br>OPs and OWL classes to<br>express JSON type/ format and<br>data|
|QUDT|_`qudt:`_|http://qudt.org/schema/qudt/|• <br>OPs and OWL classes to<br>express units|
|QUDT|_`unit:`_|http://qudt.org/vocab/unit/|• <br>Individuals to express (SI) units|


-----

|Ontology Name|Namespace Prefix in KIM|IRI 1)|Comment|
|---|---|---|---|
||_`quantitykind:`_|http://qudt.org/vocab/quantity<br>kind/|• <br>Individuals to express quantity<br>tags|
|VCARD|_`vcard:`_|http://www.w3.org/2006/vcard<br>/ns#|• <br>OPs and OWL classes to<br>express geo addresses|
|DCTERMS|_`dct:`_|http://purl.org/dc/terms/|• <br>OPs for description/title/URN|
|HTTP|_`http:`_|http://www.w3.org/2011/http#|• <br>OPs for an URL authority part|
|KIM 2)|_`loc:`_|http://schema.knx.org/2020/o<br>ntology/loc{/version}#|• <br>KNX location concepts<br>• <br>{path} = /loc|
|KIM 2)|_`knx:`_|http://schema.knx.org/2020/o<br>ntology/knx{/version}#|• <br>KNX System concepts<br>• <br>{path} = /knx|
|KIM 2)|_`dic:`_|http://schema.knx.org/2020/o<br>ntology/dictionaries/dic{/versi<br>on}#|• <br>Semantic Dictionary content,<br>expressing KNX System<br>concepts (see clause 1.1.8.4.)<br>• <br>{path} = dictionaries/dic|
|KIM 2)|_`dic-tag:`_|http://schema.knx.org/2020/o<br>ntology/dictionaries/dic-<br>tag{/version}#|• <br>Semantic Dictionary content,<br>expressing tags used from the<br>KNX System concepts (see<br>clause 1.1.8.4.)<br>• <br>{path} = dictionaries/dic-tag|
|KIM 2)|Example<br>_`abb:`_ <br>_`gira:`_ <br>_`…`_|Example<br>http://gira.de/2022/dictionarie<br>s/iotfunctions{/version}#|• <br>Semantic Dictionary content<br>reflecting content of a KNX<br>manufacturer. See clause<br>1.1.8.3.2.|


###### 242 1.1.7 KIM Ontology Classes
 243 As specified in clause [03] the KIM is an Ontology, in an Ontology for each discreate aspect (such as the
 244 installation model) own Ontology classes are specified. A class in an Ontology is also called a concept. 

 245 EXAMPLE 6 Ontology class/concept :Room reflects the aspect of “available rooms in an installation”. The aspect of
 246 “points from devices” is represented by the Ontology class/concept :Point. 
 247 Some important classes are detailed with its structure and a comment of its main purpose underneath. For
 248 the entire class structure please refer to clause 1.1.3.
 249 owl:Thing 
 250 • jsonSchema:DataSchema // external schema to map KNX datapoints to JSON types
 251 • knx:Thing[ 3)] // root node of all KNX related Ontology classes
 252 • knx:ApplicationProgram // same meaning as Application Program, definition see clause [03]
 253 • knx:Aspect // a specific system view to grouped datapoints, definition see clause [03]
 254 • knx:Asset // a container of installation objects such as devices
 255 • knx:DatapointType // represent standardized KNX DPTs
 256 • knx:Functionality // grouping of Points as part of an Application Program, Device or FB
 257 • knx:Location // root element of structural building concepts
 258 • …
 259 • knx:Point // interface to interact with Datapoints at Runtime
 260 • knx:Tag // root element of most Semantic Dictionary terms
 261 • …

2) If not expressed with an explicit namespace prefix, in this specification all KIM Ontology classes refer for
readability to the namespace prefix :knx.

3) The node has no specific semantical meaning. It is introduced to clearly separate KNX Ontology concepts from
other used (external) Ontologies (structurally and UI related). This is because some KNX Ontology concepts
need to be related also to other Ontologies, see clause 1.1.6.


-----

###### 262 • qudt:Unit // external schema to map the type of KNX datapoints with (SI) units
 263 • vcard:Address // external schema to assign KNX locations with addresses

 264 Each defined concept in a specific Ontology stands for its own discrete meaning. Consequently, these
 265 concepts are disjoint each to each other (nearly in all cases). This holds true also for all Ontology
 266 subclasses under the node knx:Thing. 

 267 The in KIM used Ontologies of knx:Thing, qudt:Unit, vcard:Address and jsonSchema:DataScheme
 268 cannot be defined as disjoint. Otherwise it would be not possible to express that a knx:DatapointType is
 269 also a subclass of jsonSchema:DataSchema, such as to express that the DPT 1.001 is also defined as a 270 boolean (JSON) type. 
 271 NOTE 4 In OWL the membership in one of two disjoint classes implies no membership in the other (dog and cat are disjoint
 272 classes, if I am a member of class dog I cannot be a member of class cat at the same time).

 273 The Figure 3 below is depicting in a sketch the Ontology classes from above in its relation to each other.

## :Applica�onProgram

##### :Func�onality
**:Channel/ :Func�onalBlock**

## :Point

##### :Aspect

**:Applica�onFunc�on /**

**:Func�onPoint**

## :Loca�on

###### 274
 275 Figure 3 – Main KIM Ontology classes

 276 To relate concepts (OWL classes) together they are interlinked with OP relationships (example, see
 277 Figure 6). Each OWL class defines whether some semantic information such as from other concepts may
 278 or must be available. 

 279 1.1.8 KIM Semantic Dictionary

 280 1.1.8.1 Goals
 281 The semantical understanding and meaning of all KNX System Aspects expressed as an Ontology must
 282 be guaranteed across different domains and especially across humans, who (pre/post-) process this
 283 information.

 284 To achieve this also semantically predefined terms are needed, they will be assigned to the corresponding
 285 aspects from above. Each term is describing a specific domain information, the terms as such are hosted
 286 in a dictionary. 

 287 The dictionary can be extended with new terms or allows to update existing terms, both while not
 288 changing or affecting the KNX System part of the KIM (which would demand to release on any update or
 289 change a new KIM version). The mechanism of updating the dictionary is described in clause 1.1.8.5.

|:Asset|:Equipment|:Cabinet|:Device|
|---|---|---|---|
|**:Asset**|**:InstallaƟon**|||


-----

###### 290 1.1.8.2 Dictionary Structure
 291 While terms in a lexicon are structured in alphabetic order, terms in the Semantic Dictionary are: 

 292 • structured after their purpose and not alphabetically;
 293 • if applicable structured in a taxonomy, each taxonomy section reflects a different domain of interest
 294 (such as the section of all protocols or the section of all trades and similar) and
 295 • spread over several KIM Ontology classes/ subclasses.

 296 A taxonomy can be compared with an extendable structure with different sections and optionally
 297 subsections. As a result, semantical meaningful sections are defined, in some cases with an individual
 298 term in it.

 299 EXAMPLE 7 An example taxonomy is the classification of feline (the family section) structured down to wildCat or
 300 petCat (the possible species section). In the sub section petCat, an individual like “Tom” or “Garfield”
 301 is included in. As a note, by humans biased semantics of “Garfield” to some specific food can be
 302 expressed by having an (object property) relationship to food terms in the dictionary. 


###### 303 1.1.8.3 Dictionary Content
 304 The dictionary is the dynamic part of the KIM, it hosts terms to annotate an Installation with semantic
 305 content, such as the datapoints of a device or a location.

 306 The following shall be noted as regards naming convention of dictionary terms within the KIM. Each
 307 term in the KIM has an name but may also have a (textual) label. This label is used to present the term to
 308 human users of the Ontology, including software. Different labels can be part of the KIM for one concept,
 309 translated into different languages and having a language identifier. Examples in this specification are
 310 given with their label name.
 311 EXAMPLE 8 Dictionary term of concept quantity is an individual named dic-tag:building, its label is
 312 “Building”.
 313 The dictionary contains KNX content as well content provided by a KNX manufacturer, for each a
 314 specific namespace prefix is used, see next clauses underneath. 

 315 1.1.8.3.1 KNX Content 
 316 This content covers all standardized content already defined in the KNX system, as a result of
 317 standardization in KNX Association.

 318 • The content is a direct part of the KIM Ontology, maintained by the KNX Association (such as
 319 standardized Application Functions, FBs or DPTs, see clause 1.1.8.4).
 320 • The content uses the defined KIM Ontology IRIs respectively the corresponding namespaces for
 321 content of the Semantic Dictionary as described in clause 1.1.6.

 322 1.1.8.3.2 KNX Manufacturer Content 
 323 This content covers all content defined by a KNX manufacturer.

 324 • The content may be hosted separately by the KNX manufacturer or is directly integrated as a direct
 325 part of the KIM Ontology, in the latter case also maintained by the KNX Association.


###### 326 NOTE 5  Referring from an (KNX manufacturer created) Ontology to an external (KIM) Ontology is a
 327 standard OWL (mapping) technology. As an example, definitions of KNX manufacturer specific
 328 Application Functions refer at least to the generic KIM class :ApplicationFunction, more
 329 meaningful assigned to one of the in KIM more specific subclasses such as dic:lightingCtrl.
 330 The content can be integrated also as KNX content by the KNX Association, this is mainly a task for 331 the KNX WGI and the KNX manufacturer (in case there is a common use for the KNX System 332 and/or other members).


-----

###### 333 • The content uses an individual IRI which SHALL be disjoint to the IRIs used in KIM for already
 334 defined KNX content (see above). The KNX manufacturer content MUST express for its individual
 335 IRI a corresponding manufacturer namespace prefix that: 
 336 - consists of a unique KNX manufacturer name as specified below 
 337 - includes a padded ":" at the end
 338 - MUST NOT conflict with other namespace prefixes, including content standardized by
 339 KNXA[ 4)]
 340 The KNX manufacturer name MUST NOT exceed 10 characters and MUST contain only ASCII
 341 characters, excluding the ".". Lower case is RECOMMENDED. 

 342 EXAMPLE 9 Some manufacturer specific names and its possible defined namespace prefixes.

 343 • SIEMENS : manuf. name = siemens   namespace prefix = siemens:
 344 • GIRA  : manuf. name = gira   namespace prefix = gira:
 345 • ABB  : manuf. name = abb   namespace prefix = abb:
 346
 347 Technically, a KNX manufacturer can define content for all KIM concepts mentioned as part of the
 348 introduction in this clause. Mainly the KNX manufacturer may define own Application Functions as part
 349 of class :ApplicationFunction or in one of its sub classes. 

 350 An KNX manufacturer Application Function must be specified with all its corresponding restrictions such
 351 as mandatorily available Function Points and corresponding Tags. This can be easily solved to to base it
 352 on already available Application Functions of the Semantic Dictionary.

 353 1.1.8.3.3 URN Scheme for Manufacturer and KNX Content 
 354 Manufacturer and KNX content can be expressed directly as IRI or as URN based resource identifier
 355 (examples for an IoT Function see clause Application Function1.3.2.2.1). The URN SHALL be formatted
 356 as follows:

 357 "urn:" + "knx:" + $TYPE + $NAME

 358 The individual elements are detailed as follows. 

 359 urn:/knx:

 360 The urn: reflects the - in RFC - standardized URN namespace prefix, knx: the official KNX namespace
 361 prefix.

 362 $TYPE

 363 The $TYPE is an identifier expressing a specific content KIM type. The $TYPE identifier MUST NOT
 364 exceed 5 characters (including the '.') and MUST contain only ASCII characters. The following $TYPE
 365 identifier are defined:
 366 • mft.  The next element after $TYPE MUST be an identifier for a KNX manufacturer name. 
 367 This type identifier MUST always be used when expressing any KNX member specific
 368 content. All content standardized by KNX SHALL not use this $TYPE identifier. 

 369 The KNX manufacturer name SHALL be the name as used for the KNX manufacturer
 370 namespace, excluding the ":". The KNX manufacturer name is extended with an "." at the end.

 371 o urn:knx:fct.switching  // a KNXA standardized App. Function
 372 o urn:knx:dpt.switch  // a KNXA standardized DPT (typed Point)
 373 o urn:knx:mft.siemens.switching // a KNX member standardized App. Function


###### 374 • fct.  The $NAME element after $TYPE MUST be a unique identifier for an Application Function.
 375 • dpt.  The $NAME element after $TYPE MUST be a unique identifier for a DPT information.

4 The namespace prefixes are also used when expressing KNX manufacturer specific API Reference members, for
this see [05].


-----

###### 376 • dpa.  The $NAME element after $TYPE MUST be a unique identifier for a Datapoint.
 377 • loc. The $NAME element after $TYPE MUST be a unique identifier for a location.
 378 • fb. The $NAME element after $TYPE MUST be a unique identifier for a Functional Block.

 379 $NAME
 380 The $NAME part can be freely chosen, however thereby respecting the naming rules, such as IoT
 381 Datapoint names as part of KNX standardized content or member IoT Functions, see clause [05]. To
 382 express a Functional Block or Datapoint of a FB it is RECOMMENDED to use its already declared
 383 identifiers.
 384 EXAMPLE 10 urn:knx:dpa.321.51  Datapoint of a FB  uses :iot = 321 and :pid = 51 values as identifier
 385 urn:knx:fb.321   Functional Block  uses :iot = 321 value as identifier
 386 urn:knx:dpt.bool  DPT  uses naming rules from clause [05], see above


###### 387 The $NAME MUST consist ONLY of characters described below, furthermore it MUST NOT exceed 40
 388 characters, ensuring the total URN does not exceed 64 characters. Allowed characters from the URI
 389 specifications [RFC 3986] but limited to the following explicit character set:
 390 ALPHA / DIGIT / "-" / "." / "_" / "~"
 391 It is RECOMMENDED that the $NAME part does not exceed 16 characters (provided that a KNX
 392 manufacturer name uses 10 characters), thus ensuring the total URN does not exceed 40 characters[5],
 393 which in turn ensures it does not exceed 40 bytes, meaning it would then fit inside a single UDP payload
 394 over CoAP (see https://tools.ietf.org/html/rfc7252#section-4.6).
 395 As a note, there is no need to dereference an URN to retrieve a resource as this is the case for an URL and
 396 sometimes also for an IRI, for the latter e.g., the KIM Ontology, see clause 1.1.6. 

 397 Use Case

 398 It is possible to search for an Application Function in a specific version of an ontology using a fixed URN
 399 such as urn:knx:fct.airCtrl with an optional (human readable) label applied such as "air control",
 400 which may have an IRI with a cryptic name e.g., dic:x13xyz (not able to interpreat). Even in different
 401 versions of an Ontology with a different IRI for the Application Function it is possible to search for the
 402 same Application Function with the same URN.

 403 KIM

 404 For Semantic Dictionary elements the definitions/ recommendations above for the URN schema are
 405 implemented per default. To annotate a concept or individual in the KIM with an URN the OP
 406 relationship predicate dcterms:identifier is used. 

 407 1.1.8.4 Dictionary Classes 
 408 Generally, to represent the dictionary content in a possible taxonomy, Ontology classes are used. The in
 409 the KIM used approach is to define specific Ontology classes, each of them with a specific meaning in the
 410 building domain such as the concept (Ontology class) of point data types or the concept (Ontology class)
 411 of physical phenomena measured by a sensor. Therefore, not all dictionary content can be hosted directly
 412 under one (and the same) Ontology class. 
 413 The dictionary content is later used to annotate Installation (instance) data with dictionary content, this
 414 can be realized in two ways:
 415 • to be of a specific type, whereas the type is a specific Ontology class from the dictionary
 416 • to be related to a specific characteristic, whereas the relation is expressed with an OP relationship
 417 predicate to an individual (with this characteristic) from the dictionary

5) With the defined character set it is assumed that a (UTF-8) character has the size of one byte.


-----

###### 418 The chosen method depends on the intended use case, the first option above allows to express a type, the
 419 latter to express a relation. How to set up a relation from (instance) data to an individual or an OWL class
 420 from the dictionary, please see clause 2.1. As a note, OWL relations using an OP needs to refer between
 421 individuals. 

 422 EXAMPLE 11 A Datapoint of a device in an Installation expresses a type relation with the OP
 423 knx:datapointType to the individual dic:bool of class :DatapointType. 
 424 project:#DatapointInstance100 knx:datapointType dic:bool
 425 More examples can be found in the Semantic Export (see clause 2.1).

 426 The entire KNX dictionary content consists of the following Ontology classes, as described above some 
 427 contains of detailed Ontology subclasses, some contains of detailed individuals.
 428 • :ApplicationFunction
 429 • :Tag
 430 • :QualityKind, ProcessKind, OperationKind
 431 • :FunctionalBlock
 432 • :Point
 433 • :DatapointType

 434 To also support that a human reader can easily understand the meaning of such relations as part of a file
 435 (as described above in the example), it is recommended to define a pattern how KIM individuals should
 436 be structured according to its name. The goal is that a reader is able to reason/understand from the chosen
 437 name pattern the intended meaning of individuals. Where applicable this is specified in every concept
 438 such as for DPTs or Functional Blocks. 

 439 NOTE 6 In contrast to a human a machine cannot derive any semantic meaning from this name pattern.

 440 1.1.8.4.1 Class Application Function
 441 The topmost taxonomy class hosting the KNX System concept of Application Functions (see clause
 442 1.3.2.2.1).

 443 It contains subclasses to describe available Application Functions such as standardized KNX Application
 444 Functions or individual Application Functions of a KNX manufacturer. For this it reuses some of the
 445 underneath described concepts such as Points or Tags. 

 446 1.1.8.4.2 Class Functional Block
 447 The topmost taxonomy class hosting the KNX System concept of a Functional Block.

 448 It contains subclasses to describe available FB such as standardized KNX FBs. For this it reuses some of
 449 the underneath described concepts such as Points or Tags. 

 450 1.1.8.4.3 Class Point
 451 The topmost taxonomy class hosting the KNX System concept of Points (see clause 1.1.1.1).

 452 It contains subclasses to describe Datapoints such as standardized KNX Points used in Functional Blocks. 

 453 1.1.8.4.4 Class Tag
 454 The topmost taxonomy class hosting Tags applicable for the KNX System concepts.


###### 455 NOTE 7 Class name :Tag is used to align the wording with other systems where Tag as such is well known
 456 (such as Haystack).
 457 It contains subclasses and individuals (see clause 1.4.3.1) to describe semantically different parts of the
 458 KNX System such as Functional Blocks, Application Functions, locations or different Point qualities. 

 459 1.1.8.4.5 Class Quality Kind, Process Kind
 460 The topmost taxonomy class hosting the concepts of Quality Kind or Process Kind.

 461 It contains subclasses to describe meaningful combination of tags, used to express an actuation or
 462 observation with specific semantic data, performed from several source concepts such as a Datapoint.


-----

###### 463 1.1.8.5 Dictionary Update 
 464 The dictionary content can be added or updated by online operations; this principle is identical to
 465 updating the Mac ETS KNX master data. 
 466 Adding content assumes there is no compatibility break with the (static) KIM part of the KNX System. In
 467 this case a new KIM with an updated version would be required; this principle is same as updating the
 468 Mac ETS KNX XML schema.
 469 The annotation OP relationship knx:dictionaryVersion is used to express the version of the Semantic
 470 Dictionary separately. It uses an (positive) integer value, and it is located at the node class knx:Thing,
 471 details on this class see clause 1.1.7.
 472 • For each new KIM version (see clause 1.1.2), the version identifier of the dictionary
 473 knx:dictionaryVersion MUST be restarted at zero. 
 474 • The Semantic Dictionary MUST be versioned as a whole; any change following a KNX
 475 manufacturer request or directly by KNX leads to an incrementation of the version number.

 476 1.2 Location Model

 477 1.2.1 Introduction
 478 This clause is not informative. 

 479 The Location ontology provides a formalization of the location model, as shown in Figure 4. 

 480 Notation Style
 481 • Blue box denotes the topmost generic :Location, from which all subclasses are derived. It is the
 482 class that can be used as a bridging class to other ontologies.
 483 • Green dashed boxes denote KIM classes that do not exist in Industry Foundation Classes.
 484 • Green boxes denote KIM classes that exists in IFC and can be mapped, for this see clause 1.1.6.
 485 • White boxes describe classes, independent from the classes :Location.
 486 • Boxes with annotation “subClassOf” define specific (child) classes of :Location.
 487 • Red dotted lines and their direction describe OP relationships between classes, the OP relationship
 488 predicate used here is the name assigned to the dotted line.


-----

###### 489
 490 Figure 4 – Location Model

 491 NOTE 8 For readability the namespace prefix is omitted in this figure.
 492 The class loc:Location provides the object property loc:hasLocationUsage and
 493 :hasAddress that allow to associate a location usage or a postal address (containing data properties
 494 country, city, street name and street number) with it. 

 495 Thus, any kind of location specified as a subclass to loc:Location can be associated with a location
 496 usage and/or a postal address, if needed. However, usually a postal address is preferably used to describe
 497 a loc:Site or loc:Building.

 498 A location usage for a room such as Bathroom may preferably be used for a loc:Room or a
 499 :RoomSegment but may also be used for loc:Floor or loc:Building or even for a loc:Site, if
 500 it serves a special purpose (e.g., Hospital or alike).

 501 The classes loc:Site, loc:Building, loc:Space and loc:Outside are the primary
 502 subclasses of loc:Location. A loc:Site is usually at the top of a location hierarchy, while a
 503 loc:Space is a generic location that can represent any part of a building. 

 504 The class loc:Outside is used to describe locations that are not inside, but outside of a building. The
 505 OP loc:hasOutside is available to describe such outside locations in more detail and (if needed)
 506 associate it with a building.

 507 EXAMPLE 12 For outside locations such as "West Facade" or "Rooftop"; it is obvious that they require some
 508 association with a particular building and probably also (in case of the facade) a specification of a
 509 direction (e.g., "West").


###### 510 Furthermore, a loc:Space can be combined with the loc:Outside class type. A balcony is of type
 511 loc:Outside and loc:Space at the same time (this is a so-called class assertion).


-----

###### 512 The below figure explains these options in one example. 

 513
 514 Figure 5 - Locations and Relations Example

 515 NOTE 9 For readability the namespace prefix is omitted in this figure.

 516 1.2.2 Requirements
 517 The location model fulfills the following requirements.

 518 Bridging to BIM
 519 Many concepts of the location model match concepts provided by the IFC Ontology that has been created
 520 to work with BIM models. In particular, KNX loc:Building, loc:Floor, loc:Site and
 521 loc:Space expresses a reference to an IFC :IfcBuilding, :IfcBuildingStorey,
 522 :IfcSite and :IfcSpace and thus make bridging to a BIM model possible. 

 523 Alternative Hierarchies
 524 The common superclass loc:Location of the KNX IoT Information Model allows specifying an
 525 alternative location hierarchy or not strictly sticking to the usual hierarchy, should someone - for some
 526 reason – want to do so.
 527 EXAMPLE 13 A KIM element loc:Room can be associated directly with a loc:Building (rather than as usual with a
 528 loc:Floor). This is semantically strongly expressed via object property "loc:hasRoom" or
 529 semantically weakly expressed via the object property “loc:hasLocation”, without violating any
 530 constraints specified by the location model.
 531 Extensibility
 532 The concept loc:Space represents a generic location inside a building. Therefore, it can also be used to
 533 define types of locations that do not fit directly into the fabric of the existing location model classes. This
 534 can either be achieved by defining (in an extension of the current KIM) additional properties or by
 535 defining new subclasses of loc:Space that are better suited for the respective purpose.
 536 EXAMPLE 14 If it is wanted to model a wing as a part of a building, then a class loc:Wing with specific wing
 537 properties may be added.


-----

###### 538 1.2.3 Class and subclasses
 539 Only the main Ontology classes and their main properties are described underneath. For further details
 540 please refer to clause [02].

 541 1.2.3.1 Location
 542 The following Class/Subclass structure is defined, present parent/child subclass relations are represented
 543 by the textual indentation of classes.

 544 • :Location // generic placeholder of (any) loc. concept
 545 • loc:Location // top-level class of KNX location concept
 546 • loc:Building
 547 • loc:Floor
 548 • loc:Outside
 549 • loc:Site
 550 o loc:SiteSegment
 551 • loc:Space
 552 o loc:Room
 553 o loc:RoomSegment
 554 • vcard:Address

|loc:Location|Description<br>A loc:Location is a physical named geographical place (such as "Lake side<br>meeting room", "Oskar's office", "The 5th floor", "Mountain view dwelling" etc.) that<br>is used to identify a point, an area or room, inside or outside of a building.<br>Main Object/Data Properties/ Disjoint With<br>• loc:hasLocation, loc:hasAdjacentLocation, loc:hasLocationUsage,<br>vcard:hasAddress, loc:hasOutside, :hasApplicationFunction,<br>:hasTagSet, loc:containsEquipment<br>• :number, :state<br>• -<br>Notes<br>The class can be used as a bridging class to other ontologies (e.g., to the Installation<br>Model, see clause 1.3).<br>The entire KNX location concept - using the namespace prefix :loc - is embedded as<br>a subclass of the generic placeholder class :Location. This allows an easy<br>replacement of the current KNX location concept with an alternative location<br>Ontology.|
|---|---|


-----

###### 555 1.2.3.2 Building
```
    loc:Building

 556 1.2.3.3 Floor

```
|loc:Building|Description<br>A loc:Building represents a whole building. A real-world building hosts several<br>other real-world elements such as stacked floors or spaces or rooms.<br>Main Object/Data Properties/ Disjoint With<br>• loc:hasFloor, loc:hasRoom, loc:hasSpace<br>• -<br>• loc:Site, loc:Floor, loc:Space, loc:Outside<br>Notes<br>For a building, it may also make sense to specify a location usage and/or an address.<br>The concept can be mapped to the IFC concept IfcBuilding.|
|---|---|

|loc:Floor|Description<br>A loc:Floor is a level or plane concept in a building. A floor is separating a<br>building into horizontal spaces.<br>A floor can have spaces assigned, in particular a room.<br>Main Object/Data Properties/ Disjoint With<br>• loc:hasLowerFloor, loc:hasUpperFloor, loc:hasRoom,<br>loc:hasSpace<br>• -<br>• loc:Site, loc:Building, loc:Space, loc:Outside<br>Notes<br>For a floor, it may make sense to specify a location usage, while a postal address is<br>usually already specified for the building containing the floor.<br>The concept can be mapped to the IFC concept IfcBuildingStorey.|
|---|---|


-----

###### 557 1.2.3.4 Outside
```
    loc:Outside

 558

 559 1.2.3.5 Site

```
|loc:Outside|Description<br>A loc:Outside is a class definition to describe that something is outside from the<br>perspective of a building.<br>loc:Outside is a class definition without any individuals.<br>An outside location can be specified with class assertion.<br>• A location individual is asserted with the class loc:Outside.<br>• Individuals with a type disjoint with class loc:Outside SHALL not be<br>asserted to loc:Outside.<br>• Any individual asserted with the class is outside of any building, not only of a<br>particular building. The relation to which building explicitly it is outside<br>cannot be expresses with class assertion only.<br>A relation to an outside location can be specified with property assertion.<br>• Individuals asserted with the OP relationship loc:hasOutside have<br>relations from within a particular building to the outside.<br>• The relation to which building an individual belongs is resolved by the<br>dependency to its spatial building context such as a room expressed as part of<br>a building (possible misuse and border cases are not considered here).<br>• Details on domain/range of OP relationship, see clause 1.5.1.<br>Main Object/Data Properties/ Disjoint With<br>• -<br>• -<br>• loc:Room, loc:RoomSegment, loc:Building, loc:Floor<br>Notes<br>Outside of a building covers a facade that is in the perimeter of a building envelope<br>but also a garage that is far away from it.<br>Examples for such outside locations are "West Facade" or "Rooftop" as part of an<br>Installation (instance data); it is obvious that they require some association with a<br>building and probably also (in case of a façade as a loc:Space) a specification of an<br>outside direction (e.g. "West").|
|---|---|

|loc:Site|Description<br>A loc:Site represents a collection of buildings and grounds that belong to a given<br>institution.<br>Main Object/Data Properties/ Disjoint With<br>• loc:hasBuilding, loc:hasSiteSegment<br>• -<br>• loc:Building, loc:Floor, loc:Space<br>Notes<br>The concept can be mapped to the IFC concept IfcSite.|
|---|---|


-----

###### 560 1.2.3.5.1 Site Segment
```
    loc:SiteSegment

 561 1.2.3.6 Space
    loc:Space

 562 1.2.3.6.1 Room

```
|loc:SiteSegment|Description<br>A loc:SiteSegment is a part of a ground, land or of a campus. It subdivides a site.<br>A site segment is usually occupied by a building.<br>Main Object/Data Properties/ Disjoint With<br>• -<br>Notes<br>The concept can be mapped to the IFC concept IfcSite.|
|---|---|

|loc:Space|Description<br>A loc:Space is an area or volume providing for certain functions of a building.<br>A space represents any kind of physical space that belongs to a building (inside a<br>building such as a room or outside such as a building facade).<br>Space can be also used on its own as a generic location. Furthermore, it can be<br>subdivided into locations of type space or any of its subclasses.<br>Examples for such spaces as part of an Installation (instance data) are an outside<br>balcony, a hollow ceiling, a cabinet, an installation shaft, or an area of a building that<br>extends over several floors.<br>When expressing an individual to be a room or room segment the properties<br>loc:hasRoom or loc:hasRoomSegment of the above-mentioned subclasses is<br>RECOMMENDE to be used.<br>Main Object/Data Properties/ Disjoint With<br>• loc:hasSpace<br>• -<br>• loc:Site, loc:Building, loc:Floor<br>Notes<br>Even if it is technically possible to subdivide from a space directly in a room segment,<br>it is recommended to subdivide only from a room.<br>The concept can be mapped to the IFC concept IfcSpace.|
|---|---|

|loc:Room|Description<br>A loc:Room is a space in a building that is delimited by walls/windows, ceilings,<br>floors and has a door or a passage to enter the room.<br>A room can be subdivided into locations of type room segment. A room may also be<br>part of another room such as a sauna (room) in a bathroom.<br>Main Object/Data Properties/ Disjoint With<br>• loc:hasRoom, loc:hasRoomSegment<br>• -<br>• loc:RoomSegment, loc:Outside<br>Notes<br>The concept can be mapped to the IFC concept IfcSpace.|
|---|---|


-----

###### 563 1.2.3.6.2 RoomSegment

 loc:RoomSegmen Description
```
    t

```
A loc:RoomSegment is an indoor space that represents a subdivision of a room.

A room segment can be further subdivided into locations of type room segment.

**Main Object/Data Properties/ Disjoint With**

                  - `loc:hasRoomSegment`

                  - `-`

                  - `loc:Room, loc:Outside`

###### Notes
The concept can be mapped to the IFC concept IfcSpace.

###### 564 1.2.3.7 Address 

 vcard:Address Description

An address is represented by an external ontology object of type vcard:Address,
which has data properties such as country-name, locality (city), street-address.

###### • an address can be assigned to any location via vcard:hasAddress property,
but preferably to a site or a building

**Main Object/Data Properties/ Disjoint With**

###### • 
 • 
 • all first Ontology subclasses of knx:Thing (see clause 1.1.7)

 Notes

 
 565 1.3 Installation Model

 566 1.3.1 Introduction
 567 This clause is not informative. 

 568 General requirements to the installation model as part of the KIM are defined in clause [02].

 569 The installation model identifies the required elements surrounding Points of a Device, necessary to
 570 describe an entire Installation from the perspective of a building/(BIM) oriented user or installer and with
 571 an IoT focus. Such parts are for example aspects in which Points interact or trades the Devices
 572 respectively their Points operate for. The identified elements need to be part of the KIM, as shown in
 573 Figure 6. 
 574 NOTE 10 The figure depicts a combination of instance data (from installation model) and catalog data (from product
 575 model).This differentiation is not explicitly shown.

 576 Notation Style

 577 • Blue boxes representing classes defining an Application Program of a Device including the Product
 578 information, created by a KNX manufacturer as part of an ETS Catalog Entry or as part of the
 579 standardization in KNX (for a Functional Block). 
 580 - Class :Functionality is a generic collector of any type of Points of a Device. 
 581 - Class :Channel is a specific collection of Points, which allows to express the grouping of
 582 Points belonging to a delimited functionality of a Device. 

|loc:RoomSegmen<br>t|Description<br>A loc:RoomSegment is an indoor space that represents a subdivision of a room.<br>A room segment can be further subdivided into locations of type room segment.<br>Main Object/Data Properties/ Disjoint With<br>• loc:hasRoomSegment<br>• -<br>• loc:Room, loc:Outside<br>Notes<br>The concept can be mapped to the IFC concept IfcSpace.|
|---|---|

|vcard:Address|Description<br>An address is represented by an external ontology object of type vcard:Address,<br>which has data properties such as country-name, locality (city), street-address.<br>• an address can be assigned to any location via vcard:hasAddress property,<br>but preferably to a site or a building<br>Main Object/Data Properties/ Disjoint With<br>• -<br>• -<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Notes<br>-|
|---|---|


-----

###### 583 • Brown boxes denote the :Point class that represents a data interface. Points can be grouped
 584 according to their intended usage.
 585 • Green boxes denote group concepts representing a specific view on Point information. In contrast to
 586 blue boxes these grouping of Points is mainly related to several Devices.
 587 - Class :FunctionPoint groups Points having a relation to a logical grouping of Points from
 588 several Devices to achieve an intended functionality (known as GA).

 589 • Pink boxes denote the :Equipment class, which represents tangible physical objects including a
 590 Device.
 591 • Boxes with annotation “subClassOf” define specific (child) classes. In Figure 6
 592 :ApplicationFunction or :FunctionPoint are such subclasses.

 593 • Red dotted lines and their direction describe OP relationships between classes, the here used OP
 594 relationship predicate is the name assigned to the dotted line.

containsAsset

**Product** **Asset**

hasProduct _subClassOf_

hasLoca�on hasPart

hasApplica�onFunc�on containsEquipment

**Loca�on** **Equipment** **Installa�on**

_subClassOf_ isProxyFor

hasTagSet

**Cabinet** **Device** _subClassOf_ **Gateway**

**ProcessKind**

**Opera�onKind** td:hasInterac�onAffordance

**QualityKind** hosts

hasTagSet

**Aspect** groups **Point** hasPoint **Func�onality** implements **Applica�onProgram**

hasDatapoint

isStatusOf _subClassOf_ _subClassOf_ hasAc�onpoint _subClassOfsupportsFunc�onalblock hasChannel_

hasEventpoint

**Applica�on**

**Func�onPoint** **Datapoint** **Ac�onpoint**

**Func�on** **Eventpoint** **Func�onalBlock** **Channel**

hasFunc�onPoint

###### 595 comprises
 596 Figure 6 – Installation Model

 597 EXAMPLE 15 In a (real-world) Installation project, the room MyKitchen exists, has the location usage Kitchen, and
 598 has an QK OvenSmokeDetection. A SmokeDetector device is assembled in the room MyKitchen, it
 599 has a sensor that in the end measures the smoke in the kitchen. 

|Product Asset<br>hasProduct<br>subClassOf<br>caƟon hasPart<br>containsEquipment<br>LocaƟon Equipment InstallaƟon<br>subClassOf isProxyFor<br>hasTagSet<br>Cabinet Device subClassOf Gateway<br>ProcessKind<br>OperaƟonKind td:hasInteracƟonAffordance<br>QualityKind<br>hosts|Col2|Col3|Col4|
|---|---|---|---|
|**ProcessKind**<br>|**ProcessKind**<br>|**ProcessKind**<br>|**ProcessKind**<br>|
|**ProcessKind**<br>||||
|**O**|**O**|**eraƟonKind**<br>|**eraƟonKind**<br>|


###### 600 • In the project, “myKitchen” is an instance of subclass loc:Room.
 601 • In the project, the QK OvenSmokeDetection is an instance of class :QualityKind, it has
 602 properties assigned, such as the “type of interest” Smoke. 

 603 1.3.2 Classes and subclasses
 604 Only the main Ontology classes and their main properties are described underneath. For further details ot
 605 to view the full extend, please refer to clause [02].

 606 The following Class/Subclass structure is defined, present parent/child subclass relations are represented
 607 by the textual indentation of classes.

 608 • :ApplicationProgram
 609 • :Aspect
 610 • :ApplicationFunction
 611  dic:airCtrl // an Application Function (AF) on the root
 612 • dic:airPressureCtrl // a sub structured AF
 613 • dic:airQualityCtrl // a sub structured AF contr. air quality
 614 • …


-----

###### 615  dic:audioCtrl
 616  dic:distributionCtrl
 617  dic:emissionCtrl
 618 • dic:individualRoomCtrl
 619 • …
 620  dic:generationCtrl
 621  dic:lightingCtrl // an AF for "light" switching
 622  dic:plantMngmtCtrl
 623  dic:sceneCtrl
 624  dic:shadingCtrl
 625  dic:switchingCtrl // an AF for "generic" switching
 626  dic:waterCtrl
 627 • :FunctionPoint
 628 • :Asset
 629 • :Equipment
 630  :Cabinet
 631  :Device
 632 • :Gateway
 633 • :Installation
 634 • :DatapointType
 635 • dic:ack // corresponds to DPT 1.016
 636 • dic:alarm  // corresponds to DPT 1.005
 637 • …
 638 • :DatapointTypeField
 639 • :Functionality
 640 • :Channel
 641 • :FunctionalBlock
 642  dic:fb.417
 643  …
 644 • :Location
 645 • :OperationKind
 646 • :Point
 647 • :Datapoint
 648  dic:dpa.417.71 // Info On Off 
 649  dic:dpa.321.51 // Room Temperature
 650  dic:dpa.320.51 // Outside Temperature
 651  …
 652 • :Actionpoint
 653 • :Eventpoint
 654 • :ProcessKind
 655 • :Product
 656 • :QualityKind
 657 • :Tag
 658 NOTE 11 All sub classes of :ApplicationFunction are not disjoint to each other, this allows to express
 659 an Application Function combined out of other functions.


-----

###### 660 1.3.2.1 Application Program

`:ApplicationProg` **Description**
```
    ram

```
                   
                   
                   
**Notes**

                        
###### 661 1.3.2.2 Aspect

`:Aspect` **Description**

EXAMPLE 16

                   
                   
                   
**Notes**

                             
###### 662 1.3.2.2.1 Application Function

|:ApplicationProg<br>ram|Description<br>Please refer to the general definition of Application Program in clause [03].<br>Main Object/Data Properties/ Disjoint With<br>• :implements, :hasChannel<br>• :manufacturer, :version, :model, :certificationStatus<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Notes<br>-|
|---|---|

|:Aspect|Description<br>Please refer to the general definition of Aspect in clause [03].<br>An Installation combines certain perspectives on the system in regard of the<br>Datapoints, as a generic referencing mechanism between one or more datapoints.<br>This is expressed in the KIM with the concept of an Aspect.<br>EXAMPLE 16 In a MaC ETS project a specifically expressed Aspect is a<br>Function Point that groups a larger set of Datapoints.<br>Main Object/Data Properties/ Disjoint With<br>• :groups:<br>• -<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Notes<br>-|
|---|---|

|:ApplicationFunc<br>tion|Description<br>Please refer to the general definition of Application Function in [03].<br>The class :ApplicationFunction itself expresses the root, first subclasses<br>mainly express initial Application Functions, next subclasses may structure it<br>further down.<br>• Application Functions mainly operate in specific trades. To reflect a trade,<br>a specific OP relationship predicate :operatesForTrade is defined.<br>• An Application Function groups typically more than one Function Point.<br>Moreover, it SHOULD have a QK and/ or Tags assigned. An Application<br>Function being a subclass (a child) of other Applications Functions (its<br>parents) inherits all definitions from this parent classes such as all here<br>expressed FPs and QKs.|
|---|---|


-----

|Col1|With the above-mentioned sub structuring of Application Functions, an application<br>taxonomy structure can be defined, with further down sub structuring corresponding<br>functions including adding additional Tags and/or FPs.<br>Example<br>A simple switch function with two FPs for the switch control and status and a<br>function dimming control, sub-structured to it and extending it ONLY with the two<br>additional FPs for the brightness control and status. As a whole the dimming<br>function is expressed with four FPs.<br>Main Object/Data Properties/ Disjoint With<br>• :hasFunctionPoint, :operatesForTrade<br>• :number, :state<br>• :FunctionPoint<br>Notes<br>The KIM allows also to define KNX manufacturer specific Application Functions<br>that are part of the Semantic Dictionary, for this see clause 1.1.8.3<br>Intended Usage<br>:operatesForTrade<br>Allows to express for which trade an Application Function operates.|
|---|---|


###### 663 Background

 664 Application Functions are the key elements of an Installation, they reflect the physical operations in a
 665 real-world building control. Consequently there must be a common way how the intended semantics can
 666 be generally expressed (from a customer centric Function  to a KNX centric Application Function ). 

**Func�on** **IoT Func�on** **ETS Func�on** **Applica�on**
**Func�on**

###### 667
 668 Figure 7 – Different perspectives on functionality

 669 EXAMPLE 17 On the level of Function a unit such as °C should be depicted to the customer when expressing a
 670 room temperature, on the level of the IoT Function the IoT Datapoint data type corresponding to
 671 this must be known. 


###### 672 In KNX S-Mode, traditionally, ETS has no semantical knowledge of the Application Function that is
 673 created in the project configuration of an Installation. The following list enumerates the main problems. 

 674 1. KNX Application Programs in the Devices and their Group Objects do not have a standardized
 675 description that can be interpreted, the naming and functional description of Group Objects is
 676 insufficient to conclude in a complete and deterministic way on any Application Function. 
 677 As a result, it is requested to have Tags assigned to Datapoints. 


-----

###### 678 2. During ETS commissioning, Devices are combined, and Group Objects are linked together via Group
 679 Addresses as part of a so called ETS Function. Also, during this process it is not possible to derive
 680 automatically applicative knowledge.

 681 As a result, it is requested to have Tags and/or QKs assigned to all of the created Function Points. 

 682 EXAMPLE 18 The basic KNX Application dimming is an overall task to switch the lights (on/off) and/or to dim the
 683 lights (brighter/darker). To fulfil this task to comply to the current KNX FB specification, this
 684 Application requires five Function Points each of it for a specific sub task. 

 685 3. Very often an Application Function belongs to more than one operational domain, such as fire safety
 686 and ventilation. Consequently, it must be possible to assign an ETS Function to trades. This allows to
 687 build on the assigned trades a cluster of operational domains in which an Application Function acts. 

 688 As a result, it is requested to have Trades assigned to an Application Function.  

 689 EXAMPLE 19 It is of importance to be able to distinguish application functions that have an effect on emission
 690 from those that for instance operate in an energy efficient lighting control, in this way being able
 691 to semantically express dedicated metrics (e.g. a power consumption value). 


###### 692 Such distinction cannot be based on textual representations that can only be processed by
 693 humans, but not by machines.

 694 The in the list above defined requirements shows that the semantics of an Application Function is derived
 695 mainly from its included IoT Datapoints. To express this an Application Function MUST support the
 696 following KIM elements as part of the class :ApplicationFunction. 

 697 • the assignment to a Trade, expressed with the OP :operatesForTrade
 698 • the FP assignment, expressed with the OP :hasFunctionPoint
 699 The essential assignment of FPs to possible QK/PKss, expressed with the OP :hasTagSet and the
 700 assignment between the status and control of FPs, expressed with the OP :isStatusOf is specified for
 701 a FP in the next clause. 


###### 702 NOTE 12 The KNX typical divided status- and value-Group-Objects may be combined to one IoT Datapoint in the
 703 IoT Function (for this refer to clause 1.3.2.2.2, OP relationship predicate :isStatusOf)
 704 An Application Function can be instantiated by the MaC ETS user (here called ETS Function) either
 705 based on predefined Application Functions from Semantic Dictionary or they are freely formed.
 706 In the latter case no semantic (Tag) information will be available after its creation, while in first case all
 707 semantic (Tag) information is present when it is created. For the Semantic Export of an Application
 708 Function, please refer to clause 2.1.

 709 EXAMPLE 20 The in Semantic Dictionary available Application Function dimming has four FPs, two of them are 
 710 described below, dimming up/down (LDASB_ASC) and the corresponding dimming status
 711 (LDAB_ADV). 
 712 Application Function Value
 713 Name  dimming
 714 Trade: Lighting
 715 IRI: http://schema.knx.org/2020/ontology/dictionaries/dic#dimming
 716 URN: urn:knx:fct.dimming
 717
 718 Function Point #1 
 719 Name: dimming up/down
 720 Quality Kind:  EquipmentType Luminare, Quantity Kind Dimming Level, Origin Default
 721 Trade: Lighting
 722 PointType: DPT 1.5
 723
 724 Function Point #2 
 725 Name: dimming status
 726 Quality Kind: VirtualEntityType State of Operation, StateKind Activation, Origin Default
 727 Trade: Lighting
 728 PointType: DPT 1.5
 729 :isStatusOf dimming up/down
 730


###### 731 NOTE 13 All above used values are the label text of the corresponding KIM element.


-----

###### 732 The following sub classes are defined as part of :ApplicationFunction, the Main Object/Data
 733 Properties/Disjoint With and Notes are n/a.

|Sub Class|Description|
|---|---|
|`dic:airCtrl`|Controls a quantity of the phenomenon air. The domain may contain several sub<br>domains such as controlling air quantity or pressure quality, volume and other<br>domains.|
|`dic:audioCtrl`|Controls the audio system, for example, the volume or playlist of a multi room<br>speaker system or a door communication system.|
|`dic:distribution`<br>`Ctrl`|Controls mainly energy flow via pipes or ducts from energy generation to energy<br>consumer in rooms (emission control).<br>**Example** <br>The HFDM collects the flow temperature demand signals from all heat consumers<br>(Functional Block HZC, HDTRT, DHWC, … ) in the „right-hand“ Heat<br>Distribution Segment, calculates the resulting heat demand and sends it to the<br>preceding „left-hand“ Heat Distribution Segment.<br>The hot water flow temperature in the Heat Distribution Segment can be pre-<br>controlled (by a valve Functional Block FTC) according to the resulting heat<br>demand of the consumers in the Distribution Segment.<br>The Flow Temperature Controller (Functional Block FTC) and the Flow Demand<br>Manager have a 1:1 relationship and are usually located in the same device.<br>Distribution Segments may even be cascaded. In this case the resulting heat demand<br>signals sent by the various HFDMs to the preceding „left-hand“ Distribution<br>Segment are collected there again by an HFDM, and the resulting heat demand is<br>sent to the pre-preceding Distribution Segment.|
|`dic:emissionCtrl`|Functions to optimize different energy consumers. Rooms, for example, may have<br>different supply media (e.g., water, air, electricity) to control room comfort. As a<br>result, different trades may be involved for a processing function (e.g. HVAC,<br>blinds and light level).<br>**Example** <br>A building unit is a cluster of rooms (spatial zone) belonging together.<br>• <br>In residential buildings e.g., an entire apartment or a single-family home.<br>• <br>In non-residential applications a building-unit could be a floor etc.<br>Each room may be controlled individually by a Functional Block HIRC in which<br>the current room temperature setpoint is provided by the room temperature setpoint<br>manager (Functional Block RSM).<br>The current room temperature setpoint in each room is calculated by the RSM and<br>may depend on time schedule, heating operating mode, configured setpoints, room<br>temperature sensor (Functional Block RTS), presence detection, window status etc.<br>• <br>The HIRC calculates and controls the position of the valve (Functional Block<br>HVA) in the room.<br>• <br>The Heating Flow Demand Manager (Functional Block HFDM) collects the<br>heat demands from all HIRCs and calculates the resulting heat demand that is<br>transmitted to the Heat Demand Transformer (Functional Block HDTRT).|


-----

|Col1|• The Heat Demand Transformer “converts” the resulting heat demand into the<br>corresponding hot water heat demand that is then transmitted to the HFDM in<br>the Heat Distribution Segment.|
|---|---|
|`dic:generationCt`<br>`rl`|Controls energy production such as boilers (fired with different types of fuels), heat<br>pump, solar power, district heating, etc.<br>**Example** <br>A heat production segment may contain one or more producers (boiler sequence)<br>which are coordinated by the Heat Producer Manager (Functional Block HPM).<br>In a system with only one boiler the HPM functionality is reduced to a minimum.<br>Each producer contains a Burner Controller (Functional Block BUC) and a Boiler<br>Controller BOC.<br>They are often integrated into one device. The HPM receives the resulting overall<br>heat flow demand in the heating system from the „first“ Flow Demand Manager<br>HFDM in the primary Heat Distribution Segment.<br>HPM and the „first“ HFDM have always a 1:1 relationship. The HPM controls the<br>Producers according to the actual resulting overall heat flow demand (from HFDM)<br>by sending the appropriate flow temperature demand to each Boiler Controller<br>(Functional Block BOC) which then controls the Burner Controller BUC<br>accordingly.|
|`dic:lightingCtrl`|Controls luminaries (such as on/off or dimming). The luminary is, for example,<br>switched on and off with a manual switch in the room. In addition, an automatic<br>signal may automatically switch off the luminary at least once a day, typically in the<br>evening to avoid needless operation during the night.|
|`dic:plantMngmtCt`<br>`rl`|Are plant spanning management functions such as_AlarmEventControl_ or<br>Schedulers.<br>A Scheduler automatically schedules the systems, such as heating, ventilation, and<br>lighting, to coordinate with facility usage.<br>_AlarmEventControl_ in an operation and maintenance monitoring system informs<br>responsible people about the bad working state of a device or process.<br>A fire alarm control, for example, protects people in an area of high fire risk and<br>controls doors, signs etc. on rescue routes.|
|`dic:sceneCtrl`|Is a customized setting of different trades (HVAC, lighting, blinds etc.) for an<br>activity or situation, for example in a room.|
|`dic:shadingCtrl`|Controls the solar irradiance by means of motorized sun protection (roller blinds,<br>Venetian blinds, blinds, and awnings). Solar radiation sensing can be done<br>individually in each room or collectively for many rooms on façade sensor. Very<br>often there are protection functions (e.g. wind protection) that interfere with the sun<br>protection.|
|`dic:waterCtrl`|Controls a quantity of the phenomenon water.|


###### 734 1.3.2.2.2 Function Point

|:FunctionPoint|Description<br>A :FunctionPoint groups typically more than one Point needed to express the<br>communication link between all the Points. The Points provide the input/output<br>data interfaces of the Devices in an Installation.|
|---|---|


-----

|Col1|A Function Point acts here as a specific subtask on the (overall) task that is<br>expressed by an Application Function.<br>Main Object/Data Properties/ Disjoint With<br>• :datapointType, :operatesForTrade, :isStatusOf, :operatesOnProtocol,<br>:hasTagSet<br>• :groupAddress, :readable, :writeable, :securityMode, :ipv6Multicast,<br>:nonKNXmappingAddress<br>• :ApplicationFunction<br>Notes<br>A Function Point expressing a QK MUST NOT use Tags from category<br>:EquipmentType or :Locality.<br>Intended Usage<br>:groupAddress<br>• Represents a numerical value of a Group Address in the Installation.<br>• The value is needed to map between a Function Point {Id} and a Group<br>Address. It must be known to the KNX IoT/Classic Gateway software<br>which actual Group Address value has to used when performing a<br>read/write operation to the Installation.<br>:securityMode<br>• Represents an enumeration value which describes the chosen security<br>mode of the Group Address in the ETS project.<br>Possible values are “On”, “Off” and “Auto”(the possible settings for a<br>Group Address in the MaC ETS).<br>:readable, :writeable<br>• A Function Point controls the functionality of the underlying KNX<br>System, regardless of if the Function Point is present at the KNX IoT 3rd<br>Party API or not.<br>It might be that following settings by the installer, the Function Point is<br>not allowed to be read/written from the KNX IoT 3rd Party API,<br>respectively its connected clients. Example is to disable the relative<br>Dimming.<br>The read/write limits from the 3rd Party Interface for a Function Point are<br>set with Boolean values true or false.<br>These settings have no impact on the actual Runtime behavior of the<br>underlying KNX Classic system. These settings are the top-level lever to<br>decide whether a KNX IoT 3rd Party Client may or may not read or write a<br>certain Datapoint or Function Point.<br>:ipv6Multicast<br>• The unacknowledged IPv6 (multicast) group notification address on the<br>KNX Point API. Set by the MaC for an individual Installation.<br>:nonKNXmappingAddress<br>• Used to express the address identifier from a non KNX protocol that is<br>mapped to a specific KNX IoT Datapoint.|
|---|---|


-----

|Col1|To define the actual protocol on which the KNX IoT Datapoint is mapped<br>the OP relationship predicate :operatesOnProtocol is used. With<br>this protocol information the address identifier can be resolved on its<br>corresponding format/ data structure, see examples below.<br>Due to the large number of possible non KNX protocols the data property<br>is not explicitly modeled per possible protocol; it is defined as a generic<br>(bit size unlimited) integer. Hence this the actual address identifier can be<br>expressed as a large – but unstructured – bit field.<br>EXAMPLE 21 A KNX IoT Datapoint with the GA 1234 is mapped to the<br>MBus protocol, the address identifier has the value 32.<br>MBus defines a 8 bit address, the corresponding MBus<br>mapping address is 32.<br>A KNX IoT Datapoint with the GA 1235 is mapped to the<br>Dali protocol, the address identifier has the value 0x3222.<br>Dali defines a 16-bit address, the corresponding Dali<br>mapping address is 0x3222. The in Dali defined<br>device/group/broadcast/command structure of the<br>address (defined with specific address bits) must be<br>determined individually, this structure is not expressed.<br>:isStatusOf<br>• For explanation see details in clause 1.5.3.|
|---|---|


###### 735 1.3.2.3 Asset
```
    :Asset

```
                 
                 
                 
                 
                 
###### 736 1.3.2.3.1 Equipment

|:Asset|Description<br>An :Asset is a container for objects in the Installation which have sort of<br>economic value and is owned and managed by an entity, e.g. a service organization.<br>• A tangible asset is physical property - it can be touched. The term is most<br>associated with fixed assets, such as buildings, HVAC systems, and equipment.<br>• An intangible asset is a non-physical asset that needs to be administered such as<br>licenses for a commissioning tool or an office software and other.<br>Main Object/Data Properties/ Disjoint With<br>• :containsAsset<br>• :name<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Notes<br>To separate tangible or intangible assets, there is currently no structure defined in<br>the KIM to allow this.|
|---|---|

|:Equipment|Description<br>Equipment is often referred to as "Fixed Asset". Via its OP relationship<br>loc:isEquipmentOf, an equipment has a relation to an element in the location,<br>in most cases inside a building, for example, a whiteboard, a chair, a table, a fan or<br>a drive, which one can assign a product category and/or product type.|
|---|---|


-----

|Col1|Main Object/Data Properties/ Disjoint With<br>• :hasPart, :hasProduct, :hasTagSet<br>• -<br>• :Installation<br>Notes<br>Owners need to keep track of what equipment they have, who made and delivered<br>it, when it needs maintenance, how to inspect it and track history of service requests<br>and work orders etc.<br>The following example shows how “equipment chains” of an :Equipment are<br>expressed.<br>• The :Equipment - individual “Fittings” has its corresponding<br>:Equipment - individual “Screws and Rails”, assigned via the<br>:Equipment property :hasPart.<br>Intended Usage<br>:hasProduct<br>The OP relationship :hasProduct allows specifying an :Equipment to be<br>expressed as a :Product with its product specific information (see also class<br>:Product).|
|---|---|


###### 737 1.3.2.3.1.1 Cabinet

`:Cabinet` **Description**

A :Cabinet is a physical enclosure for electrical or electronic equipment such as
automatic switches, fuses, circuit breakers, control devices, timers and similar.

**Main Object/Data Properties/ Disjoint With**

                 -                  
                 -                  
                 - :Device
**Notes**

**-**

###### 738 1.3.2.3.1.2 Device

 739 1.3.2.3.1.2.1 Introduction

 740 For Devices, elements need to be identified that are required in a KNX IoT environment, also to fulfill the
 741 motivation expressed in clause [02]. The elements can be logically grouped into two categories, finally
 742 the identified elements need to be part of the KIM. 

 743 Category - data required at Runtime

 744 • Data that are required to be accessible via the KNX IoT Point API and KNX IoT 3[rd] Party API. This
 745 data is mainly available at Runtime as part of the defined read/write communication methods. 

|:Cabinet|Description<br>A :Cabinet is a physical enclosure for electrical or electronic equipment such as<br>automatic switches, fuses, circuit breakers, control devices, timers and similar.<br>Main Object/Data Properties/ Disjoint With<br>• -<br>• -<br>• :Device<br>Notes<br>-|
|---|---|


-----

###### 746 Category - data required statically 

 747 • Data that is required to be processed in a subsequent automation level. This data must be available in
 748 an electronic format as part of the Semantic Export.

 749 Devices provide Points, which are the principal data interfaces of the entire Installation. With the
 750 :groups Object Property relationship predicate to other Points from other Devices, they build up the
 751 entire intended communication of the Installation.
 752 NOTE 14 The above-mentioned :groups Object Property relationship predicate between the Points is not
 753 established automatically and does not set up a Group Communication in an Installation. Technically,
 754 in KNX this is achieved by grouping (also known as “linking”) the intended Points with a unique Group
 755 Address “link”. 


###### 756 The concept corresponding to this “link” is referred in the KIM to as a Function Point. The exchange
 757 of data between Points over a Function Point is referred in KNX to as Group Communication.
 758 As described in clause 1.3.2, class :Device is a subclass of class :Equipment.

 759 1.3.2.3.1.2.2 Device Model
 760 In a simplified view, a Device consists of two main parts.

 761 1. A Device hardware (such as a PCB, the device housing or “hardwired” IO input/output terminals)

 762 2. An Application Program (provides “logical” interface IOs and parameter values controlling the IO
 763 behavior at runtime). In the end, it is the task of the Application Program to handle all i/o requests at
 764 runtime.

 765
 766 Figure 8 – KNX Device Components

 767 From the perspective of logical interworking at runtime, inputs/outputs for process communication,
 768 parameters and diagnostic Points exist (see the orange boxes above in Figure 8).

 769 A Point may represent information of the Device itself (e.g. life check signaling, power on LED) or data
 770 related to the intended automation functionality.

 771 The Device depicted above hosts an Application Program represented by a blue box that contains physical
 772 and logical inputs and outputs. These in/outputs may belong to a dedicated Device channel with the
 773 related hardware IOs (for example n- dimming channel - terminals in a n- fold dimming actuator device).
 774 In this case each channel is also representing a specific Functional Block, here a FB “Dimming Actuator”
 775 with its mandatory/optional in/outputs, parameters, or diagnostic Points. 

 776 • Parameter Points are available to configure an Application Program.

 777 • Diagnostic Points are available for monitoring purposes.

 778 • Input Points receive data after configuration 

 779 • Output Points send data after configuration. 

 780 Current ETS Management Client projects do not represent data given above if they are not realized as
 781 Group Objects. Although the KIM covers all concepts, some may therefore not be exportable from the
 782 ETS Management Client. 


-----

###### 783 The Point types are depicted as orange boxes in the above picture. In some realizations, it may be possible
 784 that hardwired I/O elements also provide Points that may be accessible through KNX IoT but do not
 785 provide corresponding input and output points, nor do they have links. 

 786 The KIM provides a formalization of the device model as shown in the Figure 8. The KIM class :Device
 787 can be used as a bridging class to other Ontologies. 

 788 All the blue boxes as a summary denote an entire Application.

 789 • The box :ApplicationProgram denotes an Application Program, please refer to the definition of
 790 Application Program in clause [03].

 791 • The box :Functionality denotes the topmost generic class collection of Points.

 792 • Boxes with annotation “subClassOf” define specific (child) classes. In Figure 9
 793 :FunctionalBlock and :Channel are such subclasses.

 794 • Red dotted lines and their direction describe OP relationships between classes, the OP relationship
 795 predicate used here is the name assigned to the dotted line.

isProxyFor

**Device** _subClassOf_ **Gateway**

td:hasInterac�onAffordance hosts

hasPoint implements

**Point** **Func�onality** **Applica�onProgram**

supportsFunc�onalblock hasChannel

_subClassOf_

**Func�onalBlock** **Channel**

###### 796 comprises
 797 Figure 9 – KNX Device Model

|:Device|Description<br>A :Device consists of components as described in the clause above, additionally in<br>Figure 8 and Figure 9.<br>Main Object/Data Properties/ Disjoint With<br>• :hasChannel, :supportsFunctionalBlock, :hasProxy, :hosts<br>• :downloaded, :modified, :serialNumber, :installationHints,<br>:individualAddress, :assignedTrade, :hardwareVersion, :firmwareVersion,<br>:state<br>• :Cabinet|
|---|---|


-----

|Col1|Notes<br>The OP relationship predicate td:hasPropertyAffordance from a Device to<br>Points (depicted in Figure 6) is not modelled in the KIM, it is used as part of the<br>Semantic Export, see clause 2.1.<br>Intended Usage<br>:individualAddress<br>Represents the string value of an individual address of an KNX Device. The format<br>is of x.y.z.<br>:downloaded<br>Represents the timestamp value of the last download of any Device data. This does<br>not only cover the Application Program but also the :individualAddress or<br>some configuration data. In KNX this data is not seen as an explicit part of the<br>Application Program.<br>:assignedTrade<br>Expresses which trade are defined for a Device (maximal per device). These trade<br>definitions do not originate from the KIM but have been self-assigned and defined<br>by an installer in the MaC. These trades may have a logical relation to the tags of<br>class :Trade but may not always be mappable one to one with the OP relationship<br>predicate :operatesForTrade.|
|---|---|


###### 798 1.3.2.3.1.3 Gateway

|:Gateway|Description<br>A :Gateway is a network node that connects two networks with different<br>transmission protocols and data formats together.<br>For example, the KNX IoT 3rd Party Server serves as an entry and exit point for an<br>Installation with KNX Classic devices (network 1) as all data must pass through or<br>communicate with the gateway prior to be accessible from an IP backbone (network<br>2).<br>Main Object/Data Properties/ Disjoint With<br>• :isProxyFor, http:authority<br>• -<br>• -<br>Notes<br>Intended Usage<br>http:authority<br>It hosts the HTTP scheme with an URI part for the gateway as a resolvable name or<br>as an IPv4 or IPv6 address. The default it is http://gateway.knx.local, another<br>example is http://192.168.0.5.|
|---|---|


-----

###### 799 1.3.2.3.2 Installation

`:Installation` **Description**

Please refer to the definition of Installation in [03].

An :Installation consists of equipment that is assigned to a location.

An Installation is a deployed system (e.g. HVAC system or fire protection system)
and consists of equipment (such as cabinets) and Functions that are used for a
particular purpose. The Functions are hosted in this case at a Location, for the
intended meaning of a Function see clause [03].

An Installation is always a combination of a postal address and project data,
configuration files, etc. The latter one can be expressed by the used equipment.

**Main Object/Data Properties/ Disjoint With**

                   -                    
                   - :contractNumber, :macVersion, :modified, :projectInstallationNumber,
:state

                   - :Equipment

**Notes**

                           
###### 800 1.3.2.4 Datapoint Type, Datapoint Type Field
 801 The KNX 3/7/2 specification defines various DPTs, such as numbered, boolean, bitfields or from these
 802 combined types, categorized as enumerated (including boolean), numbered or complex types. 

 803 Clients have per default no knowledge of the (bitwise) value composition for KNX Runtime values, such
 804 as the numerical value encoding and/or bit position. To a client user the value is offered as a (user
 805 friendly) string such as Auto or Comfort (for example in case of an enumerated type). 

 806 To ensure the Runtime interoperability on both sides, a sever needs to map from a KNX IoT 3[rd] Party
 807 Client given values to its corresponding Runtime value for the KNX System and vice versa. To support a
 808 mapping software the KIM hosts several mapping definitions. It has been preferred not to model each
 809 DPT characteristics (such as 8/16/32/64-bit number types, different ascii/utf-8 char/string encodings, …)
 810 with a corresponding KIM class and its constraints. This does not provide an added value for the mapping
 811 as such. 

 812 The figure below shows the general structure how a DPT information is structurally defined, a yellow
 813 background denotes a modelled KIM class, a white background an intermediate (not modelled) KIM
 814 concept, blue surrounded boxes denote KIM individuals.

|:Installation|Description<br>Please refer to the definition of Installation in [03].<br>An :Installation consists of equipment that is assigned to a location.<br>An Installation is a deployed system (e.g. HVAC system or fire protection system)<br>and consists of equipment (such as cabinets) and Functions that are used for a<br>particular purpose. The Functions are hosted in this case at a Location, for the<br>intended meaning of a Function see clause [03].<br>An Installation is always a combination of a postal address and project data,<br>configuration files, etc. The latter one can be expressed by the used equipment.<br>Main Object/Data Properties/ Disjoint With<br>• -<br>• :contractNumber, :macVersion, :modified, :projectInstallationNumber,<br>:state<br>• :Equipment<br>Notes<br>-|
|---|---|


-----

0 : auto (Auto)


**dic:hvacMode**


**dic:value2Count**


1 : comfort (Comfort)

:

4 : buildingProtec�on (..

0 : off (Off)

1 : on (On)

|dic:…8.1|Col2|
|---|---|
|||
|**hour**|**hour**|


**dic:bool**


###### 815


###### 816 Figure 10 – DPT decoding principle

|:DatapointType|Description<br>Represents corresponding DPTs from KNX Classic that standardizes a combination<br>of format, encoding, range and unit.<br>Naming Convention<br>A DPT MUST have the following structure as part of the Semantic Dictionary:<br>Individuals: dic:<name><br>Classes: n/a<br>The individuals part <name> MUST follow the structure as described with the<br>naming rules for IoT Datapoints in [05], clause IoT Datapoint.<br>Main Object/Data Properties/ Disjoint With<br>• :isAssembledWith<br>• :dptMajorNumber, :dptMinorNumber, :bitSize<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Intended Usage<br>:dptMajorNumber<br>Hosts the DPT major (int) number as specified by KNX .<br>:dptMinorNumber<br>Hosts the DPT minor (int) number as specified by KNX.<br>:bitSize<br>Hosts the overall DPT bit size as specified by KNX.<br>jsonschema:DataSchema<br>Hosts for a DPT its corresponding JSON basic data type, by using of specific<br>subclasses (for this please refer to clause 1.3.2.10).|
|---|---|


-----

|Col1|EXAMPLE 22 The KNX Classic DPT 9.001 is defined as dic:valueTemp, it<br>uses the following JSON basic data type.<br>• subclass of jsonschema:NumberSchema<br>:isAssembledWith<br>Host for a DPT the required DPT fields, expressed with individuals from class<br>:DatapointTypeField . With this also (complex) DPTs can be described that<br>constitutes several fields, each of them containing of other DPTs, bit fields or<br>enumerations with specified encodings from 3/7/2.<br>EXAMPLE 23 The KNX Classic DPT 8.001 defines a simple (integer) type, one<br>field is required to describe the entire DPT. The KNX Classic DPT<br>15.000 defines a complex type, eleven field are needed, such as to<br>describe the index, six access identification codes and other<br>elements.|
|---|---|


###### 817

|:DatapointTypeFi<br>eld|Description<br>Represents a field from a DPT from KNX Classic that defines some basic type<br>information.<br>Naming Convention<br>A field MUST have the following structure as part of the Semantic Dictionary:<br>Individuals: dic:<name><br>Classes: n/a<br>The individuals part <name> does not follow a specific naming rule, it reuses<br>existing DPT information.<br>Main Object/Data Properties/ Disjoint With<br>• qudt:unit, :includes<br>• schema:unitCode<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Intended Usage<br>:fieldType<br>Hosts the field type as specified in the KNX 3/7/2 specification (such as "V" or<br>"N").<br>:fieldResolution<br>Hosts the field resolution as specified by KNX.<br>:fieldStringSchema<br>Hosts the field string schema as specified by KNX.<br>:bitSize<br>Hosts the field bit size as specified by KNX.<br>:fieldPosition|
|---|---|


-----

|key/value pair|key|value|Title|
|---|---|---|---|
|keyvaluepair.auto|auto|0|Auto|
|keyvaluepair.comfort|comfort|1|Comfort|
|keyvaluepair.standby|standby|2|Standby|
|keyvaluepair.economy|economy|3|Economy|
|keyvaluepair.buildingProtection|buildingProtection|4|Building Protection|

|Col1|Hosts the starting LSB bit position of the DPT field in view of the entire DPT bit<br>stream.<br>10 10<br>qudt:unit, schema:unitCode<br>Hosts for a DPT its corresponding QUDT Ontology unit and/or UN/CEFACT<br>Common Code (https://schema.org/unitCode) is assigned.<br>EXAMPLE 24 The KNX Classic DPT 9.001 is defined as dic:valueTemp, its<br>corresponding DPT field uses the following unit assignments.<br>• qudt:unit: unit:DEG_C<br>• schema:unitCode = ”CEL”<br>:includes<br>Hosts specific information that depends on the field type from above.<br>Corresponding sub properties :includesDigit, includesDPT or<br>inludesKeyValuePair are used to express this.<br>EXAMPLE 25 The DPT 20.102 defines a simple (enumerated) type, one DPT<br>field is required to describe the entire DPT.<br>The DPT field contains of five key/value pairs for the actual<br>enumerations. Each pair defines the mapping between the<br>(external API) key and the (KNX) value.<br>The key is supplemented with a default user friendly (dcterms)<br>title (other strings with translations are possible).<br>key/value pair key value Title<br>keyvaluepair.auto auto 0 Auto<br>keyvaluepair.comfort comfort 1 Comfort<br>keyvaluepair.standby standby 2 Standby<br>keyvaluepair.economy economy 3 Economy<br>keyvaluepair.buildingProtection buildingProtection 4 Building Protection|
|---|---|


###### 818 1.3.2.5 Quality Kind, Process Kind, Operation Kind

 819 The main task of an Installation is to actuate, as a result of an observed object of interest. For this it
 820 must be defined in terms of its properties.

 821 NOTE 15 On the (real-world) Sensor/Actuator level an implemented procedure observes/actuates a property
 822 value (same as for the control level, here implemented with I/O inter-process elements).
 823 In cases where the property value cannot be retrieved directly it is taken from a beforehand
 824 performed sampling, such as the presence of a person achieved with radar/sonic samples. This is
 825 not distinguished in this specification, e.g., to define a concept similar to sosa:Sampler.

 826 In this specification an object of interest is defined with a Quality Kind or Process Kind. Both uses
 827 properties from below, each of them defines a specific semantic meaning. 

 828 • A “type of interest” property to describe what is observed/ is actuated upon. 

 829 In the domain of building control, the properties are Tags addressing an equipment, phenomenon, or
 830 virtual entity. 

 831 EXAMPLE 26 Air or Light for a phenomenon, State of Operation for a virtual entity or Boiler for an equipment.

 832 • A locality property to describe the generic “place of action” where the “type of interest” is observed/
 833 is actuated upon. 

 834 EXAMPLE 27 Floor or Room, which is in perspective of a generic place not the same as the instantiated room
 835 MyKitchen in an Installation.


-----

###### 836 • A dimension property to describe how the “type of interest” is observed/ is actuated upon, this can be
 837 distinguished in two ways.  

 838 1. A property with a continuous, measurable dimension, which is able to be determined without any
 839 additional context knowledge. The property is mainly located in the real-world, in this
 840 specification it is used together with a Quality Kind. 

 841 EXAMPLE 28 (1) An outside air temperature (locality/phenomenon/dimension). 
 842 (2) A window opening position in a room (equipment/dimension/locality). 


###### 843 The temperature (kelvin) or position (degree) does not need any additional context of any
 844 domain.  

 845 2. A property that is a discrete interpretation of another property (mainly from a QK from above),
 846 which is only able to be determined together with additional context knowledge from the domain
 847 of building control. The property is rarely located in the real-world, in this specification it is used
 848 together with a Process Kind. 

 849 EXAMPLE 29 (1) The occurrence of frost outside the building (dimension/phenomenon/locality/). 
 850 (2) The window opening state in a room (equipment/dimension/locality).


###### 851 The occurrence (true/false) or state (on/off) needs additional context. In the first case a
 852 temperature value below 273K (0 °C) outside of a building, in the latter case a position of
 853 at least 5°…10° degree of a (tilting) window (which represents specific knowledge from the
 854 building control domain).

 855 The semantic meaning of a QK/PK can be extended with further data. 

 856 • Some operation kind properties, describing by what means the “type of interest” is observed/ is
 857 actuated upon. 


###### 858 EXAMPLE 30 A Datapoint that actuates the QK "air temperature of a room" with a relative setpoint value. This
 859 is expressed as a combination of several individual properties (such as relative + setpoint).

 860 How the above-described properties are used together with specific tags, for this see clause 1.4.1.

|:QualityKind,<br>:ProcessKind|Description<br>Represents specific object of interests with observable/ actuatable properties,<br>distinguished by the dimension property (for this see details above).<br>• Source concepts expressing a Quality Kind/ Process Kind uses<br>preferably one of the child OPs of :hasTagSet.<br>• A Quality Kind/ Process Kind expressing the observable/ actuatable<br>properties uses preferably some child OPs of :hasTag (see clause<br>1.4.1, including some examples).<br>The Semantic Dictionary hosts a set of predefined QK/PQs individuals, used as<br>a template with a certain combination of observable or actuatable properties to<br>express semantics at:<br>• Datapoints as part of a product respectively ETS Catalog Entry (catalog<br>data) by using a predefined QK/PK such as an "Actuator State" or "Air<br>Temperature in a Room"<br>• Application Functions as part of an Installation (instance data) by using<br>a predefined Application Function such as a Light Dimming (which<br>includes predefined QKs/PKs)<br>Predefined Quality Kinds and Process Kinds MUST have the following structure<br>as part of the Semantic Dictionary:<br>Individuals: dic:qk.<name>, dic:pk.<name><br>Classes: n/a|
|---|---|


-----

|Col1|The <name> follows the principle to concatenate (if available) the property<br>labels in the order of "type of interest", dimension and an arbitrary number. A<br>number is used to limit the length of the name since the locality property may<br>occurs several times, each with a very long name.<br>EXAMPLE 31 A dic:qk.air_Temperature_1 or<br>dic:qk.sensor_Activation_1 and other.<br>Main Object/Data Properties/ Disjoint With<br>• :hasTag<br>• -<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Notes<br>The QK/PK is related to a sosa:FeatureOfInterest but not the same, it<br>uses the concept idea but expresses data differently. For the term definition of<br>QK/PQ, please refer to clause [03].|
|---|---|


###### 861

|:OperationKind|Description<br>Represents specific properties to describe by what means a QK/PQ is actuated<br>upon/observed.<br>• Source concepts expressing an Operation Kind uses the OP<br>:hasTagSet.<br>• An Operation Kind expressing the means uses preferably some child<br>OPs of :hasTag (see clause 1.4.1, including some examples).<br>The Semantic Dictionary hosts a set of predefined Operation Kind as part of<br>QKs/PKs, finally to define Datapoints of a product respectively ETS Catalog<br>Entry (catalog data).<br>Predefined Quality Kinds and Process Kinds MUST have the following structure<br>as part of the Semantic Dictionary:<br>Individuals: dic:ok.<name><br>Classes: n/a<br>The <name> follows the principle to concatenate (if available) property labels<br>from point operation and point function type.<br>EXAMPLE 32 A dic:ok.enumeration_Command or<br>dic:ok.realtive_Command and other.<br>Main Object/Data Properties/ Disjoint With<br>• :hasOrigin,:hasPointFunctionType,<br>:hasPointOperation,:isReferencedBy<br>• -<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)|
|---|---|


-----

|Col1|Notes<br>Expressing an Operation Kind without a related QK/PK has a limited meaning.<br>It only defines how a Datapoint value is operated.<br>Intended Usage<br>:isReferencedBy<br>Allows an Operation Kind individual to express a relation to an individual of<br>QK/PK.|
|---|---|


###### 862 1.3.2.6 Functionality

|:Functionality|Description<br>Represents functionality, necessary to accomplish all the tasks for which a device is<br>designed for.<br>It is defined as an aggregation/set of Points, it can be compared also to a container<br>of necessarily I/O operations.<br>Main Object/Data Properties/ Disjoint With<br>• :hasPoint<br>• -<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Notes<br>Points expressed by a functionality are a defined part of the Application Program of<br>a Device (instance data).<br>The class :Functionality has several subclasses. They are defined to<br>differentiate the specific use of Points:<br>• as a Channel as part of a Device<br>• as a standardized Functional Block as part of the KIM<br>The aggregation of all Points from class :Functionality and its subclass<br>:Channel represents the total number of Points in an Application Program, with<br>respect to a current Configuration with a MaC (instance data).<br>EXAMPLE 33 A device implements three separate tasks, room temperature<br>control, presence detection and light dimming.<br>• The room temperature control functionality is configured with<br>several Points, some of them are expressed with a channel.<br>The channel may also form (:comprise) a specific Functional<br>Block #ABC.<br>• The presence detection functionality is configured with several<br>Points, no channel is expressed.<br>• The light dimming functionality is not configured.<br>As a result, the configured set of Points define the total number of<br>Points.|
|---|---|


-----

|Col1|Intended Usage<br>:hasPoint<br>A Functionality allows expressing a group of Points that belong to it, for details see<br>corresponding OP description in clause 1.5.2.|
|---|---|


###### 863 1.3.2.6.1 Channel

|:Channel|Description<br>Please refer to the definition of Channel in [03].<br>A :Channel represents a functionality, specified the same as with class<br>:Functionality.<br>It is defined as a certain (sub) functionality with Points that perform their I/O<br>operations with related hardware connections (i.e., input or output terminals). In<br>most cases the hardware connections are available more than once on a Device.<br>Main Object/Data Properties/ Disjoint With<br>• :comprises<br>• -<br>• :FunctionalBlock<br>Notes<br>Points expressed by a Channel are a defined part of the Application Program of a<br>Device (instance data).<br>A specific combination of Points within a Channel may express a defined KNX<br>Functional Block behavior (but they are not the definition of this Functional Block).<br>• The implementation of additional Points is decided by the Product vendor.<br>• The implementation of optional defined Points of a Functional Block is<br>decided by the Product vendor.<br>• The implementation of mandatory defined Points of a Functional Block is<br>obligatory.<br>In case of several Channels some of the here required Points may not be associated<br>with each Channel directly, as a per Channel individually available Point. Possibly<br>they are shared by several Channels whereas each Channel implements this very FB<br>(such as a current temperature input). This is done by defining the Point globally as<br>part of the Application Program, which is then technically (memory wise) shared<br>by each Channel.<br>Intended Usage<br>:comprises<br>Define the existence of a FB as part of a Channel, for details see corresponding OP<br>description in clause 1.5.2.|
|---|---|


-----

###### 864 1.3.2.6.2 Functional Block
 865 The subclasses given in the :FunctionalBlock class are examples, included in the Semantic
 866 Dictionary (see clause 1.1.8.4). The :FunctionalBlock class itself have no individuals.

`:FunctionalBlock` **Description**

Please refer to the definition of Functional Block in [03].

A :FunctionalBlock represents a functionality, specified the same as with
class :Functionality.

It is defined as a certain (sub) functionality with a combination of mandatory/
optional Datapoints that express an application behavior standardized by KNX
(KNX Functional Block).

**Naming Convention**

Functional Blocks MUST have the following structure as part of the Semantic
Dictionary:

Individuals: `n/a`

Classes: `dic:fb.<functionalblock-id>`

**Main Object/Data Properties/ Disjoint With**

                   -                    
                   - :iot

                   - :Channel

**Notes**

Points expressed by a Functional Block are a defined part of the KIM (Semantic
Dictionary data).

Intended Usage
```
                :iot

```
A Functional Block is identified with a unique id (IOT) as a numerical number.

###### 867 1.3.2.7 Location
 868 Please refer to the clause 1.2.3.1.

 869 1.3.2.8 Point

|:FunctionalBlock|Description<br>Please refer to the definition of Functional Block in [03].<br>A :FunctionalBlock represents a functionality, specified the same as with<br>class :Functionality.<br>It is defined as a certain (sub) functionality with a combination of mandatory/<br>optional Datapoints that express an application behavior standardized by KNX<br>(KNX Functional Block).<br>Naming Convention<br>Functional Blocks MUST have the following structure as part of the Semantic<br>Dictionary:<br>Individuals: n/a<br>Classes: dic:fb.<functionalblock-id><br>Main Object/Data Properties/ Disjoint With<br>• -<br>• :iot<br>• :Channel<br>Notes<br>Points expressed by a Functional Block are a defined part of the KIM (Semantic<br>Dictionary data).<br>Intended Usage<br>:iot<br>A Functional Block is identified with a unique id (IOT) as a numerical number.|
|---|---|

|:Point|Description<br>A :Point represents an interface to data, as specified in clause [03].<br>A Point MAY be used in conjunction with its available subclasses, this allows to<br>provide different degrees of informational value on a Point such as to define its<br>general operation types.|
|---|---|


-----

|Col1|• class :Datapoint, describe a point that is exposing a (r/w) data interface,<br>details see on clause Datapoint.<br>• class :Actionpoint, describe a point that invokes an action on the<br>receiver, may be introduced in the KNX IoT Point API, for this see clause<br>[06].<br>• class :Eventpoint, describe a point that triggers an event on the receiver<br>(an occasion that do not need further data to be evaluated), may be<br>introduced in the KNX IoT Point API, for this see clause [06].<br>Main Object/Data Properties/ Disjoint With<br>• -<br>• -<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Notes<br>The class has no individuals as part of the Semantic Dictionary.|
|---|---|


###### 870 1.3.2.8.1 Datapoint

`:Datapoint` **Description**

A :Datapoint is a more detailed Datapoint that can be accessed by read/write
operations. It has the same meaning as a Datapoint, described in clause [03].

                   - A Datapoint may add DPT information and/or additional Tag information
from the Semantic Dictionary, including QK/PKs and Operation Kinds.
This allows to specify a Datapoint more precisely, with the derivation of
various processing functions to express any type of sensor, actuator,
control device, and human interface.

                   - A Datapoint with specific tags is also used to represent a standardized
Datapoint of a Functional Block. For this the correct DPT information and
all necessary tags MUST be applied to the Datapoint that is part of the
Semantic Dictionary.

The underneath demonstrates the tag usage from low informational value to high
informational value.

1. Datapoint

Represents the minimal Datapoint informational value in a current KNX
Classic Installation (with at least information on the bit size and basic r/w
and limitation).

2. Datapoint with DPT information

Represents the maximal Datapoint informational value in a current KNX
Classic Installation[ 6)].

3. Datapoint with DPT and Tag information, QKs/PKs or Operation Kind

Represents a semantically detailed Datapoint, up to a standardized
Datapoint of a KNX Functional Block.

6) Gaining automatically additional tag information such as an input (dic-tag:if.i) tag by evaluating
combinations of GO communication flags is not considered here.

|:Datapoint|Description<br>A :Datapoint is a more detailed Datapoint that can be accessed by read/write<br>operations. It has the same meaning as a Datapoint, described in clause [03].<br>• A Datapoint may add DPT information and/or additional Tag information<br>from the Semantic Dictionary, including QK/PKs and Operation Kinds.<br>This allows to specify a Datapoint more precisely, with the derivation of<br>various processing functions to express any type of sensor, actuator,<br>control device, and human interface.<br>• A Datapoint with specific tags is also used to represent a standardized<br>Datapoint of a Functional Block. For this the correct DPT information and<br>all necessary tags MUST be applied to the Datapoint that is part of the<br>Semantic Dictionary.<br>The underneath demonstrates the tag usage from low informational value to high<br>informational value.<br>1. Datapoint<br>Represents the minimal Datapoint informational value in a current KNX<br>Classic Installation (with at least information on the bit size and basic r/w<br>and limitation).<br>2. Datapoint with DPT information<br>Represents the maximal Datapoint informational value in a current KNX<br>Classic Installation 6).<br>3. Datapoint with DPT and Tag information, QKs/PKs or Operation Kind<br>Represents a semantically detailed Datapoint, up to a standardized<br>Datapoint of a KNX Functional Block.|
|---|---|


-----

|Col1|Naming Convention<br>The naming structure for a standardized Datapoint of a FB MUST NOT use leading<br>zeros in the functionalblock-id/property-id, the numbers are in accordance with<br>volume 7:<br>Individuals: n/a<br>Classes: dic:dpa.<functionalblock-id>.<property-id><br>Main Object/Data Properties/ Disjoint With<br>• :hasPointInterface,:operatesOnProtocol,:hasTagSet<br>:operatesForTrade,:datapointType<br>• :composes,:isMetaDataOf,<br>• :readable,:writeable,:pid,:nonKNXmappingAddress<br>:jsonschema:minimum,:jsonschema:maximum<br>• :Actionpoint,:Eventpoint<br>Notes<br>The class has no individuals as part of the Semantic Dictionary.<br>Intended Usage<br>:readable, :writeable<br>It might be that a Datapoint is not allowed to be read/written, this depends on the<br>configuration of the Installation. The flags can be used to represent the<br>communication flags of a Group Object.<br>10), 10)<br>:jsonschema:maximum :jsonschema:minimum<br>Limits the numerical Datapoint data values in its applicative behavior such as the<br>allowed temperature range of a RTC setpoint, this limitation SHALL not be the<br>same as the range from the Point (DPT) type information.<br>:isMetaDataOf<br>For explanation see details in clause 1.5.3.<br>:hasTagSet<br>The OP is used with specific (child) OP relationship predicates to express an<br>observation or actuation of specific properties, a Datapoint is performing. The<br>properties are defined as part of a QK/PK, for this see clause 1.4.1.<br>:composes<br>A group of standardized Datapoint allows to express (to compose) a Functional<br>Block, for details see corresponding OP description in clause 1.5.2.<br>:pid<br>A standardized Datapoint of a FB is identified with a unique id (PID) as a<br>numerical number.<br>:nonKNXmappingAddress<br>For details see at Function Point.<br>:datapointType|
|---|---|


-----

|Col1|The OP is used to add additional DPT information from the Semantic Dictionary to<br>a Datapoint.<br>NOTE 16 In an Installation the DPT information is nearly in all cases assigned to<br>a Datapoint, for an ETS Catalog Entry it MUST be assigned.|
|---|---|


###### 871 1.3.2.9 Product

`:Product` **Description**

A :Product is the item offered for sale; it can be assigned from any
equipment.

**Main Object/Data Properties/ Disjoint With**

                   -                    
                   - :mediaType, :certificationStatus, :manufacturer, :orderNumber

                   - all first Ontology subclasses of knx:Thing (see clause 1.1.7)

**Notes**

Manufacturers usually provide identifiers for each product they make. Identifier
examples are type/model or version number or the order number.

###### 872 1.3.2.10 JSON Schema
 873 The following Class/Subclass structure are defined, present parent/child subclass relations are represented
 874 by the textual indentation of classes. 

 875 • jsonschema:DataSchema
 876 • jsonschema:ArraySchema
 877 • jsonschema:BooleanSchema
 878 • jsonschema:IntegerSchema
 879 • jsonschema:NullSchema
 880 • jsonschema:NumberSchema
 881 • jsonschema:ObjectSchema
 882 • jsonschema:StringSchema

|:Product|Description<br>A :Product is the item offered for sale; it can be assigned from any<br>equipment.<br>Main Object/Data Properties/ Disjoint With<br>• -<br>• :mediaType, :certificationStatus, :manufacturer, :orderNumber<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)<br>Notes<br>Manufacturers usually provide identifiers for each product they make. Identifier<br>examples are type/model or version number or the order number.|
|---|---|

|Schema|Description|
|---|---|
|`jsonschema:`<br>`DataSchema`|The JSON data schema allows to**derive** the JSON basic data type for an  Datapoint<br>or Function Point such as boolean, integer, number, string, etc.<br>• <br>Every DPT as part of the Semantic Dictionary has its corresponding JSON<br>data schema assigned.<br>• <br>The actual JSON data scheme information for an Datapoint (aka Point/GO<br>or Function Point/GA) can be derived from its assigned DPT with the OP<br>relationship predicate`:datapointType`. <br>**Notes**<br>Other solutions outside of the KIM that are more efficient for constrained devices<br>can be considered for the below latter two schema types.|
|`jsonschema:`<br>`ObjectSchema`|KNX DPTs that are in themselves a combination of individual DPTs<br>(concatenation) or enumerated values follow this scheme.|


-----

|jsonschema:<br>StringSchema|KNX DPTs that are ONLY single character or string values follow this scheme.<br>They are not needed to model further.|
|---|---|
|`jsonschema:`<br>`NumberScheme`<br>`jsonschema:`<br>`IntegerScheme`|KNX DPTs that are float, integer values follow this scheme.|
|`jsonschema:`<br>`BooleanSchema`|KNX DPTs that are bool values follow this scheme.|


###### 883 1.4 Tag Model
 884 This clause is normative.

 885 The definition of Tag can be found in [03], its general meaning as part of the Semantic Dictionary is
 886 described in clause 1.1.8.4.4. Tags are grouped in the Semantic Dictionary in specific subclasses of class
 887 :Tag, each subclass has a specific meaning, each tag included in a subclass defines a different value of
 888 that meaning.
 889 EXAMPLE 34 The subclass :LocationUsage defines the specific meaning of "what is the usage of a
 890 location", different tags in this class define values for a room or kitchen. 
 891 In the KIM a certain source is referring with an OP relationship[ 7)] predicate to a well-defined semantics,
 892 expressed with a single tag or with a collection of tags, in the latter case with a QK/PK.

 893 • In an Installation the source will be mainly datapoints, devices or locations, such as a room of the
 894 actual installation or an application function as part of the room. 

 895 With this a client is able to search in an installation for similar or related content by using specific
 896 tags in relation with specific OPs, such as to classify all datapoints that are outputs or all datapoints
 897 that relate to a facade (location) expressing an outside temperature sensor. 

 898 • In a Product/ETS Catalog Entry this source will be mainly a datapoint.

 899 NOTE 17 To simply assert tags to an entity as in Haystack may be ambiguous, such a tag context is unclear
 900 with a missing OP relationship predicate.

 901 1.4.1 Tag Relations

 902 In an Installation the physical values in general are measured and adjusted by an intermediate e.g., a
 903 Sensor or an Actuator. To describe this situation, there may be a need to have a bundle of two or more
 904 QK/PKs, describing the different "type of interest" on a source concept, one to be actuated upon or
 905 observed, the other to be measured or adjusted. 

 906 EXAMPLE 35 A Datapoint defines a QK with a primary phenomenon property, which is observed. This Datapoint
 907 defines a secondary QK with an equipment property which measures on behalf (see example in
 908 Figure 15 in next clause below).

 909 Moreover, often a Datapoint or Function Point is assigned with a complex DPT, this must be generally
 910 expressed with a bundle of two or more QK/PKs.


###### 911 EXAMPLE 36 A complex DPT is defined with several DPT fields, each part is addressing a QK/PK with a "type of
 912 interest" and dimension. The DPT parts differ in its operation kind properties such as a Trigger or
 913 Absolute Value (:PointOperation). 
 914 It is of importance to clearly identify to which QK the Tigger or Absolute Value belongs. If
 915 assigned (two times) directly to the Datapoint (instead as part of each QK individually) this
 916 separation cannot be made. In KNX Classic such a complex DPT with a similar behavior is
 917 250.600. 


7) For details how to express semantic relationships between (linked) data, please refer to clause 2.1.


-----

###### 918 The next figure shows how different source concepts can be related with specific OP relationship
 919 predicates[ 8)] to a QK/PK or Operation Kind. For the limitation, how many of them each source concept
 920 can express see cardinality in clause 1.4.4.


###### Source Concepts


###### Tags

|LocaƟon|Col2|
|---|---|
|**FuncƟonPoint**|**FuncƟonPoint**|

|Datapoint|Col2|
|---|---|
|**Datapoint**||


###### 921 • …
 922 Figure 11 –Tagging of Source Concepts with Tag Bundles

 923 NOTE 18 The options to express individual tags on a source concept is not shown in the figure above, for this
 924 please refer to the next clause.

 925 When applying tag bundles on a source concept some rules must be considered (with some constraints).

 926 1. In case of a "type of interest" property at least the OP relationships for the corresponding dimension
 927 SHOULD be expressed.


###### 928 EXAMPLE 37 Expressing a QK only with Air (phenomenon); not expressing the interest in the Temperature
 929 (quantity) is for this case an unusable definition. Having only the Temperature expressed may
 930 be usable in some cases.

 931 2. To operate with the value, at least one (observable/actuatable) dimension property SHOULD be
 932 expressed.

 933 NOTE 19 The value is a property of the Datapoint, here also the read/ write methods are supported. With
 934 the dimension property at least a simple (atomic) type information is available for the value. But
 935 only for a Datapoint that has assigned a DPT information (format/ unit information) a successful
 936 (r/w) operation is ensured.


###### 937 3. Only one "type of interest" property MUST be expressed per individual, for this see also the
 938 cardinality in clause 1.4.4.

 939 EXAMPLE 38 A boiler-water-temp, expressing a "type of interest" in the boiler (equipment) and water
 940 (phenomenon) together with the property temperature (dimension).


###### 941 It is impossible to derive to which “type of interest” (equipment or phenomenon) the temperature
 942 (dimension) belongs to.

 943 4. Only one dimension property MUST be expressed per individual, for this see also the cardinality in
 944 clause 1.4.4.

 945 EXAMPLE 39 A light-luminance-state, expressing a "type of interest" in the light (phenomenon) together with
 946 the property luminance (dimension) and state (dimension).

8) The used OP relationship predicates may be semantically descriptive or only a hint, options:

:hasQualityKind // the source concept has a QK (a semantical hint)

       - :observes… // the source concept has a QK that observes something

       - :actsOn… // the source concept has a QK that actuates upon something

       - :measures… // the source concept has a QK that is measuring something

       - :adjusts… // the source concept has a QK that is adjusting something


-----

###### 947 It is impossible to derive to which dimension property (luminance or state) the “type of interest”
 948 light (phenomenon) belongs to.

 949 1.4.1.1 Datapoint Relations 
 950 The following figures show the detailed tags of which a Datapoint can be expressed as part of an
 951 Installation (instance data) or as part of the ETS Catalog Entry (catalog data). 

**Tag** **DatapointType**

_subClassOf_

**Locality** **PointInterface** **Trade** **Protocol**

**StateKind**

**Quan�tyKInd**

**…**
**VirtualEn�ty**

hasPointInterface operatesForTrade operatesOnProtocol datapointType

**max 2** **max 1**

hasTag

                - hasLocality

              - …

**ProcessKind**

hasTagSet **Datapoint**

**Opera�onKind**       - hasQualityKind

                               - hasProcessKind

**QualityKind**

###### 952
 953 Figure 12 – Tagging model for Datapoints

 954 1.4.1.2 Function Point Relations 
 955 The following figure show the detailed tags of which a Function Point can be expressed as part of an
 956 Installation (instance data).

**Tag** **DatapointType**

_subClassOf_

**Locality** **PointInterface** **Trade** **Protocol**

**StateKind**

**Quan�tyKInd**

**…**
**VirtualEn�ty**

operatesForTrade datapointType

**max 1**

hasTag

                - hasLocality

              - …

**ProcessKind**

hasTagSet **Func�onPoint**

**Opera�onKind**       - hasQualityKind

                               - hasProcessKind

**QualityKind**

###### 957
 958 Figure 13 – Tagging model for Function Points

|PointInterface|Trade|Protocol|
|---|---|---|

|PointInterface|Trade|Protocol|
|---|---|---|


-----

###### 959 1.4.1.3 Application Function Relations 
 960 The following figure show the detailed tags of which an Application Function can be expressed as part of
 961 an Installation (instance data).

**Tag** **DatapointType**

_subClassOf_

**Locality** **PointInterface** **Trade** **Protocol**

**StateKind**

**Quan�tyKInd**

**…**
**VirtualEn�ty**

operatesForTrade

hasTag

                  - hasLocality

                - …

**ProcessKind** **Applica�on**

**Opera�onKind** **Func�on**

**QualityKind**

###### 962
 963 Figure 14 – Tagging model for Application Functions

|PointInterface|Trade|
|---|---|


-----

###### 964 1.4.2 Examples
 965 Two examples are given how a QK can be expressed with Tags for an input/ output Datapoint. 

 Presence Detection

**Sensor**
**<<Point>>**

The Sensor <<Point>> performs an observation on two "type of interests" Analog/Digital
with observable/measurable properties using two inputs. Input

a. `:observes… the presence of a person in a location (the primary` measures observes

QK in the real world)

b. `:measures… the status of a detector (the secondary QK)`

on / off

**Detector**

The Sensor provides multiple semantic (tag) information for all Actuators
that are involved in the information exchange as information sinks. Every
Actuator wanting to process the Sensor information must be able to

**Floor**

understand the "dimension" information provided by the Sensor.

QK Instance **#1** **#2**

Property “type of interest” Person (PhenomenonType) State of Operation (VirtualEntityType)

Property “dimension” Presence (StateKind) Movement (StateKind)

Property “locality” Floor (Locality)       
Property type observable measurable

Point raw value 1 1

Point type boolean* boolean*

Point enums true, false* true, false*

###### Pipe Segment Actuator

**<<Point>>**

The Actuator <<Point>> performs an actuation on two QKs with Analog/DigitalOutput
actuatable/adjustable properties using two outputs.

adjusts actsOn

c. `:actsOn…` the pipe in a system (the primary QK in the real
world)

d. `:adjusts…` the voltage of a motor between 1…10 volt (the
secondary QK) **Motor**

**Pi**

QK Instance **#1** **#2**

Property “type of interest” Water (PhenomenonType) DC (PhenomenonType)

Property “dimension” Vol. Flow Rate (QuantityKind) Voltage (QuantityKind)

Property “locality” Pipe Section (Locality)       
Property type actuatable adjustable

Point raw value 25.5 8

Point type float* float*

Point unit m[3]/s* volt*

_*_ Retrieved DPT information, assigned with the OP relationship predicate :datapointType to a Datapoint.

###### 966 Figure 15 – Quality Kind and their OP relationship predicates

|QK Instance|#1|#2|
|---|---|---|
|Property“type of interest”|Person<br>(PhenomenonType)|State of Operation  (VirtualEntityType)|
|Property“dimension”|Presence<br>(StateKind)|Movement<br>(StateKind)|
|Property “locality”|Floor<br>(Locality)|-|
|Property type|observable|measurable|
||||
|Point raw value|1|1|
|Point type|boolean*|boolean*|
|Point enums|true, false*|true, false*|

|QK Instance|#1|#2|
|---|---|---|
|Property “type of interest”|Water<br>(PhenomenonType)|DC <br>(PhenomenonType)|
|Property“dimension”|Vol. Flow Rate (QuantityKind)|Voltage<br>(QuantityKind)|
|Property “locality”|Pipe Section<br>(Locality)|-|
|Property type|actuatable|adjustable|
||||
|Point raw value|25.5|8|
|Point type|float*|float*|
|Point unit|m3/s*|volt*|


-----

###### 967 1.4.3 Classes and subclasses
 968 Only the main properties of the Ontology classes are described underneath. For further details please refer
 969 to [02].

 970 1.4.3.1 Tag

 971 The Tag category do not describe real existing things, it only expresses a classification. 

 972 EXAMPLE 40 It is possible to describe that an Installation has: 
 973 • a MyFloorLevel_1 location individual with an Datapoint that has a QK, here the Room is the
 974 locality of the observation or actuation. 


###### 975 • a MyGardenTempSensor device individual with an Datapoint that has a QK, here the Person
 976 is the type of interest of the observation or actuation. 
 977 Some of the Tags are not directly relevant on each source concept as described in clause 1.4.1, this is 
 978 indicated in the corresponding cardinality in clause 1.4.4.

 979 The following Class/Subclass structure is defined, present parent/child subclass relations are represented
 980 by the textual indentation of classes. Examples used in the descriptions are included in the Semantic
 981 Dictionary (see clause 1.1.8.4). 

 982 • :Tag
 983 • :EquipmentType
 984 • :Locality
 985 • :LocationUsage
 986 • :Origin
 987 • :PhenomenonType
 988 • :PointFunctionType
 989 • :PointInterface
 990 • :PointOperation
 991 • :PointType
 992 • :Protocol
 993 • :QuantityKind
 994 • :StateKind
 995 • :Trade
 996 • :VirtualEntityType

 997 Classes used from more concepts rather than Point and Function Point do not contain an explicit "Point"
 998 reference in their name. 
 999 NOTE 20 All sibling subclasses of :Tag are disjoint to each other, hence this it is not described in these sub clauses.

|:Tag|Description<br>The class :Tag - as one of the main classes of the Semantic Dictionary - is used as<br>a generic parent class of all underlaying Tag concepts hosted in specific subclasses<br>of the dictionary. For more information see clause 1.1.8.4.<br>Main Object/Data Properties/ Disjoint With<br>• -<br>• dctterms:title<br>• all first Ontology subclasses of knx:Thing (see clause 1.1.7)|
|---|---|


-----

|Col1|Notes<br>The class as such does not host individuals, defined tag individual as part of the<br>subclasses identifies as an annotation with the OP relationship predicate<br>rdfs:isDefinedBy the origin of the term.<br>Intended Usage<br>dcterms:title<br>Allows to support an (optional) data driven name (title) of a subordinated tag<br>individual. A present annotation label per tag is used for human readers, not<br>machines.|
|---|---|


###### 1000 1.4.3.2 Equipment, Phenomenon, Virtual Entity
 1001 The underneath described classes hosting Tag individuals for equipment's, phenomena, and virtual
 1002 entities, to express the "type of interest" for an observation or actuation a concept is made. 

 1003 The tags can be seen as a property carrier. An individual QK accomplishes this by referencing to a "type
 1004 of interest" (property carrier) tag from one of the classes below.

`:EquipmentType` **Description**

The class hosts individuals allowing to describe a tangible and/or movable
equipment that can be actively observed/ actuated upon as part of the building
control system (in contrast to passive equipment's of the building, for example a
circuit breaker, a pipe or a duct).

**Main Object/Data Properties/ Disjoint With**

                            
**Notes**

As described in clause 1.4.3, this tag category does not describe real existing things.

The tags are part of the Semantic Dictionary such as Door, Device and other, the
tag category contains by KNX defined tags, some of them are related to the
following concepts.

###### • Haystack, see https://project-haystack.dev/doc/lib-phIoT/equip.

 1005

|:EquipmentType|Description<br>The class hosts individuals allowing to describe a tangible and/or movable<br>equipment that can be actively observed/ actuated upon as part of the building<br>control system (in contrast to passive equipment's of the building, for example a<br>circuit breaker, a pipe or a duct).<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>As described in clause 1.4.3, this tag category does not describe real existing things.<br>The tags are part of the Semantic Dictionary such as Door, Device and other, the<br>tag category contains by KNX defined tags, some of them are related to the<br>following concepts.<br>• Haystack, see https://project-haystack.dev/doc/lib-phIoT/equip.|
|---|---|

|:PhenomenonType|Description<br>The class hosts individuals allowing to describe a phenomenon (that is also<br>including a substance).<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>As described in clause 1.4.3, this tag category do not describe real existing things.<br>The tags are part of the Semantic Dictionary such as Door, Device and other, the<br>tag category contains by KNX defined tags, some of them are related to the<br>following concepts.|
|---|---|


-----

|Col1|• Haystack, see https://project-haystack.org/doc/lib-<br>phScience/phenomenon and https://project-haystack.org/doc/lib-<br>phScience/substance.|
|---|---|


###### 1006

`:VirtualEntityTy` **Description**
```
     pe

```
The class hosts individuals allowing to describe a virtual entity that is neither an
equipment nor a phenomenon, such as a state of operation.

**Main Object/Data Properties/ Disjoint With**

                            
**Notes**

###### The tags are part of the Semantic Dictionary such as State of Operations and other, the tag category contains by KNX defined tags.

 1007 1.4.3.3 Quantity Kind, State Kind
 1008 The underneath described classes hosting Tag individuals to describe the dimension of a "type of interest"
 1009 for an observation or actuation a concept is made. 

 1010 The tags can be seen as the properties describing a property carrier. An individual QK accomplishes this
 1011 this by referencing to a dimension (property) tag from one of the classes below.

`:QuantityKind` **Description**

The class hosts individuals allowing to describe a quantifiable/countable dimension
where an observation or actuation is made ("type of interest").

For details on the raw value of the observation or actuation, please refer to clause
1.4.1 .

**Main Object/Data Properties/ Disjoint With**

                            
**Notes**

The tags part of the Semantic Dictionary are e.g. Count, Width and other, the tag
category contains by KNX defined tags, and from the following concepts.

                    - [QUDT, see http://www.qudt.org/doc/DOC_VOCAB-QUANTITY-](http://www.qudt.org/doc/DOC_VOCAB-QUANTITY-KINDS.html)
[KINDS.html](http://www.qudt.org/doc/DOC_VOCAB-QUANTITY-KINDS.html)

###### 1012

|:VirtualEntityTy<br>pe|Description<br>The class hosts individuals allowing to describe a virtual entity that is neither an<br>equipment nor a phenomenon, such as a state of operation.<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>The tags are part of the Semantic Dictionary such as State of Operations<br>and other, the tag category contains by KNX defined tags.|
|---|---|

|:QuantityKind|Description<br>The class hosts individuals allowing to describe a quantifiable/countable dimension<br>where an observation or actuation is made ("type of interest").<br>For details on the raw value of the observation or actuation, please refer to clause<br>1.4.1 .<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>The tags part of the Semantic Dictionary are e.g. Count, Width and other, the tag<br>category contains by KNX defined tags, and from the following concepts.<br>• QUDT, see http://www.qudt.org/doc/DOC VOCAB-QUANTITY-<br>_<br>KINDS.html|
|---|---|

|:StateKind|Description<br>The class hosts individuals allowing to describe a non-quantifiable/non-countable<br>dimension where an observation or actuation is made ("type of interest").<br>For details on the raw value of the observation or actuation, please refer to clause<br>1.4.1 .|
|---|---|


-----

|Col1|Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>The tags are part of the Semantic Dictionary such as Light State and other, the tag<br>category contains by KNX defined tags.|
|---|---|


###### 1013 1.4.3.4 Locality

|:Locality|Description<br>The class hosts individuals allowing to describe a generic place where an<br>observation or actuation is made ("type of interest").<br>This can be a locality/equipment or logical oriented context, describing a relation to<br>a (semantically predefined) place of a specific trade.<br>A QK accomplishes this by referencing to one or more tag individuals from this<br>category.<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>As described in clause 1.4.3, this tag category do not describe real existing things.<br>• A logical context is the assignment of tag Phase L1 to a Datapoint<br>(out of three), to distinguish the thee phases of a current measurement.<br>• A equipment context is the assignment of tag Room to a Datapoint<br>that measures the air temperature.<br>The tags are part of the Semantic Dictionary such as Room or Ductwork Section,<br>Phase L1, Phase L2 and other, the tag category contains by KNX defined tags,<br>some of them are related to the following concepts.<br>• Haystack, see https://project-haystack.dev/doc/lib-phIoT/index.|
|---|---|


-----

###### 1014 1.4.3.5 LocationUsage
```
     :LocationUsage

```
The class

category.

###### •

 Notes

The KIM

usage

###### 1015 1.4.3.6 PointFunctionType

|:LocationUsage|Description<br>The class hosts individuals allowing to describe the usage of a location.<br>A location accomplishes this by referencing to one or more tag individuals from this<br>category.<br>Main Object/Data Properties/ Disjoint With<br>• -<br>Notes<br>The KIM explicitly does not limit the use of a specific location usage only together<br>with a specific location concept such as the location usage Kitchen would only be<br>used with location concept of a loc:Room. This is too strict since the location<br>usage Kitchen may be also used with the location concept of loc:Space or<br>loc:Floor.<br>-|
|---|---|

|:PointFunctionTy<br>pe|Description<br>The class hosts individuals allowing to describe the position of a Datapoint in the<br>control loop realized by the distributed application.<br>A Datapoint accomplishes this by referencing at max two tag individuals from this<br>category per QK.<br>dic-tag:sp<br>A setpoint is classified as an indirect adjustment, such as Point representing the<br>desired or target value for a process value of a system.<br>EXAMPLE 41 The desired room temperature (phenomenon), requested to a room<br>temperature controller, as a setpoint from an external entity.<br>A setpoint value represents data at Runtime. Hence the tag SHALL not be used<br>together with a parameter Point from :PointInterface.<br>dic-tag:processValue<br>In relation with the assigned "type of interest" it can be identified if a Point with this<br>tag provides a current measured value (of a quantity kind) or a current status value<br>(of a state kind).<br>EXAMPLE 42 The current room temperature, measured by a room temperature<br>sensor.<br>A measured/status value can also be calculated such as an average value from 2<br>points. Hence the tag may not directly represent a logical or physical Datapoint<br>from :PointInterface.<br>dic-tag:cmd<br>A command is classified as a direct adjustment, such as a Point used from manage<br>functionalities to send imperative commands to control actuators.<br>EXAMPLE 43 The valve position, requested to a valve, as a command from a<br>room temperature controller.<br>dic-tag:his<br>A Point representing history/ trend data with a log of timestamp/value pairs.|
|---|---|


-----

|Col1|NOTE 21 Only this tag value is allowed to be used together with other tags<br>from this category, such as to define a Datapoint expressing a<br>history log of process values.<br>dic-tag:limit<br>A point representing a dynamic limitation for an essential variable or a process<br>value.<br>NOTE 22 The actual limit thresholds such as an upper/ lower limit are not<br>expressed with this tag, this must be expressed by other means<br>such as maximum/ minimum values at a Point.<br>dic-tag:validity<br>A point representing a validity assessment of a datapoint value.<br>EXAMPLE 44 The blind/slats position as part of a transmitted (combined)<br>datapoint value can be considered to be valid (such as used for<br>DPT 240.800).<br>dic-tag:alarm<br>A point represents an alarm status of a functionality that typically needs immediate<br>attention.<br>EXAMPLE 45 A life safety alarm (fire alarm, detection of explosives or poisonous<br>gases etc.), object protection alarm (risk of personal injury or<br>damage to objects, burglary etc.) or technical alarm (e.g., frost<br>alarm, device overheating etc.).<br>dic-tag:alert<br>A point contains a warning that draws attention to something that usually does not<br>need immediate attention.<br>EXAMPLE 46 An equipment fault, communication fault or revision notification and<br>other.<br>The difference between an alarm and alert may overlap in practical<br>applications and thus the tag must be carefully selected by the user.<br>Main Object/Data Properties/ Disjoint With<br>• -<br>Notes<br>The following (mainly for Runtime used) tags are not RECOMMENDED to use for<br>a parameter Point.<br>dic-tag:processValue, dic-tag:alarm, dic-tag:alert, dic-tag:his|
|---|---|


###### 1016 1.4.3.7 PointInterface

|:PointInterface|Description<br>The class hosts individuals allowing to describe the runtime interworking interface<br>type of a Point (see also definition in KNX standard, Volume 7 “Interworking”).<br>A Datapoint accomplishes this by referencing at max two tag individuals from this<br>category.<br>Section 1 – Logical Points<br>dic-tag:if.i|
|---|---|


-----

|Col1|A communication interworking (logical) input Point, it receives data.<br>dic-tag:if.o<br>A communication interworking (logical) output Point, it sends data.<br>dic-tag:if.p<br>A parameter point that changes an application behavior, mainly used at<br>Configuration.<br>For differently structured point information this tag may be also used in a<br>combination with dic-tag:absolutValue.<br>dic-tag:if.d<br>A diagnostic point that serves for monitoring<br>Section 2 – Physical Points<br>dic-tag:if.s:<br>A hardwired (physical) analogue or digital input Point, from the perspective of the<br>Application Program (Figure 8, Sensor).<br>dic-tag:if.a:<br>A hardwired (physical) analogue or digital output Point, from the perspective of the<br>Application Program (Figure 8, Actuator).<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>Tags from Section 1 and Section 2 MAY be used together at a Point. This allows to<br>describe a logical Point on which the physical hardwired Sensor/ Actuator is<br>belonging to.<br>EXAMPLE 47 A temperature sensor provides two logical outputs to provide<br>directly values for the unit °C and °F. One logical output point has<br>also assigned the hardwired sensor, here the actual measurement<br>is performed, the second output hosts only a aligned value.<br>Tags from Section 1 MUST NOT use the tag if.i and if.o together at a Point.<br>This is in line with Figure 8, a Point is either an input or output.|
|---|---|


###### 1017 1.4.3.8 PointOperation

|:PointOperation|Description<br>The class hosts individuals allowing to express how a point value is<br>(mathematically or logically) used to affect the behavior of the system.<br>dic-tag:absoluteValue<br>The value of the point is a COMPLETE value and does not need any other point<br>value to be usable (21 °C, fan speed 30 %).<br>dic-tag:relativeValue<br>The value of the point is NOT A COMPLETE value but needs to be added to<br>another value to be usable (CurrentComfortTemperatureSetpoint +2°C,<br>CurrentBrightessSetpoint + 10 Lux, go 2 steps further than the current setpoint).<br>As the examples explain, there is no distingtion if it needs to be added to itself or<br>another value.|
|---|---|


-----

|Col1|dic-tag:trigger<br>The value does not carry data to calculate with, only the access to it can already be<br>interpreted.<br>dic-tag:totalizedValue<br>The value represents an aggregation or totalization of a stream of values, such as<br>the totalization of metering values or the aggregation of all window states in a<br>room, to determine a combined/effective (open/ close) state.<br>The tag does not define any relation to a value dimension (such as metering data in<br>unit kWh, amount of person as unitless number).<br>dic-tag:enumeration<br>The intended value is a (discrete) element from an enumeration (list), the numerical<br>representation of the value does make sense to clauclate with it nor it expresses any<br>semantical meaning or priority within the list.<br>NOTE 23 The tag can be used to express any kind of enumerable elements,<br>for example a boolean point value of a switch device (a lists of two<br>elements with on and off) or a mode value of an HVAC equipment (a<br>list with automatic, standby or comfort mode values).<br>The semantic information for what domain this point is used is used<br>for (such as HVAC or lighting) cannot be derived from this tag<br>category, only in relation with a tag from an additional assigned tag<br>category.<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>-|
|---|---|


-----

###### 1018 1.4.3.9 Origin
```
     :Origin

 1019 1.4.3.10 Protocol

```
|:Origin|Description<br>The class hosts individuals allowing to classify a certain source level a Datapoint<br>has in an application behavior, usually assigned to an input Datapoint.<br>The tags do not define specific priority rules when/how such a Datapoint value<br>must be processed, this is still under control of the application.<br>dic-tag:default<br>The source is not further specified.<br>dic-tag:automatic<br>The source is the result of an automatic value calculation by a controller, generated<br>mainly from an entity that is an integral/ local part of the Installation functionality.<br>Usually at Configuration the actual definition for a Datapoint with this tag can be<br>made properly. The tag is opposite to the tag user.<br>dic-tag:management<br>The source is the result of an intervention of a MaC, central BMS and alike,<br>generated mainly from an entity that is an outside/external part of the Installation<br>functionality.<br>Usually at Configuration the actual definition for a Datapoint with this tag can be<br>made properly. In cases where a Datapoint explicitly demands this source level, the<br>definition can be made also as part of catalog data (such as for the HVAC FB<br>RTSM)<br>dic-tag:user<br>The source is the result of an intervention of a user of the Installation, such as an<br>operation mode selection or setpoint selection. The tag is opposite to the tag<br>automatic.<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>This tag can be used to determine what control type of Datapoints are present in an<br>Installation, such as to display them also with different icons in a user interface or<br>to derive information from what entity a Datapoint is controlled from respectively if<br>setting a value is applicable.|
|---|---|

|:Protocol|Description<br>The class hosts individuals allowing to mark that a Point uses a specific<br>communication protocol.<br>The intention is to define with terms from the Semantic Dictionary that Point data<br>provided to a system originates from a specific/underlying protocol or system.<br>The above used term originates means the actual communication protocol that<br>created the Point value and not any other possible protocols that might be influence<br>the entire communication path.|
|---|---|


-----

|Col1|It is the intention to have it on Point level and not globally at Device level.<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>The tags are part of the Semantic Dictionary such as BACNet or KNX and other, the<br>tag category contains by KNX defined tags, some of them are related to the<br>following concepts.<br>• Haystack, see https://project-haystack.dev/doc/lib-phIct/protocol.<br>NOTE 24 At Haystack the protocol concept it used on Device<br>level.|
|---|---|


###### 1020 1.4.3.11 Trade

|:Trade|Description<br>The class hosts individuals allowing to describe the specific application area/<br>operational domain in which a Point, Application Function or Function point is<br>used.<br>Example terms from the Semantic Dictionary are Lighting (dic-<br>tag:lighting)or Cooling (dic-tag:cooling) and other.<br>Main Object/Data Properties/ Disjoint With<br>-<br>Notes<br>The tags are part of the Semantic Dictionary such as Lighting or Cooling and<br>other.|
|---|---|


-----

###### 1021 1.4.4 Tag Cardinalities
 1022 The following table defines the cardinality for several elements[ 9)], allowed to express from the different
 1023 source concepts described in Figure 11 and for an Application Function. 

 1024 Table 2 – Element Cardinalities 
```
      Element

```
`:Equipment` 0…n 0…n 0…n

`:Location` 0…n 0…n 0…n 0..n

`:FunctionPoint` 0…n 0…n 0…n 0..1 0..n 0..1

`:Datapoint` 0…n 0…n 0…n 0..n 0..2 0..n 0..1

`:ApplicationFunction` 0..n
###### 1025

 1026 The following table defines the cardinality for individual tags, allowed to express from a QK/PK and
 1027 Operation Kind.

 1028 Table 3 – Tag Cardinalities
```
     Element Tag

```
`:QualityKind` 0..1 0..n 0..1

`:ProcessKind` 0..1 0..n 0..1

`:OperationKind` 0..1 0..2 0..1

###### 1029 1.5 Model Relations
 1030 The OP relationship predicate describes the main object property relation, if available, the second OP
 1031 relationship predicate (in italic) describes the corresponding inverse relation. 

 1032 • Domain and range are described for the main OP relationship, usually domain and range are
 1033 interchanged for the inverse OP relationship. In case more than one class is applicable for the domain
 1034 or range (logically an “or”), this is represented with an “/” 

9) The elements cover individual tags, tag collections (aka QK/PK and Operation Kind), but also other concepts.

|Col1|Element|:QualityKind|:ProcessKind|:OperatinKind|:DatapointType|:PointInterface|:Trade|:Protocol|:LocationUsage|
|---|---|---|---|---|---|---|---|---|---|
|Source  Concepts|`:Equipment`|0…n|0…n|0…n||||||
|Source  Concepts|`:Location`|0…n|0…n|0…n|||||0..n|
|Source  Concepts|`:FunctionPoint`|0…n|0…n|0…n|0..1||0..n|0..1||
|Source  Concepts|`:Datapoint`|0…n|0…n|0…n|0..n|0..2|0..n|0..1||
||`:ApplicationFunction`||||||0..n|||

|Element|Tag|Col3|Col4|Col5|Col6|Col7|Col8|Col9|Col10|
|---|---|---|---|---|---|---|---|---|---|
||**`:StateKind`**|**`:QuantityKind`**|**`:Locality`**|**`:PhenomenonType`**|**`:EquipmentType`**|**`:VirtualEntityType`**|**`:Origin`**|**`:PointFunctionType`**|**`:PointOperation`**|
|`:QualityKind`||0..1|0..n|0..1|0..1|||||
|`:ProcessKind`|0..1||0..n|0..1|0..1|0..1||||
|`:OperationKind`|||||||0..1|0..2|0..1|


-----

###### 1035 • OWL object property characteristics such as reflexive, symmetric, or functional are not described
 1036 here to the full extent, for more details please refer to clause [02] respectively clause 1.1.3. 

 1037 The following structure details the most important OP relationship predicates and their property structure.
 1038 Sub/ parent object property relations are represented by the textual indentation. 

 1039 • http:authority
 1040 • :comprises
 1041 • :containsAsset
 1042 • :datapointType
 1043 • :groups
 1044 • :hasApplicationFunction
 1045 • :hasChannel
 1046 • :hasEnumerationValue
 1047 • :hasFunctionPoint
 1048 • :hasPart
 1049 • :hasPoint
 1050 • :hasDatapoint
 1051  :isComposedBy
 1052 • :hasProduct
 1053 • :hasProxy
 1054 • :hasTagSet
 1055 • :hasQualityKind
 1056  :actsOnQualityKind
 1057  :adjustsQualityKind
 1058  :measuresQualityKind 
 1059  :observesQualityKind
 1060 • :hasProcessKind
 1061  :actsOnProcessKind
 1062  :observesProcessKind
 1063 • :hasTag
 1064 • :hasPointInterface
 1065 • :hasEquipmentType
 1066 • :hasLocality
 1067 • :hasOrigin
 1068 • :hasPhenomenonType
 1069 • :hasPointFunctionType
 1070 • :hasPointOperation
 1071 • :hasQuantityKind
 1072 • :hasStateKind
 1073 • :hasVirtualEntityType
 1074 • :operatesForTrade
 1075 • :operatesOnProtocol
 1076 • loc:hasLocationUsage
 1077 • :hosts
 1078 • :implements
 1079 • :isReferencedBy
 1080 • isMetaDataOf
 1081 • isStatusOf
 1082 • :refersTo
 1083 • loc:hasAdjacentLocation
 1084 • loc:hasLocation
 1085  loc:hasBuilding


-----

###### 1086  loc:hasFloor
 1087  loc:hasOutside
 1088  loc:hasSiteSegment
 1089  loc:hasSpace
 1090 • loc:hasRoom
 1091 • loc:hasRoomSegment
 1092 • loc:hasLowerFloor
 1093 • loc:hasUpperFloor
 1094 • :supportsFunctionalblock
 1095 • loc:containsEquipment
 1096 • qudt:unit
 1097 • vcard:hasAddress
 1098 • …

 1099 The following OP relationship predicate is used from several concepts; hence it is described here. 

Object Property Relationship Definition

Predicate Domain/Range

`:refersTo/` A parent OP relationship to express a general relation between
`:isReferencedBy` different concepts.

Together with the defined child properties and its defined domain/
range a specific semantic meaning of a relation between the concepts
can be expressed, such as a relation between two locations or two
Datapoints. A detailed explanation can be found at the child
properties.

Due to the usage from several concepts the domain and range is not
specified for this (parent) OP.

The OP relationship is expressed as transitive, per OWL2 this is taken
over to the child OP relationships.

NOTE 12 A expressed child property chain A has B and B has C
result in a reasoned (top property) A :refersTo C
reference.

Domain                        Range                         
###### 1100 1.5.1 Location Relations

 1101 This clause describes specific OP relationship predicates used from location (domain) concepts. 

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`:refersTo/`<br>_`:isReferencedBy`_|A parent OP relationship to express a general relation between<br>different concepts.<br>Together with the defined child properties and its defined domain/<br>range a specific semantic meaning of a relation between the concepts<br>can be expressed, such as a relation between two locations or two<br>Datapoints. A detailed explanation can be found at the child<br>properties.<br>Due to the usage from several concepts the domain and range is not<br>specified for this (parent) OP.<br>The OP relationship is expressed as transitive, per OWL2 this is taken<br>over to  the child OP relationships.<br>NOTE 12<br>A expressed child property chain_A has B_ and_B has C_ <br>result in a reasoned (top property) A_`:refersTo`_ C<br>reference.<br>Domain<br>- <br>Range<br>-|

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`loc:hasAdjacentLocation`|An OP relationship to express a relation between two locations that<br>share a common interface such as a wall or door, but do not intersect.<br>Domain<br>loc:Location <br>Range<br>loc:Location|
|`loc:hasLocation/`<br>_`loc:isLocationOf`_|A general OP relationship to express a relation to a subclass of a <br>`:Location`, e.g., a room as spatial sub-location of a floor.<br>Domain<br>loc:Location <br>Range<br>loc:Location|


-----

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`loc:hasOutside/`<br>_`loc:isOutsideOf`_|A general OP relationship to express a relation of location individuals<br>to individuals which are outside of aparticular building.<br>The location to be outside (as the domain) MUST fulfil the boundary<br>conditions to be allowed outside, see clause 1.2.3.4.<br>Domain<br>loc:Location <br>Range<br>loc:Outside|
|`vcard:hasAddress`|An OP relationship to express a relation of a location to its address.<br>Domain<br>- 10) <br>Range<br>vcard:Address|
|`loc:hasBuilding/`<br>_`loc:isBuildingOf`_|A strong OP relationship to express a relation to building contained in<br>a site. <br>Domain<br>loc:Building <br>Range<br>loc:Site|
|`loc:hasFloor/`<br>_`loc:isFloorOf`_|A strong OP relationship to express a relation to a floor contained in a<br>location. <br>Domain<br>loc:Building/ loc:Space <br>Range<br>loc:Floor|
|`loc:hasLowerFloor/`<br>_`loc:hasUpperFloor`_|An OP relationship to express a relation from one floor to the next<br>floor.<br>Domain<br>loc:Floor <br>Range<br>loc:Floor|
|`loc:hasRoom/`<br>_`loc:isRoomOf`_|A strong OP relationship to express a relation to a room in a location.<br>Domain<br>loc:Building/ loc:Space/ loc:Floor <br>Range  loc:Room|
|`loc:hasRoomSegment/`<br>_`loc:isRoomSegmentOf`_|A strong OP relationship to express a relation to a room segment<br>contained in a room or room segment.<br>Domain<br>loc:Room/ loc:RoomSegment <br>Range<br>loc:RoomSegment|
|`loc:hasSpace/`<br>_`loc:isSpaceOf`_|A strong OP relationship to express a relation to a spacecontained in<br>a location.<br>Domain<br>loc:Location <br>Range<br>loc:Space|
|`loc:hasSiteSegment/`<br>_`loc:isSiteSegmentOf`_|A strong OP relationship to express a relation to a site segment<br>contained in a site.<br>Domain<br>loc:Site<br>Range<br>loc:SiteSegment|


10) Even if a domain definition is applicable for the KIM, it is not defined. This allows to merge the KIM with other
ontologies, defined domains would result in an domain intersection (which is not the intended behavior).


-----

###### 1102 1.5.2 Installation Relations

 1103 This clause describes specific OP relationship predicates used from Installation (domain) concepts. 

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`:comprises`/ <br>`:`_`isComprisedBy`_|An OP relationship to express the existence of a standardized KNX<br>Functional Block, implemented/ realized in a Channel.<br>Domain<br>:Channel <br>Range<br>:FunctionalBlock|
|`:composes`/ <br>`:`_`isComposedBy`_|An OP relationship to express a relation from a Datapoint to the<br>concepts of a Functional Block.<br>It was intentionally defined to separate it from the more generic<br>parent OP relationship :`isPointOf/:isDatapointOf`, to<br>enforce an expressed relation of Datapoints as part of a FB. Such<br>Datapoints includes per definition additional semantic information<br>(such as the observed subject and others).<br>With this, a FB can be_composed_ with its mandatory/optional<br>Datapoints.<br>Domain<br>:Datapoint <br>Range<br>:FunctionalBlock|
|`:containsAsset`/ <br>`:`_`isAssetOf`_|An OP relationship that allows to define the following relations:<br>• <br>the presence of an equipment as part of an Installation<br>• <br>the presence of an asset included in other assets<br>Domain<br>:Asset <br>Range<br>:Asset|
|`:datapointType/`<br>`:isDatapointTypeOf`|An OP relationship that allows to describe the DPT information of a<br>Function Point or Datapoint.<br>Domain<br>:Datapoint/:FunctionPoint <br>Range<br>:DatapointType|
|`:groups`/ <br>`:`_`isGroupedBy`_|An OP relationship to express a relation to a Point from an Aspect.<br>From the perspective of KNX Classic, a Function Point (as subclass of<br>:`Aspect`) is a Group Address created by a MaC, which links with the<br>OP several Group Objects (as a Datapoint as subclass of :`Point`).<br>Domain<br>:Aspect <br>Range<br>:Point|
|`:hasApplicationFunction`/ <br>`:`_`isApplicationFunctionOf`_|An OP relationship to express a relation to an Application Function<br>from the possible elements that can hold an Application Function.<br>This defines the place of action of an Application Function.<br>Domain<br>loc:Location <br>Range<br>:ApplicationFunction|


-----

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`:hasChannel`/<br>`:`_`isChannelOf`_|An OP relationship to express a relation to define the presence of a<br>Channel, implemented in a Device or Application Program.<br>• <br>from a Device directly to a Channel, without any indirection<br>of having first an Application Program that implements a<br>functionality with Points<br>• <br>from an Application Program to a Channel <br>Domain<br>:Device/:ApplicationProgram <br>Range<br>:Channel|
|`:supportsFunctionalblock`/ <br>`:`_`isFunctionalBlockOf`_|An OP relationship to express a relation to define a Functional Block,<br>implemented/realized in a Device  together with the here defined<br>Datapoints.<br>This OP may be used to filter in a MaC what specific FB are realized/<br>implemented in a device. This includes also to retrieve operational<br>(concurrent) present FBs (of the same type) at Runtime, each of them<br>is addressed via an separate individual.<br>Domain<br>:Device <br>Range<br>:FunctionalBlock|
|`:hasPart`/ <br>`:`_`isPartOf`_|An OP relationship to express the presence of a (tangible) equipment,<br>such as a Device as part of a cabinet (that is also an equipment).<br>Domain<br>:Equipment <br>Range<br>:Equipment|
|`:hasPoint`/ <br>`:`_`isPointOf`_|An OP relationship to express a generic relation from a functionality<br>(see class:`Functionality`) to several Points. For a Channel this<br>OP allows expressing a group of Points that belong to this Channel.<br>The following sub properties can be used to describe in detail which<br>Point type is referenced.  <br>• <br>:`hasActionPoint`<br>• <br>:`hasDataPoint`<br>• <br>:`hasEventPoint` <br>For a Channel this OP allows expressing a group of Points that belong<br>to this Channel.<br>Domain<br>:Functionality <br>Range<br>:Point|
|`:hasProduct`/ <br>`:`_`isProductOf`_|An OP relationship to express a relation to a Product from an<br>equipment. Only equipment can have any information according to a<br>product.<br>Domain<br>:Equipment <br>Range<br>:Product|


-----

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`:hasProxy`/ <br>`:`_`isProxyFor`_|This OP relationship allows to define a representative entry point for<br>IoT Datapoints with a gateway. With this IoT Datapoints in an<br>Installation can be exposed for different purposes, such as all IoT<br>Datapoints on a KNX IoT 3rd Party API (gateway).<br>Background<br>The KIM expresses relations (aka OP) between Function Points and<br>Points (`:groups`); the latter are related to a Device directly with<br>`td:isInteractionAffordanceOf`. The Device is expressing its<br>proxy (`:hasProxy`). This chain of relations allows to<br>"forward/proxy" both concepts (Function Point, Point) to a gateway.<br>With this chain of relation, the KIM generally allow to express more<br>than one proxy per IoT Datapoint (aka FP, Point).<br>• <br>a FP is linked with several Points of different Devices, each of<br>the device has one single (but different) proxy<br>• <br>a Point is directly related to a Device, the device has several<br>(different) proxies<br>It is RECOMMENDED to express only oneresulting proxy for each<br>individual IoT Datapoint, moreover IoT Datapoints (Points) from a<br>Device SHOULD have only one single proxy.<br>Domain<br>:Device <br>Range<br>:Gateway|
|`:hosts`/ <br>`:`_`isApplicationProgramOf`_|This OP relationship allows to define the existence of an Application<br>Program as part of the Device. <br>Domain<br>:Device <br>Range<br>:ApplicationProgram|
|`:implements`/ <br>`:`_`isImplementedBy`_|This OP relationship allows to define a collection of Points as part of<br>an Application Program.<br>Domain<br>:ApplicationProgram <br>Range<br>:Functionality|
|`loc:containsEquipment`/ <br>`loc:`_`isEquipmentOf`_|An OP relationship to express a relation to an equipment from a<br>location.<br>This OP relationship allows to define the presence of a (tangible)<br>equipment, such as a Device as part of a location. Mainly it expresses<br>the “assembly place” of an equipment.<br>Domain<br>loc:Location <br>Range<br>:Equipment|


###### 1104


-----

###### 1105 1.5.3 Datapoint Relations 
 1106 This clause describes specific OP relationship predicates used from IoT Datapoint (domain) concepts. 

 1107 NOTE 25 As described in [03] an IoT Datapoint comprises a Function Point or a Point (Datapoint). 

Object Property Relationship Definition

Predicate Domain/Range

`:hasFunctionPoint/` This OP relationship allows also to define the existence of several
`:isFunctionPointOf` Function Points as part of an Application Function.

Domain :ApplicationFunction
Range :FunctionPoint

`-/` A child OP relationship of :isReferencedBy, to express a "impact 
`:isMetaDataOf` _cause" relation, separated in KNX, by using different Datapoints (GOs_

in KNX Classic) for each.

This relation is used mainly as part of a Device (catalog data). A
detailed explanation can be found underneath the table under
"Background".

Domain :Datapoint
Range :Datapoint

###### 1108

 1109 Background

 1110 In a lot of cases a Device output (Datapoint) is affected from a corresponding input (Datapoint) of the
 1111 same Device. KNX IoT 3[rd] Party Clients using the KNX IoT 3[rd] Party API (and other tools) expect to
 1112 detect for diagnostic purposes such dependencies. 

 1113 The Semantic Export allows to express these relations with the OP relationship :isMetaDataOf,
 1114 defining a common relationship between two IoT Datapoints. Nevertheless, a semantic statement on the
 1115 applicative behavior of this relation cannot be derived from one (common) OP relationship. To allow this
 1116 many child OP relationships with an explicit semantic meaning would be needed (such as
 1117 :isMinimumOf, :isLimitOf, …), this is not implemented in the KIM. A certain semantics can be
 1118 extracted from the assigned tags of the involved datapoints (see example below). 

 1119 EXAMPLE 48 A Device may contain the following IoT Datapoints:

 1120  tempRoomSetpoint (RTSM)  input 
 1121  tempRoom (RTS), tempFloor (FTS), tempOutside (OTS)  outputs
 1122 The latter three IoT Datapoints represent the actual temperature outputs of the different locations,
 1123 as measured (process) values. The expected relation of RTS  RTSM is defined with <
 1124 Device_GO_RTS :isMetaDataOf Device_GO_RTSM>. Because of the assigned tag dic 1125 tag:processValue it is possible to derive a certain semantics of this relation.

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`:hasFunctionPoint`/ <br>`:`_`isFunctionPointOf`_|This OP relationship allows also to define the existence of several<br>Function Points as part of an Application Function. <br>Domain<br>:ApplicationFunction <br>Range<br>:FunctionPoint|
|`-/`<br>_`:isMetaDataOf`_|A child OP relationship of :isReferencedBy, to express a "_impact_ <br>_cause"_ relation, separated in KNX, by using different Datapoints (GOs<br>in KNX Classic) for each.<br>This relation is used mainly as part of a Device (catalog data). A<br>detailed explanation can be found underneath the table under<br>"Background".<br>Domain<br>:Datapoint<br>Range<br>:Datapoint|


###### 1126 For the corresponding abbreviation please refer to [08] and [09].


-----

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`-/`<br>_`:isStatusOf`_|A child OP relationship of :isReferencedBy to express a "_status_ <br>_control_" relation, separated in KNX Classic, by using different FPs (GAs<br>in KNX Classic) for each.<br>This relation is used only as part of an Installation (instance data). A<br>detailed explanation can be found underneath the table under<br>"Background".<br>On standardized Application Functions as part of the Semantic<br>Dictionary or KNX manufacturer defined Applications the OP can be<br>expressed directly, for this see in clause 0. Whether or not the MaC<br>ETS would be able to compute the corresponding OP relationships -<br>based on Datapoints with assigned Tags from instance and/or catalog<br>data - is out of scope.<br>NOTE 12<br>The OP relationship is not a replacement for missing<br>tags that may express a similar meaning. Using an OP<br>relationship allows to rank from expressing nothing,<br>expressing only a general relation, up to express a<br>status relation. <br>Domain<br>:FunctionPoint<br>Range<br>:FunctionPoint|


###### 1127 Background

 1128 In KNX Classic, write and read operations are mostly handled by different Group Addresses, having a
 1129 control point (GO) to set a value and having a separated status point (GO) to get the (actual) value. 

 1130 EXAMPLE 49 An IoT Function light_control_living_room may contain the IoT Datapoints switchLight and
 1131 dimmLight. The Datapoint switchLight delivers whether the light in the living room is switched on or
 1132 off or sets it, dimmLight delivers the dimming value or sets it. 


###### 1133 The corresponding switchLight control Group Address with the name of the FB property
 1134 abbreviation SOO and the switch status Group Address with the name of the FB property
 1135 abbreviation IOO (please refer to [08] and [09] for these abbreviations).
 1136 KNX IoT 3[rd] Party Clients using the KNX IoT 3[rd] Party API expect to put a value respectively to get the
 1137 corresponding status in the following form:

 1138 a) r/w operations to the same IoT Datapoint 

 1139 A PUT operation lead to a write operation to the Function Point SOO while a GET operation to the
 1140 same IoT Datapoint lead to a read to the other Function Point IOO. 

 1141 The Semantic Export expresses a SOO/IOO relationship. The OP relationship :isStatusOf relates
 1142 the IOO Function Point to its corresponding SOO Function Point. 

 1143 EXAMPLE 50 <IOO_MyLightSwitchStatus :isStatusOf SOO_MyLightSwitch>

 1144 It is vendor specific if the (second) IoT Datapoint will be hidden at API level.

 1145 b) r/w operations to different IoT Datapoints

 1146 The Semantic Export expresses no :isStatusOf OP relationship at all (or it should be ignored),
 1147 two IoT Datapoints are used at the KNX IoT 3rd Party API to put a value and read the corresponding
 1148 status.

 1149 In both cases above it is required to correctly express the :readable and :writable properties at the
 1150 corresponding IoT Datapoints. 


-----

###### 1151 EXAMPLE 51 The Application/ ETS Function ShutterWithPosandWindAlarmRainAlarm would consist of 8
 1152 Function Points, StepStop, MoveUpDown, PositionSet, PositionState, WindAlarmSet,
 1153 WindAlarmState, RainAlarmSet, RainAlarmState.
 1154 At least the following FP pairs are able to express a control/status relation including the fact that the
 1155 status is not writable, and the control is not readable.  


###### 1156 • PositionSet/ PositionState (PositionState :isStatusOf PositionSet, PositionSet :readable
 1157 true, PositionState :readable false or IoT Datapoint is hidden)
 1158 • WindAlarmSet/ WindAlarmState (…)
 1159 • RainAlarmSet/ RainAlarmState (…)


###### 1160 For the mapping of the individual DTP information for the Semantic Export, please refer to
 1161 clause 1.1.1.1. The difference between RainAlarm and WindAlarm needs to be derived from the
 1162 "type of interest tags" (if available) of the corresponding Function Points.

 1163 1.5.4 Datapoint Type Relations 
 1164 This clause describes specific OP relationship predicates used from DPT (domain) concepts.

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`:isAssembledWith/`<br>`- `|This OP relationship allows to define the existence of a DPT field<br>information, which is further detailing a DPT.<br>Domain<br>:DatapointType <br>Range<br>:DatapointTypeField|
|`:includes/`<br>`- `|A parent OP relationship to express a general relation from a DPT field<br>to its format infromation. The below described child OP properties<br>allow to define a DPT field Information for enumerated, numbered<br>formats or a reused other DPT.<br>• <br>`:includesDigit`<br>The DPT field Information consist of numbered values within a<br>range.<br>The range is  expressed with a min and max data property as an<br>unbounded signed xsd:integer, allowing also to define ranges for<br>float DPTs (ignoring the fraction). The actual min/max property<br>value depends on the DPT.<br>• <br>`:includesKeyValuePair`<br>The DPT field Information consist of several individual<br>enumerations, each of them expressed with a key/ value pair.<br>• <br>The key is defined as a string, used on an external API<br>• <br>The value is defined as an unbounded (signed) integer value,<br>this allows also to define negative values. It is used for the<br>KNX System.<br>• <br>`:includesDPT`<br>The DPT field Information refers to an existing DPT.<br>Domain<br>:DatapointTypeField <br>Range<br>-|


-----

###### 1165 1.5.5 Quality Kind, Process Kind, Operation Kind Relations
 1166 This clause describes specific OP relationship predicates used from several source concepts, for this see
 1167 Figure 11.

|Figure 11.|Col2|
|---|---|
|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|_`:`_`hasTagSet`_`/ `_<br>_`:isTagSetOf`_|A parent OP relationship to express a general relation from a source<br>concept to a QK/PK or Operation Kind.<br>To address a QK or PK only the specialized child OP relationship<br>predicates SHOULD be used.<br>Domain<br>:Datapoint/:Equipment/:FunctionPoint/:Location <br>Range<br>:OperationKind/:ProcessKind/:QualityKind|
|`:hasQualityKind` /<br>`:i`_`sQualityKindOf`_|A child OP relationship to express a specific relation from a source<br>concept to a QK, only as the fact that a QK is present, no further<br>statement whether the QK can be actuated upon by an Actuator or<br>observed from a Sensor. For this further sub properties may be used.<br>• <br>`:actsOnQualityKind`/_`:isActedOnBy`_`QualityKind`<br>A Quality Kind with an actuatable dimension property (such as<br>the dim level of a luminaire).<br>• <br>`:adjustsQualityKind/:`_`isAdjustedBy`_`QualityKind`<br>A Quality Kind with a at least one adjustable dimension property<br>(such as the position of a blind).<br>• <br>`:observesQualityKind/:`_`isObservedBy`_`QualityKind`<br>A Quality Kind with an observable dimension property (such as<br>the presence of a person).<br>• <br>`:measuresQualityKind/:`_`isMeasuredBy`_`QualityKind` <br>A Quality Kind with at least one measurable dimension property<br>(such as the luminance of a room).<br>Domain<br>:Datapoint/:Equipment/:FunctionPoint/:Location <br>Range<br>:QualityKind|
|`:hasProcessKind` /<br>`:i`_`sProcessKindOf`_|A child OP relationship to express a specific relation from a source<br>concept to a PK, only as the fact that a PK is present, no further<br>statement whether the PK can be actuated upon by an Actuator or<br>observed from a Sensor. For this further sub properties may be used.<br>• <br>`:actsOnProcessKind`/_`:isActedOnBy`_`ProcessKind`<br>A Process Kind with an actuatable dimension property (such as<br>the control mode of a HVAC controller).<br>• <br>`:observesProcessKind/:`_`isObservedBy`_`ProcessKind`<br>A Process Kind with an observable dimension property (such as<br>the closed state of a Window)<br>Domain<br>:Datapoint/:Equipment/:FunctionPoint/:Location <br>Range<br>:ProcessKind|


-----

###### 1168 1.5.6 Tag Relations
 1169 This clause describes specific OP relationship predicates used from Tag (domain) concepts.

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|_`:`_`hasTag`_`/ `_<br>_`:isTagOf`_|A parent OP relationship to express a general relation to a Tag.<br>The relationship specifies the OWL range class`:Tag`, allowing to<br>express any relation to one of its individuals. As it is just a generic top<br>OP of specialized (sub) OP relationship predicates, only the latter<br>SHOULD be used.<br>Domain<br>- <br>Range<br>:Tag|
|`:hasPointFunctionType/`<br>`:isPointFunctionTypeOf`|An OP relationship to a list that describes the position of a Point in a<br>control loop.<br>Examples <br>• <br>Control Value, Set Value<br>Domain<br>:OperationKind <br>Range<br>:PointFunctionType|
|`:hasPointInterface/`<br>`:isPointInterfaceOf`|An OP relationship to a list that describes the runtime interworking<br>interface type of a Point.<br>Examples <br>• <br>Logical Input Point<br>(`dic-tag:if.i`) <br>• <br>Physical Output Point<br>(`dic-tag:if.a`) <br>Domain<br>:Datapoint <br>Range<br>:PointInterface|
|`:hasPointOperation/`<br>`:isPointOperationOf`|An OP relationship to a list that describes the runtime interworking<br>operation type of the value of a Point.<br>Examples <br>• <br>Absolute Value, Trigger<br>Domain<br>:OperationKind <br>Range<br>:PointOperation|
|`:operatesForTrade/`<br>`:isOperationgForTrade`|An OP relationship to a list that describes the application areas in<br>which an Application Function/FP/Datapoint is used.<br>Examples <br>• <br>Lighting, Heating<br>Domain<br>:Datapoint/:FunctionPoint/:ApplicationFunction <br>Range<br>:Trade|


-----

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`:operatesOnProtocol/`<br>`:isOperatingOnProtocol`|An OP relationship that describes the primary protocol that a<br>Datapoint uses to send its data.<br>It is used mainly in cases where an interemediate (such as a gateway)<br>is connected to the KNX System that couples the primary protocol to<br>the KNX System. The intermediate as such provides the received data<br>for the KNX System with a KNX IoT Datapoint.<br>As default the Protocol_KNX_ is assigned (which means that the source<br>is originated at KNX).<br>The OP may be used together with the data property<br>`:nonKNXmappingAddress`, for details of this see at Function Point.<br>Examples <br>• <br>CoAP, KNX<br>Domain<br>:Datapoint/:FunctionPoint <br>Range<br>:Protocol|
|`loc:hasLocationUsage/`<br>`loc:isLocationUsageOf`|A generic OP relationship to express a relation of a location how the<br>location is used.<br>Domain<br>loc:Location <br>Range<br>:LocationUsage|
|`:hasOrigin/`<br>`:isOriginyOf`|A child OP relationship to a list that describes the runtime<br>interworking source where an observation or actuation is made<br>upon.<br>Examples <br>• <br>User, Management<br>Domain<br>:OperationKind <br>Range<br>:Origin|
|`:hasEquipmentType/`<br>`:`_`isEquipmentTypeOf`_|A child OP relationship allowing to define the equipment where an<br>observation or actuation is made upon.<br>Examples<br>• <br>Button, Drive<br>Domain<br>:QualityKind/:ProcessKind<br>Range<br>:EquipmentType|
|`:hasLocality/`<br>`:isLocalityOf`|A child OP relationship to a list that describes thegeneric locality<br>characteristic where an observation or actuation is made. It is a<br>generic “place of action”, when e.g., assigned to a room this means<br>“the action happens in a place that isa room” but not in which room<br>exactly, this is a room instance of an Installation.<br>Examples <br>• <br>Duct Section, Pipe Section<br>Domain<br>:QualityKind/:ProcessKind<br>Range<br>:Locality|


-----

|Object Property Relationship<br>Predicate|Definition<br>Domain/Range|
|---|---|
|`:hasPhenomenonType/`<br>`:isPhenomenonTypeOf`|A child OP relationship to a list that describes the interest<br>characteristic “type of interest” on what an observation or actuation<br>is made.<br>Examples <br>• <br>Air, Time<br>Domain<br>:QualityKind/:ProcessKind<br>Range<br>:PhenomenonType|
|`:hasVirtualEntityType/`<br>`:isVirtualEntityTypeOf`|A child OP relationship to a list that describes the interest<br>characteristic “type of interest” on what an observation or actuation<br>is made.<br>Examples <br>• <br>Air, Time<br>Domain<br>:ProcessKind<br>Range<br>:VirtualEntityType|
|`:hasQuantityKind/`<br>`:isQuantityKindOf`|A child OP relationship to a list that describes a quantity/countable<br>dimension how an observation or actuation is made.<br>Examples <br>• <br>Position, Count<br>Domain<br>:QualityKind<br>Range<br>:QuantityKind|
|`:hasStateKind/`<br>`:isStateKindOf`|A child OP relationship to a list that describes a non-quantity/non-<br>countable dimension how an observation or actuation is made.<br>Examples <br>• <br>Light State<br>Domain<br>:ProcessKind<br>Range<br>:QuantityKind|


###### 1170


-----

###### 1171 2 Appendix

 1172 2.1 Semantic Export 
 1173 For the definition of Semantic Export itself see clause [03].

 1174 The source data of the Semantic Export is a MaC ETS project that follows XML. It contains the real 1175 world Installation.

 1176 The source model of the Semantic Export is the KIM, defined as an Ontology following OWL. It contains
 1177 concepts (OWL classes) to express the KNX System (including an Installation), its Semantic Dictionary
 1178 hosts specific semantic information (for this see in clause 1.1.8). 

 1179 • Format

 1180 The exported data is at least available in JSON-LD format, a serialization of linked data (also a valid RDF
 1181 document). It is readable also by humans and are thus text based. 

 1182 Linked data are data (individuals) linked to other data (individuals), essentially a directed edge in a graph,
 1183 expressed with RDF triples containing a subject/predicate/object. The linking allows to
 1184 provide a meaningful description of ETS Project data (individuals) from the real-world Installation
 1185 (subject) to a term from KIM or the Semantic Dictionary (object) by using a relationship
 1186 predicate. The overall linked information as such expresses the additional sematic data, allowing
 1187 clients to search for similar or related content, including searching multiple keywords to retrieve super 1188 descriptive elements.

 1189 Linked data supports two principal concepts to express a link:

 1190 • Object Properties 

 1191 OP connect pair of individuals (see definition in clause [03]).

 1192 The predicate is a reference from the KIM or from external content, the subject defines some MaC
 1193 ETS Project data that is assigned with an object resenting data from the Semantic Dictionary. 

 1194 EXAMPLE 52  The individual MyKitchen (subject) from an ETS project is linked to the term Kitchen (object) from
 1195 the Semantic Dictionary with an OP expression loc:hasLoactionUsage (predicate), available in the
 1196 KIM.


###### 1197 project:MyKitchen loc:hasLocationUsage dic-tag:kitchen

 1198 • Type Assertion. 

 1199 An individual connects to a specific type. The predicate is from RDF. 

 1200 EXAMPLE 53  The individual MyOutputPoint (subject) from an ETS project is linked to the type of a Datapoint
 1201 (object) from the KIM with an OP expression rdf:type (predicate), available in RDF.
 1202 project:MyOutputPoint rdf:type knx:Datapoint

 1203 • Syntax

 1204 Single JSON objects will be always exported without square brackets, even if the object itself is part of a
 1205 collection. The brackets may indicate that at this line/location also more than one object can occur but in
 1206 this concrete case it is not, it’s only a single object. The behavior to omit the brackets in such a case is
 1207 conform to JSON and implemented in most JSON-LD ex/import libraries (the real benefit). 

 1208 • Encoding

 1209 The export format encoding is UTF-8. 

 1210 • Processing

 1211 The export data can be processed by a JSON-LD processor to obtain a valid Thing Description. 


-----

###### 1212
 1213 Figure 16 – Semantic Export Details

 1214 2.1.1 Content 
 1215 The most important entries @graph and @context of the topmost node object in the JSON-LD document
 1216 are described here with some important hints. Export examples can be found in clause 3.

 1217 2.1.1.1 Section Context
 1218 Set of rules and definition of short-hand names that are used throughout a JSON-LD document. (JSON)
 1219 data available in JSON-LD can be mapped to the KIM.

 1220 @base

 1221 Defines the document base IRI to resolve relative IRI references in the document. 

 1222 • the Semantic Export will use @base to avoid having IRIs based on the document base;

 1223 • the Semantic Export will use the compacted form (prefix:suffix), the suffix is always available as
 1224 a UUID

 1225 Example

 1226 • "@base": “http://iot.knx.org/project#”

 1227 Namespaces 

 1228 Namespaces of concepts used in the export. 

 1229 Example

 1230 • "td": https://www.w3.org/2019/wot/td/v1#

 1231 • "rdf": http://www.w3.org/1999/02/22-rdf-syntax-ns#

 1232 • "knx": "http://schema.knx.org/2020/ontology/kim#"

 1233 • …

 1234 2.1.1.2 Section Graph
 1235 Used to express an RDF graph (a set of RDF triples). 

|Term|Details|Example|
|---|---|---|
|@id|Unique ID of a JSON-LD node object, together<br>with the @base it forms a full IRI, the part after<br>the # is formatted as an UUID|"@id": "#123e4567-e89b-12d3-a456-<br>426614174000"|
|@type|The class type or URN of the KIM element,<br>possibly extended with extra mappings|"@type": ["knx:Device",  "td:Thing"]<br>"@type": "urn:knx:fct.dimming"|


-----

###### 1236 The further export content in this @graph section follows the KIM Ontology classes including their OP
 1237 relationship predicates. The following concepts are exported:

 1238 • Locations (Buildings, Rooms, Floors, … including possible Tags);

 1239 • Application Functions (including corresponding FPs, possible Tags or available QKs);

 1240 • Function Points (including possible Tags);

 1241 • Equipment (Cabinets, Devices, including a possible Channel and Application Program, …);

 1242 • Points (including possible Tags, expressed with in this specification defined name/type rules for the
 1243 Tags).

 1244 Generally, direct OP relationships are expressed as part of the export, if applicable also their inverse
 1245 relation (loc:hasLocation  loc:isLoactionOf).

 1246 OP relationship with set transitivity characteristics will result in linked individuals with several additional
 1247 link relations and especially an extended concluded result. Example Frankfurt :hasDirectTrain
 1248 Brussels; Brussels :hasDirectTrain London results in Frankfurt :hasDirectTrain London).
 1249 Transitivity conclusions are not additionally expressed in the export. To analyse or see such extra
 1250 conclusions, this needs to be handled by an Ontology reasoner, such as included in Protege.

 1251 2.1.2 Relations
 1252 The following clauses describes relations how entities from KIM and MaC ETS are used for the Semantic
 1253 Export. 

 1254 2.1.2.1 MaC ETS References
 1255 For the following KIM concepts some detailed information for the Semantic Export are given in relation
 1256 to the MaC ETS project.

 1257 Datapoint to Function Point Reference

 1258 In a real-world MaC ETS project this reference reflects the concept of GOs contributing to a
 1259 communication source/sink via a GA. 

 1260 The KIM defines the equivalent concepts with a Function Point and Datapoint, they are interlinked with
 1261 an OP. Both concepts express specific semantic information twice and independently, each of them with
 1262 an own cardinality. The Semantic Export will handle the expressed information for a FP as follows:
 1263 • :Origin, :Trade  Tag is not expressed 
 1264 • :QualityKind  Concept is not expressed, only Datapoints (aka GOs) carries its individual
 1265 Quality Kind
 1266 • :DatapointType  Tag is expressed as defined for a GA in the MaC ETS project 
 1267 If required, an individual semantic meaning of a FP must be reasoned from a client separately. Based on
 1268 the linked Points a client may also incorporate the I/O characteristics (:PointInterface) of the
 1269 Points, including specifically the used OPs (expressing at least one observing and some actuating Points).
 1270 ETS Function Type

 1271 In a real-world MaC ETS project this type reflects an textual string type. This coversall ETS Functions
 1272 originated by MaC ETS, also the custom type.


-----

###### 1273 The KIM defines the equivalent concept for an ETS Function with an Application Function, defined as
 1274 part of the Semantic Dictionary. Subclasses of this Application Function allows to precisely define
 1275 Application Function to achieve a specific task (with a specific semantic meaning) including all necessary
 1276 FPs, such as a light dimming function. The Semantic Export will handle the expressed information as
 1277 follows:
 1278 • :ApplicationFunction  is expressed at least as an Application Function
 1279 NOTE 26 Only in case an installer edits the OP's at a FP and ETS Function directly in the MaC ETS they have a strong
 1280 meaning for this project. A simple accumulation of all tags or a rule-based computation of an overall result
 1281 (based on the linked Points with its different properties) is not productive.


###### 1282 2.1.2.2 External References
 1283 The exported data contains references to external Ontologies such as of Thing Description and other. The
 1284 following table lists concepts present in the Semantic Export but not present in the KIM.

 1285 Table 4 – External References from KNX IoT/ KIM to Semantic Export

|Semantic Export Concept|KIM Concept|Comment|
|---|---|---|
|`td:Thing`|`:Device,:Gateway`|• additional TD(class) type|
|`td:InteractionAffordance`|`:Datapoint`|• additional TD (class) type for<br>Points|
|`td:PropertyAffordance`|`:Datapoint`|• additional TD (class) type for<br>Points with GO flags C+(R or W)|
|`td:EventAffordance`|`:Datapoint`|• additional TD (class) type for<br>Points with GO flags C + T<br>• for a more detailed explanation of<br>this, please refer to the examples in<br>next clause|
|`td:hasPropertyAffordance/`<br>`td:isPropertyAffordanceOf`|-|• child OP of TD interaction<br>affordance<br>• describes a direct relation from a<br>Device to(property based) Points|
|`td:hasEventAffordance/`<br>`td:isEventAffordanceOf`|-|• child OP of TD interaction<br>affordance<br>• describes a direct relation from a<br>Device to(event based) Points|
|`td:hasForm`|-|• protocol binding to express the<br>content type and target URL, how<br>to operate on a Point in the KNX<br>IoT Point API<br>• expresses the target URL directly<br>for the Device hosting the Point or<br>over aproxied Gateway|
|`hctl:forContentType`|-|• content type definition for a Point in<br>the KNX IoT Point API<br>(application/json),<br>not specified explicitly|
|`hctl:hasTarget`|-|• absolute IRI/ link to an individual<br>Point as part of a Device in an<br>Installation for the KNX IoT Point<br>API<br>• pre-filled with an arbitrary IPv4<br>address|


-----

|Semantic Export Concept|KIM Concept|Comment|
|---|---|---|
|`td:isObservable`|-|• definition if a Point on the KNX<br>IoT Point API is generally<br>accessible for reading|


###### 1286 2.1.2.3 Different Representation 
 1287 The below table lists concepts present in the Semantic Export but having a different representation in the
 1288 KIM. 

 1289 Table 5 - Representations from KNX IoT/ KIM to Semantic Export

Semantic Export Concept KIM Concept Comment
`jsonschema:readOnly` :readable KIM concept is used to define the
semantic export concept.

`jsonschema:writeOnly` :writable

                                                                 - readOnly= readable + !writable

                                                                 - writeOnly= writable + !readable

###### - Both concepts are exported.

 1290 2.1.3 Assignments 
 1291 Below table list concepts, present in the Semantic Export and its assignments to the MaC ETS project. 

 1292 The column Semantic Export contains the exported object, which has the same (export) name as it is
 1293 defined in the KIM. The underneath listed objects details the corresponding properties of this (export)
 1294 object. To detail them further the following abbreviations are used as part of this column. 

 1295 • CL: KIM Ontology Class
 1296 • OP: KIM Object Property
 1297 • DP: KIM Data Property

 1298 The column MaC ETS Project contains the in MaC ETS project elements, if applicable with the
 1299 corresponding XML element. 
 1300 NOTE 27 Not in all cases a corresponding XML element is available at all or can be uniquely defined. For the latter case this may
 1301 depend on the availability of other related data, such as to present a translated description (if available) instead of the
 1302 original name in a certain language.

 1303 2.1.3.1 Address

 1304 2.1.3.2 Application Program

 1305 References

|Semantic Export Concept|KIM Concept|Comment|
|---|---|---|
|`jsonschema:readOnly`|:readable|KIM concept is used to define the<br>semantic export concept. <br>- <br>readOnly= readable + !writable<br>- <br>writeOnly= writable + !readable<br>- <br>Both concepts are exported.|
|`jsonschema:writeOnly`|:writable|:writable|

|Semantic Export|MaC ETS Project|
|---|---|
|**:ApplicationProgram** <br>CL|- Manufacturer/ApplicationProgram<br>- the instantiated application program of a device with its information,<br>in MaC ETS only visible as part of the device properties|
|- <br>dcterms:title<br>DP|- application program, name|
|- <br>rdfs:labeli|- application program, name|
|- <br>:implements<br>OP|-|
|- <br>:hasChannel<br>OP|-|
|- <br>:manufacturer<br>DP|- device, device manufacturer|
|- <br>:version<br>DP|- application program, program version|
|- <br>:model<br>DP|- application program, device type|


-----

|Semantic Export|MaC ETS Project|
|---|---|
|- <br>:certificationStatus<br>DP|- hardware 2 program, registration info  (in ETS visible_Certification_)|
|- <br>:isApplicationProgramOf<br>OP|- reference to the instantiated device|


###### 1306 Details 

 1307 • TBD

 1308 Requirements

 1309 • TBD

 1310 2.1.3.3 Application Function

 1311 2.1.3.4 Aspect 

 1312 2.1.3.5 Asset

 1313 2.1.3.6 Cabinet

 1314 2.1.3.7 Channel

 1315 2.1.3.8 Datapoint

 1316 References

**Semantic Export**

**:Datapoint** CL

###### 1317 Details 

 1318 • TBD

 1319 Requirements

 1320 • TBD

|Semantic Export|MaC ETS Project|
|---|---|
|**:Datapoint** <br>CL|• Installation/Device/ComObjectInstanceRef<br>- the instantiated GO of a device with its information, in MaC ETS only<br>visible as part of the device properties<br>- may include (min 1) DPT information, the DPT with the lowest<br>major/minor number is used as the (single) reference<br>- may include some individual tags assigned from class :Tag<br>- may include a QK/PK reference from the KIM|


-----

###### 1321 2.1.3.9 Device

 1322 2.1.3.10 Equipment

 1323 2.1.3.11 Functional Block

 1324 2.1.3.12 Functionality

 1325 2.1.3.13 Function Point

 1326 2.1.3.14 Gateway

 1327 2.1.3.15 Installation

 1328 2.1.3.16 Installation

 1329 2.1.3.17 JSON Data Schema

 1330 2.1.3.18 Location

 1331 2.1.3.19 Point

 1332 2.1.3.20 Product

 1333 2.1.3.21 Quality Kind, Process Kind

 1334 2.1.3.22 Tag

 1335 2.1.3.23 Unit


-----

###### 1336 3 Examples
 1337 The facility management, for example, normally uses heterogeneous visualization tools and applications. 

 1338 KNX IoT defines a KIM, enriched with semantic data that can be exported (Semantic Export), a KNX
 1339 IoT 3[rd] Party Client can import this data. This provides a simple and powerful way to view important
 1340 building data inside a 3rd party visualization tool of choice. 

 1341 The following JSON-LD example uses the vocabulary from section “KNX Information Model” and, in
 1342 addition, the W3C Thing Description [TD] for describing how to access data on KNX IoT devices.

 1343 The underneath JSON-LD example expresses a snippet of the KNX Semantic Export, following elements
 1344 are used respectively expressed:

 1345 • the vocabulary from KIM and Semantic Dictionary

 1346 • the mapping to external Ontologies such Thing Description or QUDT

 1347 • the mapping of KNX IoT Point API for describing how to access data on KNX IoT Devices with
 1348 measures of W3C Thing Description

 1349 NOTE 28 For readability of the examples:
 1350 o comments with “//” are not expressed conform to JSON
 1351 o UUID conform format such as <123e4567-e89b-12d3-a456-426614174001> is shortened to <uuid 1352 inst-x-dev1> or similar, only to depict that a certain @id is an UUID. 

 1353 3.1.1 Room Temperature Control 
 1354 Next JSON-LD example contains the following main hierarchical structures which are linked together,
 1355 :Devices, :Point, :FunctionPoint and loc:Location. 

 1356 1. The first Device located in office no. 445 implements a Channel (as part of an Application
 1357 Program) which provides a room temperature sensor Point. 

 1358 o The room temperature value belongs to a room heating function which controls the air
 1359 temperature in office no. 445. 

 1360 o The Point sends its value on group address 1234. 

 1361 2. The second Device is mounted at a building exterior facade and provides an outside temperature
 1362 sensor Point.

 1363 o The Point sends its value on group address 2345. 
 1364 o The device expresses an explicit Functional Bock as part of the device. 

 1365 As a note, both (artificial) devices in this example supports a combination of KNX Classic and Point API
 1366 communication (Points have a FP + assigned GA and an additional CoAP reference).

 1367 Next figure depicts this configuration with some information from the exported data. 


-----

###### 1368
 1369 Figure 17 – Linked Data Example Room Temperature Control

 1370 JSON-LD SNIPPET


{
"@context": [{ // JSON-LD context part
"@base": "http://knx.org/installation/12345#", // Project instance IRI (must be unique)
"td": "https://www.w3.org/2019/wot/td#", // TD IRI
"jsonschema": "https://www.w3.org/2019/wot/json-schema#", // JSON Schema IRI (IoT data types)
"dct": "http://purl.org/dc/terms/", // DCT terms IRI
"hctl": "https://www.w3.org/2019/wot/hypermedia#", //
"knx": "http://schema.knx.org/2020/ontology/knx#", // KNX System IRI
"loc": "http://schema.knx.org/2020/ontology/loc#", // KNX location IRI
"schema": "http://schema.org/",
"qudt": "http://qudt.org/schema/qudt/", // QUDT IRI (Object Properties)
"unit": "http://qudt.org/vocab/unit/", // QUDT IRI (Units)
"dic": "http://schema.knx.org/2020/ontology/dictionaries/dic#", // KNX Semantic Dictionary IRI, classes
"dic-tag": "http://schema.knx.org/2020/ontology/dictionaries/dic-tag#" // KNX Semantic Dictionary IRI, individuals
}],
"@graph": [{ // JSON-LD graph part
"@id": "uuid-inst-x-dev1", // rel. IRI device #1, also used in API {Id}
"@type": ["td:Thing", "knx:Device"], // KIM device" + TD thing" OWL class type
"dct:title": "Room Sensor Device", // device #1 name
"td:hasPropertyAffordance": {"@id": "uuid-inst-x-dev1-point1"}, // direct link from device to sensor Point
"knx:isProduct": "VendorProduct-123", // product instance n/a in this JSON extract
"knx:serialNumber": "123456",
"knx:individualAddress": "5678", // KNX individual device #1 address, 16 bit
"loc:isEquipmentOf": {"@id": "uuid-inst-x-office-445"}, // rel. to the assembly place of device #1
"knx:hasChannel": {"@id": "uuid-inst-x-channel-1"} // rel. to the channel of device #1
},


-----

{
"@id": "uuid-inst-x-dev2", // rel. IRI device #2, also used in API {Id}
"@type": ["td:Thing", "knx:Device"],
"dct:title": "Outside Sensor Device",
"td:hasPropertyAffordance": {"@id": "uuid-inst-x-dev2-point1"},
"knx:isProduct": "VendorProduct-234", // product instance n/a in this JSON extract
"knx:serialNumber": "234567",
"knx:individualAddress": "6789",
"loc:isEquipmentOf": {"@id": "uuid-inst-x-facade-1"}, // rel. to the assembly place of Device #1
"knx:supportsFunctionalBlock": {"@id": "uuid-inst-x-functionalblock1"} // rel. to a Functional Block
},
{
"@id": "uuid-dev-1-channel-1", // rel. IRI channel #1
"@type": "knx:Channel", // KIM type
"knx:isChannelOf": {"@id": "uuid-inst-x-dev1"}, // reference to Device #1
"knx:hasPoint": {"@id": "uuid-inst-x-dev1-point1"}
},
{
"@id": "uuid-inst-x-functionalblock1", // Functional Block

"@type": "dic:fb.320", // FB type, from Semantic Dictionary [11][)]
"dct:title": "OTS", // FB name in dictionary
"knx:isFunctionalBlockOf": {"@id": "uuid-inst-x-dev2"}, // inv. reference of FB to Device #2
"knx:isComposedBy": {"@id": "uuid-inst-x-dev1-point1"} // FB is composed by Datapoint
},
{
"@id": "uuid-inst-x-dev1-point1", // Point #1
"@type": ["td:PropertyAffordance", // is of type - TD property affordance
"dic:dpa.320.51"], // Datapoint with type dpa.320.51
"dct:title": "Room Temp. Sensor Value", // Datapoint name
"jsonschema:readOnly": true, // additional data property for TD
"knx:readable": true, // KNX KIM data property
"knx:writeable": false, // KNX KIM data property
"jsonschema:minimum": 0.0, // applicative min value as xsd:decimal
"jsonschema:maximum": 50.0, // applicative max value as xsd:decimal
"knx:datapointType" : "dic:valueTemp", // typed Point with type KNX DPT 9.1
"qudt:unit": "unit:DEG_C", // QUDT unit, is in line with DPT 9.1
"schema:unitCode": "CEL", // Schema unit (req. for valid TD conv.)
"knx:pointInterface": "dic-tag:if.o", // Semantic Dictionary Tag, log. output
"knx:operatesForTrade": ["dic-tag:heating"], // Semantic Dictionary Tag, trade Heating
"knx:hasQualityKind": {"@id": "uuid-qk-inst-x-air-temp-room"}, // generic relation to QK
"td:isPropertyAffordanceOf": {"@id": "uuid-inst-x-dev1"}, // inverse OP relationship to Device #1
"knx:isGroupedBy": {"@id": "uuid-inst-x-fp1"}, // relation to (KNX Classic) Function Point
"knx:isPointOf": {"@id": "uuid-dev-1-channel-1"},
"td:hasForm": { // hyper media control definitions
"hctl:forContentType": "application/json", // Point content type format
"hctl:hasTarget": "coap://uuid-inst-x-dev1.device.knx.local/320/51" // CoAP URL to the Point of the Device to
} // directly access the Point via Point API
}, // with CoAP
{
"@id": "uuid-inst-x-dev2-point1", // Point #2
"@type": ["td:PropertyAffordance", // TD type reference
"dic:dpa.320.51"], // KNX type reference, Datapoint
"jsonschema:IntegerSchema"],
"dct:title": "Outside Temp. Sensor Value",


11) In case of using standardized FB types (see example, dic:fb.320, all included Points must fulfill the definition
of the FB from the Semantic Dictionary, otherwise type :FunctionaBlock must be used.

To express a FB separately as part of a Device allows to assign Device Point instances to this FB instance. The
relation which Point instance is assigned to which FB instance may of interest if a Device contains no
standardized FB, or more than one (standardized) FB of the same type.


-----

"td:isObservable": true,
"jsonschema:readOnly": true,
"knx:readable": true,
"knx:writeable": false,
"jsonschema:minimum": -50.0,
"jsonschema:maximum": 50.0,
"knx:datapointType" : "dic:valueTemp", // typed Point with type KNX DPT 9.1
"qudt:unit": “unit:DEG_C",
"schema:unitCode": "CEL",
"knx:pointInterface": "dic-tag:if.o",
"knx:operatesForTrade": ["dic-tag:heating", "dic-tag:ventilation"],
"knx:hasQualityKind": {"@id": "uuid-qk-inst-x-air-temp-outside"},
"td:isPropertyAffordanceOf": {"@id": "uuid-inst-x-dev2"},
"knx:isGroupedBy": {"@id": "uuid-inst-x-fp2"},
"knx:isPointOf": {"@id": "uuid-inst-x-functionalblock1"},
"td:hasForm": {
"hctl:forContentType": "application/json",
"hctl:hasTarget": "coap://uuid-inst-x-dev2.device.knx.local/320/51"
}
},
{
"@id": "uuid-inst-x-fnc1", // Application Function is of the …
"@type": "dic:individualRoomCtrl", // … indicated App. Domain type (example)
"dct:description": "Room Heating Function", // App. Function user friendly name
"knx:operatesForTrade": ["dic-tag:heating"], // assigned trade tag
"knx:groups": {"@id": "uuid-inst-x-dev1-point1"}, // direct link to point #1 of device #1
"knx:hasFunctionpoint": {"@id": "uuid-inst-x-fp2"}, // relation to FP
"knx:isApplicationFunctionOf": {"@id": "uuid-inst-x-office-445"} // relation to place of action
},
{
"@id": "uuid-inst-x-fp2", // Function Point #2
"@type": "knx:FunctionPoint", // type
"knx:groups": {"@id": "uuid-inst-x-dev2-point1"}, // link to point #1 of device #2
"knx:groupAddress": "2345", // GA value in KNX Classic
"knx:ipv6Multicast": "FF02::FD", // multicast address on Point API
"knx:isFunctionPointOf": {"@id": "uuid-inst-x-fnc1"} // isOf… relation to Application Function
},
{
"@id": "uuid-inst-x-fp1", // Function Point #1
"@type": "knx:FunctionPoint",
"knx:groups": {"@id": "uuid-inst-x-dev1-point1"},
"knx:datapoinType": {"@id": "dic:alarm"},
"knx:groupAddress": "1234",
"knx:ipv6Multicast": "FF02::FD"
},
{
"@id": "uuid-inst-x-building-1",
"@type": "loc:Building",
"dct:title": "MyBuilding",
"loc:hasOutside ": {"@id": "uuid-inst-x-facade-1"},
"loc:hasFloor": {"@id": "uuid-inst-x-floor-1"}
},
{
"@id": "uuid-inst-x-facade-1", // a facade …
"@type": "loc:Outside", // … which is outside
"loc:hasLocationUsage": "dic-tag:facade",
"loc:isOutsideOf": {"@id": "uuid-inst-x-building-1"} // … of the building "MyBuilding"
},
{
"@id": "uuid-inst-x-floor-1",
"@type": "loc:Floor",
"loc:hasRoom": {"@id": "uuid-inst-x-office-445"}


-----

},
{
"@id": "uuid-inst-x-office-445",
"@type": "knx:Room",
"dct:title": "Room No. 445",
"loc:hasLocationUsage": "dic-tag:office" // location usage of room no. 445
},
{
"@id": "uuid-qk-inst-x-air-temp-outside", // Quality Kind (instance data!)
"@type": "knx:QualityKind",
"knx: observesQualityKind": {"@id": "uuid-qk-inst-x-air-temp- outside"}, // has specific relation to instance of QK …
"knx:isObservedBy": {"@id": "uuid-inst-x-dev2-point1"} // is observed by …
}, // knx: isQualityKindOf woud be also correct in this example, used only to better visualize it
{
"@id": "uuid-qk-inst-x-air-temp-room", // Quality Kind (instance data!)
"@type": "knx:QualityKind",
"knx:observesQualityKind": {"@id": "dic:phenomenonAirTempRoom"} // has specific relation to QK of KIM …
"knx:isObservedByQualityKind": {"@id": "uuid-inst-x-dev1-point1"} // is observed by … but
}, // knx:isQualityKindOf woud be also correct in this example, used only to better visualize it
{
"@id": "uuid-qk-inst-x-air-temp- outside", // local instance of Quality Kind
"@type": "knx:QualityKind", // generic type expresses an individual
"knx:hasPhenomenonType": "dic-tag:air", // combination of tags air, …
"knx:hasQuantityKind": "quantitykind:Temperature", // temperature and outside, as part …
"knx:hasLocality": "dic-tag:outside", // of the installation
}
]
}


###### 1371

 1372 3.1.2 Light Switch Control
 1373 Next JSON-LD example contains the following main hierarchical structures which are linked together, :
 1374 Gateway, :Device, :ApplicationFunction and loc:Location. 

 1375 1. One Device located in office no. 445 implements a Channel which provide a Sensor with a switch
 1376 output and corresponding status input Point. 

 1377 2. One Device located in office no. 445 implements a Channel which provide an Actuator with
 1378 switch input and corresponding status output Point. 

 1379 3. The Points sends its value on group address 1396 and 1397. The involved Function Points are
 1380 linked together with :isStatusOf.

 1381 4. A third Device expresses the proxy for the two Devices from above.

 1382 Next figure depicts this configuration with some information from the exported data. 


-----

###### 1383
 1384 Figure 18 – Linked Data Light Example with KNX Classic Gateway

 1385 JSON-LD SNIPPET


{
"@context": [{
"@base": "http://knx.org/installation/12345#", // Project instance IRI (must be unique)
"td": "https://www.w3.org/2019/wot/td#", // TD IRI
"jsonschema": "https://www.w3.org/2019/wot/json-schema#", // JSON Schema IRI (IoT data types)
"dct": "http://purl.org/dc/terms/", // DCT terms IRI
"hctl": "https://www.w3.org/2019/wot/hypermedia#", //
"knx": "http://schema.knx.org/2020/ontology/knx#", // KNX System IRI
"loc": "http://schema.knx.org/2020/ontology/loc#", // KNX location IRI
"schema": "http://schema.org/",
"qudt": "http://qudt.org/schema/qudt/", // QUDT IRI (Object Properties)
"unit": "http://qudt.org/vocab/unit/", // QUDT IRI (Units)
"dic": "http://schema.knx.org/2020/ontology/dictionaries/dic#", // KNX Semantic Dictionary IRI, classes
"dic-tag": "http://schema.knx.org/2020/ontology/dictionaries/dic-tag#" // KNX Semantic Dictionary IRI, individuals
}],
"@graph": [{
"@id": "uuid-inst-x-dev3", // Device #3 - gateway
"@type": ["td:Thing", "knx:Gateway"],
"dct:title": "Gateway 1. Floor",
"knx:isProduct": "VendorProduct-839",
"knx:serialNumber": "75395",
"knx:individualAddress": "3399",
"knx:isProxyFor": {"@id": "uuid-inst-x-dev1"}, {"@id": "uuid-inst-x-dev2"},
"loc:isEquipmentOf": {"@id": "uuid-inst-x-office-445"}
},
{
"@id": "uuid-inst-x-dev1", // Device #1 - actuator
"@type": ["td:Thing", "knx:Device"],
"dct:title": "Room Light Switch Device",
"td:hasPropertyAffordance": [{"@id": "uuid-inst-x-dev1-point1"},{"@id": "uuid-inst-x-dev1-point2"}],
"knx:isProduct": "VendorProduct-852",
"knx:serialNumber": "456789",
"knx:individualAddress": "8765",
"knx:hasChannel": {"@id": "uuid-inst-x-dev1-ch1"},
"loc:isEquipmentOf": {"@id": "uuid-inst-x-office-445"},
"knx:hasProxy": {"@id": "uuid-inst-x-dev3"}
},
{


-----

"@id": "uuid-inst-x-dev2", // Device #2 – sensor
"@type": ["td:Thing", "knx:Device"],
"dct:title": "Luminaire Device",
"td:hasEventAffordance": {"@id": "uuid-inst-x-dev1-point1"}, // direct link from Device to status Point
"td:hasPropertyAffordance": {"@id": "uuid-inst-x-dev2-point1"}, // direct link from Device to status Point
"knx:isProduct": "VendorProduct-258",
"knx:serialNumber": "345678",
"knx:individualAddress": "9874",
"knx:hasChannel": {"@id": "uuid-inst-x-dev2-ch1"},
"loc:isEquipmentOf": {"@id": "uuid-inst-x-office-445"},
"knx:hasProxy": {"@id": "uuid-inst-x-dev3"}
},
{
"@id": "uuid-inst-x-dev1-ch1", // Channel device 1 – actuator
"@type": "knx:Channel",
"dct:description": "Actuator Basic",
"knx:hasPoint": [{"@id": "uuid-inst-x-dev1-point1"},{"@id": "uuid-inst-x-dev1-point2"}],
"knx:isChannelOf": {"@id": "uuid-inst-x-dev1-dev"}
},
{
"@id": "uuid-inst-x-dev2-ch1", // Channel device 2 – switch
"@type": "knx:Channel",
"dct:description": "Switch Info",
"knx:hasPoint": [{"@id": "uuid-inst-x-dev2-point1"}, {"@id": "uuid-inst-x-dev2-point2"}],
"knx:isChannelOf": {"@id": "uuid-inst-x-dev2-dev"}
},
{
"@id": "uuid-inst-x-dev2-point1", // Sensor Point #1 (device 2)

"@type": ["td:EventAffordance", // Event Affordance [12][)]
"dic:dpa.417.70"], // Datapoint switch control
"dct:title": "Switch",
"knx:isGroupedBy": {"@id": "uuid-inst-x-fp3"},
"td:isPropertyAffordanceOf": {"@id": "uuid-inst-x-dev2"},
"knx:hasPointInterface": "dic-tag:if.o", // logical output
"knx:operatesForTrade": ["dic-tag:lighting"],
"knx:datapointType": "dic:switch",
"knx: hasQualityKind ": {"@id": "uuid-inst-light-illuminance"}, // generic relation to QK
"td:hasForm":{ // hyper media control definitions
"hctl:forContentType": "application/vnd.api+json", // Point content type format
"hctl:hasTarget": "http://gateway.knx.local/datapoints/uuid-inst-x-dev2-point1"
} // HTTP URL to the Point of the Device to
// indirectly access the Point via proxied
// gateway with HTTP
},
{
"@id": "uuid-inst-x-dev2-point2", // Sensor Point #2 (device 2)
"@type": ["td:PropertyAffordance",
"dic:dpa.417.71"], // Datapoint type switch status
"dct:title": "Switch Status",
"knx:isGroupedBy": {"@id": "uuid-inst-x-fp4"},
"td:isPropertyAffordanceOf": {"@id": "uuid-inst-x-dev2"},
"knx:pointInterface": "dic-tag:if.i", // logical input
"knx:operatesForTrade": ["dic-tag:lighting"],


12) The Point is modelled as td:EventAffordance since the “switch” status value is a discrete event that is
communicated instantaneous to the interested receivers.
A discrete event is something that occurs instantaneously (as opposed to continuously or gradually) in time. It
represents a “spike”, a discontinuity, or a discrete change of state for the system. In contrast, the temperature
values are modelled as a td:PropertyAffordance in the example of clause 3.1.1 since the value is readable at any
time and changes are gradually.


-----

"knx:datapointType": "dic:switch",
"knx: hasQualityKind ": {"@id": "uuid-inst-actuator-state"}, // generic relation to QK
"td:hasForm": {
"hctl:forContentType": "application/vnd.api+json",
"hctl:hasTarget": "http://gateway.knx.local/datapoints/uuid-inst-x-dev2-point2"
}
},
{
"@id": "uuid-inst-x-dev1-point1", // Actuator Point #1 (device 1)
"@type": ["td: PropertyAffordance ", // Property Affordance
"dic:dpa.417.71"], // Datapoint type status
"dct:title": "Actuator Status",
"knx:operatesForTrade": ["dic-tag:lighting"],
"knx:datapointType": "dic:switch",
"knx:hasPointInterface": "dic-tag:if.o", // logical output
"knx:isGroupedBy": {"@id": "uuid-inst-x-fp4"},
"td:hasForm": {
"hctl:forContentType": "application/vnd.api+json",
"hctl:hasTarget": "http://gateway.knx.local/datapoints/uuid-inst-x-dev1-point1"
}
},
{
"@id": "uuid-inst-x-dev1-point2", // Actuator Point #2 (device 1)
"@type": ["td:PropertyAffordance", // Property Affordance
"dic:dpa.417.70", // Datapoint type switch control
"jsonschema:BooleanSchema"],
"dct:title": "Switch",
"knx:operatesForTrade": ["dic-tag:lighting"],
"knx:datapointType": "dic:switch",
"knx:hasPointInterface": "dic-tag:if.i", // logical input
"knx:isGroupedBy": {"@id": "uuid-inst-x-fp3"},
"td:hasForm": {
"hctl:forContentType": "application/vnd.api+json",
"hctl:hasTarget": "http://uuid-inst-x-dev3.gateway.knx.local/datapoints/uuid-inst-x-dev1-point2"
}
},
{
"@id": "uuid-inst-x-fp3", // FP - switch control
"@type": "knx:FunctionPoint", // sensor output > actuator input
"knx:groups": [{"@id": "uuid-inst-x-dev2-point1"}, {"@id": "uuid-inst-x-dev1-point2"}],
"knx:groupAddress": "1397"
},
{
"@id": "uuid-inst-x-fp4", // FP - switch status
"@type": "knx:FunctionPoint", // actuator output > sensor input
"knx:groups": [{"@id": "uuid-inst-x-dev1-point1"},{"@id": "uuid-inst-x-dev2-point2"}],
"knx:groupAddress": "1396"
"knx:isStatusOf": {"@id": "uuid-inst-x-fp3"}
},
{
"@id": "uuid-inst-x-fnc2", // Application Function
"@type": "dic:switchingStatusLight", // IRI to App. Function in KIM
"td:description": "Room Light Function",
"knx:isApplicationFunctionOf": {"@id": "uuid-inst-x-office-445"},
"knx:hasFunctionPoint": [{"@id": "uuid-inst-x-fp3"}, {"@id": "uuid-inst-x-fp4"}]
},
{
"@id": "uuid-inst-x-office-445",
"@type": "loc:Room",
"dct:title": "Room No. 445",
"knx:hasApplicationFunction": {"@id": "uuid-inst-x-fnc2"},
"loc:containsEquipment": [{"@id": "uuid-inst-x-dev3"}, {"@id": "uuid-inst-x-dev2"}, {"@id": "uuid-inst-x-dev1"}],


-----

"loc:hasLocationUsage": {"@id": "dic-tag:office"}
},
{
"@id": "uuid-inst-light-illuminance", // QK for the sensor
"@type": "knx:QualityKind",
"knx:actsOnQualityKind": {"@id": "uuid-qk-inst-light-illuminance"}, // has specific relation to instance of QK …
"knx:isActedOnByQualityKind": {"@id": "uuid-inst-x-dev2-point1"} // is actuated by a switch … but
},// knx:isQualityKindOf woud be also correct in this example, used only to better visualize it
{
"@id": "uuid-inst-actuator-state", // QK for the actuator
"@type": "knx:QualityKind",
"knx:measuresQualityKind": {"@id": "uuid-qk-inst-actuator-state"}, // has specific relation to instance of QK …
"knx:isMeasuredByQualityKind": {"@id": "uuid-inst-x-dev2-point2"} // is measured by … but
}, // knx:isQualityKindOf woud be also correct in this example, used only to better visualize it
{
"@id": "uuid-qk-inst-light-illuminance", // local instance of Quality Kind
"@type": "knx:QualityKind",
"knx:hasPhenomenonType": "dic-tag:light", // KNX tag equipment
"knx:hasQuantityKind": "quantitykind:Illuminance" // QUDT tag quantity
},
{
"@id": "uuid-qk-inst-actuator-state", // local instance of Quality Kind
"@type": "knx:QualityKind",
"knx:hasEquipmentType": "dic-tag:actuator", // represented by an actuator
"knx:hasQuantityKind": "dic-tag:stateQuantity" // boolean state
},
]} // end of @graph
} // end of JSON object


###### 1386


i additionally added, to allow a better visualization of the export data in external editors/viewers


-----

