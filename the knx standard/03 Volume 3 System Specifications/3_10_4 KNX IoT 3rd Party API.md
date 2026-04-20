1

2

3


# System Specifications

## KNX IoT

 KNX IoT 3[rd] Party API


4 Summary

5 This document provides information on the KNX IoT 3[rd] Party API.

6 Version 2.0.0 is a KNX Approved Standard.


-----

7 **Document updates**

**Version** **Date** **Modifications**

0.1 2021.03.22 - Document creation.
1.0.0 2021.11.01    - Document update after resolving of comments.

                         - Preparation of the Draft for Voting.
2.0.0 2022.04.05 - Creation of the Approved Standard
8

9 **References**

[01] Chapter 3/10/2 “KNX IoT Introduction”

[02] Chapter 3/10/2 “KNX IoT Constants”

[03] Chapter 3/10/3 “KNX IoT Information Model”

Filename: 3_10_4 KNX IoT 3rd Party API.docx
Version: 2.0.0
Status: Approved Standard
Save date: 2022.04.05
Number of pages: 109

|Version|Date|Modifications|
|---|---|---|
|0.1|2021.03.22|- <br>Document creation.|
|1.0.0|2021.11.01|- <br>Document update after resolving of comments.<br>- <br>Preparation of the Draft for Voting.|
|2.0.0|2022.04.05|- <br>Creation of the Approved Standard|


-----

10 **Contents**

11 **1** **KNX IoT 3[rd] Party API .......................................................................................................... 6**

12 1.1 Introduction ..................................................................................................................... 6

13 1.1.1 API - Content ...................................................................................................... 7

14 1.1.2 API - Conformance ............................................................................................. 7

15 1.1.3 API - Version ...................................................................................................... 8

16 1.1.4 API – Availability ............................................................................................... 8

17 1.1.5 API – Data Format .............................................................................................. 8

18 1.1.6 API – Examples Format ...................................................................................... 8

19 1.1.7 Motivation ........................................................................................................... 8

20 1.1.8 Resources ............................................................................................................ 8

21 1.1.8.1 Items, Collections and Relationships ...................................................... 9

22 1.1.8.2 Resource Path .......................................................................................... 9

23 1.1.8.3 Resource Names ...................................................................................... 9

24 1.1.8.4 Resource IDs ........................................................................................... 9

25 1.1.8.5 Examples ................................................................................................. 9

26 1.2 Specification ................................................................................................................. 10

27 1.2.1 Server Requirements ......................................................................................... 10

28 1.2.1.1 Protocols ................................................................................................ 10

29 1.2.1.1.1 IP .............................................................................................................................. 10

30 1.2.1.1.2 HTTP ........................................................................................................................ 10

31 1.2.1.2 Access Method ...................................................................................... 10

32 1.2.1.3 Header ................................................................................................... 11

33 1.2.1.4 Query Parameters .................................................................................. 11

34 1.2.1.4.1 Pagination ................................................................................................................. 12

35 1.2.1.4.1.1 page[number] ................................................................................................... 13

36 1.2.1.4.1.2 page[size] ......................................................................................................... 13

37 1.2.1.4.2 Filter ......................................................................................................................... 14

38 1.2.1.4.2.1 filter[…][operator] ........................................................................................... 14

39 1.2.1.4.2.2 filter[meta.@type][operator] ............................................................................ 15

40 1.2.1.4.2.3 filter[tagKey][operator] .................................................................................... 16

41 1.2.1.4.2.4 filter[attributeKey][operator] ........................................................................... 18

42 1.2.1.4.3 Competency Questions ............................................................................................. 18

43 1.2.1.4.4 Error Handling .......................................................................................................... 20

44 1.2.1.5 Response Object .................................................................................... 21

45 1.2.1.6 Response Status Codes .......................................................................... 21

46 1.2.1.6.1 Status Codes 1xx ...................................................................................................... 21

47 1.2.1.6.2 Status Codes 2xx ...................................................................................................... 21

48 1.2.1.6.3 Status Codes 4xx ...................................................................................................... 22

49 1.2.1.6.4 Status Codes 5xx ...................................................................................................... 23

50 1.2.1.6.5 Common Error Handling .......................................................................................... 24

51 1.2.1.6.6 Error Objects ............................................................................................................ 24

52 1.2.1.7 Content Negotiation .............................................................................. 24

53 1.2.1.7.1 Content Type ............................................................................................................ 25

54 1.2.1.7.2 Content Type Handling ............................................................................................ 25

55 1.2.2 Client Requirement ........................................................................................... 26

56 1.2.3 Message Data Structure .................................................................................... 26

57 1.2.3.1 Member Names ..................................................................................... 26

58 1.2.3.2 Meta Object ........................................................................................... 26

59 1.2.3.2.1 Top Level Usage ...................................................................................................... 26

60 1.2.3.2.2 General Usage .......................................................................................................... 27

61 1.2.3.3 Data Object ........................................................................................... 29

62 1.2.3.3.1 attributes member ..................................................................................................... 30


-----

63 1.2.3.3.1.1 Mapping ........................................................................................................... 30

64 1.2.3.3.2 relationships member ............................................................................................... 35

65 1.2.3.3.2.1 Mapping ........................................................................................................... 37

66 1.2.3.3.3 links member ............................................................................................................ 41

67 1.2.3.3.4 typedescription member ........................................................................................... 41

68 1.2.3.3.5 Expressing additional content ................................................................................... 42

69 1.2.4 URL Structure ................................................................................................... 44

70 1.2.5 Resource Path Definitions................................................................................. 44

71 1.2.5.1 Information ............................................................................................ 46

72 1.2.5.1.1 /.well-known ............................................................................................................. 46

73 1.2.5.1.1.1 Services ............................................................................................................ 46

74 1.2.5.1.1.2 URI Templating ............................................................................................... 48

75 1.2.5.1.1.3 Examples .......................................................................................................... 49

76 1.2.5.1.2 Node ......................................................................................................................... 50

77 1.2.5.1.2.1 Services ............................................................................................................ 51

78 1.2.5.1.3 Installations .............................................................................................................. 51

79 1.2.5.1.3.1 Services ............................................................................................................ 51

80 1.2.5.2 Locations ............................................................................................... 52

81 1.2.5.2.1 Services .................................................................................................................... 52

82 1.2.5.2.2 Types ........................................................................................................................ 53

83 1.2.5.2.3 Examples .................................................................................................................. 53

84 1.2.5.2.3.1 Read ................................................................................................................. 53

85 1.2.5.3 IoT Functions ........................................................................................ 54

86 1.2.5.3.1 Services .................................................................................................................... 56

87 1.2.5.3.2 Types ........................................................................................................................ 56

88 1.2.5.3.3 Examples .................................................................................................................. 59

89 1.2.5.3.3.1 Read ................................................................................................................. 59

90 1.2.5.4 IoT Datapoints ....................................................................................... 60

91 1.2.5.4.1 Services .................................................................................................................... 63

92 1.2.5.4.2 Types ........................................................................................................................ 65

93 1.2.5.4.3 Examples .................................................................................................................. 68

94 1.2.5.4.3.1 Read ................................................................................................................. 68

95 1.2.5.4.3.2 Write ................................................................................................................ 69

96 1.2.5.5 Devices .................................................................................................. 69

97 1.2.5.5.1 Services .................................................................................................................... 70

98 1.2.5.5.2 Examples .................................................................................................................. 70

99 1.2.5.5.2.1 Read ................................................................................................................. 70

100 1.2.5.6 Subscriptions ......................................................................................... 71

101 1.2.5.6.1 General Requirements .............................................................................................. 71

102 1.2.5.6.2 Subscription Type <datapoint> ................................................................................ 72

103 1.2.5.6.3 WebSocket Subscription .......................................................................................... 73

104 1.2.5.6.3.1 Possible Communication Patterns .................................................................... 73

105 1.2.5.6.3.2 Communication in the Cloud/Internet Environment ........................................ 73

106 1.2.5.6.3.3 Communication in the Local Network Environment ....................................... 74

107 1.2.5.6.3.4 Interface Requirements .................................................................................... 75

108 1.2.5.6.3.5 WebSocket Transport Binding ......................................................................... 75

109 1.2.5.6.3.6 WebSocket Connection .................................................................................... 75

110 1.2.5.6.3.7 WebSocket Header ........................................................................................... 76

111 1.2.5.6.3.8 Command and Event Interaction Model .......................................................... 76

112 1.2.5.6.3.8.1 Command Transaction ............................................................................. 77

113 1.2.5.6.3.8.2 Event Transaction .................................................................................... 77

114 1.2.5.6.3.8.3 Transaction Meta Object ......................................................................... 77

115 1.2.5.6.3.8.4 Update and Query Interactions ................................................................ 78

116 1.2.5.6.3.8.4.1 Write Item Command ...................................................................... 78

117 1.2.5.6.3.8.4.1.1 Examples.............................................................................. 79

118 1.2.5.6.3.8.4.2 Read Item Command ...................................................................... 79

119 1.2.5.6.3.8.4.2.1 Examples.............................................................................. 80

120 1.2.5.6.3.8.5 Subscribe Interactions ............................................................................. 81


-----

121 1.2.5.6.3.8.5.1 Subscribe Command ....................................................................... 82

122 1.2.5.6.3.8.5.1.1 Examples.............................................................................. 82

123 1.2.5.6.3.8.5.2 Unsubscribe Command ................................................................... 83

124 1.2.5.6.3.8.5.2.1 Examples.............................................................................. 84

125 1.2.5.6.3.8.5.3 Item Updated Event ........................................................................ 84

126 1.2.5.6.3.8.5.3.1 Examples.............................................................................. 84

127 1.2.5.6.4 HTTP Callback Subscription .................................................................................... 85

128 1.2.5.6.4.1 Specific Requirements ..................................................................................... 85

129 1.2.5.6.4.2 Workflow ......................................................................................................... 85

130 1.2.5.6.4.3 Components ..................................................................................................... 86

131 1.2.5.6.4.4 Interface Requirements .................................................................................... 87

132 1.2.5.6.4.5 Services ............................................................................................................ 87

133 1.2.5.7 Timeseries Data ..................................................................................... 93

134 1.2.5.7.1 Services .................................................................................................................... 93

135 1.2.5.7.1.1 Read ................................................................................................................. 94

136 1.2.5.8 Security ................................................................................................. 94

137 1.2.5.8.1 Use Cases ................................................................................................................. 94

138 1.2.5.8.2 Solution .................................................................................................................... 95

139 1.2.5.8.2.1 Server Architecture .......................................................................................... 95

140 1.2.5.8.2.2 Client Registration ........................................................................................... 95

141 1.2.5.8.2.3 Endpoints ......................................................................................................... 96

142 1.2.5.8.2.3.1 Authorization endpoint ............................................................................ 96

143 1.2.5.8.2.3.2 Token endpoint ........................................................................................ 96

144 1.2.5.8.2.4 Workflow ......................................................................................................... 97

145 1.2.5.8.2.5 Authentication .................................................................................................. 98

146 1.2.5.8.2.6 Token ............................................................................................................... 99

147 1.2.5.8.2.6.1 Token Type ............................................................................................ 100

148 1.2.5.8.2.6.2 Token Scopes ........................................................................................ 100

149 1.2.5.8.2.6.3 Token Transport .................................................................................... 101

150 1.2.5.8.2.7 Interoperability ............................................................................................... 101

151 1.2.5.8.3 Services .................................................................................................................. 102

152 1.2.5.8.4 Examples ................................................................................................................ 102

153 1.2.5.8.4.1 Use Case A.1 .................................................................................................. 103

154 1.2.5.8.4.2 Use Case A.2 .................................................................................................. 104

155 1.2.5.8.4.3 Use Case B.1 .................................................................................................. 105

156 1.2.6 Discovery ........................................................................................................ 107

157 1.2.6.1 Discovery on WAN ............................................................................. 107

158 1.2.6.2 Discovery on LAN .............................................................................. 107

159

160


-----

161 **1** **KNX IoT 3[rd] Party API**

162 **1.1** **Introduction**

163 This clause is normative.

164 The KNX IoT 3[rd] Party API supports the following general features.

165 - discovery of the KNX IoT 3rd Party Server

166 - reading and writing of Endpoints

167 - setup notifications on Endpoints

168 - access permission control of Endpoints

169 As a note, information about reliability and freshness of the Installation state data is not dealt with in this

170 version of the KNX IoT 3[rd] Party API.

171 The KNX IoT 3[rd] Party API hosts in the KNX IoT 3[rd] Party Server the following main server project and

172 Installation concepts as depicted in Figure 1. The picture expresses the following aspects:

173 - with red dotted lines: the available relations in the API (which are fewer than the KNX System or

174 KIM describe, see D below)

175 - the item cardinality at the end of every relation (in UML notation)

**_Server Project_** _KIM Class_
Node Informa�on

_KNX IoT Term_

Installa�on Informa�on

**:Installa�on[D]**
                  - ETS Project

**IoT Func�on**

**:Applica�onFunc�on**

**0 .. *** **0[E]** **.. ***

**1**

**:Loca�on[C]**

**0 .. 1** **IoT Datapoint**

**0 .. *** **0[B]** **.. 1** **0[A]** **.. *** **1 .. ***

**:Device** **:Point** **:Func�onPoint**

176

177 **Figure 1 – Project elements in the KNX IoT 3[rd] Party Server**

178 `A when a Device does not support a Point (plain hardware like power supply, without any`

179 `application) or the IoT Datapoint represents a Function Point`

180 `B when an IoT Datapoint represents a Function Point`

181 `C includes floors/rooms/… and other`

182 `D an Installation to location relation is not an explicit relationship in the API; it is`

183 `expected that the resource path definitions of the category location (or similar) are`

184 `always the known and fixed entry point for one (or more) Installations. In case of more`

185 `installations, all content is merged, the API endpoints delivers a common perspective, see`

186 `also clause Installations.`

187 `E when an IoT Datapoint represents a Point`

188 **Server Project - Node Information**

189 Provides node meta information assigned to the server.

190 - geographically assigned location address, node (firmware) version and more

191 **Server Project - Installation Information**

192 Is the MaC project assigned to the server, in the form of the Semantic Export.

|KIM Class<br>KNX IoT Term|Col2|
|---|---|
|_KNX IoT Term_<br>_KIM Class_||
|_KNX IoT Term_<br>_KIM Class_||

|IoT Datapoint<br>:Point :FuncƟonPoint|Col2|
|---|---|
|**IoT Datapoint**<br>**:Point**<br>**:FuncƟonPoint**||


-----

193 - Functions, Datapoints, Devices or Location elements such as a Building, Floor or Room.

194 - The version of the ETS Project, to track changes of the server project configuration. To identify a

195 change the OP `:lastModified of the :Installation` can be used, see clause "Installation" in

196 [03]).

197 - The KNX Information Model version (see clause "Introduction" in [03]), as part of the Semantic

198 Export.

199 NOTE 1 Data and users are added to the actual server project in the KNX IoT 3rd Party Server in a plug-and
200 play way. Consequently, the server project is a superset/ extension of the original ETS project.

201 Therefore, any additional data of the server project needs to be maintained by the KNX IoT 3rd Party

202 Server and not by the MaC ETS.

203 **1.1.1** **API - Content**

204 The KNX IoT 3[rd] Party API consists of:

205 - Resource access methods (to set or retrieve Installation state data).

206 - Endpoints hosting concepts comprising the Runtime communication or representing the

207 Configuration of a (KNX Classic) Installation, additionally endpoints allowing to setup notifications

208 on changes of Installation state data, provided to subscribers that are clients to the Installation.

209 - Methods to filter for specific resource items from a collection of resource items.

210 - Methods for authorization by a KNX IoT 3rd Party Client including a secure client/server

211 communication.

212 - Access (permission) scopes, for security reasons the actual access to some endpoints (such as writing

213 a Datapoint) is gated by the KNX IoT 3rd Party Server, this access will be granted as part of the

214 authorization.

215 For all Endpoints, their expected request/ response document formats, and their content is not described to

216 the full extend in this specification. As described in clause "Document Structure" in [01], whether an

217 element is mandatory or optional can be found in the electronic document (see clause 1.1.4). If an

218 Endpoint is mandatory or not, please refer to clause 1.2.5.

219 NOTE 2 Except by means of written text, Open API does not allow to define with a statement that an Endpoint

220 is optional.

221 **1.1.2** **API - Conformance**

222 The KNX IoT 3[rd] Party API includes the above-described content and consists of the following

223 specifications:

224 - The API electronic document content is described with Open API (OAS3).

225 - The API concepts are described according JSON API, in case deviations compared to the JSON API

226 were explicitly requested or accepted, this is mentioned in this specification. As a rule, a KNX IoT 3[rd]

227 Party Server SHALL

228 - ignore any valid JSON API content that is not supported or expected by the server;

229 - respect the JSON API specification when supporting other members, even if they are not detailed

230 in this specification (not part of the KNX conformity assessment).

231 EXAMPLE 1 JSON API top-level members not mandated or described in this specification, such as top-level

232 `links or included member.`


233 KNX manufacturer attributes not defined in this specification, as part of the attributes

234 member of a certain resource object.

235 Providing a single JSON object or an array of JSON objects, including if no resource items are

236 available.


-----

237 **1.1.3** **API - Version**

238 The KNX IoT 3[rd] Party API SHALL be versioned to allow compatibility between communication peers,

239 however only as a whole and not in parts, even if several elements of the API are unchanged between

240 different API versions.

241 The version of this specification (see clause document updates) relates to the version 2.0.0 of the

242 electronic document (see clause 1.1.4). For details how to handle API versioning see clause 1.2.5.1.1.1.

243 **1.1.4** **API – Availability**

244 [The URL https://schema.knx.org allows to retrieve the most recent electronic document of the KNX IoT](https://schema.knx.org/)

245 3[rd] Party API. Older versions are also available.

246 The above-mentioned URL has no relationship to the common KNX IoT 3[rd] Party API URL structure, for

247 this see clause 1.2.4.

248 **1.1.5** **API – Data Format**

249 The KNX IoT 3[rd] Party API electronic document is available as a YAML file.

250 **1.1.6** **API – Examples Format**

251 For readability, this specification all KNX IoT 3[rd] Party API code (snippet) examples are in the YAML

252 format, regardless of the actual format at Runtime.

253 **1.1.7** **Motivation**

254 The motivation of this guideline is to ensure that the KNX IoT 3[rd] Party API

255 - can be easily and consistently consumed by clients with basic HTTP support;

256 - provide smooth developers experience, in this way making use easy and intuitive.

257 Services typically provide language-specific frameworks to wrap their APIs, most of their operations

258 eventually boil down to requests/ responses with JSON payload.

259 Most modern APIs use HTTP protocol concepts, blended with some concepts from other computing

260 technologies.

261 NOTE 3 A lot of web APIs are defined in terms of Endpoints that have parameters. Endpoint and parameter

262 are not terms or concepts that are native to HTTP or REST- they are concepts carried over from

263 Remote Procedure Call (RPC) and related technologies.


264 An API should focus on the underlying entities of the “domain of interest” it exposes, rather than a large

265 set of functions that manipulate those entities. Fewer unique features of the API have to be managed over

266 time. This belief is really an expression of the more fundamental idea to specify only the fewest number

267 of concepts necessary to solve the problem.

268 Fewer concepts result in increased consistency, allowing teams to leverage common code, patterns,

269 documentation, and design decisions. These guidelines aim to achieve the following:

270 - Allowing 3[rd] parties to integrate service solutions with the products of KNX manufacturers

271 implementing the KNX IoT 3[rd] Party API.

272 - Providing easy access to the KNX IoT services via REST interfaces for application developers.

273 - Making the integration of the KNX IoT 3[rd] Party API easy for device developers.

274 **1.1.8** **Resources**

275 A resource is the nucleus of any rest-oriented API design, it models and represents the intended

276 Application’s Domain. With an URI, a resource is uniquely defined, an URL defines a method to access

277 the resource.

278 Resources SHALL generally be described with an URI.


-----

279 **1.1.8.1** **Items, Collections and Relationships**

280 An API is typically designed by dividing resource types (naming schemes) into documents, collections,

281 stores and controllers. In this specification the focus lies on documents and collections.

282 - A document (from now on called item) is one single or individual “object of interest”.

283 - A collection is a directory of singular items, hosted in a server.

284 Items, and collections (of items) are the first fundamental concept.

285 In addition to simple items, most “domains of interest” include conceptual relationships. The natural

286 construct for representing relationships in HTTP is the link. Links indicate where you can go from where

287 you are. They are the signposts for the paved paths to traverse the system.

288 Relationships (linked data) are the second fundamental concept.

289 Examples can be found further down.

290 **1.1.8.2** **Resource Path**

291 The following path structure to a resource SHOULD be defined, a path to retrieve an individual item of a

292 specific resource using a resource {id}and one path to retrieve a collection of such items.

293 - item path: …/item/{id}

294 - collection path: …/item (same resource path principle is

295 …/item/{id}/item)

296 Hyphens SHALL be used to separate path segments, such as …/segment1-segment2/.

297 **1.1.8.3** **Resource Names**

298 The use of a domain specific nomenclature for resource names helps developers understand the

299 functionality and basic semantics of resources. It also reduces effort to document the API.

300 A collection provides usually multiple items, such resource names SHOULD be pluralized.

301 `/buildings`

302 `/buildings/{id}`

303 URLs are often treated case sensitive, therefore lowercase SHALL be used.

304 **1.1.8.4** **Resource IDs**

305 JSON API requires for the {id} a string format, it is RECOMMENDED for the {id} to use the UUID

306 format.

307 To simplify the encoding of a resource id in URLs the {id} SHALL NOT use reserved characters as

308 [specified in [RFC 3986] section 2.2.](https://tools.ietf.org/html/rfc3986#section-2.2)

309 In case the resource {id} is represented by a UUID the above rule is fulfilled automatically, as a UUID

310 never uses any reserved character specified above.

311 **1.1.8.5** **Examples**

312 The resource path examples below show a path to a single location and function item and a resource path

313 for a collection of locations, ids are formatted as UUID resource {id}.

314 `/locations/{id}` `A specific location item as part of the locations collection in an`

315 `Installation,`

316 `https://…/locations/3a19fee4-ba8a-4fd2-ba10-42b7f40f5acf`

317 `/functions/{id}` `A specific function item as part of the functions collection in an`

318 `Installation,`

319 `https://…/functions/7e1418b3-58cb-43dc-a743-1280bc2c6bd7`

320 `/locations` `A collection of all locations in an Installation,`

321 `https://` `…/locations`


-----

322 The resource path example below shows a relationship of a location to its functions included there.

323 `/locations/{id}/functions A collection of all function items in a specific location,`

324 `https://…/locations/3a19fee4-ba8a-4fd2-ba10-42b7f40f5acf/functions`

325 **1.2** **Specification**

326 **1.2.1** **Server Requirements**

327 Use of common web techniques (e.g., additional HTTP header tags, used cypher suites on TLS, …) that

328 go beyond those that are specified in this clause and in clause 1.2.5.8 are acceptable, provided they do not

329 violate any of the explicit protocol and security requirements.

330 **1.2.1.1** **Protocols**

331 1.2.1.1.1 IP

332 The KNX IoT 3[rd] Party API communication SHALL be possible on both IPv4 as well as on IPv6. The

333 implementer is free to choose the version; dual stack implementations are possible as well.

334 1.2.1.1.2 HTTP

335 A KNX IoT 3[rd] Party Server SHALL support HTTP/1.1 as documented in the following RFCs:

336 - [RFC7230] – Message Syntax and Routing  general purpose

337 - [RFC7231] – Semantic and Content  `Content-Type header`

338 A KNX IoT 3[rd] Party Server MAY support HTTP/1.1 as documented in the following RFCs:

339 - [RFC7232] – Conditional Requests  `ETag header`

340 HTTP/2 with [RFC7540] is RECOMMENDED but OPTIONAL.

341 This specification lists some of the required elements of the above mentioned Semantic and Content

342 elements below.

343 - handle different HTTP resource access methods;

344 - handle different (URL) resource paths;

345 - handle possible (URL) resource path query parameters;

346 - handle possible request/ response header;

347 - handle a HTTP version number.

348 Even if requirements laid down further in this specification MAY refer to HTTP/1.1, it is explicitly

349 supposed that such requirements are platform-agnostic to HTTP/2 or HTTP/1.1.

350 NOTE 4 In this speciation further used examples use HTTP/1.1.

351 **1.2.1.2** **Access Method**

352 Resources can be accessed with the standard HTTP access methods for restful services.

353 Readable resources can be fetched by sending a GET request to its corresponding Endpoint. Writable

354 resources can be updated by sending a PUT request to its corresponding Endpoint. In specific cases a

355 writable resource can be accessed also with POST(create), PATCH (update) and DELETE requests.

356 Which HTTP methods are used in which use case, please consult the KNX IoT 3[rd] Party API specification

357 in clause 1.2.5. In case a client is using an access method not defined for an individual Endpoint, the

358 KNX IoT 3[rd] Party Server SHALL respond with error code 405.


-----

359 **1.2.1.3** **Header**

360 The KNX IoT 3[rd] Party Server SHALL support to handle the following headers specified in HTTP.

361 - `Accept`

362 Client request header, containing a specific requested Content-Type respectively media-type.

363 - `Accept–Charset`

364 Client request header, containing a specific requested Accept-Charset.

365 NOTE 5 Well known browser clients generally omit this header.

366 Above-described header behavior is closely related to the content negotiation handling, see clause 1.2.1.7.

367 - `Authorization`

368 Client request header, containing specific user authorization credentials.

369 - `Host, Content-Length, Date`

370 Used for subscription post notifications, see clause 1.2.5.6.4.5.

371 The KNX IoT 3[rd] Party Server MAY support handling of the following header specified in HTTP.

372 `ETag`

373 Servers response header, as described in clause 2.3 in [RFC7232]

374 NOTE 6 ETag is a caching mechanism for reliability and scalability and an indicator for domain respectively

375 application data freshness/validity. It affects the server response, containing a specific resource

376 identifier (version or fingerprint).


377 Client requests to specific Endpoints of the KNX IoT 3[rd] Party API with other request headers as

378 specified above (such as If-None-Match) are out of scope of this specification.

379 **1.2.1.4** **Query Parameters**

380 This specification uses the following parameter types:

381 - query (parameter is part of the URL, see clauses below)

382 - path (parameter is part of the URL, described as part of the resource path, see clause 1.2.5)

383 - header (parameter is part of a HTTP header)

384 This specification describes optional and mandatory query parameters, the used query parameter names

385 fulfill the JSON API. Other (vendor specific) query parameters are OPTIONAL.

386 NOTE 7 In case square brackets "[ ]" and the colon ":" are used as part query parameter names, they SHALL

387 be %-encoded. For the general name definition for query parameters see JSON API, section Query

388 Parameters.


389 The KNX IoT 3rd Party API Server SHALL support a query parameter string according to [RFC 3986],

390 [section 3.4. For examples, see in next clauses.](https://datatracker.ietf.org/doc/html/rfc3986#section-3.4)

391 - Several query parameters SHALL be concatenated with an ampersand "&" separator, each query

392 parameter SHALL be handled by the server. The concatenation SHALL NOT be handled with any

393 logical operation for the parameters, for this see clause Pagination and Filter below.

394 - Several query parameter values for the same query parameter SHALL be supported as a comma

395 separated list. The list SHALL NOT be handled with any logical operation for the values, for this

396 see clause Filter below.

397 The query parameter consists of a parameter name and a parameter value, separated by a "=".

398 Technically this is a key/value pair used to search for resources related to the key, also matching the

399 requested (parameter) value.

400 NOTE 8 The server technology to define such relations is out of scope here (SQL database, triple store, …).


-----

401 1. The query parameter name (key) is defined as a string, covering a set of terms, see next clauses.

402 2. The query parameter value is defined as a string, covering any term including timestamps and

403 numbers. Depending on the related resource item member the value needs to be interpreted in

404 different ways. The parameter value MAY be surrounded with quotes, which needs to be ignored by

405 the KNX IoT 3[rd] Party Server.

406 NOTE 9 The Datapoint attributes member value is a possible query parameter, see also examples

407 in the next clauses below. It is defined as a JSON string, see clause 1.2.5.4. A query parameter

408 value 4.10 is interpreted on a string-based DPT as a string 4.10, on a number-based DPT as a

409 number 4.1.

410 **String**

411 String values are interpreted by %-decoding the given value.

412 **Number**

413 Numbers are interpreted according to JSON, clause 6.

414 **Time**

415 Time is interpreted according to the API reference member `timestamp.`

416 **IRI**

417 IRI is interpreted the same as for String above. They cover KIM properties, optionally external

418 ontology properties. Using a full IRI as value is NOT RECOMMENDED, for this the RDF namespace IRI

419 concept should be used (further called namespace prefix).

420 The corresponding namespace prefix can be omitted as part of the client request. The KNX IoT 3rd

421 Party API Server SHALL always prioritize the KIM properties (see examples in next clauses).


422 NOTE 10 The option to omit a namespace prefix such as dic-tag:, dic:, loc: or unit: means that the

423 KNX IoT 3rd Party API Server SHALL implement different priorities to search for related content.

424 1. in KIM included properties, with and without namespace prefix

425 2. Vendor specific properties


426 When a vendor specific or external Ontology (non-KIM) property has the same value as in the KIM,

427 a client shall indicate this with the corresponding namespace prefix. Otherwise, it is handled by the

428 server as the KIM property (in such a case the server does not realize that the query parameter

429 was intended to be a different one).

430 The server behavior is unspecified in case two KIM properties exist with the same name when

431 dropping both prefixes.


432 A user visible translation for the query parameter name and value (including specific parts of the name

433 such as [operator]) shall be handled by the client.

434 1.2.1.4.1 Pagination

435 Constrained server/clients may have problems to handle a large amount of collection items in a response.

436 For this the KNX IoT 3rd Party API Server supports a page-based pagination strategy.

437 - A KNX IoT 3rd Party Client may limit the expected amount of responded items from a collection with

438 a specific “collection offset” or “response size” to finally read all items of a resource collection item

439 by item.

440 - A KNX IoT 3rd Party Server may limit the maximal number of items provided in a response. The

441 limitation may depend on the server (resource) capabilities and the expected number of items in a

442 collection (closely related to the size of a MaC project).

443 The following query parameters SHALL be supported by the KNX IoT 3[rd] Party Server.


-----

444 - `page[…]` paginate the response data to a given criterion,

445 "…" values see clauses below

446 If different (pagination) query parameters are concatenated in a single request each SHALL be met

447 individually, the parameters are NOT logically and'ed.

448 1.2.1.4.1.1 page[number]

449 The parameter skips several pages before starting to collect the result set of items. It occurs only once per

450 request, the KNX IoT 3[rd] Party API Server SHALL otherwise raise an error (see clause 1.2.1.4.4).

451 This filter is applied to returned resource collections of resource path category function, location,

452 datapoint, device, information, subscription or timeseries, for this see the electronic document (see clause

453 1.1.4).

454 - The parameter name is specified with page[number].

455 - The parameter value is a number.

456 The default parameter value for the KNX IoT 3[rd] Party Server SHALL be zero.

457 EXAMPLE 2 A client request without a query parameter of page[number] would not be able to read all

458 items that may be in front of the default value – if not set to zero.

459 In case a query parameter was not set in the client request accessing a collection, the KNX IoT 3[rd]

460 Party Server SHALL respond with the default parameter value (as specified above) as part of the

461 `collection member (see clause 1.2.3.2.1).`

462 The server value for the size of a page as such is vendor specific.

463 NOTE 11 Addressing a collection item (as a zero-based offset)  number = offset / page size.

464 1.2.1.4.1.2 page[size]

465 The parameter defines the maximal number of items to return in the response. It occurs only once per

466 request, the KNX IoT 3rd Party API Server SHALL otherwise raise an error (see clause 1.2.1.4.4).

467 This filter is applied to returned resource collections of resource path category function, location,

468 datapoint, device, information, subscription or timeseries, for this see the electronic document (see clause

469 1.1.4).

470 - The parameter name is specified with page[size].

471 - The parameter value is a number.

472 The default parameter value for the KNX IoT 3[rd] Party Server SHALL be set larger than zero, the

473 actual value is vendor specific.

474 NOTE 12 A client request without the query parameter page[size] would return an empty list - if set to

475 zero.

476 In case a query parameter was not set in the client request accessing a collection, the KNX IoT 3rd

477 Party Server SHALL respond with the actual parameter value (considering the default parameter

478 value) as part of the collection member (see clause 1.2.3.2.1).


479 NOTE 13 The actual (size) parameter value in a response may be lower than the default (size)

480 parameter value if the last page does not contain enough items.

481 If the default (size) parameter value is larger than the number of items in a collection, the

482 response contains the entire collection.


483 EXAMPLE 3 A (%-encoded) GET request fetches all location items from the /locations collection, starting

484 from page[number] "20", returning the below collection information.

485 **Request**

486 `GET /locations?page%5Bnumber%5D%3D20 HTTP/1.1`

487 `Accept: application/vnd.api+json`


-----

488 **Response**

489 `meta:`

490 `collection: // a response with collection information, see clause 1.2.3.2.1`

491 `number: 20` `// client requested to skip 20 pages, return from page #21`

492 `size: 10` `// no size limitation from client, use server default value (10)`

493 `total: 400 // a client may derive from the value above a server page size 10`

494 `data: [{…}]`

495 1.2.1.4.2 Filter

496 A client may filter for specific item properties in collections. For this the KNX IoT 3rd Party API Server

497 supports a filter strategy.

498 - A KNX IoT 3rd Party Client wants to limit the resource items in a response such as to present only

499 items matching a specific user search criterion, all others from the collection are of no interest to

500 the client.

501 The following query parameters MAY be supported by the KNX IoT 3[rd] Party Server.

502 - `filter[…][operator] filter resources according to a given filter criterion and operator, for the`

503 "…" and operator options see clauses below

504 This filter is applied to returned resource collections of resource path category function, location,

505 datapoint, timeseries or device, for this see the electronic document (see clause 1.1.4).

506 If different (filter) query parameters are concatenated in a single request each SHALL be met

507 individually, the parameters are logically and'ed.

508 NOTE 14 An or'ed filtering can be realized with multiple requests.

509 1.2.1.4.2.1 filter[…][operator]

510 The parameter name part operator filters for specific resource items as part of a collection that are related

511 to a logical/comparison operation, such as all datapoints with a temperature (attribute) value lower than

512 _30°C._

513 - The parameter name _filter[…][operator] is specified for the part operator as follows:_

**Op.** **Definition** **True Rule** **Query parameter value list**

**eq** equal resource item member value = query parameter value not allowed, see error handling

**le** lower or equal resource item member value =< query parameter value not allowed, see error handling

**ge** greater or equal resource item member value => query parameter value not allowed, see error handling

**lt** lower than resource item member value < query parameter value not allowed, see error handling

**gt** greater than resource item member value > query parameter value not allowed, see error handling

**and** logical and all requested query parameter values are contained in a allowed
list of a resource item member[ 1)]

**or** logical or at least one requested query parameter value is allowed
contained in a list/ matches the value of a resource item
member

514 The order to use for the comparison operator le, ge, lt, gt, eq is defined as follows:

515 1. chronological order if both values are formatted as a time[ 2)] (see Time in clause 1.2.1.4 ),

516 2. numerical order if both values are formatted as a number[ 2)] (see Number in clause 1.2.1.4 ),

1) As implementers note, it is also false when addressing a resource item member with a (single) value or a list with
not enough comparable elements included in it.
2) Except for the datapoint value from the attribute member value, here the corresponding DPT shall be
used instead (such as a string "4.10" on a string DPT or a float "1.3E-3" on a float DPT).

|The pa|arameter name|filter[…][operator] is specified for the part opera|ator as follows:|
|---|---|---|---|
|**Op.**|**Definition**|**True Rule**|**Query parameter value list**|
|**eq**|equal|resource item member value = query parameter value|not allowed, see error handling|
|**le**|lower or equal|resource item member value =< query parameter value|not allowed, see error handling|
|**ge**|greater or equal|resource item member value => query parameter value|not allowed, see error handling|
|**lt**|lower than|resource item member value < query parameter value|not allowed, see error handling|
|**gt**|greater than|resource item member value > query parameter value|not allowed, see error handling|
|**and**|logical and|all requested query parameter values are contained in a<br>list of a resource item member 1)|allowed|
|**or**|logical or|at least one requested query parameter value is<br>contained in a list/ matches the value of a resource item<br>member|allowed|


