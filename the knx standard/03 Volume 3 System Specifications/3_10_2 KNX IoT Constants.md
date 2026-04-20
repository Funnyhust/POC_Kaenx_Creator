1

2

3

4

5


# System Specifications

## KNX IoT

 Constants


6 Summary

7 This document provides KNX IoT terms, definitions, and constants.

8 Version 1.0.1 is a KNX Approved Standard.

9


-----

10 **Document updates**

**Version** **Date** **Modifications**

0.1 2021.03.22 - Document creation.
1.0.0 2021.10.28 - Creation of the Draft for Voting.
1.0.1 2022.04.04 - Creation of the Approved Standard.
11

12 **References**

[01] Chapter 3/1/2 “Glossary”

[02] Chapter 3/10/3 “KNX IoT Information Model”
13

Filename: 3_10_2 KNX IoT Constants.docx
Version: 1.0.1
Status: Approved Standard
Save date: 2022.04.04
Number of pages: 18

|Version|Date|Modifications|
|---|---|---|
|0.1|2021.03.22|-<br>Document creation.|
|1.0.0|2021.10.28|-<br>Creation of the Draft for Voting.|
|1.0.1|2022.04.04|-<br>Creation of the Approved Standard.|


-----

14 **Contents**

15 **1** **Symbols and abbreviations .................................................................................................... 4**

16 **2** **Terms and definitions ............................................................................................................ 7**

17 2.1 Terms .............................................................................................................................. 7

18 2.2 Mapping of terms .......................................................................................................... 13

19 **3** **Requirements language ....................................................................................................... 15**

20 **4** **Bibliography ......................................................................................................................... 16**

21


-----

22 **1** **Symbols and abbreviations**

|Abbreviation|Description|
|---|---|
|AES|Advanced Encryption Standard|
|AP|Application Program|
|CA|Certification Authority|
|CBC|Cipher Block Chaining|
|CBOR|Concise Binary Object Representation, RFC 7049|
|CCM|Counter with CBC-MAC|
|Cn|Conditions are specified under note “n”|
|CN|Common Name (host name as part of a certificate)|
|CoAP|Constrained Application Protocol, RFC 7252|
|CoV|Change of Value|
|`cov`|Change of Value|
|CTR|Counter Mode (of Operation)|
|DHCP|Dynamic Host Configuration Protocol|
|DNS|Domain Name System, RFC 6763|
|DP|Datapoint|
|DPT|Datapoint Type (of KNX Classic)|
|DoS|Denial of Service|
|ECDH|Elliptic Curve Diffie–Hellman|
|EM|Energy Management|
|ETS|Engineering Tool Software|
|FB|Functional Block|
|FOI|Feature of Interest|
|FQDN|Fully Qualified Domain Name|
|GA|Group Address|
|`ga`|Group Address|
|`hbt`|Heartbeat|
|GO|Group Object|
|`go`|Group Object|
|HTTP|Hypertext Transfer Protocol, if not stated differently HTTP/1.1|
|HTTPS|Hypertext Transfer Protocol Secure|
|IA|Individual Address|
|`ia`|Individual Address|
|IANA|Internet Assigned Number Authority,<br>https://www.iana.org/assignments/media-types/media-<br>types.xhtml|
|ICMP|Internet Control Message Protocol|
|ID|Identifier|


-----

|Abbreviation|Description|
|---|---|
|`id`|Identifier|
|`if`|Interface|
|IFC|Industry Foundation Classes|
|IDevID|Manufacture Device Certificate (factory default setup)|
|IGMP|Internet Group Management Protocol|
|IOT|Interface Object Type|
|IoT|Internet of Things|
|IP|Internet Protocol|
|IRI|International Resource Identifier, RFC 3987|
|IT|Information Technology|
|IV|Initialization Vector|
|JSON|JavaScript Object Notation, RFC 8259|
|JSON-LD|JSON Linked Data,https://www.w3.org/TR/json-ld/|
|KIM|KNX Information Model|
|KNXA|KNX Association|
|LDevID|Operational Device Certificate|
|LRI|Logical Resource Identifier|
|M|Mandatory|
|MDN|Mozilla Developer Network|
|MaC|Management Client|
|MAC|Message Authentication Code|
|MaS|Management Server|
|MC|Message Code|
|mDNS|Multicast DNS, RFC 6762|
|MiM|Man-in-the-Middle|
|`mrt`|Minimum Repetion Time|
|MTU|Maximum Transmission Unit|
|NTP|Network Time Protocol|
|n/a|Not applicable|
|O|Optional|
|OAS|OpenAPI Specification, sch as OAS3 (version 3)|
|:|Depicts a specifically`formatted` ontology class/ individual or<br>data/object property. <br>• `:Aspect`<br>` Aspect class of KIM Ontology`<br>• `qudt:Unit` ` Unit class of QUDT`<br>• `…`|
|OP|Object Property in OWL|
|P2P|Point To Point|


