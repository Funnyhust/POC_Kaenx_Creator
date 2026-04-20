1

3


# System Specifications

## KNX IoT

 Introduction


4 Summary

5 This document provides a KNX IoT Introduction.

6 Version 1.0.1 is a KNX Approved Standard.

7


-----

8 **Document updates**

**Version** **Date** **Modifications**

0.1 2021.03.22 - Document creation.
1.0.0 2021.10.29 - Preparation of the Draft for Voting.
1.0.1 2022.03.30 - Creation of the Approved Standard.
9

10 **References**

[01] AN175 KNX web services v02 DP of 2017.01.31

[02] Chapter 3/10/2 “KNX IoT Constants”

[03] Chapter 3/10/3 “KNX IoT Information Model”

[04] Chapter 3/10/4 “KNX IoT 3[rd] Party API”

[05] Chapter 3/10/5 “KNX IoT Point API”
11

Filename: 3_10_1 KNX IoT Introduction.docx
Version: 1.0.1
Status: Approved Standard
Save date: 2022.03.30
Number of pages: 13

|Version|Date|Modifications|
|---|---|---|
|0.1|2021.03.22|-<br>Document creation.|
|1.0.0|2021.10.29|-<br>Preparation of the Draft for Voting.|
|1.0.1|2022.03.30|-<br>Creation of the Approved Standard.|


-----

12 **Contents**

13 **1** **Document structure ............................................................................................................... 4**

14 **2** **Introduction ............................................................................................................................ 6**

15 **3** **Common Requirements ......................................................................................................... 7**

16 3.1 KNX Information Model ................................................................................................ 7

17 3.2 KNX IoT 3[rd] Party API ................................................................................................... 9

18 3.3 KNX IoT Point API ...................................................................................................... 11

19


-----

20 **1** **Document structure**

21 The KNX IoT specification refers to already existing specifications from the Internet such as the ones

22 elaborated by W3C, given by their respective references, e.g. [RFC 7231]. This document specifies KNX

23 IoT in a textual form, moreover, it is composed of five different individual documents.

24 However, the documents refer to additional, external representations of the KNX IoT specification, which

25 describe the concepts explained here in a more detailed electronic form.

26 NOTE 1 This (electronic) document has some considerable advantages such as the possibility to add comments or

27 define expected error handling. Moreover, it allows to start a development with available tools.

28 The electronic documents of the below described concepts 3/10/3, 3/10/4 and 3/10/5 SHALL be:

29 - considered an integral part of this specification;

30 - available in an explicit version, only this electronic document version is applicable to this version of

31 the specification;

32 - an acceptance criterion for product certification, together with this specification documents.

33 **3/10/1 Introduction**

34 This document, expressing a general overview and the motivation for the different aspects of KNX IoT,

35 expressed with point /3, /4 and /5 below.

36 **3/10/2 Constants**

37 Specifies terms definitions, constants or profiles, commonly used from the different aspects of KNX IoT.

38 **3/10/3 KNX Information Model**

39 Specifies an ontology-based definition of the KNX System.

40 The KIM is available as an Ontology, these classes have many expressed constraints such as Object

41 Property expressions. In the specification [03] the following concepts are described.

42 - Ontology classes and their main class constraints, expressed with Object Properties, data properties

43 and the corresponding domain/range.

44 - Ontology classes and their main restrictions in accordance with the KNX System.

45 However, if a KIM Ontology class is a subclass of another class or it supports available data properties

46 such as a common name and/or common description, this is not mentioned in this specification to the full

47 extent. This is described in the corresponding electronic document.

48 For details of KNX Information Model such as the KIM - Version, KIM - Data Format, KIM Ontology
49 Classes and where to retrieve the electronic document of KIM, please refer to [03].

50 **3/10/4 KNX IoT 3[rd] Party API**

51 Specifies a REST-based API interface to access the KNX System.

52 The KNX IoT 3[rd] Party API is available as an Endpoint description, including the parameters available at

53 these Endpoints with their corresponding values. In this specification the following concepts are

54 described.

55 - KNX IoT 3rd Party API general guideline

56 - KNX IoT 3rd Party API Endpoints with their service parameters

57 However, if an KNX IoT 3[rd] Party API Endpoint supports other references to elements of an Installation,