-----

517 3. otherwise in lexicographical order.

518 The parameter name part operator is optional, if not present this is interpreted by the server as the

519 default eq.

520 - The parameter value is specified for each […] part in the next clauses.

521 EXAMPLE 4 Logical filter expressions in different variants.

522 `1.` `filter[value][le]=30`

523 `// datapoint (runtime) attributes member value shall be lower/equal than 30`


524 `2.` `filter[timestamp][gt]=2021-02-17T17:17:13Z`

525 `// datapoint shall be last updated strictly after 2021-02-17, 5:17:13PM`

526 `3.` `filter[state][or]=Tested,Accepted`

527 `// location attributes member state shall be "Tested" or "Accepted"`


528 `4.` `filter[enum][and]=on,off`

529 `// datapoint attributes member enum shall contain "on" and "off"`

530 `//  this is a valid combination for the DPT 1.001`

531 `5.` `filter[unit][and]=DEG_C,DEG_F`

532 `// datapoint attributes member unit shall contain "DEG_C" and "DEG_F"`

533 `//  such a DPT does not exist`


534 `6.` `filter[unit]=DEG_C&filter[value][lt]=30`

535 `// datapoint attributes member unit shall be "DEG_C" and the value shall be lower than 30`

536 `// several and'ed parameters, each of them shall be handled and met individually`

537 1.2.1.4.2.2 filter[meta.@type][operator]

538 The parameter filters for specific resource items as part of a collection that are related to a specific

539 resource type, such as all datapoints that are of additional type loc:Floor.


540 NOTE 15 Additional resource type definition in a response is indicated as part of the meta member, hence this

541 there will be no conflict with other members, such as the general type definition as part of the data

542 member.

543 - The parameter name is specified with filter[meta.@type], for the part operator as specified in clause

544 1.2.1.4.2.1.

545 - The parameter value is specified with a KIM class name or (if available) the URN assigned to this

546 class.

547 The KIM classes for datapoint, device and function resources, its corresponding namespace prefixes

548 and the actual class names can be found in [03] respectively in the electronic file.

549 The KIM classes for location resources, its corresponding namespace prefixes and the actual class

550 names can be found in Table 10.

551 NOTE 16 The KIM class name is the remainder of the IRI when removing the corresponding namespace

552 [prefix, such as loc: from http://schema.knx.org/2020/ontology/loc#Floor](http://schema.knx.org/2020/ontology/loc#Floor)  Floor.

553 NOTE 17 Any (parent/ child) inheritance of location resources defined in Table 10 are not taken into account

554 when filtering. As an example, filtering for all buildings will not include any room.

555 EXAMPLE 5 Type filter expressions in different variants.

556 - `filter[meta.@type]=Floor` `// KIM location type without namespace`

557 - `filter[meta.@type]=loc:Floor` `// KIM location type with namespace`

558 - `filter[meta.@type][or]=Floor,Space` `// locations that are either a Floor or Space`

559 - `filter[meta.@type]=Floor,Space` `// two parameter values, may cause a 422`

560 - `filter[meta.@type][lt]=Floor` `// types lexicographically lower than string`

561 `// Floor (may not be very useful)`

562 - `filter[meta.@type]=dpa.321.51` `// KIM datapoint type without namespace`

563 - `filter[meta.@type]=dic:dpa.321.51` `// KIM datapoint type with namespace`

564 - `filter[meta.@type]=urn:knx:dpa.321.51` `// KIM datapoint type as URN`

565 - `filter[meta.@type]=td:Thing` `// external element with namespace`


-----

566 - `filter[meta.@type]=oms:HeatMeter` `// external element with namespace`

567 - `filter[meta.@type]=switchinCtrl` `//` `KIM app. function without namespace`

568 - `filter[meta.@type]=urn:knx:fct.switchingCtrl // KIM app. function as URN`

569 1.2.1.4.2.3 filter[tagKey][operator]

570 The parameter filters for specific resource items as part of a collection that are related to specific tags,

571 such as a datapoint that is related to the (phenomenon) tag temperature, a building that is related to the

572 (location usage) tag airport or an application function that is related to the (trade) tag HVAC.

573 - The parameter name _filter[tagKey] is specified for the part operator as specified in clause_

574 1.2.1.4.2.1, for the part tagKey with a structure of the KIM object property relationship predicates,

575 as follows:

576 `1.` `hasTagSet.hasTag`

577 The structure expresses a combination of two KIM OPs, addressing Tags that are indirectly assigned to a

578 source (such as a location or datapoint). The structure SHALL be used with the following OPs:

579 **Table 1 – Parameter name including two KIM Object Properties**
```
         parent OP hasTagSet hasTag Comment

```
`child OP`        - `hasQualityKind`        - `hasEquipmentType` Addresses a Quality Kind.

                      - `actsOnQualityKind`                       - `hasPhenomenonType`

                      - `observesQualityKind`                       - `hasLocality`

                      - `adjustsQualityKind`                       - `hasQuantityKind`

                      - `measuresQualityKind`

`child OP`        - `hasProcessKind`        - `hasEquipmentType` Addresses a Process Kind.

                      - `actsOnProcessKind`                       - `hasPhenomenonType`

                      - `observesProcessKind`                       - `hasVirtualEntityType`

                                                     - `hasLocality`
                                                     - `hasStateKind`

`child OP`        - 3)        - `hasOrigin` Addresses an Operation Kind.
                                                     - `hasPointOperation`
                                                     - `hasPointFunctionType`

580 NOTE 18 A QK/PK or Operation Kind may have been assigned multiple times to a source, each

581 structure from above needs to be considered separately, for this see examples below.

582 The structure cannot be split into individual parts, such to address QKs/PKs directly with the first OP.

|parent OP|hasTagSet|hasTag|Comment|
|---|---|---|---|
|**`child OP`**|- `hasQualityKind`<br>• `actsOnQualityKind`<br>• `observesQualityKind`<br>• `adjustsQualityKind`<br>• `measuresQualityKind`|- `hasEquipmentType`<br>- `hasPhenomenonType`<br>- `hasLocality`<br>- `hasQuantityKind`|Addresses a Quality Kind.|
|**`child OP`**|- `hasProcessKind`<br>• `actsOnProcessKind`<br>• `observesProcessKind`|- `hasEquipmentType`<br>- `hasPhenomenonType`<br>- `hasVirtualEntityType`<br>- `hasLocality`<br>- `hasStateKind`|Addresses a Process Kind.|
|**`child OP`**|-  3)|- `hasOrigin`<br>- `hasPointOperation`<br>- `hasPointFunctionType`|Addresses an Operation Kind.|


583 NOTE 19 To address QKs/PKs directly, this would require introducing a structured naming convention

584 for them. A parameter value with such a name would not indicate a meaningful

585 range/structure to filter on a specific QK/PK, the actual interest is on the tags as such and

586 not on the names of the containers holding the tags.

587 `2.` `hasTag`

588 The structure expresses a single KIM OP, addressing Tags that are directly assigned to a source (such as

589 a location or datapoint). The structure SHALL be used with the following OPs:

590 **Table 2 – Parameter name including one KIM Object Property**

|parent OP|hasTag|
|---|---|
|**`child OP`**|- `hasPointInterface`<br>- `operatesForTrade`<br>- `operatesOnProtocol`<br>- `hasLocationUsage`|


591 NOTE 20 As described further above some tags may be assigned only indirectly to a source, hence

592 the filter result may be not as expected when using child properties of :hasTag, not listed in

593 this table.

3) No child properties are defined.


-----

594 The described parent OPs have a dedicated range to all possible tag individuals of KIM class :Tag,

595 on using them all tags will be filtered and included in the result. To limit the results, related child

596 OPs need to be used, mainly from hasTag, but also from hasTagSet (or a combination).

597 NOTE 21 The above statement assumes that the server data needs to include child properties, otherwise

598 the returned result is always empty.

599 If a chosen parameter name/ value combination does not match content wise or logically, the server MAY

600 not be able to retrieve/ calculate a matching, for this see clause error handling below.

601 - The parameter value is specified with the name of a KIM individual of class :Tag.

602 The KIM individuals for the tag resources, their corresponding namespace prefixes and the actual

603 individual names can be found in [03] respectively in the electronic file.

604 A client needs to know the possible filter values. Common practice for a client is to learn them from

605 the responses. Therefore, it is strongly RECOMMENDED that a response contains the individual tags

606 and/or the QKs/PKs as entire resource objects as described in clause 1.2.3.3.5. Other options are

607 less transparent, for example to preprogram them in the client code or reading them externally

608 (such as from the ontology).

609 NOTE 22 The KIM individual name is the remainder of the IRI when removing the corresponding namespace

610 prefix, such as dic-tag: from http://schema.knx.org/2020/ontology/dictionaries/dic-tag#actuator 

611 actuator.

612 EXAMPLE 6 Filter expressions in different variants.


613 - `filter[actsOnQualityKind.hasEquipmentType]=actuator`

614 `// Source: Equipment, Datapoint (Device Catalog/Instance Data), Location, FP`

615 `// parameter name addresses a source with indirectly assigned tags as part of a QK`

616 `// query parameter with one value; filter all rooms with a QK with equipment type actuator`

617 - `filter[hasLocationUsage]=airport`

618 `// Source: Location (Instance Data)`

619 `// parameter name addresses a Location with directly assigned tags (with a parent OP)`


620 - `filter[hasLocationUsage][or]=pool,wellness`

621 `// Source: Location (Instance Data)`

622 `// parameter name` `addresses a Location with directly assigned tags (with a child property)`

623 `// query parameter with two values; filter all rooms with location usage pool or wellness`

624 - `filter[hasTag]=switch`

625 `// Source: Datapoint (Device Catalog/Instance Data), Location, FP, Application Function`

626 `// parameter name addresses a source with directly assigned tags (with a parent OP)`


627 - `filter[hasPointInterface][and]=if.p,if.i`

628 `// Source: Datapoint (Device Catalog/Instance Data)`

629 `// parameter name addresses a Datapoint with directly assigned tags (with a child OP)`

630 EXAMPLE 7 Filter expressions with different query parameter structures, incorporating QKs. To understand the

631 filter results, the following example setup is assumed.

|Datapoint A|Datapoint B|Datapoint C|
|---|---|---|
|QK1: Locality:_wire_ <br>QK2: Locality: _site_|QK1: Locality:_wire_|QK1: Locality:_wire_, _site_|


632 - `/datapoints?filter[hasQualityKind.hasLocality][or]=wire,site`

633 `// parameter name addresses a Datapoint with indirectly assigned tags as part of a QK`

634 `// succeeds for Datapoint A,B,C  at least one assigned QK has one tag included`

635 - `/datapoints?filter[hasQualityKind.hasLocality][and]=wire,site`

636 `// parameter name addresses a Datapoint with indirectly assigned tags as part of a QK`

637 `// succeeds for Datapoint C  at least one assigned QK has both tags included`

638 - `/datapoints?filter[hasQualityKind.hasLocality]=wire&filter[hasQualityKind.hasLocality]=site`

639 `// each parameter name addresses a Datapoint with indirectly assigned tags as part of a QK`

640 `// succeeds for Datapoint A,C  each given query parameter definition needs to be`

641 `// resolved individually to generate the overall result`


-----

642 1.2.1.4.2.4 filter[attributeKey][operator]

643 The parameter filters for specific resource items as part of a collection that are related to specific resource

644 attributes, such as all devices with the order number (attribute) 5WG100-200-AB.

645 - The parameter name _filter[attributeKey] is specified for the part operator as specified in clause_

646 1.2.1.4.2.1, for the part attributeKey with the attributes members as defined in clause

647 1.2.3.3.1.1. Vendor specific attributes are also possible, see example below.

648 Member of attributes that are defined as a combination together with (sub)properties needs to

649 be a concatenation of each property individual, separated by a dot. This method is the same as it is

650 defined in the previous clause for the QK/PK. For another example, see below.

651 - The parameter value is specified in relation to the used attributes members as:

652 1. MaC project (string) terms,

653 2. timestamp (time) values,

654 3. Datapoint (string/number) values,

655 4. KIM individual (IRI) names.

656 For the interpretation of the value, see clause Query Parameters.

657 The KIM individuals for the corresponding resources, their corresponding namespace prefixes and

658 the actual individual names can be found in [03] respectively in the electronic file.

659 NOTE 23 The KIM individual name is the remainder of the IRI when removing the corresponding namespace

660 prefix, such as unit: from http://qudt.org/vocab/unit/DEG_C  DEG_C.

661 EXAMPLE 8 Filter with some attributes members.

662 `1.` `filter[orderNumber]=5WG100-200-AB`

663 `// device order number (*attributes* member orderNumber) is queried with 5WG100-200-AB`


664 `2.` `filter[gira:deviceUpdateCycle]=immediately`

665 `// device (KNX manufacturer member deviceUpdateCycle) is queried with immediately`

666 `// the namespace prefix separator ":" shall also be % encoded`

667 `3.` `filter[unit]=DEG_C`

668 `// datapoint unit (attributes member unit) is queried with DEG_C`

669 `// the namespace prefix unit: is not needed (property is part of the KIM)`


670 `4.` `filter[version.hardware]=2.0`

671 `// device hardware version (attributes member version) is queried with (string) 2.0`

672 EXAMPLE 9 Filter with attributes member timestamp for updates of an individual Datapoint (…/timeseries).


673 `1.` `filter[timestamp][le]=2021-02-17T17:17:17Z`

674 `// filter all updates, occurred before …`

675 `2.` `filter[timestamp][ge]=2021-02-17T17:17:13Z`

676 `// filter all updates, occurred after …`

677 `3.` `filter[timestamp][ge]=2021-02-17T17:17:13Z&filter[timestamp][le]=2021-02-17T17:17:17Z`

678 `// filter all updates, occurred between …`

679 EXAMPLE 10 Filter with attributes member timestamp for updates of all Datapoints (…/datapoints).

680 `1.` `filter[timestamp][le]=2021-02-17T17:17:17Z`

681 `// filter where the last update, occurred before …`


682 `2.` `filter[timestamp][ge]=2021-02-17T17:17:13Z`

683 `// filter where the last update, occurred after …`

684 `3.` `filter[timestamp][ge]=2021-02-17T17:17:13Z&filter[timestamp][le]=2021-02-17T17:17:17Z`

685 `// filter where the last update, occurred between …`

686 1.2.1.4.3 Competency Questions

687 In this clause some (simplified) HTTP queries (questions) to an Installation (using filters) are given. All

688 below examples make use of the option to omit KIM specific namespaces for the parameter name and

689 value.

690 1. What locations (rooms) in the building are a used as a kitchen or a bath?


-----

691 `GET` `/locations?filter[hasLocationUsage][or]=kitchen,bath`

692 `RESPONSE: location collection`

693 2. What are the set points and the current temperature of a specific location?

694 `Step 1`

695 `GET` `/locations/{locationId}/functions?filter[meta.@type]=temperatureAir`

696 `RESPONSE: application function collection`

697 `Step 2`

698 `GET` `/functions/{functionId}/datapoints?filter[hasQualityKind.`

699 `hasPointFunctionType][or]=sp,processValue`


700 `RESPONSE: datapoint collection`

701 3. What is the current operation mode of the primary system?

702 `Step 1`

703 `GET` `/functions?filter[meta.@type]=generationCtrl&filter[operatesForTrade]=heating`

704 `RESPONSE: application function collection`

705 `Step 2`

706 `GET` `/functions/{functionsId}/datapoints?filter[hasQualityKind.`

707 `hasPointOperation]=enumeration`


708 `RESPONSE: datapoint collection`

709 4. What is the current HVAC operation mode of a specific location?

710 `Step 1`

711 `GET` `/locations/{locationId}/functions?filter[meta.@type]=airCtrl&`

712 `filter[operatesForTrade][or]=heating,ventilation,cooling`

713 `RESPONSE: application function collection`

714 `Step 2`

715 `GET` `/functions/{functionsId}/datapoints?filter[hasQualityKind.`

716 `hasPointOperation]=enumeration`


717 `RESPONSE: datapoint collection`

718 5. Which heating zone has air handling units?

719 `Step 1`

720 `GET` `/functions?filter[meta.@type]=emissionCtrl&filter[operatesForTrade]=heating`

721 `RESPONSE: application function collection`

722 `Step 2`

723 `GET` `/functions/{functionsId}/datapoints&filter[hasQualityKind.hasEquipmentType]=ahu`

724 `RESPONSE: datapoint collection`

725 6. It is cold in a room. Where can I change the setpoint?

726 `Step 1`

727 `GET` `/locations/{locationId}/functions?filter[meta.@type]=emissionCtrl`

728 `RESPONSE: application function collection`

729 `Step 2`

730 `GET` `/functions/{functionsId}/datapoints?filter[hasQualityKind.hasPhenomenType]=air`

731 `&filter[hasQualityKind.hasQuantityKind]=Temperature&filter[hasQualityKind.`

732 `hasPointFunctionType]=sp`


733 `RESPONSE: datapoint collection`

734 7. Read all history datapoint values before a given time.

735 `GET` `/datapoints/{datapointsId}/timeseries?filter[timestamp][le]=2019-04-22T14:07:17Z`

736 `RESPONSE: time series item collection for this datapoint`

737 8. Read all history datapoint values from a given time onwards.

738 `GET` `/datapoints/{datapointsId}/timeseries?filter[timestamp][ge]=2019-04-22T14:07:17Z`

739 `RESPONSE: time series item collection for this datapoint`

740 9. Read all history datapoint values for a given period.


-----

741 `GET` `/datapoints/{datapointsId}/timeseries?filter[timestamp][ge]=2019-04-22T14:07:17Z&`

742 `filter[timestamp][le]=2021-04-22T14:07:17Z`

743 `RESPONSE: time series item collection for this datapoint`

744 10. What is the energy consumption of a specific heat distribution system (heating circuit)?

745 `Step 1`

746 `GET` `/functions/?filter[meta.@type]=distributionCtrl&filter[operatesForTrade]=heating`

747 `RESPONSE: application function collection`

748 `Step 2`

749 `GET` `/functions/{functionsId}/datapoints?filter[operatesForTrade]=metering`


750 `RESPONSE: datapoint collection`

751 `data:`

752 `- id: 8951704b-269b-34f9-9a8f-4e415c5723e1`

753 `type: datapoint`

754 `meta:`

755 `"@type": [dic:dpa.1103.51, dic:meteringValue, oms:VM1]`

756 `attributes:`

757 `title: "[M-BUS INTEGRATED] Total volume"`

758 `readable: true`

759 `writable: false`

760 `unit: unit:M3`

761 `valueType: string`

762 `value: "10.055"`

763 `timestamp: 2021-09-08T11:01:44+02:00`

764 `knx:operatesOnProtocol: dic-tag:mbus`

765 `relationships:`

766 `datapointDevice:`

767 `links:`

768 `related: /datapoints/8951704b-269b-34f9-9a8f-4e415c5723e1/device`

769 `- id: 8951704b-269b-34f9-9a8f-4e415c5723e2`

770 `…`

771 1.2.1.4.4 Error Handling

772 The above-described query parameters can be used independently in a request. Moreover, more than one

773 query parameter may be part of an individual request.

774 Query parameters may be not applicable to a specific server endpoint or not specified at all for an

775 endpoint (details on which resource path what query parameters could be applied, please refer to the

776 electronic document in clause 1.1.4). If a server would simply ignore in such situations unexpected query

777 parameters or their values (and proceed with possibly the next valid parameters), this would make the

778 response data unpredictable for a client.

779 The KNX IoT 3[rd] Party Server:

780 - SHALL return a 400 response code (and optionally an error object) if the query parameter naming
781 rule is violated (see JSON API, section Query Parameters).

782 - SHALL handle the query result as false if a KNX IoT 3rd Party Client provides a (syntactically
783 correct) query parameter in its request where the parameter value is not specified or applicable for
784 the server

785 EXAMPLE 11


786 - A client request with query parameter filter[meta.@type]=Kitchen to an endpoint returning a location

787 collection; the value "kitchen" is not a defined location type as part of the KIM.

788 - A client request with query parameter filter[meta.@type]=Datapoint to an endpoint returning a location

789 collection; the value "Datapoint" as a resource type is not applicable for a location resource.

790 This results in an empty response payload for the resource. The result behavior is the same as for the

791 standard case when querying with a specified/ applicable query parameter value to a collection that

792 has currently no such "matching" resource items included.


-----

793 - SHALL return a 422 response code (and optionally an error object) if a KNX IoT 3[rd] Party Client

794 provides a (according to the RFC syntactically correct) query parameter in its request to a resource

795 path addressing an individual with reserved query parameters page[…] or filter[…].

796 EXAMPLE 12

797 - A client request with query parameter filter[hasPointInterface]=if.i to an endpoint returning a

798 datapoint individual; the query parameter filter[…] is not allowed on an individual.


799 - A client request with query parameter page[number]=2&page[size]=3 to an endpoint returning a location

800 individual; the query parameter page[…] is not allowed on an individual.

801 - MAY return with a 422 response code (and optionally an error object) if a KNX IoT 3[rd] Party Client

802 provides a (according to the RFC syntactically correct) query parameter in its request with a for the

803 server unknown query parameter definition.

804 EXAMPLE 13

805 - A client request with query parameter filter[value][and]=10,12 to an endpoint returning a collection of

806 datapoint values; this is a valid query parameter expression for a collection that does not make sense from

807 an applicative point of view (the actual value of a datapoint can have only one value at a time).

808 - A client request with query parameter filter[value][or]=10 or filter[value][and]=12 or

809 `filter[value][eq]=10,12 or filter[value]=10,12 to an endpoint returning a collection; this is an`

810 **invalid query parameter expression for a collection.**


811 - A client request with query parameter foo=bar, this is an unknown query parameter expression.

812 **1.2.1.5** **Response Object**

813 A request to a resource path addressing an item or a collection on the KNX IoT 3[rd] Party API creates a

814 response document.

815 Such a response document contains (message body) data, it can be further detailed with a structure

816 containing meta information or relationships to other resources.

817 The KNX IoT 3[rd] Party API structure of the message body data is designed with the specific goal to

818 provide human readable content (in case of security decoded content). For the definition of the message

819 body data, please see clause 1.2.3.

820 **1.2.1.6** **Response Status Codes**

821 A KNX IoT 3[rd] Party Server SHALL respond with defined HTTP response status codes from [RFC7231],

822 respecting their intended semantics. Response status codes other than those described in the below clauses

823 are vendor specific (including those to properly support the ETag mechanism).

824 The column “Details” indicates whether a specific behavior of the KNX IoT 3[rd] Party API is required for

825 a response status code. For the abbreviations used in the column “Support” see in [02].

826 1.2.1.6.1 Status Codes 1xx

827 1xx response status codes indicate an interim response for communicating connection status.

828 **Table 3 – Response Codes 1xx**

**Status** **Title** **Support Details**

101 Switching M      Protocols

829 1.2.1.6.2 Status Codes 2xx

|Status|Title|Support|Details|
|---|---|---|---|
|101|Switching<br>Protocols|M|-|


-----

830 2xx response status codes indicate that the client's request was successfully received and accepted.

831 **Table 4 – Response Codes 2xx**

**Status** **Title** **Support Details**

200 OK M Request accepted.

NOTE 24
According to JSON API, the response code is used on a successful request
to an individual resource or resource collection.
EXAMPLE 14

                        - The accessed URL resource path /functions Endpoint does not hold any
items as the Installation did not have the data (the MaC ETS project
does not have ETS Functions).
The successful (200) response contains a JSON API conform payload
indicating empty data by using the data member and optionally the
```
                   collection member (see clause 1.2.3.3).

```
                        - The accessed URL resource path /functions/{id} Endpoint does not hold
the resource item with {id}, therefore an unsuccessful (404) response
shall be used.

201 Created M      
202 Accepted M Request accepted; further processing not completed.

NOTE 25
A KNX IoT 3rd Party Server signals that there is no guarantee that the
completion of the request by the server will be successful. Common use
case is to immediately release the client from its duty to further observe the
request, although the request has not yet been processed by the server.
EXAMPLE 15
When writing datapoint values, the server may need to wait on a
(positive/negative) confirmation from a subsystem. Without this ANY
response code does not carry a mature status of the request. The use of this
response code signals this situation.

204 No Content M Successful request, no further response data will be sent.

NOTE 26
A KNX IoT 3rd Party Server signals that requested changes happened as
intended. Common use case is simply to inform the client that the request
was done, an ETag flag may also be used in addition to this.
EXAMPLE 16
Deleting a server subscription normally does not require a confirmation from
a subsystem, the response code signals the immediate success.
When writing datapoint values the server may get a confirmation
immediately, such as on very low latency subsystems or if the datapoint is
hosted at the server only. The response code signals the immediate
success.

832 1.2.1.6.3 Status Codes 4xx

833 4xx response indicates that the client seems to have sent erroneous requests.

834 **Table 5 – Response Codes 4xx**

|Status|Title|Support|Details|
|---|---|---|---|
|200|OK|M|Request accepted.<br>NOTE 24<br>According to JSON API, the response code is used on a successful request<br>to an individual resource or resource collection.<br>EXAMPLE 14<br>• <br>The accessed URL resource path_/functions_ Endpoint does not hold any<br>items as the Installation did not have the data (the MaC ETS project<br>does not have ETS Functions).<br>The successful (200) response contains a JSON API conform payload<br>indicating empty data by using the`data` member and optionally the<br>`collection` member (see clause 1.2.3.3).<br>• <br>The accessed URL resource path_/functions/{id}_ Endpoint does not hold<br>the resource item with {id}, therefore an unsuccessful (404) response<br>shall be used.|
|201|Created|M|-|
|202|Accepted|M|Request accepted; further processing not completed.<br>NOTE 25<br>A KNX IoT 3rd Party Server signals that there is no guarantee that the<br>completion of the request by the server will be successful. Common use<br>case is to immediately release the client from its duty to further observe the<br>request, although the request has not yet been processed by the server.<br>EXAMPLE 15<br>When writing datapoint values, the server may need to wait on a<br>(positive/negative) confirmation from a subsystem. Without this ANY<br>response code does not carry a mature status of the request. The use of this<br>response code signals this situation.|
|204|No Content|M|Successful request, no further response data will be sent.<br>NOTE 26<br>A KNX IoT 3rd Party Server signals that requested changes happened as<br>intended. Common use case is simply to inform the client that the request<br>was done, an ETag flag may also be used in addition to this.<br>EXAMPLE 16<br>Deleting a server subscription normally does not require a confirmation from<br>a subsystem, the response code signals the immediate success.<br>When writing datapoint values the server may get a confirmation<br>immediately, such as on very low latency subsystems or if the datapoint is<br>hosted at the server only. The response code signals the immediate<br>success.|

|Status|Title|Support|Details|
|---|---|---|---|
|400|Bad Request|M|-|
|401|Unauthorized|M|-|
|403|Forbidden|M|-|


-----

|Status|Title|Support|Details|
|---|---|---|---|
|404|Not Found|M|Server cannot find the requested resource (path).<br>NOTE 27<br>According to JSON API, the response code is used for a request to a not<br>existing resource.<br>EXAMPLE 17<br>• <br>The accessed URL resource path_/functions/{id}_ Endpoint does not hold<br>the resource item with {id}.<br>• <br>The accessed URL resource path_api/v200/functions_ Endpoint does<br>exist. Normally a client requests beforehand all api versions supported<br>by a server with their corresponding base path definitions (_api/v200_), by<br>reading it from the corresponding Endpoint “/.well-known/knx”.|
|405|Method Not<br>Allowed|M|-|
|406|Not Acceptable|M|-|
|408|Request Timeout|O|-|
|409|Conflict|M|-|
|412|Precondition<br>Failed|O|-|
|413|Request Entity<br>Too Large|O|-|
|414|URI Too Long|M|-|
|415|Unsupported<br>Content-Format|M|-|
|422|Unprocessable<br>Entity|M|-|
|429|Too Many<br>Requests|M|-|


835 1.2.1.6.4 Status Codes 5xx

836 5xx response status codes indicate that the server is incapable of performing the requested method.

837 **Table 6 – Response Codes 5xx**

|Status|Title|Support|Details|
|---|---|---|---|
|500|Internal Server<br>Error|M|-|
|501|Not Implemented|M|-|
|503|Service<br>Unavailable|M|-|
|504|Gateway Timeout|M|-|
|505|HTTP Version Not<br>Supported|M|-|


-----

838 1.2.1.6.5 Common Error Handling

839 In case a server encounters multiple problems, it may continue processing. For instance, a server may

840 process multiple attributes and then return multiple validation problems in a single response.

841 When a KNX IoT 3[rd] Party Server encounters multiple problems of the same error domain (such as 4xx)

842 for a single request, the most applicable HTTP error code SHALL be used in the response.

843 When a KNX IoT 3[rd] Party Server encounters multiple problem of a different error domain (such as 4xx

844 and 5xx) for a single request, the error code 500 with additional error details in an error object (see

845 clause 1.2.1.6.6) SHALL be used in the response.

846 NOTE 28 For instance, response status codes 400 Bad Request may be appropriate for multiple 4xx errors or

847 `500 Internal Server Error for multiple 5xx errors.`

848 Above listed points are derived from JSON API, see section Errors.

849 1.2.1.6.6 Error Objects

850 On any problem encountered during server operations while processing data, the server SHOULD return

851 error objects (together with a suitable HTTP response status code). By doing so, it is possible to supply

852 more details than just the status code itself, whether caused by the client or the server (i.e., both for [4xx]

853 or [5xx] error codes).

854 The following SHALL be supported by a KNX IoT 3[rd] Party Server.

855 1. A KNX IoT 3[rd] Party Server SHALL report errors with the top-level errors member including a non
856 **empty array of individual error objects as described in JSON API.**

857 2. A KNX IoT 3[rd] Party Server MAY include error details in its response as defined in [RFC7807] or as

858 defined in JSON API, section Error Objects.

859 The error object SHALL contain at least a title (as error object identifier) and status member

860 and SHOULD contain a detail member with additional error details specific to the request. In

861 addition, an error object MAY contain additional custom error members.

862 EXAMPLE 18 A JSON API errors member containing two (artificial) error objects with mandatory/optional

863 members and a customer error member authentication_uri.


864 `errors:`

865 `- title: Forbidden` `// mandatory`

866 `status: 403` `// mandatory`

867 `detail: Service requires other access rights` `// optional, JSON API`

868 `links: https://schema.knx.org/2020/api` `// optional, JSON API`

869 `authentication_uri: /oauth` `// optional, custom`

870 - title: Not Implemented

871 `status: 501`

872 `detail: Not implemented for this version of the API`

873 Stack traces SHALL NOT be part of an error object. Stack traces can leak sensitive information that

874 partners, and third parties are not allowed to receive and may disclose insights about vulnerabilities to

875 attackers.

876 **1.2.1.7** **Content Negotiation**

877 The content negotiation allows a future KNX IoT 3[rd] Party API to extent the API content or to support

878 different content type formats on the same API resource path and/or name structure.

879 The KNX IoT 3[rd] Party Server SHALL support a defined API content type and character encoding on the

880 KNX IoT 3rd Party API. For this the HTTP element Content-Type and the internet Media-Type and

881 `charset included in it are used.`

882 NOTE 29 The HTTP Content-Type defines a header field [RFC7231] that indicates the used HTTP payload

883 (Internet) Media-Type [RFC2046], formerly known as MIME Type.


-----

884 1.2.1.7.1 Content Type

885 1. A KNX IoT 3[rd] Party Server SHALL support the following Media-Type variants. Consequently the

886 message body data SHALL be complaint with the Media-Type indicated in the body.

887 `application/vnd.api+json` (normal req/resp Endpoint and error handling)

888 `application/json` (discovery responses and authorization responses)

889 `application/x-www-form-urlencoded (authorization requests)`

890 `application/pkcs7-mime` (certificate responses)

891 NOTE 30 All media-types are already registered at IANA.

892 2. A KNX IoT 3[rd] Party Server SHALL support the following default charset.

893 `utf-8` (for general content encoding)

894 The above-described Media-Type respectively the corresponding JSON format of JSON API requires to

895 use the above defined charset, for this see JSON, clause 8.1.

896 1.2.1.7.2 Content Type Handling

897 For the common handling of Media-Type and Content-Type in relation to client requests and server

898 response payload generation, please refer to JSON API, clause 4.2.

899 NOTE 31 JSON API details the handling of the MediaType as such and parameters disallowed here including

900 the corresponding error handling with error code 406/ 415.

901 1. A KNX IoT 3rd Party Server SHALL reply with error code 400 if a client uses the following invalid

902 request framing:

903 - no payload content included, but expected from the Endpoint (such as on a POST service)

904 - payload content included, but not expected from the Endpoint (such as on a GET service)

905 2. A KNX IoT 3[rd] Party Server SHALL send all data in its response documents only according to its

906 payload Media-Type, which SHALL be specified also in its Content-Type response header.

907 3. In addition to JSON API a KNX IoT 3rd Party Server SHALL respond with an error code 406 if a

908 client defines the following Accept header elements as part of its request:

909 - no Media-Type matches the one that is specified (this also covers a list as part of the request)

910 4. In addition to JSON API a KNX IoT 3rd Party Server SHALL reply with error code 415 if a client

911 defines the following Content-Type header elements as part of its request:

912 - a Media-Type other than specified for the Endpoint

913 - an empty or not present Media-Type

914 A KNX IoT 3rd Party Server SHALL respond with Media-Type application/vnd.api+json if a client

915 request specifies the Content-Type with the Media-Type application/json instead of a

916 presupposed/specified Media-Type application/vnd.api+json.

917 NOTE 32 The requirements under this point detail the error/ fallback handling in case of entity headers.

918 The presence of a Content-Type in a request is mostly the case on access methods with

919 additional data in the request, such as on POST/PUT/PATCH methods.


920 The above definition from §2 is used as a fallback in case a client requests a similar format that

921 the server can understand. To signal an error is not intended in such a case.

922 5. A KNX IoT 3[rd] Party Server SHALL respond with the default charset:

923 - for all data included in its response documents

924 - a part of Content-Type if it was requested by a client as part of the Accept-Charset; or if the

925 Accept-Charset requested by the client cannot be served (this is the better behavior rather than

926 stopping the communication with an explicit error).

927 6. A KNX IoT 3rd Party Server MAY reply with no charset included if no `Accept-Charset was`

928 defined in a client request.


-----

929 **1.2.2** **Client Requirement**

930 Clients in general, respectively KNX IoT 3[rd] Party Clients as such are not in scope of this specification

931 and full requirements cannot be drawn up for them. Client requirements that SHALL be respected can be

932 found in the JSON API section Content Negotiation.

933 If applicable all implicit client requirements not part of JSON API and of relevance for this specification

934 are addressed in this specification as an explicit requirement on the KNX IoT 3[rd] Party Server respectively

935 on the KNX IoT 3[rd] Party API.

936 **1.2.3** **Message Data Structure**

937 This section describes the structure of the KNX IoT 3[rd] Party API HTTP request/ response message body

938 data, identified by the Media-Type.

939 The first type listed in clause 1.2.1.7.1 is in line with JSON API, for this see JSON API specification,

940 clause Content Negotiation. Endpoints expressing the request/ response message body using this type

941 SHALL be compliant with the JSON API document structure, for this see JSON API specification, clause

942 _Document Structure._

943 At the top level of the message body a JSON root object is present, other JSON API members follows.

944 This specification details the usage of the JSON API members meta, data, attributes,

945 `relationships, links and typedescription.`

946 NOTE 33 JSON prohibits the use of BOM and requires the use of UTF-8 for character encoding, see JSON,