-----

|Abbreviation|Description|
|---|---|
|PBKDF2|Password-Based Key Derivation Function 2|
|PID|Property Identifier|
|PK|Process Kind, expressed in KIM with class`:ProcessKind`|
|QK|Quality Kind, expressed in KIM with class`:QualityKind`|
|SAN|Subject Alternative Name (host name as part of a certificate)|
|SHA|Secure Hash Algorithm|
|SSN|Semantic Sensor Network|
|TCP|Transmission Control Protocol|
|TCP/IP|Transmission Control Protocol over Internet Protocol|
|TD|Thing Description|
|TLS|Transport Layer Security|
|TLS 1.2|Transport Layer Security 1.2 , RFC 5246|
|TURTLE|Terse RDF Triple Language|
|TTL|Time To Live|
|UDP|User Datagram Protocol|
|UDP/IP|Datagram Protocol over Internet Protocol|
|URL|Uniform Resource Locator, RFC 3986|
|URI|Uniform Resource Identifier, RFC 3986|
|URN|Uniform Resource Name, RFC 8141|
|UUID|Universal Unique Identifier, RFC 4122|
|WGI|Working Group Interworking|
|WoT|Web of Things|
|W3C|World Wide Web Consortium|
|X|Not allowed|
|YAML|**Y**AML**A**in't**M**arkup**L**anguage|


-----

23 **2** **Terms and definitions**

24 **2.1** **Terms**

25 General reference is made to the KNX Glossary ([01]).

26 **Actuator**

27 In KNX IoT a Point performing a real-world actuation (executed by a specific procedure, with an

28 expected result) that changes an Installation state during Runtime.

29 - The term Actuator can be mapped to sosa:Actuator in the SSN Ontology.

30 - The subject actuation can be mapped to sosa:Actuation in the SSN Ontology.

31 - The subject procedure can be mapped to sosa:Procedure in the SSN Ontology.

32 - The subject result can be mapped to sosa:Result in the SSN Ontology.

33 **AMQP**

34 Advanced Message Queuing Protocol (AMQP) is an open standard application layer protocol for

35 message-oriented middleware. The defining features of AMQP are message orientation, queuing, routing

36 (including point-to-point and publish-and-subscribe), reliability and security.

37 **Application**

38 please refer to [01]

39 **Application Function**

40 An Application Function uses as set of Functions to achieve the desired behavior of a technical system,

41 typically using a combination of devices exchanging information via their input and output Datapoints.

42 NOTE 1 An Application Function may be split into several Functional Blocks with its input and output

43 Datapoints that are logically connected to each other. The Functional Blocks may be located in one

44 or more devices.


45 EXAMPLE 1 Application Functions examples are “direct electrical heating”, “electrical heating with accumulators”,

46 “warm water heating”, “fan coil air-conditioning” …

47 It must be noted that Application Function and Application are meant to be the same. Reason to introduce

48 an alias term is to use a clear (understandable) reference from Application/ Application Function to the

49 corresponding KIM class :ApplicationFunction or to the ETS Function.

50 **Application Program**

51 please refer to [01]

52 **Aspect**

53 Generally, a specific perspective on a system that contains things with different properties. In KNX IoT a

54 referencing mechanism to organize KIM elements in a specific (mainly Datapoint oriented) perspective.


55 EXAMPLE 2 A Function Point is an ex officio Aspect with an important specific perspective in KNX. It is a

56 referencing mechanism to organize together all to a Function Point interoperating Datapoints (all

57 GOs linked to a GA).

58 **Authorization & Group Manager**

59 entity service that supports an authorized access that a device can join to a specific communication

60 channel

61 **BIM**

62 Building Information Model, a digital process to describe and document a building in all its life cycle

63 phases, from its planning, construction, operation up to its demolition.