58 such as a reference to all buildings of an Installation, this is not mentioned in this specification to the full

59 extent. The same applies to mandatory or optional specific members such as attributes as part of

60 responses. This is described in the corresponding electronic document.

61 Details of KNX IoT 3[rd] Party API such as the API – Version and where to retrieve the KNX IoT 3[rd] Party

62 API as electronic document, please refer to [04].


-----

63 Examples of URL path Endpoint structures and their corresponding message payload are given in the
64 YAML file, excerpts are also given in the relevant chapters of [04].

65 **3/10/5 KNX IoT Point API**

66 Specifies a KNX IoT device interface for Runtime and Configuration.

67 Details of KNX IoT 3[rd] Point API such as the API – Version and where to retrieve the KNX IoT Point

68 Party API as electronic document, please refer to [05].

69 Examples of URL path Endpoint structures and their corresponding message payload are given in the
70 YAML file, excerpts are also given in the relevant chapters of [05].

71 As a further note, the KNX IoT specifications described above are independent from the KNX web

72 services ([01]).


-----

73 **2** **Introduction**

74 The KNX System is designed for building control based on a network of sensing, actuating, controlling

75 and user interface devices directly exchanging information with each other.

76 The mission is to advance KNX into the IP-based Internet of Things (IoT), allowing devices to talk

77 directly to the cloud as well as other IoT devices, home and building automation controllers, and mobile

78 devices.

79 **Overall Aim**

80 A consistent KNX System, designed for the IoT, containing of KNX IoT Devices, and at the same time

81 backwards compatible to its existing installed base of KNX Classic Devices.

82 - IP is the technology that allows devices to communicate seamless with each other, regardless of what

83 connectivity technologies they use (i.e., Ethernet, Wi-Fi, Thread, 3G or LTE). This allows

84 manufacturers and service organizations to maintain a connection to their products and their users,

85 while enabling valuable access to data from a broad range of connected, cross-sector devices.

86 - KNX IoT as such details an (IP based) network of sensing, actuation, controlling and user interface

87 devices that directly exchanging information with each other, providing the data and means for (non

88 KNX) services and jointly delivering results desired by the user.

89 Next figure shows the scope of KNX Classic/ IoT, embedded in the general IT landscape.

### Services

**KNX IoT 3[rd]** **Party Server**

**KNX IoT**

**KNX IoT/Classic Gateway**

**KNX Classic**

90

91 **Figure 1 – Scope of KNX IoT**

92 The KNX IoT suite encompasses five major topics covering different aspects.

93 1. KNX Information Model

94 2. Semantic Export

95 3. KNX IoT 3[rd] Party API

96 4. KNX IoT Point API

97 5. Configuration of KNX IoT Devices with MaC ETS (based on a KNX IoT Communication

98 Stack)

99 NOTE 2 Please refer to [02] for term definitions used above, including some further explanation.


**KNX IoT/Classic Gateway**

**KNX Classic**


-----

100 **3** **Common Requirements**

101 1. The KNX IoT suite expresses some common requirements, listed directly below. Requirements

102 including some details of individual KNX IoT suite aspect listed in the next sub clauses.

103 2. The KNX IoT suite MUST support semantic information, both for Runtime as well as for

104 Configuration.

105 EXAMPLE 1 This relates to the aspect of system integration.

106 Data exported by a MaC or data imported to a MaC such as for a Configuration of KNX IoT

107 Devices must carry semantics (see Figure 2, ETS Project, ETS Catalog Entry).

108 3. The semantic information SHOULD be brought in the KNX System in a data driven way, by a

109 Management Client and possible other sources such as extended information on a certified KNX

110 Product.

111 EXAMPLE 2 This relates to the aspect of system integration.


112 Semantic information does not have to be entered again such as in the KNX IoT 3rd Party

113 Client configuration.

114 4. The MaC ETS MUST support an export of semantic data of an Installation following the KIM

115 described in [03], clause 2 "Appendix".

116 EXAMPLE 3 This relates (also) to the aspect of system integration.

117 The exported data builds on the semantic information provided by the MaC user and semantic

118 information of KNX Products that are included in the Installation.

119 5. The exported data SHALL comply with the KNX standard, the structure and format principles

120 SHALL be available as public information.