947 [clause 8](https://tools.ietf.org/html/rfc8259#section-8)

948 **1.2.3.1** **Member Names**

949 According to JSON, a member is a name/value pair, more precisely a <string name-separator value> pair,

950 [for this see JSON, clause 4.](https://tools.ietf.org/html/rfc8259#section-4)

951 EXAMPLE 19 Member “knx”:30, with name “knx” and value 30, first with quotes to denote left part as string, right

952 part as a number.

953 A member name used in a JSON document SHALL be treated as case sensitive by a KNX IoT 3[rd] Party

954 Server. This is in line with the JSON API conditions as described in section Member Names.

955 As also described for resource IDs in clause 1.1.8.4 member names SHALL NOT use any reserved

956 characters specified in [RFC3986]. This simplifies an easy mapping of member names from the KNX IoT

957 3[rd] Party API, possibly used as part of a resource path in URLs (see clause 1.2.4).

958 [The requirement above further restricts the JSON API conditions as described in clause 5.8.](https://jsonapi.org/format/#document-member-names)

959 **1.2.3.2** **Meta Object**

960 The JSON API meta member describes additional non-standard meta/processing information.

961 It can appear as a top-level JSON API member, but MAY also appear as member of other JSON API

962 members such as the data member or relationships member. The meta object SHALL NOT be

963 part of the attributes member.

964 1.2.3.2.1 Top Level Usage

965 In this specification the top-level usage of the meta member is used for the following purposes:

966 - Collection  information for a collection in the response

967 - No Data  information why no data is present in the response (no collection items/ single item)

968 Only a successful request with a response status code 2xx (see 1.2.1.6.2) SHALL respond with a top-level

969 `meta member in its response.`

970 Collection


-----

971 The number of returned items from a request to a resource collection MAY be limited with the help of

972 request query parameters (see clause 1.2.1.4).

973 For a resource path that responds a collection of items, the server SHALL add a meta member

974 containing a collection member that SHALL contain the following members.

975 - `number:` the number of pages skipped in the response

976 - `size:` the actual number of items returned in the response

977 - `total:` the total numbers of existing items in the whole collection

978 The request/ response behavior including the use of the default values SHALL be taken into account as

979 specified in clause 1.2.1.4.1.

980 No Data

981 For various reasons a response may not carry any primary data as part of the data member, requested

982 items are not available in the response payload. The usual case for this behavior is when calling the

983 relationship of a resource object. Some detailed reasons can be found in clause 1.2.3.3.2.

984 EXAMPLE 20 Asking (in a non-concurrent scenario where only one client is accessing the same server) a single

985 device with {deviceId} x, this will return the device item with {deviceId} x. Asking a device with

986 {deviceId} x its assembly location may fail to return a single location item with {locationId} y.

987 The reason can be detailed with an additional information.

988 - For a resource path that responds a single item, the server MAY add a meta member that contains

989 a nodata member

990 EXAMPLE 21


991 A GET request to retrieve the single (parent location) from the corresponding relationship parentLocation

992 would return the following top-level meta object:

993 `meta:`

994 `nodata: no parent location item available`

995 `data: null` `// a non-existing single parent location item, see JSON API`


996 - For a resource path that responds a collection of items, the server MAY add directly as part of the

997 mandatorily existing meta (and collection)member a nodata member.

998 EXAMPLE 22

999 A GET request to retrieve a collection of (child location) items from the corresponding relationship

1000 `childLocations would return the following top-level meta object:`


1001 `meta:`

1002 `nodata:` `no further child location items available`

1003 `collection:` `// mandatory for a collection`

1004 `offset: 0` `// offset, not given in request, use default value`

1005 `items:` `0` `// limit, not given in request, use default value`

1006 `total:` `0` `// zero collection items present`

1007 `data: []` `// an empty collection, no child location items, see JSON API`

1008 1.2.3.2.2 General Usage

1009 In this specification the meta member is used to add information on a specific request or response

1010 payload data that is indicating a single item. Some examples:

1011 - added callback information on a subscription request

1012 - subscription characteristics/type information on a responded subscription item

1013 - additional KNX manufacturer or KIM properties (how to express them as part of the meta member,

1014 refer to clause 1.2.3.3.5)

1015 - additional information of the type of a responded item

1016 - additional information of the node or installation as such


-----

1017 To describe the above-mentioned data in more detail, the meta object SHALL be used as part of the

1018 `data member, as shown in the below examples and the examples given in clause 1.2.5.3 and 1.2.5.4.`

1019 **Type Information**

1020 The following resource items MAY host additional type information, for this the @type member

1021 SHALL be used, it is defined as an array. The content is described in the KIM as a KIM Class that is

1022 expressed as an IRI. The indicated type can be the KIM Class name or a URN that MAY be also used

1023 standalone or added to the indicated type.

1024 NOTE 34 The KIM class name is the remainder of the IRI when removing the corresponding namespace prefix,

1025 [such as loc: from http://schema.knx.org/2020/ontology/loc#Floor](http://schema.knx.org/2020/ontology/loc#Floor)  Floor.

1026 - The KIM classes for datapoint, function and device resources, their corresponding namespace

1027 prefixes and the actual class names can be found in [03] respectively in the electronic file.

1028 The KIM classes for location resources, their corresponding namespace prefixes and the actual class

1029 names can be found in Table 10.

1030 Location

1031 Add for an individual location additional (location type) information in addition to the generic type

1032 “location”. The content SHALL be indicated with the most specific single type, e.g. ‘Room’ rather than

1033 ‘Space’[ 4)].

1034 `data:`

1035 `…`

1036 `meta:`

1037 `"@type": [loc:Room]`

1038 `// KIM class reference, part of the semantic export`

1039 `data:`

1040 `…`

1041 `meta:`

1042 `"@type": [Floor]`

1043 `// KIM class reference, part of the semantic export`

1044

1045 `data:`

1046 `…`

1047 `meta:`

1048 `"@type": [urn:knx.loc.room]`

1049 `// URN as type info of a KNXA standardized location (with ref. to IFC)`

1050

1051 `data:`

1052 `…`

1053 `meta:`

1054 `"@type": [loc:Room,urn:knx.loc.room]`

1055 `// KIM class reference and URN as type info`


1056 Datapoint

1057 Add for an individual IoT Datapoint additional (type) information to the generic type “datapoint”. It is

1058 RECOMMENDED that the content is indicated with the most specific[ 4)] single type or several types.

1059 `data:`

1060 `…`

1061 `meta:`

1062 `"@type": [dic:dpa.418.63]`

1063 `// KIM class reference of datapoint, part of the semantic export`

1064 `data:`

1065 `…`

1066 `meta:`

1067 `"@type": [urn:knx:dpa.418.63]`

4) Returning a common class type limits the possibility of a client to filter for specific resource types, clients are
using these type values as an input for filtering.


-----

1068 `// URN reference of datapoint`

1069 Function Type

1070 Add for an individual application function additional (function type) information to the generic type

1071 “function”. It is RECOMMENDED that the content is indicated with the most specific[ 4)] single type or

1072 several types.

1073 `data:`

1074 `…`

1075 `meta:`

1076 `"@type": [urn:knx:fct.switchingLight]`

1077 `// URN as type info of a KNXA standardized Application Function`


1078 Device Type

1079 Add for an individual device additional (device type) information to the generic type “device”. It is

1080 RECOMMENDED that the content is indicated with the most specific[ 4)] single type or several types.

1081 `data:`

1082 `…`

1083 `meta:`

1084 `"@type": [td:Thing,oms:WaterMeter]`

1085 `// TD class reference, part of the semantic export`

1086 `// individual (separate) device type reference, no relation to the KIM`

1087

1088 **Node Information**

1089 Add for the server additional (node) information using a URL and the typedescription member.

1090 `data:`

1091 `…`

1092 `meta:`

1093 `typedescription: https://schema.knx.org`

1094 `// absolute URL, reference to KNX web site`

1095

1096 **Installation Information**

1097 Add for the server additional (installation) information using a URL and the meta member.


1098 `data:`

1099 `…`

1100 `meta:`

1101 `vimar:relatedInstalltionLocation:` `/locations/7de4cf57-69dc-4dc7-90d7-334f5fc7e7ee`

1102 `// example of a relative URL reference to the root location element of this installation,`

1103 `// this allows to express any kind of location type such as a site or a building or room`


1104 **1.2.3.3** **Data Object**

1105 The JSON API data member describes the primary (resource) data. The KNX IoT 3[rd] Party API

1106 represents resources with a single resource object or an array of resource objects. In case no resource

1107 object can be expressed, an empty data member is expressed as specified in JSON API (null when

1108 addressing an individual item, an empty array when addressing a collection of items).

1109 It can appear as a top-level JSON API member, but MAY also appear as member of other JSON API

1110 members such as the relationships member.


-----

1111 - The support of resource object <id> and <type> is mandatory. Details on the <id> are described

1112 in clause 1.1.8.4.

1113 - Specific definitions for included members attributes, relationships, `links and meta`

1114 are defined in next clauses.

1115 1.2.3.3.1 attributes member

1116 - The JSON API attributes member defines useful properties of the resource object.

1117 NOTE 35 This allows for instance for each resource item a “detailed property view”, e.g. in a client.

1118 **General Handling**

1119 - The attributes member SHALL be part of the data member, properties can be hosted directly

1120 underneath.

1121 - In case no property are available as part of the attributes member, the attributes

1122 member SHALL NOT be present.

1123 - ONLY in case of a successful request, a KNX IoT 3rd Party Server SHALL respond at least one

1124 `attributes member in its response.`

1125 NOTE 36 A successful request is a defined 2xx response status code as described in clause 1.2.1.6.2. In

1126 case of errors, rules from clause 1.2.1.6.5 error handling apply.

1127 Content Handling

1128 The use of the JSON API member attributes SHALL be expressed with the corresponding API

1129 reference of clause Mapping directly below. To express other properties, see clause 1.2.3.3.5.

1130 - If an API reference member has no corresponding (name) value, it MAY be left out as part of the

1131 `attributes member or the (name) value MAY be expressed by the fixed JSON null value.`


1132 NOTE 37 The null value option allows at least to indicate to a (generic) client the presence of an entity/

1133 member that has no current value. Non generic clients, programmed with the knowledge of this

1134 API may still display optional members, even if the related value is missing.

1135 It is assumed that mandatorily required API reference members always have a value. Omitting

1136 the value is only possible for optional properties, unless this is prohibited explicitly in the

1137 specifications (e.g. see value/ timestamp on a datapoint). In the electronic document (see

1138 clause 1.1.4) this is indicated per applicable property.

1139 EXAMPLE 23 An unavailable MaC projectInstallationNumber, a non-specified minimum value for a

1140 datapoint or no present value for a KNX manufacturer specific property.


1141 1.2.3.3.1.1 Mapping

1142 For the resource path elements as specified in clause 1.2.5 a KNX IoT 3[rd] Party Server needs to express

1143 specific API reference members as listed in the below table as part of the attributes member.

1144 - Depending on the resource path, specific API reference members shall be expressed as part of the

1145 response. Consequently, such members shall be mandatorily supported by the KNX IoT 3[rd] Party.

1146 This is additionally annotated in the table below, optionally with a short explanation (for the

1147 definition of all elements see clause 1.1.1, second paragraph).

1148 - The API references refer content-wise to a corresponding KIM reference, for readability reasons the

1149 naming between API reference and KIM reference is decoupled.

1150 NOTE 38 The KIM reference name and the API reference name may be the same but may also differ.


-----

1151 **Table 7 – API Reference Member**

**Category** **Support** **Usage** **-**
**API reference** M/O Details **KIM reference**

`General` Used to describe several KIM data, used for the Installation instance data.

|Category<br>API reference|Support<br>M/O|Usage<br>Details|-<br>KIM reference|
|---|---|---|---|
|**`General`**||Used to describe several KIM data, used for the Installation instance data.|Used to describe several KIM data, used for the Installation instance data.|
|`title `|M <br>Used from nearly<br>all resources,<br>additionally in<br>case of an error.|The name of an element.<br>• Used for locations, datapoints or devices<br>and others.|`dct:title`|
|`comment `|O|A comment of an element.<br>• Used for locations, datapoints or devices<br>and others.<br>• Main purpose is to express specific<br>installer comments as part of the<br>Configuration in a MaC.|`:comment`|
|`description `|O|The description of an element.<br>• Used for locations, datapoints or devices<br>and others.|`dct:description`|
|`state `|O|A completion state of an Installation<br>element, expressed as part of the<br>Configuration in a MaC.|`:state`|
|`version`|O|A generic `version` object, hosting for<br>specific resource objects a string-based<br>version identifier.<br>It’s RECOMMENDED use is the value with<br>the same format as specified for the`api` <br>member (semantic versioning).|`- `|
|**`Node`**||Used to describe the KNX IoT 3rd Party Server node.|Used to describe the KNX IoT 3rd Party Server node.|
|`currentSubscri`<br>`ptions `|O|The current number of (remaining)<br>subscriptions a node supports (regardless<br>of an implemented WebSocket and/or<br>HTTP subscription).<br>`o` <br>The value is a dynamic value, it may be<br>different on every read request. A<br>client cannot rely on a cached value,<br>more than one client may subscribe for<br>IoT Datapoints on the same server.<br>`o` <br>The value shall be aligned to the<br>**maxSubscriptions** member, meaning it<br>cannot be larger.<br>`o` <br>It is of the type integer.<br>If implemented, it SHALL NOT be defined<br>with the null value option (see<br>clause 1.2.3.3.1).<br>It is RECOMMENDED to implement this<br>member in case the`maxSubscriptions` <br>member is implemented.|`- `|


-----

```
:firmware,:hardware

```
|Category<br>API reference|Support<br>M/O|Usage<br>Details|-<br>KIM reference|
|---|---|---|---|
|`maxSubscriptio`<br>`ns `|O|The maximal number of total subscriptions<br>a node supports at a time (regardless of an<br>implemented WebSocket and/or HTTP<br>subscription).<br>`o` <br>The value is a KNX manufacturer<br>specific, static value (including zero).<br>`o` <br>It Is of the type positive integer.<br>If implemented, it SHALL NOT be defined<br>with the null value option (see<br>clause 1.2.3.3.1).<br>It is RECOMMENDED to implement this<br>member in case the<br>`currentSubscriptions` member is<br>implemented.|`- `|
|`deviceOrServic`<br>`e `<br>`Name `|M|The entity type, providing this instance of<br>the KNX IoT 3rd Party API services. The type<br>can be freely chosen, preferably as string.|No corresponding KIM<br>concept available.|
|`vendorOrProvid`<br>`er `|M|The entity name, providing this instance of<br>the KNX IoT 3rd Party API services.<br>It is RECOMMENDED to choose the name<br>that corresponds to the KNX manufacturer<br>name, specified in [03] clause "KNX<br>Manufacturer Content"|`:manufacturer`|
|`server `|O|Version identifier of the KNX IoT 3rd Party<br>Server, hosting the Installation.  In case the<br>node is represented by a Device, the<br>version MAY correspond to a version of the<br>device.<br>The member SHALL be included as part of<br>the`version` object, see section_General_ <br>above.|`:firmware,:hardware`|
|**`Installation`**||Used to describe an Installation.|Used to describe an Installation.|
|`lastModified`|O|The last modification of the Installation in<br>the MaC (during Configuration).<br>xsd:DateTime, used with the format of<br>**timestamp**|`:lastModified`|
|`contractNumber `|O|A contract number of the Installation.|`:contractNumber`|
|`projectInstall`<br>`ationNumber `|O|A number expressed by the installer in the<br>MaC for this Installation.|`:projectInstallatio`<br>`nNumber`|


1152

|Datapoint|Col2|Used to describe a Datapoint.|Col4|
|---|---|---|---|
|`readable `|O|Specifies if the Datapoint can be read from<br>the API.<br>• <br>As such there is no relation to possible<br>applied r/w limitations of the<br>Datapoint as part of the Configuration.|<br>`:readable`|


-----

|Datapoint|Col2|Used to describe a Datapoint.|Col4|
|---|---|---|---|
|`writable `|O|Specifies if the Datapoint can be written<br>from the API.<br>• <br>As such there is no relation to possible<br>applied r/w limitations of the<br>Datapoint as part of the Configuration.|<br>`:writable`|
|`minimum `|O|Expresses an applicative minimal value for<br>a Datapoint.<br>• <br>This limitation does not necessarily<br>reflect any range of a standardized DPT<br>that is assigned to a Datapoint.<br>• <br>The_minimum_ SHOULD be treated as<br>greater or equal for a Datapoint value.|`jsonschema:minimum`|
|`maximum `|O|Expresses an applicative maximal value for<br>a Datapoint.<br>• <br>This limitation does not necessarily<br>reflect any range of a DPT that is<br>assigned to a Datapoint. <br>• <br>The_maximum_ SHOULD be treated as<br>lower or equal for a Datapoint value.|`jsonschema:maximum`|
|`resolution `|O|Expresses a (numbered, positive, non-zero)<br>resolution for a Datapoint value.<br>• <br>This resolution does not necessarily<br>reflect the same resolution of a<br>standardized DPT that is assigned to a<br>Datapoint. It is RECOMMENDED that<br>indicated resolution is a multiple of the<br>DPT resolution, otherwise the mapping<br>behavior to/from Runtime values<br>between different vendors may be<br>incompatible.<br>• <br>A client may assume that the to be<br>written 5) or displayed runtime values<br>are a multiple of the resolution.<br>• <br>In case of reading Datapoints from a<br>client the KNX IoT 3rd Party Server<br>needs to map 6) the values it returns<br>with the corresponding resolution.||
|`valueType `|M 7)|Expresses a general Datapoint type<br>information.|No corresponding KIM<br>concept available.|


5) For the error cases, please refer to clause 1.3.2.4.1.
6) It is a server decision on how to map such as round up/ down.
7) Used on reading of Datapoints.


-----

|Datapoint|Col2|Used to describe a Datapoint.|Col4|
|---|---|---|---|
|`unit `|M 7)|Expresses a unit of an Datapoint.<br>This is an OP relationship predicate to the<br>QUDT unit in the KIM.<br>The member value is specified as the QUDT<br>individual name with the corresponding<br>namespace prefix (for this see in [03]). See<br>examples further down.|`qudt:unit`|
|`enum`|M 7)|Expresses the possible values of an<br>Datapoint.<br>There is no direct relation of the API<br>reference to the KIM. The API data needs to<br>be derived from several KIM concepts,<br>mainly the DPT information.|No corresponding KIM<br>concept available.|
|`value `|M7|Host the Datapoint value. For the used<br>format see corresponding read/write<br>services.|No corresponding KIM<br>concept available.|
|`timestamp `|M7|Expresses a timestamp value. The used<br>format is according [RFC3339] section 5.6 ,<br>such as “2018-04-05T17:31:05Z”.|No corresponding KIM<br>concept available.|
|`datapointType `|O|Expresses an additional (DPT) type<br>information of a Datapoint.<br>This is an OP relationship predicate to the<br>KNX standardized DPTs in the KIM, defined<br>as KIM concepts with an assigned URN.<br>The API reference member is specified as<br>an array with the following values:<br>• <br>to the DPT corresponding KIM concept<br>name with its namespace prefix<br>• <br>to the DPT corresponding URN<br>For the actual values see in [03], some<br>examples see further down.|`:datapointType`|
|**`Device`**||Used to describe a Device.|Used to describe a Device.|
|`orderNumber`|O|The order number of the device.<br>This information is retrieved from the<br>Product information that is assigned to the<br>Device.|`:orderNumber`|
|`manufacturer`|O|The manufacturer of the device.<br>This information is retrieved from the<br>Product information that is assigned to the<br>Device.|`:manufacturer`|
|`lastModified`|O|xsd:DateTime, used with the format of<br>**timestamp**|`:lastModified`|
|`lastDownloaded`|O|xsd:DateTime, used with the format of <br>**timestamp**|`:lastDownloaded`|
|`serialNumber`|O|KNX Serial Number, as specified|`:serialNumber`|


-----

|Datapoint|Col2|Used to describe a Datapoint.|Col4|
|---|---|---|---|
|`hardware`|O|Hardware version identifier of a device. The<br>member SHALL be included as part of the<br>`version` object, see section General<br>above.|`:hardware`|
|`firmware`|O|Firmware version identifier of a device. The<br>member SHALL be included as part of the<br>`version` object, see section General<br>above.|`:firmware`|


1153

1154 1.2.3.3.2 relationships member

1155 The JSON API relationships member describes relations of a resource object to other resources

1156 specified with relationships defined in the KIM or by a KNX manufacturer. This enables for each

1157 Endpoint a “walk through navigation” through the resources per Endpoint without any pre-knowledge by

1158 the client of the API structure.

1159 General Handling

1160 - The relationships member SHALL be part of the data member, relationships can be hosted

1161 directly underneath.

1162 - The specific relationship member SHALL include a links member object or in case of member

1163 `subscriptionDatapoints also a data member object.`

1164 - In case no relation are available as part of the relationships member, the

1165 `relationships member SHALL NOT be expressed.`

1166 - Only in case of a successful request, a KNX IoT 3rd Party Server SHALL include a

1167 `relationships member in its response.`

1168 NOTE 39 A successful request is a defined 2xx response status code as described in clause 1.2.1.6.2. In case of

1169 errors, rules from clause 1.2.1.6.5 error handling apply.


-----

1170 Content Handling

1171 - The use of the JSON API member relationships SHALL be expressed with the corresponding

1172 API reference of clause Mapping directly below. For the corresponding relationships

1173 members, see clause 1.2.3.3.2.1.

1174 A KNX IoT 3[rd] Party Server SHALL always include at least one of the API references as part of the

1175 response that are defined for a specific resource type, even if some API references may not return a

1176 decent value, because they are:

1177 - not applicable at all when calling them (independent from the actual Installation configuration)

1178 - return no data when calling them (dependent from the actual Installation configuration)

1179 In such a case the KNX IoT 3rd Party Server SHALL respond with a status response code 200 with

1180 an empty data member, including an optional nodata member that is expressing the reason (see

1181 clause 1.2.3.2.1).

1182 This signals either that this API reference is not applicable at all for this call or that currently no data

1183 is available (which is a normal situation in any Installation).

1184 Some examples:

1185 No Data

1186 - a device that has no assigned assembly location in the Installation (but may get one later), when

1187 calling the API reference that is representing the "assembly" location (deviceLocation)

1188 - a location that has no assigned superordinate location in the Installation (since it is the root

1189 location), when calling the API reference that is representing the "parent" location

1190 (parentLocation), see EXAMPLE 21.

1191 - a location that has no assigned subordinate locations in the Installation (since it is the last

1192 location), when calling the API reference that is representing the "child" location

1193 (childLocations), see EXAMPLE 22.

1194 Not Applicable

1195 - the device in which an IoT Datapoint of type Function Point (GA) is hosted, when calling the API

1196 reference that is representing the "hosting" device (datapointDevice) with an {id} of a Function

1197 Point (GA)

1198 - the functions in which an IoT Datapoint of type Point (GO) is included, when calling the API

1199 reference that is representing the "datapoint" functions (datapointFunctions) with an {id} of a

1200 Point (GO)

1201 - This is a not intended use case, since an IoT function hosts in the first place only FPs and secondly

1202 per FP (large number of) linked Points (GOs).

1203 This would also hold true for the counterpart API reference functionDatapoints.

1204 - For the different IoT Datapoint types, see clause "Mapping of Terms" in [02]. As an extra note, in

1205 most situations the client is more interested in the resource attributes (such as a title/ description).

1206 EXAMPLE 24 A response to a request with no present data.

1207 `meta:`

1208 `nodata:` `this type of datapoint cannot be hosted in a function`

1209 `collection:` `// mandatory for a collection`

1210 `offset: 0` `// offset, use default value`

1211 `items:` `0` `// limit, use default value`

1212 `total:` `0` `// zero collection items present`

1213 `data: []` `// an empty collection, see JSON API`


-----

1214 1.2.3.3.2.1 Mapping

1215 For the resource path elements as specified in clause 1.2.5, a KNX IoT 3[rd] Party Server SHALL support to

1216 express at least the corresponding API reference members as listed in the below table as part of the

1217 `relationships member.`

1218 The API reference relationships member expressing a relationship to another resource requires

1219 uniqueness in its expressed meaning. Therefore, for each specific meaning an individual API reference

1220 member SHALL be specified, even if the addressed domain/range would be the same.

1221 EXAMPLE 25 The API reference member proxy or device have the same domain/ range (from a Datapoint to

1222 a Device). The first expresses the relation to the Device where a Datapoint is (physically) included,

1223 the latter expresses the proxy representing the access to the Datapoint of a Device. The use of the

1224 API reference device in both cases would not allow to explicitly express the relationship meaning

1225 of "proxying" a Datapoint at the API.

1226 The API references refer content-wise to a corresponding KIM reference, for readability reasons the

1227 naming between API reference and KIM reference is decoupled.

1228 NOTE 40 The KIM reference name and the API reference name may be the same but may also differ.

1229 **Table 8 – Relationships Member**

|Category<br>API reference|Usage<br>Details|-<br>KIM reference|
|---|---|---|
|**`Location`**|Used to describe a reference to a location.|Used to describe a reference to a location.|
|`childLocations`|API reference addressing a collection of all the<br>next lower child location**s**. <br>• expressed as a relative URL<br>• specified with resource path<br>/locations/{locationId}/childlocations<br>• Domain:  location<br>Range:<br>location<br>An individual location can host several child<br>locations at the same time.|`loc:hasLocation`|
|`parentLocation`|API reference addressing the next upper<br>parent location. <br>• expressed as a relative URL<br>• specified with resource path<br>/locations/{locationId}/parentlocation<br>• Domain: location<br>Range:<br>location<br>An individual location can only be hosted in<br>one single parent location.|`loc:isLocationOf`|
|`functionLocation`|API reference addressing the location,<br>containing a specific IoT Function. <br>• expressed as a relative URL<br>• specified with resource path<br>functions/{functionid}/location<br>• Domain:  function<br>Range:<br>location<br>An individual IoT Function is typically only<br>hosted in one single location that is of type as<br>described in clause 1.2.5.2.2.|`:isApplicationFunctionOf`|


-----

|Category<br>API reference|Usage<br>Details|-<br>KIM reference|
|---|---|---|
|`deviceLocation`|API reference addressing a location, containing<br>Devices. <br>• expressed as a relative URL<br>• specified with resource path<br>/devices/{deviceid}/location<br>• Domain:  device<br>Range:<br>location<br>An individual Device can only be hosted in one<br>single location that is of the type as described<br>in clause 1.2.5.2.2. The MaC ETS limits the<br>presence of a device to a subset of the before-<br>mentioned location types.<br>As a note, it is possible that a Device may not<br>be hosted in any location.|`1.` `loc:isEquipmentOf`<br>`2.` `knx:isPartOf,`<br>`loc:isEquipmentOf`<br>The first OP expresses a relation where<br>a device is directly part of a location (as<br>a note, a device is an equipment).<br>The second OP expresses a chain of<br>relations; where a device is part of an<br>equipment, while this (or the next<br>"upper") equipment is in the end part of<br>a location. Example is a device as part of<br>a (equipment) cabinet. The cabinet is<br>then the part of a (single) location.|
|**`Function`**|Used to describe a reference to an IoT Function.|Used to describe a reference to an IoT Function.|
|`locationFunction`<br>`s`|API reference addressing a collection of all IoT<br>Functions, included in a specific location. <br>• expressed as a relative URL<br>• specified with resource path<br>/locations/{locationId}/functions<br>• Domain:  location<br>Range:<br>functions<br>In the current MaC ETS an individual<br>Application Function can only be hosted in one<br>single location that is of the type as described<br>in clause 1.2.5.2.2.|`:hasApplicationFunction`|
|`datapointFunctio`<br>`ns`|API reference addressing a collection of all IoT<br>Function**s**, hosting a specific IoT Datapoint.<br>• expressed as a relative URL<br>• specified with resource path<br>/datapoints/{datapointId} 8)/functions<br>• Domain: datapoint<br>Range: functions<br>An individual IoT Datapoint can be hosted in<br>several IoT Functions.|`:isGroupedBy,`<br>`:isFunctionPointOf`|


8) For details on the {datapoindId} see notes of the corresponding resource path definition in clause 1.3.2.3.1.


-----

`deviceDatapoints` API reference addressing all IoT Datapoints, `td:hasInteractionAffordance`
included in a specific Device. The OP above expresses a direct

           - expressed as a relative URL relation from a Device to a Point, this is

           - specified with resource path achieved with an OP chain of :hosts,
/devices/{deviceId}/datapoints `:implements, :hasPoint.`

In case the device is a proxy also the

           - Domain: device

proxied DPs are returned with this

Range: datapoint

relationship.

9) For details on the {datapoindId} see notes of the corresponding resource path definition in clause 1.3.2.5.1.

|Category<br>API reference|Usage<br>Details|-<br>KIM reference|
|---|---|---|
|**`Device`**|Used to describe a reference to a Device.|Used to describe a reference to a Device.|
|`datapointDevice`|API reference addressing a Device, hosting a<br>specific IoT Datapoint.<br>• expressed as a relative URL<br>• specified with resource path<br>/datapoints/{datapointId} 9)/device<br>• Domain:  datapoint<br>Range:<br>device<br>An individual IoT Datapoint can only be hosted<br>in one single Device.|`td:isInteractionAffordanceO`<br>`f `<br>The OP above expresses a direct<br>relation from a Device to a Point, this is<br>achieved with an OP chain of<br>`:isApplicationProgramOf,`<br>`:isImplementedBy,`<br>`:isPointOf`.|
|`datapointProxy`|API reference addressing a gateway (which is<br>also a Device), hosting an IoT Datapoint as a<br>proxy.<br>• expressed as a relative URL <br>• specified with resource path<br>/datapoints/{datapointId}/proxies <br>• Domain:  datapoint<br>Range:<br>device<br>It is RECOMMENDED to express only one<br>resulting proxy for each individual IoT<br>Datapoint, moreover IoT Datapoints (Points)<br>from a Device SHOULD have only one single<br>proxy.<br>For more details, please refer to the definition<br>of`:hasProxy` in [03].|`1.` `td:isInteractionAffordan`<br>`ceOf, :hasProxy`<br>`2.` `groups:,`<br>`td:isInteractionAffordan`<br>`ceOf, :hasProxy`<br>The first OP expresses a relation where<br>an IoT Datapoint (point) is directly<br>related to a device. The device has a<br>proxy. <br>The second OP expresses a chain of<br>relations, where an IoT Datapoint<br>(Function Point) is linked with a point,<br>the latter is directly related to a device.<br>The device has a proxy.|
|**`Datapoint`**|Used to describe a reference to an IoT Datapoint.|Used to describe a reference to an IoT Datapoint.|
|`functionDatapoin`<br>`ts`|API reference addressing all IoT Datapoint**s**, <br>included in a specific IoT Function.<br>• expressed as a relative URL<br>• specified with resource path<br>/functions/{functionId}/datapoints<br>• Domain:  function<br>Range:<br>datapoint|`:groups`|
|`deviceDatapoints`|API reference addressing all IoT Datapoint**s**, <br>included in a specific Device.<br>• expressed as a relative URL<br>• specified with resource path<br>/devices/{deviceId}/datapoints<br>• Domain:  device<br>Range:<br>datapoint|`td:hasInteractionAffordance`<br>The OP above expresses a direct<br>relation from a Device to a Point, this is<br>achieved with an OP chain of`:hosts,`<br>`:implements, :hasPoint`. <br>In case the device is a proxyalso the<br>proxied DPs are returned with this<br>relationship.|


-----

|Category<br>API reference|Usage<br>Details|-<br>KIM reference|
|---|---|---|
|`subscriptionData`<br>`points`|**Usage #1**<br>API reference addressing - in relation with a<br>`links` member - a resource path of all IoT<br>Datapoints, included in a specific subscription.<br>• expressed as a relative URL <br>• specified with resource path<br>/subscriptions/{subscriptionId}/datapoints<br>• Domain:  subscription<br>Range:<br>datapoint <br>**Usage #2**<br>API reference addressing - in relation with a<br>`data` member – a set of resource items that<br>can be subscribed upon, see 1.2.5.6.4.5. <br>• expressed as a set of resource items <br>• specified as an array <br>• Domain: n/a<br>Range:<br>n/a|No corresponding concept in KIM<br>available.|
|`timeseriesDatapo`<br>`int`|API reference addressing the IoT Datapoint, to<br>which a specific time series item is related.<br>• expressed as a relative URL<br>• specified with resource path<br>/timeseries/{timeseriesId}/datapoint<br>• Domain:  timeseries<br>Range:<br>datapoint|No corresponding concept in KIM<br>available.|
|**`Subscription`**|Used to describe a reference to a subscription.|Used to describe a reference to a subscription.|
|`datapointSubscri`<br>`ptions`|API reference addressing all subscriptions, in<br>which a specific Datapoint is included.<br>• expressed as a relative URL <br>• specified with resource path<br>/datapoints/{datapointId}/subscriptions<br>• Domain:  datapoint<br>Range:<br>subscription|No corresponding concept in KIM<br>available.|


1230


-----

1231 1.2.3.3.3 links member

1232 The JSON API links member represents links.

1233 General Handling

1234 - The links member can appear as a top-level JSON API member, but MAY also appear as member

1235 of other JSON API members, such as the relationships member.

1236 - The links member SHALL include at least a self member (a link to the originator of this

1237 “primary resource data”) or related member (a link from this “primary resource data” to other

1238 resources). It represents a link as:

1239 - a simple URL;

1240 - an object including a URL and an optional meta member. The URL SHALL be expressed with

1241 an href member.

1242 EXAMPLE 26

1243 - A (top-level) self member points to the originator that hosts the data object.

1244 "links": {"self": "/functions/{functionId}"}

1245 // rel. URL to the originating requester (itself) (an Application Function)

1246 - A (non-top-level) self and related member points from primary data to a resource relationship.

1247 "relationships": {

1248 "isApplicationFunctionOf":{

1249 {"links":

1250 {"self":"/functions/{functionId}/relationships/location",

1251 {"related": "/functions/{functionId}}/location"}

1252 }  // rel. URL of a function to its location (place of action)

1253 }

1254 - As a note, if a self member is expressed as part of a relationships member (see example

1255 directly above), then the URL structure on the KNX IoT 3[rd] Party Server SHALL support fetching

1256 resource path definitions including the path /relationships/ as part of the endpoint. For this see

1257 JSON API, clause "Fetching Relationships". In this specification no such relation is currently

1258 specified.

1259 1.2.3.3.4 typedescription member

1260 - The (non JSON API) typedescription member represents a generic link, in this specification it

1261 is hosting additional (external) information for several types of resources.

1262 **General Handling**

1263 - The typedescription member SHALL NOT appear as a top-level JSON API member or as

1264 part of the relationships member. It MAY appear as part of the meta member.

1265 NOTE 41 According JSON API a resource object shall be represented with a type/id. Only between such

1266 classified objects it is possible to navigate with an expressed relationships (normally those

1267 objects that are part of the same server but not necessarily on the same API). A link to any

1268 externally hosted data such as a web site is therefore expressed with the typedescription

1269 member.

1270 - The typedescription member SHALL be expressed with an URL that hosts potentially

1271 human readable data.

1272 Examples can be found in clause 1.2.5.1.1 or in the electronic document (clause 1.1.4).


-----

1273 1.2.3.3.5 Expressing additional content

1274 - It is possible to express additional properties as part of a response payload such as from the KIM (for

1275 a Point, Datapoint, FP, …) or from a KNX manufacturer. For this is RECOMMENDED to use the

1276 `attribute member, however also the meta member can be used (see at node Endpoint and cases`

1277 described below).

1278 - Manufacturer specific or KIM properties that express any kind of JSON API links or relationships

1279 members SHALL NOT be expressed as part of the attribute member (see JSON API). If needed in

1280 this format they SHOULD be expressed as part of the `meta` member (see clause 1.2.3.2.2).

1281 - Manufacturer specific or KIM properties may express different concepts with the same name using

1282 different namespace prefixes, this holds true for individuals but also object properties. Examples

1283 from the KIM are location individuals (tags) and location object properties with an explicit location

1284 namespace prefix. Expressing any additional content with a namespace prefix ensures unambiguity

1285 when using KIM concepts combined with different vendor concepts. If used, the namespace prefix

1286 SHALL be expressed as the first part of the member name/value[ 10)].

1287 For more examples than the ones described below, please refer to the electronic document (see clause

1288 1.1.4).

1289 KIM Properties

1290 These properties do not have an API reference defined explicitly in this specification. KIM properties or

1291 relations are always an IRI, following definitions SHALL be supported.

1292 - The member name is represented with the namespace prefix and name. Expressing the member

1293 **name as a full IRI is not RECOMMENDED.**

1294 - The member value is expressed with the namespace prefix. In case of KIM values the namespace

1295 prefix is predefined, for project defined values it is MaC specific (such as a literal or a project specific

1296 IRI). Expressing the member value as a full IRI is OPTIONAL.

1297 EXAMPLE 27

1298 - Data Properties

1299 KIM reference knx:groupAddress or knx:securityMode in case of a Datapoint

1300 (Function Point)

1301 a) `knx:groupAddress:` `1234`

1302 //KIM member as ns:name, member value with a MaC project specific number

1303 b) `knx:securityMode:` `Auto`

1304 //KIM member as ns:name, member value as a MaC project specific string

1305 - Object Properties