64 **BRSKI**

65 Bootstrapping Key Infrastructure


-----

66 **Channel**

67 A Channel is a collection of Datapoints of a device that are logically related to each other typically by

68 association with a hardware feature or a specific function of that device.

69 NOTE 2 These Datapoints may be derived from one or more defined KNX Functional Blocks (as laid Volume

70 7 of the KNX Specification) or may be an expansion above and beyond defined KNX Functional

71 Blocks or may be independent of a KNX Functional Block if none is defined for the function

72 associated with the Channel.


73 The concept of a Channel is well-understood by the market participant, e.g. installers.

74 **Configuration**

75 please refer to [01]

76 **Datapoint**

77 Datapoint as specified in [01].

78 Represents a logical input entity of a device acting as recipient of Installation state data, whereas a logical

79 output of a device acts as source of Installation state data.

80 NOTE 3 The term Datapoint is the common term; to specifically denote a Datapoint available in the KNX IoT

81 3rd Party API, the term IoT Datapoint is used, see clause 2.2.

82 **Device**

83 physical element that is part of the network. It is a physical, concrete object that a customer can buy.

84 **Domain CA**

85 entity that issues operational certificates for the domain

86 **Endpoint**

87 interface to a service, a process, or a queue or topic destination in service-oriented architecture

88 **ETS Catalog Entry**

89 For the general term, please refer to [01].

90 In relation to this term created data correlating to the product model, described in [02].

91 **ETS Function**

92 Application Function created by the MaC ETS and assigned to an ETS building structure element,

93 grouping several Group Addresses.

94 **ETS Project**

95 Project created by the MaC ETS documenting the Configuration of an Installation.

96 **Function**

97 Describes a part of the intended behavior of a FB in a building context, please refer to [01].

98 NOTE 4 In KNX Classic a Function is considered to be part of a Device whereas in KNX IoT

99 - an Application Function is spread over multiple Devices

100 - a Function is a customer perspective of the KNX IoT 3[rd] Party API, see 2.2

101 **Functional Block**

102 A Functional Block consists of one or more Functions that belong together and that cannot be separated

103 across two devices but big enough that a device with only one such Functional Block could be marketed.

104 A Functional Block has a well-defined black box behavior, please refer to [01].

105 **Function Point**

106 runtime system state information of a specific Application Function

107 NOTE 5 Shared by at least two Datapoints.

108 NOTE 6 Has a unique identifier that addresses a group of controlled objects. This identifier in KNX Classic is

109 called a Group Address.

110 EXAMPLE 3 < Light Switch > in room living on/off, whereas the < … > is the Function Point name


-----

111 **Group Address**

112 Term as specified in [01]. In KNX IoT a numerical identifier of a Function Point.

113 **Group Communication**

114 communication model in which one sender communicates information to one and typically more

115 receivers

116 NOTE 7 In IoT, this can be realized by simple UDP communication or by using a message broker system or

117 other.


118 NOTE 8 In KNX Classic this is referred to multicast or P2P based Group Communication, either with Group

119 Addresses or Interface Objects (Points) that exchange state data.

120 **Group Message**

121 a message exchanged between Group Objects using a specific group identifier, not necessarily expressing

122 any type of IP unicast or IP multicast communication pattern.

123 **Group Object**

124 please refer to [01]

125 NOTE 9 A Group Object is preferably foreseen for Group Communication using Group Address(es). When

126 assigned to a Group Address, it then becomes a member of that Function Point represented by the

127 Group Address.


128 It may be accessed via P2P communication, if no Group Address is assigned to the Group Object.

129 **Industry Foundation Classes**

130 an open standard to describe BIM data in a digital way. IFC data and models are specified in ISO 16739.

131 **Installation**

132 An assembly of materials and components (devices) placed in position to provide a service (ISO 6707
133 1:2017). An Installation is a deployed system (e.g., HVAC system or fire protection system) and consists

134 of equipment and Functions that are used for a particular purpose.

135 In relation to this term created data correlates to the installation model, described in [02].

136 **IoT Datapoint**

137 Represents an Endpoint at the KNX IoT 3[rd] Party API that:

138 a) corresponds to one Point or one/more Function Points, such as a state data representation of a discrete

139 state in a building context

140 EXAMPLE 4 brightness  discrete state “brightness” is represented by the value 65 (percent)