121 6. The exported data SHALL be available as linked data.

122 EXAMPLE 4 This relates to the to the aspect of integrability.


123 The export data will be made available as (RDF) triples, see Figure 2. The collection of

124 interrelated datasets on the Web is also referred to as Linked Data

125 [(https://www.w3.org/standards/semanticweb/data). This common format (RDF) enables the](https://www.w3.org/standards/semanticweb/data)

126 succinct and elegant composition of large, interconnected structures of facility (building)

127 subsystems.

128 **3.1** **KNX Information Model**

129 The motivation for the KNX Information Model is to offer the definition of a model and data exchange

130 format that standardizes and hosts semantic information, in addition to this it is more stable, compared to

131 the frequent KNX evolution (in this specification called Semantic Export).

132 **Retrospect**

133 The current KNX System for KNX Classic uses model/data structures based on XML; it is laid down as

134 own XML schema with a corresponding versioning. The project/product data that are imported and

135 exported by the KNX Management Client ETS are in line with this XML schema.

136 The MaC ETS uses the XML schema mainly to define the corresponding data structures to store/export

137 project and product data. Consequently, the XML schema is always updated when a new ETS MaC

138 version is published, and new project and/or product features demand a change of the data structures.

139 Though XML itself is a well-known and widespread format it has its drawbacks as regards:

140 - sharing model/project data information with external clients that use this data need to be

141 synchronized when a new XML schema version is announced;

142 - describing, expressing, mapping and sharing (semantic) information in the IoT domain

143 To reduce respectively circumvent above-described problems the KNX IoT suite needs to fulfil advanced

144 technical conditions.


-----

145 **Requirements**

146 1. The KIM MUST comply with the KNX standard taxonomy.

147 2. The KIM SHALL allow using semantics to formalize, restrict, and verify the usage of KNX System

148 aspects and to describe them with entities, relationships, and tags.

149 3. The KIM MUST express only such KNX System Aspects that are generally needed to express

150 requirements of the KNX IoT Point API or KNX IoT 3rd Party API. Therefore, not all models

151 respectively all parts available in the KNX System are currently reflected in the KIM (see [03]).

152 4. The KIM MUST NOT express Installation state data at Runtime such as current values or their

153 history.

154 5. The KIM MUST be able to express semantic information of the KNX System, at least with the

155 following blocks.

156 a) A real-word physical Installation, represented by a MaC ETS project, defining relations in an

157 Installation, described with an installation model that is expressing so called instance data.

158 b) A KNX Product, represented by an ETS Catalog Entry, defining relations in a Device, described

159 with a product model that is expressing so called catalog data.

160 The blocks are structurally available with the same information content as defined in the Semantic

161 Export.

162 EXAMPLE 5 This enables to request/ to query information of an Installation, the information are generated

163 either as part of the Configuration or during Runtime. Examples:

164 Spatial Information (Configuration)


165 - How is a building structured with floors, rooms and other or where is an equipment (e.g., a

166 Device) installed in a location (assembly place)?

167 Functional Information (Configuration)

168 - Which interface (e.g., a Point) is provided by a Device (Channel, FB)?

169 - Which Application Function affects which building structure elements such as a room?

170 - Which Points belong to an Application Function and what is the purpose of the Point (key

171 word  tag information: Logical Input/ Logical Output, Set Value or Parameter Point).

172 - Which Function Points control a specific Luminaire / Heating Circuit (see above) …?

173 Semantic Information (Configuration)


174 - What does an Application Function or Point observe or actuates upon in the real world (key

175 word  quality kind with phenomenon or equipment)?

176 - In which operational domain or for which trades does an Application Function operate (key

177 word assignments of trades for Application Functions)?

178 - Which phase feeds the load (e.g., Light Fixture/ Luminaire, Motor)?

179 - What is the identifier of a specific heating circuit (= connection from heating source to

180 heating sink) and in which heating circuit is a radiator located in?


181 NOTE 3 Heating Circuit = It is possible to express that n Points have a Locality Circuit

182 and a Phenomenon Heat assigned, they are distributed over several Devices

183 and located within several locations, operating on several Application Functions,

184 finally grouped as an Aspect.

185 - Which functional information as expressed by the Tag Information is represented by or

186 associated with a Point?


187 For more detailed examples see in [03] in clause or Tag Model.