1306 OPs are used to refer to other concepts that are defined with a set of data properties and/or other OPs.

1307 Not returning the corresponding resource object with its elements as described in the clause

1308 “Resource Objects” is not beneficial : it is NOT RECOMMENDED to express OPs as part of the

1309 response only with an IRI. Some examples of such responses only containing IRIs are described

1310 directly underneath.

10) The usual ":" as last part of the namespace prefix is specified as a reserved character in JSON API.


-----

1311 KIM reference knx:hasQualityKind in case of a Datapoint

1312 a) `knx:hasQualityKind:` `project:3a19fee4-ba8a-4fd2-ba10-42b7f40f1234`

1313 // KIM member as ns:name, member value with a MaC project specific namespace prefix

1314 // the example UUID is meaningless for a machine, even if the export would replace it // with a

1315 human readable name

1316 b) `knx:hasQualityKind:` `http://project.knx.org/0800999666#3a19fee4-ba8a-4fd2-ba10-`

1317 `42b7f40f1234`

1318 // KIM member as ns:name, member value as a MaC project specific full IRI

1319 // the example UUID is meaningless for a machine, even if the export would replace it // with a

1320 human readable name

1321 **KNX Manufacturer Properties**

1322 **These properties do not have an API reference** **defined** **explicitly in this specification.** Custom

1323 manufacturer properties or relations may be IRIs or name/ value pairs that can be freely chosen. In case of

1324 an IRI the following definitions are RECOMMENDED to be supported.

1325 - The member name is represented with the member defined namespace prefix and name. The name

1326 can be freely chosen, it is RECOMMENDED to respect the definitions for the name/namespace prefix

1327 such as the entire length, described in [03] clause "KNX Manufacturer Content". Expressing the

1328 member name as a full IRI is not RECOMMENDED.

1329 - The member value is expressed with a corresponding namespace prefix. In case of vendor values, the

1330 namespace prefix is predefined as specified above, for projects defined values it is MaC specific.

1331 Expressing the member value as a full IRI is OPTIONAL.

1332 EXAMPLE 28 Expressing a simple member name/ value pair.


1333 - `abb:myOwnSceneControl: v20`

1334 `// vendor member with ns:name, member value with no ns (a literal or resolved as local ns)`

1335 - `myOwnSceneControl: v20`

1336 `// vendor member without ns:name,` `member value same as above`


1337 - `abb:myOwnSceneControl: abb:v20`

1338 `// vendor member with ns:name, member value with an ABB corresponding namespace prefix`

1339 - `abb:myOwnSceneControl: abb-mac:v21`

1340 `// vendor member with ns:name, member value with a MaC project specific namespace prefix`


1341 - `abb:myOwnSceneControl: http://iot.abb.com/project#v21`

1342 `// vendor member with ns:name,` `member value as a MaC project specific full IRI`

1343 EXAMPLE 29 Expressing a relation requires as a source an actual resource object (see note in clause 1.2.3.3.2)

1344 that is expressing an (absolute or relative) URL. The URL may also refer to a resource path

1345 specified in this specification (see second example below).


1346 - `gira:nodeIsLocatedAt: https://gira.de/iot/knx/node`

1347 `// relationship from a node resource object to an extra node/server link`

1348 - `abb:relation2LocationHostingTheAlertFunction: /functions/{id}/location`

1349 `// relationship from a function resource object to a location (relative URL)`


1350 - `abb:productCatalogReference: https://new.abb.com/control-rooms`

1351 `// relationship from a device resource object to a web page (absolute URL)`

1352 **Resource Objects**

1353 Resource objects without an API reference defined explicitly in this specification.

1354 - The resource objects MAY be retrieved from the Semantic Export or are manufacturer specific.

1355 - The resource objects SHALL be expressed as JSON object, it includes the members as name/

1356 value pairs, specified above for KIM / KNX manufacturer properties.

1357 If per member multiple values occur, then this shall be expressed as an array (members should

1358 be unique per object, strongly advised in JSON RFC, section [4). The possible occurrence of the](https://datatracker.ietf.org/doc/html/rfc7159#section-4)

1359 values can be found in [03] clause Tag Cardinalities, an example is shown below.


-----

1360 EXAMPLE 30 Expressing a simple JSON object (of a datapoint) from the Semantic Export, including a KNX

1361 manufacturer member.

1362 `knx:actsOnQualityKind:` `// OP reference of this datapoint…`

1363 `- "@type": knx:QualityKind` `// … to a Quality Kind object, with…`

1364 `knx:hasPhenomenonType:` `dic-tag:air` `// tag Phenomenon, KIM individual`

1365 `knx:hasQuantityKind:` `quantitykind:Temperature` `// tag Quantity, QUDT individual`

1366 `knx:hasLocality:`

1367 `- dic-tag: dic-tag:campus` `// tag Locality, KIM individual`

1368 `- dic-tag: dic-tag:outside` `// tag Locality, KIM individual`

1369 `abb:datapointResponsibility: abb-mac:user` `// add. KNX manuf. name/string value pair`

1370 **1.2.4** **URL Structure**

1371 To address a KNX IoT 3[rd] Party Server, the URL SHALL be structured according to the corresponding

1372 [RFC3986].

1373 Addressing a vendor specific URLs as part of the KNX IoT 3[rd] Party Server is out of scope and not

1374 described in this specification. The following (simplified) URL principle lays down the parts used in this

1375 specification.

1376 {scheme} + “://” + {authority} + {path} + {query}{#fragment}

1377 The URL SHALL start with {scheme} https[11]. The {authority} part (together with/without prefixed “//:”)

1378 depends on the network environment of the KNX IoT 3[rd] Party Server.

1379 **LAN environment**

1380 In case a KNX IoT 3[rd] Party Server is accessed from within a LAN with no local name server, the

1381 {authority} is the IP address of the KNX IoT 3[rd] Party Server. Using a host name (full or part of the

1382 FQDN) is OPTIONAL.

1383 **WAN environment**

1384 In case a KNX IoT 3[rd] Party Server is accessed from the WAN, the {authority} is the FQDN name of the

1385 KNX IoT 3[rd] Party Server. Using an IP address is NOT RECOMMENDED.

1386 For {path} the URL SHALL continue with the base member value of the resource /.well-known/knx.

1387 The {path} allows to express the following subjects:

1388 - to address a specific API version

1389 - to further detail the requested resources (e.g., a user Installation as part of a cloud database)

1390 The {path} is concatenated with the resource path defined in 1.2.5.

1391 For {query} the URL is completed with OPTIONAL query parameters as defined in 1.2.1.4. The

1392 {fragment} SHALL NOT be used as part of the URL.

1393 [EXAMPLE 31 The URL https://gateway.knx.local/knx/api/v1/locations?page[number]=1&page[size]=5 defines the](https://gateway.knx.local/knx/api/v1/locations?page%5bnumber%5d=1&page%5bsize%5d=5)

1394 {authority} as gateway.knx.local with the base element /knx/api/v1, together with the resource part

1395 of the path locations and the query parameters page[number]=1 and page[size]=5.

1396 **1.2.5** **Resource Path Definitions**

1397 The resource path definitions allow to access items of an Installation such as location items, IoT

1398 Functions or IoT Datapoints, all of them based on the KIM as specified in [03].

1399 The Semantic Export includes the required data to provide them on the KNX IoT 3[rd] Party API.

1400 For the relations of the terms used in next clauses (such as of a GA to a Function Point), see clause

1401 "Mapping of Terms" in [02].

11 The scheme definition expresses secure HTTP connection to the server, examples in this specification MAY use
the scheme HTTP, not expressing any client/server security requirements.


-----

1402 The KNX IoT 3rd Party Server SHALL support the following resource path definitions with their

1403 corresponding access methods (see 1.2.1.2) taking into account the mandatory/optional support

1404 indications as given in column “Support” below (for the abbreviations used in the column see in [02]).

1405 - Category used to combine similar Endpoints together in a category

1406 - Id used to express a specific endpoint functionality, for details see at /.well-known/knx

1407 **Table 9 – URL Path Definitions**

Category Access Resource Path Support Id Details

Method

authorization `POST /oauth/access` M 1.2.5.8

`GET` `/.well-known/idevid` O

`GET` `/.well-known/ldevid` O[ 12)]

datapoint `GET` `/datapoints` M datapoints 1.2.5.4

`GET` `/datapoints/{datapointId}` M

`PUT` `/datapoints/values` M

`GET` `/functions/{functionId}/datapoints` M

`GET` `/devices/{deviceId}/datapoints` O

`GET` `/timeseries/{timeseriesId}/datapoint` O

`GET` `/subscriptions/{subscriptionId}/datapoints` O

device `GET` `/devices` O devices 1.2.5.5

`GET` `/devices/{deviceId}` O

`GET` `/locations/{locationId}/devices` O

`GET` `/datapoints/{datapointId}/proxies` O

`GET` `/datapoints/{datapointId}/device` O

function `GET` `/functions` M functions 1.2.5.3

`GET` `/functions/{functionId}` M

`GET` `/locations/{locationId}/functions` M

`GET` `/datapoints/{datapointId}/functions` M

information `GET` `/.well-known/knx` M 0

`GET` `/node` M node

`GET` `/installations` M installations

`GET` `/installations/{installationId}` M

location `GET` `/sites` M sites

`GET` `/locations` M locations

`GET` `/locations/{locationId}` M

`GET` `/devices/{deviceId}/location` O

`GET` `/functions/{functionId}/location` M

`GET` `/locations/{locationId}/parentlocation` M

`GET` `/locations/{locationId}/childlocations` M

subscription `GET` `/subscriptions` O[ 13)] subscriptions
```
            GET /subscriptions/{subscriptionId}
            GET /datapoints/{datapointId}/subscriptions
           DELETE /subscriptions/{subscriptionId}

```
12) Depending on the used public/local environment, one of the endpoints needs to be implemented, for this see
clause 1.3.2.8.2.5.
13) Please refer to clause 1.3.2.6.1 for additional requirements on further implementation details.

|Category|Access<br>Method|Resource Path|Support|Id|Details|
|---|---|---|---|---|---|
|authorization|<br>`POST`|` /oauth/access`|M||1.2.5.8|
|authorization|`GET`|`/.well-known/idevid`|O|||
|authorization|`GET`|`/.well-known/ldevid`|O 12)|||
|datapoint|`GET`|`/datapoints`|M|datapoints|1.2.5.4|
|datapoint|`GET`|`/datapoints/{datapointId}`|M|||
|datapoint|`PUT`|`/datapoints/values`|M|||
|datapoint|`GET`|`/functions/{functionId}/datapoints`|M|||
|datapoint|`GET`|`/devices/{deviceId}/datapoints`|O|||
|datapoint|`GET`|`/timeseries/{timeseriesId}/datapoint`|O|||
|datapoint|`GET`|`/subscriptions/{subscriptionId}/datapoints`|<br>O|||
|device|`GET`|`/devices`|O|devices|1.2.5.5|
|device|`GET`|`/devices/{deviceId}`|O|||
|device|`GET`|`/locations/{locationId}/devices`|O|||
|device|`GET`|`/datapoints/{datapointId}/proxies`|O|||
|device|`GET`|`/datapoints/{datapointId}/device`|O|||
|function|`GET`|`/functions`|M|functions|1.2.5.3|
|function|`GET`|`/functions/{functionId}`|M|||
|function|`GET`|`/locations/{locationId}/functions`|M|||
|function|`GET`|`/datapoints/{datapointId}/functions`|M|||
|information|`GET`|`/.well-known/knx`|M||0|
|information|`GET`|`/node`|M|node||
|information|`GET`|`/installations`|M|installations||
|information|`GET`|`/installations/{installationId}`|M|||
|location|`GET`|`/sites`|M|sites||
|location|`GET`|`/locations`|M|locations||
|location|`GET`|`/locations/{locationId}`|M|||
|location|`GET`|`/devices/{deviceId}/location`|O|||
|location|`GET`|`/functions/{functionId}/location`|M|||
|location|`GET`|`/locations/{locationId}/parentlocation`|M|||
|location|`GET`|`/locations/{locationId}/childlocations`|M|||
|subscription|`GET`|`/subscriptions`|O 13)|subscriptions|HTTP<br>Callback|
|subscription|`GET`|`/subscriptions/{subscriptionId}`|`/subscriptions/{subscriptionId}`|||
|subscription|`GET`|`/datapoints/{datapointId}/subscriptions`|`/datapoints/{datapointId}/subscriptions`|||
|subscription|`DELETE`|` /subscriptions/{subscriptionId}`|` /subscriptions/{subscriptionId}`|||


-----

|Category|Access<br>Method|Resource Path|Support|Id|Details|
|---|---|---|---|---|---|
||`PATCH`|`/subscriptions/{subscriptionId}`||||
||`POST`|`/subscriptions`|`/subscriptions`|||
||`GET`|`/messaging/ws`|`/messaging/ws`||WebSocket|
|timeseries|`GET`|`/datapoints/{datapointId}/timeseries`|O|||
|timeseries|`GET`|`/timeseries/{timeseriesId}`|`/timeseries/{timeseriesId}`|||


1408

1409 **1.2.5.1** **Information**

1410 The resource path category information with its defined access methods allows a KNX IoT 3[rd] Party

1411 Client to retrieve Installations information, part of the KNX IoT API Server, node information about the

1412 server itself and API versioning information. Moreover, also certificate information can be retrieved.

1413 1.2.5.1.1 /.well-known

1414 Get KNX IoT 3[rd] Party API version information and relationship information to identify the API entry

1415 point for the installation or the server node.

1416 The defined access methods allow only to read resources.

1417 1.2.5.1.1.1 Services

1418 It is possible to retrieve the following items.

1419 GET /.well-known/knx

1420 Get KNX IoT 3rd Party API version information.

1421 In contrast to the specified URL structure in clause 1.2.4 this Endpoint SHALL be used only with the

1422 following URL parts.

1423 {scheme} + “://” + {authority} + “/.well-known/knx”

1424 The Content-Type for this Endpoint is specified with application/json, to be independent from

1425 any API specific message payload data format as imposed by JSON API.

1426 NOTE 42 The resource path defines a specific structure

1427 for the response data, not demanding the CoRE Link Format from [RFC5988].

1428 The basic response information contains the following members, expressed in JSON.

1429 1. `api`  the most recent supported API version

1430 2. `supportedversions`  all other supported API versions

1431 `3.` `links`  entry points to root entry nodes of the API

1432 4. `context`  IRIs used in the API and their namespace prefix definitions

1433 KNX manufacturer specific members are optional, they SHALL be added as an individual member

1434 representing a single resource object in addition to the (top-level) members defined above (embedding the

1435 content as part of one of the defined members is not allowed). The defined members are explained in

1436 more detail below.


-----

1437 **API Version Information/ Resource Addressing**

1438 1. The api member SHALL be supported, it contains a single resource object, expressing the most

1439 recent API version, supported by a KNX IoT 3[rd] Party Server.


1440 2. The supportedversions member MAY be supported, it contains an array of resource objects,

1441 expressing all other (older) API versions, supported by a KNX IoT 3[rd] Party Server. It may contain

1442 only a single resource object or none, in the latter case respectively an empty array

1443 ("supportedversions":[]). It is not required that KNX IoT 3rd Party Server supports any

1444 older version.

1445 Each API version resource object expressed by the api and supportedversions member SHALL

1446 contain a version and base member.

1447 base member

1448 1. The base member is part of the URL (see clause 1.2.4), it is NOT RECOMMENDED to leave it

1449 empty. Expressing a URI-Template is OPTIONAL, for this see next clause.

1450 - The KNX IoT 3rd Party API SHALL be versioned with the base member value.