141 b) is a fully qualified URL e.g., provided by the KNX IoT 3rd Party Server

142 EXAMPLE 5 https://gateway.knx.local/knx/api/v1/datapoints/{Id}

143 State data are exchanges with Group Messages on the (interface) level of a Point or Function Point. In

144 KNX Classic this is implemented either with the equivalent of a Group Object or Group Address (details

145 on possible communication patterns, see Group Object).

146 **IoT Function**

147 Represents a Function at the KNX IoT 3[rd] Party API that:

148 a) is as a collection of IoT Datapoints that fulfils a - by the user - intended behavior.

149 EXAMPLE 6 “living room - rear light dimming”, “kitchen - floor heating”

150 In the Mac ETS, an IoT Function is instantiated data of an ETS Function in an Installation respectively

151 ETS project. The ETS Function itself may base on an Application Function.

152 **JSON API**

153 [specification to build APIs on the basis of JSON in version 1.0, https://jsonapi.org/.](https://jsonapi.org/)

154 NOTE 10 In this specification the JSON API member jsonapi including a version member is not part of any

155 payload response. As specified in JSON API, in the absence of these members the JSON API version

156 1.0 is assumed.


-----

157 **KNX Classic**

158 KNX TP, RF, PL and KNXnet/IP protocol for transport of KNX data, in this specification colloquial also

159 used as synonym for a KNX System without any KNX IoT Devices.

160 **KNX IoT**

161 protocol suite/framework for transport of KNX data on the Internet of Things

162 **KNX IoT Communication Stack**

163 software implemented in a device to comply with KNX IoT

164 **KNX Installation ID**

165 This id is used to separate KNX Installations from each other, specified as a random, unique ID.

166 **KNX Information Model**

167 An Ontology based model of KNX System relevant parts, including additional semantic (dictionary)

168 information (here referred to as the Semantic Dictionary).

169 **KNX IoT 3rd Party API**

170 the set of requirements and regulations through which partial access to an Installation can be gained by

171 offering a collection of Endpoints

172 NOTE 11 This KNX IoT 3[rd] Party API offers an access at the level of the Installation and supports more

173 sophisticated queries to (history) values of installation state data or specific elements of the

174 Installation, such as location, Application Function and Datapoints.


175 **KNX IoT 3rd Party Client**

176 device or service not subject to KNX certification interacting with the Installation from outside using the

177 KNX IoT 3rd Party API

178 NOTE 12 The KNX IoT 3[rd] Party Client will also use other protocols (DNS, …) next to the KNX IoT 3[rd] Party

179 API.


180 NOTE 13 The KNX IoT 3[rd] Party Client connects to a single device that provides the KNX IoT 3[rd] Party API and

181 can use this single device to fully interact with the Installation, possibly depending on a specified

182 authorization mechanism.

183 EXAMPLE 7 A mobile phone (from inside the network, or from an Internet connection) with typically short period

184 connections

185 EXAMPLE 8 A weather service permanently feeding in its weather information using the KNX IoT 3[rd] Party API.

186 **KNX IoT 3rd Party Server**

187 device that implements the KNX IoT 3[rd] Party API


188 NOTE 14 This can be a dedicated device; this can be a function of a device that supports other KNX IoT and

189 non KNX functionalities; it may be located within the local LAN of the KNX IoT installation or outside.

190 NOTE 15 The KNX IoT 3[rd] Party Server will also use other protocols (DNS, OAuth…) next to the KNX IoT 3[rd]

191 Party API.

192 **KNX IoT/Classic Gateway**

193 gateway between KNX IoT and KNX Classic

194 **KNX IoT Point API**

195 the set of requirements and regulations through which devices directly exchange information with each

196 other based on KNX IoT

197 **KNX System**

198 Encompasses KNX standards and definitions, allowing to create an Installation with KNX Classic

199 Devices and KNX IoT Devices.

200 The KNX standards include aspects such as topology constraints for devices, device configuration

201 procedures and runtime interworking principles, Functional Blocks, with FBs specified Application

202 behavior and more.


-----

203 **Management Client**

204 means to configure and commission KNX IoT Devices and KNX Classic Devices, as well as to plan,

205 design and diagnose an entire Installation

206 NOTE 16 The MaC is also responsible to write specific configuration data such as Device parameters or group

207 tables to the Devices.

208 **Message Broker**

209 entity that is receiving messages from publishers and providing it to interested subscribers, the defining

210 characteristic is that the broker itself is a discrete service

211 **MQTT**

212 Message Queuing Telemetry Transport (MQTT) Protocol


213 NOTE 17 the Message Queuing Telemetry Transport (MQTT) Protocol is an ISO standard (ISO/IEC PRF

214 20922) publish-subscribe-based messaging protocol.

215 **Ontology**

216 are conceptual descriptions of things that have a real-world commonality sharing the knowledge of a

217 domain, mainly expressed with OWL

218 NOTE 18 Ontologies are a structured way to describe the meaning of data in ontology classes and should not

219 be mixed up with common data model structures.

220 **Object Property**

221 In OWL a built-in concept that connects pairs of individuals, an object property expression represents

222 the (entire) relationship between the pairs of individuals.

223 **Open API**

224 [a framework / description format to describe APIs, see https://swagger.io/specification/](https://swagger.io/specification/)

225 **OWL**

226 [OWL 2 Web Ontology Language, informally OWL 2, specified by the World Wide Web Consortium](https://www.w3.org/TR/2012/REC-owl2-overview-20121211/)

227 [(W3C), mainly serialized with XML syntax for RDF (RDF/XML).](https://www.w3.org/TR/2012/REC-owl2-overview-20121211/)

228 NOTE 19 In this specification the abbreviation OWL is always an explicit reference to OWL 2.

229 **Process Kind**

230 An abstraction of a real-world thing (phenomenon, equipment, …) defined by its observable or actuatable

231 properties, which are a discrete interpretation of another property (mainly a QK).

232 Colloquial a PK is a property carrier.


233 NOTE 20 A PK is not a “classification/type” tag itself; the “classification/ type” is accomplished with the help of

234 tags. Examples are defined in [02].

235 **Point**

236 represents an interface to data in the system

237 NOTE 21 This document uses the term Point as an umbrella for data that can be accessed from outside of the

238 Device, for instance to interact with other Points from other Devices. Consequently, term Point is a

239 generic superset of the term Datapoint (which describes more precisely the technics how the “data” in

240 the system are structured and/or coded).

241 **Point API**

242 simple RESTful (CoAP or HTTP) application programming interface designed for, but not limited to,

243 constrained class 2 devices [RFC 7228] supporting device individualization, device linking and accessing

244 device runtime data (e.g., Functional Block or Channel Datapoints)

245 **Publisher**

246 entity that is sending messages to a Message Broker

247 **Quality Kind**

248 An abstraction of a real-world thing (phenomenon, equipment, …) defined by its observable or actuatable

249 properties, which are of a continuous, measurable dimension.


-----

250 Colloquial a QK is a property carrier.

251 NOTE 22 A QK is not a “classification/type” tag itself; the “classification/ type” is accomplished with the help of

252 tags. Examples are defined in [02].

253 **Recipient**

254 entity that is receiving messages from a Publisher


255 NOTE 23 A KNX IoT Recipient is a device that receives group messages from a Publisher. If the Recipient is

256 not Subscriber at the same time, then the Recipient endpoint must be a fixed configuration in the

257 Publisher group table.

258 **RDF**

259 [Resource Description Framework, as specified by the https://www.w3.org/RDF/.](https://www.w3.org/RDF/)


260 NOTE 24 RDF is a framework to represent information in the web by using triples. The information can be

261 serialized and stored in many formats such as the TURTLE or JSON(-LD) format. The general RDF

262 [concept description can be found under https://www.w3.org/TR/rdf11-concepts/](https://www.w3.org/TR/rdf11-concepts/)

263 **Registrar**

264 entity that is a service representative of a certain domain, configured to decide whether a new device is

265 allowed to join the domain

266 **Runtime**

267 process-to-process communication of data between KNX IoT and KNX Classic devices, opposing to

268 Configuration

269 NOTE 25 This concerns mainly the communication of Datapoint values (control and status information).

270 **Security Zone**

271 a group of devices that all make use of the same Trust Anchor

272 **Semantic Export**

273 project exported by MaC ETS reflecting an Installation in a linked data format (with a semantic encoding)

274 for 3[rd] party usage. The exported data is:

275 - structured according to the KIM, such as using Object Properties defined in KIM

276 - annotated with additional semantic information from the Semantic Dictionary

277 - referencing concepts of external Ontologies

278 **Semantic Dictionary**

279 Set of standardized terms allowing to annotate required parts of an Installation. Details see [02].

280 **Sensor**

281 In KNX IoT, a Point performing a real-world observation (executed by a specific procedure, triggered by

282 a stimulus), responding a result as an Installation state during Runtime.

283 - The term Sensor can be mapped to `sosa:Sensor` in the SSN Ontology.

284 - The subject observation can be mapped to `sosa:Observation` in the SSN Ontology.

285 - The subject stimulus can be mapped to `ssn:Stimulus` in the SSN Ontology.

286 - The subject procedure can be mapped to sosa:Procedure in the SSN Ontology.

287 - The subject result can be mapped to sosa:Result in the SSN Ontology.


-----

288 **Subscriber**

289 KNX IoT device receiving messages from a Message Broker

290 **Tag**

291 A kind of annotation term used to extend available data with (in most cases) well known standardized

292 information from a dictionary (in contrast to user defined, arbitrary term).

293 A Tag is a concept-less term, without an integration in a broader concept such as the concept of a

294 Datapoint (used in an Application Function), it has a limited semantic meaning.

295 EXAMPLE 9 Term “flow” has a weak meaning on its own, but if you relate it in a QK with the other term “water” this

296 expresses at least that you observe/ actuate the water flow.

297 In this specification a Tag is almost exclusively a term from the Semantic Dictionary.

298 **Thing Description**

299 semantic metadata model to describe (abstract or physical) things, as specified by the thing description

300 [https://www.w3.org/TR/wot-thing-description/ and thing Ontology https://www.w3.org/2019/wot/td](https://www.w3.org/TR/wot-thing-description/)

301 NOTE 26 TD relevant relations are described in the clause of Semantic Export in [02].

302 **Trust Anchor**

303 an authoritative entity for which trust is assumed and not derived

304 EXAMPLE 10 an X.509 root certificate.

305 **WebHook**

306 method to define HTTP server callbacks, a client gets notified on (subscribed) changes to resources on the

307 server

308 **X.509**

309 certificate format

310 **2.2** **Mapping of terms**

311 The KNX Information Model expresses things that correspond to or reflect the wording and meaning used

312 in the IoT world.


313 NOTE 27 In the KNX community, the terminology has evolved and was developed over time having its origins

314 more than 20 years ago. By making KNX IoT Installations accessible for customers via an open API,

315 there is a need to intuitively adapt the language to make it understandable and usable by IoT

316 developers. Unfortunately, it is not possible to preserve the historical KNX terminology and used it “as

317 is“ with addressing external non-KNX developers.

318 The following table provides a mapping of terms used in the KNX Information Model, KNX IoT 3[rd] Party

319 API and comparing it to the KNX-internal naming convention.


-----

320 **Table 1 – Mapping of terms**

**Customer** **KNX IoT** **KIM** **KNX Classic**
_API Client Development_ _Server Development_ _ETS Development_ _Installer_

Function[1] IoT Function[1] `:ApplicationFunction` ETS Function

Datapoint [1] IoT Datapoint[1] `:FunctionPoint/` Group
`:Datapoint` Address/Group

Object

building/floor/room/site building/floor/room/site `loc:Building/` Building/Floor/
`loc:Floor/ loc:Room/` Room/```
                            loc:Site

```
NA NA `:Channel` Channel

Device[1] Device `:Device` Device
321

322 - The Customer terminology is relevant for a KNX IoT 3rd Party Client respectively for a developer

323 building such a client based on the KNX IoT 3rd Party API. This developer is typically KNX

324 agnostic.

325 - The KNX IoT and KIM terminology addresses the KNX manufacturer, building a KNX IoT 3rd Party

326 Server, respectively is relevant for KNX Association itself specifying the Ontology.

327 - The KNX Classic terminology is well known for an installer of KNX S-Mode installations.

328 For a server development it is of essence to understand how to differentiate the terms from the table

329 above from a technical perspective, for this see below.

330 **Relations**

331 KNX Classic makes use of the concept of a Group Address and Group Object: a Group Address links

332 several Group Objects (an ETS Function groups at least one Group Address, a Device has at least one

333 **Group Object assigned).**

334 However, both a GA and GO are represented with a Datapoint/ IoT Datapoint.

335 Possibility to distinguish between a GA/ GO at the level of a Datapoint/ IoT Datapoint,

336 **a)** **At level of the KNX IoT Server Development**

337 Use of the corresponding KIM concepts for a GA or GO according the table above. Moreover, a
338 Function Point also contains a property for the GA value.

339 b) **At the level of the API Client Development**

340 In the case where the server includes as part of the response the type information from the KIM

341 concepts above and/or the optional property for the GA, with this it will be possible to

342 distinguish a Datapoint/IoT Datapoint as being a GA or a GO in a KNX Classic Installation.

343 Details on how these relations are semantically expressed, please refer to [02].

1) Term definition and examples can be found in clause above.

|Customer<br>API Client Development|KNX IoT<br>Server Development|KIM<br>ETS Development|KNX Classic<br>Installer|
|---|---|---|---|
|Function1|IoT Function1|`:ApplicationFunction`|ETS Function|
|Datapoint1|IoT Datapoint1|`:FunctionPoint/`<br>`:Datapoint`|Group<br>Address/Group<br>Object|
|building/floor/room/site|building/floor/room/site|`loc:Building/`<br>`loc:Floor/ loc:Room/`<br>`loc:Site`|Building/Floor/<br>Room/-|
|NA|NA|`:Channel`|Channel|
|Device1|Device|`:Device`|Device|


-----

345 **3** **Requirements language**

346 The words "MUST", "MUST NOT", "REQUIRED", "SHALL", "SHALL NOT", "SHOULD", "SHOULD NOT",

347 "RECOMMENDED", "NOT RECOMMENDED", "MAY", and "OPTIONAL" in this specification are to be

348 interpreted as described in [RFC 2119, RFC 8174].


-----

349 **4** **Bibliography**

350 [62443-3-3] ISA, “Security for Industrial Automation and Control Systems: System Security Requirements

351 and Security Levels”, ANSI/ISA-62443-3-3, August 2013

352 [802.1AR] IEEE Standard, "IEEE 802.1AR Secure Device Identifier", December 2009

353 [ACE-OAuth] L. Seitz, G. Selander, E. Wahlstroem, S. Erdtman, H. Tschofenig, "Authentication and

354 Authorization for Constrained Environments (ACE) using the OAuth 2.0 Framework (ACE-OAuth)", draft
355 ietf-ace-oauth-authz-24, March 2019

356 [ACE-OSCORE] F. Palombini, L. Seitz, G. Selander, M. Gunnarsson, “OSCORE profile of the Authentication

357 and Authorization for Constrained Environments Framework”, draft-ietf-ace-oscore-profile-08, July 2019

358 [BRSKI] M. Pritikin, M. Richardson, M. Behringer, T. Eckert, K. Watsen, "Bootstrapping Remote Secure

359 Key Infrastructures (BRSKI)", draft-ietf-anima-bootstrapping-keyinfra-28, September 2019

360 [CMC] J. Schaad, M. Myers, “Certificate Management over CMS (CMC)”, RFC 5273, June 2008

361 [CMS] R. Housley, “Cryptographic Message Syntax (CMS)“, RFC 5652, September 2009

362 [[DNS] P. Mockapetris, "Domain names - concepts and facilities", RFC 1034, November 1987](https://tools.ietf.org/html/rfc1034)

363 [EST-CoAPS] S. Kumar, P. van der Stok, P. Kampanakis, M. Furuhed, S. Raza, "EST over secure CoAP (EST
364 coaps)", draft-vanderstok-ace-coap-est-04, January 2018

365 [PKCS#8] B. Kaliski, “Public-Key Cryptography Standards (PKCS)#8: Private-Key Information Syntax

366 Specification Version 1.2”, RFC 5208, May 2008

367 [PKCS#10] S. Turner, “The application/pkcs10 Media Type”, RFC 5967, August 2010

368 [RD] Z. Shelby, M. Koster, C. Bormann, P. van der Stok, C. Amsuess, "CoRE Resource Directory", draft
369 ietf-core-resource-directory-23July 08, 2019

370 [RFC2119] S. Bradner, "Key words for use in RFCs to Indicate Requirement Levels”, BCP 24 14, RFC 2119,

371 March 1997

372 [RFC 2460] S. Deering, R. Hinden, “Internet Protocol, Version 6 (IPv6) Specification”, RFC 2460,

373 December 1998

374 [RFC2818] E. Rescorla, “HTTP Over TLS“, RFC 2818, May 2000

375 [RFC4122] P. Leach, M Mealling, R. Salz, “A Universally Unique IDentifier (UUID) URN Namespace”,

376 RFC4122, July 2005

377 [RFC4492] S. Blake-Wilson, N. Bolyard, V. Gupta, C. Hawk, B. Moeller, “Elliptic Curve Cryptography (ECC)

378 Cipher Suites for Transport Layer Security (TLS)”, RFC 4492, May 2006

379 [RFC5116] D. McGrew, “An Interface and Algorithms for Authenticated Encryption”, RFC 5116, January

380 2008


-----

381 [RFC6012] J. Salowey, T. Petch, R. Gerhards, H. Feng, “Datagram Transport Layer Security (DTLS)

382 Transport Mapping for Syslog”, RFC 6012, October 2010

383 [RFC6690] Z. Shelby, “Constrained RESTful Environments (CoRE) Link Format”, RFC 6690, August 2012

384 [RFC7030] M. Pritikin, P. Yee, D. Harkins, "Enrollment over Secure Transport", RFC7030, October 2013

385 [RFC7049] C. Bormann, P. Hoffman, “Concise Binary Object Representation (CBOR)”, RFC 7049, October

386 2013

387 [RFC7228] C. Bormann, M. Ersue, A. Keranen, “Terminology for Constrained-Node Networks”, RFC 7228,

388 May 2014

389 [RFC7251] D. McGrew, D. Bailey, M. Campagna, R. Dugal, “AES-CCM Elliptic Curve Cryptography (ECC)

390 Cipher Suites for TLS”, RFC 7251, June 2014

391 [RFC7252] Z. Shelby, K. Hartke, C. Bormann, "The Constrained Application Protocol (CoAP)", RFC 7252,

392 June 2014

393 [RFC7959] C. Bormann, Z. Shelby, “Block-Wise Transfers in the Constrained Application Protocol

394 (CoAP)”, RFC 7959, August 2016

395 [RFC7967] A. Bhattacharyya, S. Banyopadhyay, A. Pal, T. Bose, “Constrained Application Protocol (CoAP)

396 Option for No Server Response”, RFC 7967, August 2016

397 [RFC8075] A. Castellani, S. Loreto, A. Rahman, T. Fossati, E. Dijk, “Guidelines for Mapping

398 Implementations: HTTP to the Constrained Application Protocol (CoAP)” RFC 8075, February 2017

399 [RFC8132] P. van der Stok, C. Bormann, A. Sehgal, “PATCH and FETCH Methods for the Constrained

400 Application Protocol (CoAP)”, RFC 8132, April 2017

401 [RFC8259] T. Bray, "The JavaScript Object Notation (JSON) Data Interchange Format", RFC 8259

402 December 2017

403 [RFC8323], C. Bormann, S. Lemay, H. Tschofenig, K. Hartke, B. Silverajan, B. Raymor, “CoAP (Constrained

404 Application Protocol) over TCP, TLS, and WebSockets”, RFC 8323, February 2018

405 [RFC8366] K. Watsen, M. Richardson, M. Pritikin, T. Eckert, “A Voucher Artifact for Bootstrapping

406 Protocols”, RFC 8366, May 2018

407 [RFC8613] G. Selander, J. Mattsson, F. Palombini, L. Seitz, “Object Security for Constrained RESTful

408 Environments (OSCORE), RFC 8613, July 2019

409 [SSN] A. Haller, K. Janowicz, S. Cox, D. Le Phuoc, K. Taylor, M. Lefrançois, "Semantic Sensor Network

410 Ontology", W3C Recommendation, October 2017

411 [TD] S. Kaebisch, T. Kamiya, M. McCool, V. Charpenay, "Web of Things (WoT) Thing Description", W3C

412 Proposed Recommendation, January 2020 2019

413 [vCard] R. Iannella, J. McKinney, "vCard Ontology - for describing People and Organizations", W3C

414 Interest Group Note, May 2014


-----

415 [X.509] D. Cooper, S. Santesson, S. Farrell, S. Boeyen, R. Housley, and W. Polk, "Internet X.509 Public

416 [Key Infrastructure Certificate and Certificate Revocation List (CRL) Profile", RFC 5280, May 2008](https://tools.ietf.org/html/rfc5280)


-----