188 Operational Information (Runtime)

189 - What are the setpoint and current temperature values in a specific location (room, zone) / a

190 list of locations?


191 - What is the current operation mode of primary systems (heating, cooling, ventilation, hot

192 water supply) in general or in location x?


-----

193 - What is the power consumption of a specific Device containing Points operating on a

194 Luminaire / Air Conditioner / Fridge?

195 - What is the current operation time of a certain Luminaires? As a note, a Client can then

196 compare this time to the maintenance threshold operation time.

197

198 The next figures visualize some aspects of the KNX IoT suite from clause 2, it shows the overall

199 workflow to configure a KNX IoT 3[rd] Party Server with semantic information of an Installation.

200 - Semantic Export

201 - KNX Information Model

202 - KNX IoT 3rd Party API

203 - Configuration of KNX IoT Devices with MaC ETS (ETS Catalog Entry + ETS Project)

204

205 **Figure 2 – Overall workflow**

206 **3.2** **KNX IoT 3[rd] Party API**

207 The motivation for the KNX IoT 3[rd] Party API is to offer a non-KNX certified communication partner a

208 way to integrate with a KNX Classic Installation.

209 **Retrospect**

210 The KNX web services ([01]) specifies the access to Installation data with several data format options but

211 leaving the API Endpoint definition and security measurements to the implementing vendor.

212 To circumvent issues such as data/ format compatibility between vendors the KNX IoT 3[rd] Party API

213 needs to fulfil advanced technical conditions.

214 **Requirements**

215 A. The KNX IoT 3[rd] Party API SHALL use a standardized discovery of an KNX IoT 3[rd] Party Server

216 including to set up a connection from an KNX IoT 3[rd] Party Client.

217 EXAMPLE 6 This relates to the server discovery, see Figure 3.

218 B. The KNX IoT 3[rd] Party API SHALL use standardized secured connectivity (authentication,

219 authorization, and encryption) between a KNX IoT 3[rd] Party Server and a KNX IoT 3[rd] Party Client.

220 EXAMPLE 7 This relates to the setup of a (secured) connection, see Figure 3.


-----

221 C. The KNX IoT 3[rd] Party API SHALL define the possibility for subscriptions with the option to register

222 for notifications on changes in an Installation.

223 EXAMPLE 8 This relates to the subscription option, see /subscriptions/… in Figure 3.

224 Examples:

225 `o An Energy Management provider subscribes to a specific Installation state data to get`

226 notified on all write accesses respectively value changes. For this the provider subscribes

227 to the corresponding datapoint.


228 `o The motion detector in the entrance area triggers taking IP camera pictures of the`

229 controlled area.

230 `o A client already has the Installation structure but now wants to refresh some (state)`

231 information on the location to display or control


232 D. The KNX IoT 3[rd] Party API SHALL support the self-description of an Installation, corresponding

233 information can be retrieved from the KNX IoT 3[rd] Party Server.

234 EXAMPLE 9 This the retrieval of the Installation self-description, the latter expressed with semantic data of

235 the KIM/ Semantic Dictionary, see /installations in Figure 3.

236 Examples:


237 `o An Energy Management provider wants to discover and to connect to an existing`

238 Installation to read the initial configuration of a building structured with floors, rooms and

239 other. The server provides Installation data from the Semantic Export (as input) on the

240 API.

241 `o A client wants to read out the complete information about the location and functional`

242 structure of an Installation for later use.


243 `o A client wants to show a user interface to control the Installation ad hoc (to see updates`

244 immediately on the API).

245 E. The KNX IoT 3[rd] Party API SHALL support to retrieve available Installation data in a semantic way

246 with possible query parameters, such as Installation configuration data (e.g., specific function types)

247 or Installation state data (e.g., datapoint values).


248 EXAMPLE 10 This relates to use possibly querying parameter to filter on Installation data, see in Figure 3.

249 Example:

250 `o A third-party client is not able to process a large amount of data and wants to control the`

251 number of database entries sent back by the server.

252 F. The KNX IoT 3[rd] Party API SHALL support to read and write Installation state data in a semantic

253 way (e.g., datapoints).

254 EXAMPLE 11 This relates to read Installation state data, see /datapoints/… on Figure 3.

255 Examples:

256 `o An external weather forecast service triggers the activation of the garden mower if no rain`

257 is expected.

258 `o The access gate is opened if the homeowner’s car crosses the virtual fence surrounding`

259 the house, thus indicating approach.

260 The next figures visualize some aspects of the KNX IoT suite from clause 2, it shows some specific API

261 endpoint functionality of the KNX IoT 3[rd] Party API.

262 - Semantic Export

263 - KNX IoT 3rd Party API


-----

264

265 **Figure 3 – API endpoint functionality**

266 **3.3** **KNX IoT Point API**

267 The motivation for the KNX IoT Point API is to take the KNX System as a networked system of

268 distributed control devices to the Internet of Things, which is also reflected in the overall aim described in

269 clause 2.

270 **Retrospect**

271 The KNX System supports already all media types but implements the communication patterns not close

272 enough of the comprehensive style of IoT, which is a demand in the current IT domain.

273 To fulfill the overall aim described in clause 2 including to ease system development and installation

274 connectivity the Runtime and Configuration communication needs to fulfil advanced technical conditions.

275 **Requirements**

276 1. The KNX IoT suite MUST support to translate messages between KNX IoT Devices and KNX Classic

277 Devices back and forth with minimal effort into different message formats.

278 EXAMPLE 12 This relates horizontal integration.

279 An easy integration of KNX Classic Devices (e.g., TP1 subsystem) with KNX IoT Devices must

280 be ensured, see Figure 4.

281 2. Fragmentation of a messages between KNX IoT Devices SHOULD be avoided.

282 EXAMPLE 13 This relates to the aspect of data **efficiency.**

283 Deduced from this requirement also the data transmission between KNX IoT Devices

284 (potentially battery powered) and other Endpoints (e.g., edge Device or automation controller)

285 should be energy efficient. To achieve this (besides other measurements) a normal message

286 (e.g., light ON) in a constrained network should fit into the physical media specific MTU (e.g.,

287 127 octets on an 802.15.4 wireless network, including MAC framing, security and addressing),

288 see Figure 4.


289 3. Data transmission between KNX IoT Devices SHOULD be time efficient.

290 EXAMPLE 14 This relates to the aspect of communication **latency.**

291 To achieve this at least the chosen communication network must support this from its technical

292 parameters such as the used data transmission rate and other. A Light “on” messages, for

293 example, must be distributed to all listeners (e.g., luminaries) that belong to the same light zone

294 - usually organized in the same physical network (collision) domain - in less than 100ms, see

295 Figure 4.


-----

296 4. Data transmission between KNX IoT Devices MUST be reliable.

297 EXAMPLE 15 This relates to the aspect of communication **reliability.**

298 The KNX IoT suite must support to send reliable (acknowledge) group notifications to an

299 exceptionally large list of recipients via a Message Broker, see Figure 4.

300 5. The KNX IoT Point API SHALL define the possibility for subscriptions with the option to register for

301 notifications on value changes of a Point.

302 EXAMPLE 16 This relates to the aspect of integrability.

303 A KNX IoT Device must support a subscription mechanism on Points in case the remote device

304 (e.g., Message Broker) only has a standard CoAP or HTTP interface. With the support of the

305 mentioned protocols also non S-Mode devices (so called 3rd party devices) can hook into the

306 system and register for some data. HTTP in tis refers to the KNX 3rd Party API and CoAP was

307 meant for the KNX Point API.


308 After subscription, a KNX IoT Device should send confirmed Point updates to the subscriber

309 (e.g., Message Broker or automation controller), see Figure 4.

310 6. Data transmission between KNX IoT Devices MUST be data efficient.

311 EXAMPLE 17 This relates to the aspect of throughput efficiency.


312 The throughput in a constrained IP network, such as a Thread mesh radio network, is limited.

313 Hence, devices should send information only if needed by the application or by request (e.g.,

314 temporary subscription of points) or, if possible, acknowledged instead of multiple multicast

315 repetitions. In addition, the updates can be further reduced by configuration of an appropriate

316 change of value (COV), minimal repetition time, and heartbeat cycles.

317 7. Data transmission at Runtime between KNX IoT Devices and/or a MaC MUST be secured, except for

318 the purpose of device and service discovery. Workflows to configure an Installation MUST follow