1451 NOTE 43 The base [is related to the TD "base" item, for this see https://www.w3.org/TR/wot-thing-](https://www.w3.org/TR/wot-thing-description/#thing)

1452 _[description/#thing. A KNX IoT 3rd Party Client shall respect it when requesting content from a](https://www.w3.org/TR/wot-thing-description/#thing)_

1453 specific API version and/or resources

1454 2. The KNX IoT 3rd Party API MAY use the base member to further address the requested resources,

1455 for this see examples below. It is up to a vendor how the additional URL part is assigned, such as per

1456 user individually logged in.

1457 version member

1458 - The expressed version info is derived from the guidelines specified for the semantic versioning

1459 [(https://semver.org/spec/v2.0.0.html). The version member value SHALL contain a](https://semver.org/spec/v2.0.0.html)

1460 _major.minor.patch numbering scheme, represented as a string. The major number with value 0_

1461 SHALL NOT be used, for the minor/patch number it is RECOMMENDED to start with value 0.

1462 - On any compatible change with the current KNX IoT 3[rd] Party API, the major number remains,

1463 depending on the performed API change the minor or patch number SHALL be incremented. The

1464 `base` member value SHALL not be changed.

1465 NOTE 44 A compatible change does not influence any mandatory format or remove/ change any

1466 mandatory content such as changing member names (see clause 1.2.3.1).

1467 - On any incompatible change with the current KNX IoT 3[rd] Party API, the new major number

1468 SHALL be incremented. The new minor/patch number follows the recommendation from above. In

1469 addition, the new `base` member value SHALL be different to any of the existing `base` member

1470 values of any existing API version.

1471 NOTE 45 An incremented number is a larger number, but not necessarily the next one.

1472 A KNX IoT 3[rd] Party Server SHALL provide all its supported KNX IoT 3[rd] Party API versions on this

1473 Endpoint (that are expressed as part of the api and supportedversions member).

1474 The support of subsequent client requests to different versions of the API on a KNX IoT 3[rd] Party API

1475 Server is RECOMMENDED.

1476 NOTE 46 It is not possible for KNX IoT 3[rd] Party Clients to request content from more than one API version at the

1477 same time, different API versions use different absolute URLs, distinguished by the URL base

1478 member.

1479 **Links Information**


1480 The links member MAY be supported, it contains an array of resource objects, expressing Endpoints

1481 from the KNX IoT 3[rd] Party API, additionally from a KNX manufacturer.

1482 A resource object is expressed with the following members, KNX manufacturer specific members may

1483 also be included, they are vendor specific and not defined here.


-----

1484 - `href:` A mandatory member expressing a relative URL. The absolute URL SHALL be

1485 constructed together with the base member value of the intended API

1486 version. Expressing a URI-Template is possible, for this see next clause.

1487 - `typedescription: An optional member expressing an URL that hosts potentially human`

1488 readable data.

1489 - `contenttype:` A mandatory member expressing the Content-Type of the endpoint.

1490 - `rel:` An optional member with a similar meaning as the rel attribute on HTML.

1491 It is used to express a machine-readable meaning/type of the (href) link.

1492 To define a standardized meaning the API resource path definitions in

1493 clause 1.2.5 define some values that can be used together with the rel

1494 member. Other rel member values are vendor specific.

1495 EXAMPLE 32 With "rel=locations" predefined in this specification a

1496 client is able to identify the (href) link

1497 "xyz/{placeholder1}/locations" as the resource path

1498 standardized in this specification from where to get all

1499 location items of an Installation.

1500 **Context Information**

1501 The context member MAY be supported, it contains an array of resource objects, expressing in the

1502 API used IRIs and their corresponding namespace prefixes from the KIM, additionally also from a KNX

1503 manufacturer. They are mainly used when filtering with query parameters and as part of responded

1504 resource items. If expressed, each context member SHALL contain a prefix and iri member:

1505 - `prefix:` Namespace prefix as used in the API (excluding the ":").

1506 - `iri:` IRI/URL of the namespace prefix.

1507 1.2.5.1.1.2 URI Templating

1508 The KNX IoT 3rd Party API MAY use the base and href member with a URI-Template.

1509 In case of a URI-Template a URL contains placeholder definitions, the actual URL shall be

1510 resolved/expanded before it can be used. This specification does not mandate to use a specific URI
1511 _[Template expression as described in the [RFC6570], section 2.2.](https://datatracker.ietf.org/doc/html/rfc6570#section-2.2)_

1512 A URI-Template expression with a variable-list containing (varspec) variables requires for each variable

1513 a corresponding reference to a list of the actual values. The RFC does not specify how to resolve this in

1514 detail (see RFC, template processor), this is subject to a KNX IoT 3rd Party Client such as per user

1515 individually logged in. In this specification a framework is specified how to define the placeholder data,

1516 for this the following definitions SHALL apply:

1517 - For each base/href member with a variable-list a corresponding templates member SHALL be

1518 defined (as a sibling) on the same resource object.

1519 - For each varspec variable a corresponding member with the same (varspec) name SHALL be defined

1520 as part of the templates member.

1521 NOTE 47 The meaning of a varspec variable as such is unspecified, it may represent a "user id" or "installation

1522 id". The meaning may be resolved with the below-described rel member option and/or the

1523 `description member, or with an vendor individually programmed KNX IoT 3rd Party Client.`

1524 NOTE 48 The templates member is only applicable on its corresponding base/href member, the members are

1525 defined in a local scope. Hence a _varspec member name can be reused on other_ `base/href members.`


1526 - Each varspec member SHALL contain a values member and MAY contain a description

1527 member.


-----

1528 The values member is expressed as an array, holding the possible (placeholder) values. The array

1529 MAY also be empty, it is subject to the KNX IoT 3[rd] Party Client to provide values for creating a valid

1530 URL, such as with additional user input.

1531 NOTE 49 The meaning of an empty array is unspecified for the KNX IoT 3[rd] Party Server. Moreover, a generic

1532 client cannot resolve this specific kind of templating to generate a valid URL.

1533 In case the varspec member is defined together with the base member, a rel member MAY be

1534 defined in addition as part of the varspec member.

1535 - It is used to express a machine-readable relation from a specific varspec member to a present links

1536 member, to do this both members need to specify the same rel member value (for this see links

1537 member).

1538 - By applying different varspec member values to the corresponding URI-Template (placeholder) the

1539 (base path) URL can be resolved. Together with the (rel related) links member a resulting URL

1540 can be constructed. With this, specific resources can be addressed, their properties can be read.

1541 1.2.5.1.1.3 Examples

1542 - A snippet of Endpoint data hosting all defined (top-level) members, additionally one KNX

1543 manufacturer member.

1544 `api:`

1545 `version: 2.0.0` `// most recent API version`

1546 `base: /knx/api/v2` `// URL version part`

1547 `supportedversions:` `// optionally supported versions`

1548 `- version: 1.1.0` `// 1.1.0 and 1.0.5 are compatible`

1549 `base: /knx/api/v1`

1550 `- version: 1.0.5`

1551 `base: /knx/api/v1`

1552 `links:`

1553 `- href: /installations` `// rel. URL to an API EP`

1554 `contenttype:` `application/vnd.api+json` `// content type format`

1555 `- href: /node` `// rel. URL to an API EP`

1556 `contenttype: application/vnd.api+json` `// content type format`

1557 `typedescription: http://schema.knx.org` `// abs. URL to the add. information`

1558 `- href: /vendor` `// rel. URL to a vendor EP`

1559 `contenttype: application/vnd.api+json` `// content type format`

1560 `context:`

1561 `- prefix: knx` `// KIM namespace prefix used in API, w/o :`

1562 `iri: http://schema.knx.org/2020/ontology/knx#`

1563 `// corresponding URL/IRI`

1564 `- prefix: loc` `// KIM namespace prefix used in API, w/o :`

1565 `iri: http://schema.knx.org/2020/ontology/loc#`

1566 `// corresponding URL/IRI`

1567 `- …`

1568 `projects:` `// a KNX manufacturer (array) member`


-----

1569 `- projectLink: /sites/123456` `// rel. URL to a specific site`

1570 `user: John Deere` `// an example username`

1571 `premiseURL: https://cloud.vimar/JohnDeere` `// an example URL, related to this user`

1572 - A snippet of Endpoint data hosting for the API version 2.0.0 the corresponding path reference

1573 _/knx/api/v2/cloud, including a path reference to further address resources for the specific installation_
1574 _7de4cf5769dc._

1575 `api:`

1576 `version: 2.0.0` `// most recent API version`

1577 `base: /knx/api/v2/cloud/7de4cf5769dc` `// URL version part + installation ref.`

1578 - A snippet of Endpoint data hosting for the API version 2.0.0 the corresponding path reference

1579 _/knx/api/v2/cloud, including a URI-Template {sitedId}. Moreover, a base/links member with the_

1580 standardized rel definition node. The {siteId} in this example to the links relation allows a client

1581 to perform a read of resources from URL /knx/api/v2/cloud/rome/node (or any other {siteId} values).

1582 `api:`

1583 `version: 2.0.0` `// most recent API version`

1584 `base: /knx/api/v2/cloud/{siteId}` `// URL version part + one template part`

1585 `templates:`

1586 `siteId:`

1587 `description: Site definitions.`

1588 `values: [rome,berlin,brussels,tokio]` `// example of possible placeholder values`

1589 `rel: node` `// a defined value from clause 1.2.5`

1590 `links:`

1591 `- href: /node` `// rel. URL to a standardized API EP`

1592 `contenttype: application/vnd.api+json` `// content type format`

1593 `rel:` `node` `// a defined value from clause 1.2.5`

1594 `typedescription: http://schema.knx.org` `// abs. URL to the add. information`

1595 `- href: /opc/{providerId}` `// rel. URL to a vendor API EP + template`

1596 `contenttype: application/vnd.api+json` `// content type format`

1597 `rel:` `opc` `// a vendor defined value`

1598 `templates:`

1599 `providerId:`

1600 `description: Dynamic part.`

1601 `values: [one,two,three]` `// example of possible placeholder values`

1602 `- …`

1603 1.2.5.1.2 Node

1604 Get KNX IoT 3[rd] Party API server information, this may also include vendor specific information such as

1605 what kind of optional endpoints this server implements (WebSocket including the device endpoints).

1606 The defined access methods allow to only read resources. The basic response information contains the

1607 following data:

1608 1. assigned items, directly embedded as part of the top-level data member, including:

1609 `o` `<id> and <type> information, see clause 1.2.3.3`

1610 - `<type> is “device” or “service” (depends on the place of installation, WAN/ LAN)`

1611 - `<id> is preferably an UUID`

1612 `o` an optional meta member (clause 1.2.3.2.2) that MAY include:

1613 - a typedescription member (clause 1.2.3.3.4), expressing a link to additional node

1614 information

1615 - additional KNX manufacturer or KIM properties as described in clause 1.2.3.3.5


-----

1616 `o` some attributes as part of the attributes member, expressing node attributes including

1617 optional information, see 1.2.3.3.1.

1618 1.2.5.1.2.1 Services

1619 It is possible to retrieve the following items.

1620 `GET /node`

1621 Get KNX IoT 3rd Party API information of the KNX IoT 3[rd] Party API Server.

1622 1.2.5.1.3 Installations

1623 All in this API specified endpoints return data that comprise all installations, contained in the node.

1624 Hence, with all relevant endpoints except the ones described in this clause only data will be returned that

1625 appear to belong to be one (big) installation. The endpoints described in this clause allows to still discover

1626 whether the data originated from a single or multiple installations.

1627 EXAMPLE 33 The resource path /devices returns all devices from all installations of the node at once.

1628 NOTE 50 There is no possibility to differentiate between datapoints or devices from one or the other

1629 installation with an {installationId} as part of the resource path definitions.


1630 A client wanting to make use of different installations shall handle this separation by its own means,

1631 such as defining own entry points (with the meta member) as part of the response per installation.

1632 A use case may be a cloud service, connected to one node that includes more than one (merged)

1633 installation. The individual installations were configured with a trade perspective. The cloud service

1634 defines for several authorized users of the same node the access to specific (trade oriented)

1635 devices such as all HVAC devices, all alarming/ lighting/ … devices.


1636 The defined access methods allow to only read resources. The basic response information contains the

1637 following data:

1638 1. in case of a collection of installation items, a collection information expressed with the (top-level)

1639 `meta` member, for this see clause 1.2.3.2;

1640 2. assigned items, directly embedded as part of the top-level data member, each item including:

1641 `o` `<id> and <type> information, see clause 1.2.3.3`

1642 - `<type> is “installation”`

1643 - `<id> is preferably an UUID`

1644 `o` an optional meta member (clause 1.2.3.2.2) that MAY include:

1645 - a typedescription member (clause 1.2.3.3.4), expressing a link to additional

1646 installation information

1647 - additional KNX manufacturer or KIM properties as described in clause 1.2.3.3.5

1648 `o` some attributes as part of the attributes member, expressing Installation attributes

1649 including optional information, see 1.2.3.3.1.

1650 1.2.5.1.3.1 Services

1651 It is possible to retrieve the following items.

1652 `GET /installations`

1653 Get a collection of all installation items, hosted by the KNX IoT 3[rd] Party API Server.

1654 `GET /installations/{installationId}`

1655 Get a single installation item, hosted by the KNX IoT 3[rd] Party API Server.


-----

1656 **1.2.5.2** **Locations**

1657 The resource path category location with its defined access methods allows a KNX IoT 3[rd] Party Client

1658 for example to present in a UI the location structure and the controllable IoT Functions in a certain

1659 location.

1660 The defined access methods allow to only read resources. The basic response information contains the

1661 following data:

1662 1. in case of a collection of location items, a collection information expressed with the (top-level)

1663 `meta` member, for this see clause 1.2.3.2;

1664 2. assigned items, directly embedded as part of the top-level data member, each resource item

1665 including:

1666 `o` `<id> and <type> information, see clause 1.2.3.3`

1667 - `<type> is "location" (more details can be added, see meta member below)`

1668 - `<id> is preferably an UUID`

1669 `o` some relationships members from clause 1.2.3.3.2 as listed below, each expressing a

1670 `links member as a related link to another resource`

1671 `o` a parentLocation member, expressing a link to the actual location where this location is

1672 included in

1673 `o` a childLocations member, expressing a link to all actual locations that are included in

1674 this location

1675 `o` a locationFunctions member, expressing a link to all actual IoT Functions that are

1676 included in this location

1677 As described in clause 1.2.3.3.2 "Content Handling", above-described members may not be

1678 applicable for a specific location with respect to the actual Installation.

1679 `o` some attributes members, expressing location attributes including optional information,

1680 see 1.2.3.3.1.

1681 `o` an optional meta member (clause 1.2.3.2.2) that MAY include:

1682 - a @type member, expressing a detailed type information from clause 1.2.5.2.2 to the

1683 **actual location**

1684 - a typedescription member (clause 1.2.3.3.4), expressing a link to additional location

1685 information

1686 - additional KNX manufacturer or KIM properties as described in clause 1.2.3.3.5

1687 Examples, see clause 1.2.3.2.2.

1688 1.2.5.2.1 Services

1689 It is possible to retrieve the following items.

1690 `GET /sites`

1691 Get a collection of all root location items of the Installation, mainly buildings or sites.

1692 `GET /locations`

1693 Get a collection of all locations of the Installation including the root locations that would only be returned

1694 via /sites.

1695 `GET /locations/{locationId}`

1696 Get a single location item of the Installation with id {locationId}.


-----

1697 `GET /locations/{locationId}/childlocations`

1698 Get a collection of all location items of the Installation that are directly “underneath” a location with id

1699 {locationId}.

1700 `GET /locations/{locationId}/parentlocation`

1701 Get a single location item of the Installation that is directly “above” a location with id {locationId}.

1702 `GET /functions/{functionId}/location`

1703 Get a single location item of the Installation that is hosting a specific function with id {functionId}.

1704 `GET /device/{deviceId}/location`

1705 Get a single location item of the Installation that is hosting a specific device with id {deviceId}.

1706 1.2.5.2.2 Types

1707 The KNX IoT 3[rd] Party API SHALL support the following "KNX IoT 3rd Party API Location Type"

1708 from table below, derived from its corresponding KIM location classes from [03]. A type can be

1709 expressed only once per resource item, what is more the used type SHALL conform to the most specific

1710 MaC ETS concept as expressed in the last column.

1711 **Table 10 – Location Types**

**KNX IoT 3rd Party API** **URN/** **Concept in MaC ETS**

**Location Type** **KIM Class**

urn:knx:loc.location                          location
loc:Location

urn:knx:loc.building Building
building
loc:Building

urn:knx:loc.floor Floor
floor
loc:Floor

urn:knx:loc.room Room, Corridor, Stairway
room
loc:Room

urn:knx:loc.site Buildings (MaC root node)
site
loc:Site

urn:knx:loc.space Building Part, Cabinet
space
loc:Space

1712

1713 NOTE 51 In the Mac ETS most above-described API location types can host Devices and/or ETS Functions.

1714 1.2.5.2.3 Examples

1715 The installation contains a building My House that has a specific location usage. Moreover, some child

1716 locations are also present in the building. Vendor specific service attributes express an additional service

1717 for the building.

1718 For more examples, please refer to the electronic document (clause 1.1.4).

1719 1.2.5.2.3.1 Read

1720 Read (successfully) the entire collection of all locations but limit the result.

|KNX IoT 3rd Party API<br>Location Type|URN/<br>KIM Class|Concept in MaC ETS|
|---|---|---|
|location|urn:knx:loc.location<br>loc:Location|-|
|building|urn:knx:loc.building<br>loc:Building|Building|
|floor|urn:knx:loc.floor<br>loc:Floor|Floor|
|room|urn:knx:loc.room<br>loc:Room|Room, Corridor, Stairway|
|site|urn:knx:loc.site<br>loc:Site|Buildings (MaC root node)|
|space|urn:knx:loc.space<br>loc:Space|Building Part, Cabinet|


-----

1721 Returns the following example response document content.
```
      meta:
      collection:
       number: 0  // use server (zero-based) default value
       size: 1 // return not more than 1 item
       total: 21  // 21 members in total available
      data:
      - id: be43a294-3098-42ac-a165-1b5c5a4c0e32 // UUID of this "My House" item
       type: location // API item type
       attributes:  // some attributes
        title: My House // item title from Semantic Export
        loc:hasLocationUsage: [dic-tag:office] // KIM property
        gira:fooLabel: gira-mac:barValue // KNX manufacturer property (with ns)
       meta:  // some optional meta information 
        "@type":[loc:Building, urn:knx:loc.building] // item type from KIM/Semantic Export
        typedescription: https://schema.knx.org // optional member
        // example of abs. URL ref. to additional resource type information
       relationships:  
        parentLocation: 
         links: 
          related: /locations/{locationId}/parentlocation
          // relative URL ref. to the parent location, locationId is UUID from above
        childLocations: 
         links: 
          related: /locations/{locationId}/childlocations
          // relative URL ref. to all child locations, locationId is UUID from above
        locationFunctions: 
         links: 
          related: /locations/{locationId}/functions
          // relative URL ref. to all functions of a location, locationId is UUID from above

```
1722 **1.2.5.3** **IoT Functions**

1723 For customers, a Function in a building represents a trade functionality at a certain location. As described

1724 in [02], the term IoT Function is used for this in the context of the KNX IoT 3rd Party API.

1725 Such an IoT Function consists of IoT Datapoints that differ from the DPT typed Datapoints in the way
1726 that it is possible to read the status from them, write a new status or give a new command to them.


-----

Perspective - Customer
Function “Light Dimming”


KNX IoT 3rd Party Client

|Col1|Col2|Col3|Col4|
|---|---|---|---|
|||||
|||||
|||||


Perspective - KNX IoT
IoT Function “light control in the living room”


Perspective - KNX Classic


KNX IoT 3rd Party Client


Endpoint  1


Device 1


GO


GO


GO


GO


GO


GA 2


GA 4


FP 1


FP 3


FP 5


2


1


1727

1728 **Figure 2 - Relation KNX IoT 3[rd] Party API to Functions and IoT Functions**

1729 The resource path category function with its defined access methods allows a KNX IoT 3[rd] Party Client

1730 for example to present in a UI the controllable IoT Functions.

1731 The defined access methods allow to only read resources. The basic response information contains the

1732 following data:

1733 1. in case of a collection of IoT Function items, a collection information expressed with the (top
1734 level) meta member, for this see clause 1.2.3.2;

1735 2. assigned items, directly embedded as part of the top-level data member, each resource item

1736 including:

1737 `o` `<id> and <type> information, see clause 1.2.3.3`

1738 - `<type> is “function” (more details can be added, see meta member below)`

1739 - `<id> is preferably a UUID`

1740 `o` some relationships member from the clause as listed below, each expressing a links

1741 member as a related link to another resource

1742 `o` a functionLocation member, expressing a link to the actual location where this IoT

1743 Function is operating in (place of action)

1744 `o` a functionDatapoints member, expressing a link to the actual IoT Datapoints that are

1745 included in this IoT Function

1746 As described in clause 1.2.3.3.2 "Content Handling", above-described members may not be

1747 applicable for a specific function with respect to the actual Installation.

1748 `o` some attributes member, expressing IoT Function attributes including optional

1749 information, see 1.2.3.3.1.


Perspective - Customer
Function “Light Dimming”


IoT Datapoint


GO


GO


GO


GA 3


FP 2


3


2


-----

1750 `o` an optional meta member (clause 1.2.3.2.2) that MAY include:

1751 - a @type member, expressing a detailed type information from clause 1.2.5.3.2 to the

1752 **actual IoT Function**

1753 - a typedescription member (clause 1.2.3.3.4), expressing a link to additional function

1754 information

1755 - additional KNX manufacturer or KIM properties as described in clause 1.2.3.3.5

1756 Examples, see clause 1.2.3.2.2.

1757 It is possible to retrieve the following items, deviations or details compared to the basic response content

1758 as described above is listed.

1759 1.2.5.3.1 Services

1760 It is possible to retrieve the following items.

1761 `GET /functions`

1762 Get a collection of all IoT Function items of the Installation.

1763 `GET /function/{functionId}`

1764 Get a single IoT Function item of the Installation with id {functionId}.

1765 `GET /locations/{locationId}/functions`

1766 Get a collection of all IoT Function items of the Installation that operate at a specific location with id

1767 {locationId}.

1768 `GET /datapoints/{datapointId}/functions`

1769 Get a collection of all IoT Function items of the Installation in which a specific IoT Datapoint with id

1770 {datapointId} is included.

1771 NOTE 52 An IoT Function (ETS Function) – part of a KNX Classic Installation - contains only Function Points

1772 (GAs), hence it is RECOMMENDED that a {datapointId} addresses only a Function Point.

1773 1.2.5.3.2 Types

1774 Each IoT Function has a specific semantic meaning, superordinated to the IoT Datapoints included in the

1775 IoT Function. For the exchanged data such as in the Semantic Export, the semantic meaning cannot be

1776 derived from the included IoT Datapoints only. To exchange data for each IoT Function its corresponding

1777 type shall be taken into account.

1778 The next table lists some examples how to map from IoT Functions with the corresponding Application

1779 Function type from KIM.

1780 - IoT Function KIM Ontology class name, no relation to any KNX IoT 3rd Party API Client

1781 - FI The Functionality Identifier (FI) describes the usage of the IoT Datapoint within the IoT

1782 Function, to distinguish multiple occurrences of "type identical" IoT Datapoints within

1783 one IoT Function. The annotation is expressed with the annotated Point, corresponding

1784 to this IoT Datapoint[ 14)].

1785 - IoT Datapoint Name of IoT Datapoint included in this IoT Function, description and DPT see clause

1786 1.2.5.4.2.

1787 - Support, R, W Describes if the IoT Datapoint is mandatory/optional and - if implemented - the IoT

1788 Datapoint capability of reading/writing is mandatory/optional, a “-“ means not

1789 applicable.

1790 - URN IoT Datapoint URN, part of the Semantic Dictionary.

14) Depending on the Application Function this may be expressed with the property-id of the (receiving) actuator FB
and/or with the property-id of (sending) sensor FB.


-----

1791 Any versioning of the types goes along with the versioning of the KIM or a simple update of the

1792 Semantic Dictionary (provided no version breaking changes), for this see in [03] clause Dictionary

1793 _Update._

1794 1. IoT Function names are expressed with camelCase, the first character SHALL always be in lower case.

1795 The entire name SHALL NOT contain any whitespaces.

1796 The IoT Function is defined in the KIM with a corresponding Ontology concept, it may also get the

1797 same name. The IoT Function name and a user-friendly name corresponding to this may be

1798 additionally added, as a language dependent label.

1799 The KNX IoT 3[rd] Party API SHOULD support the following IoT Function types.

1800 **Table 11 – IoT Functions**

**#**

**URN**

**IoT Function** **FI** **IoT Datapoint** **R W**

**Comment**

1 switching urn:knx:fct.switching

dpa.417.70 switch M M M

2 switchingStatus[ 15)] urn:knx:fct.switchingStatus

dpa.417.71 switch

3 switchingLight[ 16)] urn:knx:fct.switchingLight

dpa.417.70 switch M M M

4 dimming urn:knx:fct.dimming

dpa.418.61 switch M M M

dpa.418.63 scaling M M M

5 dimmingrgb urn:knx:fct.dimmingrgb

dpa.423.51 switch M M M combined switch control

dpa.423.80 switch M M M combined status

dpa.423.58 scaling M M M red part

dpa.423.61 scaling M M M green part

dpa.423.64 scaling M M M blue part

6 dimmingrgbw urn:knx:fct.dimmingrgbw

dpa.423.51 switch M M M combined switch control

dpa.423.80 switch M M M combined status

dpa.423.58 scaling M M M red part

dpa.423.61 scaling M M M green part

dpa.423.64 scaling M M M blue part

dpa.424.67 scaling M M M white part

15) An IoT Function part of the Semantic Dictionary combining a control and status FP, expressed with the OP
relationship predicate “:isStatusOf”.
16) An example of a switch function, part of the Semantic Dictionary, attributed with a predefined FOI expressing a
phenomenon “Light” and a quantity “Luminance”. Additionally, assigned with the trade Tag “Lighting”.

|#|IoT Function|FI|IoT Datapoint|Support|R|W|URN<br>Comment|
|---|---|---|---|---|---|---|---|
|1|switching||||||urn:knx:fct.switching|
|||dpa.417.70|switch|M|M|M||
|2|switchingStatus 15)||||||urn:knx:fct.switchingStatus|
|||dpa.417.71|switch|||||
|3|switchingLight 16)||||||urn:knx:fct.switchingLight|
|||dpa.417.70|switch|M|M|M||
|4|dimming||||||urn:knx:fct.dimming|
|||dpa.418.61|switch|M|M|M||
|||dpa.418.63|scaling|M|M|M||
|5|dimmingrgb||||||urn:knx:fct.dimmingrgb|
|||dpa.423.51|switch|M|M|M|combined switch control|
|||dpa.423.80|switch|M|M|M|combined status|
|||dpa.423.58|scaling|M|M|M|red part|
|||dpa.423.61|scaling|M|M|M|green part|
|||dpa.423.64|scaling|M|M|M|blue part|
|6|dimmingrgbw||||||urn:knx:fct.dimmingrgbw|
|||dpa.423.51|switch|M|M|M|combined switch control|
|||dpa.423.80|switch|M|M|M|combined status|
|||dpa.423.58|scaling|M|M|M|red part|
|||dpa.423.61|scaling|M|M|M|green part|
|||dpa.423.64|scaling|M|M|M|blue part|
|||dpa.424.67|scaling|M|M|M|white part|


-----

|#|IoT Function|FI|IoT Datapoint|Support|R|W|URN<br>Comment|
|---|---|---|---|---|---|---|---|
|7|dimmingTunableWhite||||||urn:knx:fct.dimmingTunableWhite|
|||dpa.427.69|switch|M|M|M||
|||dpa.427.71|scaling|M|M|M||
|||dpa.427.81|absoluteColourTemp<br>erature|M|M|M|color temperature|
|8|shading||||||urn:knx:fct.shading|
|||dpa.800.61|upDown|M|M|M||
|||dpa.800.65|scaling|O|M|M|blinds position|
|9|blinds||||||urn:knx:fct.blinds|
|||dpa.800.61|upDown|M|M|M||
|||dpa.800.65|scaling|O|M|M|blinds position|
|||dpa.800.66|scaling|O|M|M|slats position|
|10|temperatureAir||||||urn:knx:fct.temperatureAir|
|||dpa.399.56|valueTemp|M|M|-|input into the RTC, current temperature|
|||dpa.392.52|valueTemp|O|M|M|input into the RTC, current setpoint temp.|
|11|zoneHeatingCooling||||||urn:knx:fct.zoneHeatingCooling|
|||dpa.399.56|valueTemp|M|M|-||
|||dpa.392.52|valueTemp|O|M|M||
|||dpa.399.50|hvacOperationMode|M|M|M|input into the controller|
|||dpa.399.64|changeoverMode|O|M|M||
|12|scene||||||urn:knx:fct.scene|
|||dpa.1010.54|scene|M|-|M|input to a scene contr., part of actuator|
|13|audio||||||urn:knx:fct.audio|
|||dpa.4200.51|start|M|M|M|play start/stop|
|||dpa.4200.52|scaling|M|M|M|volume|
|||dpa.4200.53|enable|O|O|M|mute|
|||dpa.4200.54|step|O|-|M|play previous/next|
|14|audioWithMediaInfo||||||urn:knx:fct.audioWithMediaInfo|
|||dpa.4200.51|start|M|M|M|play start/stop|
|||dpa.4200.52|scaling|M|M|M|volume|
|||dpa.4200.53|enable|O|O|M|mute|
|||dpa.4200.54|step|O|-|M|play previous/next|
|||dpa.4200.55|string88591|M|M|-|title|
|||dpa.4200.56|string88591|O|M|-|album|
|||dpa.4200.57|string88591|O|M|-|artist|


-----

|#|IoT Function|FI|IoT Datapoint|Support|R|W|URN<br>Comment|
|---|---|---|---|---|---|---|---|
|15|audioWithPlaylist||||||urn:knx:fct.audiolWithPlaylist|
|||dpa.4200.51|start|M|M|M|play start/stop|
|||dpa.4200.52|scaling|M|M|M|volume|
|||dpa.4200.53|enable|O|O|M|mute|
|||dpa.4200.54|step|O|-|M|play previous/next|
|||dpa.4200.55|string88591|M|M|-|title|
|||dpa.4200.56|string88591|O|M|-|album|
|||dpa.4200.57|string88591|O|M|-|artist|
|||dpa.4200.58|value1Ucount|M|M|M|playlist ID|
|||dpa.4200.59|step|O|-|M|playlist previous/next|
|||dpa.4200.60|string88591|O|M|-|playlist name|
|||dpa.4200.61|enable|O|O|M|playlist shuffle|
|||dpa.4200.62|enable|O|O|M|playlist repeat|


1801

1802 1.2.5.3.3 Examples

1803 The (customer-centric) Function “living room - rear light dimming” is represented as an IoT Function

1804 “dimming”. It consists of the IoT Datapoints “switch” and “percentU8”.

1805 For more examples, please refer to the electronic document (clause 1.1.4).

1806 1.2.5.3.3.1 Read

1807 Read (successfully) a single IoT Function.
```
     GET http://gateway.knx.local/knx/api/v1/functions/2b2c281b-af58-4816-95d0     aaa2468f8300 HTTP/1.1

```
1808 Returns the following example response document content.
```
      data: // returns no top-level meta object, request was to a single item
       id: 2b2c281b-af58-4816-95d0-aaa2468f8300 // UUID
       type: function  // API Endpoint type
       attributes: 
        title: light/ living room // item title from Semantic Export
        description: verbose description of …  // item description from Semantic Export
        knx:number: plan3.2 // opt. KIM data prop. with string value
        abb:localDomain: abb-mac:berlin // vendor member (ns/string value pair)
       meta: 
        "@type": 

```
       - dic:switchingLight // corresponding KIM class function type
```
         - urn:knx:fct.switchingLight        // URN, belonging to the type above
         - urn:knx.mft.abb.switchingLight      // example definition of a vendor type
                                 // expresses the same type as above
        typedescription: https://schema.knx.org // optional member
        // example of abs. URL ref. to additional resource type information
       relationships: 
        functionLocation: 
         links: 
          related: /functions/{functionId}/location   

```

-----

1809 **1.2.5.4** **IoT Datapoints**

1810 An IoT Datapoint corresponds to a Function Point or Point, it hides the implication of read/write

1811 operations on the underlaying concepts. It is also possible to register client notifications on an update to

1812 an IoT Datapoint.

1813 NOTE 53 IoT Datapoints can be split up in Properties Datapoints, Actions Datapoints and Event Datapoints, for

1814 this see corresponding clause "Points" in [03].

1815 **Installation State Data Synchronization**

1816 The data image hosted at the server may deviate compared to the Installation state data. A write operation

1817 may be rejected from specific but not all datapoints because of a temporarily blocking, this intended

1818 application behavior cannot be easily reflected at the server. Moreover, also in case of writing a Datapoint

1819 value, a client is expecting to get a status from the server, to present this to the client's user, expressing

1820 the success (or failure) of the actual operation.

1821 It is vendor specific how a KNX IoT 3[rd] Party Server aligns a synchronization. The maturity level of

1822 synchronization depends on the client needs and on the connected subsystem, here especially the

1823 capabilities how to access Datapoints via the KNX IoT 3[rd] Party API. Some aspects:

1824 - the support of the subsystem to provide independent access methods for writing or reading

1825 datapoint values

1826 NOTE 54 A Datapoint in a KNX Installation includes a KNX Classic Group Address or Group Object,

1827 not every installation supports to access each of them individually. For this see also the

1828 error handling when writing datapoint values.

1829 - specific readable/ writeable object property relationships, for details see KIM class

1830 :FunctionPoint and :Datapoint in [03]

1831 NOTE 55 A Datapoint may not be readable at API level.

1832 - specific tags expressing the input/ output characteristics of a Point, for details see KIM class

1833 :Datapoint in [03]

1834 NOTE 56 A Datapoint includes also Group Objects expressing an output that cannot be written with external access

1835 methods.

1836 It is NOT RECOMMENDED to derive a status at the client side from a HTTP response status code.


1837 NOTE 57 Response status codes cannot maturely provide the success of an operation performed to the

1838 underlying (KNX) subsystem, a status code 204 or 202 will not (undeniably) reflect the actual

1839 status. Examples:

1840 `o` The actual status is provided by another Datapoint than the one that executed the write

1841 operation.


1842 `o` The status is a calculated value of several Datapoints.

1843 `o` The server cannot wait to respond to the client until a status is received from the subsystem.

1844 A (control) value written at the same IoT Datapoint and an afterwards read (status) value may be

1845 different. It is RECOMMENDED to derive a status at the client side from subscribing explicitly to the

1846 Datapoint that hosts/provides the status. In this case a client is informed explicitly and asynchronously

1847 released from any timing of the underlying subsystem, even if the status change was caused from an

1848 internal device process (and not due to a write operation, externally triggered by a client).


-----

1849 The resource path category datapoint with its defined access methods allows a KNX IoT 3[rd] Party Client

1850 for example to present in a UI the controllable IoT Datapoints.

1851 The defined access methods allow to read and write resources. The basic response information contains

1852 the following data:

1853 1. in case of a collection of IoT Datapoint items, a collection information expressed with the (top
1854 level) meta member, for this see clause 1.2.3.2;

1855 2. assigned items, directly embedded as part of the top-level data member, each resource item

1856 including:

1857 `o` `<id> and <type> information, see clause 1.2.3.3`

1858 - `<type> is “datapoint” (more details can be added, see meta member below)`

1859 - `<id> is preferably an UUID`

1860 `o` some relationships members from clause 1.2.3.3.2 as listed below, each expressing a

1861 `links member as a related link to another resource`

1862 `o` a datapointFunctions member, expressing a link to all IoT Functions in which this IoT

1863 Datapoint is included

1864 `o` a datapointDevice[17] member, expressing a link to the Device in which this IoT

1865 Datapoint is included

1866 `o` a `datapointProxy[17]` member, expressing a link to the Device in which this IoT Datapoint

1867 is proxied

1868 `o` a datapointSubscriptions member, expressing a link to all subscriptions in which

1869 this IoT Datapoint is included

1870 As described in clause 1.2.3.3.2 "Content Handling", above-described members may not be

1871 applicable for a specific datapoint with respect to the actual Installation.

1872 `o` some attributes member, expressing IoT Datapoints attributes including optional

1873 information, see 1.2.3.3.1.

1874 `o` The API reference member valueType SHALL be part of the response, it SHALL be defined

1875 with value “string” or “object”.

1876 - The value “string” defines IoT Datapoint DPTs of numbers, strings or enumerations.

1877 - The value “object” defines IoT Datapoints of complex DPTs, which are DPTs

1878 representing a concatenation/ collection of existing KNX DPTs or above-described

1879 elements. The behavior for this complex DPTs is undefined in this specification.

1880 `o` The API reference member value hosts the IoT Datapoint values, it MAY be part of the

1881 response. For the valueType `"string" the value SHALL be a JSON string.`

1882 NOTE 58 JSON strings shall be always surrounded with quotes.

1883 In case a current IoT Datapoint value is not available at the server the API reference

1884 attributes value and `timestamp` SHALL be missing in the response.

1885 On a successful interaction with an IoT Datapoint that has a representation in an assigned

1886 subsystem, the `timestamp` and `value` SHOULD be updated on the KNX IoT 3rd Party

1887 Server. The behavior for IoT Datapoints that have no representation in a subsystem is

1888 vendor specific.

17) Some resource path definitions are optional content in this specification, for this see clause 1.3.2. This also
covers corresponding relationships member; they are also optional.


-----

1889 It is subject to the server implementation how to evaluate this successful interaction, such

1890 as to react directly on write/update services for an IoT Datapoint from the underlaying

1891 subsystem[18] or to wait a certain period for a positive confirmation from the subsystem after

1892 a write request to an IoT Datapoint by an external client.

1893 A successful interaction with a IoT Datapoint SHALL NOT care if a CoV occurred.

1894 EXAMPLE 34 A Datapoint with a trigger DPT may raise on update (event) the same value (such as

1895 a binary 1). With a CoV definition this datapoint update would be missed.

1896 `o` The API reference members unit and enum SHALL be part of the response, they SHALL NOT

1897 be present at the same time.

1898 The API reference member unit expresses that the IoT Datapoint is a numbered type (this

1899 type also includes time-oriented types). The member unit hosts the corresponding unit for

1900 this IoT Datapoint. It is supplemented with possible API reference members minimum,

1901 `maximum or resolution.`

1902 The API reference member enum expresses that the IoT Datapoint is an enumeration type.

1903 The member enum hosts all possible values for this IoT Datapoint. Also boolean types are

1904 represented as enumeration type.

1905 NOTE 59 Possible enum values are identical to the definitions of KNX Classic DPTs in Chapter

1906 3/7/2 “Datapint Types” of the KNX Specifications, for this see clause 1.2.5.4.2.

1907 A KNX IoT 3[rd] Party Client reads/writes values from/to the underlying (KNX) System. With

1908 the DPT/ JSON Schema assigned to a IoT Datapoint a KNX IoT 3[rd] Party Server is able to

1909 format the value. Even with a valuetype definition, if no available DPT information is

1910 available, this formatting is not possible at all, the value is simply a string, with no further

1911 meaning.

1912 - In case of reading such an IoT Datapoint a QUDT unitless unit (unit:UNITLESS) and

1913 a valuetype of "string" SHALL be expressed as part of the response.

1914 - In case of writing such an IoT Datapoint, please refer to the corresponding write service

1915 in clause 1.2.5.4.1.

1916 EXAMPLE 35 A snippet of IoT Datapoint response data.

1917 `attributes:` `//enumeration type (generic list)`

1918 `enum: [comfort, standby, economy, protection]`

1919 `valueType: string`

1920 `value: "economy"` `//value is “economy"`

1921 `timestamp: …`

1922

1923 `attributes:` `//enumeration type (boolean)`

1924 `enum: [on, off]`

1925 `valueType: string`

1926 `value: "on"` `//value is “on”`

1927 `timestamp: …`

1928

1929 `attributes:` `//numbered type`

1930 `unit: unit:DEG_C` `//includes namespace prefix to be unique`

1931 `valueType: string`

1932 `value: "25"` `//value is respecting the given resolution`

1933 `minimum: "-20.5"`

1934 `maximum: "60"`

1935 `resolution: "5"` //resolution

18) For KNX the subsystem interaction is defined with a write or read response command on the bus.


-----

1936 `timestamp: …`

1937

1938 `attributes:` `//unknown type`

1939 `unit:UNITLESS` `//unitless, as specified`

1940 `valueType: string` `//string, as specified`

1941 `value: "anyString"` `//value has no meaning`

1942 `timestamp: …`

1943 Above specified API reference members are used when writing IoT Datapoint values from the

1944 KNX IoT 3rd Party Client, so they shall first be known at the client side via the response.

1945 `o` an optional meta member (clause 1.2.3.2.2) that MAY include:

1946 - a @type member, expressing a detailed type information from clause 1.2.5.4.2 to the

1947 **actual IoT Datapoint**

1948 - a typedescription member (clause 1.2.3.3.4), expressing a link to additional datapoint

1949 information

1950 - additional KNX manufacturer or KIM properties as described in clause 1.2.3.3.5

1951 1.2.5.4.1 Services

1952 It is possible to retrieve or set the following items.

1953 `GET /subscriptions/{subscriptionId}/datapoints`

1954 Get a collection of all IoT Datapoints items of the Installation of a specific subscription with id

1955 {subscriptionId}.

1956 `GET /functions/{functionId}/datapoints`

1957 Get a collection of all IoT Datapoints[19] items of the Installation as part of a specific IoT Function with id

1958 {functionId}.

1959 `GET /devices/{deviceId}/datapoints`

1960 Get a collection of all IoT Datapoints[20] items of the Installation as part of a specific Device with id

1961 {deviceId}.

1962 `GET /timeseries/{timeseriesId}/datapoint`

1963 Get a single IoT Datapoint item of the Installation that is related to a timeseries item with id

1964 {timeseriesId}.

1965 `GET /datapoints`

1966 Get a collection of all IoT Datapoint items of the Installation.

1967 `GET /datapoints/{datapointId}`

1968 Get a single IoT Datapoint item of the Installation with id {datapointId}.

1969 `PUT /datapoints/values`

1970 Set a certain amount of IoT Datapoint values (at once). Other resource items are not supported by this

1971 service.

1972 NOTE 60 The used access method PUT is not idempotent for the above service, on every write command

1973 with the same data a new value of the timestamp member is generated for the server’s IoT

1974 Datapoint object.


19) Returned IoT Datapoints - part of KNX Classic Installations – are Function Points (GAs) only.
20) Returned IoT Datapoints - part of KNX Classic Installations – are Points (GOs) only.


-----

1975 The basic request information contains the following data:

1976 1. assigned items, directly embedded as part of the top-level data member, each resource item

1977 including:

1978 `o` `<id> and <type> information, see clause 1.2.3.3`

1979 - `<type> is “datapoint”`

1980 - `<id> is preferably an UUID`

1981 `o` some attributes member, expressing the datapoint values to be updated:

1982 The API reference member value member as the actual value to be written.

1983 `valueType "object"`

1984 The behavior is undefined in this specification.

1985 `valueType "string"`

1986 The KNX IoT 3rd Party API Server needs to transform the received value from the KNX IoT 3[rd]

1987 Party Client into the proper message with the correct format (bitlength, ...) for the underlying

1988 KNX System. For this the KNX IoT 3rd Party API Server needs to consider the KNX DPT of the

1989 corresponding IoT Datapoint.

1990 The value is defined as JSON string.

1991 NOTE 61 JSON strings shall always be surrounded with quotes.

1992 - For a numbered type, the value SHALL be encoded (from the client) as a string by formatting

1993 it according to JSON clause 6.

1994 NOTE 62 With this definition, a float value uses the “.” as fraction separator.

1995 - For an enumeration type, the value SHALL be encoded (from the client) as a string as defined

1996 in clause Types below.

1997 - If no DPT information is available, the value (from the client) has no further meaning/ format

1998 for the KNX IoT 3rd Party Server. It is OPTIONAL for the KNX IoT 3rd Party Server to write

1999 such values to the underlying (KNX) System. Nevertheless, for this case it is RECOMMNDED to

2000 return an error 409 with an additional error object as described for the response below.

2001 NOTE 63 The format bitlength SHALL be respected, regardless of where the information is derived

2002 from in this case.

2003 For the corresponding error handling of the KNX IoT 3rd Party API Server, see below.

2004 If the attributes member does not include all the possible members, the server SHALL

2005 interpret the missing members as if they were included with their current values, NOT as null

2006 values (see JSON API, CRUD, section 7.2.3).


2007 NOTE 64 In the current specification only the attributes member value can be changed. The

2008 statement above serves as a definition if vendor specific attributes members that need to

2009 be written are included (for this it is strongly recommended to consider clause 1.2.3.3.5).

2010 The basic response information contains the following data:

2011 `o` The response SHALL NOT contain any data, it returns an empty response message body.

2012 It is RECOMMENDED that the KNX IoT 3rd Party API Server responds with status code 202 or 204.

2013 It is NOT RECOMMENDED to use the response status code 200 or 201 (as these response codes are

2014 common use in conjunction with access methods GET and POST).


-----

2015 The KNX IoT 3rd Party API Server SHALL respond with error code 409, optionally including an error

2016 object in the response (see clause 1.2.1.6.6):

2017 `o` in case the client writes a value for an enumeration type as part of the API reference value

2018 that is not part of the servers list of enumeration values

2019 `o` in case the client writes a value for a numbered type as part of API reference value that is

2020 not representable in its range or format by the server.

2021 EXAMPLE 36 A value that is written and does not respect the range from the DPT or from the API

2022 reference member minimum/maximum; all assigned to a Datapoint.


2023 A value that is written but does not respect the API reference member resolution;

2024 assigned to a Datapoint, e.g. writing a value of "15" on a resolution of 20.

2025 A value that is written and cannot be converted into a numerical format, such as the

2026 value "abc".

2027 `o` in case the IoT Datapoint API reference member writable is false

2028 The server SHALL respond with appropriate error code (see JSON API, CRUD section 7.2.3),

2029 optionally including an error object in this response (see clause 1.2.1.6.6):

2030 `o` in case the writing of an IoT Datapoint is not possible


2031 EXAMPLE 37 The IoT Datapoint does not exists or does not support a write service for the

2032 underlying (KNX) subsystem (e.g., an IoT Datapoint expressed as a GO, not

2033 supporting Group Object Diagnostics services).

2034 For further details on these response codes when writing Datapoints, please refer to the clause

2035 1.2.1.6.2.

2036 1.2.5.4.2 Types

2037 Each IoT Datapoint represents a specific semantic meaning for the exchanged data such as at Runtime, it

2038 cannot be derived from other IoT Datapoints or an IoT Function in which this IoT Datapoint is included.

2039 The above-described semantic meaning of <type> is not as fine granular as it is with the KNX Classic

2040 DPT scheme. The jsonschema:DataSchema available in KIM allows to at least map KNX Classic

2041 DPTs to their corresponding JSON type, however several DPTs may technically correctly map to the

2042 same JSON type.


2043 `o` Enumerated KNX Classic DPTs of the same main type such as 1.001 (1- bit) and 1.009 (1-bit)

2044 map to the IoT Datapoint JSON type Boolean.

2045 `o` Numbered KNX Classic DPTs with different main types such as 6.001 (8-bit signed percentage)

2046 and 17.001 (8-bit unsigned scene number) map to the IoT Datapoint JSON type Integer

2047 To exchange respectively read/write data of/to an IoT Datapoint, its corresponding type shall be taken

2048 into account, the server needs to know how to format the Runtime value. For this a (bijective) mapping is

2049 needed to serve each consumer of the value, namely the KNX System with its KNX Classic DPTs and the

2050 KNX IoT 3[rd] Party API with its JSON strings.

2051 In order to achieve this the following rules SHALL be applied, specifying how KNX Classic DPTs need to

2052 be converted to use them on the KNX IoT 3[rd] Party API. Moreover, all rules support the member name

2053 conventions specified in clause 1.2.3.1.

2054 NOTE 65 As described in clause 1.2.5.4 a mapping from complex DPTs is not supported in this specification.

2055 **1.** **Naming Rules, IoT Datapoint**

2056 The name may be used to express additional type information of an IoT Datapoint.

2057 Input

2058 The KNX Classic DPT name from Chapter 3/7/2 “Datapint Types” of the KNX Specifications

2059 SHALL be used for an IoT Datapoint name.


-----

2060 Conversion Rules

2061 For an IoT Datapoint name the following rules SHALL be applied.

2062 a. “DPT_” is removed

2063 b. “_” is removed

2064 c. square brackets [] are replace with _a and a_

2065 d. "/" is replaced with p

2066 e. numbers are kept

2067 f. terms expressing a proper name or a specific abbreviation shall be converted to lower case; this

2068 rule is rather a list than an exact (regular) expression, see example below. List examples:

2069 - HVAC  hvac, HPM  hpm, WTC  wtc, RGB  rgb, ASCII  ascii, CPM  cpm, BUC

2070  buc, DALI  dali, MBus  mbus

2071 g. terms expressing a (combined) unit shall not be changed at all. List examples:

2072 - kVARh  kVARh, MWh  MWh, mm  mm, 100MSec  100MSec, MSec  MSec,

2073 Msec  Msec

2074 The point f. and g. can be guaranteed thanks to KNX Association maintaining the Semantic

2075 Dictionary content (for this see in [03] clause Dictionary Content and Dictionary Update).

2076 Output

2077 IoT Datapoint names are expressed with camelCase respecting the conversion rules from above, the

2078 first character SHALL always be in lower case. Terms of section f. or g. are not expressed with

2079 camelCase.

2080 NOTE 66 No KNX Classic DPT starts with a unit after DPT_, hence a unit MWh does not need to be

2081 converted to mWh.

2082 The entire name SHALL NOT contain any whitespaces.

2083 EXAMPLE 38 KNX Classic DPT 205.100 DPT_TempHVACAbs_Z is converted to the name temphvacAbsZ

2084 Relation

2085 DPTs available in KIM use the same names as specified above for the IoT Datapoint name. This

2086 allows to generate simple, code-based mapping rules.

2087 2. **Value Rules, IoT Datapoint**

2088 The value is used to exchange data of an IoT Datapoint at Runtime.

2089 Possible values for a numbered type, for this see write service above. Possible values for the

2090 enumeration type SHALL be derived from the definition of KNX Classic DPTs in Chapter 3/7/2
2091 “Datapint Types” of the KNX Specifications, post-processed according to the following rule:

2092 a. IoT Datapoint enumeration type values SHALL be expressed with camelCase, the first character

2093 SHALL always be in lower case. The value SHALL NOT contain any whitespaces.

2094 Some examples converted according to this rule are shown in the table below, column Semantics. As

2095 a general note, a translation visible for a user for a (mainly enumeration) type is the responsibility of

2096 the client.

2097 **3.** **URN Rules, IoT Datapoint**

2098 The URN may be used to express additional type information of an IoT Datapoint.

2099 The URN part of the $NAME (see clause "URN Scheme for Manufacturers and KNX Content" in

2100 [03]) SHALL be defined according to the same naming rules as described above for the IoT Datapoint.

2101 The KNX IoT 3[rd] Party API SHOULD support the following IoT Datapoints from the table below, listing

2102 KNX Classic DPTs and their mapping to the IoT Datapoint name/semantics/URN and the corresponding

2103 JSON type.

2104 - IoT Datapoint datapoint name, retrievable by a KNX IoT 3rd Party API Client (as additional type info)


-----

2105 - KIM JSON Type JSON schema basic type corresponding to this IoT Datapoint (available in KIM)

2106 - Semantics possible (numbered/enumerated) IoT Datapoint values, mapped from KNX Classic DPT

2107 - URN/KIM Name IoT Datapoint URN and KIM name, both part of the Semantic Dictionary

2108 - KNX Classic DPT if applicable, DPT in KNX Classic corresponding to this IoT Datapoint

2109 **Table 12 – IoT Datapoint Examples**

**KIM JSON** **URN/** **KNX Classic**
**IoT Datapoint** **Semantics**

**Type** **KIM Name** **DPT**

0 = off urn:knx:dpt.switch
switch Boolean 1.001
1 = on dic:switch

0 = false urn:knx:dpt.bool
bool Boolean 1.002
1 = true dic:bool

0 = disable urn:knx:dpt.enable
enable Boolean 1.003
1 = enable dic:enable

0 = decrease urn:knx:dpt.step
step Boolean 1.007
1 = increase dic:step

1 = down urn:knx:dpt.upDown
upDown Boolean 1.008
0 = up dic:upDown

1 = close urn:knx:dpt.openClose
openClose Boolean 1.009
0 = open dic:openClose

0 = stop urn:knx:dpt.start
start Boolean 1.010
1 = start dic:start

0 = trigger urn:knx:dpt.trigger
trigger Boolean 1.017
1 = trigger dic:trigger

0: decrease

urn:knx:dpt.controlDimming

controlDimming[ 21)] Object 1: increase 3.007

dic:controlDiming

0: break, 1…8 step

urn:knx:dpt.scaling
scaling Integer 0…100 5.001
dic:scaling

urn:knx:dpt.percent
percentU8 Integer 0…255 5.004
dic:percent

urn:knx:dpt.value1Ucount
value1Ucount Integer 0…255 5.010
dic:value1Ucount

urn:knx:dpt.absoluteColourTempe

absoluteColourTemperature Integer 0…65536 K rature 7.600

dic:absoluteColourTemperature

urn:knx:dpt.valueTemp
valueTemp Number -273.15 C°… 9.001
dic:valueTemp

urn:knx:dpt.valueTempD
valueTemD Number -617… K … 9.002
dic:valueTempD

urn:knx:dpt.stringascii
stringascii String       - 16.000
dic:stringascii

urn:knx:dpt.stringascii
string88591 String      - 16.001
dic:stringascii

21) Complex types currently not supported.

|IoT Datapoint|KIM JSON<br>Type|Semantics|URN/<br>KIM Name|KNX Classic<br>DPT|
|---|---|---|---|---|
|switch|Boolean|0 = off<br>1 = on|urn:knx:dpt.switch<br>dic:switch|1.001|
|bool|Boolean|0 = false<br>1 = true|urn:knx:dpt.bool<br>dic:bool|1.002|
|enable|Boolean|0 = disable<br>1 = enable|urn:knx:dpt.enable<br>dic:enable|1.003|
|step|Boolean|0 = decrease<br>1 = increase|urn:knx:dpt.step<br>dic:step|1.007|
|upDown|Boolean|1 = down<br>0 = up|urn:knx:dpt.upDown<br>dic:upDown|1.008|
|openClose|Boolean|1 = close<br>0 = open|urn:knx:dpt.openClose<br>dic:openClose|1.009|
|start|Boolean|0 = stop<br>1 = start|urn:knx:dpt.start<br>dic:start|1.010|
|trigger|Boolean|0 = trigger<br>1 = trigger|urn:knx:dpt.trigger<br>dic:trigger|1.017|
|controlDimming 21)|Object|0: decrease<br>1: increase<br>0: break, 1…8 step|urn:knx:dpt.controlDimming<br>dic:controlDiming|3.007|
|scaling|Integer|0…100|urn:knx:dpt.scaling<br>dic:scaling|5.001|
|percentU8|Integer|0…255|urn:knx:dpt.percent<br>dic:percent|5.004|
|value1Ucount|Integer|0…255|urn:knx:dpt.value1Ucount<br>dic:value1Ucount|5.010|
|absoluteColourTemperature|Integer|0…65536 K|urn:knx:dpt.absoluteColourTempe<br>rature<br>dic:absoluteColourTemperature|7.600|
|valueTemp|Number|-273.15 C°…|urn:knx:dpt.valueTemp<br>dic:valueTemp|9.001|
|valueTemD|Number|-617… K…|urn:knx:dpt.valueTempD<br>dic:valueTempD|9.002|
|stringascii|String|-|urn:knx:dpt.stringascii<br>dic:stringascii|16.000|
|string88591|String|-|urn:knx:dpt.stringascii<br>dic:stringascii|16.001|


-----

|IoT Datapoint|KIM JSON<br>Type|Semantics|URN/<br>KIM Name|KNX Classic<br>DPT|
|---|---|---|---|---|
|sceneNumber|Integer|0…63|urn:knx:dpt.sceneNumber<br>dic:sceneNumber|17.001|
|sceneControl21|Object|0: activate<br>1: learn<br>0…63 sceneNumber|urn:knx:dpt.sceneControl<br>dic:sceneControl|18.001|
|hvacMode|String|0: auto<br>1: comfort<br>2: standby<br>3: economy<br>4: buildingProtection|urn:knx:dpt.hvacOperationMode<br>dic:hvacOperationMode|20.102|
|changeoverMode|String|0: auto<br>1: coolingOnly<br>2: heatingOnly|urn:knx:dpt.changeoverMode<br>dic:changeoverMode|20.107|


2110 1.2.5.4.3 Examples

2111 The IoT Datapoint instance BrightnessInKitchen in the IoT Function instance “DimmingKitchen” (both

2112 part of an Installation) is the IoT Datapoint named “scaling” in this table. This IoT Datapoint has a KIM

2113 JSON type Integer, containing values from 0 up to 100 (%).

2114 For more examples, please refer to the electronic document (clause 1.1.4).

2115 1.2.5.4.3.1 Read

2116 Read (successfully) a single IoT Datapoint value.
```
     GET http://gateway.knx.local/knx/api/v1/datapoints/dd1d82f7-68ef-4a18-9a37-16bafdc3d80c
     HTTP/1.1

```
2117 Returns the following example response document content.


-----

```
       typedescription: https://schema.knx.org // optional member
       // example of abs. URL ref. to additional resource type information
       relationships: 
        datapointFunctions: 
         links: 
          related: /datapoints/dd1d82f7-68ef-4a18-9a37-16bafdc3d80c/functions
           // relative URL ref. to corr. IoT Function, shall be the UUID from <id> above
        datapointSubscriptions:
         links:
          related: /datapoints/dd1d82f7-68ef-4a18-9a37-16bafdc3d80c/subscriptions
          // relative URL ref. to corr. subscription, shall be the UUID from <id> above

```
2118 1.2.5.4.3.2 Write

2119 Write (successfully) multiple IoT Datapoint values (percent and bool).

2120 `PUT http://gateway.knx.local/knx/api/v1/datapoints/values HTTP/1.1`

2121 Uses the following example request document content.
```
     data: 
       // IoT Datapoint will be switched to "on" value (IoT Datapoint "Bool"  enum!)
       - id: 1f48bf82-acee-45a1-9038-e2748860a462 // id (UUID) of IoT Datapoint
        type: datapoint // type of IoT Datapoint
        attributes: 
         value: "on" 
       // IoT Datapoint will be set to "brightness" 67 (IoT Datapoint "Percent")
       - id: de591fcd-72c7-4aca-8929-885a1f1653dd
        type: datapoint 
        attributes: 
         value: "67" 

```
2122 The (write) example above returns an empty response with response status code 202 or 204.
```
     HTTP/1.1 202 ACCEPTED  // needs to be proc. further f. server
     HTTP/1.1 204 NO CONTENT // recommended response code (MDN)

```
2123 **1.2.5.5** **Devices**

2124 The resource path category device with its defined access methods allows a KNX IoT 3[rd] Party Client for

2125 example to present in a UI the devices of an Installation.

2126 The defined access methods allow to read resources. The basic response information contains the

2127 following data:

2128 1. in case of a collection of Device items, a collection information expressed with the (top-level)

2129 `meta` member, for this see clause 1.2.3.2;

2130 2. assigned items, directly embedded as part of the top-level data member, each resource item

2131 including:

2132 `o` `<id> and <type> information, see clause 1.2.3.3`

2133 - `<type> is “device” (more details can be added, see meta member below)`

2134 - `<id> is preferably an UUID`

2135 `o` some relationships members from clause 1.2.3.3.2 as listed below, each expressing a

2136 `links member as a related link to another resource`

2137 `o` a deviceLocation member, expressing a link to the actual location where this Device is

2138 located (place of assembly)


-----

2139 `o` a deviceDatapoints member, expressing a link to the actual IoT Datapoints that are

2140 included in - or proxied by - this Device

2141 As described in clause 1.2.3.3.2 "Content Handling", above-described members may not be

2142 applicable for a specific device with respect to the actual Installation.

2143 `o` some attributes members, expressing Device attributes including optional information,

2144 see 1.2.3.3.1.

2145 `o` an optional meta member (clause 1.2.3.2.2) that MAY include:

2146 - a @type member, expressing a detailed type information of the actual Device

2147 - a typedescription member (clause 1.2.3.3.4), expressing a link to additional device

2148 information

2149 - additional KNX manufacturer or KIM properties as described in clause 1.2.3.3.5

2150 Examples, see clause 1.2.3.2.2.

2151 1.2.5.5.1 Services

2152 It is possible to retrieve the following items.

2153 `GET /devices`

2154 Get a collection of all Device items of the Installation.

2155 `GET /devices/{deviceId}`

2156 Get a single Device item of the Installation with id {deviceId}.

2157 `GET /locations/{locationId}/devices`

2158 Get a collection of Device items of the Installation that are part of a specific location with id

2159 {locationId}.

2160 `GET /datapoints/{datapointId}/proxies`

2161 Get a single Device item of the Installation where a specific IoT Datapoint with id {datapointId} is

2162 proxied.

2163 `GET /datapoints/{datapointId}/device`

2164 Get a single Device item of the Installation where a specific IoT Datapoint with id {datapointId} is

2165 hosted.

2166 NOTE 67 A Device that is part of a KNX Classic Installation contains only Points (GOs), hence a {datapointId} is

2167 RECOMMENDED to address only a Point.

2168 1.2.5.5.2 Examples

2169 The Device instance DimmActuator is assembled in the location “Kitchen” (both part of an Installation).

2170 For more examples, please refer to the electronic document (clause 1.1.4).

2171 1.2.5.5.2.1 Read

2172 Read (successfully) a single Device.
```
     GET http://gateway.knx.local/knx/api/v1/devices/dd1d82f7-68ef-4a19-9a37-16bafdc3d80d
     HTTP/1.1

```
2173 Returns the following example response document content.


-----

2174 **1.2.5.6** **Subscriptions**

2175 When a KNX IoT 3[rd] Party Client wants to be notified (and not to poll) on resource changes with as little

2176 delay as possible, this is handled with a (client) subscription. The KNX IoT 3[rd] Party API supports two

2177 types of subscriptions.

2178 - WebSocket subscriptions

2179 - HTTP Callback subscriptions

2180 - RESTful interfaces do not specify asynchronous notifications from the server to the client. A

2181 callback (WebHook) is a widely used method to solve this problem, here with a RESTful

2182 subscription interface.

2183 Both subscription interfaces allow to subscribe on collections or on single items. In contrast to the HTTP

2184 Callback subscription the web socket subscription allows also to read and write items.

2185 NOTE 68 In most systems clients subscribe on events using topics that are structured as hierarchical paths

2186 and allow wildcards. This specification supports a structured hierarchy for locations only.

2187 1.2.5.6.1 General Requirements

2188 - It is RECOMMENDED that a KNX IoT 3[rd] Party Server drops all present (HTTP/WS) subscriptions

2189 on uploading any new Installation to the KNX IoT Server.

2190 - Only TLS-secured connections SHALL be used, supporting TLS v1.2 [RFC5246] or higher.

2191 - Both subscription interfaces are an OPTIONAL extension to the KNX IoT 3[rd] Party API. One of the

2192 subscription types SHALL be implemented in a KNX IoT 3[rd] Party Sever.

2193 - Both subscription interfaces SHALL define the message data payload in accordance with JSON API.

2194 - Both subscription interfaces SHALL support a message payload encoding with utf-8, for the web

2195 [socket see [RFC6455], section 5.6.](https://tools.ietf.org/html/rfc6455#section-5.6)


-----

2196 - Both subscription interfaces allow to subscribe ONLY on items or collections of the following

2197 subscription types. For each type, the resource path category (see clause 1.2.5) with the possible

2198 resource types are listed.

2199 - Subscription Type: entity type on which subscription for a value change is possible

2200 - Resource Path Category: endpoint resource path category

2201 - Resource Type: entity type of a specific resource for the resource path category

2202 given in the left column

2203 **Table 13 – Subscription Types**

**Subscription** **Resource Path** **Resource**

**Type** **Category** **Type**

datapoint location `<type>: "location"`

function `<type>: "function"`

datapoint `<type>: "datapoint"`

device `<type>: "device"`

2204

2205 1.2.5.6.2 Subscription Type <datapoint>

2206 This subscription type ONLY allows to subscribe to value changes on Datapoints. A subscription to an

2207 item of the above expressed resource path categories will cause an Datapoint "update information" as

2208 follows:

2209 **a.** **Datapoint**

2210 On a successful update 24) on an IoT Datapoint.

2211 As specified in [02] clause "Mapping of Terms", a Datapoint includes a KNX Classic Group Address
2212 or Group Object.

2213 An "update information" caused from nested Datapoints SHALL be excluded, in the unlikely case
2214 where they would exist. However, the KNX Classic "link" between a GO and its superordinate GA is
2215 not regarded as nested, each GA or GO constitutes an independent Datapoint. Consequently, for each
2216 of them an "update information" would be transmitted independently to a subscriber.

2217 **b.** **Device**

2218 A datapoint update as part of a Device. In the unlikely case where they would exist, an "update

2219 information" caused from nested Devices SHALL be excluded.

2220 An update information on this resource path category will inherently result in an update of a GO.

2221 **c.** **Function**

2222 A datapoint update as part of an Application Function. In the rare case where they would exist, an

2223 "update information" caused from nested Application Functions SHALL be excluded.

2224 An update information on this resource path category will inherently result in an update of a GA.

2225 **d.** **Location**

2226 A datapoint update as specified for device or function as part of the **current and subordinated**

2227 locations. How to differentiate current from subordinated see details on HTTP callback subscription.

2228 EXAMPLE 39 An installation with a subordinated location structure with resource path categories/types

2229 and individual names.

|Subscription<br>Type|Resource Path<br>Category|Resource<br>Type|
|---|---|---|
|datapoint|location|`<type>`: "location"|
|datapoint|function|`<type>`: "function"|
|datapoint|datapoint|`<type>`: "datapoint"|
|datapoint|device|`<type>`: "device"|


2230 `o` `site "My castle"` `// subscribe with expand=true notifies on all DPs below`

2231 - `function "Garden light" // a subscription to this element ends here`


-----

2232 - `datapoint "On/Off"` `// a Function Point, in KNX Classic a GA`

2233 - `building "Aux. building"`

2234 - `room "Gadgets"`

2235 `o` `device "8f switch" // subscribe with expand=false notifies on next DPs only`

2236 `o` `datapoint "0/1" // a Point, in KNX Classic a GO`

2237 `o` `datapoint "%"` `// a Point, in KNX Classic a GO`

2238 1.2.5.6.3 WebSocket Subscription

2239 The purpose to specify WebSocket/Messaging for the KNX IoT 3[rd] Party API is to complement the HTTP

2240 Callback based subscription. The aim is to allow API users to access the API via standard Web Sockets or

2241 other messaging protocols like MQTT, STOMP, and similar.

2242 1.2.5.6.3.1 Possible Communication Patterns

2243 The WebSocket KNX IoT 3[rd] Party API should support two main communication scenarios, described

2244 further down.

2245 However, this doesn't exclude further enhancements and modifications, enabling other communication

2246 patterns that could be introduced in the future.

2247 Both communication scenarios cover the Point-to-Point communication pattern between the API client and

2248 the KNX Device/Cloud. Broadcasting or scattering of messages is not taken in into account in this document

2249 but can be a subject of a future extension.

2250 1.2.5.6.3.2 Communication in the Cloud/Internet Environment

2251 In general, the KNX IoT 3[rd] Party API is accessible from both the Internet and the local network. The

2252 provided functionality remains the same; the only aspect that changes is the authorization of the exposed

2253 API endpoints. However, in Cloud/Internet environments, also standard good practices ensuring high

2254 reliability, availability, and scalability of the solution shall be considered. Therefore, the implementation

2255 of the solution should leverage all the usual cloud components like load balancers, message brokers, circuit

2256 breakers, etc.

2257 The following Figure 3 illustrates one of the possible designs of the WS-based solution. The communication

2258 flow for a Cloud/Internet client looks as follows:

2259 1. A client connects to the Cloud and establishes a Web Socket (WS) connection. Preferably, a Secure

2260 Web Socket (WSS) should be used.

2261 2. The connection attempt should be authorized. The authorization type and implementation may differ

2262 based on the Cloud provider; however, a standard OAuth2 authorization flow is preferred.

2263 3. The subsequent communication between the Client and the Cloud can be transferred either via the

2264 WS protocol, or, via any suitable alternative protocol (e.g., MQTT or STOMP) using the WS as a

2265 communication channel/transport layer (e.g., STOMP/MQTT over WS).

2266 4. Alternatively, to the Point 3., a full-featured Message Broker (MB) can be put in the path to act as the

2267 primary communication channel. In this case, all information (like URL, credentials) needed for

2268 establishing the connection to the MB would be passed to the Client via the existing WS connection.

2269 5. To achieve a high availability and scalability of the solution, both the MB and WS API services should

2270 run in several independent instances accessible via load balancers put between the Client and the

2271 services. Alternatively, client-side load balancing can be used.

2272 6. Communication between the Client and the Client's KNX IoT device depends on the Cloud provider;

2273 however, a message-based communication pattern is highly recommended; in this case, the MB

2274 mentioned in the Points above could be re-used.


-----

2275

2276 **Figure 3 - Cloud Environment Setup**

2277 1.2.5.6.3.3 Communication in the Local Network Environment

2278 In the Local Network (LAN) setup, it is assumed that the KNX IoT 3[rd] Party API is served directly by the

2279 KNX IoT device, which is in general resource-constrained with limited CPU count/power and limited

2280 available operational memory and disk space. Therefore, the following setup reduces the number of system

2281 components used to establish and keep the WS connection between a Client and his KNX IoT Device fully

2282 working. The communication flow would then look like this:

2283 1. A Client connects to the KNX IoT Device running the HTTP/WS server and establishes a Web Socket

2284 (WS) connection. Preferably, a Secure Web Socket (WSS) should be used.

2285 2. The connection attempt should be authorized. The authorization type and implementation may differ

2286 depending on the KNX IoT Device provider; however, a standard Basic authorization flow is preferred.

2287 3. The subsequent communication between the Client and the KNX IoT Device can be transferred either

2288 via the WS protocol, or, via any suitable alternative protocol (e.g., MQTT or STOMP) using the WS as a

2289 communication channel/transport layer (e.g., STOMP/MQTT over WS).

2290 4. Since just one physical KNX IoT Device is available serving/processing the content, no load balancing is

2291 needed.


-----

2292

2293 **Figure 4 - Local Network Setup**

2294 1.2.5.6.3.4 Interface Requirements

2295 The following clauses specify explicit technical requirements for the solution.

2296 - The subscription interface SHALL enable bidirectional communication between the 3[rd] Party Client

2297 and the KNX Gateway Server. For example, a browser connects to a KNX Gateway in a local

2298 network, subscribes datapoints and gets a notification when a value changes.

2299 1.2.5.6.3.5 WebSocket Transport Binding

2300 This clause defines a simple transport binding by which a KNX IoT 3rd Party peer and a KNX IoT

2301 Gateway peer, for example in a local network, can transfer messages utilizing the WebSocket protocol as

2302 specified in [RFC6455].

2303 In the following sections, the connection peer initiating the WebSocket connection is referred as the

2304 WebSocket client. The connection peer accepting the WebSocket connection is referred to as the

2305 WebSocket server.

2306 WebSocket connections SHALL apply the WebSocket protocol as specified in [RFC6455] and in the

2307 following subclauses.

2308 Note that the minimum requirement of [RFC6455] is HTTP 1.1. Therefore, for interoperability on HTTP

2309 level, WebSocket servers and WebSocket clients SHALL be able to fall back to HTTP 1.1.

2310 The entire communication consists of two communication patterns, on the one hand establishing the WS

2311 connection via the respective API Endpoint (see clause 1.2.5.6.3.6 and 1.2.5.6.3.7) and on the other hand

2312 bidirectional communication exchanging data according to [RFC6455] section 5 (see clause 1.2.5.6.3.8).

2313 1.2.5.6.3.6 WebSocket Connection

2314 If the WebSocket server agrees to the WebSocket upgrade to the requested subprotocol then it SHALL

2315 respond with an HTTP status code 101 (“Switching Protocols”) and reply with the requested subprotocol

2316 in the Sec-WebSocket-Protocol HTTP header.


-----

2317 The WebSocket server MAY return a redirect response (HTTP 3xx) and/or request HTTP level

2318 authentication. [RFC6455] section 4.2.2 describes the opening handshake in more detail.

2319 If the WebSocket Client does not receive a response with HTTP status code 101 and an HTTP Sec
2320 WebSocket-Protocol equal to the string defined with Sec-WebSocket-Protocol, then the Client SHALL

2321 close the socket connection.

2322 On termination of a WebSocket connection all existing subscriptions SHALL be removed.

2323 1.2.5.6.3.7 WebSocket Header

2324 The WebSocket Protocol connection SHALL be opened as described in Section 4 of the WebSocket

2325 specification [RFC6455]. The initiating Client peer (WebSocket Client) sends a HTTP GET request to the

2326 receiving peer endpoint (the WebSocket Server) identifying “gw.knx.org” version 1.0 as the used

2327 subprotocol.

2328 The following list defines the HTTP header elements of a HTTP WebSocket upgrade request used in the

2329 context of KNX IoT:

2330 **Request-URI** The URI does not give any semantic meaning to this field. An

2331 implementation MAY interpret this field in an implementation-specific

2332 manner.

2333 **Host** Identifies the hostname of the WebSocket server.

2334 **Sec-WebSocket-Protocol** Identifies the WebSocket subprotocol. For KNX IoT, the value SHALL be

2335 set to the US-ASCII text string “gw.knx.org”. This string also identifies

2336 the versioning of the KNX IoT WebSocket protocol. As an example, an

2337 updated protocol version may use the string "2.gw.knx.org".

2338 **Sec-WebSocket-Version** Represents the IANA WebSocket Version Number Registry with current

2339 version 13.

2340 The request from the WebSocket client looks as follows:

2341 `GET /messages/ws HTTP/1.1`

2342 `Host: 12346.gateway.knx.local`

2343 `Upgrade: websocket`

2344 `Connection: Upgrade`


2345 `Sec-WebSocket-Key: dGhlIHNhbXBsZSBub25jZQ==`

2346 `Sec-WebSocket-Protocol: gw.knx.org` `// subprotocol for KNX IoT`

2347 `Sec-WebSocket-Version: 13` `// WebSocket version according to RFC`

2348 The response from the WebSocket server looks as follows:

2349 `HTTP/1.1 101 Switching Protocols`


2350 `Upgrade: websocket` `// upgraded to protocol WebSocket`

2351 `Connection: Upgrade`

2352 `Sec-WebSocket-Accept: s3pPLMBiTxaQ9kYGzzhZRbK+xOo=`

2353 `Sec-WebSocket-Protocol: gw.knx.org`

2354 1.2.5.6.3.8 Command and Event Interaction Model

2355 A message-oriented infrastructure supports sending and receiving messages between distributed systems.

2356 It allows applications to be distributed over heterogeneous platforms and reduces the complexity of

2357 developing applications that span multiple operating systems and network protocols. In a message-oriented

2358 system a producer sends a message to notify consumers of a change in the domain.

2359 A key element of a notification is that the producer potentially does not really care much about the response.

2360 Often it does not expect any answer at all, or if there is a response that the producer does care about, it is

2361 indirect. There would be a separation between the logic flow that sends the message and any logic flow that

2362 responds/reacts to that message. Having no special intent makes messages generic but also less meaningful.

2363 That is why two more concepts are added on top of messages: events and commands.


-----

2364 The document content specification does not include protocol-level routing information (e.g., a destination

2365 URL or topic to which the event is being sent). HTTP, MQTT, STOMP, or a pub/sub bus already defines

2366 semantics for routing. For example, the HTTP binding dictates headers and message body contents.

2367 1.2.5.6.3.8.1 Command Transaction

2368 A command is much more specific than an event. The producer (who sends the command) requests changes

2369 on specific consumers (who take and execute the command). They are named with a verb in the imperative

2370 and may include the entity type, for example, write. Unlike an event, a command is not a statement of

2371 fact; it is only a request, and thus may be refused (in case of refusing it SHALL be expressed with an

2372 appropriate error code).

2373 1.2.5.6.3.8.2 Event Transaction

2374 An event is a message that informs various listeners about something that has happened. It is sent by a

2375 producer that does not know and does not care about the consumers of the event. The events are always

2376 named with a verb of past tense, such as updated event represents something in the past, it can be

2377 considered a statement of fact and used to take decisions in other parts of the system.

2378 1.2.5.6.3.8.3 Transaction Meta Object

2379 A command or event transaction SHALL contain a transaction member that is specified with the

2380 following members.

2381 **Table 14 – Transaction Meta Object Content**

|Member|Purpose|
|---|---|
|`id`|Unique identifier of this transaction, UUID is recommended|
|`type`|Transaction type indicating the command/ event type. Possible type alias and values:<br>**Alias**<br>**Value**<br>**Comment**<br>`<write>` <br>org.knx.gateway.write<br>write new values to IoT Datapoints <br>`<updated>` <br>org.knx.gateway.updated<br>event notification on an IoT Datapoint update <br>`<read>` <br>org.knx.gateway.read<br>read values from IoT Datapoints<br>`<subscribe>` <br>org.knx.gateway.subscribe<br>subscribe to an update of IoT Datapoints<br>`<unsubscribe>` org.knx.gateway.unsubscribe<br>Unsubscribe from updates of IoT Datapoints<br>`<response>` <br>org.knx.gateway.response<br>server response on a prev. client request<br>As a note, compared to the protocol version (Sec-WebSocket-Protocol) the values<br>described here above use a different namespace prefix (_org.knx.*_ vs_gw.knx.org_), the<br>namespaces are not linked. A new protocol (with a different format) can reuse the<br>specified command/event types.|
|`source`|The ID represents the transaction source in the messaging infrastructure. This can be,<br>for example, the WebSocket client (e.g., the KNX IoT 3rd Party API consumer). <br>• The source is usually used as destination for a command response. Here it might<br>be a topic or a resource endpoint or it may also address a different client (the<br>client as such is always known by the server).<br>• The source allows also to address server-specific URL parts in a command<br>request.|
|`lifetime`|A time identifier in seconds. In this specification used as part of:<br>• a `<subscribe>` request, the requested lifetime of a subscription.|
|`datacontenttype`|The (data) content type of the request/ response message body.<br>• the default value SHALL be defined as`application/vnd.api+json`|
|`correlationid`|ID of the command transaction upon which the command has been emitted. Can be<br>used for a correlation between the request command and related response command<br>or event.|


-----

|Member|Purpose|
|---|---|
|`time`|A time identifier, as specified for`attributes` member`timestamp` (see clause<br>1.2.5.3.1.1.). In this specification used as part of:<br>• a `<updated>` event, the time at which an event occurred (the value is in<br>relation to the`timestamp` value as part of the response, but the actual<br>members`time` and`timestamp` are not the same)|
|`query`|An expression to define a filter criterion. In this specification used as part of:<br>• a `<read>` request, to express a filter criterion to return only specific datapoints<br>or a limited number of datapoints|


2382 1.2.5.6.3.8.4 Update and Query Interactions

2383 As a general definition, update and query allow to perform changes of an entity attribute or relation.

2384 The following definitions SHALL be fulfilled for the <read>, <write> and <response> command.

2385 1. The command request/response SHALL include a `transaction` member as part of the top-level

2386 `meta` member and a top-level `data` member. Both members are included in a JSON object, as

2387 specified in JSON API.

2388 2. The transaction member is specified with the format of Transaction Meta Object.

2389 The following definitions SHALL be fulfilled for the <response> command.

2390 1. When the consumer couldn’t process the command correctly the response contains an error that

2391 follows the error object including an additional error description (see clause 1.2.1.6.6).

2392 _1.2.5.6.3.8.4.1 Write Item Command_

2393 Set a certain amount of IoT Datapoint values (at once). Other resource items are not supported by this

2394 service.

2395 In case of writing a Datapoint value, a client is expecting a status such as getting an (execution)

2396 confirmation from the server, for this see clause 1.2.5.4 section Installation State Data Synchronization.

2397 **<Command Request> Content**

2398 A resource item or array of resource items can be updated by sending a <write> command that

2399 contains:

2400 - A transaction member that SHALL include at least a type and id member.

2401 `o` `type`  is "org.knx.gateway.write"

2402 `o` `id`  preferably an UUID

2403 - A top-level data member, as specified in clause 1.2.5.4.1 with the service for writing an IoT

2404 Datapoint.

2405 **<Command Response> Content**

2406 A resource item or array of resource items as part of the <response> command contains:

2407 - A transaction member that SHALL include at least a type and id member.

2408 `o` `type`  is "org.knx.gateway.response"

2409 `o` `id`  preferably an UUID

2410 `o` `source  may be used`

2411 `o` `correlationid`  if expressed the member value SHALL contain the transaction

2412 member id from the <write> command


-----

2413 - A top-level data member that SHALL be null, expressing that no data are expected.

2414 `o` It expresses the same behavior as an HTTP response code 202.

2415 _1.2.5.6.3.8.4.1.1_ _Examples_

2416 `<write> command  3[rd] Party Peer (Producer) -> KNX IoT 3[rd] Peer (Consumer)`

```
 meta:
  transaction: 
   id: c1 // no UUID f. improved readability
   type: org.knx.gateway.write
   source: /topic/client/1  // optional, manage several clients
 data:  // data array of items
  - id: 8fb16f51-4955-4fa7-a926-e36ab9ecddf8
   type: datapoint
   attributes:
    value: "25.0"

```

2417 `<response> command  KNX IoT Gateway Peer (Producer) -> 3[rd] Party Peer (Consumer)`

```
 meta: 
  transaction: 
   id: s1 // no UUID f. improved readability
   type: org.knx.gateway.response
   source:/topic/gateway/1       
   correlationid: c1 // id from write command
 data: null // no data expected, same as HTTP 202

```

2418 `<response> command  KNX IoT Gateway Peer (Producer) -> 3[rd] Party Peer (Consumer)`
```
      meta: 
       transaction: 
        id: s1 // no UUID f. improved readability
        type: org.knx.gateway.response
        source: /topic/gateway/1
        correlationid: c1  // id from write command
      error:  // server error on previous request
       detail: Home controller not accessible
       title: Request Timeout  // error title
       type: "about:blank"    // optional error type
       status: 408         // timed out (unused) client

```
2419 _1.2.5.6.3.8.4.2 Read Item Command_

2420 Read a certain amount of IoT Datapoint values (at once). Other resource items are not supported by this

2421 service.

2422 A successful <read> command will result in the command consumer responding to the source peer with

2423 the current attributes values by sending a <response> command.

2424 **<Command Request> Content**

2425 A resource item or array of resource items can be read by sending a <read> command that contains:

2426 - A transaction that SHALL include at least a type and id member.

2427 `o` `type`  is "org.knx.gateway.read"

2428 `o` `id`  preferably an UUID

2429 `o` `query`  optional query parameter as specified in clause 1.2.1.4

2430 `o` A top-level data member that SHALL express either an empty array (to read the entire

2431 collection of datapoints) or one assigned item (to read an individual datapoint) that SHALL

2432 include:

2433 `o` `type`  is "datapoint"

2434 `o` `id`  the reference to the (to be read) resource item, preferably an UUID


-----

2435 **<Command Response> Content**

2436 A resource item or array of resource items part of the <response> command contains:

2437 - A transaction member that SHALL include at least a type and id member.

2438 `o` `type`  is "org.knx.gateway.response"

2439 `o` `id`  preferably an UUID

2440 `o` `source  may be used`

2441 `o` `correlationid`  if expressed the member value SHALL contain the transaction

2442 member id from the <read> command

2443 - A top-level data member with assigned items, each resource item SHALL include:

2444 `o` `type`  is "datapoint"

2445 `o` `id`  the reference to the (read out) resource item, preferably an UUID

2446 `o` API Reference members as specified for the attributes member in clause 1.2.5.4

2447 In case the data member from the request expresses one individual datapoint together with the query

2448 parameters as part of the transaction member, the error handling from clause 1.2.1.4.4 SHALL be

2449 applied.

2450 In case the data member from the request is expressing more than one individual datapoint, the KNX

2451 IoT 3[rd] Party API Server SHALL respond with an error that follows the error object with error code

2452 `400.`


2453 NOTE 69 This error behavior has a higher priority over a possible error handling of attached query

2454 parameters.

2455 In case the data member from the request was expressing an empty array, a collection member

2456 according to clause 1.2.3.2 SHALL be included as part of the top-level `meta` member.

2457 _1.2.5.6.3.8.4.2.1_ _Examples_

2458 **Reading an individual item**

2459 `<read> command  3[rd] Party Peer (Producer) -> KNX IoT Gateway Peer (Consumer)`

```
 meta:
  transaction:
   id: c1 // no UUID f. improved readability
   type: org.knx.gateway.read
   source: /topic/client/1 // optional, manage several clients
 data:  // read one DP item
  - id: 8fb16f51-4955-4fa7-a926-e36ab9ecddf8
   type: datapoint

```

2460 `<response> command  KNX IoT Gateway Peer (Producer) -> 3[rd] Party Peer (Consumer)`

```
 meta:
  transaction: 
   id: s1 // no UUID f. improved readability
   type: org.knx.gateway.response
   source: /topic/gateway/1
   correlationid: c1 // id from read command
 data:  // response one DP item
  - id: 8fb16f51-4955-4fa7-a926-e36ab9ecddf8
   type: datapoint
   attributes: 
    unit: unit:DEG_C     // unit present, no enumerations …
    valueType: string  // hence this it is a numeric type
    value: "25.0" 
    timestamp: 2021-02-17T17:17:17Z

```

-----

2461 **Reading a collection of items with a query filter**

2462 `<read> command  3[rd] Party Peer (Producer) -> KNX IoT Gateway Peer (Consumer)`

```
 meta:
  transaction:
   id: c1 // no UUID f. improved readability
   type: org.knx.gateway.read
   source: /topic/client/1 // optional, manage several clients
   query: filter[writable]=true // optional, query filter
 data: [] // read a collection of DP items

```

2463 `<response> command  KNX IoT Gateway Peer (Producer) -> 3[rd] Party Peer (Consumer)`

```
 meta:
  collection
   number 0
   size: 3
   total: 153 
  transaction: 
   id: s1 // no UUID f. improved readability
   type: org.knx.gateway.response
   source: /topic/gateway/1
   correlationid: c1 // id from read command
 data:  // response 3 DP items
  - id: 8fb16f51-4955-4fa7-a926-e36ab9ecddf8
   type: datapoint
   attributes: 
    unit: unit:DEG_C     // unit present, no enumerations
    valueType: string  // therefore it is a numeric type
    value: "25.0" 
    timestamp: 2021-02-17T17:17:17Z
  - id: 8fb16f51-4955-4fa7-a926-e36ab9ecddf9
   type: datapoint
   attributes: 
    enum: [on,off]   // enum type  
    valueType: string
    value: "on"
    timestamp: 2021-02-16T17:17:17Z
  - id: 8fb16f51-4955-4fa7-a926-e36ab9ecddfa
   type: datapoint
   attributes: 
    enum: [on,off]   // enum type  
    valueType: string
    value: "off"
    timestamp: 2021-02-15T17:17:17Z

```

2464 1.2.5.6.3.8.5 Subscribe Interactions

2465 As a general definition, subscriptions inform a subscriber of changes in an entity attribute or relation.

2466 The following definitions SHALL be fulfilled for the <subscribe>, <unsubscribed>,

2467 <response> command and <updated> event.

2468 1. The command request/response or event request SHALL include a `transaction` member as

2469 part of the top-level meta member and a top-level `data` member. Both members are included in a

2470 JSON object, as specified in JSON API.

2471 2. The transaction member is specified with the format of Transaction Meta Object.

2472 The following definitions SHALL be fulfilled for the <response> command.

2473 1. When the consumer couldn’t process the command correctly the response contains an error that

2474 follows the error object including an additional error description (see clause 1.2.1.6.6).


-----

2475 _1.2.5.6.3.8.5.1 Subscribe Command_

2476 Subscriptions can be created by sending an <subscribe> command. A <response> command is

2477 sent back to the <subscribe> producer if the command has successfully subscribed requested items.

2478 **<Command Request> Content**

2479 A resource item or array of resource items can be subscribed upon by sending a <subscribe>

2480 command that contains:

2481 - A transaction member that SHALL include at least a type and id member.

2482 `o` `type`  is org.knx.gateway.subscribe

2483 `o` `id`  preferably an UUID

2484 `o` `source`  if missing the KNX IoT 3rd Party Server SHOULD assign a temporary source id

2485 to this connection (e.g., WebSocket Connection), if the WS connection terminates then the

2486 temporary source id (and all subscriptions) SHALL be removed

2487 `o` `datacontenttype`  MAY be included, if missing, the default value is assumed.

2488 `o` `lifetime ` MAY be included, for the definition see at HTTP Callback in clause

2489 1.2.5.6.4.4

2490 - A top-level data member that SHALL include at least a type and relationships member:

2491 `o` `type`  is "subscription"

2492 `o` `relationships`  A member that includes a subscriptionDatapoints member

2493 from clause 1.2.3.3.2, specified with the same request content as for the HTTP Callback

2494 subscription, see clause 1.2.5.6.4.5.

2495 **<Command Response> Content**

2496 A resource item part of the <response> command contains:

2497 - A transaction member that SHALL include at least a type and id member.

2498 `o` `type`  is org.knx.gateway.response

2499 `o` `id`  preferably an UUID

2500 `o` `source ` may be used

2501 `o` `correlationid`  member value SHALL contain the transaction member id from

2502 the <subscribe> command

2503 `o` `lifetime ` to specify how long (in seconds) the subscription is valid. The lifetime

2504 member contains the value from the subscribe command or the maximum possible

2505 subscription lifetime (default value from KNX IoT 3rd Party Server).

2506 - A top-level data member that SHALL include at least a type, relationships and id member:

2507 `o` `type`  is subscription

2508 `o` `id`  the reference of the generated subscription resource, preferably an UUID

2509 `o` `relationships`  A member that includes a subscriptionDatapoints member

2510 from clause 1.2.3.3.2, specified with the same response content as for the HTTP Callback

2511 Subscription, see clause 1.2.5.6.4.5.

2512 _1.2.5.6.3.8.5.1.1_ _Examples_

2513 `<subscribe> command  3[rd] Party Peer (Producer) -> KNX IoT Gateway Peer (Consumer)`

```
 meta:
  transaction 
   id: c1 // no UUID f. improved readability
   type: org.knx.gateway.subscribe

```

-----

```
   source: /topic/client/1
   lifetime: 3600 // timeout requested by client
 data: 
   type: subscription
   relationships:
    subscriptionDatapoints:
     data: // data array of items
     - id:8fb16f51-4955-4fa7-a926-e36ab9ecdda       
      type: location  // a location item id
      meta: 
       expand: true     // enable ext. notification behavior
     - id:3c8af987-6422-5fa6-c878-e36ab9ecddb 
      type: function  // a function item id
     - id:3c8af987-6422-5fa6-c878-e36ab9ecddc 
      type: device   // a device item id

```

2514 `<response> command  KNX IoT Gateway Peer (Producer) -> 3[rd] Party Peer (Consumer)`

```
 meta: 
  transaction: 
   id: s1 // no UUID f. improved readability
   type: org.knx.gateway.response
   source: /topic/gateway/1
   lifetime: 3600  // mirrored timeout
   correlationid: c1 // id from subscribe command
 data: 
  id: 5942e46c-aacc-48d5-840b-4c00        // generated subscription id, UUID
  type: subscription
  relationships:
   subscriptionDatapoints: // link
    links:
     related: /subscriptions/5942e46c-aacc-48d5-840b-4c00/datapoints

```

2515 _1.2.5.6.3.8.5.2_ _Unsubscribe Command_

2516 Existing subscriptions can be dropped by sending an <unsubscribe> command. A <response>

2517 command is sent back to the <unsubscribe> producer if the command was successful.

2518 NOTE 70 To align the HTTP Callback and WebSocket subscription behavior only one individual subscription

2519 can be dropped per command request.

2520 **<Command Request> Content**

2521 A subscription item can be dropped by sending a <unsubscribe> command that contains:

2522 - A transaction member that SHALL include at least a type and id member.

2523 `o` `type`  is "org.knx.gateway.unsubscribe "

2524 `o` `id`  preferably an UUID

2525 - A top-level data member that SHALL include at least a type and id member:

2526 `o` `type`  is "subscription"

2527 `o` `id`  the reference to the subscription to be dropped, preferably an UUID

2528 **<Command Response> Content**

2529 - A transaction member that SHALL include at least a type and id member.

2530 `o` `type`  is org.knx.gateway.response

2531 `o` `id`  preferably an UUID

2532 `o` `source ` may be used

2533 `o` `correlationid`  member value SHALL contain the transaction member id from

2534 the <unsubscribe> command


-----

2535 - A top-level data member that SHALL be null, expressing that no data is expected.

2536 `o` This defines the same behavior as an HTTP response code 204, used also when dropping a

2537 subscription on the HTPP Callback Subscription interface.

2538 _1.2.5.6.3.8.5.2.1_ _Examples_

2539 `<unsubscribe>` command  3[rd] Party Peer (Producer) -> KNX IoT Gateway Peer (Consumer)

```
 meta:
  transaction:
   id: c1 // no UUID f. improved readability
   type: org.knx.gateway.unsubscribe,
   source: /topic/client/1
 data:  // data array of items
  id: 9ac984c8-8614-4fa7-c878-aef98755afc1,
  type: subscription

```

2540 `<response> command  KNX IoT Gateway Peer (Producer) -> 3[rd] Party Peer (Consumer)`
```
      meta:
       transaction: 
        id: s1 // no UUID f. improved readability
        type: org.knx.gateway.response
        source: /topic/gateway/1
        correlationid: c1
      data: null // no data expected, same as HTTP 204

```
2541 _1.2.5.6.3.8.5.3_ _Item Updated Event_

2542 Sends a <updated> event from the KNX IoT 3[rd] Party Sever.

2543 NOTE 71 The event supports to inform on a single Datapoint or several Datapoints simultaneously.

2544 **<Event Request> Content**

2545 Subscribers are notified with a resource item or array of resource items by sending an <updated>

2546 command that contains:

2547 - A transaction member that SHALL include at least a type and id member.

2548 `o` `type`  is "org.knx.gateway.updated"

2549 `o` `id`  preferably an UUID

2550 `o` `time`  SHALL be included, as specified for the transaction member <updated> in

2551 Table 14

2552 `o` `datacontenttype`  MAY be included, if missing, the default value is assumed

2553 - A top-level data member, as specified with the Message body for the HTTP Callback Subscription.

2554 _1.2.5.6.3.8.5.3.1_ _Examples_

2555 `<updated> event`  KNX IoT Gateway Peer (Producer) -> 3[rd] Party Peer (Consumer)

```
 meta:
  transaction: 
   id: s1
   type: org.knx.gateway.updated
   source: /topic/gateway/1
   datacontenttype: application/vnd.api+json
   time: 2021-02-17T17:17:17Z
 data: // data array of items
  - id: 8fb16f51-4955-4fa7-a926-e36ab9ecddf8  // id of a DP
   type: datapoint
   links:
    self: /datapoints/8fb16f51-4955-4fa7-a926-e36ab9ecddf8
   attributes: 
    value: "25.0" // value is present

```

-----

```
         timestamp: 2021-02-17T17:17:17Z // last update
       - id: 8fb16f51-4955-4fa7-a926-e36ab9ecddf9  // id of a DP
        type: datapoint
        links:
         self: /datapoints/8fb16f51-4955-4fa7-a926-e36ab9ecddf9
        attributes: 
         value: "on" // value is present
         timestamp: 2021-02-17T17:17:17Z // last update

```
2556 1.2.5.6.4 HTTP Callback Subscription

2557 The resource path category subscriptionwith its defined access methods allows a KNX IoT 3[rd] Party

2558 Client to subscribe on a update of specific items, available in an Installation.

2559 The defined access methods allow to create, read, maintain or delete existing subscriptions.

2560 1.2.5.6.4.1 Specific Requirements

2561 For the subscription interface the following requirements SHALL be fulfilled.

2562 1. The KNX IoT 3[rd] Party Server MAY itself cancel/delete an available subscription for any reason, the

2563 server does not necessarily need to wait until the KNX IoT 3[rd] Party Client itself cancels a

2564 subscription, such as in case the notification Endpoint Service returns an error code 4xx/5xx or is

2565 simply gone (realized after several unacknowledged event notification attempts).

2566 NOTE 72 A KNX IoT 3rd Party Client should always record successfully created subscriptions. This list is the

2567 only reference and serves as an overview for the KNX IoT 3[rd] Party Client on created

2568 subscriptions. If the KNX IoT 3rd Party Client does not need a subscription anymore, it is

2569 responsible for deleting it.

2570 A KNX IoT 3rd Party Client may query (and compare) all subscriptions present at the server with

2571 the corresponding resource path /subscriptions.

2572 - It is RECOMMENDED that a KNX IoT 3[rd] Party Server restores existing subscriptions on power up,

2573 for example after a power fail or reboot.

2574 1.2.5.6.4.2 Workflow

2575 The figure below provides an overview of the entire workflow when subscribing to an event:

2576 - The Not Standardized Part allows the creation of a notification endpoint and retrieving the URL

2577 information.

2578 The Endpoint Service is addressed via an Endpoint URL that shall be delivered at KNX IoT 3[rd] Party

2579 Client request. The interface – between the Endpoint Service and KNX IoT 3[rd] Party Client - is

2580 proprietary and is therefore not part of this specification. The following security requirements are

2581 RECOMMENDED.

2582 - An authorized access from the KNX IoT 3[rd] Party Client to the Endpoint.

2583 - A secure transport of the endpoint’s URL from the Endpoint to the KNX IoT 3[rd] Party Client.

2584 - The Standardized Part allows to define a subscription from the KNX IoT 3[rd] Party Client to an

2585 event at the KNX IoT 3[rd] Party Server, moreover, to express an <Event notification> from the

2586 KNX IoT 3[rd] Party Server to the notification Endpoint Service.


-----

2587

2588 **Figure 5 – Process workflow on subscription**

2589 1.2.5.6.4.3 Components

2590 The following main components are involved in the above-described workflow.

2591 - KNX IoT 3rd Party Server, KNX IoT 3rd Party Client

2592 For the definition, please refer to [02].

2593 - Endpoint Service

2594 A local or remote notification service notifying the KNX IoT 3rd Party Client. The service MAY be

2595 part of the KNX IoT 3[rd] Party Server.

2596 NOTE 73 There are many reasons to keep the notification Endpoint separate, rather than include it directly

2597 into the KNX IoT 3[rd] Party Server such as:

2598 - having a performant centralized Endpoint Service for more than one KNX IoT 3[rd] Party Server

2599 respectively their hosted Installations;


KNX IoT 3[rd] Party KNX IoT 3[rd] Party

Client Sever

#### (1)

 (2)
Response

#### (3)
200 **(4)**

Read add. informa�on on ID[1]

Respond … ID[1]

Read add. informa�on on ID[2]

Respond … ID[2]

KNX IoT 3[rd] Party

KNX IoT 3[rd] Party
Sever

Client


2600 - support a possible notification timeseries or handle unsuccessfully delivered client

2601 notifications to one or more clients;

2602 - handle renewed client addresses that need to be notified since clients may change (or lose)

2603 their IP address.


-----

2604 1.2.5.6.4.4 Interface Requirements

2605 For the <Subscription `Interface> the following requirements SHALL be fulfilled.`

2606 - It communicates with HTTP as specified in clause 1.2.1.1.2 with security extension HTTP over TLS

2607 (HTTPS) as specified in clause 1.2.5.6.1, using the standard port 443.

2608 - It can handle an X.509v3 certificate, with defined SAN extension field.

2609 The <Endpoint `Service> server certificate SHALL contain the subject name as well as the SAN`

2610 extension field, the URL authority part for the Endpoint Service SHALL be set in the common name

2611 (CN).

2612 - The SAN extension field SHALL contain a copy of the CN of the subject name as a URL authority part

2613 entry (as a note, the use of subject name field only is deprecated).

2614 - The SAN extension field MAY contain additional URL authority part entries of the Endpoint Service.

2615 - The authority part MAY contain also optional userinfo or port information for each URL authority

2616 part entry.

2617 [EXAMPLE 40 SAN is set to api.notserv.com or bulknotification.notserv.com or similar.](http://api.notserv.com/)

2618 1.2.5.6.4.5 Services

2619 It is possible to retrieve or set the following items.

2620 `GET /subscriptions`

2621 The defined access methods allow to read all subscription items of the node. The basic response

2622 information contains the following data:

2623 1. a collection information expressed with the top-level meta member, for this see clause 1.2.3.2;

2624 2. assigned items, directly embedded as part of the top-level data member, each resource item

2625 including:

2626 `o` `<id> and <type> information, see clause 1.2.3.3`

2627 - `<type> is "subscription"`

2628 - `<id> is preferably a UUID`

2629 `o` some relationships members from clause 1.2.3.3.2 as listed below, each expressing a

2630 `links member as a related link to another resource`

2631 `o` a subscriptionDatapoints member, expressing a link to the actual subscription, with

2632 all resulting IoT Datapoints included

2633 `o` some attributes member, expressing the callback data:

2634 `o` `url member`

2635 `o` `caCert member`

2636 `o` `secret member`

2637 `o` lifetime member

2638 NOTE 74 For security reasons it is strongly recommended to NOT include the above subscription call

2639 back data in the response when operating in public environments. In a local environment the

2640 properties may be included in the response (such as for debug reasons).


2641 `POST /subscriptions`

2642 - The defined access methods allow to create a subscription. The basic request information contains

2643 the following data:

2644 1. assigned items, directly embedded as part of the top-level data member, including:

2645 `o` `<type> information, see clause 1.2.3.3`


-----

2646 - `<type> is "subscription"`

2647 NOTE 75 <id> shall NOT be present when generating a subscription item (client generated ids are not

2648 recommended in this specification)

2649 `o` some relationships members from clause 1.2.3.3.2 as listed below, expressing a (non
2650 top-level) data member as an array of resource identifiers

2651 `o` a subscriptionDatapoints member, expressing the resource items to be subscribed as

2652 an array, each item including a mandatory <id> and <type> information:

2653 - `<type> the resource type of the (to be subscribed) resource item[22]`

2654 - `<id> the id of the resource item to be subscribed, preferably an UUID`

2655 - `expand an optional member as part of a meta member`

2656 The expand member specifies the behavior of the subscription notification characteristic

2657 per resource item. If the member is omitted in the request the Default Behavior as specified

2658 below SHALL be applied to the corresponding resource item.

2659 Default Behavior

2660 The default behavior does not notify on further sub structuring. It specifies a subscription to

2661 all IoT Datapoints directly assigned to the selected resource as given by the type member

2662 from above.

2663 In case of a type from the resource path category location the directly included substructures

2664 that hosts datapoints are considered (such as devices or application functions directly as part

2665 of a location).

2666 `expand : false`

2667 Any <type> described in clause 1.2.5.6.1 can meaningfully be applied in this context.

2668 Expanded Behavior

2669 The expanded behavior allows to notify on further sub structuring. It specifies a subscription

2670 to all IoT Datapoints directly assigned to the selected resource and subordinated elements as

2671 given by the type member from above.

2672 `expand : true`

2673 Only a <type> of resource path category location as described in clause 1.2.5.6.1 is

2674 meaningful in this context.

2675 JSON API requires for each expressed resource type as part of the relationships member

2676 from above a corresponding resource path, in this specification they are not specified, this

2677 deviates from JSON API, clause 7.1.

2678 `o` some attributes members, expressing the necessary callback data:

2679 Parameters necessary for communication between the KNX IoT 3rd Party Server and the

2680 _notification Endpoint Service. If there is a change onto the subscribed items on the KNX IoT 3[rd]_

2681 Party Server, a message is sent to the notification Endpoint Service, which will subsequently

2682 notify the KNX IoT 3[rd] Party Client.

2683 `o` url member

22 For allowed subscription types, see clause 1.3.2.6.1.


-----

2684 A mandatory unique Endpoint URL such as previously generated by the notification Endpoint

2685 Service, part of the Not Standardized Part of the subscription workflow.

2686 Consequently, the client is aware of this URL as an Endpoint explicitly created to receive a

2687 specific kind of <Event notification> messages. Hence, messages that will be received at this

2688 Endpoint shall not be expressed with a dedicated type update or similar as part of the message

2689 body, as it is done for the Transaction Meta Object (see clause 1.2.5.6.3.8.5.3).

2690 It is RECOMMENDED to use an HTTPS connection to ensure that the <Event notification>

2691 communication (see Figure 5) cannot be manipulated.

2692 `o` `caCert member`

2693 Is optionally used to verify the identity of the notification Endpoint Service by the KNX IoT 3[rd]

2694 Party Server to trust the notification Endpoint Service URL.

2695 For this, the server compares the authority part (= domain, see clause 1.2.4) from the url

2696 member with the SAN extension from the Endpoint Service server certificate.

2697 However, the KNX IoT 3[rd] Party Client can also set the caCert member to indicate to the KNX

2698 IoT 3[rd] Party Server which certificate to use (in case the trust domain between KNX IoT 3[rd] Party

2699 Server and notification Endpoint Service is different).

2700 The certificate is preferably an X.509v3 certificate [RFC5280] and SHALL be PEM [RFC7468]

2701 encoded.

2702 `o` `secret member`

2703 Is mandatorily used so that the _notification Endpoint Service can trust the KNX IoT 3[rd] Party_

2704 Server as it’s providing the correct secret. The secret is generated by the notification Endpoint

2705 Service in step (1) and provided to the KNX IoT 3[rd] Party Client (see Figure 5).

2706 `o` lifetime member

2707 Is optionally used so that the KNX IoT 3[rd] Party Client can specify how long (in seconds) the

2708 subscription is valid. Corresponding subscriptions are removed after the lifetime is expired.

2709 If the lifetime member was missing in the request, corresponding subscriptions are removed

2710 after an individual maximum time, set by the KNX IoT 3rd Party Server (this also allows to

2711 define a nearly infinite lifetime). The value "0" SHALL not be used.

2712 A negative lifetime value SHALL be handled as an error with the error code 500 as described

2713 below. A lifetime value with "0" SHALL be handled as a described above, with no

2714 `lifetime member as part of the request.`

2715 NOTE 76 Developers prefer altering only the values as part of the (same) request body always

2716 including the lifetime member.

2717 - The basic response information contains the following data:

2718 1. assigned items, directly embedded as part of the top-level data member, each resource item

2719 including:

2720 `o` `<id> and <type> information, see clause 1.2.3.3`

2721 - `<type> is "subscription"`

2722 - `<id> is preferably a UUID, the reference of the generated subscription resource`

2723 `o` a relationships member from clause 1.2.3.3.2 as listed below, each expressing a

2724 `links member as a related link to another resource`

2725 `o` a subscriptionDatapoints member, expressing a link to the actual subscription, with

2726 all resulting IoT Datapoints included

2727 In case of success the KNX IoT 3[rd] Party Server shall respond with status code 201. In case of any error

2728 the following applies:


-----

2729 `o` The KNX IoT 3[rd] Party Server SHALL respond with an additional error object. To allow a problem

2730 investigation, details of the failed subscription request SHALL be added to the error object with the

2731 `detail member, additional vendor specific members are RECOMMENDED (see clause 1.2.1.6.6).`

2732 - None of the requested subscriptions SHALL be generated at the KNX IoT 3[rd] Party Server. This also

2733 includes the case where – with one single individual error – it would be possible to create the (other)

2734 subscriptions (such as five out of six datapoints as part of a room).

2735 `o` An error is present if the item to be subscribed does not exist (holds true for all allowed

2736 resource types).

2737 `o` An error is not present if the item to be subscribed does not contain Datapoints (such as a room

2738 with no Datapoints configured).

2739 In case the KNX IoT 3[rd] Party Server cannot maintain more subscriptions the KNX IoT 3[rd] Party Server

2740 SHALL respond with error code 503.

2741 NOTE 77 This error is closely related to the values of the

2742 `attributes member maxSubscriptions and currentSubscriptions.`

2743 In case of any other error, the KNX IoT 3[rd] Party Server SHALL respond with error code 500.

2744 `POST <URL> HTTP/ 1.1`

2745 Sends a <Event notification> message (see Figure 5) from the KNX IoT 3[rd] Party Sever to the

2746 _notification Endpoint Service._

2747 NOTE 78 The event supports informing on a single Datapoint or several Datapoints simultaneously.

2748 The basic request information contains the following data:

2749 **Message request-line**

2750 - **<URL>**

2751 Specified with the value of the url member from the creation of the subscription.

2752 **Message headers**

2753 - **Host**

2754 Mandatory according to [RFC7230] clause 5.4

2755 - **X-Callback-Signature**

2756 A base64 encoded HMAC-SHA256 signature as a concatenation of the entire service request-line,

2757 HTTP header values of Host, Date, Content-Length, and the entire message body. If the signature

2758 fails during a validation, the notification is dropped by the client.

2759 The secrecy key to generate the HMAC is part of the subscription request (secret member).

2760 - **Content-Length**

2761 length of message body in bytes, according to [RFC7230] clause 3.3.2

2762 - **Date**

2763 according to [RFC7231] clause 7.1.1.2

2764 **Message body**

2765 `o` assigned items, directly embedded as part of the top-level data member, each resource item

2766 including:

2767 `o` `<id> and <type> information, see clause 1.2.3.3`

2768 - `<type> is "datapoint"`

2769 - `<id> is preferably an UUID, the reference to the (notifying) resource item`

2770 `o` a links member from clause 1.2.3.3.3, expressing a self member as a link to the actual

2771 IoT Datapoint

2772 `o` some attributes members, expressing IoT Datapoints attributes including optional

2773 information, see 1.2.3.3.1.


-----

2774 `o` the API reference member value SHALL be defined as specified in clause 1.2.5.4

2775 `o` the value timestamp SHALL be defined as specified

2776 In the current specification only member value and timestamp can be changed at Runtime,

2777 when generating the event notification message body, it is also assumed that both members are

2778 always applicable with an actual value.

2779 The consumer SHALL interpret missing attributes members as if they were included with

2780 their last values, NOT as null values. The statement serves as a definition if vendor specific

2781 `attributes members are included, for this it is strongly recommended to consider the clause`

2782 1.2.3.3.5.

2783 NOTE 79 The timestamp member is always part of each resource item (layer independent data

2784 approach), even if an occurrence time is already conveyed also as HTTP message header or

2785 as part of the WebSocket transaction member.


2786 In case of success the notification Endpoint Service shall respond to the KNX IoT 3[rd] Party Server with status code

2787 `200.GET /datapoints/{datapointId}/subscriptions`

2788 Get a collection of all subscription items from the server in which an IoT Datapoint with id

2789 {datapointId}[ 23)] is included. The basic response information contains the following data:


2790 `o` as specified for the resource path GET /subscriptions above

2791 `GET /subscription/{id}`

2792 Get a single subscription item from the server with id {id}. The basic response information contains the

2793 following data:

2794 `o` as specified for an individual item as part of the resource path GET /subscriptions above

2795 `DELETE` `/subscription/{id}`

2796 Deletes a single subscription item from the server with subscription {id}.

2797 `PATCH` `/subscription/{id}`

2798 Updates a single subscription item at the server with subscription {id}. The basic request information

2799 contains the following data:

2800 1. assigned items, directly embedded as part of the top-level data member, including:

2801 `o` `<id> and <type> information, see clause 1.2.3.3`

2802 - `<type> is "subscription"`

2803 - `<id> is preferably a UUID`

2804 `o` some attributes members, expressing the callback data to be updated:

2805 `o` `url member (may need change)`

2806 `o` `caCert member (may need change)`

2807 `o` `secret member (a subscription may expire and needs to be refreshed)`

2808 `o` `lifetime member (may need change)`

2809 For details of the above-described callback data please refer to the service POST

2810 `/subsrcriptions. It shall be ensured that updated/overwritten (untouched) properties do not`

2811 impact the current operational state.

2812 As a note, with this access method it is not possible to perform the following tasks:

2813 `o` add new items on which one wishes to subscribe to the existing subscription

2814 `o` overwrite the current subscription notification characteristics

23) With the{datapointId} a Function Point or Point can be addressed.


-----

2815 - A full reconfiguration of an (individual) subscription is only possible with the deletion of the current

2816 subscription and the re-creation of a new subscription.

2817 Examples

2818 Figure 5 - (2)

2819 A KNX IoT 3[rd] Party Client subscribes to several items from an KNX IoT 3[rd] Party Server.
```
      data: 
       type: subscription
       attributes:
        url: https://api.notserv.com/updates // callback URL  
        secret: TheBestPasswordEver // secret    
        caCert: -----BEGIN CERTIFICATE-----  // optional CA certificate
            MIIEpQIBAAKCAQEA8 … Oz+b3mZxGIPQ=
            -----END CERTIFICATE----- 
        lifetime: 3600  // optional lifetime
       relationships:
        subscriptionDatapoints:
         data: // data array of items
          - id:8fb16f51-4955-4fa7-a926-e36ab9ecdda       
           type: location  // a location item id
           meta: 
            expand: true     // enable ext. notification behavior
          - id:3c8af987-6422-5fa6-c878-e36ab9ecddb 
           type: function  // a function item id
          - id:3c8af987-6422-5fa6-c878-e36ab9ecddc 
           type: device    // a device item id

```
2820 A KNX IoT 3[rd] Party Server responds the following example data.
```
      data: 
       id: 5942e46c-aacc-48d5-840b-4c00        // generated subscription id, UUID
       type: subscription
       relationships:
        subscriptionDatapoints: // link
         links:
          related: /subscriptions/5942e46c-aacc-48d5-840b-4c00/datapoints

```
2821 Figure 5 - (3)

2822 A KNX IoT 3[rd] Party Server notifies with an update event of two Datapoint items to the notification

2823 Endpoint Service api.notserv.com.

2824 `POST https://api.notserv.com/updates HTTP/1.1` `// URL from post /subscription req.`

2825

2826 `Host: api.notserv.com`

2827 `X-Callback-Signature: CQ93mWnVaWyC3dpjLTme/KIfgN+CX7SBfyoUZL6HYC0=`

2828 `Content-Length: 362` `// example`

2829 `Date: Fri, 18 Sep 2020 08:57:24 GMT`

2830 `// empty line, according to [RFC7230]`

2831 `data:` `// array, top JSON object { and } omitted`

2832 `- id: 8fb16f51-4955-4fa7-a926-e36ab9ecddf8` `// id of a DP`

2833 `type: datapoint`

2834 `links:`

2835 `self: /datapoints/8fb16f51-4955-4fa7-a926-e36ab9ecddf8`

2836 `attributes:`

2837 `value: "25.0"` `// value is present`

2838 `timestamp: 2021-02-17T17:17:17Z` `// last update`

2839 `- id: 8fb16f51-4955-4fa7-a926-e36ab9ecddf9` `// id of a DP`

2840 `type: datapoint`

2841 `links:`

2842 `self: /datapoints/8fb16f51-4955-4fa7-a926-e36ab9ecddf9`

2843 `attributes:`

2844 `value: "on"` `// value is present`

2845 `timestamp: 2021-02-17T17:17:17Z` `// last update`


-----

2846 Figure 5 - (4)

2847 The notification Endpoint Service responds (in case of success) to the KNX IoT 3[rd] Party Server with

2848 status response code 200.

2849 `HTTP/1.1 200 Ok`

2850 **1.2.5.7** **Timeseries Data**

2851 The resource path category timeseries with its defined access methods allows a KNX IoT 3[rd] Party Client

2852 for example to read the timeseries of an IoT Datapoint, respectively its values and its occurrence.

2853 The defined access methods allow to read resources. The basic response information contains the

2854 following data:

2855 1. in case of a collection of timeseries items, a collection information expressed with the (top-level)

2856 `meta` member, for this see clause 1.2.3.2;

2857 2. assigned items, directly embedded as part of the top-level data member, each resource item

2858 including:

2859 `o` `<id> and <type> information, see clause 1.2.3.3`

2860 - `<type> is “timeseries”`

2861 - `<id> is preferably a UUID`

2862 `o` some relationships member from clause 1.2.3.3.2 as listed below, each expressing a

2863 `links member as a related link to another resource`

2864 `o` a timeseriesDatapoint member, expressing a link to the actual IoT Datapoint to

2865 which this time series item is related

2866 `o` some attributes members, expressing timeseries attributes including optional

2867 information, see 1.2.3.3.1.

2868 `o` The API reference member value SHALL be defined as specified for an IoT Datapoint.

2869 `o` The API reference member timestamp SHALL be defined as specified.

2870 In case a valid value is missing in the API reference attributes, value and timestamp

2871 SHALL be missing in the response.

2872 A timeseries entry SHALL be generated at the server on a successful update[24] to an IoT Datapoint.

2873 NOTE 80 In case no update at all happened to an IoT Datapoint the response will be an empty payload.

2874 The server SHALL support to store at least one timeseries entry per IoT Datapoint, the total number is

2875 vendor specific.

2876 NOTE 81 The above requirement ensures that a client can unambiguously identify whether an IoT Datapoint was

2877 either never updated or whether the IoT Datapoint does not foresee storage capability for the timeseries

2878 entries at the server.


2879 1.2.5.7.1 Services

2880 It is possible to retrieve or set the following items.

2881 `GET /datapoints/{datapointId}/timeseries`

2882 Get a certain amount of IoT Datapoint timeseries items (at once).

2883 `GET /timeseries/{timeseriesId}`

2884 Get a single IoT Datapoint timeseries item from the pool of all items with id {timeseriesId}.

24 For the explanation of a successful update of an IoT Datapoint, please refer to the attributes section of an
IoT Datapoint in clause 1.3.2.4.


-----

2885 1.2.5.7.1.1 Read

2886 Read (successfully) a time series of an IoT Datapoint.
```
     GET http://gateway.knx.local/knx/api/v1/datapoints/dd1d82f7-68ef-4a19-9a37     16bafdc3d80d/timeseries HTTP/1.1

```
2887 Returns the following example response document content.
```
      data: // JSON API data member
       id: dd1d82f7-68ef-4a19-9a37-16bafdcb0000 // UUID of timeseries item
       type: timeseries // type of API Endpoint
       attributes: // JSON API attribute member
        value: "on" // value is present
        timestamp: 2021-02-17T17:17:17Z // last update
       relationships:
        timeseriesDatapoint: 
         links: 
          related: /timeseries/dd1d82f7-68ef-4a19-9a37-16bafdcb0000/datapoint
           // relative URL ref. to the place of assembly, shall be the UUID from <id> above

```
2888 **1.2.5.8** **Security**

2889 To defend against attackers intercepting confidential information, communication between a server
2890 endpoint and a client endpoint needs to be secured. For this, the following security aspects shall be
2891 considered:

2892 1. communication security (secure the client/server communication)

2893 2. authentication (validate the server identity, optionally the client that may be a user/device)

2894 3. authorization (set up corresponding access rights)

2895 The KNX IoT 3[rd] Party API SHALL provide secure access for a client in a local (LAN) or public (WAN)

2896 environment.

2897 A. On the public (internet) environment, where user-agents or operating systems do indeed trust a set
2898 of known certificate authorities, this is ensured via HTTPS with certificates that are issued by publicly
2899 known and trusted CAs. Point #1 from above is ensured with a shared secret to encrypt the
2900 communication, point #2 to authenticate the server, optionally also the client.

2901 B. However, for local (network) environments it is difficult to simply apply the WAN solution described
2902 above, especially to provide a globally unique DNS (local server) name for which one can proof
2903 ownership (to authenticate the server).

2904 The use cases in the next clause will illustrate that a client (service/installer/device) is generally a non
2905 trusted entity that should never have knowledge of the user/owner credentials.

2906 The framework described in this specification provides a way for the client to access the API on behalf of

2907 the user. When clients interact with the API, the user/owner first needs to grant access to the clients. The

2908 possible ways for a user to grant access to a client depends on the client capabilities and are described in

2909 the use cases below.

2910 1.2.5.8.1 Use Cases

2911 This specification covers the following general scenarios in which a KNX IoT 3[rd] Party Client can

2912 securely access the KNX IoT 3[rd] Party API.

2913 A. The KNX installation is hosted on a KNX IoT 3[rd] Party API Server, which is part of a local network (not

2914 exposed to the public internet).

2915 1. A user/owner wants to read/adjust some settings or register events in his own KNX installation.


-----

2916 2. An installer needs to add an external sensor device to write some datapoints of a KNX

2917 installation for diagnostic purposes, the access time is limited to 1h. The KNX installation is

2918 operated from a trusted party in a commercial building. The trusted party does not want to

2919 hand over any KNX installation credentials to the installer, letting him to enter them in the

2920 sensor device.

2921 B. The KNX installation exposed on the KNX IoT 3rd Party API is exposed to the public internet.

2922 1. An external service wants to get datapoint events from a user's KNX installation. The user/owner

2923 doesn’t want to enter his username/ password to access the KNX installation directly at a UI,

2924 controlled by the external service.

2925 1.2.5.8.2 Solution

2926 This specification borrows from/relies on the following RFCs and will refer to the following key terms

2927 and aspects with the same names as in the RFCs. Please refer to the corresponding RFC for more details.

2928 `o` Basic Authentication [RFC7617]

2929 `o` _Authorization header field [RFC7235]_

2930 `o` OAuth2 [RFC6749]

2931 `o` Resource Server, Authorization Server

2932 `o` Authorization Endpoint, Token Endpoint

2933 `o` Confidential Client, Public Client

2934 `o` Authorization Code Grant, Client Credentials Grant

2935 `o` Scopes


2936 It is RECOMMENDED to consider the Oauth2 security recommendations as laid down in

2937 [https://datatracker.ietf.org/doc/html/draft-ietf-oauth-security-topics.](https://datatracker.ietf.org/doc/html/draft-ietf-oauth-security-topics)

2938 `o` Bearer Token Usage [RFC6750]

2939 1.2.5.8.2.1 Server Architecture

2940 The OAuth2 specification does not impose the communication patterns (data and its format) to share

2941 necessary information between a resource server and an authorization server. As described in the OAuth2

2942 [RFC, section 1.1 this specification does not enforce that both server parts are combined in one KNX IoT](https://tools.ietf.org/html/rfc6749#section-1.1)

2943 3[rd] Party Server device, in OAuth2 terms it is in this case a plain resource server.

2944 In reverse this means that the authorization server respectively the involved OAuth2 endpoints can be

2945 hosted vendor specific, such as on a public vendor endpoint.

2946 NOTE 82 In this case the Open API Base URL respectively the authority part (see clause 1.2.4) shall be

2947 adapted for the desired OAuth2 endpoints, details see the electronic document (see clause 1.1.4).

2948 1.2.5.8.2.2 Client Registration

2949 The OAuth2 specification requires that a client is registered on the authorization server before the client

2950 can be granted access to the resources of the resource server. OAuth2 does not specify how to do this

2951 [registration, see RFC section 2.](https://tools.ietf.org/html/rfc6749#section-2)

2952 This specification does not define a mandatory procedure of such a client registration that all vendors

2953 would have to support. Every KNX vendor is free to choose his preferred registration method, the thereby

2954 performed steps and the corresponding toolchain thereby used.

2955 The authorization server SHALL support the following RFC aspects:

2956 - [The Client Authentication as specified in the RFC section 3.2.1.](https://datatracker.ietf.org/doc/html/rfc6749#section-3.2.1)

2957 NOTE 83 According to OAuth2 a client is of type confidential or public, implemented as a web

2958 [application, user-agent-based application or native application (for this see RFC section 2.1).](https://datatracker.ietf.org/doc/html/rfc6749#section-2.1)

2959 Depending on the chosen grant type and used client type the client identifier and/or password

2960 may be needed as part of a token request/authorization header.


2961 Hence, this means that a vendor interoperability for the process of registering KNX IoT 3[rd] Party Clients

2962 on the authorization server of different vendors is not foreseen.


-----

2963 1.2.5.8.2.3 Endpoints

2964 [The OAuth2 specification defines the required server protocol endpoints in RFC section 3, listed below.](https://datatracker.ietf.org/doc/html/rfc6749#section-3)

2965 `o` Authorization endpoint

2966 `o` Token endpoint

2967 Both protocol endpoints SHALL support the following Oauth2 functionality:

2968 1. The request parameter scope SHALL be supported.

2969 2. [The option to indicate an invalid scope in the response as specified in the RFC section 3.3, especially](https://datatracker.ietf.org/doc/html/rfc6749#section-3.3)

2970 when scopes are omitted in the client request to the endpoint.

2971 NOTE 84 Resource endpoints in this specification define scopes. An issued access token reflects one of the

2972 from client/ user initially requested access scopes (see clause 1.2.5.8.2.6.2).

2973 A default fallback scope is not defined in this specification, it is not intended to enable in addition a

2974 fallback access to some of the resource endpoints.

2975 1.2.5.8.2.3.1 Authorization endpoint

2976 The endpoint is used to interact with the resource owner and obtain an authorization grant. The endpoint

2977 is out of scope for this specification and therefore not specified in the category authorization of clause

2978 1.2.5, this is vendor specific.

2979 NOTE 85 In the electronic document (see clause 1.1.4) only an example resource path definition for the

2980 authorization endpoint is given; it is RECOMMENDED to follow the Oauth2 specification.

2981 The authorization endpoint SHALL support the following Oauth2 functionality:

2982 1. [The Authorization Code Grant as specified in the RFC section 4.1.](https://datatracker.ietf.org/doc/html/rfc6749#section-4.1)

2983 1.2.5.8.2.3.2 Token endpoint

2984 The endpoint is used by a client to exchange a user granted authorization, to obtain an access token for it.

2985 The endpoint is specified as an individual resource path in the category authorization of clause 1.2.5.

2986 The token endpoint SHALL support the following HTTP functionality:

2987 1. Support for passing the client credentials via the HTTP Basic authentication scheme as defined in the

2988 [RFC section 2.3.1 from the Oauth2 specification.](https://datatracker.ietf.org/doc/html/rfc6749#section-2.3.1)

2989 The token endpoint SHALL support the following Oauth2 functionality:

2990 1. [Client Credentials Grant with value client_credentials, specified in the RFC section 4.4.](https://datatracker.ietf.org/doc/html/rfc6749#section-4.4)

2991 2. [Authorization Code Grant with value authorization_code, specified in the RFC section 4.1.3.](https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.3)

2992 3. [Refreshing an issued access token with value refresh_token, specified in the RFC section 6.](https://datatracker.ietf.org/doc/html/rfc6749#section-6)

2993 - Both grant types from point 1 and 2 directly above MAY use this functionality, this depends

2994 whether the general client access is intended to last longer or is time limited (as in the use case

2995 A.2).

2996 NOTE 86 The RFC section 4.4.3 does not recommend this functionality for the client credentials grant.

2997 In a local environment it is (security wise) acceptable to generate a long-lasting access, see

2998 point below.

2999 4. On a successful request to issue an access token, the response parameter as described in RFC

3000 [section 5.1.](https://datatracker.ietf.org/doc/html/rfc6749#section-5.1)

3001 - The parameter expires_in SHALL be supported.

3002 It Is NOT RECOMMENDED to set up a very long (infinite) lifetime for an access token. If needed,

3003 this SHOULD be implemented with a long-lasting refresh token to update a (short life) access

3004 token.


-----

3005 NOTE 87 Any token with nearly infinite lifetime cannot be rejected, to disable it is vendor specific. For

3006 general recommendations of the token lifetime in relation to the security measures, see also

3007 the Oauth2 security considerations, referenced underneath the next table.

3008 The parameter default value used by the server is defined by the identity provider (authorization

3009 server). This depends on the security environment where the KNX IoT 3[rd] Party API Server

3010 operates in. It is NOT RECOMMENDED to implement any change of this parameter based on

3011 specific user needs, such as to achieve a user demanded individual expiration time for a specific

3012 access token. This may cause a security leak that would allow to overwrite the (carefully) chosen

3013 default value from the identity provider.

3014 An individual expiration for an access token needs to be resolved from the backend in addition

3015 with a custom defined scope expressing this time. For this see the example for the use case A.2.

3016 NOTE 88 The default parameter value shall always be larger than any possible time limitation

3017 defined with a custom scope.

3018 5. On a failed request to issue an access token, the response behavior (with error code `400 ) as`

3019 [described in RFC section 5.2.](https://datatracker.ietf.org/doc/html/rfc6749#section-5.2)

3020 - The behavior includes the wrong handling of scopes, undefined grant types and other.

3021 1.2.5.8.2.4 Workflow

3022 The general workflow consists of the following steps:

3023 1. Discover the KNX IoT 3[rd] Party Server.

3024 2. Establish a secure communication between KNX IoT 3[rd] Party Client/ Server.

3025 3. Authenticate the KNX IoT 3[rd] Party Client/ Server.

3026 4. Authorize the KNX IoT 3[rd] Party Client with a given user/owner grant.

3027 5. Access a protected resource on the KNX IoT 3[rd] Party Server.

3028 Depending on the local/public environment the steps from above may need to handle different framework

3029 parts or input data. As an overall result, access to the endpoints – specified in clause 1.2.5 – is granted on

3030 top of an established secure connection. It is vendor specific how to enable the KNX IoT 3[rd] Party Server

3031 in one or both environments.

3032 The underneath table lists the framework methods and their data for the different environments.

3033 **Table 15 – Security Workflow Steps**

|#|Steps|Local Environment (LAN)|Public Environment (WAN)|
|---|---|---|---|
|1|Discovery|See clause 1.2.6.2.|See clause 1.2.6.1.|
|2|Secure<br>Communication|The HTTP communication for all in clause 1.2.5 defined Endpoints SHALL be secured<br>with TLS v1.2 or higher.|The HTTP communication for all in clause 1.2.5 defined Endpoints SHALL be secured<br>with TLS v1.2 or higher.|
|3|Authentication|A server to client authentication is achieved by providing a server identity to the<br>client, usually resolved with server certificates. A client to server authentication uses<br>a client identity that depends on the security requirement for an application, for this<br>please see in next clauseAuthentication.|A server to client authentication is achieved by providing a server identity to the<br>client, usually resolved with server certificates. A client to server authentication uses<br>a client identity that depends on the security requirement for an application, for this<br>please see in next clauseAuthentication.|
|4|Authorization|**Token endpoint **<br>`o` <br>SHALL support Oauth2 grant type<br>_client_credentials_ <br>`o` <br>the support of Oauth2 grant type<br>_authorization_code_is OPTIONAL|**Token endpoint **<br>`o` <br>SHALL support Oauth2 grant type<br>_authorization_code_ <br>`o` <br>the support of Oauth2 grant type<br>_client_credentials_is OPTIONAL|


-----

|#|Steps|Local Environment (LAN)|Public Environment (WAN)|
|---|---|---|---|
|5|Access|**Resource endpoints **<br>`o` <br>SHALL support an authorized access with the framework_Bearer Token Usage_ <br>`o` <br>token type, see clause 1.2.5.8.2.6.1<br>`o` <br>token scope, see clause 1.2.5.8.2.6.2<br>`o` <br>token transport, see clause 1.2.5.8.2.6.3|**Resource endpoints **<br>`o` <br>SHALL support an authorized access with the framework_Bearer Token Usage_ <br>`o` <br>token type, see clause 1.2.5.8.2.6.1<br>`o` <br>token scope, see clause 1.2.5.8.2.6.2<br>`o` <br>token transport, see clause 1.2.5.8.2.6.3|


3034 The following resource path definitions SHALL be accessible without any scope as specified in clause

3035 1.2.5.8.2.6.2. Moreover, this specification does not define an additional authentication to access the below

3036 resource path definitions, this is vendor specific (such as to use on these Endpoints an additional HTTP

3037 Authorization header field, representing a logged in user).

3038 1. category authorization // Secure Communication (and opt. vendor Authentication)

3039 - `/oauth/access`

3040 2. category information // Secure Communication (and opt. vendor Authentication)

3041 - `/.well-known/knx`

3042 - `/.well-known/idevid`

3043 - `/.well-known/ldevid`

3044 1.2.5.8.2.5 Authentication

3045 Authentication confirms the identity of a communication partner; it is a common practice to gain security.

3046 The underneath table lists the different identities, used for the public/local environment.

3047 **Table 16 – Environment Authentication Details**

**Public Environment (WAN)** **Local Environment (LAN)**

Client How the client identity is expressed, this depends on the chosen Oauth2 grant type.

_authorization_code_

           - client identity is expressed with an authorization code, the code is generated based on a log
in of the resource owner with his username/ password

_client_credentials_

           - client identity is expressed with client credentials, the credentials are preregistered with
client_id and client_secret

The client identity is transported either as part of the payload or as part of the Basic Authentication
framework[25].

Server The server identity SHALL be achieved with The server identity SHALL be achieved with a

**DNS oriented X.509v3 certificate, provided** **Device oriented X.509v3 certificate, provided by**
from a CA. It is used for each (public) vendor a vendor. It is used for each vendor KNX IoT 3[rd]
KNX IoT 3[rd] Party API Endpoint, as part of the Party Server, as part of the Secure
Secure Communication (together with TLS). Communication (together with TLS).

Certificate The IdevID certificate reflects a factory imprinted certificate, it serves as an initial proof-ofidentity, mainly used during a bootstrapping process. The LdevID certificate reflects an
operational certificate, it is mainly used to identify a device on a specific network (security zone).

           - This specification does not require a (root) CA that issues certificates, necessary for all KNX
vendors. Hence, each vendor shall create his own CA to issue his own vendor specific
certificates for his server Endpoints.

           - This specification does not define how to configure a LdevID certificate at the server.

25 A mutual authentication from client to server, directly on the level of TLS is not demanded.

|Col1|Public Environment (WAN)|Local Environment (LAN)|
|---|---|---|
|Client|How the client identity is expressed, this depends on the chosen Oauth2 grant type.<br>_authorization_code_ <br>• <br>client identity is expressed with an authorization code, the code is generated based on a log<br>in of the resource owner with his username/ password<br>_client_credentials_ <br>• <br>client identity is expressed with client credentials, the credentials are preregistered with<br>client_id and client_secret<br>The client identity is transported either as part of the payload or as part of the_Basic Authentication_ <br>framework25.|How the client identity is expressed, this depends on the chosen Oauth2 grant type.<br>_authorization_code_ <br>• <br>client identity is expressed with an authorization code, the code is generated based on a log<br>in of the resource owner with his username/ password<br>_client_credentials_ <br>• <br>client identity is expressed with client credentials, the credentials are preregistered with<br>client_id and client_secret<br>The client identity is transported either as part of the payload or as part of the_Basic Authentication_ <br>framework25.|
|Server|The server identity SHALL be achieved with<br>**DNS** oriented X.509v3 certificate, provided<br>from a CA. It is used for each (public) vendor<br>KNX IoT 3rd Party API Endpoint, as part of the<br>Secure Communication (together with TLS).|The server identity SHALL be achieved with a<br>**Device** oriented X.509v3 certificate, provided by<br>a vendor. It is used for each vendor KNX IoT 3rd <br>Party Server, as part of the Secure<br>Communication (together with TLS).|
|Certificate|The IdevID certificate reflects a factory imprinted certificate, it serves as an initial proof-of-<br>identity, mainly used during a bootstrapping process. The LdevID certificate reflects an<br>operational certificate, it is mainly used to identify a device on a specific network (security zone).<br>• This specification does not require a (root) CA that issues certificates, necessary for all KNX<br>vendors. Hence, each vendor shall create his own CA to issue his own vendor specific<br>certificates for his server Endpoints.<br>• This specification does not define how to configure a LdevID certificate at the server.|The IdevID certificate reflects a factory imprinted certificate, it serves as an initial proof-of-<br>identity, mainly used during a bootstrapping process. The LdevID certificate reflects an<br>operational certificate, it is mainly used to identify a device on a specific network (security zone).<br>• This specification does not require a (root) CA that issues certificates, necessary for all KNX<br>vendors. Hence, each vendor shall create his own CA to issue his own vendor specific<br>certificates for his server Endpoints.<br>• This specification does not define how to configure a LdevID certificate at the server.|


-----

|Col1|Public Environment (WAN)|Local Environment (LAN)|
|---|---|---|
||The IdevID and LdevID certificate SHALL support the certificate extension SAN field, as a copy of<br>the CN of subject name (as a note, the use of subject name field only is deprecated). Other<br>certificate extensions are OPTIONAL.|The IdevID and LdevID certificate SHALL support the certificate extension SAN field, as a copy of<br>the CN of subject name (as a note, the use of subject name field only is deprecated). Other<br>certificate extensions are OPTIONAL.|
||• The LdevID certificate SHALL be supported.<br>• The IdevID certificate is not applicable.<br>The certificate SHALL contain at least the<br>basic certificate fields as specified in<br>[RFC5280], including:<br>• tbsCertificate (to be signed content) <br>`o` version<br>// SHALL be version 3<br>`o` serialNumber// certificate serial number <br>`o` signature<br>// same as signatureAlgorithm <br>`o` issuer<br>// vendor specific <br>`o` validity<br>// vendor specific<br>`o` subject<br>// vendor specific <br>`o` subjectPublicKeyInfo<br>• signatureAlgorithm<br>// vendor specific <br>• signatureValue <br>As a note, none of the certificate content is<br>imposed by this specification.|• The LdevID certificate MAY be supported.<br>• The IdevID certificate SHALL be supported.<br>The certificate SHALL contain at least the basic<br>certificate fields as specified in [802.1AR],<br>including:<br>• tbsCertificate (to be signed content) <br>`o` version<br>// SHALL be version 3<br>`o` serialNumber// certificate serial number <br>`o` signature<br>// same as signatureAlgorithm <br>`o` issuer; O=[Manufacturer] CN=[Manufacturer CA]<br>// manufacturer and vendor MAY be different<br>// for OEM reasons <br>`o` validity; Not After : Dec 31 23:59:59 9999 GMT<br>//**IdevID** certificate GeneralizedTime [X.509]<br>`o` subject; O=[Vendor] CN=[Product ID]<br>serialNumber=[_KNX Serial Number_] <br>// for**IdevID/ LdevID** certificate <br>`o` subjectPublicKeyInfo<br>• signatureAlgorithm<br>//**IdevID** certificate SHALL be ecdsa-with-SHA256<br>and secp256r1<br>//**IdevID** certificate same as IdevID or<br>TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8<br>[RFC7251] <br>• signatureValue <br>The certificate shares the same content as the <br>IdevID manufacturer device certificate, used for<br>the KNX IoT Point API devices.<br>In case no (operational) LdevID certificate is<br>configured, the KNX IoT 3rd Party API server<br>SHALL use the IdevID certificate for the Secure<br>Communication (TLS session).<br>LdevID certificates SHALL be dropped in case of<br>vendor specific, local device reset of the KNX IoT<br>3rd Party API server.<br>LdevID certificates SHALL NOT use of wildcards in<br>the subject CN or SAN extension field, moreover<br>the certificate SHALL not include more than one<br>SAN extension field.<br>NOTE 89<br>An individual LdevID certificate belongs only<br>to one network security zone.|


3048 1.2.5.8.2.6 Token

3049 The Oauth2 specification defines two token characteristics. The access token contains information about

3050 an authorization grant that is expressing different permission levels, it is intended to be used for accessing

3051 protected resources on a resource server. A refresh token allows refreshing an access token.


-----

3052 1.2.5.8.2.6.1 Token Type

3053 [The Oauth2 specification recommends some access token types, see RFC section 7.1. This specification](https://datatracker.ietf.org/doc/html/rfc6749#section-7.1)

3054 mandates that the access token type SHALL be in the format "Bearer" [RFC6750].

3055 NOTE 90 A bearer token is simply a string, it has no further intrinsic meaning to express token content such as it

3056 is possible with JWT [RFC7519]. The token owner has an entitled claim in an application using this

3057 token, only the application is aware which claims.

3058 Hence, a vendor - when accessing a KNX IoT 3rd Party API from another vendor - does not

3059 automatically understand the "Bearer" token content.

3060 This specification does NOT RECOMMEND that the token type is in the format of a UUID (this

3061 weakens the security because of predictable format and content).

3062 1.2.5.8.2.6.2 Token Scopes

3063 The OAuth2 defines the optional usage of scopes; a scope may be a lifetime of an access token or a

3064 specific access/permission on a resource based on the given scope (as in this specification). In general a

3065 [client request may ask for any scope, as described in the RFC section 3.3, it is subject to the authorization](https://tools.ietf.org/html/rfc6749#section-3.3)

3066 server to fully or partially ignore the requested scope (such as based on the authorization server policy or

3067 the resource owner's instructions).

3068 In case a request fails because of an invalid scope, the server SHALL respond with error code 403,

3069 optionally including an error object applied to this response (see clause 1.2.1.6.6). This covers the below

3070 predefined scopes together with their corresponding resource path definitions, but also KNX

3071 manufacturer specific scopes and the resource path definitions used there.

3072 Scopes can be found for each resource path definition in the electronic document (see clause 1.1.4)

3073 The following scope request parameter values SHALL be supported, they can be found for each resource

3074 path definition also in the electronic document (see clause 1.1.4). Mentioned categories with their

3075 resource path definitions are specified in clause 1.2.5:

3076 `read` Allows to read resources.

3077 categories: datapoint, device, function, information, _location, timeseries_

3078 `write` Allows to write resources supporting a write access method.

3079 categories: datapoint

3080 `manage` Manages extended functionality of the KNX IoT 3[rd] Party API, currently this scope only covers

3081 the WebSocket and HTTP Callback Subscriptions.


3082 NOTE 91 Any resources related to a subscription cannot be read without having this scope, this

3083 includes also to read datapoints that belong to an individual subscription (moreover a user

3084 without this scope would not be able to get an individual {subscriptionId}, required for this

3085 endpoint).

3086 categories: subscription

3087 Multiple scopes can be defined per individual request, with this an overall requested authorization scope

3088 can be generated as a superset of each individual scope described above.

3089 NOTE 92 It is not necessary to define for each intended access combination an (own) individual scope or to

3090 define an existing scope from above to inherit other existing scopes. Some scope combinations:

3091 - requested client scope: read `write`


3092 Allows the client/ user to access all resource path definitions with a read OR write scope

3093 applied. The write scope is currently only used to update/write datapoint values.

3094 - requested client scope: read `manage`

3095 Allows the client/ user to access all resource path definitions with a read OR manage scope

3096 applied. The manage scope is currently only used to maintain subscriptions.


-----

3097 - requested client scope: read `write` `manage`

3098 Allows the client/ user to access all resource path definitions with a read OR write OR manage

3099 scope.

3100 This specification does not define any further scope, other scopes are vendor specific. Depending on the

3101 used grant type they are expressed with a vendor-related authorization code from the authorization

3102 endpoint or directly as part of the request at the token endpoint.

3103 EXAMPLE 41 A user is limited in his ability to interact with the API, such as to read only location resources.

3104 Hence, KNX IoT 3rd Party Clients cannot rely on an expected entire scope interoperability when

3105 accessing the KNX IoT 3rd Party API on a KNX IoT 3rd Party Server from a different vendor.

3106 1.2.5.8.2.6.3 Token Transport

3107 The OAuth2 specification does not impose a specific method how a client utilizes the retrieved access

3108 token to a resource server to access protected resources. This depends also on the token type, see RFC

3109 [section 7. With the use of a "Bearer" common methods according [RFC6750] are:](https://datatracker.ietf.org/doc/html/rfc6749#section-7)

3110 1. [HTTP authorization request header (RFC, section 2.1),](https://tools.ietf.org/html/rfc6750#section-2.1)

3111 2. [form encoded parameter (RFC, section 2.2)](https://tools.ietf.org/html/rfc6750#section-2.2)

3112 3. [query parameter (RFC, section 2.3).](https://tools.ietf.org/html/rfc6750#section-2.3)

3113 This specification mandates that a KNX IoT 3[rd] Party Server SHALL support the first transport type only.


3114 EXAMPLE 42 A request to a protected resource with a token in format "Bearer", part of the authorization request

3115 header.

3116 `// read all installations (path to a specific user is omitted)`

3117 `GET /installations HTTP/1.1`

3118 `Host: customerinstallations.knx.org`

3119 `Authorization: Bearer BearerToken` `// weak example`

3120 1.2.5.8.2.7 Interoperability

3121 Replacing a KNX IoT 3[rd] Party Server from vendor A with vendor B in a public environment is only

3122 possible when changing also other parts of the ecosystem:

3123 - the KNX IoT 3[rd] Party Server with its vendor-specific Endpoint service (URL)

3124 - the vendor-specific client registration tool chain

3125 - the described authorization endpoint functionality

3126 - possible vendor specific scopes

3127 - a vendor-specific App[ 26)] used to visualize data of the KNX Installation and possible data from

3128 other sources (such as news/feeds from his company), it is a vendor decision to support an App

3129 - a web interface used to visualize data of the KNX Installation with a generic (Firefox) browser, it

3130 is a vendor decision to support this interface in his KNX IoT 3rd Party Server

3131 The same holds true also for the local environment, but here with less effort.

3132 Consequently, the interoperability expected in a possible replacement scenario as it is available in KNX

3133 Classic cannot be achieved. Example given, replacing today a broken KNX Classic secure interface in a

3134 KNX Installation allows to configure the new interface with the same configuration methods and same

3135 (client) registration tool (MaC ETS) for each vendor. Every already available external client such as a

3136 visualization remains the same. How to handle possible scopes in the interfaces is also specified (different

3137 users with their credentials have different access to the KNX Installation functionality/ Group Addresses).

3138 Only in case of having a public KNX IoT Endpoint service for all KNX IoT 3rd Party Servers (from each

3139 vendor) would dramatically simplify some of the mentioned problems. Such a single service (for example

3140 hosted by the KNX Association) is currently not foreseen.

26) A generic viewer app from the KNX Association is not planned.


-----

3141 1.2.5.8.3 Services

3142 It is possible to retrieve the following items.

3143 POST /oauth/access

3144 Get an authorization grant in the form of an access token from the KNX IoT 3[rd] Party API server.

3145 The Content-Type for this Endpoint is specified as follows:

3146 - for the request with application/x-www-form-urlencoded

3147 - for the response with application/json.

3148 GET /.well-known/idevid

3149 Get KNX IoT 3[rd] Party API server device manufacture default setup (IDevID) certificate.

3150 The Endpoint MAY be used from a MaC to present the user/ installer some certificate content (such as

3151 the KNX SN) to validate during a Configuration the server identity with a proof-of-possession

3152 (ownership).

3153 The Content-Type for this Endpoint is specified with application/pkcs7-mime.

3154 The basic response information contains the certificate content, expressed with the format of smime
3155 type=certs-only; binary DER encoded.

3156 For further information of certificate types, their content and how to handle them, please refer to clause

3157 1.2.5.8.2.5

3158 GET /.well-known/ldevid

3159 Get KNX IoT 3[rd] Party API server operational device (LDevID) certificate.

3160 The Content-Type for this Endpoint is specified with application/pkcs7-mime.

3161 The basic response information contains the certificate content, expressed with the format of smime
3162 type=certs-only; binary DER encoded.

3163 For further information of certificate types, their content and how to handle them, please refer to clause

3164 1.2.5.8.2.5

3165 1.2.5.8.4 Examples

3166 The following possible aspects of the described use cases shall be solved with other means.

3167 1. The user/owner wants to limit the datapoints of the KNX Installation which an Installer or

3168 external service can access (read/write/generate notifications).

3169 _With the token scopes defined in this specification only a separation between a_

3170 _read/write/subscribe functionality of all available datapoints of the KNX Installation is possible._


-----

3171 1.2.5.8.4.1 Use Case A.1

3172 The use case can be solved with the following steps.

3173


**_Resource Owner_**


**Browser/**
**KNX IoT 3** **[rd]** **Party API**
**Configura�on Tool**

|Col1|Generate access token|
|---|---|

|Col1|Col2|Col3|Log In<br>Generate access token<br>Return access token|Col5|
|---|---|---|---|---|
||||**_Log In_**|**_Log In_**|
||||||
||||||
||||**_Return access token_**|**_Return access token_**|
||||||
||||**_Access resources (write datapoint)_**||


3174 **Figure 6 – Access workflow in a local environment, use case A.1.**

3175 (1) The Resource Owner logs into the KNX IoT 3[rd] Party API Server with his username/ password.

3176 (2) The KNX IoT 3[rd] Party API Server requests the Authorization Server to generate an access token.


3177 - The request includes the grant type client_credentials

3178 - The request includes the write, read and manage scope (defined in this specification) which


3179 addresses the use case limitation that the generated access token will allow a full access to all

3180 endpoints.


3181 **Client Request**

3182 `/*`


3183 `An HTTPS request from a confidential client to the authorization server,`

3184 `using the pre-registered client credentials with`

3185 `base64<client_id:client_secret>. As a note, the client credentials are`

3186 `different from the resource owners username/ password. The client (aka`

3187 `KNX IoT 3[rd] Party API Server) is a web server, in OAuth2 terms this is a`

3188 `confidential client type with a web application client profile.`

3189 `*/`


3190 `POST /oauth/access HTTP/1.1`

3191 `Host: 1499602D2.local`

3192 `Authorization: Basic <client credentials>`

3193 `Content-Type: application/x-www-form-urlencoded`

3194 `grant_type=client_credentials&scope=write read manage`


3195 (3) The Authorization Server returns the access token to the KNX IoT 3[rd] Party API Server respectively

3196 _Resource Owner (this allows to display the granted access permission and/or corresponding_


3197 endpoints on the browser/configuration tool, most likely not the token as such).

3198 **Server Response**


3199 `HTTP/1.1 200 OK`

3200 `Content-Type: application/json;charset=UTF-8`

3201 `Cache-Control: no-store`

3202

3203 `{`

3204 `"access_token":"AccessToken",` `// weak example`

3205 `"token_type":"Bearer",`


-----

3206 `"expires_in":7200`

3207 `// example value, see notes on this parameter in clause 1.2.5.8.2.6.3`

3208 `}`

3209 `// according to the use case a refresh token is not desired`

3210 (4) The Resource Owner accesses the Resource Server with the access token as authorization.


3211 `// write timing datapoint(s) (path to a specific user is omitted here)`

3212 `PUT /datapoints/values HTTP/1.1`

3213 `Host: 1499602D2.local`

3214 `Authorization: Bearer AccessToken` `// weak example`

3215 `…`

3216 1.2.5.8.4.2 Use Case A.2


3217 The use case can be solved with the following steps.

**_Installer_** **_Trusted Party_**


**Building**
**KNX IoT 3** **[rd]** **Party API**
**Maintenance Tool**

|Device|KNX IoT 3rd<br>Party Client|
|---|---|


3218

3219 **Figure 7 – Access workflow in a local environment, use case A.2**

|Provide access token<br>Access re|Col2|Col3|Log In<br>Generate access token|Col5|
|---|---|---|---|---|
|**_Provide access token_**<br>**_Access re_**|**_Provide access token_**<br>**_Access re_**||**_Return access token_**||
|**_Provide access token_**<br>**_Access re_**|**_Provide access token_**<br>**_Access re_**||**_ sources (write datapoint)_**||
|**_Provide access token_**<br>**_Access re_**|**_Access re_**|**_Access re_**|**_ sources (write datapoint)_**|**_ sources (write datapoint)_**|


3220 (1) The Trusted Party logs into the KNX IoT 3[rd] Party API Server with his username/ password.

3221 (2) The KNX IoT 3[rd] Party API Server requests the Authorization Server to generate an access token.

3222 - The request includes the grant type client_credentials


3223 - The request includes the write scope (defined in this specification) which addresses the use

3224 case limitation that the generated access token will allow only to write datapoints.


3225 - The request includes the time_3600 scope (as an example, defined by the trusted party, no

3226 subject to this specification) which addresses the use case limitation that the generated


3227 access token will expire after one hour.

3228 In this workflow the already specified client credential flow is used, however this is vendor


3229 specific.

3230 **Client Request**


3231 `/*`

3232 `A HTTPS request from a confidential client to the authorization server,`

3233 `using the pre-registered client credentials with`

3234 `base64<client_id:client_secret>. As a note, the client credentials are`

3235 `different from the resource owners username/ password. The client (aka`

3236 `KNX IoT 3[rd] Party API Server) is a web server, in OAuth2 terms this is a`

3237 `confidential client type with a web application client profile.`


3238 `*/`


-----

3239 `POST /oauth/access HTTP/1.1`

3240 `Host: 1499602D2.local`

3241 `Authorization: Basic <client credentials>`

3242 `Content-Type: application/x-www-form-urlencoded`

3243 `grant_type=client_credentials&scope=write time_3600`


3244 (3) The Authorization Server returns the access token to the KNX IoT 3[rd] Party API Server respectively

3245 _Trusted Party (such as with a redirect to display it on the building maintenance tool)._


3246 **Server Response**

3247 `HTTP/1.1 200 OK`

3248 `Content-Type: application/json;charset=UTF-8`

3249 `Cache-Control: no-store`

3250

3251 `{`

3252 `"access_token":"AccessToken",  // weak example`

3253 `"token_type":"Bearer",`

3254 `"expires_in":7200,`

3255 `// example value, the expiration (1h) req. from use case is handled by`

3256 `// the backend, see notes on this parameter in clause 1.2.5.8.2.6.3`

3257 `}`

3258 `// according to the use case a refresh token is not desired, the scope`

3259 `// does not need to be in the response (same as in request, see in RFC)`


3260 (4) The Trusted Party provides the access token to an Installer by any means.

3261 (5) The Installer applies the retrieved access token to the Device by any means.


3262 (6) The Device accesses the Resource Server with the access token as authorization.

3263 `// write some datapoint(s) (path to a specific user is omitted here)`

3264 `PUT /datapoints/values HTTP/1.1`

3265 `Host: 1499602D2.local`

3266 `Authorization: Bearer AccessToken` `// weak example`

3267

3268 `…`


3269 1.2.5.8.4.3 Use Case B.1

3270 The use case can be solved with the following steps.

**KNX IoT 3[rd]**
**External Service** **Party Client**

**_ask for permission_**

**_Provide authorization code_**

3271


**_Resource Owner_**


**Browser**
**KNX IoT 3** **[rd]** **Party API**

|External Service|KNX IoT 3rd<br>Party Client|
|---|---|

|Confirms permission|Col2|
|---|---|

|Read acc|ess token|
|---|---|

|Read acc|Confirms permission<br>ess token|
|---|---|
|**_Access re_**|**_ sources (create subscripton)_**|


3272 **Figure 8 – Access workflow in a public environment**

3273 (1) The External Service asks the Resource Owner for access permission to subscribe to datapoint


3274 events of his KNX installation.


-----

3275 (2) The Resource Owner confirms this to the Authorization Server with a username/ password log in

3276 on his browser, on a page provided from the Authorization Server.

3277 (3) The Authorization Server provides an authorization code to the External Service.

3278 (4) The External Service Server requests the Authorization Server to generate an access token.

3279 - The request includes the grant type authorization_code.

3280 - The request includes the authorization code, which expresses the use case limitation that the

3281 generated access token will allow only to write datapoints.

3282 **Client Request, Option 1**

3283 `/*`

3284 `A HTTPS request from a confidential client to the authorization server,`

3285 `using the pre-registered client credentials with`

3286 `base64<client_id:client_secret>. As a note, the client credentials are`

3287 `different from the resource owner’s username/ password. For the option 1`

3288 `the client (aka external service) may be a web server, in OAuth2 terms a`

3289 `confidential client type with a web application client profile.`

3290 `*/`


3291 `POST /oauth/access HTTP/1.1`

3292 `Host: customerinstallations.knx.org`

3293 `Authorization: Basic <client credentials>`

3294 `Content-Type: application/x-www-form-urlencoded`

3295 `grant_type=authorization_code&code=WeakAuthorizationCodeTokenExample`

3296 `&redirect_uri=https%3A%2F%2Faddedvalue%2Egira%2Ede%2Fknxnotifications`


3297 **Client Request, Option 2**

3298 `/*`

3299 `A HTTPS request from a public client to the authorization server,`

3300 `using the pre-registered client_id. As a note, the client_id is different`

3301 `from the resource owner’s username. For the option 2 the client (aka`

3302 `external service) may be a MaC ETS, in OAuth2 terms a public client type`

3303 `with a native application client profile.`


3304 `*/`

3305 `POST /oauth/access HTTP/1.1`

3306 `Host: customerinstallations.knx.org`

3307 `Content-Type: application/x-www-form-urlencoded`


3308 `grant_type=authorization_code&code=WeakAuthorizationCodeTokenExample`

3309 `&redirect_uri=https%3A%2F%2Faddedvalue%2Egira%2Ede%2Fknxnotifications`

3310 `&client_id=xyz`

3311

3312 **Server Response**


3313 `HTTP/1.1 200 OK`

3314 `Content-Type: application/json;charset=UTF-8`

3315 `Cache-Control: no-store`

3316

3317 `{`

3318 `"access_token":"AccessToken",` `// weak example`

3319 `"token_type":"Bearer",`

3320 `"expires_in":3600,`

3321 `"scope":"manage",`

3322 `"refresh_token":"RefreshToken",` `// weak example`

3323 `}`


-----

3324 (5) The External Service accesses the Resource Server with the access token as authorization.

3325 `// generate subscription and wait … (path to a specific user is omitted)`

3326 `// the datapoint {ids} shall be known, this part is omitted here`

3327 `POST /subscriptions HTTP/1.1`

3328 `Host: customerinstallations.knx.org`

3329 `Authorization: Bearer AccessToken` `// weak example`

3330

3331 `…`

3332 `// request payload body, see HTTP Callback subscription`


3333 **1.2.6** **Discovery**

3334 Discovery serves the user’s need to find an intended communication partner within a specific network

3335 environment. Technically the user’s client needs to know the corresponding IP address of its

3336 communication partner, practically a user knows only the host name (or URL).

3337 NOTE 93 Colloquially an URL that is addressing resources on a host is often used as synonym for a host.

3338 The resolving of a host name to an IP address is done in the domain of internet (WAN) with publicly

3339 available DNS services and in the domain of a local network (LAN) mostly - but not exclusively - with

3340 mDNS services. After this, a request to the resource path /.well known/knx of the KNX IoT 3[rd] Party

3341 Server can be performed.

3342 - The host name may be known in advance to the client such as a from a QR code, scanned from a

3343 device label or as list retrieved from an administration tool (as part of an installer procedure).

3344 - The URL may be preconfigured in the client or known to the user.

3345 **1.2.6.1** **Discovery on WAN**

3346 For connecting to a KNX IoT 3[rd] Party API in a WAN environment, a vendor specific public URL

3347 SHALL be provided out of band to the KNX IoT 3[rd] Party Client.

3348 **1.2.6.2** **Discovery on LAN**

3349 For connecting to a KNX IoT 3[rd] Party API in a LAN environment, the KNX IoT 3[rd] Party Server SHALL

3350 support mDNS [RFC6762] and DNS-SD [RFC6763]. DNS based discovery on unicast is OPTIONAL.

3351 Discovery of a KNX IoT 3[rd] Party Server with /.well-known/core as described for KNX IoT Point API

3352 with [RFC6690] using unicast or multicast communication is OPTIONAL.

3353 NOTE 94 If implemented, the CoRE Link Format [RFC5988] on this resource path SHALL be supported and

3354 as regards content the /.well-known/knx Endpoint as described in clause 1.2.5.1.1 SHALL be given.

3355 Communication between different subnets is part of the infrastructure installation for IP communication

3356 and not in scope here.

3357 NOTE 95 mDNS can offer proxy information which offers access to other subnets if corresponding routes have

3358 been added and DHCP has offered the corresponding gateway.

3359 - To discover services, their providing host and finally the IP addresses DNS-SD shall be always

3360 based on some (m)DNS based implementation.

3361 - The general discovery steps are described underneath.

3362 **1.** **Service Instance Enumeration**

3363 Query the service instances supporting a KNX based (KNX IoT 3[rd] Party API) service.

3364 - A DNS-SD network query request in form of <service>.<domain> returns a DNS record with a

3365 service instance name in the form of <instance>.<service>.<domain>.

3366 The structured convention for the service instance name and its order in the result is specified

3367 respectively recommended in the RFC. All parts are valid DNS names.


-----

3368 - The <service> name is defined as _knx._tcp using the subcategory filtering defined with

3369 _restapi._sub, [see RFC section 7.1. This method has some major advantages.](https://datatracker.ietf.org/doc/html/rfc6763#section-7.1)

3370 The <service> name is a (KNX) - generic label, it allows to search all (TCP based) KNX services in

3371 one request, no need to take care of predefined names/ wildcards, part of this label (such as _knx
3372 **3rdparty._tcp).**

3373 `o` Specific KNX services (such as the KNX IoT 3rd Party API service) can be built on top

3374 of the generic label, the service sub structing is free from KNX based general services on

3375 udp/ tcp.

3376 An IANA registration is only needed for the generic <service> name.

3377 A more detailed sub structured service discovery MAY be added by a vendor, such as to directly

3378 detect vendor devices supporting the API service, such as with _vendor._restapi._sub.

3379 - The <domain> name is defined as .local

3380 - Filtering on this only returns all services in a local network domain from any vendor.

3381 NOTE 96 The .local domain expresses only a local network environment, not a specific local host address.

3382 - The <instance> name identifies instances that supports a service, here a KNX TCP based (KNX IoT

3383 3[rd] Party API) service.

3384 The chosen name SHALL respect the RFC section 4.1.1. It is defined as hexadecimal formatted KNX

3385 Serial Number, UTF-8 encoded. Examples see below.


3386 NOTE 97 In a configured project a vendor client may need to discover devices/ services according to other

3387 parameters as specified here for the <instance> (which is representing a device factory default

3388 setup value). For such cases it is RECOMMENDED to add further <instance> (and/or host) names

3389 to the device instead of overwriting the default ones. This allows a generic client to discover all

3390 devices according to their factory default setup such as when reading a printed QR code from a

3391 client.

3392 EXAMPLE 43 Discover KNX services in a local network.

3393 Query with <service> name _knx._tcp.local returns a list of KNX based services.

3394 `1.` `0001499602D2._knx._tcp.local` `// a KNX service instance, vendor siemens, #1234567890`

3395 `2.` `0264499602D2._knx._tcp.local` `// a KNX service instance, vendor ampio, #1234567890`

3396 `3.` `026400000001._knx._tcp.local` `// a KNX service instance, vendor ampio, #1`

3397 `4.` `ets-discover-1._knx._tcp.local` `// a KNX service instance, tooling, no API relation`

3398 `5.` `ets-license-01._knx._tcp.local` `// a KNX service instance, licensing, no API relation`

3399 `6.` `…`


3400 Query with <service> name _restapi._sub._knx._tcp.local returns a list of KNX IoT 3[rd] Party API based

3401 services.

3402 `1.` `0001499602D2._knx._tcp.local` `// a KNX service instance, vendor siemens, #1234567890`

3403 `2.` `0264499602D2._knx._tcp.local` `// a KNX service instance, vendor ampio, #1234567890`

3404 `3.` `026400000001._knx._tcp.local` `// a KNX service instance, vendor ampio, #1`

3405 `4.` `…`

3406 **2.** **Service Instance Server Information**

3407 Query the corresponding server information of services instances.

3408 Response

3409 - SRV record  includes the server host name and port

3410 - A, AAAA records  SHOULD[ 27)] be included with related IP addresses (see example below)

3411 - NS/TXT records  MAY be included with additional data

3412 EXAMPLE 44 Resolve service instance server information in a local network.

27) The RFC section 12 RECOMMENDS this, such as for efficiency reasons. In cases where the address information is not included, step 3 shall
be performed additionally.


-----

3413 Query with <service> name 0001499602D2._knx._tcp.local returns the following server information.

3414 `Answer Section`

3415 `0001499602D2._knx._tcp.local. 604800 IN SRV 0 0 80 0001499602D2.local.` `// host + port`

3416 `0001499602D2._knx._tcp.local. 604800 IN TXT "txtvers=1 path=/"`

3417

3418 `Additional Section`


3419 `0001499602D2.local.` `604800 IN` `A` `127.1.1.1` `// IPv4`

3420 `local.` `604800` `IN` `A` `127.0.0.1`

3421 `0001499602D2.local.` `604800` `IN` `AAAA` `::1:1:1` `// IPv6`

3422 `local.` `604800` `IN` `AAAA` `::1`

3423 `…`

3424 **3.** **Server Address Information**

3425 Query the corresponding server IP address information with mDNS for a known host name.

3426 - The KNX IoT 3[rd] Party Server SHALL support a unicast host communication over at least one port.

3427 The port can be selected without limitations, it is RECOMMENDED to respect the used protocol and

3428 its well-known ports.

3429 - The host name SHALL be specified with the <instance> name, appended with ".local".

3430 NOTE 98 As already mentioned, host names may be provided by several means to a client, not only as a

3431 result of performed steps 1 and 2 from above. Moreover, also further host names may be used for a

3432 device (see step 1).


3433 Response

3434 - A, AAAA records  includes the corresponding server IP address information

3435 - NS record  MAY be included with additional data

3436 EXAMPLE 45 Discover addresses of a KNX device host in a local network.

3437 Query with host name 1499602D2.local returns the following server address information.

3438 `Answer Section`

3439 `0001499602D2.local.` `604800 IN` `A` `127.1.1.1` `// IPv4`

3440 `0001499602D2.local.` `604800` `IN` `AAAA` `::1:1:1` `// IPv6`

3441 `…`


-----