319 standardized security guidelines, this also includes the secured data transmission at Configuration.

320 EXAMPLE 18 This relates to the aspect of data **security and system** **security.**

321 Security as a whole for the entire system is only achieved if:

322 `o devices are commissioned properly and securely, operated and maintained;`

323 `o transmitted data between participants are secured;`

324 `o security related workflows are automated and scalable, considering the involvement of the`

325 responsible persons and their roles.

326 The next figures visualize some aspects of the KNX IoT suite from clause 2, it shows some specific

327 device types, communication patters and example Installation of a KNX System with different media.


-----

_Message Broker_

|Col1|Edge|Col3|Col4|Col5|Col6|Col7|Col8|Col9|
|---|---|---|---|---|---|---|---|---|
|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br>Services<br>KNX IoT 3rd Party Client<br>KNX IoT Device<br>KNX IoT Device<br>_KNX IoT Point API_<br>_KNX IoT Point API_|Services|Services|Services|Services|Services|Services|Services|Services|
|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br>Services<br>KNX IoT 3rd Party Client<br>KNX IoT Device<br>KNX IoT Device<br>_KNX IoT Point API_<br>_KNX IoT Point API_|Services|Services|||||||
|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br>Services<br>KNX IoT 3rd Party Client<br>KNX IoT Device<br>KNX IoT Device<br>_KNX IoT Point API_<br>_KNX IoT Point API_|Services|Services|||||||
|**Backbone IP Network**<br>**(Ethernet, Wi-Fi)**<br>Services<br>KNX IoT 3rd Party Client<br>KNX IoT Device<br>KNX IoT Device<br>_KNX IoT Point API_<br>_KNX IoT Point API_|||||||||
||||||||||
|**KNX Classic Subsystem**<br>**(TP)**<br>KNX IoT/<br>Classic Gateway<br>KNX Classic Device<br>KNX Classic Device<br>KNX Classic Device||||**Thread IP Network**<br>**(802.15.4)**<br>KNX IoT Device<br>KNX IoT Device<br>(Sleepy End Device)<br>KNX IoT Device<br>3rd Party Device<br>(Router)<br>KNX IoT Device<br>(End Device)<br>Border Router<br>_KNX IoT Point API_<br>_KNX IoT Point API_<br>_KNX IoT Point API_|||||


328


denotes a reliable communica�on between devices suppor�ng the KNX IoT Point API
denotes a horizontal integra�on of KNX System subsystems on different media, such as KNX Classic (TP) and Thread (RF)
denotes an outside KNX System (external) communica�on


329 **Figure 4 – KNX System Installation (example)**

330 Next description explains some of the figure details.

331 - `<---> A horizontal system integration of KNX IoT with a KNX Classic System.`

332 EXAMPLE 19 An automation controller KNX IoT device (2) communicates with a KNX IoT/Classic Gateway (1)

333 and a Thread border router (3) on (wired) IP level. It sets up a horizontal integration from the

334 backbone with the mentioned (underlying) sub systems.


335 - Device (1) set up an integration of (TP based) KNX Classic Devices to the backbone.

336 - Device (2) set up an integration of (RF based) Thread Devices (4) to the backbone.

337 - `<--->` A reliable communication pattern between devices.

338 EXAMPLE 20 Edge services (5) communicates with loosely coupled devices from the underlying sub systems.

339 - To ensure an (acknowledged) data delivery a recipient device (4) is addressed from the

340 broker as a publisher (5) in a P2P unicast communication manner.


341 - As a note, in case the boundary conditions of an installation support this such as a limited

342 number of devices in a small (wired) network collision domain, also an (unacknowledged)

343 point to multicast communication is possible to setup instead. For KNX Classic devices this

344 is the standard behavior.

345 - Non KNX devices co-exist with KNX devices, the latter configured by MaC ETS. Since

346 both types co-exist within the same network, the network layer needs a joint (onboarding)

347 configuration which is not in scope of this specification.

348 - The KNX IoT 3[rd] Party Client is connected to the KNX Subsystem (via a KNX IoT Classic

349 Gateway), optionally also with the Thread IP Network (Border Router). It exposes via a REST API

350 an installation access to a third-party, to communicate with the installation at Runtime or read the

351 installation configuration.

352


-----

